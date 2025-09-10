void TitleInfoEventLeagueVsComponent___cctor(const MethodInfo *method)
{
  struct TitleInfoEventLeagueVsComponent_StaticFields *static_fields; // x8

  if ( (byte_4C253A0 & 1) == 0 )
  {
    sub_1C2D490(&TitleInfoEventLeagueVsComponent_TypeInfo);
    byte_4C253A0 = 1;
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

  if ( (byte_4C2539B & 1) == 0 )
  {
    sub_1C2D490(&TitleInfoEventLeagueVsComponent_TypeInfo);
    sub_1C2D490(&Method_UITweener_Begin_TweenPosition___);
    sub_1C2D490(&StringLiteral_6852/*"FrameInFinish"*/);
    byte_4C2539B = 1;
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
           (const MethodInfo_318A268 *)Method_UITweener_Begin_TweenPosition___);
    if ( !v8 )
      sub_1C2D6EC(0, v9);
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
    sub_1C2D434((CGThumbnailListItem_o *)&v11[5], (int32_t)v14, v15, v16);
    v17 = StringLiteral_6852/*"FrameInFinish"*/;
    v11[5].monitor = (void *)StringLiteral_6852/*"FrameInFinish"*/;
    sub_1C2D434((CGThumbnailListItem_o *)&v11[5].monitor, v17, v18, v19);
    this->fields.frameInCallBack = callback;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.frameInCallBack, (int32_t)callback, v20, v21);
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
  sub_1C2D434(p_frameInCallBack, 0, v2, v3);
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

  if ( (byte_4C2539C & 1) == 0 )
  {
    sub_1C2D490(&TitleInfoEventLeagueVsComponent_TypeInfo);
    sub_1C2D490(&Method_UITweener_Begin_TweenPosition___);
    sub_1C2D490(&StringLiteral_6854/*"FrameOutFinish"*/);
    byte_4C2539C = 1;
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
         (const MethodInfo_318A268 *)Method_UITweener_Begin_TweenPosition___);
  v17 = *(Il2CppClass **)&this->fields.originPos.fields.x;
  if ( !v6 )
    sub_1C2D6EC(0, v7);
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
  sub_1C2D434((CGThumbnailListItem_o *)&v8[5], (int32_t)v11, v12, v13);
  v14 = StringLiteral_6854/*"FrameOutFinish"*/;
  v8[5].monitor = (void *)StringLiteral_6854/*"FrameOutFinish"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&v8[5].monitor, v14, v15, v16);
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
  __int64 v17; // x2
  int max_length; // w8
  System_String_o *v19; // x22
  int v20; // w23
  System_String_o *v21; // x0
  System_String_o *v22; // x0
  System_String_o *countText; // [xsp+40h] [xbp-50h] BYREF
  System_String_o *nameText; // [xsp+48h] [xbp-48h] BYREF

  if ( (byte_4C2539F & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&StringLiteral_5647/*"EVENT_POINT_VS_WIN_DIALOG_TITLE"*/);
    sub_1C2D490(&StringLiteral_5646/*"EVENT_POINT_VS_WIN_DIALOG_GROUP"*/);
    sub_1C2D490(&StringLiteral_5645/*"EVENT_POINT_VS_WIN_DIALOG_GET"*/);
    byte_4C2539F = 1;
  }
  countText = 0;
  nameText = 0;
  if ( evPointEnt )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_21;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_GiftMaster___);
    if ( !rewardInfo || !Instance )
      goto LABEL_21;
    GiftListById = GiftMaster__GetGiftListById((GiftMaster_o *)Instance, rewardInfo->fields.giftId, 0);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v11 = LocalizationManager__Get((System_String_o *)StringLiteral_5647/*"EVENT_POINT_VS_WIN_DIALOG_TITLE"*/, 0);
    v12 = System_String__Format(v11, (Il2CppObject *)evPointEnt->fields.name, 0);
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_5646/*"EVENT_POINT_VS_WIN_DIALOG_GROUP"*/, 0);
    winGroup1 = rewardInfo->fields.winGroup1;
    v15 = v13;
    WinGroupName = (Il2CppObject *)EventPointEntity__GetWinGroupName(evPointEnt, winGroup1, 0);
    Instance = (DataManager_o *)System_String__Format(v15, WinGroupName, 0);
    if ( !GiftListById )
      goto LABEL_21;
    max_length = GiftListById->max_length;
    v19 = (System_String_o *)Instance;
    if ( max_length >= 1 )
    {
      v20 = 0;
      while ( 1 )
      {
        if ( v20 >= (unsigned int)max_length )
          sub_1C2D6F4(Instance, v9, v17);
        Instance = (DataManager_o *)GiftListById->m_Items[v20];
        if ( !Instance )
          break;
        GiftEntity__GetInfo((GiftEntity_o *)Instance, &nameText, &countText, 0);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v21 = LocalizationManager__Get((System_String_o *)StringLiteral_5645/*"EVENT_POINT_VS_WIN_DIALOG_GET"*/, 0);
        v22 = System_String__Format_63499156(v21, (Il2CppObject *)nameText, (Il2CppObject *)countText, 0);
        Instance = (DataManager_o *)System_String__Concat_63457864(v19, v22, 0);
        max_length = GiftListById->max_length;
        ++v20;
        v19 = (System_String_o *)Instance;
        if ( v20 >= max_length )
          goto LABEL_17;
      }
LABEL_21:
      sub_1C2D6EC(Instance, v9);
    }
