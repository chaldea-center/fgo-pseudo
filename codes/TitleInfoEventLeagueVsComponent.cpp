void __fastcall TitleInfoEventLeagueVsComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct TitleInfoEventLeagueVsComponent_StaticFields *static_fields; // x9

  if ( (byte_418BA0C & 1) == 0 )
  {
    sub_B2C35C(&TitleInfoEventLeagueVsComponent_TypeInfo, v1);
    byte_418BA0C = 1;
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
  UnityEngine_GameObject_o *gameObject; // x21
  TitleInfoEventLeagueVsComponent_c *v8; // x8
  TweenWidth_o *v9; // x0
  __int64 v10; // x1
  TweenWidth_o *v11; // x21
  float32x2_t *static_fields; // x8
  float v13; // s1
  int endTime; // w9
  System_Int32_array **v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Int32_array **v22; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7

  if ( (byte_418BA07 & 1) == 0 )
  {
    sub_B2C35C(&TitleInfoEventLeagueVsComponent_TypeInfo, callback);
    sub_B2C35C(&Method_UITweener_Begin_TweenPosition___, v5);
    sub_B2C35C(&StringLiteral_6790/*"FrameInFinish"*/, v6);
    byte_418BA07 = 1;
  }
  if ( *(_QWORD *)&this->fields.isDispRestTime )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v8 = TitleInfoEventLeagueVsComponent_TypeInfo;
    if ( (BYTE3(TitleInfoEventLeagueVsComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TitleInfoEventLeagueVsComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventLeagueVsComponent_TypeInfo);
      v8 = TitleInfoEventLeagueVsComponent_TypeInfo;
    }
    v9 = UITweener__Begin_TweenWidth_(
           gameObject,
           v8->static_fields->ANIM_DURATION_FRAME_IN,
           (const MethodInfo_20A1B44 *)Method_UITweener_Begin_TweenPosition___);
    if ( !v9 )
      sub_B2C434(0LL, v10);
    v11 = v9;
    static_fields = (float32x2_t *)TitleInfoEventLeagueVsComponent_TypeInfo->static_fields;
    v13 = *(float *)&this->fields.endTime + static_fields[1].n64_f32[0];
    *(float32x2_t *)&v9->fields.from = vadd_f32(
                                         *(float32x2_t *)&this->fields.originPos.fields.z,
                                         (float32x2_t)static_fields->n64_u64[0]);
    *(float *)&v9->fields.updateTable = v13;
    endTime = this->fields.endTime;
    *(_QWORD *)(&v9->fields.updateTable + 4) = *(_QWORD *)&this->fields.originPos.fields.z;
    HIDWORD(v9->fields.mWidget) = endTime;
    v9->fields.style = 2;
    v15 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v11->fields.eventReceiver = (struct UnityEngine_GameObject_o *)v15;
    sub_B2C2F8((BattleServantConfConponent_o *)&v11->fields.eventReceiver, v15, v16, v17, v18, v19, v20, v21);
    v22 = (System_Int32_array **)StringLiteral_6790/*"FrameInFinish"*/;
    v11->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6790/*"FrameInFinish"*/;
    sub_B2C2F8((BattleServantConfConponent_o *)&v11->fields.callWhenFinished, v22, v23, v24, v25, v26, v27, v28);
    this->fields.evPointEnt = (struct EventPointEntity_o *)callback;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.evPointEnt,
      (System_Int32_array **)callback,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
  }
}


void __fastcall TitleInfoEventLeagueVsComponent__FrameInFinish(
        TitleInfoEventLeagueVsComponent_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_evPointEnt; // x0
  System_Action_o *v9; // x19
  struct EventPointEntity_o *evPointEnt; // t1

  evPointEnt = this->fields.evPointEnt;
  p_evPointEnt = (BattleServantConfConponent_o *)&this->fields.evPointEnt;
  v9 = (System_Action_o *)evPointEnt;
  p_evPointEnt->klass = 0LL;
  sub_B2C2F8(p_evPointEnt, 0LL, v2, v3, v4, v5, v6, v7);
  if ( evPointEnt )
    ActionExtensions__Call(v9, 0LL);
}


