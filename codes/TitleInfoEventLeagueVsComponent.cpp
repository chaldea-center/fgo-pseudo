void __fastcall TitleInfoEventLeagueVsComponent___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  struct TitleInfoEventLeagueVsComponent_StaticFields *static_fields; // x9

  if ( (byte_42ECBF9 & 1) == 0 )
  {
    sub_B5D5C4(&TitleInfoEventLeagueVsComponent_TypeInfo, v1, v2, v3);
    byte_42ECBF9 = 1;
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  UnityEngine_GameObject_o *gameObject; // x21
  TitleInfoEventLeagueVsComponent_c *v13; // x8
  TweenWidth_o *v14; // x0
  __int64 v15; // x1
  TweenWidth_o *v16; // x21
  float32x2_t *static_fields; // x8
  float v18; // s1
  int endTime; // w9
  System_Int32_array **v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Int32_array **v27; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7

  if ( (byte_42ECBF4 & 1) == 0 )
  {
    sub_B5D5C4(&TitleInfoEventLeagueVsComponent_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_UITweener_Begin_TweenPosition___, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_6872/*"FrameInFinish"*/, v9, v10, v11);
    byte_42ECBF4 = 1;
  }
  if ( *(_QWORD *)&this->fields.isDispRestTime )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v13 = TitleInfoEventLeagueVsComponent_TypeInfo;
    if ( (BYTE3(TitleInfoEventLeagueVsComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TitleInfoEventLeagueVsComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventLeagueVsComponent_TypeInfo);
      v13 = TitleInfoEventLeagueVsComponent_TypeInfo;
    }
    v14 = UITweener__Begin_TweenWidth_(
            gameObject,
            v13->static_fields->ANIM_DURATION_FRAME_IN,
            (const MethodInfo_1E72118 *)Method_UITweener_Begin_TweenPosition___);
    if ( !v14 )
      sub_B5D69C(0LL, v15);
    v16 = v14;
    static_fields = (float32x2_t *)TitleInfoEventLeagueVsComponent_TypeInfo->static_fields;
    v18 = *(float *)&this->fields.endTime + static_fields[1].n64_f32[0];
    *(float32x2_t *)&v14->fields.from = vadd_f32(
                                          *(float32x2_t *)&this->fields.originPos.fields.z,
                                          (float32x2_t)static_fields->n64_u64[0]);
    *(float *)&v14->fields.updateTable = v18;
    endTime = this->fields.endTime;
    *(_QWORD *)(&v14->fields.updateTable + 4) = *(_QWORD *)&this->fields.originPos.fields.z;
    HIDWORD(v14->fields.mWidget) = endTime;
    v14->fields.style = 2;
    v20 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v16->fields.eventReceiver = (struct UnityEngine_GameObject_o *)v20;
    sub_B5D560((BattleServantConfConponent_o *)&v16->fields.eventReceiver, v20, v21, v22, v23, v24, v25, v26);
    v27 = (System_Int32_array **)StringLiteral_6872/*"FrameInFinish"*/;
    v16->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6872/*"FrameInFinish"*/;
    sub_B5D560((BattleServantConfConponent_o *)&v16->fields.callWhenFinished, v27, v28, v29, v30, v31, v32, v33);
    this->fields.evPointEnt = (struct EventPointEntity_o *)callback;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.evPointEnt,
      (System_Int32_array **)callback,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39);
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
  sub_B5D560(p_evPointEnt, 0LL, v2, v3, v4, v5, v6, v7);
  if ( evPointEnt )
    ActionExtensions__Call(v9, 0LL);
}


