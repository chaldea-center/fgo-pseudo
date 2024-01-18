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
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Int32_array **v21; // x19
  __int64 v22; // x0
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
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Int32_array **v44; // x1
  struct TitleInfoEventSideItemComponent_StaticFields *static_fields; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  struct TitleInfoEventSideItemComponent_StaticFields *v52; // x0
  System_Int32_array **v53; // x1
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  __int64 v60; // x0
  __int64 v61; // x0

  if ( (byte_4186364 & 1) == 0 )
  {
    sub_B2C35C(&string___TypeInfo, v1);
    sub_B2C35C(&TitleInfoEventSideItemComponent_TypeInfo, v2);
    sub_B2C35C(&StringLiteral_22693/*"time_status_side_04"*/, v3);
    sub_B2C35C(&StringLiteral_22690/*"time_status_side_01"*/, v4);
    sub_B2C35C(&StringLiteral_22692/*"time_status_side_03"*/, v5);
    sub_B2C35C(&StringLiteral_21503/*"point_status_side"*/, v6);
    sub_B2C35C(&StringLiteral_22691/*"time_status_side_02"*/, v7);
    byte_4186364 = 1;
  }
  TitleInfoEventSideItemComponent_TypeInfo->static_fields->ADD_LAST_LABEL_POS = (struct UnityEngine_Vector2_o)0x3F800000BF800000LL;
  __asm { FMOV            V0.2S, #1.0 }
  TitleInfoEventSideItemComponent_TypeInfo->static_fields->LAST_LABEL_OUTLINE = _D0;
  v13 = sub_B2C374(string___TypeInfo, 4LL);
  if ( !v13 )
    sub_B2C434(0LL, v14);
  v21 = (System_Int32_array **)v13;
  v22 = StringLiteral_22690/*"time_status_side_01"*/;
  if ( StringLiteral_22690/*"time_status_side_01"*/ )
  {
    v22 = sub_B2C41C(StringLiteral_22690/*"time_status_side_01"*/, *(_QWORD *)&(*v21)->m_Items[9]);
    if ( !v22 )
      goto LABEL_26;
    v23 = (System_Int32_array **)StringLiteral_22690/*"time_status_side_01"*/;
  }
  else
  {
    v23 = 0LL;
  }
  if ( !*((_DWORD *)v21 + 6) )
    goto LABEL_25;
  v21[4] = (System_Int32_array *)v23;
  sub_B2C2F8((BattleServantConfConponent_o *)(v21 + 4), v23, v15, v16, v17, v18, v19, v20);
  v22 = StringLiteral_22692/*"time_status_side_03"*/;
  if ( StringLiteral_22692/*"time_status_side_03"*/ )
  {
    v22 = sub_B2C41C(StringLiteral_22692/*"time_status_side_03"*/, *(_QWORD *)&(*v21)->m_Items[9]);
    if ( !v22 )
      goto LABEL_26;
    v30 = (System_Int32_array **)StringLiteral_22692/*"time_status_side_03"*/;
  }
  else
  {
    v30 = 0LL;
  }
  if ( *((_DWORD *)v21 + 6) <= 1u )
    goto LABEL_25;
  v21[5] = (System_Int32_array *)v30;
  sub_B2C2F8((BattleServantConfConponent_o *)(v21 + 5), v30, v24, v25, v26, v27, v28, v29);
  v22 = StringLiteral_22691/*"time_status_side_02"*/;
  if ( StringLiteral_22691/*"time_status_side_02"*/ )
  {
    v22 = sub_B2C41C(StringLiteral_22691/*"time_status_side_02"*/, *(_QWORD *)&(*v21)->m_Items[9]);
    if ( !v22 )
      goto LABEL_26;
    v37 = (System_Int32_array **)StringLiteral_22691/*"time_status_side_02"*/;
  }
  else
  {
    v37 = 0LL;
  }
  if ( *((_DWORD *)v21 + 6) <= 2u )
    goto LABEL_25;
  v21[6] = (System_Int32_array *)v37;
  sub_B2C2F8((BattleServantConfConponent_o *)(v21 + 6), v37, v31, v32, v33, v34, v35, v36);
  v22 = StringLiteral_22693/*"time_status_side_04"*/;
  if ( StringLiteral_22693/*"time_status_side_04"*/ )
  {
    v22 = sub_B2C41C(StringLiteral_22693/*"time_status_side_04"*/, *(_QWORD *)&(*v21)->m_Items[9]);
    if ( v22 )
    {
      v44 = (System_Int32_array **)StringLiteral_22693/*"time_status_side_04"*/;
      goto LABEL_23;
    }
LABEL_26:
    v61 = sub_B2C454();
    sub_B2C400(v61, 0LL);
  }
  v44 = 0LL;
LABEL_23:
  if ( *((_DWORD *)v21 + 6) <= 3u )
  {
LABEL_25:
    v60 = sub_B2C460(v22);
    sub_B2C400(v60, 0LL);
  }
  v21[7] = (System_Int32_array *)v44;
  sub_B2C2F8((BattleServantConfConponent_o *)(v21 + 7), v44, v38, v39, v40, v41, v42, v43);
  static_fields = TitleInfoEventSideItemComponent_TypeInfo->static_fields;
  static_fields->TIME_STATUS_SPRITE_NAMES = (struct System_String_array *)v21;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&static_fields->TIME_STATUS_SPRITE_NAMES,
    v21,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  v52 = TitleInfoEventSideItemComponent_TypeInfo->static_fields;
  v53 = (System_Int32_array **)StringLiteral_21503/*"point_status_side"*/;
  v52->POINT_STATUS_STRING = (struct System_String_o *)StringLiteral_21503/*"point_status_side"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v52->POINT_STATUS_STRING, v53, v54, v55, v56, v57, v58, v59);
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
  __int64 v9; // x1
  UnityEngine_Component_o *v10; // x20
  UnityEngine_GameObject_o *gameObject; // x22
  UnityEngine_GameObject_o *v12; // x0
  UnityEngine_GameObject_o *v13; // x0
  UISprite_o *klass; // x21

  if ( (byte_4186363 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, spriteName);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_SideItemComponent___, v5);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    byte_4186363 = 1;
  }
  sideItems = (UnityEngine_UI_Dropdown_DropdownItem_o *)this->fields.sideItems;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v8 = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                    sideItems,
                                    (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_SideItemComponent___);
  if ( !v8 )
    goto LABEL_12;
  v10 = v8;
  gameObject = UnityEngine_Component__get_gameObject(v8, 0LL);
  v12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SafeSetParent_31331952(gameObject, v12, 0LL);
  v13 = UnityEngine_Component__get_gameObject(v10, 0LL);
  GameObjectExtensions__ResetLocalScale(v13, 0LL);
  klass = (UISprite_o *)v10[1].klass;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(klass, spriteName, 0LL);
  v8 = (UnityEngine_Component_o *)v10[1].klass;
  if ( !v8 )
LABEL_12:
    sub_B2C434(v8, v9);
  ((void (__fastcall *)(UnityEngine_Component_o *, void *))v8->klass[2]._1.typeMetadataHandle)(
    v8,
    v8->klass[2]._1.interopData);
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
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3

  if ( (byte_4186360 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventPointBuffMaster___, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4186360 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventPointBuffMaster___)) == 0LL
    || (Instance = (DataManager_o *)EventPointBuffMaster__getEntityList(
                                      (EventPointBuffMaster_o *)Instance,
                                      eventId,
                                      0LL)) == 0LL )
  {
    sub_B2C434(Instance, v7);
  }
  if ( Instance->fields.datalist )
    TitleInfoEventSideItemComponent__SetupBuffRateUI(this, eventId, (EventPointBuffEntity_array *)Instance, v8);
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
  signed int v22; // w9
  float value; // s0
  EventPointBuffEntity_o *v24; // x10
  __int64 eventPoint; // x11
  __int64 v26; // x20
  float v27; // s8
  System_Int32_array **v28; // x22
  double v29; // d0
  Il2CppObject *v30; // x0
  __int64 *v31; // x8
  System_Int32_array **v32; // x23
  Il2CppObject *v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  __int64 v40; // x20
  Il2CppObject *v41; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_Int32_array **v48; // x21
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  __int64 v55; // x8
  __int64 v56; // x8
  unsigned __int64 v57; // x28
  signed __int64 v58; // x22
  __int64 v59; // x23
  __int64 v60; // x27
  TitleInfoEventSideItemComponent_c *v61; // x0
  signed __int64 v62; // x25
  System_String_o *POINT_STATUS_STRING; // x21
  Il2CppObject *v64; // x0
  System_String_o *v65; // x0
  System_String_o *v66; // x0
  const MethodInfo *v67; // x2
  __int64 v68; // x21
  struct UnityEngine_Vector2_array *spritePositions; // x8
  struct UnityEngine_Vector2_array *labelPositions; // x8
  struct UnityEngine_Vector2_array *labelOutlineSizes; // x8
  struct UnityEngine_Vector2_array *v72; // x8
  struct System_Int32_array *labelFontSizes; // x8
  struct UnityEngine_Color_array *labelOutlineColors; // x8
  struct UILabel_Effect_array *labelOutlineStyles; // x8
  struct System_Boolean_array *labelApplyGradients; // x8
  struct UnityEngine_Color_array *labelGradientTops; // x8
  struct UnityEngine_Color_array *labelGradientBottoms; // x8
  TitleInfoEventSideItemComponent_c *klass; // x8
  unsigned int *v80; // x26
  System_String_array **v81; // x2
  System_String_array **v82; // x3
  System_Boolean_array **v83; // x4
  System_Int32_array **v84; // x5
  System_Int32_array *v85; // x6
  System_Int32_array *v86; // x7
  __int64 v87; // x0
  __int64 v88; // x0
  __int64 v89; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4186362 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, *(_QWORD *)&eventId);
    sub_B2C35C(&long_TypeInfo, v7);
    sub_B2C35C(&LocalizationManager_TypeInfo, v8);
    sub_B2C35C(&float_TypeInfo, v9);
    sub_B2C35C(&string___TypeInfo, v10);
    sub_B2C35C(&TitleInfoEventSideItemComponent_TypeInfo, v11);
    sub_B2C35C(&StringLiteral_697/*"+{0:0.0}%"*/, v12);
    sub_B2C35C(&StringLiteral_14716/*"UNIT_REST_NONE"*/, v13);
    sub_B2C35C(&StringLiteral_23489/*"{0:#,0}"*/, v14);
    sub_B2C35C(&StringLiteral_698/*"+{0}%"*/, v15);
    sub_B2C35C(&StringLiteral_16213/*"_{0:00}"*/, v16);
    sub_B2C35C(&StringLiteral_953/*"0"*/, v17);
    byte_4186362 = 1;
  }
  EventPointNoGroup = UserEventPointMaster__GetEventPointNoGroup(eventId, 0LL);
  if ( !entitys )
    goto LABEL_82;
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
      if ( v22 >= (unsigned int)max_length )
        goto LABEL_83;
      v24 = entitys->m_Items[v22];
      if ( !v24 )
        goto LABEL_82;
      eventPoint = v24->fields.eventPoint;
      if ( EventPointNoGroup < eventPoint )
        break;
      ++v22;
      value = (float)v24->fields.value;
      if ( v22 >= max_length )
      {
        v26 = 0LL;
        goto LABEL_13;
      }
    }
    v26 = eventPoint - EventPointNoGroup;
  }
