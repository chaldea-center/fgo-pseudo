void TitleInfoEventLeagueVsComponent___cctor(const MethodInfo *method)
{
  struct TitleInfoEventLeagueVsComponent_StaticFields *static_fields; // x8

  if ( (byte_4C54CC2 & 1) == 0 )
  {
    sub_1C3E564(&TitleInfoEventLeagueVsComponent_TypeInfo);
    byte_4C54CC2 = 1;
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
  __int64 v9; // x1
  float32x2_t *static_fields; // x8
  Il2CppObject *v11; // x21
  float v12; // s0
  void *v13; // x9
  UnityEngine_GameObject_o *v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w1
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int32_t v20; // w2
  const MethodInfo *v21; // x3

  if ( (byte_4C54CBD & 1) == 0 )
  {
    sub_1C3E564(&TitleInfoEventLeagueVsComponent_TypeInfo);
    sub_1C3E564(&Method_UITweener_Begin_TweenPosition___);
    sub_1C3E564(&StringLiteral_6858/*"FrameInFinish"*/);
    byte_4C54CBD = 1;
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
           (const MethodInfo_31B54C4 *)Method_UITweener_Begin_TweenPosition___);
    if ( !v8 )
      sub_1C3E7C0(0, v9);
    static_fields = (float32x2_t *)TitleInfoEventLeagueVsComponent_TypeInfo->static_fields;
    v11 = v8;
    v12 = this->fields.originPos.fields.z + static_fields[1].n64_f32[0];
    v8[8].klass = (Il2CppClass *)vadd_f32(
                                   *(float32x2_t *)&this->fields.originPos.fields.x,
                                   (float32x2_t)static_fields->n64_u64[0]).n64_u64[0];
    *(float *)&v8[8].monitor = v12;
    v13 = *(void **)&this->fields.originPos.fields.x;
    HIDWORD(v8[9].klass) = LODWORD(this->fields.originPos.fields.z);
    *(void **)((char *)&v8[8].monitor + 4) = v13;
    LODWORD(v8[2].klass) = 2;
    v14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    v11[5].klass = (Il2CppClass *)v14;
    sub_1C3E508((CGThumbnailListItem_o *)&v11[5], (int32_t)v14, v15, v16);
    v17 = StringLiteral_6858/*"FrameInFinish"*/;
    v11[5].monitor = (void *)StringLiteral_6858/*"FrameInFinish"*/;
    sub_1C3E508((CGThumbnailListItem_o *)&v11[5].monitor, v17, v18, v19);
    this->fields.frameInCallBack = callback;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.frameInCallBack, (int32_t)callback, v20, v21);
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
  sub_1C3E508(p_frameInCallBack, 0, v2, v3);
  if ( frameInCallBack )
    ActionExtensions__Call(v5, 0);
}