void __fastcall TitleInfoEventLeagueVsComponent__FrameOut(
        TitleInfoEventLeagueVsComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UnityEngine_GameObject_o *gameObject; // x20
  TitleInfoEventLeagueVsComponent_c *v12; // x8
  TweenWidth_o *v13; // x0
  __int64 v14; // x1
  int endTime; // w9
  TweenWidth_o *v16; // x20
  float32x2_t v17; // d0
  float v18; // s1
  struct TitleInfoEventLeagueVsComponent_StaticFields *static_fields; // x8
  float32x2_t v20; // d2
  float z; // s3
  System_Int32_array **v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Int32_array **v29; // x1
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7

  if ( (byte_42ECBF5 & 1) == 0 )
  {
    sub_B5D5C4(&TitleInfoEventLeagueVsComponent_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UITweener_Begin_TweenPosition___, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_6874/*"FrameOutFinish"*/, v8, v9, v10);
    byte_42ECBF5 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v12 = TitleInfoEventLeagueVsComponent_TypeInfo;
  if ( (BYTE3(TitleInfoEventLeagueVsComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventLeagueVsComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventLeagueVsComponent_TypeInfo);
    v12 = TitleInfoEventLeagueVsComponent_TypeInfo;
  }
  v13 = UITweener__Begin_TweenWidth_(
          gameObject,
          v12->static_fields->ANIM_DURATION_FRAME_IN,
          (const MethodInfo_1E72118 *)Method_UITweener_Begin_TweenPosition___);
  if ( !v13 )
    sub_B5D69C(0LL, v14);
  endTime = this->fields.endTime;
  v16 = v13;
  *(_QWORD *)&v13->fields.from = *(_QWORD *)&this->fields.originPos.fields.z;
  *(_DWORD *)&v13->fields.updateTable = endTime;
  v17.n64_u64[0] = *(unsigned __int64 *)&this->fields.originPos.fields.z;
  v18 = *(float *)&this->fields.endTime;
  static_fields = TitleInfoEventLeagueVsComponent_TypeInfo->static_fields;
  v20.n64_u64[0] = *(unsigned __int64 *)&static_fields->RAIDBOSS_ANIM_ROOT_POS.fields.x;
  z = static_fields->RAIDBOSS_ANIM_ROOT_POS.fields.z;
  v13->fields.style = 2;
  *(float32x2_t *)(&v13->fields.updateTable + 4) = vadd_f32(v17, v20);
  *((float *)&v13->fields.mWidget + 1) = v18 + z;
  v22 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v16->fields.eventReceiver = (struct UnityEngine_GameObject_o *)v22;
  sub_B5D560((BattleServantConfConponent_o *)&v16->fields.eventReceiver, v22, v23, v24, v25, v26, v27, v28);
  v29 = (System_Int32_array **)StringLiteral_6874/*"FrameOutFinish"*/;
  v16->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6874/*"FrameOutFinish"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v16->fields.callWhenFinished, v29, v30, v31, v32, v33, v34, v35);
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
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  DataManager_o *Instance; // x0
  __int64 v27; // x1
  GiftEntity_array *GiftListById; // x21
  System_String_o *v29; // x0
  System_String_o *v30; // x20
  System_String_o *v31; // x0
  bool winGroup1; // w1
  System_String_o *v33; // x22
  Il2CppObject *WinGroupName; // x0
  int max_length; // w8
  System_String_o *v36; // x22
  int v37; // w23
  System_String_o *v38; // x0
  System_String_o *v39; // x0
  __int64 v40; // x0
  System_String_o *countText; // [xsp+38h] [xbp-48h] BYREF
  System_String_o *nameText; // [xsp+48h] [xbp-38h] BYREF

  if ( (byte_42ECBF8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_GiftMaster___, (_DWORD)evPointEnt, (_DWORD)rewardInfo, callback);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_5745/*"EVENT_POINT_VS_WIN_DIALOG_TITLE"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_5744/*"EVENT_POINT_VS_WIN_DIALOG_GROUP"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_5743/*"EVENT_POINT_VS_WIN_DIALOG_GET"*/, v23, v24, v25);
    byte_42ECBF8 = 1;
  }
  nameText = 0LL;
  countText = 0LL;
  if ( evPointEnt )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_23;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_GiftMaster___);
    if ( !rewardInfo || !Instance )
      goto LABEL_23;
    GiftListById = GiftMaster__GetGiftListById((GiftMaster_o *)Instance, rewardInfo->fields.giftId, 0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v29 = LocalizationManager__Get((System_String_o *)StringLiteral_5745/*"EVENT_POINT_VS_WIN_DIALOG_TITLE"*/, 0LL);
    v30 = System_String__Format(v29, (Il2CppObject *)evPointEnt->fields.name, 0LL);
    v31 = LocalizationManager__Get((System_String_o *)StringLiteral_5744/*"EVENT_POINT_VS_WIN_DIALOG_GROUP"*/, 0LL);
    winGroup1 = rewardInfo->fields.winGroup1;
    v33 = v31;
    WinGroupName = (Il2CppObject *)EventPointEntity__GetWinGroupName(evPointEnt, winGroup1, 0LL);
    Instance = (DataManager_o *)System_String__Format(v33, WinGroupName, 0LL);
    if ( !GiftListById )
      goto LABEL_23;
    max_length = GiftListById->max_length;
    v36 = (System_String_o *)Instance;
    if ( max_length >= 1 )
    {
      v37 = 0;
      while ( 1 )
      {
        if ( v37 >= (unsigned int)max_length )
        {
          v40 = sub_B5D6C8(Instance);
          sub_B5D668(v40, 0LL);
        }
        Instance = (DataManager_o *)GiftListById->m_Items[v37];
        if ( !Instance )
          break;
        GiftEntity__GetInfo((GiftEntity_o *)Instance, &nameText, &countText, 0LL);
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v38 = LocalizationManager__Get((System_String_o *)StringLiteral_5743/*"EVENT_POINT_VS_WIN_DIALOG_GET"*/, 0LL);
        v39 = System_String__Format_44573324(v38, (Il2CppObject *)nameText, (Il2CppObject *)countText, 0LL);
        Instance = (DataManager_o *)System_String__Concat_44577788(v36, v39, 0LL);
        max_length = GiftListById->max_length;
        ++v37;
        v36 = (System_String_o *)Instance;
        if ( v37 >= max_length )
          goto LABEL_19;
      }
LABEL_23:
      sub_B5D69C(Instance, v27);
    }
LABEL_19:
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_23;
    CommonUI__OpenNotificationDialog((CommonUI_o *)Instance, v30, v36, callback, -1, 0, 0, 0, 1, 0, 1, 0, 0LL, 0LL);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  __int64 v36; // x21
  UnityEngine_GameObject_o *maskFade; // x0
  __int64 v38; // x1
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  UnityEngine_Object_o *Object_30642600; // x0
  UnityEngine_GameObject_c **v52; // x22
  UnityEngine_UI_Dropdown_DropdownItem_o *v53; // x0
  UnityEngine_GameObject_o *v54; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  __int64 v63; // x10
  System_Int32_array **v64; // x0
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  __int64 v71; // x8
  EventPointVsResultAction_o *v72; // x20
  int32_t v73; // w22
  System_Action_o *v74; // x23
  TitleInfoEventLeagueVsComponent_o *v75; // x0
  EventPointEntity_o *v76; // x1
  EventPointWinReward_o *v77; // x2
  System_Action_o *v78; // x3
  const MethodInfo *v79; // x4

  if ( (byte_42ECBF7 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, winType, (_DWORD)effectAssetData, callback);
    sub_B5D5C4(&UnityEngine_BoxCollider_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_Collider___, v12, v13, v14);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_EventPointVsResultAction___, v15, v16, v17);
    sub_B5D5C4(&UnityEngine_GameObject_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v21, v22, v23);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&Method_TitleInfoEventLeagueVsComponent___c__DisplayClass36_0__ResultEffect_b__0__, v27, v28, v29);
    sub_B5D5C4(&TitleInfoEventLeagueVsComponent___c__DisplayClass36_0_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_17054/*"bit_vs_result"*/, v33, v34, v35);
    byte_42ECBF7 = 1;
  }
  v36 = sub_B5D694(TitleInfoEventLeagueVsComponent___c__DisplayClass36_0_TypeInfo);
  TitleInfoEventLeagueVsComponent___c__DisplayClass36_0___ctor(
    (TitleInfoEventLeagueVsComponent___c__DisplayClass36_0_o *)v36,
    0LL);
  if ( !v36 )
    goto LABEL_24;
  *(_QWORD *)(v36 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v36 + 32), (System_Int32_array **)this, v39, v40, v41, v42, v43, v44);
  *(_QWORD *)(v36 + 40) = callback;
  sub_B5D560((BattleServantConfConponent_o *)(v36 + 40), (System_Int32_array **)callback, v45, v46, v47, v48, v49, v50);
  if ( !winType )
  {
    ActionExtensions__Call(*(System_Action_o **)(v36 + 40), 0LL);
    return;
  }
  if ( !effectAssetData )
    goto LABEL_24;
  Object_30642600 = AssetData__GetObject_30642600(effectAssetData, (System_String_o *)StringLiteral_17054/*"bit_vs_result"*/, 0LL);
  v52 = (UnityEngine_GameObject_c **)Object_30642600;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0
    || UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    if ( Object_30642600 )
      goto LABEL_9;
