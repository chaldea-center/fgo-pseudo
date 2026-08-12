void TitleInfoEventLeagueVsComponent___cctor(const MethodInfo *method)
{
  struct TitleInfoEventLeagueVsComponent_StaticFields *static_fields; // x8
  TitleInfoEventLeagueVsComponent_c *v2; // x9

  if ( (byte_596E7B5 & 1) == 0 )
  {
    sub_2213A60(&TitleInfoEventLeagueVsComponent_TypeInfo);
    byte_596E7B5 = 1;
  }
  static_fields = TitleInfoEventLeagueVsComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->RAIDBOSS_ANIM_ROOT_POS.fields.x = 0x42A0000000000000LL;
  v2 = TitleInfoEventLeagueVsComponent_TypeInfo;
  static_fields->RAIDBOSS_ANIM_ROOT_POS.fields.z = 0.0;
  v2->static_fields->ANIM_DURATION_FRAME_IN = 0.3;
}


void TitleInfoEventLeagueVsComponent___ctor(TitleInfoEventLeagueVsComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


double TitleInfoEventLeagueVsComponent__ConvertPointToRate(
        TitleInfoEventLeagueVsComponent_o *this,
        int64_t point,
        int64_t maxPoint,
        const MethodInfo *method)
{
  return (double)point / (double)maxPoint;
}


void TitleInfoEventLeagueVsComponent__Destroy(TitleInfoEventLeagueVsComponent_o *this, const MethodInfo *method)
{
  ;
}


void TitleInfoEventLeagueVsComponent__FrameIn(
        TitleInfoEventLeagueVsComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  TitleInfoEventLeagueVsComponent_c *v8; // x8
  UnityEngine_GameObject_o *v9; // x21
  Il2CppObject *v10; // x0
  __int64 v11; // x1
  float z; // s2
  Il2CppObject *v13; // x21
  float32x2_t *static_fields; // x8
  float v15; // s3
  float v16; // w9
  UnityEngine_GameObject_o *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  int32_t v24; // w1
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7

  if ( (byte_596E7B0 & 1) == 0 )
  {
    sub_2213A60(&TitleInfoEventLeagueVsComponent_TypeInfo);
    sub_2213A60(&Method_UITweener_Begin_TweenPosition___);
    sub_2213A60(&StringLiteral_7146/*"FrameInFinish"*/);
    byte_596E7B0 = 1;
  }
  if ( this->fields.evPointEnt )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    v8 = TitleInfoEventLeagueVsComponent_TypeInfo;
    v9 = gameObject;
    if ( !*(&TitleInfoEventLeagueVsComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventLeagueVsComponent_TypeInfo, v6, v7);
      v8 = TitleInfoEventLeagueVsComponent_TypeInfo;
    }
    v10 = UITweener__Begin_object_(
            v9,
            v8->static_fields->ANIM_DURATION_FRAME_IN,
            (const MethodInfo_3A047F4 *)Method_UITweener_Begin_TweenPosition___);
    if ( !v10 )
      sub_2213CDC(0, v11);
    z = this->fields.originPos.fields.z;
    v13 = v10;
    static_fields = (float32x2_t *)TitleInfoEventLeagueVsComponent_TypeInfo->static_fields;
    v15 = static_fields[1].n64_f32[0];
    v10[8].klass = (Il2CppClass *)vadd_f32(
                                    *(float32x2_t *)&this->fields.originPos.fields.x,
                                    (float32x2_t)static_fields->n64_u64[0]).n64_u64[0];
    *(float *)&v10[8].monitor = z + v15;
    v16 = this->fields.originPos.fields.z;
    *(void **)((char *)&v10[8].monitor + 4) = *(void **)&this->fields.originPos.fields.x;
    *((float *)&v10[9].klass + 1) = v16;
    LODWORD(v10[2].klass) = 2;
    v17 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    v13[5].klass = (Il2CppClass *)v17;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v13[5], (int32_t)v17, v18, v19, v20, v21, v22, v23);
    v24 = StringLiteral_7146/*"FrameInFinish"*/;
    v13[5].monitor = (void *)StringLiteral_7146/*"FrameInFinish"*/;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v13[5].monitor, v24, v25, v26, v27, v28, v29, v30);
    this->fields.frameInCallBack = callback;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.frameInCallBack,
      (int32_t)callback,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36);
  }
}


void TitleInfoEventLeagueVsComponent__FrameInFinish(TitleInfoEventLeagueVsComponent_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_frameInCallBack; // x0
  System_Action_o *v9; // x19
  struct System_Action_o *frameInCallBack; // t1

  frameInCallBack = this->fields.frameInCallBack;
  p_frameInCallBack = (MissionNaviTransitionBoardItem_o *)&this->fields.frameInCallBack;
  v9 = frameInCallBack;
  p_frameInCallBack->klass = 0;
  sub_2213A04(p_frameInCallBack, 0, v2, v3, v4, v5, v6, v7);
  if ( frameInCallBack )
    ActionExtensions__Call(v9, 0);
}


