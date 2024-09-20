void __fastcall TitleInfoEventSideItemComponent___cctor(const MethodInfo *method)
{
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  __int64 v10; // x19
  int32_t v11; // w1
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w1
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w1
  int32_t v18; // w2
  int32_t v19; // w3
  int32_t v20; // w1
  struct TitleInfoEventSideItemComponent_StaticFields *static_fields; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  int32_t v24; // w1
  struct TitleInfoEventSideItemComponent_StaticFields *v25; // x0
  int32_t v26; // w2
  int32_t v27; // w3

  if ( (byte_4A59C08 & 1) == 0 )
  {
    sub_1B885B0(&string___TypeInfo);
    sub_1B885B0(&TitleInfoEventSideItemComponent_TypeInfo);
    sub_1B885B0(&StringLiteral_23945/*"time_status_side_04"*/);
    sub_1B885B0(&StringLiteral_23942/*"time_status_side_01"*/);
    sub_1B885B0(&StringLiteral_23944/*"time_status_side_03"*/);
    sub_1B885B0(&StringLiteral_22565/*"point_status_side"*/);
    sub_1B885B0(&StringLiteral_23943/*"time_status_side_02"*/);
    byte_4A59C08 = 1;
  }
  TitleInfoEventSideItemComponent_TypeInfo->static_fields->ADD_LAST_LABEL_POS = (struct UnityEngine_Vector2_o)0x3F800000BF800000LL;
  __asm { FMOV            V0.2S, #1.0 }
  TitleInfoEventSideItemComponent_TypeInfo->static_fields->LAST_LABEL_OUTLINE = _D0;
  v6 = sub_1B88658(string___TypeInfo, 4LL);
  if ( !v6 )
    sub_1B8880C(0LL, v7);
  v10 = v6;
  if ( !*(_DWORD *)(v6 + 24) )
    goto LABEL_9;
  v11 = StringLiteral_23942/*"time_status_side_01"*/;
  *(_QWORD *)(v6 + 32) = StringLiteral_23942/*"time_status_side_01"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v6 + 32), v11, v8, v9);
  if ( *(_DWORD *)(v10 + 24) <= 1u
    || (v14 = StringLiteral_23944/*"time_status_side_03"*/,
        *(_QWORD *)(v10 + 40) = StringLiteral_23944/*"time_status_side_03"*/,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v10 + 40), v14, v12, v13),
        *(_DWORD *)(v10 + 24) <= 2u)
    || (v17 = StringLiteral_23943/*"time_status_side_02"*/,
        *(_QWORD *)(v10 + 48) = StringLiteral_23943/*"time_status_side_02"*/,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v10 + 48), v17, v15, v16),
        *(_DWORD *)(v10 + 24) <= 3u) )
  {
LABEL_9:
    sub_1B88814(v6, v7);
  }
  v20 = StringLiteral_23945/*"time_status_side_04"*/;
  *(_QWORD *)(v10 + 56) = StringLiteral_23945/*"time_status_side_04"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v10 + 56), v20, v18, v19);
  static_fields = TitleInfoEventSideItemComponent_TypeInfo->static_fields;
  static_fields->TIME_STATUS_SPRITE_NAMES = (struct System_String_array *)v10;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->TIME_STATUS_SPRITE_NAMES, v10, v22, v23);
  v24 = StringLiteral_22565/*"point_status_side"*/;
  v25 = TitleInfoEventSideItemComponent_TypeInfo->static_fields;
  v25->POINT_STATUS_STRING = (struct System_String_o *)StringLiteral_22565/*"point_status_side"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v25->POINT_STATUS_STRING, v24, v26, v27);
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
  Il2CppObject *clone; // x20
  Il2CppObject *v6; // x0
  __int64 v7; // x1
  UnityEngine_Component_o *v8; // x20
  UnityEngine_GameObject_o *gameObject; // x22
  UnityEngine_GameObject_o *v10; // x0
  UnityEngine_GameObject_o *v11; // x0
  UISprite_o *monitor; // x21

  if ( (byte_4A59C07 & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_SideItemComponent___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A59C07 = 1;
  }
  clone = (Il2CppObject *)this->fields.clone;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__Instantiate_object_(
         clone,
         (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_SideItemComponent___);
  if ( !v6 )
    goto LABEL_10;
  v8 = (UnityEngine_Component_o *)v6;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0LL);
  v10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SafeSetParent_33730068(gameObject, v10, 0LL);
  v11 = UnityEngine_Component__get_gameObject(v8, 0LL);
  GameObjectExtensions__ResetLocalScale(v11, 0LL);
  monitor = (UISprite_o *)v8[1].monitor;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(monitor, spriteName, 0LL);
  v6 = (Il2CppObject *)v8[1].monitor;
  if ( !v6 )
LABEL_10:
    sub_1B8880C(v6, v7);
  ((void (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))v6->klass->vtable[33].method)(
    v6,
    v6->klass->vtable[34].methodPtr);
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
  EventPointBuffEntity_array *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_4A59C04 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventPointBuffMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A59C04 = 1;
  }
  Instance = (EventPointBuffEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (EventPointBuffEntity_array *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)Instance,
                                                   (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventPointBuffMaster___)) == 0LL
    || (Instance = EventPointBuffMaster__getEntityList((EventPointBuffMaster_o *)Instance, eventId, 0LL)) == 0LL )
  {
    sub_1B8880C(Instance, v6);
  }
  if ( *(_QWORD *)&Instance->max_length )
    TitleInfoEventSideItemComponent__SetupBuffRateUI(this, eventId, Instance, v7);
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
  float v21; // s0
  System_String_o *v22; // x22
  Il2CppObject *v23; // x0
  System_String_o *v24; // x8
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  System_String_o *v28; // x23
  Il2CppObject *v29; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  __int64 v32; // x20
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  Il2CppObject *v36; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  int32_t v39; // w2
  int32_t v40; // w3
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  struct SideItemComponent_array *sideItems; // x8
  __int64 v45; // x8
  unsigned __int64 v46; // x22
  unsigned __int64 v47; // x29
  __int64 v48; // x27
  __int64 i; // x28
  TitleInfoEventSideItemComponent_c *v50; // x0
  System_String_o *POINT_STATUS_STRING; // x21
  Il2CppObject *v52; // x0
  System_String_o *v53; // x0
  System_String_o *v54; // x0
  const MethodInfo *v55; // x2
  __int64 v56; // x21
  struct UnityEngine_Vector2_array *itemPositions; // x8
  struct UnityEngine_Vector2_array *spritePositions; // x8
  struct System_Int32_array *labelFontSizes; // x8
  struct System_Int32_array *v60; // x8
  struct UnityEngine_Vector2_array *labelPositions; // x8
  struct UnityEngine_Vector2_array *labelOutlineSizes; // x8
  struct UnityEngine_Color_array *labelOutlineColors; // x8
  struct UILabel_Effect_array *labelOutlineStyles; // x8
  struct System_Boolean_array *labelApplyGradients; // x8
  struct UnityEngine_Color_array *labelGradientTops; // x8
  struct UnityEngine_Color_array *labelGradientBottoms; // x8
  struct SideItemComponent_array *v68; // x25
  int32_t v69; // w2
  int32_t v70; // w3
  __int64 v71; // x0
  __int64 v72; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A59C06 & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&long_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&float_TypeInfo);
    sub_1B885B0(&string___TypeInfo);
    sub_1B885B0(&TitleInfoEventSideItemComponent_TypeInfo);
    sub_1B885B0(&StringLiteral_866/*"+{0:0.0}%"*/);
    sub_1B885B0(&StringLiteral_14801/*"UNIT_REST_NONE"*/);
    sub_1B885B0(&StringLiteral_24933/*"{0:#,0}"*/);
    sub_1B885B0(&StringLiteral_867/*"+{0}%"*/);
    sub_1B885B0(&StringLiteral_16609/*"_{0:00}"*/);
    sub_1B885B0(&StringLiteral_1212/*"0"*/);
    byte_4A59C06 = 1;
  }
  EventPointNoGroup = UserEventPointMaster__GetEventPointNoGroup(eventId, 0LL);
  if ( !entitys )
    goto LABEL_73;
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
        v15 = 0LL;
        goto LABEL_13;
      }
    }
    v15 = eventPoint - EventPointNoGroup;
  }
