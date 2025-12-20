void TitleInfoEventLeagueVsComponent___cctor(const MethodInfo *method)
{
  struct TitleInfoEventLeagueVsComponent_StaticFields *static_fields; // x8

  if ( (byte_4D2B0E3 & 1) == 0 )
  {
    sub_1C94098(&TitleInfoEventLeagueVsComponent_TypeInfo);
    byte_4D2B0E3 = 1;
  }
  static_fields = TitleInfoEventLeagueVsComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->RAIDBOSS_ANIM_ROOT_POS.fields.x = 0x42A0000000000000LL;
  static_fields->RAIDBOSS_ANIM_ROOT_POS.fields.z = 0.0;
  TitleInfoEventLeagueVsComponent_TypeInfo->static_fields->ANIM_DURATION_FRAME_IN = 0.3;
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
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  int32_t v21; // w1
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7

  if ( (byte_4D2B0DE & 1) == 0 )
  {
    sub_1C94098(&TitleInfoEventLeagueVsComponent_TypeInfo);
    sub_1C94098(&Method_UITweener_Begin_TweenPosition___);
    sub_1C94098(&StringLiteral_6866/*"FrameInFinish"*/);
    byte_4D2B0DE = 1;
  }
  if ( this->fields.evPointEnt )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
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
           (const MethodInfo_3272360 *)Method_UITweener_Begin_TweenPosition___);
    if ( !v8 )
      sub_1C942F0(0, v9);
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
    v14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    v11[5].klass = (Il2CppClass *)v14;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&v11[5], (int32_t)v14, v15, v16, v17, v18, v19, v20);
    v21 = StringLiteral_6866/*"FrameInFinish"*/;
    v11[5].monitor = (void *)StringLiteral_6866/*"FrameInFinish"*/;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&v11[5].monitor, v21, v22, v23, v24, v25, v26, v27);
    this->fields.frameInCallBack = callback;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&this->fields.frameInCallBack,
      (int32_t)callback,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
  }
}


void TitleInfoEventLeagueVsComponent__FrameInFinish(TitleInfoEventLeagueVsComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandQuestFolderBoardItem_o *p_frameInCallBack; // x0
  System_Action_o *v9; // x19
  struct System_Action_o *frameInCallBack; // t1

  frameInCallBack = this->fields.frameInCallBack;
  p_frameInCallBack = (GrandQuestFolderBoardItem_o *)&this->fields.frameInCallBack;
  v9 = frameInCallBack;
  p_frameInCallBack->klass = 0;
  sub_1C9403C(p_frameInCallBack, 0, v2, v3, v4, v5, v6, v7);
  if ( frameInCallBack )
    ActionExtensions__Call(v9, 0);
}


