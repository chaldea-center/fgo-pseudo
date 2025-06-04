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
  __int64 v15; // x2
  const MethodInfo *v16; // x3
  __int64 v17; // x19
  int32_t v18; // w1
  const MethodInfo *v19; // x3
  int32_t v20; // w1
  const MethodInfo *v21; // x3
  int32_t v22; // w1
  const MethodInfo *v23; // x3
  int32_t v24; // w1
  struct TitleInfoEventSideItemComponent_StaticFields *static_fields; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  int32_t v28; // w1
  struct TitleInfoEventSideItemComponent_StaticFields *v29; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3

  if ( (byte_4B009BE & 1) == 0 )
  {
    sub_1BC3008(&string___TypeInfo, v1);
    sub_1BC3008(&TitleInfoEventSideItemComponent_TypeInfo, v2);
    sub_1BC3008(&StringLiteral_23848/*"time_status_side_04"*/, v3);
    sub_1BC3008(&StringLiteral_23845/*"time_status_side_01"*/, v4);
    sub_1BC3008(&StringLiteral_23847/*"time_status_side_03"*/, v5);
    sub_1BC3008(&StringLiteral_22505/*"point_status_side"*/, v6);
    sub_1BC3008(&StringLiteral_23846/*"time_status_side_02"*/, v7);
    byte_4B009BE = 1;
  }
  TitleInfoEventSideItemComponent_TypeInfo->static_fields->ADD_LAST_LABEL_POS = (struct UnityEngine_Vector2_o)0x3F800000BF800000LL;
  __asm { FMOV            V0.2S, #1.0 }
  TitleInfoEventSideItemComponent_TypeInfo->static_fields->LAST_LABEL_OUTLINE = _D0;
  v13 = sub_1BC30B0(string___TypeInfo, 4LL);
  if ( !v13 )
    sub_1BC3264(0LL, v14);
  v17 = v13;
  if ( !*(_DWORD *)(v13 + 24) )
    goto LABEL_9;
  v18 = StringLiteral_23845/*"time_status_side_01"*/;
  *(_QWORD *)(v13 + 32) = StringLiteral_23845/*"time_status_side_01"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v13 + 32), v18, v15, v16);
  if ( *(_DWORD *)(v17 + 24) <= 1u
    || (v20 = StringLiteral_23847/*"time_status_side_03"*/,
        *(_QWORD *)(v17 + 40) = StringLiteral_23847/*"time_status_side_03"*/,
        sub_1BC2FAC((CGThumbnailListItem_o *)(v17 + 40), v20, v15, v19),
        *(_DWORD *)(v17 + 24) <= 2u)
    || (v22 = StringLiteral_23846/*"time_status_side_02"*/,
        *(_QWORD *)(v17 + 48) = StringLiteral_23846/*"time_status_side_02"*/,
        sub_1BC2FAC((CGThumbnailListItem_o *)(v17 + 48), v22, v15, v21),
        *(_DWORD *)(v17 + 24) <= 3u) )
  {
LABEL_9:
    sub_1BC326C(v13, v14, v15);
  }
  v24 = StringLiteral_23848/*"time_status_side_04"*/;
  *(_QWORD *)(v17 + 56) = StringLiteral_23848/*"time_status_side_04"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v17 + 56), v24, v15, v23);
  static_fields = TitleInfoEventSideItemComponent_TypeInfo->static_fields;
  static_fields->TIME_STATUS_SPRITE_NAMES = (struct System_String_array *)v17;
  sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->TIME_STATUS_SPRITE_NAMES, v17, v26, v27);
  v28 = StringLiteral_22505/*"point_status_side"*/;
  v29 = TitleInfoEventSideItemComponent_TypeInfo->static_fields;
  v29->POINT_STATUS_STRING = (struct System_String_o *)StringLiteral_22505/*"point_status_side"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v29->POINT_STATUS_STRING, v28, v30, v31);
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

  if ( (byte_4B009BD & 1) == 0 )
  {
    sub_1BC3008(&AtlasManager_TypeInfo, spriteName);
    sub_1BC3008(&Method_UnityEngine_Object_Instantiate_SideItemComponent___, v5);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v6);
    byte_4B009BD = 1;
  }
  clone = (Il2CppObject *)this->fields.clone;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__Instantiate_object_(
         clone,
         (const MethodInfo_308AE24 *)Method_UnityEngine_Object_Instantiate_SideItemComponent___);
  if ( !v8 )
    goto LABEL_10;
  v10 = (UnityEngine_Component_o *)v8;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v8, 0LL);
  v12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SafeSetParent_35217712(gameObject, v12, 0LL);
  v13 = UnityEngine_Component__get_gameObject(v10, 0LL);
  GameObjectExtensions__ResetLocalScale(v13, 0LL);
  monitor = (UISprite_o *)v10[1].monitor;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(monitor, spriteName, 0LL);
  v8 = (Il2CppObject *)v10[1].monitor;
  if ( !v8 )
LABEL_10:
    sub_1BC3264(v8, v9);
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

  if ( (byte_4B009BA & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_EventPointBuffMaster___, *(_QWORD *)&eventId);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4B009BA = 1;
  }
  Instance = (EventPointBuffEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (EventPointBuffEntity_array *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)Instance,
                                                   (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_EventPointBuffMaster___)) == 0LL
    || (Instance = EventPointBuffMaster__getEntityList((EventPointBuffMaster_o *)Instance, eventId, 0LL)) == 0LL )
  {
    sub_1BC3264(Instance, v7);
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
  __int64 v20; // x2
  signed int max_length; // w8
  __int64 v22; // x21
  int v23; // w9
  float value; // s0
  EventPointBuffEntity_o *v25; // x10
  __int64 eventPoint; // x11
  __int64 v27; // x20
  float v28; // s8
  System_String_o *v29; // x0
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  float v33; // s0
  System_String_o *v34; // x22
  Il2CppObject *v35; // x0
  System_String_o *v36; // x8
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  System_String_o *v40; // x23
  Il2CppObject *v41; // x0
  const MethodInfo *v42; // x3
  __int64 v43; // x20
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  Il2CppObject *v47; // x0
  const MethodInfo *v48; // x3
  const MethodInfo *v49; // x3
  __int64 v50; // x2
  __int64 v51; // x3
  __int64 v52; // x4
  struct SideItemComponent_array *sideItems; // x8
  __int64 v54; // x8
  unsigned __int64 v55; // x22
  unsigned __int64 v56; // x29
  __int64 v57; // x27
  __int64 i; // x28
  TitleInfoEventSideItemComponent_c *v59; // x0
  System_String_o *POINT_STATUS_STRING; // x21
  Il2CppObject *v61; // x0
  System_String_o *v62; // x0
  System_String_o *v63; // x0
  const MethodInfo *v64; // x2
  __int64 v65; // x21
  struct UnityEngine_Vector2_array *itemPositions; // x8
  struct UnityEngine_Vector2_array *spritePositions; // x8
  struct System_Int32_array *labelFontSizes; // x8
  struct System_Int32_array *v69; // x8
  struct UnityEngine_Vector2_array *labelPositions; // x8
  struct UnityEngine_Vector2_array *labelOutlineSizes; // x8
  struct UnityEngine_Color_array *labelOutlineColors; // x8
  struct UILabel_Effect_array *labelOutlineStyles; // x8
  struct System_Boolean_array *labelApplyGradients; // x8
  struct UnityEngine_Color_array *labelGradientTops; // x8
  struct UnityEngine_Color_array *labelGradientBottoms; // x8
  struct SideItemComponent_array *v77; // x25
  const MethodInfo *v78; // x3
  __int64 v79; // x0
  __int64 v80; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B009BC & 1) == 0 )
  {
    sub_1BC3008(&int_TypeInfo, *(_QWORD *)&eventId);
    sub_1BC3008(&long_TypeInfo, v7);
    sub_1BC3008(&LocalizationManager_TypeInfo, v8);
    sub_1BC3008(&float_TypeInfo, v9);
    sub_1BC3008(&string___TypeInfo, v10);
    sub_1BC3008(&TitleInfoEventSideItemComponent_TypeInfo, v11);
    sub_1BC3008(&StringLiteral_804/*"+{0:0.0}%"*/, v12);
    sub_1BC3008(&StringLiteral_14684/*"UNIT_REST_NONE"*/, v13);
    sub_1BC3008(&StringLiteral_24811/*"{0:#,0}"*/, v14);
    sub_1BC3008(&StringLiteral_805/*"+{0}%"*/, v15);
    sub_1BC3008(&StringLiteral_16471/*"_{0:00}"*/, v16);
    sub_1BC3008(&StringLiteral_1113/*"0"*/, v17);
    byte_4B009BC = 1;
  }
  EventPointNoGroup = UserEventPointMaster__GetEventPointNoGroup(eventId, 0LL);
  if ( !entitys )
    goto LABEL_73;
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
      if ( max_length == v23 )
        goto LABEL_74;
      v25 = entitys->m_Items[v23];
      if ( !v25 )
        goto LABEL_73;
      eventPoint = v25->fields.eventPoint;
      if ( EventPointNoGroup < eventPoint )
        break;
      ++v23;
      value = (float)v25->fields.value;
      if ( max_length == v23 )
      {
        v27 = 0LL;
        goto LABEL_13;
      }
    }
    v27 = eventPoint - EventPointNoGroup;
  }
