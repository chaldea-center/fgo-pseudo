void __fastcall TitleInfoEventLeagueVsComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  struct TitleInfoEventLeagueVsComponent_StaticFields *static_fields; // x8

  if ( (byte_4B14504 & 1) == 0 )
  {
    sub_1BCA7E0(&TitleInfoEventLeagueVsComponent_TypeInfo, v1, v2);
    byte_4B14504 = 1;
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v10; // x1
  TitleInfoEventLeagueVsComponent_c *v11; // x8
  UnityEngine_GameObject_o *v12; // x21
  Il2CppObject *v13; // x0
  __int64 v14; // x1
  float32x2_t *static_fields; // x8
  Il2CppObject *v16; // x21
  float v17; // s0
  void *v18; // x9
  UnityEngine_GameObject_o *v19; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  int64_t v26; // x1
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7

  if ( (byte_4B144FF & 1) == 0 )
  {
    sub_1BCA7E0(&TitleInfoEventLeagueVsComponent_TypeInfo, callback, method);
    sub_1BCA7E0(&Method_UITweener_Begin_TweenPosition___, v5, v6);
    sub_1BCA7E0(&StringLiteral_6950/*"FrameInFinish"*/, v7, v8);
    byte_4B144FF = 1;
  }
  if ( this->fields.evPointEnt )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v11 = TitleInfoEventLeagueVsComponent_TypeInfo;
    v12 = gameObject;
    if ( !TitleInfoEventLeagueVsComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventLeagueVsComponent_TypeInfo, v10);
      v11 = TitleInfoEventLeagueVsComponent_TypeInfo;
    }
    v13 = UITweener__Begin_object_(
            v12,
            v11->static_fields->ANIM_DURATION_FRAME_IN,
            (const MethodInfo_2FC6528 *)Method_UITweener_Begin_TweenPosition___);
    if ( !v13 )
      sub_1BCAA3C(0LL, v14);
    static_fields = (float32x2_t *)TitleInfoEventLeagueVsComponent_TypeInfo->static_fields;
    v16 = v13;
    v17 = this->fields.originPos.fields.z + static_fields[1].n64_f32[0];
    v13[8].klass = (Il2CppClass *)vadd_f32(
                                    *(float32x2_t *)&this->fields.originPos.fields.x,
                                    (float32x2_t)static_fields->n64_u64[0]).n64_u64[0];
    *(float *)&v13[8].monitor = v17;
    v18 = *(void **)&this->fields.originPos.fields.x;
    HIDWORD(v13[9].klass) = LODWORD(this->fields.originPos.fields.z);
    *(void **)((char *)&v13[8].monitor + 4) = v18;
    LODWORD(v13[2].klass) = 2;
    v19 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v16[5].klass = (Il2CppClass *)v19;
    sub_1BCA784((PartyOrganizationUtility_o *)&v16[5], (int64_t)v19, v20, v21, v22, v23, v24, v25);
    v26 = StringLiteral_6950/*"FrameInFinish"*/;
    v16[5].monitor = (void *)StringLiteral_6950/*"FrameInFinish"*/;
    sub_1BCA784((PartyOrganizationUtility_o *)&v16[5].monitor, v26, v27, v28, v29, v30, v31, v32);
    this->fields.frameInCallBack = callback;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.frameInCallBack,
      (int64_t)callback,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38);
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
  sub_1BCA784(p_frameInCallBack, 0LL, v2, v3, v4, v5, v6, v7);
  if ( frameInCallBack )
    ActionExtensions__Call(v9, 0LL);
}


