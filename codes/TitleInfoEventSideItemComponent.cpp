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

  if ( (byte_4CB4BFF & 1) == 0 )
  {
    sub_1C6BA08(&string___TypeInfo);
    sub_1C6BA08(&TitleInfoEventSideItemComponent_TypeInfo);
    sub_1C6BA08(&StringLiteral_24184/*"time_status_side_04"*/);
    sub_1C6BA08(&StringLiteral_24181/*"time_status_side_01"*/);
    sub_1C6BA08(&StringLiteral_24183/*"time_status_side_03"*/);
    sub_1C6BA08(&StringLiteral_22820/*"point_status_side"*/);
    sub_1C6BA08(&StringLiteral_24182/*"time_status_side_02"*/);
    byte_4CB4BFF = 1;
  }
  TitleInfoEventSideItemComponent_TypeInfo->static_fields->ADD_LAST_LABEL_POS = (struct UnityEngine_Vector2_o)0x3F800000BF800000LL;
  __asm { FMOV            V0.2S, #1.0 }
  TitleInfoEventSideItemComponent_TypeInfo->static_fields->LAST_LABEL_OUTLINE = _D0;
  v6 = sub_1C6BAB0(string___TypeInfo, 4);
  if ( !v6 )
    sub_1C6BC60(0, v7);
  v10 = v6;
  if ( !*(_DWORD *)(v6 + 24) )
    goto LABEL_9;
  v11 = StringLiteral_24181/*"time_status_side_01"*/;
  *(_QWORD *)(v6 + 32) = StringLiteral_24181/*"time_status_side_01"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v6 + 32), v11, v8, v9);
  if ( *(_DWORD *)(v10 + 24) <= 1u
    || (v14 = StringLiteral_24183/*"time_status_side_03"*/,
        *(_QWORD *)(v10 + 40) = StringLiteral_24183/*"time_status_side_03"*/,
        sub_1C6B9AC((CGThumbnailListItem_o *)(v10 + 40), v14, v12, v13),
        *(_DWORD *)(v10 + 24) <= 2u)
    || (v17 = StringLiteral_24182/*"time_status_side_02"*/,
        *(_QWORD *)(v10 + 48) = StringLiteral_24182/*"time_status_side_02"*/,
        sub_1C6B9AC((CGThumbnailListItem_o *)(v10 + 48), v17, v15, v16),
        *(_DWORD *)(v10 + 24) <= 3u) )
  {
LABEL_9:
    sub_1C6BC68(v6);
  }
  v20 = StringLiteral_24184/*"time_status_side_04"*/;
  *(_QWORD *)(v10 + 56) = StringLiteral_24184/*"time_status_side_04"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v10 + 56), v20, v18, v19);
  static_fields = TitleInfoEventSideItemComponent_TypeInfo->static_fields;
  static_fields->TIME_STATUS_SPRITE_NAMES = (struct System_String_array *)v10;
  sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->TIME_STATUS_SPRITE_NAMES, v10, v22, v23);
  v24 = StringLiteral_22820/*"point_status_side"*/;
  v25 = TitleInfoEventSideItemComponent_TypeInfo->static_fields;
  v25->POINT_STATUS_STRING = (struct System_String_o *)StringLiteral_22820/*"point_status_side"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v25->POINT_STATUS_STRING, v24, v26, v27);
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

  if ( (byte_4CB4BFE & 1) == 0 )
  {
    sub_1C6BA08(&AtlasManager_TypeInfo);
    sub_1C6BA08(&Method_UnityEngine_Object_Instantiate_SideItemComponent___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB4BFE = 1;
  }
  clone = (Il2CppObject *)this->fields.clone;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__Instantiate_object_(
         clone,
         (const MethodInfo_31C7F14 *)Method_UnityEngine_Object_Instantiate_SideItemComponent___);
  if ( !v6 )
    goto LABEL_10;
  v8 = (UnityEngine_Component_o *)v6;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0);
  v10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SafeSetParent_36361932(gameObject, v10, 0);
  v11 = UnityEngine_Component__get_gameObject(v8, 0);
  GameObjectExtensions__ResetLocalScale(v11, 0);
  monitor = (UISprite_o *)v8[1].monitor;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(monitor, spriteName, 0);
  v6 = (Il2CppObject *)v8[1].monitor;
  if ( !v6 )
LABEL_10:
    sub_1C6BC60(v6, v7);
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

  if ( (byte_4CB4BFB & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_EventPointBuffMaster___);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB4BFB = 1;
  }
  Instance = (EventPointBuffEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (EventPointBuffEntity_array *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)Instance,
                                                   (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_EventPointBuffMaster___)) == 0
    || (Instance = EventPointBuffMaster__getEntityList((EventPointBuffMaster_o *)Instance, eventId, 0)) == 0 )
  {
    sub_1C6BC60(Instance, v6);
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
  float v18; // s0
  System_String_o *v19; // x22
  Il2CppObject *v20; // x0
  System_String_o *v21; // x8
  System_String_o *v22; // x23
  Il2CppObject *v23; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  __int64 v26; // x20
  Il2CppObject *v27; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  struct SideItemComponent_array *sideItems; // x8
  il2cpp_array_size_t v33; // x8
  unsigned __int64 v34; // x22
  unsigned __int64 v35; // x29
  __int64 v36; // x27
  __int64 i; // x28
  TitleInfoEventSideItemComponent_c *v38; // x0
  System_String_o *POINT_STATUS_STRING; // x21
  Il2CppObject *v40; // x0
  System_String_o *v41; // x0
  System_String_o *v42; // x0
  const MethodInfo *v43; // x2
  __int64 v44; // x21
  struct UnityEngine_Vector2_array *itemPositions; // x8
  struct UnityEngine_Vector2_array *spritePositions; // x8
  struct System_Int32_array *labelFontSizes; // x8
  struct System_Int32_array *v48; // x8
  struct UnityEngine_Vector2_array *labelPositions; // x8
  struct UnityEngine_Vector2_array *labelOutlineSizes; // x8
  struct UnityEngine_Color_array *labelOutlineColors; // x8
  struct UILabel_Effect_array *labelOutlineStyles; // x8
  struct System_Boolean_array *labelApplyGradients; // x8
  struct UnityEngine_Color_array *labelGradientTops; // x8
  struct UnityEngine_Color_array *labelGradientBottoms; // x8
  unsigned int *v56; // x25
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  __int64 v59; // x0
  __int64 v60; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4CB4BFD & 1) == 0 )
  {
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&long_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&float_TypeInfo);
    sub_1C6BA08(&string___TypeInfo);
    sub_1C6BA08(&TitleInfoEventSideItemComponent_TypeInfo);
    sub_1C6BA08(&StringLiteral_806/*"+{0:0.0}%"*/);
    sub_1C6BA08(&StringLiteral_14818/*"UNIT_REST_NONE"*/);
    sub_1C6BA08(&StringLiteral_25162/*"{0:#,0}"*/);
    sub_1C6BA08(&StringLiteral_807/*"+{0}%"*/);
    sub_1C6BA08(&StringLiteral_16614/*"_{0:00}"*/);
    sub_1C6BA08(&StringLiteral_1115/*"0"*/);
    byte_4CB4BFD = 1;
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
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_14818/*"UNIT_REST_NONE"*/, 0);
  v18 = (float)(int)v16;
  if ( v16 == INFINITY )
    v18 = -2147500000.0;
  v19 = v17;
  *(float *)&v60 = v16;
  if ( v16 == v18 )
  {
    v20 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v60);
    v21 = (System_String_o *)StringLiteral_807/*"+{0}%"*/;
  }
  else
  {
    v20 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v60);
    v21 = (System_String_o *)StringLiteral_806/*"+{0:0.0}%"*/;
  }
  v22 = System_String__Format(v21, v20, 0);
  if ( (_DWORD)v15 )
  {
    v60 = v15;
    v23 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v60);
    v19 = System_String__Format((System_String_o *)StringLiteral_25162/*"{0:#,0}"*/, v23, 0);
  }
  EventPointNoGroup = sub_1C6BAB0(string___TypeInfo, 3);
  if ( !EventPointNoGroup )
    goto LABEL_73;
  v26 = EventPointNoGroup;
  if ( !*(_DWORD *)(EventPointNoGroup + 24)
    || (*(_QWORD *)(EventPointNoGroup + 32) = v22,
        sub_1C6B9AC((CGThumbnailListItem_o *)(EventPointNoGroup + 32), (int32_t)v22, v24, v25),
        v60 = v10,
        v27 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v60),
        EventPointNoGroup = (__int64)System_String__Format((System_String_o *)StringLiteral_25162/*"{0:#,0}"*/, v27, 0),
        *(_DWORD *)(v26 + 24) <= 1u)
    || (*(_QWORD *)(v26 + 40) = EventPointNoGroup,
        sub_1C6B9AC((CGThumbnailListItem_o *)(v26 + 40), EventPointNoGroup, v28, v29),
        *(_DWORD *)(v26 + 24) <= 2u) )
  {
LABEL_74:
    sub_1C6BC68(EventPointNoGroup);
  }
  *(_QWORD *)(v26 + 48) = v19;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v26 + 48), (int32_t)v19, v30, v31);
  sideItems = this->fields.sideItems;
  if ( !sideItems )