void TitleInfoEventLeagueVsComponent__FrameOut(TitleInfoEventLeagueVsComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  TitleInfoEventLeagueVsComponent_c *v6; // x8
  UnityEngine_GameObject_o *v7; // x20
  Il2CppObject *v8; // x0
  __int64 v9; // x1
  Il2CppClass *v10; // x9
  Il2CppObject *v11; // x20
  TitleInfoEventLeagueVsComponent_c *v12; // x10
  struct TitleInfoEventLeagueVsComponent_StaticFields *static_fields; // x8
  float32x2_t v14; // d0
  float z; // s2
  float32x2_t v16; // d1
  float v17; // s3
  UnityEngine_GameObject_o *v18; // x0
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  int32_t v25; // w1
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7

  if ( (byte_596E7B1 & 1) == 0 )
  {
    sub_2213A60(&TitleInfoEventLeagueVsComponent_TypeInfo);
    sub_2213A60(&Method_UITweener_Begin_TweenPosition___);
    sub_2213A60(&StringLiteral_7148/*"FrameOutFinish"*/);
    byte_596E7B1 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v6 = TitleInfoEventLeagueVsComponent_TypeInfo;
  v7 = gameObject;
  if ( !*(&TitleInfoEventLeagueVsComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventLeagueVsComponent_TypeInfo, v4, v5);
    v6 = TitleInfoEventLeagueVsComponent_TypeInfo;
  }
  v8 = UITweener__Begin_object_(
         v7,
         v6->static_fields->ANIM_DURATION_FRAME_IN,
         (const MethodInfo_3A047F4 *)Method_UITweener_Begin_TweenPosition___);
  if ( !v8 )
    sub_2213CDC(0, v9);
  v10 = *(Il2CppClass **)&this->fields.originPos.fields.x;
  v11 = v8;
  v12 = TitleInfoEventLeagueVsComponent_TypeInfo;
  *(float *)&v8[8].monitor = this->fields.originPos.fields.z;
  v8[8].klass = v10;
  static_fields = v12->static_fields;
  v14.n64_u64[0] = *(unsigned __int64 *)&this->fields.originPos.fields.x;
  z = this->fields.originPos.fields.z;
  v16.n64_u64[0] = *(unsigned __int64 *)&static_fields->RAIDBOSS_ANIM_ROOT_POS.fields.x;
  v17 = static_fields->RAIDBOSS_ANIM_ROOT_POS.fields.z;
  LODWORD(v8[2].klass) = 2;
  *(float32x2_t *)((char *)&v8[8].monitor + 4) = vadd_f32(v14, v16);
  *((float *)&v8[9].klass + 1) = z + v17;
  v18 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v11[5].klass = (Il2CppClass *)v18;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v11[5], (int32_t)v18, v19, v20, v21, v22, v23, v24);
  v25 = StringLiteral_7148/*"FrameOutFinish"*/;
  v11[5].monitor = (void *)StringLiteral_7148/*"FrameOutFinish"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v11[5].monitor, v25, v26, v27, v28, v29, v30, v31);
}


void TitleInfoEventLeagueVsComponent__FrameOutFinish(TitleInfoEventLeagueVsComponent_o *this, const MethodInfo *method)
{
  ;
}


bool TitleInfoEventLeagueVsComponent__IsDispPossible(TitleInfoEventLeagueVsComponent_o *this, const MethodInfo *method)
{
  return 1;
}


bool TitleInfoEventLeagueVsComponent__IsEventRaidBoss(
        TitleInfoEventLeagueVsComponent_o *this,
        const MethodInfo *method)
{
  return 0;
}


void TitleInfoEventLeagueVsComponent__OnDestroy(TitleInfoEventLeagueVsComponent_o *this, const MethodInfo *method)
{
  ;
}


void TitleInfoEventLeagueVsComponent__OpenResultPointDialog(
        TitleInfoEventLeagueVsComponent_o *this,
        EventPointEntity_o *evPointEnt,
        EventPointWinReward_o *rewardInfo,
        System_Action_o *callback,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x2
  GiftEntity_array *GiftListById; // x21
  System_String_o *v13; // x0
  System_String_o *v14; // x20
  System_String_o *v15; // x0
  bool winGroup1; // w1
  System_String_o *v17; // x22
  Il2CppObject *WinGroupName; // x0
  int max_length; // w8
  System_String_o *v20; // x22
  int v21; // w25
  __int64 v22; // x1
  __int64 v23; // x2
  System_String_o *v24; // x0
  System_String_o *v25; // x0
  System_String_o *countText; // [xsp+40h] [xbp-50h] BYREF
  System_String_o *nameText; // [xsp+48h] [xbp-48h] BYREF

  if ( (byte_596E7B4 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_5887/*"EVENT_POINT_VS_WIN_DIALOG_TITLE"*/);
    sub_2213A60(&StringLiteral_5886/*"EVENT_POINT_VS_WIN_DIALOG_GROUP"*/);
    sub_2213A60(&StringLiteral_5885/*"EVENT_POINT_VS_WIN_DIALOG_GET"*/);
    byte_596E7B4 = 1;
  }
  countText = 0;
  nameText = 0;
  if ( evPointEnt )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_20;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_385636C *)Method_DataManager_GetMasterData_GiftMaster___);
    if ( !rewardInfo || !Instance )
      goto LABEL_20;
    GiftListById = GiftMaster__GetGiftListById((GiftMaster_o *)Instance, rewardInfo->fields.giftId, 0);
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v10, v11);
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_5887/*"EVENT_POINT_VS_WIN_DIALOG_TITLE"*/, 0);
    v14 = System_String__Format(v13, (Il2CppObject *)evPointEnt->fields.name, 0);
    v15 = LocalizationManager__Get((System_String_o *)StringLiteral_5886/*"EVENT_POINT_VS_WIN_DIALOG_GROUP"*/, 0);
    winGroup1 = rewardInfo->fields.winGroup1;
    v17 = v15;
    WinGroupName = (Il2CppObject *)EventPointEntity__GetWinGroupName(evPointEnt, winGroup1, 0);
    Instance = (DataManager_o *)System_String__Format(v17, WinGroupName, 0);
    if ( !GiftListById )
      goto LABEL_20;
    max_length = GiftListById->max_length;
    v20 = (System_String_o *)Instance;
    if ( max_length >= 1 )
    {
      v21 = 0;
      while ( 1 )
      {
        if ( v21 >= (unsigned int)max_length )
          sub_2213CE4(Instance);
        Instance = (DataManager_o *)GiftListById->m_Items[v21];
        if ( !Instance )
          break;
        GiftEntity__GetInfo((GiftEntity_o *)Instance, &nameText, &countText, 0);
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v22, v23);
        v24 = LocalizationManager__Get((System_String_o *)StringLiteral_5885/*"EVENT_POINT_VS_WIN_DIALOG_GET"*/, 0);
        v25 = System_String__Format_75697880(v24, (Il2CppObject *)nameText, (Il2CppObject *)countText, 0);
        Instance = (DataManager_o *)System_String__Concat_75651716(v20, v25, 0);
        max_length = GiftListById->max_length;
        ++v21;
        v20 = (System_String_o *)Instance;
        if ( v21 >= max_length )
          goto LABEL_17;
      }
