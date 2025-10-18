void TitleInfoEventSideItemComponent___cctor(const MethodInfo *method)
{
  __int64 v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  __int64 v9; // x19
  int32_t v10; // w1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w1
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w1
  struct TitleInfoEventSideItemComponent_StaticFields *static_fields; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int32_t v23; // w1
  struct TitleInfoEventSideItemComponent_StaticFields *v24; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3

  if ( (byte_4C41900 & 1) == 0 )
  {
    sub_1C37058(&string___TypeInfo);
    sub_1C37058(&TitleInfoEventSideItemComponent_TypeInfo);
    sub_1C37058(&StringLiteral_24086/*"time_status_side_04"*/);
    sub_1C37058(&StringLiteral_24083/*"time_status_side_01"*/);
    sub_1C37058(&StringLiteral_24085/*"time_status_side_03"*/);
    sub_1C37058(&StringLiteral_22731/*"point_status_side"*/);
    sub_1C37058(&StringLiteral_24084/*"time_status_side_02"*/);
    byte_4C41900 = 1;
  }
  TitleInfoEventSideItemComponent_TypeInfo->static_fields->ADD_LAST_LABEL_POS = (struct UnityEngine_Vector2_o)0x3F800000BF800000LL;
  __asm { FMOV            V0.2S, #1.0 }
  TitleInfoEventSideItemComponent_TypeInfo->static_fields->LAST_LABEL_OUTLINE = _D0;
  v6 = sub_1C37100(string___TypeInfo, 4);
  if ( !v6 )
    sub_1C372B4(0);
  v9 = v6;
  if ( !*(_DWORD *)(v6 + 24) )
    goto LABEL_9;
  v10 = StringLiteral_24083/*"time_status_side_01"*/;
  *(_QWORD *)(v6 + 32) = StringLiteral_24083/*"time_status_side_01"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v6 + 32), v10, v7, v8);
  if ( *(_DWORD *)(v9 + 24) <= 1u
    || (v13 = StringLiteral_24085/*"time_status_side_03"*/,
        *(_QWORD *)(v9 + 40) = StringLiteral_24085/*"time_status_side_03"*/,
        sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 40), v13, v11, v12),
        *(_DWORD *)(v9 + 24) <= 2u)
    || (v16 = StringLiteral_24084/*"time_status_side_02"*/,
        *(_QWORD *)(v9 + 48) = StringLiteral_24084/*"time_status_side_02"*/,
        sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 48), v16, v14, v15),
        *(_DWORD *)(v9 + 24) <= 3u) )
  {
LABEL_9:
    sub_1C372BC(v6);
  }
  v19 = StringLiteral_24086/*"time_status_side_04"*/;
  *(_QWORD *)(v9 + 56) = StringLiteral_24086/*"time_status_side_04"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 56), v19, v17, v18);
  static_fields = TitleInfoEventSideItemComponent_TypeInfo->static_fields;
  static_fields->TIME_STATUS_SPRITE_NAMES = (struct System_String_array *)v9;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->TIME_STATUS_SPRITE_NAMES, v9, v21, v22);
  v23 = StringLiteral_22731/*"point_status_side"*/;
  v24 = TitleInfoEventSideItemComponent_TypeInfo->static_fields;
  v24->POINT_STATUS_STRING = (struct System_String_o *)StringLiteral_22731/*"point_status_side"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v24->POINT_STATUS_STRING, v23, v25, v26);
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
  UnityEngine_Component_o *v7; // x20
  UnityEngine_GameObject_o *gameObject; // x22
  UnityEngine_GameObject_o *v9; // x0
  UnityEngine_GameObject_o *v10; // x0
  UISprite_o *monitor; // x21

  if ( (byte_4C418FF & 1) == 0 )
  {
    sub_1C37058(&AtlasManager_TypeInfo);
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_SideItemComponent___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C418FF = 1;
  }
  clone = (Il2CppObject *)this->fields.clone;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__Instantiate_object_(
         clone,
         (const MethodInfo_3173FC0 *)Method_UnityEngine_Object_Instantiate_SideItemComponent___);
  if ( !v6 )
    goto LABEL_10;
  v7 = (UnityEngine_Component_o *)v6;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0);
  v9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SafeSetParent_36138184(gameObject, v9, 0);
  v10 = UnityEngine_Component__get_gameObject(v7, 0);
  GameObjectExtensions__ResetLocalScale(v10, 0);
  monitor = (UISprite_o *)v7[1].monitor;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(monitor, spriteName, 0);
  v6 = (Il2CppObject *)v7[1].monitor;
  if ( !v6 )
LABEL_10:
    sub_1C372B4(v6);
  ((void (__fastcall *)(Il2CppObject *, const MethodInfo *))v6->klass->vtable[33].methodPtr)(
    v6,
    v6->klass->vtable[33].method);
  return (SideItemComponent_o *)v7;
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
  const MethodInfo *v6; // x3

  if ( (byte_4C418FC & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_EventPointBuffMaster___);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C418FC = 1;
  }
  Instance = (EventPointBuffEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (EventPointBuffEntity_array *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)Instance,
                                                   (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventPointBuffMaster___)) == 0
    || (Instance = EventPointBuffMaster__getEntityList((EventPointBuffMaster_o *)Instance, eventId, 0)) == 0 )
  {
    sub_1C372B4(Instance);
  }
  if ( Instance->max_length )
    TitleInfoEventSideItemComponent__SetupBuffRateUI(this, eventId, Instance, v6);
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
  int max_length; // w8
  __int64 v9; // x21
  int v10; // w9
  float value; // s0
  EventPointBuffEntity_o *v12; // x10
  __int64 eventPoint; // x11
  __int64 v14; // x20
  float v15; // s8
  System_String_o *v16; // x0
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  __int64 v20; // x5
  __int64 v21; // x6
  __int64 v22; // x7
  float v23; // s0
  System_String_o *v24; // x22
  Il2CppObject *v25; // x0
  System_String_o *v26; // x8
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  __int64 v30; // x5
  __int64 v31; // x6
  __int64 v32; // x7
  System_String_o *v33; // x23
  Il2CppObject *v34; // x0
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  __int64 v37; // x20
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  __int64 v41; // x5
  __int64 v42; // x6
  __int64 v43; // x7
  Il2CppObject *v44; // x0
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 v51; // x4
  __int64 v52; // x5
  __int64 v53; // x6
  __int64 v54; // x7
  struct SideItemComponent_array *sideItems; // x8
  il2cpp_array_size_t v56; // x8
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
  unsigned int *v79; // x25
  int32_t v80; // w2
  const MethodInfo *v81; // x3
  __int64 v82; // x0
  __int64 v83; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C418FE & 1) == 0 )
  {
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&long_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&float_TypeInfo);
    sub_1C37058(&string___TypeInfo);
    sub_1C37058(&TitleInfoEventSideItemComponent_TypeInfo);
    sub_1C37058(&StringLiteral_809/*"+{0:0.0}%"*/);
    sub_1C37058(&StringLiteral_14817/*"UNIT_REST_NONE"*/);
    sub_1C37058(&StringLiteral_25052/*"{0:#,0}"*/);
    sub_1C37058(&StringLiteral_810/*"+{0}%"*/);
    sub_1C37058(&StringLiteral_16620/*"_{0:00}"*/);
    sub_1C37058(&StringLiteral_1122/*"0"*/);
    byte_4C418FE = 1;
  }
  EventPointNoGroup = UserEventPointMaster__GetEventPointNoGroup(eventId, 0);
  if ( !entitys )
    goto LABEL_73;
  max_length = entitys->max_length;
  v9 = EventPointNoGroup;
  if ( max_length < 1 )
  {
    v14 = 0;
    value = 0.0;
  }
  else
  {
    v10 = 0;
    value = 0.0;
    while ( 1 )
    {
      if ( max_length == v10 )
        goto LABEL_74;
      v12 = entitys->m_Items[v10];
      if ( !v12 )
        goto LABEL_73;
      eventPoint = v12->fields.eventPoint;
      if ( EventPointNoGroup < eventPoint )
        break;
      ++v10;
      value = (float)v12->fields.value;
      if ( max_length == v10 )
      {
        v14 = 0;
        goto LABEL_13;
      }
    }
    v14 = eventPoint - EventPointNoGroup;
  }
