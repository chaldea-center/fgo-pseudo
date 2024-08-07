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
  int32_t v15; // w2
  int32_t v16; // w3
  __int64 v17; // x19
  int32_t v18; // w1
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t v21; // w1
  int32_t v22; // w2
  int32_t v23; // w3
  int32_t v24; // w1
  int32_t v25; // w2
  int32_t v26; // w3
  int32_t v27; // w1
  struct TitleInfoEventSideItemComponent_StaticFields *static_fields; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  int32_t v31; // w1
  struct TitleInfoEventSideItemComponent_StaticFields *v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3

  if ( (byte_49FD607 & 1) == 0 )
  {
    sub_1B64A00(&string___TypeInfo, v1);
    sub_1B64A00(&TitleInfoEventSideItemComponent_TypeInfo, v2);
    sub_1B64A00(&StringLiteral_23850/*"time_status_side_04"*/, v3);
    sub_1B64A00(&StringLiteral_23847/*"time_status_side_01"*/, v4);
    sub_1B64A00(&StringLiteral_23849/*"time_status_side_03"*/, v5);
    sub_1B64A00(&StringLiteral_22477/*"point_status_side"*/, v6);
    sub_1B64A00(&StringLiteral_23848/*"time_status_side_02"*/, v7);
    byte_49FD607 = 1;
  }
  TitleInfoEventSideItemComponent_TypeInfo->static_fields->ADD_LAST_LABEL_POS = (struct UnityEngine_Vector2_o)0x3F800000BF800000LL;
  __asm { FMOV            V0.2S, #1.0 }
  TitleInfoEventSideItemComponent_TypeInfo->static_fields->LAST_LABEL_OUTLINE = _D0;
  v13 = sub_1B64AA8(string___TypeInfo, 4LL);
  if ( !v13 )
    sub_1B64C5C(0LL, v14);
  v17 = v13;
  if ( !*(_DWORD *)(v13 + 24) )
    goto LABEL_9;
  v18 = StringLiteral_23847/*"time_status_side_01"*/;
  *(_QWORD *)(v13 + 32) = StringLiteral_23847/*"time_status_side_01"*/;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v13 + 32), v18, v15, v16);
  if ( *(_DWORD *)(v17 + 24) <= 1u
    || (v21 = StringLiteral_23849/*"time_status_side_03"*/,
        *(_QWORD *)(v17 + 40) = StringLiteral_23849/*"time_status_side_03"*/,
        sub_1B649A4((ServantStatusBattleListViewItem_o *)(v17 + 40), v21, v19, v20),
        *(_DWORD *)(v17 + 24) <= 2u)
    || (v24 = StringLiteral_23848/*"time_status_side_02"*/,
        *(_QWORD *)(v17 + 48) = StringLiteral_23848/*"time_status_side_02"*/,
        sub_1B649A4((ServantStatusBattleListViewItem_o *)(v17 + 48), v24, v22, v23),
        *(_DWORD *)(v17 + 24) <= 3u) )
  {
LABEL_9:
    sub_1B64C64(v13, v14);
  }
  v27 = StringLiteral_23850/*"time_status_side_04"*/;
  *(_QWORD *)(v17 + 56) = StringLiteral_23850/*"time_status_side_04"*/;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v17 + 56), v27, v25, v26);
  static_fields = TitleInfoEventSideItemComponent_TypeInfo->static_fields;
  static_fields->TIME_STATUS_SPRITE_NAMES = (struct System_String_array *)v17;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&static_fields->TIME_STATUS_SPRITE_NAMES, v17, v29, v30);
  v31 = StringLiteral_22477/*"point_status_side"*/;
  v32 = TitleInfoEventSideItemComponent_TypeInfo->static_fields;
  v32->POINT_STATUS_STRING = (struct System_String_o *)StringLiteral_22477/*"point_status_side"*/;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v32->POINT_STATUS_STRING, v31, v33, v34);
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

  if ( (byte_49FD606 & 1) == 0 )
  {
    sub_1B64A00(&AtlasManager_TypeInfo, spriteName);
    sub_1B64A00(&Method_UnityEngine_Object_Instantiate_SideItemComponent___, v5);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v6);
    byte_49FD606 = 1;
  }
  clone = (Il2CppObject *)this->fields.clone;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__Instantiate_object_(
         clone,
         (const MethodInfo_2EBE594 *)Method_UnityEngine_Object_Instantiate_SideItemComponent___);
  if ( !v8 )
    goto LABEL_10;
  v10 = (UnityEngine_Component_o *)v8;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v8, 0LL);
  v12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SafeSetParent_33382640(gameObject, v12, 0LL);
  v13 = UnityEngine_Component__get_gameObject(v10, 0LL);
  GameObjectExtensions__ResetLocalScale(v13, 0LL);
  monitor = (UISprite_o *)v10[1].monitor;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(monitor, spriteName, 0LL);
  v8 = (Il2CppObject *)v10[1].monitor;
  if ( !v8 )
