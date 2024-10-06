void __fastcall TitleInfoEventLeagueVsComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct TitleInfoEventLeagueVsComponent_StaticFields *static_fields; // x8

  if ( (byte_4A6DD15 & 1) == 0 )
  {
    sub_1B90010(&TitleInfoEventLeagueVsComponent_TypeInfo, v1);
    byte_4A6DD15 = 1;
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
  int32_t v18; // w3
  int32_t v19; // w1
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t v22; // w2
  int32_t v23; // w3

  if ( (byte_4A6DD10 & 1) == 0 )
  {
    sub_1B90010(&TitleInfoEventLeagueVsComponent_TypeInfo, callback);
    sub_1B90010(&Method_UITweener_Begin_TweenPosition___, v5);
    sub_1B90010(&StringLiteral_6830/*"FrameInFinish"*/, v6);
    byte_4A6DD10 = 1;
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
            (const MethodInfo_2F408E0 *)Method_UITweener_Begin_TweenPosition___);
    if ( !v10 )
      sub_1B9026C(0LL, v11);
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
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v13[5], (int32_t)v16, v17, v18);
    v19 = StringLiteral_6830/*"FrameInFinish"*/;
    v13[5].monitor = (void *)StringLiteral_6830/*"FrameInFinish"*/;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v13[5].monitor, v19, v20, v21);
    this->fields.frameInCallBack = callback;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.frameInCallBack, (int32_t)callback, v22, v23);
  }
}


