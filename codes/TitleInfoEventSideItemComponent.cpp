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

  if ( (byte_42AE6F1 & 1) == 0 )
  {
    sub_B52984(&string___TypeInfo);
    sub_B52984(&TitleInfoEventSideItemComponent_TypeInfo);
    sub_B52984(&StringLiteral_22883/*"time_status_side_04"*/);
    sub_B52984(&StringLiteral_22880/*"time_status_side_01"*/);
    sub_B52984(&StringLiteral_22882/*"time_status_side_03"*/);
    sub_B52984(&StringLiteral_21679/*"point_status_side"*/);
    sub_B52984(&StringLiteral_22881/*"time_status_side_02"*/);
    byte_42AE6F1 = 1;
  }
  TitleInfoEventSideItemComponent_TypeInfo->static_fields->ADD_LAST_LABEL_POS = (struct UnityEngine_Vector2_o)0x3F800000BF800000LL;
  __asm { FMOV            V0.2S, #1.0 }
  TitleInfoEventSideItemComponent_TypeInfo->static_fields->LAST_LABEL_OUTLINE = _D0;
  v6 = sub_B5299C(string___TypeInfo, 4LL);
  if ( !v6 )
    sub_B52A5C(0LL, v7);
  v14 = (System_Int32_array **)v6;
  v15 = StringLiteral_22880/*"time_status_side_01"*/;
  if ( StringLiteral_22880/*"time_status_side_01"*/ )
  {
    v15 = sub_B52A44(StringLiteral_22880/*"time_status_side_01"*/, *(_QWORD *)&(*v14)->m_Items[9]);
    if ( !v15 )
      goto LABEL_26;
    v16 = (System_Int32_array **)StringLiteral_22880/*"time_status_side_01"*/;
  }
  else
  {
    v16 = 0LL;
  }
  if ( !*((_DWORD *)v14 + 6) )
    goto LABEL_25;
  v14[4] = (System_Int32_array *)v16;
  sub_B52920((BattleServantConfConponent_o *)(v14 + 4), v16, v8, v9, v10, v11, v12, v13);
  v15 = StringLiteral_22882/*"time_status_side_03"*/;
  if ( StringLiteral_22882/*"time_status_side_03"*/ )
  {
    v15 = sub_B52A44(StringLiteral_22882/*"time_status_side_03"*/, *(_QWORD *)&(*v14)->m_Items[9]);
    if ( !v15 )
      goto LABEL_26;
    v23 = (System_Int32_array **)StringLiteral_22882/*"time_status_side_03"*/;
  }
  else
  {
    v23 = 0LL;
  }
  if ( *((_DWORD *)v14 + 6) <= 1u )
    goto LABEL_25;
  v14[5] = (System_Int32_array *)v23;
  sub_B52920((BattleServantConfConponent_o *)(v14 + 5), v23, v17, v18, v19, v20, v21, v22);
  v15 = StringLiteral_22881/*"time_status_side_02"*/;
  if ( StringLiteral_22881/*"time_status_side_02"*/ )
  {
    v15 = sub_B52A44(StringLiteral_22881/*"time_status_side_02"*/, *(_QWORD *)&(*v14)->m_Items[9]);
    if ( !v15 )
      goto LABEL_26;
    v30 = (System_Int32_array **)StringLiteral_22881/*"time_status_side_02"*/;
  }
  else
  {
    v30 = 0LL;
  }
  if ( *((_DWORD *)v14 + 6) <= 2u )
    goto LABEL_25;
  v14[6] = (System_Int32_array *)v30;
  sub_B52920((BattleServantConfConponent_o *)(v14 + 6), v30, v24, v25, v26, v27, v28, v29);
  v15 = StringLiteral_22883/*"time_status_side_04"*/;
  if ( StringLiteral_22883/*"time_status_side_04"*/ )
  {
    v15 = sub_B52A44(StringLiteral_22883/*"time_status_side_04"*/, *(_QWORD *)&(*v14)->m_Items[9]);
    if ( v15 )
    {
      v37 = (System_Int32_array **)StringLiteral_22883/*"time_status_side_04"*/;
      goto LABEL_23;
    }
LABEL_26:
    v54 = sub_B52A7C();
    sub_B52A28(v54, 0LL);
  }
  v37 = 0LL;
LABEL_23:
  if ( *((_DWORD *)v14 + 6) <= 3u )
  {
LABEL_25:
    v53 = sub_B52A88(v15);
    sub_B52A28(v53, 0LL);
  }
  v14[7] = (System_Int32_array *)v37;
  sub_B52920((BattleServantConfConponent_o *)(v14 + 7), v37, v31, v32, v33, v34, v35, v36);
  static_fields = TitleInfoEventSideItemComponent_TypeInfo->static_fields;
  static_fields->TIME_STATUS_SPRITE_NAMES = (struct System_String_array *)v14;
  sub_B52920(
    (BattleServantConfConponent_o *)&static_fields->TIME_STATUS_SPRITE_NAMES,
    v14,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  v45 = TitleInfoEventSideItemComponent_TypeInfo->static_fields;
  v46 = (System_Int32_array **)StringLiteral_21679/*"point_status_side"*/;
  v45->POINT_STATUS_STRING = (struct System_String_o *)StringLiteral_21679/*"point_status_side"*/;
  sub_B52920((BattleServantConfConponent_o *)&v45->POINT_STATUS_STRING, v46, v47, v48, v49, v50, v51, v52);
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

  if ( (byte_42AE6F0 & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_SideItemComponent___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AE6F0 = 1;
  }
  sideItems = (UnityEngine_UI_Dropdown_DropdownItem_o *)this->fields.sideItems;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                    sideItems,
                                    (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_SideItemComponent___);
  if ( !v6 )
    goto LABEL_12;
  v8 = v6;
  gameObject = UnityEngine_Component__get_gameObject(v6, 0LL);
  v10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SafeSetParent_32091088(gameObject, v10, 0LL);
  v11 = UnityEngine_Component__get_gameObject(v8, 0LL);
  GameObjectExtensions__ResetLocalScale(v11, 0LL);
  klass = (UISprite_o *)v8[1].klass;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(klass, spriteName, 0LL);
  v6 = (UnityEngine_Component_o *)v8[1].klass;
  if ( !v6 )
LABEL_12:
    sub_B52A5C(v6, v7);
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

  if ( (byte_42AE6ED & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_EventPointBuffMaster___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AE6ED = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventPointBuffMaster___)) == 0LL
    || (Instance = (DataManager_o *)EventPointBuffMaster__getEntityList(
                                      (EventPointBuffMaster_o *)Instance,
                                      eventId,
                                      0LL)) == 0LL )
  {
    sub_B52A5C(Instance, v6);
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
  System_Int32_array **v17; // x22
  double v18; // d0
  Il2CppObject *v19; // x0
  __int64 *v20; // x8
  System_Int32_array **v21; // x23
  Il2CppObject *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  __int64 v29; // x20
  Il2CppObject *v30; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Int32_array **v37; // x21
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  __int64 v44; // x8
  __int64 v45; // x8
  unsigned __int64 v46; // x28
  signed __int64 v47; // x22
  __int64 v48; // x23
  __int64 v49; // x27
  TitleInfoEventSideItemComponent_c *v50; // x0
  signed __int64 v51; // x25
  System_String_o *POINT_STATUS_STRING; // x21
  Il2CppObject *v53; // x0
  System_String_o *v54; // x0
  System_String_o *v55; // x0
  const MethodInfo *v56; // x2
  __int64 v57; // x21
  struct UnityEngine_Vector2_array *spritePositions; // x8
  struct UnityEngine_Vector2_array *labelPositions; // x8
  struct UnityEngine_Vector2_array *labelOutlineSizes; // x8
  struct UnityEngine_Vector2_array *v61; // x8
  struct System_Int32_array *labelFontSizes; // x8
  struct UnityEngine_Color_array *labelOutlineColors; // x8
  struct UILabel_Effect_array *labelOutlineStyles; // x8
  struct System_Boolean_array *labelApplyGradients; // x8
  struct UnityEngine_Color_array *labelGradientTops; // x8
  struct UnityEngine_Color_array *labelGradientBottoms; // x8
  TitleInfoEventSideItemComponent_c *klass; // x8
  unsigned int *v69; // x26
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  __int64 v76; // x0
  __int64 v77; // x0
  __int64 v78; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42AE6EF & 1) == 0 )
  {
    sub_B52984(&int_TypeInfo);
    sub_B52984(&long_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&float_TypeInfo);
    sub_B52984(&string___TypeInfo);
    sub_B52984(&TitleInfoEventSideItemComponent_TypeInfo);
    sub_B52984(&StringLiteral_707/*"+{0:0.0}%"*/);
    sub_B52984(&StringLiteral_14814/*"UNIT_REST_NONE"*/);
    sub_B52984(&StringLiteral_23682/*"{0:#,0}"*/);
    sub_B52984(&StringLiteral_708/*"+{0}%"*/);
    sub_B52984(&StringLiteral_16322/*"_{0:00}"*/);
    sub_B52984(&StringLiteral_969/*"0"*/);
    byte_42AE6EF = 1;
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
  v17 = (System_Int32_array **)LocalizationManager__Get((System_String_o *)StringLiteral_14814/*"UNIT_REST_NONE"*/, 0LL);
  if ( v16 == INFINITY )
    v18 = -v16;
  else
    v18 = v16;
  *(float *)&v78 = v16;
  if ( v16 == (float)(int)v18 )
  {
    v19 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v78);
    v20 = &StringLiteral_708/*"+{0}%"*/;
  }
  else
  {
    v19 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v78);
    v20 = &StringLiteral_707/*"+{0:0.0}%"*/;
  }
  v21 = (System_Int32_array **)System_String__Format((System_String_o *)*v20, v19, 0LL);
  if ( (_DWORD)v15 )
  {
    v78 = v15;
    v22 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v78);
    v17 = (System_Int32_array **)System_String__Format((System_String_o *)StringLiteral_23682/*"{0:#,0}"*/, v22, 0LL);
  }
  EventPointNoGroup = sub_B5299C(string___TypeInfo, 3LL);
  if ( !EventPointNoGroup )