LABEL_20:
      sub_2213CDC(Instance, v9);
    }
LABEL_17:
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_20;
    CommonUI__OpenNotificationDialog((CommonUI_o *)Instance, v14, v20, callback, -1, 0, 0, 0, 1, 0, 1, 0, 0, 0.0, 0, 0);
  }
  else
  {
    ActionExtensions__Call(callback, 0);
  }
}


void TitleInfoEventLeagueVsComponent__ResultEffect(
        TitleInfoEventLeagueVsComponent_o *this,
        int32_t winType,
        AssetData_o *effectAssetData,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v9; // x21
  UnityEngine_GameObject_o *resultPanel; // x0
  __int64 v11; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  __int64 v24; // x1
  __int64 v25; // x2
  UnityEngine_Object_o *Object_47472752; // x22
  Il2CppObject *v27; // x0
  UnityEngine_GameObject_o *v28; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  int32_t v37; // w8
  UnityEngine_BoxCollider_c *v38; // x1
  __int64 naturalAligment; // x9
  MissionNaviTransitionBoardItem_o *v40; // x23
  Il2CppObject *v41; // x0
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  struct EventPointEntity_o *evPointEnt; // x8
  EventPointVsResultAction_o *v49; // x20
  int32_t id; // w22
  System_Action_o *v51; // x23

  if ( (byte_596E7B3 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&UnityEngine_BoxCollider_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_Collider___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_EventPointVsResultAction___);
    sub_2213A60(&UnityEngine_GameObject_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_TitleInfoEventLeagueVsComponent___c__DisplayClass36_0__ResultEffect_b__0__);
    sub_2213A60(&TitleInfoEventLeagueVsComponent___c__DisplayClass36_0_TypeInfo);
    sub_2213A60(&StringLiteral_18029/*"bit_vs_result"*/);
    byte_596E7B3 = 1;
  }
  v9 = sub_2213CCC(TitleInfoEventLeagueVsComponent___c__DisplayClass36_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_27;
  *(_QWORD *)(v9 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 32), (int32_t)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 40) = callback;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 40), (int32_t)callback, v18, v19, v20, v21, v22, v23);
  if ( !winType )
  {
    ActionExtensions__Call(*(System_Action_o **)(v9 + 40), 0);
    return;
  }
  if ( !effectAssetData )
    goto LABEL_27;
  Object_47472752 = AssetData__GetObject_47472752(effectAssetData, (System_String_o *)StringLiteral_18029/*"bit_vs_result"*/, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24, v25);
  if ( Object_47472752 )
    v27 = (UnityEngine_GameObject_c *)Object_47472752->klass == UnityEngine_GameObject_TypeInfo
        ? (Il2CppObject *)Object_47472752
        : 0LL;
  else
    v27 = 0;
  resultPanel = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                              v27,
                                              (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !resultPanel
    || (v28 = resultPanel,
        gameObject = UnityEngine_GameObject__get_gameObject(resultPanel, 0),
        GameObjectExtensions__SafeSetParent_42897308(gameObject, this->fields.resultPanel, 0),
        (resultPanel = this->fields.resultPanel) == 0) )
  {
LABEL_27:
    sub_2213CDC(resultPanel, v11);
  }
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       resultPanel,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_Collider___);
  v37 = (int)Component_object;
  if ( !Component_object )
    goto LABEL_22;
  v38 = UnityEngine_BoxCollider_TypeInfo;
  naturalAligment = UnityEngine_BoxCollider_TypeInfo->_2.naturalAligment;
  if ( Component_object->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (UnityEngine_BoxCollider_c *)Component_object->klass->_2.typeHierarchy[naturalAligment - 1] != UnityEngine_BoxCollider_TypeInfo
    || (*(_QWORD *)(v9 + 24) = Component_object,
        v40 = (MissionNaviTransitionBoardItem_o *)(v9 + 24),
        Component_object->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (UnityEngine_BoxCollider_c *)Component_object->klass->_2.typeHierarchy[naturalAligment - 1] != v38 )
  {
    sub_221405C(Component_object, v38, v31, v32);
LABEL_22:
    *(_QWORD *)(v9 + 24) = 0;
    v40 = (MissionNaviTransitionBoardItem_o *)(v9 + 24);
  }
  sub_2213A04(v40, v37, v31, v32, v33, v34, v35, v36);
  resultPanel = (UnityEngine_GameObject_o *)v40->klass;
  if ( !v40->klass )
    goto LABEL_27;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)resultPanel, 1, 0);
  v41 = UnityEngine_GameObject__GetComponent_object_(
          v28,
          (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_EventPointVsResultAction___);
  *(_QWORD *)(v9 + 16) = v41;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 16), (int32_t)v41, v42, v43, v44, v45, v46, v47);
  evPointEnt = this->fields.evPointEnt;
  if ( !evPointEnt )
    goto LABEL_27;
  v49 = *(EventPointVsResultAction_o **)(v9 + 16);
  id = evPointEnt->fields.id;
  v51 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v51,
    (Il2CppObject *)v9,
    Method_TitleInfoEventLeagueVsComponent___c__DisplayClass36_0__ResultEffect_b__0__,
    0);
  if ( !v49 )
    goto LABEL_27;
  EventPointVsResultAction__Setup(v49, winType, id, v51, 0);
}


