void TitleInfoEventSideItemComponent___cctor(const MethodInfo *method)
{
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  __int64 v10; // x19
  int32_t v11; // w1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w1
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w1
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int32_t v20; // w1
  struct TitleInfoEventSideItemComponent_StaticFields *static_fields; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int32_t v24; // w1
  struct TitleInfoEventSideItemComponent_StaticFields *v25; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3

  if ( (byte_4C556A2 & 1) == 0 )
  {
    sub_1C3E564(&string___TypeInfo);
    sub_1C3E564(&TitleInfoEventSideItemComponent_TypeInfo);
    sub_1C3E564(&StringLiteral_24106/*"time_status_side_04"*/);
    sub_1C3E564(&StringLiteral_24103/*"time_status_side_01"*/);
    sub_1C3E564(&StringLiteral_24105/*"time_status_side_03"*/);
    sub_1C3E564(&StringLiteral_22750/*"point_status_side"*/);
    sub_1C3E564(&StringLiteral_24104/*"time_status_side_02"*/);
    byte_4C556A2 = 1;
  }
  TitleInfoEventSideItemComponent_TypeInfo->static_fields->ADD_LAST_LABEL_POS = (struct UnityEngine_Vector2_o)0x3F800000BF800000LL;
  __asm { FMOV            V0.2S, #1.0 }
  TitleInfoEventSideItemComponent_TypeInfo->static_fields->LAST_LABEL_OUTLINE = _D0;
  v6 = sub_1C3E60C(string___TypeInfo, 4);
  if ( !v6 )
    sub_1C3E7C0(0, v7);
  v10 = v6;
  if ( !*(_DWORD *)(v6 + 24) )
    goto LABEL_9;
  v11 = StringLiteral_24103/*"time_status_side_01"*/;
  *(_QWORD *)(v6 + 32) = StringLiteral_24103/*"time_status_side_01"*/;
  sub_1C3E508((CGThumbnailListItem_o *)(v6 + 32), v11, v8, v9);
  if ( *(_DWORD *)(v10 + 24) <= 1u
    || (v14 = StringLiteral_24105/*"time_status_side_03"*/,
        *(_QWORD *)(v10 + 40) = StringLiteral_24105/*"time_status_side_03"*/,
        sub_1C3E508((CGThumbnailListItem_o *)(v10 + 40), v14, v12, v13),
        *(_DWORD *)(v10 + 24) <= 2u)
    || (v17 = StringLiteral_24104/*"time_status_side_02"*/,
        *(_QWORD *)(v10 + 48) = StringLiteral_24104/*"time_status_side_02"*/,
        sub_1C3E508((CGThumbnailListItem_o *)(v10 + 48), v17, v15, v16),
        *(_DWORD *)(v10 + 24) <= 3u) )
  {
LABEL_9:
    sub_1C3E7C8(v6, v7);
  }
  v20 = StringLiteral_24106/*"time_status_side_04"*/;
  *(_QWORD *)(v10 + 56) = StringLiteral_24106/*"time_status_side_04"*/;
  sub_1C3E508((CGThumbnailListItem_o *)(v10 + 56), v20, v18, v19);
  static_fields = TitleInfoEventSideItemComponent_TypeInfo->static_fields;
  static_fields->TIME_STATUS_SPRITE_NAMES = (struct System_String_array *)v10;
  sub_1C3E508((CGThumbnailListItem_o *)&static_fields->TIME_STATUS_SPRITE_NAMES, v10, v22, v23);
  v24 = StringLiteral_22750/*"point_status_side"*/;
  v25 = TitleInfoEventSideItemComponent_TypeInfo->static_fields;
  v25->POINT_STATUS_STRING = (struct System_String_o *)StringLiteral_22750/*"point_status_side"*/;
  sub_1C3E508((CGThumbnailListItem_o *)&v25->POINT_STATUS_STRING, v24, v26, v27);
}


void TitleInfoEventSideItemComponent___ctor(TitleInfoEventSideItemComponent_o *this, const MethodInfo *method)
{
  this->fields.margin = 48.0;
  TitleInfoEventInfoComponent___ctor((TitleInfoEventInfoComponent_o *)this, 0);
}


SideItemComponent_o *TitleInfoEventSideItemComponent__CreateSideItem(
        TitleInfoEventSideItemComponent_o *this,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  Il2CppObject *clone; // x20
  Il2CppObject *v6; // x0
  __int64 v7; // x1
  UnityEngine_Component_o *v8; // x20
  UnityEngine_GameObject_o *gameObject; // x22
  UnityEngine_GameObject_o *v10; // x0
  UnityEngine_GameObject_o *v11; // x0
  UISprite_o *monitor; // x21

  if ( (byte_4C556A1 & 1) == 0 )
  {
    sub_1C3E564(&AtlasManager_TypeInfo);
    sub_1C3E564(&Method_UnityEngine_Object_Instantiate_SideItemComponent___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C556A1 = 1;
  }
  clone = (Il2CppObject *)this->fields.clone;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__Instantiate_object_(
         clone,
         (const MethodInfo_3185EB4 *)Method_UnityEngine_Object_Instantiate_SideItemComponent___);
  if ( !v6 )
    goto LABEL_10;
  v8 = (UnityEngine_Component_o *)v6;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0);
  v10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SafeSetParent_36182084(gameObject, v10, 0);
  v11 = UnityEngine_Component__get_gameObject(v8, 0);
  GameObjectExtensions__ResetLocalScale(v11, 0);
  monitor = (UISprite_o *)v8[1].monitor;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(monitor, spriteName, 0);
  v6 = (Il2CppObject *)v8[1].monitor;
  if ( !v6 )
LABEL_10:
    sub_1C3E7C0(v6, v7);
  ((void (__fastcall *)(Il2CppObject *, const MethodInfo *))v6->klass->vtable[33].methodPtr)(
    v6,
    v6->klass->vtable[33].method);
  return (SideItemComponent_o *)v8;
}


bool TitleInfoEventSideItemComponent__IsDispPossible(TitleInfoEventSideItemComponent_o *this, const MethodInfo *method)
{
  return 1;
}


bool TitleInfoEventSideItemComponent__IsEventRaidBoss(
        TitleInfoEventSideItemComponent_o *this,
        const MethodInfo *method)
{
  return 0;
}


void TitleInfoEventSideItemComponent__Setup(
        TitleInfoEventSideItemComponent_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  EventPointBuffEntity_array *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_4C5569E & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_EventPointBuffMaster___);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C5569E = 1;
  }
  Instance = (EventPointBuffEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (EventPointBuffEntity_array *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)Instance,
                                                   (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_EventPointBuffMaster___)) == 0
    || (Instance = EventPointBuffMaster__getEntityList((EventPointBuffMaster_o *)Instance, eventId, 0)) == 0 )
  {
    sub_1C3E7C0(Instance, v6);
  }
  if ( Instance->max_length )
    TitleInfoEventSideItemComponent__SetupBuffRateUI(this, eventId, Instance, v7);
  else
    TitleInfoEventSideItemComponent__SetupTotalPointUI(this, eventId, (const MethodInfo *)Instance);
}


