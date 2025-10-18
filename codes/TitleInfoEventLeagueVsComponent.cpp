void TitleInfoEventLeagueVsComponent___cctor(const MethodInfo *method)
{
  struct TitleInfoEventLeagueVsComponent_StaticFields *static_fields; // x8

  if ( (byte_4C40F21 & 1) == 0 )
  {
    sub_1C37058(&TitleInfoEventLeagueVsComponent_TypeInfo);
    byte_4C40F21 = 1;
  }
  static_fields = TitleInfoEventLeagueVsComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->RAIDBOSS_ANIM_ROOT_POS.fields.x = 0x42A0000000000000LL;
  static_fields->RAIDBOSS_ANIM_ROOT_POS.fields.z = 0.0;
  TitleInfoEventLeagueVsComponent_TypeInfo->static_fields->ANIM_DURATION_FRAME_IN = 0.3;
}


void TitleInfoEventLeagueVsComponent___ctor(TitleInfoEventLeagueVsComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


double TitleInfoEventLeagueVsComponent__ConvertPointToRate(
        TitleInfoEventLeagueVsComponent_o *this,
        int64_t point,
        int64_t maxPoint,
        const MethodInfo *method)
{
  return (double)point / (double)maxPoint;
}


void TitleInfoEventLeagueVsComponent__Destroy(TitleInfoEventLeagueVsComponent_o *this, const MethodInfo *method)
{
  ;
}


void TitleInfoEventLeagueVsComponent__FrameIn(
        TitleInfoEventLeagueVsComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  TitleInfoEventLeagueVsComponent_c *v6; // x8
  UnityEngine_GameObject_o *v7; // x21
  Il2CppObject *v8; // x0
  float32x2_t *static_fields; // x8
  Il2CppObject *v10; // x21
  float v11; // s0
  void *v12; // x9
  UnityEngine_GameObject_o *v13; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w1
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w2
  const MethodInfo *v20; // x3

  if ( (byte_4C40F1C & 1) == 0 )
  {
    sub_1C37058(&TitleInfoEventLeagueVsComponent_TypeInfo);
    sub_1C37058(&Method_UITweener_Begin_TweenPosition___);
    sub_1C37058(&StringLiteral_6858/*"FrameInFinish"*/);
    byte_4C40F1C = 1;
  }
  if ( this->fields.evPointEnt )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    v6 = TitleInfoEventLeagueVsComponent_TypeInfo;
    v7 = gameObject;
    if ( !TitleInfoEventLeagueVsComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventLeagueVsComponent_TypeInfo);
      v6 = TitleInfoEventLeagueVsComponent_TypeInfo;
    }
    v8 = UITweener__Begin_object_(
           v7,
           v6->static_fields->ANIM_DURATION_FRAME_IN,
           (const MethodInfo_31A3570 *)Method_UITweener_Begin_TweenPosition___);
    if ( !v8 )
      sub_1C372B4(0);
    static_fields = (float32x2_t *)TitleInfoEventLeagueVsComponent_TypeInfo->static_fields;
    v10 = v8;
    v11 = this->fields.originPos.fields.z + static_fields[1].n64_f32[0];
    v8[8].klass = (Il2CppClass *)vadd_f32(
                                   *(float32x2_t *)&this->fields.originPos.fields.x,
                                   (float32x2_t)static_fields->n64_u64[0]).n64_u64[0];
    *(float *)&v8[8].monitor = v11;
    v12 = *(void **)&this->fields.originPos.fields.x;
    HIDWORD(v8[9].klass) = LODWORD(this->fields.originPos.fields.z);
    *(void **)((char *)&v8[8].monitor + 4) = v12;
    LODWORD(v8[2].klass) = 2;
    v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    v10[5].klass = (Il2CppClass *)v13;
    sub_1C36FFC((CGThumbnailListItem_o *)&v10[5], (int32_t)v13, v14, v15);
    v16 = StringLiteral_6858/*"FrameInFinish"*/;
    v10[5].monitor = (void *)StringLiteral_6858/*"FrameInFinish"*/;
    sub_1C36FFC((CGThumbnailListItem_o *)&v10[5].monitor, v16, v17, v18);
    this->fields.frameInCallBack = callback;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.frameInCallBack, (int32_t)callback, v19, v20);
  }
}


void TitleInfoEventLeagueVsComponent__FrameInFinish(TitleInfoEventLeagueVsComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_frameInCallBack; // x0
  System_Action_o *v5; // x19
  struct System_Action_o *frameInCallBack; // t1

  frameInCallBack = this->fields.frameInCallBack;
  p_frameInCallBack = (CGThumbnailListItem_o *)&this->fields.frameInCallBack;
  v5 = frameInCallBack;
  p_frameInCallBack->klass = 0;
  sub_1C36FFC(p_frameInCallBack, 0, v2, v3);
  if ( frameInCallBack )
    ActionExtensions__Call(v5, 0);
}


