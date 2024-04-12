void __fastcall TitleInfoEventLeagueVsComponent___cctor(const MethodInfo *method)
{
  struct TitleInfoEventLeagueVsComponent_StaticFields *static_fields; // x9

  if ( (byte_42B442B & 1) == 0 )
  {
    sub_B52984(&TitleInfoEventLeagueVsComponent_TypeInfo);
    byte_42B442B = 1;
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
  UnityEngine_GameObject_o *gameObject; // x21
  TitleInfoEventLeagueVsComponent_c *v6; // x8
  TweenWidth_o *v7; // x0
  __int64 v8; // x1
  TweenWidth_o *v9; // x21
  float32x2_t *static_fields; // x8
  float v11; // s1
  int endTime; // w9
  System_Int32_array **v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Int32_array **v20; // x1
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

  if ( (byte_42B4426 & 1) == 0 )
  {
    sub_B52984(&TitleInfoEventLeagueVsComponent_TypeInfo);
    sub_B52984(&Method_UITweener_Begin_TweenPosition___);
    sub_B52984(&StringLiteral_6836/*"FrameInFinish"*/);
    byte_42B4426 = 1;
  }
  if ( *(_QWORD *)&this->fields.isDispRestTime )
  {
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
           (const MethodInfo_1F7CFF8 *)Method_UITweener_Begin_TweenPosition___);
    if ( !v7 )
      sub_B52A5C(0LL, v8);
    v9 = v7;
    static_fields = (float32x2_t *)TitleInfoEventLeagueVsComponent_TypeInfo->static_fields;
    v11 = *(float *)&this->fields.endTime + static_fields[1].n64_f32[0];
    *(float32x2_t *)&v7->fields.from = vadd_f32(
                                         *(float32x2_t *)&this->fields.originPos.fields.z,
                                         (float32x2_t)static_fields->n64_u64[0]);
    *(float *)&v7->fields.updateTable = v11;
    endTime = this->fields.endTime;
    *(_QWORD *)(&v7->fields.updateTable + 4) = *(_QWORD *)&this->fields.originPos.fields.z;
    HIDWORD(v7->fields.mWidget) = endTime;
    v7->fields.style = 2;
    v13 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v9->fields.eventReceiver = (struct UnityEngine_GameObject_o *)v13;
    sub_B52920((BattleServantConfConponent_o *)&v9->fields.eventReceiver, v13, v14, v15, v16, v17, v18, v19);
    v20 = (System_Int32_array **)StringLiteral_6836/*"FrameInFinish"*/;
    v9->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6836/*"FrameInFinish"*/;
    sub_B52920((BattleServantConfConponent_o *)&v9->fields.callWhenFinished, v20, v21, v22, v23, v24, v25, v26);
    this->fields.evPointEnt = (struct EventPointEntity_o *)callback;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.evPointEnt,
      (System_Int32_array **)callback,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
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
  sub_B52920(p_evPointEnt, 0LL, v2, v3, v4, v5, v6, v7);
  if ( evPointEnt )
    ActionExtensions__Call(v9, 0LL);
}


void __fastcall TitleInfoEventLeagueVsComponent__FrameOut(
        TitleInfoEventLeagueVsComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x20
  TitleInfoEventLeagueVsComponent_c *v4; // x8
  TweenWidth_o *v5; // x0
  __int64 v6; // x1
  int endTime; // w9
  TweenWidth_o *v8; // x20
  float32x2_t v9; // d0
  float v10; // s1
  struct TitleInfoEventLeagueVsComponent_StaticFields *static_fields; // x8
  float32x2_t v12; // d2
  float z; // s3
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

  if ( (byte_42B4427 & 1) == 0 )
  {
    sub_B52984(&TitleInfoEventLeagueVsComponent_TypeInfo);
    sub_B52984(&Method_UITweener_Begin_TweenPosition___);
    sub_B52984(&StringLiteral_6838/*"FrameOutFinish"*/);
    byte_42B4427 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v4 = TitleInfoEventLeagueVsComponent_TypeInfo;
  if ( (BYTE3(TitleInfoEventLeagueVsComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventLeagueVsComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventLeagueVsComponent_TypeInfo);
    v4 = TitleInfoEventLeagueVsComponent_TypeInfo;
  }
  v5 = UITweener__Begin_TweenWidth_(
         gameObject,
         v4->static_fields->ANIM_DURATION_FRAME_IN,
         (const MethodInfo_1F7CFF8 *)Method_UITweener_Begin_TweenPosition___);
  if ( !v5 )
    sub_B52A5C(0LL, v6);
  endTime = this->fields.endTime;
  v8 = v5;
  *(_QWORD *)&v5->fields.from = *(_QWORD *)&this->fields.originPos.fields.z;
  *(_DWORD *)&v5->fields.updateTable = endTime;
  v9.n64_u64[0] = *(unsigned __int64 *)&this->fields.originPos.fields.z;
  v10 = *(float *)&this->fields.endTime;
  static_fields = TitleInfoEventLeagueVsComponent_TypeInfo->static_fields;
  v12.n64_u64[0] = *(unsigned __int64 *)&static_fields->RAIDBOSS_ANIM_ROOT_POS.fields.x;
  z = static_fields->RAIDBOSS_ANIM_ROOT_POS.fields.z;
  v5->fields.style = 2;
  *(float32x2_t *)(&v5->fields.updateTable + 4) = vadd_f32(v9, v12);
  *((float *)&v5->fields.mWidget + 1) = v10 + z;
  v14 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v8->fields.eventReceiver = (struct UnityEngine_GameObject_o *)v14;
  sub_B52920((BattleServantConfConponent_o *)&v8->fields.eventReceiver, v14, v15, v16, v17, v18, v19, v20);
  v21 = (System_Int32_array **)StringLiteral_6838/*"FrameOutFinish"*/;
  v8->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6838/*"FrameOutFinish"*/;
  sub_B52920((BattleServantConfConponent_o *)&v8->fields.callWhenFinished, v21, v22, v23, v24, v25, v26, v27);
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
  __int64 v22; // x0
  System_String_o *countText; // [xsp+38h] [xbp-48h] BYREF
  System_String_o *nameText; // [xsp+48h] [xbp-38h] BYREF

  if ( (byte_42B442A & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&StringLiteral_5710/*"EVENT_POINT_VS_WIN_DIALOG_TITLE"*/);
    sub_B52984(&StringLiteral_5709/*"EVENT_POINT_VS_WIN_DIALOG_GROUP"*/);
    sub_B52984(&StringLiteral_5708/*"EVENT_POINT_VS_WIN_DIALOG_GET"*/);
    byte_42B442A = 1;
  }
  nameText = 0LL;
  countText = 0LL;
  if ( evPointEnt )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_23;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_GiftMaster___);
    if ( !rewardInfo || !Instance )
      goto LABEL_23;
    GiftListById = GiftMaster__GetGiftListById((GiftMaster_o *)Instance, rewardInfo->fields.giftId, 0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v11 = LocalizationManager__Get((System_String_o *)StringLiteral_5710/*"EVENT_POINT_VS_WIN_DIALOG_TITLE"*/, 0LL);
    v12 = System_String__Format(v11, (Il2CppObject *)evPointEnt->fields.name, 0LL);
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_5709/*"EVENT_POINT_VS_WIN_DIALOG_GROUP"*/, 0LL);
    winGroup1 = rewardInfo->fields.winGroup1;
    v15 = v13;
    WinGroupName = (Il2CppObject *)EventPointEntity__GetWinGroupName(evPointEnt, winGroup1, 0LL);
    Instance = (DataManager_o *)System_String__Format(v15, WinGroupName, 0LL);
    if ( !GiftListById )
      goto LABEL_23;
    max_length = GiftListById->max_length;
    v18 = (System_String_o *)Instance;
    if ( max_length >= 1 )
    {
      v19 = 0;
      while ( 1 )
      {
        if ( v19 >= (unsigned int)max_length )
        {
          v22 = sub_B52A88(Instance);
          sub_B52A28(v22, 0LL);
        }
        Instance = (DataManager_o *)GiftListById->m_Items[v19];
        if ( !Instance )
          break;
        GiftEntity__GetInfo((GiftEntity_o *)Instance, &nameText, &countText, 0LL);
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v20 = LocalizationManager__Get((System_String_o *)StringLiteral_5708/*"EVENT_POINT_VS_WIN_DIALOG_GET"*/, 0LL);
        v21 = System_String__Format_44563852(v20, (Il2CppObject *)nameText, (Il2CppObject *)countText, 0LL);
        Instance = (DataManager_o *)System_String__Concat_44568316(v18, v21, 0LL);
        max_length = GiftListById->max_length;
        ++v19;
        v18 = (System_String_o *)Instance;
        if ( v19 >= max_length )
          goto LABEL_19;
      }
LABEL_23:
      sub_B52A5C(Instance, v9);
    }
LABEL_19:
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_23;
    CommonUI__OpenNotificationDialog((CommonUI_o *)Instance, v12, v18, callback, -1, 0, 0, 0, 1, 0, 1, 0, 0LL, 0LL);
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
  UnityEngine_GameObject_o *maskFade; // x0
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  UnityEngine_Object_o *Object_30344972; // x0
  UnityEngine_GameObject_c **v25; // x22
  UnityEngine_UI_Dropdown_DropdownItem_o *v26; // x0
  UnityEngine_GameObject_o *v27; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  __int64 v36; // x10
  System_Int32_array **v37; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  __int64 v44; // x8
  EventPointVsResultAction_o *v45; // x20
  int32_t v46; // w22
  System_Action_o *v47; // x23
  TitleInfoEventLeagueVsComponent_o *v48; // x0
  EventPointEntity_o *v49; // x1
  EventPointWinReward_o *v50; // x2
  System_Action_o *v51; // x3
  const MethodInfo *v52; // x4

  if ( (byte_42B4429 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&UnityEngine_BoxCollider_TypeInfo);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_Collider___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_EventPointVsResultAction___);
    sub_B52984(&UnityEngine_GameObject_TypeInfo);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_TitleInfoEventLeagueVsComponent___c__DisplayClass36_0__ResultEffect_b__0__);
    sub_B52984(&TitleInfoEventLeagueVsComponent___c__DisplayClass36_0_TypeInfo);
    sub_B52984(&StringLiteral_16963/*"bit_vs_result"*/);
    byte_42B4429 = 1;
  }
  v9 = sub_B52A54(TitleInfoEventLeagueVsComponent___c__DisplayClass36_0_TypeInfo);
  TitleInfoEventLeagueVsComponent___c__DisplayClass36_0___ctor(
    (TitleInfoEventLeagueVsComponent___c__DisplayClass36_0_o *)v9,
    0LL);
  if ( !v9 )
    goto LABEL_24;
  *(_QWORD *)(v9 + 32) = this;
  sub_B52920((BattleServantConfConponent_o *)(v9 + 32), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 40) = callback;
  sub_B52920((BattleServantConfConponent_o *)(v9 + 40), (System_Int32_array **)callback, v18, v19, v20, v21, v22, v23);
  if ( !winType )
  {
    ActionExtensions__Call(*(System_Action_o **)(v9 + 40), 0LL);
    return;
  }
  if ( !effectAssetData )
    goto LABEL_24;
  Object_30344972 = AssetData__GetObject_30344972(effectAssetData, (System_String_o *)StringLiteral_16963/*"bit_vs_result"*/, 0LL);
  v25 = (UnityEngine_GameObject_c **)Object_30344972;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0
    || UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    if ( Object_30344972 )
      goto LABEL_9;
LABEL_14:
    v26 = 0LL;
    goto LABEL_15;
  }
  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !v25 )
    goto LABEL_14;
