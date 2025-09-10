void TitleInfoEventSideItemComponent___cctor(const MethodInfo *method)
{
  __int64 v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  const MethodInfo *v9; // x3
  __int64 v10; // x19
  int32_t v11; // w1
  const MethodInfo *v12; // x3
  int32_t v13; // w1
  const MethodInfo *v14; // x3
  int32_t v15; // w1
  const MethodInfo *v16; // x3
  int32_t v17; // w1
  struct TitleInfoEventSideItemComponent_StaticFields *static_fields; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t v21; // w1
  struct TitleInfoEventSideItemComponent_StaticFields *v22; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3

  if ( (byte_4C25C38 & 1) == 0 )
  {
    sub_1C2D490(&string___TypeInfo);
    sub_1C2D490(&TitleInfoEventSideItemComponent_TypeInfo);
    sub_1C2D490(&StringLiteral_24064/*"time_status_side_04"*/);
    sub_1C2D490(&StringLiteral_24061/*"time_status_side_01"*/);
    sub_1C2D490(&StringLiteral_24063/*"time_status_side_03"*/);
    sub_1C2D490(&StringLiteral_22711/*"point_status_side"*/);
    sub_1C2D490(&StringLiteral_24062/*"time_status_side_02"*/);
    byte_4C25C38 = 1;
  }
  TitleInfoEventSideItemComponent_TypeInfo->static_fields->ADD_LAST_LABEL_POS = (struct UnityEngine_Vector2_o)0x3F800000BF800000LL;
  __asm { FMOV            V0.2S, #1.0 }
  TitleInfoEventSideItemComponent_TypeInfo->static_fields->LAST_LABEL_OUTLINE = _D0;
  v6 = sub_1C2D538(string___TypeInfo, 4);
  if ( !v6 )
    sub_1C2D6EC(0, v7);
  v10 = v6;
  if ( !*(_DWORD *)(v6 + 24) )
    goto LABEL_9;
  v11 = StringLiteral_24061/*"time_status_side_01"*/;
  *(_QWORD *)(v6 + 32) = StringLiteral_24061/*"time_status_side_01"*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v6 + 32), v11, v8, v9);
  if ( *(_DWORD *)(v10 + 24) <= 1u
    || (v13 = StringLiteral_24063/*"time_status_side_03"*/,
        *(_QWORD *)(v10 + 40) = StringLiteral_24063/*"time_status_side_03"*/,
        sub_1C2D434((CGThumbnailListItem_o *)(v10 + 40), v13, v8, v12),
        *(_DWORD *)(v10 + 24) <= 2u)
    || (v15 = StringLiteral_24062/*"time_status_side_02"*/,
        *(_QWORD *)(v10 + 48) = StringLiteral_24062/*"time_status_side_02"*/,
        sub_1C2D434((CGThumbnailListItem_o *)(v10 + 48), v15, v8, v14),
        *(_DWORD *)(v10 + 24) <= 3u) )
  {
LABEL_9:
    sub_1C2D6F4(v6, v7, v8);
  }
  v17 = StringLiteral_24064/*"time_status_side_04"*/;
  *(_QWORD *)(v10 + 56) = StringLiteral_24064/*"time_status_side_04"*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v10 + 56), v17, v8, v16);
  static_fields = TitleInfoEventSideItemComponent_TypeInfo->static_fields;
  static_fields->TIME_STATUS_SPRITE_NAMES = (struct System_String_array *)v10;
  sub_1C2D434((CGThumbnailListItem_o *)&static_fields->TIME_STATUS_SPRITE_NAMES, v10, v19, v20);
  v21 = StringLiteral_22711/*"point_status_side"*/;
  v22 = TitleInfoEventSideItemComponent_TypeInfo->static_fields;
  v22->POINT_STATUS_STRING = (struct System_String_o *)StringLiteral_22711/*"point_status_side"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&v22->POINT_STATUS_STRING, v21, v23, v24);
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

  if ( (byte_4C25C37 & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_SideItemComponent___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C25C37 = 1;
  }
  clone = (Il2CppObject *)this->fields.clone;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__Instantiate_object_(
         clone,
         (const MethodInfo_315ACB8 *)Method_UnityEngine_Object_Instantiate_SideItemComponent___);
  if ( !v6 )
    goto LABEL_10;
  v8 = (UnityEngine_Component_o *)v6;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0);
  v10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SafeSetParent_35924288(gameObject, v10, 0);
  v11 = UnityEngine_Component__get_gameObject(v8, 0);
  GameObjectExtensions__ResetLocalScale(v11, 0);
  monitor = (UISprite_o *)v8[1].monitor;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(monitor, spriteName, 0);
  v6 = (Il2CppObject *)v8[1].monitor;
  if ( !v6 )
LABEL_10:
    sub_1C2D6EC(v6, v7);
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

  if ( (byte_4C25C34 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_EventPointBuffMaster___);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C25C34 = 1;
  }
  Instance = (EventPointBuffEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (EventPointBuffEntity_array *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)Instance,
                                                   (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventPointBuffMaster___)) == 0
    || (Instance = EventPointBuffMaster__getEntityList((EventPointBuffMaster_o *)Instance, eventId, 0)) == 0 )
  {
    sub_1C2D6EC(Instance, v6);
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
  __int64 v9; // x2
  int max_length; // w8
  __int64 v11; // x21
  int v12; // w9
  float value; // s0
  EventPointBuffEntity_o *v14; // x10
  __int64 eventPoint; // x11
  __int64 v16; // x20
  float v17; // s8
  System_String_o *v18; // x0
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  float v22; // s0
  System_String_o *v23; // x22
  Il2CppObject *v24; // x0
  System_String_o *v25; // x8
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  System_String_o *v29; // x23
  Il2CppObject *v30; // x0
  const MethodInfo *v31; // x3
  __int64 v32; // x20
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  Il2CppObject *v36; // x0
  const MethodInfo *v37; // x3
  const MethodInfo *v38; // x3
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  struct SideItemComponent_array *sideItems; // x8
  il2cpp_array_size_t v43; // x8
  unsigned __int64 v44; // x22
  unsigned __int64 v45; // x29
  __int64 v46; // x27
  __int64 i; // x28
  TitleInfoEventSideItemComponent_c *v48; // x0
  System_String_o *POINT_STATUS_STRING; // x21
  Il2CppObject *v50; // x0
  System_String_o *v51; // x0
  System_String_o *v52; // x0
  const MethodInfo *v53; // x2
  __int64 v54; // x21
  struct UnityEngine_Vector2_array *itemPositions; // x8
  struct UnityEngine_Vector2_array *spritePositions; // x8
  struct System_Int32_array *labelFontSizes; // x8
  struct System_Int32_array *v58; // x8
  struct UnityEngine_Vector2_array *labelPositions; // x8
  struct UnityEngine_Vector2_array *labelOutlineSizes; // x8
  struct UnityEngine_Color_array *labelOutlineColors; // x8
  struct UILabel_Effect_array *labelOutlineStyles; // x8
  struct System_Boolean_array *labelApplyGradients; // x8
  struct UnityEngine_Color_array *labelGradientTops; // x8
  struct UnityEngine_Color_array *labelGradientBottoms; // x8
  unsigned int *v66; // x25
  const MethodInfo *v67; // x3
  __int64 v68; // x0
  __int64 v69; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C25C36 & 1) == 0 )
  {
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&long_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&float_TypeInfo);
    sub_1C2D490(&string___TypeInfo);
    sub_1C2D490(&TitleInfoEventSideItemComponent_TypeInfo);
    sub_1C2D490(&StringLiteral_809/*"+{0:0.0}%"*/);
    sub_1C2D490(&StringLiteral_14813/*"UNIT_REST_NONE"*/);
    sub_1C2D490(&StringLiteral_25029/*"{0:#,0}"*/);
    sub_1C2D490(&StringLiteral_810/*"+{0}%"*/);
    sub_1C2D490(&StringLiteral_16616/*"_{0:00}"*/);
    sub_1C2D490(&StringLiteral_1122/*"0"*/);
    byte_4C25C36 = 1;
  }
  EventPointNoGroup = UserEventPointMaster__GetEventPointNoGroup(eventId, 0);
  if ( !entitys )
    goto LABEL_73;
  max_length = entitys->max_length;
  v11 = EventPointNoGroup;
  if ( max_length < 1 )
  {
    v16 = 0;
    value = 0.0;
  }
  else
  {
    v12 = 0;
    value = 0.0;
    while ( 1 )
    {
      if ( max_length == v12 )
        goto LABEL_74;
      v14 = entitys->m_Items[v12];
      if ( !v14 )
        goto LABEL_73;
      eventPoint = v14->fields.eventPoint;
      if ( EventPointNoGroup < eventPoint )
        break;
      ++v12;
      value = (float)v14->fields.value;
      if ( max_length == v12 )
      {
        v16 = 0;
        goto LABEL_13;
      }
    }
    v16 = eventPoint - EventPointNoGroup;
  }