LABEL_14:
    v53 = 0LL;
    goto LABEL_15;
  }
  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !v52 )
    goto LABEL_14;
LABEL_9:
  if ( *v52 == UnityEngine_GameObject_TypeInfo )
    v53 = (UnityEngine_UI_Dropdown_DropdownItem_o *)v52;
  else
    v53 = 0LL;
LABEL_15:
  maskFade = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                           v53,
                                           (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !maskFade )
    goto LABEL_24;
  v54 = maskFade;
  gameObject = UnityEngine_GameObject__get_gameObject(maskFade, 0LL);
  GameObjectExtensions__SafeSetParent_32436524(gameObject, (UnityEngine_GameObject_o *)this->fields.maskFade, 0LL);
  maskFade = (UnityEngine_GameObject_o *)this->fields.maskFade;
  if ( !maskFade )
    goto LABEL_24;
  Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     maskFade,
                                                     (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_Collider___);
  if ( !Component_srcLineSprite
    || (v63 = *(&UnityEngine_BoxCollider_TypeInfo->_2.bitflags2 + 1),
        LOBYTE((*Component_srcLineSprite)->m_Items[68]) >= (unsigned int)v63)
    && *(UnityEngine_BoxCollider_c **)(*(_QWORD *)&(*Component_srcLineSprite)->m_Items[43] + 8 * v63 - 8) == UnityEngine_BoxCollider_TypeInfo )
  {
    *(_QWORD *)(v36 + 24) = Component_srcLineSprite;
    sub_B5D560((BattleServantConfConponent_o *)(v36 + 24), Component_srcLineSprite, v57, v58, v59, v60, v61, v62);
    maskFade = *(UnityEngine_GameObject_o **)(v36 + 24);
    if ( maskFade )
    {
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)maskFade, 1, 0LL);
      v64 = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                     v54,
                                     (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_EventPointVsResultAction___);
      *(_QWORD *)(v36 + 16) = v64;
      sub_B5D560((BattleServantConfConponent_o *)(v36 + 16), v64, v65, v66, v67, v68, v69, v70);
      v71 = *(_QWORD *)&this->fields.isDispRestTime;
      if ( v71 )
      {
        v72 = *(EventPointVsResultAction_o **)(v36 + 16);
        v73 = *(_DWORD *)(v71 + 16);
        v74 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
        System_Action___ctor(
          v74,
          (Il2CppObject *)v36,
          Method_TitleInfoEventLeagueVsComponent___c__DisplayClass36_0__ResultEffect_b__0__,
          0LL);
        if ( v72 )
        {
          EventPointVsResultAction__Setup(v72, winType, v73, v74, 0LL);
          return;
        }
      }
    }