void TitleInfoEventLeagueVsComponent__FrameOut(TitleInfoEventLeagueVsComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  TitleInfoEventLeagueVsComponent_c *v4; // x8
  UnityEngine_GameObject_o *v5; // x20
  Il2CppObject *v6; // x0
  __int64 v7; // x1
  Il2CppObject *v8; // x20
  float32x2_t *static_fields; // x8
  float v10; // s1
  UnityEngine_GameObject_o *v11; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w1
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  Il2CppClass *v17; // [xsp+0h] [xbp-40h]

  if ( (byte_4C54CBE & 1) == 0 )
  {
    sub_1C3E564(&TitleInfoEventLeagueVsComponent_TypeInfo);
    sub_1C3E564(&Method_UITweener_Begin_TweenPosition___);
    sub_1C3E564(&StringLiteral_6860/*"FrameOutFinish"*/);
    byte_4C54CBE = 1;
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
         (const MethodInfo_31B54C4 *)Method_UITweener_Begin_TweenPosition___);
  v17 = *(Il2CppClass **)&this->fields.originPos.fields.x;
  if ( !v6 )
    sub_1C3E7C0(0, v7);
  v8 = v6;
  *(float *)&v6[8].monitor = this->fields.originPos.fields.z;
  v6[8].klass = v17;
  static_fields = (float32x2_t *)TitleInfoEventLeagueVsComponent_TypeInfo->static_fields;
  v10 = this->fields.originPos.fields.z + static_fields[1].n64_f32[0];
  *(float32x2_t *)((char *)&v6[8].monitor + 4) = vadd_f32(
                                                   *(float32x2_t *)&this->fields.originPos.fields.x,
                                                   (float32x2_t)static_fields->n64_u64[0]);
  *((float *)&v6[9].klass + 1) = v10;
  LODWORD(v6[2].klass) = 2;
  v11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v8[5].klass = (Il2CppClass *)v11;
  sub_1C3E508((CGThumbnailListItem_o *)&v8[5], (int32_t)v11, v12, v13);
  v14 = StringLiteral_6860/*"FrameOutFinish"*/;
  v8[5].monitor = (void *)StringLiteral_6860/*"FrameOutFinish"*/;
  sub_1C3E508((CGThumbnailListItem_o *)&v8[5].monitor, v14, v15, v16);
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
  __int64 v9; // x1
  GiftEntity_array *GiftListById; // x21
  System_String_o *v11; // x0
  System_String_o *v12; // x20
  System_String_o *v13; // x0
  bool winGroup1; // w1
  System_String_o *v15; // x22
  Il2CppObject *WinGroupName; // x0
  int max_length; // w8
  System_String_o *v18; // x22
  int v19; // w23
  System_String_o *v20; // x0
  System_String_o *v21; // x0
  System_String_o *countText; // [xsp+40h] [xbp-50h] BYREF
  System_String_o *nameText; // [xsp+48h] [xbp-48h] BYREF

  if ( (byte_4C54CC1 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&StringLiteral_5656/*"EVENT_POINT_VS_WIN_DIALOG_TITLE"*/);
    sub_1C3E564(&StringLiteral_5655/*"EVENT_POINT_VS_WIN_DIALOG_GROUP"*/);
    sub_1C3E564(&StringLiteral_5654/*"EVENT_POINT_VS_WIN_DIALOG_GET"*/);
    byte_4C54CC1 = 1;
  }
  countText = 0;
  nameText = 0;
  if ( evPointEnt )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_21;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_GiftMaster___);
    if ( !rewardInfo || !Instance )
      goto LABEL_21;
    GiftListById = GiftMaster__GetGiftListById((GiftMaster_o *)Instance, rewardInfo->fields.giftId, 0);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v11 = LocalizationManager__Get((System_String_o *)StringLiteral_5656/*"EVENT_POINT_VS_WIN_DIALOG_TITLE"*/, 0);
    v12 = System_String__Format(v11, (Il2CppObject *)evPointEnt->fields.name, 0);
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_5655/*"EVENT_POINT_VS_WIN_DIALOG_GROUP"*/, 0);
    winGroup1 = rewardInfo->fields.winGroup1;
    v15 = v13;
    WinGroupName = (Il2CppObject *)EventPointEntity__GetWinGroupName(evPointEnt, winGroup1, 0);
    Instance = (DataManager_o *)System_String__Format(v15, WinGroupName, 0);
    if ( !GiftListById )
      goto LABEL_21;
    max_length = GiftListById->max_length;
    v18 = (System_String_o *)Instance;
    if ( max_length >= 1 )
    {
      v19 = 0;
      while ( 1 )
      {
        if ( v19 >= (unsigned int)max_length )
          sub_1C3E7C8(Instance, v9);
        Instance = (DataManager_o *)GiftListById->m_Items[v19];
        if ( !Instance )
          break;
        GiftEntity__GetInfo((GiftEntity_o *)Instance, &nameText, &countText, 0);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v20 = LocalizationManager__Get((System_String_o *)StringLiteral_5654/*"EVENT_POINT_VS_WIN_DIALOG_GET"*/, 0);
        v21 = System_String__Format_63677760(v20, (Il2CppObject *)nameText, (Il2CppObject *)countText, 0);
        Instance = (DataManager_o *)System_String__Concat_63636468(v18, v21, 0);
        max_length = GiftListById->max_length;
        ++v19;
        v18 = (System_String_o *)Instance;
        if ( v19 >= max_length )
          goto LABEL_17;
      }
LABEL_21:
      sub_1C3E7C0(Instance, v9);
    }
