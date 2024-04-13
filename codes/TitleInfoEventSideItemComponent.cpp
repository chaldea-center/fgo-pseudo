void __fastcall TitleInfoEventSideItemComponent___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  __int64 v27; // x0
  __int64 v28; // x1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Int32_array **v35; // x19
  __int64 v36; // x0
  System_Int32_array **v37; // x1
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Int32_array **v44; // x1
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_Int32_array **v51; // x1
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_Int32_array **v58; // x1
  struct TitleInfoEventSideItemComponent_StaticFields *static_fields; // x0
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  struct TitleInfoEventSideItemComponent_StaticFields *v66; // x0
  System_Int32_array **v67; // x1
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  __int64 v74; // x0
  __int64 v75; // x0

  if ( (byte_42E6BEC & 1) == 0 )
  {
    sub_B5D5C4(&string___TypeInfo, v1, v2, v3);
    sub_B5D5C4(&TitleInfoEventSideItemComponent_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&StringLiteral_22998/*"time_status_side_04"*/, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_22995/*"time_status_side_01"*/, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_22997/*"time_status_side_03"*/, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_21792/*"point_status_side"*/, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_22996/*"time_status_side_02"*/, v19, v20, v21);
    byte_42E6BEC = 1;
  }
  TitleInfoEventSideItemComponent_TypeInfo->static_fields->ADD_LAST_LABEL_POS = (struct UnityEngine_Vector2_o)0x3F800000BF800000LL;
  __asm { FMOV            V0.2S, #1.0 }
  TitleInfoEventSideItemComponent_TypeInfo->static_fields->LAST_LABEL_OUTLINE = _D0;
  v27 = sub_B5D5DC(string___TypeInfo, 4LL);
  if ( !v27 )
    sub_B5D69C(0LL, v28);
  v35 = (System_Int32_array **)v27;
  v36 = StringLiteral_22995/*"time_status_side_01"*/;
  if ( StringLiteral_22995/*"time_status_side_01"*/ )
  {
    v36 = sub_B5D684(StringLiteral_22995/*"time_status_side_01"*/, *(_QWORD *)&(*v35)->m_Items[9]);
    if ( !v36 )
      goto LABEL_26;
    v37 = (System_Int32_array **)StringLiteral_22995/*"time_status_side_01"*/;
  }
  else
  {
    v37 = 0LL;
  }
  if ( !*((_DWORD *)v35 + 6) )
    goto LABEL_25;
  v35[4] = (System_Int32_array *)v37;
  sub_B5D560((BattleServantConfConponent_o *)(v35 + 4), v37, v29, v30, v31, v32, v33, v34);
  v36 = StringLiteral_22997/*"time_status_side_03"*/;
  if ( StringLiteral_22997/*"time_status_side_03"*/ )
  {
    v36 = sub_B5D684(StringLiteral_22997/*"time_status_side_03"*/, *(_QWORD *)&(*v35)->m_Items[9]);
    if ( !v36 )
      goto LABEL_26;
    v44 = (System_Int32_array **)StringLiteral_22997/*"time_status_side_03"*/;
  }
  else
  {
    v44 = 0LL;
  }
  if ( *((_DWORD *)v35 + 6) <= 1u )
    goto LABEL_25;
  v35[5] = (System_Int32_array *)v44;
  sub_B5D560((BattleServantConfConponent_o *)(v35 + 5), v44, v38, v39, v40, v41, v42, v43);
  v36 = StringLiteral_22996/*"time_status_side_02"*/;
  if ( StringLiteral_22996/*"time_status_side_02"*/ )
  {
    v36 = sub_B5D684(StringLiteral_22996/*"time_status_side_02"*/, *(_QWORD *)&(*v35)->m_Items[9]);
    if ( !v36 )
      goto LABEL_26;
    v51 = (System_Int32_array **)StringLiteral_22996/*"time_status_side_02"*/;
  }
  else
  {
    v51 = 0LL;
  }
  if ( *((_DWORD *)v35 + 6) <= 2u )
    goto LABEL_25;
  v35[6] = (System_Int32_array *)v51;
  sub_B5D560((BattleServantConfConponent_o *)(v35 + 6), v51, v45, v46, v47, v48, v49, v50);
  v36 = StringLiteral_22998/*"time_status_side_04"*/;
  if ( StringLiteral_22998/*"time_status_side_04"*/ )
  {
    v36 = sub_B5D684(StringLiteral_22998/*"time_status_side_04"*/, *(_QWORD *)&(*v35)->m_Items[9]);
    if ( v36 )
    {
      v58 = (System_Int32_array **)StringLiteral_22998/*"time_status_side_04"*/;
      goto LABEL_23;
    }
LABEL_26:
    v75 = sub_B5D6BC();
    sub_B5D668(v75, 0LL);
  }
  v58 = 0LL;
LABEL_23:
  if ( *((_DWORD *)v35 + 6) <= 3u )
  {
LABEL_25:
    v74 = sub_B5D6C8(v36);
    sub_B5D668(v74, 0LL);
  }
  v35[7] = (System_Int32_array *)v58;
  sub_B5D560((BattleServantConfConponent_o *)(v35 + 7), v58, v52, v53, v54, v55, v56, v57);
  static_fields = TitleInfoEventSideItemComponent_TypeInfo->static_fields;
  static_fields->TIME_STATUS_SPRITE_NAMES = (struct System_String_array *)v35;
  sub_B5D560(
    (BattleServantConfConponent_o *)&static_fields->TIME_STATUS_SPRITE_NAMES,
    v35,
    v60,
    v61,
    v62,
    v63,
    v64,
    v65);
  v66 = TitleInfoEventSideItemComponent_TypeInfo->static_fields;
  v67 = (System_Int32_array **)StringLiteral_21792/*"point_status_side"*/;
  v66->POINT_STATUS_STRING = (struct System_String_o *)StringLiteral_21792/*"point_status_side"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v66->POINT_STATUS_STRING, v67, v68, v69, v70, v71, v72, v73);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  UnityEngine_UI_Dropdown_DropdownItem_o *sideItems; // x20
  UnityEngine_Component_o *v13; // x0
  __int64 v14; // x1
  UnityEngine_Component_o *v15; // x20
  UnityEngine_GameObject_o *gameObject; // x22
  UnityEngine_GameObject_o *v17; // x0
  UnityEngine_GameObject_o *v18; // x0
  UISprite_o *klass; // x21

  if ( (byte_42E6BEB & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)spriteName, (_DWORD)method, v3);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_SideItemComponent___, v6, v7, v8);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v9, v10, v11);
    byte_42E6BEB = 1;
  }
  sideItems = (UnityEngine_UI_Dropdown_DropdownItem_o *)this->fields.sideItems;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v13 = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                     sideItems,
                                     (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_SideItemComponent___);
  if ( !v13 )
    goto LABEL_12;
  v15 = v13;
  gameObject = UnityEngine_Component__get_gameObject(v13, 0LL);
  v17 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SafeSetParent_32436524(gameObject, v17, 0LL);
  v18 = UnityEngine_Component__get_gameObject(v15, 0LL);
  GameObjectExtensions__ResetLocalScale(v18, 0LL);
  klass = (UISprite_o *)v15[1].klass;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(klass, spriteName, 0LL);
  v13 = (UnityEngine_Component_o *)v15[1].klass;
  if ( !v13 )
LABEL_12:
    sub_B5D69C(v13, v14);
  ((void (__fastcall *)(UnityEngine_Component_o *, void *))v13->klass[2]._1.typeMetadataHandle)(
    v13,
    v13->klass[2]._1.interopData);
  return (SideItemComponent_o *)v15;
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x3

  if ( (byte_42E6BE8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventPointBuffMaster___, eventId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7, v8);
    byte_42E6BE8 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventPointBuffMaster___)) == 0LL
    || (Instance = (DataManager_o *)EventPointBuffMaster__getEntityList(
                                      (EventPointBuffMaster_o *)Instance,
                                      eventId,
                                      0LL)) == 0LL )
  {
    sub_B5D69C(Instance, v10);
  }
  if ( Instance->fields.datalist )
    TitleInfoEventSideItemComponent__SetupBuffRateUI(this, eventId, (EventPointBuffEntity_array *)Instance, v11);
  else
    TitleInfoEventSideItemComponent__SetupTotalPointUI(this, eventId, (const MethodInfo *)Instance);
}


void __fastcall TitleInfoEventSideItemComponent__SetupBuffRateUI(
        TitleInfoEventSideItemComponent_o *this,
        int32_t eventId,
        EventPointBuffEntity_array *entitys,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  __int64 EventPointNoGroup; // x0
  __int64 v41; // x1
  signed int max_length; // w8
  __int64 v43; // x21
  signed int v44; // w9
  float value; // s0
  EventPointBuffEntity_o *v46; // x10
  __int64 eventPoint; // x11
  __int64 v48; // x20
  float v49; // s8
  System_Int32_array **v50; // x22
  double v51; // d0
  Il2CppObject *v52; // x0
  __int64 *v53; // x8
  System_Int32_array **v54; // x23
  Il2CppObject *v55; // x0
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  __int64 v62; // x20
  Il2CppObject *v63; // x0
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  System_Int32_array **v70; // x21
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  __int64 v77; // x8
  __int64 v78; // x8
  unsigned __int64 v79; // x28
  signed __int64 v80; // x22
  __int64 v81; // x23
  __int64 v82; // x27
  TitleInfoEventSideItemComponent_c *v83; // x0
  signed __int64 v84; // x25
  System_String_o *POINT_STATUS_STRING; // x21
  Il2CppObject *v86; // x0
  System_String_o *v87; // x0
  System_String_o *v88; // x0
  const MethodInfo *v89; // x2
  __int64 v90; // x21
  struct UnityEngine_Vector2_array *spritePositions; // x8
  struct UnityEngine_Vector2_array *labelPositions; // x8
  struct UnityEngine_Vector2_array *labelOutlineSizes; // x8
  struct UnityEngine_Vector2_array *v94; // x8
  struct System_Int32_array *labelFontSizes; // x8
  struct UnityEngine_Color_array *labelOutlineColors; // x8
  struct UILabel_Effect_array *labelOutlineStyles; // x8
  struct System_Boolean_array *labelApplyGradients; // x8
  struct UnityEngine_Color_array *labelGradientTops; // x8
  struct UnityEngine_Color_array *labelGradientBottoms; // x8
  TitleInfoEventSideItemComponent_c *klass; // x8
  unsigned int *v102; // x26
  System_String_array **v103; // x2
  System_String_array **v104; // x3
  System_Boolean_array **v105; // x4
  System_Int32_array **v106; // x5
  System_Int32_array *v107; // x6
  System_Int32_array *v108; // x7
  __int64 v109; // x0
  __int64 v110; // x0
  __int64 v111; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42E6BEA & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, eventId, (_DWORD)entitys, method);
    sub_B5D5C4(&long_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&float_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&string___TypeInfo, v16, v17, v18);
    sub_B5D5C4(&TitleInfoEventSideItemComponent_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_705/*"+{0:0.0}%"*/, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_14873/*"UNIT_REST_NONE"*/, v25, v26, v27);
    sub_B5D5C4(&StringLiteral_23800/*"{0:#,0}"*/, v28, v29, v30);
    sub_B5D5C4(&StringLiteral_706/*"+{0}%"*/, v31, v32, v33);
    sub_B5D5C4(&StringLiteral_16407/*"_{0:00}"*/, v34, v35, v36);
    sub_B5D5C4(&StringLiteral_973/*"0"*/, v37, v38, v39);
    byte_42E6BEA = 1;
  }
  EventPointNoGroup = UserEventPointMaster__GetEventPointNoGroup(eventId, 0LL);
  if ( !entitys )
    goto LABEL_82;
  max_length = entitys->max_length;
  v43 = EventPointNoGroup;
  if ( max_length < 1 )
  {
    v48 = 0LL;
    value = 0.0;
  }
  else
  {
    v44 = 0;
    value = 0.0;
    while ( 1 )
    {
      if ( v44 >= (unsigned int)max_length )
        goto LABEL_83;
      v46 = entitys->m_Items[v44];
      if ( !v46 )
        goto LABEL_82;
      eventPoint = v46->fields.eventPoint;
      if ( EventPointNoGroup < eventPoint )
        break;
      ++v44;
      value = (float)v46->fields.value;
      if ( v44 >= max_length )
      {
        v48 = 0LL;
        goto LABEL_13;
      }
    }
    v48 = eventPoint - EventPointNoGroup;
  }