void TitleInfoEventSideItemComponent__SetupBuffRateUI(
        TitleInfoEventSideItemComponent_o *this,
        int32_t eventId,
        EventPointBuffEntity_array *entitys,
        const MethodInfo *method)
{
  __int64 EventPointNoGroup; // x0
  __int64 v8; // x1
  int max_length; // w8
  __int64 v10; // x21
  int v11; // w9
  float value; // s0
  EventPointBuffEntity_o *v13; // x10
  __int64 eventPoint; // x11
  __int64 v15; // x20
  float v16; // s8
  System_String_o *v17; // x0
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  __int64 v21; // x5
  __int64 v22; // x6
  __int64 v23; // x7
  float v24; // s0
  System_String_o *v25; // x22
  Il2CppObject *v26; // x0
  System_String_o *v27; // x8
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  __int64 v31; // x5
  __int64 v32; // x6
  __int64 v33; // x7
  System_String_o *v34; // x23
  Il2CppObject *v35; // x0
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  __int64 v38; // x20
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  __int64 v42; // x5
  __int64 v43; // x6
  __int64 v44; // x7
  Il2CppObject *v45; // x0
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  __int64 v50; // x2
  __int64 v51; // x3
  __int64 v52; // x4
  __int64 v53; // x5
  __int64 v54; // x6
  __int64 v55; // x7
  struct SideItemComponent_array *sideItems; // x8
  il2cpp_array_size_t v57; // x8
  unsigned __int64 v58; // x22
  unsigned __int64 v59; // x29
  __int64 v60; // x27
  __int64 i; // x28
  TitleInfoEventSideItemComponent_c *v62; // x0
  System_String_o *POINT_STATUS_STRING; // x21
  Il2CppObject *v64; // x0
  System_String_o *v65; // x0
  System_String_o *v66; // x0
  const MethodInfo *v67; // x2
  __int64 v68; // x21
  struct UnityEngine_Vector2_array *itemPositions; // x8
  struct UnityEngine_Vector2_array *spritePositions; // x8
  struct System_Int32_array *labelFontSizes; // x8
  struct System_Int32_array *v72; // x8
  struct UnityEngine_Vector2_array *labelPositions; // x8
  struct UnityEngine_Vector2_array *labelOutlineSizes; // x8
  struct UnityEngine_Color_array *labelOutlineColors; // x8
  struct UILabel_Effect_array *labelOutlineStyles; // x8
  struct System_Boolean_array *labelApplyGradients; // x8
  struct UnityEngine_Color_array *labelGradientTops; // x8
  struct UnityEngine_Color_array *labelGradientBottoms; // x8
  unsigned int *v80; // x25
  int32_t v81; // w2
  const MethodInfo *v82; // x3
  __int64 v83; // x0
  __int64 v84; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C556A0 & 1) == 0 )
  {
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&long_TypeInfo);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&float_TypeInfo);
    sub_1C3E564(&string___TypeInfo);
    sub_1C3E564(&TitleInfoEventSideItemComponent_TypeInfo);
    sub_1C3E564(&StringLiteral_809/*"+{0:0.0}%"*/);
    sub_1C3E564(&StringLiteral_14827/*"UNIT_REST_NONE"*/);
    sub_1C3E564(&StringLiteral_25072/*"{0:#,0}"*/);
    sub_1C3E564(&StringLiteral_810/*"+{0}%"*/);
    sub_1C3E564(&StringLiteral_16630/*"_{0:00}"*/);
    sub_1C3E564(&StringLiteral_1122/*"0"*/);
    byte_4C556A0 = 1;
  }
  EventPointNoGroup = UserEventPointMaster__GetEventPointNoGroup(eventId, 0);
  if ( !entitys )
    goto LABEL_73;
  max_length = entitys->max_length;
  v10 = EventPointNoGroup;
  if ( max_length < 1 )
  {
    v15 = 0;
    value = 0.0;
  }
  else
  {
    v11 = 0;
    value = 0.0;
    while ( 1 )
    {
      if ( max_length == v11 )
        goto LABEL_74;
      v13 = entitys->m_Items[v11];
      if ( !v13 )
        goto LABEL_73;
      eventPoint = v13->fields.eventPoint;
      if ( EventPointNoGroup < eventPoint )
        break;
      ++v11;
      value = (float)v13->fields.value;
      if ( max_length == v11 )
      {
        v15 = 0;
        goto LABEL_13;
      }
    }
    v15 = eventPoint - EventPointNoGroup;
  }