LABEL_13:
  v15 = value / 10.0;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_14817/*"UNIT_REST_NONE"*/, 0);
  v23 = (float)(int)v15;
  if ( v15 == INFINITY )
    v23 = -2147500000.0;
  v24 = v16;
  *(float *)&v83 = v15;
  if ( v15 == v23 )
  {
    v25 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v83, v17, v18, v19, v20, v21, v22);
    v26 = (System_String_o *)StringLiteral_810/*"+{0}%"*/;
  }
  else
  {
    v25 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v83, v17, v18, v19, v20, v21, v22);
    v26 = (System_String_o *)StringLiteral_809/*"+{0:0.0}%"*/;
  }
  v33 = System_String__Format(v26, v25, 0);
  if ( (_DWORD)v14 )
  {
    v83 = v14;
    v34 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v83, v27, v28, v29, v30, v31, v32);
    v24 = System_String__Format((System_String_o *)StringLiteral_25052/*"{0:#,0}"*/, v34, 0);
  }
  EventPointNoGroup = sub_1C37100(string___TypeInfo, 3);
  if ( !EventPointNoGroup )
    goto LABEL_73;
  v37 = EventPointNoGroup;
  if ( !*(_DWORD *)(EventPointNoGroup + 24)
    || (*(_QWORD *)(EventPointNoGroup + 32) = v33,
        sub_1C36FFC((CGThumbnailListItem_o *)(EventPointNoGroup + 32), (int32_t)v33, v35, v36),
        v83 = v9,
        v44 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v83, v38, v39, v40, v41, v42, v43),
        EventPointNoGroup = (__int64)System_String__Format((System_String_o *)StringLiteral_25052/*"{0:#,0}"*/, v44, 0),
        *(_DWORD *)(v37 + 24) <= 1u)
    || (*(_QWORD *)(v37 + 40) = EventPointNoGroup,
        sub_1C36FFC((CGThumbnailListItem_o *)(v37 + 40), EventPointNoGroup, v45, v46),
        *(_DWORD *)(v37 + 24) <= 2u) )
  {
LABEL_74:
    sub_1C372BC(EventPointNoGroup);
  }
  *(_QWORD *)(v37 + 48) = v24;
  sub_1C36FFC((CGThumbnailListItem_o *)(v37 + 48), (int32_t)v24, v47, v48);
  sideItems = this->fields.sideItems;
  if ( !sideItems )