void __fastcall TitleInfoEventLeagueVsComponent__FrameOut(
        TitleInfoEventLeagueVsComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v9; // x1
  TitleInfoEventLeagueVsComponent_c *v10; // x8
  UnityEngine_GameObject_o *v11; // x20
  Il2CppObject *v12; // x0
  __int64 v13; // x1
  Il2CppObject *v14; // x20
  float32x2_t *static_fields; // x8
  float v16; // s1
  UnityEngine_GameObject_o *v17; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x1
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  Il2CppClass *v31; // [xsp+0h] [xbp-40h]

  if ( (byte_4B14500 & 1) == 0 )
  {
    sub_1BCA7E0(&TitleInfoEventLeagueVsComponent_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_UITweener_Begin_TweenPosition___, v4, v5);
    sub_1BCA7E0(&StringLiteral_6952/*"FrameOutFinish"*/, v6, v7);
    byte_4B14500 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v10 = TitleInfoEventLeagueVsComponent_TypeInfo;
  v11 = gameObject;
  if ( !TitleInfoEventLeagueVsComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventLeagueVsComponent_TypeInfo, v9);
    v10 = TitleInfoEventLeagueVsComponent_TypeInfo;
  }
  v12 = UITweener__Begin_object_(
          v11,
          v10->static_fields->ANIM_DURATION_FRAME_IN,
          (const MethodInfo_2FC6528 *)Method_UITweener_Begin_TweenPosition___);
  v31 = *(Il2CppClass **)&this->fields.originPos.fields.x;
  if ( !v12 )
    sub_1BCAA3C(0LL, v13);
  v14 = v12;
  *(float *)&v12[8].monitor = this->fields.originPos.fields.z;
  v12[8].klass = v31;
  static_fields = (float32x2_t *)TitleInfoEventLeagueVsComponent_TypeInfo->static_fields;
  v16 = this->fields.originPos.fields.z + static_fields[1].n64_f32[0];
  *(float32x2_t *)((char *)&v12[8].monitor + 4) = vadd_f32(
                                                    *(float32x2_t *)&this->fields.originPos.fields.x,
                                                    (float32x2_t)static_fields->n64_u64[0]);
  *((float *)&v12[9].klass + 1) = v16;
  LODWORD(v12[2].klass) = 2;
  v17 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v14[5].klass = (Il2CppClass *)v17;
  sub_1BCA784((PartyOrganizationUtility_o *)&v14[5], (int64_t)v17, v18, v19, v20, v21, v22, v23);
  v24 = StringLiteral_6952/*"FrameOutFinish"*/;
  v14[5].monitor = (void *)StringLiteral_6952/*"FrameOutFinish"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v14[5].monitor, v24, v25, v26, v27, v28, v29, v30);
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
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  DataManager_o *Instance; // x0
  __int64 v21; // x1
  __int64 v22; // x1
  GiftEntity_array *GiftListById; // x21
  System_String_o *v24; // x0
  System_String_o *v25; // x20
  System_String_o *v26; // x0
  bool winGroup1; // w1
  System_String_o *v28; // x22
  Il2CppObject *WinGroupName; // x0
  int max_length; // w8
  System_String_o *v31; // x22
  int v32; // w23
  __int64 v33; // x1
  System_String_o *v34; // x0
  System_String_o *v35; // x0
  System_String_o *countText; // [xsp+30h] [xbp-50h] BYREF
  System_String_o *nameText; // [xsp+38h] [xbp-48h] BYREF

  if ( (byte_4B14503 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_GiftMaster___, evPointEnt, rewardInfo);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13);
    sub_1BCA7E0(&StringLiteral_5745/*"EVENT_POINT_VS_WIN_DIALOG_TITLE"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_5744/*"EVENT_POINT_VS_WIN_DIALOG_GROUP"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_5743/*"EVENT_POINT_VS_WIN_DIALOG_GET"*/, v18, v19);
    byte_4B14503 = 1;
  }
  countText = 0LL;
  nameText = 0LL;
  if ( evPointEnt )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_21;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_GiftMaster___);
    if ( !rewardInfo || !Instance )
      goto LABEL_21;
    GiftListById = GiftMaster__GetGiftListById((GiftMaster_o *)Instance, rewardInfo->fields.giftId, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v22);
    v24 = LocalizationManager__Get((System_String_o *)StringLiteral_5745/*"EVENT_POINT_VS_WIN_DIALOG_TITLE"*/, 0LL);
    v25 = System_String__Format(v24, (Il2CppObject *)evPointEnt->fields.name, 0LL);
    v26 = LocalizationManager__Get((System_String_o *)StringLiteral_5744/*"EVENT_POINT_VS_WIN_DIALOG_GROUP"*/, 0LL);
    winGroup1 = rewardInfo->fields.winGroup1;
    v28 = v26;
    WinGroupName = (Il2CppObject *)EventPointEntity__GetWinGroupName(evPointEnt, winGroup1, 0LL);
    Instance = (DataManager_o *)System_String__Format(v28, WinGroupName, 0LL);
    if ( !GiftListById )
      goto LABEL_21;
    max_length = GiftListById->max_length;
    v31 = (System_String_o *)Instance;
    if ( max_length >= 1 )
    {
      v32 = 0;
      while ( 1 )
      {
        if ( v32 >= (unsigned int)max_length )
          sub_1BCAA44(Instance, v21);
        Instance = (DataManager_o *)GiftListById->m_Items[v32];
        if ( !Instance )
          break;
        GiftEntity__GetInfo((GiftEntity_o *)Instance, &nameText, &countText, 0LL);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v33);
        v34 = LocalizationManager__Get((System_String_o *)StringLiteral_5743/*"EVENT_POINT_VS_WIN_DIALOG_GET"*/, 0LL);
        v35 = System_String__Format_62415592(v34, (Il2CppObject *)nameText, (Il2CppObject *)countText, 0LL);
        Instance = (DataManager_o *)System_String__Concat_62401220(v31, v35, 0LL);
        max_length = GiftListById->max_length;
        ++v32;
        v31 = (System_String_o *)Instance;
        if ( v32 >= max_length )
          goto LABEL_17;
      }
LABEL_21:
      sub_1BCAA3C(Instance, v21);
    }