LABEL_13:
  v28 = value / 10.0;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v29 = LocalizationManager__Get((System_String_o *)StringLiteral_14684/*"UNIT_REST_NONE"*/, 0LL);
  v33 = (float)(int)v28;
  if ( v28 == INFINITY )
    v33 = -2147500000.0;
  v34 = v29;
  *(float *)&v80 = v28;
  if ( v28 == v33 )
  {
    v35 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v80, v30, v31, v32);
    v36 = (System_String_o *)StringLiteral_805/*"+{0}%"*/;
  }
  else
  {
    v35 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v80, v30, v31, v32);
    v36 = (System_String_o *)StringLiteral_804/*"+{0:0.0}%"*/;
  }
  v40 = System_String__Format(v36, v35, 0LL);
  if ( (_DWORD)v27 )
  {
    v80 = v27;
    v41 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v80, v37, v38, v39);
    v34 = System_String__Format((System_String_o *)StringLiteral_24811/*"{0:#,0}"*/, v41, 0LL);
  }
  EventPointNoGroup = sub_1BC30B0(string___TypeInfo, 3LL);
  if ( !EventPointNoGroup )
    goto LABEL_73;
  v43 = EventPointNoGroup;
  if ( !*(_DWORD *)(EventPointNoGroup + 24)
    || (*(_QWORD *)(EventPointNoGroup + 32) = v40,
        sub_1BC2FAC((CGThumbnailListItem_o *)(EventPointNoGroup + 32), (int32_t)v40, v20, v42),
        v80 = v22,
        v47 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v80, v44, v45, v46),
        EventPointNoGroup = (__int64)System_String__Format((System_String_o *)StringLiteral_24811/*"{0:#,0}"*/, v47, 0LL),
        *(_DWORD *)(v43 + 24) <= 1u)
    || (*(_QWORD *)(v43 + 40) = EventPointNoGroup,
        sub_1BC2FAC((CGThumbnailListItem_o *)(v43 + 40), EventPointNoGroup, v20, v48),
        *(_DWORD *)(v43 + 24) <= 2u) )
  {
LABEL_74:
    sub_1BC326C(EventPointNoGroup, v19, v20);
  }
  *(_QWORD *)(v43 + 48) = v34;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v43 + 48), (int32_t)v34, v20, v49);
  sideItems = this->fields.sideItems;
  if ( !sideItems )