void TitleInfoEventLeagueVsComponent__FrameOut(TitleInfoEventLeagueVsComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  TitleInfoEventLeagueVsComponent_c *v4; // x8
  UnityEngine_GameObject_o *v5; // x20
  Il2CppObject *v6; // x0
  Il2CppObject *v7; // x20
  float32x2_t *static_fields; // x8
  float v9; // s1
  UnityEngine_GameObject_o *v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  Il2CppClass *v16; // [xsp+0h] [xbp-40h]

  if ( (byte_4C40F1D & 1) == 0 )
  {
    sub_1C37058(&TitleInfoEventLeagueVsComponent_TypeInfo);
    sub_1C37058(&Method_UITweener_Begin_TweenPosition___);
    sub_1C37058(&StringLiteral_6860/*"FrameOutFinish"*/);
    byte_4C40F1D = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v4 = TitleInfoEventLeagueVsComponent_TypeInfo;
  v5 = gameObject;
  if ( !TitleInfoEventLeagueVsComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventLeagueVsComponent_TypeInfo);
    v4 = TitleInfoEventLeagueVsComponent_TypeInfo;
  }
  v6 = UITweener__Begin_object_(
         v5,
         v4->static_fields->ANIM_DURATION_FRAME_IN,
         (const MethodInfo_31A3570 *)Method_UITweener_Begin_TweenPosition___);
  v16 = *(Il2CppClass **)&this->fields.originPos.fields.x;
  if ( !v6 )
    sub_1C372B4(0);
  v7 = v6;
  *(float *)&v6[8].monitor = this->fields.originPos.fields.z;
  v6[8].klass = v16;
  static_fields = (float32x2_t *)TitleInfoEventLeagueVsComponent_TypeInfo->static_fields;
  v9 = this->fields.originPos.fields.z + static_fields[1].n64_f32[0];
  *(float32x2_t *)((char *)&v6[8].monitor + 4) = vadd_f32(
                                                   *(float32x2_t *)&this->fields.originPos.fields.x,
                                                   (float32x2_t)static_fields->n64_u64[0]);
  *((float *)&v6[9].klass + 1) = v9;
  LODWORD(v6[2].klass) = 2;
  v10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v7[5].klass = (Il2CppClass *)v10;
  sub_1C36FFC((CGThumbnailListItem_o *)&v7[5], (int32_t)v10, v11, v12);
  v13 = StringLiteral_6860/*"FrameOutFinish"*/;
  v7[5].monitor = (void *)StringLiteral_6860/*"FrameOutFinish"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v7[5].monitor, v13, v14, v15);
}


void TitleInfoEventLeagueVsComponent__FrameOutFinish(TitleInfoEventLeagueVsComponent_o *this, const MethodInfo *method)
{
  ;
}


bool TitleInfoEventLeagueVsComponent__IsDispPossible(TitleInfoEventLeagueVsComponent_o *this, const MethodInfo *method)
{
  return 1;
}


bool TitleInfoEventLeagueVsComponent__IsEventRaidBoss(
        TitleInfoEventLeagueVsComponent_o *this,
        const MethodInfo *method)
{
  return 0;
}


void TitleInfoEventLeagueVsComponent__OnDestroy(TitleInfoEventLeagueVsComponent_o *this, const MethodInfo *method)
{
  ;
}


void TitleInfoEventLeagueVsComponent__OpenResultPointDialog(
        TitleInfoEventLeagueVsComponent_o *this,
        EventPointEntity_o *evPointEnt,
        EventPointWinReward_o *rewardInfo,
        System_Action_o *callback,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  GiftEntity_array *GiftListById; // x21
  System_String_o *v10; // x0
  System_String_o *v11; // x20
  System_String_o *v12; // x0
  bool winGroup1; // w1
  System_String_o *v14; // x22
  Il2CppObject *WinGroupName; // x0
  int max_length; // w8
  System_String_o *v17; // x22
  int v18; // w23
  System_String_o *v19; // x0
  System_String_o *v20; // x0
  System_String_o *countText; // [xsp+40h] [xbp-50h] BYREF
  System_String_o *nameText; // [xsp+48h] [xbp-48h] BYREF

  if ( (byte_4C40F20 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&StringLiteral_5656/*"EVENT_POINT_VS_WIN_DIALOG_TITLE"*/);
    sub_1C37058(&StringLiteral_5655/*"EVENT_POINT_VS_WIN_DIALOG_GROUP"*/);
    sub_1C37058(&StringLiteral_5654/*"EVENT_POINT_VS_WIN_DIALOG_GET"*/);
    byte_4C40F20 = 1;
  }
  countText = 0;
  nameText = 0;
  if ( evPointEnt )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_21;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_GiftMaster___);
    if ( !rewardInfo || !Instance )
      goto LABEL_21;
    GiftListById = GiftMaster__GetGiftListById((GiftMaster_o *)Instance, rewardInfo->fields.giftId, 0);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v10 = LocalizationManager__Get((System_String_o *)StringLiteral_5656/*"EVENT_POINT_VS_WIN_DIALOG_TITLE"*/, 0);
    v11 = System_String__Format(v10, (Il2CppObject *)evPointEnt->fields.name, 0);
    v12 = LocalizationManager__Get((System_String_o *)StringLiteral_5655/*"EVENT_POINT_VS_WIN_DIALOG_GROUP"*/, 0);
    winGroup1 = rewardInfo->fields.winGroup1;
    v14 = v12;
    WinGroupName = (Il2CppObject *)EventPointEntity__GetWinGroupName(evPointEnt, winGroup1, 0);
    Instance = (DataManager_o *)System_String__Format(v14, WinGroupName, 0);
    if ( !GiftListById )
      goto LABEL_21;
    max_length = GiftListById->max_length;
    v17 = (System_String_o *)Instance;
    if ( max_length >= 1 )
    {
      v18 = 0;
      while ( 1 )
      {
        if ( v18 >= (unsigned int)max_length )
          sub_1C372BC(Instance);
        Instance = (DataManager_o *)GiftListById->m_Items[v18];
        if ( !Instance )
          break;
        GiftEntity__GetInfo((GiftEntity_o *)Instance, &nameText, &countText, 0);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v19 = LocalizationManager__Get((System_String_o *)StringLiteral_5654/*"EVENT_POINT_VS_WIN_DIALOG_GET"*/, 0);
        v20 = System_String__Format_63602948(v19, (Il2CppObject *)nameText, (Il2CppObject *)countText, 0);
        Instance = (DataManager_o *)System_String__Concat_63561656(v17, v20, 0);
        max_length = GiftListById->max_length;
        ++v18;
        v17 = (System_String_o *)Instance;
        if ( v18 >= max_length )
          goto LABEL_17;
      }
LABEL_21:
      sub_1C372B4(Instance);
    }
LABEL_17:
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_21;
    CommonUI__OpenNotificationDialog((CommonUI_o *)Instance, v11, v17, callback, -1, 0, 0, 0, 1, 0, 1, 0, 0, 0.0, 0, 0);
  }
  else
  {
    ActionExtensions__Call(callback, 0);
  }
}