void __fastcall TitleInfoEventLeagueVsComponent__FrameOut(
        TitleInfoEventLeagueVsComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  TitleInfoEventLeagueVsComponent_c *v6; // x8
  TweenWidth_o *v7; // x0
  __int64 v8; // x1
  int endTime; // w9
  TweenWidth_o *v10; // x20
  float32x2_t v11; // d0
  float v12; // s1
  struct TitleInfoEventLeagueVsComponent_StaticFields *static_fields; // x8
  float32x2_t v14; // d2
  float z; // s3
  System_Int32_array **v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Int32_array **v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7

  if ( (byte_418BA08 & 1) == 0 )
  {
    sub_B2C35C(&TitleInfoEventLeagueVsComponent_TypeInfo, method);
    sub_B2C35C(&Method_UITweener_Begin_TweenPosition___, v3);
    sub_B2C35C(&StringLiteral_6792/*"FrameOutFinish"*/, v4);
    byte_418BA08 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v6 = TitleInfoEventLeagueVsComponent_TypeInfo;
  if ( (BYTE3(TitleInfoEventLeagueVsComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventLeagueVsComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventLeagueVsComponent_TypeInfo);
    v6 = TitleInfoEventLeagueVsComponent_TypeInfo;
  }
  v7 = UITweener__Begin_TweenWidth_(
         gameObject,
         v6->static_fields->ANIM_DURATION_FRAME_IN,
         (const MethodInfo_20A1B44 *)Method_UITweener_Begin_TweenPosition___);
  if ( !v7 )
    sub_B2C434(0LL, v8);
  endTime = this->fields.endTime;
  v10 = v7;
  *(_QWORD *)&v7->fields.from = *(_QWORD *)&this->fields.originPos.fields.z;
  *(_DWORD *)&v7->fields.updateTable = endTime;
  v11.n64_u64[0] = *(unsigned __int64 *)&this->fields.originPos.fields.z;
  v12 = *(float *)&this->fields.endTime;
  static_fields = TitleInfoEventLeagueVsComponent_TypeInfo->static_fields;
  v14.n64_u64[0] = *(unsigned __int64 *)&static_fields->RAIDBOSS_ANIM_ROOT_POS.fields.x;
  z = static_fields->RAIDBOSS_ANIM_ROOT_POS.fields.z;
  v7->fields.style = 2;
  *(float32x2_t *)(&v7->fields.updateTable + 4) = vadd_f32(v11, v14);
  *((float *)&v7->fields.mWidget + 1) = v12 + z;
  v16 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v10->fields.eventReceiver = (struct UnityEngine_GameObject_o *)v16;
  sub_B2C2F8((BattleServantConfConponent_o *)&v10->fields.eventReceiver, v16, v17, v18, v19, v20, v21, v22);
  v23 = (System_Int32_array **)StringLiteral_6792/*"FrameOutFinish"*/;
  v10->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6792/*"FrameOutFinish"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v10->fields.callWhenFinished, v23, v24, v25, v26, v27, v28, v29);
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
  __int64 v28; // x0
  System_String_o *countText; // [xsp+38h] [xbp-48h] BYREF
  System_String_o *nameText; // [xsp+48h] [xbp-38h] BYREF

  if ( (byte_418BA0B & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_GiftMaster___, evPointEnt);
    sub_B2C35C(&LocalizationManager_TypeInfo, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_B2C35C(&StringLiteral_5668/*"EVENT_POINT_VS_WIN_DIALOG_TITLE"*/, v11);
    sub_B2C35C(&StringLiteral_5667/*"EVENT_POINT_VS_WIN_DIALOG_GROUP"*/, v12);
    sub_B2C35C(&StringLiteral_5666/*"EVENT_POINT_VS_WIN_DIALOG_GET"*/, v13);
    byte_418BA0B = 1;
  }
  nameText = 0LL;
  countText = 0LL;
  if ( evPointEnt )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_23;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_GiftMaster___);
    if ( !rewardInfo || !Instance )
      goto LABEL_23;
    GiftListById = GiftMaster__GetGiftListById((GiftMaster_o *)Instance, rewardInfo->fields.giftId, 0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v17 = LocalizationManager__Get((System_String_o *)StringLiteral_5668/*"EVENT_POINT_VS_WIN_DIALOG_TITLE"*/, 0LL);
    v18 = System_String__Format(v17, (Il2CppObject *)evPointEnt->fields.name, 0LL);
    v19 = LocalizationManager__Get((System_String_o *)StringLiteral_5667/*"EVENT_POINT_VS_WIN_DIALOG_GROUP"*/, 0LL);
    winGroup1 = rewardInfo->fields.winGroup1;
    v21 = v19;
    WinGroupName = (Il2CppObject *)EventPointEntity__GetWinGroupName(evPointEnt, winGroup1, 0LL);
    Instance = (DataManager_o *)System_String__Format(v21, WinGroupName, 0LL);
    if ( !GiftListById )
      goto LABEL_23;
    max_length = GiftListById->max_length;
    v24 = (System_String_o *)Instance;
    if ( max_length >= 1 )
    {
      v25 = 0;
      while ( 1 )
      {
        if ( v25 >= (unsigned int)max_length )
        {
          v28 = sub_B2C460(Instance);
          sub_B2C400(v28, 0LL);
        }
        Instance = (DataManager_o *)GiftListById->m_Items[v25];
        if ( !Instance )
          break;
        GiftEntity__GetInfo((GiftEntity_o *)Instance, &nameText, &countText, 0LL);
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v26 = LocalizationManager__Get((System_String_o *)StringLiteral_5666/*"EVENT_POINT_VS_WIN_DIALOG_GET"*/, 0LL);
        v27 = System_String__Format_44301068(v26, (Il2CppObject *)nameText, (Il2CppObject *)countText, 0LL);
        Instance = (DataManager_o *)System_String__Concat_44305532(v24, v27, 0LL);
        max_length = GiftListById->max_length;
        ++v25;
        v24 = (System_String_o *)Instance;
        if ( v25 >= max_length )
          goto LABEL_19;
      }
LABEL_23:
      sub_B2C434(Instance, v15);
    }
LABEL_19:
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_23;
    CommonUI__OpenNotificationDialog((CommonUI_o *)Instance, v18, v24, callback, -1, 0, 0, 0, 1, 0, 1, 0, 0LL, 0LL);
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
  UnityEngine_GameObject_o *maskFade; // x0
  __int64 v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  UnityEngine_Object_o *Object_30137720; // x0
  UnityEngine_GameObject_c **v34; // x22
  UnityEngine_UI_Dropdown_DropdownItem_o *v35; // x0
  UnityEngine_GameObject_o *v36; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  __int64 v45; // x10
  System_Int32_array **v46; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  __int64 v53; // x8
  EventPointVsResultAction_o *v54; // x20
  int32_t v55; // w22
  System_Action_o *v56; // x23
  TitleInfoEventLeagueVsComponent_o *v57; // x0
  EventPointEntity_o *v58; // x1
  EventPointWinReward_o *v59; // x2
  System_Action_o *v60; // x3
  const MethodInfo *v61; // x4

  if ( (byte_418BA0A & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&winType);
    sub_B2C35C(&UnityEngine_BoxCollider_TypeInfo, v9);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_Collider___, v10);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_EventPointVsResultAction___, v11);
    sub_B2C35C(&UnityEngine_GameObject_TypeInfo, v12);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v13);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v14);
    sub_B2C35C(&Method_TitleInfoEventLeagueVsComponent___c__DisplayClass36_0__ResultEffect_b__0__, v15);
    sub_B2C35C(&TitleInfoEventLeagueVsComponent___c__DisplayClass36_0_TypeInfo, v16);
    sub_B2C35C(&StringLiteral_16847/*"bit_vs_result"*/, v17);
    byte_418BA0A = 1;
  }
  v18 = sub_B2C42C(TitleInfoEventLeagueVsComponent___c__DisplayClass36_0_TypeInfo);
  TitleInfoEventLeagueVsComponent___c__DisplayClass36_0___ctor(
    (TitleInfoEventLeagueVsComponent___c__DisplayClass36_0_o *)v18,
    0LL);
  if ( !v18 )
    goto LABEL_24;
  *(_QWORD *)(v18 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v18 + 32), (System_Int32_array **)this, v21, v22, v23, v24, v25, v26);
  *(_QWORD *)(v18 + 40) = callback;
  sub_B2C2F8((BattleServantConfConponent_o *)(v18 + 40), (System_Int32_array **)callback, v27, v28, v29, v30, v31, v32);
  if ( !winType )
  {
    ActionExtensions__Call(*(System_Action_o **)(v18 + 40), 0LL);
    return;
  }
  if ( !effectAssetData )
    goto LABEL_24;
  Object_30137720 = AssetData__GetObject_30137720(effectAssetData, (System_String_o *)StringLiteral_16847/*"bit_vs_result"*/, 0LL);
  v34 = (UnityEngine_GameObject_c **)Object_30137720;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0
    || UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    if ( Object_30137720 )
      goto LABEL_9;