LABEL_9:
  if ( *v25 == UnityEngine_GameObject_TypeInfo )
    v26 = (UnityEngine_UI_Dropdown_DropdownItem_o *)v25;
  else
    v26 = 0LL;
LABEL_15:
  maskFade = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                           v26,
                                           (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !maskFade )
    goto LABEL_24;
  v27 = maskFade;
  gameObject = UnityEngine_GameObject__get_gameObject(maskFade, 0LL);
  GameObjectExtensions__SafeSetParent_32091088(gameObject, (UnityEngine_GameObject_o *)this->fields.maskFade, 0LL);
  maskFade = (UnityEngine_GameObject_o *)this->fields.maskFade;
  if ( !maskFade )
    goto LABEL_24;
  Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     maskFade,
                                                     (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_Collider___);
  if ( !Component_srcLineSprite
    || (v36 = *(&UnityEngine_BoxCollider_TypeInfo->_2.bitflags2 + 1),
        LOBYTE((*Component_srcLineSprite)->m_Items[68]) >= (unsigned int)v36)
    && *(UnityEngine_BoxCollider_c **)(*(_QWORD *)&(*Component_srcLineSprite)->m_Items[43] + 8 * v36 - 8) == UnityEngine_BoxCollider_TypeInfo )
  {
    *(_QWORD *)(v9 + 24) = Component_srcLineSprite;
    sub_B52920((BattleServantConfConponent_o *)(v9 + 24), Component_srcLineSprite, v30, v31, v32, v33, v34, v35);
    maskFade = *(UnityEngine_GameObject_o **)(v9 + 24);
    if ( maskFade )
    {
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)maskFade, 1, 0LL);
      v37 = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                     v27,
                                     (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_EventPointVsResultAction___);
      *(_QWORD *)(v9 + 16) = v37;
      sub_B52920((BattleServantConfConponent_o *)(v9 + 16), v37, v38, v39, v40, v41, v42, v43);
      v44 = *(_QWORD *)&this->fields.isDispRestTime;
      if ( v44 )
      {
        v45 = *(EventPointVsResultAction_o **)(v9 + 16);
        v46 = *(_DWORD *)(v44 + 16);
        v47 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
        System_Action___ctor(
          v47,
          (Il2CppObject *)v9,
          Method_TitleInfoEventLeagueVsComponent___c__DisplayClass36_0__ResultEffect_b__0__,
          0LL);
        if ( v45 )
        {
          EventPointVsResultAction__Setup(v45, winType, v46, v47, 0LL);
          return;
        }
      }
    }