void TitleInfoEventLeagueVsComponent__ResultEffect(
        TitleInfoEventLeagueVsComponent_o *this,
        int32_t winType,
        AssetData_o *effectAssetData,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v9; // x21
  UnityEngine_GameObject_o *resultPanel; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  UnityEngine_Object_o *Object_40510596; // x22
  Il2CppObject *v16; // x0
  UnityEngine_GameObject_o *v17; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t v22; // w8
  UnityEngine_BoxCollider_c *v23; // x1
  __int64 naturalAligment; // x9
  CGThumbnailListItem_o *v25; // x23
  Il2CppObject *v26; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  struct EventPointEntity_o *evPointEnt; // x8
  EventPointVsResultAction_o *v30; // x20
  int32_t id; // w22
  System_Action_o *v32; // x23

  if ( (byte_4C40F1F & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&UnityEngine_BoxCollider_TypeInfo);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_Collider___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_EventPointVsResultAction___);
    sub_1C37058(&UnityEngine_GameObject_TypeInfo);
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_TitleInfoEventLeagueVsComponent___c__DisplayClass36_0__ResultEffect_b__0__);
    sub_1C37058(&TitleInfoEventLeagueVsComponent___c__DisplayClass36_0_TypeInfo);
    sub_1C37058(&StringLiteral_17290/*"bit_vs_result"*/);
    byte_4C40F1F = 1;
  }
  v9 = sub_1C372A4(TitleInfoEventLeagueVsComponent___c__DisplayClass36_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_27;
  *(_QWORD *)(v9 + 32) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 32), (int32_t)this, v11, v12);
  *(_QWORD *)(v9 + 40) = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 40), (int32_t)callback, v13, v14);
  if ( !winType )
  {
    ActionExtensions__Call(*(System_Action_o **)(v9 + 40), 0);
    return;
  }
  if ( !effectAssetData )
    goto LABEL_27;
  Object_40510596 = AssetData__GetObject_40510596(effectAssetData, (System_String_o *)StringLiteral_17290/*"bit_vs_result"*/, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( Object_40510596 )
    v16 = (UnityEngine_GameObject_c *)Object_40510596->klass == UnityEngine_GameObject_TypeInfo
        ? (Il2CppObject *)Object_40510596
        : 0LL;
  else
    v16 = 0;
  resultPanel = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                              v16,
                                              (const MethodInfo_3173FC0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !resultPanel
    || (v17 = resultPanel,
        gameObject = UnityEngine_GameObject__get_gameObject(resultPanel, 0),
        GameObjectExtensions__SafeSetParent_36138184(gameObject, this->fields.resultPanel, 0),
        (resultPanel = this->fields.resultPanel) == 0) )
  {
LABEL_27:
    sub_1C372B4(resultPanel);
  }
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       resultPanel,
                       (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_Collider___);
  v22 = (int)Component_object;
  if ( !Component_object )
    goto LABEL_22;
  v23 = UnityEngine_BoxCollider_TypeInfo;
  naturalAligment = UnityEngine_BoxCollider_TypeInfo->_2.naturalAligment;
  if ( Component_object->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (UnityEngine_BoxCollider_c *)Component_object->klass->_2.typeHierarchy[naturalAligment - 1] != UnityEngine_BoxCollider_TypeInfo
    || (*(_QWORD *)(v9 + 24) = Component_object,
        v25 = (CGThumbnailListItem_o *)(v9 + 24),
        Component_object->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (UnityEngine_BoxCollider_c *)Component_object->klass->_2.typeHierarchy[naturalAligment - 1] != v23 )
  {
    sub_1C37574(Component_object);
LABEL_22:
    *(_QWORD *)(v9 + 24) = 0;
    v25 = (CGThumbnailListItem_o *)(v9 + 24);
  }
  sub_1C36FFC(v25, v22, v20, v21);
  resultPanel = (UnityEngine_GameObject_o *)v25->klass;
  if ( !v25->klass )
    goto LABEL_27;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)resultPanel, 1, 0);
  v26 = UnityEngine_GameObject__GetComponent_object_(
          v17,
          (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_EventPointVsResultAction___);
  *(_QWORD *)(v9 + 16) = v26;
  sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 16), (int32_t)v26, v27, v28);
  evPointEnt = this->fields.evPointEnt;
  if ( !evPointEnt )
    goto LABEL_27;
  v30 = *(EventPointVsResultAction_o **)(v9 + 16);
  id = evPointEnt->fields.id;
  v32 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(
    v32,
    (Il2CppObject *)v9,
    Method_TitleInfoEventLeagueVsComponent___c__DisplayClass36_0__ResultEffect_b__0__,
    0);
  if ( !v30 )
    goto LABEL_27;
  EventPointVsResultAction__Setup(v30, winType, id, v32, 0);
}