// local variable allocation has failed, the output may be wrong!
void TitleInfoEventLeagueVsComponent__Setup(
        TitleInfoEventLeagueVsComponent_o *this,
        EventPointEntity_o *eventPointEntity,
        int32_t eventId,
        AssetData_o *effectAssetData,
        bool isDispRestTime,
        const MethodInfo *method)
{
  bool v6; // w6
  bool v7; // w7
  AssetData_o *v9; // x26
  __int64 v13; // x1
  __int64 v14; // x2
  TerminalPramsManager_c *v15; // x0
  TerminalPramsManager_c *v16; // x0
  __int64 maskFade; // x0
  Il2CppObject *MasterData_object; // x24
  Il2CppObject *v19; // x25
  struct System_Int32_array *v20; // x8
  unsigned __int64 v21; // x21
  int64_t v22; // x22
  unsigned __int64 max_length_low; // x9
  struct System_Int32_array *group1; // x8
  struct System_Int32_array *group2; // x8
  int64_t v26; // x24
  struct UISlider_array *hpBarSlider; // x8
  struct UISlider_array *v28; // x8
  float v29; // s0
  struct UISlider_array *v30; // x8
  int64_t normaTotalPoint; // x21
  double v32; // d8
  float v33; // s0
  struct UISlider_array *v34; // x8
  float v35; // s0
  struct UISprite_array *v36; // x8
  struct System_Int32_array *v37; // x9
  UISprite_o *v38; // x24
  Il2CppObject *v39; // x0
  __int64 v40; // x1
  __int64 v41; // x2
  System_String_o *v42; // x26
  struct UISprite_array *v43; // x8
  struct System_Int32_array *v44; // x9
  UISprite_o *v45; // x24
  struct System_Int32_array *v46; // x8
  Il2CppObject *v47; // x26
  Il2CppObject *v48; // x0
  System_String_o *v49; // x0
  struct System_Int32_array *v50; // x8
  struct System_Int32_array *v51; // x8
  __int64 v52; // x27
  unsigned __int64 v53; // x24
  Il2CppObject *v54; // x26
  unsigned __int64 v55; // x9
  Il2CppObject *v56; // x0
  struct UISprite_array *v57; // x8
  UISprite_o *v58; // x23
  Il2CppObject *v59; // x0
  __int64 v60; // x1
  __int64 v61; // x2
  System_String_o *v62; // x25
  struct UISprite_array *v63; // x8
  UISprite_o *v64; // x23
  System_String_o *v65; // x0
  struct UISlider_array *v66; // x8
  double v67; // d8
  float v68; // s0
  struct UISlider_array *v69; // x8
  struct UISprite_array *hpBar; // x8
  struct System_Int32_array *v71; // x9
  UISprite_o *v72; // x23
  Il2CppObject *v73; // x0
  __int64 v74; // x1
  __int64 v75; // x2
  System_String_o *v76; // x25
  struct UISprite_array *v77; // x8
  struct System_Int32_array *v78; // x9
  UISprite_o *v79; // x23
  Il2CppObject *v80; // x0
  System_String_o *v81; // x0
  struct UISprite_array *groupIcon; // x8
  struct System_Int32_array *v83; // x9
  UISprite_o *v84; // x23
  Il2CppObject *v85; // x0
  System_String_o *v86; // x0
  struct UISprite_array *v87; // x8
  struct System_Int32_array *v88; // x9
  UISprite_o *v89; // x23
  Il2CppObject *v90; // x0
  System_String_o *v91; // x0
  __int64 v92; // x1
  __int64 v93; // x2
  UnityEngine_Object_o *Object_47472752; // x21
  Il2CppObject *v95; // x0
  UnityEngine_GameObject_o *v96; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x21
  const MethodInfo *v99; // x4
  __int64 v100; // x1
  __int64 v101; // x2
  UISprite_o *maskSp; // x21
  const MethodInfo *v103; // x1
  int32_t id; // w8
  UISprite_o *modeName; // x20
  Il2CppObject *v106; // x0
  System_String_o *v107; // x0
  __int64 v108; // x2
  struct UISprite_array *splitIcon; // x8
  unsigned __int64 v110; // x22
  unsigned __int64 v111; // x9
  UISprite_o *v112; // x20
  UnityEngine_GameObject_o *v113; // x0
  UnityEngine_GameObject_o *v114; // x0
  AssetData_o *v115; // [xsp+10h] [xbp-80h]
  int32_t v116; // [xsp+18h] [xbp-78h] BYREF
  int32_t v117; // [xsp+1Ch] [xbp-74h] BYREF
  int32_t v118; // [xsp+28h] [xbp-68h] BYREF
  int32_t v119; // [xsp+2Ch] [xbp-64h] BYREF

  v9 = effectAssetData;
  if ( (byte_596E7AE & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_EventPointGroupMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_TotalEventPointMaster___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_TitleInfoEventLeagueVsGaugeEffect___);
    sub_2213A60(&UnityEngine_GameObject_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&StringLiteral_20199/*"event_vs_gauge_title_"*/);
    sub_2213A60(&StringLiteral_20196/*"event_vs_frame"*/);
    sub_2213A60(&StringLiteral_20195/*"event_vs_back"*/);
    sub_2213A60(&StringLiteral_26193/*"white00"*/);
    sub_2213A60(&StringLiteral_20198/*"event_vs_gauge_bg"*/);
    sub_2213A60(&StringLiteral_18026/*"bit_vs_gauge_part"*/);
    sub_2213A60(&StringLiteral_20200/*"event_vs_split_line"*/);
    sub_2213A60(&StringLiteral_18793/*"clear00"*/);
    sub_2213A60(&StringLiteral_20204/*"event_vs_team_icon_"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_20197/*"event_vs_gauge_"*/);
    byte_596E7AE = 1;
  }
  if ( !eventPointEntity )
    return;
  this->fields.evPointEnt = eventPointEntity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.evPointEnt,
    (int32_t)eventPointEntity,
    *(System_String_o **)&eventId,
    (System_String_o *)effectAssetData,
    isDispRestTime,
    (int32_t)method,
    v6,
    v7);
  v15 = TerminalPramsManager_TypeInfo;
  this->fields.isDispRestTime = isDispRestTime;
  if ( !*(&v15->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v15, v13, v14);
  if ( !byte_596DB59 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DB59 = 1;
  }
  v16 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v13, v14);
    v16 = TerminalPramsManager_TypeInfo;
  }
  if ( v16->static_fields->_eventPointWinType_k__BackingField )
  {
    maskFade = (__int64)this->fields.maskFade;
    if ( !maskFade )
      goto LABEL_120;
    MaskFade__Fadeout((MaskFade_o *)maskFade, 1, 0.0, 0, 0);
  }
  maskFade = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !maskFade )
    goto LABEL_120;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)maskFade,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_TotalEventPointMaster___);
  maskFade = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !maskFade )
    goto LABEL_120;
  v19 = DataManager__GetMasterData_object_(
          (DataManager_o *)maskFade,
          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventPointGroupMaster___);
  maskFade = EventPointEntity__isBossBattle(eventPointEntity, 0);
  if ( (maskFade & 1) == 0 )
  {
    group1 = eventPointEntity->fields.group1;
    if ( !group1 )
      goto LABEL_120;
    if ( LODWORD(group1->max_length) )
    {
      if ( !MasterData_object )
        goto LABEL_120;
      maskFade = TotalEventPointMaster__GetPoint(
                   (TotalEventPointMaster_o *)MasterData_object,
                   eventId,
                   eventPointEntity->fields.id,
                   group1->m_Items[0],
                   0);
      group2 = eventPointEntity->fields.group2;
      if ( !group2 )
        goto LABEL_120;
      if ( LODWORD(group2->max_length) )
      {
        v22 = maskFade;
        maskFade = TotalEventPointMaster__GetPoint(
                     (TotalEventPointMaster_o *)MasterData_object,
                     eventId,
                     eventPointEntity->fields.id,
                     group2->m_Items[0],
                     0);
        v26 = maskFade;
        if ( v22 == maskFade )
        {
          hpBarSlider = this->fields.hpBarSlider;
          if ( !hpBarSlider )
            goto LABEL_120;
          if ( !LODWORD(hpBarSlider->max_length) )
            goto LABEL_123;
          maskFade = (__int64)hpBarSlider->m_Items[0];
          if ( !maskFade )
            goto LABEL_120;
          UIProgressBar__set_value((UIProgressBar_o *)maskFade, 0.5, 0);
          v28 = this->fields.hpBarSlider;
          if ( !v28 )
            goto LABEL_120;
          if ( (v28->max_length & 0xFFFFFFFE) == 0 )
            goto LABEL_123;
          maskFade = (__int64)v28->m_Items[1];
          if ( !maskFade )
            goto LABEL_120;
          v29 = 0.5;
        }
        else
        {
          v66 = this->fields.hpBarSlider;
          if ( !v66 )
            goto LABEL_120;
          if ( !LODWORD(v66->max_length) )
            goto LABEL_123;
          maskFade = (__int64)v66->m_Items[0];
          if ( !maskFade )
            goto LABEL_120;
          v67 = (double)v22 / (double)(v26 + v22);
          v68 = 1.0 - v67;
          UIProgressBar__set_value((UIProgressBar_o *)maskFade, v68, 0);
          v69 = this->fields.hpBarSlider;
          if ( !v69 )
            goto LABEL_120;
          if ( (v69->max_length & 0xFFFFFFFE) == 0 )
            goto LABEL_123;
          maskFade = (__int64)v69->m_Items[1];
          if ( !maskFade )
            goto LABEL_120;
          v29 = v67;
        }
        UIProgressBar__set_value((UIProgressBar_o *)maskFade, v29, 0);
        hpBar = this->fields.hpBar;
        if ( !hpBar )
          goto LABEL_120;
        if ( LODWORD(hpBar->max_length) )
        {
          v71 = eventPointEntity->fields.group2;
          if ( !v71 )
            goto LABEL_120;
          if ( LODWORD(v71->max_length) )
          {
            v72 = hpBar->m_Items[0];
            v119 = v71->m_Items[0];
            v73 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v119);
            v76 = System_String__Concat((Il2CppObject *)StringLiteral_20197/*"event_vs_gauge_"*/, v73, 0);
            if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v74, v75);
            maskFade = AtlasManager__SetEventUI(v72, v76, 0);
            v77 = this->fields.hpBar;
            if ( !v77 )
              goto LABEL_120;
            if ( (v77->max_length & 0xFFFFFFFE) != 0 )
            {
              v78 = eventPointEntity->fields.group1;
              if ( !v78 )
                goto LABEL_120;
              if ( LODWORD(v78->max_length) )
              {
                v79 = v77->m_Items[1];
                v118 = v78->m_Items[0];
                v80 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v118);
                v81 = System_String__Concat((Il2CppObject *)StringLiteral_20197/*"event_vs_gauge_"*/, v80, 0);
                maskFade = AtlasManager__SetEventUI(v79, v81, 0);
                groupIcon = this->fields.groupIcon;
                if ( !groupIcon )
                  goto LABEL_120;
                if ( LODWORD(groupIcon->max_length) )
                {
                  v83 = eventPointEntity->fields.group2;
                  if ( !v83 )
                    goto LABEL_120;
                  if ( LODWORD(v83->max_length) )
                  {
                    v84 = groupIcon->m_Items[0];
                    v117 = v83->m_Items[0];
                    v85 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v117);
                    v86 = System_String__Concat((Il2CppObject *)StringLiteral_20204/*"event_vs_team_icon_"*/, v85, 0);
                    maskFade = AtlasManager__SetEventUI(v84, v86, 0);
                    v87 = this->fields.groupIcon;
                    if ( !v87 )
                      goto LABEL_120;
                    if ( (v87->max_length & 0xFFFFFFFE) != 0 )
                    {
                      v88 = eventPointEntity->fields.group1;
                      if ( !v88 )
                        goto LABEL_120;
                      if ( LODWORD(v88->max_length) )
                      {
                        v89 = v87->m_Items[1];
                        v116 = v88->m_Items[0];
                        v90 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v116);
                        v91 = System_String__Concat((Il2CppObject *)StringLiteral_20204/*"event_vs_team_icon_"*/, v90, 0);
                        maskFade = AtlasManager__SetEventUI(v89, v91, 0);
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
    sub_2213CE4(maskFade);
  }
  v20 = eventPointEntity->fields.group1;
  if ( !v20 )
    goto LABEL_120;
  v21 = 0;
  v22 = 0;
  while ( 1 )
  {
    max_length_low = LODWORD(v20->max_length);
    if ( (__int64)v21 >= (int)max_length_low )
      break;
    if ( v21 >= max_length_low )
      goto LABEL_123;
    if ( MasterData_object )
    {
      maskFade = TotalEventPointMaster__GetPoint(
                   (TotalEventPointMaster_o *)MasterData_object,
                   eventId,
                   eventPointEntity->fields.id,
                   v20->m_Items[v21],
                   0);
      v20 = eventPointEntity->fields.group1;
      v22 += maskFade;
      ++v21;
      if ( v20 )
        continue;
    }
    goto LABEL_120;
  }
  v30 = this->fields.hpBarSlider;
  if ( !v30 )
    goto LABEL_120;
  if ( !LODWORD(v30->max_length) )
    goto LABEL_123;
  maskFade = (__int64)v30->m_Items[0];
  if ( !maskFade )
    goto LABEL_120;
  normaTotalPoint = eventPointEntity->fields.normaTotalPoint;
  v32 = (double)v22 / (double)normaTotalPoint;
  v33 = 1.0 - v32;
  UIProgressBar__set_value((UIProgressBar_o *)maskFade, v33, 0);
  v34 = this->fields.hpBarSlider;
  if ( !v34 )
    goto LABEL_120;
  if ( (v34->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_123;
  maskFade = (__int64)v34->m_Items[1];
  if ( !maskFade )
    goto LABEL_120;
  v35 = v32;
  UIProgressBar__set_value((UIProgressBar_o *)maskFade, v35, 0);
  v36 = this->fields.hpBar;
  if ( !v36 )
    goto LABEL_120;
  if ( !LODWORD(v36->max_length) )
    goto LABEL_123;
  v37 = eventPointEntity->fields.group2;
  if ( !v37 )
    goto LABEL_120;
  v115 = v9;
  if ( !LODWORD(v37->max_length) )
    goto LABEL_123;
  v38 = v36->m_Items[0];
  v119 = v37->m_Items[0];
  v39 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v119);
  v42 = System_String__Concat((Il2CppObject *)StringLiteral_20197/*"event_vs_gauge_"*/, v39, 0);
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v40, v41);
  maskFade = AtlasManager__SetEventUI(v38, v42, 0);
  v43 = this->fields.hpBar;
  if ( !v43 )
    goto LABEL_120;
  if ( (v43->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_123;
  v44 = eventPointEntity->fields.group1;
  if ( !v44 )
    goto LABEL_120;
  if ( !LODWORD(v44->max_length) )
    goto LABEL_123;
  v45 = v43->m_Items[1];
  v118 = v44->m_Items[0];
  maskFade = j_il2cpp_value_box_0(qword_5984348, &v118);
  v46 = eventPointEntity->fields.group1;
  if ( !v46 )
    goto LABEL_120;
  if ( (v46->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_123;
  v47 = (Il2CppObject *)maskFade;
  v117 = v46->m_Items[1];
  v48 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v117);
  v49 = System_String__Concat_75694732((Il2CppObject *)StringLiteral_20197/*"event_vs_gauge_"*/, v47, v48, 0);
  maskFade = AtlasManager__SetEventUI(v45, v49, 0);
  v50 = eventPointEntity->fields.group2;
  if ( !v50 )
    goto LABEL_120;
  if ( !LODWORD(v50->max_length) )
    goto LABEL_123;
  if ( !v19 )
    goto LABEL_120;
  maskFade = (__int64)EventPointGroupMaster__getEntity((EventPointGroupMaster_o *)v19, eventId, v50->m_Items[0], 0);
  v51 = eventPointEntity->fields.group1;
  if ( !v51 )
    goto LABEL_120;
  v52 = maskFade;
  v53 = 0;
  v54 = (Il2CppObject *)StringLiteral_1/*""*/;
  while ( 1 )
  {
    v55 = LODWORD(v51->max_length);
    if ( (__int64)v53 >= (int)v55 )
      break;
    if ( v53 >= v55 )
      goto LABEL_123;
    maskFade = (__int64)EventPointGroupMaster__getEntity((EventPointGroupMaster_o *)v19, eventId, v51->m_Items[v53], 0);
    if ( maskFade )
    {
      v119 = *(_DWORD *)(maskFade + 32);
      v56 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v119);
      maskFade = (__int64)System_String__Concat(v54, v56, 0);
      v51 = eventPointEntity->fields.group1;
      v54 = (Il2CppObject *)maskFade;
      ++v53;
      if ( v51 )
        continue;
    }
    goto LABEL_120;
  }
  v57 = this->fields.groupIcon;
  if ( !v57 )
    goto LABEL_120;
  if ( !LODWORD(v57->max_length) )
    goto LABEL_123;
  if ( !v52 )
    goto LABEL_120;
  v58 = v57->m_Items[0];
  v119 = *(_DWORD *)(v52 + 32);
  v59 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v119);
  v62 = System_String__Concat((Il2CppObject *)StringLiteral_20204/*"event_vs_team_icon_"*/, v59, 0);
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v60, v61);
  maskFade = AtlasManager__SetEventUI(v58, v62, 0);
  v63 = this->fields.groupIcon;
  v26 = normaTotalPoint - v22;
  if ( !v63 )
LABEL_120:
    sub_2213CDC(maskFade, v13);
  if ( (v63->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_123;
  v64 = v63->m_Items[1];
  v65 = System_String__Concat_75651716((System_String_o *)StringLiteral_20204/*"event_vs_team_icon_"*/, (System_String_o *)v54, 0);
  maskFade = AtlasManager__SetEventUI(v64, v65, 0);
  v9 = v115;
LABEL_98:
  if ( !v9 )
    goto LABEL_120;
  Object_47472752 = AssetData__GetObject_47472752(v9, (System_String_o *)StringLiteral_18026/*"bit_vs_gauge_part"*/, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v92, v93);
  if ( Object_47472752 )
    v95 = (UnityEngine_GameObject_c *)Object_47472752->klass == UnityEngine_GameObject_TypeInfo
        ? (Il2CppObject *)Object_47472752
        : 0LL;
  else
    v95 = 0;
  maskFade = (__int64)UnityEngine_Object__Instantiate_object_(
                        v95,
                        (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !maskFade )
    goto LABEL_120;
  v96 = (UnityEngine_GameObject_o *)maskFade;
  gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)maskFade, 0);
  GameObjectExtensions__SafeSetParent_42897308(gameObject, this->fields.gaugeEffectPanel, 0);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v96,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventLeagueVsGaugeEffect___);
  maskFade = EventPointEntity__isBossBattle(eventPointEntity, 0);
  if ( !Component_object )
    goto LABEL_120;
  TitleInfoEventLeagueVsGaugeEffect__setup(
    (TitleInfoEventLeagueVsGaugeEffect_o *)Component_object,
    v22,
    v26,
    maskFade & 1,
    v99);
  maskSp = this->fields.maskSp;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v100, v101);
  AtlasManager__SetCommon(maskSp, 0);
  AtlasManager__SetCommon(this->fields.colliderSp, 0);
  maskFade = (__int64)this->fields.maskSp;
  if ( !maskFade )
    goto LABEL_120;
  UISprite__set_spriteName((UISprite_o *)maskFade, (System_String_o *)StringLiteral_26193/*"white00"*/, 0);
  maskFade = (__int64)this->fields.colliderSp;
  if ( !maskFade )
    goto LABEL_120;
  UISprite__set_spriteName((UISprite_o *)maskFade, (System_String_o *)StringLiteral_18793/*"clear00"*/, 0);
  this->fields.endTime = eventPointEntity->fields.endedAt;
  TitleInfoEventLeagueVsComponent__restTimeUpdate(this, v103);
  AtlasManager__SetEventUI(this->fields.baseWindow, (System_String_o *)StringLiteral_20198/*"event_vs_gauge_bg"*/, 0);
  AtlasManager__SetEventUI(this->fields.hpFrame, (System_String_o *)StringLiteral_20196/*"event_vs_frame"*/, 0);
  AtlasManager__SetEventUI(this->fields.hpBack, (System_String_o *)StringLiteral_20195/*"event_vs_back"*/, 0);
  id = eventPointEntity->fields.id;
  modeName = this->fields.modeName;
  v119 = id;
  v106 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v119);
  v107 = System_String__Concat((Il2CppObject *)StringLiteral_20199/*"event_vs_gauge_title_"*/, v106, 0);
  AtlasManager__SetEventUI(modeName, v107, 0);
  maskFade = (__int64)this->fields.modeName;
  if ( !maskFade )
    goto LABEL_120;
  maskFade = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)maskFade + 840LL))(
               maskFade,
               *(_QWORD *)(*(_QWORD *)maskFade + 848LL));
  splitIcon = this->fields.splitIcon;
  if ( !splitIcon )
    goto LABEL_120;
  v110 = 0;
  while ( 1 )
  {
    v111 = LODWORD(splitIcon->max_length);
    if ( (__int64)v110 >= (int)v111 )
      break;
    if ( v110 >= v111 )
      goto LABEL_123;
    v112 = splitIcon->m_Items[v110];
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v13, v108);
    maskFade = AtlasManager__SetEventUI(v112, (System_String_o *)StringLiteral_20200/*"event_vs_split_line"*/, 0);
    splitIcon = this->fields.splitIcon;
    ++v110;
    if ( !splitIcon )
      goto LABEL_120;
  }
  v113 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SetLocalPositionY(v113, -2.0, 0);
  v114 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  this->fields.originPos = GameObjectExtensions__GetLocalPosition(v114, 0);
}