LABEL_14:
    v35 = 0LL;
    goto LABEL_15;
  }
  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !v34 )
    goto LABEL_14;
LABEL_9:
  if ( *v34 == UnityEngine_GameObject_TypeInfo )
    v35 = (UnityEngine_UI_Dropdown_DropdownItem_o *)v34;
  else
    v35 = 0LL;
LABEL_15:
  maskFade = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                           v35,
                                           (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !maskFade )
    goto LABEL_24;
  v36 = maskFade;
  gameObject = UnityEngine_GameObject__get_gameObject(maskFade, 0LL);
  GameObjectExtensions__SafeSetParent_31331952(gameObject, (UnityEngine_GameObject_o *)this->fields.maskFade, 0LL);
  maskFade = (UnityEngine_GameObject_o *)this->fields.maskFade;
  if ( !maskFade )
    goto LABEL_24;
  Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     maskFade,
                                                     (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_Collider___);
  if ( !Component_srcLineSprite
    || (v45 = *(&UnityEngine_BoxCollider_TypeInfo->_2.bitflags2 + 1),
        LOBYTE((*Component_srcLineSprite)->m_Items[68]) >= (unsigned int)v45)
    && *(UnityEngine_BoxCollider_c **)(*(_QWORD *)&(*Component_srcLineSprite)->m_Items[43] + 8 * v45 - 8) == UnityEngine_BoxCollider_TypeInfo )
  {
    *(_QWORD *)(v18 + 24) = Component_srcLineSprite;
    sub_B2C2F8((BattleServantConfConponent_o *)(v18 + 24), Component_srcLineSprite, v39, v40, v41, v42, v43, v44);
    maskFade = *(UnityEngine_GameObject_o **)(v18 + 24);
    if ( maskFade )
    {
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)maskFade, 1, 0LL);
      v46 = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                     v36,
                                     (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_EventPointVsResultAction___);
      *(_QWORD *)(v18 + 16) = v46;
      sub_B2C2F8((BattleServantConfConponent_o *)(v18 + 16), v46, v47, v48, v49, v50, v51, v52);
      v53 = *(_QWORD *)&this->fields.isDispRestTime;
      if ( v53 )
      {
        v54 = *(EventPointVsResultAction_o **)(v18 + 16);
        v55 = *(_DWORD *)(v53 + 16);
        v56 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
        System_Action___ctor(
          v56,
          (Il2CppObject *)v18,
          Method_TitleInfoEventLeagueVsComponent___c__DisplayClass36_0__ResultEffect_b__0__,
          0LL);
        if ( v54 )
        {
          EventPointVsResultAction__Setup(v54, winType, v55, v56, 0LL);
          return;
        }
      }
    }