LABEL_24:
    sub_B5D69C(maskFade, v38);
  }
  sub_B5D990(Component_srcLineSprite);
  TitleInfoEventLeagueVsComponent__OpenResultPointDialog(v75, v76, v77, v78, v79);
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
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  int v49; // w1
  int v50; // w2
  __int64 v51; // x3
  int v52; // w1
  int v53; // w2
  __int64 v54; // x3
  int v55; // w1
  int v56; // w2
  __int64 v57; // x3
  int v58; // w1
  int v59; // w2
  __int64 v60; // x3
  int v61; // w1
  int v62; // w2
  __int64 v63; // x3
  int v64; // w1
  int v65; // w2
  __int64 v66; // x3
  int v67; // w1
  int v68; // w2
  __int64 v69; // x3
  int v70; // w1
  int v71; // w2
  __int64 v72; // x3
  __int64 v73; // x1
  int v74; // w2
  __int64 v75; // x3
  TerminalPramsManager_c *v76; // x0
  __int64 splitIcon; // x0
  TotalEventPointMaster_o *MasterData_WarQuestSelectionMaster; // x24
  EventPointGroupMaster_o *v79; // x25
  struct System_Int32_array *v80; // x8
  unsigned __int64 v81; // x21
  int64_t v82; // x22
  unsigned __int64 max_length; // x9
  struct System_Int32_array *group1; // x8
  struct System_Int32_array *group2; // x8
  int64_t v86; // x27
  struct UILabel_o *restTimeLabel; // x8
  struct UILabel_o *v88; // x8
  float v89; // s0
  struct UILabel_o *v90; // x8
  int64_t normaTotalPoint; // x21
  double v92; // d8
  float v93; // s0
  struct UILabel_o *v94; // x8
  float v95; // s0
  struct UISlider_array *v96; // x8
  struct System_Int32_array *v97; // x9
  UISprite_o *v98; // x24
  Il2CppObject *v99; // x0
  System_String_o *v100; // x26
  struct UISlider_array *v101; // x8
  struct System_Int32_array *v102; // x9
  UISprite_o *v103; // x24
  struct System_Int32_array *v104; // x8
  Il2CppObject *v105; // x26
  Il2CppObject *v106; // x0
  System_String_o *v107; // x0
  struct System_Int32_array *v108; // x8
  struct System_Int32_array *v109; // x8
  __int64 v110; // x27
  unsigned __int64 v111; // x24
  Il2CppObject *v112; // x26
  unsigned __int64 v113; // x9
  Il2CppObject *v114; // x0
  struct UISprite_o *v115; // x8
  UISprite_o *v116; // x23
  Il2CppObject *v117; // x0
  System_String_o *v118; // x25
  struct UISprite_o *v119; // x8
  UISprite_o *v120; // x23
  System_String_o *v121; // x0
  struct UILabel_o *v122; // x8
  double v123; // d8
  float v124; // s0
  struct UILabel_o *v125; // x8
  struct UISlider_array *hpBarSlider; // x8
  struct System_Int32_array *v127; // x9
  UISprite_o *v128; // x23
  Il2CppObject *v129; // x0
  System_String_o *v130; // x25
  struct UISlider_array *v131; // x8
  struct System_Int32_array *v132; // x9
  UISprite_o *v133; // x23
  Il2CppObject *v134; // x0
  System_String_o *v135; // x0
  struct UISprite_o *modeName; // x8
  struct System_Int32_array *v137; // x9
  UISprite_o *rightAnchor; // x23
  Il2CppObject *v139; // x0
  System_String_o *v140; // x0
  struct UISprite_o *v141; // x8
  struct System_Int32_array *v142; // x9
  UISprite_o *bottomAnchor; // x23
  Il2CppObject *v144; // x0
  System_String_o *v145; // x0
  UnityEngine_Object_o *Object_30642600; // x0
  UnityEngine_GameObject_c **v147; // x21
  UnityEngine_UI_Dropdown_DropdownItem_o *v148; // x0
  UnityEngine_GameObject_o *v149; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  TitleInfoEventLeagueVsGaugeEffect_o *Component_srcLineSprite; // x21
  const MethodInfo *v152; // x4
  UISprite_o *colliderSp; // x21
  const MethodInfo *v154; // x1
  UISprite_o *baseWindow; // x21
  Il2CppObject *v156; // x0
  System_String_o *v157; // x0
  struct UISprite_o *hpFrame; // x8
  unsigned __int64 v159; // x21
  unsigned __int64 leftAnchor_low; // x9
  UISprite_o *v161; // x20
  UnityEngine_GameObject_o *v162; // x0
  UnityEngine_GameObject_o *v163; // x0
  __int64 v164; // x0
  AssetData_o *v165; // [xsp+10h] [xbp-70h]
  int32_t v166; // [xsp+18h] [xbp-68h] BYREF
  int32_t v167; // [xsp+1Ch] [xbp-64h] BYREF
  int32_t v168; // [xsp+28h] [xbp-58h] BYREF
  int32_t id; // [xsp+2Ch] [xbp-54h] BYREF

  v9 = effectAssetData;
  if ( (byte_42ECBF2 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)eventPointEntity, eventId, effectAssetData);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventPointGroupMaster___, v13, v14, v15);
    sub_B5D5C4(&Method_DataManager_GetMasterData_TotalEventPointMaster___, v16, v17, v18);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_TitleInfoEventLeagueVsGaugeEffect___, v19, v20, v21);
    sub_B5D5C4(&UnityEngine_GameObject_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&int_TypeInfo, v25, v26, v27);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v28, v29, v30);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v31, v32, v33);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v34, v35, v36);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v37, v38, v39);
    sub_B5D5C4(&StringLiteral_18844/*"event_vs_gauge_title_"*/, v40, v41, v42);
    sub_B5D5C4(&StringLiteral_18841/*"event_vs_frame"*/, v43, v44, v45);
    sub_B5D5C4(&StringLiteral_18840/*"event_vs_back"*/, v46, v47, v48);
    sub_B5D5C4(&StringLiteral_23586/*"white00"*/, v49, v50, v51);
    sub_B5D5C4(&StringLiteral_18843/*"event_vs_gauge_bg"*/, v52, v53, v54);
    sub_B5D5C4(&StringLiteral_17051/*"bit_vs_gauge_part"*/, v55, v56, v57);
    sub_B5D5C4(&StringLiteral_18845/*"event_vs_split_line"*/, v58, v59, v60);
    sub_B5D5C4(&StringLiteral_17678/*"clear00"*/, v61, v62, v63);
    sub_B5D5C4(&StringLiteral_18849/*"event_vs_team_icon_"*/, v64, v65, v66);
    sub_B5D5C4(&StringLiteral_1/*""*/, v67, v68, v69);
    sub_B5D5C4(&StringLiteral_18842/*"event_vs_gauge_"*/, v70, v71, v72);
    byte_42ECBF2 = 1;
  }
  if ( !eventPointEntity )
    return;
  *(_QWORD *)&this->fields.isDispRestTime = eventPointEntity;
  sub_B5D560(
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
  if ( !byte_42E502B )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v73, v74, v75);
    byte_42E502B = 1;
  }
  v76 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v76 = TerminalPramsManager_TypeInfo;
  }
  if ( v76->static_fields->_eventPointWinType_k__BackingField )
  {
    splitIcon = (__int64)this->fields.splitIcon;
    if ( !splitIcon )
      goto LABEL_128;
    MaskFade__Fadeout((MaskFade_o *)splitIcon, 1, 0.0, 0LL, 0LL);
  }
  splitIcon = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !splitIcon )
    goto LABEL_128;
  MasterData_WarQuestSelectionMaster = (TotalEventPointMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                    (DataManager_o *)splitIcon,
                                                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_TotalEventPointMaster___);
  splitIcon = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !splitIcon )
    goto LABEL_128;
  v79 = (EventPointGroupMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)splitIcon,
                                     (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventPointGroupMaster___);
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
        v82 = splitIcon;
        splitIcon = TotalEventPointMaster__GetPoint(
                      MasterData_WarQuestSelectionMaster,
                      eventId,
                      eventPointEntity->fields.id,
                      group2->m_Items[1],
                      0LL);
        v86 = splitIcon;
        if ( v82 == splitIcon )
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
          v88 = this->fields.restTimeLabel;
          if ( !v88 )
            goto LABEL_128;
          if ( LODWORD(v88->fields.leftAnchor) <= 1 )
            goto LABEL_131;
          splitIcon = (__int64)v88->fields.bottomAnchor;
          if ( !splitIcon )
            goto LABEL_128;
          v89 = 0.5;
        }
        else
        {
          v122 = this->fields.restTimeLabel;
          if ( !v122 )
            goto LABEL_128;
          if ( !LODWORD(v122->fields.leftAnchor) )
            goto LABEL_131;
          splitIcon = (__int64)v122->fields.rightAnchor;
          if ( !splitIcon )
            goto LABEL_128;
          v123 = (double)v82 / (double)(v86 + v82);
          v124 = 1.0 - v123;
          UIProgressBar__set_value((UIProgressBar_o *)splitIcon, v124, 0LL);
          v125 = this->fields.restTimeLabel;
          if ( !v125 )
            goto LABEL_128;
          if ( LODWORD(v125->fields.leftAnchor) <= 1 )
            goto LABEL_131;
          splitIcon = (__int64)v125->fields.bottomAnchor;
          if ( !splitIcon )
            goto LABEL_128;
          v89 = v123;
        }
        UIProgressBar__set_value((UIProgressBar_o *)splitIcon, v89, 0LL);
        hpBarSlider = this->fields.hpBarSlider;
        if ( !hpBarSlider )
          goto LABEL_128;
        if ( hpBarSlider->max_length )
        {
          v127 = eventPointEntity->fields.group2;
          if ( !v127 )
            goto LABEL_128;
          if ( v127->max_length )
          {
            v128 = (UISprite_o *)hpBarSlider->m_Items[0];
            id = v127->m_Items[1];
            v129 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id);
            v130 = System_String__Concat((Il2CppObject *)StringLiteral_18842/*"event_vs_gauge_"*/, v129, 0LL);
            if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !AtlasManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
            }
            splitIcon = AtlasManager__SetEventUI(v128, v130, 0LL);
            v131 = this->fields.hpBarSlider;
            if ( !v131 )
              goto LABEL_128;
            if ( v131->max_length > 1 )
            {
              v132 = eventPointEntity->fields.group1;
              if ( !v132 )
                goto LABEL_128;
              if ( v132->max_length )
              {
                v133 = (UISprite_o *)v131->m_Items[1];
                v168 = v132->m_Items[1];
                v134 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v168);
                v135 = System_String__Concat((Il2CppObject *)StringLiteral_18842/*"event_vs_gauge_"*/, v134, 0LL);
                splitIcon = AtlasManager__SetEventUI(v133, v135, 0LL);
                modeName = this->fields.modeName;
                if ( !modeName )
                  goto LABEL_128;
                if ( LODWORD(modeName->fields.leftAnchor) )
                {
                  v137 = eventPointEntity->fields.group2;
                  if ( !v137 )
                    goto LABEL_128;
                  if ( v137->max_length )
                  {
                    rightAnchor = (UISprite_o *)modeName->fields.rightAnchor;
                    v167 = v137->m_Items[1];
                    v139 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v167);
                    v140 = System_String__Concat((Il2CppObject *)StringLiteral_18849/*"event_vs_team_icon_"*/, v139, 0LL);
                    splitIcon = AtlasManager__SetEventUI(rightAnchor, v140, 0LL);
                    v141 = this->fields.modeName;
                    if ( !v141 )
                      goto LABEL_128;
                    if ( LODWORD(v141->fields.leftAnchor) > 1 )
                    {
                      v142 = eventPointEntity->fields.group1;
                      if ( !v142 )
                        goto LABEL_128;
                      if ( v142->max_length )
                      {
                        bottomAnchor = (UISprite_o *)v141->fields.bottomAnchor;
                        v166 = v142->m_Items[1];
                        v144 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v166);
                        v145 = System_String__Concat((Il2CppObject *)StringLiteral_18849/*"event_vs_team_icon_"*/, v144, 0LL);
                        splitIcon = AtlasManager__SetEventUI(bottomAnchor, v145, 0LL);
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
    v164 = sub_B5D6C8(splitIcon);
    sub_B5D668(v164, 0LL);
  }
  v80 = eventPointEntity->fields.group1;
  if ( !v80 )
    goto LABEL_128;
  v81 = 0LL;
  v82 = 0LL;
  while ( 1 )
  {
    max_length = v80->max_length;
    if ( (__int64)v81 >= (int)max_length )
      break;
    if ( v81 >= max_length )
      goto LABEL_131;
    if ( MasterData_WarQuestSelectionMaster )
    {
      splitIcon = TotalEventPointMaster__GetPoint(
                    MasterData_WarQuestSelectionMaster,
                    eventId,
                    eventPointEntity->fields.id,
                    v80->m_Items[v81 + 1],
                    0LL);
      v80 = eventPointEntity->fields.group1;
      v82 += splitIcon;
      ++v81;
      if ( v80 )
        continue;
    }
    goto LABEL_128;
  }
  v90 = this->fields.restTimeLabel;
  if ( !v90 )
    goto LABEL_128;
  if ( !LODWORD(v90->fields.leftAnchor) )
    goto LABEL_131;
  splitIcon = (__int64)v90->fields.rightAnchor;
  if ( !splitIcon )
    goto LABEL_128;
  normaTotalPoint = eventPointEntity->fields.normaTotalPoint;
  v92 = (double)v82 / (double)normaTotalPoint;
  v93 = 1.0 - v92;
  UIProgressBar__set_value((UIProgressBar_o *)splitIcon, v93, 0LL);
  v94 = this->fields.restTimeLabel;
  if ( !v94 )
    goto LABEL_128;
  if ( LODWORD(v94->fields.leftAnchor) <= 1 )
    goto LABEL_131;
  splitIcon = (__int64)v94->fields.bottomAnchor;
  if ( !splitIcon )
    goto LABEL_128;
  v95 = v92;
  UIProgressBar__set_value((UIProgressBar_o *)splitIcon, v95, 0LL);
  v96 = this->fields.hpBarSlider;
  if ( !v96 )
    goto LABEL_128;
  if ( !v96->max_length )
    goto LABEL_131;
  v97 = eventPointEntity->fields.group2;
  if ( !v97 )
    goto LABEL_128;
  v165 = v9;
  if ( !v97->max_length )
    goto LABEL_131;
  v98 = (UISprite_o *)v96->m_Items[0];
  id = v97->m_Items[1];
  v99 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id);
  v100 = System_String__Concat((Il2CppObject *)StringLiteral_18842/*"event_vs_gauge_"*/, v99, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  splitIcon = AtlasManager__SetEventUI(v98, v100, 0LL);
  v101 = this->fields.hpBarSlider;
  if ( !v101 )
    goto LABEL_128;
  if ( v101->max_length <= 1 )
    goto LABEL_131;
  v102 = eventPointEntity->fields.group1;
  if ( !v102 )
    goto LABEL_128;
  if ( !v102->max_length )
    goto LABEL_131;
  v103 = (UISprite_o *)v101->m_Items[1];
  v168 = v102->m_Items[1];
  splitIcon = j_il2cpp_value_box_0(int_TypeInfo, &v168);
  v104 = eventPointEntity->fields.group1;
  if ( !v104 )
    goto LABEL_128;
  if ( v104->max_length <= 1 )
    goto LABEL_131;
  v105 = (Il2CppObject *)splitIcon;
  v167 = v104->m_Items[2];
  v106 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v167);
  v107 = System_String__Concat_44657492((Il2CppObject *)StringLiteral_18842/*"event_vs_gauge_"*/, v105, v106, 0LL);
  splitIcon = AtlasManager__SetEventUI(v103, v107, 0LL);
  v108 = eventPointEntity->fields.group2;
  if ( !v108 )
    goto LABEL_128;
  if ( !v108->max_length )
    goto LABEL_131;
  if ( !v79 )
    goto LABEL_128;
  splitIcon = (__int64)EventPointGroupMaster__getEntity(v79, eventId, v108->m_Items[1], 0LL);
  v109 = eventPointEntity->fields.group1;
  if ( !v109 )
    goto LABEL_128;
  v110 = splitIcon;
  v111 = 0LL;
  v112 = (Il2CppObject *)StringLiteral_1/*""*/;
  while ( 1 )
  {
    v113 = v109->max_length;
    if ( (__int64)v111 >= (int)v113 )
      break;
    if ( v111 >= v113 )
      goto LABEL_131;
    splitIcon = (__int64)EventPointGroupMaster__getEntity(v79, eventId, v109->m_Items[v111 + 1], 0LL);
    if ( splitIcon )
    {
      id = *(_DWORD *)(splitIcon + 32);
      v114 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id);
      splitIcon = (__int64)System_String__Concat(v112, v114, 0LL);
      v109 = eventPointEntity->fields.group1;
      v112 = (Il2CppObject *)splitIcon;
      ++v111;
      if ( v109 )
        continue;
    }
    goto LABEL_128;
  }
  v115 = this->fields.modeName;
  if ( !v115 )
    goto LABEL_128;
  if ( !LODWORD(v115->fields.leftAnchor) )
    goto LABEL_131;
  if ( !v110 )
    goto LABEL_128;
  v116 = (UISprite_o *)v115->fields.rightAnchor;
  id = *(_DWORD *)(v110 + 32);
  v117 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id);
  v118 = System_String__Concat((Il2CppObject *)StringLiteral_18849/*"event_vs_team_icon_"*/, v117, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  splitIcon = AtlasManager__SetEventUI(v116, v118, 0LL);
  v119 = this->fields.modeName;
  v86 = normaTotalPoint - v82;
  if ( !v119 )
LABEL_128:
    sub_B5D69C(splitIcon, v73);
  if ( LODWORD(v119->fields.leftAnchor) <= 1 )
    goto LABEL_131;
  v120 = (UISprite_o *)v119->fields.bottomAnchor;
  v121 = System_String__Concat_44577788((System_String_o *)StringLiteral_18849/*"event_vs_team_icon_"*/, (System_String_o *)v112, 0LL);
  splitIcon = AtlasManager__SetEventUI(v120, v121, 0LL);
  v9 = v165;
  if ( !v165 )
    goto LABEL_128;
LABEL_104:
  Object_30642600 = AssetData__GetObject_30642600(v9, (System_String_o *)StringLiteral_17051/*"bit_vs_gauge_part"*/, 0LL);
  v147 = (UnityEngine_GameObject_c **)Object_30642600;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( v147 )
    {
LABEL_107:
      if ( *v147 == UnityEngine_GameObject_TypeInfo )
        v148 = (UnityEngine_UI_Dropdown_DropdownItem_o *)v147;
      else
        v148 = 0LL;
      goto LABEL_112;
    }
  }
  else if ( Object_30642600 )
  {
    goto LABEL_107;
  }
  v148 = 0LL;