LABEL_17:
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_21;
    CommonUI__OpenNotificationDialog((CommonUI_o *)Instance, v12, v19, callback, -1, 0, 0, 0, 1, 0, 1, 0, 0, 0.0, 0, 0);
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
  UnityEngine_Object_o *Object_40288984; // x22
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

  if ( (byte_4C2539E & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&UnityEngine_BoxCollider_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_Collider___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_EventPointVsResultAction___);
    sub_1C2D490(&UnityEngine_GameObject_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_TitleInfoEventLeagueVsComponent___c__DisplayClass36_0__ResultEffect_b__0__);
    sub_1C2D490(&TitleInfoEventLeagueVsComponent___c__DisplayClass36_0_TypeInfo);
    sub_1C2D490(&StringLiteral_17284/*"bit_vs_result"*/);
    byte_4C2539E = 1;
  }
  v9 = sub_1C2D6DC(TitleInfoEventLeagueVsComponent___c__DisplayClass36_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_27;
  *(_QWORD *)(v9 + 32) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v9 + 32), (int32_t)this, v12, v13);
  *(_QWORD *)(v9 + 40) = callback;
  sub_1C2D434((CGThumbnailListItem_o *)(v9 + 40), (int32_t)callback, v14, v15);
  if ( !winType )
  {
    ActionExtensions__Call(*(System_Action_o **)(v9 + 40), 0);
    return;
  }
  if ( !effectAssetData )
    goto LABEL_27;
  Object_40288984 = AssetData__GetObject_40288984(effectAssetData, (System_String_o *)StringLiteral_17284/*"bit_vs_result"*/, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( Object_40288984 )
    v17 = (UnityEngine_GameObject_c *)Object_40288984->klass == UnityEngine_GameObject_TypeInfo
        ? (Il2CppObject *)Object_40288984
        : 0LL;
  else
    v17 = 0;
  resultPanel = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                              v17,
                                              (const MethodInfo_315ACB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !resultPanel
    || (v18 = resultPanel,
        gameObject = UnityEngine_GameObject__get_gameObject(resultPanel, 0),
        GameObjectExtensions__SafeSetParent_35924288(gameObject, this->fields.resultPanel, 0),
        (resultPanel = this->fields.resultPanel) == 0) )
  {
LABEL_27:
    sub_1C2D6EC(resultPanel, v11);
  }
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       resultPanel,
                       (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_Collider___);
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
    sub_1C2D9AC(Component_object);
LABEL_22:
    *(_QWORD *)(v9 + 24) = 0;
    v26 = (CGThumbnailListItem_o *)(v9 + 24);
  }
  sub_1C2D434(v26, v23, v21, v22);
  resultPanel = (UnityEngine_GameObject_o *)v26->klass;
  if ( !v26->klass )
    goto LABEL_27;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)resultPanel, 1, 0);
  v27 = UnityEngine_GameObject__GetComponent_object_(
          v18,
          (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_EventPointVsResultAction___);
  *(_QWORD *)(v9 + 16) = v27;
  sub_1C2D434((CGThumbnailListItem_o *)(v9 + 16), (int32_t)v27, v28, v29);
  evPointEnt = this->fields.evPointEnt;
  if ( !evPointEnt )
    goto LABEL_27;
  v31 = *(EventPointVsResultAction_o **)(v9 + 16);
  id = evPointEnt->fields.id;
  v33 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
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
  __int64 v16; // x2
  struct System_Int32_array *v17; // x8
  unsigned __int64 v18; // x21
  int64_t v19; // x22
  unsigned __int64 max_length_low; // x9
  struct System_Int32_array *group1; // x8
  struct System_Int32_array *group2; // x8
  int64_t v23; // x24
  struct UISlider_array *hpBarSlider; // x8
  struct UISlider_array *v25; // x8
  float v26; // s0
  struct UISlider_array *v27; // x8
  int64_t normaTotalPoint; // x21
  double v29; // d8
  float v30; // s0
  struct UISlider_array *v31; // x8
  float v32; // s0
  __int64 v33; // x3
  __int64 v34; // x4
  struct UISprite_array *v35; // x8
  struct System_Int32_array *v36; // x9
  UISprite_o *v37; // x24
  Il2CppObject *v38; // x0
  System_String_o *v39; // x26
  __int64 v40; // x3
  __int64 v41; // x4
  struct UISprite_array *v42; // x8
  struct System_Int32_array *v43; // x9
  UISprite_o *v44; // x24
  __int64 v45; // x3
  __int64 v46; // x4
  struct System_Int32_array *v47; // x8
  Il2CppObject *v48; // x26
  Il2CppObject *v49; // x0
  System_String_o *v50; // x0
  struct System_Int32_array *v51; // x8
  __int64 v52; // x3
  __int64 v53; // x4
  struct System_Int32_array *v54; // x8
  __int64 v55; // x27
  unsigned __int64 v56; // x24
  Il2CppObject *v57; // x26
  unsigned __int64 v58; // x9
  __int64 v59; // x2
  __int64 v60; // x3
  __int64 v61; // x4
  Il2CppObject *v62; // x0
  struct UISprite_array *v63; // x8
  UISprite_o *v64; // x23
  Il2CppObject *v65; // x0
  System_String_o *v66; // x25
  struct UISprite_array *v67; // x8
  UISprite_o *v68; // x23
  System_String_o *v69; // x0
  struct UISlider_array *v70; // x8
  double v71; // d8
  float v72; // s0
  struct UISlider_array *v73; // x8
  __int64 v74; // x3
  __int64 v75; // x4
  struct UISprite_array *hpBar; // x8
  struct System_Int32_array *v77; // x9
  UISprite_o *v78; // x23
  Il2CppObject *v79; // x0
  System_String_o *v80; // x25
  __int64 v81; // x3
  __int64 v82; // x4
  struct UISprite_array *v83; // x8
  struct System_Int32_array *v84; // x9
  UISprite_o *v85; // x23
  Il2CppObject *v86; // x0
  System_String_o *v87; // x0
  __int64 v88; // x3
  __int64 v89; // x4
  struct UISprite_array *groupIcon; // x8
  struct System_Int32_array *v91; // x9
  UISprite_o *v92; // x23
  Il2CppObject *v93; // x0
  System_String_o *v94; // x0
  __int64 v95; // x3
  __int64 v96; // x4
  struct UISprite_array *v97; // x8
  struct System_Int32_array *v98; // x9
  UISprite_o *v99; // x23
  Il2CppObject *v100; // x0
  System_String_o *v101; // x0
  UnityEngine_Object_o *Object_40288984; // x21
  Il2CppObject *v103; // x0
  UnityEngine_GameObject_o *v104; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x21
  const MethodInfo *v107; // x4
  UISprite_o *maskSp; // x21
  const MethodInfo *v109; // x1
  UISprite_o *modeName; // x21
  __int64 v111; // x2
  __int64 v112; // x3
  __int64 v113; // x4
  Il2CppObject *v114; // x0
  System_String_o *v115; // x0
  struct UISprite_array *splitIcon; // x8
  unsigned __int64 v117; // x21
  unsigned __int64 v118; // x9
  UISprite_o *v119; // x20
  UnityEngine_GameObject_o *v120; // x0
  UnityEngine_GameObject_o *v121; // x0
  AssetData_o *v122; // [xsp+10h] [xbp-80h]
  int32_t v123; // [xsp+18h] [xbp-78h] BYREF
  int32_t v124; // [xsp+1Ch] [xbp-74h] BYREF
  int32_t v125; // [xsp+28h] [xbp-68h] BYREF
  int32_t id; // [xsp+2Ch] [xbp-64h] BYREF

  v7 = effectAssetData;
  if ( (byte_4C25399 & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_EventPointGroupMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_TotalEventPointMaster___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_TitleInfoEventLeagueVsGaugeEffect___);
    sub_1C2D490(&UnityEngine_GameObject_TypeInfo);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&StringLiteral_19293/*"event_vs_gauge_title_"*/);
    sub_1C2D490(&StringLiteral_19290/*"event_vs_frame"*/);
    sub_1C2D490(&StringLiteral_19289/*"event_vs_back"*/);
    sub_1C2D490(&StringLiteral_24793/*"white00"*/);
    sub_1C2D490(&StringLiteral_19292/*"event_vs_gauge_bg"*/);
    sub_1C2D490(&StringLiteral_17281/*"bit_vs_gauge_part"*/);
    sub_1C2D490(&StringLiteral_19294/*"event_vs_split_line"*/);
    sub_1C2D490(&StringLiteral_17994/*"clear00"*/);
    sub_1C2D490(&StringLiteral_19298/*"event_vs_team_icon_"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    sub_1C2D490(&StringLiteral_19291/*"event_vs_gauge_"*/);
    byte_4C25399 = 1;
  }
  if ( !eventPointEntity )
    return;
  this->fields.evPointEnt = eventPointEntity;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields.evPointEnt,
    (int32_t)eventPointEntity,
    eventId,
    (const MethodInfo *)effectAssetData);
  this->fields.isDispRestTime = isDispRestTime;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C2473C )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2473C = 1;
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
  maskFade = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !maskFade )
    goto LABEL_120;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)maskFade,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_TotalEventPointMaster___);
  maskFade = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !maskFade )
    goto LABEL_120;
  v15 = DataManager__GetMasterData_object_(
          (DataManager_o *)maskFade,
          (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventPointGroupMaster___);
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
        v19 = maskFade;
        maskFade = TotalEventPointMaster__GetPoint(
                     (TotalEventPointMaster_o *)MasterData_object,
                     eventId,
                     eventPointEntity->fields.id,
                     group2->m_Items[0],
                     0);
        v23 = maskFade;
        if ( v19 == maskFade )
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
          v25 = this->fields.hpBarSlider;
          if ( !v25 )
            goto LABEL_120;
          if ( LODWORD(v25->max_length) <= 1 )
            goto LABEL_123;
          maskFade = (__int64)v25->m_Items[1];
          if ( !maskFade )
            goto LABEL_120;
          v26 = 0.5;
        }
        else
        {
          v70 = this->fields.hpBarSlider;
          if ( !v70 )
            goto LABEL_120;
          if ( !LODWORD(v70->max_length) )
            goto LABEL_123;
          maskFade = (__int64)v70->m_Items[0];
          if ( !maskFade )
            goto LABEL_120;
          v71 = (double)v19 / (double)(v23 + v19);
          v72 = 1.0 - v71;
          UIProgressBar__set_value((UIProgressBar_o *)maskFade, v72, 0);
          v73 = this->fields.hpBarSlider;
          if ( !v73 )
            goto LABEL_120;
          if ( LODWORD(v73->max_length) <= 1 )
            goto LABEL_123;
          maskFade = (__int64)v73->m_Items[1];
          if ( !maskFade )
            goto LABEL_120;
          v26 = v71;
        }
        UIProgressBar__set_value((UIProgressBar_o *)maskFade, v26, 0);
        hpBar = this->fields.hpBar;
        if ( !hpBar )
          goto LABEL_120;
        if ( LODWORD(hpBar->max_length) )
        {
          v77 = eventPointEntity->fields.group2;
          if ( !v77 )
            goto LABEL_120;
          if ( LODWORD(v77->max_length) )
          {
            v78 = hpBar->m_Items[0];
            id = v77->m_Items[0];
            v79 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id, v16, v74, v75);
            v80 = System_String__Concat((Il2CppObject *)StringLiteral_19291/*"event_vs_gauge_"*/, v79, 0);
            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
            maskFade = AtlasManager__SetEventUI(v78, v80, 0);
            v83 = this->fields.hpBar;
            if ( !v83 )
              goto LABEL_120;
            if ( LODWORD(v83->max_length) > 1 )
            {
              v84 = eventPointEntity->fields.group1;
              if ( !v84 )
                goto LABEL_120;
              if ( LODWORD(v84->max_length) )
              {
                v85 = v83->m_Items[1];
                v125 = v84->m_Items[0];
                v86 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v125, v16, v81, v82);
                v87 = System_String__Concat((Il2CppObject *)StringLiteral_19291/*"event_vs_gauge_"*/, v86, 0);
                maskFade = AtlasManager__SetEventUI(v85, v87, 0);
                groupIcon = this->fields.groupIcon;
                if ( !groupIcon )
                  goto LABEL_120;
                if ( LODWORD(groupIcon->max_length) )
                {
                  v91 = eventPointEntity->fields.group2;
                  if ( !v91 )
                    goto LABEL_120;
                  if ( LODWORD(v91->max_length) )
                  {
                    v92 = groupIcon->m_Items[0];
                    v124 = v91->m_Items[0];
                    v93 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v124, v16, v88, v89);
                    v94 = System_String__Concat((Il2CppObject *)StringLiteral_19298/*"event_vs_team_icon_"*/, v93, 0);
                    maskFade = AtlasManager__SetEventUI(v92, v94, 0);
                    v97 = this->fields.groupIcon;
                    if ( !v97 )
                      goto LABEL_120;
                    if ( LODWORD(v97->max_length) > 1 )
                    {
                      v98 = eventPointEntity->fields.group1;
                      if ( !v98 )
                        goto LABEL_120;
                      if ( LODWORD(v98->max_length) )
                      {
                        v99 = v97->m_Items[1];
                        v123 = v98->m_Items[0];
                        v100 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v123, v16, v95, v96);
                        v101 = System_String__Concat((Il2CppObject *)StringLiteral_19298/*"event_vs_team_icon_"*/, v100, 0);
                        maskFade = AtlasManager__SetEventUI(v99, v101, 0);
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
    sub_1C2D6F4(maskFade, v11, v16);
  }
  v17 = eventPointEntity->fields.group1;
  if ( !v17 )
    goto LABEL_120;
  v18 = 0;
  v19 = 0;
  while ( 1 )
  {
    max_length_low = LODWORD(v17->max_length);
    if ( (__int64)v18 >= (int)max_length_low )
      break;
    if ( v18 >= max_length_low )
      goto LABEL_123;
    if ( MasterData_object )
    {
      maskFade = TotalEventPointMaster__GetPoint(
                   (TotalEventPointMaster_o *)MasterData_object,
                   eventId,
                   eventPointEntity->fields.id,
                   v17->m_Items[v18],
                   0);
      v17 = eventPointEntity->fields.group1;
      v19 += maskFade;
      ++v18;
      if ( v17 )
        continue;
    }
    goto LABEL_120;
  }
  v27 = this->fields.hpBarSlider;
  if ( !v27 )
    goto LABEL_120;
  if ( !LODWORD(v27->max_length) )
    goto LABEL_123;
  maskFade = (__int64)v27->m_Items[0];
  if ( !maskFade )
    goto LABEL_120;
  normaTotalPoint = eventPointEntity->fields.normaTotalPoint;
  v29 = (double)v19 / (double)normaTotalPoint;
  v30 = 1.0 - v29;
  UIProgressBar__set_value((UIProgressBar_o *)maskFade, v30, 0);
  v31 = this->fields.hpBarSlider;
  if ( !v31 )
    goto LABEL_120;
  if ( LODWORD(v31->max_length) <= 1 )
    goto LABEL_123;
  maskFade = (__int64)v31->m_Items[1];
  if ( !maskFade )
    goto LABEL_120;
  v32 = v29;
  UIProgressBar__set_value((UIProgressBar_o *)maskFade, v32, 0);
  v35 = this->fields.hpBar;
  if ( !v35 )
    goto LABEL_120;
  if ( !LODWORD(v35->max_length) )
    goto LABEL_123;
  v36 = eventPointEntity->fields.group2;
  if ( !v36 )
    goto LABEL_120;
  v122 = v7;
  if ( !LODWORD(v36->max_length) )
    goto LABEL_123;
  v37 = v35->m_Items[0];
  id = v36->m_Items[0];
  v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id, v16, v33, v34);
  v39 = System_String__Concat((Il2CppObject *)StringLiteral_19291/*"event_vs_gauge_"*/, v38, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  maskFade = AtlasManager__SetEventUI(v37, v39, 0);
  v42 = this->fields.hpBar;
  if ( !v42 )
    goto LABEL_120;
  if ( LODWORD(v42->max_length) <= 1 )
    goto LABEL_123;
  v43 = eventPointEntity->fields.group1;
  if ( !v43 )
    goto LABEL_120;
  if ( !LODWORD(v43->max_length) )
    goto LABEL_123;
  v44 = v42->m_Items[1];
  v125 = v43->m_Items[0];
  maskFade = j_il2cpp_value_box_0(int_TypeInfo, &v125, v16, v40, v41);
  v47 = eventPointEntity->fields.group1;
  if ( !v47 )
    goto LABEL_120;
  if ( LODWORD(v47->max_length) <= 1 )
    goto LABEL_123;
  v48 = (Il2CppObject *)maskFade;
  v124 = v47->m_Items[1];
  v49 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v124, v16, v45, v46);
  v50 = System_String__Concat_63495864((Il2CppObject *)StringLiteral_19291/*"event_vs_gauge_"*/, v48, v49, 0);
  maskFade = AtlasManager__SetEventUI(v44, v50, 0);
  v51 = eventPointEntity->fields.group2;
  if ( !v51 )
    goto LABEL_120;
  if ( !LODWORD(v51->max_length) )
    goto LABEL_123;
  if ( !v15 )
    goto LABEL_120;
  maskFade = (__int64)EventPointGroupMaster__getEntity((EventPointGroupMaster_o *)v15, eventId, v51->m_Items[0], 0);
  v54 = eventPointEntity->fields.group1;
  if ( !v54 )
    goto LABEL_120;
  v55 = maskFade;
  v56 = 0;
  v57 = (Il2CppObject *)StringLiteral_1/*""*/;
  while ( 1 )
  {
    v58 = LODWORD(v54->max_length);
    if ( (__int64)v56 >= (int)v58 )
      break;
    if ( v56 >= v58 )
      goto LABEL_123;
    maskFade = (__int64)EventPointGroupMaster__getEntity((EventPointGroupMaster_o *)v15, eventId, v54->m_Items[v56], 0);
    if ( maskFade )
    {
      id = *(_DWORD *)(maskFade + 32);
      v62 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id, v59, v60, v61);
      maskFade = (__int64)System_String__Concat(v57, v62, 0);
      v54 = eventPointEntity->fields.group1;
      v57 = (Il2CppObject *)maskFade;
      ++v56;
      if ( v54 )
        continue;
    }
    goto LABEL_120;
  }
  v63 = this->fields.groupIcon;
  if ( !v63 )
    goto LABEL_120;
  if ( !LODWORD(v63->max_length) )
    goto LABEL_123;
  if ( !v55 )
    goto LABEL_120;
  v64 = v63->m_Items[0];
  id = *(_DWORD *)(v55 + 32);
  v65 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id, v16, v52, v53);
  v66 = System_String__Concat((Il2CppObject *)StringLiteral_19298/*"event_vs_team_icon_"*/, v65, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  maskFade = AtlasManager__SetEventUI(v64, v66, 0);
  v67 = this->fields.groupIcon;
  v23 = normaTotalPoint - v19;
  if ( !v67 )
LABEL_120:
    sub_1C2D6EC(maskFade, v11);
  if ( LODWORD(v67->max_length) <= 1 )
    goto LABEL_123;
  v68 = v67->m_Items[1];
  v69 = System_String__Concat_63457864((System_String_o *)StringLiteral_19298/*"event_vs_team_icon_"*/, (System_String_o *)v57, 0);
  maskFade = AtlasManager__SetEventUI(v68, v69, 0);
  v7 = v122;
LABEL_98:
  if ( !v7 )
    goto LABEL_120;
  Object_40288984 = AssetData__GetObject_40288984(v7, (System_String_o *)StringLiteral_17281/*"bit_vs_gauge_part"*/, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( Object_40288984 )
    v103 = (UnityEngine_GameObject_c *)Object_40288984->klass == UnityEngine_GameObject_TypeInfo
         ? (Il2CppObject *)Object_40288984
         : 0LL;
  else
    v103 = 0;
  maskFade = (__int64)UnityEngine_Object__Instantiate_object_(
                        v103,
                        (const MethodInfo_315ACB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !maskFade )
    goto LABEL_120;
  v104 = (UnityEngine_GameObject_o *)maskFade;
  gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)maskFade, 0);
  GameObjectExtensions__SafeSetParent_35924288(gameObject, this->fields.gaugeEffectPanel, 0);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v104,
                       (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventLeagueVsGaugeEffect___);
  maskFade = EventPointEntity__isBossBattle(eventPointEntity, 0);
  if ( !Component_object )
    goto LABEL_120;
  TitleInfoEventLeagueVsGaugeEffect__setup(
    (TitleInfoEventLeagueVsGaugeEffect_o *)Component_object,
    v19,
    v23,
    maskFade & 1,
    v107);
  maskSp = this->fields.maskSp;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetCommon(maskSp, 0);
  AtlasManager__SetCommon(this->fields.colliderSp, 0);
  maskFade = (__int64)this->fields.maskSp;
  if ( !maskFade )
    goto LABEL_120;
  UISprite__set_spriteName((UISprite_o *)maskFade, (System_String_o *)StringLiteral_24793/*"white00"*/, 0);
  maskFade = (__int64)this->fields.colliderSp;
  if ( !maskFade )
    goto LABEL_120;
  UISprite__set_spriteName((UISprite_o *)maskFade, (System_String_o *)StringLiteral_17994/*"clear00"*/, 0);
  this->fields.endTime = eventPointEntity->fields.endedAt;
  TitleInfoEventLeagueVsComponent__restTimeUpdate(this, v109);
  AtlasManager__SetEventUI(this->fields.baseWindow, (System_String_o *)StringLiteral_19292/*"event_vs_gauge_bg"*/, 0);
  AtlasManager__SetEventUI(this->fields.hpFrame, (System_String_o *)StringLiteral_19290/*"event_vs_frame"*/, 0);
  AtlasManager__SetEventUI(this->fields.hpBack, (System_String_o *)StringLiteral_19289/*"event_vs_back"*/, 0);
  modeName = this->fields.modeName;
  id = eventPointEntity->fields.id;
  v114 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id, v111, v112, v113);
  v115 = System_String__Concat((Il2CppObject *)StringLiteral_19293/*"event_vs_gauge_title_"*/, v114, 0);
  AtlasManager__SetEventUI(modeName, v115, 0);
  maskFade = (__int64)this->fields.modeName;
  if ( !maskFade )
    goto LABEL_120;
  maskFade = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)maskFade + 840LL))(
               maskFade,
               *(_QWORD *)(*(_QWORD *)maskFade + 848LL));
  splitIcon = this->fields.splitIcon;
  if ( !splitIcon )
    goto LABEL_120;
  v117 = 0;
  while ( 1 )
  {
    v118 = LODWORD(splitIcon->max_length);
    if ( (__int64)v117 >= (int)v118 )
      break;
    if ( v117 >= v118 )
      goto LABEL_123;
    v119 = splitIcon->m_Items[v117];
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    maskFade = AtlasManager__SetEventUI(v119, (System_String_o *)StringLiteral_19294/*"event_vs_split_line"*/, 0);
    splitIcon = this->fields.splitIcon;
    ++v117;
    if ( !splitIcon )
      goto LABEL_120;
  }
  v120 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SetLocalPositionY(v120, -2.0, 0);
  v121 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  this->fields.originPos = GameObjectExtensions__GetLocalPosition(v121, 0);
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
  __int64 v14; // x2
  struct EventPointEntity_o *v15; // x8
  struct System_Int32_array *group1; // x9
  TotalEventPointMaster_o *v17; // x25
  struct EventPointEntity_o *v18; // x8
  struct System_Int32_array *group2; // x9
  int64_t v20; // x24
  int64_t v21; // x23
  UnityEngine_Object_o *Object_40288984; // x0
  UnityEngine_GameObject_c **v23; // x22
  Il2CppObject *v24; // x0
  UnityEngine_GameObject_o *v25; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v27; // x5

  if ( (byte_4C2539D & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_TotalEventPointMaster___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_TitleInfoEventLeagueVsGaugeFlashEffect___);
    sub_1C2D490(&UnityEngine_GameObject_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&StringLiteral_17279/*"bit_vs_gauge_flash"*/);
    byte_4C2539D = 1;
  }
  evPointEnt = this->fields.evPointEnt;
  if ( evPointEnt )
  {
    if ( EventPointEntity__isBossBattle(evPointEnt, 0) )
    {
      ActionExtensions__Call(callback, 0);
      return;
    }
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_26;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_TotalEventPointMaster___);
    v15 = this->fields.evPointEnt;
    if ( !v15 )
      goto LABEL_26;
    group1 = v15->fields.group1;
    if ( !group1 )
      goto LABEL_26;
    if ( !LODWORD(group1->max_length) )
      goto LABEL_27;
    v17 = (TotalEventPointMaster_o *)Instance;
    if ( !Instance )
      goto LABEL_26;
    Instance = (DataManager_o *)TotalEventPointMaster__GetPoint(
                                  (TotalEventPointMaster_o *)Instance,
                                  eventId,
                                  v15->fields.id,
                                  group1->m_Items[0],
                                  0);
    v18 = this->fields.evPointEnt;
    if ( !v18 )
      goto LABEL_26;
    group2 = v18->fields.group2;
    if ( !group2 )
      goto LABEL_26;
    if ( !LODWORD(group2->max_length) )