LABEL_24:
    sub_B2C434(maskFade, v20);
  }
  sub_B2C728(Component_srcLineSprite);
  TitleInfoEventLeagueVsComponent__OpenResultPointDialog(v57, v58, v59, v60, v61);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventLeagueVsComponent__Setup(
        TitleInfoEventLeagueVsComponent_o *this,
        EventPointEntity_o *eventPointEntity,
        int32_t eventId,
        AssetData_o *effectAssetData,
        bool isDispRestTime,
        const MethodInfo *method)
{
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  AssetData_o *v9; // x26
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
  __int64 v32; // x1
  __int64 v33; // x1
  TerminalPramsManager_c *v34; // x0
  __int64 splitIcon; // x0
  TotalEventPointMaster_o *MasterData_WarQuestSelectionMaster; // x24
  EventPointGroupMaster_o *v37; // x25
  struct System_Int32_array *v38; // x8
  unsigned __int64 v39; // x21
  int64_t v40; // x22
  unsigned __int64 max_length; // x9
  struct System_Int32_array *group1; // x8
  struct System_Int32_array *group2; // x8
  int64_t v44; // x27
  struct UILabel_o *restTimeLabel; // x8
  struct UILabel_o *v46; // x8
  float v47; // s0
  struct UILabel_o *v48; // x8
  int64_t normaTotalPoint; // x21
  double v50; // d8
  float v51; // s0
  struct UILabel_o *v52; // x8
  float v53; // s0
  struct UISlider_array *v54; // x8
  struct System_Int32_array *v55; // x9
  UISprite_o *v56; // x24
  Il2CppObject *v57; // x0
  System_String_o *v58; // x26
  struct UISlider_array *v59; // x8
  struct System_Int32_array *v60; // x9
  UISprite_o *v61; // x24
  struct System_Int32_array *v62; // x8
  Il2CppObject *v63; // x26
  Il2CppObject *v64; // x0
  System_String_o *v65; // x0
  struct System_Int32_array *v66; // x8
  struct System_Int32_array *v67; // x8
  __int64 v68; // x27
  unsigned __int64 v69; // x24
  Il2CppObject *v70; // x26
  unsigned __int64 v71; // x9
  Il2CppObject *v72; // x0
  struct UISprite_o *v73; // x8
  UISprite_o *v74; // x23
  Il2CppObject *v75; // x0
  System_String_o *v76; // x25
  struct UISprite_o *v77; // x8
  UISprite_o *v78; // x23
  System_String_o *v79; // x0
  struct UILabel_o *v80; // x8
  double v81; // d8
  float v82; // s0
  struct UILabel_o *v83; // x8
  struct UISlider_array *hpBarSlider; // x8
  struct System_Int32_array *v85; // x9
  UISprite_o *v86; // x23
  Il2CppObject *v87; // x0
  System_String_o *v88; // x25
  struct UISlider_array *v89; // x8
  struct System_Int32_array *v90; // x9
  UISprite_o *v91; // x23
  Il2CppObject *v92; // x0
  System_String_o *v93; // x0
  struct UISprite_o *modeName; // x8
  struct System_Int32_array *v95; // x9
  UISprite_o *rightAnchor; // x23
  Il2CppObject *v97; // x0
  System_String_o *v98; // x0
  struct UISprite_o *v99; // x8
  struct System_Int32_array *v100; // x9
  UISprite_o *bottomAnchor; // x23
  Il2CppObject *v102; // x0
  System_String_o *v103; // x0
  UnityEngine_Object_o *Object_30137720; // x0
  UnityEngine_GameObject_c **v105; // x21
  UnityEngine_UI_Dropdown_DropdownItem_o *v106; // x0
  UnityEngine_GameObject_o *v107; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  TitleInfoEventLeagueVsGaugeEffect_o *Component_srcLineSprite; // x21
  const MethodInfo *v110; // x4
  UISprite_o *colliderSp; // x21
  const MethodInfo *v112; // x1
  UISprite_o *baseWindow; // x21
  Il2CppObject *v114; // x0
  System_String_o *v115; // x0
  struct UISprite_o *hpFrame; // x8
  unsigned __int64 v117; // x21
  unsigned __int64 leftAnchor_low; // x9
  UISprite_o *v119; // x20
  UnityEngine_GameObject_o *v120; // x0
  UnityEngine_GameObject_o *v121; // x0
  __int64 v122; // x0
  AssetData_o *v123; // [xsp+10h] [xbp-70h]
  int32_t v124; // [xsp+18h] [xbp-68h] BYREF
  int32_t v125; // [xsp+1Ch] [xbp-64h] BYREF
  int32_t v126; // [xsp+28h] [xbp-58h] BYREF
  int32_t id; // [xsp+2Ch] [xbp-54h] BYREF

  v9 = effectAssetData;
  if ( (byte_418BA05 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, eventPointEntity);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventPointGroupMaster___, v13);
    sub_B2C35C(&Method_DataManager_GetMasterData_TotalEventPointMaster___, v14);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_TitleInfoEventLeagueVsGaugeEffect___, v15);
    sub_B2C35C(&UnityEngine_GameObject_TypeInfo, v16);
    sub_B2C35C(&int_TypeInfo, v17);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v18);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v19);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v21);
    sub_B2C35C(&StringLiteral_18613/*"event_vs_gauge_title_"*/, v22);
    sub_B2C35C(&StringLiteral_18610/*"event_vs_frame"*/, v23);
    sub_B2C35C(&StringLiteral_18609/*"event_vs_back"*/, v24);
    sub_B2C35C(&StringLiteral_23275/*"white00"*/, v25);
    sub_B2C35C(&StringLiteral_18612/*"event_vs_gauge_bg"*/, v26);
    sub_B2C35C(&StringLiteral_16844/*"bit_vs_gauge_part"*/, v27);
    sub_B2C35C(&StringLiteral_18614/*"event_vs_split_line"*/, v28);
    sub_B2C35C(&StringLiteral_17459/*"clear00"*/, v29);
    sub_B2C35C(&StringLiteral_18618/*"event_vs_team_icon_"*/, v30);
    sub_B2C35C(&StringLiteral_1/*""*/, v31);
    sub_B2C35C(&StringLiteral_18611/*"event_vs_gauge_"*/, v32);
    byte_418BA05 = 1;
  }
  if ( !eventPointEntity )
    return;
  *(_QWORD *)&this->fields.isDispRestTime = eventPointEntity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.isDispRestTime,
    (System_Int32_array **)eventPointEntity,
    *(System_String_array ***)&eventId,
    (System_String_array **)effectAssetData,
    (System_Boolean_array **)isDispRestTime,
    (System_Int32_array **)method,
    v6,
    v7);
  LOBYTE(this[1].klass) = isDispRestTime;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4184739 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v33);
    byte_4184739 = 1;
  }
  v34 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v34 = TerminalPramsManager_TypeInfo;
  }
  if ( v34->static_fields->_eventPointWinType_k__BackingField )
  {
    splitIcon = (__int64)this->fields.splitIcon;
    if ( !splitIcon )
      goto LABEL_128;
    MaskFade__Fadeout((MaskFade_o *)splitIcon, 1, 0.0, 0LL, 0LL);
  }
  splitIcon = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !splitIcon )
    goto LABEL_128;
  MasterData_WarQuestSelectionMaster = (TotalEventPointMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                    (DataManager_o *)splitIcon,
                                                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_TotalEventPointMaster___);
  splitIcon = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !splitIcon )
    goto LABEL_128;
  v37 = (EventPointGroupMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)splitIcon,
                                     (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventPointGroupMaster___);
  splitIcon = EventPointEntity__isBossBattle(eventPointEntity, 0LL);
  if ( (splitIcon & 1) == 0 )
  {
    group1 = eventPointEntity->fields.group1;
    if ( !group1 )
      goto LABEL_128;
    if ( group1->max_length )
    {
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_128;
      splitIcon = TotalEventPointMaster__GetPoint(
                    MasterData_WarQuestSelectionMaster,
                    eventId,
                    eventPointEntity->fields.id,
                    group1->m_Items[1],
                    0LL);
      group2 = eventPointEntity->fields.group2;
      if ( !group2 )
        goto LABEL_128;
      if ( group2->max_length )
      {
        v40 = splitIcon;
        splitIcon = TotalEventPointMaster__GetPoint(
                      MasterData_WarQuestSelectionMaster,
                      eventId,
                      eventPointEntity->fields.id,
                      group2->m_Items[1],
                      0LL);
        v44 = splitIcon;
        if ( v40 == splitIcon )
        {
          restTimeLabel = this->fields.restTimeLabel;
          if ( !restTimeLabel )
            goto LABEL_128;
          if ( !LODWORD(restTimeLabel->fields.leftAnchor) )
            goto LABEL_131;
          splitIcon = (__int64)restTimeLabel->fields.rightAnchor;
          if ( !splitIcon )
            goto LABEL_128;
          UIProgressBar__set_value((UIProgressBar_o *)splitIcon, 0.5, 0LL);
          v46 = this->fields.restTimeLabel;
          if ( !v46 )
            goto LABEL_128;
          if ( LODWORD(v46->fields.leftAnchor) <= 1 )
            goto LABEL_131;
          splitIcon = (__int64)v46->fields.bottomAnchor;
          if ( !splitIcon )
            goto LABEL_128;
          v47 = 0.5;
        }
        else
        {
          v80 = this->fields.restTimeLabel;
          if ( !v80 )
            goto LABEL_128;
          if ( !LODWORD(v80->fields.leftAnchor) )
            goto LABEL_131;
          splitIcon = (__int64)v80->fields.rightAnchor;
          if ( !splitIcon )
            goto LABEL_128;
          v81 = (double)v40 / (double)(v44 + v40);
          v82 = 1.0 - v81;
          UIProgressBar__set_value((UIProgressBar_o *)splitIcon, v82, 0LL);
          v83 = this->fields.restTimeLabel;
          if ( !v83 )
            goto LABEL_128;
          if ( LODWORD(v83->fields.leftAnchor) <= 1 )
            goto LABEL_131;
          splitIcon = (__int64)v83->fields.bottomAnchor;
          if ( !splitIcon )
            goto LABEL_128;
          v47 = v81;
        }
        UIProgressBar__set_value((UIProgressBar_o *)splitIcon, v47, 0LL);
        hpBarSlider = this->fields.hpBarSlider;
        if ( !hpBarSlider )
          goto LABEL_128;
        if ( hpBarSlider->max_length )
        {
          v85 = eventPointEntity->fields.group2;
          if ( !v85 )
            goto LABEL_128;
          if ( v85->max_length )
          {
            v86 = (UISprite_o *)hpBarSlider->m_Items[0];
            id = v85->m_Items[1];
            v87 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id);
            v88 = System_String__Concat((Il2CppObject *)StringLiteral_18611/*"event_vs_gauge_"*/, v87, 0LL);
            if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !AtlasManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
            }
            splitIcon = AtlasManager__SetEventUI(v86, v88, 0LL);
            v89 = this->fields.hpBarSlider;
            if ( !v89 )
              goto LABEL_128;
            if ( v89->max_length > 1 )
            {
              v90 = eventPointEntity->fields.group1;
              if ( !v90 )
                goto LABEL_128;
              if ( v90->max_length )
              {
                v91 = (UISprite_o *)v89->m_Items[1];
                v126 = v90->m_Items[1];
                v92 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v126);
                v93 = System_String__Concat((Il2CppObject *)StringLiteral_18611/*"event_vs_gauge_"*/, v92, 0LL);
                splitIcon = AtlasManager__SetEventUI(v91, v93, 0LL);
                modeName = this->fields.modeName;
                if ( !modeName )
                  goto LABEL_128;
                if ( LODWORD(modeName->fields.leftAnchor) )
                {
                  v95 = eventPointEntity->fields.group2;
                  if ( !v95 )
                    goto LABEL_128;
                  if ( v95->max_length )
                  {
                    rightAnchor = (UISprite_o *)modeName->fields.rightAnchor;
                    v125 = v95->m_Items[1];
                    v97 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v125);
                    v98 = System_String__Concat((Il2CppObject *)StringLiteral_18618/*"event_vs_team_icon_"*/, v97, 0LL);
                    splitIcon = AtlasManager__SetEventUI(rightAnchor, v98, 0LL);
                    v99 = this->fields.modeName;
                    if ( !v99 )
                      goto LABEL_128;
                    if ( LODWORD(v99->fields.leftAnchor) > 1 )
                    {
                      v100 = eventPointEntity->fields.group1;
                      if ( !v100 )
                        goto LABEL_128;
                      if ( v100->max_length )
                      {
                        bottomAnchor = (UISprite_o *)v99->fields.bottomAnchor;
                        v124 = v100->m_Items[1];
                        v102 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v124);
                        v103 = System_String__Concat((Il2CppObject *)StringLiteral_18618/*"event_vs_team_icon_"*/, v102, 0LL);
                        splitIcon = AtlasManager__SetEventUI(bottomAnchor, v103, 0LL);
                        if ( !v9 )
                          goto LABEL_128;
                        goto LABEL_104;
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
LABEL_131:
    v122 = sub_B2C460(splitIcon);
    sub_B2C400(v122, 0LL);
  }
  v38 = eventPointEntity->fields.group1;
  if ( !v38 )
    goto LABEL_128;
  v39 = 0LL;
  v40 = 0LL;
  while ( 1 )
  {
    max_length = v38->max_length;
    if ( (__int64)v39 >= (int)max_length )
      break;
    if ( v39 >= max_length )
      goto LABEL_131;
    if ( MasterData_WarQuestSelectionMaster )
    {
      splitIcon = TotalEventPointMaster__GetPoint(
                    MasterData_WarQuestSelectionMaster,
                    eventId,
                    eventPointEntity->fields.id,
                    v38->m_Items[v39 + 1],
                    0LL);
      v38 = eventPointEntity->fields.group1;
      v40 += splitIcon;
      ++v39;
      if ( v38 )
        continue;
    }
    goto LABEL_128;
  }
  v48 = this->fields.restTimeLabel;
  if ( !v48 )
    goto LABEL_128;
  if ( !LODWORD(v48->fields.leftAnchor) )
    goto LABEL_131;
  splitIcon = (__int64)v48->fields.rightAnchor;
  if ( !splitIcon )
    goto LABEL_128;
  normaTotalPoint = eventPointEntity->fields.normaTotalPoint;
  v50 = (double)v40 / (double)normaTotalPoint;
  v51 = 1.0 - v50;
  UIProgressBar__set_value((UIProgressBar_o *)splitIcon, v51, 0LL);
  v52 = this->fields.restTimeLabel;
  if ( !v52 )
    goto LABEL_128;
  if ( LODWORD(v52->fields.leftAnchor) <= 1 )
    goto LABEL_131;
  splitIcon = (__int64)v52->fields.bottomAnchor;
  if ( !splitIcon )
    goto LABEL_128;
  v53 = v50;
  UIProgressBar__set_value((UIProgressBar_o *)splitIcon, v53, 0LL);
  v54 = this->fields.hpBarSlider;
  if ( !v54 )
    goto LABEL_128;
  if ( !v54->max_length )
    goto LABEL_131;
  v55 = eventPointEntity->fields.group2;
  if ( !v55 )
    goto LABEL_128;
  v123 = v9;
  if ( !v55->max_length )
    goto LABEL_131;
  v56 = (UISprite_o *)v54->m_Items[0];
  id = v55->m_Items[1];
  v57 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id);
  v58 = System_String__Concat((Il2CppObject *)StringLiteral_18611/*"event_vs_gauge_"*/, v57, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  splitIcon = AtlasManager__SetEventUI(v56, v58, 0LL);
  v59 = this->fields.hpBarSlider;
  if ( !v59 )
    goto LABEL_128;
  if ( v59->max_length <= 1 )
    goto LABEL_131;
  v60 = eventPointEntity->fields.group1;
  if ( !v60 )
    goto LABEL_128;
  if ( !v60->max_length )
    goto LABEL_131;
  v61 = (UISprite_o *)v59->m_Items[1];
  v126 = v60->m_Items[1];
  splitIcon = j_il2cpp_value_box_0(int_TypeInfo, &v126);
  v62 = eventPointEntity->fields.group1;
  if ( !v62 )
    goto LABEL_128;
  if ( v62->max_length <= 1 )
    goto LABEL_131;
  v63 = (Il2CppObject *)splitIcon;
  v125 = v62->m_Items[2];
  v64 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v125);
  v65 = System_String__Concat_44385236((Il2CppObject *)StringLiteral_18611/*"event_vs_gauge_"*/, v63, v64, 0LL);
  splitIcon = AtlasManager__SetEventUI(v61, v65, 0LL);
  v66 = eventPointEntity->fields.group2;
  if ( !v66 )
    goto LABEL_128;
  if ( !v66->max_length )
    goto LABEL_131;
  if ( !v37 )
    goto LABEL_128;
  splitIcon = (__int64)EventPointGroupMaster__getEntity(v37, eventId, v66->m_Items[1], 0LL);
  v67 = eventPointEntity->fields.group1;
  if ( !v67 )
    goto LABEL_128;
  v68 = splitIcon;
  v69 = 0LL;
  v70 = (Il2CppObject *)StringLiteral_1/*""*/;
  while ( 1 )
  {
    v71 = v67->max_length;
    if ( (__int64)v69 >= (int)v71 )
      break;
    if ( v69 >= v71 )
      goto LABEL_131;
    splitIcon = (__int64)EventPointGroupMaster__getEntity(v37, eventId, v67->m_Items[v69 + 1], 0LL);
    if ( splitIcon )
    {
      id = *(_DWORD *)(splitIcon + 32);
      v72 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id);
      splitIcon = (__int64)System_String__Concat(v70, v72, 0LL);
      v67 = eventPointEntity->fields.group1;
      v70 = (Il2CppObject *)splitIcon;
      ++v69;
      if ( v67 )
        continue;
    }
    goto LABEL_128;
  }
  v73 = this->fields.modeName;
  if ( !v73 )
    goto LABEL_128;
  if ( !LODWORD(v73->fields.leftAnchor) )
    goto LABEL_131;
  if ( !v68 )
    goto LABEL_128;
  v74 = (UISprite_o *)v73->fields.rightAnchor;
  id = *(_DWORD *)(v68 + 32);
  v75 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id);
  v76 = System_String__Concat((Il2CppObject *)StringLiteral_18618/*"event_vs_team_icon_"*/, v75, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  splitIcon = AtlasManager__SetEventUI(v74, v76, 0LL);
  v77 = this->fields.modeName;
  v44 = normaTotalPoint - v40;
  if ( !v77 )
LABEL_128:
    sub_B2C434(splitIcon, v33);
  if ( LODWORD(v77->fields.leftAnchor) <= 1 )
    goto LABEL_131;
  v78 = (UISprite_o *)v77->fields.bottomAnchor;
  v79 = System_String__Concat_44305532((System_String_o *)StringLiteral_18618/*"event_vs_team_icon_"*/, (System_String_o *)v70, 0LL);
  splitIcon = AtlasManager__SetEventUI(v78, v79, 0LL);
  v9 = v123;
  if ( !v123 )
    goto LABEL_128;
LABEL_104:
  Object_30137720 = AssetData__GetObject_30137720(v9, (System_String_o *)StringLiteral_16844/*"bit_vs_gauge_part"*/, 0LL);
  v105 = (UnityEngine_GameObject_c **)Object_30137720;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( v105 )
    {
LABEL_107:
      if ( *v105 == UnityEngine_GameObject_TypeInfo )
        v106 = (UnityEngine_UI_Dropdown_DropdownItem_o *)v105;
      else
        v106 = 0LL;
      goto LABEL_112;
    }
  }
  else if ( Object_30137720 )
  {
    goto LABEL_107;
  }
  v106 = 0LL;
LABEL_112:
  splitIcon = (__int64)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                         v106,
                         (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !splitIcon )
    goto LABEL_128;
  v107 = (UnityEngine_GameObject_o *)splitIcon;
  gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)splitIcon, 0LL);
  GameObjectExtensions__SafeSetParent_31331952(gameObject, (UnityEngine_GameObject_o *)this->fields.maskSp, 0LL);
  Component_srcLineSprite = (TitleInfoEventLeagueVsGaugeEffect_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                     v107,
                                                                     (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventLeagueVsGaugeEffect___);
  splitIcon = EventPointEntity__isBossBattle(eventPointEntity, 0LL);
  if ( !Component_srcLineSprite )
    goto LABEL_128;
  TitleInfoEventLeagueVsGaugeEffect__setup(Component_srcLineSprite, v40, v44, splitIcon & 1, v110);
  colliderSp = this->fields.colliderSp;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetCommon(colliderSp, 0LL);
  AtlasManager__SetCommon(*(UISprite_o **)&this->fields.originPos.fields.x, 0LL);
  splitIcon = (__int64)this->fields.colliderSp;
  if ( !splitIcon )
    goto LABEL_128;
  UISprite__set_spriteName((UISprite_o *)splitIcon, (System_String_o *)StringLiteral_23275/*"white00"*/, 0LL);
  splitIcon = *(_QWORD *)&this->fields.originPos.fields.x;
  if ( !splitIcon )
    goto LABEL_128;
  UISprite__set_spriteName((UISprite_o *)splitIcon, (System_String_o *)StringLiteral_17459/*"clear00"*/, 0LL);
  this->fields.frameInCallBack = (struct System_Action_o *)eventPointEntity->fields.endedAt;
  TitleInfoEventLeagueVsComponent__restTimeUpdate(this, v112);
  AtlasManager__SetEventUI((UISprite_o *)this->fields.resultPanel, (System_String_o *)StringLiteral_18612/*"event_vs_gauge_bg"*/, 0LL);
  AtlasManager__SetEventUI(this->fields.hpBack, (System_String_o *)StringLiteral_18610/*"event_vs_frame"*/, 0LL);
  AtlasManager__SetEventUI((UISprite_o *)this->fields.gaugeEffectPanel, (System_String_o *)StringLiteral_18609/*"event_vs_back"*/, 0LL);
  baseWindow = this->fields.baseWindow;
  id = eventPointEntity->fields.id;
  v114 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id);
  v115 = System_String__Concat((Il2CppObject *)StringLiteral_18613/*"event_vs_gauge_title_"*/, v114, 0LL);
  AtlasManager__SetEventUI(baseWindow, v115, 0LL);
  splitIcon = (__int64)this->fields.baseWindow;
  if ( !splitIcon )
    goto LABEL_128;
  splitIcon = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)splitIcon + 840LL))(
                splitIcon,
                *(_QWORD *)(*(_QWORD *)splitIcon + 848LL));
  hpFrame = this->fields.hpFrame;
  if ( !hpFrame )
    goto LABEL_128;
  v117 = 0LL;
  while ( 1 )
  {
    leftAnchor_low = LODWORD(hpFrame->fields.leftAnchor);
    if ( (__int64)v117 >= (int)leftAnchor_low )
      break;
    if ( v117 >= leftAnchor_low )
      goto LABEL_131;
    v119 = (UISprite_o *)*((_QWORD *)&hpFrame->fields.rightAnchor + v117);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    splitIcon = AtlasManager__SetEventUI(v119, (System_String_o *)StringLiteral_18614/*"event_vs_split_line"*/, 0LL);
    hpFrame = this->fields.hpFrame;
    ++v117;
    if ( !hpFrame )
      goto LABEL_128;
  }
  v120 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPositionY(v120, -2.0, 0LL);
  v121 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  *(UnityEngine_Vector3_o *)&this->fields.originPos.fields.z = GameObjectExtensions__GetLocalPosition(v121, 0LL);
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
  EventPointEntity_o *v17; // x0
  DataManager_o *Instance; // x0
  __int64 v19; // x1
  __int64 v20; // x8
  __int64 v21; // x9
  TotalEventPointMaster_o *v22; // x25
  __int64 v23; // x8
  __int64 v24; // x9
  int64_t v25; // x24
  int64_t v26; // x23
  UnityEngine_Object_o *Object_30137720; // x0
  UnityEngine_GameObject_c **v28; // x22
  UnityEngine_UI_Dropdown_DropdownItem_o *v29; // x0
  UnityEngine_GameObject_o *v30; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v32; // x5
  __int64 v33; // x0

  if ( (byte_418BA09 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_TotalEventPointMaster___, *(_QWORD *)&groupId);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_TitleInfoEventLeagueVsGaugeFlashEffect___, v11);
    sub_B2C35C(&UnityEngine_GameObject_TypeInfo, v12);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v13);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v14);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_B2C35C(&StringLiteral_16842/*"bit_vs_gauge_flash"*/, v16);
    byte_418BA09 = 1;
  }
  v17 = *(EventPointEntity_o **)&this->fields.isDispRestTime;
  if ( v17 )
  {
    if ( EventPointEntity__isBossBattle(v17, 0LL) )
    {
      ActionExtensions__Call(callback, 0LL);
      return;
    }
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_27;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_TotalEventPointMaster___);
    v20 = *(_QWORD *)&this->fields.isDispRestTime;
    if ( !v20 )
      goto LABEL_27;
    v21 = *(_QWORD *)(v20 + 32);
    if ( !v21 )
      goto LABEL_27;
    if ( !*(_DWORD *)(v21 + 24) )
      goto LABEL_28;
    v22 = (TotalEventPointMaster_o *)Instance;
    if ( !Instance )
      goto LABEL_27;
    Instance = (DataManager_o *)TotalEventPointMaster__GetPoint(
                                  (TotalEventPointMaster_o *)Instance,
                                  eventId,
                                  *(_DWORD *)(v20 + 16),
                                  *(_DWORD *)(v21 + 32),
                                  0LL);
    v23 = *(_QWORD *)&this->fields.isDispRestTime;
    if ( !v23 )
      goto LABEL_27;
    v24 = *(_QWORD *)(v23 + 40);
    if ( !v24 )
      goto LABEL_27;
    if ( !*(_DWORD *)(v24 + 24) )
    {
LABEL_28:
      v33 = sub_B2C460(Instance);
      sub_B2C400(v33, 0LL);
    }
    v25 = (int64_t)Instance;
    Instance = (DataManager_o *)TotalEventPointMaster__GetPoint(
                                  v22,
                                  eventId,
                                  *(_DWORD *)(v23 + 16),
                                  *(_DWORD *)(v24 + 32),
                                  0LL);
    if ( !effectAssetData )
      goto LABEL_27;
    v26 = (int64_t)Instance;
    Object_30137720 = AssetData__GetObject_30137720(effectAssetData, (System_String_o *)StringLiteral_16842/*"bit_vs_gauge_flash"*/, 0LL);
    v28 = (UnityEngine_GameObject_c **)Object_30137720;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( v28 )
      {
LABEL_19:
        if ( *v28 == UnityEngine_GameObject_TypeInfo )
          v29 = (UnityEngine_UI_Dropdown_DropdownItem_o *)v28;
        else
          v29 = 0LL;
LABEL_24:
        Instance = (DataManager_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                      v29,
                                      (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( Instance )
        {
          v30 = (UnityEngine_GameObject_o *)Instance;
          gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)Instance, 0LL);
          GameObjectExtensions__SafeSetParent_31331952(gameObject, (UnityEngine_GameObject_o *)this->fields.maskSp, 0LL);
          Instance = (DataManager_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                        v30,
                                        (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventLeagueVsGaugeFlashEffect___);
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
LABEL_27:
        sub_B2C434(Instance, v19);
      }
    }
    else if ( Object_30137720 )
    {
      goto LABEL_19;
    }
    v29 = 0LL;
    goto LABEL_24;
  }
}


