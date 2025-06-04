void __fastcall TitleInfoEventLeagueVsComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct TitleInfoEventLeagueVsComponent_StaticFields *static_fields; // x8

  if ( (byte_4B00396 & 1) == 0 )
  {
    sub_1BC3008(&TitleInfoEventLeagueVsComponent_TypeInfo, v1);
    byte_4B00396 = 1;
  }
  static_fields = TitleInfoEventLeagueVsComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->RAIDBOSS_ANIM_ROOT_POS.fields.x = 0x42A0000000000000LL;
  static_fields->RAIDBOSS_ANIM_ROOT_POS.fields.z = 0.0;
  TitleInfoEventLeagueVsComponent_TypeInfo->static_fields->ANIM_DURATION_FRAME_IN = 0.3;
}


void __fastcall TitleInfoEventLeagueVsComponent___ctor(
        TitleInfoEventLeagueVsComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


double __fastcall TitleInfoEventLeagueVsComponent__ConvertPointToRate(
        TitleInfoEventLeagueVsComponent_o *this,
        int64_t point,
        int64_t maxPoint,
        const MethodInfo *method)
{
  return (double)point / (double)maxPoint;
}


void __fastcall TitleInfoEventLeagueVsComponent__Destroy(
        TitleInfoEventLeagueVsComponent_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall TitleInfoEventLeagueVsComponent__FrameIn(
        TitleInfoEventLeagueVsComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  TitleInfoEventLeagueVsComponent_c *v8; // x8
  UnityEngine_GameObject_o *v9; // x21
  Il2CppObject *v10; // x0
  __int64 v11; // x1
  float32x2_t *static_fields; // x8
  Il2CppObject *v13; // x21
  float v14; // s0
  void *v15; // x9
  UnityEngine_GameObject_o *v16; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w1
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t v22; // w2
  const MethodInfo *v23; // x3

  if ( (byte_4B00391 & 1) == 0 )
  {
    sub_1BC3008(&TitleInfoEventLeagueVsComponent_TypeInfo, callback);
    sub_1BC3008(&Method_UITweener_Begin_TweenPosition___, v5);
    sub_1BC3008(&StringLiteral_6800/*"FrameInFinish"*/, v6);
    byte_4B00391 = 1;
  }
  if ( this->fields.evPointEnt )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v8 = TitleInfoEventLeagueVsComponent_TypeInfo;
    v9 = gameObject;
    if ( !TitleInfoEventLeagueVsComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventLeagueVsComponent_TypeInfo);
      v8 = TitleInfoEventLeagueVsComponent_TypeInfo;
    }
    v10 = UITweener__Begin_object_(
            v9,
            v8->static_fields->ANIM_DURATION_FRAME_IN,
            (const MethodInfo_30B9C78 *)Method_UITweener_Begin_TweenPosition___);
    if ( !v10 )
      sub_1BC3264(0LL, v11);
    static_fields = (float32x2_t *)TitleInfoEventLeagueVsComponent_TypeInfo->static_fields;
    v13 = v10;
    v14 = this->fields.originPos.fields.z + static_fields[1].n64_f32[0];
    v10[8].klass = (Il2CppClass *)vadd_f32(
                                    *(float32x2_t *)&this->fields.originPos.fields.x,
                                    (float32x2_t)static_fields->n64_u64[0]).n64_u64[0];
    *(float *)&v10[8].monitor = v14;
    v15 = *(void **)&this->fields.originPos.fields.x;
    HIDWORD(v10[9].klass) = LODWORD(this->fields.originPos.fields.z);
    *(void **)((char *)&v10[8].monitor + 4) = v15;
    LODWORD(v10[2].klass) = 2;
    v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v13[5].klass = (Il2CppClass *)v16;
    sub_1BC2FAC((CGThumbnailListItem_o *)&v13[5], (int32_t)v16, v17, v18);
    v19 = StringLiteral_6800/*"FrameInFinish"*/;
    v13[5].monitor = (void *)StringLiteral_6800/*"FrameInFinish"*/;
    sub_1BC2FAC((CGThumbnailListItem_o *)&v13[5].monitor, v19, v20, v21);
    this->fields.frameInCallBack = callback;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.frameInCallBack, (int32_t)callback, v22, v23);
  }
}


void __fastcall TitleInfoEventLeagueVsComponent__FrameInFinish(
        TitleInfoEventLeagueVsComponent_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_frameInCallBack; // x0
  System_Action_o *v5; // x19
  struct System_Action_o *frameInCallBack; // t1

  frameInCallBack = this->fields.frameInCallBack;
  p_frameInCallBack = (CGThumbnailListItem_o *)&this->fields.frameInCallBack;
  v5 = frameInCallBack;
  p_frameInCallBack->klass = 0LL;
  sub_1BC2FAC(p_frameInCallBack, 0, v2, v3);
  if ( frameInCallBack )
    ActionExtensions__Call(v5, 0LL);
}