LABEL_13:
  v16 = value / 10.0;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_14801/*"UNIT_REST_NONE"*/, 0LL);
  v21 = (float)(int)v16;
  if ( v16 == INFINITY )
    v21 = -2147500000.0;
  v22 = v17;
  *(float *)&v72 = v16;
  if ( v16 == v21 )
  {
    v23 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v72, v18, v19, v20);
    v24 = (System_String_o *)StringLiteral_867/*"+{0}%"*/;
  }
  else
  {
    v23 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v72, v18, v19, v20);
    v24 = (System_String_o *)StringLiteral_866/*"+{0:0.0}%"*/;
  }
  v28 = System_String__Format(v24, v23, 0LL);
  if ( (_DWORD)v15 )
  {
    v72 = v15;
    v29 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v72, v25, v26, v27);
    v22 = System_String__Format((System_String_o *)StringLiteral_24933/*"{0:#,0}"*/, v29, 0LL);
  }
  EventPointNoGroup = sub_1B88658(string___TypeInfo, 3LL);
  if ( !EventPointNoGroup )
    goto LABEL_73;
  v32 = EventPointNoGroup;
  if ( !*(_DWORD *)(EventPointNoGroup + 24)
    || (*(_QWORD *)(EventPointNoGroup + 32) = v28,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(EventPointNoGroup + 32), (int32_t)v28, v30, v31),
        v72 = v10,
        v36 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v72, v33, v34, v35),
        EventPointNoGroup = (__int64)System_String__Format((System_String_o *)StringLiteral_24933/*"{0:#,0}"*/, v36, 0LL),
        *(_DWORD *)(v32 + 24) <= 1u)
    || (*(_QWORD *)(v32 + 40) = EventPointNoGroup,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v32 + 40), EventPointNoGroup, v37, v38),
        *(_DWORD *)(v32 + 24) <= 2u) )
  {
LABEL_74:
    sub_1B88814(EventPointNoGroup, v8);
  }
  *(_QWORD *)(v32 + 48) = v22;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v32 + 48), (int32_t)v22, v39, v40);
  sideItems = this->fields.sideItems;
  if ( !sideItems )
