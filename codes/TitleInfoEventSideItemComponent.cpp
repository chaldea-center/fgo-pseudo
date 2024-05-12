void __fastcall TitleInfoEventSideItemComponent___cctor(const MethodInfo *method)
{
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_Int32_array **v14; // x19
  __int64 v15; // x0
  System_Int32_array **v16; // x1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Int32_array **v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Int32_array **v30; // x1
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Int32_array **v37; // x1
  struct TitleInfoEventSideItemComponent_StaticFields *static_fields; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  struct TitleInfoEventSideItemComponent_StaticFields *v45; // x0
  System_Int32_array **v46; // x1
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  __int64 v53; // x0
  __int64 v54; // x0

  if ( (byte_438911A & 1) == 0 )
  {
    sub_B775C4(&string___TypeInfo);
    sub_B775C4(&TitleInfoEventSideItemComponent_TypeInfo);
    sub_B775C4(&StringLiteral_23170/*"time_status_side_04"*/);
    sub_B775C4(&StringLiteral_23167/*"time_status_side_01"*/);
    sub_B775C4(&StringLiteral_23169/*"time_status_side_03"*/);
    sub_B775C4(&StringLiteral_21956/*"point_status_side"*/);
    sub_B775C4(&StringLiteral_23168/*"time_status_side_02"*/);
    byte_438911A = 1;
  }
  TitleInfoEventSideItemComponent_TypeInfo->static_fields->ADD_LAST_LABEL_POS = (struct UnityEngine_Vector2_o)0x3F800000BF800000LL;
  __asm { FMOV            V0.2S, #1.0 }
  TitleInfoEventSideItemComponent_TypeInfo->static_fields->LAST_LABEL_OUTLINE = _D0;
  v6 = sub_B775DC(string___TypeInfo, 4LL);
  if ( !v6 )
    sub_B7769C(0LL, v7);
  v14 = (System_Int32_array **)v6;
  v15 = StringLiteral_23167/*"time_status_side_01"*/;
  if ( StringLiteral_23167/*"time_status_side_01"*/ )
  {
    v15 = sub_B77684(StringLiteral_23167/*"time_status_side_01"*/, *(_QWORD *)&(*v14)->m_Items[9]);
    if ( !v15 )
      goto LABEL_26;
    v16 = (System_Int32_array **)StringLiteral_23167/*"time_status_side_01"*/;
  }
  else
  {
    v16 = 0LL;
  }
  if ( !*((_DWORD *)v14 + 6) )
    goto LABEL_25;
  v14[4] = (System_Int32_array *)v16;
  sub_B77560((BattleServantConfConponent_o *)(v14 + 4), v16, v8, v9, v10, v11, v12, v13);
  v15 = StringLiteral_23169/*"time_status_side_03"*/;
  if ( StringLiteral_23169/*"time_status_side_03"*/ )
  {
    v15 = sub_B77684(StringLiteral_23169/*"time_status_side_03"*/, *(_QWORD *)&(*v14)->m_Items[9]);
    if ( !v15 )
      goto LABEL_26;
    v23 = (System_Int32_array **)StringLiteral_23169/*"time_status_side_03"*/;
  }
  else
  {
    v23 = 0LL;
  }
  if ( *((_DWORD *)v14 + 6) <= 1u )
    goto LABEL_25;
  v14[5] = (System_Int32_array *)v23;
  sub_B77560((BattleServantConfConponent_o *)(v14 + 5), v23, v17, v18, v19, v20, v21, v22);
  v15 = StringLiteral_23168/*"time_status_side_02"*/;
  if ( StringLiteral_23168/*"time_status_side_02"*/ )
  {
    v15 = sub_B77684(StringLiteral_23168/*"time_status_side_02"*/, *(_QWORD *)&(*v14)->m_Items[9]);
    if ( !v15 )
      goto LABEL_26;
    v30 = (System_Int32_array **)StringLiteral_23168/*"time_status_side_02"*/;
  }
  else
  {
    v30 = 0LL;
  }
  if ( *((_DWORD *)v14 + 6) <= 2u )
    goto LABEL_25;
  v14[6] = (System_Int32_array *)v30;
  sub_B77560((BattleServantConfConponent_o *)(v14 + 6), v30, v24, v25, v26, v27, v28, v29);
  v15 = StringLiteral_23170/*"time_status_side_04"*/;
  if ( StringLiteral_23170/*"time_status_side_04"*/ )
  {
    v15 = sub_B77684(StringLiteral_23170/*"time_status_side_04"*/, *(_QWORD *)&(*v14)->m_Items[9]);
    if ( v15 )
    {
      v37 = (System_Int32_array **)StringLiteral_23170/*"time_status_side_04"*/;
      goto LABEL_23;
    }
LABEL_26:
    v54 = sub_B776BC();
    sub_B77668(v54, 0LL);
  }
  v37 = 0LL;
LABEL_23:
  if ( *((_DWORD *)v14 + 6) <= 3u )
  {
LABEL_25:
    v53 = sub_B776C8(v15);
    sub_B77668(v53, 0LL);
  }
  v14[7] = (System_Int32_array *)v37;
  sub_B77560((BattleServantConfConponent_o *)(v14 + 7), v37, v31, v32, v33, v34, v35, v36);
  static_fields = TitleInfoEventSideItemComponent_TypeInfo->static_fields;
  static_fields->TIME_STATUS_SPRITE_NAMES = (struct System_String_array *)v14;
  sub_B77560(
    (BattleServantConfConponent_o *)&static_fields->TIME_STATUS_SPRITE_NAMES,
    v14,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  v45 = TitleInfoEventSideItemComponent_TypeInfo->static_fields;
  v46 = (System_Int32_array **)StringLiteral_21956/*"point_status_side"*/;
  v45->POINT_STATUS_STRING = (struct System_String_o *)StringLiteral_21956/*"point_status_side"*/;
  sub_B77560((BattleServantConfConponent_o *)&v45->POINT_STATUS_STRING, v46, v47, v48, v49, v50, v51, v52);
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
  UnityEngine_UI_Dropdown_DropdownItem_o *sideItems; // x20
  UnityEngine_Component_o *v6; // x0
  __int64 v7; // x1
  UnityEngine_Component_o *v8; // x20
  UnityEngine_GameObject_o *gameObject; // x22
  UnityEngine_GameObject_o *v10; // x0
  UnityEngine_GameObject_o *v11; // x0
  UISprite_o *klass; // x21

  if ( (byte_4389119 & 1) == 0 )
  {
    sub_B775C4(&AtlasManager_TypeInfo);
    sub_B775C4(&Method_UnityEngine_Object_Instantiate_SideItemComponent___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_4389119 = 1;
  }
  sideItems = (UnityEngine_UI_Dropdown_DropdownItem_o *)this->fields.sideItems;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                    sideItems,
                                    (const MethodInfo_1DF9900 *)Method_UnityEngine_Object_Instantiate_SideItemComponent___);
  if ( !v6 )
    goto LABEL_12;
  v8 = v6;
  gameObject = UnityEngine_Component__get_gameObject(v6, 0LL);
  v10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SafeSetParent_32813688(gameObject, v10, 0LL);
  v11 = UnityEngine_Component__get_gameObject(v8, 0LL);
  GameObjectExtensions__ResetLocalScale(v11, 0LL);
  klass = (UISprite_o *)v8[1].klass;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(klass, spriteName, 0LL);
  v6 = (UnityEngine_Component_o *)v8[1].klass;
  if ( !v6 )
LABEL_12:
    sub_B7769C(v6, v7);
  ((void (__fastcall *)(UnityEngine_Component_o *, void *))v6->klass[2]._1.typeMetadataHandle)(
    v6,
    v6->klass[2]._1.interopData);
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
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_4389116 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_EventPointBuffMaster___);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4389116 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventPointBuffMaster___)) == 0LL
    || (Instance = (DataManager_o *)EventPointBuffMaster__getEntityList(
                                      (EventPointBuffMaster_o *)Instance,
                                      eventId,
                                      0LL)) == 0LL )
  {
    sub_B7769C(Instance, v6);
  }
  if ( Instance->fields.datalist )
    TitleInfoEventSideItemComponent__SetupBuffRateUI(this, eventId, (EventPointBuffEntity_array *)Instance, v7);
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
  signed int v11; // w9
  float value; // s0
  EventPointBuffEntity_o *v13; // x10
  __int64 eventPoint; // x11
  __int64 v15; // x20
  float v16; // s8
  __int64 v17; // x2
  System_Int32_array **v18; // x22
  double v19; // d0
  Il2CppObject *v20; // x0
  __int64 *v21; // x8
  __int64 v22; // x2
  System_Int32_array **v23; // x23
  Il2CppObject *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  __int64 v31; // x20
  __int64 v32; // x2
  Il2CppObject *v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Int32_array **v40; // x21
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  __int64 v47; // x2
  __int64 v48; // x8
  __int64 v49; // x8
  unsigned __int64 v50; // x28
  signed __int64 v51; // x22
  __int64 v52; // x23
  __int64 v53; // x27
  TitleInfoEventSideItemComponent_c *v54; // x0
  signed __int64 v55; // x25
  System_String_o *POINT_STATUS_STRING; // x21
  Il2CppObject *v57; // x0
  System_String_o *v58; // x0
  System_String_o *v59; // x0
  const MethodInfo *v60; // x2
  __int64 v61; // x21
  struct UnityEngine_Vector2_array *spritePositions; // x8
  struct UnityEngine_Vector2_array *labelPositions; // x8
  struct UnityEngine_Vector2_array *labelOutlineSizes; // x8
  struct UnityEngine_Vector2_array *v65; // x8
  struct System_Int32_array *labelFontSizes; // x8
  struct UnityEngine_Color_array *labelOutlineColors; // x8
  struct UILabel_Effect_array *labelOutlineStyles; // x8
  struct System_Boolean_array *labelApplyGradients; // x8
  struct UnityEngine_Color_array *labelGradientTops; // x8
  struct UnityEngine_Color_array *labelGradientBottoms; // x8
  TitleInfoEventSideItemComponent_c *klass; // x8
  unsigned int *v73; // x26
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  __int64 v80; // x0
  __int64 v81; // x0
  __int64 v82; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4389118 & 1) == 0 )
  {
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&long_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&float_TypeInfo);
    sub_B775C4(&string___TypeInfo);
    sub_B775C4(&TitleInfoEventSideItemComponent_TypeInfo);
    sub_B775C4(&StringLiteral_712/*"+{0:0.0}%"*/);
    sub_B775C4(&StringLiteral_14969/*"UNIT_REST_NONE"*/);
    sub_B775C4(&StringLiteral_23975/*"{0:#,0}"*/);
    sub_B775C4(&StringLiteral_713/*"+{0}%"*/);
    sub_B775C4(&StringLiteral_16521/*"_{0:00}"*/);
    sub_B775C4(&StringLiteral_980/*"0"*/);
    byte_4389118 = 1;
  }
  EventPointNoGroup = UserEventPointMaster__GetEventPointNoGroup(eventId, 0LL);
  if ( !entitys )
    goto LABEL_82;
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
      if ( v11 >= (unsigned int)max_length )
        goto LABEL_83;
      v13 = entitys->m_Items[v11];
      if ( !v13 )
        goto LABEL_82;
      eventPoint = v13->fields.eventPoint;
      if ( EventPointNoGroup < eventPoint )
        break;
      ++v11;
      value = (float)v13->fields.value;
      if ( v11 >= max_length )
      {
        v15 = 0LL;
        goto LABEL_13;
      }
    }
    v15 = eventPoint - EventPointNoGroup;
  }