LABEL_10:
    sub_1B64C5C(v8, v9);
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

  if ( (byte_49FD603 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMasterData_EventPointBuffMaster___, *(_QWORD *)&eventId);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_49FD603 = 1;
  }
  Instance = (EventPointBuffEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (EventPointBuffEntity_array *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)Instance,
                                                   (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_EventPointBuffMaster___)) == 0LL
    || (Instance = EventPointBuffMaster__getEntityList((EventPointBuffMaster_o *)Instance, eventId, 0LL)) == 0LL )
  {
    sub_1B64C5C(Instance, v7);
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
  int32_t v41; // w2
  int32_t v42; // w3
  __int64 v43; // x20
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  Il2CppObject *v47; // x0
  int32_t v48; // w2
  int32_t v49; // w3
  int32_t v50; // w2
  int32_t v51; // w3
  __int64 v52; // x2
  __int64 v53; // x3
  __int64 v54; // x4
  struct SideItemComponent_array *sideItems; // x8
  __int64 v56; // x8
  unsigned __int64 v57; // x22
  unsigned __int64 v58; // x29
  __int64 v59; // x27
  __int64 i; // x28
  TitleInfoEventSideItemComponent_c *v61; // x0
  System_String_o *POINT_STATUS_STRING; // x21
  Il2CppObject *v63; // x0
  System_String_o *v64; // x0
  System_String_o *v65; // x0
  const MethodInfo *v66; // x2
  __int64 v67; // x21
  struct UnityEngine_Vector2_array *itemPositions; // x8
  struct UnityEngine_Vector2_array *spritePositions; // x8
  struct System_Int32_array *labelFontSizes; // x8
  struct System_Int32_array *v71; // x8
  struct UnityEngine_Vector2_array *labelPositions; // x8
  struct UnityEngine_Vector2_array *labelOutlineSizes; // x8
  struct UnityEngine_Color_array *labelOutlineColors; // x8
  struct UILabel_Effect_array *labelOutlineStyles; // x8
  struct System_Boolean_array *labelApplyGradients; // x8
  struct UnityEngine_Color_array *labelGradientTops; // x8
  struct UnityEngine_Color_array *labelGradientBottoms; // x8
  struct SideItemComponent_array *v79; // x25
  int32_t v80; // w2
  int32_t v81; // w3
  __int64 v82; // x0
  __int64 v83; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_49FD605 & 1) == 0 )
  {
    sub_1B64A00(&int_TypeInfo, *(_QWORD *)&eventId);
    sub_1B64A00(&long_TypeInfo, v7);
    sub_1B64A00(&LocalizationManager_TypeInfo, v8);
    sub_1B64A00(&float_TypeInfo, v9);
    sub_1B64A00(&string___TypeInfo, v10);
    sub_1B64A00(&TitleInfoEventSideItemComponent_TypeInfo, v11);
    sub_1B64A00(&StringLiteral_867/*"+{0:0.0}%"*/, v12);
    sub_1B64A00(&StringLiteral_14735/*"UNIT_REST_NONE"*/, v13);
    sub_1B64A00(&StringLiteral_24838/*"{0:#,0}"*/, v14);
    sub_1B64A00(&StringLiteral_868/*"+{0}%"*/, v15);
    sub_1B64A00(&StringLiteral_16543/*"_{0:00}"*/, v16);
    sub_1B64A00(&StringLiteral_1213/*"0"*/, v17);
    byte_49FD605 = 1;
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
  v28 = LocalizationManager__Get((System_String_o *)StringLiteral_14735/*"UNIT_REST_NONE"*/, 0LL);
  v32 = (float)(int)v27;
  if ( v27 == INFINITY )
    v32 = -2147500000.0;
  v33 = v28;
  *(float *)&v83 = v27;
  if ( v27 == v32 )
  {
    v34 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v83, v29, v30, v31);
    v35 = (System_String_o *)StringLiteral_868/*"+{0}%"*/;
  }
  else
  {
    v34 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v83, v29, v30, v31);
    v35 = (System_String_o *)StringLiteral_867/*"+{0:0.0}%"*/;
  }
  v39 = System_String__Format(v35, v34, 0LL);
  if ( (_DWORD)v26 )
  {
    v83 = v26;
    v40 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v83, v36, v37, v38);
    v33 = System_String__Format((System_String_o *)StringLiteral_24838/*"{0:#,0}"*/, v40, 0LL);
  }
  EventPointNoGroup = sub_1B64AA8(string___TypeInfo, 3LL);
  if ( !EventPointNoGroup )
    goto LABEL_73;
  v43 = EventPointNoGroup;
  if ( !*(_DWORD *)(EventPointNoGroup + 24)
    || (*(_QWORD *)(EventPointNoGroup + 32) = v39,
        sub_1B649A4((ServantStatusBattleListViewItem_o *)(EventPointNoGroup + 32), (int32_t)v39, v41, v42),
        v83 = v21,
        v47 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v83, v44, v45, v46),
        EventPointNoGroup = (__int64)System_String__Format((System_String_o *)StringLiteral_24838/*"{0:#,0}"*/, v47, 0LL),
        *(_DWORD *)(v43 + 24) <= 1u)
    || (*(_QWORD *)(v43 + 40) = EventPointNoGroup,
        sub_1B649A4((ServantStatusBattleListViewItem_o *)(v43 + 40), EventPointNoGroup, v48, v49),
        *(_DWORD *)(v43 + 24) <= 2u) )
  {
LABEL_74:
    sub_1B64C64(EventPointNoGroup, v19);
  }
  *(_QWORD *)(v43 + 48) = v33;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v43 + 48), (int32_t)v33, v50, v51);
  sideItems = this->fields.sideItems;
  if ( !sideItems )