LABEL_13:
  v16 = value / 10.0;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_14827/*"UNIT_REST_NONE"*/, 0);
  v24 = (float)(int)v16;
  if ( v16 == INFINITY )
    v24 = -2147500000.0;
  v25 = v17;
  *(float *)&v84 = v16;
  if ( v16 == v24 )
  {
    v26 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v84, v18, v19, v20, v21, v22, v23);
    v27 = (System_String_o *)StringLiteral_810/*"+{0}%"*/;
  }
  else
  {
    v26 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v84, v18, v19, v20, v21, v22, v23);
    v27 = (System_String_o *)StringLiteral_809/*"+{0:0.0}%"*/;
  }
  v34 = System_String__Format(v27, v26, 0);
  if ( (_DWORD)v15 )
  {
    v84 = v15;
    v35 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v84, v28, v29, v30, v31, v32, v33);
    v25 = System_String__Format((System_String_o *)StringLiteral_25072/*"{0:#,0}"*/, v35, 0);
  }
  EventPointNoGroup = sub_1C3E60C(string___TypeInfo, 3);
  if ( !EventPointNoGroup )
    goto LABEL_73;
  v38 = EventPointNoGroup;
  if ( !*(_DWORD *)(EventPointNoGroup + 24)
    || (*(_QWORD *)(EventPointNoGroup + 32) = v34,
        sub_1C3E508((CGThumbnailListItem_o *)(EventPointNoGroup + 32), (int32_t)v34, v36, v37),
        v84 = v10,
        v45 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v84, v39, v40, v41, v42, v43, v44),
        EventPointNoGroup = (__int64)System_String__Format((System_String_o *)StringLiteral_25072/*"{0:#,0}"*/, v45, 0),
        *(_DWORD *)(v38 + 24) <= 1u)
    || (*(_QWORD *)(v38 + 40) = EventPointNoGroup,
        sub_1C3E508((CGThumbnailListItem_o *)(v38 + 40), EventPointNoGroup, v46, v47),
        *(_DWORD *)(v38 + 24) <= 2u) )
  {
LABEL_74:
    sub_1C3E7C8(EventPointNoGroup, v8);
  }
  *(_QWORD *)(v38 + 48) = v25;
  sub_1C3E508((CGThumbnailListItem_o *)(v38 + 48), (int32_t)v25, v48, v49);
  sideItems = this->fields.sideItems;
  if ( !sideItems )