LABEL_13:
  v17 = value / 10.0;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_14813/*"UNIT_REST_NONE"*/, 0);
  v22 = (float)(int)v17;
  if ( v17 == INFINITY )
    v22 = -2147500000.0;
  v23 = v18;
  *(float *)&v69 = v17;
  if ( v17 == v22 )
  {
    v24 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v69, v19, v20, v21);
    v25 = (System_String_o *)StringLiteral_810/*"+{0}%"*/;
  }
  else
  {
    v24 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v69, v19, v20, v21);
    v25 = (System_String_o *)StringLiteral_809/*"+{0:0.0}%"*/;
  }
  v29 = System_String__Format(v25, v24, 0);
  if ( (_DWORD)v16 )
  {
    v69 = v16;
    v30 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v69, v26, v27, v28);
    v23 = System_String__Format((System_String_o *)StringLiteral_25029/*"{0:#,0}"*/, v30, 0);
  }
  EventPointNoGroup = sub_1C2D538(string___TypeInfo, 3);
  if ( !EventPointNoGroup )
    goto LABEL_73;
  v32 = EventPointNoGroup;
  if ( !*(_DWORD *)(EventPointNoGroup + 24)
    || (*(_QWORD *)(EventPointNoGroup + 32) = v29,
        sub_1C2D434((CGThumbnailListItem_o *)(EventPointNoGroup + 32), (int32_t)v29, v9, v31),
        v69 = v11,
        v36 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v69, v33, v34, v35),
        EventPointNoGroup = (__int64)System_String__Format((System_String_o *)StringLiteral_25029/*"{0:#,0}"*/, v36, 0),
        *(_DWORD *)(v32 + 24) <= 1u)
    || (*(_QWORD *)(v32 + 40) = EventPointNoGroup,
        sub_1C2D434((CGThumbnailListItem_o *)(v32 + 40), EventPointNoGroup, v9, v37),
        *(_DWORD *)(v32 + 24) <= 2u) )
  {
LABEL_74:
    sub_1C2D6F4(EventPointNoGroup, v8, v9);
  }
  *(_QWORD *)(v32 + 48) = v23;
  sub_1C2D434((CGThumbnailListItem_o *)(v32 + 48), (int32_t)v23, v9, v38);
  sideItems = this->fields.sideItems;
  if ( !sideItems )