LABEL_73:
    sub_1C6BC60(EventPointNoGroup, v8);
  v33 = sideItems->max_length;
  if ( (int)v33 >= 1 )
  {
    v34 = 0;
    v35 = 0;
    v36 = 4LL * (unsigned int)v33;
    for ( i = 36; ; i += 8 )
    {
      v38 = TitleInfoEventSideItemComponent_TypeInfo;
      if ( !TitleInfoEventSideItemComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TitleInfoEventSideItemComponent_TypeInfo);
        v38 = TitleInfoEventSideItemComponent_TypeInfo;
      }
      POINT_STATUS_STRING = v38->static_fields->POINT_STATUS_STRING;
      LODWORD(v60) = v35 + 1;
      v40 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v60);
      v41 = System_String__Format((System_String_o *)StringLiteral_16614/*"_{0:00}"*/, v40, 0);
      v42 = System_String__Concat_63966792(POINT_STATUS_STRING, v41, 0);
      EventPointNoGroup = (__int64)TitleInfoEventSideItemComponent__CreateSideItem(this, v42, v43);
      if ( !EventPointNoGroup )
        break;
      v44 = EventPointNoGroup;
      EventPointNoGroup = (__int64)UnityEngine_Component__get_gameObject(
                                     (UnityEngine_Component_o *)EventPointNoGroup,
                                     0);
      itemPositions = this->fields.itemPositions;
      if ( !itemPositions )
        break;
      if ( v35 >= LODWORD(itemPositions->max_length) )
        goto LABEL_74;
      GameObjectExtensions__SetLocalPosition_36356036(
        (UnityEngine_GameObject_o *)EventPointNoGroup,
        *(UnityEngine_Vector2_o *)((char *)itemPositions + i - 4),
        0);
      EventPointNoGroup = *(_QWORD *)(v44 + 32);
      if ( !EventPointNoGroup )
        break;
      EventPointNoGroup = (__int64)UnityEngine_Component__get_gameObject(
                                     (UnityEngine_Component_o *)EventPointNoGroup,
                                     0);
      spritePositions = this->fields.spritePositions;
      if ( !spritePositions )
        break;
      if ( v35 >= LODWORD(spritePositions->max_length) )
        goto LABEL_74;
      GameObjectExtensions__SetLocalPosition_36356036(
        (UnityEngine_GameObject_o *)EventPointNoGroup,
        *(UnityEngine_Vector2_o *)((char *)spritePositions + i - 4),
        0);
      if ( v35 >= *(unsigned int *)(v26 + 24) )
        goto LABEL_74;
      EventPointNoGroup = *(_QWORD *)(v44 + 40);
      if ( !EventPointNoGroup )
        break;
      UILabel__set_text((UILabel_o *)EventPointNoGroup, *(System_String_o **)(v26 + 32 + i - 36), 0);
      labelFontSizes = this->fields.labelFontSizes;
      if ( !labelFontSizes )
        break;
      if ( v35 >= LODWORD(labelFontSizes->max_length) )
        goto LABEL_74;
      EventPointNoGroup = *(_QWORD *)(v44 + 40);
      if ( !EventPointNoGroup )
        break;
      UIWidget__set_height((UIWidget_o *)EventPointNoGroup, labelFontSizes->m_Items[v34 / 4], 0);
      v48 = this->fields.labelFontSizes;
      if ( !v48 )
        break;
      if ( v35 >= LODWORD(v48->max_length) )
        goto LABEL_74;
      EventPointNoGroup = *(_QWORD *)(v44 + 40);
      if ( !EventPointNoGroup )
        break;
      UILabel__set_fontSize((UILabel_o *)EventPointNoGroup, v48->m_Items[v34 / 4], 0);
      EventPointNoGroup = *(_QWORD *)(v44 + 40);
      if ( !EventPointNoGroup )
        break;
      EventPointNoGroup = (__int64)UnityEngine_Component__get_gameObject(
                                     (UnityEngine_Component_o *)EventPointNoGroup,
                                     0);
      labelPositions = this->fields.labelPositions;
      if ( !labelPositions )
        break;
      if ( v35 >= LODWORD(labelPositions->max_length) )
        goto LABEL_74;
      GameObjectExtensions__SetLocalPosition_36356036(
        (UnityEngine_GameObject_o *)EventPointNoGroup,
        *(UnityEngine_Vector2_o *)((char *)labelPositions + i - 4),
        0);
      labelOutlineSizes = this->fields.labelOutlineSizes;
      if ( !labelOutlineSizes )
        break;
      if ( v35 >= LODWORD(labelOutlineSizes->max_length) )
        goto LABEL_74;
      EventPointNoGroup = *(_QWORD *)(v44 + 40);
      if ( !EventPointNoGroup )
        break;
      UILabel__set_effectDistance(
        (UILabel_o *)EventPointNoGroup,
        *(UnityEngine_Vector2_o *)((char *)labelOutlineSizes + i - 4),
        0);
      labelOutlineColors = this->fields.labelOutlineColors;
      if ( !labelOutlineColors )
        break;
      if ( v35 >= LODWORD(labelOutlineColors->max_length) )
        goto LABEL_74;
      EventPointNoGroup = *(_QWORD *)(v44 + 40);
      if ( !EventPointNoGroup )
        break;
      UILabel__set_effectColor((UILabel_o *)EventPointNoGroup, labelOutlineColors->m_Items[v34 / 4], 0);
      labelOutlineStyles = this->fields.labelOutlineStyles;
      if ( !labelOutlineStyles )
        break;
      if ( v35 >= LODWORD(labelOutlineStyles->max_length) )
        goto LABEL_74;
      EventPointNoGroup = *(_QWORD *)(v44 + 40);
      if ( !EventPointNoGroup )
        break;
      UILabel__set_effectStyle((UILabel_o *)EventPointNoGroup, labelOutlineStyles->m_Items[v34 / 4], 0);
      labelApplyGradients = this->fields.labelApplyGradients;
      if ( !labelApplyGradients )
        break;
      if ( v35 >= LODWORD(labelApplyGradients->max_length) )
        goto LABEL_74;
      EventPointNoGroup = *(_QWORD *)(v44 + 40);
      if ( !EventPointNoGroup )
        break;
      UILabel__set_applyGradient((UILabel_o *)EventPointNoGroup, labelApplyGradients->m_Items[v35], 0);
      EventPointNoGroup = *(_QWORD *)(v44 + 40);
      if ( !EventPointNoGroup )
        break;
      if ( *(_BYTE *)(EventPointNoGroup + 488) )
      {
        labelGradientTops = this->fields.labelGradientTops;
        if ( !labelGradientTops )
          goto LABEL_73;
        if ( v35 >= LODWORD(labelGradientTops->max_length) )
          goto LABEL_74;
        UILabel__set_gradientTop((UILabel_o *)EventPointNoGroup, labelGradientTops->m_Items[v34 / 4], 0);
        labelGradientBottoms = this->fields.labelGradientBottoms;
        if ( !labelGradientBottoms )
          goto LABEL_73;
        if ( v35 >= LODWORD(labelGradientBottoms->max_length) )
          goto LABEL_74;
        EventPointNoGroup = *(_QWORD *)(v44 + 40);
        if ( !EventPointNoGroup )
          goto LABEL_73;
        UILabel__set_gradientBottom((UILabel_o *)EventPointNoGroup, labelGradientBottoms->m_Items[v34 / 4], 0);
      }
      v56 = (unsigned int *)this->fields.sideItems;
      if ( !v56 )
        goto LABEL_73;
      EventPointNoGroup = sub_1C6BB44(v44, *(_QWORD *)(*(_QWORD *)v56 + 64LL));
      if ( !EventPointNoGroup )
      {
        v59 = sub_1C6BC84(0);
        sub_1C6BB30(v59, 0);
      }
      if ( v35 >= v56[6] )
        goto LABEL_74;
      *(_QWORD *)&v56[(unsigned __int64)i / 4 - 1] = v44;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v56[(unsigned __int64)i / 4 - 1], v44, v57, v58);
      v34 += 4LL;
      ++v35;
      if ( v36 == v34 )
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
  UnityEngine_GameObject_o *v18; // x0
  TitleInfoEventSideItemComponent_c *v19; // x8
  UnityEngine_GameObject_o *v20; // x24
  UILabel_o *datalist; // x24
  Il2CppObject *v22; // x0
  unsigned int *v23; // x23
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  unsigned int *v26; // x0
  __int64 v27; // x0
  int64_t v29; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4CB4BFC & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_EventPointGroupMaster___);
    sub_1C6BA08(&long_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&TitleInfoEventSideItemComponent_TypeInfo);
    sub_1C6BA08(&StringLiteral_25162/*"{0:#,0}"*/);
    byte_4CB4BFC = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_EventPointGroupMaster___)) == 0
    || (Instance = (DataManager_o *)EventPointGroupMaster__getEntityList(
                                      (EventPointGroupMaster_o *)Instance,
                                      eventId,
                                      0),
        (sideItems = this->fields.sideItems) == 0) )
  {
LABEL_31:
    sub_1C6BC60(Instance, v5);
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
        GameObjectExtensions__SetLocalPosition_36356244(
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
          v18 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
          v19 = TitleInfoEventSideItemComponent_TypeInfo;
          v20 = v18;
          if ( !TitleInfoEventSideItemComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TitleInfoEventSideItemComponent_TypeInfo);
            v19 = TitleInfoEventSideItemComponent_TypeInfo;
          }
          GameObjectExtensions__AddLocalPosition_36356908(v20, v19->static_fields->ADD_LAST_LABEL_POS, 0);
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
        v29 = EventPoint;
        v22 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v29);
        Instance = (DataManager_o *)System_String__Format((System_String_o *)StringLiteral_25162/*"{0:#,0}"*/, v22, 0);
        if ( datalist )
        {
          UILabel__set_text(datalist, (System_String_o *)Instance, 0);
          v23 = (unsigned int *)this->fields.sideItems;
          if ( v23 )
          {
            Instance = (DataManager_o *)sub_1C6BB44(v16, *(_QWORD *)(*(_QWORD *)v23 + 64LL));
            if ( !Instance )
            {
              v27 = sub_1C6BC84(0);
              sub_1C6BB30(v27, 0);
            }
            if ( v9 >= v23[6] )
LABEL_33:
              sub_1C6BC68(Instance);
            v26 = &v23[2 * v9];
            *((_QWORD *)v26 + 4) = v16;
            sub_1C6B9AC((CGThumbnailListItem_o *)(v26 + 8), (int32_t)v16, v24, v25);
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