LABEL_112:
  splitIcon = (__int64)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                         v148,
                         (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !splitIcon )
    goto LABEL_128;
  v149 = (UnityEngine_GameObject_o *)splitIcon;
  gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)splitIcon, 0LL);
  GameObjectExtensions__SafeSetParent_32436524(gameObject, (UnityEngine_GameObject_o *)this->fields.maskSp, 0LL);
  Component_srcLineSprite = (TitleInfoEventLeagueVsGaugeEffect_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                     v149,
                                                                     (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventLeagueVsGaugeEffect___);
  splitIcon = EventPointEntity__isBossBattle(eventPointEntity, 0LL);
  if ( !Component_srcLineSprite )
    goto LABEL_128;
  TitleInfoEventLeagueVsGaugeEffect__setup(Component_srcLineSprite, v82, v86, splitIcon & 1, v152);
  colliderSp = this->fields.colliderSp;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetCommon(colliderSp, 0LL);
  AtlasManager__SetCommon(*(UISprite_o **)&this->fields.originPos.fields.x, 0LL);
  splitIcon = (__int64)this->fields.colliderSp;
  if ( !splitIcon )
    goto LABEL_128;
  UISprite__set_spriteName((UISprite_o *)splitIcon, (System_String_o *)StringLiteral_23586/*"white00"*/, 0LL);
  splitIcon = *(_QWORD *)&this->fields.originPos.fields.x;
  if ( !splitIcon )
    goto LABEL_128;
  UISprite__set_spriteName((UISprite_o *)splitIcon, (System_String_o *)StringLiteral_17678/*"clear00"*/, 0LL);
  this->fields.frameInCallBack = (struct System_Action_o *)eventPointEntity->fields.endedAt;
  TitleInfoEventLeagueVsComponent__restTimeUpdate(this, v154);
  AtlasManager__SetEventUI((UISprite_o *)this->fields.resultPanel, (System_String_o *)StringLiteral_18843/*"event_vs_gauge_bg"*/, 0LL);
  AtlasManager__SetEventUI(this->fields.hpBack, (System_String_o *)StringLiteral_18841/*"event_vs_frame"*/, 0LL);
  AtlasManager__SetEventUI((UISprite_o *)this->fields.gaugeEffectPanel, (System_String_o *)StringLiteral_18840/*"event_vs_back"*/, 0LL);
  baseWindow = this->fields.baseWindow;
  id = eventPointEntity->fields.id;
  v156 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id);
  v157 = System_String__Concat((Il2CppObject *)StringLiteral_18844/*"event_vs_gauge_title_"*/, v156, 0LL);
  AtlasManager__SetEventUI(baseWindow, v157, 0LL);
  splitIcon = (__int64)this->fields.baseWindow;
  if ( !splitIcon )
    goto LABEL_128;
  splitIcon = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)splitIcon + 840LL))(
                splitIcon,
                *(_QWORD *)(*(_QWORD *)splitIcon + 848LL));
  hpFrame = this->fields.hpFrame;
  if ( !hpFrame )
    goto LABEL_128;
  v159 = 0LL;
  while ( 1 )
  {
    leftAnchor_low = LODWORD(hpFrame->fields.leftAnchor);
    if ( (__int64)v159 >= (int)leftAnchor_low )
      break;
    if ( v159 >= leftAnchor_low )
      goto LABEL_131;
    v161 = (UISprite_o *)*((_QWORD *)&hpFrame->fields.rightAnchor + v159);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    splitIcon = AtlasManager__SetEventUI(v161, (System_String_o *)StringLiteral_18845/*"event_vs_split_line"*/, 0LL);
    hpFrame = this->fields.hpFrame;
    ++v159;
    if ( !hpFrame )
      goto LABEL_128;
  }
  v162 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPositionY(v162, -2.0, 0LL);
  v163 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  *(UnityEngine_Vector3_o *)&this->fields.originPos.fields.z = GameObjectExtensions__GetLocalPosition(v163, 0LL);
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  EventPointEntity_o *v29; // x0
  DataManager_o *Instance; // x0
  __int64 v31; // x1
  __int64 v32; // x8
  __int64 v33; // x9
  TotalEventPointMaster_o *v34; // x25
  __int64 v35; // x8
  __int64 v36; // x9
  int64_t v37; // x24
  int64_t v38; // x23
  UnityEngine_Object_o *Object_30642600; // x0
  UnityEngine_GameObject_c **v40; // x22
  UnityEngine_UI_Dropdown_DropdownItem_o *v41; // x0
  UnityEngine_GameObject_o *v42; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v44; // x5
  __int64 v45; // x0

  if ( (byte_42ECBF6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_TotalEventPointMaster___, groupId, eventId, effectAssetData);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_TitleInfoEventLeagueVsGaugeFlashEffect___, v11, v12, v13);
    sub_B5D5C4(&UnityEngine_GameObject_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v17, v18, v19);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_17049/*"bit_vs_gauge_flash"*/, v26, v27, v28);
    byte_42ECBF6 = 1;
  }
  v29 = *(EventPointEntity_o **)&this->fields.isDispRestTime;
  if ( v29 )
  {
    if ( EventPointEntity__isBossBattle(v29, 0LL) )
    {
      ActionExtensions__Call(callback, 0LL);
      return;
    }
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_27;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_TotalEventPointMaster___);
    v32 = *(_QWORD *)&this->fields.isDispRestTime;
    if ( !v32 )
      goto LABEL_27;
    v33 = *(_QWORD *)(v32 + 32);
    if ( !v33 )
      goto LABEL_27;
    if ( !*(_DWORD *)(v33 + 24) )
      goto LABEL_28;
    v34 = (TotalEventPointMaster_o *)Instance;
    if ( !Instance )
      goto LABEL_27;
    Instance = (DataManager_o *)TotalEventPointMaster__GetPoint(
                                  (TotalEventPointMaster_o *)Instance,
                                  eventId,
                                  *(_DWORD *)(v32 + 16),
                                  *(_DWORD *)(v33 + 32),
                                  0LL);
    v35 = *(_QWORD *)&this->fields.isDispRestTime;
    if ( !v35 )
      goto LABEL_27;
    v36 = *(_QWORD *)(v35 + 40);
    if ( !v36 )
      goto LABEL_27;
    if ( !*(_DWORD *)(v36 + 24) )
    {
LABEL_28:
      v45 = sub_B5D6C8(Instance);
      sub_B5D668(v45, 0LL);
    }
    v37 = (int64_t)Instance;
    Instance = (DataManager_o *)TotalEventPointMaster__GetPoint(
                                  v34,
                                  eventId,
                                  *(_DWORD *)(v35 + 16),
                                  *(_DWORD *)(v36 + 32),
                                  0LL);
    if ( !effectAssetData )
      goto LABEL_27;
    v38 = (int64_t)Instance;
    Object_30642600 = AssetData__GetObject_30642600(effectAssetData, (System_String_o *)StringLiteral_17049/*"bit_vs_gauge_flash"*/, 0LL);
    v40 = (UnityEngine_GameObject_c **)Object_30642600;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( v40 )
      {
LABEL_19:
        if ( *v40 == UnityEngine_GameObject_TypeInfo )
          v41 = (UnityEngine_UI_Dropdown_DropdownItem_o *)v40;
        else
          v41 = 0LL;
LABEL_24:
        Instance = (DataManager_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                      v41,
                                      (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( Instance )
        {
          v42 = (UnityEngine_GameObject_o *)Instance;
          gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)Instance, 0LL);
          GameObjectExtensions__SafeSetParent_32436524(gameObject, (UnityEngine_GameObject_o *)this->fields.maskSp, 0LL);
          Instance = (DataManager_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                        v42,
                                        (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventLeagueVsGaugeFlashEffect___);
          if ( Instance )
          {
            TitleInfoEventLeagueVsGaugeFlashEffect__setup(
              (TitleInfoEventLeagueVsGaugeFlashEffect_o *)Instance,
              groupId,
              v37,
              v38,
              callback,
              v44);
            return;
          }
        }
LABEL_27:
        sub_B5D69C(Instance, v31);
      }
    }
    else if ( Object_30642600 )
    {
      goto LABEL_19;
    }
    v41 = 0LL;
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  __int64 v11; // x1
  UnityEngine_Behaviour_o *groupIcon; // x0
  UILabel_o *v13; // x20
  System_String_o *v14; // x0
  struct System_Action_o *frameInCallBack; // x8
  System_String_o *v16; // x19
  Il2CppObject *RestTime3; // x0

  if ( (byte_42ECBF3 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_5821/*"EVENT_VS_GAUGE_REST_TIME"*/, v8, v9, v10);
    byte_42ECBF3 = 1;
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
      v13 = (UILabel_o *)this->fields.groupIcon;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v14 = LocalizationManager__Get((System_String_o *)StringLiteral_5821/*"EVENT_VS_GAUGE_REST_TIME"*/, 0LL);
      frameInCallBack = this->fields.frameInCallBack;
      v16 = v14;
      RestTime3 = (Il2CppObject *)LocalizationManager__GetRestTime3((int64_t)frameInCallBack, 0LL);
      groupIcon = (UnityEngine_Behaviour_o *)System_String__Format(v16, RestTime3, 0LL);
      if ( v13 )
      {
        UILabel__set_text(v13, (System_String_o *)groupIcon, 0LL);
        return;
      }
    }