LABEL_73:
    sub_1B64C5C(EventPointNoGroup, v19);
  v56 = *(_QWORD *)&sideItems->max_length;
  if ( (int)v56 >= 1 )
  {
    v57 = 0LL;
    v58 = 0LL;
    v59 = 4LL * (unsigned int)v56;
    for ( i = 36LL; ; i += 8LL )
    {
      v61 = TitleInfoEventSideItemComponent_TypeInfo;
      if ( !TitleInfoEventSideItemComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TitleInfoEventSideItemComponent_TypeInfo);
        v61 = TitleInfoEventSideItemComponent_TypeInfo;
      }
      POINT_STATUS_STRING = v61->static_fields->POINT_STATUS_STRING;
      LODWORD(v83) = v58 + 1;
      v63 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v83, v52, v53, v54);
      v64 = System_String__Format((System_String_o *)StringLiteral_16543/*"_{0:00}"*/, v63, 0LL);
      v65 = System_String__Concat_61385136(POINT_STATUS_STRING, v64, 0LL);
      EventPointNoGroup = (__int64)TitleInfoEventSideItemComponent__CreateSideItem(this, v65, v66);
      if ( !EventPointNoGroup )
        break;
      v67 = EventPointNoGroup;
      EventPointNoGroup = (__int64)UnityEngine_Component__get_gameObject(
                                     (UnityEngine_Component_o *)EventPointNoGroup,
                                     0LL);
      itemPositions = this->fields.itemPositions;
      if ( !itemPositions )
        break;
      if ( v58 >= itemPositions->max_length )
        goto LABEL_74;
      GameObjectExtensions__SetLocalPosition_33376744(
        (UnityEngine_GameObject_o *)EventPointNoGroup,
        *(UnityEngine_Vector2_o *)((char *)itemPositions + i - 4),
        0LL);
      EventPointNoGroup = *(_QWORD *)(v67 + 32);
      if ( !EventPointNoGroup )
        break;
      EventPointNoGroup = (__int64)UnityEngine_Component__get_gameObject(
                                     (UnityEngine_Component_o *)EventPointNoGroup,
                                     0LL);
      spritePositions = this->fields.spritePositions;
      if ( !spritePositions )
        break;
      if ( v58 >= spritePositions->max_length )
        goto LABEL_74;
      GameObjectExtensions__SetLocalPosition_33376744(
        (UnityEngine_GameObject_o *)EventPointNoGroup,
        *(UnityEngine_Vector2_o *)((char *)spritePositions + i - 4),
        0LL);
      if ( v58 >= *(unsigned int *)(v43 + 24) )
        goto LABEL_74;
      EventPointNoGroup = *(_QWORD *)(v67 + 40);
      if ( !EventPointNoGroup )
        break;
      UILabel__set_text((UILabel_o *)EventPointNoGroup, *(System_String_o **)(v43 + 32 + i - 36), 0LL);
      labelFontSizes = this->fields.labelFontSizes;
      if ( !labelFontSizes )
        break;
      if ( v58 >= labelFontSizes->max_length )
        goto LABEL_74;
      EventPointNoGroup = *(_QWORD *)(v67 + 40);
      if ( !EventPointNoGroup )
        break;
      UIWidget__set_height((UIWidget_o *)EventPointNoGroup, labelFontSizes->m_Items[v57 / 4 + 1], 0LL);
      v71 = this->fields.labelFontSizes;
      if ( !v71 )
        break;
      if ( v58 >= v71->max_length )
        goto LABEL_74;
      EventPointNoGroup = *(_QWORD *)(v67 + 40);
      if ( !EventPointNoGroup )
        break;
      UILabel__set_fontSize((UILabel_o *)EventPointNoGroup, v71->m_Items[v57 / 4 + 1], 0LL);
      EventPointNoGroup = *(_QWORD *)(v67 + 40);
      if ( !EventPointNoGroup )
        break;
      EventPointNoGroup = (__int64)UnityEngine_Component__get_gameObject(
                                     (UnityEngine_Component_o *)EventPointNoGroup,
                                     0LL);
      labelPositions = this->fields.labelPositions;
      if ( !labelPositions )
        break;
      if ( v58 >= labelPositions->max_length )
        goto LABEL_74;
      GameObjectExtensions__SetLocalPosition_33376744(
        (UnityEngine_GameObject_o *)EventPointNoGroup,
        *(UnityEngine_Vector2_o *)((char *)labelPositions + i - 4),
        0LL);
      labelOutlineSizes = this->fields.labelOutlineSizes;
      if ( !labelOutlineSizes )
        break;
      if ( v58 >= labelOutlineSizes->max_length )
        goto LABEL_74;
      EventPointNoGroup = *(_QWORD *)(v67 + 40);
      if ( !EventPointNoGroup )
        break;
      UILabel__set_effectDistance(
        (UILabel_o *)EventPointNoGroup,
        *(UnityEngine_Vector2_o *)((char *)labelOutlineSizes + i - 4),
        0LL);
      labelOutlineColors = this->fields.labelOutlineColors;
      if ( !labelOutlineColors )
        break;
      if ( v58 >= labelOutlineColors->max_length )
        goto LABEL_74;
      EventPointNoGroup = *(_QWORD *)(v67 + 40);
      if ( !EventPointNoGroup )
        break;
      UILabel__set_effectColor(
        (UILabel_o *)EventPointNoGroup,
        *(UnityEngine_Color_o *)&labelOutlineColors->m_Items[v57 / 4].fields.g,
        0LL);
      labelOutlineStyles = this->fields.labelOutlineStyles;
      if ( !labelOutlineStyles )
        break;
      if ( v58 >= labelOutlineStyles->max_length )
        goto LABEL_74;
      EventPointNoGroup = *(_QWORD *)(v67 + 40);
      if ( !EventPointNoGroup )
        break;
      UILabel__set_effectStyle((UILabel_o *)EventPointNoGroup, labelOutlineStyles->m_Items[v57 / 4 + 1], 0LL);
      labelApplyGradients = this->fields.labelApplyGradients;
      if ( !labelApplyGradients )
        break;
      if ( v58 >= labelApplyGradients->max_length )
        goto LABEL_74;
      EventPointNoGroup = *(_QWORD *)(v67 + 40);
      if ( !EventPointNoGroup )
        break;
      UILabel__set_applyGradient((UILabel_o *)EventPointNoGroup, labelApplyGradients->m_Items[v58 + 4], 0LL);
      EventPointNoGroup = *(_QWORD *)(v67 + 40);
      if ( !EventPointNoGroup )
        break;
      if ( *(_BYTE *)(EventPointNoGroup + 488) )
      {
        labelGradientTops = this->fields.labelGradientTops;
        if ( !labelGradientTops )
          goto LABEL_73;
        if ( v58 >= labelGradientTops->max_length )
          goto LABEL_74;
        UILabel__set_gradientTop(
          (UILabel_o *)EventPointNoGroup,
          *(UnityEngine_Color_o *)&labelGradientTops->m_Items[v57 / 4].fields.g,
          0LL);
        labelGradientBottoms = this->fields.labelGradientBottoms;
        if ( !labelGradientBottoms )
          goto LABEL_73;
        if ( v58 >= labelGradientBottoms->max_length )
          goto LABEL_74;
        EventPointNoGroup = *(_QWORD *)(v67 + 40);
        if ( !EventPointNoGroup )
          goto LABEL_73;
        UILabel__set_gradientBottom(
          (UILabel_o *)EventPointNoGroup,
          *(UnityEngine_Color_o *)&labelGradientBottoms->m_Items[v57 / 4].fields.g,
          0LL);
      }
      v79 = this->fields.sideItems;
      if ( !v79 )
        goto LABEL_73;
      EventPointNoGroup = sub_1B64B3C(v67, v79->obj.klass->_1.element_class);
      if ( !EventPointNoGroup )
      {
        v82 = sub_1B64C80(0LL);
        sub_1B64B28(v82, 0LL);
      }
      if ( v58 >= v79->max_length )
        goto LABEL_74;
      *(_QWORD *)((char *)v79 + i - 4) = v67;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)((char *)v79 + i - 4), v67, v80, v81);
      v57 += 4LL;
      ++v58;
      if ( v59 == v57 )
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
  DataManager_o *v20; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  UnityEngine_GameObject_o *v25; // x0
  TitleInfoEventSideItemComponent_c *v26; // x8
  UnityEngine_GameObject_o *v27; // x24
  UILabel_o *datalist; // x24
  Il2CppObject *v29; // x0
  struct SideItemComponent_array *v30; // x23
  int32_t v31; // w2
  int32_t v32; // w3
  Il2CppClass **v33; // x0
  __int64 v34; // x0
  int64_t v36; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_49FD604 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMasterData_EventPointGroupMaster___, *(_QWORD *)&eventId);
    sub_1B64A00(&long_TypeInfo, v4);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_1B64A00(&TitleInfoEventSideItemComponent_TypeInfo, v6);
    sub_1B64A00(&StringLiteral_24838/*"{0:#,0}"*/, v7);
    byte_49FD604 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_EventPointGroupMaster___)) == 0LL
    || (Instance = (DataManager_o *)EventPointGroupMaster__getEntityList(
                                      (EventPointGroupMaster_o *)Instance,
                                      eventId,
                                      0LL),
        (sideItems = this->fields.sideItems) == 0LL) )
  {
LABEL_31:
    sub_1B64C5C(Instance, v9);
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
        v20 = Instance;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
        GameObjectExtensions__SetLocalPosition_33376952(
          gameObject,
          0.0,
          (float)(int)v13 * (float)-this->fields.margin,
          0.0,
          0LL);
        if ( (v15 & 1) != 0 )
        {
          Instance = (DataManager_o *)v20->fields.datalist;
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
          GameObjectExtensions__AddLocalPosition_33377616(v27, v26->static_fields->ADD_LAST_LABEL_POS, 0LL);
          Instance = (DataManager_o *)v20->fields.datalist;
          if ( !Instance )
            goto LABEL_31;
          UILabel__set_effectDistance(
            (UILabel_o *)Instance,
            TitleInfoEventSideItemComponent_TypeInfo->static_fields->LAST_LABEL_OUTLINE,
            0LL);
          Instance = (DataManager_o *)v20->fields.datalist;
          if ( !Instance )
            goto LABEL_31;
          UIWidget__set_width((UIWidget_o *)Instance, 112, 0LL);
        }
        datalist = (UILabel_o *)v20->fields.datalist;
        v36 = EventPoint;
        v29 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v36, v22, v23, v24);
        Instance = (DataManager_o *)System_String__Format((System_String_o *)StringLiteral_24838/*"{0:#,0}"*/, v29, 0LL);
        if ( datalist )
        {
          UILabel__set_text(datalist, (System_String_o *)Instance, 0LL);
          v30 = this->fields.sideItems;
          if ( v30 )
          {
            Instance = (DataManager_o *)sub_1B64B3C(v20, v30->obj.klass->_1.element_class);
            if ( !Instance )
            {
              v34 = sub_1B64C80(0LL);
              sub_1B64B28(v34, 0LL);
            }
            if ( v13 >= v30->max_length )
LABEL_33:
              sub_1B64C64(Instance, v9);
            v33 = &v30->obj.klass + v13;
            v33[4] = (Il2CppClass *)v20;
            sub_1B649A4((ServantStatusBattleListViewItem_o *)(v33 + 4), (int32_t)v20, v31, v32);
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