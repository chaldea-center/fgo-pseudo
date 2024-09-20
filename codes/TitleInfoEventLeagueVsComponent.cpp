void __fastcall TitleInfoEventLeagueVsComponent___cctor(const MethodInfo *method)
{
  struct TitleInfoEventLeagueVsComponent_StaticFields *static_fields; // x8

  if ( (byte_4A5907F & 1) == 0 )
  {
    sub_1B885B0(&TitleInfoEventLeagueVsComponent_TypeInfo);
    byte_4A5907F = 1;
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
  int32_t v16; // w3
  int32_t v17; // w1
  int32_t v18; // w2
  int32_t v19; // w3
  int32_t v20; // w2
  int32_t v21; // w3

  if ( (byte_4A5907A & 1) == 0 )
  {
    sub_1B885B0(&TitleInfoEventLeagueVsComponent_TypeInfo);
    sub_1B885B0(&Method_UITweener_Begin_TweenPosition___);
    sub_1B885B0(&StringLiteral_6827/*"FrameInFinish"*/);
    byte_4A5907A = 1;
  }
  if ( this->fields.evPointEnt )
  {
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
           (const MethodInfo_2F31F60 *)Method_UITweener_Begin_TweenPosition___);
    if ( !v8 )
      sub_1B8880C(0LL, v9);
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
    v14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v11[5].klass = (Il2CppClass *)v14;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v11[5], (int32_t)v14, v15, v16);
    v17 = StringLiteral_6827/*"FrameInFinish"*/;
    v11[5].monitor = (void *)StringLiteral_6827/*"FrameInFinish"*/;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v11[5].monitor, v17, v18, v19);
    this->fields.frameInCallBack = callback;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.frameInCallBack, (int32_t)callback, v20, v21);
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
  sub_1B88554(p_frameInCallBack, 0, v2, v3);
  if ( frameInCallBack )
    ActionExtensions__Call(v5, 0LL);
}


void __fastcall TitleInfoEventLeagueVsComponent__FrameOut(
        TitleInfoEventLeagueVsComponent_o *this,
        const MethodInfo *method)
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
  int32_t v13; // w3
  int32_t v14; // w1
  int32_t v15; // w2
  int32_t v16; // w3
  Il2CppClass *v17; // [xsp+0h] [xbp-40h]

  if ( (byte_4A5907B & 1) == 0 )
  {
    sub_1B885B0(&TitleInfoEventLeagueVsComponent_TypeInfo);
    sub_1B885B0(&Method_UITweener_Begin_TweenPosition___);
    sub_1B885B0(&StringLiteral_6829/*"FrameOutFinish"*/);
    byte_4A5907B = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
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
         (const MethodInfo_2F31F60 *)Method_UITweener_Begin_TweenPosition___);
  v17 = *(Il2CppClass **)&this->fields.originPos.fields.x;
  if ( !v6 )
    sub_1B8880C(0LL, v7);
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
  v11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v8[5].klass = (Il2CppClass *)v11;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v8[5], (int32_t)v11, v12, v13);
  v14 = StringLiteral_6829/*"FrameOutFinish"*/;
  v8[5].monitor = (void *)StringLiteral_6829/*"FrameOutFinish"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v8[5].monitor, v14, v15, v16);
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
  System_String_o *countText; // [xsp+30h] [xbp-50h] BYREF
  System_String_o *nameText; // [xsp+38h] [xbp-48h] BYREF

  if ( (byte_4A5907E & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_5661/*"EVENT_POINT_VS_WIN_DIALOG_TITLE"*/);
    sub_1B885B0(&StringLiteral_5660/*"EVENT_POINT_VS_WIN_DIALOG_GROUP"*/);
    sub_1B885B0(&StringLiteral_5659/*"EVENT_POINT_VS_WIN_DIALOG_GET"*/);
    byte_4A5907E = 1;
  }
  countText = 0LL;
  nameText = 0LL;
  if ( evPointEnt )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_21;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_GiftMaster___);
    if ( !rewardInfo || !Instance )
      goto LABEL_21;
    GiftListById = GiftMaster__GetGiftListById((GiftMaster_o *)Instance, rewardInfo->fields.giftId, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v11 = LocalizationManager__Get((System_String_o *)StringLiteral_5661/*"EVENT_POINT_VS_WIN_DIALOG_TITLE"*/, 0LL);
    v12 = System_String__Format(v11, (Il2CppObject *)evPointEnt->fields.name, 0LL);
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_5660/*"EVENT_POINT_VS_WIN_DIALOG_GROUP"*/, 0LL);
    winGroup1 = rewardInfo->fields.winGroup1;
    v15 = v13;
    WinGroupName = (Il2CppObject *)EventPointEntity__GetWinGroupName(evPointEnt, winGroup1, 0LL);
    Instance = (DataManager_o *)System_String__Format(v15, WinGroupName, 0LL);
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
          sub_1B88814(Instance, v9);
        Instance = (DataManager_o *)GiftListById->m_Items[v19];
        if ( !Instance )
          break;
        GiftEntity__GetInfo((GiftEntity_o *)Instance, &nameText, &countText, 0LL);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v20 = LocalizationManager__Get((System_String_o *)StringLiteral_5659/*"EVENT_POINT_VS_WIN_DIALOG_GET"*/, 0LL);
        v21 = System_String__Format_61721404(v20, (Il2CppObject *)nameText, (Il2CppObject *)countText, 0LL);
        Instance = (DataManager_o *)System_String__Concat_61707032(v18, v21, 0LL);
        max_length = GiftListById->max_length;
        ++v19;
        v18 = (System_String_o *)Instance;
        if ( v19 >= max_length )
          goto LABEL_17;
      }