void __fastcall TitleInfoEventLeagueVsComponent__FrameOut(
        TitleInfoEventLeagueVsComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  TitleInfoEventLeagueVsComponent_c *v6; // x8
  UnityEngine_GameObject_o *v7; // x20
  Il2CppObject *v8; // x0
  __int64 v9; // x1
  Il2CppObject *v10; // x20
  float32x2_t *static_fields; // x8
  float v12; // s1
  UnityEngine_GameObject_o *v13; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w1
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  Il2CppClass *v19; // [xsp+0h] [xbp-40h]

  if ( (byte_4B00392 & 1) == 0 )
  {
    sub_1BC3008(&TitleInfoEventLeagueVsComponent_TypeInfo, method);
    sub_1BC3008(&Method_UITweener_Begin_TweenPosition___, v3);
    sub_1BC3008(&StringLiteral_6802/*"FrameOutFinish"*/, v4);
    byte_4B00392 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
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
         (const MethodInfo_30B9C78 *)Method_UITweener_Begin_TweenPosition___);
  v19 = *(Il2CppClass **)&this->fields.originPos.fields.x;
  if ( !v8 )
    sub_1BC3264(0LL, v9);
  v10 = v8;
  *(float *)&v8[8].monitor = this->fields.originPos.fields.z;
  v8[8].klass = v19;
  static_fields = (float32x2_t *)TitleInfoEventLeagueVsComponent_TypeInfo->static_fields;
  v12 = this->fields.originPos.fields.z + static_fields[1].n64_f32[0];
  *(float32x2_t *)((char *)&v8[8].monitor + 4) = vadd_f32(
                                                   *(float32x2_t *)&this->fields.originPos.fields.x,
                                                   (float32x2_t)static_fields->n64_u64[0]);
  *((float *)&v8[9].klass + 1) = v12;
  LODWORD(v8[2].klass) = 2;
  v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v10[5].klass = (Il2CppClass *)v13;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v10[5], (int32_t)v13, v14, v15);
  v16 = StringLiteral_6802/*"FrameOutFinish"*/;
  v10[5].monitor = (void *)StringLiteral_6802/*"FrameOutFinish"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v10[5].monitor, v16, v17, v18);
}


void __fastcall TitleInfoEventLeagueVsComponent__FrameOutFinish(
        TitleInfoEventLeagueVsComponent_o *this,
        const MethodInfo *method)
{
  ;
}


bool __fastcall TitleInfoEventLeagueVsComponent__IsDispPossible(
        TitleInfoEventLeagueVsComponent_o *this,
        const MethodInfo *method)
{
  return 1;
}


bool __fastcall TitleInfoEventLeagueVsComponent__IsEventRaidBoss(
        TitleInfoEventLeagueVsComponent_o *this,
        const MethodInfo *method)
{
  return 0;
}


void __fastcall TitleInfoEventLeagueVsComponent__OnDestroy(
        TitleInfoEventLeagueVsComponent_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall TitleInfoEventLeagueVsComponent__OpenResultPointDialog(
        TitleInfoEventLeagueVsComponent_o *this,
        EventPointEntity_o *evPointEnt,
        EventPointWinReward_o *rewardInfo,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  DataManager_o *Instance; // x0
  __int64 v15; // x1
  GiftEntity_array *GiftListById; // x21
  System_String_o *v17; // x0
  System_String_o *v18; // x20
  System_String_o *v19; // x0
  bool winGroup1; // w1
  System_String_o *v21; // x22
  Il2CppObject *WinGroupName; // x0
  __int64 v23; // x2
  int max_length; // w8
  System_String_o *v25; // x22
  int v26; // w23
  System_String_o *v27; // x0
  System_String_o *v28; // x0
  System_String_o *countText; // [xsp+40h] [xbp-50h] BYREF
  System_String_o *nameText; // [xsp+48h] [xbp-48h] BYREF

  if ( (byte_4B00395 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_GiftMaster___, evPointEnt);
    sub_1BC3008(&LocalizationManager_TypeInfo, v8);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_1BC3008(&StringLiteral_5606/*"EVENT_POINT_VS_WIN_DIALOG_TITLE"*/, v11);
    sub_1BC3008(&StringLiteral_5605/*"EVENT_POINT_VS_WIN_DIALOG_GROUP"*/, v12);
    sub_1BC3008(&StringLiteral_5604/*"EVENT_POINT_VS_WIN_DIALOG_GET"*/, v13);
    byte_4B00395 = 1;
  }
  countText = 0LL;
  nameText = 0LL;
  if ( evPointEnt )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_21;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_GiftMaster___);
    if ( !rewardInfo || !Instance )
      goto LABEL_21;
    GiftListById = GiftMaster__GetGiftListById((GiftMaster_o *)Instance, rewardInfo->fields.giftId, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v17 = LocalizationManager__Get((System_String_o *)StringLiteral_5606/*"EVENT_POINT_VS_WIN_DIALOG_TITLE"*/, 0LL);
    v18 = System_String__Format(v17, (Il2CppObject *)evPointEnt->fields.name, 0LL);
    v19 = LocalizationManager__Get((System_String_o *)StringLiteral_5605/*"EVENT_POINT_VS_WIN_DIALOG_GROUP"*/, 0LL);
    winGroup1 = rewardInfo->fields.winGroup1;
    v21 = v19;
    WinGroupName = (Il2CppObject *)EventPointEntity__GetWinGroupName(evPointEnt, winGroup1, 0LL);
    Instance = (DataManager_o *)System_String__Format(v21, WinGroupName, 0LL);
    if ( !GiftListById )
      goto LABEL_21;
    max_length = GiftListById->max_length;
    v25 = (System_String_o *)Instance;
    if ( max_length >= 1 )
    {
      v26 = 0;
      while ( 1 )
      {
        if ( v26 >= (unsigned int)max_length )
          sub_1BC326C(Instance, v15, v23);
        Instance = (DataManager_o *)GiftListById->m_Items[v26];
        if ( !Instance )
          break;
        GiftEntity__GetInfo((GiftEntity_o *)Instance, &nameText, &countText, 0LL);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v27 = LocalizationManager__Get((System_String_o *)StringLiteral_5604/*"EVENT_POINT_VS_WIN_DIALOG_GET"*/, 0LL);
        v28 = System_String__Format_62389940(v27, (Il2CppObject *)nameText, (Il2CppObject *)countText, 0LL);
        Instance = (DataManager_o *)System_String__Concat_62348648(v25, v28, 0LL);
        max_length = GiftListById->max_length;
        ++v26;
        v25 = (System_String_o *)Instance;
        if ( v26 >= max_length )
          goto LABEL_17;
      }
LABEL_21:
      sub_1BC3264(Instance, v15);
    }
LABEL_17:
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_21;
    CommonUI__OpenNotificationDialog(
      (CommonUI_o *)Instance,
      v18,
      v25,
      callback,
      -1,
      0,
      0,
      0,
      1,
      0,
      1,
      0,
      0LL,
      0.0,
      0,
      0LL);
  }
  else
  {
    ActionExtensions__Call(callback, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventLeagueVsComponent__ResultEffect(
        TitleInfoEventLeagueVsComponent_o *this,
        int32_t winType,
        AssetData_o *effectAssetData,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x21
  UnityEngine_GameObject_o *resultPanel; // x0
  __int64 v20; // x1
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  UnityEngine_Object_o *Object_39549504; // x22
  Il2CppObject *v26; // x0
  UnityEngine_GameObject_o *v27; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  int32_t v32; // w8
  UnityEngine_BoxCollider_c *v33; // x1
  __int64 methodPtr_low; // x9
  CGThumbnailListItem_o *v35; // x23
  Il2CppObject *v36; // x0
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  struct EventPointEntity_o *evPointEnt; // x8
  EventPointVsResultAction_o *v40; // x20
  int32_t id; // w22
  System_Action_o *v42; // x23

  if ( (byte_4B00394 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, *(_QWORD *)&winType);
    sub_1BC3008(&UnityEngine_BoxCollider_TypeInfo, v9);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_Collider___, v10);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_EventPointVsResultAction___, v11);
    sub_1BC3008(&UnityEngine_GameObject_TypeInfo, v12);
    sub_1BC3008(&Method_UnityEngine_Object_Instantiate_GameObject___, v13);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v14);
    sub_1BC3008(&Method_TitleInfoEventLeagueVsComponent___c__DisplayClass36_0__ResultEffect_b__0__, v15);
    sub_1BC3008(&TitleInfoEventLeagueVsComponent___c__DisplayClass36_0_TypeInfo, v16);
    sub_1BC3008(&StringLiteral_17139/*"bit_vs_result"*/, v17);
    byte_4B00394 = 1;
  }
  v18 = sub_1BC3254(TitleInfoEventLeagueVsComponent___c__DisplayClass36_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v18, 0LL);
  if ( !v18 )
    goto LABEL_27;
  *(_QWORD *)(v18 + 32) = this;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v18 + 32), (int32_t)this, v21, v22);
  *(_QWORD *)(v18 + 40) = callback;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v18 + 40), (int32_t)callback, v23, v24);
  if ( !winType )
  {
    ActionExtensions__Call(*(System_Action_o **)(v18 + 40), 0LL);
    return;
  }
  if ( !effectAssetData )
    goto LABEL_27;
  Object_39549504 = AssetData__GetObject_39549504(effectAssetData, (System_String_o *)StringLiteral_17139/*"bit_vs_result"*/, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( Object_39549504 )
    v26 = (UnityEngine_GameObject_c *)Object_39549504->klass == UnityEngine_GameObject_TypeInfo
        ? (Il2CppObject *)Object_39549504
        : 0LL;
  else
    v26 = 0LL;
  resultPanel = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                              v26,
                                              (const MethodInfo_308AE24 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !resultPanel
    || (v27 = resultPanel,
        gameObject = UnityEngine_GameObject__get_gameObject(resultPanel, 0LL),
        GameObjectExtensions__SafeSetParent_35217712(gameObject, this->fields.resultPanel, 0LL),
        (resultPanel = this->fields.resultPanel) == 0LL) )
  {
LABEL_27:
    sub_1BC3264(resultPanel, v20);
  }
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       resultPanel,
                       (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_Collider___);
  v32 = (int)Component_object;
  if ( !Component_object )
    goto LABEL_22;
  v33 = UnityEngine_BoxCollider_TypeInfo;
  methodPtr_low = LOBYTE(UnityEngine_BoxCollider_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(Component_object->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
    || (UnityEngine_BoxCollider_c *)Component_object->klass->_2.typeHierarchy[methodPtr_low - 1] != UnityEngine_BoxCollider_TypeInfo
    || (*(_QWORD *)(v18 + 24) = Component_object,
        v35 = (CGThumbnailListItem_o *)(v18 + 24),
        LOBYTE(Component_object->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
    || (UnityEngine_BoxCollider_c *)Component_object->klass->_2.typeHierarchy[methodPtr_low - 1] != v33 )
  {
    sub_1BC3524(Component_object);
LABEL_22:
    *(_QWORD *)(v18 + 24) = 0LL;
    v35 = (CGThumbnailListItem_o *)(v18 + 24);
  }
  sub_1BC2FAC(v35, v32, v30, v31);
  resultPanel = (UnityEngine_GameObject_o *)v35->klass;
  if ( !v35->klass )
    goto LABEL_27;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)resultPanel, 1, 0LL);
  v36 = UnityEngine_GameObject__GetComponent_object_(
          v27,
          (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_EventPointVsResultAction___);
  *(_QWORD *)(v18 + 16) = v36;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v18 + 16), (int32_t)v36, v37, v38);
  evPointEnt = this->fields.evPointEnt;
  if ( !evPointEnt )
    goto LABEL_27;
  v40 = *(EventPointVsResultAction_o **)(v18 + 16);
  id = evPointEnt->fields.id;
  v42 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(
    v42,
    (Il2CppObject *)v18,
    Method_TitleInfoEventLeagueVsComponent___c__DisplayClass36_0__ResultEffect_b__0__,
    0LL);
  if ( !v40 )
    goto LABEL_27;
  EventPointVsResultAction__Setup(v40, winType, id, v42, 0LL);
}