LABEL_17:
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_21;
    CommonUI__OpenNotificationDialog((CommonUI_o *)Instance, v25, v31, callback, -1, 0, 0, 0, 1, 0, 1, 0, 0LL, 0.0, 0LL);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x21
  UnityEngine_GameObject_o *resultPanel; // x0
  __int64 v29; // x1
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  __int64 v42; // x1
  UnityEngine_Object_o *Object_38483832; // x22
  Il2CppObject *v44; // x0
  UnityEngine_GameObject_o *v45; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  int64_t v54; // x8
  UnityEngine_BoxCollider_c *v55; // x1
  __int64 methodPtr_low; // x9
  PartyOrganizationUtility_o *v57; // x23
  Il2CppObject *v58; // x0
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  __int64 v65; // x2
  __int64 v66; // x3
  struct EventPointEntity_o *evPointEnt; // x8
  EventPointVsResultAction_o *v68; // x20
  int32_t id; // w22
  System_Action_o *v70; // x23

  if ( (byte_4B14502 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&winType, effectAssetData);
    sub_1BCA7E0(&UnityEngine_BoxCollider_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_Collider___, v11, v12);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_EventPointVsResultAction___, v13, v14);
    sub_1BCA7E0(&UnityEngine_GameObject_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v17, v18);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_TitleInfoEventLeagueVsComponent___c__DisplayClass36_0__ResultEffect_b__0__, v21, v22);
    sub_1BCA7E0(&TitleInfoEventLeagueVsComponent___c__DisplayClass36_0_TypeInfo, v23, v24);
    sub_1BCA7E0(&StringLiteral_17492/*"bit_vs_result"*/, v25, v26);
    byte_4B14502 = 1;
  }
  v27 = sub_1BCAA2C(
          TitleInfoEventLeagueVsComponent___c__DisplayClass36_0_TypeInfo,
          *(_QWORD *)&winType,
          effectAssetData,
          callback);
  System_Object___ctor((Il2CppObject *)v27, 0LL);
  if ( !v27 )
    goto LABEL_27;
  *(_QWORD *)(v27 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v27 + 32), (int64_t)this, v30, v31, v32, v33, v34, v35);
  *(_QWORD *)(v27 + 40) = callback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v27 + 40), (int64_t)callback, v36, v37, v38, v39, v40, v41);
  if ( !winType )
  {
    ActionExtensions__Call(*(System_Action_o **)(v27 + 40), 0LL);
    return;
  }
  if ( !effectAssetData )
    goto LABEL_27;
  Object_38483832 = AssetData__GetObject_38483832(effectAssetData, (System_String_o *)StringLiteral_17492/*"bit_vs_result"*/, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v42);
  if ( Object_38483832 )
    v44 = (UnityEngine_GameObject_c *)Object_38483832->klass == UnityEngine_GameObject_TypeInfo
        ? (Il2CppObject *)Object_38483832
        : 0LL;
  else
    v44 = 0LL;
  resultPanel = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                              v44,
                                              (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !resultPanel
    || (v45 = resultPanel,
        gameObject = UnityEngine_GameObject__get_gameObject(resultPanel, 0LL),
        GameObjectExtensions__SafeSetParent_34336992(gameObject, this->fields.resultPanel, 0LL),
        (resultPanel = this->fields.resultPanel) == 0LL) )
  {
LABEL_27:
    sub_1BCAA3C(resultPanel, v29);
  }
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       resultPanel,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_Collider___);
  v54 = (int64_t)Component_object;
  if ( !Component_object )
    goto LABEL_22;
  v55 = UnityEngine_BoxCollider_TypeInfo;
  methodPtr_low = LOBYTE(UnityEngine_BoxCollider_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(Component_object->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
    || (UnityEngine_BoxCollider_c *)Component_object->klass->_2.typeHierarchy[methodPtr_low - 1] != UnityEngine_BoxCollider_TypeInfo
    || (*(_QWORD *)(v27 + 24) = Component_object,
        v57 = (PartyOrganizationUtility_o *)(v27 + 24),
        LOBYTE(Component_object->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
    || (UnityEngine_BoxCollider_c *)Component_object->klass->_2.typeHierarchy[methodPtr_low - 1] != v55 )
  {
    sub_1BCACFC(Component_object);
LABEL_22:
    *(_QWORD *)(v27 + 24) = 0LL;
    v57 = (PartyOrganizationUtility_o *)(v27 + 24);
  }
  sub_1BCA784(v57, v54, v48, v49, v50, v51, v52, v53);
  resultPanel = (UnityEngine_GameObject_o *)v57->klass;
  if ( !v57->klass )
    goto LABEL_27;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)resultPanel, 1, 0LL);
  v58 = UnityEngine_GameObject__GetComponent_object_(
          v45,
          (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_EventPointVsResultAction___);
  *(_QWORD *)(v27 + 16) = v58;
  sub_1BCA784((PartyOrganizationUtility_o *)(v27 + 16), (int64_t)v58, v59, v60, v61, v62, v63, v64);
  evPointEnt = this->fields.evPointEnt;
  if ( !evPointEnt )
    goto LABEL_27;
  v68 = *(EventPointVsResultAction_o **)(v27 + 16);
  id = evPointEnt->fields.id;
  v70 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v29, v65, v66);
  System_Action___ctor(
    v70,
    (Il2CppObject *)v27,
    Method_TitleInfoEventLeagueVsComponent___c__DisplayClass36_0__ResultEffect_b__0__,
    0LL);
  if ( !v68 )
    goto LABEL_27;
  EventPointVsResultAction__Setup(v68, winType, id, v70, 0LL);
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
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x1
  __int64 v54; // x2
  TerminalPramsManager_c *v55; // x0
  __int64 maskFade; // x0
  Il2CppObject *MasterData_object; // x24
  Il2CppObject *v58; // x25
  struct System_Int32_array *v59; // x8
  unsigned __int64 v60; // x21
  int64_t v61; // x22
  unsigned __int64 max_length; // x9
  struct System_Int32_array *group1; // x8
  struct System_Int32_array *group2; // x8
  int64_t v65; // x24
  struct UISlider_array *hpBarSlider; // x8
  struct UISlider_array *v67; // x8
  float v68; // s0
  struct UISlider_array *v69; // x8
  int64_t normaTotalPoint; // x21
  double v71; // d8
  float v72; // s0
  struct UISlider_array *v73; // x8
  float v74; // s0
  struct UISprite_array *v75; // x8
  struct System_Int32_array *v76; // x9
  UISprite_o *v77; // x24
  Il2CppObject *v78; // x0
  __int64 v79; // x1
  System_String_o *v80; // x26
  struct UISprite_array *v81; // x8
  struct System_Int32_array *v82; // x9
  UISprite_o *v83; // x24
  struct System_Int32_array *v84; // x8
  Il2CppObject *v85; // x26
  Il2CppObject *v86; // x0
  System_String_o *v87; // x0
  struct System_Int32_array *v88; // x8
  struct System_Int32_array *v89; // x8
  __int64 v90; // x27
  unsigned __int64 v91; // x24
  Il2CppObject *v92; // x26
  unsigned __int64 v93; // x9
  Il2CppObject *v94; // x0
  struct UISprite_array *v95; // x8
  UISprite_o *v96; // x23
  Il2CppObject *v97; // x0
  __int64 v98; // x1
  System_String_o *v99; // x25
  struct UISprite_array *v100; // x8
  UISprite_o *v101; // x23
  System_String_o *v102; // x0
  struct UISlider_array *v103; // x8
  double v104; // d8
  float v105; // s0
  struct UISlider_array *v106; // x8
  struct UISprite_array *hpBar; // x8
  struct System_Int32_array *v108; // x9
  UISprite_o *v109; // x23
  Il2CppObject *v110; // x0
  __int64 v111; // x1
  System_String_o *v112; // x25
  struct UISprite_array *v113; // x8
  struct System_Int32_array *v114; // x9
  UISprite_o *v115; // x23
  Il2CppObject *v116; // x0
  System_String_o *v117; // x0
  struct UISprite_array *groupIcon; // x8
  struct System_Int32_array *v119; // x9
  UISprite_o *v120; // x23
  Il2CppObject *v121; // x0
  System_String_o *v122; // x0
  struct UISprite_array *v123; // x8
  struct System_Int32_array *v124; // x9
  UISprite_o *v125; // x23
  Il2CppObject *v126; // x0
  System_String_o *v127; // x0
  __int64 v128; // x1
  UnityEngine_Object_o *Object_38483832; // x21
  Il2CppObject *v130; // x0
  UnityEngine_GameObject_o *v131; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x21
  const MethodInfo *v134; // x4
  __int64 v135; // x1
  UISprite_o *maskSp; // x21
  const MethodInfo *v137; // x1
  UISprite_o *modeName; // x21
  Il2CppObject *v139; // x0
  System_String_o *v140; // x0
  struct UISprite_array *splitIcon; // x8
  unsigned __int64 v142; // x21
  unsigned __int64 v143; // x9
  UISprite_o *v144; // x20
  UnityEngine_GameObject_o *v145; // x0
  UnityEngine_GameObject_o *v146; // x0
  AssetData_o *v147; // [xsp+10h] [xbp-80h]
  int32_t v148; // [xsp+18h] [xbp-78h] BYREF
  int32_t v149; // [xsp+1Ch] [xbp-74h] BYREF
  int32_t v150; // [xsp+28h] [xbp-68h] BYREF
  int32_t id; // [xsp+2Ch] [xbp-64h] BYREF

  v9 = effectAssetData;
  if ( (byte_4B144FD & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, eventPointEntity, *(_QWORD *)&eventId);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventPointGroupMaster___, v13, v14);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_TotalEventPointMaster___, v15, v16);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_TitleInfoEventLeagueVsGaugeEffect___, v17, v18);
    sub_1BCA7E0(&UnityEngine_GameObject_TypeInfo, v19, v20);
    sub_1BCA7E0(&int_TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v23, v24);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v25, v26);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27, v28);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v29, v30);
    sub_1BCA7E0(&StringLiteral_19487/*"event_vs_gauge_title_"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_19484/*"event_vs_frame"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_19483/*"event_vs_back"*/, v35, v36);
    sub_1BCA7E0(&StringLiteral_24947/*"white00"*/, v37, v38);
    sub_1BCA7E0(&StringLiteral_19486/*"event_vs_gauge_bg"*/, v39, v40);
    sub_1BCA7E0(&StringLiteral_17489/*"bit_vs_gauge_part"*/, v41, v42);
    sub_1BCA7E0(&StringLiteral_19488/*"event_vs_split_line"*/, v43, v44);
    sub_1BCA7E0(&StringLiteral_18184/*"clear00"*/, v45, v46);
    sub_1BCA7E0(&StringLiteral_19492/*"event_vs_team_icon_"*/, v47, v48);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v49, v50);
    sub_1BCA7E0(&StringLiteral_19485/*"event_vs_gauge_"*/, v51, v52);
    byte_4B144FD = 1;
  }
  if ( !eventPointEntity )
    return;
  this->fields.evPointEnt = eventPointEntity;
  sub_1BCA784(
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
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v53);
  if ( !byte_4B1381A )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v53, v54);
    byte_4B1381A = 1;
  }
  v55 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v53);
    v55 = TerminalPramsManager_TypeInfo;
  }
  if ( v55->static_fields->_eventPointWinType_k__BackingField )
  {
    maskFade = (__int64)this->fields.maskFade;
    if ( !maskFade )
      goto LABEL_120;
    MaskFade__Fadeout((MaskFade_o *)maskFade, 1, 0.0, 0LL, 0LL);
  }
  maskFade = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !maskFade )
    goto LABEL_120;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)maskFade,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_TotalEventPointMaster___);
  maskFade = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !maskFade )
    goto LABEL_120;
  v58 = DataManager__GetMasterData_object_(
          (DataManager_o *)maskFade,
          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventPointGroupMaster___);
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
        v61 = maskFade;
        maskFade = TotalEventPointMaster__GetPoint(
                     (TotalEventPointMaster_o *)MasterData_object,
                     eventId,
                     eventPointEntity->fields.id,
                     group2->m_Items[1],
                     0LL);
        v65 = maskFade;
        if ( v61 == maskFade )
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
          v67 = this->fields.hpBarSlider;
          if ( !v67 )
            goto LABEL_120;
          if ( v67->max_length <= 1 )
            goto LABEL_123;
          maskFade = (__int64)v67->m_Items[1];
          if ( !maskFade )
            goto LABEL_120;
          v68 = 0.5;
        }
        else
        {
          v103 = this->fields.hpBarSlider;
          if ( !v103 )
            goto LABEL_120;
          if ( !v103->max_length )
            goto LABEL_123;
          maskFade = (__int64)v103->m_Items[0];
          if ( !maskFade )
            goto LABEL_120;
          v104 = (double)v61 / (double)(v65 + v61);
          v105 = 1.0 - v104;
          UIProgressBar__set_value((UIProgressBar_o *)maskFade, v105, 0LL);
          v106 = this->fields.hpBarSlider;
          if ( !v106 )
            goto LABEL_120;
          if ( v106->max_length <= 1 )
            goto LABEL_123;
          maskFade = (__int64)v106->m_Items[1];
          if ( !maskFade )
            goto LABEL_120;
          v68 = v104;
        }
        UIProgressBar__set_value((UIProgressBar_o *)maskFade, v68, 0LL);
        hpBar = this->fields.hpBar;
        if ( !hpBar )
          goto LABEL_120;
        if ( hpBar->max_length )
        {
          v108 = eventPointEntity->fields.group2;
          if ( !v108 )
            goto LABEL_120;
          if ( v108->max_length )
          {
            v109 = hpBar->m_Items[0];
            id = v108->m_Items[1];
            v110 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id);
            v112 = System_String__Concat((Il2CppObject *)StringLiteral_19485/*"event_vs_gauge_"*/, v110, 0LL);
            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v111);
            maskFade = AtlasManager__SetEventUI(v109, v112, 0LL);
            v113 = this->fields.hpBar;
            if ( !v113 )
              goto LABEL_120;
            if ( v113->max_length > 1 )
            {
              v114 = eventPointEntity->fields.group1;
              if ( !v114 )
                goto LABEL_120;
              if ( v114->max_length )
              {
                v115 = v113->m_Items[1];
                v150 = v114->m_Items[1];
                v116 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v150);
                v117 = System_String__Concat((Il2CppObject *)StringLiteral_19485/*"event_vs_gauge_"*/, v116, 0LL);
                maskFade = AtlasManager__SetEventUI(v115, v117, 0LL);
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
                    v149 = v119->m_Items[1];
                    v121 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v149);
                    v122 = System_String__Concat((Il2CppObject *)StringLiteral_19492/*"event_vs_team_icon_"*/, v121, 0LL);
                    maskFade = AtlasManager__SetEventUI(v120, v122, 0LL);
                    v123 = this->fields.groupIcon;
                    if ( !v123 )
                      goto LABEL_120;
                    if ( v123->max_length > 1 )
                    {
                      v124 = eventPointEntity->fields.group1;
                      if ( !v124 )
                        goto LABEL_120;
                      if ( v124->max_length )
                      {
                        v125 = v123->m_Items[1];
                        v148 = v124->m_Items[1];
                        v126 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v148);
                        v127 = System_String__Concat((Il2CppObject *)StringLiteral_19492/*"event_vs_team_icon_"*/, v126, 0LL);
                        maskFade = AtlasManager__SetEventUI(v125, v127, 0LL);
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
    sub_1BCAA44(maskFade, v53);
  }
  v59 = eventPointEntity->fields.group1;
  if ( !v59 )
    goto LABEL_120;
  v60 = 0LL;
  v61 = 0LL;
  while ( 1 )
  {
    max_length = v59->max_length;
    if ( (__int64)v60 >= (int)max_length )
      break;
    if ( v60 >= max_length )
      goto LABEL_123;
    if ( MasterData_object )
    {
      maskFade = TotalEventPointMaster__GetPoint(
                   (TotalEventPointMaster_o *)MasterData_object,
                   eventId,
                   eventPointEntity->fields.id,
                   v59->m_Items[v60 + 1],
                   0LL);
      v59 = eventPointEntity->fields.group1;
      v61 += maskFade;
      ++v60;
      if ( v59 )
        continue;
    }
    goto LABEL_120;
  }
  v69 = this->fields.hpBarSlider;
  if ( !v69 )
    goto LABEL_120;
  if ( !v69->max_length )
    goto LABEL_123;
  maskFade = (__int64)v69->m_Items[0];
  if ( !maskFade )
    goto LABEL_120;
  normaTotalPoint = eventPointEntity->fields.normaTotalPoint;
  v71 = (double)v61 / (double)normaTotalPoint;
  v72 = 1.0 - v71;
  UIProgressBar__set_value((UIProgressBar_o *)maskFade, v72, 0LL);
  v73 = this->fields.hpBarSlider;
  if ( !v73 )
    goto LABEL_120;
  if ( v73->max_length <= 1 )
    goto LABEL_123;
  maskFade = (__int64)v73->m_Items[1];
  if ( !maskFade )
    goto LABEL_120;
  v74 = v71;
  UIProgressBar__set_value((UIProgressBar_o *)maskFade, v74, 0LL);
  v75 = this->fields.hpBar;
  if ( !v75 )
    goto LABEL_120;
  if ( !v75->max_length )
    goto LABEL_123;
  v76 = eventPointEntity->fields.group2;
  if ( !v76 )
    goto LABEL_120;
  v147 = v9;
  if ( !v76->max_length )
    goto LABEL_123;
  v77 = v75->m_Items[0];
  id = v76->m_Items[1];
  v78 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id);
  v80 = System_String__Concat((Il2CppObject *)StringLiteral_19485/*"event_vs_gauge_"*/, v78, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v79);
  maskFade = AtlasManager__SetEventUI(v77, v80, 0LL);
  v81 = this->fields.hpBar;
  if ( !v81 )
    goto LABEL_120;
  if ( v81->max_length <= 1 )
    goto LABEL_123;
  v82 = eventPointEntity->fields.group1;
  if ( !v82 )
    goto LABEL_120;
  if ( !v82->max_length )
    goto LABEL_123;
  v83 = v81->m_Items[1];
  v150 = v82->m_Items[1];
  maskFade = j_il2cpp_value_box_0(int_TypeInfo, &v150);
  v84 = eventPointEntity->fields.group1;
  if ( !v84 )
    goto LABEL_120;
  if ( v84->max_length <= 1 )
    goto LABEL_123;
  v85 = (Il2CppObject *)maskFade;
  v149 = v84->m_Items[2];
  v86 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v149);
  v87 = System_String__Concat_62412232((Il2CppObject *)StringLiteral_19485/*"event_vs_gauge_"*/, v85, v86, 0LL);
  maskFade = AtlasManager__SetEventUI(v83, v87, 0LL);
  v88 = eventPointEntity->fields.group2;
  if ( !v88 )
    goto LABEL_120;
  if ( !v88->max_length )
    goto LABEL_123;
  if ( !v58 )
    goto LABEL_120;
  maskFade = (__int64)EventPointGroupMaster__getEntity((EventPointGroupMaster_o *)v58, eventId, v88->m_Items[1], 0LL);
  v89 = eventPointEntity->fields.group1;
  if ( !v89 )
    goto LABEL_120;
  v90 = maskFade;
  v91 = 0LL;
  v92 = (Il2CppObject *)StringLiteral_1/*""*/;
  while ( 1 )
  {
    v93 = v89->max_length;
    if ( (__int64)v91 >= (int)v93 )
      break;
    if ( v91 >= v93 )
      goto LABEL_123;
    maskFade = (__int64)EventPointGroupMaster__getEntity(
                          (EventPointGroupMaster_o *)v58,
                          eventId,
                          v89->m_Items[v91 + 1],
                          0LL);
    if ( maskFade )
    {
      id = *(_DWORD *)(maskFade + 32);
      v94 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id);
      maskFade = (__int64)System_String__Concat(v92, v94, 0LL);
      v89 = eventPointEntity->fields.group1;
      v92 = (Il2CppObject *)maskFade;
      ++v91;
      if ( v89 )
        continue;
    }
    goto LABEL_120;
  }
  v95 = this->fields.groupIcon;
  if ( !v95 )
    goto LABEL_120;
  if ( !v95->max_length )
    goto LABEL_123;
  if ( !v90 )
    goto LABEL_120;
  v96 = v95->m_Items[0];
  id = *(_DWORD *)(v90 + 32);
  v97 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id);
  v99 = System_String__Concat((Il2CppObject *)StringLiteral_19492/*"event_vs_team_icon_"*/, v97, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v98);
  maskFade = AtlasManager__SetEventUI(v96, v99, 0LL);
  v100 = this->fields.groupIcon;
  v65 = normaTotalPoint - v61;
  if ( !v100 )
