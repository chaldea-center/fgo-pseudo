void __fastcall TitleInfoEventLeagueVsComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct TitleInfoEventLeagueVsComponent_StaticFields *static_fields; // x9

  if ( (byte_40FDFD2 & 1) == 0 )
  {
    sub_B16FFC(&TitleInfoEventLeagueVsComponent_TypeInfo, v1);
    byte_40FDFD2 = 1;
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
  TweenWidth_o *v10; // x21
  float32x2_t *static_fields; // x8
  float v12; // s1
  int endTime; // w9
  System_Int32_array **v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Int32_array **v21; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7

  if ( (byte_40FDFCD & 1) == 0 )
  {
    sub_B16FFC(&TitleInfoEventLeagueVsComponent_TypeInfo, callback);
    sub_B16FFC(&Method_UITweener_Begin_TweenPosition___, v5);
    sub_B16FFC(&StringLiteral_6762, v6);
    byte_40FDFCD = 1;
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
           (const MethodInfo_2254D94 *)Method_UITweener_Begin_TweenPosition___);
    if ( !v9 )
      sub_B170D4();
    v10 = v9;
    static_fields = (float32x2_t *)TitleInfoEventLeagueVsComponent_TypeInfo->static_fields;
    v12 = *(float *)&this->fields.endTime + static_fields[1].n64_f32[0];
    *(float32x2_t *)&v9->fields.from = vadd_f32(
                                         *(float32x2_t *)&this->fields.originPos.fields.z,
                                         (float32x2_t)static_fields->n64_u64[0]);
    *(float *)&v9->fields.updateTable = v12;
    endTime = this->fields.endTime;
    *(_QWORD *)(&v9->fields.updateTable + 4) = *(_QWORD *)&this->fields.originPos.fields.z;
    HIDWORD(v9->fields.mWidget) = endTime;
    v9->fields.style = 2;
    v14 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v10->fields.eventReceiver = (struct UnityEngine_GameObject_o *)v14;
    sub_B16F98((BattleServantConfConponent_o *)&v10->fields.eventReceiver, v14, v15, v16, v17, v18, v19, v20);
    v21 = (System_Int32_array **)StringLiteral_6762;
    v10->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6762;
    sub_B16F98((BattleServantConfConponent_o *)&v10->fields.callWhenFinished, v21, v22, v23, v24, v25, v26, v27);
    this->fields.evPointEnt = (struct EventPointEntity_o *)callback;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.evPointEnt,
      (System_Int32_array **)callback,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
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
  sub_B16F98(p_evPointEnt, 0LL, v2, v3, v4, v5, v6, v7);
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
  int endTime; // w9
  TweenWidth_o *v9; // x20
  float32x2_t v10; // d0
  float v11; // s1
  struct TitleInfoEventLeagueVsComponent_StaticFields *static_fields; // x8
  float32x2_t v13; // d2
  float z; // s3
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

  if ( (byte_40FDFCE & 1) == 0 )
  {
    sub_B16FFC(&TitleInfoEventLeagueVsComponent_TypeInfo, method);
    sub_B16FFC(&Method_UITweener_Begin_TweenPosition___, v3);
    sub_B16FFC(&StringLiteral_6764, v4);
    byte_40FDFCE = 1;
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
         (const MethodInfo_2254D94 *)Method_UITweener_Begin_TweenPosition___);
  if ( !v7 )
    sub_B170D4();
  endTime = this->fields.endTime;
  v9 = v7;
  *(_QWORD *)&v7->fields.from = *(_QWORD *)&this->fields.originPos.fields.z;
  *(_DWORD *)&v7->fields.updateTable = endTime;
  v10.n64_u64[0] = *(unsigned __int64 *)&this->fields.originPos.fields.z;
  v11 = *(float *)&this->fields.endTime;
  static_fields = TitleInfoEventLeagueVsComponent_TypeInfo->static_fields;
  v13.n64_u64[0] = *(unsigned __int64 *)&static_fields->RAIDBOSS_ANIM_ROOT_POS.fields.x;
  z = static_fields->RAIDBOSS_ANIM_ROOT_POS.fields.z;
  v7->fields.style = 2;
  *(float32x2_t *)(&v7->fields.updateTable + 4) = vadd_f32(v10, v13);
  *((float *)&v7->fields.mWidget + 1) = v11 + z;
  v15 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v9->fields.eventReceiver = (struct UnityEngine_GameObject_o *)v15;
  sub_B16F98((BattleServantConfConponent_o *)&v9->fields.eventReceiver, v15, v16, v17, v18, v19, v20, v21);
  v22 = (System_Int32_array **)StringLiteral_6764;
  v9->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6764;
  sub_B16F98((BattleServantConfConponent_o *)&v9->fields.callWhenFinished, v22, v23, v24, v25, v26, v27, v28);
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
  WebViewManager_o *Instance; // x0
  GiftMaster_o *MasterData_WarQuestSelectionMaster; // x0
  GiftEntity_array *GiftListById; // x21
  System_String_o *v17; // x0
  System_String_o *v18; // x20
  System_String_o *v19; // x0
  bool winGroup1; // w1
  System_String_o *v21; // x22
  Il2CppObject *WinGroupName; // x0
  System_String_o *v23; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  int max_length; // w8
  System_String_o *v27; // x22
  int v28; // w23
  GiftEntity_o *v29; // x0
  System_String_o *v30; // x0
  System_String_o *v31; // x0
  CommonUI_o *v32; // x0
  System_String_o *countText; // [xsp+38h] [xbp-48h] BYREF
  System_String_o *nameText; // [xsp+48h] [xbp-38h] BYREF

  if ( (byte_40FDFD1 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_GiftMaster___, evPointEnt);
    sub_B16FFC(&LocalizationManager_TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_B16FFC(&StringLiteral_5652, v11);
    sub_B16FFC(&StringLiteral_5651, v12);
    sub_B16FFC(&StringLiteral_5650, v13);
    byte_40FDFD1 = 1;
  }
  nameText = 0LL;
  countText = 0LL;
  if ( evPointEnt )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_23;
    MasterData_WarQuestSelectionMaster = (GiftMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                           (DataManager_o *)Instance,
                                                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_GiftMaster___);
    if ( !rewardInfo || !MasterData_WarQuestSelectionMaster )
      goto LABEL_23;
    GiftListById = GiftMaster__GetGiftListById(MasterData_WarQuestSelectionMaster, rewardInfo->fields.giftId, 0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v17 = LocalizationManager__Get((System_String_o *)StringLiteral_5652, 0LL);
    v18 = System_String__Format(v17, (Il2CppObject *)evPointEnt->fields.name, 0LL);
    v19 = LocalizationManager__Get((System_String_o *)StringLiteral_5651, 0LL);
    winGroup1 = rewardInfo->fields.winGroup1;
    v21 = v19;
    WinGroupName = (Il2CppObject *)EventPointEntity__GetWinGroupName(evPointEnt, winGroup1, 0LL);
    v23 = System_String__Format(v21, WinGroupName, 0LL);
    if ( !GiftListById )
      goto LABEL_23;
    max_length = GiftListById->max_length;
    v27 = v23;
    if ( max_length >= 1 )
    {
      v28 = 0;
      while ( 1 )
      {
        if ( v28 >= (unsigned int)max_length )
        {
          sub_B17100(v23, v24, v25);
          sub_B170A0();
        }
        v29 = GiftListById->m_Items[v28];
        if ( !v29 )
          break;
        GiftEntity__GetInfo(v29, &nameText, &countText, 0LL);
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v30 = LocalizationManager__Get((System_String_o *)StringLiteral_5650, 0LL);
        v31 = System_String__Format_43739268(v30, (Il2CppObject *)nameText, (Il2CppObject *)countText, 0LL);
        v23 = System_String__Concat_43743732(v27, v31, 0LL);
        max_length = GiftListById->max_length;
        ++v28;
        v27 = v23;
        if ( v28 >= max_length )
          goto LABEL_19;
      }
LABEL_23:
      sub_B170D4();
    }
LABEL_19:
    v32 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !v32 )
      goto LABEL_23;
    CommonUI__OpenNotificationDialog(v32, v18, v27, callback, -1, 0, 0, 0, 1, 0, 1, 0, 0LL, 0LL);
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
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  UnityEngine_Object_o *Object_29932412; // x0
  UnityEngine_GameObject_c **v32; // x22
  UnityEngine_UI_Dropdown_DropdownItem_o *v33; // x0
  UnityEngine_GameObject_o *v34; // x0
  UnityEngine_GameObject_o *v35; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *maskFade; // x0
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  __int64 v45; // x10
  UnityEngine_Collider_o *v46; // x0
  System_Int32_array **v47; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x3
  __int64 v57; // x4
  __int64 v58; // x8
  EventPointVsResultAction_o *v59; // x20
  int32_t v60; // w22
  System_Action_o *v61; // x23
  TitleInfoEventLeagueVsComponent_o *v62; // x0
  EventPointEntity_o *v63; // x1
  EventPointWinReward_o *v64; // x2
  System_Action_o *v65; // x3
  const MethodInfo *v66; // x4

  if ( (byte_40FDFD0 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&winType);
    sub_B16FFC(&UnityEngine_BoxCollider_TypeInfo, v9);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_Collider___, v10);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_EventPointVsResultAction___, v11);
    sub_B16FFC(&UnityEngine_GameObject_TypeInfo, v12);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v13);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v14);
    sub_B16FFC(&Method_TitleInfoEventLeagueVsComponent___c__DisplayClass36_0__ResultEffect_b__0__, v15);
    sub_B16FFC(&TitleInfoEventLeagueVsComponent___c__DisplayClass36_0_TypeInfo, v16);
    sub_B16FFC(&StringLiteral_16781, v17);
    byte_40FDFD0 = 1;
  }
  v18 = sub_B170CC(
          TitleInfoEventLeagueVsComponent___c__DisplayClass36_0_TypeInfo,
          *(_QWORD *)&winType,
          effectAssetData,
          callback,
          method);
  TitleInfoEventLeagueVsComponent___c__DisplayClass36_0___ctor(
    (TitleInfoEventLeagueVsComponent___c__DisplayClass36_0_o *)v18,
    0LL);
  if ( !v18 )
    goto LABEL_24;
  *(_QWORD *)(v18 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v18 + 32), (System_Int32_array **)this, v19, v20, v21, v22, v23, v24);
  *(_QWORD *)(v18 + 40) = callback;
  sub_B16F98((BattleServantConfConponent_o *)(v18 + 40), (System_Int32_array **)callback, v25, v26, v27, v28, v29, v30);
  if ( !winType )
  {
    ActionExtensions__Call(*(System_Action_o **)(v18 + 40), 0LL);
    return;
  }
  if ( !effectAssetData )
    goto LABEL_24;
  Object_29932412 = AssetData__GetObject_29932412(effectAssetData, (System_String_o *)StringLiteral_16781, 0LL);
  v32 = (UnityEngine_GameObject_c **)Object_29932412;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0
    || UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    if ( Object_29932412 )
      goto LABEL_9;