void TitleInfoEventLeagueVsComponent__FrameOut(TitleInfoEventLeagueVsComponent_o *this, const MethodInfo *method)
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
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  int32_t v18; // w1
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  Il2CppClass *v25; // [xsp+0h] [xbp-40h]

  if ( (byte_4D2B0DF & 1) == 0 )
  {
    sub_1C94098(&TitleInfoEventLeagueVsComponent_TypeInfo);
    sub_1C94098(&Method_UITweener_Begin_TweenPosition___);
    sub_1C94098(&StringLiteral_6868/*"FrameOutFinish"*/);
    byte_4D2B0DF = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
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
         (const MethodInfo_3272360 *)Method_UITweener_Begin_TweenPosition___);
  v25 = *(Il2CppClass **)&this->fields.originPos.fields.x;
  if ( !v6 )
    sub_1C942F0(0, v7);
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
  v11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v8[5].klass = (Il2CppClass *)v11;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v8[5], (int32_t)v11, v12, v13, v14, v15, v16, v17);
  v18 = StringLiteral_6868/*"FrameOutFinish"*/;
  v8[5].monitor = (void *)StringLiteral_6868/*"FrameOutFinish"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v8[5].monitor, v18, v19, v20, v21, v22, v23, v24);
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
  System_String_o *countText; // [xsp+40h] [xbp-50h] BYREF
  System_String_o *nameText; // [xsp+48h] [xbp-48h] BYREF

  if ( (byte_4D2B0E2 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&StringLiteral_5660/*"EVENT_POINT_VS_WIN_DIALOG_TITLE"*/);
    sub_1C94098(&StringLiteral_5659/*"EVENT_POINT_VS_WIN_DIALOG_GROUP"*/);
    sub_1C94098(&StringLiteral_5658/*"EVENT_POINT_VS_WIN_DIALOG_GET"*/);
    byte_4D2B0E2 = 1;
  }
  countText = 0;
  nameText = 0;
  if ( evPointEnt )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_21;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_GiftMaster___);
    if ( !rewardInfo || !Instance )
      goto LABEL_21;
    GiftListById = GiftMaster__GetGiftListById((GiftMaster_o *)Instance, rewardInfo->fields.giftId, 0);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v11 = LocalizationManager__Get((System_String_o *)StringLiteral_5660/*"EVENT_POINT_VS_WIN_DIALOG_TITLE"*/, 0);
    v12 = System_String__Format(v11, (Il2CppObject *)evPointEnt->fields.name, 0);
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_5659/*"EVENT_POINT_VS_WIN_DIALOG_GROUP"*/, 0);
    winGroup1 = rewardInfo->fields.winGroup1;
    v15 = v13;
    WinGroupName = (Il2CppObject *)EventPointEntity__GetWinGroupName(evPointEnt, winGroup1, 0);
    Instance = (DataManager_o *)System_String__Format(v15, WinGroupName, 0);
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
          sub_1C942F8(Instance);
        Instance = (DataManager_o *)GiftListById->m_Items[v19];
        if ( !Instance )
          break;
        GiftEntity__GetInfo((GiftEntity_o *)Instance, &nameText, &countText, 0);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v20 = LocalizationManager__Get((System_String_o *)StringLiteral_5658/*"EVENT_POINT_VS_WIN_DIALOG_GET"*/, 0);
        v21 = System_String__Format_64459052(v20, (Il2CppObject *)nameText, (Il2CppObject *)countText, 0);
        Instance = (DataManager_o *)System_String__Concat_64417744(v18, v21, 0);
        max_length = GiftListById->max_length;
        ++v19;
        v18 = (System_String_o *)Instance;
        if ( v19 >= max_length )
          goto LABEL_17;
      }
LABEL_21:
      sub_1C942F0(Instance, v9);
    }
