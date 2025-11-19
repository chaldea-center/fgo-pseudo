void TitleInfoEventLeagueVsComponent___cctor(const MethodInfo *method)
{
  struct TitleInfoEventLeagueVsComponent_StaticFields *static_fields; // x8

  if ( (byte_4CB421A & 1) == 0 )
  {
    sub_1C6BA08(&TitleInfoEventLeagueVsComponent_TypeInfo);
    byte_4CB421A = 1;
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

  if ( (byte_4CB4215 & 1) == 0 )
  {
    sub_1C6BA08(&TitleInfoEventLeagueVsComponent_TypeInfo);
    sub_1C6BA08(&Method_UITweener_Begin_TweenPosition___);
    sub_1C6BA08(&StringLiteral_6851/*"FrameInFinish"*/);
    byte_4CB4215 = 1;
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
           (const MethodInfo_3210C14 *)Method_UITweener_Begin_TweenPosition___);
    if ( !v8 )
      sub_1C6BC60(0, v9);
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
    sub_1C6B9AC((CGThumbnailListItem_o *)&v11[5], (int32_t)v14, v15, v16);
    v17 = StringLiteral_6851/*"FrameInFinish"*/;
    v11[5].monitor = (void *)StringLiteral_6851/*"FrameInFinish"*/;
    sub_1C6B9AC((CGThumbnailListItem_o *)&v11[5].monitor, v17, v18, v19);
    this->fields.frameInCallBack = callback;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.frameInCallBack, (int32_t)callback, v20, v21);
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
  sub_1C6B9AC(p_frameInCallBack, 0, v2, v3);
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

  if ( (byte_4CB4216 & 1) == 0 )
  {
    sub_1C6BA08(&TitleInfoEventLeagueVsComponent_TypeInfo);
    sub_1C6BA08(&Method_UITweener_Begin_TweenPosition___);
    sub_1C6BA08(&StringLiteral_6853/*"FrameOutFinish"*/);
    byte_4CB4216 = 1;
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
         (const MethodInfo_3210C14 *)Method_UITweener_Begin_TweenPosition___);
  v17 = *(Il2CppClass **)&this->fields.originPos.fields.x;
  if ( !v6 )
    sub_1C6BC60(0, v7);
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
  sub_1C6B9AC((CGThumbnailListItem_o *)&v8[5], (int32_t)v11, v12, v13);
  v14 = StringLiteral_6853/*"FrameOutFinish"*/;
  v8[5].monitor = (void *)StringLiteral_6853/*"FrameOutFinish"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v8[5].monitor, v14, v15, v16);
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

  if ( (byte_4CB4219 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&StringLiteral_5646/*"EVENT_POINT_VS_WIN_DIALOG_TITLE"*/);
    sub_1C6BA08(&StringLiteral_5645/*"EVENT_POINT_VS_WIN_DIALOG_GROUP"*/);
    sub_1C6BA08(&StringLiteral_5644/*"EVENT_POINT_VS_WIN_DIALOG_GET"*/);
    byte_4CB4219 = 1;
  }
  countText = 0;
  nameText = 0;
  if ( evPointEnt )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_21;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_GiftMaster___);
    if ( !rewardInfo || !Instance )
      goto LABEL_21;
    GiftListById = GiftMaster__GetGiftListById((GiftMaster_o *)Instance, rewardInfo->fields.giftId, 0);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v11 = LocalizationManager__Get((System_String_o *)StringLiteral_5646/*"EVENT_POINT_VS_WIN_DIALOG_TITLE"*/, 0);
    v12 = System_String__Format(v11, (Il2CppObject *)evPointEnt->fields.name, 0);
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_5645/*"EVENT_POINT_VS_WIN_DIALOG_GROUP"*/, 0);
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
          sub_1C6BC68(Instance);
        Instance = (DataManager_o *)GiftListById->m_Items[v19];
        if ( !Instance )
          break;
        GiftEntity__GetInfo((GiftEntity_o *)Instance, &nameText, &countText, 0);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v20 = LocalizationManager__Get((System_String_o *)StringLiteral_5644/*"EVENT_POINT_VS_WIN_DIALOG_GET"*/, 0);
        v21 = System_String__Format_64008100(v20, (Il2CppObject *)nameText, (Il2CppObject *)countText, 0);
        Instance = (DataManager_o *)System_String__Concat_63966792(v18, v21, 0);
        max_length = GiftListById->max_length;
        ++v19;
        v18 = (System_String_o *)Instance;
        if ( v19 >= max_length )
          goto LABEL_17;
      }