void TitleInfoEventLeagueVsComponent__Setup(
        TitleInfoEventLeagueVsComponent_o *this,
        EventPointEntity_o *eventPointEntity,
        int32_t eventId,
        AssetData_o *effectAssetData,
        bool isDispRestTime,
        const MethodInfo *method)
{
  AssetData_o *v7; // x26
  TerminalPramsManager_c *v11; // x0
  __int64 maskFade; // x0
  Il2CppObject *MasterData_object; // x24
  Il2CppObject *v14; // x25
  struct System_Int32_array *v15; // x8
  unsigned __int64 v16; // x21
  int64_t v17; // x22
  unsigned __int64 max_length_low; // x9
  struct System_Int32_array *group1; // x8
  struct System_Int32_array *group2; // x8
  int64_t v21; // x24
  struct UISlider_array *hpBarSlider; // x8
  struct UISlider_array *v23; // x8
  float v24; // s0
  struct UISlider_array *v25; // x8
  int64_t normaTotalPoint; // x21
  double v27; // d8
  float v28; // s0
  struct UISlider_array *v29; // x8
  float v30; // s0
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  __int64 v34; // x5
  __int64 v35; // x6
  __int64 v36; // x7
  struct UISprite_array *v37; // x8
  struct System_Int32_array *v38; // x9
  UISprite_o *v39; // x24
  Il2CppObject *v40; // x0
  System_String_o *v41; // x26
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  __int64 v45; // x5
  __int64 v46; // x6
  __int64 v47; // x7
  struct UISprite_array *v48; // x8
  struct System_Int32_array *v49; // x9
  UISprite_o *v50; // x24
  __int64 v51; // x2
  __int64 v52; // x3
  __int64 v53; // x4
  __int64 v54; // x5
  __int64 v55; // x6
  __int64 v56; // x7
  struct System_Int32_array *v57; // x8
  Il2CppObject *v58; // x26
  Il2CppObject *v59; // x0
  System_String_o *v60; // x0
  struct System_Int32_array *v61; // x8
  __int64 v62; // x2
  __int64 v63; // x3
  __int64 v64; // x4
  __int64 v65; // x5
  __int64 v66; // x6
  __int64 v67; // x7
  struct System_Int32_array *v68; // x8
  __int64 v69; // x27
  unsigned __int64 v70; // x24
  Il2CppObject *v71; // x26
  unsigned __int64 v72; // x9
  __int64 v73; // x2
  __int64 v74; // x3
  __int64 v75; // x4
  __int64 v76; // x5
  __int64 v77; // x6
  __int64 v78; // x7
  Il2CppObject *v79; // x0
  struct UISprite_array *v80; // x8
  UISprite_o *v81; // x23
  Il2CppObject *v82; // x0
  System_String_o *v83; // x25
  struct UISprite_array *v84; // x8
  UISprite_o *v85; // x23
  System_String_o *v86; // x0
  struct UISlider_array *v87; // x8
  double v88; // d8
  float v89; // s0
  struct UISlider_array *v90; // x8
  __int64 v91; // x2
  __int64 v92; // x3
  __int64 v93; // x4
  __int64 v94; // x5
  __int64 v95; // x6
  __int64 v96; // x7
  struct UISprite_array *hpBar; // x8
  struct System_Int32_array *v98; // x9
  UISprite_o *v99; // x23
  Il2CppObject *v100; // x0
  System_String_o *v101; // x25
  __int64 v102; // x2
  __int64 v103; // x3
  __int64 v104; // x4
  __int64 v105; // x5
  __int64 v106; // x6
  __int64 v107; // x7
  struct UISprite_array *v108; // x8
  struct System_Int32_array *v109; // x9
  UISprite_o *v110; // x23
  Il2CppObject *v111; // x0
  System_String_o *v112; // x0
  __int64 v113; // x2
  __int64 v114; // x3
  __int64 v115; // x4
  __int64 v116; // x5
  __int64 v117; // x6
  __int64 v118; // x7
  struct UISprite_array *groupIcon; // x8
  struct System_Int32_array *v120; // x9
  UISprite_o *v121; // x23
  Il2CppObject *v122; // x0
  System_String_o *v123; // x0
  __int64 v124; // x2
  __int64 v125; // x3
  __int64 v126; // x4
  __int64 v127; // x5
  __int64 v128; // x6
  __int64 v129; // x7
  struct UISprite_array *v130; // x8
  struct System_Int32_array *v131; // x9
  UISprite_o *v132; // x23
  Il2CppObject *v133; // x0
  System_String_o *v134; // x0
  UnityEngine_Object_o *Object_40510596; // x21
  Il2CppObject *v136; // x0
  UnityEngine_GameObject_o *v137; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x21
  const MethodInfo *v140; // x4
  UISprite_o *maskSp; // x21
  const MethodInfo *v142; // x1
  UISprite_o *modeName; // x21
  __int64 v144; // x2
  __int64 v145; // x3
  __int64 v146; // x4
  __int64 v147; // x5
  __int64 v148; // x6
  __int64 v149; // x7
  Il2CppObject *v150; // x0
  System_String_o *v151; // x0
  struct UISprite_array *splitIcon; // x8
  unsigned __int64 v153; // x21
  unsigned __int64 v154; // x9
  UISprite_o *v155; // x20
  UnityEngine_GameObject_o *v156; // x0
  UnityEngine_GameObject_o *v157; // x0
  AssetData_o *v158; // [xsp+10h] [xbp-80h]
  int32_t v159; // [xsp+18h] [xbp-78h] BYREF
  int32_t v160; // [xsp+1Ch] [xbp-74h] BYREF
  int32_t v161; // [xsp+28h] [xbp-68h] BYREF
  int32_t id; // [xsp+2Ch] [xbp-64h] BYREF

  v7 = effectAssetData;
  if ( (byte_4C40F1A & 1) == 0 )
  {
    sub_1C37058(&AtlasManager_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_EventPointGroupMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_TotalEventPointMaster___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_TitleInfoEventLeagueVsGaugeEffect___);
    sub_1C37058(&UnityEngine_GameObject_TypeInfo);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&StringLiteral_19307/*"event_vs_gauge_title_"*/);
    sub_1C37058(&StringLiteral_19304/*"event_vs_frame"*/);
    sub_1C37058(&StringLiteral_19303/*"event_vs_back"*/);
    sub_1C37058(&StringLiteral_24816/*"white00"*/);
    sub_1C37058(&StringLiteral_19306/*"event_vs_gauge_bg"*/);
    sub_1C37058(&StringLiteral_17287/*"bit_vs_gauge_part"*/);
    sub_1C37058(&StringLiteral_19308/*"event_vs_split_line"*/);
    sub_1C37058(&StringLiteral_18000/*"clear00"*/);
    sub_1C37058(&StringLiteral_19312/*"event_vs_team_icon_"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    sub_1C37058(&StringLiteral_19305/*"event_vs_gauge_"*/);
    byte_4C40F1A = 1;
  }
  if ( !eventPointEntity )
    return;
  this->fields.evPointEnt = eventPointEntity;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)&this->fields.evPointEnt,
    (int32_t)eventPointEntity,
    eventId,
    (const MethodInfo *)effectAssetData);
  this->fields.isDispRestTime = isDispRestTime;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C403FA )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C403FA = 1;
  }
  v11 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v11 = TerminalPramsManager_TypeInfo;
  }
  if ( v11->static_fields->_eventPointWinType_k__BackingField )
  {
    maskFade = (__int64)this->fields.maskFade;
    if ( !maskFade )
      goto LABEL_120;
    MaskFade__Fadeout((MaskFade_o *)maskFade, 1, 0.0, 0, 0);
  }
  maskFade = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !maskFade )
    goto LABEL_120;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)maskFade,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_TotalEventPointMaster___);
  maskFade = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !maskFade )
    goto LABEL_120;
  v14 = DataManager__GetMasterData_object_(
          (DataManager_o *)maskFade,
          (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventPointGroupMaster___);
  maskFade = EventPointEntity__isBossBattle(eventPointEntity, 0);
  if ( (maskFade & 1) == 0 )
  {
    group1 = eventPointEntity->fields.group1;
    if ( !group1 )
      goto LABEL_120;
    if ( LODWORD(group1->max_length) )
    {
      if ( !MasterData_object )
        goto LABEL_120;
      maskFade = TotalEventPointMaster__GetPoint(
                   (TotalEventPointMaster_o *)MasterData_object,
                   eventId,
                   eventPointEntity->fields.id,
                   group1->m_Items[0],
                   0);
      group2 = eventPointEntity->fields.group2;
      if ( !group2 )
        goto LABEL_120;
      if ( LODWORD(group2->max_length) )
      {
        v17 = maskFade;
        maskFade = TotalEventPointMaster__GetPoint(
                     (TotalEventPointMaster_o *)MasterData_object,
                     eventId,
                     eventPointEntity->fields.id,
                     group2->m_Items[0],
                     0);
        v21 = maskFade;
        if ( v17 == maskFade )
        {
          hpBarSlider = this->fields.hpBarSlider;
          if ( !hpBarSlider )
            goto LABEL_120;
          if ( !LODWORD(hpBarSlider->max_length) )
            goto LABEL_123;
          maskFade = (__int64)hpBarSlider->m_Items[0];
          if ( !maskFade )
            goto LABEL_120;
          UIProgressBar__set_value((UIProgressBar_o *)maskFade, 0.5, 0);
          v23 = this->fields.hpBarSlider;
          if ( !v23 )
            goto LABEL_120;
          if ( LODWORD(v23->max_length) <= 1 )
            goto LABEL_123;
          maskFade = (__int64)v23->m_Items[1];
          if ( !maskFade )
            goto LABEL_120;
          v24 = 0.5;
        }
        else
        {
          v87 = this->fields.hpBarSlider;
          if ( !v87 )
            goto LABEL_120;
          if ( !LODWORD(v87->max_length) )
            goto LABEL_123;
          maskFade = (__int64)v87->m_Items[0];
          if ( !maskFade )
            goto LABEL_120;
          v88 = (double)v17 / (double)(v21 + v17);
          v89 = 1.0 - v88;
          UIProgressBar__set_value((UIProgressBar_o *)maskFade, v89, 0);
          v90 = this->fields.hpBarSlider;
          if ( !v90 )
            goto LABEL_120;
          if ( LODWORD(v90->max_length) <= 1 )
            goto LABEL_123;
          maskFade = (__int64)v90->m_Items[1];
          if ( !maskFade )
            goto LABEL_120;
          v24 = v88;
        }
        UIProgressBar__set_value((UIProgressBar_o *)maskFade, v24, 0);
        hpBar = this->fields.hpBar;
        if ( !hpBar )
          goto LABEL_120;
        if ( LODWORD(hpBar->max_length) )
        {
          v98 = eventPointEntity->fields.group2;
          if ( !v98 )
            goto LABEL_120;
          if ( LODWORD(v98->max_length) )
          {
            v99 = hpBar->m_Items[0];
            id = v98->m_Items[0];
            v100 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id, v91, v92, v93, v94, v95, v96);
            v101 = System_String__Concat((Il2CppObject *)StringLiteral_19305/*"event_vs_gauge_"*/, v100, 0);
            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
            maskFade = AtlasManager__SetEventUI(v99, v101, 0);
            v108 = this->fields.hpBar;
            if ( !v108 )
              goto LABEL_120;
            if ( LODWORD(v108->max_length) > 1 )
            {
              v109 = eventPointEntity->fields.group1;
              if ( !v109 )
                goto LABEL_120;
              if ( LODWORD(v109->max_length) )
              {
                v110 = v108->m_Items[1];
                v161 = v109->m_Items[0];
                v111 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v161, v102, v103, v104, v105, v106, v107);
                v112 = System_String__Concat((Il2CppObject *)StringLiteral_19305/*"event_vs_gauge_"*/, v111, 0);
                maskFade = AtlasManager__SetEventUI(v110, v112, 0);
                groupIcon = this->fields.groupIcon;
                if ( !groupIcon )
                  goto LABEL_120;
                if ( LODWORD(groupIcon->max_length) )
                {
                  v120 = eventPointEntity->fields.group2;
                  if ( !v120 )
                    goto LABEL_120;
                  if ( LODWORD(v120->max_length) )
                  {
                    v121 = groupIcon->m_Items[0];
                    v160 = v120->m_Items[0];
                    v122 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v160, v113, v114, v115, v116, v117, v118);
                    v123 = System_String__Concat((Il2CppObject *)StringLiteral_19312/*"event_vs_team_icon_"*/, v122, 0);
                    maskFade = AtlasManager__SetEventUI(v121, v123, 0);
                    v130 = this->fields.groupIcon;
                    if ( !v130 )
                      goto LABEL_120;
                    if ( LODWORD(v130->max_length) > 1 )
                    {
                      v131 = eventPointEntity->fields.group1;
                      if ( !v131 )
                        goto LABEL_120;
                      if ( LODWORD(v131->max_length) )
                      {
                        v132 = v130->m_Items[1];
                        v159 = v131->m_Items[0];
                        v133 = (Il2CppObject *)j_il2cpp_value_box_0(
                                                 int_TypeInfo,
                                                 &v159,
                                                 v124,
                                                 v125,
                                                 v126,
                                                 v127,
                                                 v128,
                                                 v129);
                        v134 = System_String__Concat((Il2CppObject *)StringLiteral_19312/*"event_vs_team_icon_"*/, v133, 0);
                        maskFade = AtlasManager__SetEventUI(v132, v134, 0);
                        goto LABEL_98;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_123:
    sub_1C372BC(maskFade);
  }
  v15 = eventPointEntity->fields.group1;
  if ( !v15 )
    goto LABEL_120;
  v16 = 0;
  v17 = 0;
  while ( 1 )
  {
    max_length_low = LODWORD(v15->max_length);
    if ( (__int64)v16 >= (int)max_length_low )
      break;
    if ( v16 >= max_length_low )
      goto LABEL_123;
    if ( MasterData_object )
    {
      maskFade = TotalEventPointMaster__GetPoint(
                   (TotalEventPointMaster_o *)MasterData_object,
                   eventId,
                   eventPointEntity->fields.id,
                   v15->m_Items[v16],
                   0);
      v15 = eventPointEntity->fields.group1;
      v17 += maskFade;
      ++v16;
      if ( v15 )
        continue;
    }
    goto LABEL_120;
  }
  v25 = this->fields.hpBarSlider;
  if ( !v25 )
    goto LABEL_120;
  if ( !LODWORD(v25->max_length) )
    goto LABEL_123;
  maskFade = (__int64)v25->m_Items[0];
  if ( !maskFade )
    goto LABEL_120;
  normaTotalPoint = eventPointEntity->fields.normaTotalPoint;
  v27 = (double)v17 / (double)normaTotalPoint;
  v28 = 1.0 - v27;
  UIProgressBar__set_value((UIProgressBar_o *)maskFade, v28, 0);
  v29 = this->fields.hpBarSlider;
  if ( !v29 )
    goto LABEL_120;
  if ( LODWORD(v29->max_length) <= 1 )
    goto LABEL_123;
  maskFade = (__int64)v29->m_Items[1];
  if ( !maskFade )
    goto LABEL_120;
  v30 = v27;
  UIProgressBar__set_value((UIProgressBar_o *)maskFade, v30, 0);
  v37 = this->fields.hpBar;
  if ( !v37 )
    goto LABEL_120;
  if ( !LODWORD(v37->max_length) )
    goto LABEL_123;
  v38 = eventPointEntity->fields.group2;
  if ( !v38 )
    goto LABEL_120;
  v158 = v7;
  if ( !LODWORD(v38->max_length) )
    goto LABEL_123;
  v39 = v37->m_Items[0];
  id = v38->m_Items[0];
  v40 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id, v31, v32, v33, v34, v35, v36);
  v41 = System_String__Concat((Il2CppObject *)StringLiteral_19305/*"event_vs_gauge_"*/, v40, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  maskFade = AtlasManager__SetEventUI(v39, v41, 0);
  v48 = this->fields.hpBar;
  if ( !v48 )
    goto LABEL_120;
  if ( LODWORD(v48->max_length) <= 1 )
    goto LABEL_123;
  v49 = eventPointEntity->fields.group1;
  if ( !v49 )
    goto LABEL_120;
  if ( !LODWORD(v49->max_length) )
    goto LABEL_123;
  v50 = v48->m_Items[1];
  v161 = v49->m_Items[0];
  maskFade = j_il2cpp_value_box_0(int_TypeInfo, &v161, v42, v43, v44, v45, v46, v47);
  v57 = eventPointEntity->fields.group1;
  if ( !v57 )
    goto LABEL_120;
  if ( LODWORD(v57->max_length) <= 1 )
    goto LABEL_123;
  v58 = (Il2CppObject *)maskFade;
  v160 = v57->m_Items[1];
  v59 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v160, v51, v52, v53, v54, v55, v56);
  v60 = System_String__Concat_63599656((Il2CppObject *)StringLiteral_19305/*"event_vs_gauge_"*/, v58, v59, 0);
  maskFade = AtlasManager__SetEventUI(v50, v60, 0);
  v61 = eventPointEntity->fields.group2;
  if ( !v61 )
    goto LABEL_120;
  if ( !LODWORD(v61->max_length) )
    goto LABEL_123;
  if ( !v14 )
    goto LABEL_120;
  maskFade = (__int64)EventPointGroupMaster__getEntity((EventPointGroupMaster_o *)v14, eventId, v61->m_Items[0], 0);
  v68 = eventPointEntity->fields.group1;
  if ( !v68 )
    goto LABEL_120;
  v69 = maskFade;
  v70 = 0;
  v71 = (Il2CppObject *)StringLiteral_1/*""*/;
  while ( 1 )
  {
    v72 = LODWORD(v68->max_length);
    if ( (__int64)v70 >= (int)v72 )
      break;
    if ( v70 >= v72 )
      goto LABEL_123;
    maskFade = (__int64)EventPointGroupMaster__getEntity((EventPointGroupMaster_o *)v14, eventId, v68->m_Items[v70], 0);
    if ( maskFade )
    {
      id = *(_DWORD *)(maskFade + 32);
      v79 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id, v73, v74, v75, v76, v77, v78);
      maskFade = (__int64)System_String__Concat(v71, v79, 0);
      v68 = eventPointEntity->fields.group1;
      v71 = (Il2CppObject *)maskFade;
      ++v70;
      if ( v68 )
        continue;
    }
    goto LABEL_120;
  }
  v80 = this->fields.groupIcon;
  if ( !v80 )
    goto LABEL_120;
  if ( !LODWORD(v80->max_length) )
    goto LABEL_123;
  if ( !v69 )
    goto LABEL_120;
  v81 = v80->m_Items[0];
  id = *(_DWORD *)(v69 + 32);
  v82 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id, v62, v63, v64, v65, v66, v67);
  v83 = System_String__Concat((Il2CppObject *)StringLiteral_19312/*"event_vs_team_icon_"*/, v82, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  maskFade = AtlasManager__SetEventUI(v81, v83, 0);
  v84 = this->fields.groupIcon;
  v21 = normaTotalPoint - v17;
  if ( !v84 )
LABEL_120:
    sub_1C372B4(maskFade);
  if ( LODWORD(v84->max_length) <= 1 )
    goto LABEL_123;
  v85 = v84->m_Items[1];
  v86 = System_String__Concat_63561656((System_String_o *)StringLiteral_19312/*"event_vs_team_icon_"*/, (System_String_o *)v71, 0);
  maskFade = AtlasManager__SetEventUI(v85, v86, 0);
  v7 = v158;
LABEL_98:
  if ( !v7 )
    goto LABEL_120;
  Object_40510596 = AssetData__GetObject_40510596(v7, (System_String_o *)StringLiteral_17287/*"bit_vs_gauge_part"*/, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( Object_40510596 )
    v136 = (UnityEngine_GameObject_c *)Object_40510596->klass == UnityEngine_GameObject_TypeInfo
         ? (Il2CppObject *)Object_40510596
         : 0LL;
  else
    v136 = 0;
  maskFade = (__int64)UnityEngine_Object__Instantiate_object_(
                        v136,
                        (const MethodInfo_3173FC0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !maskFade )
    goto LABEL_120;
  v137 = (UnityEngine_GameObject_o *)maskFade;
  gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)maskFade, 0);
  GameObjectExtensions__SafeSetParent_36138184(gameObject, this->fields.gaugeEffectPanel, 0);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v137,
                       (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventLeagueVsGaugeEffect___);
  maskFade = EventPointEntity__isBossBattle(eventPointEntity, 0);
  if ( !Component_object )
    goto LABEL_120;
  TitleInfoEventLeagueVsGaugeEffect__setup(
    (TitleInfoEventLeagueVsGaugeEffect_o *)Component_object,
    v17,
    v21,
    maskFade & 1,
    v140);
  maskSp = this->fields.maskSp;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetCommon(maskSp, 0);
  AtlasManager__SetCommon(this->fields.colliderSp, 0);
  maskFade = (__int64)this->fields.maskSp;
  if ( !maskFade )
    goto LABEL_120;
  UISprite__set_spriteName((UISprite_o *)maskFade, (System_String_o *)StringLiteral_24816/*"white00"*/, 0);
  maskFade = (__int64)this->fields.colliderSp;
  if ( !maskFade )
    goto LABEL_120;
  UISprite__set_spriteName((UISprite_o *)maskFade, (System_String_o *)StringLiteral_18000/*"clear00"*/, 0);
  this->fields.endTime = eventPointEntity->fields.endedAt;
  TitleInfoEventLeagueVsComponent__restTimeUpdate(this, v142);
  AtlasManager__SetEventUI(this->fields.baseWindow, (System_String_o *)StringLiteral_19306/*"event_vs_gauge_bg"*/, 0);
  AtlasManager__SetEventUI(this->fields.hpFrame, (System_String_o *)StringLiteral_19304/*"event_vs_frame"*/, 0);
  AtlasManager__SetEventUI(this->fields.hpBack, (System_String_o *)StringLiteral_19303/*"event_vs_back"*/, 0);
  modeName = this->fields.modeName;
  id = eventPointEntity->fields.id;
  v150 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id, v144, v145, v146, v147, v148, v149);
  v151 = System_String__Concat((Il2CppObject *)StringLiteral_19307/*"event_vs_gauge_title_"*/, v150, 0);
  AtlasManager__SetEventUI(modeName, v151, 0);
  maskFade = (__int64)this->fields.modeName;
  if ( !maskFade )
    goto LABEL_120;
  maskFade = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)maskFade + 840LL))(
               maskFade,
               *(_QWORD *)(*(_QWORD *)maskFade + 848LL));
  splitIcon = this->fields.splitIcon;
  if ( !splitIcon )
    goto LABEL_120;
  v153 = 0;
  while ( 1 )
  {
    v154 = LODWORD(splitIcon->max_length);
    if ( (__int64)v153 >= (int)v154 )
      break;
    if ( v153 >= v154 )
      goto LABEL_123;
    v155 = splitIcon->m_Items[v153];
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    maskFade = AtlasManager__SetEventUI(v155, (System_String_o *)StringLiteral_19308/*"event_vs_split_line"*/, 0);
    splitIcon = this->fields.splitIcon;
    ++v153;
    if ( !splitIcon )
      goto LABEL_120;
  }
  v156 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SetLocalPositionY(v156, -2.0, 0);
  v157 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  this->fields.originPos = GameObjectExtensions__GetLocalPosition(v157, 0);
}


// attributes: thunk
void TitleInfoEventLeagueVsComponent__Update(TitleInfoEventLeagueVsComponent_o *this, const MethodInfo *method)
{
  TitleInfoEventLeagueVsComponent__restTimeUpdate(this, method);
}


void TitleInfoEventLeagueVsComponent__UpdateDisp(TitleInfoEventLeagueVsComponent_o *this, const MethodInfo *method)
{
  ;
}


void TitleInfoEventLeagueVsComponent__gaugeEvent(
        TitleInfoEventLeagueVsComponent_o *this,
        int32_t groupId,
        int32_t eventId,
        AssetData_o *effectAssetData,
        System_Action_o *callback,
        const MethodInfo *method)
{
  EventPointEntity_o *evPointEnt; // x0
  DataManager_o *Instance; // x0
  struct EventPointEntity_o *v13; // x8
  struct System_Int32_array *group1; // x9
  TotalEventPointMaster_o *v15; // x25
  struct EventPointEntity_o *v16; // x8
  struct System_Int32_array *group2; // x9
  int64_t v18; // x24
  int64_t v19; // x23
  UnityEngine_Object_o *Object_40510596; // x0
  UnityEngine_GameObject_c **v21; // x22
  Il2CppObject *v22; // x0
  UnityEngine_GameObject_o *v23; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v25; // x5

  if ( (byte_4C40F1E & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_TotalEventPointMaster___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_TitleInfoEventLeagueVsGaugeFlashEffect___);
    sub_1C37058(&UnityEngine_GameObject_TypeInfo);
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&StringLiteral_17285/*"bit_vs_gauge_flash"*/);
    byte_4C40F1E = 1;
  }
  evPointEnt = this->fields.evPointEnt;
  if ( evPointEnt )
  {
    if ( EventPointEntity__isBossBattle(evPointEnt, 0) )
    {
      ActionExtensions__Call(callback, 0);
      return;
    }
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_26;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_TotalEventPointMaster___);
    v13 = this->fields.evPointEnt;
    if ( !v13 )
      goto LABEL_26;
    group1 = v13->fields.group1;
    if ( !group1 )
      goto LABEL_26;
    if ( !LODWORD(group1->max_length) )
      goto LABEL_27;
    v15 = (TotalEventPointMaster_o *)Instance;
    if ( !Instance )
      goto LABEL_26;
    Instance = (DataManager_o *)TotalEventPointMaster__GetPoint(
                                  (TotalEventPointMaster_o *)Instance,
                                  eventId,
                                  v13->fields.id,
                                  group1->m_Items[0],
                                  0);
    v16 = this->fields.evPointEnt;
    if ( !v16 )
      goto LABEL_26;
    group2 = v16->fields.group2;
    if ( !group2 )
      goto LABEL_26;
    if ( !LODWORD(group2->max_length) )
LABEL_27:
      sub_1C372BC(Instance);
    v18 = (int64_t)Instance;
    Instance = (DataManager_o *)TotalEventPointMaster__GetPoint(v15, eventId, v16->fields.id, group2->m_Items[0], 0);
    if ( !effectAssetData )
      goto LABEL_26;
    v19 = (int64_t)Instance;
    Object_40510596 = AssetData__GetObject_40510596(effectAssetData, (System_String_o *)StringLiteral_17285/*"bit_vs_gauge_flash"*/, 0);
    v21 = (UnityEngine_GameObject_c **)Object_40510596;
    if ( UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      if ( Object_40510596 )
        goto LABEL_18;
    }
    else
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( v21 )
      {
LABEL_18:
        if ( *v21 == UnityEngine_GameObject_TypeInfo )
          v22 = (Il2CppObject *)v21;
        else
          v22 = 0;
LABEL_23:
        Instance = (DataManager_o *)UnityEngine_Object__Instantiate_object_(
                                      v22,
                                      (const MethodInfo_3173FC0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( Instance )
        {
          v23 = (UnityEngine_GameObject_o *)Instance;
          gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)Instance, 0);
          GameObjectExtensions__SafeSetParent_36138184(gameObject, this->fields.gaugeEffectPanel, 0);
          Instance = (DataManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                        v23,
                                        (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventLeagueVsGaugeFlashEffect___);
          if ( Instance )
          {
            TitleInfoEventLeagueVsGaugeFlashEffect__setup(
              (TitleInfoEventLeagueVsGaugeFlashEffect_o *)Instance,
              groupId,
              v18,
              v19,
              callback,
              v25);
            return;
          }
        }
LABEL_26:
        sub_1C372B4(Instance);
      }
    }
    v22 = 0;
    goto LABEL_23;
  }
}