LABEL_73:
    sub_1C372B4(EventPointNoGroup);
  v56 = sideItems->max_length;
  if ( (int)v56 >= 1 )
  {
    v57 = 0;
    v58 = 0;
    v59 = 4LL * (unsigned int)v56;
    for ( i = 36; ; i += 8 )
    {
      v61 = TitleInfoEventSideItemComponent_TypeInfo;
      if ( !TitleInfoEventSideItemComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TitleInfoEventSideItemComponent_TypeInfo);
        v61 = TitleInfoEventSideItemComponent_TypeInfo;
      }
      POINT_STATUS_STRING = v61->static_fields->POINT_STATUS_STRING;
      LODWORD(v83) = v58 + 1;
      v63 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v83, v49, v50, v51, v52, v53, v54);
      v64 = System_String__Format((System_String_o *)StringLiteral_16620/*"_{0:00}"*/, v63, 0);
      v65 = System_String__Concat_63561656(POINT_STATUS_STRING, v64, 0);
      EventPointNoGroup = (__int64)TitleInfoEventSideItemComponent__CreateSideItem(this, v65, v66);
      if ( !EventPointNoGroup )
        break;
      v67 = EventPointNoGroup;
      EventPointNoGroup = (__int64)UnityEngine_Component__get_gameObject(
                                     (UnityEngine_Component_o *)EventPointNoGroup,
                                     0);
      itemPositions = this->fields.itemPositions;
      if ( !itemPositions )
        break;
      if ( v58 >= LODWORD(itemPositions->max_length) )
        goto LABEL_74;
      GameObjectExtensions__SetLocalPosition_36132288(
        (UnityEngine_GameObject_o *)EventPointNoGroup,
        *(UnityEngine_Vector2_o *)((char *)itemPositions + i - 4),
        0);
      EventPointNoGroup = *(_QWORD *)(v67 + 32);
      if ( !EventPointNoGroup )
        break;
      EventPointNoGroup = (__int64)UnityEngine_Component__get_gameObject(
                                     (UnityEngine_Component_o *)EventPointNoGroup,
                                     0);
      spritePositions = this->fields.spritePositions;
      if ( !spritePositions )
        break;
      if ( v58 >= LODWORD(spritePositions->max_length) )
        goto LABEL_74;
      GameObjectExtensions__SetLocalPosition_36132288(
        (UnityEngine_GameObject_o *)EventPointNoGroup,
        *(UnityEngine_Vector2_o *)((char *)spritePositions + i - 4),
        0);
      if ( v58 >= *(unsigned int *)(v37 + 24) )
        goto LABEL_74;
      EventPointNoGroup = *(_QWORD *)(v67 + 40);
      if ( !EventPointNoGroup )
        break;
      UILabel__set_text((UILabel_o *)EventPointNoGroup, *(System_String_o **)(v37 + 32 + i - 36), 0);
      labelFontSizes = this->fields.labelFontSizes;
      if ( !labelFontSizes )
        break;
      if ( v58 >= LODWORD(labelFontSizes->max_length) )
        goto LABEL_74;
      EventPointNoGroup = *(_QWORD *)(v67 + 40);
      if ( !EventPointNoGroup )
        break;
      UIWidget__set_height((UIWidget_o *)EventPointNoGroup, labelFontSizes->m_Items[v57 / 4], 0);
      v71 = this->fields.labelFontSizes;
      if ( !v71 )
        break;
      if ( v58 >= LODWORD(v71->max_length) )
        goto LABEL_74;
      EventPointNoGroup = *(_QWORD *)(v67 + 40);
      if ( !EventPointNoGroup )
        break;
      UILabel__set_fontSize((UILabel_o *)EventPointNoGroup, v71->m_Items[v57 / 4], 0);
      EventPointNoGroup = *(_QWORD *)(v67 + 40);
      if ( !EventPointNoGroup )
        break;
      EventPointNoGroup = (__int64)UnityEngine_Component__get_gameObject(
                                     (UnityEngine_Component_o *)EventPointNoGroup,
                                     0);
      labelPositions = this->fields.labelPositions;
      if ( !labelPositions )
        break;
      if ( v58 >= LODWORD(labelPositions->max_length) )
        goto LABEL_74;
      GameObjectExtensions__SetLocalPosition_36132288(
        (UnityEngine_GameObject_o *)EventPointNoGroup,
        *(UnityEngine_Vector2_o *)((char *)labelPositions + i - 4),
        0);
      labelOutlineSizes = this->fields.labelOutlineSizes;
      if ( !labelOutlineSizes )
        break;
      if ( v58 >= LODWORD(labelOutlineSizes->max_length) )
        goto LABEL_74;
      EventPointNoGroup = *(_QWORD *)(v67 + 40);
      if ( !EventPointNoGroup )
        break;
      UILabel__set_effectDistance(
        (UILabel_o *)EventPointNoGroup,
        *(UnityEngine_Vector2_o *)((char *)labelOutlineSizes + i - 4),
        0);
      labelOutlineColors = this->fields.labelOutlineColors;
      if ( !labelOutlineColors )
        break;
      if ( v58 >= LODWORD(labelOutlineColors->max_length) )
        goto LABEL_74;
      EventPointNoGroup = *(_QWORD *)(v67 + 40);
      if ( !EventPointNoGroup )
        break;
      UILabel__set_effectColor((UILabel_o *)EventPointNoGroup, labelOutlineColors->m_Items[v57 / 4], 0);
      labelOutlineStyles = this->fields.labelOutlineStyles;
      if ( !labelOutlineStyles )
        break;
      if ( v58 >= LODWORD(labelOutlineStyles->max_length) )
        goto LABEL_74;
      EventPointNoGroup = *(_QWORD *)(v67 + 40);
      if ( !EventPointNoGroup )
        break;
      UILabel__set_effectStyle((UILabel_o *)EventPointNoGroup, labelOutlineStyles->m_Items[v57 / 4], 0);
      labelApplyGradients = this->fields.labelApplyGradients;
      if ( !labelApplyGradients )
        break;
      if ( v58 >= LODWORD(labelApplyGradients->max_length) )
        goto LABEL_74;
      EventPointNoGroup = *(_QWORD *)(v67 + 40);
      if ( !EventPointNoGroup )
        break;
      UILabel__set_applyGradient((UILabel_o *)EventPointNoGroup, labelApplyGradients->m_Items[v58], 0);
      EventPointNoGroup = *(_QWORD *)(v67 + 40);
      if ( !EventPointNoGroup )
        break;
      if ( *(_BYTE *)(EventPointNoGroup + 488) )
      {
        labelGradientTops = this->fields.labelGradientTops;
        if ( !labelGradientTops )
          goto LABEL_73;
        if ( v58 >= LODWORD(labelGradientTops->max_length) )
          goto LABEL_74;
        UILabel__set_gradientTop((UILabel_o *)EventPointNoGroup, labelGradientTops->m_Items[v57 / 4], 0);
        labelGradientBottoms = this->fields.labelGradientBottoms;
        if ( !labelGradientBottoms )
          goto LABEL_73;
        if ( v58 >= LODWORD(labelGradientBottoms->max_length) )
          goto LABEL_74;
        EventPointNoGroup = *(_QWORD *)(v67 + 40);
        if ( !EventPointNoGroup )
          goto LABEL_73;
        UILabel__set_gradientBottom((UILabel_o *)EventPointNoGroup, labelGradientBottoms->m_Items[v57 / 4], 0);
      }
      v79 = (unsigned int *)this->fields.sideItems;
      if ( !v79 )
        goto LABEL_73;
      EventPointNoGroup = sub_1C37194(v67, *(_QWORD *)(*(_QWORD *)v79 + 64LL));
      if ( !EventPointNoGroup )
      {
        v82 = sub_1C372D8(0);
        sub_1C37180(v82, 0);
      }
      if ( v58 >= v79[6] )
        goto LABEL_74;
      *(_QWORD *)&v79[(unsigned __int64)i / 4 - 1] = v67;
      sub_1C36FFC((CGThumbnailListItem_o *)&v79[(unsigned __int64)i / 4 - 1], v67, v80, v81);
      v57 += 4LL;
      ++v58;
      if ( v59 == v57 )
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
  const MethodInfo *v5; // x2
  struct SideItemComponent_array *sideItems; // x8
  DataManager_o *v7; // x21
  unsigned __int64 v8; // x25
  int64_t v9; // x26
  char v10; // w29
  unsigned __int64 m_CancellationTokenSource_low; // x8
  __int64 v12; // x8
  int64_t EventPoint; // x23
  __int64 v14; // x8
  DataManager_o *v15; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  __int64 v20; // x5
  __int64 v21; // x6
  __int64 v22; // x7
  UnityEngine_GameObject_o *v23; // x0
  TitleInfoEventSideItemComponent_c *v24; // x8
  UnityEngine_GameObject_o *v25; // x24
  UILabel_o *datalist; // x24
  Il2CppObject *v27; // x0
  unsigned int *v28; // x23
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  unsigned int *v31; // x0
  __int64 v32; // x0
  int64_t v34; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C418FD & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_EventPointGroupMaster___);
    sub_1C37058(&long_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&TitleInfoEventSideItemComponent_TypeInfo);
    sub_1C37058(&StringLiteral_25052/*"{0:#,0}"*/);
    byte_4C418FD = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventPointGroupMaster___)) == 0
    || (Instance = (DataManager_o *)EventPointGroupMaster__getEntityList(
                                      (EventPointGroupMaster_o *)Instance,
                                      eventId,
                                      0),
        (sideItems = this->fields.sideItems) == 0) )
  {
LABEL_31:
    sub_1C372B4(Instance);
  }
  v7 = Instance;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  while ( (__int64)v8 < SLODWORD(sideItems->max_length) )
  {
    if ( !v7 )
      goto LABEL_31;
    m_CancellationTokenSource_low = LODWORD(v7->fields.m_CancellationTokenSource);
    if ( (__int64)v8 >= (int)m_CancellationTokenSource_low )
    {
      v10 = 1;
      EventPoint = v9;
    }
    else
    {
      if ( v8 >= m_CancellationTokenSource_low )
        goto LABEL_33;
      v12 = *((_QWORD *)&v7->fields._DispLog + v8);
      if ( !v12 )
        goto LABEL_31;
      EventPoint = UserEventPointMaster__GetEventPoint(eventId, *(_DWORD *)(v12 + 20), 0);
      v9 += EventPoint;
    }
    Instance = (DataManager_o *)TitleInfoEventSideItemComponent_TypeInfo;
    if ( !TitleInfoEventSideItemComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventSideItemComponent_TypeInfo);
      Instance = (DataManager_o *)TitleInfoEventSideItemComponent_TypeInfo;
    }
    v14 = *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 16LL);
    if ( v14 )
    {
      if ( v8 >= *(unsigned int *)(v14 + 24) )
        goto LABEL_33;
      Instance = (DataManager_o *)TitleInfoEventSideItemComponent__CreateSideItem(
                                    this,
                                    *(System_String_o **)(v14 + 8 * v8 + 32),
                                    v5);
      if ( Instance )
      {
        v15 = Instance;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
        GameObjectExtensions__SetLocalPosition_36132496(
          gameObject,
          0.0,
          (float)(int)v8 * (float)-this->fields.margin,
          0.0,
          0);
        if ( (v10 & 1) != 0 )
        {
          Instance = (DataManager_o *)v15->fields.datalist;
          if ( !Instance )
            goto LABEL_31;
          v23 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
          v24 = TitleInfoEventSideItemComponent_TypeInfo;
          v25 = v23;
          if ( !TitleInfoEventSideItemComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TitleInfoEventSideItemComponent_TypeInfo);
            v24 = TitleInfoEventSideItemComponent_TypeInfo;
          }
          GameObjectExtensions__AddLocalPosition_36133160(v25, v24->static_fields->ADD_LAST_LABEL_POS, 0);
          Instance = (DataManager_o *)v15->fields.datalist;
          if ( !Instance )
            goto LABEL_31;
          UILabel__set_effectDistance(
            (UILabel_o *)Instance,
            TitleInfoEventSideItemComponent_TypeInfo->static_fields->LAST_LABEL_OUTLINE,
            0);
          Instance = (DataManager_o *)v15->fields.datalist;
          if ( !Instance )
            goto LABEL_31;
          UIWidget__set_width((UIWidget_o *)Instance, 112, 0);
        }
        datalist = (UILabel_o *)v15->fields.datalist;
        v34 = EventPoint;
        v27 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v34, v17, v18, v19, v20, v21, v22);
        Instance = (DataManager_o *)System_String__Format((System_String_o *)StringLiteral_25052/*"{0:#,0}"*/, v27, 0);
        if ( datalist )
        {
          UILabel__set_text(datalist, (System_String_o *)Instance, 0);
          v28 = (unsigned int *)this->fields.sideItems;
          if ( v28 )
          {
            Instance = (DataManager_o *)sub_1C37194(v15, *(_QWORD *)(*(_QWORD *)v28 + 64LL));
            if ( !Instance )
            {
              v32 = sub_1C372D8(0);
              sub_1C37180(v32, 0);
            }
            if ( v8 >= v28[6] )
LABEL_33:
              sub_1C372BC(Instance);
            v31 = &v28[2 * v8];
            *((_QWORD *)v31 + 4) = v15;
            sub_1C36FFC((CGThumbnailListItem_o *)(v31 + 8), (int32_t)v15, v29, v30);
            sideItems = this->fields.sideItems;
            ++v8;
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