// attributes: thunk
void TitleInfoEventLeagueVsComponent__Update(TitleInfoEventLeagueVsComponent_o *this, const MethodInfo *method)
{
  TitleInfoEventLeagueVsComponent__restTimeUpdate(this, method);
}


void TitleInfoEventLeagueVsComponent__UpdateDisp(TitleInfoEventLeagueVsComponent_o *this, const MethodInfo *method)
{
  ;
}


void TitleInfoEventLeagueVsComponent__gaugeEvent(
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
  UnityEngine_Object_o *Object_47472752; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  UnityEngine_GameObject_c **v24; // x22
  Il2CppObject *v25; // x0
  UnityEngine_GameObject_o *v26; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v28; // x5

  if ( (byte_596E7B2 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_TotalEventPointMaster___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_TitleInfoEventLeagueVsGaugeFlashEffect___);
    sub_2213A60(&UnityEngine_GameObject_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_18024/*"bit_vs_gauge_flash"*/);
    byte_596E7B2 = 1;
  }
  evPointEnt = this->fields.evPointEnt;
  if ( evPointEnt )
  {
    if ( EventPointEntity__isBossBattle(evPointEnt, 0) )
    {
      ActionExtensions__Call(callback, 0);
      return;
    }
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_26;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_385636C *)Method_DataManager_GetMasterData_TotalEventPointMaster___);
    v14 = this->fields.evPointEnt;
    if ( !v14 )
      goto LABEL_26;
    group1 = v14->fields.group1;
    if ( !group1 )
      goto LABEL_26;
    if ( !LODWORD(group1->max_length) )
      goto LABEL_27;
    v16 = (TotalEventPointMaster_o *)Instance;
    if ( !Instance )
      goto LABEL_26;
    Instance = (DataManager_o *)TotalEventPointMaster__GetPoint(
                                  (TotalEventPointMaster_o *)Instance,
                                  eventId,
                                  v14->fields.id,
                                  group1->m_Items[0],
                                  0);
    v17 = this->fields.evPointEnt;
    if ( !v17 )
      goto LABEL_26;
    group2 = v17->fields.group2;
    if ( !group2 )
      goto LABEL_26;
    if ( !LODWORD(group2->max_length) )