EventPointEntity_o *TitleInfoEventLeagueVsComponent__getEventPointEntity(
        TitleInfoEventLeagueVsComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.evPointEnt;
}


void TitleInfoEventLeagueVsComponent__restTimeUpdate(TitleInfoEventLeagueVsComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Behaviour_o *restTimeLabel; // x0
  UILabel_o *v4; // x20
  System_String_o *v5; // x0
  int64_t endTime; // x8
  System_String_o *v7; // x19
  Il2CppObject *RestTime3; // x0

  if ( (byte_4C40F1B & 1) == 0 )
  {
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&StringLiteral_5742/*"EVENT_VS_GAUGE_REST_TIME"*/);
    byte_4C40F1B = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( this->fields.endTime - NetworkManager__getTime(0) >= 1 && this->fields.isDispRestTime )
  {
    restTimeLabel = (UnityEngine_Behaviour_o *)this->fields.restTimeLabel;
    if ( restTimeLabel )
    {
      UnityEngine_Behaviour__set_enabled(restTimeLabel, 1, 0);
      v4 = this->fields.restTimeLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v5 = LocalizationManager__Get((System_String_o *)StringLiteral_5742/*"EVENT_VS_GAUGE_REST_TIME"*/, 0);
      endTime = this->fields.endTime;
      v7 = v5;
      RestTime3 = (Il2CppObject *)LocalizationManager__GetRestTime3(endTime, 0);
      restTimeLabel = (UnityEngine_Behaviour_o *)System_String__Format(v7, RestTime3, 0);
      if ( v4 )
      {
        UILabel__set_text(v4, (System_String_o *)restTimeLabel, 0);
        return;
      }
    }
LABEL_14:
    sub_1C372B4(restTimeLabel);
  }
  restTimeLabel = (UnityEngine_Behaviour_o *)this->fields.restTimeLabel;
  if ( !restTimeLabel )
    goto LABEL_14;
  UnityEngine_Behaviour__set_enabled(restTimeLabel, 0, 0);
}