void __fastcall TitleInfoEventLeagueVsComponent__FrameInFinish(
        TitleInfoEventLeagueVsComponent_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  ServantStatusBattleListViewItem_o *p_frameInCallBack; // x0
  System_Action_o *v5; // x19
  struct System_Action_o *frameInCallBack; // t1

  frameInCallBack = this->fields.frameInCallBack;
  p_frameInCallBack = (ServantStatusBattleListViewItem_o *)&this->fields.frameInCallBack;
  v5 = frameInCallBack;
  p_frameInCallBack->klass = 0LL;
  sub_1B8FFB4(p_frameInCallBack, 0, v2, v3);
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
  int32_t v15; // w3
  int32_t v16; // w1
  int32_t v17; // w2
  int32_t v18; // w3
  Il2CppClass *v19; // [xsp+0h] [xbp-40h]

  if ( (byte_4A6DD11 & 1) == 0 )
  {
    sub_1B90010(&TitleInfoEventLeagueVsComponent_TypeInfo, method);
    sub_1B90010(&Method_UITweener_Begin_TweenPosition___, v3);
    sub_1B90010(&StringLiteral_6832/*"FrameOutFinish"*/, v4);
    byte_4A6DD11 = 1;
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
         (const MethodInfo_2F408E0 *)Method_UITweener_Begin_TweenPosition___);
  v19 = *(Il2CppClass **)&this->fields.originPos.fields.x;
  if ( !v8 )
    sub_1B9026C(0LL, v9);
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
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v10[5], (int32_t)v13, v14, v15);
  v16 = StringLiteral_6832/*"FrameOutFinish"*/;
  v10[5].monitor = (void *)StringLiteral_6832/*"FrameOutFinish"*/;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v10[5].monitor, v16, v17, v18);
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
  int max_length; // w8
  System_String_o *v24; // x22
  int v25; // w23
  System_String_o *v26; // x0
  System_String_o *v27; // x0
  System_String_o *countText; // [xsp+30h] [xbp-50h] BYREF
  System_String_o *nameText; // [xsp+38h] [xbp-48h] BYREF

  if ( (byte_4A6DD14 & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMasterData_GiftMaster___, evPointEnt);
    sub_1B90010(&LocalizationManager_TypeInfo, v8);
    sub_1B90010(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_1B90010(&StringLiteral_5662/*"EVENT_POINT_VS_WIN_DIALOG_TITLE"*/, v11);
    sub_1B90010(&StringLiteral_5661/*"EVENT_POINT_VS_WIN_DIALOG_GROUP"*/, v12);
    sub_1B90010(&StringLiteral_5660/*"EVENT_POINT_VS_WIN_DIALOG_GET"*/, v13);
    byte_4A6DD14 = 1;
  }
  countText = 0LL;
  nameText = 0LL;
  if ( evPointEnt )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_21;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_GiftMaster___);
    if ( !rewardInfo || !Instance )
      goto LABEL_21;
    GiftListById = GiftMaster__GetGiftListById((GiftMaster_o *)Instance, rewardInfo->fields.giftId, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v17 = LocalizationManager__Get((System_String_o *)StringLiteral_5662/*"EVENT_POINT_VS_WIN_DIALOG_TITLE"*/, 0LL);
    v18 = System_String__Format(v17, (Il2CppObject *)evPointEnt->fields.name, 0LL);
    v19 = LocalizationManager__Get((System_String_o *)StringLiteral_5661/*"EVENT_POINT_VS_WIN_DIALOG_GROUP"*/, 0LL);
    winGroup1 = rewardInfo->fields.winGroup1;
    v21 = v19;
    WinGroupName = (Il2CppObject *)EventPointEntity__GetWinGroupName(evPointEnt, winGroup1, 0LL);
    Instance = (DataManager_o *)System_String__Format(v21, WinGroupName, 0LL);
    if ( !GiftListById )
      goto LABEL_21;
    max_length = GiftListById->max_length;
    v24 = (System_String_o *)Instance;
    if ( max_length >= 1 )
    {
      v25 = 0;
      while ( 1 )
      {
        if ( v25 >= (unsigned int)max_length )
          sub_1B90274(Instance, v15);
        Instance = (DataManager_o *)GiftListById->m_Items[v25];
        if ( !Instance )
          break;
        GiftEntity__GetInfo((GiftEntity_o *)Instance, &nameText, &countText, 0LL);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v26 = LocalizationManager__Get((System_String_o *)StringLiteral_5660/*"EVENT_POINT_VS_WIN_DIALOG_GET"*/, 0LL);
        v27 = System_String__Format_61801464(v26, (Il2CppObject *)nameText, (Il2CppObject *)countText, 0LL);
        Instance = (DataManager_o *)System_String__Concat_61787092(v24, v27, 0LL);
        max_length = GiftListById->max_length;
        ++v25;
        v24 = (System_String_o *)Instance;
        if ( v25 >= max_length )
          goto LABEL_17;
      }
LABEL_21:
      sub_1B9026C(Instance, v15);
    }
LABEL_17:
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_21;
    CommonUI__OpenNotificationDialog((CommonUI_o *)Instance, v18, v24, callback, -1, 0, 0, 0, 1, 0, 1, 0, 0LL, 0.0, 0LL);
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
  int32_t v22; // w3
  int32_t v23; // w2
  int32_t v24; // w3
  UnityEngine_Object_o *Object_37820732; // x22
  Il2CppObject *v26; // x0
  UnityEngine_GameObject_o *v27; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  int32_t v32; // w8
  UnityEngine_BoxCollider_c *v33; // x1
  __int64 methodPtr_low; // x9
  ServantStatusBattleListViewItem_o *v35; // x23
  Il2CppObject *v36; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  struct EventPointEntity_o *evPointEnt; // x8
  EventPointVsResultAction_o *v40; // x20
  int32_t id; // w22
  System_Action_o *v42; // x23

  if ( (byte_4A6DD13 & 1) == 0 )
  {
    sub_1B90010(&System_Action_TypeInfo, *(_QWORD *)&winType);
    sub_1B90010(&UnityEngine_BoxCollider_TypeInfo, v9);
    sub_1B90010(&Method_UnityEngine_GameObject_GetComponent_Collider___, v10);
    sub_1B90010(&Method_UnityEngine_GameObject_GetComponent_EventPointVsResultAction___, v11);
    sub_1B90010(&UnityEngine_GameObject_TypeInfo, v12);
    sub_1B90010(&Method_UnityEngine_Object_Instantiate_GameObject___, v13);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v14);
    sub_1B90010(&Method_TitleInfoEventLeagueVsComponent___c__DisplayClass36_0__ResultEffect_b__0__, v15);
    sub_1B90010(&TitleInfoEventLeagueVsComponent___c__DisplayClass36_0_TypeInfo, v16);
    sub_1B90010(&StringLiteral_17346/*"bit_vs_result"*/, v17);
    byte_4A6DD13 = 1;
  }
  v18 = sub_1B9025C(TitleInfoEventLeagueVsComponent___c__DisplayClass36_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v18, 0LL);
  if ( !v18 )
    goto LABEL_27;
  *(_QWORD *)(v18 + 32) = this;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v18 + 32), (int32_t)this, v21, v22);
  *(_QWORD *)(v18 + 40) = callback;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v18 + 40), (int32_t)callback, v23, v24);
  if ( !winType )
  {
    ActionExtensions__Call(*(System_Action_o **)(v18 + 40), 0LL);
    return;
  }
  if ( !effectAssetData )
    goto LABEL_27;
  Object_37820732 = AssetData__GetObject_37820732(effectAssetData, (System_String_o *)StringLiteral_17346/*"bit_vs_result"*/, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( Object_37820732 )
    v26 = (UnityEngine_GameObject_c *)Object_37820732->klass == UnityEngine_GameObject_TypeInfo
        ? (Il2CppObject *)Object_37820732
        : 0LL;
  else
    v26 = 0LL;
  resultPanel = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                              v26,
                                              (const MethodInfo_2F121DC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !resultPanel
    || (v27 = resultPanel,
        gameObject = UnityEngine_GameObject__get_gameObject(resultPanel, 0LL),
        GameObjectExtensions__SafeSetParent_33776688(gameObject, this->fields.resultPanel, 0LL),
        (resultPanel = this->fields.resultPanel) == 0LL) )
  {
LABEL_27:
    sub_1B9026C(resultPanel, v20);
  }
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       resultPanel,
                       (const MethodInfo_2EDD768 *)Method_UnityEngine_GameObject_GetComponent_Collider___);
  v32 = (int)Component_object;
  if ( !Component_object )
    goto LABEL_22;
  v33 = UnityEngine_BoxCollider_TypeInfo;
  methodPtr_low = LOBYTE(UnityEngine_BoxCollider_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(Component_object->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
    || (UnityEngine_BoxCollider_c *)Component_object->klass->_2.typeHierarchy[methodPtr_low - 1] != UnityEngine_BoxCollider_TypeInfo
    || (*(_QWORD *)(v18 + 24) = Component_object,
        v35 = (ServantStatusBattleListViewItem_o *)(v18 + 24),
        LOBYTE(Component_object->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
    || (UnityEngine_BoxCollider_c *)Component_object->klass->_2.typeHierarchy[methodPtr_low - 1] != v33 )
  {
    sub_1B9052C(Component_object);
LABEL_22:
    *(_QWORD *)(v18 + 24) = 0LL;
    v35 = (ServantStatusBattleListViewItem_o *)(v18 + 24);
  }
  sub_1B8FFB4(v35, v32, v30, v31);
  resultPanel = (UnityEngine_GameObject_o *)v35->klass;
  if ( !v35->klass )
    goto LABEL_27;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)resultPanel, 1, 0LL);
  v36 = UnityEngine_GameObject__GetComponent_object_(
          v27,
          (const MethodInfo_2EDD768 *)Method_UnityEngine_GameObject_GetComponent_EventPointVsResultAction___);
  *(_QWORD *)(v18 + 16) = v36;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v18 + 16), (int32_t)v36, v37, v38);
  evPointEnt = this->fields.evPointEnt;
  if ( !evPointEnt )
    goto LABEL_27;
  v40 = *(EventPointVsResultAction_o **)(v18 + 16);
  id = evPointEnt->fields.id;
  v42 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
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
  struct System_Int32_array *v36; // x8
  unsigned __int64 v37; // x21
  int64_t v38; // x22
  unsigned __int64 max_length; // x9
  struct System_Int32_array *group1; // x8
  struct System_Int32_array *group2; // x8
  int64_t v42; // x24
  struct UISlider_array *hpBarSlider; // x8
  struct UISlider_array *v44; // x8
  float v45; // s0
  struct UISlider_array *v46; // x8
  int64_t normaTotalPoint; // x21
  double v48; // d8
  float v49; // s0
  struct UISlider_array *v50; // x8
  float v51; // s0
  __int64 v52; // x2
  __int64 v53; // x3
  __int64 v54; // x4
  struct UISprite_array *v55; // x8
  struct System_Int32_array *v56; // x9
  UISprite_o *v57; // x24
  Il2CppObject *v58; // x0
  System_String_o *v59; // x26
  __int64 v60; // x2
  __int64 v61; // x3
  __int64 v62; // x4
  struct UISprite_array *v63; // x8
  struct System_Int32_array *v64; // x9
  UISprite_o *v65; // x24
  __int64 v66; // x2
  __int64 v67; // x3
  __int64 v68; // x4
  struct System_Int32_array *v69; // x8
  Il2CppObject *v70; // x26
  Il2CppObject *v71; // x0
  System_String_o *v72; // x0
  struct System_Int32_array *v73; // x8
  __int64 v74; // x2
  __int64 v75; // x3
  __int64 v76; // x4
  struct System_Int32_array *v77; // x8
  __int64 v78; // x27
  unsigned __int64 v79; // x24
  Il2CppObject *v80; // x26
  unsigned __int64 v81; // x9
  __int64 v82; // x2
  __int64 v83; // x3
  __int64 v84; // x4
  Il2CppObject *v85; // x0
  struct UISprite_array *v86; // x8
  UISprite_o *v87; // x23
  Il2CppObject *v88; // x0
  System_String_o *v89; // x25
  struct UISprite_array *v90; // x8
  UISprite_o *v91; // x23
  System_String_o *v92; // x0
  struct UISlider_array *v93; // x8
  double v94; // d8
  float v95; // s0
  struct UISlider_array *v96; // x8
  __int64 v97; // x2
  __int64 v98; // x3
  __int64 v99; // x4
  struct UISprite_array *hpBar; // x8
  struct System_Int32_array *v101; // x9
  UISprite_o *v102; // x23
  Il2CppObject *v103; // x0
  System_String_o *v104; // x25
  __int64 v105; // x2
  __int64 v106; // x3
  __int64 v107; // x4
  struct UISprite_array *v108; // x8
  struct System_Int32_array *v109; // x9
  UISprite_o *v110; // x23
  Il2CppObject *v111; // x0
  System_String_o *v112; // x0
  __int64 v113; // x2
  __int64 v114; // x3
  __int64 v115; // x4
  struct UISprite_array *groupIcon; // x8
  struct System_Int32_array *v117; // x9
  UISprite_o *v118; // x23
  Il2CppObject *v119; // x0
  System_String_o *v120; // x0
  __int64 v121; // x2
  __int64 v122; // x3
  __int64 v123; // x4
  struct UISprite_array *v124; // x8
  struct System_Int32_array *v125; // x9
  UISprite_o *v126; // x23
  Il2CppObject *v127; // x0
  System_String_o *v128; // x0
  UnityEngine_Object_o *Object_37820732; // x21
  Il2CppObject *v130; // x0
  UnityEngine_GameObject_o *v131; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x21
  const MethodInfo *v134; // x4
  UISprite_o *maskSp; // x21
  const MethodInfo *v136; // x1
  UISprite_o *modeName; // x21
  __int64 v138; // x2
  __int64 v139; // x3
  __int64 v140; // x4
  Il2CppObject *v141; // x0
  System_String_o *v142; // x0
  struct UISprite_array *splitIcon; // x8
  unsigned __int64 v144; // x21
  unsigned __int64 v145; // x9
  UISprite_o *v146; // x20
  UnityEngine_GameObject_o *v147; // x0
  UnityEngine_GameObject_o *v148; // x0
  AssetData_o *v149; // [xsp+10h] [xbp-80h]
  int32_t v150; // [xsp+18h] [xbp-78h] BYREF
  int32_t v151; // [xsp+1Ch] [xbp-74h] BYREF
  int32_t v152; // [xsp+28h] [xbp-68h] BYREF
  int32_t id; // [xsp+2Ch] [xbp-64h] BYREF

  v7 = effectAssetData;
  if ( (byte_4A6DD0E & 1) == 0 )
  {
    sub_1B90010(&AtlasManager_TypeInfo, eventPointEntity);
    sub_1B90010(&Method_DataManager_GetMasterData_EventPointGroupMaster___, v11);
    sub_1B90010(&Method_DataManager_GetMasterData_TotalEventPointMaster___, v12);
    sub_1B90010(&Method_UnityEngine_GameObject_GetComponent_TitleInfoEventLeagueVsGaugeEffect___, v13);
    sub_1B90010(&UnityEngine_GameObject_TypeInfo, v14);
    sub_1B90010(&int_TypeInfo, v15);
    sub_1B90010(&Method_UnityEngine_Object_Instantiate_GameObject___, v16);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v17);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_1B90010(&TerminalPramsManager_TypeInfo, v19);
    sub_1B90010(&StringLiteral_19313/*"event_vs_gauge_title_"*/, v20);
    sub_1B90010(&StringLiteral_19310/*"event_vs_frame"*/, v21);
    sub_1B90010(&StringLiteral_19309/*"event_vs_back"*/, v22);
    sub_1B90010(&StringLiteral_24732/*"white00"*/, v23);
    sub_1B90010(&StringLiteral_19312/*"event_vs_gauge_bg"*/, v24);
    sub_1B90010(&StringLiteral_17343/*"bit_vs_gauge_part"*/, v25);
    sub_1B90010(&StringLiteral_19314/*"event_vs_split_line"*/, v26);
    sub_1B90010(&StringLiteral_18028/*"clear00"*/, v27);
    sub_1B90010(&StringLiteral_19318/*"event_vs_team_icon_"*/, v28);
    sub_1B90010(&StringLiteral_1/*""*/, v29);
    sub_1B90010(&StringLiteral_19311/*"event_vs_gauge_"*/, v30);
    byte_4A6DD0E = 1;
  }
  if ( !eventPointEntity )
    return;
  this->fields.evPointEnt = eventPointEntity;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)&this->fields.evPointEnt,
    (int32_t)eventPointEntity,
    eventId,
    (int32_t)effectAssetData);
  this->fields.isDispRestTime = isDispRestTime;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A6D5ED )
  {
    sub_1B90010(&TerminalPramsManager_TypeInfo, v31);
    byte_4A6D5ED = 1;
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
  maskFade = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !maskFade )
    goto LABEL_120;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)maskFade,
                        (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_TotalEventPointMaster___);
  maskFade = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !maskFade )
    goto LABEL_120;
  v35 = DataManager__GetMasterData_object_(
          (DataManager_o *)maskFade,
          (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_EventPointGroupMaster___);
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
        v38 = maskFade;
        maskFade = TotalEventPointMaster__GetPoint(
                     (TotalEventPointMaster_o *)MasterData_object,
                     eventId,
                     eventPointEntity->fields.id,
                     group2->m_Items[1],
                     0LL);
        v42 = maskFade;
        if ( v38 == maskFade )
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
          v44 = this->fields.hpBarSlider;
          if ( !v44 )
            goto LABEL_120;
          if ( v44->max_length <= 1 )
            goto LABEL_123;
          maskFade = (__int64)v44->m_Items[1];
          if ( !maskFade )
            goto LABEL_120;
          v45 = 0.5;
        }
        else
        {
          v93 = this->fields.hpBarSlider;
          if ( !v93 )
            goto LABEL_120;
          if ( !v93->max_length )
            goto LABEL_123;
          maskFade = (__int64)v93->m_Items[0];
          if ( !maskFade )
            goto LABEL_120;
          v94 = (double)v38 / (double)(v42 + v38);
          v95 = 1.0 - v94;
          UIProgressBar__set_value((UIProgressBar_o *)maskFade, v95, 0LL);
          v96 = this->fields.hpBarSlider;
          if ( !v96 )
            goto LABEL_120;
          if ( v96->max_length <= 1 )
            goto LABEL_123;
          maskFade = (__int64)v96->m_Items[1];
          if ( !maskFade )
            goto LABEL_120;
          v45 = v94;
        }
        UIProgressBar__set_value((UIProgressBar_o *)maskFade, v45, 0LL);
        hpBar = this->fields.hpBar;
        if ( !hpBar )
          goto LABEL_120;
        if ( hpBar->max_length )
        {
          v101 = eventPointEntity->fields.group2;
          if ( !v101 )
            goto LABEL_120;
          if ( v101->max_length )
          {
            v102 = hpBar->m_Items[0];
            id = v101->m_Items[1];
            v103 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id, v97, v98, v99);
            v104 = System_String__Concat((Il2CppObject *)StringLiteral_19311/*"event_vs_gauge_"*/, v103, 0LL);
            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
            maskFade = AtlasManager__SetEventUI(v102, v104, 0LL);
            v108 = this->fields.hpBar;
            if ( !v108 )
              goto LABEL_120;
            if ( v108->max_length > 1 )
            {
              v109 = eventPointEntity->fields.group1;
              if ( !v109 )
                goto LABEL_120;
              if ( v109->max_length )
              {
                v110 = v108->m_Items[1];
                v152 = v109->m_Items[1];
                v111 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v152, v105, v106, v107);
                v112 = System_String__Concat((Il2CppObject *)StringLiteral_19311/*"event_vs_gauge_"*/, v111, 0LL);
                maskFade = AtlasManager__SetEventUI(v110, v112, 0LL);
                groupIcon = this->fields.groupIcon;
                if ( !groupIcon )
                  goto LABEL_120;
                if ( groupIcon->max_length )
                {
                  v117 = eventPointEntity->fields.group2;
                  if ( !v117 )
                    goto LABEL_120;
                  if ( v117->max_length )
                  {
                    v118 = groupIcon->m_Items[0];
                    v151 = v117->m_Items[1];
                    v119 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v151, v113, v114, v115);
                    v120 = System_String__Concat((Il2CppObject *)StringLiteral_19318/*"event_vs_team_icon_"*/, v119, 0LL);
                    maskFade = AtlasManager__SetEventUI(v118, v120, 0LL);
                    v124 = this->fields.groupIcon;
                    if ( !v124 )
                      goto LABEL_120;
                    if ( v124->max_length > 1 )
                    {
                      v125 = eventPointEntity->fields.group1;
                      if ( !v125 )
                        goto LABEL_120;
                      if ( v125->max_length )
                      {
                        v126 = v124->m_Items[1];
                        v150 = v125->m_Items[1];
                        v127 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v150, v121, v122, v123);
                        v128 = System_String__Concat((Il2CppObject *)StringLiteral_19318/*"event_vs_team_icon_"*/, v127, 0LL);
                        maskFade = AtlasManager__SetEventUI(v126, v128, 0LL);
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
    sub_1B90274(maskFade, v31);
  }
  v36 = eventPointEntity->fields.group1;
  if ( !v36 )
    goto LABEL_120;
  v37 = 0LL;
  v38 = 0LL;
  while ( 1 )
  {
    max_length = v36->max_length;
    if ( (__int64)v37 >= (int)max_length )
      break;
    if ( v37 >= max_length )
      goto LABEL_123;
    if ( MasterData_object )
    {
      maskFade = TotalEventPointMaster__GetPoint(
                   (TotalEventPointMaster_o *)MasterData_object,
                   eventId,
                   eventPointEntity->fields.id,
                   v36->m_Items[v37 + 1],
                   0LL);
      v36 = eventPointEntity->fields.group1;
      v38 += maskFade;
      ++v37;
      if ( v36 )
        continue;
    }
    goto LABEL_120;
  }
  v46 = this->fields.hpBarSlider;
  if ( !v46 )
    goto LABEL_120;
  if ( !v46->max_length )
    goto LABEL_123;
  maskFade = (__int64)v46->m_Items[0];
  if ( !maskFade )
    goto LABEL_120;
  normaTotalPoint = eventPointEntity->fields.normaTotalPoint;
  v48 = (double)v38 / (double)normaTotalPoint;
  v49 = 1.0 - v48;
  UIProgressBar__set_value((UIProgressBar_o *)maskFade, v49, 0LL);
  v50 = this->fields.hpBarSlider;
  if ( !v50 )
    goto LABEL_120;
  if ( v50->max_length <= 1 )
    goto LABEL_123;
  maskFade = (__int64)v50->m_Items[1];
  if ( !maskFade )
    goto LABEL_120;
  v51 = v48;
  UIProgressBar__set_value((UIProgressBar_o *)maskFade, v51, 0LL);
  v55 = this->fields.hpBar;
  if ( !v55 )
    goto LABEL_120;
  if ( !v55->max_length )
    goto LABEL_123;
  v56 = eventPointEntity->fields.group2;
  if ( !v56 )
    goto LABEL_120;
  v149 = v7;
  if ( !v56->max_length )
    goto LABEL_123;
  v57 = v55->m_Items[0];
  id = v56->m_Items[1];
  v58 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id, v52, v53, v54);
  v59 = System_String__Concat((Il2CppObject *)StringLiteral_19311/*"event_vs_gauge_"*/, v58, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  maskFade = AtlasManager__SetEventUI(v57, v59, 0LL);
  v63 = this->fields.hpBar;
  if ( !v63 )
    goto LABEL_120;
  if ( v63->max_length <= 1 )
    goto LABEL_123;
  v64 = eventPointEntity->fields.group1;
  if ( !v64 )
    goto LABEL_120;
  if ( !v64->max_length )
    goto LABEL_123;
  v65 = v63->m_Items[1];
  v152 = v64->m_Items[1];
  maskFade = j_il2cpp_value_box_0(int_TypeInfo, &v152, v60, v61, v62);
  v69 = eventPointEntity->fields.group1;
  if ( !v69 )
    goto LABEL_120;
  if ( v69->max_length <= 1 )
    goto LABEL_123;
  v70 = (Il2CppObject *)maskFade;
  v151 = v69->m_Items[2];
  v71 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v151, v66, v67, v68);
  v72 = System_String__Concat_61798104((Il2CppObject *)StringLiteral_19311/*"event_vs_gauge_"*/, v70, v71, 0LL);
  maskFade = AtlasManager__SetEventUI(v65, v72, 0LL);
  v73 = eventPointEntity->fields.group2;
  if ( !v73 )
    goto LABEL_120;
  if ( !v73->max_length )
    goto LABEL_123;
  if ( !v35 )
    goto LABEL_120;
  maskFade = (__int64)EventPointGroupMaster__getEntity((EventPointGroupMaster_o *)v35, eventId, v73->m_Items[1], 0LL);
  v77 = eventPointEntity->fields.group1;
  if ( !v77 )
    goto LABEL_120;
  v78 = maskFade;
  v79 = 0LL;
  v80 = (Il2CppObject *)StringLiteral_1/*""*/;
  while ( 1 )
  {
    v81 = v77->max_length;
    if ( (__int64)v79 >= (int)v81 )
      break;
    if ( v79 >= v81 )
      goto LABEL_123;
    maskFade = (__int64)EventPointGroupMaster__getEntity(
                          (EventPointGroupMaster_o *)v35,
                          eventId,
                          v77->m_Items[v79 + 1],
                          0LL);
    if ( maskFade )
    {
      id = *(_DWORD *)(maskFade + 32);
      v85 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id, v82, v83, v84);
      maskFade = (__int64)System_String__Concat(v80, v85, 0LL);
      v77 = eventPointEntity->fields.group1;
      v80 = (Il2CppObject *)maskFade;
      ++v79;
      if ( v77 )
        continue;
    }
    goto LABEL_120;
  }
  v86 = this->fields.groupIcon;
  if ( !v86 )
    goto LABEL_120;
  if ( !v86->max_length )
    goto LABEL_123;
  if ( !v78 )
    goto LABEL_120;
  v87 = v86->m_Items[0];
  id = *(_DWORD *)(v78 + 32);
  v88 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id, v74, v75, v76);
  v89 = System_String__Concat((Il2CppObject *)StringLiteral_19318/*"event_vs_team_icon_"*/, v88, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  maskFade = AtlasManager__SetEventUI(v87, v89, 0LL);
  v90 = this->fields.groupIcon;
  v42 = normaTotalPoint - v38;
  if ( !v90 )
LABEL_120:
    sub_1B9026C(maskFade, v31);
  if ( v90->max_length <= 1 )
    goto LABEL_123;
  v91 = v90->m_Items[1];
  v92 = System_String__Concat_61787092((System_String_o *)StringLiteral_19318/*"event_vs_team_icon_"*/, (System_String_o *)v80, 0LL);
  maskFade = AtlasManager__SetEventUI(v91, v92, 0LL);
  v7 = v149;
LABEL_98:
  if ( !v7 )
    goto LABEL_120;
  Object_37820732 = AssetData__GetObject_37820732(v7, (System_String_o *)StringLiteral_17343/*"bit_vs_gauge_part"*/, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( Object_37820732 )
    v130 = (UnityEngine_GameObject_c *)Object_37820732->klass == UnityEngine_GameObject_TypeInfo
         ? (Il2CppObject *)Object_37820732
         : 0LL;
  else
    v130 = 0LL;
  maskFade = (__int64)UnityEngine_Object__Instantiate_object_(
                        v130,
                        (const MethodInfo_2F121DC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !maskFade )
    goto LABEL_120;
  v131 = (UnityEngine_GameObject_o *)maskFade;
  gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)maskFade, 0LL);
  GameObjectExtensions__SafeSetParent_33776688(gameObject, this->fields.gaugeEffectPanel, 0LL);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v131,
                       (const MethodInfo_2EDD768 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventLeagueVsGaugeEffect___);
  maskFade = EventPointEntity__isBossBattle(eventPointEntity, 0LL);
  if ( !Component_object )
    goto LABEL_120;
  TitleInfoEventLeagueVsGaugeEffect__setup(
    (TitleInfoEventLeagueVsGaugeEffect_o *)Component_object,
    v38,
    v42,
    maskFade & 1,
    v134);
  maskSp = this->fields.maskSp;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetCommon(maskSp, 0LL);
  AtlasManager__SetCommon(this->fields.colliderSp, 0LL);
  maskFade = (__int64)this->fields.maskSp;
  if ( !maskFade )
    goto LABEL_120;
  UISprite__set_spriteName((UISprite_o *)maskFade, (System_String_o *)StringLiteral_24732/*"white00"*/, 0LL);
  maskFade = (__int64)this->fields.colliderSp;
  if ( !maskFade )
    goto LABEL_120;
  UISprite__set_spriteName((UISprite_o *)maskFade, (System_String_o *)StringLiteral_18028/*"clear00"*/, 0LL);
  this->fields.endTime = eventPointEntity->fields.endedAt;
  TitleInfoEventLeagueVsComponent__restTimeUpdate(this, v136);
  AtlasManager__SetEventUI(this->fields.baseWindow, (System_String_o *)StringLiteral_19312/*"event_vs_gauge_bg"*/, 0LL);
  AtlasManager__SetEventUI(this->fields.hpFrame, (System_String_o *)StringLiteral_19310/*"event_vs_frame"*/, 0LL);
  AtlasManager__SetEventUI(this->fields.hpBack, (System_String_o *)StringLiteral_19309/*"event_vs_back"*/, 0LL);
  modeName = this->fields.modeName;
  id = eventPointEntity->fields.id;
  v141 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id, v138, v139, v140);
  v142 = System_String__Concat((Il2CppObject *)StringLiteral_19313/*"event_vs_gauge_title_"*/, v141, 0LL);
  AtlasManager__SetEventUI(modeName, v142, 0LL);
  maskFade = (__int64)this->fields.modeName;
  if ( !maskFade )
    goto LABEL_120;
  maskFade = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)maskFade + 840LL))(
               maskFade,
               *(_QWORD *)(*(_QWORD *)maskFade + 848LL));
  splitIcon = this->fields.splitIcon;
  if ( !splitIcon )
    goto LABEL_120;
  v144 = 0LL;
  while ( 1 )
  {
    v145 = splitIcon->max_length;
    if ( (__int64)v144 >= (int)v145 )
      break;
    if ( v144 >= v145 )
      goto LABEL_123;
    v146 = splitIcon->m_Items[v144];
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    maskFade = AtlasManager__SetEventUI(v146, (System_String_o *)StringLiteral_19314/*"event_vs_split_line"*/, 0LL);
    splitIcon = this->fields.splitIcon;
    ++v144;
    if ( !splitIcon )
      goto LABEL_120;
  }
  v147 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPositionY(v147, -2.0, 0LL);
  v148 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  this->fields.originPos = GameObjectExtensions__GetLocalPosition(v148, 0LL);
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
  struct EventPointEntity_o *v20; // x8
  struct System_Int32_array *group1; // x9
  TotalEventPointMaster_o *v22; // x25
  struct EventPointEntity_o *v23; // x8
  struct System_Int32_array *group2; // x9
  int64_t v25; // x24
  int64_t v26; // x23
  UnityEngine_Object_o *Object_37820732; // x0
  UnityEngine_GameObject_c **v28; // x22
  Il2CppObject *v29; // x0
  UnityEngine_GameObject_o *v30; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v32; // x5

  if ( (byte_4A6DD12 & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMasterData_TotalEventPointMaster___, *(_QWORD *)&groupId);
    sub_1B90010(&Method_UnityEngine_GameObject_GetComponent_TitleInfoEventLeagueVsGaugeFlashEffect___, v11);
    sub_1B90010(&UnityEngine_GameObject_TypeInfo, v12);
    sub_1B90010(&Method_UnityEngine_Object_Instantiate_GameObject___, v13);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v14);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1B90010(&StringLiteral_17341/*"bit_vs_gauge_flash"*/, v16);
    byte_4A6DD12 = 1;
  }
  evPointEnt = this->fields.evPointEnt;
  if ( evPointEnt )
  {
    if ( EventPointEntity__isBossBattle(evPointEnt, 0LL) )
    {
      ActionExtensions__Call(callback, 0LL);
      return;
    }
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_26;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_TotalEventPointMaster___);
    v20 = this->fields.evPointEnt;
    if ( !v20 )
      goto LABEL_26;
    group1 = v20->fields.group1;
    if ( !group1 )
      goto LABEL_26;
    if ( !group1->max_length )
      goto LABEL_27;
    v22 = (TotalEventPointMaster_o *)Instance;
    if ( !Instance )
      goto LABEL_26;
    Instance = (DataManager_o *)TotalEventPointMaster__GetPoint(
                                  (TotalEventPointMaster_o *)Instance,
                                  eventId,
                                  v20->fields.id,
                                  group1->m_Items[1],
                                  0LL);
    v23 = this->fields.evPointEnt;
    if ( !v23 )
      goto LABEL_26;
    group2 = v23->fields.group2;
    if ( !group2 )
      goto LABEL_26;
    if ( !group2->max_length )
