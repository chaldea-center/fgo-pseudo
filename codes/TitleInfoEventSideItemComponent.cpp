void __fastcall TitleInfoEventSideItemComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Int32_array **v21; // x19
  __int64 v22; // x0
  System_Int32_array **v23; // x1
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  struct TitleInfoEventSideItemComponent_StaticFields *static_fields; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  struct TitleInfoEventSideItemComponent_StaticFields *v46; // x0
  System_Int32_array **v47; // x1
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7

  if ( (byte_40F83B5 & 1) == 0 )
  {
    sub_B16FFC(&string___TypeInfo, v1);
    sub_B16FFC(&TitleInfoEventSideItemComponent_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_22600/*"time_status_side_04"*/, v4);
    sub_B16FFC(&StringLiteral_22597/*"time_status_side_01"*/, v5);
    sub_B16FFC(&StringLiteral_22599/*"time_status_side_03"*/, v6);
    sub_B16FFC(&StringLiteral_21411/*"point_status_side"*/, v7);
    sub_B16FFC(&StringLiteral_22598/*"time_status_side_02"*/, v8);
    byte_40F83B5 = 1;
  }
  TitleInfoEventSideItemComponent_TypeInfo->static_fields->ADD_LAST_LABEL_POS = (struct UnityEngine_Vector2_o)0x3F800000BF800000LL;
  __asm { FMOV            V0.2S, #1.0 }
  TitleInfoEventSideItemComponent_TypeInfo->static_fields->LAST_LABEL_OUTLINE = _D0;
  v14 = sub_B17014(string___TypeInfo, 4LL, v2);
  if ( !v14 )
    sub_B170D4();
  v21 = (System_Int32_array **)v14;
  v22 = StringLiteral_22597/*"time_status_side_01"*/;
  if ( StringLiteral_22597/*"time_status_side_01"*/ )
  {
    v22 = sub_B170BC(StringLiteral_22597/*"time_status_side_01"*/, *(_QWORD *)&(*v21)->m_Items[9]);
    if ( !v22 )
      goto LABEL_26;
    v23 = (System_Int32_array **)StringLiteral_22597/*"time_status_side_01"*/;
  }
  else
  {
    v23 = 0LL;
  }
  if ( !*((_DWORD *)v21 + 6) )
    goto LABEL_25;
  v21[4] = (System_Int32_array *)v23;
  sub_B16F98((BattleServantConfConponent_o *)(v21 + 4), v23, v15, v16, v17, v18, v19, v20);
  v22 = StringLiteral_22599/*"time_status_side_03"*/;
  if ( StringLiteral_22599/*"time_status_side_03"*/ )
  {
    v22 = sub_B170BC(StringLiteral_22599/*"time_status_side_03"*/, *(_QWORD *)&(*v21)->m_Items[9]);
    if ( !v22 )
      goto LABEL_26;
    v23 = (System_Int32_array **)StringLiteral_22599/*"time_status_side_03"*/;
  }
  else
  {
    v23 = 0LL;
  }
  if ( *((_DWORD *)v21 + 6) <= 1u )
    goto LABEL_25;
  v21[5] = (System_Int32_array *)v23;
  sub_B16F98((BattleServantConfConponent_o *)(v21 + 5), v23, v15, v24, v25, v26, v27, v28);
  v22 = StringLiteral_22598/*"time_status_side_02"*/;
  if ( StringLiteral_22598/*"time_status_side_02"*/ )
  {
    v22 = sub_B170BC(StringLiteral_22598/*"time_status_side_02"*/, *(_QWORD *)&(*v21)->m_Items[9]);
    if ( !v22 )
      goto LABEL_26;
    v23 = (System_Int32_array **)StringLiteral_22598/*"time_status_side_02"*/;
  }
  else
  {
    v23 = 0LL;
  }
  if ( *((_DWORD *)v21 + 6) <= 2u )
    goto LABEL_25;
  v21[6] = (System_Int32_array *)v23;
  sub_B16F98((BattleServantConfConponent_o *)(v21 + 6), v23, v15, v29, v30, v31, v32, v33);
  v22 = StringLiteral_22600/*"time_status_side_04"*/;
  if ( StringLiteral_22600/*"time_status_side_04"*/ )
  {
    v22 = sub_B170BC(StringLiteral_22600/*"time_status_side_04"*/, *(_QWORD *)&(*v21)->m_Items[9]);
    if ( v22 )
    {
      v23 = (System_Int32_array **)StringLiteral_22600/*"time_status_side_04"*/;
      goto LABEL_23;
    }
LABEL_26:
    sub_B170F4(v22);
    sub_B170A0();
  }
  v23 = 0LL;
LABEL_23:
  if ( *((_DWORD *)v21 + 6) <= 3u )
  {
LABEL_25:
    sub_B17100(v22, v23, v15);
    sub_B170A0();
  }
  v21[7] = (System_Int32_array *)v23;
  sub_B16F98((BattleServantConfConponent_o *)(v21 + 7), v23, v15, v34, v35, v36, v37, v38);
  static_fields = TitleInfoEventSideItemComponent_TypeInfo->static_fields;
  static_fields->TIME_STATUS_SPRITE_NAMES = (struct System_String_array *)v21;
  sub_B16F98(
    (BattleServantConfConponent_o *)&static_fields->TIME_STATUS_SPRITE_NAMES,
    v21,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  v46 = TitleInfoEventSideItemComponent_TypeInfo->static_fields;
  v47 = (System_Int32_array **)StringLiteral_21411/*"point_status_side"*/;
  v46->POINT_STATUS_STRING = (struct System_String_o *)StringLiteral_21411/*"point_status_side"*/;
  sub_B16F98((BattleServantConfConponent_o *)&v46->POINT_STATUS_STRING, v47, v48, v49, v50, v51, v52, v53);
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
  UnityEngine_Component_c *v14; // x0

  if ( (byte_40F83B4 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, spriteName);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_SideItemComponent___, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    byte_40F83B4 = 1;
  }
  sideItems = (UnityEngine_UI_Dropdown_DropdownItem_o *)this->fields.sideItems;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v8 = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                    sideItems,
                                    (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_SideItemComponent___);
  if ( !v8 )
    goto LABEL_12;
  v9 = v8;
  gameObject = UnityEngine_Component__get_gameObject(v8, 0LL);
  v11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SafeSetParent_27425996(gameObject, v11, 0LL);
  v12 = UnityEngine_Component__get_gameObject(v9, 0LL);
  GameObjectExtensions__ResetLocalScale(v12, 0LL);
  klass = (UISprite_o *)v9[1].klass;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(klass, spriteName, 0LL);
  v14 = v9[1].klass;
  if ( !v14 )
LABEL_12:
    sub_B170D4();
  (*((void (__fastcall **)(UnityEngine_Component_c *, _QWORD))v14->_1.image + 105))(
    v14,
    *((_QWORD *)v14->_1.image + 106));
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
  WebViewManager_o *Instance; // x0
  EventPointBuffMaster_o *MasterData_WarQuestSelectionMaster; // x0
  EventPointBuffEntity_array *EntityList; // x0
  const MethodInfo *v9; // x3

  if ( (byte_40F83B1 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventPointBuffMaster___, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40F83B1 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (EventPointBuffMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                         (DataManager_o *)Instance,
                                                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventPointBuffMaster___)) == 0LL
    || (EntityList = EventPointBuffMaster__getEntityList(MasterData_WarQuestSelectionMaster, eventId, 0LL)) == 0LL )
  {
    sub_B170D4();
  }
  if ( *(_QWORD *)&EntityList->max_length )
    TitleInfoEventSideItemComponent__SetupBuffRateUI(this, eventId, EntityList, v9);
  else
    TitleInfoEventSideItemComponent__SetupTotalPointUI(this, eventId, (const MethodInfo *)EntityList);
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
  System_String_array **v20; // x2
  signed int max_length; // w8
  __int64 v22; // x21
  signed int v23; // w9
  float value; // s0
  EventPointBuffEntity_o *v25; // x10
  __int64 eventPoint; // x11
  __int64 v27; // x20
  float v28; // s8
  System_Int32_array **v29; // x22
  double v30; // d0
  Il2CppObject *v31; // x0
  __int64 *v32; // x8
  __int64 v33; // x2
  System_Int32_array **v34; // x23
  Il2CppObject *v35; // x0
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  __int64 v41; // x20
  Il2CppObject *v42; // x0
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_Int32_array **v48; // x21
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
  UnityEngine_Component_o *SideItem; // x0
  UnityEngine_Component_o *v68; // x21
  struct UnityEngine_Vector2_array *spritePositions; // x8
  UnityEngine_Component_o *klass; // x0
  struct UnityEngine_Vector2_array *labelPositions; // x8
  UILabel_o *monitor; // x0
  struct UnityEngine_Vector2_array *labelOutlineSizes; // x8
  UIWidget_o *v74; // x0
  struct UnityEngine_Vector2_array *v75; // x8
  UILabel_o *v76; // x0
  UnityEngine_Component_o *v77; // x0
  struct System_Int32_array *labelFontSizes; // x8
  struct UnityEngine_Color_array *labelOutlineColors; // x8
  UILabel_o *v80; // x0
  struct UILabel_Effect_array *labelOutlineStyles; // x8
  UILabel_o *v82; // x0
  struct System_Boolean_array *labelApplyGradients; // x8
  UILabel_o *v84; // x0
  struct UnityEngine_Color_array *labelGradientTops; // x8
  UILabel_o *v86; // x0
  struct UnityEngine_Color_array *labelGradientBottoms; // x8
  TitleInfoEventSideItemComponent_c *v88; // x8
  UILabel_o *v89; // x0
  unsigned int *v90; // x26
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  __int64 v96; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_40F83B3 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&eventId);
    sub_B16FFC(&long_TypeInfo, v7);
    sub_B16FFC(&LocalizationManager_TypeInfo, v8);
    sub_B16FFC(&float_TypeInfo, v9);
    sub_B16FFC(&string___TypeInfo, v10);
    sub_B16FFC(&TitleInfoEventSideItemComponent_TypeInfo, v11);
    sub_B16FFC(&StringLiteral_696/*"+{0:0.0}%"*/, v12);
    sub_B16FFC(&StringLiteral_14656/*"UNIT_REST_NONE"*/, v13);
    sub_B16FFC(&StringLiteral_23395/*"{0:#,0}"*/, v14);
    sub_B16FFC(&StringLiteral_697/*"+{0}%"*/, v15);
    sub_B16FFC(&StringLiteral_16148/*"_{0:00}"*/, v16);
    sub_B16FFC(&StringLiteral_951/*"0"*/, v17);
    byte_40F83B3 = 1;
  }
  EventPointNoGroup = UserEventPointMaster__GetEventPointNoGroup(eventId, 0LL);
  if ( !entitys )
    goto LABEL_82;
  max_length = entitys->max_length;
  v22 = EventPointNoGroup;
  if ( max_length < 1 )
  {
    v27 = 0LL;
    value = 0.0;
  }
  else
  {
    v23 = 0;
    value = 0.0;
    while ( 1 )
    {
      if ( v23 >= (unsigned int)max_length )
        goto LABEL_83;
      v25 = entitys->m_Items[v23];
      if ( !v25 )
        goto LABEL_82;
      eventPoint = v25->fields.eventPoint;
      if ( EventPointNoGroup < eventPoint )
        break;
      ++v23;
      value = (float)v25->fields.value;
      if ( v23 >= max_length )
      {
        v27 = 0LL;
        goto LABEL_13;
      }
    }
    v27 = eventPoint - EventPointNoGroup;
  }