LABEL_14:
    v33 = 0LL;
    goto LABEL_15;
  }
  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !v32 )
    goto LABEL_14;
LABEL_9:
  if ( *v32 == UnityEngine_GameObject_TypeInfo )
    v33 = (UnityEngine_UI_Dropdown_DropdownItem_o *)v32;
  else
    v33 = 0LL;
LABEL_15:
  v34 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                      v33,
                                      (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v34 )
    goto LABEL_24;
  v35 = v34;
  gameObject = UnityEngine_GameObject__get_gameObject(v34, 0LL);
  GameObjectExtensions__SafeSetParent_27425996(gameObject, (UnityEngine_GameObject_o *)this->fields.maskFade, 0LL);
  maskFade = (UnityEngine_GameObject_o *)this->fields.maskFade;
  if ( !maskFade )
    goto LABEL_24;
  Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     maskFade,
                                                     (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_Collider___);
  if ( !Component_srcLineSprite
    || (v45 = *(&UnityEngine_BoxCollider_TypeInfo->_2.bitflags2 + 1),
        LOBYTE((*Component_srcLineSprite)->m_Items[68]) >= (unsigned int)v45)
    && *(UnityEngine_BoxCollider_c **)(*(_QWORD *)&(*Component_srcLineSprite)->m_Items[43] + 8 * v45 - 8) == UnityEngine_BoxCollider_TypeInfo )
  {
    *(_QWORD *)(v18 + 24) = Component_srcLineSprite;
    sub_B16F98((BattleServantConfConponent_o *)(v18 + 24), Component_srcLineSprite, v39, v40, v41, v42, v43, v44);
    v46 = *(UnityEngine_Collider_o **)(v18 + 24);
    if ( v46 )
    {
      UnityEngine_Collider__set_enabled(v46, 1, 0LL);
      v47 = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                     v35,
                                     (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_EventPointVsResultAction___);
      *(_QWORD *)(v18 + 16) = v47;
      sub_B16F98((BattleServantConfConponent_o *)(v18 + 16), v47, v48, v49, v50, v51, v52, v53);
      v58 = *(_QWORD *)&this->fields.isDispRestTime;
      if ( v58 )
      {
        v59 = *(EventPointVsResultAction_o **)(v18 + 16);
        v60 = *(_DWORD *)(v58 + 16);
        v61 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v54, v55, v56, v57);
        System_Action___ctor(
          v61,
          (Il2CppObject *)v18,
          Method_TitleInfoEventLeagueVsComponent___c__DisplayClass36_0__ResultEffect_b__0__,
          0LL);
        if ( v59 )
        {
          EventPointVsResultAction__Setup(v59, winType, v60, v61, 0LL);
          return;
        }
      }
    }