LABEL_120:
    sub_1BCAA3C(maskFade, v53);
  if ( v100->max_length <= 1 )
    goto LABEL_123;
  v101 = v100->m_Items[1];
  v102 = System_String__Concat_62401220((System_String_o *)StringLiteral_19492/*"event_vs_team_icon_"*/, (System_String_o *)v92, 0LL);
  maskFade = AtlasManager__SetEventUI(v101, v102, 0LL);
  v9 = v147;
LABEL_98:
  if ( !v9 )
    goto LABEL_120;
  Object_38483832 = AssetData__GetObject_38483832(v9, (System_String_o *)StringLiteral_17489/*"bit_vs_gauge_part"*/, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v128);
  if ( Object_38483832 )
    v130 = (UnityEngine_GameObject_c *)Object_38483832->klass == UnityEngine_GameObject_TypeInfo
         ? (Il2CppObject *)Object_38483832
         : 0LL;
  else
    v130 = 0LL;
  maskFade = (__int64)UnityEngine_Object__Instantiate_object_(
                        v130,
                        (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !maskFade )
    goto LABEL_120;
  v131 = (UnityEngine_GameObject_o *)maskFade;
  gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)maskFade, 0LL);
  GameObjectExtensions__SafeSetParent_34336992(gameObject, this->fields.gaugeEffectPanel, 0LL);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v131,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventLeagueVsGaugeEffect___);
  maskFade = EventPointEntity__isBossBattle(eventPointEntity, 0LL);
  if ( !Component_object )
    goto LABEL_120;
  TitleInfoEventLeagueVsGaugeEffect__setup(
    (TitleInfoEventLeagueVsGaugeEffect_o *)Component_object,
    v61,
    v65,
    maskFade & 1,
    v134);
  maskSp = this->fields.maskSp;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v135);
  AtlasManager__SetCommon(maskSp, 0LL);
  AtlasManager__SetCommon(this->fields.colliderSp, 0LL);
  maskFade = (__int64)this->fields.maskSp;
  if ( !maskFade )
    goto LABEL_120;
  UISprite__set_spriteName((UISprite_o *)maskFade, (System_String_o *)StringLiteral_24947/*"white00"*/, 0LL);
  maskFade = (__int64)this->fields.colliderSp;
  if ( !maskFade )
    goto LABEL_120;
  UISprite__set_spriteName((UISprite_o *)maskFade, (System_String_o *)StringLiteral_18184/*"clear00"*/, 0LL);
  this->fields.endTime = eventPointEntity->fields.endedAt;
  TitleInfoEventLeagueVsComponent__restTimeUpdate(this, v137);
  AtlasManager__SetEventUI(this->fields.baseWindow, (System_String_o *)StringLiteral_19486/*"event_vs_gauge_bg"*/, 0LL);
  AtlasManager__SetEventUI(this->fields.hpFrame, (System_String_o *)StringLiteral_19484/*"event_vs_frame"*/, 0LL);
  AtlasManager__SetEventUI(this->fields.hpBack, (System_String_o *)StringLiteral_19483/*"event_vs_back"*/, 0LL);
  modeName = this->fields.modeName;
  id = eventPointEntity->fields.id;
  v139 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id);
  v140 = System_String__Concat((Il2CppObject *)StringLiteral_19487/*"event_vs_gauge_title_"*/, v139, 0LL);
  AtlasManager__SetEventUI(modeName, v140, 0LL);
  maskFade = (__int64)this->fields.modeName;
  if ( !maskFade )
    goto LABEL_120;
  maskFade = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)maskFade + 840LL))(
               maskFade,
               *(_QWORD *)(*(_QWORD *)maskFade + 848LL));
  splitIcon = this->fields.splitIcon;
  if ( !splitIcon )
    goto LABEL_120;
  v142 = 0LL;
  while ( 1 )
  {
    v143 = splitIcon->max_length;
    if ( (__int64)v142 >= (int)v143 )
      break;
    if ( v142 >= v143 )
      goto LABEL_123;
    v144 = splitIcon->m_Items[v142];
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v53);
    maskFade = AtlasManager__SetEventUI(v144, (System_String_o *)StringLiteral_19488/*"event_vs_split_line"*/, 0LL);
    splitIcon = this->fields.splitIcon;
    ++v142;
    if ( !splitIcon )
      goto LABEL_120;
  }
  v145 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPositionY(v145, -2.0, 0LL);
  v146 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  this->fields.originPos = GameObjectExtensions__GetLocalPosition(v146, 0LL);
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
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  EventPointEntity_o *evPointEnt; // x0
  DataManager_o *Instance; // x0
  __int64 v25; // x1
  struct EventPointEntity_o *v26; // x8
  struct System_Int32_array *group1; // x9
  TotalEventPointMaster_o *v28; // x25
  struct EventPointEntity_o *v29; // x8
  struct System_Int32_array *group2; // x9
  int64_t v31; // x24
  int64_t v32; // x23
  UnityEngine_Object_o *Object_38483832; // x0
  __int64 v34; // x1
  UnityEngine_GameObject_c **v35; // x22
  Il2CppObject *v36; // x0
  UnityEngine_GameObject_o *v37; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v39; // x5

  if ( (byte_4B14501 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_TotalEventPointMaster___, *(_QWORD *)&groupId, *(_QWORD *)&eventId);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_TitleInfoEventLeagueVsGaugeFlashEffect___, v11, v12);
    sub_1BCA7E0(&UnityEngine_GameObject_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v15, v16);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19, v20);
    sub_1BCA7E0(&StringLiteral_17487/*"bit_vs_gauge_flash"*/, v21, v22);
    byte_4B14501 = 1;
  }
  evPointEnt = this->fields.evPointEnt;
  if ( evPointEnt )
  {
    if ( EventPointEntity__isBossBattle(evPointEnt, 0LL) )
    {
      ActionExtensions__Call(callback, 0LL);
      return;
    }
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_26;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_TotalEventPointMaster___);
    v26 = this->fields.evPointEnt;
    if ( !v26 )
      goto LABEL_26;
    group1 = v26->fields.group1;
    if ( !group1 )
      goto LABEL_26;
    if ( !group1->max_length )
      goto LABEL_27;
    v28 = (TotalEventPointMaster_o *)Instance;
    if ( !Instance )
      goto LABEL_26;
    Instance = (DataManager_o *)TotalEventPointMaster__GetPoint(
                                  (TotalEventPointMaster_o *)Instance,
                                  eventId,
                                  v26->fields.id,
                                  group1->m_Items[1],
                                  0LL);
    v29 = this->fields.evPointEnt;
    if ( !v29 )
      goto LABEL_26;
    group2 = v29->fields.group2;
    if ( !group2 )
      goto LABEL_26;
    if ( !group2->max_length )