LABEL_73:
    sub_1C3E7C0(EventPointNoGroup, v8);
  v57 = sideItems->max_length;
  if ( (int)v57 >= 1 )
  {
    v58 = 0;
    v59 = 0;
    v60 = 4LL * (unsigned int)v57;
    for ( i = 36; ; i += 8 )
    {
      v62 = TitleInfoEventSideItemComponent_TypeInfo;
      if ( !TitleInfoEventSideItemComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TitleInfoEventSideItemComponent_TypeInfo);
        v62 = TitleInfoEventSideItemComponent_TypeInfo;
      }
      POINT_STATUS_STRING = v62->static_fields->POINT_STATUS_STRING;
      LODWORD(v84) = v59 + 1;
      v64 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v84, v50, v51, v52, v53, v54, v55);
      v65 = System_String__Format((System_String_o *)StringLiteral_16630/*"_{0:00}"*/, v64, 0);
      v66 = System_String__Concat_63636468(POINT_STATUS_STRING, v65, 0);
      EventPointNoGroup = (__int64)TitleInfoEventSideItemComponent__CreateSideItem(this, v66, v67);
      if ( !EventPointNoGroup )
        break;
      v68 = EventPointNoGroup;
      EventPointNoGroup = (__int64)UnityEngine_Component__get_gameObject(
                                     (UnityEngine_Component_o *)EventPointNoGroup,
                                     0);
      itemPositions = this->fields.itemPositions;
      if ( !itemPositions )
        break;
      if ( v59 >= LODWORD(itemPositions->max_length) )
        goto LABEL_74;
      GameObjectExtensions__SetLocalPosition_36176188(
        (UnityEngine_GameObject_o *)EventPointNoGroup,
        *(UnityEngine_Vector2_o *)((char *)itemPositions + i - 4),
        0);
      EventPointNoGroup = *(_QWORD *)(v68 + 32);
      if ( !EventPointNoGroup )
        break;
      EventPointNoGroup = (__int64)UnityEngine_Component__get_gameObject(
                                     (UnityEngine_Component_o *)EventPointNoGroup,
                                     0);
      spritePositions = this->fields.spritePositions;
      if ( !spritePositions )
        break;
      if ( v59 >= LODWORD(spritePositions->max_length) )
        goto LABEL_74;
      GameObjectExtensions__SetLocalPosition_36176188(
        (UnityEngine_GameObject_o *)EventPointNoGroup,
        *(UnityEngine_Vector2_o *)((char *)spritePositions + i - 4),
        0);
      if ( v59 >= *(unsigned int *)(v38 + 24) )
        goto LABEL_74;
      EventPointNoGroup = *(_QWORD *)(v68 + 40);
      if ( !EventPointNoGroup )
        break;
      UILabel__set_text((UILabel_o *)EventPointNoGroup, *(System_String_o **)(v38 + 32 + i - 36), 0);
      labelFontSizes = this->fields.labelFontSizes;
      if ( !labelFontSizes )
        break;
      if ( v59 >= LODWORD(labelFontSizes->max_length) )
        goto LABEL_74;
      EventPointNoGroup = *(_QWORD *)(v68 + 40);
      if ( !EventPointNoGroup )
        break;
      UIWidget__set_height((UIWidget_o *)EventPointNoGroup, labelFontSizes->m_Items[v58 / 4], 0);
      v72 = this->fields.labelFontSizes;
      if ( !v72 )
        break;
      if ( v59 >= LODWORD(v72->max_length) )
        goto LABEL_74;
      EventPointNoGroup = *(_QWORD *)(v68 + 40);
      if ( !EventPointNoGroup )
        break;
      UILabel__set_fontSize((UILabel_o *)EventPointNoGroup, v72->m_Items[v58 / 4], 0);
      EventPointNoGroup = *(_QWORD *)(v68 + 40);
      if ( !EventPointNoGroup )
        break;
      EventPointNoGroup = (__int64)UnityEngine_Component__get_gameObject(
                                     (UnityEngine_Component_o *)EventPointNoGroup,
                                     0);
      labelPositions = this->fields.labelPositions;
      if ( !labelPositions )
        break;
      if ( v59 >= LODWORD(labelPositions->max_length) )
        goto LABEL_74;
      GameObjectExtensions__SetLocalPosition_36176188(
        (UnityEngine_GameObject_o *)EventPointNoGroup,
        *(UnityEngine_Vector2_o *)((char *)labelPositions + i - 4),
        0);
      labelOutlineSizes = this->fields.labelOutlineSizes;
      if ( !labelOutlineSizes )
        break;
      if ( v59 >= LODWORD(labelOutlineSizes->max_length) )
        goto LABEL_74;
      EventPointNoGroup = *(_QWORD *)(v68 + 40);
      if ( !EventPointNoGroup )
        break;
      UILabel__set_effectDistance(
        (UILabel_o *)EventPointNoGroup,
        *(UnityEngine_Vector2_o *)((char *)labelOutlineSizes + i - 4),
        0);
      labelOutlineColors = this->fields.labelOutlineColors;
      if ( !labelOutlineColors )
        break;
      if ( v59 >= LODWORD(labelOutlineColors->max_length) )
        goto LABEL_74;
      EventPointNoGroup = *(_QWORD *)(v68 + 40);
      if ( !EventPointNoGroup )
        break;
      UILabel__set_effectColor((UILabel_o *)EventPointNoGroup, labelOutlineColors->m_Items[v58 / 4], 0);
      labelOutlineStyles = this->fields.labelOutlineStyles;
      if ( !labelOutlineStyles )
        break;
      if ( v59 >= LODWORD(labelOutlineStyles->max_length) )
        goto LABEL_74;
      EventPointNoGroup = *(_QWORD *)(v68 + 40);
      if ( !EventPointNoGroup )
        break;
      UILabel__set_effectStyle((UILabel_o *)EventPointNoGroup, labelOutlineStyles->m_Items[v58 / 4], 0);
      labelApplyGradients = this->fields.labelApplyGradients;
      if ( !labelApplyGradients )
        break;
      if ( v59 >= LODWORD(labelApplyGradients->max_length) )
        goto LABEL_74;
      EventPointNoGroup = *(_QWORD *)(v68 + 40);
      if ( !EventPointNoGroup )
        break;
      UILabel__set_applyGradient((UILabel_o *)EventPointNoGroup, labelApplyGradients->m_Items[v59], 0);
      EventPointNoGroup = *(_QWORD *)(v68 + 40);
      if ( !EventPointNoGroup )
        break;
      if ( *(_BYTE *)(EventPointNoGroup + 488) )
      {
        labelGradientTops = this->fields.labelGradientTops;
        if ( !labelGradientTops )
          goto LABEL_73;
        if ( v59 >= LODWORD(labelGradientTops->max_length) )
          goto LABEL_74;
        UILabel__set_gradientTop((UILabel_o *)EventPointNoGroup, labelGradientTops->m_Items[v58 / 4], 0);
        labelGradientBottoms = this->fields.labelGradientBottoms;
        if ( !labelGradientBottoms )
          goto LABEL_73;
        if ( v59 >= LODWORD(labelGradientBottoms->max_length) )
          goto LABEL_74;
        EventPointNoGroup = *(_QWORD *)(v68 + 40);
        if ( !EventPointNoGroup )
          goto LABEL_73;
        UILabel__set_gradientBottom((UILabel_o *)EventPointNoGroup, labelGradientBottoms->m_Items[v58 / 4], 0);
      }
      v80 = (unsigned int *)this->fields.sideItems;
      if ( !v80 )
        goto LABEL_73;
      EventPointNoGroup = sub_1C3E6A0(v68, *(_QWORD *)(*(_QWORD *)v80 + 64LL));
      if ( !EventPointNoGroup )
      {
        v83 = sub_1C3E7E4(0);
        sub_1C3E68C(v83, 0);
      }
      if ( v59 >= v80[6] )
        goto LABEL_74;
      *(_QWORD *)&v80[(unsigned __int64)i / 4 - 1] = v68;
      sub_1C3E508((CGThumbnailListItem_o *)&v80[(unsigned __int64)i / 4 - 1], v68, v81, v82);
      v58 += 4LL;
      ++v59;
      if ( v60 == v58 )
        return;
    }
    goto LABEL_73;
  }
}