LABEL_27:
      sub_2213CE4(Instance);
    v19 = (int64_t)Instance;
    Instance = (DataManager_o *)TotalEventPointMaster__GetPoint(v16, eventId, v17->fields.id, group2->m_Items[0], 0);
    if ( !effectAssetData )
      goto LABEL_26;
    v20 = (int64_t)Instance;
    Object_47472752 = AssetData__GetObject_47472752(effectAssetData, (System_String_o *)StringLiteral_18024/*"bit_vs_gauge_flash"*/, 0);
    v24 = (UnityEngine_GameObject_c **)Object_47472752;
    if ( *(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    {
      if ( Object_47472752 )
        goto LABEL_18;
    }
    else
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22, v23);
      if ( v24 )
      {
LABEL_18:
        if ( *v24 == UnityEngine_GameObject_TypeInfo )
          v25 = (Il2CppObject *)v24;
        else
          v25 = 0;
LABEL_23:
        Instance = (DataManager_o *)UnityEngine_Object__Instantiate_object_(
                                      v25,
                                      (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( Instance )
        {
          v26 = (UnityEngine_GameObject_o *)Instance;
          gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)Instance, 0);
          GameObjectExtensions__SafeSetParent_42897308(gameObject, this->fields.gaugeEffectPanel, 0);
          Instance = (DataManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                        v26,
                                        (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventLeagueVsGaugeFlashEffect___);
          if ( Instance )
          {
            TitleInfoEventLeagueVsGaugeFlashEffect__setup(
              (TitleInfoEventLeagueVsGaugeFlashEffect_o *)Instance,
              groupId,
              v19,
              v20,
              callback,
              v28);
            return;
          }
        }
LABEL_26:
        sub_2213CDC(Instance, v13);
      }
    }
    v25 = 0;
    goto LABEL_23;
  }
}