EventPointEntity_o *__fastcall TitleInfoEventLeagueVsComponent__getEventPointEntity(
        TitleInfoEventLeagueVsComponent_o *this,
        const MethodInfo *method)
{
  return *(EventPointEntity_o **)&this->fields.isDispRestTime;
}


void __fastcall TitleInfoEventLeagueVsComponent__restTimeUpdate(
        TitleInfoEventLeagueVsComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Behaviour_o *groupIcon; // x0
  UILabel_o *v7; // x20
  System_String_o *v8; // x0
  struct System_Action_o *frameInCallBack; // x8
  System_String_o *v10; // x19
  Il2CppObject *RestTime3; // x0

  if ( (byte_418BA06 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, method);
    sub_B2C35C(&NetworkManager_TypeInfo, v3);
    sub_B2C35C(&StringLiteral_5744/*"EVENT_VS_GAUGE_REST_TIME"*/, v4);
    byte_418BA06 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  if ( (__int64)this->fields.frameInCallBack - NetworkManager__getTime(0LL) >= 1 && LOBYTE(this[1].klass) )
  {
    groupIcon = (UnityEngine_Behaviour_o *)this->fields.groupIcon;
    if ( groupIcon )
    {
      UnityEngine_Behaviour__set_enabled(groupIcon, 1, 0LL);
      v7 = (UILabel_o *)this->fields.groupIcon;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v8 = LocalizationManager__Get((System_String_o *)StringLiteral_5744/*"EVENT_VS_GAUGE_REST_TIME"*/, 0LL);
      frameInCallBack = this->fields.frameInCallBack;
      v10 = v8;
      RestTime3 = (Il2CppObject *)LocalizationManager__GetRestTime3((int64_t)frameInCallBack, 0LL);
      groupIcon = (UnityEngine_Behaviour_o *)System_String__Format(v10, RestTime3, 0LL);
      if ( v7 )
      {
        UILabel__set_text(v7, (System_String_o *)groupIcon, 0LL);
        return;
      }
    }
LABEL_16:
    sub_B2C434(groupIcon, v5);
  }
  groupIcon = (UnityEngine_Behaviour_o *)this->fields.groupIcon;
  if ( !groupIcon )
    goto LABEL_16;
  UnityEngine_Behaviour__set_enabled(groupIcon, 0, 0LL);
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
  Il2CppObject *v2; // x19
  __int64 v3; // x1
  System_Action_o *klass; // x21
  EventPointVsResultAction_o *v5; // x20
  Il2CppClass *v6; // x8

  v2 = (Il2CppObject *)this;
  if ( (byte_4185338 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    this = (TitleInfoEventLeagueVsComponent___c__DisplayClass36_0_o *)sub_B2C35C(
                                                                        &Method_TitleInfoEventLeagueVsComponent___c__DisplayClass36_0__ResultEffect_b__1__,
                                                                        v3);
    byte_4185338 = 1;
  }
  klass = (System_Action_o *)v2[3].klass;
  v5 = (EventPointVsResultAction_o *)v2[1].klass;
  if ( !klass )
  {
    klass = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      klass,
      v2,
      Method_TitleInfoEventLeagueVsComponent___c__DisplayClass36_0__ResultEffect_b__1__,
      0LL);
    v2[3].klass = (Il2CppClass *)klass;
    sub_B2C2F8(&v2[3], klass);
  }
  v6 = v2[2].klass;
  if ( !v6 || !v5 )
    sub_B2C434(this, method);
  EventPointVsResultAction__Play(v5, klass, (MaskFade_o *)v6->_1.parent, 0.0, 0LL);
}


void __fastcall TitleInfoEventLeagueVsComponent___c__DisplayClass36_0___ResultEffect_b__1(
        TitleInfoEventLeagueVsComponent___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *effect; // x0
  UnityEngine_Object_o *gameObject; // x20
  struct TitleInfoEventLeagueVsComponent_o *_4__this; // x8
  MaskFade_o *splitIcon; // x20

  if ( (byte_4185339 & 1) == 0 )
  {
    sub_B2C35C(&AvalonSceneManager_TypeInfo, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    byte_4185339 = 1;
  }
  effect = (UnityEngine_Component_o *)this->fields.effect;
  if ( !effect )
    goto LABEL_14;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(effect, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_35314896(gameObject, 0LL);
  effect = (UnityEngine_Component_o *)this->fields.coll;
  if ( !effect )
    goto LABEL_14;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)effect, 0, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  splitIcon = (MaskFade_o *)_4__this->fields.splitIcon;
  effect = (UnityEngine_Component_o *)AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !splitIcon )
LABEL_14:
    sub_B2C434(effect, method);
  MaskFade__Fadein(splitIcon, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, this->fields.callback, 0LL);
}