LABEL_16:
    sub_B5D69C(groupIcon, v11);
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
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Action_o *klass; // x21
  EventPointVsResultAction_o *v9; // x20
  Il2CppClass *v10; // x8

  v4 = (Il2CppObject *)this;
  if ( (byte_42E623F & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    this = (TitleInfoEventLeagueVsComponent___c__DisplayClass36_0_o *)sub_B5D5C4(
                                                                        &Method_TitleInfoEventLeagueVsComponent___c__DisplayClass36_0__ResultEffect_b__1__,
                                                                        v5,
                                                                        v6,
                                                                        v7);
    byte_42E623F = 1;
  }
  klass = (System_Action_o *)v4[3].klass;
  v9 = (EventPointVsResultAction_o *)v4[1].klass;
  if ( !klass )
  {
    klass = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      klass,
      v4,
      Method_TitleInfoEventLeagueVsComponent___c__DisplayClass36_0__ResultEffect_b__1__,
      0LL);
    v4[3].klass = (Il2CppClass *)klass;
    sub_B5D560(&v4[3]);
  }
  v10 = v4[2].klass;
  if ( !v10 || !v9 )
    sub_B5D69C(this, method);
  EventPointVsResultAction__Play(v9, klass, (MaskFade_o *)v10->_1.parent, 0.0, 0LL);
}


void __fastcall TitleInfoEventLeagueVsComponent___c__DisplayClass36_0___ResultEffect_b__1(
        TitleInfoEventLeagueVsComponent___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Component_o *effect; // x0
  UnityEngine_Object_o *gameObject; // x20
  struct TitleInfoEventLeagueVsComponent_o *_4__this; // x8
  MaskFade_o *splitIcon; // x20

  if ( (byte_42E6240 & 1) == 0 )
  {
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42E6240 = 1;
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
  UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
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
    sub_B5D69C(effect, method);
  MaskFade__Fadein(splitIcon, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, this->fields.callback, 0LL);
}