LABEL_21:
      sub_1C6BC60(Instance, v9);
    }
LABEL_17:
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  UnityEngine_Object_o *Object_40741416; // x22
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

  if ( (byte_4CB4218 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&UnityEngine_BoxCollider_TypeInfo);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_Collider___);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_EventPointVsResultAction___);
    sub_1C6BA08(&UnityEngine_GameObject_TypeInfo);
    sub_1C6BA08(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_TitleInfoEventLeagueVsComponent___c__DisplayClass36_0__ResultEffect_b__0__);
    sub_1C6BA08(&TitleInfoEventLeagueVsComponent___c__DisplayClass36_0_TypeInfo);
    sub_1C6BA08(&StringLiteral_17304/*"bit_vs_result"*/);
    byte_4CB4218 = 1;
  }
  v9 = sub_1C6BC54(TitleInfoEventLeagueVsComponent___c__DisplayClass36_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_27;
  *(_QWORD *)(v9 + 32) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v9 + 32), (int32_t)this, v12, v13);
  *(_QWORD *)(v9 + 40) = callback;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v9 + 40), (int32_t)callback, v14, v15);
  if ( !winType )
  {
    ActionExtensions__Call(*(System_Action_o **)(v9 + 40), 0);
    return;
  }
  if ( !effectAssetData )
    goto LABEL_27;
  Object_40741416 = AssetData__GetObject_40741416(effectAssetData, (System_String_o *)StringLiteral_17304/*"bit_vs_result"*/, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( Object_40741416 )
    v17 = (UnityEngine_GameObject_c *)Object_40741416->klass == UnityEngine_GameObject_TypeInfo
        ? (Il2CppObject *)Object_40741416
        : 0LL;
  else
    v17 = 0;
  resultPanel = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                              v17,
                                              (const MethodInfo_31C7F14 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !resultPanel
    || (v18 = resultPanel,
        gameObject = UnityEngine_GameObject__get_gameObject(resultPanel, 0),
        GameObjectExtensions__SafeSetParent_36361932(gameObject, this->fields.resultPanel, 0),
        (resultPanel = this->fields.resultPanel) == 0) )
  {
LABEL_27:
    sub_1C6BC60(resultPanel, v11);
  }
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       resultPanel,
                       (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_Collider___);
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
    sub_1C6BFFC(Component_object);
LABEL_22:
    *(_QWORD *)(v9 + 24) = 0;
    v26 = (CGThumbnailListItem_o *)(v9 + 24);
  }
  sub_1C6B9AC(v26, v23, v21, v22);
  resultPanel = (UnityEngine_GameObject_o *)v26->klass;
  if ( !v26->klass )
    goto LABEL_27;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)resultPanel, 1, 0);
  v27 = UnityEngine_GameObject__GetComponent_object_(
          v18,
          (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_EventPointVsResultAction___);
  *(_QWORD *)(v9 + 16) = v27;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v9 + 16), (int32_t)v27, v28, v29);
  evPointEnt = this->fields.evPointEnt;
  if ( !evPointEnt )
    goto LABEL_27;
  v31 = *(EventPointVsResultAction_o **)(v9 + 16);
  id = evPointEnt->fields.id;
  v33 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
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
  struct UISprite_array *v32; // x8
  struct System_Int32_array *v33; // x9
  UISprite_o *v34; // x24
  Il2CppObject *v35; // x0
  System_String_o *v36; // x26
  struct UISprite_array *v37; // x8
  struct System_Int32_array *v38; // x9
  UISprite_o *v39; // x24
  struct System_Int32_array *v40; // x8
  Il2CppObject *v41; // x26
  Il2CppObject *v42; // x0
  System_String_o *v43; // x0
  struct System_Int32_array *v44; // x8
  struct System_Int32_array *v45; // x8
  __int64 v46; // x27
  unsigned __int64 v47; // x24
  Il2CppObject *v48; // x26
  unsigned __int64 v49; // x9
  Il2CppObject *v50; // x0
  struct UISprite_array *v51; // x8
  UISprite_o *v52; // x23
  Il2CppObject *v53; // x0
  System_String_o *v54; // x25
  struct UISprite_array *v55; // x8
  UISprite_o *v56; // x23
  System_String_o *v57; // x0
  struct UISlider_array *v58; // x8
  double v59; // d8
  float v60; // s0
  struct UISlider_array *v61; // x8
  struct UISprite_array *hpBar; // x8
  struct System_Int32_array *v63; // x9
  UISprite_o *v64; // x23
  Il2CppObject *v65; // x0
  System_String_o *v66; // x25
  struct UISprite_array *v67; // x8
  struct System_Int32_array *v68; // x9
  UISprite_o *v69; // x23
  Il2CppObject *v70; // x0
  System_String_o *v71; // x0
  struct UISprite_array *groupIcon; // x8
  struct System_Int32_array *v73; // x9
  UISprite_o *v74; // x23
  Il2CppObject *v75; // x0
  System_String_o *v76; // x0
  struct UISprite_array *v77; // x8
  struct System_Int32_array *v78; // x9
  UISprite_o *v79; // x23
  Il2CppObject *v80; // x0
  System_String_o *v81; // x0
  UnityEngine_Object_o *Object_40741416; // x21
  Il2CppObject *v83; // x0
  UnityEngine_GameObject_o *v84; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x21
  const MethodInfo *v87; // x4
  UISprite_o *maskSp; // x21
  const MethodInfo *v89; // x1
  UISprite_o *modeName; // x21
  Il2CppObject *v91; // x0
  System_String_o *v92; // x0
  struct UISprite_array *splitIcon; // x8
  unsigned __int64 v94; // x21
  unsigned __int64 v95; // x9
  UISprite_o *v96; // x20
  UnityEngine_GameObject_o *v97; // x0
  UnityEngine_GameObject_o *v98; // x0
  AssetData_o *v99; // [xsp+10h] [xbp-80h]
  int32_t v100; // [xsp+18h] [xbp-78h] BYREF
  int32_t v101; // [xsp+1Ch] [xbp-74h] BYREF
  int32_t v102; // [xsp+28h] [xbp-68h] BYREF
  int32_t id; // [xsp+2Ch] [xbp-64h] BYREF

  v7 = effectAssetData;
  if ( (byte_4CB4213 & 1) == 0 )
  {
    sub_1C6BA08(&AtlasManager_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMasterData_EventPointGroupMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_TotalEventPointMaster___);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_TitleInfoEventLeagueVsGaugeEffect___);
    sub_1C6BA08(&UnityEngine_GameObject_TypeInfo);
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&TerminalPramsManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_19356/*"event_vs_gauge_title_"*/);
    sub_1C6BA08(&StringLiteral_19353/*"event_vs_frame"*/);
    sub_1C6BA08(&StringLiteral_19352/*"event_vs_back"*/);
    sub_1C6BA08(&StringLiteral_24926/*"white00"*/);
    sub_1C6BA08(&StringLiteral_19355/*"event_vs_gauge_bg"*/);
    sub_1C6BA08(&StringLiteral_17301/*"bit_vs_gauge_part"*/);
    sub_1C6BA08(&StringLiteral_19357/*"event_vs_split_line"*/);
    sub_1C6BA08(&StringLiteral_18017/*"clear00"*/);
    sub_1C6BA08(&StringLiteral_19361/*"event_vs_team_icon_"*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    sub_1C6BA08(&StringLiteral_19354/*"event_vs_gauge_"*/);
    byte_4CB4213 = 1;
  }
  if ( !eventPointEntity )
    return;
  this->fields.evPointEnt = eventPointEntity;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)&this->fields.evPointEnt,
    (int32_t)eventPointEntity,
    eventId,
    (const MethodInfo *)effectAssetData);
  this->fields.isDispRestTime = isDispRestTime;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4CB36E9 )
  {
    sub_1C6BA08(&TerminalPramsManager_TypeInfo);
    byte_4CB36E9 = 1;
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
  maskFade = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !maskFade )
    goto LABEL_120;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)maskFade,
                        (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_TotalEventPointMaster___);
  maskFade = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !maskFade )
    goto LABEL_120;
  v15 = DataManager__GetMasterData_object_(
          (DataManager_o *)maskFade,
          (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_EventPointGroupMaster___);
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
          v58 = this->fields.hpBarSlider;
          if ( !v58 )
            goto LABEL_120;
          if ( !LODWORD(v58->max_length) )
            goto LABEL_123;
          maskFade = (__int64)v58->m_Items[0];
          if ( !maskFade )
            goto LABEL_120;
          v59 = (double)v18 / (double)(v22 + v18);
          v60 = 1.0 - v59;
          UIProgressBar__set_value((UIProgressBar_o *)maskFade, v60, 0);
          v61 = this->fields.hpBarSlider;
          if ( !v61 )
            goto LABEL_120;
          if ( LODWORD(v61->max_length) <= 1 )
            goto LABEL_123;
          maskFade = (__int64)v61->m_Items[1];
          if ( !maskFade )
            goto LABEL_120;
          v25 = v59;
        }
        UIProgressBar__set_value((UIProgressBar_o *)maskFade, v25, 0);
        hpBar = this->fields.hpBar;
        if ( !hpBar )
          goto LABEL_120;
        if ( LODWORD(hpBar->max_length) )
        {
          v63 = eventPointEntity->fields.group2;
          if ( !v63 )
            goto LABEL_120;
          if ( LODWORD(v63->max_length) )
          {
            v64 = hpBar->m_Items[0];
            id = v63->m_Items[0];
            v65 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id);
            v66 = System_String__Concat((Il2CppObject *)StringLiteral_19354/*"event_vs_gauge_"*/, v65, 0);
            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
            maskFade = AtlasManager__SetEventUI(v64, v66, 0);
            v67 = this->fields.hpBar;
            if ( !v67 )
              goto LABEL_120;
            if ( LODWORD(v67->max_length) > 1 )
            {
              v68 = eventPointEntity->fields.group1;
              if ( !v68 )
                goto LABEL_120;
              if ( LODWORD(v68->max_length) )
              {
                v69 = v67->m_Items[1];
                v102 = v68->m_Items[0];
                v70 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v102);
                v71 = System_String__Concat((Il2CppObject *)StringLiteral_19354/*"event_vs_gauge_"*/, v70, 0);
                maskFade = AtlasManager__SetEventUI(v69, v71, 0);
                groupIcon = this->fields.groupIcon;
                if ( !groupIcon )
                  goto LABEL_120;
                if ( LODWORD(groupIcon->max_length) )
                {
                  v73 = eventPointEntity->fields.group2;
                  if ( !v73 )
                    goto LABEL_120;
                  if ( LODWORD(v73->max_length) )
                  {
                    v74 = groupIcon->m_Items[0];
                    v101 = v73->m_Items[0];
                    v75 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v101);
                    v76 = System_String__Concat((Il2CppObject *)StringLiteral_19361/*"event_vs_team_icon_"*/, v75, 0);
                    maskFade = AtlasManager__SetEventUI(v74, v76, 0);
                    v77 = this->fields.groupIcon;
                    if ( !v77 )
                      goto LABEL_120;
                    if ( LODWORD(v77->max_length) > 1 )
                    {
                      v78 = eventPointEntity->fields.group1;
                      if ( !v78 )
                        goto LABEL_120;
                      if ( LODWORD(v78->max_length) )
                      {
                        v79 = v77->m_Items[1];
                        v100 = v78->m_Items[0];
                        v80 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v100);
                        v81 = System_String__Concat((Il2CppObject *)StringLiteral_19361/*"event_vs_team_icon_"*/, v80, 0);
                        maskFade = AtlasManager__SetEventUI(v79, v81, 0);
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
    sub_1C6BC68(maskFade);
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
  v32 = this->fields.hpBar;
  if ( !v32 )
    goto LABEL_120;
  if ( !LODWORD(v32->max_length) )
    goto LABEL_123;
  v33 = eventPointEntity->fields.group2;
  if ( !v33 )
    goto LABEL_120;
  v99 = v7;
  if ( !LODWORD(v33->max_length) )
    goto LABEL_123;
  v34 = v32->m_Items[0];
  id = v33->m_Items[0];
  v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id);
  v36 = System_String__Concat((Il2CppObject *)StringLiteral_19354/*"event_vs_gauge_"*/, v35, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  maskFade = AtlasManager__SetEventUI(v34, v36, 0);
  v37 = this->fields.hpBar;
  if ( !v37 )
    goto LABEL_120;
  if ( LODWORD(v37->max_length) <= 1 )
    goto LABEL_123;
  v38 = eventPointEntity->fields.group1;
  if ( !v38 )
    goto LABEL_120;
  if ( !LODWORD(v38->max_length) )
    goto LABEL_123;
  v39 = v37->m_Items[1];
  v102 = v38->m_Items[0];
  maskFade = j_il2cpp_value_box_0(int_TypeInfo, &v102);
  v40 = eventPointEntity->fields.group1;
  if ( !v40 )
    goto LABEL_120;
  if ( LODWORD(v40->max_length) <= 1 )
    goto LABEL_123;
  v41 = (Il2CppObject *)maskFade;
  v101 = v40->m_Items[1];
  v42 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v101);
  v43 = System_String__Concat_64004808((Il2CppObject *)StringLiteral_19354/*"event_vs_gauge_"*/, v41, v42, 0);
  maskFade = AtlasManager__SetEventUI(v39, v43, 0);
  v44 = eventPointEntity->fields.group2;
  if ( !v44 )
    goto LABEL_120;
  if ( !LODWORD(v44->max_length) )
    goto LABEL_123;
  if ( !v15 )
    goto LABEL_120;
  maskFade = (__int64)EventPointGroupMaster__getEntity((EventPointGroupMaster_o *)v15, eventId, v44->m_Items[0], 0);
  v45 = eventPointEntity->fields.group1;
  if ( !v45 )
    goto LABEL_120;
  v46 = maskFade;
  v47 = 0;
  v48 = (Il2CppObject *)StringLiteral_1/*""*/;
  while ( 1 )
  {
    v49 = LODWORD(v45->max_length);
    if ( (__int64)v47 >= (int)v49 )
      break;
    if ( v47 >= v49 )
      goto LABEL_123;
    maskFade = (__int64)EventPointGroupMaster__getEntity((EventPointGroupMaster_o *)v15, eventId, v45->m_Items[v47], 0);
    if ( maskFade )
    {
      id = *(_DWORD *)(maskFade + 32);
      v50 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id);
      maskFade = (__int64)System_String__Concat(v48, v50, 0);
      v45 = eventPointEntity->fields.group1;
      v48 = (Il2CppObject *)maskFade;
      ++v47;
      if ( v45 )
        continue;
    }
    goto LABEL_120;
  }
  v51 = this->fields.groupIcon;
  if ( !v51 )
    goto LABEL_120;
  if ( !LODWORD(v51->max_length) )
    goto LABEL_123;
  if ( !v46 )
    goto LABEL_120;
  v52 = v51->m_Items[0];
  id = *(_DWORD *)(v46 + 32);
  v53 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id);
  v54 = System_String__Concat((Il2CppObject *)StringLiteral_19361/*"event_vs_team_icon_"*/, v53, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  maskFade = AtlasManager__SetEventUI(v52, v54, 0);
  v55 = this->fields.groupIcon;
  v22 = normaTotalPoint - v18;
  if ( !v55 )
LABEL_120:
    sub_1C6BC60(maskFade, v11);
  if ( LODWORD(v55->max_length) <= 1 )
    goto LABEL_123;
  v56 = v55->m_Items[1];
  v57 = System_String__Concat_63966792((System_String_o *)StringLiteral_19361/*"event_vs_team_icon_"*/, (System_String_o *)v48, 0);
  maskFade = AtlasManager__SetEventUI(v56, v57, 0);
  v7 = v99;
LABEL_98:
  if ( !v7 )
    goto LABEL_120;
  Object_40741416 = AssetData__GetObject_40741416(v7, (System_String_o *)StringLiteral_17301/*"bit_vs_gauge_part"*/, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( Object_40741416 )
    v83 = (UnityEngine_GameObject_c *)Object_40741416->klass == UnityEngine_GameObject_TypeInfo
        ? (Il2CppObject *)Object_40741416
        : 0LL;
  else
    v83 = 0;
  maskFade = (__int64)UnityEngine_Object__Instantiate_object_(
                        v83,
                        (const MethodInfo_31C7F14 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !maskFade )
    goto LABEL_120;
  v84 = (UnityEngine_GameObject_o *)maskFade;
  gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)maskFade, 0);
  GameObjectExtensions__SafeSetParent_36361932(gameObject, this->fields.gaugeEffectPanel, 0);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v84,
                       (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventLeagueVsGaugeEffect___);
  maskFade = EventPointEntity__isBossBattle(eventPointEntity, 0);
  if ( !Component_object )
    goto LABEL_120;
  TitleInfoEventLeagueVsGaugeEffect__setup(
    (TitleInfoEventLeagueVsGaugeEffect_o *)Component_object,
    v18,
    v22,
    maskFade & 1,
    v87);
  maskSp = this->fields.maskSp;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetCommon(maskSp, 0);
  AtlasManager__SetCommon(this->fields.colliderSp, 0);
  maskFade = (__int64)this->fields.maskSp;
  if ( !maskFade )
    goto LABEL_120;
  UISprite__set_spriteName((UISprite_o *)maskFade, (System_String_o *)StringLiteral_24926/*"white00"*/, 0);
  maskFade = (__int64)this->fields.colliderSp;
  if ( !maskFade )
    goto LABEL_120;
  UISprite__set_spriteName((UISprite_o *)maskFade, (System_String_o *)StringLiteral_18017/*"clear00"*/, 0);
  this->fields.endTime = eventPointEntity->fields.endedAt;
  TitleInfoEventLeagueVsComponent__restTimeUpdate(this, v89);
  AtlasManager__SetEventUI(this->fields.baseWindow, (System_String_o *)StringLiteral_19355/*"event_vs_gauge_bg"*/, 0);
  AtlasManager__SetEventUI(this->fields.hpFrame, (System_String_o *)StringLiteral_19353/*"event_vs_frame"*/, 0);
  AtlasManager__SetEventUI(this->fields.hpBack, (System_String_o *)StringLiteral_19352/*"event_vs_back"*/, 0);
  modeName = this->fields.modeName;
  id = eventPointEntity->fields.id;
  v91 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id);
  v92 = System_String__Concat((Il2CppObject *)StringLiteral_19356/*"event_vs_gauge_title_"*/, v91, 0);
  AtlasManager__SetEventUI(modeName, v92, 0);
  maskFade = (__int64)this->fields.modeName;
  if ( !maskFade )
    goto LABEL_120;
  maskFade = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)maskFade + 840LL))(
               maskFade,
               *(_QWORD *)(*(_QWORD *)maskFade + 848LL));
  splitIcon = this->fields.splitIcon;
  if ( !splitIcon )
    goto LABEL_120;
  v94 = 0;
  while ( 1 )
  {
    v95 = LODWORD(splitIcon->max_length);
    if ( (__int64)v94 >= (int)v95 )
      break;
    if ( v94 >= v95 )
      goto LABEL_123;
    v96 = splitIcon->m_Items[v94];
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    maskFade = AtlasManager__SetEventUI(v96, (System_String_o *)StringLiteral_19357/*"event_vs_split_line"*/, 0);
    splitIcon = this->fields.splitIcon;
    ++v94;
    if ( !splitIcon )
      goto LABEL_120;
  }
  v97 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SetLocalPositionY(v97, -2.0, 0);
  v98 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  this->fields.originPos = GameObjectExtensions__GetLocalPosition(v98, 0);
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
  UnityEngine_Object_o *Object_40741416; // x0
  UnityEngine_GameObject_c **v22; // x22
  Il2CppObject *v23; // x0
  UnityEngine_GameObject_o *v24; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v26; // x5

  if ( (byte_4CB4217 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_TotalEventPointMaster___);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_TitleInfoEventLeagueVsGaugeFlashEffect___);
    sub_1C6BA08(&UnityEngine_GameObject_TypeInfo);
    sub_1C6BA08(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&StringLiteral_17299/*"bit_vs_gauge_flash"*/);
    byte_4CB4217 = 1;
  }
  evPointEnt = this->fields.evPointEnt;
  if ( evPointEnt )
  {
    if ( EventPointEntity__isBossBattle(evPointEnt, 0) )
    {
      ActionExtensions__Call(callback, 0);
      return;
    }
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_26;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_TotalEventPointMaster___);
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
      sub_1C6BC68(Instance);
    v19 = (int64_t)Instance;
    Instance = (DataManager_o *)TotalEventPointMaster__GetPoint(v16, eventId, v17->fields.id, group2->m_Items[0], 0);
    if ( !effectAssetData )
      goto LABEL_26;
    v20 = (int64_t)Instance;
    Object_40741416 = AssetData__GetObject_40741416(effectAssetData, (System_String_o *)StringLiteral_17299/*"bit_vs_gauge_flash"*/, 0);
    v22 = (UnityEngine_GameObject_c **)Object_40741416;
    if ( UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      if ( Object_40741416 )
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
                                      (const MethodInfo_31C7F14 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( Instance )
        {
          v24 = (UnityEngine_GameObject_o *)Instance;
          gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)Instance, 0);
          GameObjectExtensions__SafeSetParent_36361932(gameObject, this->fields.gaugeEffectPanel, 0);
          Instance = (DataManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                        v24,
                                        (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventLeagueVsGaugeFlashEffect___);
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
        sub_1C6BC60(Instance, v13);
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

  if ( (byte_4CB4214 & 1) == 0 )
  {
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_5732/*"EVENT_VS_GAUGE_REST_TIME"*/);
    byte_4CB4214 = 1;
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
      v6 = LocalizationManager__Get((System_String_o *)StringLiteral_5732/*"EVENT_VS_GAUGE_REST_TIME"*/, 0);
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
    sub_1C6BC60(restTimeLabel, v3);
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
  if ( (byte_4CB421B & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    this = (TitleInfoEventLeagueVsComponent___c__DisplayClass36_0_o *)sub_1C6BA08(&Method_TitleInfoEventLeagueVsComponent___c__DisplayClass36_0__ResultEffect_b__1__);
    byte_4CB421B = 1;
  }
  _9__1 = v2->fields.__9__1;
  effect = v2->fields.effect;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v2,
      Method_TitleInfoEventLeagueVsComponent___c__DisplayClass36_0__ResultEffect_b__1__,
      0);
    v2->fields.__9__1 = _9__1;
    sub_1C6B9AC((CGThumbnailListItem_o *)&v2->fields.__9__1, (int32_t)_9__1, v5, v6);
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this || !effect )
    sub_1C6BC60(this, method);
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

  if ( (byte_4CB421C & 1) == 0 )
  {
    sub_1C6BA08(&AvalonSceneManager_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB421C = 1;
  }
  effect = (UnityEngine_Component_o *)this->fields.effect;
  if ( !effect )
    goto LABEL_12;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(effect, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71659676(gameObject, 0);
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
    sub_1C6BC60(effect, method);
  MaskFade__Fadein(maskFade, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, this->fields.callback, 0);
}