LABEL_73:
    sub_1BC3264(EventPointNoGroup, v19);
  v54 = *(_QWORD *)&sideItems->max_length;
  if ( (int)v54 >= 1 )
  {
    v55 = 0LL;
    v56 = 0LL;
    v57 = 4LL * (unsigned int)v54;
    for ( i = 36LL; ; i += 8LL )
    {
      v59 = TitleInfoEventSideItemComponent_TypeInfo;
      if ( !TitleInfoEventSideItemComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TitleInfoEventSideItemComponent_TypeInfo);
        v59 = TitleInfoEventSideItemComponent_TypeInfo;
      }
      POINT_STATUS_STRING = v59->static_fields->POINT_STATUS_STRING;
      LODWORD(v80) = v56 + 1;
      v61 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v80, v50, v51, v52);
      v62 = System_String__Format((System_String_o *)StringLiteral_16471/*"_{0:00}"*/, v61, 0LL);
      v63 = System_String__Concat_62348648(POINT_STATUS_STRING, v62, 0LL);
      EventPointNoGroup = (__int64)TitleInfoEventSideItemComponent__CreateSideItem(this, v63, v64);
      if ( !EventPointNoGroup )
        break;
      v65 = EventPointNoGroup;
      EventPointNoGroup = (__int64)UnityEngine_Component__get_gameObject(
                                     (UnityEngine_Component_o *)EventPointNoGroup,
                                     0LL);
      itemPositions = this->fields.itemPositions;
      if ( !itemPositions )
        break;
      if ( v56 >= itemPositions->max_length )
        goto LABEL_74;
      GameObjectExtensions__SetLocalPosition_35211816(
        (UnityEngine_GameObject_o *)EventPointNoGroup,
        *(UnityEngine_Vector2_o *)((char *)itemPositions + i - 4),
        0LL);
      EventPointNoGroup = *(_QWORD *)(v65 + 32);
      if ( !EventPointNoGroup )
        break;
      EventPointNoGroup = (__int64)UnityEngine_Component__get_gameObject(
                                     (UnityEngine_Component_o *)EventPointNoGroup,
                                     0LL);
      spritePositions = this->fields.spritePositions;
      if ( !spritePositions )
        break;
      if ( v56 >= spritePositions->max_length )
        goto LABEL_74;
      GameObjectExtensions__SetLocalPosition_35211816(
        (UnityEngine_GameObject_o *)EventPointNoGroup,
        *(UnityEngine_Vector2_o *)((char *)spritePositions + i - 4),
        0LL);
      if ( v56 >= *(unsigned int *)(v43 + 24) )
        goto LABEL_74;
      EventPointNoGroup = *(_QWORD *)(v65 + 40);
      if ( !EventPointNoGroup )
        break;
      UILabel__set_text((UILabel_o *)EventPointNoGroup, *(System_String_o **)(v43 + 32 + i - 36), 0LL);
      labelFontSizes = this->fields.labelFontSizes;
      if ( !labelFontSizes )
        break;
      if ( v56 >= labelFontSizes->max_length )
        goto LABEL_74;
      EventPointNoGroup = *(_QWORD *)(v65 + 40);
      if ( !EventPointNoGroup )
        break;
      UIWidget__set_height((UIWidget_o *)EventPointNoGroup, labelFontSizes->m_Items[v55 / 4 + 1], 0LL);
      v69 = this->fields.labelFontSizes;
      if ( !v69 )
        break;
      if ( v56 >= v69->max_length )
        goto LABEL_74;
      EventPointNoGroup = *(_QWORD *)(v65 + 40);
      if ( !EventPointNoGroup )
        break;
      UILabel__set_fontSize((UILabel_o *)EventPointNoGroup, v69->m_Items[v55 / 4 + 1], 0LL);
      EventPointNoGroup = *(_QWORD *)(v65 + 40);
      if ( !EventPointNoGroup )
        break;
      EventPointNoGroup = (__int64)UnityEngine_Component__get_gameObject(
                                     (UnityEngine_Component_o *)EventPointNoGroup,
                                     0LL);
      labelPositions = this->fields.labelPositions;
      if ( !labelPositions )
        break;
      if ( v56 >= labelPositions->max_length )
        goto LABEL_74;
      GameObjectExtensions__SetLocalPosition_35211816(
        (UnityEngine_GameObject_o *)EventPointNoGroup,
        *(UnityEngine_Vector2_o *)((char *)labelPositions + i - 4),
        0LL);
      labelOutlineSizes = this->fields.labelOutlineSizes;
      if ( !labelOutlineSizes )
        break;
      if ( v56 >= labelOutlineSizes->max_length )
        goto LABEL_74;
      EventPointNoGroup = *(_QWORD *)(v65 + 40);
      if ( !EventPointNoGroup )
        break;
      UILabel__set_effectDistance(
        (UILabel_o *)EventPointNoGroup,
        *(UnityEngine_Vector2_o *)((char *)labelOutlineSizes + i - 4),
        0LL);
      labelOutlineColors = this->fields.labelOutlineColors;
      if ( !labelOutlineColors )
        break;
      if ( v56 >= labelOutlineColors->max_length )
        goto LABEL_74;
      EventPointNoGroup = *(_QWORD *)(v65 + 40);
      if ( !EventPointNoGroup )
        break;
      UILabel__set_effectColor(
        (UILabel_o *)EventPointNoGroup,
        *(UnityEngine_Color_o *)&labelOutlineColors->m_Items[v55 / 4].fields.g,
        0LL);
      labelOutlineStyles = this->fields.labelOutlineStyles;
      if ( !labelOutlineStyles )
        break;
      if ( v56 >= labelOutlineStyles->max_length )
        goto LABEL_74;
      EventPointNoGroup = *(_QWORD *)(v65 + 40);
      if ( !EventPointNoGroup )
        break;
      UILabel__set_effectStyle((UILabel_o *)EventPointNoGroup, labelOutlineStyles->m_Items[v55 / 4 + 1], 0LL);
      labelApplyGradients = this->fields.labelApplyGradients;
      if ( !labelApplyGradients )
        break;
      if ( v56 >= labelApplyGradients->max_length )
        goto LABEL_74;
      EventPointNoGroup = *(_QWORD *)(v65 + 40);
      if ( !EventPointNoGroup )
        break;
      UILabel__set_applyGradient((UILabel_o *)EventPointNoGroup, labelApplyGradients->m_Items[v56 + 4], 0LL);
      EventPointNoGroup = *(_QWORD *)(v65 + 40);
      if ( !EventPointNoGroup )
        break;
      if ( *(_BYTE *)(EventPointNoGroup + 488) )
      {
        labelGradientTops = this->fields.labelGradientTops;
        if ( !labelGradientTops )
          goto LABEL_73;
        if ( v56 >= labelGradientTops->max_length )
          goto LABEL_74;
        UILabel__set_gradientTop(
          (UILabel_o *)EventPointNoGroup,
          *(UnityEngine_Color_o *)&labelGradientTops->m_Items[v55 / 4].fields.g,
          0LL);
        labelGradientBottoms = this->fields.labelGradientBottoms;
        if ( !labelGradientBottoms )
          goto LABEL_73;
        if ( v56 >= labelGradientBottoms->max_length )
          goto LABEL_74;
        EventPointNoGroup = *(_QWORD *)(v65 + 40);
        if ( !EventPointNoGroup )
          goto LABEL_73;
        UILabel__set_gradientBottom(
          (UILabel_o *)EventPointNoGroup,
          *(UnityEngine_Color_o *)&labelGradientBottoms->m_Items[v55 / 4].fields.g,
          0LL);
      }
      v77 = this->fields.sideItems;
      if ( !v77 )
        goto LABEL_73;
      EventPointNoGroup = sub_1BC3144(v65, v77->obj.klass->_1.element_class);
      if ( !EventPointNoGroup )
      {
        v79 = sub_1BC3288(0LL);
        sub_1BC3130(v79, 0LL);
      }
      if ( v56 >= v77->max_length )
        goto LABEL_74;
      *(_QWORD *)((char *)v77 + i - 4) = v65;
      sub_1BC2FAC((CGThumbnailListItem_o *)((char *)v77 + i - 4), v65, v20, v78);
      v55 += 4LL;
      ++v56;
      if ( v57 == v55 )
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
  const MethodInfo *v31; // x3
  Il2CppClass **v32; // x0
  __int64 v33; // x0
  int64_t v35; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B009BB & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_EventPointGroupMaster___, *(_QWORD *)&eventId);
    sub_1BC3008(&long_TypeInfo, v4);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_1BC3008(&TitleInfoEventSideItemComponent_TypeInfo, v6);
    sub_1BC3008(&StringLiteral_24811/*"{0:#,0}"*/, v7);
    byte_4B009BB = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_EventPointGroupMaster___)) == 0LL
    || (Instance = (DataManager_o *)EventPointGroupMaster__getEntityList(
                                      (EventPointGroupMaster_o *)Instance,
                                      eventId,
                                      0LL),
        (sideItems = this->fields.sideItems) == 0LL) )
  {
LABEL_31:
    sub_1BC3264(Instance, v9);
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
        GameObjectExtensions__SetLocalPosition_35212024(
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
          GameObjectExtensions__AddLocalPosition_35212688(v27, v26->static_fields->ADD_LAST_LABEL_POS, 0LL);
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
        v35 = EventPoint;
        v29 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v35, v22, v23, v24);
        Instance = (DataManager_o *)System_String__Format((System_String_o *)StringLiteral_24811/*"{0:#,0}"*/, v29, 0LL);
        if ( datalist )
        {
          UILabel__set_text(datalist, (System_String_o *)Instance, 0LL);
          v30 = this->fields.sideItems;
          if ( v30 )
          {
            Instance = (DataManager_o *)sub_1BC3144(v20, v30->obj.klass->_1.element_class);
            if ( !Instance )
            {
              v33 = sub_1BC3288(0LL);
              sub_1BC3130(v33, 0LL);
            }
            if ( v13 >= v30->max_length )
LABEL_33:
              sub_1BC326C(Instance, v9, v10);
            v32 = &v30->obj.klass + v13;
            v32[4] = (Il2CppClass *)v20;
            sub_1BC2FAC((CGThumbnailListItem_o *)(v32 + 4), (int32_t)v20, (int32_t)v10, v31);
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