void TitleInfoEventSideItemComponent__SetupTotalPointUI(
        TitleInfoEventSideItemComponent_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  struct SideItemComponent_array *sideItems; // x8
  DataManager_o *v8; // x21
  unsigned __int64 v9; // x25
  int64_t v10; // x26
  char v11; // w29
  unsigned __int64 m_CancellationTokenSource_low; // x8
  __int64 v13; // x8
  int64_t EventPoint; // x23
  __int64 v15; // x8
  DataManager_o *v16; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  __int64 v21; // x5
  __int64 v22; // x6
  __int64 v23; // x7
  UnityEngine_GameObject_o *v24; // x0
  TitleInfoEventSideItemComponent_c *v25; // x8
  UnityEngine_GameObject_o *v26; // x24
  UILabel_o *datalist; // x24
  Il2CppObject *v28; // x0
  unsigned int *v29; // x23
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  unsigned int *v32; // x0
  __int64 v33; // x0
  int64_t v35; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C5569F & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_EventPointGroupMaster___);
    sub_1C3E564(&long_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&TitleInfoEventSideItemComponent_TypeInfo);
    sub_1C3E564(&StringLiteral_25072/*"{0:#,0}"*/);
    byte_4C5569F = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_EventPointGroupMaster___)) == 0
    || (Instance = (DataManager_o *)EventPointGroupMaster__getEntityList(
                                      (EventPointGroupMaster_o *)Instance,
                                      eventId,
                                      0),
        (sideItems = this->fields.sideItems) == 0) )
  {
LABEL_31:
    sub_1C3E7C0(Instance, v5);
  }
  v8 = Instance;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  while ( (__int64)v9 < SLODWORD(sideItems->max_length) )
  {
    if ( !v8 )
      goto LABEL_31;
    m_CancellationTokenSource_low = LODWORD(v8->fields.m_CancellationTokenSource);
    if ( (__int64)v9 >= (int)m_CancellationTokenSource_low )
    {
      v11 = 1;
      EventPoint = v10;
    }
    else
    {
      if ( v9 >= m_CancellationTokenSource_low )
        goto LABEL_33;
      v13 = *((_QWORD *)&v8->fields._DispLog + v9);
      if ( !v13 )
        goto LABEL_31;
      EventPoint = UserEventPointMaster__GetEventPoint(eventId, *(_DWORD *)(v13 + 20), 0);
      v10 += EventPoint;
    }
    Instance = (DataManager_o *)TitleInfoEventSideItemComponent_TypeInfo;
    if ( !TitleInfoEventSideItemComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventSideItemComponent_TypeInfo);
      Instance = (DataManager_o *)TitleInfoEventSideItemComponent_TypeInfo;
    }
    v15 = *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 16LL);
    if ( v15 )
    {
      if ( v9 >= *(unsigned int *)(v15 + 24) )
        goto LABEL_33;
      Instance = (DataManager_o *)TitleInfoEventSideItemComponent__CreateSideItem(
                                    this,
                                    *(System_String_o **)(v15 + 8 * v9 + 32),
                                    v6);
      if ( Instance )
      {
        v16 = Instance;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
        GameObjectExtensions__SetLocalPosition_36176396(
          gameObject,
          0.0,
          (float)(int)v9 * (float)-this->fields.margin,
          0.0,
          0);
        if ( (v11 & 1) != 0 )
        {
          Instance = (DataManager_o *)v16->fields.datalist;
          if ( !Instance )
            goto LABEL_31;
          v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
          v25 = TitleInfoEventSideItemComponent_TypeInfo;
          v26 = v24;
          if ( !TitleInfoEventSideItemComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TitleInfoEventSideItemComponent_TypeInfo);
            v25 = TitleInfoEventSideItemComponent_TypeInfo;
          }
          GameObjectExtensions__AddLocalPosition_36177060(v26, v25->static_fields->ADD_LAST_LABEL_POS, 0);
          Instance = (DataManager_o *)v16->fields.datalist;
          if ( !Instance )
            goto LABEL_31;
          UILabel__set_effectDistance(
            (UILabel_o *)Instance,
            TitleInfoEventSideItemComponent_TypeInfo->static_fields->LAST_LABEL_OUTLINE,
            0);
          Instance = (DataManager_o *)v16->fields.datalist;
          if ( !Instance )
            goto LABEL_31;
          UIWidget__set_width((UIWidget_o *)Instance, 112, 0);
        }
        datalist = (UILabel_o *)v16->fields.datalist;
        v35 = EventPoint;
        v28 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v35, v18, v19, v20, v21, v22, v23);
        Instance = (DataManager_o *)System_String__Format((System_String_o *)StringLiteral_25072/*"{0:#,0}"*/, v28, 0);
        if ( datalist )
        {
          UILabel__set_text(datalist, (System_String_o *)Instance, 0);
          v29 = (unsigned int *)this->fields.sideItems;
          if ( v29 )
          {
            Instance = (DataManager_o *)sub_1C3E6A0(v16, *(_QWORD *)(*(_QWORD *)v29 + 64LL));
            if ( !Instance )
            {
              v33 = sub_1C3E7E4(0);
              sub_1C3E68C(v33, 0);
            }
            if ( v9 >= v29[6] )
LABEL_33:
              sub_1C3E7C8(Instance, v5);
            v32 = &v29[2 * v9];
            *((_QWORD *)v32 + 4) = v16;
            sub_1C3E508((CGThumbnailListItem_o *)(v32 + 8), (int32_t)v16, v30, v31);
            sideItems = this->fields.sideItems;
            ++v9;
            if ( sideItems )
              continue;
          }
        }
      }
    }
    goto LABEL_31;
  }
}


void TitleInfoEventSideItemComponent__UpdateDisp(TitleInfoEventSideItemComponent_o *this, const MethodInfo *method)
{
  ;
}