LABEL_27:
      sub_1BCAA44(Instance, v25);
    v31 = (int64_t)Instance;
    Instance = (DataManager_o *)TotalEventPointMaster__GetPoint(v28, eventId, v29->fields.id, group2->m_Items[1], 0LL);
    if ( !effectAssetData )
      goto LABEL_26;
    v32 = (int64_t)Instance;
    Object_38483832 = AssetData__GetObject_38483832(effectAssetData, (System_String_o *)StringLiteral_17487/*"bit_vs_gauge_flash"*/, 0LL);
    v35 = (UnityEngine_GameObject_c **)Object_38483832;
    if ( UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      if ( Object_38483832 )
        goto LABEL_18;
    }
    else
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v34);
      if ( v35 )
      {
LABEL_18:
        if ( *v35 == UnityEngine_GameObject_TypeInfo )
          v36 = (Il2CppObject *)v35;
        else
          v36 = 0LL;
LABEL_23:
        Instance = (DataManager_o *)UnityEngine_Object__Instantiate_object_(
                                      v36,
                                      (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( Instance )
        {
          v37 = (UnityEngine_GameObject_o *)Instance;
          gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)Instance, 0LL);
          GameObjectExtensions__SafeSetParent_34336992(gameObject, this->fields.gaugeEffectPanel, 0LL);
          Instance = (DataManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                        v37,
                                        (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventLeagueVsGaugeFlashEffect___);
          if ( Instance )
          {
            TitleInfoEventLeagueVsGaugeFlashEffect__setup(
              (TitleInfoEventLeagueVsGaugeFlashEffect_o *)Instance,
              groupId,
              v31,
              v32,
              callback,
              v39);
            return;
          }
        }
LABEL_26:
        sub_1BCAA3C(Instance, v25);
      }
    }
    v36 = 0LL;
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  UnityEngine_Behaviour_o *restTimeLabel; // x0
  __int64 v10; // x1
  UILabel_o *v11; // x20
  System_String_o *v12; // x0
  int64_t endTime; // x8
  System_String_o *v14; // x19
  Il2CppObject *RestTime3; // x0

  if ( (byte_4B144FE & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_5821/*"EVENT_VS_GAUGE_REST_TIME"*/, v6, v7);
    byte_4B144FE = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  if ( this->fields.endTime - NetworkManager__getTime(0LL) >= 1 && this->fields.isDispRestTime )
  {
    restTimeLabel = (UnityEngine_Behaviour_o *)this->fields.restTimeLabel;
    if ( restTimeLabel )
    {
      UnityEngine_Behaviour__set_enabled(restTimeLabel, 1, 0LL);
      v11 = this->fields.restTimeLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v10);
      v12 = LocalizationManager__Get((System_String_o *)StringLiteral_5821/*"EVENT_VS_GAUGE_REST_TIME"*/, 0LL);
      endTime = this->fields.endTime;
      v14 = v12;
      RestTime3 = (Il2CppObject *)LocalizationManager__GetRestTime3(endTime, 0LL);
      restTimeLabel = (UnityEngine_Behaviour_o *)System_String__Format(v14, RestTime3, 0LL);
      if ( v11 )
      {
        UILabel__set_text(v11, (System_String_o *)restTimeLabel, 0LL);
        return;
      }
    }
LABEL_14:
    sub_1BCAA3C(restTimeLabel, v8);
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
  __int64 v2; // x2
  __int64 v3; // x3
  TitleInfoEventLeagueVsComponent___c__DisplayClass36_0_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  System_Action_o *_9__1; // x21
  EventPointVsResultAction_o *effect; // x20
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  struct TitleInfoEventLeagueVsComponent_o *_4__this; // x8

  v4 = this;
  if ( (byte_4B14505 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    this = (TitleInfoEventLeagueVsComponent___c__DisplayClass36_0_o *)sub_1BCA7E0(
                                                                        &Method_TitleInfoEventLeagueVsComponent___c__DisplayClass36_0__ResultEffect_b__1__,
                                                                        v5,
                                                                        v6);
    byte_4B14505 = 1;
  }
  _9__1 = v4->fields.__9__1;
  effect = v4->fields.effect;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_TitleInfoEventLeagueVsComponent___c__DisplayClass36_0__ResultEffect_b__1__,
      0LL);
    v4->fields.__9__1 = _9__1;
    sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields.__9__1, (int64_t)_9__1, v9, v10, v11, v12, v13, v14);
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this || !effect )
    sub_1BCAA3C(this, method);
  EventPointVsResultAction__Play(effect, _9__1, _4__this->fields.maskFade, 0.0, 0LL);
}


void __fastcall TitleInfoEventLeagueVsComponent___c__DisplayClass36_0___ResultEffect_b__1(
        TitleInfoEventLeagueVsComponent___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Component_o *effect; // x0
  __int64 v7; // x1
  UnityEngine_Object_o *gameObject; // x20
  struct TitleInfoEventLeagueVsComponent_o *_4__this; // x8
  MaskFade_o *maskFade; // x20

  if ( (byte_4B14506 & 1) == 0 )
  {
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B14506 = 1;
  }
  effect = (UnityEngine_Component_o *)this->fields.effect;
  if ( !effect )
    goto LABEL_12;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(effect, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
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
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, method);
  if ( !maskFade )
LABEL_12:
    sub_1BCAA3C(effect, method);
  MaskFade__Fadein(maskFade, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, this->fields.callback, 0LL);
}