void TitleInfoEventLeagueVsComponent___c__DisplayClass36_0___ctor(
        TitleInfoEventLeagueVsComponent___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TitleInfoEventLeagueVsComponent___c__DisplayClass36_0___ResultEffect_b__0(
        TitleInfoEventLeagueVsComponent___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  TitleInfoEventLeagueVsComponent___c__DisplayClass36_0_o *v2; // x19
  System_Action_o *_9__1; // x21
  EventPointVsResultAction_o *effect; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  struct TitleInfoEventLeagueVsComponent_o *_4__this; // x8

  v2 = this;
  if ( (byte_4C40F22 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    this = (TitleInfoEventLeagueVsComponent___c__DisplayClass36_0_o *)sub_1C37058(&Method_TitleInfoEventLeagueVsComponent___c__DisplayClass36_0__ResultEffect_b__1__);
    byte_4C40F22 = 1;
  }
  _9__1 = v2->fields.__9__1;
  effect = v2->fields.effect;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v2,
      Method_TitleInfoEventLeagueVsComponent___c__DisplayClass36_0__ResultEffect_b__1__,
      0);
    v2->fields.__9__1 = _9__1;
    sub_1C36FFC((CGThumbnailListItem_o *)&v2->fields.__9__1, (int32_t)_9__1, v5, v6);
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this || !effect )
    sub_1C372B4(this);
  EventPointVsResultAction__Play(effect, _9__1, _4__this->fields.maskFade, 0.0, 0);
}


void TitleInfoEventLeagueVsComponent___c__DisplayClass36_0___ResultEffect_b__1(
        TitleInfoEventLeagueVsComponent___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *effect; // x0
  UnityEngine_Object_o *gameObject; // x20
  struct TitleInfoEventLeagueVsComponent_o *_4__this; // x8
  MaskFade_o *maskFade; // x20

  if ( (byte_4C40F23 & 1) == 0 )
  {
    sub_1C37058(&AvalonSceneManager_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C40F23 = 1;
  }
  effect = (UnityEngine_Component_o *)this->fields.effect;
  if ( !effect )
    goto LABEL_12;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(effect, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71266752(gameObject, 0);
  effect = (UnityEngine_Component_o *)this->fields.coll;
  if ( !effect )
    goto LABEL_12;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)effect, 0, 0);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  maskFade = _4__this->fields.maskFade;
  effect = (UnityEngine_Component_o *)AvalonSceneManager_TypeInfo;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !maskFade )
LABEL_12:
    sub_1C372B4(effect);
  MaskFade__Fadein(maskFade, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, this->fields.callback, 0);
}