LABEL_13:
  v16 = value / 10.0;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v18 = (System_Int32_array **)LocalizationManager__Get((System_String_o *)StringLiteral_14969/*"UNIT_REST_NONE"*/, 0LL);
  if ( v16 == INFINITY )
    v19 = -v16;
  else
    v19 = v16;
  *(float *)&v82 = v16;
  if ( v16 == (float)(int)v19 )
  {
    v20 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v82, v17);
    v21 = &StringLiteral_713/*"+{0}%"*/;
  }
  else
  {
    v20 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v82, v17);
    v21 = &StringLiteral_712/*"+{0:0.0}%"*/;
  }
  v23 = (System_Int32_array **)System_String__Format((System_String_o *)*v21, v20, 0LL);
  if ( (_DWORD)v15 )
  {
    v82 = v15;
    v24 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v82, v22);
    v18 = (System_Int32_array **)System_String__Format((System_String_o *)StringLiteral_23975/*"{0:#,0}"*/, v24, 0LL);
  }
  EventPointNoGroup = sub_B775DC(string___TypeInfo, 3LL);
  if ( !EventPointNoGroup )
LABEL_82:
    sub_B7769C(EventPointNoGroup, v8);
  v31 = EventPointNoGroup;
  if ( v23 )
  {
    EventPointNoGroup = sub_B77684(v23, *(_QWORD *)(*(_QWORD *)EventPointNoGroup + 64LL));
    if ( !EventPointNoGroup )
      goto LABEL_84;
  }
  if ( !*(_DWORD *)(v31 + 24) )
    goto LABEL_83;
  *(_QWORD *)(v31 + 32) = v23;
  sub_B77560((BattleServantConfConponent_o *)(v31 + 32), v23, v25, v26, v27, v28, v29, v30);
  v82 = v10;
  v33 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v82, v32);
  EventPointNoGroup = (__int64)System_String__Format((System_String_o *)StringLiteral_23975/*"{0:#,0}"*/, v33, 0LL);
  v40 = (System_Int32_array **)EventPointNoGroup;
  if ( EventPointNoGroup )
  {
    EventPointNoGroup = sub_B77684(EventPointNoGroup, *(_QWORD *)(*(_QWORD *)v31 + 64LL));
    if ( !EventPointNoGroup )
      goto LABEL_84;
  }
  if ( *(_DWORD *)(v31 + 24) <= 1u )
    goto LABEL_83;
  *(_QWORD *)(v31 + 40) = v40;
  sub_B77560((BattleServantConfConponent_o *)(v31 + 40), v40, v34, v35, v36, v37, v38, v39);
  if ( v18 )
  {
    EventPointNoGroup = sub_B77684(v18, *(_QWORD *)(*(_QWORD *)v31 + 64LL));
    if ( !EventPointNoGroup )
    {
LABEL_84:
      v81 = sub_B776BC();
      sub_B77668(v81, 0LL);
    }
  }
  if ( *(_DWORD *)(v31 + 24) <= 2u )
  {
LABEL_83:
    v80 = sub_B776C8(EventPointNoGroup);
    sub_B77668(v80, 0LL);
  }
  *(_QWORD *)(v31 + 48) = v18;
  sub_B77560((BattleServantConfConponent_o *)(v31 + 48), v18, v41, v42, v43, v44, v45, v46);
  v48 = *(_QWORD *)&this->fields.margin;
  if ( !v48 )
    goto LABEL_82;
  v49 = *(_QWORD *)(v48 + 24);
  if ( (int)v49 >= 1 )
  {
    v50 = 0LL;
    v51 = (int)v49;
    v52 = 32LL;
    v53 = 32LL;
    while ( 1 )
    {
      v54 = TitleInfoEventSideItemComponent_TypeInfo;
      if ( (BYTE3(TitleInfoEventSideItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TitleInfoEventSideItemComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TitleInfoEventSideItemComponent_TypeInfo);
        v54 = TitleInfoEventSideItemComponent_TypeInfo;
      }
      v55 = v50 + 1;
      POINT_STATUS_STRING = v54->static_fields->POINT_STATUS_STRING;
      LODWORD(v82) = v50 + 1;
      v57 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v82, v47);
      v58 = System_String__Format((System_String_o *)StringLiteral_16521/*"_{0:00}"*/, v57, 0LL);
      v59 = System_String__Concat_44901936(POINT_STATUS_STRING, v58, 0LL);
      EventPointNoGroup = (__int64)TitleInfoEventSideItemComponent__CreateSideItem(this, v59, v60);
      if ( !EventPointNoGroup )
        goto LABEL_82;
      v61 = EventPointNoGroup;
      EventPointNoGroup = (__int64)UnityEngine_Component__get_gameObject(
                                     (UnityEngine_Component_o *)EventPointNoGroup,
                                     0LL);
      spritePositions = this->fields.spritePositions;
      if ( !spritePositions )
        goto LABEL_82;
      if ( v50 >= spritePositions->max_length )
        goto LABEL_83;
      GameObjectExtensions__SetLocalPosition_32807552(
        (UnityEngine_GameObject_o *)EventPointNoGroup,
        *(UnityEngine_Vector2_o *)((char *)&spritePositions->obj.klass + v53),
        0LL);
      EventPointNoGroup = *(_QWORD *)(v61 + 24);
      if ( !EventPointNoGroup )
        goto LABEL_82;
      EventPointNoGroup = (__int64)UnityEngine_Component__get_gameObject(
                                     (UnityEngine_Component_o *)EventPointNoGroup,
                                     0LL);
      labelPositions = this->fields.labelPositions;
      if ( !labelPositions )
        goto LABEL_82;
      if ( v50 >= labelPositions->max_length )
        goto LABEL_83;
      GameObjectExtensions__SetLocalPosition_32807552(
        (UnityEngine_GameObject_o *)EventPointNoGroup,
        *(UnityEngine_Vector2_o *)((char *)&labelPositions->obj.klass + v53),
        0LL);
      if ( v50 >= *(unsigned int *)(v31 + 24) )
        goto LABEL_83;
      EventPointNoGroup = *(_QWORD *)(v61 + 32);
      if ( !EventPointNoGroup )
        goto LABEL_82;
      UILabel__set_text((UILabel_o *)EventPointNoGroup, *(System_String_o **)(v31 + v53), 0LL);
      labelOutlineSizes = this->fields.labelOutlineSizes;
      if ( !labelOutlineSizes )
        goto LABEL_82;
      if ( v50 >= labelOutlineSizes->max_length )
        goto LABEL_83;
      EventPointNoGroup = *(_QWORD *)(v61 + 32);
      if ( !EventPointNoGroup )
        goto LABEL_82;
      UIWidget__set_height(
        (UIWidget_o *)EventPointNoGroup,
        *((_DWORD *)&labelOutlineSizes->m_Items[0].fields.y + v50),
        0LL);
      v65 = this->fields.labelOutlineSizes;
      if ( !v65 )
        goto LABEL_82;
      if ( v50 >= v65->max_length )
        goto LABEL_83;
      EventPointNoGroup = *(_QWORD *)(v61 + 32);
      if ( !EventPointNoGroup )
        goto LABEL_82;
      UILabel__set_fontSize((UILabel_o *)EventPointNoGroup, *((_DWORD *)&v65->m_Items[0].fields.y + v50), 0LL);
      EventPointNoGroup = *(_QWORD *)(v61 + 32);
      if ( !EventPointNoGroup )
        goto LABEL_82;
      EventPointNoGroup = (__int64)UnityEngine_Component__get_gameObject(
                                     (UnityEngine_Component_o *)EventPointNoGroup,
                                     0LL);
      labelFontSizes = this->fields.labelFontSizes;
      if ( !labelFontSizes )
        goto LABEL_82;
      if ( v50 >= labelFontSizes->max_length )
        goto LABEL_83;
      GameObjectExtensions__SetLocalPosition_32807552(
        (UnityEngine_GameObject_o *)EventPointNoGroup,
        *(UnityEngine_Vector2_o *)((char *)&labelFontSizes->obj.klass + v53),
        0LL);
      labelOutlineColors = this->fields.labelOutlineColors;
      if ( !labelOutlineColors )
        goto LABEL_82;
      if ( v50 >= labelOutlineColors->max_length )
        goto LABEL_83;
      EventPointNoGroup = *(_QWORD *)(v61 + 32);
      if ( !EventPointNoGroup )
        goto LABEL_82;
      UILabel__set_effectDistance(
        (UILabel_o *)EventPointNoGroup,
        *(UnityEngine_Vector2_o *)((char *)&labelOutlineColors->obj.klass + v53),
        0LL);
      labelOutlineStyles = this->fields.labelOutlineStyles;
      if ( !labelOutlineStyles )
        goto LABEL_82;
      if ( v50 >= labelOutlineStyles->max_length )
        goto LABEL_83;
      EventPointNoGroup = *(_QWORD *)(v61 + 32);
      if ( !EventPointNoGroup )
        goto LABEL_82;
      UILabel__set_effectColor(
        (UILabel_o *)EventPointNoGroup,
        *(UnityEngine_Color_o *)((char *)&labelOutlineStyles->obj + v52),
        0LL);
      labelApplyGradients = this->fields.labelApplyGradients;
      if ( !labelApplyGradients )
        goto LABEL_82;
      if ( v50 >= labelApplyGradients->max_length )
        goto LABEL_83;
      EventPointNoGroup = *(_QWORD *)(v61 + 32);
      if ( !EventPointNoGroup )
        goto LABEL_82;
      UILabel__set_effectStyle(
        (UILabel_o *)EventPointNoGroup,
        *(_DWORD *)&labelApplyGradients->m_Items[4 * v50 + 4],
        0LL);
      labelGradientTops = this->fields.labelGradientTops;
      if ( !labelGradientTops )
        goto LABEL_82;
      if ( v50 >= labelGradientTops->max_length )
        goto LABEL_83;
      EventPointNoGroup = *(_QWORD *)(v61 + 32);
      if ( !EventPointNoGroup )
        goto LABEL_82;
      UILabel__set_applyGradient(
        (UILabel_o *)EventPointNoGroup,
        *((_BYTE *)&labelGradientTops->m_Items[0].fields.g + v50),
        0LL);
      EventPointNoGroup = *(_QWORD *)(v61 + 32);
      if ( !EventPointNoGroup )
        goto LABEL_82;
      if ( *(_BYTE *)(EventPointNoGroup + 480) )
      {
        labelGradientBottoms = this->fields.labelGradientBottoms;
        if ( !labelGradientBottoms )
          goto LABEL_82;
        if ( v50 >= labelGradientBottoms->max_length )
          goto LABEL_83;
        UILabel__set_gradientTop(
          (UILabel_o *)EventPointNoGroup,
          *(UnityEngine_Color_o *)((char *)&labelGradientBottoms->obj + v52),
          0LL);
        klass = this[1].klass;
        if ( !klass )
          goto LABEL_82;
        if ( v50 >= LODWORD(klass->_1.namespaze) )
          goto LABEL_83;
        EventPointNoGroup = *(_QWORD *)(v61 + 32);
        if ( !EventPointNoGroup )
          goto LABEL_82;
        UILabel__set_gradientBottom(
          (UILabel_o *)EventPointNoGroup,
          *(UnityEngine_Color_o *)((char *)&klass->_1.image + v52),
          0LL);
      }
      v73 = *(unsigned int **)&this->fields.margin;
      if ( !v73 )
        goto LABEL_82;
      EventPointNoGroup = sub_B77684(v61, *(_QWORD *)(*(_QWORD *)v73 + 64LL));
      if ( !EventPointNoGroup )
        goto LABEL_84;
      if ( v50 >= v73[6] )
        goto LABEL_83;
      *(_QWORD *)&v73[(unsigned __int64)v53 / 4] = v61;
      sub_B77560(
        (BattleServantConfConponent_o *)&v73[(unsigned __int64)v53 / 4],
        (System_Int32_array **)v61,
        v74,
        v75,
        v76,
        v77,
        v78,
        v79);
      v53 += 8LL;
      v52 += 16LL;
      ++v50;
      if ( v55 >= v51 )
        return;
    }
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
  __int64 v7; // x8
  DataManager_o *v8; // x21
  unsigned __int64 v9; // x25
  int64_t v10; // x26
  char v11; // w27
  unsigned __int64 datalist_low; // x8
  __int64 v13; // x8
  int64_t EventPoint; // x22
  struct System_String_array *items; // x8
  DataManager_o *v16; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v18; // x2
  UnityEngine_GameObject_o *v19; // x0
  TitleInfoEventSideItemComponent_c *v20; // x8
  UnityEngine_GameObject_o *v21; // x24
  UILabel_o *lookup; // x24
  Il2CppObject *v23; // x0
  unsigned int *v24; // x22
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  unsigned int *v31; // x0
  __int64 v32; // x0
  __int64 v33; // x0
  int64_t v35; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4389117 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_EventPointGroupMaster___);
    sub_B775C4(&long_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&TitleInfoEventSideItemComponent_TypeInfo);
    sub_B775C4(&StringLiteral_23975/*"{0:#,0}"*/);
    byte_4389117 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventPointGroupMaster___)) == 0LL
    || (Instance = (DataManager_o *)EventPointGroupMaster__getEntityList(
                                      (EventPointGroupMaster_o *)Instance,
                                      eventId,
                                      0LL),
        (v7 = *(_QWORD *)&this->fields.margin) == 0) )
  {
LABEL_33:
    sub_B7769C(Instance, v5);
  }
  v8 = Instance;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0;
  while ( (__int64)v9 < *(int *)(v7 + 24) )
  {
    if ( !v8 )
      goto LABEL_33;
    datalist_low = LODWORD(v8->fields.datalist);
    if ( (__int64)v9 >= (int)datalist_low )
    {
      v11 = 1;
      EventPoint = v10;
    }
    else
    {
      if ( v9 >= datalist_low )
        goto LABEL_35;
      v13 = *((_QWORD *)&v8->fields.lookup + v9);
      if ( !v13 )
        goto LABEL_33;
      EventPoint = UserEventPointMaster__GetEventPoint(eventId, *(_DWORD *)(v13 + 20), 0LL);
      v10 += EventPoint;
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
      if ( v9 >= items->max_length )
        goto LABEL_35;
      Instance = (DataManager_o *)TitleInfoEventSideItemComponent__CreateSideItem(this, items->m_Items[v9], v6);
      if ( Instance )
      {
        v16 = Instance;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
        GameObjectExtensions__SetLocalPosition_32807768(
          gameObject,
          0.0,
          -(float)(*(float *)&this->fields.itemPositions * (float)(int)v9),
          0.0,
          0LL);
        if ( (v11 & 1) != 0 )
        {
          Instance = (DataManager_o *)v16->fields.lookup;
          if ( !Instance )
            goto LABEL_33;
          v19 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
          v20 = TitleInfoEventSideItemComponent_TypeInfo;
          v21 = v19;
          if ( (BYTE3(TitleInfoEventSideItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TitleInfoEventSideItemComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TitleInfoEventSideItemComponent_TypeInfo);
            v20 = TitleInfoEventSideItemComponent_TypeInfo;
          }
          GameObjectExtensions__AddLocalPosition_32808460(v21, v20->static_fields->ADD_LAST_LABEL_POS, 0LL);
          Instance = (DataManager_o *)v16->fields.lookup;
          if ( !Instance )
            goto LABEL_33;
          UILabel__set_effectDistance(
            (UILabel_o *)Instance,
            TitleInfoEventSideItemComponent_TypeInfo->static_fields->LAST_LABEL_OUTLINE,
            0LL);
          Instance = (DataManager_o *)v16->fields.lookup;
          if ( !Instance )
            goto LABEL_33;
          UIWidget__set_width((UIWidget_o *)Instance, 112, 0LL);
        }
        lookup = (UILabel_o *)v16->fields.lookup;
        v35 = EventPoint;
        v23 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v35, v18);
        Instance = (DataManager_o *)System_String__Format((System_String_o *)StringLiteral_23975/*"{0:#,0}"*/, v23, 0LL);
        if ( lookup )
        {
          UILabel__set_text(lookup, (System_String_o *)Instance, 0LL);
          v24 = *(unsigned int **)&this->fields.margin;
          if ( v24 )
          {
            Instance = (DataManager_o *)sub_B77684(v16, *(_QWORD *)(*(_QWORD *)v24 + 64LL));
            if ( !Instance )
            {
              v33 = sub_B776BC();
              sub_B77668(v33, 0LL);
            }
            if ( v9 >= v24[6] )
            {
LABEL_35:
              v32 = sub_B776C8(Instance);
              sub_B77668(v32, 0LL);
            }
            v31 = &v24[2 * v9];
            *((_QWORD *)v31 + 4) = v16;
            sub_B77560(
              (BattleServantConfConponent_o *)(v31 + 8),
              (System_Int32_array **)v16,
              v25,
              v26,
              v27,
              v28,
              v29,
              v30);
            v7 = *(_QWORD *)&this->fields.margin;
            ++v9;
            if ( v7 )
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