LABEL_21:
      sub_1B8880C(Instance, v9);
    }
LABEL_17:
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_21;
    CommonUI__OpenNotificationDialog((CommonUI_o *)Instance, v12, v18, callback, -1, 0, 0, 0, 1, 0, 1, 0, 0LL, 0.0, 0LL);
  }
  else
  {
    ActionExtensions__Call(callback, 0LL);
  }
}


void __fastcall TitleInfoEventLeagueVsComponent__ResultEffect(
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
  int32_t v13; // w3
  int32_t v14; // w2
  int32_t v15; // w3
  UnityEngine_Object_o *Object_37768612; // x22
  Il2CppObject *v17; // x0
  UnityEngine_GameObject_o *v18; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  int32_t v23; // w8
  UnityEngine_BoxCollider_c *v24; // x1
  __int64 methodPtr_low; // x9
  ServantStatusBattleListViewItem_o *v26; // x23
  Il2CppObject *v27; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  struct EventPointEntity_o *evPointEnt; // x8
  EventPointVsResultAction_o *v31; // x20
  int32_t id; // w22
  System_Action_o *v33; // x23

  if ( (byte_4A5907D & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&UnityEngine_BoxCollider_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_Collider___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_EventPointVsResultAction___);
    sub_1B885B0(&UnityEngine_GameObject_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_TitleInfoEventLeagueVsComponent___c__DisplayClass36_0__ResultEffect_b__0__);
    sub_1B885B0(&TitleInfoEventLeagueVsComponent___c__DisplayClass36_0_TypeInfo);
    sub_1B885B0(&StringLiteral_17321/*"bit_vs_result"*/);
    byte_4A5907D = 1;
  }
  v9 = sub_1B887FC(TitleInfoEventLeagueVsComponent___c__DisplayClass36_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_27;
  *(_QWORD *)(v9 + 32) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 32), (int32_t)this, v12, v13);
  *(_QWORD *)(v9 + 40) = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 40), (int32_t)callback, v14, v15);
  if ( !winType )
  {
    ActionExtensions__Call(*(System_Action_o **)(v9 + 40), 0LL);
    return;
  }
  if ( !effectAssetData )
    goto LABEL_27;
  Object_37768612 = AssetData__GetObject_37768612(effectAssetData, (System_String_o *)StringLiteral_17321/*"bit_vs_result"*/, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( Object_37768612 )
    v17 = (UnityEngine_GameObject_c *)Object_37768612->klass == UnityEngine_GameObject_TypeInfo
        ? (Il2CppObject *)Object_37768612
        : 0LL;
  else
    v17 = 0LL;
  resultPanel = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                              v17,
                                              (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !resultPanel
    || (v18 = resultPanel,
        gameObject = UnityEngine_GameObject__get_gameObject(resultPanel, 0LL),
        GameObjectExtensions__SafeSetParent_33730068(gameObject, this->fields.resultPanel, 0LL),
        (resultPanel = this->fields.resultPanel) == 0LL) )
  {
LABEL_27:
    sub_1B8880C(resultPanel, v11);
  }
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       resultPanel,
                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_Collider___);
  v23 = (int)Component_object;
  if ( !Component_object )
    goto LABEL_22;
  v24 = UnityEngine_BoxCollider_TypeInfo;
  methodPtr_low = LOBYTE(UnityEngine_BoxCollider_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(Component_object->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
    || (UnityEngine_BoxCollider_c *)Component_object->klass->_2.typeHierarchy[methodPtr_low - 1] != UnityEngine_BoxCollider_TypeInfo
    || (*(_QWORD *)(v9 + 24) = Component_object,
        v26 = (ServantStatusBattleListViewItem_o *)(v9 + 24),
        LOBYTE(Component_object->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
    || (UnityEngine_BoxCollider_c *)Component_object->klass->_2.typeHierarchy[methodPtr_low - 1] != v24 )
  {
    sub_1B88ACC(Component_object);
LABEL_22:
    *(_QWORD *)(v9 + 24) = 0LL;
    v26 = (ServantStatusBattleListViewItem_o *)(v9 + 24);
  }
  sub_1B88554(v26, v23, v21, v22);
  resultPanel = (UnityEngine_GameObject_o *)v26->klass;
  if ( !v26->klass )
    goto LABEL_27;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)resultPanel, 1, 0LL);
  v27 = UnityEngine_GameObject__GetComponent_object_(
          v18,
          (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_EventPointVsResultAction___);
  *(_QWORD *)(v9 + 16) = v27;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)v27, v28, v29);
  evPointEnt = this->fields.evPointEnt;
  if ( !evPointEnt )
    goto LABEL_27;
  v31 = *(EventPointVsResultAction_o **)(v9 + 16);
  id = evPointEnt->fields.id;
  v33 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v33,
    (Il2CppObject *)v9,
    Method_TitleInfoEventLeagueVsComponent___c__DisplayClass36_0__ResultEffect_b__0__,
    0LL);
  if ( !v31 )
    goto LABEL_27;
  EventPointVsResultAction__Setup(v31, winType, id, v33, 0LL);
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
  TerminalPramsManager_c *v12; // x0
  __int64 maskFade; // x0
  Il2CppObject *MasterData_object; // x24
  Il2CppObject *v15; // x25
  struct System_Int32_array *v16; // x8
  unsigned __int64 v17; // x21
  int64_t v18; // x22
  unsigned __int64 max_length; // x9
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
  struct UISprite_array *v35; // x8
  struct System_Int32_array *v36; // x9
  UISprite_o *v37; // x24
  Il2CppObject *v38; // x0
  System_String_o *v39; // x26
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  struct UISprite_array *v43; // x8
  struct System_Int32_array *v44; // x9
  UISprite_o *v45; // x24
  __int64 v46; // x2
  __int64 v47; // x3
  __int64 v48; // x4
  struct System_Int32_array *v49; // x8
  Il2CppObject *v50; // x26
  Il2CppObject *v51; // x0
  System_String_o *v52; // x0
  struct System_Int32_array *v53; // x8
  __int64 v54; // x2
  __int64 v55; // x3
  __int64 v56; // x4
  struct System_Int32_array *v57; // x8
  __int64 v58; // x27
  unsigned __int64 v59; // x24
  Il2CppObject *v60; // x26
  unsigned __int64 v61; // x9
  __int64 v62; // x2
  __int64 v63; // x3
  __int64 v64; // x4
  Il2CppObject *v65; // x0
  struct UISprite_array *v66; // x8
  UISprite_o *v67; // x23
  Il2CppObject *v68; // x0
  System_String_o *v69; // x25
  struct UISprite_array *v70; // x8
  UISprite_o *v71; // x23
  System_String_o *v72; // x0
  struct UISlider_array *v73; // x8
  double v74; // d8
  float v75; // s0
  struct UISlider_array *v76; // x8
  __int64 v77; // x2
  __int64 v78; // x3
  __int64 v79; // x4
  struct UISprite_array *hpBar; // x8
  struct System_Int32_array *v81; // x9
  UISprite_o *v82; // x23
  Il2CppObject *v83; // x0
  System_String_o *v84; // x25
  __int64 v85; // x2
  __int64 v86; // x3
  __int64 v87; // x4
  struct UISprite_array *v88; // x8
  struct System_Int32_array *v89; // x9
  UISprite_o *v90; // x23
  Il2CppObject *v91; // x0
  System_String_o *v92; // x0
  __int64 v93; // x2
  __int64 v94; // x3
  __int64 v95; // x4
  struct UISprite_array *groupIcon; // x8
  struct System_Int32_array *v97; // x9
  UISprite_o *v98; // x23
  Il2CppObject *v99; // x0
  System_String_o *v100; // x0
  __int64 v101; // x2
  __int64 v102; // x3
  __int64 v103; // x4
  struct UISprite_array *v104; // x8
  struct System_Int32_array *v105; // x9
  UISprite_o *v106; // x23
  Il2CppObject *v107; // x0
  System_String_o *v108; // x0
  UnityEngine_Object_o *Object_37768612; // x21
  Il2CppObject *v110; // x0
  UnityEngine_GameObject_o *v111; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x21
  const MethodInfo *v114; // x4
  UISprite_o *maskSp; // x21
  const MethodInfo *v116; // x1
  UISprite_o *modeName; // x21
  __int64 v118; // x2
  __int64 v119; // x3
  __int64 v120; // x4
  Il2CppObject *v121; // x0
  System_String_o *v122; // x0
  struct UISprite_array *splitIcon; // x8
  unsigned __int64 v124; // x21
  unsigned __int64 v125; // x9
  UISprite_o *v126; // x20
  UnityEngine_GameObject_o *v127; // x0
  UnityEngine_GameObject_o *v128; // x0
  AssetData_o *v129; // [xsp+10h] [xbp-80h]
  int32_t v130; // [xsp+18h] [xbp-78h] BYREF
  int32_t v131; // [xsp+1Ch] [xbp-74h] BYREF
  int32_t v132; // [xsp+28h] [xbp-68h] BYREF
  int32_t id; // [xsp+2Ch] [xbp-64h] BYREF

  v7 = effectAssetData;
  if ( (byte_4A59078 & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventPointGroupMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_TotalEventPointMaster___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_TitleInfoEventLeagueVsGaugeEffect___);
    sub_1B885B0(&UnityEngine_GameObject_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&StringLiteral_19286/*"event_vs_gauge_title_"*/);
    sub_1B885B0(&StringLiteral_19283/*"event_vs_frame"*/);
    sub_1B885B0(&StringLiteral_19282/*"event_vs_back"*/);
    sub_1B885B0(&StringLiteral_24693/*"white00"*/);
    sub_1B885B0(&StringLiteral_19285/*"event_vs_gauge_bg"*/);
    sub_1B885B0(&StringLiteral_17318/*"bit_vs_gauge_part"*/);
    sub_1B885B0(&StringLiteral_19287/*"event_vs_split_line"*/);
    sub_1B885B0(&StringLiteral_18002/*"clear00"*/);
    sub_1B885B0(&StringLiteral_19291/*"event_vs_team_icon_"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_19284/*"event_vs_gauge_"*/);
    byte_4A59078 = 1;
  }
  if ( !eventPointEntity )
    return;
  this->fields.evPointEnt = eventPointEntity;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.evPointEnt,
    (int32_t)eventPointEntity,
    eventId,
    (int32_t)effectAssetData);
  this->fields.isDispRestTime = isDispRestTime;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A588E9 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A588E9 = 1;
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
    MaskFade__Fadeout((MaskFade_o *)maskFade, 1, 0.0, 0LL, 0LL);
  }
  maskFade = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !maskFade )
    goto LABEL_120;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)maskFade,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_TotalEventPointMaster___);
  maskFade = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !maskFade )
    goto LABEL_120;
  v15 = DataManager__GetMasterData_object_(
          (DataManager_o *)maskFade,
          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventPointGroupMaster___);
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
        v18 = maskFade;
        maskFade = TotalEventPointMaster__GetPoint(
                     (TotalEventPointMaster_o *)MasterData_object,
                     eventId,
                     eventPointEntity->fields.id,
                     group2->m_Items[1],
                     0LL);
        v22 = maskFade;
        if ( v18 == maskFade )
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
          v24 = this->fields.hpBarSlider;
          if ( !v24 )
            goto LABEL_120;
          if ( v24->max_length <= 1 )
            goto LABEL_123;
          maskFade = (__int64)v24->m_Items[1];
          if ( !maskFade )
            goto LABEL_120;
          v25 = 0.5;
        }
        else
        {
          v73 = this->fields.hpBarSlider;
          if ( !v73 )
            goto LABEL_120;
          if ( !v73->max_length )
            goto LABEL_123;
          maskFade = (__int64)v73->m_Items[0];
          if ( !maskFade )
            goto LABEL_120;
          v74 = (double)v18 / (double)(v22 + v18);
          v75 = 1.0 - v74;
          UIProgressBar__set_value((UIProgressBar_o *)maskFade, v75, 0LL);
          v76 = this->fields.hpBarSlider;
          if ( !v76 )
            goto LABEL_120;
          if ( v76->max_length <= 1 )
            goto LABEL_123;
          maskFade = (__int64)v76->m_Items[1];
          if ( !maskFade )
            goto LABEL_120;
          v25 = v74;
        }
        UIProgressBar__set_value((UIProgressBar_o *)maskFade, v25, 0LL);
        hpBar = this->fields.hpBar;
        if ( !hpBar )
          goto LABEL_120;
        if ( hpBar->max_length )
        {
          v81 = eventPointEntity->fields.group2;
          if ( !v81 )
            goto LABEL_120;
          if ( v81->max_length )
          {
            v82 = hpBar->m_Items[0];
            id = v81->m_Items[1];
            v83 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id, v77, v78, v79);
            v84 = System_String__Concat((Il2CppObject *)StringLiteral_19284/*"event_vs_gauge_"*/, v83, 0LL);
            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
            maskFade = AtlasManager__SetEventUI(v82, v84, 0LL);
            v88 = this->fields.hpBar;
            if ( !v88 )
              goto LABEL_120;
            if ( v88->max_length > 1 )
            {
              v89 = eventPointEntity->fields.group1;
              if ( !v89 )
                goto LABEL_120;
              if ( v89->max_length )
              {
                v90 = v88->m_Items[1];
                v132 = v89->m_Items[1];
                v91 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v132, v85, v86, v87);
                v92 = System_String__Concat((Il2CppObject *)StringLiteral_19284/*"event_vs_gauge_"*/, v91, 0LL);
                maskFade = AtlasManager__SetEventUI(v90, v92, 0LL);
                groupIcon = this->fields.groupIcon;
                if ( !groupIcon )
                  goto LABEL_120;
                if ( groupIcon->max_length )
                {
                  v97 = eventPointEntity->fields.group2;
                  if ( !v97 )
                    goto LABEL_120;
                  if ( v97->max_length )
                  {
                    v98 = groupIcon->m_Items[0];
                    v131 = v97->m_Items[1];
                    v99 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v131, v93, v94, v95);
                    v100 = System_String__Concat((Il2CppObject *)StringLiteral_19291/*"event_vs_team_icon_"*/, v99, 0LL);
                    maskFade = AtlasManager__SetEventUI(v98, v100, 0LL);
                    v104 = this->fields.groupIcon;
                    if ( !v104 )
                      goto LABEL_120;
                    if ( v104->max_length > 1 )
                    {
                      v105 = eventPointEntity->fields.group1;
                      if ( !v105 )
                        goto LABEL_120;
                      if ( v105->max_length )
                      {
                        v106 = v104->m_Items[1];
                        v130 = v105->m_Items[1];
                        v107 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v130, v101, v102, v103);
                        v108 = System_String__Concat((Il2CppObject *)StringLiteral_19291/*"event_vs_team_icon_"*/, v107, 0LL);
                        maskFade = AtlasManager__SetEventUI(v106, v108, 0LL);
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
    sub_1B88814(maskFade, v11);
  }
  v16 = eventPointEntity->fields.group1;
  if ( !v16 )
    goto LABEL_120;
  v17 = 0LL;
  v18 = 0LL;
  while ( 1 )
  {
    max_length = v16->max_length;
    if ( (__int64)v17 >= (int)max_length )
      break;
    if ( v17 >= max_length )
      goto LABEL_123;
    if ( MasterData_object )
    {
      maskFade = TotalEventPointMaster__GetPoint(
                   (TotalEventPointMaster_o *)MasterData_object,
                   eventId,
                   eventPointEntity->fields.id,
                   v16->m_Items[v17 + 1],
                   0LL);
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
  if ( !v26->max_length )
    goto LABEL_123;
  maskFade = (__int64)v26->m_Items[0];
  if ( !maskFade )
    goto LABEL_120;
  normaTotalPoint = eventPointEntity->fields.normaTotalPoint;
  v28 = (double)v18 / (double)normaTotalPoint;
  v29 = 1.0 - v28;
  UIProgressBar__set_value((UIProgressBar_o *)maskFade, v29, 0LL);
  v30 = this->fields.hpBarSlider;
  if ( !v30 )
    goto LABEL_120;
  if ( v30->max_length <= 1 )
    goto LABEL_123;
  maskFade = (__int64)v30->m_Items[1];
  if ( !maskFade )
    goto LABEL_120;
  v31 = v28;
  UIProgressBar__set_value((UIProgressBar_o *)maskFade, v31, 0LL);
  v35 = this->fields.hpBar;
  if ( !v35 )
    goto LABEL_120;
  if ( !v35->max_length )
    goto LABEL_123;
  v36 = eventPointEntity->fields.group2;
  if ( !v36 )
    goto LABEL_120;
  v129 = v7;
  if ( !v36->max_length )
    goto LABEL_123;
  v37 = v35->m_Items[0];
  id = v36->m_Items[1];
  v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id, v32, v33, v34);
  v39 = System_String__Concat((Il2CppObject *)StringLiteral_19284/*"event_vs_gauge_"*/, v38, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  maskFade = AtlasManager__SetEventUI(v37, v39, 0LL);
  v43 = this->fields.hpBar;
  if ( !v43 )
    goto LABEL_120;
  if ( v43->max_length <= 1 )
    goto LABEL_123;
  v44 = eventPointEntity->fields.group1;
  if ( !v44 )
    goto LABEL_120;
  if ( !v44->max_length )
    goto LABEL_123;
  v45 = v43->m_Items[1];
  v132 = v44->m_Items[1];
  maskFade = j_il2cpp_value_box_0(int_TypeInfo, &v132, v40, v41, v42);
  v49 = eventPointEntity->fields.group1;
  if ( !v49 )
    goto LABEL_120;
  if ( v49->max_length <= 1 )
    goto LABEL_123;
  v50 = (Il2CppObject *)maskFade;
  v131 = v49->m_Items[2];
  v51 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v131, v46, v47, v48);
  v52 = System_String__Concat_61718044((Il2CppObject *)StringLiteral_19284/*"event_vs_gauge_"*/, v50, v51, 0LL);
  maskFade = AtlasManager__SetEventUI(v45, v52, 0LL);
  v53 = eventPointEntity->fields.group2;
  if ( !v53 )
    goto LABEL_120;
  if ( !v53->max_length )
    goto LABEL_123;
  if ( !v15 )
    goto LABEL_120;
  maskFade = (__int64)EventPointGroupMaster__getEntity((EventPointGroupMaster_o *)v15, eventId, v53->m_Items[1], 0LL);
  v57 = eventPointEntity->fields.group1;
  if ( !v57 )
    goto LABEL_120;
  v58 = maskFade;
  v59 = 0LL;
  v60 = (Il2CppObject *)StringLiteral_1/*""*/;
  while ( 1 )
  {
    v61 = v57->max_length;
    if ( (__int64)v59 >= (int)v61 )
      break;
    if ( v59 >= v61 )
      goto LABEL_123;
    maskFade = (__int64)EventPointGroupMaster__getEntity(
                          (EventPointGroupMaster_o *)v15,
                          eventId,
                          v57->m_Items[v59 + 1],
                          0LL);
    if ( maskFade )
    {
      id = *(_DWORD *)(maskFade + 32);
      v65 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id, v62, v63, v64);
      maskFade = (__int64)System_String__Concat(v60, v65, 0LL);
      v57 = eventPointEntity->fields.group1;
      v60 = (Il2CppObject *)maskFade;
      ++v59;
      if ( v57 )
        continue;
    }
    goto LABEL_120;
  }
  v66 = this->fields.groupIcon;
  if ( !v66 )
    goto LABEL_120;
  if ( !v66->max_length )
    goto LABEL_123;
  if ( !v58 )
    goto LABEL_120;
  v67 = v66->m_Items[0];
  id = *(_DWORD *)(v58 + 32);
  v68 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id, v54, v55, v56);
  v69 = System_String__Concat((Il2CppObject *)StringLiteral_19291/*"event_vs_team_icon_"*/, v68, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  maskFade = AtlasManager__SetEventUI(v67, v69, 0LL);
  v70 = this->fields.groupIcon;
  v22 = normaTotalPoint - v18;
  if ( !v70 )
LABEL_120:
    sub_1B8880C(maskFade, v11);
  if ( v70->max_length <= 1 )
    goto LABEL_123;
  v71 = v70->m_Items[1];
  v72 = System_String__Concat_61707032((System_String_o *)StringLiteral_19291/*"event_vs_team_icon_"*/, (System_String_o *)v60, 0LL);
  maskFade = AtlasManager__SetEventUI(v71, v72, 0LL);
  v7 = v129;
LABEL_98:
  if ( !v7 )
    goto LABEL_120;
  Object_37768612 = AssetData__GetObject_37768612(v7, (System_String_o *)StringLiteral_17318/*"bit_vs_gauge_part"*/, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( Object_37768612 )
    v110 = (UnityEngine_GameObject_c *)Object_37768612->klass == UnityEngine_GameObject_TypeInfo
         ? (Il2CppObject *)Object_37768612
         : 0LL;
  else
    v110 = 0LL;
  maskFade = (__int64)UnityEngine_Object__Instantiate_object_(
                        v110,
                        (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !maskFade )
    goto LABEL_120;
  v111 = (UnityEngine_GameObject_o *)maskFade;
  gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)maskFade, 0LL);
  GameObjectExtensions__SafeSetParent_33730068(gameObject, this->fields.gaugeEffectPanel, 0LL);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v111,
                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventLeagueVsGaugeEffect___);
  maskFade = EventPointEntity__isBossBattle(eventPointEntity, 0LL);
  if ( !Component_object )
    goto LABEL_120;
  TitleInfoEventLeagueVsGaugeEffect__setup(
    (TitleInfoEventLeagueVsGaugeEffect_o *)Component_object,
    v18,
    v22,
    maskFade & 1,
    v114);
  maskSp = this->fields.maskSp;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetCommon(maskSp, 0LL);
  AtlasManager__SetCommon(this->fields.colliderSp, 0LL);
  maskFade = (__int64)this->fields.maskSp;
  if ( !maskFade )
    goto LABEL_120;
  UISprite__set_spriteName((UISprite_o *)maskFade, (System_String_o *)StringLiteral_24693/*"white00"*/, 0LL);
  maskFade = (__int64)this->fields.colliderSp;
  if ( !maskFade )
    goto LABEL_120;
  UISprite__set_spriteName((UISprite_o *)maskFade, (System_String_o *)StringLiteral_18002/*"clear00"*/, 0LL);
  this->fields.endTime = eventPointEntity->fields.endedAt;
  TitleInfoEventLeagueVsComponent__restTimeUpdate(this, v116);
  AtlasManager__SetEventUI(this->fields.baseWindow, (System_String_o *)StringLiteral_19285/*"event_vs_gauge_bg"*/, 0LL);
  AtlasManager__SetEventUI(this->fields.hpFrame, (System_String_o *)StringLiteral_19283/*"event_vs_frame"*/, 0LL);
  AtlasManager__SetEventUI(this->fields.hpBack, (System_String_o *)StringLiteral_19282/*"event_vs_back"*/, 0LL);
  modeName = this->fields.modeName;
  id = eventPointEntity->fields.id;
  v121 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id, v118, v119, v120);
  v122 = System_String__Concat((Il2CppObject *)StringLiteral_19286/*"event_vs_gauge_title_"*/, v121, 0LL);
  AtlasManager__SetEventUI(modeName, v122, 0LL);
  maskFade = (__int64)this->fields.modeName;
  if ( !maskFade )
    goto LABEL_120;
  maskFade = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)maskFade + 840LL))(
               maskFade,
               *(_QWORD *)(*(_QWORD *)maskFade + 848LL));
  splitIcon = this->fields.splitIcon;
  if ( !splitIcon )
    goto LABEL_120;
  v124 = 0LL;
  while ( 1 )
  {
    v125 = splitIcon->max_length;
    if ( (__int64)v124 >= (int)v125 )
      break;
    if ( v124 >= v125 )
      goto LABEL_123;
    v126 = splitIcon->m_Items[v124];
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    maskFade = AtlasManager__SetEventUI(v126, (System_String_o *)StringLiteral_19287/*"event_vs_split_line"*/, 0LL);
    splitIcon = this->fields.splitIcon;
    ++v124;
    if ( !splitIcon )
      goto LABEL_120;
  }
  v127 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPositionY(v127, -2.0, 0LL);
  v128 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  this->fields.originPos = GameObjectExtensions__GetLocalPosition(v128, 0LL);
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