LABEL_13:
  v49 = value / 10.0;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v50 = (System_Int32_array **)LocalizationManager__Get((System_String_o *)StringLiteral_14873/*"UNIT_REST_NONE"*/, 0LL);
  if ( v49 == INFINITY )
    v51 = -v49;
  else
    v51 = v49;
  *(float *)&v111 = v49;
  if ( v49 == (float)(int)v51 )
  {
    v52 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v111);
    v53 = &StringLiteral_706/*"+{0}%"*/;
  }
  else
  {
    v52 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v111);
    v53 = &StringLiteral_705/*"+{0:0.0}%"*/;
  }
  v54 = (System_Int32_array **)System_String__Format((System_String_o *)*v53, v52, 0LL);
  if ( (_DWORD)v48 )
  {
    v111 = v48;
    v55 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v111);
    v50 = (System_Int32_array **)System_String__Format((System_String_o *)StringLiteral_23800/*"{0:#,0}"*/, v55, 0LL);
  }
  EventPointNoGroup = sub_B5D5DC(string___TypeInfo, 3LL);
  if ( !EventPointNoGroup )
LABEL_82:
    sub_B5D69C(EventPointNoGroup, v41);
  v62 = EventPointNoGroup;
  if ( v54 )
  {
    EventPointNoGroup = sub_B5D684(v54, *(_QWORD *)(*(_QWORD *)EventPointNoGroup + 64LL));
    if ( !EventPointNoGroup )
      goto LABEL_84;
  }
  if ( !*(_DWORD *)(v62 + 24) )
    goto LABEL_83;
  *(_QWORD *)(v62 + 32) = v54;
  sub_B5D560((BattleServantConfConponent_o *)(v62 + 32), v54, v56, v57, v58, v59, v60, v61);
  v111 = v43;
  v63 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v111);
  EventPointNoGroup = (__int64)System_String__Format((System_String_o *)StringLiteral_23800/*"{0:#,0}"*/, v63, 0LL);
  v70 = (System_Int32_array **)EventPointNoGroup;
  if ( EventPointNoGroup )
  {
    EventPointNoGroup = sub_B5D684(EventPointNoGroup, *(_QWORD *)(*(_QWORD *)v62 + 64LL));
    if ( !EventPointNoGroup )
      goto LABEL_84;
  }
  if ( *(_DWORD *)(v62 + 24) <= 1u )
    goto LABEL_83;
  *(_QWORD *)(v62 + 40) = v70;
  sub_B5D560((BattleServantConfConponent_o *)(v62 + 40), v70, v64, v65, v66, v67, v68, v69);
  if ( v50 )
  {
    EventPointNoGroup = sub_B5D684(v50, *(_QWORD *)(*(_QWORD *)v62 + 64LL));
    if ( !EventPointNoGroup )
    {
LABEL_84:
      v110 = sub_B5D6BC();
      sub_B5D668(v110, 0LL);
    }
  }
  if ( *(_DWORD *)(v62 + 24) <= 2u )
  {
LABEL_83:
    v109 = sub_B5D6C8(EventPointNoGroup);
    sub_B5D668(v109, 0LL);
  }
  *(_QWORD *)(v62 + 48) = v50;
  sub_B5D560((BattleServantConfConponent_o *)(v62 + 48), v50, v71, v72, v73, v74, v75, v76);
  v77 = *(_QWORD *)&this->fields.margin;
  if ( !v77 )
    goto LABEL_82;
  v78 = *(_QWORD *)(v77 + 24);
  if ( (int)v78 >= 1 )
  {
    v79 = 0LL;
    v80 = (int)v78;
    v81 = 32LL;
    v82 = 32LL;
    while ( 1 )
    {
      v83 = TitleInfoEventSideItemComponent_TypeInfo;
      if ( (BYTE3(TitleInfoEventSideItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TitleInfoEventSideItemComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TitleInfoEventSideItemComponent_TypeInfo);
        v83 = TitleInfoEventSideItemComponent_TypeInfo;
      }
      v84 = v79 + 1;
      POINT_STATUS_STRING = v83->static_fields->POINT_STATUS_STRING;
      LODWORD(v111) = v79 + 1;
      v86 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v111);
      v87 = System_String__Format((System_String_o *)StringLiteral_16407/*"_{0:00}"*/, v86, 0LL);
      v88 = System_String__Concat_44577788(POINT_STATUS_STRING, v87, 0LL);
      EventPointNoGroup = (__int64)TitleInfoEventSideItemComponent__CreateSideItem(this, v88, v89);
      if ( !EventPointNoGroup )
        goto LABEL_82;
      v90 = EventPointNoGroup;
      EventPointNoGroup = (__int64)UnityEngine_Component__get_gameObject(
                                     (UnityEngine_Component_o *)EventPointNoGroup,
                                     0LL);
      spritePositions = this->fields.spritePositions;
      if ( !spritePositions )
        goto LABEL_82;
      if ( v79 >= spritePositions->max_length )
        goto LABEL_83;
      GameObjectExtensions__SetLocalPosition_32430388(
        (UnityEngine_GameObject_o *)EventPointNoGroup,
        *(UnityEngine_Vector2_o *)((char *)&spritePositions->obj.klass + v82),
        0LL);
      EventPointNoGroup = *(_QWORD *)(v90 + 24);
      if ( !EventPointNoGroup )
        goto LABEL_82;
      EventPointNoGroup = (__int64)UnityEngine_Component__get_gameObject(
                                     (UnityEngine_Component_o *)EventPointNoGroup,
                                     0LL);
      labelPositions = this->fields.labelPositions;
      if ( !labelPositions )
        goto LABEL_82;
      if ( v79 >= labelPositions->max_length )
        goto LABEL_83;
      GameObjectExtensions__SetLocalPosition_32430388(
        (UnityEngine_GameObject_o *)EventPointNoGroup,
        *(UnityEngine_Vector2_o *)((char *)&labelPositions->obj.klass + v82),
        0LL);
      if ( v79 >= *(unsigned int *)(v62 + 24) )
        goto LABEL_83;
      EventPointNoGroup = *(_QWORD *)(v90 + 32);
      if ( !EventPointNoGroup )
        goto LABEL_82;
      UILabel__set_text((UILabel_o *)EventPointNoGroup, *(System_String_o **)(v62 + v82), 0LL);
      labelOutlineSizes = this->fields.labelOutlineSizes;
      if ( !labelOutlineSizes )
        goto LABEL_82;
      if ( v79 >= labelOutlineSizes->max_length )
        goto LABEL_83;
      EventPointNoGroup = *(_QWORD *)(v90 + 32);
      if ( !EventPointNoGroup )
        goto LABEL_82;
      UIWidget__set_height(
        (UIWidget_o *)EventPointNoGroup,
        *((_DWORD *)&labelOutlineSizes->m_Items[0].fields.y + v79),
        0LL);
      v94 = this->fields.labelOutlineSizes;
      if ( !v94 )
        goto LABEL_82;
      if ( v79 >= v94->max_length )
        goto LABEL_83;
      EventPointNoGroup = *(_QWORD *)(v90 + 32);
      if ( !EventPointNoGroup )
        goto LABEL_82;
      UILabel__set_fontSize((UILabel_o *)EventPointNoGroup, *((_DWORD *)&v94->m_Items[0].fields.y + v79), 0LL);
      EventPointNoGroup = *(_QWORD *)(v90 + 32);
      if ( !EventPointNoGroup )
        goto LABEL_82;
      EventPointNoGroup = (__int64)UnityEngine_Component__get_gameObject(
                                     (UnityEngine_Component_o *)EventPointNoGroup,
                                     0LL);
      labelFontSizes = this->fields.labelFontSizes;
      if ( !labelFontSizes )
        goto LABEL_82;
      if ( v79 >= labelFontSizes->max_length )
        goto LABEL_83;
      GameObjectExtensions__SetLocalPosition_32430388(
        (UnityEngine_GameObject_o *)EventPointNoGroup,
        *(UnityEngine_Vector2_o *)((char *)&labelFontSizes->obj.klass + v82),
        0LL);
      labelOutlineColors = this->fields.labelOutlineColors;
      if ( !labelOutlineColors )
        goto LABEL_82;
      if ( v79 >= labelOutlineColors->max_length )
        goto LABEL_83;
      EventPointNoGroup = *(_QWORD *)(v90 + 32);
      if ( !EventPointNoGroup )
        goto LABEL_82;
      UILabel__set_effectDistance(
        (UILabel_o *)EventPointNoGroup,
        *(UnityEngine_Vector2_o *)((char *)&labelOutlineColors->obj.klass + v82),
        0LL);
      labelOutlineStyles = this->fields.labelOutlineStyles;
      if ( !labelOutlineStyles )
        goto LABEL_82;
      if ( v79 >= labelOutlineStyles->max_length )
        goto LABEL_83;
      EventPointNoGroup = *(_QWORD *)(v90 + 32);
      if ( !EventPointNoGroup )
        goto LABEL_82;
      UILabel__set_effectColor(
        (UILabel_o *)EventPointNoGroup,
        *(UnityEngine_Color_o *)((char *)&labelOutlineStyles->obj + v81),
        0LL);
      labelApplyGradients = this->fields.labelApplyGradients;
      if ( !labelApplyGradients )
        goto LABEL_82;
      if ( v79 >= labelApplyGradients->max_length )
        goto LABEL_83;
      EventPointNoGroup = *(_QWORD *)(v90 + 32);
      if ( !EventPointNoGroup )
        goto LABEL_82;
      UILabel__set_effectStyle(
        (UILabel_o *)EventPointNoGroup,
        *(_DWORD *)&labelApplyGradients->m_Items[4 * v79 + 4],
        0LL);
      labelGradientTops = this->fields.labelGradientTops;
      if ( !labelGradientTops )
        goto LABEL_82;
      if ( v79 >= labelGradientTops->max_length )
        goto LABEL_83;
      EventPointNoGroup = *(_QWORD *)(v90 + 32);
      if ( !EventPointNoGroup )
        goto LABEL_82;
      UILabel__set_applyGradient(
        (UILabel_o *)EventPointNoGroup,
        *((_BYTE *)&labelGradientTops->m_Items[0].fields.g + v79),
        0LL);
      EventPointNoGroup = *(_QWORD *)(v90 + 32);
      if ( !EventPointNoGroup )
        goto LABEL_82;
      if ( *(_BYTE *)(EventPointNoGroup + 480) )
      {
        labelGradientBottoms = this->fields.labelGradientBottoms;
        if ( !labelGradientBottoms )
          goto LABEL_82;
        if ( v79 >= labelGradientBottoms->max_length )
          goto LABEL_83;
        UILabel__set_gradientTop(
          (UILabel_o *)EventPointNoGroup,
          *(UnityEngine_Color_o *)((char *)&labelGradientBottoms->obj + v81),
          0LL);
        klass = this[1].klass;
        if ( !klass )
          goto LABEL_82;
        if ( v79 >= LODWORD(klass->_1.namespaze) )
          goto LABEL_83;
        EventPointNoGroup = *(_QWORD *)(v90 + 32);
        if ( !EventPointNoGroup )
          goto LABEL_82;
        UILabel__set_gradientBottom(
          (UILabel_o *)EventPointNoGroup,
          *(UnityEngine_Color_o *)((char *)&klass->_1.image + v81),
          0LL);
      }
      v102 = *(unsigned int **)&this->fields.margin;
      if ( !v102 )
        goto LABEL_82;
      EventPointNoGroup = sub_B5D684(v90, *(_QWORD *)(*(_QWORD *)v102 + 64LL));
      if ( !EventPointNoGroup )
        goto LABEL_84;
      if ( v79 >= v102[6] )
        goto LABEL_83;
      *(_QWORD *)&v102[(unsigned __int64)v82 / 4] = v90;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v102[(unsigned __int64)v82 / 4],
        (System_Int32_array **)v90,
        v103,
        v104,
        v105,
        v106,
        v107,
        v108);
      v82 += 8LL;
      v81 += 16LL;
      ++v79;
      if ( v84 >= v80 )
        return;
    }
  }
}