LABEL_13:
  v27 = value / 10.0;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v28 = (System_Int32_array **)LocalizationManager__Get((System_String_o *)StringLiteral_14716/*"UNIT_REST_NONE"*/, 0LL);
  if ( v27 == INFINITY )
    v29 = -v27;
  else
    v29 = v27;
  *(float *)&v89 = v27;
  if ( v27 == (float)(int)v29 )
  {
    v30 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v89);
    v31 = &StringLiteral_698/*"+{0}%"*/;
  }
  else
  {
    v30 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v89);
    v31 = &StringLiteral_697/*"+{0:0.0}%"*/;
  }
  v32 = (System_Int32_array **)System_String__Format((System_String_o *)*v31, v30, 0LL);
  if ( (_DWORD)v26 )
  {
    v89 = v26;
    v33 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v89);
    v28 = (System_Int32_array **)System_String__Format((System_String_o *)StringLiteral_23489/*"{0:#,0}"*/, v33, 0LL);
  }
  EventPointNoGroup = sub_B2C374(string___TypeInfo, 3LL);
  if ( !EventPointNoGroup )
LABEL_82:
    sub_B2C434(EventPointNoGroup, v19);
  v40 = EventPointNoGroup;
  if ( v32 )
  {
    EventPointNoGroup = sub_B2C41C(v32, *(_QWORD *)(*(_QWORD *)EventPointNoGroup + 64LL));
    if ( !EventPointNoGroup )
      goto LABEL_84;
  }
  if ( !*(_DWORD *)(v40 + 24) )
    goto LABEL_83;
  *(_QWORD *)(v40 + 32) = v32;
  sub_B2C2F8((BattleServantConfConponent_o *)(v40 + 32), v32, v34, v35, v36, v37, v38, v39);
  v89 = v21;
  v41 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v89);
  EventPointNoGroup = (__int64)System_String__Format((System_String_o *)StringLiteral_23489/*"{0:#,0}"*/, v41, 0LL);
  v48 = (System_Int32_array **)EventPointNoGroup;
  if ( EventPointNoGroup )
  {
    EventPointNoGroup = sub_B2C41C(EventPointNoGroup, *(_QWORD *)(*(_QWORD *)v40 + 64LL));
    if ( !EventPointNoGroup )
      goto LABEL_84;
  }
  if ( *(_DWORD *)(v40 + 24) <= 1u )
    goto LABEL_83;
  *(_QWORD *)(v40 + 40) = v48;
  sub_B2C2F8((BattleServantConfConponent_o *)(v40 + 40), v48, v42, v43, v44, v45, v46, v47);
  if ( v28 )
  {
    EventPointNoGroup = sub_B2C41C(v28, *(_QWORD *)(*(_QWORD *)v40 + 64LL));
    if ( !EventPointNoGroup )
    {
LABEL_84:
      v88 = sub_B2C454();
      sub_B2C400(v88, 0LL);
    }
  }
  if ( *(_DWORD *)(v40 + 24) <= 2u )
  {
LABEL_83:
    v87 = sub_B2C460(EventPointNoGroup);
    sub_B2C400(v87, 0LL);
  }
  *(_QWORD *)(v40 + 48) = v28;
  sub_B2C2F8((BattleServantConfConponent_o *)(v40 + 48), v28, v49, v50, v51, v52, v53, v54);
  v55 = *(_QWORD *)&this->fields.margin;
  if ( !v55 )
    goto LABEL_82;
  v56 = *(_QWORD *)(v55 + 24);
  if ( (int)v56 >= 1 )
  {
    v57 = 0LL;
    v58 = (int)v56;
    v59 = 32LL;
    v60 = 32LL;
    while ( 1 )
    {
      v61 = TitleInfoEventSideItemComponent_TypeInfo;
      if ( (BYTE3(TitleInfoEventSideItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TitleInfoEventSideItemComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TitleInfoEventSideItemComponent_TypeInfo);
        v61 = TitleInfoEventSideItemComponent_TypeInfo;
      }
      v62 = v57 + 1;
      POINT_STATUS_STRING = v61->static_fields->POINT_STATUS_STRING;
      LODWORD(v89) = v57 + 1;
      v64 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v89);
      v65 = System_String__Format((System_String_o *)StringLiteral_16213/*"_{0:00}"*/, v64, 0LL);
      v66 = System_String__Concat_44305532(POINT_STATUS_STRING, v65, 0LL);
      EventPointNoGroup = (__int64)TitleInfoEventSideItemComponent__CreateSideItem(this, v66, v67);
      if ( !EventPointNoGroup )
        goto LABEL_82;
      v68 = EventPointNoGroup;
      EventPointNoGroup = (__int64)UnityEngine_Component__get_gameObject(
                                     (UnityEngine_Component_o *)EventPointNoGroup,
                                     0LL);
      spritePositions = this->fields.spritePositions;
      if ( !spritePositions )
        goto LABEL_82;
      if ( v57 >= spritePositions->max_length )
        goto LABEL_83;
      GameObjectExtensions__SetLocalPosition_31325816(
        (UnityEngine_GameObject_o *)EventPointNoGroup,
        *(UnityEngine_Vector2_o *)((char *)&spritePositions->obj.klass + v60),
        0LL);
      EventPointNoGroup = *(_QWORD *)(v68 + 24);
      if ( !EventPointNoGroup )
        goto LABEL_82;
      EventPointNoGroup = (__int64)UnityEngine_Component__get_gameObject(
                                     (UnityEngine_Component_o *)EventPointNoGroup,
                                     0LL);
      labelPositions = this->fields.labelPositions;
      if ( !labelPositions )
        goto LABEL_82;
      if ( v57 >= labelPositions->max_length )
        goto LABEL_83;
      GameObjectExtensions__SetLocalPosition_31325816(
        (UnityEngine_GameObject_o *)EventPointNoGroup,
        *(UnityEngine_Vector2_o *)((char *)&labelPositions->obj.klass + v60),
        0LL);
      if ( v57 >= *(unsigned int *)(v40 + 24) )
        goto LABEL_83;
      EventPointNoGroup = *(_QWORD *)(v68 + 32);
      if ( !EventPointNoGroup )
        goto LABEL_82;
      UILabel__set_text((UILabel_o *)EventPointNoGroup, *(System_String_o **)(v40 + v60), 0LL);
      labelOutlineSizes = this->fields.labelOutlineSizes;
      if ( !labelOutlineSizes )
        goto LABEL_82;
      if ( v57 >= labelOutlineSizes->max_length )
        goto LABEL_83;
      EventPointNoGroup = *(_QWORD *)(v68 + 32);
      if ( !EventPointNoGroup )
        goto LABEL_82;
      UIWidget__set_height(
        (UIWidget_o *)EventPointNoGroup,
        *((_DWORD *)&labelOutlineSizes->m_Items[0].fields.y + v57),
        0LL);
      v72 = this->fields.labelOutlineSizes;
      if ( !v72 )
        goto LABEL_82;
      if ( v57 >= v72->max_length )
        goto LABEL_83;
      EventPointNoGroup = *(_QWORD *)(v68 + 32);
      if ( !EventPointNoGroup )
        goto LABEL_82;
      UILabel__set_fontSize((UILabel_o *)EventPointNoGroup, *((_DWORD *)&v72->m_Items[0].fields.y + v57), 0LL);
      EventPointNoGroup = *(_QWORD *)(v68 + 32);
      if ( !EventPointNoGroup )
        goto LABEL_82;
      EventPointNoGroup = (__int64)UnityEngine_Component__get_gameObject(
                                     (UnityEngine_Component_o *)EventPointNoGroup,
                                     0LL);
      labelFontSizes = this->fields.labelFontSizes;
      if ( !labelFontSizes )
        goto LABEL_82;
      if ( v57 >= labelFontSizes->max_length )
        goto LABEL_83;
      GameObjectExtensions__SetLocalPosition_31325816(
        (UnityEngine_GameObject_o *)EventPointNoGroup,
        *(UnityEngine_Vector2_o *)((char *)&labelFontSizes->obj.klass + v60),
        0LL);
      labelOutlineColors = this->fields.labelOutlineColors;
      if ( !labelOutlineColors )
        goto LABEL_82;
      if ( v57 >= labelOutlineColors->max_length )
        goto LABEL_83;
      EventPointNoGroup = *(_QWORD *)(v68 + 32);
      if ( !EventPointNoGroup )
        goto LABEL_82;
      UILabel__set_effectDistance(
        (UILabel_o *)EventPointNoGroup,
        *(UnityEngine_Vector2_o *)((char *)&labelOutlineColors->obj.klass + v60),
        0LL);
      labelOutlineStyles = this->fields.labelOutlineStyles;
      if ( !labelOutlineStyles )
        goto LABEL_82;
      if ( v57 >= labelOutlineStyles->max_length )
        goto LABEL_83;
      EventPointNoGroup = *(_QWORD *)(v68 + 32);
      if ( !EventPointNoGroup )
        goto LABEL_82;
      UILabel__set_effectColor(
        (UILabel_o *)EventPointNoGroup,
        *(UnityEngine_Color_o *)((char *)&labelOutlineStyles->obj + v59),
        0LL);
      labelApplyGradients = this->fields.labelApplyGradients;
      if ( !labelApplyGradients )
        goto LABEL_82;
      if ( v57 >= labelApplyGradients->max_length )
        goto LABEL_83;
      EventPointNoGroup = *(_QWORD *)(v68 + 32);
      if ( !EventPointNoGroup )
        goto LABEL_82;
      UILabel__set_effectStyle(
        (UILabel_o *)EventPointNoGroup,
        *(_DWORD *)&labelApplyGradients->m_Items[4 * v57 + 4],
        0LL);
      labelGradientTops = this->fields.labelGradientTops;
      if ( !labelGradientTops )
        goto LABEL_82;
      if ( v57 >= labelGradientTops->max_length )
        goto LABEL_83;
      EventPointNoGroup = *(_QWORD *)(v68 + 32);
      if ( !EventPointNoGroup )
        goto LABEL_82;
      UILabel__set_applyGradient(
        (UILabel_o *)EventPointNoGroup,
        *((_BYTE *)&labelGradientTops->m_Items[0].fields.g + v57),
        0LL);
      EventPointNoGroup = *(_QWORD *)(v68 + 32);
      if ( !EventPointNoGroup )
        goto LABEL_82;
      if ( *(_BYTE *)(EventPointNoGroup + 480) )
      {
        labelGradientBottoms = this->fields.labelGradientBottoms;
        if ( !labelGradientBottoms )
          goto LABEL_82;
        if ( v57 >= labelGradientBottoms->max_length )
          goto LABEL_83;
        UILabel__set_gradientTop(
          (UILabel_o *)EventPointNoGroup,
          *(UnityEngine_Color_o *)((char *)&labelGradientBottoms->obj + v59),
          0LL);
        klass = this[1].klass;
        if ( !klass )
          goto LABEL_82;
        if ( v57 >= LODWORD(klass->_1.namespaze) )
          goto LABEL_83;
        EventPointNoGroup = *(_QWORD *)(v68 + 32);
        if ( !EventPointNoGroup )
          goto LABEL_82;
        UILabel__set_gradientBottom(
          (UILabel_o *)EventPointNoGroup,
          *(UnityEngine_Color_o *)((char *)&klass->_1.image + v59),
          0LL);
      }
      v80 = *(unsigned int **)&this->fields.margin;
      if ( !v80 )
        goto LABEL_82;
      EventPointNoGroup = sub_B2C41C(v68, *(_QWORD *)(*(_QWORD *)v80 + 64LL));
      if ( !EventPointNoGroup )
        goto LABEL_84;
      if ( v57 >= v80[6] )
        goto LABEL_83;
      *(_QWORD *)&v80[(unsigned __int64)v60 / 4] = v68;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v80[(unsigned __int64)v60 / 4],
        (System_Int32_array **)v68,
        v81,
        v82,
        v83,
        v84,
        v85,
        v86);
      v60 += 8LL;
      v59 += 16LL;
      ++v57;
      if ( v62 >= v58 )
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
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  __int64 v11; // x8
  DataManager_o *v12; // x21
  unsigned __int64 v13; // x25
  int64_t v14; // x26
  char v15; // w27
  unsigned __int64 datalist_low; // x8
  __int64 v17; // x8
  int64_t EventPoint; // x22
  struct System_String_array *items; // x8
  DataManager_o *v20; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v22; // x0
  TitleInfoEventSideItemComponent_c *v23; // x8
  UnityEngine_GameObject_o *v24; // x24
  UILabel_o *lookup; // x24
  Il2CppObject *v26; // x0
  unsigned int *v27; // x22
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  unsigned int *v34; // x0
  __int64 v35; // x0
  __int64 v36; // x0
  int64_t v38; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4186361 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventPointGroupMaster___, *(_QWORD *)&eventId);
    sub_B2C35C(&long_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_B2C35C(&TitleInfoEventSideItemComponent_TypeInfo, v6);
    sub_B2C35C(&StringLiteral_23489/*"{0:#,0}"*/, v7);
    byte_4186361 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventPointGroupMaster___)) == 0LL
    || (Instance = (DataManager_o *)EventPointGroupMaster__getEntityList(
                                      (EventPointGroupMaster_o *)Instance,
                                      eventId,
                                      0LL),
        (v11 = *(_QWORD *)&this->fields.margin) == 0) )
  {
LABEL_33:
    sub_B2C434(Instance, v9);
  }
  v12 = Instance;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0;
  while ( (__int64)v13 < *(int *)(v11 + 24) )
  {
    if ( !v12 )
      goto LABEL_33;
    datalist_low = LODWORD(v12->fields.datalist);
    if ( (__int64)v13 >= (int)datalist_low )
    {
      v15 = 1;
      EventPoint = v14;
    }
    else
    {
      if ( v13 >= datalist_low )
        goto LABEL_35;
      v17 = *((_QWORD *)&v12->fields.lookup + v13);
      if ( !v17 )
        goto LABEL_33;
      EventPoint = UserEventPointMaster__GetEventPoint(eventId, *(_DWORD *)(v17 + 20), 0LL);
      v14 += EventPoint;
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
      if ( v13 >= items->max_length )
        goto LABEL_35;
      Instance = (DataManager_o *)TitleInfoEventSideItemComponent__CreateSideItem(this, items->m_Items[v13], v10);
      if ( Instance )
      {
        v20 = Instance;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
        GameObjectExtensions__SetLocalPosition_31326032(
          gameObject,
          0.0,
          -(float)(*(float *)&this->fields.itemPositions * (float)(int)v13),
          0.0,
          0LL);
        if ( (v15 & 1) != 0 )
        {
          Instance = (DataManager_o *)v20->fields.lookup;
          if ( !Instance )
            goto LABEL_33;
          v22 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
          v23 = TitleInfoEventSideItemComponent_TypeInfo;
          v24 = v22;
          if ( (BYTE3(TitleInfoEventSideItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TitleInfoEventSideItemComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TitleInfoEventSideItemComponent_TypeInfo);
            v23 = TitleInfoEventSideItemComponent_TypeInfo;
          }
          GameObjectExtensions__AddLocalPosition_31326724(v24, v23->static_fields->ADD_LAST_LABEL_POS, 0LL);
          Instance = (DataManager_o *)v20->fields.lookup;
          if ( !Instance )
            goto LABEL_33;
          UILabel__set_effectDistance(
            (UILabel_o *)Instance,
            TitleInfoEventSideItemComponent_TypeInfo->static_fields->LAST_LABEL_OUTLINE,
            0LL);
          Instance = (DataManager_o *)v20->fields.lookup;
          if ( !Instance )
            goto LABEL_33;
          UIWidget__set_width((UIWidget_o *)Instance, 112, 0LL);
        }
        lookup = (UILabel_o *)v20->fields.lookup;
        v38 = EventPoint;
        v26 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v38);
        Instance = (DataManager_o *)System_String__Format((System_String_o *)StringLiteral_23489/*"{0:#,0}"*/, v26, 0LL);
        if ( lookup )
        {
          UILabel__set_text(lookup, (System_String_o *)Instance, 0LL);
          v27 = *(unsigned int **)&this->fields.margin;
          if ( v27 )
          {
            Instance = (DataManager_o *)sub_B2C41C(v20, *(_QWORD *)(*(_QWORD *)v27 + 64LL));
            if ( !Instance )
            {
              v36 = sub_B2C454();
              sub_B2C400(v36, 0LL);
            }
            if ( v13 >= v27[6] )
            {
LABEL_35:
              v35 = sub_B2C460(Instance);
              sub_B2C400(v35, 0LL);
            }
            v34 = &v27[2 * v13];
            *((_QWORD *)v34 + 4) = v20;
            sub_B2C2F8(
              (BattleServantConfConponent_o *)(v34 + 8),
              (System_Int32_array **)v20,
              v28,
              v29,
              v30,
              v31,
              v32,
              v33);
            v11 = *(_QWORD *)&this->fields.margin;
            ++v13;
            if ( v11 )
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