void __fastcall TitleInfoEventLeagueVsComponent__gaugeEvent(
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
  UnityEngine_Object_o *Object_37768612; // x0
  UnityEngine_GameObject_c **v22; // x22
  Il2CppObject *v23; // x0
  UnityEngine_GameObject_o *v24; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v26; // x5

  if ( (byte_4A5907C & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_TotalEventPointMaster___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_TitleInfoEventLeagueVsGaugeFlashEffect___);
    sub_1B885B0(&UnityEngine_GameObject_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_17316/*"bit_vs_gauge_flash"*/);
    byte_4A5907C = 1;
  }
  evPointEnt = this->fields.evPointEnt;
  if ( evPointEnt )
  {
    if ( EventPointEntity__isBossBattle(evPointEnt, 0LL) )
    {
      ActionExtensions__Call(callback, 0LL);
      return;
    }
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_26;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_TotalEventPointMaster___);
    v14 = this->fields.evPointEnt;
    if ( !v14 )
      goto LABEL_26;
    group1 = v14->fields.group1;
    if ( !group1 )
      goto LABEL_26;
    if ( !group1->max_length )
      goto LABEL_27;
    v16 = (TotalEventPointMaster_o *)Instance;
    if ( !Instance )
      goto LABEL_26;
    Instance = (DataManager_o *)TotalEventPointMaster__GetPoint(
                                  (TotalEventPointMaster_o *)Instance,
                                  eventId,
                                  v14->fields.id,
                                  group1->m_Items[1],
                                  0LL);
    v17 = this->fields.evPointEnt;
    if ( !v17 )
      goto LABEL_26;
    group2 = v17->fields.group2;
    if ( !group2 )
      goto LABEL_26;
    if ( !group2->max_length )
LABEL_27:
      sub_1B88814(Instance, v13);
    v19 = (int64_t)Instance;
    Instance = (DataManager_o *)TotalEventPointMaster__GetPoint(v16, eventId, v17->fields.id, group2->m_Items[1], 0LL);
    if ( !effectAssetData )
      goto LABEL_26;
    v20 = (int64_t)Instance;
    Object_37768612 = AssetData__GetObject_37768612(effectAssetData, (System_String_o *)StringLiteral_17316/*"bit_vs_gauge_flash"*/, 0LL);
    v22 = (UnityEngine_GameObject_c **)Object_37768612;
    if ( UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      if ( Object_37768612 )
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
          v23 = 0LL;
LABEL_23:
        Instance = (DataManager_o *)UnityEngine_Object__Instantiate_object_(
                                      v23,
                                      (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( Instance )
        {
          v24 = (UnityEngine_GameObject_o *)Instance;
          gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)Instance, 0LL);
          GameObjectExtensions__SafeSetParent_33730068(gameObject, this->fields.gaugeEffectPanel, 0LL);
          Instance = (DataManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                        v24,
                                        (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventLeagueVsGaugeFlashEffect___);
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
        sub_1B8880C(Instance, v13);
      }
    }
    v23 = 0LL;
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
  UnityEngine_Behaviour_o *restTimeLabel; // x0
  UILabel_o *v5; // x20
  System_String_o *v6; // x0
  int64_t endTime; // x8
  System_String_o *v8; // x19
  Il2CppObject *RestTime3; // x0

  if ( (byte_4A59079 & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_5737/*"EVENT_VS_GAUGE_REST_TIME"*/);
    byte_4A59079 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( this->fields.endTime - NetworkManager__getTime(0LL) >= 1 && this->fields.isDispRestTime )
  {
    restTimeLabel = (UnityEngine_Behaviour_o *)this->fields.restTimeLabel;
    if ( restTimeLabel )
    {
      UnityEngine_Behaviour__set_enabled(restTimeLabel, 1, 0LL);
      v5 = this->fields.restTimeLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v6 = LocalizationManager__Get((System_String_o *)StringLiteral_5737/*"EVENT_VS_GAUGE_REST_TIME"*/, 0LL);
      endTime = this->fields.endTime;
      v8 = v6;
      RestTime3 = (Il2CppObject *)LocalizationManager__GetRestTime3(endTime, 0LL);
      restTimeLabel = (UnityEngine_Behaviour_o *)System_String__Format(v8, RestTime3, 0LL);
      if ( v5 )
      {
        UILabel__set_text(v5, (System_String_o *)restTimeLabel, 0LL);
        return;
      }
    }
LABEL_14:
    sub_1B8880C(restTimeLabel, v3);
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
  System_Action_o *_9__1; // x21
  EventPointVsResultAction_o *effect; // x20
  int32_t v5; // w2
  int32_t v6; // w3
  struct TitleInfoEventLeagueVsComponent_o *_4__this; // x8

  v2 = this;
  if ( (byte_4A59080 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    this = (TitleInfoEventLeagueVsComponent___c__DisplayClass36_0_o *)sub_1B885B0(&Method_TitleInfoEventLeagueVsComponent___c__DisplayClass36_0__ResultEffect_b__1__);
    byte_4A59080 = 1;
  }
  _9__1 = v2->fields.__9__1;
  effect = v2->fields.effect;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v2,
      Method_TitleInfoEventLeagueVsComponent___c__DisplayClass36_0__ResultEffect_b__1__,
      0LL);
    v2->fields.__9__1 = _9__1;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields.__9__1, (int32_t)_9__1, v5, v6);
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this || !effect )
    sub_1B8880C(this, method);
  EventPointVsResultAction__Play(effect, _9__1, _4__this->fields.maskFade, 0.0, 0LL);
}


void __fastcall TitleInfoEventLeagueVsComponent___c__DisplayClass36_0___ResultEffect_b__1(
        TitleInfoEventLeagueVsComponent___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *effect; // x0
  UnityEngine_Object_o *gameObject; // x20
  struct TitleInfoEventLeagueVsComponent_o *_4__this; // x8
  MaskFade_o *maskFade; // x20

  if ( (byte_4A59081 & 1) == 0 )
  {
    sub_1B885B0(&AvalonSceneManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A59081 = 1;
  }
  effect = (UnityEngine_Component_o *)this->fields.effect;
  if ( !effect )
    goto LABEL_12;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(effect, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_69459380(gameObject, 0LL);
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
    sub_1B8880C(effect, method);
  MaskFade__Fadein(maskFade, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, this->fields.callback, 0LL);
}