LABEL_27:
      sub_1B90274(Instance, v19);
    v25 = (int64_t)Instance;
    Instance = (DataManager_o *)TotalEventPointMaster__GetPoint(v22, eventId, v23->fields.id, group2->m_Items[1], 0LL);
    if ( !effectAssetData )
      goto LABEL_26;
    v26 = (int64_t)Instance;
    Object_37820732 = AssetData__GetObject_37820732(effectAssetData, (System_String_o *)StringLiteral_17341/*"bit_vs_gauge_flash"*/, 0LL);
    v28 = (UnityEngine_GameObject_c **)Object_37820732;
    if ( UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      if ( Object_37820732 )
        goto LABEL_18;
    }
    else
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( v28 )
      {
LABEL_18:
        if ( *v28 == UnityEngine_GameObject_TypeInfo )
          v29 = (Il2CppObject *)v28;
        else
          v29 = 0LL;
LABEL_23:
        Instance = (DataManager_o *)UnityEngine_Object__Instantiate_object_(
                                      v29,
                                      (const MethodInfo_2F121DC *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( Instance )
        {
          v30 = (UnityEngine_GameObject_o *)Instance;
          gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)Instance, 0LL);
          GameObjectExtensions__SafeSetParent_33776688(gameObject, this->fields.gaugeEffectPanel, 0LL);
          Instance = (DataManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                        v30,
                                        (const MethodInfo_2EDD768 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventLeagueVsGaugeFlashEffect___);
          if ( Instance )
          {
            TitleInfoEventLeagueVsGaugeFlashEffect__setup(
              (TitleInfoEventLeagueVsGaugeFlashEffect_o *)Instance,
              groupId,
              v25,
              v26,
              callback,
              v32);
            return;
          }
        }
LABEL_26:
        sub_1B9026C(Instance, v19);
      }
    }
    v29 = 0LL;
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

  if ( (byte_4A6DD0F & 1) == 0 )
  {
    sub_1B90010(&LocalizationManager_TypeInfo, method);
    sub_1B90010(&NetworkManager_TypeInfo, v3);
    sub_1B90010(&StringLiteral_5738/*"EVENT_VS_GAUGE_REST_TIME"*/, v4);
    byte_4A6DD0F = 1;
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
      v8 = LocalizationManager__Get((System_String_o *)StringLiteral_5738/*"EVENT_VS_GAUGE_REST_TIME"*/, 0LL);
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
    sub_1B9026C(restTimeLabel, v5);
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
  int32_t v7; // w3
  struct TitleInfoEventLeagueVsComponent_o *_4__this; // x8

  v2 = this;
  if ( (byte_4A6DD16 & 1) == 0 )
  {
    sub_1B90010(&System_Action_TypeInfo, method);
    this = (TitleInfoEventLeagueVsComponent___c__DisplayClass36_0_o *)sub_1B90010(
                                                                        &Method_TitleInfoEventLeagueVsComponent___c__DisplayClass36_0__ResultEffect_b__1__,
                                                                        v3);
    byte_4A6DD16 = 1;
  }
  _9__1 = v2->fields.__9__1;
  effect = v2->fields.effect;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v2,
      Method_TitleInfoEventLeagueVsComponent___c__DisplayClass36_0__ResultEffect_b__1__,
      0LL);
    v2->fields.__9__1 = _9__1;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v2->fields.__9__1, (int32_t)_9__1, v6, v7);
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this || !effect )
    sub_1B9026C(this, method);
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

  if ( (byte_4A6DD17 & 1) == 0 )
  {
    sub_1B90010(&AvalonSceneManager_TypeInfo, method);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v3);
    byte_4A6DD17 = 1;
  }
  effect = (UnityEngine_Component_o *)this->fields.effect;
  if ( !effect )
    goto LABEL_12;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(effect, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_69539440(gameObject, 0LL);
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
    sub_1B9026C(effect, method);
  MaskFade__Fadein(maskFade, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, this->fields.callback, 0LL);
}