void __fastcall TitleInfoEventLeagueVsComponent__Setup(
        TitleInfoEventLeagueVsComponent_o *this,
        EventPointEntity_o *eventPointEntity,
        int32_t eventId,
        AssetData_o *effectAssetData,
        bool isDispRestTime,
        const MethodInfo *method)
{
  AssetData_o *v7; // x26
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  TerminalPramsManager_c *v32; // x0
  __int64 maskFade; // x0
  Il2CppObject *MasterData_object; // x24
  Il2CppObject *v35; // x25
  __int64 v36; // x2
  struct System_Int32_array *v37; // x8
  unsigned __int64 v38; // x21
  int64_t v39; // x22
  unsigned __int64 max_length; // x9
  struct System_Int32_array *group1; // x8
  struct System_Int32_array *group2; // x8
  int64_t v43; // x24
  struct UISlider_array *hpBarSlider; // x8
  struct UISlider_array *v45; // x8
  float v46; // s0
  struct UISlider_array *v47; // x8
  int64_t normaTotalPoint; // x21
  double v49; // d8
  float v50; // s0
  struct UISlider_array *v51; // x8
  float v52; // s0
  __int64 v53; // x3
  __int64 v54; // x4
  struct UISprite_array *v55; // x8
  struct System_Int32_array *v56; // x9
  UISprite_o *v57; // x24
  Il2CppObject *v58; // x0
  System_String_o *v59; // x26
  __int64 v60; // x3
  __int64 v61; // x4
  struct UISprite_array *v62; // x8
  struct System_Int32_array *v63; // x9
  UISprite_o *v64; // x24
  __int64 v65; // x3
  __int64 v66; // x4
  struct System_Int32_array *v67; // x8
  Il2CppObject *v68; // x26
  Il2CppObject *v69; // x0
  System_String_o *v70; // x0
  struct System_Int32_array *v71; // x8
  __int64 v72; // x3
  __int64 v73; // x4
  struct System_Int32_array *v74; // x8
  __int64 v75; // x27
  unsigned __int64 v76; // x24
  Il2CppObject *v77; // x26
  unsigned __int64 v78; // x9
  __int64 v79; // x2
  __int64 v80; // x3
  __int64 v81; // x4
  Il2CppObject *v82; // x0
  struct UISprite_array *v83; // x8
  UISprite_o *v84; // x23
  Il2CppObject *v85; // x0
  System_String_o *v86; // x25
  struct UISprite_array *v87; // x8
  UISprite_o *v88; // x23
  System_String_o *v89; // x0
  struct UISlider_array *v90; // x8
  double v91; // d8
  float v92; // s0
  struct UISlider_array *v93; // x8
  __int64 v94; // x3
  __int64 v95; // x4
  struct UISprite_array *hpBar; // x8
  struct System_Int32_array *v97; // x9
  UISprite_o *v98; // x23
  Il2CppObject *v99; // x0
  System_String_o *v100; // x25
  __int64 v101; // x3
  __int64 v102; // x4
  struct UISprite_array *v103; // x8
  struct System_Int32_array *v104; // x9
  UISprite_o *v105; // x23
  Il2CppObject *v106; // x0
  System_String_o *v107; // x0
  __int64 v108; // x3
  __int64 v109; // x4
  struct UISprite_array *groupIcon; // x8
  struct System_Int32_array *v111; // x9
  UISprite_o *v112; // x23
  Il2CppObject *v113; // x0
  System_String_o *v114; // x0
  __int64 v115; // x3
  __int64 v116; // x4
  struct UISprite_array *v117; // x8
  struct System_Int32_array *v118; // x9
  UISprite_o *v119; // x23
  Il2CppObject *v120; // x0
  System_String_o *v121; // x0
  UnityEngine_Object_o *Object_39549504; // x21
  Il2CppObject *v123; // x0
  UnityEngine_GameObject_o *v124; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x21
  const MethodInfo *v127; // x4
  UISprite_o *maskSp; // x21
  const MethodInfo *v129; // x1
  UISprite_o *modeName; // x21
  __int64 v131; // x2
  __int64 v132; // x3
  __int64 v133; // x4
  Il2CppObject *v134; // x0
  System_String_o *v135; // x0
  struct UISprite_array *splitIcon; // x8
  unsigned __int64 v137; // x21
  unsigned __int64 v138; // x9
  UISprite_o *v139; // x20
  UnityEngine_GameObject_o *v140; // x0
  UnityEngine_GameObject_o *v141; // x0
  AssetData_o *v142; // [xsp+10h] [xbp-80h]
  int32_t v143; // [xsp+18h] [xbp-78h] BYREF
  int32_t v144; // [xsp+1Ch] [xbp-74h] BYREF
  int32_t v145; // [xsp+28h] [xbp-68h] BYREF
  int32_t id; // [xsp+2Ch] [xbp-64h] BYREF

  v7 = effectAssetData;
  if ( (byte_4B0038F & 1) == 0 )
  {
    sub_1BC3008(&AtlasManager_TypeInfo, eventPointEntity);
    sub_1BC3008(&Method_DataManager_GetMasterData_EventPointGroupMaster___, v11);
    sub_1BC3008(&Method_DataManager_GetMasterData_TotalEventPointMaster___, v12);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_TitleInfoEventLeagueVsGaugeEffect___, v13);
    sub_1BC3008(&UnityEngine_GameObject_TypeInfo, v14);
    sub_1BC3008(&int_TypeInfo, v15);
    sub_1BC3008(&Method_UnityEngine_Object_Instantiate_GameObject___, v16);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v17);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_1BC3008(&TerminalPramsManager_TypeInfo, v19);
    sub_1BC3008(&StringLiteral_19121/*"event_vs_gauge_title_"*/, v20);
    sub_1BC3008(&StringLiteral_19118/*"event_vs_frame"*/, v21);
    sub_1BC3008(&StringLiteral_19117/*"event_vs_back"*/, v22);
    sub_1BC3008(&StringLiteral_24575/*"white00"*/, v23);
    sub_1BC3008(&StringLiteral_19120/*"event_vs_gauge_bg"*/, v24);
    sub_1BC3008(&StringLiteral_17136/*"bit_vs_gauge_part"*/, v25);
    sub_1BC3008(&StringLiteral_19122/*"event_vs_split_line"*/, v26);
    sub_1BC3008(&StringLiteral_17837/*"clear00"*/, v27);
    sub_1BC3008(&StringLiteral_19126/*"event_vs_team_icon_"*/, v28);
    sub_1BC3008(&StringLiteral_1/*""*/, v29);
    sub_1BC3008(&StringLiteral_19119/*"event_vs_gauge_"*/, v30);
    byte_4B0038F = 1;
  }
  if ( !eventPointEntity )
    return;
  this->fields.evPointEnt = eventPointEntity;
  sub_1BC2FAC(
    (CGThumbnailListItem_o *)&this->fields.evPointEnt,
    (int32_t)eventPointEntity,
    eventId,
    (const MethodInfo *)effectAssetData);
  this->fields.isDispRestTime = isDispRestTime;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4AFF4E2 )
  {
    sub_1BC3008(&TerminalPramsManager_TypeInfo, v31);
    byte_4AFF4E2 = 1;
  }
  v32 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v32 = TerminalPramsManager_TypeInfo;
  }
  if ( v32->static_fields->_eventPointWinType_k__BackingField )
  {
    maskFade = (__int64)this->fields.maskFade;
    if ( !maskFade )
      goto LABEL_120;
    MaskFade__Fadeout((MaskFade_o *)maskFade, 1, 0.0, 0LL, 0LL);
  }
  maskFade = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !maskFade )
    goto LABEL_120;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)maskFade,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_TotalEventPointMaster___);
  maskFade = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !maskFade )
    goto LABEL_120;
  v35 = DataManager__GetMasterData_object_(
          (DataManager_o *)maskFade,
          (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_EventPointGroupMaster___);
  maskFade = EventPointEntity__isBossBattle(eventPointEntity, 0LL);
  if ( (maskFade & 1) == 0 )
  {
    group1 = eventPointEntity->fields.group1;
    if ( !group1 )
      goto LABEL_120;
    if ( group1->max_length )
    {
      if ( !MasterData_object )
        goto LABEL_120;
      maskFade = TotalEventPointMaster__GetPoint(
                   (TotalEventPointMaster_o *)MasterData_object,
                   eventId,
                   eventPointEntity->fields.id,
                   group1->m_Items[1],
                   0LL);
      group2 = eventPointEntity->fields.group2;
      if ( !group2 )
        goto LABEL_120;
      if ( group2->max_length )
      {
        v39 = maskFade;
        maskFade = TotalEventPointMaster__GetPoint(
                     (TotalEventPointMaster_o *)MasterData_object,
                     eventId,
                     eventPointEntity->fields.id,
                     group2->m_Items[1],
                     0LL);
        v43 = maskFade;
        if ( v39 == maskFade )
        {
          hpBarSlider = this->fields.hpBarSlider;
          if ( !hpBarSlider )
            goto LABEL_120;
          if ( !hpBarSlider->max_length )
            goto LABEL_123;
          maskFade = (__int64)hpBarSlider->m_Items[0];
          if ( !maskFade )
            goto LABEL_120;
          UIProgressBar__set_value((UIProgressBar_o *)maskFade, 0.5, 0LL);
          v45 = this->fields.hpBarSlider;
          if ( !v45 )
            goto LABEL_120;
          if ( v45->max_length <= 1 )
            goto LABEL_123;
          maskFade = (__int64)v45->m_Items[1];
          if ( !maskFade )
            goto LABEL_120;
          v46 = 0.5;
        }
        else
        {
          v90 = this->fields.hpBarSlider;
          if ( !v90 )
            goto LABEL_120;
          if ( !v90->max_length )
            goto LABEL_123;
          maskFade = (__int64)v90->m_Items[0];
          if ( !maskFade )
            goto LABEL_120;
          v91 = (double)v39 / (double)(v43 + v39);
          v92 = 1.0 - v91;
          UIProgressBar__set_value((UIProgressBar_o *)maskFade, v92, 0LL);
          v93 = this->fields.hpBarSlider;
          if ( !v93 )
            goto LABEL_120;
          if ( v93->max_length <= 1 )
            goto LABEL_123;
          maskFade = (__int64)v93->m_Items[1];
          if ( !maskFade )
            goto LABEL_120;
          v46 = v91;
        }
        UIProgressBar__set_value((UIProgressBar_o *)maskFade, v46, 0LL);
        hpBar = this->fields.hpBar;
        if ( !hpBar )
          goto LABEL_120;
        if ( hpBar->max_length )
        {
          v97 = eventPointEntity->fields.group2;
          if ( !v97 )
            goto LABEL_120;
          if ( v97->max_length )
          {
            v98 = hpBar->m_Items[0];
            id = v97->m_Items[1];
            v99 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id, v36, v94, v95);
            v100 = System_String__Concat((Il2CppObject *)StringLiteral_19119/*"event_vs_gauge_"*/, v99, 0LL);
            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
            maskFade = AtlasManager__SetEventUI(v98, v100, 0LL);
            v103 = this->fields.hpBar;
            if ( !v103 )
              goto LABEL_120;
            if ( v103->max_length > 1 )
            {
              v104 = eventPointEntity->fields.group1;
              if ( !v104 )
                goto LABEL_120;
              if ( v104->max_length )
              {
                v105 = v103->m_Items[1];
                v145 = v104->m_Items[1];
                v106 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v145, v36, v101, v102);
                v107 = System_String__Concat((Il2CppObject *)StringLiteral_19119/*"event_vs_gauge_"*/, v106, 0LL);
                maskFade = AtlasManager__SetEventUI(v105, v107, 0LL);
                groupIcon = this->fields.groupIcon;
                if ( !groupIcon )
                  goto LABEL_120;
                if ( groupIcon->max_length )
                {
                  v111 = eventPointEntity->fields.group2;
                  if ( !v111 )
                    goto LABEL_120;
                  if ( v111->max_length )
                  {
                    v112 = groupIcon->m_Items[0];
                    v144 = v111->m_Items[1];
                    v113 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v144, v36, v108, v109);
                    v114 = System_String__Concat((Il2CppObject *)StringLiteral_19126/*"event_vs_team_icon_"*/, v113, 0LL);
                    maskFade = AtlasManager__SetEventUI(v112, v114, 0LL);
                    v117 = this->fields.groupIcon;
                    if ( !v117 )
                      goto LABEL_120;
                    if ( v117->max_length > 1 )
                    {
                      v118 = eventPointEntity->fields.group1;
                      if ( !v118 )
                        goto LABEL_120;
                      if ( v118->max_length )
                      {
                        v119 = v117->m_Items[1];
                        v143 = v118->m_Items[1];
                        v120 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v143, v36, v115, v116);
                        v121 = System_String__Concat((Il2CppObject *)StringLiteral_19126/*"event_vs_team_icon_"*/, v120, 0LL);
                        maskFade = AtlasManager__SetEventUI(v119, v121, 0LL);
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
    sub_1BC326C(maskFade, v31, v36);
  }
  v37 = eventPointEntity->fields.group1;
  if ( !v37 )
    goto LABEL_120;
  v38 = 0LL;
  v39 = 0LL;
  while ( 1 )
  {
    max_length = v37->max_length;
    if ( (__int64)v38 >= (int)max_length )
      break;
    if ( v38 >= max_length )
      goto LABEL_123;
    if ( MasterData_object )
    {
      maskFade = TotalEventPointMaster__GetPoint(
                   (TotalEventPointMaster_o *)MasterData_object,
                   eventId,
                   eventPointEntity->fields.id,
                   v37->m_Items[v38 + 1],
                   0LL);
      v37 = eventPointEntity->fields.group1;
      v39 += maskFade;
      ++v38;
      if ( v37 )
        continue;
    }
    goto LABEL_120;
  }
  v47 = this->fields.hpBarSlider;
  if ( !v47 )
    goto LABEL_120;
  if ( !v47->max_length )
    goto LABEL_123;
  maskFade = (__int64)v47->m_Items[0];
  if ( !maskFade )
    goto LABEL_120;
  normaTotalPoint = eventPointEntity->fields.normaTotalPoint;
  v49 = (double)v39 / (double)normaTotalPoint;
  v50 = 1.0 - v49;
  UIProgressBar__set_value((UIProgressBar_o *)maskFade, v50, 0LL);
  v51 = this->fields.hpBarSlider;
  if ( !v51 )
    goto LABEL_120;
  if ( v51->max_length <= 1 )
    goto LABEL_123;
  maskFade = (__int64)v51->m_Items[1];
  if ( !maskFade )
    goto LABEL_120;
  v52 = v49;
  UIProgressBar__set_value((UIProgressBar_o *)maskFade, v52, 0LL);
  v55 = this->fields.hpBar;
  if ( !v55 )
    goto LABEL_120;
  if ( !v55->max_length )
    goto LABEL_123;
  v56 = eventPointEntity->fields.group2;
  if ( !v56 )
    goto LABEL_120;
  v142 = v7;
  if ( !v56->max_length )
    goto LABEL_123;
  v57 = v55->m_Items[0];
  id = v56->m_Items[1];
  v58 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id, v36, v53, v54);
  v59 = System_String__Concat((Il2CppObject *)StringLiteral_19119/*"event_vs_gauge_"*/, v58, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  maskFade = AtlasManager__SetEventUI(v57, v59, 0LL);
  v62 = this->fields.hpBar;
  if ( !v62 )
    goto LABEL_120;
  if ( v62->max_length <= 1 )
    goto LABEL_123;
  v63 = eventPointEntity->fields.group1;
  if ( !v63 )
    goto LABEL_120;
  if ( !v63->max_length )
    goto LABEL_123;
  v64 = v62->m_Items[1];
  v145 = v63->m_Items[1];
  maskFade = j_il2cpp_value_box_0(int_TypeInfo, &v145, v36, v60, v61);
  v67 = eventPointEntity->fields.group1;
  if ( !v67 )
    goto LABEL_120;
  if ( v67->max_length <= 1 )
    goto LABEL_123;
  v68 = (Il2CppObject *)maskFade;
  v144 = v67->m_Items[2];
  v69 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v144, v36, v65, v66);
  v70 = System_String__Concat_62386648((Il2CppObject *)StringLiteral_19119/*"event_vs_gauge_"*/, v68, v69, 0LL);
  maskFade = AtlasManager__SetEventUI(v64, v70, 0LL);
  v71 = eventPointEntity->fields.group2;
  if ( !v71 )
    goto LABEL_120;
  if ( !v71->max_length )
    goto LABEL_123;
  if ( !v35 )
    goto LABEL_120;
  maskFade = (__int64)EventPointGroupMaster__getEntity((EventPointGroupMaster_o *)v35, eventId, v71->m_Items[1], 0LL);
  v74 = eventPointEntity->fields.group1;
  if ( !v74 )
    goto LABEL_120;
  v75 = maskFade;
  v76 = 0LL;
  v77 = (Il2CppObject *)StringLiteral_1/*""*/;
  while ( 1 )
  {
    v78 = v74->max_length;
    if ( (__int64)v76 >= (int)v78 )
      break;
    if ( v76 >= v78 )
      goto LABEL_123;
    maskFade = (__int64)EventPointGroupMaster__getEntity(
                          (EventPointGroupMaster_o *)v35,
                          eventId,
                          v74->m_Items[v76 + 1],
                          0LL);
    if ( maskFade )
    {
      id = *(_DWORD *)(maskFade + 32);
      v82 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id, v79, v80, v81);
      maskFade = (__int64)System_String__Concat(v77, v82, 0LL);
      v74 = eventPointEntity->fields.group1;
      v77 = (Il2CppObject *)maskFade;
      ++v76;
      if ( v74 )
        continue;
    }
    goto LABEL_120;
  }
  v83 = this->fields.groupIcon;
  if ( !v83 )
    goto LABEL_120;
  if ( !v83->max_length )
    goto LABEL_123;
  if ( !v75 )
    goto LABEL_120;
  v84 = v83->m_Items[0];
  id = *(_DWORD *)(v75 + 32);
  v85 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id, v36, v72, v73);
  v86 = System_String__Concat((Il2CppObject *)StringLiteral_19126/*"event_vs_team_icon_"*/, v85, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  maskFade = AtlasManager__SetEventUI(v84, v86, 0LL);
  v87 = this->fields.groupIcon;
  v43 = normaTotalPoint - v39;
  if ( !v87 )
LABEL_120:
    sub_1BC3264(maskFade, v31);
  if ( v87->max_length <= 1 )
    goto LABEL_123;
  v88 = v87->m_Items[1];
  v89 = System_String__Concat_62348648((System_String_o *)StringLiteral_19126/*"event_vs_team_icon_"*/, (System_String_o *)v77, 0LL);
  maskFade = AtlasManager__SetEventUI(v88, v89, 0LL);
  v7 = v142;
LABEL_98:
  if ( !v7 )
    goto LABEL_120;
  Object_39549504 = AssetData__GetObject_39549504(v7, (System_String_o *)StringLiteral_17136/*"bit_vs_gauge_part"*/, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( Object_39549504 )
    v123 = (UnityEngine_GameObject_c *)Object_39549504->klass == UnityEngine_GameObject_TypeInfo
         ? (Il2CppObject *)Object_39549504
         : 0LL;
  else
    v123 = 0LL;
  maskFade = (__int64)UnityEngine_Object__Instantiate_object_(
                        v123,
                        (const MethodInfo_308AE24 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !maskFade )
    goto LABEL_120;
  v124 = (UnityEngine_GameObject_o *)maskFade;
  gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)maskFade, 0LL);
  GameObjectExtensions__SafeSetParent_35217712(gameObject, this->fields.gaugeEffectPanel, 0LL);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v124,
                       (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventLeagueVsGaugeEffect___);
  maskFade = EventPointEntity__isBossBattle(eventPointEntity, 0LL);
  if ( !Component_object )
    goto LABEL_120;
  TitleInfoEventLeagueVsGaugeEffect__setup(
    (TitleInfoEventLeagueVsGaugeEffect_o *)Component_object,
    v39,
    v43,
    maskFade & 1,
    v127);
  maskSp = this->fields.maskSp;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetCommon(maskSp, 0LL);
  AtlasManager__SetCommon(this->fields.colliderSp, 0LL);
  maskFade = (__int64)this->fields.maskSp;
  if ( !maskFade )
    goto LABEL_120;
  UISprite__set_spriteName((UISprite_o *)maskFade, (System_String_o *)StringLiteral_24575/*"white00"*/, 0LL);
  maskFade = (__int64)this->fields.colliderSp;
  if ( !maskFade )
    goto LABEL_120;
  UISprite__set_spriteName((UISprite_o *)maskFade, (System_String_o *)StringLiteral_17837/*"clear00"*/, 0LL);
  this->fields.endTime = eventPointEntity->fields.endedAt;
  TitleInfoEventLeagueVsComponent__restTimeUpdate(this, v129);
  AtlasManager__SetEventUI(this->fields.baseWindow, (System_String_o *)StringLiteral_19120/*"event_vs_gauge_bg"*/, 0LL);
  AtlasManager__SetEventUI(this->fields.hpFrame, (System_String_o *)StringLiteral_19118/*"event_vs_frame"*/, 0LL);
  AtlasManager__SetEventUI(this->fields.hpBack, (System_String_o *)StringLiteral_19117/*"event_vs_back"*/, 0LL);
  modeName = this->fields.modeName;
  id = eventPointEntity->fields.id;
  v134 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id, v131, v132, v133);
  v135 = System_String__Concat((Il2CppObject *)StringLiteral_19121/*"event_vs_gauge_title_"*/, v134, 0LL);
  AtlasManager__SetEventUI(modeName, v135, 0LL);
  maskFade = (__int64)this->fields.modeName;
  if ( !maskFade )
    goto LABEL_120;
  maskFade = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)maskFade + 840LL))(
               maskFade,
               *(_QWORD *)(*(_QWORD *)maskFade + 848LL));
  splitIcon = this->fields.splitIcon;
  if ( !splitIcon )
    goto LABEL_120;
  v137 = 0LL;
  while ( 1 )
  {
    v138 = splitIcon->max_length;
    if ( (__int64)v137 >= (int)v138 )
      break;
    if ( v137 >= v138 )
      goto LABEL_123;
    v139 = splitIcon->m_Items[v137];
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    maskFade = AtlasManager__SetEventUI(v139, (System_String_o *)StringLiteral_19122/*"event_vs_split_line"*/, 0LL);
    splitIcon = this->fields.splitIcon;
    ++v137;
    if ( !splitIcon )
      goto LABEL_120;
  }
  v140 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPositionY(v140, -2.0, 0LL);
  v141 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  this->fields.originPos = GameObjectExtensions__GetLocalPosition(v141, 0LL);
}