LABEL_17:
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_21;
    CommonUI__OpenNotificationDialog((CommonUI_o *)Instance, v12, v18, callback, -1, 0, 0, 0, 1, 0, 1, 0, 0, 0.0, 0, 0);
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
  __int64 v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  UnityEngine_Object_o *Object_40556856; // x22
  Il2CppObject *v17; // x0
  UnityEngine_GameObject_o *v18; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int32_t v23; // w8
  UnityEngine_BoxCollider_c *v24; // x1
  __int64 naturalAligment; // x9
  CGThumbnailListItem_o *v26; // x23
  Il2CppObject *v27; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  struct EventPointEntity_o *evPointEnt; // x8
  EventPointVsResultAction_o *v31; // x20
  int32_t id; // w22
  System_Action_o *v33; // x23

  if ( (byte_4C54CC0 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&UnityEngine_BoxCollider_TypeInfo);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_Collider___);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_EventPointVsResultAction___);
    sub_1C3E564(&UnityEngine_GameObject_TypeInfo);
    sub_1C3E564(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_TitleInfoEventLeagueVsComponent___c__DisplayClass36_0__ResultEffect_b__0__);
    sub_1C3E564(&TitleInfoEventLeagueVsComponent___c__DisplayClass36_0_TypeInfo);
    sub_1C3E564(&StringLiteral_17306/*"bit_vs_result"*/);
    byte_4C54CC0 = 1;
  }
  v9 = sub_1C3E7B0(TitleInfoEventLeagueVsComponent___c__DisplayClass36_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_27;
  *(_QWORD *)(v9 + 32) = this;
  sub_1C3E508((CGThumbnailListItem_o *)(v9 + 32), (int32_t)this, v12, v13);
  *(_QWORD *)(v9 + 40) = callback;
  sub_1C3E508((CGThumbnailListItem_o *)(v9 + 40), (int32_t)callback, v14, v15);
  if ( !winType )
  {
    ActionExtensions__Call(*(System_Action_o **)(v9 + 40), 0);
    return;
  }
  if ( !effectAssetData )
    goto LABEL_27;
  Object_40556856 = AssetData__GetObject_40556856(effectAssetData, (System_String_o *)StringLiteral_17306/*"bit_vs_result"*/, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( Object_40556856 )
    v17 = (UnityEngine_GameObject_c *)Object_40556856->klass == UnityEngine_GameObject_TypeInfo
        ? (Il2CppObject *)Object_40556856
        : 0LL;
  else
    v17 = 0;
  resultPanel = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                              v17,
                                              (const MethodInfo_3185EB4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !resultPanel
    || (v18 = resultPanel,
        gameObject = UnityEngine_GameObject__get_gameObject(resultPanel, 0),
        GameObjectExtensions__SafeSetParent_36182084(gameObject, this->fields.resultPanel, 0),
        (resultPanel = this->fields.resultPanel) == 0) )
  {
LABEL_27:
    sub_1C3E7C0(resultPanel, v11);
  }
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       resultPanel,
                       (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_Collider___);
  v23 = (int)Component_object;
  if ( !Component_object )
    goto LABEL_22;
  v24 = UnityEngine_BoxCollider_TypeInfo;
  naturalAligment = UnityEngine_BoxCollider_TypeInfo->_2.naturalAligment;
  if ( Component_object->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (UnityEngine_BoxCollider_c *)Component_object->klass->_2.typeHierarchy[naturalAligment - 1] != UnityEngine_BoxCollider_TypeInfo
    || (*(_QWORD *)(v9 + 24) = Component_object,
        v26 = (CGThumbnailListItem_o *)(v9 + 24),
        Component_object->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (UnityEngine_BoxCollider_c *)Component_object->klass->_2.typeHierarchy[naturalAligment - 1] != v24 )
  {
    sub_1C3EA80(Component_object);
LABEL_22:
    *(_QWORD *)(v9 + 24) = 0;
    v26 = (CGThumbnailListItem_o *)(v9 + 24);
  }
  sub_1C3E508(v26, v23, v21, v22);
  resultPanel = (UnityEngine_GameObject_o *)v26->klass;
  if ( !v26->klass )
    goto LABEL_27;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)resultPanel, 1, 0);
  v27 = UnityEngine_GameObject__GetComponent_object_(
          v18,
          (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_EventPointVsResultAction___);
  *(_QWORD *)(v9 + 16) = v27;
  sub_1C3E508((CGThumbnailListItem_o *)(v9 + 16), (int32_t)v27, v28, v29);
  evPointEnt = this->fields.evPointEnt;
  if ( !evPointEnt )
    goto LABEL_27;
  v31 = *(EventPointVsResultAction_o **)(v9 + 16);
  id = evPointEnt->fields.id;
  v33 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(
    v33,
    (Il2CppObject *)v9,
    Method_TitleInfoEventLeagueVsComponent___c__DisplayClass36_0__ResultEffect_b__0__,
    0);
  if ( !v31 )
    goto LABEL_27;
  EventPointVsResultAction__Setup(v31, winType, id, v33, 0);
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
  __int64 v11; // x1
  TerminalPramsManager_c *v12; // x0
  __int64 maskFade; // x0
  Il2CppObject *MasterData_object; // x24
  Il2CppObject *v15; // x25
  struct System_Int32_array *v16; // x8
  unsigned __int64 v17; // x21
  int64_t v18; // x22
  unsigned __int64 max_length_low; // x9
  struct System_Int32_array *group1; // x8
  struct System_Int32_array *group2; // x8
  int64_t v22; // x24
  struct UISlider_array *hpBarSlider; // x8
  struct UISlider_array *v24; // x8
  float v25; // s0
  struct UISlider_array *v26; // x8
  int64_t normaTotalPoint; // x21
  double v28; // d8
  float v29; // s0
  struct UISlider_array *v30; // x8
  float v31; // s0
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  __int64 v35; // x5
  __int64 v36; // x6
  __int64 v37; // x7
  struct UISprite_array *v38; // x8
  struct System_Int32_array *v39; // x9
  UISprite_o *v40; // x24
  Il2CppObject *v41; // x0
  System_String_o *v42; // x26
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  __int64 v46; // x5
  __int64 v47; // x6
  __int64 v48; // x7
  struct UISprite_array *v49; // x8
  struct System_Int32_array *v50; // x9
  UISprite_o *v51; // x24
  __int64 v52; // x2
  __int64 v53; // x3
  __int64 v54; // x4
  __int64 v55; // x5
  __int64 v56; // x6
  __int64 v57; // x7
  struct System_Int32_array *v58; // x8
  Il2CppObject *v59; // x26
  Il2CppObject *v60; // x0
  System_String_o *v61; // x0
  struct System_Int32_array *v62; // x8
  __int64 v63; // x2
  __int64 v64; // x3
  __int64 v65; // x4
  __int64 v66; // x5
  __int64 v67; // x6
  __int64 v68; // x7
  struct System_Int32_array *v69; // x8
  __int64 v70; // x27
  unsigned __int64 v71; // x24
  Il2CppObject *v72; // x26
  unsigned __int64 v73; // x9
  __int64 v74; // x2
  __int64 v75; // x3
  __int64 v76; // x4
  __int64 v77; // x5
  __int64 v78; // x6
  __int64 v79; // x7
  Il2CppObject *v80; // x0
  struct UISprite_array *v81; // x8
  UISprite_o *v82; // x23
  Il2CppObject *v83; // x0
  System_String_o *v84; // x25
  struct UISprite_array *v85; // x8
  UISprite_o *v86; // x23
  System_String_o *v87; // x0
  struct UISlider_array *v88; // x8
  double v89; // d8
  float v90; // s0
  struct UISlider_array *v91; // x8
  __int64 v92; // x2
  __int64 v93; // x3
  __int64 v94; // x4
  __int64 v95; // x5
  __int64 v96; // x6
  __int64 v97; // x7
  struct UISprite_array *hpBar; // x8
  struct System_Int32_array *v99; // x9
  UISprite_o *v100; // x23
  Il2CppObject *v101; // x0
  System_String_o *v102; // x25
  __int64 v103; // x2
  __int64 v104; // x3
  __int64 v105; // x4
  __int64 v106; // x5
  __int64 v107; // x6
  __int64 v108; // x7
  struct UISprite_array *v109; // x8
  struct System_Int32_array *v110; // x9
  UISprite_o *v111; // x23
  Il2CppObject *v112; // x0
  System_String_o *v113; // x0
  __int64 v114; // x2
  __int64 v115; // x3
  __int64 v116; // x4
  __int64 v117; // x5
  __int64 v118; // x6
  __int64 v119; // x7
  struct UISprite_array *groupIcon; // x8
  struct System_Int32_array *v121; // x9
  UISprite_o *v122; // x23
  Il2CppObject *v123; // x0
  System_String_o *v124; // x0
  __int64 v125; // x2
  __int64 v126; // x3
  __int64 v127; // x4
  __int64 v128; // x5
  __int64 v129; // x6
  __int64 v130; // x7
  struct UISprite_array *v131; // x8
  struct System_Int32_array *v132; // x9
  UISprite_o *v133; // x23
  Il2CppObject *v134; // x0
  System_String_o *v135; // x0
  UnityEngine_Object_o *Object_40556856; // x21
  Il2CppObject *v137; // x0
  UnityEngine_GameObject_o *v138; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x21
  const MethodInfo *v141; // x4
  UISprite_o *maskSp; // x21
  const MethodInfo *v143; // x1
  UISprite_o *modeName; // x21
  __int64 v145; // x2
  __int64 v146; // x3
  __int64 v147; // x4
  __int64 v148; // x5
  __int64 v149; // x6
  __int64 v150; // x7
  Il2CppObject *v151; // x0
  System_String_o *v152; // x0
  struct UISprite_array *splitIcon; // x8
  unsigned __int64 v154; // x21
  unsigned __int64 v155; // x9
  UISprite_o *v156; // x20
  UnityEngine_GameObject_o *v157; // x0
  UnityEngine_GameObject_o *v158; // x0
  AssetData_o *v159; // [xsp+10h] [xbp-80h]
  int32_t v160; // [xsp+18h] [xbp-78h] BYREF
  int32_t v161; // [xsp+1Ch] [xbp-74h] BYREF
  int32_t v162; // [xsp+28h] [xbp-68h] BYREF
  int32_t id; // [xsp+2Ch] [xbp-64h] BYREF

  v7 = effectAssetData;
  if ( (byte_4C54CBB & 1) == 0 )
  {
    sub_1C3E564(&AtlasManager_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMasterData_EventPointGroupMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_TotalEventPointMaster___);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_TitleInfoEventLeagueVsGaugeEffect___);
    sub_1C3E564(&UnityEngine_GameObject_TypeInfo);
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    sub_1C3E564(&StringLiteral_19325/*"event_vs_gauge_title_"*/);
    sub_1C3E564(&StringLiteral_19322/*"event_vs_frame"*/);
    sub_1C3E564(&StringLiteral_19321/*"event_vs_back"*/);
    sub_1C3E564(&StringLiteral_24836/*"white00"*/);
    sub_1C3E564(&StringLiteral_19324/*"event_vs_gauge_bg"*/);
    sub_1C3E564(&StringLiteral_17303/*"bit_vs_gauge_part"*/);
    sub_1C3E564(&StringLiteral_19326/*"event_vs_split_line"*/);
    sub_1C3E564(&StringLiteral_18017/*"clear00"*/);
    sub_1C3E564(&StringLiteral_19330/*"event_vs_team_icon_"*/);
    sub_1C3E564(&StringLiteral_1/*""*/);
    sub_1C3E564(&StringLiteral_19323/*"event_vs_gauge_"*/);
    byte_4C54CBB = 1;
  }
  if ( !eventPointEntity )
    return;
  this->fields.evPointEnt = eventPointEntity;
  sub_1C3E508(
    (CGThumbnailListItem_o *)&this->fields.evPointEnt,
    (int32_t)eventPointEntity,
    eventId,
    (const MethodInfo *)effectAssetData);
  this->fields.isDispRestTime = isDispRestTime;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C54197 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54197 = 1;
  }
  v12 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v12 = TerminalPramsManager_TypeInfo;
  }
  if ( v12->static_fields->_eventPointWinType_k__BackingField )
  {
    maskFade = (__int64)this->fields.maskFade;
    if ( !maskFade )
      goto LABEL_120;
    MaskFade__Fadeout((MaskFade_o *)maskFade, 1, 0.0, 0, 0);
  }
  maskFade = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !maskFade )
    goto LABEL_120;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)maskFade,
                        (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_TotalEventPointMaster___);
  maskFade = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !maskFade )
    goto LABEL_120;
  v15 = DataManager__GetMasterData_object_(
          (DataManager_o *)maskFade,
          (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_EventPointGroupMaster___);
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
        v18 = maskFade;
        maskFade = TotalEventPointMaster__GetPoint(
                     (TotalEventPointMaster_o *)MasterData_object,
                     eventId,
                     eventPointEntity->fields.id,
                     group2->m_Items[0],
                     0);
        v22 = maskFade;
        if ( v18 == maskFade )
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
          v24 = this->fields.hpBarSlider;
          if ( !v24 )
            goto LABEL_120;
          if ( LODWORD(v24->max_length) <= 1 )
            goto LABEL_123;
          maskFade = (__int64)v24->m_Items[1];
          if ( !maskFade )
            goto LABEL_120;
          v25 = 0.5;
        }
        else
        {
          v88 = this->fields.hpBarSlider;
          if ( !v88 )
            goto LABEL_120;
          if ( !LODWORD(v88->max_length) )
            goto LABEL_123;
          maskFade = (__int64)v88->m_Items[0];
          if ( !maskFade )
            goto LABEL_120;
          v89 = (double)v18 / (double)(v22 + v18);
          v90 = 1.0 - v89;
          UIProgressBar__set_value((UIProgressBar_o *)maskFade, v90, 0);
          v91 = this->fields.hpBarSlider;
          if ( !v91 )
            goto LABEL_120;
          if ( LODWORD(v91->max_length) <= 1 )
            goto LABEL_123;
          maskFade = (__int64)v91->m_Items[1];
          if ( !maskFade )
            goto LABEL_120;
          v25 = v89;
        }
        UIProgressBar__set_value((UIProgressBar_o *)maskFade, v25, 0);
        hpBar = this->fields.hpBar;
        if ( !hpBar )
          goto LABEL_120;
        if ( LODWORD(hpBar->max_length) )
        {
          v99 = eventPointEntity->fields.group2;
          if ( !v99 )
            goto LABEL_120;
          if ( LODWORD(v99->max_length) )
          {
            v100 = hpBar->m_Items[0];
            id = v99->m_Items[0];
            v101 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id, v92, v93, v94, v95, v96, v97);
            v102 = System_String__Concat((Il2CppObject *)StringLiteral_19323/*"event_vs_gauge_"*/, v101, 0);
            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
            maskFade = AtlasManager__SetEventUI(v100, v102, 0);
            v109 = this->fields.hpBar;
            if ( !v109 )
              goto LABEL_120;
            if ( LODWORD(v109->max_length) > 1 )
            {
              v110 = eventPointEntity->fields.group1;
              if ( !v110 )
                goto LABEL_120;
              if ( LODWORD(v110->max_length) )
              {
                v111 = v109->m_Items[1];
                v162 = v110->m_Items[0];
                v112 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v162, v103, v104, v105, v106, v107, v108);
                v113 = System_String__Concat((Il2CppObject *)StringLiteral_19323/*"event_vs_gauge_"*/, v112, 0);
                maskFade = AtlasManager__SetEventUI(v111, v113, 0);
                groupIcon = this->fields.groupIcon;
                if ( !groupIcon )
                  goto LABEL_120;
                if ( LODWORD(groupIcon->max_length) )
                {
                  v121 = eventPointEntity->fields.group2;
                  if ( !v121 )
                    goto LABEL_120;
                  if ( LODWORD(v121->max_length) )
                  {
                    v122 = groupIcon->m_Items[0];
                    v161 = v121->m_Items[0];
                    v123 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v161, v114, v115, v116, v117, v118, v119);
                    v124 = System_String__Concat((Il2CppObject *)StringLiteral_19330/*"event_vs_team_icon_"*/, v123, 0);
                    maskFade = AtlasManager__SetEventUI(v122, v124, 0);
                    v131 = this->fields.groupIcon;
                    if ( !v131 )
                      goto LABEL_120;
                    if ( LODWORD(v131->max_length) > 1 )
                    {
                      v132 = eventPointEntity->fields.group1;
                      if ( !v132 )
                        goto LABEL_120;
                      if ( LODWORD(v132->max_length) )
                      {
                        v133 = v131->m_Items[1];
                        v160 = v132->m_Items[0];
                        v134 = (Il2CppObject *)j_il2cpp_value_box_0(
                                                 int_TypeInfo,
                                                 &v160,
                                                 v125,
                                                 v126,
                                                 v127,
                                                 v128,
                                                 v129,
                                                 v130);
                        v135 = System_String__Concat((Il2CppObject *)StringLiteral_19330/*"event_vs_team_icon_"*/, v134, 0);
                        maskFade = AtlasManager__SetEventUI(v133, v135, 0);
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
    sub_1C3E7C8(maskFade, v11);
  }
  v16 = eventPointEntity->fields.group1;
  if ( !v16 )
    goto LABEL_120;
  v17 = 0;
  v18 = 0;
  while ( 1 )
  {
    max_length_low = LODWORD(v16->max_length);
    if ( (__int64)v17 >= (int)max_length_low )
      break;
    if ( v17 >= max_length_low )
      goto LABEL_123;
    if ( MasterData_object )
    {
      maskFade = TotalEventPointMaster__GetPoint(
                   (TotalEventPointMaster_o *)MasterData_object,
                   eventId,
                   eventPointEntity->fields.id,
                   v16->m_Items[v17],
                   0);
      v16 = eventPointEntity->fields.group1;
      v18 += maskFade;
      ++v17;
      if ( v16 )
        continue;
    }
    goto LABEL_120;
  }
  v26 = this->fields.hpBarSlider;
  if ( !v26 )
    goto LABEL_120;
  if ( !LODWORD(v26->max_length) )
    goto LABEL_123;
  maskFade = (__int64)v26->m_Items[0];
  if ( !maskFade )
    goto LABEL_120;
  normaTotalPoint = eventPointEntity->fields.normaTotalPoint;
  v28 = (double)v18 / (double)normaTotalPoint;
  v29 = 1.0 - v28;
  UIProgressBar__set_value((UIProgressBar_o *)maskFade, v29, 0);
  v30 = this->fields.hpBarSlider;
  if ( !v30 )
    goto LABEL_120;
  if ( LODWORD(v30->max_length) <= 1 )
    goto LABEL_123;
  maskFade = (__int64)v30->m_Items[1];
  if ( !maskFade )
    goto LABEL_120;
  v31 = v28;
  UIProgressBar__set_value((UIProgressBar_o *)maskFade, v31, 0);
  v38 = this->fields.hpBar;
  if ( !v38 )
    goto LABEL_120;
  if ( !LODWORD(v38->max_length) )
    goto LABEL_123;
  v39 = eventPointEntity->fields.group2;
  if ( !v39 )
    goto LABEL_120;
  v159 = v7;
  if ( !LODWORD(v39->max_length) )
    goto LABEL_123;
  v40 = v38->m_Items[0];
  id = v39->m_Items[0];
  v41 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id, v32, v33, v34, v35, v36, v37);
  v42 = System_String__Concat((Il2CppObject *)StringLiteral_19323/*"event_vs_gauge_"*/, v41, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  maskFade = AtlasManager__SetEventUI(v40, v42, 0);
  v49 = this->fields.hpBar;
  if ( !v49 )
    goto LABEL_120;
  if ( LODWORD(v49->max_length) <= 1 )
    goto LABEL_123;
  v50 = eventPointEntity->fields.group1;
  if ( !v50 )
    goto LABEL_120;
  if ( !LODWORD(v50->max_length) )
    goto LABEL_123;
  v51 = v49->m_Items[1];
  v162 = v50->m_Items[0];
  maskFade = j_il2cpp_value_box_0(int_TypeInfo, &v162, v43, v44, v45, v46, v47, v48);
  v58 = eventPointEntity->fields.group1;
  if ( !v58 )
    goto LABEL_120;
  if ( LODWORD(v58->max_length) <= 1 )
    goto LABEL_123;
  v59 = (Il2CppObject *)maskFade;
  v161 = v58->m_Items[1];
  v60 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v161, v52, v53, v54, v55, v56, v57);
  v61 = System_String__Concat_63674468((Il2CppObject *)StringLiteral_19323/*"event_vs_gauge_"*/, v59, v60, 0);
  maskFade = AtlasManager__SetEventUI(v51, v61, 0);
  v62 = eventPointEntity->fields.group2;
  if ( !v62 )
    goto LABEL_120;
  if ( !LODWORD(v62->max_length) )
    goto LABEL_123;
  if ( !v15 )
    goto LABEL_120;
  maskFade = (__int64)EventPointGroupMaster__getEntity((EventPointGroupMaster_o *)v15, eventId, v62->m_Items[0], 0);
  v69 = eventPointEntity->fields.group1;
  if ( !v69 )
    goto LABEL_120;
  v70 = maskFade;
  v71 = 0;
  v72 = (Il2CppObject *)StringLiteral_1/*""*/;
  while ( 1 )
  {
    v73 = LODWORD(v69->max_length);
    if ( (__int64)v71 >= (int)v73 )
      break;
    if ( v71 >= v73 )
      goto LABEL_123;
    maskFade = (__int64)EventPointGroupMaster__getEntity((EventPointGroupMaster_o *)v15, eventId, v69->m_Items[v71], 0);
    if ( maskFade )
    {
      id = *(_DWORD *)(maskFade + 32);
      v80 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id, v74, v75, v76, v77, v78, v79);
      maskFade = (__int64)System_String__Concat(v72, v80, 0);
      v69 = eventPointEntity->fields.group1;
      v72 = (Il2CppObject *)maskFade;
      ++v71;
      if ( v69 )
        continue;
    }
    goto LABEL_120;
  }
  v81 = this->fields.groupIcon;
  if ( !v81 )
    goto LABEL_120;
  if ( !LODWORD(v81->max_length) )
    goto LABEL_123;
  if ( !v70 )
    goto LABEL_120;
  v82 = v81->m_Items[0];
  id = *(_DWORD *)(v70 + 32);
  v83 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id, v63, v64, v65, v66, v67, v68);
  v84 = System_String__Concat((Il2CppObject *)StringLiteral_19330/*"event_vs_team_icon_"*/, v83, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  maskFade = AtlasManager__SetEventUI(v82, v84, 0);
  v85 = this->fields.groupIcon;
  v22 = normaTotalPoint - v18;
  if ( !v85 )
LABEL_120:
    sub_1C3E7C0(maskFade, v11);
  if ( LODWORD(v85->max_length) <= 1 )
    goto LABEL_123;
  v86 = v85->m_Items[1];
  v87 = System_String__Concat_63636468((System_String_o *)StringLiteral_19330/*"event_vs_team_icon_"*/, (System_String_o *)v72, 0);
  maskFade = AtlasManager__SetEventUI(v86, v87, 0);
  v7 = v159;
LABEL_98:
  if ( !v7 )
    goto LABEL_120;
  Object_40556856 = AssetData__GetObject_40556856(v7, (System_String_o *)StringLiteral_17303/*"bit_vs_gauge_part"*/, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( Object_40556856 )
    v137 = (UnityEngine_GameObject_c *)Object_40556856->klass == UnityEngine_GameObject_TypeInfo
         ? (Il2CppObject *)Object_40556856
         : 0LL;
  else
    v137 = 0;
  maskFade = (__int64)UnityEngine_Object__Instantiate_object_(
                        v137,
                        (const MethodInfo_3185EB4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !maskFade )
    goto LABEL_120;
  v138 = (UnityEngine_GameObject_o *)maskFade;
  gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)maskFade, 0);
  GameObjectExtensions__SafeSetParent_36182084(gameObject, this->fields.gaugeEffectPanel, 0);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v138,
                       (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventLeagueVsGaugeEffect___);
  maskFade = EventPointEntity__isBossBattle(eventPointEntity, 0);
  if ( !Component_object )
    goto LABEL_120;
  TitleInfoEventLeagueVsGaugeEffect__setup(
    (TitleInfoEventLeagueVsGaugeEffect_o *)Component_object,
    v18,
    v22,
    maskFade & 1,
    v141);
  maskSp = this->fields.maskSp;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetCommon(maskSp, 0);
  AtlasManager__SetCommon(this->fields.colliderSp, 0);
  maskFade = (__int64)this->fields.maskSp;
  if ( !maskFade )
    goto LABEL_120;
  UISprite__set_spriteName((UISprite_o *)maskFade, (System_String_o *)StringLiteral_24836/*"white00"*/, 0);
  maskFade = (__int64)this->fields.colliderSp;
  if ( !maskFade )
    goto LABEL_120;
  UISprite__set_spriteName((UISprite_o *)maskFade, (System_String_o *)StringLiteral_18017/*"clear00"*/, 0);
  this->fields.endTime = eventPointEntity->fields.endedAt;
  TitleInfoEventLeagueVsComponent__restTimeUpdate(this, v143);
  AtlasManager__SetEventUI(this->fields.baseWindow, (System_String_o *)StringLiteral_19324/*"event_vs_gauge_bg"*/, 0);
  AtlasManager__SetEventUI(this->fields.hpFrame, (System_String_o *)StringLiteral_19322/*"event_vs_frame"*/, 0);
  AtlasManager__SetEventUI(this->fields.hpBack, (System_String_o *)StringLiteral_19321/*"event_vs_back"*/, 0);
  modeName = this->fields.modeName;
  id = eventPointEntity->fields.id;
  v151 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id, v145, v146, v147, v148, v149, v150);
  v152 = System_String__Concat((Il2CppObject *)StringLiteral_19325/*"event_vs_gauge_title_"*/, v151, 0);
  AtlasManager__SetEventUI(modeName, v152, 0);
  maskFade = (__int64)this->fields.modeName;
  if ( !maskFade )
    goto LABEL_120;
  maskFade = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)maskFade + 840LL))(
               maskFade,
               *(_QWORD *)(*(_QWORD *)maskFade + 848LL));
  splitIcon = this->fields.splitIcon;
  if ( !splitIcon )
    goto LABEL_120;
  v154 = 0;
  while ( 1 )
  {
    v155 = LODWORD(splitIcon->max_length);
    if ( (__int64)v154 >= (int)v155 )
      break;
    if ( v154 >= v155 )
      goto LABEL_123;
    v156 = splitIcon->m_Items[v154];
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    maskFade = AtlasManager__SetEventUI(v156, (System_String_o *)StringLiteral_19326/*"event_vs_split_line"*/, 0);
    splitIcon = this->fields.splitIcon;
    ++v154;
    if ( !splitIcon )
      goto LABEL_120;
  }
  v157 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SetLocalPositionY(v157, -2.0, 0);
  v158 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  this->fields.originPos = GameObjectExtensions__GetLocalPosition(v158, 0);
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
  __int64 v13; // x1
  struct EventPointEntity_o *v14; // x8
  struct System_Int32_array *group1; // x9
  TotalEventPointMaster_o *v16; // x25
  struct EventPointEntity_o *v17; // x8
  struct System_Int32_array *group2; // x9
  int64_t v19; // x24
  int64_t v20; // x23
  UnityEngine_Object_o *Object_40556856; // x0
  UnityEngine_GameObject_c **v22; // x22
  Il2CppObject *v23; // x0
  UnityEngine_GameObject_o *v24; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v26; // x5

  if ( (byte_4C54CBF & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_TotalEventPointMaster___);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_TitleInfoEventLeagueVsGaugeFlashEffect___);
    sub_1C3E564(&UnityEngine_GameObject_TypeInfo);
    sub_1C3E564(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&StringLiteral_17301/*"bit_vs_gauge_flash"*/);
    byte_4C54CBF = 1;
  }
  evPointEnt = this->fields.evPointEnt;
  if ( evPointEnt )
  {
    if ( EventPointEntity__isBossBattle(evPointEnt, 0) )
    {
      ActionExtensions__Call(callback, 0);
      return;
    }
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_26;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_TotalEventPointMaster___);
    v14 = this->fields.evPointEnt;
    if ( !v14 )
      goto LABEL_26;
    group1 = v14->fields.group1;
    if ( !group1 )
      goto LABEL_26;
    if ( !LODWORD(group1->max_length) )
      goto LABEL_27;
    v16 = (TotalEventPointMaster_o *)Instance;
    if ( !Instance )
      goto LABEL_26;
    Instance = (DataManager_o *)TotalEventPointMaster__GetPoint(
                                  (TotalEventPointMaster_o *)Instance,
                                  eventId,
                                  v14->fields.id,
                                  group1->m_Items[0],
                                  0);
    v17 = this->fields.evPointEnt;
    if ( !v17 )
      goto LABEL_26;
    group2 = v17->fields.group2;
    if ( !group2 )
      goto LABEL_26;
    if ( !LODWORD(group2->max_length) )