EventPointEntity_o *TitleInfoEventLeagueVsComponent__getEventPointEntity(
        TitleInfoEventLeagueVsComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.evPointEnt;
}


void TitleInfoEventLeagueVsComponent__restTimeUpdate(TitleInfoEventLeagueVsComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  UnityEngine_Behaviour_o *restTimeLabel; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  UILabel_o *v8; // x20
  System_String_o *v9; // x0
  int64_t endTime; // x8
  System_String_o *v11; // x19
  Il2CppObject *RestTime3; // x0

  if ( (byte_596E7AF & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&StringLiteral_5973/*"EVENT_VS_GAUGE_REST_TIME"*/);
    byte_596E7AF = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method, v2);
  if ( this->fields.endTime - NetworkManager__getTime(0) >= 1 && this->fields.isDispRestTime )
  {
    restTimeLabel = (UnityEngine_Behaviour_o *)this->fields.restTimeLabel;
    if ( restTimeLabel )
    {
      UnityEngine_Behaviour__set_enabled(restTimeLabel, 1, 0);
      v8 = this->fields.restTimeLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v6, v7);
      v9 = LocalizationManager__Get((System_String_o *)StringLiteral_5973/*"EVENT_VS_GAUGE_REST_TIME"*/, 0);
      endTime = this->fields.endTime;
      v11 = v9;
      RestTime3 = (Il2CppObject *)LocalizationManager__GetRestTime3(endTime, 0);
      restTimeLabel = (UnityEngine_Behaviour_o *)System_String__Format(v11, RestTime3, 0);
      if ( v8 )
      {
        UILabel__set_text(v8, (System_String_o *)restTimeLabel, 0);
        return;
      }
    }
LABEL_14:
    sub_2213CDC(restTimeLabel, v4);
  }
  restTimeLabel = (UnityEngine_Behaviour_o *)this->fields.restTimeLabel;
  if ( !restTimeLabel )
    goto LABEL_14;
  UnityEngine_Behaviour__set_enabled(restTimeLabel, 0, 0);
}