// attributes: thunk
void __fastcall TitleInfoEventLeagueVsComponent__Update(
        TitleInfoEventLeagueVsComponent_o *this,
        const MethodInfo *method)
{
  TitleInfoEventLeagueVsComponent__restTimeUpdate(this, method);
}


void __fastcall TitleInfoEventLeagueVsComponent__UpdateDisp(
        TitleInfoEventLeagueVsComponent_o *this,
        const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventLeagueVsComponent__gaugeEvent(
        TitleInfoEventLeagueVsComponent_o *this,
        int32_t groupId,
        int32_t eventId,
        AssetData_o *effectAssetData,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  EventPointEntity_o *evPointEnt; // x0
  DataManager_o *Instance; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  struct EventPointEntity_o *v21; // x8
  struct System_Int32_array *group1; // x9
  TotalEventPointMaster_o *v23; // x25
  struct EventPointEntity_o *v24; // x8
  struct System_Int32_array *group2; // x9
  int64_t v26; // x24
  int64_t v27; // x23
  UnityEngine_Object_o *Object_39549504; // x0
  UnityEngine_GameObject_c **v29; // x22
  Il2CppObject *v30; // x0
  UnityEngine_GameObject_o *v31; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v33; // x5

  if ( (byte_4B00393 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_TotalEventPointMaster___, *(_QWORD *)&groupId);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_TitleInfoEventLeagueVsGaugeFlashEffect___, v11);
    sub_1BC3008(&UnityEngine_GameObject_TypeInfo, v12);
    sub_1BC3008(&Method_UnityEngine_Object_Instantiate_GameObject___, v13);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v14);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1BC3008(&StringLiteral_17134/*"bit_vs_gauge_flash"*/, v16);
    byte_4B00393 = 1;
  }
  evPointEnt = this->fields.evPointEnt;
  if ( evPointEnt )
  {
    if ( EventPointEntity__isBossBattle(evPointEnt, 0LL) )
    {
      ActionExtensions__Call(callback, 0LL);
      return;
    }
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_26;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_TotalEventPointMaster___);
    v21 = this->fields.evPointEnt;
    if ( !v21 )
      goto LABEL_26;
    group1 = v21->fields.group1;
    if ( !group1 )
      goto LABEL_26;
    if ( !group1->max_length )
      goto LABEL_27;
    v23 = (TotalEventPointMaster_o *)Instance;
    if ( !Instance )
      goto LABEL_26;
    Instance = (DataManager_o *)TotalEventPointMaster__GetPoint(
                                  (TotalEventPointMaster_o *)Instance,
                                  eventId,
                                  v21->fields.id,
                                  group1->m_Items[1],
                                  0LL);
    v24 = this->fields.evPointEnt;
    if ( !v24 )
      goto LABEL_26;
    group2 = v24->fields.group2;
    if ( !group2 )
      goto LABEL_26;
    if ( !group2->max_length )
