void __fastcall TitleInfoEventLeagueVsComponent___cctor(const MethodInfo *method)
{
  struct TitleInfoEventLeagueVsComponent_StaticFields *static_fields; // x8

  if ( (byte_4BDA801 & 1) == 0 )
  {
    sub_1C21E38(&TitleInfoEventLeagueVsComponent_TypeInfo);
    byte_4BDA801 = 1;
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
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7

  if ( (byte_4BDA7FC & 1) == 0 )
  {
    sub_1C21E38(&TitleInfoEventLeagueVsComponent_TypeInfo);
    sub_1C21E38(&Method_UITweener_Begin_TweenPosition___);
    sub_1C21E38(&StringLiteral_7001/*"FrameInFinish"*/);
    byte_4BDA7FC = 1;
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
           (const MethodInfo_30647F8 *)Method_UITweener_Begin_TweenPosition___);
    if ( !v8 )
      sub_1C22094(0LL, v9);
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
    sub_1C21DDC((PartyOrganizationUtility_o *)&v11[5], (int64_t)v14, v15, v16, v17, v18, v19, v20);
    v21 = StringLiteral_7001/*"FrameInFinish"*/;
    v11[5].monitor = (void *)StringLiteral_7001/*"FrameInFinish"*/;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v11[5].monitor, v21, v22, v23, v24, v25, v26, v27);
    this->fields.frameInCallBack = callback;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&this->fields.frameInCallBack,
      (int64_t)callback,
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
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  PartyOrganizationUtility_o *p_frameInCallBack; // x0
  System_Action_o *v9; // x19
  struct System_Action_o *frameInCallBack; // t1

  frameInCallBack = this->fields.frameInCallBack;
  p_frameInCallBack = (PartyOrganizationUtility_o *)&this->fields.frameInCallBack;
  v9 = frameInCallBack;
  p_frameInCallBack->klass = 0LL;
  sub_1C21DDC(p_frameInCallBack, 0LL, v2, v3, v4, v5, v6, v7);
  if ( frameInCallBack )
    ActionExtensions__Call(v9, 0LL);
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
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int64_t v18; // x1
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  Il2CppClass *v25; // [xsp+0h] [xbp-40h]

  if ( (byte_4BDA7FD & 1) == 0 )
  {
    sub_1C21E38(&TitleInfoEventLeagueVsComponent_TypeInfo);
    sub_1C21E38(&Method_UITweener_Begin_TweenPosition___);
    sub_1C21E38(&StringLiteral_7003/*"FrameOutFinish"*/);
    byte_4BDA7FD = 1;
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
         (const MethodInfo_30647F8 *)Method_UITweener_Begin_TweenPosition___);
  v25 = *(Il2CppClass **)&this->fields.originPos.fields.x;
  if ( !v6 )
    sub_1C22094(0LL, v7);
  v8 = v6;
  *(float *)&v6[8].monitor = this->fields.originPos.fields.z;
  v6[8].klass = v25;
  static_fields = (float32x2_t *)TitleInfoEventLeagueVsComponent_TypeInfo->static_fields;
  v10 = this->fields.originPos.fields.z + static_fields[1].n64_f32[0];
  *(float32x2_t *)((char *)&v6[8].monitor + 4) = vadd_f32(
                                                   *(float32x2_t *)&this->fields.originPos.fields.x,
                                                   (float32x2_t)static_fields->n64_u64[0]);
  *((float *)&v6[9].klass + 1) = v10;
  LODWORD(v6[2].klass) = 2;
  v11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v8[5].klass = (Il2CppClass *)v11;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v8[5], (int64_t)v11, v12, v13, v14, v15, v16, v17);
  v18 = StringLiteral_7003/*"FrameOutFinish"*/;
  v8[5].monitor = (void *)StringLiteral_7003/*"FrameOutFinish"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v8[5].monitor, v18, v19, v20, v21, v22, v23, v24);
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

  if ( (byte_4BDA800 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&StringLiteral_5788/*"EVENT_POINT_VS_WIN_DIALOG_TITLE"*/);
    sub_1C21E38(&StringLiteral_5787/*"EVENT_POINT_VS_WIN_DIALOG_GROUP"*/);
    sub_1C21E38(&StringLiteral_5786/*"EVENT_POINT_VS_WIN_DIALOG_GET"*/);
    byte_4BDA800 = 1;
  }
  countText = 0LL;
  nameText = 0LL;
  if ( evPointEnt )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_21;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_GiftMaster___);
    if ( !rewardInfo || !Instance )
      goto LABEL_21;
    GiftListById = GiftMaster__GetGiftListById((GiftMaster_o *)Instance, rewardInfo->fields.giftId, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v11 = LocalizationManager__Get((System_String_o *)StringLiteral_5788/*"EVENT_POINT_VS_WIN_DIALOG_TITLE"*/, 0LL);
    v12 = System_String__Format(v11, (Il2CppObject *)evPointEnt->fields.name, 0LL);
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_5787/*"EVENT_POINT_VS_WIN_DIALOG_GROUP"*/, 0LL);
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
          sub_1C2209C(Instance, v9);
        Instance = (DataManager_o *)GiftListById->m_Items[v19];
        if ( !Instance )
          break;
        GiftEntity__GetInfo((GiftEntity_o *)Instance, &nameText, &countText, 0LL);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v20 = LocalizationManager__Get((System_String_o *)StringLiteral_5786/*"EVENT_POINT_VS_WIN_DIALOG_GET"*/, 0LL);
        v21 = System_String__Format_63129848(v20, (Il2CppObject *)nameText, (Il2CppObject *)countText, 0LL);
        Instance = (DataManager_o *)System_String__Concat_63115476(v18, v21, 0LL);
        max_length = GiftListById->max_length;
        ++v19;
        v18 = (System_String_o *)Instance;
        if ( v19 >= max_length )
          goto LABEL_17;
      }