void TitleInfoEventLeagueVsComponent___c__DisplayClass36_0___ctor(
        TitleInfoEventLeagueVsComponent___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TitleInfoEventLeagueVsComponent___c__DisplayClass36_0___ResultEffect_b__0(
        TitleInfoEventLeagueVsComponent___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  TitleInfoEventLeagueVsComponent___c__DisplayClass36_0_o *v2; // x19
  System_Action_o *_9__1; // x21
  EventPointVsResultAction_o *effect; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  struct TitleInfoEventLeagueVsComponent_o *_4__this; // x8

  v2 = this;
  if ( (byte_596E7B6 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    this = (TitleInfoEventLeagueVsComponent___c__DisplayClass36_0_o *)sub_2213A60(&Method_TitleInfoEventLeagueVsComponent___c__DisplayClass36_0__ResultEffect_b__1__);
    byte_596E7B6 = 1;
  }
  _9__1 = v2->fields.__9__1;
  effect = v2->fields.effect;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v2,
      Method_TitleInfoEventLeagueVsComponent___c__DisplayClass36_0__ResultEffect_b__1__,
      0);
    v2->fields.__9__1 = _9__1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v2->fields.__9__1, (int32_t)_9__1, v5, v6, v7, v8, v9, v10);
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this || !effect )
    sub_2213CDC(this, method);
  EventPointVsResultAction__Play(effect, _9__1, _4__this->fields.maskFade, 0.0, 0);
}


void TitleInfoEventLeagueVsComponent___c__DisplayClass36_0___ResultEffect_b__1(
        TitleInfoEventLeagueVsComponent___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *effect; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *gameObject; // x20
  __int64 v7; // x2
  struct TitleInfoEventLeagueVsComponent_o *_4__this; // x8
  MaskFade_o *maskFade; // x20

  if ( (byte_596E7B7 & 1) == 0 )
  {
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596E7B7 = 1;
  }
  effect = (UnityEngine_Component_o *)this->fields.effect;
  if ( !effect )
    goto LABEL_12;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(effect, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4, v5);
  UnityEngine_Object__Destroy_83459800(gameObject, 0);
  effect = (UnityEngine_Component_o *)this->fields.coll;
  if ( !effect )
    goto LABEL_12;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)effect, 0, 0);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  maskFade = _4__this->fields.maskFade;
  effect = (UnityEngine_Component_o *)AvalonSceneManager_TypeInfo;
  if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, method, v7);
  if ( !maskFade )
LABEL_12:
    sub_2213CDC(effect, method);
  MaskFade__Fadein(maskFade, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, this->fields.callback, 0);
}