LABEL_24:
    sub_B170D4();
  }
  sub_B173C8(Component_srcLineSprite);
  TitleInfoEventLeagueVsComponent__OpenResultPointDialog(v62, v63, v64, v65, v66);
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
  MaskFade_o *splitIcon; // x0
  WebViewManager_o *Instance; // x0
  TotalEventPointMaster_o *MasterData_WarQuestSelectionMaster; // x24
  WebViewManager_o *v38; // x0
  EventPointGroupMaster_o *v39; // x25
  __int64 isBossBattle; // x0
  __int64 v41; // x1
  __int64 v42; // x2
  struct System_Int32_array *v43; // x8
  unsigned __int64 v44; // x21
  int64_t v45; // x22
  unsigned __int64 max_length; // x9
  struct System_Int32_array *group1; // x8
  struct System_Int32_array *group2; // x8
  int64_t v49; // x27
  struct UILabel_o *restTimeLabel; // x8
  UIProgressBar_o *rightAnchor; // x0
  struct UILabel_o *v52; // x8
  UIProgressBar_o *bottomAnchor; // x0
  float v54; // s0
  struct UILabel_o *v55; // x8
  UIProgressBar_o *v56; // x0
  int64_t normaTotalPoint; // x21
  double v58; // d8
  float v59; // s0
  struct UILabel_o *v60; // x8
  UIProgressBar_o *v61; // x0
  float v62; // s0
  struct UISlider_array *v63; // x8
  struct System_Int32_array *v64; // x9
  UISprite_o *v65; // x24
  Il2CppObject *v66; // x0
  System_String_o *v67; // x26
  struct UISlider_array *v68; // x8
  struct System_Int32_array *v69; // x9
  UISprite_o *v70; // x24
  struct System_Int32_array *v71; // x8
  Il2CppObject *v72; // x26
  Il2CppObject *v73; // x0
  System_String_o *v74; // x0
  struct System_Int32_array *v75; // x8
  struct System_Int32_array *v76; // x8
  __int64 v77; // x27
  unsigned __int64 v78; // x24
  Il2CppObject *v79; // x26
  unsigned __int64 v80; // x9
  EventPointGroupEntity_o *Entity; // x0
  Il2CppObject *v82; // x0
  struct UISprite_o *v83; // x8
  UISprite_o *v84; // x23
  Il2CppObject *v85; // x0
  System_String_o *v86; // x25
  struct UISprite_o *v87; // x8
  UISprite_o *v88; // x23
  System_String_o *v89; // x0
  struct UILabel_o *v90; // x8
  UIProgressBar_o *v91; // x0
  double v92; // d8
  float v93; // s0
  struct UILabel_o *v94; // x8
  struct UISlider_array *hpBarSlider; // x8
  struct System_Int32_array *v96; // x9
  UISprite_o *v97; // x23
  Il2CppObject *v98; // x0
  System_String_o *v99; // x25
  struct UISlider_array *v100; // x8
  struct System_Int32_array *v101; // x9
  UISprite_o *v102; // x23
  Il2CppObject *v103; // x0
  System_String_o *v104; // x0
  struct UISprite_o *modeName; // x8
  struct System_Int32_array *v106; // x9
  UISprite_o *v107; // x23
  Il2CppObject *v108; // x0
  System_String_o *v109; // x0
  struct UISprite_o *v110; // x8
  struct System_Int32_array *v111; // x9
  UISprite_o *v112; // x23
  Il2CppObject *v113; // x0
  System_String_o *v114; // x0
  UnityEngine_Object_o *Object_29932412; // x0
  UnityEngine_GameObject_c **v116; // x21
  UnityEngine_UI_Dropdown_DropdownItem_o *v117; // x0
  UnityEngine_GameObject_o *v118; // x0
  UnityEngine_GameObject_o *v119; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  TitleInfoEventLeagueVsGaugeEffect_o *Component_srcLineSprite; // x21
  bool v122; // w0
  const MethodInfo *v123; // x4
  UISprite_o *colliderSp; // x21
  UISprite_o *v125; // x0
  UISprite_o *v126; // x0
  const MethodInfo *v127; // x1
  UISprite_o *baseWindow; // x21
  Il2CppObject *v129; // x0
  System_String_o *v130; // x0
  struct UISprite_o *v131; // x0
  struct UISprite_o *hpFrame; // x8
  unsigned __int64 v133; // x21
  unsigned __int64 leftAnchor_low; // x9
  UISprite_o *v135; // x20
  UnityEngine_GameObject_o *v136; // x0
  UnityEngine_GameObject_o *v137; // x0
  AssetData_o *v138; // [xsp+10h] [xbp-70h]
  int32_t v139; // [xsp+18h] [xbp-68h] BYREF
  int32_t v140; // [xsp+1Ch] [xbp-64h] BYREF
  int32_t v141; // [xsp+28h] [xbp-58h] BYREF
  int32_t iconId; // [xsp+2Ch] [xbp-54h] BYREF

  v9 = effectAssetData;
  if ( (byte_40FDFCB & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, eventPointEntity);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventPointGroupMaster___, v13);
    sub_B16FFC(&Method_DataManager_GetMasterData_TotalEventPointMaster___, v14);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_TitleInfoEventLeagueVsGaugeEffect___, v15);
    sub_B16FFC(&UnityEngine_GameObject_TypeInfo, v16);
    sub_B16FFC(&int_TypeInfo, v17);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v18);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v19);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v21);
    sub_B16FFC(&StringLiteral_18543, v22);
    sub_B16FFC(&StringLiteral_18540, v23);
    sub_B16FFC(&StringLiteral_18539, v24);
    sub_B16FFC(&StringLiteral_23181, v25);
    sub_B16FFC(&StringLiteral_18542, v26);
    sub_B16FFC(&StringLiteral_16778, v27);
    sub_B16FFC(&StringLiteral_18544, v28);
    sub_B16FFC(&StringLiteral_17393, v29);
    sub_B16FFC(&StringLiteral_18548, v30);
    sub_B16FFC(&StringLiteral_1, v31);
    sub_B16FFC(&StringLiteral_18541, v32);
    byte_40FDFCB = 1;
  }
  if ( !eventPointEntity )
    return;
  *(_QWORD *)&this->fields.isDispRestTime = eventPointEntity;
  sub_B16F98(
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
  if ( !byte_40F6E47 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v33);
    byte_40F6E47 = 1;
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
    splitIcon = (MaskFade_o *)this->fields.splitIcon;
    if ( !splitIcon )
      goto LABEL_128;
    MaskFade__Fadeout(splitIcon, 1, 0.0, 0LL, 0LL);
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_128;
  MasterData_WarQuestSelectionMaster = (TotalEventPointMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                    (DataManager_o *)Instance,
                                                                    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_TotalEventPointMaster___);
  v38 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v38 )
    goto LABEL_128;
  v39 = (EventPointGroupMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)v38,
                                     (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventPointGroupMaster___);
  isBossBattle = EventPointEntity__isBossBattle(eventPointEntity, 0LL);
  if ( (isBossBattle & 1) == 0 )
  {
    group1 = eventPointEntity->fields.group1;
    if ( !group1 )
      goto LABEL_128;
    if ( group1->max_length )
    {
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_128;
      isBossBattle = TotalEventPointMaster__GetPoint(
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
        v45 = isBossBattle;
        isBossBattle = TotalEventPointMaster__GetPoint(
                         MasterData_WarQuestSelectionMaster,
                         eventId,
                         eventPointEntity->fields.id,
                         group2->m_Items[1],
                         0LL);
        v49 = isBossBattle;
        if ( v45 == isBossBattle )
        {
          restTimeLabel = this->fields.restTimeLabel;
          if ( !restTimeLabel )
            goto LABEL_128;
          if ( !LODWORD(restTimeLabel->fields.leftAnchor) )
            goto LABEL_131;
          rightAnchor = (UIProgressBar_o *)restTimeLabel->fields.rightAnchor;
          if ( !rightAnchor )
            goto LABEL_128;
          UIProgressBar__set_value(rightAnchor, 0.5, 0LL);
          v52 = this->fields.restTimeLabel;
          if ( !v52 )
            goto LABEL_128;
          if ( LODWORD(v52->fields.leftAnchor) <= 1 )
            goto LABEL_131;
          bottomAnchor = (UIProgressBar_o *)v52->fields.bottomAnchor;
          if ( !bottomAnchor )
            goto LABEL_128;
          v54 = 0.5;
        }
        else
        {
          v90 = this->fields.restTimeLabel;
          if ( !v90 )
            goto LABEL_128;
          if ( !LODWORD(v90->fields.leftAnchor) )
            goto LABEL_131;
          v91 = (UIProgressBar_o *)v90->fields.rightAnchor;
          if ( !v91 )
            goto LABEL_128;
          v92 = (double)v45 / (double)(v49 + v45);
          v93 = 1.0 - v92;
          UIProgressBar__set_value(v91, v93, 0LL);
          v94 = this->fields.restTimeLabel;
          if ( !v94 )
            goto LABEL_128;
          if ( LODWORD(v94->fields.leftAnchor) <= 1 )
            goto LABEL_131;
          bottomAnchor = (UIProgressBar_o *)v94->fields.bottomAnchor;
          if ( !bottomAnchor )
            goto LABEL_128;
          v54 = v92;
        }
        UIProgressBar__set_value(bottomAnchor, v54, 0LL);
        hpBarSlider = this->fields.hpBarSlider;
        if ( !hpBarSlider )
          goto LABEL_128;
        if ( hpBarSlider->max_length )
        {
          v96 = eventPointEntity->fields.group2;
          if ( !v96 )
            goto LABEL_128;
          if ( v96->max_length )
          {
            v97 = (UISprite_o *)hpBarSlider->m_Items[0];
            iconId = v96->m_Items[1];
            v98 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId);
            v99 = System_String__Concat((Il2CppObject *)StringLiteral_18541, v98, 0LL);
            if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !AtlasManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
            }
            isBossBattle = AtlasManager__SetEventUI(v97, v99, 0LL);
            v100 = this->fields.hpBarSlider;
            if ( !v100 )
              goto LABEL_128;
            if ( v100->max_length > 1 )
            {
              v101 = eventPointEntity->fields.group1;
              if ( !v101 )
                goto LABEL_128;
              if ( v101->max_length )
              {
                v102 = (UISprite_o *)v100->m_Items[1];
                v141 = v101->m_Items[1];
                v103 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v141);
                v104 = System_String__Concat((Il2CppObject *)StringLiteral_18541, v103, 0LL);
                isBossBattle = AtlasManager__SetEventUI(v102, v104, 0LL);
                modeName = this->fields.modeName;
                if ( !modeName )
                  goto LABEL_128;
                if ( LODWORD(modeName->fields.leftAnchor) )
                {
                  v106 = eventPointEntity->fields.group2;
                  if ( !v106 )
                    goto LABEL_128;
                  if ( v106->max_length )
                  {
                    v107 = (UISprite_o *)modeName->fields.rightAnchor;
                    v140 = v106->m_Items[1];
                    v108 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v140);
                    v109 = System_String__Concat((Il2CppObject *)StringLiteral_18548, v108, 0LL);
                    isBossBattle = AtlasManager__SetEventUI(v107, v109, 0LL);
                    v110 = this->fields.modeName;
                    if ( !v110 )
                      goto LABEL_128;
                    if ( LODWORD(v110->fields.leftAnchor) > 1 )
                    {
                      v111 = eventPointEntity->fields.group1;
                      if ( !v111 )
                        goto LABEL_128;
                      if ( v111->max_length )
                      {
                        v112 = (UISprite_o *)v110->fields.bottomAnchor;
                        v139 = v111->m_Items[1];
                        v113 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v139);
                        v114 = System_String__Concat((Il2CppObject *)StringLiteral_18548, v113, 0LL);
                        AtlasManager__SetEventUI(v112, v114, 0LL);
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
    sub_B17100(isBossBattle, v41, v42);
    sub_B170A0();
  }
  v43 = eventPointEntity->fields.group1;
  if ( !v43 )
    goto LABEL_128;
  v44 = 0LL;
  v45 = 0LL;
  while ( 1 )
  {
    max_length = v43->max_length;
    if ( (__int64)v44 >= (int)max_length )
      break;
    if ( v44 >= max_length )
      goto LABEL_131;
    if ( MasterData_WarQuestSelectionMaster )
    {
      isBossBattle = TotalEventPointMaster__GetPoint(
                       MasterData_WarQuestSelectionMaster,
                       eventId,
                       eventPointEntity->fields.id,
                       v43->m_Items[v44 + 1],
                       0LL);
      v43 = eventPointEntity->fields.group1;
      v45 += isBossBattle;
      ++v44;
      if ( v43 )
        continue;
    }
    goto LABEL_128;
  }
  v55 = this->fields.restTimeLabel;
  if ( !v55 )
    goto LABEL_128;
  if ( !LODWORD(v55->fields.leftAnchor) )
    goto LABEL_131;
  v56 = (UIProgressBar_o *)v55->fields.rightAnchor;
  if ( !v56 )
    goto LABEL_128;
  normaTotalPoint = eventPointEntity->fields.normaTotalPoint;
  v58 = (double)v45 / (double)normaTotalPoint;
  v59 = 1.0 - v58;
  UIProgressBar__set_value(v56, v59, 0LL);
  v60 = this->fields.restTimeLabel;
  if ( !v60 )
    goto LABEL_128;
  if ( LODWORD(v60->fields.leftAnchor) <= 1 )
    goto LABEL_131;
  v61 = (UIProgressBar_o *)v60->fields.bottomAnchor;
  if ( !v61 )
    goto LABEL_128;
  v62 = v58;
  UIProgressBar__set_value(v61, v62, 0LL);
  v63 = this->fields.hpBarSlider;
  if ( !v63 )
    goto LABEL_128;
  if ( !v63->max_length )
    goto LABEL_131;
  v64 = eventPointEntity->fields.group2;
  if ( !v64 )
    goto LABEL_128;
  v138 = v9;
  if ( !v64->max_length )
    goto LABEL_131;
  v65 = (UISprite_o *)v63->m_Items[0];
  iconId = v64->m_Items[1];
  v66 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId);
  v67 = System_String__Concat((Il2CppObject *)StringLiteral_18541, v66, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  isBossBattle = AtlasManager__SetEventUI(v65, v67, 0LL);
  v68 = this->fields.hpBarSlider;
  if ( !v68 )
    goto LABEL_128;
  if ( v68->max_length <= 1 )
    goto LABEL_131;
  v69 = eventPointEntity->fields.group1;
  if ( !v69 )
    goto LABEL_128;
  if ( !v69->max_length )
    goto LABEL_131;
  v70 = (UISprite_o *)v68->m_Items[1];
  v141 = v69->m_Items[1];
  isBossBattle = j_il2cpp_value_box_0(int_TypeInfo, &v141);
  v71 = eventPointEntity->fields.group1;
  if ( !v71 )
    goto LABEL_128;
  if ( v71->max_length <= 1 )
    goto LABEL_131;
  v72 = (Il2CppObject *)isBossBattle;
  v140 = v71->m_Items[2];
  v73 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v140);
  v74 = System_String__Concat_43823436((Il2CppObject *)StringLiteral_18541, v72, v73, 0LL);
  isBossBattle = AtlasManager__SetEventUI(v70, v74, 0LL);
  v75 = eventPointEntity->fields.group2;
  if ( !v75 )
    goto LABEL_128;
  if ( !v75->max_length )
    goto LABEL_131;
  if ( !v39 )
    goto LABEL_128;
  isBossBattle = (__int64)EventPointGroupMaster__getEntity(v39, eventId, v75->m_Items[1], 0LL);
  v76 = eventPointEntity->fields.group1;
  if ( !v76 )
    goto LABEL_128;
  v77 = isBossBattle;
  v78 = 0LL;
  v79 = (Il2CppObject *)StringLiteral_1;
  while ( 1 )
  {
    v80 = v76->max_length;
    if ( (__int64)v78 >= (int)v80 )
      break;
    if ( v78 >= v80 )
      goto LABEL_131;
    Entity = EventPointGroupMaster__getEntity(v39, eventId, v76->m_Items[v78 + 1], 0LL);
    if ( Entity )
    {
      iconId = Entity->fields.iconId;
      v82 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId);
      isBossBattle = (__int64)System_String__Concat(v79, v82, 0LL);
      v76 = eventPointEntity->fields.group1;
      v79 = (Il2CppObject *)isBossBattle;
      ++v78;
      if ( v76 )
        continue;
    }
    goto LABEL_128;
  }
  v83 = this->fields.modeName;
  if ( !v83 )
    goto LABEL_128;
  if ( !LODWORD(v83->fields.leftAnchor) )
    goto LABEL_131;
  if ( !v77 )
    goto LABEL_128;
  v84 = (UISprite_o *)v83->fields.rightAnchor;
  iconId = *(_DWORD *)(v77 + 32);
  v85 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId);
  v86 = System_String__Concat((Il2CppObject *)StringLiteral_18548, v85, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  isBossBattle = AtlasManager__SetEventUI(v84, v86, 0LL);
  v87 = this->fields.modeName;
  v49 = normaTotalPoint - v45;
  if ( !v87 )
LABEL_128:
    sub_B170D4();
  if ( LODWORD(v87->fields.leftAnchor) <= 1 )
    goto LABEL_131;
  v88 = (UISprite_o *)v87->fields.bottomAnchor;
  v89 = System_String__Concat_43743732((System_String_o *)StringLiteral_18548, (System_String_o *)v79, 0LL);
  AtlasManager__SetEventUI(v88, v89, 0LL);
  v9 = v138;
  if ( !v138 )
    goto LABEL_128;
LABEL_104:
  Object_29932412 = AssetData__GetObject_29932412(v9, (System_String_o *)StringLiteral_16778, 0LL);
  v116 = (UnityEngine_GameObject_c **)Object_29932412;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( v116 )
    {
LABEL_107:
      if ( *v116 == UnityEngine_GameObject_TypeInfo )
        v117 = (UnityEngine_UI_Dropdown_DropdownItem_o *)v116;
      else
        v117 = 0LL;
      goto LABEL_112;
    }
  }
  else if ( Object_29932412 )
  {
    goto LABEL_107;
  }
  v117 = 0LL;
LABEL_112:
  v118 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                       v117,
                                       (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v118 )
    goto LABEL_128;
  v119 = v118;
  gameObject = UnityEngine_GameObject__get_gameObject(v118, 0LL);
  GameObjectExtensions__SafeSetParent_27425996(gameObject, (UnityEngine_GameObject_o *)this->fields.maskSp, 0LL);
  Component_srcLineSprite = (TitleInfoEventLeagueVsGaugeEffect_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                     v119,
                                                                     (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventLeagueVsGaugeEffect___);
  v122 = EventPointEntity__isBossBattle(eventPointEntity, 0LL);
  if ( !Component_srcLineSprite )
    goto LABEL_128;
  TitleInfoEventLeagueVsGaugeEffect__setup(Component_srcLineSprite, v45, v49, v122, v123);
  colliderSp = this->fields.colliderSp;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetCommon(colliderSp, 0LL);
  AtlasManager__SetCommon(*(UISprite_o **)&this->fields.originPos.fields.x, 0LL);
  v125 = this->fields.colliderSp;
  if ( !v125 )
    goto LABEL_128;
  UISprite__set_spriteName(v125, (System_String_o *)StringLiteral_23181, 0LL);
  v126 = *(UISprite_o **)&this->fields.originPos.fields.x;
  if ( !v126 )
    goto LABEL_128;
  UISprite__set_spriteName(v126, (System_String_o *)StringLiteral_17393, 0LL);
  this->fields.frameInCallBack = (struct System_Action_o *)eventPointEntity->fields.endedAt;
  TitleInfoEventLeagueVsComponent__restTimeUpdate(this, v127);
  AtlasManager__SetEventUI((UISprite_o *)this->fields.resultPanel, (System_String_o *)StringLiteral_18542, 0LL);
  AtlasManager__SetEventUI(this->fields.hpBack, (System_String_o *)StringLiteral_18540, 0LL);
  AtlasManager__SetEventUI((UISprite_o *)this->fields.gaugeEffectPanel, (System_String_o *)StringLiteral_18539, 0LL);
  baseWindow = this->fields.baseWindow;
  iconId = eventPointEntity->fields.id;
  v129 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId);
  v130 = System_String__Concat((Il2CppObject *)StringLiteral_18543, v129, 0LL);
  AtlasManager__SetEventUI(baseWindow, v130, 0LL);
  v131 = this->fields.baseWindow;
  if ( !v131 )
    goto LABEL_128;
  isBossBattle = ((__int64 (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v131->klass->vtable._33_MakePixelPerfect.method)(
                   v131,
                   v131->klass->vtable._34_get_minWidth.methodPtr);
  hpFrame = this->fields.hpFrame;
  if ( !hpFrame )
    goto LABEL_128;
  v133 = 0LL;
  while ( 1 )
  {
    leftAnchor_low = LODWORD(hpFrame->fields.leftAnchor);
    if ( (__int64)v133 >= (int)leftAnchor_low )
      break;
    if ( v133 >= leftAnchor_low )
      goto LABEL_131;
    v135 = (UISprite_o *)*((_QWORD *)&hpFrame->fields.rightAnchor + v133);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    isBossBattle = AtlasManager__SetEventUI(v135, (System_String_o *)StringLiteral_18544, 0LL);
    hpFrame = this->fields.hpFrame;
    ++v133;
    if ( !hpFrame )
      goto LABEL_128;
  }
  v136 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPositionY(v136, -2.0, 0LL);
  v137 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  *(UnityEngine_Vector3_o *)&this->fields.originPos.fields.z = GameObjectExtensions__GetLocalPosition(v137, 0LL);
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
  WebViewManager_o *Instance; // x0
  TotalEventPointMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x8
  __int64 v23; // x9
  TotalEventPointMaster_o *v24; // x25
  __int64 v25; // x8
  __int64 v26; // x9
  int64_t v27; // x24
  int64_t Point; // x0
  int64_t v29; // x23
  UnityEngine_Object_o *Object_29932412; // x0
  UnityEngine_GameObject_c **v31; // x22
  UnityEngine_UI_Dropdown_DropdownItem_o *v32; // x0
  UnityEngine_GameObject_o *v33; // x0
  UnityEngine_GameObject_o *v34; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  TitleInfoEventLeagueVsGaugeFlashEffect_o *Component_srcLineSprite; // x0
  const MethodInfo *v37; // x5

  if ( (byte_40FDFCF & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_TotalEventPointMaster___, *(_QWORD *)&groupId);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_TitleInfoEventLeagueVsGaugeFlashEffect___, v11);
    sub_B16FFC(&UnityEngine_GameObject_TypeInfo, v12);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v13);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v14);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_B16FFC(&StringLiteral_16776, v16);
    byte_40FDFCF = 1;
  }
  v17 = *(EventPointEntity_o **)&this->fields.isDispRestTime;
  if ( v17 )
  {
    if ( EventPointEntity__isBossBattle(v17, 0LL) )
    {
      ActionExtensions__Call(callback, 0LL);
      return;
    }
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_27;
    MasterData_WarQuestSelectionMaster = (TotalEventPointMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_TotalEventPointMaster___);
    v22 = *(_QWORD *)&this->fields.isDispRestTime;
    if ( !v22 )
      goto LABEL_27;
    v23 = *(_QWORD *)(v22 + 32);
    if ( !v23 )
      goto LABEL_27;
    if ( !*(_DWORD *)(v23 + 24) )
      goto LABEL_28;
    v24 = MasterData_WarQuestSelectionMaster;
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_27;
    MasterData_WarQuestSelectionMaster = (TotalEventPointMaster_o *)TotalEventPointMaster__GetPoint(
                                                                      MasterData_WarQuestSelectionMaster,
                                                                      eventId,
                                                                      *(_DWORD *)(v22 + 16),
                                                                      *(_DWORD *)(v23 + 32),
                                                                      0LL);
    v25 = *(_QWORD *)&this->fields.isDispRestTime;
    if ( !v25 )
      goto LABEL_27;
    v26 = *(_QWORD *)(v25 + 40);
    if ( !v26 )
      goto LABEL_27;
    if ( !*(_DWORD *)(v26 + 24) )
    {
LABEL_28:
      sub_B17100(MasterData_WarQuestSelectionMaster, v20, v21);
      sub_B170A0();
    }
    v27 = (int64_t)MasterData_WarQuestSelectionMaster;
    Point = TotalEventPointMaster__GetPoint(v24, eventId, *(_DWORD *)(v25 + 16), *(_DWORD *)(v26 + 32), 0LL);
    if ( !effectAssetData )
      goto LABEL_27;
    v29 = Point;
    Object_29932412 = AssetData__GetObject_29932412(effectAssetData, (System_String_o *)StringLiteral_16776, 0LL);
    v31 = (UnityEngine_GameObject_c **)Object_29932412;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( v31 )
      {
LABEL_19:
        if ( *v31 == UnityEngine_GameObject_TypeInfo )
          v32 = (UnityEngine_UI_Dropdown_DropdownItem_o *)v31;
        else
          v32 = 0LL;
LABEL_24:
        v33 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                            v32,
                                            (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( v33 )
        {
          v34 = v33;
          gameObject = UnityEngine_GameObject__get_gameObject(v33, 0LL);
          GameObjectExtensions__SafeSetParent_27425996(gameObject, (UnityEngine_GameObject_o *)this->fields.maskSp, 0LL);
          Component_srcLineSprite = (TitleInfoEventLeagueVsGaugeFlashEffect_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                  v34,
                                                                                  (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventLeagueVsGaugeFlashEffect___);
          if ( Component_srcLineSprite )
          {
            TitleInfoEventLeagueVsGaugeFlashEffect__setup(Component_srcLineSprite, groupId, v27, v29, callback, v37);
            return;
          }
        }
LABEL_27:
        sub_B170D4();
      }
    }
    else if ( Object_29932412 )
    {
      goto LABEL_19;
    }
    v32 = 0LL;
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
  UnityEngine_Behaviour_o *groupIcon; // x0
  UILabel_o *v6; // x20
  System_String_o *v7; // x0
  struct System_Action_o *frameInCallBack; // x8
  System_String_o *v9; // x19
  Il2CppObject *RestTime3; // x0
  System_String_o *v11; // x0
  UnityEngine_Behaviour_o *v12; // x0

  if ( (byte_40FDFCC & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&NetworkManager_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_5726, v4);
    byte_40FDFCC = 1;
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
      v6 = (UILabel_o *)this->fields.groupIcon;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v7 = LocalizationManager__Get((System_String_o *)StringLiteral_5726, 0LL);
      frameInCallBack = this->fields.frameInCallBack;
      v9 = v7;
      RestTime3 = (Il2CppObject *)LocalizationManager__GetRestTime3((int64_t)frameInCallBack, 0LL);
      v11 = System_String__Format(v9, RestTime3, 0LL);
      if ( v6 )
      {
        UILabel__set_text(v6, v11, 0LL);
        return;
      }
    }
LABEL_16:
    sub_B170D4();
  }
  v12 = (UnityEngine_Behaviour_o *)this->fields.groupIcon;
  if ( !v12 )
    goto LABEL_16;
  UnityEngine_Behaviour__set_enabled(v12, 0, 0LL);
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Action_o *_9__1; // x21
  EventPointVsResultAction_o *effect; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  struct TitleInfoEventLeagueVsComponent_o *_4__this; // x8

  if ( (byte_40F7829 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_TitleInfoEventLeagueVsComponent___c__DisplayClass36_0__ResultEffect_b__1__, v6);
    byte_40F7829 = 1;
  }
  _9__1 = this->fields.__9__1;
  effect = this->fields.effect;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_TitleInfoEventLeagueVsComponent___c__DisplayClass36_0__ResultEffect_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__9__1,
      (System_Int32_array **)_9__1,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this || !effect )
    sub_B170D4();
  EventPointVsResultAction__Play(effect, _9__1, (MaskFade_o *)_4__this->fields.splitIcon, 0.0, 0LL);
}


void __fastcall TitleInfoEventLeagueVsComponent___c__DisplayClass36_0___ResultEffect_b__1(
        TitleInfoEventLeagueVsComponent___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *effect; // x0
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_Collider_o *coll; // x0
  struct TitleInfoEventLeagueVsComponent_o *_4__this; // x8
  MaskFade_o *splitIcon; // x20

  if ( (byte_40F782A & 1) == 0 )
  {
    sub_B16FFC(&AvalonSceneManager_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40F782A = 1;
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
  UnityEngine_Object__Destroy_34809464(gameObject, 0LL);
  coll = (UnityEngine_Collider_o *)this->fields.coll;
  if ( !coll )
    goto LABEL_14;
  UnityEngine_Collider__set_enabled(coll, 0, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  splitIcon = (MaskFade_o *)_4__this->fields.splitIcon;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !splitIcon )
LABEL_14:
    sub_B170D4();
  MaskFade__Fadein(splitIcon, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, this->fields.callback, 0LL);
}