LABEL_82:
    sub_B52A5C(EventPointNoGroup, v8);
  v29 = EventPointNoGroup;
  if ( v21 )
  {
    EventPointNoGroup = sub_B52A44(v21, *(_QWORD *)(*(_QWORD *)EventPointNoGroup + 64LL));
    if ( !EventPointNoGroup )
      goto LABEL_84;
  }
  if ( !*(_DWORD *)(v29 + 24) )
    goto LABEL_83;
  *(_QWORD *)(v29 + 32) = v21;
  sub_B52920((BattleServantConfConponent_o *)(v29 + 32), v21, v23, v24, v25, v26, v27, v28);
  v78 = v10;
  v30 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v78);
  EventPointNoGroup = (__int64)System_String__Format((System_String_o *)StringLiteral_23682/*"{0:#,0}"*/, v30, 0LL);
  v37 = (System_Int32_array **)EventPointNoGroup;
  if ( EventPointNoGroup )
  {
    EventPointNoGroup = sub_B52A44(EventPointNoGroup, *(_QWORD *)(*(_QWORD *)v29 + 64LL));
    if ( !EventPointNoGroup )
      goto LABEL_84;
  }
  if ( *(_DWORD *)(v29 + 24) <= 1u )
    goto LABEL_83;
  *(_QWORD *)(v29 + 40) = v37;
  sub_B52920((BattleServantConfConponent_o *)(v29 + 40), v37, v31, v32, v33, v34, v35, v36);
  if ( v17 )
  {
    EventPointNoGroup = sub_B52A44(v17, *(_QWORD *)(*(_QWORD *)v29 + 64LL));
    if ( !EventPointNoGroup )
    {
LABEL_84:
      v77 = sub_B52A7C();
      sub_B52A28(v77, 0LL);
    }
  }
  if ( *(_DWORD *)(v29 + 24) <= 2u )
  {
LABEL_83:
    v76 = sub_B52A88(EventPointNoGroup);
    sub_B52A28(v76, 0LL);
  }
  *(_QWORD *)(v29 + 48) = v17;
  sub_B52920((BattleServantConfConponent_o *)(v29 + 48), v17, v38, v39, v40, v41, v42, v43);
  v44 = *(_QWORD *)&this->fields.margin;
  if ( !v44 )
    goto LABEL_82;
  v45 = *(_QWORD *)(v44 + 24);
  if ( (int)v45 >= 1 )
  {
    v46 = 0LL;
    v47 = (int)v45;
    v48 = 32LL;
    v49 = 32LL;
    while ( 1 )
    {
      v50 = TitleInfoEventSideItemComponent_TypeInfo;
      if ( (BYTE3(TitleInfoEventSideItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TitleInfoEventSideItemComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TitleInfoEventSideItemComponent_TypeInfo);
        v50 = TitleInfoEventSideItemComponent_TypeInfo;
      }
      v51 = v46 + 1;
      POINT_STATUS_STRING = v50->static_fields->POINT_STATUS_STRING;
      LODWORD(v78) = v46 + 1;
      v53 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v78);
      v54 = System_String__Format((System_String_o *)StringLiteral_16322/*"_{0:00}"*/, v53, 0LL);
      v55 = System_String__Concat_44568316(POINT_STATUS_STRING, v54, 0LL);
      EventPointNoGroup = (__int64)TitleInfoEventSideItemComponent__CreateSideItem(this, v55, v56);
      if ( !EventPointNoGroup )
        goto LABEL_82;
      v57 = EventPointNoGroup;
      EventPointNoGroup = (__int64)UnityEngine_Component__get_gameObject(
                                     (UnityEngine_Component_o *)EventPointNoGroup,
                                     0LL);
      spritePositions = this->fields.spritePositions;
      if ( !spritePositions )
        goto LABEL_82;
      if ( v46 >= spritePositions->max_length )
        goto LABEL_83;
      GameObjectExtensions__SetLocalPosition_32084952(
        (UnityEngine_GameObject_o *)EventPointNoGroup,
        *(UnityEngine_Vector2_o *)((char *)&spritePositions->obj.klass + v49),
        0LL);
      EventPointNoGroup = *(_QWORD *)(v57 + 24);
      if ( !EventPointNoGroup )
        goto LABEL_82;
      EventPointNoGroup = (__int64)UnityEngine_Component__get_gameObject(
                                     (UnityEngine_Component_o *)EventPointNoGroup,
                                     0LL);
      labelPositions = this->fields.labelPositions;
      if ( !labelPositions )
        goto LABEL_82;
      if ( v46 >= labelPositions->max_length )
        goto LABEL_83;
      GameObjectExtensions__SetLocalPosition_32084952(
        (UnityEngine_GameObject_o *)EventPointNoGroup,
        *(UnityEngine_Vector2_o *)((char *)&labelPositions->obj.klass + v49),
        0LL);
      if ( v46 >= *(unsigned int *)(v29 + 24) )
        goto LABEL_83;
      EventPointNoGroup = *(_QWORD *)(v57 + 32);
      if ( !EventPointNoGroup )
        goto LABEL_82;
      UILabel__set_text((UILabel_o *)EventPointNoGroup, *(System_String_o **)(v29 + v49), 0LL);
      labelOutlineSizes = this->fields.labelOutlineSizes;
      if ( !labelOutlineSizes )
        goto LABEL_82;
      if ( v46 >= labelOutlineSizes->max_length )
        goto LABEL_83;
      EventPointNoGroup = *(_QWORD *)(v57 + 32);
      if ( !EventPointNoGroup )
        goto LABEL_82;
      UIWidget__set_height(
        (UIWidget_o *)EventPointNoGroup,
        *((_DWORD *)&labelOutlineSizes->m_Items[0].fields.y + v46),
        0LL);
      v61 = this->fields.labelOutlineSizes;
      if ( !v61 )
        goto LABEL_82;
      if ( v46 >= v61->max_length )
        goto LABEL_83;
      EventPointNoGroup = *(_QWORD *)(v57 + 32);
      if ( !EventPointNoGroup )
        goto LABEL_82;
      UILabel__set_fontSize((UILabel_o *)EventPointNoGroup, *((_DWORD *)&v61->m_Items[0].fields.y + v46), 0LL);
      EventPointNoGroup = *(_QWORD *)(v57 + 32);
      if ( !EventPointNoGroup )
        goto LABEL_82;
      EventPointNoGroup = (__int64)UnityEngine_Component__get_gameObject(
                                     (UnityEngine_Component_o *)EventPointNoGroup,
                                     0LL);
      labelFontSizes = this->fields.labelFontSizes;
      if ( !labelFontSizes )
        goto LABEL_82;
      if ( v46 >= labelFontSizes->max_length )
        goto LABEL_83;
      GameObjectExtensions__SetLocalPosition_32084952(
        (UnityEngine_GameObject_o *)EventPointNoGroup,
        *(UnityEngine_Vector2_o *)((char *)&labelFontSizes->obj.klass + v49),
        0LL);
      labelOutlineColors = this->fields.labelOutlineColors;
      if ( !labelOutlineColors )
        goto LABEL_82;
      if ( v46 >= labelOutlineColors->max_length )
        goto LABEL_83;
      EventPointNoGroup = *(_QWORD *)(v57 + 32);
      if ( !EventPointNoGroup )
        goto LABEL_82;
      UILabel__set_effectDistance(
        (UILabel_o *)EventPointNoGroup,
        *(UnityEngine_Vector2_o *)((char *)&labelOutlineColors->obj.klass + v49),
        0LL);
      labelOutlineStyles = this->fields.labelOutlineStyles;
      if ( !labelOutlineStyles )
        goto LABEL_82;
      if ( v46 >= labelOutlineStyles->max_length )
        goto LABEL_83;
      EventPointNoGroup = *(_QWORD *)(v57 + 32);
      if ( !EventPointNoGroup )
        goto LABEL_82;
      UILabel__set_effectColor(
        (UILabel_o *)EventPointNoGroup,
        *(UnityEngine_Color_o *)((char *)&labelOutlineStyles->obj + v48),
        0LL);
      labelApplyGradients = this->fields.labelApplyGradients;
      if ( !labelApplyGradients )
        goto LABEL_82;
      if ( v46 >= labelApplyGradients->max_length )
        goto LABEL_83;
      EventPointNoGroup = *(_QWORD *)(v57 + 32);
      if ( !EventPointNoGroup )
        goto LABEL_82;
      UILabel__set_effectStyle(
        (UILabel_o *)EventPointNoGroup,
        *(_DWORD *)&labelApplyGradients->m_Items[4 * v46 + 4],
        0LL);
      labelGradientTops = this->fields.labelGradientTops;
      if ( !labelGradientTops )
        goto LABEL_82;
      if ( v46 >= labelGradientTops->max_length )
        goto LABEL_83;
      EventPointNoGroup = *(_QWORD *)(v57 + 32);
      if ( !EventPointNoGroup )
        goto LABEL_82;
      UILabel__set_applyGradient(
        (UILabel_o *)EventPointNoGroup,
        *((_BYTE *)&labelGradientTops->m_Items[0].fields.g + v46),
        0LL);
      EventPointNoGroup = *(_QWORD *)(v57 + 32);
      if ( !EventPointNoGroup )
        goto LABEL_82;
      if ( *(_BYTE *)(EventPointNoGroup + 480) )
      {
        labelGradientBottoms = this->fields.labelGradientBottoms;
        if ( !labelGradientBottoms )
          goto LABEL_82;
        if ( v46 >= labelGradientBottoms->max_length )
          goto LABEL_83;
        UILabel__set_gradientTop(
          (UILabel_o *)EventPointNoGroup,
          *(UnityEngine_Color_o *)((char *)&labelGradientBottoms->obj + v48),
          0LL);
        klass = this[1].klass;
        if ( !klass )
          goto LABEL_82;
        if ( v46 >= LODWORD(klass->_1.namespaze) )
          goto LABEL_83;
        EventPointNoGroup = *(_QWORD *)(v57 + 32);
        if ( !EventPointNoGroup )
          goto LABEL_82;
        UILabel__set_gradientBottom(
          (UILabel_o *)EventPointNoGroup,
          *(UnityEngine_Color_o *)((char *)&klass->_1.image + v48),
          0LL);
      }
      v69 = *(unsigned int **)&this->fields.margin;
      if ( !v69 )
        goto LABEL_82;
      EventPointNoGroup = sub_B52A44(v57, *(_QWORD *)(*(_QWORD *)v69 + 64LL));
      if ( !EventPointNoGroup )
        goto LABEL_84;
      if ( v46 >= v69[6] )
        goto LABEL_83;
      *(_QWORD *)&v69[(unsigned __int64)v49 / 4] = v57;
      sub_B52920(
        (BattleServantConfConponent_o *)&v69[(unsigned __int64)v49 / 4],
        (System_Int32_array **)v57,
        v70,
        v71,
        v72,
        v73,
        v74,
        v75);
      v49 += 8LL;
      v48 += 16LL;
      ++v46;
      if ( v51 >= v47 )
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
  UnityEngine_GameObject_o *v18; // x0
  TitleInfoEventSideItemComponent_c *v19; // x8
  UnityEngine_GameObject_o *v20; // x24
  UILabel_o *lookup; // x24
  Il2CppObject *v22; // x0
  unsigned int *v23; // x22
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  unsigned int *v30; // x0
  __int64 v31; // x0
  __int64 v32; // x0
  int64_t v34; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42AE6EE & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_EventPointGroupMaster___);
    sub_B52984(&long_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&TitleInfoEventSideItemComponent_TypeInfo);
    sub_B52984(&StringLiteral_23682/*"{0:#,0}"*/);
    byte_42AE6EE = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventPointGroupMaster___)) == 0LL
    || (Instance = (DataManager_o *)EventPointGroupMaster__getEntityList(
                                      (EventPointGroupMaster_o *)Instance,
                                      eventId,
                                      0LL),
        (v7 = *(_QWORD *)&this->fields.margin) == 0) )
  {
LABEL_33:
    sub_B52A5C(Instance, v5);
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
        GameObjectExtensions__SetLocalPosition_32085168(
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
          v18 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
          v19 = TitleInfoEventSideItemComponent_TypeInfo;
          v20 = v18;
          if ( (BYTE3(TitleInfoEventSideItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TitleInfoEventSideItemComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TitleInfoEventSideItemComponent_TypeInfo);
            v19 = TitleInfoEventSideItemComponent_TypeInfo;
          }
          GameObjectExtensions__AddLocalPosition_32085860(v20, v19->static_fields->ADD_LAST_LABEL_POS, 0LL);
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
        v34 = EventPoint;
        v22 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v34);
        Instance = (DataManager_o *)System_String__Format((System_String_o *)StringLiteral_23682/*"{0:#,0}"*/, v22, 0LL);
        if ( lookup )
        {
          UILabel__set_text(lookup, (System_String_o *)Instance, 0LL);
          v23 = *(unsigned int **)&this->fields.margin;
          if ( v23 )
          {
            Instance = (DataManager_o *)sub_B52A44(v16, *(_QWORD *)(*(_QWORD *)v23 + 64LL));
            if ( !Instance )
            {
              v32 = sub_B52A7C();
              sub_B52A28(v32, 0LL);
            }
            if ( v9 >= v23[6] )
            {
LABEL_35:
              v31 = sub_B52A88(Instance);
              sub_B52A28(v31, 0LL);
            }
            v30 = &v23[2 * v9];
            *((_QWORD *)v30 + 4) = v16;
            sub_B52920(
              (BattleServantConfConponent_o *)(v30 + 8),
              (System_Int32_array **)v16,
              v24,
              v25,
              v26,
              v27,
              v28,
              v29);
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