void __fastcall TitleInfoEventSideItemComponent__SetupTotalPointUI(
        TitleInfoEventSideItemComponent_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  DataManager_o *Instance; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x2
  __int64 v20; // x8
  DataManager_o *v21; // x21
  unsigned __int64 v22; // x25
  int64_t v23; // x26
  char v24; // w27
  unsigned __int64 datalist_low; // x8
  __int64 v26; // x8
  int64_t EventPoint; // x22
  struct System_String_array *items; // x8
  DataManager_o *v29; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v31; // x0
  TitleInfoEventSideItemComponent_c *v32; // x8
  UnityEngine_GameObject_o *v33; // x24
  UILabel_o *lookup; // x24
  Il2CppObject *v35; // x0
  unsigned int *v36; // x22
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  unsigned int *v43; // x0
  __int64 v44; // x0
  __int64 v45; // x0
  int64_t v47; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42E6BE9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventPointGroupMaster___, eventId, (_DWORD)method, v3);
    sub_B5D5C4(&long_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&TitleInfoEventSideItemComponent_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_23800/*"{0:#,0}"*/, v14, v15, v16);
    byte_42E6BE9 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventPointGroupMaster___)) == 0LL
    || (Instance = (DataManager_o *)EventPointGroupMaster__getEntityList(
                                      (EventPointGroupMaster_o *)Instance,
                                      eventId,
                                      0LL),
        (v20 = *(_QWORD *)&this->fields.margin) == 0) )
  {
LABEL_33:
    sub_B5D69C(Instance, v18);
  }
  v21 = Instance;
  v22 = 0LL;
  v23 = 0LL;
  v24 = 0;
  while ( (__int64)v22 < *(int *)(v20 + 24) )
  {
    if ( !v21 )
      goto LABEL_33;
    datalist_low = LODWORD(v21->fields.datalist);
    if ( (__int64)v22 >= (int)datalist_low )
    {
      v24 = 1;
      EventPoint = v23;
    }
    else
    {
      if ( v22 >= datalist_low )
        goto LABEL_35;
      v26 = *((_QWORD *)&v21->fields.lookup + v22);
      if ( !v26 )
        goto LABEL_33;
      EventPoint = UserEventPointMaster__GetEventPoint(eventId, *(_DWORD *)(v26 + 20), 0LL);
      v23 += EventPoint;
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
      if ( v22 >= items->max_length )
        goto LABEL_35;
      Instance = (DataManager_o *)TitleInfoEventSideItemComponent__CreateSideItem(this, items->m_Items[v22], v19);
      if ( Instance )
      {
        v29 = Instance;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
        GameObjectExtensions__SetLocalPosition_32430604(
          gameObject,
          0.0,
          -(float)(*(float *)&this->fields.itemPositions * (float)(int)v22),
          0.0,
          0LL);
        if ( (v24 & 1) != 0 )
        {
          Instance = (DataManager_o *)v29->fields.lookup;
          if ( !Instance )
            goto LABEL_33;
          v31 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
          v32 = TitleInfoEventSideItemComponent_TypeInfo;
          v33 = v31;
          if ( (BYTE3(TitleInfoEventSideItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TitleInfoEventSideItemComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TitleInfoEventSideItemComponent_TypeInfo);
            v32 = TitleInfoEventSideItemComponent_TypeInfo;
          }
          GameObjectExtensions__AddLocalPosition_32431296(v33, v32->static_fields->ADD_LAST_LABEL_POS, 0LL);
          Instance = (DataManager_o *)v29->fields.lookup;
          if ( !Instance )
            goto LABEL_33;
          UILabel__set_effectDistance(
            (UILabel_o *)Instance,
            TitleInfoEventSideItemComponent_TypeInfo->static_fields->LAST_LABEL_OUTLINE,
            0LL);
          Instance = (DataManager_o *)v29->fields.lookup;
          if ( !Instance )
            goto LABEL_33;
          UIWidget__set_width((UIWidget_o *)Instance, 112, 0LL);
        }
        lookup = (UILabel_o *)v29->fields.lookup;
        v47 = EventPoint;
        v35 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v47);
        Instance = (DataManager_o *)System_String__Format((System_String_o *)StringLiteral_23800/*"{0:#,0}"*/, v35, 0LL);
        if ( lookup )
        {
          UILabel__set_text(lookup, (System_String_o *)Instance, 0LL);
          v36 = *(unsigned int **)&this->fields.margin;
          if ( v36 )
          {
            Instance = (DataManager_o *)sub_B5D684(v29, *(_QWORD *)(*(_QWORD *)v36 + 64LL));
            if ( !Instance )
            {
              v45 = sub_B5D6BC();
              sub_B5D668(v45, 0LL);
            }
            if ( v22 >= v36[6] )
            {
LABEL_35:
              v44 = sub_B5D6C8(Instance);
              sub_B5D668(v44, 0LL);
            }
            v43 = &v36[2 * v22];
            *((_QWORD *)v43 + 4) = v29;
            sub_B5D560(
              (BattleServantConfConponent_o *)(v43 + 8),
              (System_Int32_array **)v29,
              v37,
              v38,
              v39,
              v40,
              v41,
              v42);
            v20 = *(_QWORD *)&this->fields.margin;
            ++v22;
            if ( v20 )
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