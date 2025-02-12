void __fastcall TitleInfoEventLeagueVsComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct TitleInfoEventLeagueVsComponent_StaticFields *static_fields; // x8

  if ( (byte_4BB29B4 & 1) == 0 )
  {
    sub_1C13D24(&TitleInfoEventLeagueVsComponent_TypeInfo, v1);
    byte_4BB29B4 = 1;
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
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  int64_t v23; // x1
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7

  if ( (byte_4BB29AF & 1) == 0 )
  {
    sub_1C13D24(&TitleInfoEventLeagueVsComponent_TypeInfo, callback);
    sub_1C13D24(&Method_UITweener_Begin_TweenPosition___, v5);
    sub_1C13D24(&StringLiteral_6988/*"FragOks"*/, v6);
    byte_4BB29AF = 1;
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
            (const MethodInfo_3043CC0 *)Method_UITweener_Begin_TweenPosition___);
    if ( !v10 )
      sub_1C13F80(0LL, v11);
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
    sub_1C13CC8((PartyOrganizationUtility_o *)&v13[5], (int64_t)v16, v17, v18, v19, v20, v21, v22);
    v23 = StringLiteral_6988/*"FragOks"*/;
    v13[5].monitor = (void *)StringLiteral_6988/*"FragOks"*/;
    sub_1C13CC8((PartyOrganizationUtility_o *)&v13[5].monitor, v23, v24, v25, v26, v27, v28, v29);
    this->fields.frameInCallBack = callback;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&this->fields.frameInCallBack,
      (int64_t)callback,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
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
  sub_1C13CC8(p_frameInCallBack, 0LL, v2, v3, v4, v5, v6, v7);
  if ( frameInCallBack )
    ActionExtensions__Call(v9, 0LL);
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
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  int64_t v20; // x1
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  Il2CppClass *v27; // [xsp+0h] [xbp-40h]

  if ( (byte_4BB29B0 & 1) == 0 )
  {
    sub_1C13D24(&TitleInfoEventLeagueVsComponent_TypeInfo, method);
    sub_1C13D24(&Method_UITweener_Begin_TweenPosition___, v3);
    sub_1C13D24(&StringLiteral_6990/*"Frame index\t: "*/, v4);
    byte_4BB29B0 = 1;
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
         (const MethodInfo_3043CC0 *)Method_UITweener_Begin_TweenPosition___);
  v27 = *(Il2CppClass **)&this->fields.originPos.fields.x;
  if ( !v8 )
    sub_1C13F80(0LL, v9);
  v10 = v8;
  *(float *)&v8[8].monitor = this->fields.originPos.fields.z;
  v8[8].klass = v27;
  static_fields = (float32x2_t *)TitleInfoEventLeagueVsComponent_TypeInfo->static_fields;
  v12 = this->fields.originPos.fields.z + static_fields[1].n64_f32[0];
  *(float32x2_t *)((char *)&v8[8].monitor + 4) = vadd_f32(
                                                   *(float32x2_t *)&this->fields.originPos.fields.x,
                                                   (float32x2_t)static_fields->n64_u64[0]);
  *((float *)&v8[9].klass + 1) = v12;
  LODWORD(v8[2].klass) = 2;
  v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v10[5].klass = (Il2CppClass *)v13;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v10[5], (int64_t)v13, v14, v15, v16, v17, v18, v19);
  v20 = StringLiteral_6990/*"Frame index\t: "*/;
  v10[5].monitor = (void *)StringLiteral_6990/*"Frame index\t: "*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v10[5].monitor, v20, v21, v22, v23, v24, v25, v26);
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

  if ( (byte_4BB29B3 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_GiftMaster___, evPointEnt);
    sub_1C13D24(&LocalizationManager_TypeInfo, v8);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_1C13D24(&StringLiteral_5774/*"EVENT_POINT_TOTAL_NUM"*/, v11);
    sub_1C13D24(&StringLiteral_5773/*"EVENT_POINT_REWARD_GET"*/, v12);
    sub_1C13D24(&StringLiteral_5772/*"EVENT_POINT_RATE_INFO"*/, v13);
    byte_4BB29B3 = 1;
  }
  countText = 0LL;
  nameText = 0LL;
  if ( evPointEnt )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_21;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_GiftMaster___);
    if ( !rewardInfo || !Instance )
      goto LABEL_21;
    GiftListById = GiftMaster__GetGiftListById((GiftMaster_o *)Instance, rewardInfo->fields.giftId, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v17 = LocalizationManager__Get((System_String_o *)StringLiteral_5774/*"EVENT_POINT_TOTAL_NUM"*/, 0LL);
    v18 = System_String__Format(v17, (Il2CppObject *)evPointEnt->fields.name, 0LL);
    v19 = LocalizationManager__Get((System_String_o *)StringLiteral_5773/*"EVENT_POINT_REWARD_GET"*/, 0LL);
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
          sub_1C13F88(Instance, v15);
        Instance = (DataManager_o *)GiftListById->m_Items[v25];
        if ( !Instance )
          break;
        GiftEntity__GetInfo((GiftEntity_o *)Instance, &nameText, &countText, 0LL);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v26 = LocalizationManager__Get((System_String_o *)StringLiteral_5772/*"EVENT_POINT_RATE_INFO"*/, 0LL);
        v27 = System_String__Format_62982316(v26, (Il2CppObject *)nameText, (Il2CppObject *)countText, 0LL);
        Instance = (DataManager_o *)System_String__Concat_62967944(v24, v27, 0LL);
        max_length = GiftListById->max_length;
        ++v25;
        v24 = (System_String_o *)Instance;
        if ( v25 >= max_length )
          goto LABEL_17;
      }