LABEL_73:
    sub_1B8880C(EventPointNoGroup, v8);
  v45 = *(_QWORD *)&sideItems->max_length;
  if ( (int)v45 >= 1 )
  {
    v46 = 0LL;
    v47 = 0LL;
    v48 = 4LL * (unsigned int)v45;
    for ( i = 36LL; ; i += 8LL )
    {
      v50 = TitleInfoEventSideItemComponent_TypeInfo;
      if ( !TitleInfoEventSideItemComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TitleInfoEventSideItemComponent_TypeInfo);
        v50 = TitleInfoEventSideItemComponent_TypeInfo;
      }
      POINT_STATUS_STRING = v50->static_fields->POINT_STATUS_STRING;
      LODWORD(v72) = v47 + 1;
      v52 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v72, v41, v42, v43);
      v53 = System_String__Format((System_String_o *)StringLiteral_16609/*"_{0:00}"*/, v52, 0LL);
      v54 = System_String__Concat_61707032(POINT_STATUS_STRING, v53, 0LL);
      EventPointNoGroup = (__int64)TitleInfoEventSideItemComponent__CreateSideItem(this, v54, v55);
      if ( !EventPointNoGroup )
        break;
      v56 = EventPointNoGroup;
      EventPointNoGroup = (__int64)UnityEngine_Component__get_gameObject(
                                     (UnityEngine_Component_o *)EventPointNoGroup,
                                     0LL);
      itemPositions = this->fields.itemPositions;
      if ( !itemPositions )
        break;
      if ( v47 >= itemPositions->max_length )
        goto LABEL_74;
      GameObjectExtensions__SetLocalPosition_33724016(
        (UnityEngine_GameObject_o *)EventPointNoGroup,
        *(UnityEngine_Vector2_o *)((char *)itemPositions + i - 4),
        0LL);
      EventPointNoGroup = *(_QWORD *)(v56 + 32);
      if ( !EventPointNoGroup )
        break;
      EventPointNoGroup = (__int64)UnityEngine_Component__get_gameObject(
                                     (UnityEngine_Component_o *)EventPointNoGroup,
                                     0LL);
      spritePositions = this->fields.spritePositions;
      if ( !spritePositions )
        break;
      if ( v47 >= spritePositions->max_length )
        goto LABEL_74;
      GameObjectExtensions__SetLocalPosition_33724016(
        (UnityEngine_GameObject_o *)EventPointNoGroup,
        *(UnityEngine_Vector2_o *)((char *)spritePositions + i - 4),
        0LL);
      if ( v47 >= *(unsigned int *)(v32 + 24) )
        goto LABEL_74;
      EventPointNoGroup = *(_QWORD *)(v56 + 40);
      if ( !EventPointNoGroup )
        break;
      UILabel__set_text((UILabel_o *)EventPointNoGroup, *(System_String_o **)(v32 + 32 + i - 36), 0LL);
      labelFontSizes = this->fields.labelFontSizes;
      if ( !labelFontSizes )
        break;
      if ( v47 >= labelFontSizes->max_length )
        goto LABEL_74;
      EventPointNoGroup = *(_QWORD *)(v56 + 40);
      if ( !EventPointNoGroup )
        break;
      UIWidget__set_height((UIWidget_o *)EventPointNoGroup, labelFontSizes->m_Items[v46 / 4 + 1], 0LL);
      v60 = this->fields.labelFontSizes;
      if ( !v60 )
        break;
      if ( v47 >= v60->max_length )
        goto LABEL_74;
      EventPointNoGroup = *(_QWORD *)(v56 + 40);
      if ( !EventPointNoGroup )
        break;
      UILabel__set_fontSize((UILabel_o *)EventPointNoGroup, v60->m_Items[v46 / 4 + 1], 0LL);
      EventPointNoGroup = *(_QWORD *)(v56 + 40);
      if ( !EventPointNoGroup )
        break;
      EventPointNoGroup = (__int64)UnityEngine_Component__get_gameObject(
                                     (UnityEngine_Component_o *)EventPointNoGroup,
                                     0LL);
      labelPositions = this->fields.labelPositions;
      if ( !labelPositions )
        break;
      if ( v47 >= labelPositions->max_length )
        goto LABEL_74;
      GameObjectExtensions__SetLocalPosition_33724016(
        (UnityEngine_GameObject_o *)EventPointNoGroup,
        *(UnityEngine_Vector2_o *)((char *)labelPositions + i - 4),
        0LL);
      labelOutlineSizes = this->fields.labelOutlineSizes;
      if ( !labelOutlineSizes )
        break;
      if ( v47 >= labelOutlineSizes->max_length )
        goto LABEL_74;
      EventPointNoGroup = *(_QWORD *)(v56 + 40);
      if ( !EventPointNoGroup )
        break;
      UILabel__set_effectDistance(
        (UILabel_o *)EventPointNoGroup,
        *(UnityEngine_Vector2_o *)((char *)labelOutlineSizes + i - 4),
        0LL);
      labelOutlineColors = this->fields.labelOutlineColors;
      if ( !labelOutlineColors )
        break;
      if ( v47 >= labelOutlineColors->max_length )
        goto LABEL_74;
      EventPointNoGroup = *(_QWORD *)(v56 + 40);
      if ( !EventPointNoGroup )
        break;
      UILabel__set_effectColor(
        (UILabel_o *)EventPointNoGroup,
        *(UnityEngine_Color_o *)&labelOutlineColors->m_Items[v46 / 4].fields.g,
        0LL);
      labelOutlineStyles = this->fields.labelOutlineStyles;
      if ( !labelOutlineStyles )
        break;
      if ( v47 >= labelOutlineStyles->max_length )
        goto LABEL_74;
      EventPointNoGroup = *(_QWORD *)(v56 + 40);
      if ( !EventPointNoGroup )
        break;
      UILabel__set_effectStyle((UILabel_o *)EventPointNoGroup, labelOutlineStyles->m_Items[v46 / 4 + 1], 0LL);
      labelApplyGradients = this->fields.labelApplyGradients;
      if ( !labelApplyGradients )
        break;
      if ( v47 >= labelApplyGradients->max_length )
        goto LABEL_74;
      EventPointNoGroup = *(_QWORD *)(v56 + 40);
      if ( !EventPointNoGroup )
        break;
      UILabel__set_applyGradient((UILabel_o *)EventPointNoGroup, labelApplyGradients->m_Items[v47 + 4], 0LL);
      EventPointNoGroup = *(_QWORD *)(v56 + 40);
      if ( !EventPointNoGroup )
        break;
      if ( *(_BYTE *)(EventPointNoGroup + 488) )
      {
        labelGradientTops = this->fields.labelGradientTops;
        if ( !labelGradientTops )
          goto LABEL_73;
        if ( v47 >= labelGradientTops->max_length )
          goto LABEL_74;
        UILabel__set_gradientTop(
          (UILabel_o *)EventPointNoGroup,
          *(UnityEngine_Color_o *)&labelGradientTops->m_Items[v46 / 4].fields.g,
          0LL);
        labelGradientBottoms = this->fields.labelGradientBottoms;
        if ( !labelGradientBottoms )
          goto LABEL_73;
        if ( v47 >= labelGradientBottoms->max_length )
          goto LABEL_74;
        EventPointNoGroup = *(_QWORD *)(v56 + 40);
        if ( !EventPointNoGroup )
          goto LABEL_73;
        UILabel__set_gradientBottom(
          (UILabel_o *)EventPointNoGroup,
          *(UnityEngine_Color_o *)&labelGradientBottoms->m_Items[v46 / 4].fields.g,
          0LL);
      }
      v68 = this->fields.sideItems;
      if ( !v68 )
        goto LABEL_73;
      EventPointNoGroup = sub_1B886EC(v56, v68->obj.klass->_1.element_class);
      if ( !EventPointNoGroup )
      {
        v71 = sub_1B88830(0LL);
        sub_1B886D8(v71, 0LL);
      }
      if ( v47 >= v68->max_length )
        goto LABEL_74;
      *(_QWORD *)((char *)v68 + i - 4) = v56;
      sub_1B88554((ServantStatusBattleListViewItem_o *)((char *)v68 + i - 4), v56, v69, v70);
      v46 += 4LL;
      ++v47;
      if ( v48 == v46 )
        return;
    }
    goto LABEL_73;
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
  struct SideItemComponent_array *v26; // x23
  int32_t v27; // w2
  int32_t v28; // w3
  Il2CppClass **v29; // x0
  __int64 v30; // x0
  int64_t v32; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A59C05 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventPointGroupMaster___);
    sub_1B885B0(&long_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&TitleInfoEventSideItemComponent_TypeInfo);
    sub_1B885B0(&StringLiteral_24933/*"{0:#,0}"*/);
    byte_4A59C05 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventPointGroupMaster___)) == 0LL
    || (Instance = (DataManager_o *)EventPointGroupMaster__getEntityList(
                                      (EventPointGroupMaster_o *)Instance,
                                      eventId,
                                      0LL),
        (sideItems = this->fields.sideItems) == 0LL) )
  {
LABEL_31:
    sub_1B8880C(Instance, v5);
  }
  v8 = Instance;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0;
  while ( (__int64)v9 < (int)sideItems->max_length )
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
      EventPoint = UserEventPointMaster__GetEventPoint(eventId, *(_DWORD *)(v13 + 20), 0LL);
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
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
        GameObjectExtensions__SetLocalPosition_33724224(
          gameObject,
          0.0,
          (float)(int)v9 * (float)-this->fields.margin,
          0.0,
          0LL);
        if ( (v11 & 1) != 0 )
        {
          Instance = (DataManager_o *)v16->fields.datalist;
          if ( !Instance )
            goto LABEL_31;
          v21 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
          v22 = TitleInfoEventSideItemComponent_TypeInfo;
          v23 = v21;
          if ( !TitleInfoEventSideItemComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TitleInfoEventSideItemComponent_TypeInfo);
            v22 = TitleInfoEventSideItemComponent_TypeInfo;
          }
          GameObjectExtensions__AddLocalPosition_33724888(v23, v22->static_fields->ADD_LAST_LABEL_POS, 0LL);
          Instance = (DataManager_o *)v16->fields.datalist;
          if ( !Instance )
            goto LABEL_31;
          UILabel__set_effectDistance(
            (UILabel_o *)Instance,
            TitleInfoEventSideItemComponent_TypeInfo->static_fields->LAST_LABEL_OUTLINE,
            0LL);
          Instance = (DataManager_o *)v16->fields.datalist;
          if ( !Instance )
            goto LABEL_31;
          UIWidget__set_width((UIWidget_o *)Instance, 112, 0LL);
        }
        datalist = (UILabel_o *)v16->fields.datalist;
        v32 = EventPoint;
        v25 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v32, v18, v19, v20);
        Instance = (DataManager_o *)System_String__Format((System_String_o *)StringLiteral_24933/*"{0:#,0}"*/, v25, 0LL);
        if ( datalist )
        {
          UILabel__set_text(datalist, (System_String_o *)Instance, 0LL);
          v26 = this->fields.sideItems;
          if ( v26 )
          {
            Instance = (DataManager_o *)sub_1B886EC(v16, v26->obj.klass->_1.element_class);
            if ( !Instance )
            {
              v30 = sub_1B88830(0LL);
              sub_1B886D8(v30, 0LL);
            }
            if ( v9 >= v26->max_length )
LABEL_33:
              sub_1B88814(Instance, v5);
            v29 = &v26->obj.klass + v9;
            v29[4] = (Il2CppClass *)v16;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v29 + 4), (int32_t)v16, v27, v28);
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


void __fastcall TitleInfoEventSideItemComponent__UpdateDisp(
        TitleInfoEventSideItemComponent_o *this,
        const MethodInfo *method)
{
  ;
}