LABEL_24:
    sub_B52A5C(maskFade, v11);
  }
  sub_B52D50(Component_srcLineSprite);
  TitleInfoEventLeagueVsComponent__OpenResultPointDialog(v48, v49, v50, v51, v52);
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
  TerminalPramsManager_c *v14; // x0
  __int64 splitIcon; // x0
  TotalEventPointMaster_o *MasterData_WarQuestSelectionMaster; // x24
  EventPointGroupMaster_o *v17; // x25
  struct System_Int32_array *v18; // x8
  unsigned __int64 v19; // x21
  int64_t v20; // x22
  unsigned __int64 max_length; // x9
  struct System_Int32_array *group1; // x8
  struct System_Int32_array *group2; // x8
  int64_t v24; // x27
  struct UILabel_o *restTimeLabel; // x8
  struct UILabel_o *v26; // x8
  float v27; // s0
  struct UILabel_o *v28; // x8
  int64_t normaTotalPoint; // x21
  double v30; // d8
  float v31; // s0
  struct UILabel_o *v32; // x8
  float v33; // s0
  struct UISlider_array *v34; // x8
  struct System_Int32_array *v35; // x9
  UISprite_o *v36; // x24
  Il2CppObject *v37; // x0
  System_String_o *v38; // x26
  struct UISlider_array *v39; // x8
  struct System_Int32_array *v40; // x9
  UISprite_o *v41; // x24
  struct System_Int32_array *v42; // x8
  Il2CppObject *v43; // x26
  Il2CppObject *v44; // x0
  System_String_o *v45; // x0
  struct System_Int32_array *v46; // x8
  struct System_Int32_array *v47; // x8
  __int64 v48; // x27
  unsigned __int64 v49; // x24
  Il2CppObject *v50; // x26
  unsigned __int64 v51; // x9
  Il2CppObject *v52; // x0
  struct UISprite_o *v53; // x8
  UISprite_o *v54; // x23
  Il2CppObject *v55; // x0
  System_String_o *v56; // x25
  struct UISprite_o *v57; // x8
  UISprite_o *v58; // x23
  System_String_o *v59; // x0
  struct UILabel_o *v60; // x8
  double v61; // d8
  float v62; // s0
  struct UILabel_o *v63; // x8
  struct UISlider_array *hpBarSlider; // x8
  struct System_Int32_array *v65; // x9
  UISprite_o *v66; // x23
  Il2CppObject *v67; // x0
  System_String_o *v68; // x25
  struct UISlider_array *v69; // x8
  struct System_Int32_array *v70; // x9
  UISprite_o *v71; // x23
  Il2CppObject *v72; // x0
  System_String_o *v73; // x0
  struct UISprite_o *modeName; // x8
  struct System_Int32_array *v75; // x9
  UISprite_o *rightAnchor; // x23
  Il2CppObject *v77; // x0
  System_String_o *v78; // x0
  struct UISprite_o *v79; // x8
  struct System_Int32_array *v80; // x9
  UISprite_o *bottomAnchor; // x23
  Il2CppObject *v82; // x0
  System_String_o *v83; // x0
  UnityEngine_Object_o *Object_30344972; // x0
  UnityEngine_GameObject_c **v85; // x21
  UnityEngine_UI_Dropdown_DropdownItem_o *v86; // x0
  UnityEngine_GameObject_o *v87; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  TitleInfoEventLeagueVsGaugeEffect_o *Component_srcLineSprite; // x21
  const MethodInfo *v90; // x4
  UISprite_o *colliderSp; // x21
  const MethodInfo *v92; // x1
  UISprite_o *baseWindow; // x21
  Il2CppObject *v94; // x0
  System_String_o *v95; // x0
  struct UISprite_o *hpFrame; // x8
  unsigned __int64 v97; // x21
  unsigned __int64 leftAnchor_low; // x9
  UISprite_o *v99; // x20
  UnityEngine_GameObject_o *v100; // x0
  UnityEngine_GameObject_o *v101; // x0
  __int64 v102; // x0
  AssetData_o *v103; // [xsp+10h] [xbp-70h]
  int32_t v104; // [xsp+18h] [xbp-68h] BYREF
  int32_t v105; // [xsp+1Ch] [xbp-64h] BYREF
  int32_t v106; // [xsp+28h] [xbp-58h] BYREF
  int32_t id; // [xsp+2Ch] [xbp-54h] BYREF

  v9 = effectAssetData;
  if ( (byte_42B4424 & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_EventPointGroupMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_TotalEventPointMaster___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_TitleInfoEventLeagueVsGaugeEffect___);
    sub_B52984(&UnityEngine_GameObject_TypeInfo);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&TerminalPramsManager_TypeInfo);
    sub_B52984(&StringLiteral_18749/*"event_vs_gauge_title_"*/);
    sub_B52984(&StringLiteral_18746/*"event_vs_frame"*/);
    sub_B52984(&StringLiteral_18745/*"event_vs_back"*/);
    sub_B52984(&StringLiteral_23468/*"white00"*/);
    sub_B52984(&StringLiteral_18748/*"event_vs_gauge_bg"*/);
    sub_B52984(&StringLiteral_16960/*"bit_vs_gauge_part"*/);
    sub_B52984(&StringLiteral_18750/*"event_vs_split_line"*/);
    sub_B52984(&StringLiteral_17584/*"clear00"*/);
    sub_B52984(&StringLiteral_18754/*"event_vs_team_icon_"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    sub_B52984(&StringLiteral_18747/*"event_vs_gauge_"*/);
    byte_42B4424 = 1;
  }
  if ( !eventPointEntity )
    return;
  *(_QWORD *)&this->fields.isDispRestTime = eventPointEntity;
  sub_B52920(
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
  if ( !byte_42AC7A8 )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AC7A8 = 1;
  }
  v14 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v14 = TerminalPramsManager_TypeInfo;
  }
  if ( v14->static_fields->_eventPointWinType_k__BackingField )
  {
    splitIcon = (__int64)this->fields.splitIcon;
    if ( !splitIcon )
      goto LABEL_128;
    MaskFade__Fadeout((MaskFade_o *)splitIcon, 1, 0.0, 0LL, 0LL);
  }
  splitIcon = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !splitIcon )
    goto LABEL_128;
  MasterData_WarQuestSelectionMaster = (TotalEventPointMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                    (DataManager_o *)splitIcon,
                                                                    (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_TotalEventPointMaster___);
  splitIcon = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !splitIcon )
    goto LABEL_128;
  v17 = (EventPointGroupMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)splitIcon,
                                     (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventPointGroupMaster___);
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
        v20 = splitIcon;
        splitIcon = TotalEventPointMaster__GetPoint(
                      MasterData_WarQuestSelectionMaster,
                      eventId,
                      eventPointEntity->fields.id,
                      group2->m_Items[1],
                      0LL);
        v24 = splitIcon;
        if ( v20 == splitIcon )
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
          v26 = this->fields.restTimeLabel;
          if ( !v26 )
            goto LABEL_128;
          if ( LODWORD(v26->fields.leftAnchor) <= 1 )
            goto LABEL_131;
          splitIcon = (__int64)v26->fields.bottomAnchor;
          if ( !splitIcon )
            goto LABEL_128;
          v27 = 0.5;
        }
        else
        {
          v60 = this->fields.restTimeLabel;
          if ( !v60 )
            goto LABEL_128;
          if ( !LODWORD(v60->fields.leftAnchor) )
            goto LABEL_131;
          splitIcon = (__int64)v60->fields.rightAnchor;
          if ( !splitIcon )
            goto LABEL_128;
          v61 = (double)v20 / (double)(v24 + v20);
          v62 = 1.0 - v61;
          UIProgressBar__set_value((UIProgressBar_o *)splitIcon, v62, 0LL);
          v63 = this->fields.restTimeLabel;
          if ( !v63 )
            goto LABEL_128;
          if ( LODWORD(v63->fields.leftAnchor) <= 1 )
            goto LABEL_131;
          splitIcon = (__int64)v63->fields.bottomAnchor;
          if ( !splitIcon )
            goto LABEL_128;
          v27 = v61;
        }
        UIProgressBar__set_value((UIProgressBar_o *)splitIcon, v27, 0LL);
        hpBarSlider = this->fields.hpBarSlider;
        if ( !hpBarSlider )
          goto LABEL_128;
        if ( hpBarSlider->max_length )
        {
          v65 = eventPointEntity->fields.group2;
          if ( !v65 )
            goto LABEL_128;
          if ( v65->max_length )
          {
            v66 = (UISprite_o *)hpBarSlider->m_Items[0];
            id = v65->m_Items[1];
            v67 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id);
            v68 = System_String__Concat((Il2CppObject *)StringLiteral_18747/*"event_vs_gauge_"*/, v67, 0LL);
            if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !AtlasManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
            }
            splitIcon = AtlasManager__SetEventUI(v66, v68, 0LL);
            v69 = this->fields.hpBarSlider;
            if ( !v69 )
              goto LABEL_128;
            if ( v69->max_length > 1 )
            {
              v70 = eventPointEntity->fields.group1;
              if ( !v70 )
                goto LABEL_128;
              if ( v70->max_length )
              {
                v71 = (UISprite_o *)v69->m_Items[1];
                v106 = v70->m_Items[1];
                v72 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v106);
                v73 = System_String__Concat((Il2CppObject *)StringLiteral_18747/*"event_vs_gauge_"*/, v72, 0LL);
                splitIcon = AtlasManager__SetEventUI(v71, v73, 0LL);
                modeName = this->fields.modeName;
                if ( !modeName )
                  goto LABEL_128;
                if ( LODWORD(modeName->fields.leftAnchor) )
                {
                  v75 = eventPointEntity->fields.group2;
                  if ( !v75 )
                    goto LABEL_128;
                  if ( v75->max_length )
                  {
                    rightAnchor = (UISprite_o *)modeName->fields.rightAnchor;
                    v105 = v75->m_Items[1];
                    v77 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v105);
                    v78 = System_String__Concat((Il2CppObject *)StringLiteral_18754/*"event_vs_team_icon_"*/, v77, 0LL);
                    splitIcon = AtlasManager__SetEventUI(rightAnchor, v78, 0LL);
                    v79 = this->fields.modeName;
                    if ( !v79 )
                      goto LABEL_128;
                    if ( LODWORD(v79->fields.leftAnchor) > 1 )
                    {
                      v80 = eventPointEntity->fields.group1;
                      if ( !v80 )
                        goto LABEL_128;
                      if ( v80->max_length )
                      {
                        bottomAnchor = (UISprite_o *)v79->fields.bottomAnchor;
                        v104 = v80->m_Items[1];
                        v82 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v104);
                        v83 = System_String__Concat((Il2CppObject *)StringLiteral_18754/*"event_vs_team_icon_"*/, v82, 0LL);
                        splitIcon = AtlasManager__SetEventUI(bottomAnchor, v83, 0LL);
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
    v102 = sub_B52A88(splitIcon);
    sub_B52A28(v102, 0LL);
  }
  v18 = eventPointEntity->fields.group1;
  if ( !v18 )
    goto LABEL_128;
  v19 = 0LL;
  v20 = 0LL;
  while ( 1 )
  {
    max_length = v18->max_length;
    if ( (__int64)v19 >= (int)max_length )
      break;
    if ( v19 >= max_length )
      goto LABEL_131;
    if ( MasterData_WarQuestSelectionMaster )
    {
      splitIcon = TotalEventPointMaster__GetPoint(
                    MasterData_WarQuestSelectionMaster,
                    eventId,
                    eventPointEntity->fields.id,
                    v18->m_Items[v19 + 1],
                    0LL);
      v18 = eventPointEntity->fields.group1;
      v20 += splitIcon;
      ++v19;
      if ( v18 )
        continue;
    }
    goto LABEL_128;
  }
  v28 = this->fields.restTimeLabel;
  if ( !v28 )
    goto LABEL_128;
  if ( !LODWORD(v28->fields.leftAnchor) )
    goto LABEL_131;
  splitIcon = (__int64)v28->fields.rightAnchor;
  if ( !splitIcon )
    goto LABEL_128;
  normaTotalPoint = eventPointEntity->fields.normaTotalPoint;
  v30 = (double)v20 / (double)normaTotalPoint;
  v31 = 1.0 - v30;
  UIProgressBar__set_value((UIProgressBar_o *)splitIcon, v31, 0LL);
  v32 = this->fields.restTimeLabel;
  if ( !v32 )
    goto LABEL_128;
  if ( LODWORD(v32->fields.leftAnchor) <= 1 )
    goto LABEL_131;
  splitIcon = (__int64)v32->fields.bottomAnchor;
  if ( !splitIcon )
    goto LABEL_128;
  v33 = v30;
  UIProgressBar__set_value((UIProgressBar_o *)splitIcon, v33, 0LL);
  v34 = this->fields.hpBarSlider;
  if ( !v34 )
    goto LABEL_128;
  if ( !v34->max_length )
    goto LABEL_131;
  v35 = eventPointEntity->fields.group2;
  if ( !v35 )
    goto LABEL_128;
  v103 = v9;
  if ( !v35->max_length )
    goto LABEL_131;
  v36 = (UISprite_o *)v34->m_Items[0];
  id = v35->m_Items[1];
  v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id);
  v38 = System_String__Concat((Il2CppObject *)StringLiteral_18747/*"event_vs_gauge_"*/, v37, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  splitIcon = AtlasManager__SetEventUI(v36, v38, 0LL);
  v39 = this->fields.hpBarSlider;
  if ( !v39 )
    goto LABEL_128;
  if ( v39->max_length <= 1 )
    goto LABEL_131;
  v40 = eventPointEntity->fields.group1;
  if ( !v40 )
    goto LABEL_128;
  if ( !v40->max_length )
    goto LABEL_131;
  v41 = (UISprite_o *)v39->m_Items[1];
  v106 = v40->m_Items[1];
  splitIcon = j_il2cpp_value_box_0(int_TypeInfo, &v106);
  v42 = eventPointEntity->fields.group1;
  if ( !v42 )
    goto LABEL_128;
  if ( v42->max_length <= 1 )
    goto LABEL_131;
  v43 = (Il2CppObject *)splitIcon;
  v105 = v42->m_Items[2];
  v44 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v105);
  v45 = System_String__Concat_44648020((Il2CppObject *)StringLiteral_18747/*"event_vs_gauge_"*/, v43, v44, 0LL);
  splitIcon = AtlasManager__SetEventUI(v41, v45, 0LL);
  v46 = eventPointEntity->fields.group2;
  if ( !v46 )
    goto LABEL_128;
  if ( !v46->max_length )
    goto LABEL_131;
  if ( !v17 )
    goto LABEL_128;
  splitIcon = (__int64)EventPointGroupMaster__getEntity(v17, eventId, v46->m_Items[1], 0LL);
  v47 = eventPointEntity->fields.group1;
  if ( !v47 )
    goto LABEL_128;
  v48 = splitIcon;
  v49 = 0LL;
  v50 = (Il2CppObject *)StringLiteral_1/*""*/;
  while ( 1 )
  {
    v51 = v47->max_length;
    if ( (__int64)v49 >= (int)v51 )
      break;
    if ( v49 >= v51 )
      goto LABEL_131;
    splitIcon = (__int64)EventPointGroupMaster__getEntity(v17, eventId, v47->m_Items[v49 + 1], 0LL);
    if ( splitIcon )
    {
      id = *(_DWORD *)(splitIcon + 32);
      v52 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id);
      splitIcon = (__int64)System_String__Concat(v50, v52, 0LL);
      v47 = eventPointEntity->fields.group1;
      v50 = (Il2CppObject *)splitIcon;
      ++v49;
      if ( v47 )
        continue;
    }
    goto LABEL_128;
  }
  v53 = this->fields.modeName;
  if ( !v53 )
    goto LABEL_128;
  if ( !LODWORD(v53->fields.leftAnchor) )
    goto LABEL_131;
  if ( !v48 )
    goto LABEL_128;
  v54 = (UISprite_o *)v53->fields.rightAnchor;
  id = *(_DWORD *)(v48 + 32);
  v55 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id);
  v56 = System_String__Concat((Il2CppObject *)StringLiteral_18754/*"event_vs_team_icon_"*/, v55, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  splitIcon = AtlasManager__SetEventUI(v54, v56, 0LL);
  v57 = this->fields.modeName;
  v24 = normaTotalPoint - v20;
  if ( !v57 )
LABEL_128:
    sub_B52A5C(splitIcon, v13);
  if ( LODWORD(v57->fields.leftAnchor) <= 1 )
    goto LABEL_131;
  v58 = (UISprite_o *)v57->fields.bottomAnchor;
  v59 = System_String__Concat_44568316((System_String_o *)StringLiteral_18754/*"event_vs_team_icon_"*/, (System_String_o *)v50, 0LL);
  splitIcon = AtlasManager__SetEventUI(v58, v59, 0LL);
  v9 = v103;
  if ( !v103 )
    goto LABEL_128;
LABEL_104:
  Object_30344972 = AssetData__GetObject_30344972(v9, (System_String_o *)StringLiteral_16960/*"bit_vs_gauge_part"*/, 0LL);
  v85 = (UnityEngine_GameObject_c **)Object_30344972;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( v85 )
    {
LABEL_107:
      if ( *v85 == UnityEngine_GameObject_TypeInfo )
        v86 = (UnityEngine_UI_Dropdown_DropdownItem_o *)v85;
      else
        v86 = 0LL;
      goto LABEL_112;
    }
  }
  else if ( Object_30344972 )
  {
    goto LABEL_107;
  }
  v86 = 0LL;