LABEL_21:
      sub_1C13F80(Instance, v15);
    }
LABEL_17:
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  UnityEngine_Object_o *Object_38913448; // x22
  Il2CppObject *v34; // x0
  UnityEngine_GameObject_o *v35; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  int64_t v44; // x8
  UnityEngine_BoxCollider_c *v45; // x1
  __int64 methodPtr_low; // x9
  PartyOrganizationUtility_o *v47; // x23
  Il2CppObject *v48; // x0
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  struct EventPointEntity_o *evPointEnt; // x8
  EventPointVsResultAction_o *v56; // x20
  int32_t id; // w22
  System_Action_o *v58; // x23

  if ( (byte_4BB29B2 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, *(_QWORD *)&winType);
    sub_1C13D24(&UnityEngine_BoxCollider_TypeInfo, v9);
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_Collider___, v10);
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_EventPointVsResultAction___, v11);
    sub_1C13D24(&UnityEngine_GameObject_TypeInfo, v12);
    sub_1C13D24(&Method_UnityEngine_Object_Instantiate_GameObject___, v13);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v14);
    sub_1C13D24(&Method_TitleInfoEventLeagueVsComponent___c__DisplayClass36_0__ResultEffect_b__0__, v15);
    sub_1C13D24(&TitleInfoEventLeagueVsComponent___c__DisplayClass36_0_TypeInfo, v16);
    sub_1C13D24(&StringLiteral_17580/*"bit_runningdog_80"*/, v17);
    byte_4BB29B2 = 1;
  }
  v18 = sub_1C13F70(TitleInfoEventLeagueVsComponent___c__DisplayClass36_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v18, 0LL);
  if ( !v18 )
    goto LABEL_27;
  *(_QWORD *)(v18 + 32) = this;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v18 + 32), (int64_t)this, v21, v22, v23, v24, v25, v26);
  *(_QWORD *)(v18 + 40) = callback;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v18 + 40), (int64_t)callback, v27, v28, v29, v30, v31, v32);
  if ( !winType )
  {
    ActionExtensions__Call(*(System_Action_o **)(v18 + 40), 0LL);
    return;
  }
  if ( !effectAssetData )
    goto LABEL_27;
  Object_38913448 = AssetData__GetObject_38913448(effectAssetData, (System_String_o *)StringLiteral_17580/*"bit_runningdog_80"*/, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( Object_38913448 )
    v34 = (UnityEngine_GameObject_c *)Object_38913448->klass == UnityEngine_GameObject_TypeInfo
        ? (Il2CppObject *)Object_38913448
        : 0LL;
  else
    v34 = 0LL;
  resultPanel = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                              v34,
                                              (const MethodInfo_3014D84 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !resultPanel
    || (v35 = resultPanel,
        gameObject = UnityEngine_GameObject__get_gameObject(resultPanel, 0LL),
        GameObjectExtensions__SafeSetParent_34717732(gameObject, this->fields.resultPanel, 0LL),
        (resultPanel = this->fields.resultPanel) == 0LL) )
  {
LABEL_27:
    sub_1C13F80(resultPanel, v20);
  }
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       resultPanel,
                       (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_Collider___);
  v44 = (int64_t)Component_object;
  if ( !Component_object )
    goto LABEL_22;
  v45 = UnityEngine_BoxCollider_TypeInfo;
  methodPtr_low = LOBYTE(UnityEngine_BoxCollider_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(Component_object->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
    || (UnityEngine_BoxCollider_c *)Component_object->klass->_2.typeHierarchy[methodPtr_low - 1] != UnityEngine_BoxCollider_TypeInfo
    || (*(_QWORD *)(v18 + 24) = Component_object,
        v47 = (PartyOrganizationUtility_o *)(v18 + 24),
        LOBYTE(Component_object->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
    || (UnityEngine_BoxCollider_c *)Component_object->klass->_2.typeHierarchy[methodPtr_low - 1] != v45 )
  {
    sub_1C14240(Component_object);
LABEL_22:
    *(_QWORD *)(v18 + 24) = 0LL;
    v47 = (PartyOrganizationUtility_o *)(v18 + 24);
  }
  sub_1C13CC8(v47, v44, v38, v39, v40, v41, v42, v43);
  resultPanel = (UnityEngine_GameObject_o *)v47->klass;
  if ( !v47->klass )
    goto LABEL_27;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)resultPanel, 1, 0LL);
  v48 = UnityEngine_GameObject__GetComponent_object_(
          v35,
          (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_EventPointVsResultAction___);
  *(_QWORD *)(v18 + 16) = v48;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v18 + 16), (int64_t)v48, v49, v50, v51, v52, v53, v54);
  evPointEnt = this->fields.evPointEnt;
  if ( !evPointEnt )
    goto LABEL_27;
  v56 = *(EventPointVsResultAction_o **)(v18 + 16);
  id = evPointEnt->fields.id;
  v58 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
  System_Action___ctor(
    v58,
    (Il2CppObject *)v18,
    Method_TitleInfoEventLeagueVsComponent___c__DisplayClass36_0__ResultEffect_b__0__,
    0LL);
  if ( !v56 )
    goto LABEL_27;
  EventPointVsResultAction__Setup(v56, winType, id, v58, 0LL);
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
  __int64 maskFade; // x0
  Il2CppObject *MasterData_object; // x24
  Il2CppObject *v37; // x25
  struct System_Int32_array *v38; // x8
  unsigned __int64 v39; // x21
  int64_t v40; // x22
  unsigned __int64 max_length; // x9
  struct System_Int32_array *group1; // x8
  struct System_Int32_array *group2; // x8
  int64_t v44; // x24
  struct UISlider_array *hpBarSlider; // x8
  struct UISlider_array *v46; // x8
  float v47; // s0
  struct UISlider_array *v48; // x8
  int64_t normaTotalPoint; // x21
  double v50; // d8
  float v51; // s0
  struct UISlider_array *v52; // x8
  float v53; // s0
  __int64 v54; // x2
  __int64 v55; // x3
  __int64 v56; // x4
  struct UISprite_array *v57; // x8
  struct System_Int32_array *v58; // x9
  UISprite_o *v59; // x24
  Il2CppObject *v60; // x0
  System_String_o *v61; // x26
  __int64 v62; // x2
  __int64 v63; // x3
  __int64 v64; // x4
  struct UISprite_array *v65; // x8
  struct System_Int32_array *v66; // x9
  UISprite_o *v67; // x24
  __int64 v68; // x2
  __int64 v69; // x3
  __int64 v70; // x4
  struct System_Int32_array *v71; // x8
  Il2CppObject *v72; // x26
  Il2CppObject *v73; // x0
  System_String_o *v74; // x0
  struct System_Int32_array *v75; // x8
  __int64 v76; // x2
  __int64 v77; // x3
  __int64 v78; // x4
  struct System_Int32_array *v79; // x8
  __int64 v80; // x27
  unsigned __int64 v81; // x24
  Il2CppObject *v82; // x26
  unsigned __int64 v83; // x9
  __int64 v84; // x2
  __int64 v85; // x3
  __int64 v86; // x4
  Il2CppObject *v87; // x0
  struct UISprite_array *v88; // x8
  UISprite_o *v89; // x23
  Il2CppObject *v90; // x0
  System_String_o *v91; // x25
  struct UISprite_array *v92; // x8
  UISprite_o *v93; // x23
  System_String_o *v94; // x0
  struct UISlider_array *v95; // x8
  double v96; // d8
  float v97; // s0
  struct UISlider_array *v98; // x8
  __int64 v99; // x2
  __int64 v100; // x3
  __int64 v101; // x4
  struct UISprite_array *hpBar; // x8
  struct System_Int32_array *v103; // x9
  UISprite_o *v104; // x23
  Il2CppObject *v105; // x0
  System_String_o *v106; // x25
  __int64 v107; // x2
  __int64 v108; // x3
  __int64 v109; // x4
  struct UISprite_array *v110; // x8
  struct System_Int32_array *v111; // x9
  UISprite_o *v112; // x23
  Il2CppObject *v113; // x0
  System_String_o *v114; // x0
  __int64 v115; // x2
  __int64 v116; // x3
  __int64 v117; // x4
  struct UISprite_array *groupIcon; // x8
  struct System_Int32_array *v119; // x9
  UISprite_o *v120; // x23
  Il2CppObject *v121; // x0
  System_String_o *v122; // x0
  __int64 v123; // x2
  __int64 v124; // x3
  __int64 v125; // x4
  struct UISprite_array *v126; // x8
  struct System_Int32_array *v127; // x9
  UISprite_o *v128; // x23
  Il2CppObject *v129; // x0
  System_String_o *v130; // x0
  UnityEngine_Object_o *Object_38913448; // x21
  Il2CppObject *v132; // x0
  UnityEngine_GameObject_o *v133; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x21
  const MethodInfo *v136; // x4
  UISprite_o *maskSp; // x21
  const MethodInfo *v138; // x1
  UISprite_o *modeName; // x21
  __int64 v140; // x2
  __int64 v141; // x3
  __int64 v142; // x4
  Il2CppObject *v143; // x0
  System_String_o *v144; // x0
  struct UISprite_array *splitIcon; // x8
  unsigned __int64 v146; // x21
  unsigned __int64 v147; // x9
  UISprite_o *v148; // x20
  UnityEngine_GameObject_o *v149; // x0
  UnityEngine_GameObject_o *v150; // x0
  AssetData_o *v151; // [xsp+10h] [xbp-80h]
  int32_t v152; // [xsp+18h] [xbp-78h] BYREF
  int32_t v153; // [xsp+1Ch] [xbp-74h] BYREF
  int32_t v154; // [xsp+28h] [xbp-68h] BYREF
  int32_t id; // [xsp+2Ch] [xbp-64h] BYREF

  v9 = effectAssetData;
  if ( (byte_4BB29AD & 1) == 0 )
  {
    sub_1C13D24(&AtlasManager_TypeInfo, eventPointEntity);
    sub_1C13D24(&Method_DataManager_GetMasterData_EventPointGroupMaster___, v13);
    sub_1C13D24(&Method_DataManager_GetMasterData_TotalEventPointMaster___, v14);
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_TitleInfoEventLeagueVsGaugeEffect___, v15);
    sub_1C13D24(&UnityEngine_GameObject_TypeInfo, v16);
    sub_1C13D24(&int_TypeInfo, v17);
    sub_1C13D24(&Method_UnityEngine_Object_Instantiate_GameObject___, v18);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v19);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v21);
    sub_1C13D24(&StringLiteral_19589/*"event_title_80367"*/, v22);
    sub_1C13D24(&StringLiteral_19586/*"event_support_txt"*/, v23);
    sub_1C13D24(&StringLiteral_19585/*"event_superboss_status_win_"*/, v24);
    sub_1C13D24(&StringLiteral_25091/*"weaponGroup"*/, v25);
    sub_1C13D24(&StringLiteral_19588/*"event_tab_type5_0"*/, v26);
    sub_1C13D24(&StringLiteral_17577/*"bit_runningdog_50"*/, v27);
    sub_1C13D24(&StringLiteral_19590/*"event_title_txt_"*/, v28);
    sub_1C13D24(&StringLiteral_18278/*"classBoard/releaseLock"*/, v29);
    sub_1C13D24(&StringLiteral_19594/*"event_trade_8048002"*/, v30);
    sub_1C13D24(&StringLiteral_1/*""*/, v31);
    sub_1C13D24(&StringLiteral_19587/*"event_tab_bg_mask"*/, v32);
    byte_4BB29AD = 1;
  }
  if ( !eventPointEntity )
    return;
  this->fields.evPointEnt = eventPointEntity;
  sub_1C13CC8(
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
  if ( !byte_4BB1CB1 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v33);
    byte_4BB1CB1 = 1;
  }
  v34 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v34 = TerminalPramsManager_TypeInfo;
  }
  if ( v34->static_fields->_eventPointWinType_k__BackingField )
  {
    maskFade = (__int64)this->fields.maskFade;
    if ( !maskFade )
      goto LABEL_120;
    MaskFade__Fadeout((MaskFade_o *)maskFade, 1, 0.0, 0LL, 0LL);
  }
  maskFade = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !maskFade )
    goto LABEL_120;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)maskFade,
                        (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_TotalEventPointMaster___);
  maskFade = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !maskFade )
    goto LABEL_120;
  v37 = DataManager__GetMasterData_object_(
          (DataManager_o *)maskFade,
          (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_EventPointGroupMaster___);
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
        v40 = maskFade;
        maskFade = TotalEventPointMaster__GetPoint(
                     (TotalEventPointMaster_o *)MasterData_object,
                     eventId,
                     eventPointEntity->fields.id,
                     group2->m_Items[1],
                     0LL);
        v44 = maskFade;
        if ( v40 == maskFade )
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
          v46 = this->fields.hpBarSlider;
          if ( !v46 )
            goto LABEL_120;
          if ( v46->max_length <= 1 )
            goto LABEL_123;
          maskFade = (__int64)v46->m_Items[1];
          if ( !maskFade )
            goto LABEL_120;
          v47 = 0.5;
        }
        else
        {
          v95 = this->fields.hpBarSlider;
          if ( !v95 )
            goto LABEL_120;
          if ( !v95->max_length )
            goto LABEL_123;
          maskFade = (__int64)v95->m_Items[0];
          if ( !maskFade )
            goto LABEL_120;
          v96 = (double)v40 / (double)(v44 + v40);
          v97 = 1.0 - v96;
          UIProgressBar__set_value((UIProgressBar_o *)maskFade, v97, 0LL);
          v98 = this->fields.hpBarSlider;
          if ( !v98 )
            goto LABEL_120;
          if ( v98->max_length <= 1 )
            goto LABEL_123;
          maskFade = (__int64)v98->m_Items[1];
          if ( !maskFade )
            goto LABEL_120;
          v47 = v96;
        }
        UIProgressBar__set_value((UIProgressBar_o *)maskFade, v47, 0LL);
        hpBar = this->fields.hpBar;
        if ( !hpBar )
          goto LABEL_120;
        if ( hpBar->max_length )
        {
          v103 = eventPointEntity->fields.group2;
          if ( !v103 )
            goto LABEL_120;
          if ( v103->max_length )
          {
            v104 = hpBar->m_Items[0];
            id = v103->m_Items[1];
            v105 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id, v99, v100, v101);
            v106 = System_String__Concat((Il2CppObject *)StringLiteral_19587/*"event_tab_bg_mask"*/, v105, 0LL);
            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
            maskFade = AtlasManager__SetEventUI(v104, v106, 0LL);
            v110 = this->fields.hpBar;
            if ( !v110 )
              goto LABEL_120;
            if ( v110->max_length > 1 )
            {
              v111 = eventPointEntity->fields.group1;
              if ( !v111 )
                goto LABEL_120;
              if ( v111->max_length )
              {
                v112 = v110->m_Items[1];
                v154 = v111->m_Items[1];
                v113 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v154, v107, v108, v109);
                v114 = System_String__Concat((Il2CppObject *)StringLiteral_19587/*"event_tab_bg_mask"*/, v113, 0LL);
                maskFade = AtlasManager__SetEventUI(v112, v114, 0LL);
                groupIcon = this->fields.groupIcon;
                if ( !groupIcon )
                  goto LABEL_120;
                if ( groupIcon->max_length )
                {
                  v119 = eventPointEntity->fields.group2;
                  if ( !v119 )
                    goto LABEL_120;
                  if ( v119->max_length )
                  {
                    v120 = groupIcon->m_Items[0];
                    v153 = v119->m_Items[1];
                    v121 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v153, v115, v116, v117);
                    v122 = System_String__Concat((Il2CppObject *)StringLiteral_19594/*"event_trade_8048002"*/, v121, 0LL);
                    maskFade = AtlasManager__SetEventUI(v120, v122, 0LL);
                    v126 = this->fields.groupIcon;
                    if ( !v126 )
                      goto LABEL_120;
                    if ( v126->max_length > 1 )
                    {
                      v127 = eventPointEntity->fields.group1;
                      if ( !v127 )
                        goto LABEL_120;
                      if ( v127->max_length )
                      {
                        v128 = v126->m_Items[1];
                        v152 = v127->m_Items[1];
                        v129 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v152, v123, v124, v125);
                        v130 = System_String__Concat((Il2CppObject *)StringLiteral_19594/*"event_trade_8048002"*/, v129, 0LL);
                        maskFade = AtlasManager__SetEventUI(v128, v130, 0LL);
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
    sub_1C13F88(maskFade, v33);
  }
  v38 = eventPointEntity->fields.group1;
  if ( !v38 )
    goto LABEL_120;
  v39 = 0LL;
  v40 = 0LL;
  while ( 1 )
  {
    max_length = v38->max_length;
    if ( (__int64)v39 >= (int)max_length )
      break;
    if ( v39 >= max_length )
      goto LABEL_123;
    if ( MasterData_object )
    {
      maskFade = TotalEventPointMaster__GetPoint(
                   (TotalEventPointMaster_o *)MasterData_object,
                   eventId,
                   eventPointEntity->fields.id,
                   v38->m_Items[v39 + 1],
                   0LL);
      v38 = eventPointEntity->fields.group1;
      v40 += maskFade;
      ++v39;
      if ( v38 )
        continue;
    }
    goto LABEL_120;
  }
  v48 = this->fields.hpBarSlider;
  if ( !v48 )
    goto LABEL_120;
  if ( !v48->max_length )
    goto LABEL_123;
  maskFade = (__int64)v48->m_Items[0];
  if ( !maskFade )
    goto LABEL_120;
  normaTotalPoint = eventPointEntity->fields.normaTotalPoint;
  v50 = (double)v40 / (double)normaTotalPoint;
  v51 = 1.0 - v50;
  UIProgressBar__set_value((UIProgressBar_o *)maskFade, v51, 0LL);
  v52 = this->fields.hpBarSlider;
  if ( !v52 )
    goto LABEL_120;
  if ( v52->max_length <= 1 )
    goto LABEL_123;
  maskFade = (__int64)v52->m_Items[1];
  if ( !maskFade )
    goto LABEL_120;
  v53 = v50;
  UIProgressBar__set_value((UIProgressBar_o *)maskFade, v53, 0LL);
  v57 = this->fields.hpBar;
  if ( !v57 )
    goto LABEL_120;
  if ( !v57->max_length )
    goto LABEL_123;
  v58 = eventPointEntity->fields.group2;
  if ( !v58 )
    goto LABEL_120;
  v151 = v9;
  if ( !v58->max_length )
    goto LABEL_123;
  v59 = v57->m_Items[0];
  id = v58->m_Items[1];
  v60 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id, v54, v55, v56);
  v61 = System_String__Concat((Il2CppObject *)StringLiteral_19587/*"event_tab_bg_mask"*/, v60, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  maskFade = AtlasManager__SetEventUI(v59, v61, 0LL);
  v65 = this->fields.hpBar;
  if ( !v65 )
    goto LABEL_120;
  if ( v65->max_length <= 1 )
    goto LABEL_123;
  v66 = eventPointEntity->fields.group1;
  if ( !v66 )
    goto LABEL_120;
  if ( !v66->max_length )
    goto LABEL_123;
  v67 = v65->m_Items[1];
  v154 = v66->m_Items[1];
  maskFade = j_il2cpp_value_box_0(int_TypeInfo, &v154, v62, v63, v64);
  v71 = eventPointEntity->fields.group1;
  if ( !v71 )
    goto LABEL_120;
  if ( v71->max_length <= 1 )
    goto LABEL_123;
  v72 = (Il2CppObject *)maskFade;
  v153 = v71->m_Items[2];
  v73 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v153, v68, v69, v70);
  v74 = System_String__Concat_62978956((Il2CppObject *)StringLiteral_19587/*"event_tab_bg_mask"*/, v72, v73, 0LL);
  maskFade = AtlasManager__SetEventUI(v67, v74, 0LL);
  v75 = eventPointEntity->fields.group2;
  if ( !v75 )
    goto LABEL_120;
  if ( !v75->max_length )
    goto LABEL_123;
  if ( !v37 )
    goto LABEL_120;
  maskFade = (__int64)EventPointGroupMaster__getEntity((EventPointGroupMaster_o *)v37, eventId, v75->m_Items[1], 0LL);
  v79 = eventPointEntity->fields.group1;
  if ( !v79 )
    goto LABEL_120;
  v80 = maskFade;
  v81 = 0LL;
  v82 = (Il2CppObject *)StringLiteral_1/*""*/;
  while ( 1 )
  {
    v83 = v79->max_length;
    if ( (__int64)v81 >= (int)v83 )
      break;
    if ( v81 >= v83 )
      goto LABEL_123;
    maskFade = (__int64)EventPointGroupMaster__getEntity(
                          (EventPointGroupMaster_o *)v37,
                          eventId,
                          v79->m_Items[v81 + 1],
                          0LL);
    if ( maskFade )
    {
      id = *(_DWORD *)(maskFade + 32);
      v87 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id, v84, v85, v86);
      maskFade = (__int64)System_String__Concat(v82, v87, 0LL);
      v79 = eventPointEntity->fields.group1;
      v82 = (Il2CppObject *)maskFade;
      ++v81;
      if ( v79 )
        continue;
    }
    goto LABEL_120;
  }
  v88 = this->fields.groupIcon;
  if ( !v88 )
    goto LABEL_120;
  if ( !v88->max_length )
    goto LABEL_123;
  if ( !v80 )
    goto LABEL_120;
  v89 = v88->m_Items[0];
  id = *(_DWORD *)(v80 + 32);
  v90 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id, v76, v77, v78);
  v91 = System_String__Concat((Il2CppObject *)StringLiteral_19594/*"event_trade_8048002"*/, v90, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  maskFade = AtlasManager__SetEventUI(v89, v91, 0LL);
  v92 = this->fields.groupIcon;
  v44 = normaTotalPoint - v40;
  if ( !v92 )
LABEL_120:
    sub_1C13F80(maskFade, v33);
  if ( v92->max_length <= 1 )
    goto LABEL_123;
  v93 = v92->m_Items[1];
  v94 = System_String__Concat_62967944((System_String_o *)StringLiteral_19594/*"event_trade_8048002"*/, (System_String_o *)v82, 0LL);
  maskFade = AtlasManager__SetEventUI(v93, v94, 0LL);
  v9 = v151;
LABEL_98:
  if ( !v9 )
    goto LABEL_120;
  Object_38913448 = AssetData__GetObject_38913448(v9, (System_String_o *)StringLiteral_17577/*"bit_runningdog_50"*/, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( Object_38913448 )
    v132 = (UnityEngine_GameObject_c *)Object_38913448->klass == UnityEngine_GameObject_TypeInfo
         ? (Il2CppObject *)Object_38913448
         : 0LL;
  else
    v132 = 0LL;
  maskFade = (__int64)UnityEngine_Object__Instantiate_object_(
                        v132,
                        (const MethodInfo_3014D84 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !maskFade )
    goto LABEL_120;
  v133 = (UnityEngine_GameObject_o *)maskFade;
  gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)maskFade, 0LL);
  GameObjectExtensions__SafeSetParent_34717732(gameObject, this->fields.gaugeEffectPanel, 0LL);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v133,
                       (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventLeagueVsGaugeEffect___);
  maskFade = EventPointEntity__isBossBattle(eventPointEntity, 0LL);
  if ( !Component_object )
    goto LABEL_120;
  TitleInfoEventLeagueVsGaugeEffect__setup(
    (TitleInfoEventLeagueVsGaugeEffect_o *)Component_object,
    v40,
    v44,
    maskFade & 1,
    v136);
  maskSp = this->fields.maskSp;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetCommon(maskSp, 0LL);
  AtlasManager__SetCommon(this->fields.colliderSp, 0LL);
  maskFade = (__int64)this->fields.maskSp;
  if ( !maskFade )
    goto LABEL_120;
  UISprite__set_spriteName((UISprite_o *)maskFade, (System_String_o *)StringLiteral_25091/*"weaponGroup"*/, 0LL);
  maskFade = (__int64)this->fields.colliderSp;
  if ( !maskFade )
    goto LABEL_120;
  UISprite__set_spriteName((UISprite_o *)maskFade, (System_String_o *)StringLiteral_18278/*"classBoard/releaseLock"*/, 0LL);
  this->fields.endTime = eventPointEntity->fields.endedAt;
  TitleInfoEventLeagueVsComponent__restTimeUpdate(this, v138);
  AtlasManager__SetEventUI(this->fields.baseWindow, (System_String_o *)StringLiteral_19588/*"event_tab_type5_0"*/, 0LL);
  AtlasManager__SetEventUI(this->fields.hpFrame, (System_String_o *)StringLiteral_19586/*"event_support_txt"*/, 0LL);
  AtlasManager__SetEventUI(this->fields.hpBack, (System_String_o *)StringLiteral_19585/*"event_superboss_status_win_"*/, 0LL);
  modeName = this->fields.modeName;
  id = eventPointEntity->fields.id;
  v143 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id, v140, v141, v142);
  v144 = System_String__Concat((Il2CppObject *)StringLiteral_19589/*"event_title_80367"*/, v143, 0LL);
  AtlasManager__SetEventUI(modeName, v144, 0LL);
  maskFade = (__int64)this->fields.modeName;
  if ( !maskFade )
    goto LABEL_120;
  maskFade = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)maskFade + 840LL))(
               maskFade,
               *(_QWORD *)(*(_QWORD *)maskFade + 848LL));
  splitIcon = this->fields.splitIcon;
  if ( !splitIcon )
    goto LABEL_120;
  v146 = 0LL;
  while ( 1 )
  {
    v147 = splitIcon->max_length;
    if ( (__int64)v146 >= (int)v147 )
      break;
    if ( v146 >= v147 )
      goto LABEL_123;
    v148 = splitIcon->m_Items[v146];
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    maskFade = AtlasManager__SetEventUI(v148, (System_String_o *)StringLiteral_19590/*"event_title_txt_"*/, 0LL);
    splitIcon = this->fields.splitIcon;
    ++v146;
    if ( !splitIcon )
      goto LABEL_120;
  }
  v149 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPositionY(v149, -2.0, 0LL);
  v150 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  this->fields.originPos = GameObjectExtensions__GetLocalPosition(v150, 0LL);
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
  UnityEngine_Object_o *Object_38913448; // x0
  UnityEngine_GameObject_c **v28; // x22
  Il2CppObject *v29; // x0
  UnityEngine_GameObject_o *v30; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v32; // x5

  if ( (byte_4BB29B1 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_TotalEventPointMaster___, *(_QWORD *)&groupId);
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_TitleInfoEventLeagueVsGaugeFlashEffect___, v11);
    sub_1C13D24(&UnityEngine_GameObject_TypeInfo, v12);
    sub_1C13D24(&Method_UnityEngine_Object_Instantiate_GameObject___, v13);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v14);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1C13D24(&StringLiteral_17575/*"bit_runningdog_30"*/, v16);
    byte_4BB29B1 = 1;
  }
  evPointEnt = this->fields.evPointEnt;
  if ( evPointEnt )
  {
    if ( EventPointEntity__isBossBattle(evPointEnt, 0LL) )
    {
      ActionExtensions__Call(callback, 0LL);
      return;
    }
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_26;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_TotalEventPointMaster___);
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
      sub_1C13F88(Instance, v19);
    v25 = (int64_t)Instance;
    Instance = (DataManager_o *)TotalEventPointMaster__GetPoint(v22, eventId, v23->fields.id, group2->m_Items[1], 0LL);
    if ( !effectAssetData )
      goto LABEL_26;
    v26 = (int64_t)Instance;
    Object_38913448 = AssetData__GetObject_38913448(effectAssetData, (System_String_o *)StringLiteral_17575/*"bit_runningdog_30"*/, 0LL);
    v28 = (UnityEngine_GameObject_c **)Object_38913448;
    if ( UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      if ( Object_38913448 )
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
                                      (const MethodInfo_3014D84 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( Instance )
        {
          v30 = (UnityEngine_GameObject_o *)Instance;
          gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)Instance, 0LL);
          GameObjectExtensions__SafeSetParent_34717732(gameObject, this->fields.gaugeEffectPanel, 0LL);
          Instance = (DataManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                        v30,
                                        (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventLeagueVsGaugeFlashEffect___);
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
        sub_1C13F80(Instance, v19);
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

  if ( (byte_4BB29AE & 1) == 0 )
  {
    sub_1C13D24(&LocalizationManager_TypeInfo, method);
    sub_1C13D24(&NetworkManager_TypeInfo, v3);
    sub_1C13D24(&StringLiteral_5850/*"EVENT_TOWER_HIDE_COND"*/, v4);
    byte_4BB29AE = 1;
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
      v8 = LocalizationManager__Get((System_String_o *)StringLiteral_5850/*"EVENT_TOWER_HIDE_COND"*/, 0LL);
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
    sub_1C13F80(restTimeLabel, v5);
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
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  struct TitleInfoEventLeagueVsComponent_o *_4__this; // x8

  v2 = this;
  if ( (byte_4BB29B5 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, method);
    this = (TitleInfoEventLeagueVsComponent___c__DisplayClass36_0_o *)sub_1C13D24(
                                                                        &Method_TitleInfoEventLeagueVsComponent___c__DisplayClass36_0__ResultEffect_b__1__,
                                                                        v3);
    byte_4BB29B5 = 1;
  }
  _9__1 = v2->fields.__9__1;
  effect = v2->fields.effect;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v2,
      Method_TitleInfoEventLeagueVsComponent___c__DisplayClass36_0__ResultEffect_b__1__,
      0LL);
    v2->fields.__9__1 = _9__1;
    sub_1C13CC8((PartyOrganizationUtility_o *)&v2->fields.__9__1, (int64_t)_9__1, v6, v7, v8, v9, v10, v11);
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this || !effect )
    sub_1C13F80(this, method);
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

  if ( (byte_4BB29B6 & 1) == 0 )
  {
    sub_1C13D24(&AvalonSceneManager_TypeInfo, method);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v3);
    byte_4BB29B6 = 1;
  }
  effect = (UnityEngine_Component_o *)this->fields.effect;
  if ( !effect )
    goto LABEL_12;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(effect, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_70721988(gameObject, 0LL);
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
    sub_1C13F80(effect, method);
  MaskFade__Fadein(maskFade, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, this->fields.callback, 0LL);
}