LABEL_21:
      sub_1C22094(Instance, v9);
    }
LABEL_17:
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  UnityEngine_Object_o *Object_39013000; // x22
  Il2CppObject *v25; // x0
  UnityEngine_GameObject_o *v26; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int64_t v35; // x8
  UnityEngine_BoxCollider_c *v36; // x1
  __int64 methodPtr_low; // x9
  PartyOrganizationUtility_o *v38; // x23
  Il2CppObject *v39; // x0
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  struct EventPointEntity_o *evPointEnt; // x8
  EventPointVsResultAction_o *v47; // x20
  int32_t id; // w22
  System_Action_o *v49; // x23

  if ( (byte_4BDA7FF & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&UnityEngine_BoxCollider_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_Collider___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_EventPointVsResultAction___);
    sub_1C21E38(&UnityEngine_GameObject_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_TitleInfoEventLeagueVsComponent___c__DisplayClass36_0__ResultEffect_b__0__);
    sub_1C21E38(&TitleInfoEventLeagueVsComponent___c__DisplayClass36_0_TypeInfo);
    sub_1C21E38(&StringLiteral_17607/*"bit_vs_result"*/);
    byte_4BDA7FF = 1;
  }
  v9 = sub_1C22084(TitleInfoEventLeagueVsComponent___c__DisplayClass36_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_27;
  *(_QWORD *)(v9 + 32) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 32), (int64_t)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 40) = callback;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 40), (int64_t)callback, v18, v19, v20, v21, v22, v23);
  if ( !winType )
  {
    ActionExtensions__Call(*(System_Action_o **)(v9 + 40), 0LL);
    return;
  }
  if ( !effectAssetData )
    goto LABEL_27;
  Object_39013000 = AssetData__GetObject_39013000(effectAssetData, (System_String_o *)StringLiteral_17607/*"bit_vs_result"*/, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( Object_39013000 )
    v25 = (UnityEngine_GameObject_c *)Object_39013000->klass == UnityEngine_GameObject_TypeInfo
        ? (Il2CppObject *)Object_39013000
        : 0LL;
  else
    v25 = 0LL;
  resultPanel = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                              v25,
                                              (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !resultPanel
    || (v26 = resultPanel,
        gameObject = UnityEngine_GameObject__get_gameObject(resultPanel, 0LL),
        GameObjectExtensions__SafeSetParent_34803616(gameObject, this->fields.resultPanel, 0LL),
        (resultPanel = this->fields.resultPanel) == 0LL) )
  {
LABEL_27:
    sub_1C22094(resultPanel, v11);
  }
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       resultPanel,
                       (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_Collider___);
  v35 = (int64_t)Component_object;
  if ( !Component_object )
    goto LABEL_22;
  v36 = UnityEngine_BoxCollider_TypeInfo;
  methodPtr_low = LOBYTE(UnityEngine_BoxCollider_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(Component_object->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
    || (UnityEngine_BoxCollider_c *)Component_object->klass->_2.typeHierarchy[methodPtr_low - 1] != UnityEngine_BoxCollider_TypeInfo
    || (*(_QWORD *)(v9 + 24) = Component_object,
        v38 = (PartyOrganizationUtility_o *)(v9 + 24),
        LOBYTE(Component_object->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
    || (UnityEngine_BoxCollider_c *)Component_object->klass->_2.typeHierarchy[methodPtr_low - 1] != v36 )
  {
    sub_1C22354(Component_object);
LABEL_22:
    *(_QWORD *)(v9 + 24) = 0LL;
    v38 = (PartyOrganizationUtility_o *)(v9 + 24);
  }
  sub_1C21DDC(v38, v35, v29, v30, v31, v32, v33, v34);
  resultPanel = (UnityEngine_GameObject_o *)v38->klass;
  if ( !v38->klass )
    goto LABEL_27;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)resultPanel, 1, 0LL);
  v39 = UnityEngine_GameObject__GetComponent_object_(
          v26,
          (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_EventPointVsResultAction___);
  *(_QWORD *)(v9 + 16) = v39;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 16), (int64_t)v39, v40, v41, v42, v43, v44, v45);
  evPointEnt = this->fields.evPointEnt;
  if ( !evPointEnt )
    goto LABEL_27;
  v47 = *(EventPointVsResultAction_o **)(v9 + 16);
  id = evPointEnt->fields.id;
  v49 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(
    v49,
    (Il2CppObject *)v9,
    Method_TitleInfoEventLeagueVsComponent___c__DisplayClass36_0__ResultEffect_b__0__,
    0LL);
  if ( !v47 )
    goto LABEL_27;
  EventPointVsResultAction__Setup(v47, winType, id, v49, 0LL);
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
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  AssetData_o *v9; // x26
  __int64 v13; // x1
  TerminalPramsManager_c *v14; // x0
  __int64 maskFade; // x0
  Il2CppObject *MasterData_object; // x24
  Il2CppObject *v17; // x25
  struct System_Int32_array *v18; // x8
  unsigned __int64 v19; // x21
  int64_t v20; // x22
  unsigned __int64 max_length; // x9
  struct System_Int32_array *group1; // x8
  struct System_Int32_array *group2; // x8
  int64_t v24; // x24
  struct UISlider_array *hpBarSlider; // x8
  struct UISlider_array *v26; // x8
  float v27; // s0
  struct UISlider_array *v28; // x8
  int64_t normaTotalPoint; // x21
  double v30; // d8
  float v31; // s0
  struct UISlider_array *v32; // x8
  float v33; // s0
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  struct UISprite_array *v37; // x8
  struct System_Int32_array *v38; // x9
  UISprite_o *v39; // x24
  Il2CppObject *v40; // x0
  System_String_o *v41; // x26
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  struct UISprite_array *v45; // x8
  struct System_Int32_array *v46; // x9
  UISprite_o *v47; // x24
  __int64 v48; // x2
  __int64 v49; // x3
  __int64 v50; // x4
  struct System_Int32_array *v51; // x8
  Il2CppObject *v52; // x26
  Il2CppObject *v53; // x0
  System_String_o *v54; // x0
  struct System_Int32_array *v55; // x8
  __int64 v56; // x2
  __int64 v57; // x3
  __int64 v58; // x4
  struct System_Int32_array *v59; // x8
  __int64 v60; // x27
  unsigned __int64 v61; // x24
  Il2CppObject *v62; // x26
  unsigned __int64 v63; // x9
  __int64 v64; // x2
  __int64 v65; // x3
  __int64 v66; // x4
  Il2CppObject *v67; // x0
  struct UISprite_array *v68; // x8
  UISprite_o *v69; // x23
  Il2CppObject *v70; // x0
  System_String_o *v71; // x25
  struct UISprite_array *v72; // x8
  UISprite_o *v73; // x23
  System_String_o *v74; // x0
  struct UISlider_array *v75; // x8
  double v76; // d8
  float v77; // s0
  struct UISlider_array *v78; // x8
  __int64 v79; // x2
  __int64 v80; // x3
  __int64 v81; // x4
  struct UISprite_array *hpBar; // x8
  struct System_Int32_array *v83; // x9
  UISprite_o *v84; // x23
  Il2CppObject *v85; // x0
  System_String_o *v86; // x25
  __int64 v87; // x2
  __int64 v88; // x3
  __int64 v89; // x4
  struct UISprite_array *v90; // x8
  struct System_Int32_array *v91; // x9
  UISprite_o *v92; // x23
  Il2CppObject *v93; // x0
  System_String_o *v94; // x0
  __int64 v95; // x2
  __int64 v96; // x3
  __int64 v97; // x4
  struct UISprite_array *groupIcon; // x8
  struct System_Int32_array *v99; // x9
  UISprite_o *v100; // x23
  Il2CppObject *v101; // x0
  System_String_o *v102; // x0
  __int64 v103; // x2
  __int64 v104; // x3
  __int64 v105; // x4
  struct UISprite_array *v106; // x8
  struct System_Int32_array *v107; // x9
  UISprite_o *v108; // x23
  Il2CppObject *v109; // x0
  System_String_o *v110; // x0
  UnityEngine_Object_o *Object_39013000; // x21
  Il2CppObject *v112; // x0
  UnityEngine_GameObject_o *v113; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x21
  const MethodInfo *v116; // x4
  UISprite_o *maskSp; // x21
  const MethodInfo *v118; // x1
  UISprite_o *modeName; // x21
  __int64 v120; // x2
  __int64 v121; // x3
  __int64 v122; // x4
  Il2CppObject *v123; // x0
  System_String_o *v124; // x0
  struct UISprite_array *splitIcon; // x8
  unsigned __int64 v126; // x21
  unsigned __int64 v127; // x9
  UISprite_o *v128; // x20
  UnityEngine_GameObject_o *v129; // x0
  UnityEngine_GameObject_o *v130; // x0
  AssetData_o *v131; // [xsp+10h] [xbp-80h]
  int32_t v132; // [xsp+18h] [xbp-78h] BYREF
  int32_t v133; // [xsp+1Ch] [xbp-74h] BYREF
  int32_t v134; // [xsp+28h] [xbp-68h] BYREF
  int32_t id; // [xsp+2Ch] [xbp-64h] BYREF

  v9 = effectAssetData;
  if ( (byte_4BDA7FA & 1) == 0 )
  {
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_EventPointGroupMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_TotalEventPointMaster___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_TitleInfoEventLeagueVsGaugeEffect___);
    sub_1C21E38(&UnityEngine_GameObject_TypeInfo);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&StringLiteral_19618/*"event_vs_gauge_title_"*/);
    sub_1C21E38(&StringLiteral_19615/*"event_vs_frame"*/);
    sub_1C21E38(&StringLiteral_19614/*"event_vs_back"*/);
    sub_1C21E38(&StringLiteral_25135/*"white00"*/);
    sub_1C21E38(&StringLiteral_19617/*"event_vs_gauge_bg"*/);
    sub_1C21E38(&StringLiteral_17604/*"bit_vs_gauge_part"*/);
    sub_1C21E38(&StringLiteral_19619/*"event_vs_split_line"*/);
    sub_1C21E38(&StringLiteral_18306/*"clear00"*/);
    sub_1C21E38(&StringLiteral_19623/*"event_vs_team_icon_"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    sub_1C21E38(&StringLiteral_19616/*"event_vs_gauge_"*/);
    byte_4BDA7FA = 1;
  }
  if ( !eventPointEntity )
    return;
  this->fields.evPointEnt = eventPointEntity;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.evPointEnt,
    (int64_t)eventPointEntity,
    *(int64_t *)&eventId,
    (int32_t)effectAssetData,
    (System_String_o *)isDispRestTime,
    (BattleSetupInfo_o *)method,
    v6,
    v7);
  this->fields.isDispRestTime = isDispRestTime;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD9AFE )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9AFE = 1;
  }
  v14 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v14 = TerminalPramsManager_TypeInfo;
  }
  if ( v14->static_fields->_eventPointWinType_k__BackingField )
  {
    maskFade = (__int64)this->fields.maskFade;
    if ( !maskFade )
      goto LABEL_120;
    MaskFade__Fadeout((MaskFade_o *)maskFade, 1, 0.0, 0LL, 0LL);
  }
  maskFade = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !maskFade )
    goto LABEL_120;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)maskFade,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_TotalEventPointMaster___);
  maskFade = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !maskFade )
    goto LABEL_120;
  v17 = DataManager__GetMasterData_object_(
          (DataManager_o *)maskFade,
          (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventPointGroupMaster___);
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
        v20 = maskFade;
        maskFade = TotalEventPointMaster__GetPoint(
                     (TotalEventPointMaster_o *)MasterData_object,
                     eventId,
                     eventPointEntity->fields.id,
                     group2->m_Items[1],
                     0LL);
        v24 = maskFade;
        if ( v20 == maskFade )
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
          v26 = this->fields.hpBarSlider;
          if ( !v26 )
            goto LABEL_120;
          if ( v26->max_length <= 1 )
            goto LABEL_123;
          maskFade = (__int64)v26->m_Items[1];
          if ( !maskFade )
            goto LABEL_120;
          v27 = 0.5;
        }
        else
        {
          v75 = this->fields.hpBarSlider;
          if ( !v75 )
            goto LABEL_120;
          if ( !v75->max_length )
            goto LABEL_123;
          maskFade = (__int64)v75->m_Items[0];
          if ( !maskFade )
            goto LABEL_120;
          v76 = (double)v20 / (double)(v24 + v20);
          v77 = 1.0 - v76;
          UIProgressBar__set_value((UIProgressBar_o *)maskFade, v77, 0LL);
          v78 = this->fields.hpBarSlider;
          if ( !v78 )
            goto LABEL_120;
          if ( v78->max_length <= 1 )
            goto LABEL_123;
          maskFade = (__int64)v78->m_Items[1];
          if ( !maskFade )
            goto LABEL_120;
          v27 = v76;
        }
        UIProgressBar__set_value((UIProgressBar_o *)maskFade, v27, 0LL);
        hpBar = this->fields.hpBar;
        if ( !hpBar )
          goto LABEL_120;
        if ( hpBar->max_length )
        {
          v83 = eventPointEntity->fields.group2;
          if ( !v83 )
            goto LABEL_120;
          if ( v83->max_length )
          {
            v84 = hpBar->m_Items[0];
            id = v83->m_Items[1];
            v85 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id, v79, v80, v81);
            v86 = System_String__Concat((Il2CppObject *)StringLiteral_19616/*"event_vs_gauge_"*/, v85, 0LL);
            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
            maskFade = AtlasManager__SetEventUI(v84, v86, 0LL);
            v90 = this->fields.hpBar;
            if ( !v90 )
              goto LABEL_120;
            if ( v90->max_length > 1 )
            {
              v91 = eventPointEntity->fields.group1;
              if ( !v91 )
                goto LABEL_120;
              if ( v91->max_length )
              {
                v92 = v90->m_Items[1];
                v134 = v91->m_Items[1];
                v93 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v134, v87, v88, v89);
                v94 = System_String__Concat((Il2CppObject *)StringLiteral_19616/*"event_vs_gauge_"*/, v93, 0LL);
                maskFade = AtlasManager__SetEventUI(v92, v94, 0LL);
                groupIcon = this->fields.groupIcon;
                if ( !groupIcon )
                  goto LABEL_120;
                if ( groupIcon->max_length )
                {
                  v99 = eventPointEntity->fields.group2;
                  if ( !v99 )
                    goto LABEL_120;
                  if ( v99->max_length )
                  {
                    v100 = groupIcon->m_Items[0];
                    v133 = v99->m_Items[1];
                    v101 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v133, v95, v96, v97);
                    v102 = System_String__Concat((Il2CppObject *)StringLiteral_19623/*"event_vs_team_icon_"*/, v101, 0LL);
                    maskFade = AtlasManager__SetEventUI(v100, v102, 0LL);
                    v106 = this->fields.groupIcon;
                    if ( !v106 )
                      goto LABEL_120;
                    if ( v106->max_length > 1 )
                    {
                      v107 = eventPointEntity->fields.group1;
                      if ( !v107 )
                        goto LABEL_120;
                      if ( v107->max_length )
                      {
                        v108 = v106->m_Items[1];
                        v132 = v107->m_Items[1];
                        v109 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v132, v103, v104, v105);
                        v110 = System_String__Concat((Il2CppObject *)StringLiteral_19623/*"event_vs_team_icon_"*/, v109, 0LL);
                        maskFade = AtlasManager__SetEventUI(v108, v110, 0LL);
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
    sub_1C2209C(maskFade, v13);
  }
  v18 = eventPointEntity->fields.group1;
  if ( !v18 )
    goto LABEL_120;
  v19 = 0LL;
  v20 = 0LL;
  while ( 1 )
  {
    max_length = v18->max_length;
    if ( (__int64)v19 >= (int)max_length )
      break;
    if ( v19 >= max_length )
      goto LABEL_123;
    if ( MasterData_object )
    {
      maskFade = TotalEventPointMaster__GetPoint(
                   (TotalEventPointMaster_o *)MasterData_object,
                   eventId,
                   eventPointEntity->fields.id,
                   v18->m_Items[v19 + 1],
                   0LL);
      v18 = eventPointEntity->fields.group1;
      v20 += maskFade;
      ++v19;
      if ( v18 )
        continue;
    }
    goto LABEL_120;
  }
  v28 = this->fields.hpBarSlider;
  if ( !v28 )
    goto LABEL_120;
  if ( !v28->max_length )
    goto LABEL_123;
  maskFade = (__int64)v28->m_Items[0];
  if ( !maskFade )
    goto LABEL_120;
  normaTotalPoint = eventPointEntity->fields.normaTotalPoint;
  v30 = (double)v20 / (double)normaTotalPoint;
  v31 = 1.0 - v30;
  UIProgressBar__set_value((UIProgressBar_o *)maskFade, v31, 0LL);
  v32 = this->fields.hpBarSlider;
  if ( !v32 )
    goto LABEL_120;
  if ( v32->max_length <= 1 )
    goto LABEL_123;
  maskFade = (__int64)v32->m_Items[1];
  if ( !maskFade )
    goto LABEL_120;
  v33 = v30;
  UIProgressBar__set_value((UIProgressBar_o *)maskFade, v33, 0LL);
  v37 = this->fields.hpBar;
  if ( !v37 )
    goto LABEL_120;
  if ( !v37->max_length )
    goto LABEL_123;
  v38 = eventPointEntity->fields.group2;
  if ( !v38 )
    goto LABEL_120;
  v131 = v9;
  if ( !v38->max_length )
    goto LABEL_123;
  v39 = v37->m_Items[0];
  id = v38->m_Items[1];
  v40 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id, v34, v35, v36);
  v41 = System_String__Concat((Il2CppObject *)StringLiteral_19616/*"event_vs_gauge_"*/, v40, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  maskFade = AtlasManager__SetEventUI(v39, v41, 0LL);
  v45 = this->fields.hpBar;
  if ( !v45 )
    goto LABEL_120;
  if ( v45->max_length <= 1 )
    goto LABEL_123;
  v46 = eventPointEntity->fields.group1;
  if ( !v46 )
    goto LABEL_120;
  if ( !v46->max_length )
    goto LABEL_123;
  v47 = v45->m_Items[1];
  v134 = v46->m_Items[1];
  maskFade = j_il2cpp_value_box_0(int_TypeInfo, &v134, v42, v43, v44);
  v51 = eventPointEntity->fields.group1;
  if ( !v51 )
    goto LABEL_120;
  if ( v51->max_length <= 1 )
    goto LABEL_123;
  v52 = (Il2CppObject *)maskFade;
  v133 = v51->m_Items[2];
  v53 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v133, v48, v49, v50);
  v54 = System_String__Concat_63126488((Il2CppObject *)StringLiteral_19616/*"event_vs_gauge_"*/, v52, v53, 0LL);
  maskFade = AtlasManager__SetEventUI(v47, v54, 0LL);
  v55 = eventPointEntity->fields.group2;
  if ( !v55 )
    goto LABEL_120;
  if ( !v55->max_length )
    goto LABEL_123;
  if ( !v17 )
    goto LABEL_120;
  maskFade = (__int64)EventPointGroupMaster__getEntity((EventPointGroupMaster_o *)v17, eventId, v55->m_Items[1], 0LL);
  v59 = eventPointEntity->fields.group1;
  if ( !v59 )
    goto LABEL_120;
  v60 = maskFade;
  v61 = 0LL;
  v62 = (Il2CppObject *)StringLiteral_1/*""*/;
  while ( 1 )
  {
    v63 = v59->max_length;
    if ( (__int64)v61 >= (int)v63 )
      break;
    if ( v61 >= v63 )
      goto LABEL_123;
    maskFade = (__int64)EventPointGroupMaster__getEntity(
                          (EventPointGroupMaster_o *)v17,
                          eventId,
                          v59->m_Items[v61 + 1],
                          0LL);
    if ( maskFade )
    {
      id = *(_DWORD *)(maskFade + 32);
      v67 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id, v64, v65, v66);
      maskFade = (__int64)System_String__Concat(v62, v67, 0LL);
      v59 = eventPointEntity->fields.group1;
      v62 = (Il2CppObject *)maskFade;
      ++v61;
      if ( v59 )
        continue;
    }
    goto LABEL_120;
  }
  v68 = this->fields.groupIcon;
  if ( !v68 )
    goto LABEL_120;
  if ( !v68->max_length )
    goto LABEL_123;
  if ( !v60 )
    goto LABEL_120;
  v69 = v68->m_Items[0];
  id = *(_DWORD *)(v60 + 32);
  v70 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id, v56, v57, v58);
  v71 = System_String__Concat((Il2CppObject *)StringLiteral_19623/*"event_vs_team_icon_"*/, v70, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  maskFade = AtlasManager__SetEventUI(v69, v71, 0LL);
  v72 = this->fields.groupIcon;
  v24 = normaTotalPoint - v20;
  if ( !v72 )
LABEL_120:
    sub_1C22094(maskFade, v13);
  if ( v72->max_length <= 1 )
    goto LABEL_123;
  v73 = v72->m_Items[1];
  v74 = System_String__Concat_63115476((System_String_o *)StringLiteral_19623/*"event_vs_team_icon_"*/, (System_String_o *)v62, 0LL);
  maskFade = AtlasManager__SetEventUI(v73, v74, 0LL);
  v9 = v131;
LABEL_98:
  if ( !v9 )
    goto LABEL_120;
  Object_39013000 = AssetData__GetObject_39013000(v9, (System_String_o *)StringLiteral_17604/*"bit_vs_gauge_part"*/, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( Object_39013000 )
    v112 = (UnityEngine_GameObject_c *)Object_39013000->klass == UnityEngine_GameObject_TypeInfo
         ? (Il2CppObject *)Object_39013000
         : 0LL;
  else
    v112 = 0LL;
  maskFade = (__int64)UnityEngine_Object__Instantiate_object_(
                        v112,
                        (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !maskFade )
    goto LABEL_120;
  v113 = (UnityEngine_GameObject_o *)maskFade;
  gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)maskFade, 0LL);
  GameObjectExtensions__SafeSetParent_34803616(gameObject, this->fields.gaugeEffectPanel, 0LL);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v113,
                       (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventLeagueVsGaugeEffect___);
  maskFade = EventPointEntity__isBossBattle(eventPointEntity, 0LL);
  if ( !Component_object )
    goto LABEL_120;
  TitleInfoEventLeagueVsGaugeEffect__setup(
    (TitleInfoEventLeagueVsGaugeEffect_o *)Component_object,
    v20,
    v24,
    maskFade & 1,
    v116);
  maskSp = this->fields.maskSp;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetCommon(maskSp, 0LL);
  AtlasManager__SetCommon(this->fields.colliderSp, 0LL);
  maskFade = (__int64)this->fields.maskSp;
  if ( !maskFade )
    goto LABEL_120;
  UISprite__set_spriteName((UISprite_o *)maskFade, (System_String_o *)StringLiteral_25135/*"white00"*/, 0LL);
  maskFade = (__int64)this->fields.colliderSp;
  if ( !maskFade )
    goto LABEL_120;
  UISprite__set_spriteName((UISprite_o *)maskFade, (System_String_o *)StringLiteral_18306/*"clear00"*/, 0LL);
  this->fields.endTime = eventPointEntity->fields.endedAt;
  TitleInfoEventLeagueVsComponent__restTimeUpdate(this, v118);
  AtlasManager__SetEventUI(this->fields.baseWindow, (System_String_o *)StringLiteral_19617/*"event_vs_gauge_bg"*/, 0LL);
  AtlasManager__SetEventUI(this->fields.hpFrame, (System_String_o *)StringLiteral_19615/*"event_vs_frame"*/, 0LL);
  AtlasManager__SetEventUI(this->fields.hpBack, (System_String_o *)StringLiteral_19614/*"event_vs_back"*/, 0LL);
  modeName = this->fields.modeName;
  id = eventPointEntity->fields.id;
  v123 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id, v120, v121, v122);
  v124 = System_String__Concat((Il2CppObject *)StringLiteral_19618/*"event_vs_gauge_title_"*/, v123, 0LL);
  AtlasManager__SetEventUI(modeName, v124, 0LL);
  maskFade = (__int64)this->fields.modeName;
  if ( !maskFade )
    goto LABEL_120;
  maskFade = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)maskFade + 840LL))(
               maskFade,
               *(_QWORD *)(*(_QWORD *)maskFade + 848LL));
  splitIcon = this->fields.splitIcon;
  if ( !splitIcon )
    goto LABEL_120;
  v126 = 0LL;
  while ( 1 )
  {
    v127 = splitIcon->max_length;
    if ( (__int64)v126 >= (int)v127 )
      break;
    if ( v126 >= v127 )
      goto LABEL_123;
    v128 = splitIcon->m_Items[v126];
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    maskFade = AtlasManager__SetEventUI(v128, (System_String_o *)StringLiteral_19619/*"event_vs_split_line"*/, 0LL);
    splitIcon = this->fields.splitIcon;
    ++v126;
    if ( !splitIcon )
      goto LABEL_120;
  }
  v129 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPositionY(v129, -2.0, 0LL);
  v130 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  this->fields.originPos = GameObjectExtensions__GetLocalPosition(v130, 0LL);
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
  UnityEngine_Object_o *Object_39013000; // x0
  UnityEngine_GameObject_c **v22; // x22
  Il2CppObject *v23; // x0
  UnityEngine_GameObject_o *v24; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v26; // x5

  if ( (byte_4BDA7FE & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_TotalEventPointMaster___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_TitleInfoEventLeagueVsGaugeFlashEffect___);
    sub_1C21E38(&UnityEngine_GameObject_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&StringLiteral_17602/*"bit_vs_gauge_flash"*/);
    byte_4BDA7FE = 1;
  }
  evPointEnt = this->fields.evPointEnt;
  if ( evPointEnt )
  {
    if ( EventPointEntity__isBossBattle(evPointEnt, 0LL) )
    {
      ActionExtensions__Call(callback, 0LL);
      return;
    }
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_26;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_TotalEventPointMaster___);
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
      sub_1C2209C(Instance, v13);
    v19 = (int64_t)Instance;
    Instance = (DataManager_o *)TotalEventPointMaster__GetPoint(v16, eventId, v17->fields.id, group2->m_Items[1], 0LL);
    if ( !effectAssetData )
      goto LABEL_26;
    v20 = (int64_t)Instance;
    Object_39013000 = AssetData__GetObject_39013000(effectAssetData, (System_String_o *)StringLiteral_17602/*"bit_vs_gauge_flash"*/, 0LL);
    v22 = (UnityEngine_GameObject_c **)Object_39013000;
    if ( UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      if ( Object_39013000 )
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
                                      (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( Instance )
        {
          v24 = (UnityEngine_GameObject_o *)Instance;
          gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)Instance, 0LL);
          GameObjectExtensions__SafeSetParent_34803616(gameObject, this->fields.gaugeEffectPanel, 0LL);
          Instance = (DataManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                        v24,
                                        (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventLeagueVsGaugeFlashEffect___);
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
        sub_1C22094(Instance, v13);
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

  if ( (byte_4BDA7FB & 1) == 0 )
  {
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&StringLiteral_5864/*"EVENT_VS_GAUGE_REST_TIME"*/);
    byte_4BDA7FB = 1;
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
      v6 = LocalizationManager__Get((System_String_o *)StringLiteral_5864/*"EVENT_VS_GAUGE_REST_TIME"*/, 0LL);
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
    sub_1C22094(restTimeLabel, v3);
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
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  struct TitleInfoEventLeagueVsComponent_o *_4__this; // x8

  v2 = this;
  if ( (byte_4BDA802 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    this = (TitleInfoEventLeagueVsComponent___c__DisplayClass36_0_o *)sub_1C21E38(&Method_TitleInfoEventLeagueVsComponent___c__DisplayClass36_0__ResultEffect_b__1__);
    byte_4BDA802 = 1;
  }
  _9__1 = v2->fields.__9__1;
  effect = v2->fields.effect;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v2,
      Method_TitleInfoEventLeagueVsComponent___c__DisplayClass36_0__ResultEffect_b__1__,
      0LL);
    v2->fields.__9__1 = _9__1;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v2->fields.__9__1, (int64_t)_9__1, v5, v6, v7, v8, v9, v10);
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this || !effect )
    sub_1C22094(this, method);
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

  if ( (byte_4BDA803 & 1) == 0 )
  {
    sub_1C21E38(&AvalonSceneManager_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDA803 = 1;
  }
  effect = (UnityEngine_Component_o *)this->fields.effect;
  if ( !effect )
    goto LABEL_12;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(effect, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_70869612(gameObject, 0LL);
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
    sub_1C22094(effect, method);
  MaskFade__Fadein(maskFade, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, this->fields.callback, 0LL);
}