LABEL_27:
      sub_1BC326C(Instance, v19, v20);
    v26 = (int64_t)Instance;
    Instance = (DataManager_o *)TotalEventPointMaster__GetPoint(v23, eventId, v24->fields.id, group2->m_Items[1], 0LL);
    if ( !effectAssetData )
      goto LABEL_26;
    v27 = (int64_t)Instance;
    Object_39549504 = AssetData__GetObject_39549504(effectAssetData, (System_String_o *)StringLiteral_17134/*"bit_vs_gauge_flash"*/, 0LL);
    v29 = (UnityEngine_GameObject_c **)Object_39549504;
    if ( UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      if ( Object_39549504 )
        goto LABEL_18;
    }
    else
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( v29 )
      {
LABEL_18:
        if ( *v29 == UnityEngine_GameObject_TypeInfo )
          v30 = (Il2CppObject *)v29;
        else
          v30 = 0LL;
LABEL_23:
        Instance = (DataManager_o *)UnityEngine_Object__Instantiate_object_(
                                      v30,
                                      (const MethodInfo_308AE24 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( Instance )
        {
          v31 = (UnityEngine_GameObject_o *)Instance;
          gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)Instance, 0LL);
          GameObjectExtensions__SafeSetParent_35217712(gameObject, this->fields.gaugeEffectPanel, 0LL);
          Instance = (DataManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                        v31,
                                        (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventLeagueVsGaugeFlashEffect___);
          if ( Instance )
          {
            TitleInfoEventLeagueVsGaugeFlashEffect__setup(
              (TitleInfoEventLeagueVsGaugeFlashEffect_o *)Instance,
              groupId,
              v26,
              v27,
              callback,
              v33);
            return;
          }
        }
LABEL_26:
        sub_1BC3264(Instance, v19);
      }
    }
    v30 = 0LL;
    goto LABEL_23;
  }
}