LABEL_73:
    sub_1C2D6EC(EventPointNoGroup, v8);
  v43 = sideItems->max_length;
  if ( (int)v43 >= 1 )
  {
    v44 = 0;
    v45 = 0;
    v46 = 4LL * (unsigned int)v43;
    for ( i = 36; ; i += 8 )
    {
      v48 = TitleInfoEventSideItemComponent_TypeInfo;
      if ( !TitleInfoEventSideItemComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TitleInfoEventSideItemComponent_TypeInfo);
        v48 = TitleInfoEventSideItemComponent_TypeInfo;
      }
      POINT_STATUS_STRING = v48->static_fields->POINT_STATUS_STRING;
      LODWORD(v69) = v45 + 1;
      v50 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v69, v39, v40, v41);
      v51 = System_String__Format((System_String_o *)StringLiteral_16616/*"_{0:00}"*/, v50, 0);
      v52 = System_String__Concat_63457864(POINT_STATUS_STRING, v51, 0);
      EventPointNoGroup = (__int64)TitleInfoEventSideItemComponent__CreateSideItem(this, v52, v53);
      if ( !EventPointNoGroup )
        break;
      v54 = EventPointNoGroup;
      EventPointNoGroup = (__int64)UnityEngine_Component__get_gameObject(
                                     (UnityEngine_Component_o *)EventPointNoGroup,
                                     0);
      itemPositions = this->fields.itemPositions;
      if ( !itemPositions )
        break;
      if ( v45 >= LODWORD(itemPositions->max_length) )
        goto LABEL_74;
      GameObjectExtensions__SetLocalPosition_35918392(
        (UnityEngine_GameObject_o *)EventPointNoGroup,
        *(UnityEngine_Vector2_o *)((char *)itemPositions + i - 4),
        0);
      EventPointNoGroup = *(_QWORD *)(v54 + 32);
      if ( !EventPointNoGroup )
        break;
      EventPointNoGroup = (__int64)UnityEngine_Component__get_gameObject(
                                     (UnityEngine_Component_o *)EventPointNoGroup,
                                     0);
      spritePositions = this->fields.spritePositions;
      if ( !spritePositions )
        break;
      if ( v45 >= LODWORD(spritePositions->max_length) )
        goto LABEL_74;
      GameObjectExtensions__SetLocalPosition_35918392(
        (UnityEngine_GameObject_o *)EventPointNoGroup,
        *(UnityEngine_Vector2_o *)((char *)spritePositions + i - 4),
        0);
      if ( v45 >= *(unsigned int *)(v32 + 24) )
        goto LABEL_74;
      EventPointNoGroup = *(_QWORD *)(v54 + 40);
      if ( !EventPointNoGroup )
        break;
      UILabel__set_text((UILabel_o *)EventPointNoGroup, *(System_String_o **)(v32 + 32 + i - 36), 0);
      labelFontSizes = this->fields.labelFontSizes;
      if ( !labelFontSizes )
        break;
      if ( v45 >= LODWORD(labelFontSizes->max_length) )
        goto LABEL_74;
      EventPointNoGroup = *(_QWORD *)(v54 + 40);
      if ( !EventPointNoGroup )
        break;
      UIWidget__set_height((UIWidget_o *)EventPointNoGroup, labelFontSizes->m_Items[v44 / 4], 0);
      v58 = this->fields.labelFontSizes;
      if ( !v58 )
        break;
      if ( v45 >= LODWORD(v58->max_length) )
        goto LABEL_74;
      EventPointNoGroup = *(_QWORD *)(v54 + 40);
      if ( !EventPointNoGroup )
        break;
      UILabel__set_fontSize((UILabel_o *)EventPointNoGroup, v58->m_Items[v44 / 4], 0);
      EventPointNoGroup = *(_QWORD *)(v54 + 40);
      if ( !EventPointNoGroup )
        break;
      EventPointNoGroup = (__int64)UnityEngine_Component__get_gameObject(
                                     (UnityEngine_Component_o *)EventPointNoGroup,
                                     0);
      labelPositions = this->fields.labelPositions;
      if ( !labelPositions )
        break;
      if ( v45 >= LODWORD(labelPositions->max_length) )
        goto LABEL_74;
      GameObjectExtensions__SetLocalPosition_35918392(
        (UnityEngine_GameObject_o *)EventPointNoGroup,
        *(UnityEngine_Vector2_o *)((char *)labelPositions + i - 4),
        0);
      labelOutlineSizes = this->fields.labelOutlineSizes;
      if ( !labelOutlineSizes )
        break;
      if ( v45 >= LODWORD(labelOutlineSizes->max_length) )
        goto LABEL_74;
      EventPointNoGroup = *(_QWORD *)(v54 + 40);
      if ( !EventPointNoGroup )
        break;
      UILabel__set_effectDistance(
        (UILabel_o *)EventPointNoGroup,
        *(UnityEngine_Vector2_o *)((char *)labelOutlineSizes + i - 4),
        0);
      labelOutlineColors = this->fields.labelOutlineColors;
      if ( !labelOutlineColors )
        break;
      if ( v45 >= LODWORD(labelOutlineColors->max_length) )
        goto LABEL_74;
      EventPointNoGroup = *(_QWORD *)(v54 + 40);
      if ( !EventPointNoGroup )
        break;
      UILabel__set_effectColor((UILabel_o *)EventPointNoGroup, labelOutlineColors->m_Items[v44 / 4], 0);
      labelOutlineStyles = this->fields.labelOutlineStyles;
      if ( !labelOutlineStyles )
        break;
      if ( v45 >= LODWORD(labelOutlineStyles->max_length) )
        goto LABEL_74;
      EventPointNoGroup = *(_QWORD *)(v54 + 40);
      if ( !EventPointNoGroup )
        break;
      UILabel__set_effectStyle((UILabel_o *)EventPointNoGroup, labelOutlineStyles->m_Items[v44 / 4], 0);
      labelApplyGradients = this->fields.labelApplyGradients;
      if ( !labelApplyGradients )
        break;
      if ( v45 >= LODWORD(labelApplyGradients->max_length) )
        goto LABEL_74;
      EventPointNoGroup = *(_QWORD *)(v54 + 40);
      if ( !EventPointNoGroup )
        break;
      UILabel__set_applyGradient((UILabel_o *)EventPointNoGroup, labelApplyGradients->m_Items[v45], 0);
      EventPointNoGroup = *(_QWORD *)(v54 + 40);
      if ( !EventPointNoGroup )
        break;
      if ( *(_BYTE *)(EventPointNoGroup + 488) )
      {
        labelGradientTops = this->fields.labelGradientTops;
        if ( !labelGradientTops )
          goto LABEL_73;
        if ( v45 >= LODWORD(labelGradientTops->max_length) )
          goto LABEL_74;
        UILabel__set_gradientTop((UILabel_o *)EventPointNoGroup, labelGradientTops->m_Items[v44 / 4], 0);
        labelGradientBottoms = this->fields.labelGradientBottoms;
        if ( !labelGradientBottoms )
          goto LABEL_73;
        if ( v45 >= LODWORD(labelGradientBottoms->max_length) )
          goto LABEL_74;
        EventPointNoGroup = *(_QWORD *)(v54 + 40);
        if ( !EventPointNoGroup )
          goto LABEL_73;
        UILabel__set_gradientBottom((UILabel_o *)EventPointNoGroup, labelGradientBottoms->m_Items[v44 / 4], 0);
      }
      v66 = (unsigned int *)this->fields.sideItems;
      if ( !v66 )
        goto LABEL_73;
      EventPointNoGroup = sub_1C2D5CC(v54, *(_QWORD *)(*(_QWORD *)v66 + 64LL));
      if ( !EventPointNoGroup )
      {
        v68 = sub_1C2D710(0);
        sub_1C2D5B8(v68, 0);
      }
      if ( v45 >= v66[6] )
        goto LABEL_74;
      *(_QWORD *)&v66[(unsigned __int64)i / 4 - 1] = v54;
      sub_1C2D434((CGThumbnailListItem_o *)&v66[(unsigned __int64)i / 4 - 1], v54, v9, v67);
      v44 += 4LL;
      ++v45;
      if ( v46 == v44 )
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
  UnityEngine_GameObject_o *v21; // x0
  TitleInfoEventSideItemComponent_c *v22; // x8
  UnityEngine_GameObject_o *v23; // x24
  UILabel_o *datalist; // x24
  Il2CppObject *v25; // x0
  unsigned int *v26; // x23
  const MethodInfo *v27; // x3
  unsigned int *v28; // x0
  __int64 v29; // x0
  int64_t v31; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C25C35 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_EventPointGroupMaster___);
    sub_1C2D490(&long_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&TitleInfoEventSideItemComponent_TypeInfo);
    sub_1C2D490(&StringLiteral_25029/*"{0:#,0}"*/);
    byte_4C25C35 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventPointGroupMaster___)) == 0
    || (Instance = (DataManager_o *)EventPointGroupMaster__getEntityList(
                                      (EventPointGroupMaster_o *)Instance,
                                      eventId,
                                      0),
        (sideItems = this->fields.sideItems) == 0) )
  {
LABEL_31:
    sub_1C2D6EC(Instance, v5);
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
        GameObjectExtensions__SetLocalPosition_35918600(
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
          v21 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
          v22 = TitleInfoEventSideItemComponent_TypeInfo;
          v23 = v21;
          if ( !TitleInfoEventSideItemComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TitleInfoEventSideItemComponent_TypeInfo);
            v22 = TitleInfoEventSideItemComponent_TypeInfo;
          }
          GameObjectExtensions__AddLocalPosition_35919264(v23, v22->static_fields->ADD_LAST_LABEL_POS, 0);
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
        v31 = EventPoint;
        v25 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v31, v18, v19, v20);
        Instance = (DataManager_o *)System_String__Format((System_String_o *)StringLiteral_25029/*"{0:#,0}"*/, v25, 0);
        if ( datalist )
        {
          UILabel__set_text(datalist, (System_String_o *)Instance, 0);
          v26 = (unsigned int *)this->fields.sideItems;
          if ( v26 )
          {
            Instance = (DataManager_o *)sub_1C2D5CC(v16, *(_QWORD *)(*(_QWORD *)v26 + 64LL));
            if ( !Instance )
            {
              v29 = sub_1C2D710(0);
              sub_1C2D5B8(v29, 0);
            }
            if ( v9 >= v26[6] )
LABEL_33:
              sub_1C2D6F4(Instance, v5, v6);
            v28 = &v26[2 * v9];
            *((_QWORD *)v28 + 4) = v16;
            sub_1C2D434((CGThumbnailListItem_o *)(v28 + 8), (int32_t)v16, (int32_t)v6, v27);
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