LABEL_13:
  v28 = value / 10.0;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v29 = (System_Int32_array **)LocalizationManager__Get((System_String_o *)StringLiteral_14656/*"UNIT_REST_NONE"*/, 0LL);
  if ( v28 == INFINITY )
    v30 = -v28;
  else
    v30 = v28;
  *(float *)&v96 = v28;
  if ( v28 == (float)(int)v30 )
  {
    v31 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v96);
    v32 = &StringLiteral_697/*"+{0}%"*/;
  }
  else
  {
    v31 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v96);
    v32 = &StringLiteral_696/*"+{0:0.0}%"*/;
  }
  v34 = (System_Int32_array **)System_String__Format((System_String_o *)*v32, v31, 0LL);
  if ( (_DWORD)v27 )
  {
    v96 = v27;
    v35 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v96);
    v29 = (System_Int32_array **)System_String__Format((System_String_o *)StringLiteral_23395/*"{0:#,0}"*/, v35, 0LL);
  }
  EventPointNoGroup = sub_B17014(string___TypeInfo, 3LL, v33);
  if ( !EventPointNoGroup )
LABEL_82:
    sub_B170D4();
  v41 = EventPointNoGroup;
  if ( v34 )
  {
    EventPointNoGroup = sub_B170BC(v34, *(_QWORD *)(*(_QWORD *)EventPointNoGroup + 64LL));
    if ( !EventPointNoGroup )
      goto LABEL_84;
  }
  if ( !*(_DWORD *)(v41 + 24) )
    goto LABEL_83;
  *(_QWORD *)(v41 + 32) = v34;
  sub_B16F98((BattleServantConfConponent_o *)(v41 + 32), v34, v20, v36, v37, v38, v39, v40);
  v96 = v22;
  v42 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v96);
  EventPointNoGroup = (__int64)System_String__Format((System_String_o *)StringLiteral_23395/*"{0:#,0}"*/, v42, 0LL);
  v48 = (System_Int32_array **)EventPointNoGroup;
  if ( EventPointNoGroup )
  {
    EventPointNoGroup = sub_B170BC(EventPointNoGroup, *(_QWORD *)(*(_QWORD *)v41 + 64LL));
    if ( !EventPointNoGroup )
      goto LABEL_84;
  }
  if ( *(_DWORD *)(v41 + 24) <= 1u )
    goto LABEL_83;
  *(_QWORD *)(v41 + 40) = v48;
  sub_B16F98((BattleServantConfConponent_o *)(v41 + 40), v48, v20, v43, v44, v45, v46, v47);
  if ( v29 )
  {
    EventPointNoGroup = sub_B170BC(v29, *(_QWORD *)(*(_QWORD *)v41 + 64LL));
    if ( !EventPointNoGroup )
    {
LABEL_84:
      sub_B170F4(EventPointNoGroup);
      sub_B170A0();
    }
  }
  if ( *(_DWORD *)(v41 + 24) <= 2u )
  {
LABEL_83:
    sub_B17100(EventPointNoGroup, v19, v20);
    sub_B170A0();
  }
  *(_QWORD *)(v41 + 48) = v29;
  sub_B16F98((BattleServantConfConponent_o *)(v41 + 48), v29, v20, v49, v50, v51, v52, v53);
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
      LODWORD(v96) = v56 + 1;
      v63 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v96);
      v64 = System_String__Format((System_String_o *)StringLiteral_16148/*"_{0:00}"*/, v63, 0LL);
      v65 = System_String__Concat_43743732(POINT_STATUS_STRING, v64, 0LL);
      SideItem = (UnityEngine_Component_o *)TitleInfoEventSideItemComponent__CreateSideItem(this, v65, v66);
      if ( !SideItem )
        goto LABEL_82;
      v68 = SideItem;
      EventPointNoGroup = (__int64)UnityEngine_Component__get_gameObject(SideItem, 0LL);
      spritePositions = this->fields.spritePositions;
      if ( !spritePositions )
        goto LABEL_82;
      if ( v56 >= spritePositions->max_length )
        goto LABEL_83;
      GameObjectExtensions__SetLocalPosition_27419860(
        (UnityEngine_GameObject_o *)EventPointNoGroup,
        *(UnityEngine_Vector2_o *)((char *)&spritePositions->obj.klass + v59),
        0LL);
      klass = (UnityEngine_Component_o *)v68[1].klass;
      if ( !klass )
        goto LABEL_82;
      EventPointNoGroup = (__int64)UnityEngine_Component__get_gameObject(klass, 0LL);
      labelPositions = this->fields.labelPositions;
      if ( !labelPositions )
        goto LABEL_82;
      if ( v56 >= labelPositions->max_length )
        goto LABEL_83;
      GameObjectExtensions__SetLocalPosition_27419860(
        (UnityEngine_GameObject_o *)EventPointNoGroup,
        *(UnityEngine_Vector2_o *)((char *)&labelPositions->obj.klass + v59),
        0LL);
      if ( v56 >= *(unsigned int *)(v41 + 24) )
        goto LABEL_83;
      monitor = (UILabel_o *)v68[1].monitor;
      if ( !monitor )
        goto LABEL_82;
      UILabel__set_text(monitor, *(System_String_o **)(v41 + v59), 0LL);
      labelOutlineSizes = this->fields.labelOutlineSizes;
      if ( !labelOutlineSizes )
        goto LABEL_82;
      if ( v56 >= labelOutlineSizes->max_length )
        goto LABEL_83;
      v74 = (UIWidget_o *)v68[1].monitor;
      if ( !v74 )
        goto LABEL_82;
      UIWidget__set_height(v74, *((_DWORD *)&labelOutlineSizes->m_Items[0].fields.y + v56), 0LL);
      v75 = this->fields.labelOutlineSizes;
      if ( !v75 )
        goto LABEL_82;
      if ( v56 >= v75->max_length )
        goto LABEL_83;
      v76 = (UILabel_o *)v68[1].monitor;
      if ( !v76 )
        goto LABEL_82;
      UILabel__set_fontSize(v76, *((_DWORD *)&v75->m_Items[0].fields.y + v56), 0LL);
      v77 = (UnityEngine_Component_o *)v68[1].monitor;
      if ( !v77 )
        goto LABEL_82;
      EventPointNoGroup = (__int64)UnityEngine_Component__get_gameObject(v77, 0LL);
      labelFontSizes = this->fields.labelFontSizes;
      if ( !labelFontSizes )
        goto LABEL_82;
      if ( v56 >= labelFontSizes->max_length )
        goto LABEL_83;
      GameObjectExtensions__SetLocalPosition_27419860(
        (UnityEngine_GameObject_o *)EventPointNoGroup,
        *(UnityEngine_Vector2_o *)((char *)&labelFontSizes->obj.klass + v59),
        0LL);
      labelOutlineColors = this->fields.labelOutlineColors;
      if ( !labelOutlineColors )
        goto LABEL_82;
      if ( v56 >= labelOutlineColors->max_length )
        goto LABEL_83;
      v80 = (UILabel_o *)v68[1].monitor;
      if ( !v80 )
        goto LABEL_82;
      UILabel__set_effectDistance(v80, *(UnityEngine_Vector2_o *)((char *)&labelOutlineColors->obj.klass + v59), 0LL);
      labelOutlineStyles = this->fields.labelOutlineStyles;
      if ( !labelOutlineStyles )
        goto LABEL_82;
      if ( v56 >= labelOutlineStyles->max_length )
        goto LABEL_83;
      v82 = (UILabel_o *)v68[1].monitor;
      if ( !v82 )
        goto LABEL_82;
      UILabel__set_effectColor(v82, *(UnityEngine_Color_o *)((char *)&labelOutlineStyles->obj + v58), 0LL);
      labelApplyGradients = this->fields.labelApplyGradients;
      if ( !labelApplyGradients )
        goto LABEL_82;
      if ( v56 >= labelApplyGradients->max_length )
        goto LABEL_83;
      v84 = (UILabel_o *)v68[1].monitor;
      if ( !v84 )
        goto LABEL_82;
      UILabel__set_effectStyle(v84, *(_DWORD *)&labelApplyGradients->m_Items[4 * v56 + 4], 0LL);
      labelGradientTops = this->fields.labelGradientTops;
      if ( !labelGradientTops )
        goto LABEL_82;
      if ( v56 >= labelGradientTops->max_length )
        goto LABEL_83;
      v86 = (UILabel_o *)v68[1].monitor;
      if ( !v86 )
        goto LABEL_82;
      UILabel__set_applyGradient(v86, *((_BYTE *)&labelGradientTops->m_Items[0].fields.g + v56), 0LL);
      EventPointNoGroup = (__int64)v68[1].monitor;
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
        v88 = this[1].klass;
        if ( !v88 )
          goto LABEL_82;
        if ( v56 >= LODWORD(v88->_1.namespaze) )
          goto LABEL_83;
        v89 = (UILabel_o *)v68[1].monitor;
        if ( !v89 )
          goto LABEL_82;
        UILabel__set_gradientBottom(v89, *(UnityEngine_Color_o *)((char *)&v88->_1.image + v58), 0LL);
      }
      v90 = *(unsigned int **)&this->fields.margin;
      if ( !v90 )
        goto LABEL_82;
      EventPointNoGroup = sub_B170BC(v68, *(_QWORD *)(*(_QWORD *)v90 + 64LL));
      if ( !EventPointNoGroup )
        goto LABEL_84;
      if ( v56 >= v90[6] )
        goto LABEL_83;
      *(_QWORD *)&v90[(unsigned __int64)v59 / 4] = v68;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v90[(unsigned __int64)v59 / 4],
        (System_Int32_array **)v68,
        v20,
        v91,
        v92,
        v93,
        v94,
        v95);
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
  WebViewManager_o *Instance; // x0
  EventPointGroupMaster_o *MasterData_WarQuestSelectionMaster; // x0
  _QWORD *EntityList; // x0
  __int64 v11; // x1
  MethodInfo *v12; // x2
  __int64 v13; // x8
  _QWORD *v14; // x21
  unsigned __int64 v15; // x25
  int64_t v16; // x26
  char v17; // w27
  unsigned __int64 v18; // x8
  __int64 v19; // x8
  int64_t EventPoint; // x22
  __int64 v21; // x8
  UnityEngine_Component_o *SideItem; // x0
  UnityEngine_Component_o *v23; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *monitor; // x0
  UnityEngine_GameObject_o *v26; // x0
  TitleInfoEventSideItemComponent_c *v27; // x8
  UnityEngine_GameObject_o *v28; // x24
  UILabel_o *v29; // x0
  UIWidget_o *v30; // x0
  UILabel_o *v31; // x24
  Il2CppObject *v32; // x0
  System_String_o *v33; // x0
  unsigned int *v34; // x22
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  unsigned int *v40; // x0
  int64_t v42; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_40F83B2 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventPointGroupMaster___, *(_QWORD *)&eventId);
    sub_B16FFC(&long_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_B16FFC(&TitleInfoEventSideItemComponent_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_23395/*"{0:#,0}"*/, v7);
    byte_40F83B2 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (EventPointGroupMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          (DataManager_o *)Instance,
                                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventPointGroupMaster___)) == 0LL
    || (EntityList = EventPointGroupMaster__getEntityList(MasterData_WarQuestSelectionMaster, eventId, 0LL),
        (v13 = *(_QWORD *)&this->fields.margin) == 0) )
  {
LABEL_33:
    sub_B170D4();
  }
  v14 = EntityList;
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0;
  while ( (__int64)v15 < *(int *)(v13 + 24) )
  {
    if ( !v14 )
      goto LABEL_33;
    v18 = *((unsigned int *)v14 + 6);
    if ( (__int64)v15 >= (int)v18 )
    {
      v17 = 1;
      EventPoint = v16;
    }
    else
    {
      if ( v15 >= v18 )
        goto LABEL_35;
      v19 = v14[v15 + 4];
      if ( !v19 )
        goto LABEL_33;
      EventPoint = UserEventPointMaster__GetEventPoint(eventId, *(_DWORD *)(v19 + 20), 0LL);
      v16 += EventPoint;
    }
    EntityList = &TitleInfoEventSideItemComponent_TypeInfo->_1.image;
    if ( (BYTE3(TitleInfoEventSideItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TitleInfoEventSideItemComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventSideItemComponent_TypeInfo);
      EntityList = &TitleInfoEventSideItemComponent_TypeInfo->_1.image;
    }
    v21 = *(_QWORD *)(EntityList[23] + 16LL);
    if ( v21 )
    {
      if ( v15 >= *(unsigned int *)(v21 + 24) )
        goto LABEL_35;
      SideItem = (UnityEngine_Component_o *)TitleInfoEventSideItemComponent__CreateSideItem(
                                              this,
                                              *(System_String_o **)(v21 + 8 * v15 + 32),
                                              v12);
      if ( SideItem )
      {
        v23 = SideItem;
        gameObject = UnityEngine_Component__get_gameObject(SideItem, 0LL);
        GameObjectExtensions__SetLocalPosition_27420076(
          gameObject,
          0.0,
          -(float)(*(float *)&this->fields.itemPositions * (float)(int)v15),
          0.0,
          0LL);
        if ( (v17 & 1) != 0 )
        {
          monitor = (UnityEngine_Component_o *)v23[1].monitor;
          if ( !monitor )
            goto LABEL_33;
          v26 = UnityEngine_Component__get_gameObject(monitor, 0LL);
          v27 = TitleInfoEventSideItemComponent_TypeInfo;
          v28 = v26;
          if ( (BYTE3(TitleInfoEventSideItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TitleInfoEventSideItemComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TitleInfoEventSideItemComponent_TypeInfo);
            v27 = TitleInfoEventSideItemComponent_TypeInfo;
          }
          GameObjectExtensions__AddLocalPosition_27420768(v28, v27->static_fields->ADD_LAST_LABEL_POS, 0LL);
          v29 = (UILabel_o *)v23[1].monitor;
          if ( !v29 )
            goto LABEL_33;
          UILabel__set_effectDistance(
            v29,
            TitleInfoEventSideItemComponent_TypeInfo->static_fields->LAST_LABEL_OUTLINE,
            0LL);
          v30 = (UIWidget_o *)v23[1].monitor;
          if ( !v30 )
            goto LABEL_33;
          UIWidget__set_width(v30, 112, 0LL);
        }
        v31 = (UILabel_o *)v23[1].monitor;
        v42 = EventPoint;
        v32 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v42);
        v33 = System_String__Format((System_String_o *)StringLiteral_23395/*"{0:#,0}"*/, v32, 0LL);
        if ( v31 )
        {
          UILabel__set_text(v31, v33, 0LL);
          v34 = *(unsigned int **)&this->fields.margin;
          if ( v34 )
          {
            EntityList = (_QWORD *)sub_B170BC(v23, *(_QWORD *)(*(_QWORD *)v34 + 64LL));
            if ( !EntityList )
            {
              sub_B170F4(0LL);
              sub_B170A0();
            }
            if ( v15 >= v34[6] )
            {
LABEL_35:
              sub_B17100(EntityList, v11, v12);
              sub_B170A0();
            }
            v40 = &v34[2 * v15];
            *((_QWORD *)v40 + 4) = v23;
            sub_B16F98(
              (BattleServantConfConponent_o *)(v40 + 8),
              (System_Int32_array **)v23,
              (System_String_array **)v12,
              v35,
              v36,
              v37,
              v38,
              v39);
            v13 = *(_QWORD *)&this->fields.margin;
            ++v15;
            if ( v13 )
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