LABEL_112:
  splitIcon = (__int64)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                         v86,
                         (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !splitIcon )
    goto LABEL_128;
  v87 = (UnityEngine_GameObject_o *)splitIcon;
  gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)splitIcon, 0LL);
  GameObjectExtensions__SafeSetParent_32091088(gameObject, (UnityEngine_GameObject_o *)this->fields.maskSp, 0LL);
  Component_srcLineSprite = (TitleInfoEventLeagueVsGaugeEffect_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                     v87,
                                                                     (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventLeagueVsGaugeEffect___);
  splitIcon = EventPointEntity__isBossBattle(eventPointEntity, 0LL);
  if ( !Component_srcLineSprite )
    goto LABEL_128;
  TitleInfoEventLeagueVsGaugeEffect__setup(Component_srcLineSprite, v20, v24, splitIcon & 1, v90);
  colliderSp = this->fields.colliderSp;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetCommon(colliderSp, 0LL);
  AtlasManager__SetCommon(*(UISprite_o **)&this->fields.originPos.fields.x, 0LL);
  splitIcon = (__int64)this->fields.colliderSp;
  if ( !splitIcon )
    goto LABEL_128;
  UISprite__set_spriteName((UISprite_o *)splitIcon, (System_String_o *)StringLiteral_23468/*"white00"*/, 0LL);
  splitIcon = *(_QWORD *)&this->fields.originPos.fields.x;
  if ( !splitIcon )
    goto LABEL_128;
  UISprite__set_spriteName((UISprite_o *)splitIcon, (System_String_o *)StringLiteral_17584/*"clear00"*/, 0LL);
  this->fields.frameInCallBack = (struct System_Action_o *)eventPointEntity->fields.endedAt;
  TitleInfoEventLeagueVsComponent__restTimeUpdate(this, v92);
  AtlasManager__SetEventUI((UISprite_o *)this->fields.resultPanel, (System_String_o *)StringLiteral_18748/*"event_vs_gauge_bg"*/, 0LL);
  AtlasManager__SetEventUI(this->fields.hpBack, (System_String_o *)StringLiteral_18746/*"event_vs_frame"*/, 0LL);
  AtlasManager__SetEventUI((UISprite_o *)this->fields.gaugeEffectPanel, (System_String_o *)StringLiteral_18745/*"event_vs_back"*/, 0LL);
  baseWindow = this->fields.baseWindow;
  id = eventPointEntity->fields.id;
  v94 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id);
  v95 = System_String__Concat((Il2CppObject *)StringLiteral_18749/*"event_vs_gauge_title_"*/, v94, 0LL);
  AtlasManager__SetEventUI(baseWindow, v95, 0LL);
  splitIcon = (__int64)this->fields.baseWindow;
  if ( !splitIcon )
    goto LABEL_128;
  splitIcon = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)splitIcon + 840LL))(
                splitIcon,
                *(_QWORD *)(*(_QWORD *)splitIcon + 848LL));
  hpFrame = this->fields.hpFrame;
  if ( !hpFrame )
    goto LABEL_128;
  v97 = 0LL;
  while ( 1 )
  {
    leftAnchor_low = LODWORD(hpFrame->fields.leftAnchor);
    if ( (__int64)v97 >= (int)leftAnchor_low )
      break;
    if ( v97 >= leftAnchor_low )
      goto LABEL_131;
    v99 = (UISprite_o *)*((_QWORD *)&hpFrame->fields.rightAnchor + v97);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    splitIcon = AtlasManager__SetEventUI(v99, (System_String_o *)StringLiteral_18750/*"event_vs_split_line"*/, 0LL);
    hpFrame = this->fields.hpFrame;
    ++v97;
    if ( !hpFrame )
      goto LABEL_128;
  }
  v100 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPositionY(v100, -2.0, 0LL);
  v101 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  *(UnityEngine_Vector3_o *)&this->fields.originPos.fields.z = GameObjectExtensions__GetLocalPosition(v101, 0LL);
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
  EventPointEntity_o *v11; // x0
  DataManager_o *Instance; // x0
  __int64 v13; // x1
  __int64 v14; // x8
  __int64 v15; // x9
  TotalEventPointMaster_o *v16; // x25
  __int64 v17; // x8
  __int64 v18; // x9
  int64_t v19; // x24
  int64_t v20; // x23
  UnityEngine_Object_o *Object_30344972; // x0
  UnityEngine_GameObject_c **v22; // x22
  UnityEngine_UI_Dropdown_DropdownItem_o *v23; // x0
  UnityEngine_GameObject_o *v24; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v26; // x5
  __int64 v27; // x0

  if ( (byte_42B4428 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_TotalEventPointMaster___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_TitleInfoEventLeagueVsGaugeFlashEffect___);
    sub_B52984(&UnityEngine_GameObject_TypeInfo);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&StringLiteral_16958/*"bit_vs_gauge_flash"*/);
    byte_42B4428 = 1;
  }
  v11 = *(EventPointEntity_o **)&this->fields.isDispRestTime;
  if ( v11 )
  {
    if ( EventPointEntity__isBossBattle(v11, 0LL) )
    {
      ActionExtensions__Call(callback, 0LL);
      return;
    }
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_27;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_TotalEventPointMaster___);
    v14 = *(_QWORD *)&this->fields.isDispRestTime;
    if ( !v14 )
      goto LABEL_27;
    v15 = *(_QWORD *)(v14 + 32);
    if ( !v15 )
      goto LABEL_27;
    if ( !*(_DWORD *)(v15 + 24) )
      goto LABEL_28;
    v16 = (TotalEventPointMaster_o *)Instance;
    if ( !Instance )
      goto LABEL_27;
    Instance = (DataManager_o *)TotalEventPointMaster__GetPoint(
                                  (TotalEventPointMaster_o *)Instance,
                                  eventId,
                                  *(_DWORD *)(v14 + 16),
                                  *(_DWORD *)(v15 + 32),
                                  0LL);
    v17 = *(_QWORD *)&this->fields.isDispRestTime;
    if ( !v17 )
      goto LABEL_27;
    v18 = *(_QWORD *)(v17 + 40);
    if ( !v18 )
      goto LABEL_27;
    if ( !*(_DWORD *)(v18 + 24) )
    {
LABEL_28:
      v27 = sub_B52A88(Instance);
      sub_B52A28(v27, 0LL);
    }
    v19 = (int64_t)Instance;
    Instance = (DataManager_o *)TotalEventPointMaster__GetPoint(
                                  v16,
                                  eventId,
                                  *(_DWORD *)(v17 + 16),
                                  *(_DWORD *)(v18 + 32),
                                  0LL);
    if ( !effectAssetData )
      goto LABEL_27;
    v20 = (int64_t)Instance;
    Object_30344972 = AssetData__GetObject_30344972(effectAssetData, (System_String_o *)StringLiteral_16958/*"bit_vs_gauge_flash"*/, 0LL);
    v22 = (UnityEngine_GameObject_c **)Object_30344972;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( v22 )
      {
LABEL_19:
        if ( *v22 == UnityEngine_GameObject_TypeInfo )
          v23 = (UnityEngine_UI_Dropdown_DropdownItem_o *)v22;
        else
          v23 = 0LL;
LABEL_24:
        Instance = (DataManager_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                      v23,
                                      (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( Instance )
        {
          v24 = (UnityEngine_GameObject_o *)Instance;
          gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)Instance, 0LL);
          GameObjectExtensions__SafeSetParent_32091088(gameObject, (UnityEngine_GameObject_o *)this->fields.maskSp, 0LL);
          Instance = (DataManager_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                        v24,
                                        (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventLeagueVsGaugeFlashEffect___);
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
LABEL_27:
        sub_B52A5C(Instance, v13);
      }
    }
    else if ( Object_30344972 )
    {
      goto LABEL_19;
    }
    v23 = 0LL;
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
  UnityEngine_Behaviour_o *groupIcon; // x0
  UILabel_o *v5; // x20
  System_String_o *v6; // x0
  struct System_Action_o *frameInCallBack; // x8
  System_String_o *v8; // x19
  Il2CppObject *RestTime3; // x0

  if ( (byte_42B4425 & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&StringLiteral_5786/*"EVENT_VS_GAUGE_REST_TIME"*/);
    byte_42B4425 = 1;
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
      v5 = (UILabel_o *)this->fields.groupIcon;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v6 = LocalizationManager__Get((System_String_o *)StringLiteral_5786/*"EVENT_VS_GAUGE_REST_TIME"*/, 0LL);
      frameInCallBack = this->fields.frameInCallBack;
      v8 = v6;
      RestTime3 = (Il2CppObject *)LocalizationManager__GetRestTime3((int64_t)frameInCallBack, 0LL);
      groupIcon = (UnityEngine_Behaviour_o *)System_String__Format(v8, RestTime3, 0LL);
      if ( v5 )
      {
        UILabel__set_text(v5, (System_String_o *)groupIcon, 0LL);
        return;
      }
    }
LABEL_16:
    sub_B52A5C(groupIcon, v3);
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
  System_Action_o *klass; // x21
  EventPointVsResultAction_o *v4; // x20
  Il2CppClass *v5; // x8

  v2 = (Il2CppObject *)this;
  if ( (byte_42AD9DD & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    this = (TitleInfoEventLeagueVsComponent___c__DisplayClass36_0_o *)sub_B52984(&Method_TitleInfoEventLeagueVsComponent___c__DisplayClass36_0__ResultEffect_b__1__);
    byte_42AD9DD = 1;
  }
  klass = (System_Action_o *)v2[3].klass;
  v4 = (EventPointVsResultAction_o *)v2[1].klass;
  if ( !klass )
  {
    klass = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(
      klass,
      v2,
      Method_TitleInfoEventLeagueVsComponent___c__DisplayClass36_0__ResultEffect_b__1__,
      0LL);
    v2[3].klass = (Il2CppClass *)klass;
    sub_B52920(&v2[3]);
  }
  v5 = v2[2].klass;
  if ( !v5 || !v4 )
    sub_B52A5C(this, method);
  EventPointVsResultAction__Play(v4, klass, (MaskFade_o *)v5->_1.parent, 0.0, 0LL);
}


void __fastcall TitleInfoEventLeagueVsComponent___c__DisplayClass36_0___ResultEffect_b__1(
        TitleInfoEventLeagueVsComponent___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *effect; // x0
  UnityEngine_Object_o *gameObject; // x20
  struct TitleInfoEventLeagueVsComponent_o *_4__this; // x8
  MaskFade_o *splitIcon; // x20

  if ( (byte_42AD9DE & 1) == 0 )
  {
    sub_B52984(&AvalonSceneManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AD9DE = 1;
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
  UnityEngine_Object__Destroy_35616956(gameObject, 0LL);
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
    sub_B52A5C(effect, method);
  MaskFade__Fadein(splitIcon, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, this->fields.callback, 0LL);
}