LABEL_27:
      sub_1C3E7C8(Instance, v13);
    v19 = (int64_t)Instance;
    Instance = (DataManager_o *)TotalEventPointMaster__GetPoint(v16, eventId, v17->fields.id, group2->m_Items[0], 0);
    if ( !effectAssetData )
      goto LABEL_26;
    v20 = (int64_t)Instance;
    Object_40556856 = AssetData__GetObject_40556856(effectAssetData, (System_String_o *)StringLiteral_17301/*"bit_vs_gauge_flash"*/, 0);
    v22 = (UnityEngine_GameObject_c **)Object_40556856;
    if ( UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      if ( Object_40556856 )
        goto LABEL_18;
    }
    else
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( v22 )
      {
LABEL_18:
        if ( *v22 == UnityEngine_GameObject_TypeInfo )
          v23 = (Il2CppObject *)v22;
        else
          v23 = 0;
LABEL_23:
        Instance = (DataManager_o *)UnityEngine_Object__Instantiate_object_(
                                      v23,
                                      (const MethodInfo_3185EB4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( Instance )
        {
          v24 = (UnityEngine_GameObject_o *)Instance;
          gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)Instance, 0);
          GameObjectExtensions__SafeSetParent_36182084(gameObject, this->fields.gaugeEffectPanel, 0);
          Instance = (DataManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                        v24,
                                        (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventLeagueVsGaugeFlashEffect___);
          if ( Instance )
          {
            TitleInfoEventLeagueVsGaugeFlashEffect__setup(
              (TitleInfoEventLeagueVsGaugeFlashEffect_o *)Instance,
              groupId,
              v19,
              v20,
              callback,
              v26);
            return;
          }
        }
LABEL_26:
        sub_1C3E7C0(Instance, v13);
      }
    }
    v23 = 0;
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
  __int64 v3; // x1
  UnityEngine_Behaviour_o *restTimeLabel; // x0
  UILabel_o *v5; // x20
  System_String_o *v6; // x0
  int64_t endTime; // x8
  System_String_o *v8; // x19
  Il2CppObject *RestTime3; // x0

  if ( (byte_4C54CBC & 1) == 0 )
  {
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&StringLiteral_5742/*"EVENT_VS_GAUGE_REST_TIME"*/);
    byte_4C54CBC = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( this->fields.endTime - NetworkManager__getTime(0) >= 1 && this->fields.isDispRestTime )
  {
    restTimeLabel = (UnityEngine_Behaviour_o *)this->fields.restTimeLabel;
    if ( restTimeLabel )
    {
      UnityEngine_Behaviour__set_enabled(restTimeLabel, 1, 0);
      v5 = this->fields.restTimeLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v6 = LocalizationManager__Get((System_String_o *)StringLiteral_5742/*"EVENT_VS_GAUGE_REST_TIME"*/, 0);
      endTime = this->fields.endTime;
      v8 = v6;
      RestTime3 = (Il2CppObject *)LocalizationManager__GetRestTime3(endTime, 0);
      restTimeLabel = (UnityEngine_Behaviour_o *)System_String__Format(v8, RestTime3, 0);
      if ( v5 )
      {
        UILabel__set_text(v5, (System_String_o *)restTimeLabel, 0);
        return;
      }
    }
LABEL_14:
    sub_1C3E7C0(restTimeLabel, v3);
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
  if ( (byte_4C54CC3 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    this = (TitleInfoEventLeagueVsComponent___c__DisplayClass36_0_o *)sub_1C3E564(&Method_TitleInfoEventLeagueVsComponent___c__DisplayClass36_0__ResultEffect_b__1__);
    byte_4C54CC3 = 1;
  }
  _9__1 = v2->fields.__9__1;
  effect = v2->fields.effect;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v2,
      Method_TitleInfoEventLeagueVsComponent___c__DisplayClass36_0__ResultEffect_b__1__,
      0);
    v2->fields.__9__1 = _9__1;
    sub_1C3E508((CGThumbnailListItem_o *)&v2->fields.__9__1, (int32_t)_9__1, v5, v6);
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this || !effect )
    sub_1C3E7C0(this, method);
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

  if ( (byte_4C54CC4 & 1) == 0 )
  {
    sub_1C3E564(&AvalonSceneManager_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C54CC4 = 1;
  }
  effect = (UnityEngine_Component_o *)this->fields.effect;
  if ( !effect )
    goto LABEL_12;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(effect, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71341564(gameObject, 0);
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
    sub_1C3E7C0(effect, method);
  MaskFade__Fadein(maskFade, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, this->fields.callback, 0);
}