EventPointEntity_o *__fastcall TitleInfoEventLeagueVsComponent__getEventPointEntity(
        TitleInfoEventLeagueVsComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.evPointEnt;
}


void __fastcall TitleInfoEventLeagueVsComponent__restTimeUpdate(
        TitleInfoEventLeagueVsComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Behaviour_o *restTimeLabel; // x0
  UILabel_o *v7; // x20
  System_String_o *v8; // x0
  int64_t endTime; // x8
  System_String_o *v10; // x19
  Il2CppObject *RestTime3; // x0

  if ( (byte_4B00390 & 1) == 0 )
  {
    sub_1BC3008(&LocalizationManager_TypeInfo, method);
    sub_1BC3008(&NetworkManager_TypeInfo, v3);
    sub_1BC3008(&StringLiteral_5692/*"EVENT_VS_GAUGE_REST_TIME"*/, v4);
    byte_4B00390 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( this->fields.endTime - NetworkManager__getTime(0LL) >= 1 && this->fields.isDispRestTime )
  {
    restTimeLabel = (UnityEngine_Behaviour_o *)this->fields.restTimeLabel;
    if ( restTimeLabel )
    {
      UnityEngine_Behaviour__set_enabled(restTimeLabel, 1, 0LL);
      v7 = this->fields.restTimeLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v8 = LocalizationManager__Get((System_String_o *)StringLiteral_5692/*"EVENT_VS_GAUGE_REST_TIME"*/, 0LL);
      endTime = this->fields.endTime;
      v10 = v8;
      RestTime3 = (Il2CppObject *)LocalizationManager__GetRestTime3(endTime, 0LL);
      restTimeLabel = (UnityEngine_Behaviour_o *)System_String__Format(v10, RestTime3, 0LL);
      if ( v7 )
      {
        UILabel__set_text(v7, (System_String_o *)restTimeLabel, 0LL);
        return;
      }
    }
LABEL_14:
    sub_1BC3264(restTimeLabel, v5);
  }
  restTimeLabel = (UnityEngine_Behaviour_o *)this->fields.restTimeLabel;
  if ( !restTimeLabel )
    goto LABEL_14;
  UnityEngine_Behaviour__set_enabled(restTimeLabel, 0, 0LL);
}


void __fastcall TitleInfoEventLeagueVsComponent___c__DisplayClass36_0___ctor(
        TitleInfoEventLeagueVsComponent___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TitleInfoEventLeagueVsComponent___c__DisplayClass36_0___ResultEffect_b__0(
        TitleInfoEventLeagueVsComponent___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  TitleInfoEventLeagueVsComponent___c__DisplayClass36_0_o *v2; // x19
  __int64 v3; // x1
  System_Action_o *_9__1; // x21
  EventPointVsResultAction_o *effect; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  struct TitleInfoEventLeagueVsComponent_o *_4__this; // x8

  v2 = this;
  if ( (byte_4B00397 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, method);
    this = (TitleInfoEventLeagueVsComponent___c__DisplayClass36_0_o *)sub_1BC3008(
                                                                        &Method_TitleInfoEventLeagueVsComponent___c__DisplayClass36_0__ResultEffect_b__1__,
                                                                        v3);
    byte_4B00397 = 1;
  }
  _9__1 = v2->fields.__9__1;
  effect = v2->fields.effect;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v2,
      Method_TitleInfoEventLeagueVsComponent___c__DisplayClass36_0__ResultEffect_b__1__,
      0LL);
    v2->fields.__9__1 = _9__1;
    sub_1BC2FAC((CGThumbnailListItem_o *)&v2->fields.__9__1, (int32_t)_9__1, v6, v7);
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this || !effect )
    sub_1BC3264(this, method);
  EventPointVsResultAction__Play(effect, _9__1, _4__this->fields.maskFade, 0.0, 0LL);
}


void __fastcall TitleInfoEventLeagueVsComponent___c__DisplayClass36_0___ResultEffect_b__1(
        TitleInfoEventLeagueVsComponent___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *effect; // x0
  UnityEngine_Object_o *gameObject; // x20
  struct TitleInfoEventLeagueVsComponent_o *_4__this; // x8
  MaskFade_o *maskFade; // x20

  if ( (byte_4B00398 & 1) == 0 )
  {
    sub_1BC3008(&AvalonSceneManager_TypeInfo, method);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v3);
    byte_4B00398 = 1;
  }
  effect = (UnityEngine_Component_o *)this->fields.effect;
  if ( !effect )
    goto LABEL_12;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(effect, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_70034300(gameObject, 0LL);
  effect = (UnityEngine_Component_o *)this->fields.coll;
  if ( !effect )
    goto LABEL_12;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)effect, 0, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  maskFade = _4__this->fields.maskFade;
  effect = (UnityEngine_Component_o *)AvalonSceneManager_TypeInfo;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !maskFade )
LABEL_12:
    sub_1BC3264(effect, method);
  MaskFade__Fadein(maskFade, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, this->fields.callback, 0LL);
}