LABEL_17:
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_21;
    CommonUI__OpenNotificationDialog((CommonUI_o *)Instance, v12, v18, callback, -1, 0, 0, 0, 1, 0, 1, 0, 0, 0.0, 0, 0);
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
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  UnityEngine_Object_o *Object_41261192; // x22
  Il2CppObject *v25; // x0
  UnityEngine_GameObject_o *v26; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  int32_t v35; // w8
  UnityEngine_BoxCollider_c *v36; // x1
  __int64 naturalAligment; // x9
  GrandQuestFolderBoardItem_o *v38; // x23
  Il2CppObject *v39; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
  struct EventPointEntity_o *evPointEnt; // x8
  EventPointVsResultAction_o *v47; // x20
  int32_t id; // w22
  System_Action_o *v49; // x23

  if ( (byte_4D2B0E1 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&UnityEngine_BoxCollider_TypeInfo);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_Collider___);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_EventPointVsResultAction___);
    sub_1C94098(&UnityEngine_GameObject_TypeInfo);
    sub_1C94098(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_TitleInfoEventLeagueVsComponent___c__DisplayClass36_0__ResultEffect_b__0__);
    sub_1C94098(&TitleInfoEventLeagueVsComponent___c__DisplayClass36_0_TypeInfo);
    sub_1C94098(&StringLiteral_17373/*"bit_vs_result"*/);
    byte_4D2B0E1 = 1;
  }
  v9 = sub_1C942E4(TitleInfoEventLeagueVsComponent___c__DisplayClass36_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_27;
  *(_QWORD *)(v9 + 32) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v9 + 32), (int32_t)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 40) = callback;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v9 + 40), (int32_t)callback, v18, v19, v20, v21, v22, v23);
  if ( !winType )
  {
    ActionExtensions__Call(*(System_Action_o **)(v9 + 40), 0);
    return;
  }
  if ( !effectAssetData )
    goto LABEL_27;
  Object_41261192 = AssetData__GetObject_41261192(effectAssetData, (System_String_o *)StringLiteral_17373/*"bit_vs_result"*/, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( Object_41261192 )
    v25 = (UnityEngine_GameObject_c *)Object_41261192->klass == UnityEngine_GameObject_TypeInfo
        ? (Il2CppObject *)Object_41261192
        : 0LL;
  else
    v25 = 0;
  resultPanel = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                              v25,
                                              (const MethodInfo_3229578 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !resultPanel
    || (v26 = resultPanel,
        gameObject = UnityEngine_GameObject__get_gameObject(resultPanel, 0),
        GameObjectExtensions__SafeSetParent_36804604(gameObject, this->fields.resultPanel, 0),
        (resultPanel = this->fields.resultPanel) == 0) )
  {
LABEL_27:
    sub_1C942F0(resultPanel, v11);
  }
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       resultPanel,
                       (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_Collider___);
  v35 = (int)Component_object;
  if ( !Component_object )
    goto LABEL_22;
  v36 = UnityEngine_BoxCollider_TypeInfo;
  naturalAligment = UnityEngine_BoxCollider_TypeInfo->_2.naturalAligment;
  if ( Component_object->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (UnityEngine_BoxCollider_c *)Component_object->klass->_2.typeHierarchy[naturalAligment - 1] != UnityEngine_BoxCollider_TypeInfo
    || (*(_QWORD *)(v9 + 24) = Component_object,
        v38 = (GrandQuestFolderBoardItem_o *)(v9 + 24),
        Component_object->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (UnityEngine_BoxCollider_c *)Component_object->klass->_2.typeHierarchy[naturalAligment - 1] != v36 )
  {
    sub_1C9468C(Component_object);
LABEL_22:
    *(_QWORD *)(v9 + 24) = 0;
    v38 = (GrandQuestFolderBoardItem_o *)(v9 + 24);
  }
  sub_1C9403C(v38, v35, v29, v30, v31, v32, v33, v34);
  resultPanel = (UnityEngine_GameObject_o *)v38->klass;
  if ( !v38->klass )
    goto LABEL_27;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)resultPanel, 1, 0);
  v39 = UnityEngine_GameObject__GetComponent_object_(
          v26,
          (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_EventPointVsResultAction___);
  *(_QWORD *)(v9 + 16) = v39;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v9 + 16), (int32_t)v39, v40, v41, v42, v43, v44, v45);
  evPointEnt = this->fields.evPointEnt;
  if ( !evPointEnt )
    goto LABEL_27;
  v47 = *(EventPointVsResultAction_o **)(v9 + 16);
  id = evPointEnt->fields.id;
  v49 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(
    v49,
    (Il2CppObject *)v9,
    Method_TitleInfoEventLeagueVsComponent___c__DisplayClass36_0__ResultEffect_b__0__,
    0);
  if ( !v47 )
    goto LABEL_27;
  EventPointVsResultAction__Setup(v47, winType, id, v49, 0);
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
  int64_t v6; // x6
  System_String_o *v7; // x7
  AssetData_o *v9; // x26
  __int64 v13; // x1
  TerminalPramsManager_c *v14; // x0
  __int64 maskFade; // x0
  Il2CppObject *MasterData_object; // x24
  Il2CppObject *v17; // x25
  struct System_Int32_array *v18; // x8
  unsigned __int64 v19; // x21
  int64_t v20; // x22
  unsigned __int64 max_length_low; // x9
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
  struct UISprite_array *v34; // x8
  struct System_Int32_array *v35; // x9
  UISprite_o *v36; // x24
  Il2CppObject *v37; // x0
  System_String_o *v38; // x26
  struct UISprite_array *v39; // x8
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
  struct UISprite_array *v53; // x8
  UISprite_o *v54; // x23
  Il2CppObject *v55; // x0
  System_String_o *v56; // x25
  struct UISprite_array *v57; // x8
  UISprite_o *v58; // x23
  System_String_o *v59; // x0
  struct UISlider_array *v60; // x8
  double v61; // d8
  float v62; // s0
  struct UISlider_array *v63; // x8
  struct UISprite_array *hpBar; // x8
  struct System_Int32_array *v65; // x9
  UISprite_o *v66; // x23
  Il2CppObject *v67; // x0
  System_String_o *v68; // x25
  struct UISprite_array *v69; // x8
  struct System_Int32_array *v70; // x9
  UISprite_o *v71; // x23
  Il2CppObject *v72; // x0
  System_String_o *v73; // x0
  struct UISprite_array *groupIcon; // x8
  struct System_Int32_array *v75; // x9
  UISprite_o *v76; // x23
  Il2CppObject *v77; // x0
  System_String_o *v78; // x0
  struct UISprite_array *v79; // x8
  struct System_Int32_array *v80; // x9
  UISprite_o *v81; // x23
  Il2CppObject *v82; // x0
  System_String_o *v83; // x0
  UnityEngine_Object_o *Object_41261192; // x21
  Il2CppObject *v85; // x0
  UnityEngine_GameObject_o *v86; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x21
  const MethodInfo *v89; // x4
  UISprite_o *maskSp; // x21
  const MethodInfo *v91; // x1
  UISprite_o *modeName; // x21
  Il2CppObject *v93; // x0
  System_String_o *v94; // x0
  struct UISprite_array *splitIcon; // x8
  unsigned __int64 v96; // x21
  unsigned __int64 v97; // x9
  UISprite_o *v98; // x20
  UnityEngine_GameObject_o *v99; // x0
  UnityEngine_GameObject_o *v100; // x0
  AssetData_o *v101; // [xsp+10h] [xbp-80h]
  int32_t v102; // [xsp+18h] [xbp-78h] BYREF
  int32_t v103; // [xsp+1Ch] [xbp-74h] BYREF
  int32_t v104; // [xsp+28h] [xbp-68h] BYREF
  int32_t id; // [xsp+2Ch] [xbp-64h] BYREF

  v9 = effectAssetData;
  if ( (byte_4D2B0DC & 1) == 0 )
  {
    sub_1C94098(&AtlasManager_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMasterData_EventPointGroupMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_TotalEventPointMaster___);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_TitleInfoEventLeagueVsGaugeEffect___);
    sub_1C94098(&UnityEngine_GameObject_TypeInfo);
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    sub_1C94098(&StringLiteral_19452/*"event_vs_gauge_title_"*/);
    sub_1C94098(&StringLiteral_19449/*"event_vs_frame"*/);
    sub_1C94098(&StringLiteral_19448/*"event_vs_back"*/);
    sub_1C94098(&StringLiteral_25068/*"white00"*/);
    sub_1C94098(&StringLiteral_19451/*"event_vs_gauge_bg"*/);
    sub_1C94098(&StringLiteral_17370/*"bit_vs_gauge_part"*/);
    sub_1C94098(&StringLiteral_19453/*"event_vs_split_line"*/);
    sub_1C94098(&StringLiteral_18092/*"clear00"*/);
    sub_1C94098(&StringLiteral_19457/*"event_vs_team_icon_"*/);
    sub_1C94098(&StringLiteral_1/*""*/);
    sub_1C94098(&StringLiteral_19450/*"event_vs_gauge_"*/);
    byte_4D2B0DC = 1;
  }
  if ( !eventPointEntity )
    return;
  this->fields.evPointEnt = eventPointEntity;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.evPointEnt,
    (int32_t)eventPointEntity,
    eventId,
    (int32_t)effectAssetData,
    (System_String_o *)isDispRestTime,
    (int32_t)method,
    v6,
    v7);
  this->fields.isDispRestTime = isDispRestTime;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D29C09 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29C09 = 1;
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
    MaskFade__Fadeout((MaskFade_o *)maskFade, 1, 0.0, 0, 0);
  }
  maskFade = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !maskFade )
    goto LABEL_120;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)maskFade,
                        (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_TotalEventPointMaster___);
  maskFade = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !maskFade )
    goto LABEL_120;
  v17 = DataManager__GetMasterData_object_(
          (DataManager_o *)maskFade,
          (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_EventPointGroupMaster___);
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
        v20 = maskFade;
        maskFade = TotalEventPointMaster__GetPoint(
                     (TotalEventPointMaster_o *)MasterData_object,
                     eventId,
                     eventPointEntity->fields.id,
                     group2->m_Items[0],
                     0);
        v24 = maskFade;
        if ( v20 == maskFade )
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
          v26 = this->fields.hpBarSlider;
          if ( !v26 )
            goto LABEL_120;
          if ( LODWORD(v26->max_length) <= 1 )
            goto LABEL_123;
          maskFade = (__int64)v26->m_Items[1];
          if ( !maskFade )
            goto LABEL_120;
          v27 = 0.5;
        }
        else
        {
          v60 = this->fields.hpBarSlider;
          if ( !v60 )
            goto LABEL_120;
          if ( !LODWORD(v60->max_length) )
            goto LABEL_123;
          maskFade = (__int64)v60->m_Items[0];
          if ( !maskFade )
            goto LABEL_120;
          v61 = (double)v20 / (double)(v24 + v20);
          v62 = 1.0 - v61;
          UIProgressBar__set_value((UIProgressBar_o *)maskFade, v62, 0);
          v63 = this->fields.hpBarSlider;
          if ( !v63 )
            goto LABEL_120;
          if ( LODWORD(v63->max_length) <= 1 )
            goto LABEL_123;
          maskFade = (__int64)v63->m_Items[1];
          if ( !maskFade )
            goto LABEL_120;
          v27 = v61;
        }
        UIProgressBar__set_value((UIProgressBar_o *)maskFade, v27, 0);
        hpBar = this->fields.hpBar;
        if ( !hpBar )
          goto LABEL_120;
        if ( LODWORD(hpBar->max_length) )
        {
          v65 = eventPointEntity->fields.group2;
          if ( !v65 )
            goto LABEL_120;
          if ( LODWORD(v65->max_length) )
          {
            v66 = hpBar->m_Items[0];
            id = v65->m_Items[0];
            v67 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id);
            v68 = System_String__Concat((Il2CppObject *)StringLiteral_19450/*"event_vs_gauge_"*/, v67, 0);
            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
            maskFade = AtlasManager__SetEventUI(v66, v68, 0);
            v69 = this->fields.hpBar;
            if ( !v69 )
              goto LABEL_120;
            if ( LODWORD(v69->max_length) > 1 )
            {
              v70 = eventPointEntity->fields.group1;
              if ( !v70 )
                goto LABEL_120;
              if ( LODWORD(v70->max_length) )
              {
                v71 = v69->m_Items[1];
                v104 = v70->m_Items[0];
                v72 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v104);
                v73 = System_String__Concat((Il2CppObject *)StringLiteral_19450/*"event_vs_gauge_"*/, v72, 0);
                maskFade = AtlasManager__SetEventUI(v71, v73, 0);
                groupIcon = this->fields.groupIcon;
                if ( !groupIcon )
                  goto LABEL_120;
                if ( LODWORD(groupIcon->max_length) )
                {
                  v75 = eventPointEntity->fields.group2;
                  if ( !v75 )
                    goto LABEL_120;
                  if ( LODWORD(v75->max_length) )
                  {
                    v76 = groupIcon->m_Items[0];
                    v103 = v75->m_Items[0];
                    v77 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v103);
                    v78 = System_String__Concat((Il2CppObject *)StringLiteral_19457/*"event_vs_team_icon_"*/, v77, 0);
                    maskFade = AtlasManager__SetEventUI(v76, v78, 0);
                    v79 = this->fields.groupIcon;
                    if ( !v79 )
                      goto LABEL_120;
                    if ( LODWORD(v79->max_length) > 1 )
                    {
                      v80 = eventPointEntity->fields.group1;
                      if ( !v80 )
                        goto LABEL_120;
                      if ( LODWORD(v80->max_length) )
                      {
                        v81 = v79->m_Items[1];
                        v102 = v80->m_Items[0];
                        v82 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v102);
                        v83 = System_String__Concat((Il2CppObject *)StringLiteral_19457/*"event_vs_team_icon_"*/, v82, 0);
                        maskFade = AtlasManager__SetEventUI(v81, v83, 0);
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
    sub_1C942F8(maskFade);
  }
  v18 = eventPointEntity->fields.group1;
  if ( !v18 )
    goto LABEL_120;
  v19 = 0;
  v20 = 0;
  while ( 1 )
  {
    max_length_low = LODWORD(v18->max_length);
    if ( (__int64)v19 >= (int)max_length_low )
      break;
    if ( v19 >= max_length_low )
      goto LABEL_123;
    if ( MasterData_object )
    {
      maskFade = TotalEventPointMaster__GetPoint(
                   (TotalEventPointMaster_o *)MasterData_object,
                   eventId,
                   eventPointEntity->fields.id,
                   v18->m_Items[v19],
                   0);
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
  if ( !LODWORD(v28->max_length) )
    goto LABEL_123;
  maskFade = (__int64)v28->m_Items[0];
  if ( !maskFade )
    goto LABEL_120;
  normaTotalPoint = eventPointEntity->fields.normaTotalPoint;
  v30 = (double)v20 / (double)normaTotalPoint;
  v31 = 1.0 - v30;
  UIProgressBar__set_value((UIProgressBar_o *)maskFade, v31, 0);
  v32 = this->fields.hpBarSlider;
  if ( !v32 )
    goto LABEL_120;
  if ( LODWORD(v32->max_length) <= 1 )
    goto LABEL_123;
  maskFade = (__int64)v32->m_Items[1];
  if ( !maskFade )
    goto LABEL_120;
  v33 = v30;
  UIProgressBar__set_value((UIProgressBar_o *)maskFade, v33, 0);
  v34 = this->fields.hpBar;
  if ( !v34 )
    goto LABEL_120;
  if ( !LODWORD(v34->max_length) )
    goto LABEL_123;
  v35 = eventPointEntity->fields.group2;
  if ( !v35 )
    goto LABEL_120;
  v101 = v9;
  if ( !LODWORD(v35->max_length) )
    goto LABEL_123;
  v36 = v34->m_Items[0];
  id = v35->m_Items[0];
  v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id);
  v38 = System_String__Concat((Il2CppObject *)StringLiteral_19450/*"event_vs_gauge_"*/, v37, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  maskFade = AtlasManager__SetEventUI(v36, v38, 0);
  v39 = this->fields.hpBar;
  if ( !v39 )
    goto LABEL_120;
  if ( LODWORD(v39->max_length) <= 1 )
    goto LABEL_123;
  v40 = eventPointEntity->fields.group1;
  if ( !v40 )
    goto LABEL_120;
  if ( !LODWORD(v40->max_length) )
    goto LABEL_123;
  v41 = v39->m_Items[1];
  v104 = v40->m_Items[0];
  maskFade = j_il2cpp_value_box_0(int_TypeInfo, &v104);
  v42 = eventPointEntity->fields.group1;
  if ( !v42 )
    goto LABEL_120;
  if ( LODWORD(v42->max_length) <= 1 )
    goto LABEL_123;
  v43 = (Il2CppObject *)maskFade;
  v103 = v42->m_Items[1];
  v44 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v103);
  v45 = System_String__Concat_64455760((Il2CppObject *)StringLiteral_19450/*"event_vs_gauge_"*/, v43, v44, 0);
  maskFade = AtlasManager__SetEventUI(v41, v45, 0);
  v46 = eventPointEntity->fields.group2;
  if ( !v46 )
    goto LABEL_120;
  if ( !LODWORD(v46->max_length) )
    goto LABEL_123;
  if ( !v17 )
    goto LABEL_120;
  maskFade = (__int64)EventPointGroupMaster__getEntity((EventPointGroupMaster_o *)v17, eventId, v46->m_Items[0], 0);
  v47 = eventPointEntity->fields.group1;
  if ( !v47 )
    goto LABEL_120;
  v48 = maskFade;
  v49 = 0;
  v50 = (Il2CppObject *)StringLiteral_1/*""*/;
  while ( 1 )
  {
    v51 = LODWORD(v47->max_length);
    if ( (__int64)v49 >= (int)v51 )
      break;
    if ( v49 >= v51 )
      goto LABEL_123;
    maskFade = (__int64)EventPointGroupMaster__getEntity((EventPointGroupMaster_o *)v17, eventId, v47->m_Items[v49], 0);
    if ( maskFade )
    {
      id = *(_DWORD *)(maskFade + 32);
      v52 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id);
      maskFade = (__int64)System_String__Concat(v50, v52, 0);
      v47 = eventPointEntity->fields.group1;
      v50 = (Il2CppObject *)maskFade;
      ++v49;
      if ( v47 )
        continue;
    }
    goto LABEL_120;
  }
  v53 = this->fields.groupIcon;
  if ( !v53 )
    goto LABEL_120;
  if ( !LODWORD(v53->max_length) )
    goto LABEL_123;
  if ( !v48 )
    goto LABEL_120;
  v54 = v53->m_Items[0];
  id = *(_DWORD *)(v48 + 32);
  v55 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id);
  v56 = System_String__Concat((Il2CppObject *)StringLiteral_19457/*"event_vs_team_icon_"*/, v55, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  maskFade = AtlasManager__SetEventUI(v54, v56, 0);
  v57 = this->fields.groupIcon;
  v24 = normaTotalPoint - v20;
  if ( !v57 )
LABEL_120:
    sub_1C942F0(maskFade, v13);
  if ( LODWORD(v57->max_length) <= 1 )
    goto LABEL_123;
  v58 = v57->m_Items[1];
  v59 = System_String__Concat_64417744((System_String_o *)StringLiteral_19457/*"event_vs_team_icon_"*/, (System_String_o *)v50, 0);
  maskFade = AtlasManager__SetEventUI(v58, v59, 0);
  v9 = v101;
LABEL_98:
  if ( !v9 )
    goto LABEL_120;
  Object_41261192 = AssetData__GetObject_41261192(v9, (System_String_o *)StringLiteral_17370/*"bit_vs_gauge_part"*/, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( Object_41261192 )
    v85 = (UnityEngine_GameObject_c *)Object_41261192->klass == UnityEngine_GameObject_TypeInfo
        ? (Il2CppObject *)Object_41261192
        : 0LL;
  else
    v85 = 0;
  maskFade = (__int64)UnityEngine_Object__Instantiate_object_(
                        v85,
                        (const MethodInfo_3229578 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !maskFade )
    goto LABEL_120;
  v86 = (UnityEngine_GameObject_o *)maskFade;
  gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)maskFade, 0);
  GameObjectExtensions__SafeSetParent_36804604(gameObject, this->fields.gaugeEffectPanel, 0);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v86,
                       (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventLeagueVsGaugeEffect___);
  maskFade = EventPointEntity__isBossBattle(eventPointEntity, 0);
  if ( !Component_object )
    goto LABEL_120;
  TitleInfoEventLeagueVsGaugeEffect__setup(
    (TitleInfoEventLeagueVsGaugeEffect_o *)Component_object,
    v20,
    v24,
    maskFade & 1,
    v89);
  maskSp = this->fields.maskSp;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetCommon(maskSp, 0);
  AtlasManager__SetCommon(this->fields.colliderSp, 0);
  maskFade = (__int64)this->fields.maskSp;
  if ( !maskFade )
    goto LABEL_120;
  UISprite__set_spriteName((UISprite_o *)maskFade, (System_String_o *)StringLiteral_25068/*"white00"*/, 0);
  maskFade = (__int64)this->fields.colliderSp;
  if ( !maskFade )
    goto LABEL_120;
  UISprite__set_spriteName((UISprite_o *)maskFade, (System_String_o *)StringLiteral_18092/*"clear00"*/, 0);
  this->fields.endTime = eventPointEntity->fields.endedAt;
  TitleInfoEventLeagueVsComponent__restTimeUpdate(this, v91);
  AtlasManager__SetEventUI(this->fields.baseWindow, (System_String_o *)StringLiteral_19451/*"event_vs_gauge_bg"*/, 0);
  AtlasManager__SetEventUI(this->fields.hpFrame, (System_String_o *)StringLiteral_19449/*"event_vs_frame"*/, 0);
  AtlasManager__SetEventUI(this->fields.hpBack, (System_String_o *)StringLiteral_19448/*"event_vs_back"*/, 0);
  modeName = this->fields.modeName;
  id = eventPointEntity->fields.id;
  v93 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id);
  v94 = System_String__Concat((Il2CppObject *)StringLiteral_19452/*"event_vs_gauge_title_"*/, v93, 0);
  AtlasManager__SetEventUI(modeName, v94, 0);
  maskFade = (__int64)this->fields.modeName;
  if ( !maskFade )
    goto LABEL_120;
  maskFade = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)maskFade + 840LL))(
               maskFade,
               *(_QWORD *)(*(_QWORD *)maskFade + 848LL));
  splitIcon = this->fields.splitIcon;
  if ( !splitIcon )
    goto LABEL_120;
  v96 = 0;
  while ( 1 )
  {
    v97 = LODWORD(splitIcon->max_length);
    if ( (__int64)v96 >= (int)v97 )
      break;
    if ( v96 >= v97 )
      goto LABEL_123;
    v98 = splitIcon->m_Items[v96];
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    maskFade = AtlasManager__SetEventUI(v98, (System_String_o *)StringLiteral_19453/*"event_vs_split_line"*/, 0);
    splitIcon = this->fields.splitIcon;
    ++v96;
    if ( !splitIcon )
      goto LABEL_120;
  }
  v99 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SetLocalPositionY(v99, -2.0, 0);
  v100 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  this->fields.originPos = GameObjectExtensions__GetLocalPosition(v100, 0);
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
  UnityEngine_Object_o *Object_41261192; // x0
  UnityEngine_GameObject_c **v22; // x22
  Il2CppObject *v23; // x0
  UnityEngine_GameObject_o *v24; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v26; // x5

  if ( (byte_4D2B0E0 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_TotalEventPointMaster___);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_TitleInfoEventLeagueVsGaugeFlashEffect___);
    sub_1C94098(&UnityEngine_GameObject_TypeInfo);
    sub_1C94098(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&StringLiteral_17368/*"bit_vs_gauge_flash"*/);
    byte_4D2B0E0 = 1;
  }
  evPointEnt = this->fields.evPointEnt;
  if ( evPointEnt )
  {
    if ( EventPointEntity__isBossBattle(evPointEnt, 0) )
    {
      ActionExtensions__Call(callback, 0);
      return;
    }
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_26;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_TotalEventPointMaster___);
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
      sub_1C942F8(Instance);
    v19 = (int64_t)Instance;
    Instance = (DataManager_o *)TotalEventPointMaster__GetPoint(v16, eventId, v17->fields.id, group2->m_Items[0], 0);
    if ( !effectAssetData )
      goto LABEL_26;
    v20 = (int64_t)Instance;
    Object_41261192 = AssetData__GetObject_41261192(effectAssetData, (System_String_o *)StringLiteral_17368/*"bit_vs_gauge_flash"*/, 0);
    v22 = (UnityEngine_GameObject_c **)Object_41261192;
    if ( UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      if ( Object_41261192 )
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
          v23 = 0;
LABEL_23:
        Instance = (DataManager_o *)UnityEngine_Object__Instantiate_object_(
                                      v23,
                                      (const MethodInfo_3229578 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( Instance )
        {
          v24 = (UnityEngine_GameObject_o *)Instance;
          gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)Instance, 0);
          GameObjectExtensions__SafeSetParent_36804604(gameObject, this->fields.gaugeEffectPanel, 0);
          Instance = (DataManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                        v24,
                                        (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventLeagueVsGaugeFlashEffect___);
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
        sub_1C942F0(Instance, v13);
      }
    }
    v23 = 0;
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
  __int64 v3; // x1
  UnityEngine_Behaviour_o *restTimeLabel; // x0
  UILabel_o *v5; // x20
  System_String_o *v6; // x0
  int64_t endTime; // x8
  System_String_o *v8; // x19
  Il2CppObject *RestTime3; // x0

  if ( (byte_4D2B0DD & 1) == 0 )
  {
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&StringLiteral_5746/*"EVENT_VS_GAUGE_REST_TIME"*/);
    byte_4D2B0DD = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( this->fields.endTime - NetworkManager__getTime(0) >= 1 && this->fields.isDispRestTime )
  {
    restTimeLabel = (UnityEngine_Behaviour_o *)this->fields.restTimeLabel;
    if ( restTimeLabel )
    {
      UnityEngine_Behaviour__set_enabled(restTimeLabel, 1, 0);
      v5 = this->fields.restTimeLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v6 = LocalizationManager__Get((System_String_o *)StringLiteral_5746/*"EVENT_VS_GAUGE_REST_TIME"*/, 0);
      endTime = this->fields.endTime;
      v8 = v6;
      RestTime3 = (Il2CppObject *)LocalizationManager__GetRestTime3(endTime, 0);
      restTimeLabel = (UnityEngine_Behaviour_o *)System_String__Format(v8, RestTime3, 0);
      if ( v5 )
      {
        UILabel__set_text(v5, (System_String_o *)restTimeLabel, 0);
        return;
      }
    }
LABEL_14:
    sub_1C942F0(restTimeLabel, v3);
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
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  struct TitleInfoEventLeagueVsComponent_o *_4__this; // x8

  v2 = this;
  if ( (byte_4D2B0E4 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    this = (TitleInfoEventLeagueVsComponent___c__DisplayClass36_0_o *)sub_1C94098(&Method_TitleInfoEventLeagueVsComponent___c__DisplayClass36_0__ResultEffect_b__1__);
    byte_4D2B0E4 = 1;
  }
  _9__1 = v2->fields.__9__1;
  effect = v2->fields.effect;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v2,
      Method_TitleInfoEventLeagueVsComponent___c__DisplayClass36_0__ResultEffect_b__1__,
      0);
    v2->fields.__9__1 = _9__1;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&v2->fields.__9__1, (int32_t)_9__1, v5, v6, v7, v8, v9, v10);
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this || !effect )
    sub_1C942F0(this, method);
  EventPointVsResultAction__Play(effect, _9__1, _4__this->fields.maskFade, 0.0, 0);
}


void TitleInfoEventLeagueVsComponent___c__DisplayClass36_0___ResultEffect_b__1(
        TitleInfoEventLeagueVsComponent___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *effect; // x0
  UnityEngine_Object_o *gameObject; // x20
  struct TitleInfoEventLeagueVsComponent_o *_4__this; // x8
  MaskFade_o *maskFade; // x20

  if ( (byte_4D2B0E5 & 1) == 0 )
  {
    sub_1C94098(&AvalonSceneManager_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2B0E5 = 1;
  }
  effect = (UnityEngine_Component_o *)this->fields.effect;
  if ( !effect )
    goto LABEL_12;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(effect, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_72110972(gameObject, 0);
  effect = (UnityEngine_Component_o *)this->fields.coll;
  if ( !effect )
    goto LABEL_12;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)effect, 0, 0);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  maskFade = _4__this->fields.maskFade;
  effect = (UnityEngine_Component_o *)AvalonSceneManager_TypeInfo;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !maskFade )
LABEL_12:
    sub_1C942F0(effect, method);
  MaskFade__Fadein(maskFade, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, this->fields.callback, 0);
}