LABEL_27:
      sub_1C2D6F4(Instance, v13, v14);
    v20 = (int64_t)Instance;
    Instance = (DataManager_o *)TotalEventPointMaster__GetPoint(v17, eventId, v18->fields.id, group2->m_Items[0], 0);
    if ( !effectAssetData )
      goto LABEL_26;
    v21 = (int64_t)Instance;
    Object_40288984 = AssetData__GetObject_40288984(effectAssetData, (System_String_o *)StringLiteral_17279/*"bit_vs_gauge_flash"*/, 0);
    v23 = (UnityEngine_GameObject_c **)Object_40288984;
    if ( UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      if ( Object_40288984 )
        goto LABEL_18;
    }
    else
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( v23 )
      {
LABEL_18:
        if ( *v23 == UnityEngine_GameObject_TypeInfo )
          v24 = (Il2CppObject *)v23;
        else
          v24 = 0;
LABEL_23:
        Instance = (DataManager_o *)UnityEngine_Object__Instantiate_object_(
                                      v24,
                                      (const MethodInfo_315ACB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( Instance )
        {
          v25 = (UnityEngine_GameObject_o *)Instance;
          gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)Instance, 0);
          GameObjectExtensions__SafeSetParent_35924288(gameObject, this->fields.gaugeEffectPanel, 0);
          Instance = (DataManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                        v25,
                                        (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventLeagueVsGaugeFlashEffect___);
          if ( Instance )
          {
            TitleInfoEventLeagueVsGaugeFlashEffect__setup(
              (TitleInfoEventLeagueVsGaugeFlashEffect_o *)Instance,
              groupId,
              v20,
              v21,
              callback,
              v27);
            return;
          }
        }
LABEL_26:
        sub_1C2D6EC(Instance, v13);
      }
    }
    v24 = 0;
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

  if ( (byte_4C2539A & 1) == 0 )
  {
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&StringLiteral_5733/*"EVENT_VS_GAUGE_REST_TIME"*/);
    byte_4C2539A = 1;
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
      v6 = LocalizationManager__Get((System_String_o *)StringLiteral_5733/*"EVENT_VS_GAUGE_REST_TIME"*/, 0);
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
    sub_1C2D6EC(restTimeLabel, v3);
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
  if ( (byte_4C253A1 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    this = (TitleInfoEventLeagueVsComponent___c__DisplayClass36_0_o *)sub_1C2D490(&Method_TitleInfoEventLeagueVsComponent___c__DisplayClass36_0__ResultEffect_b__1__);
    byte_4C253A1 = 1;
  }
  _9__1 = v2->fields.__9__1;
  effect = v2->fields.effect;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v2,
      Method_TitleInfoEventLeagueVsComponent___c__DisplayClass36_0__ResultEffect_b__1__,
      0);
    v2->fields.__9__1 = _9__1;
    sub_1C2D434((CGThumbnailListItem_o *)&v2->fields.__9__1, (int32_t)_9__1, v5, v6);
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this || !effect )
    sub_1C2D6EC(this, method);
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

  if ( (byte_4C253A2 & 1) == 0 )
  {
    sub_1C2D490(&AvalonSceneManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C253A2 = 1;
  }
  effect = (UnityEngine_Component_o *)this->fields.effect;
  if ( !effect )
    goto LABEL_12;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(effect, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71163704(gameObject, 0);
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
    sub_1C2D6EC(effect, method);
  MaskFade__Fadein(maskFade, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, this->fields.callback, 0);
}