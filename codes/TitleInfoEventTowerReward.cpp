void __fastcall TitleInfoEventTowerReward___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1
  struct TitleInfoEventTowerReward_StaticFields *v9; // x0
  System_Int32_array **v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct TitleInfoEventTowerReward_StaticFields *v17; // x0
  System_Int32_array **v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7

  if ( (byte_43502EA & 1) == 0 )
  {
    sub_B70694(&TitleInfoEventTowerReward_TypeInfo);
    sub_B70694(&StringLiteral_23124/*"tower_{0}_{1}"*/);
    sub_B70694(&StringLiteral_17016/*"bit_floor_reward"*/);
    sub_B70694(&StringLiteral_2715/*"Back/back{0:D5}"*/);
    byte_43502EA = 1;
  }
  static_fields = (BattleServantConfConponent_o *)TitleInfoEventTowerReward_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_23124/*"tower_{0}_{1}"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_23124/*"tower_{0}_{1}"*/;
  sub_B70630(static_fields, v8, v1, v2, v3, v4, v5, v6);
  v9 = TitleInfoEventTowerReward_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_2715/*"Back/back{0:D5}"*/;
  v9->SPRITE_NAME_BG = (struct System_String_o *)StringLiteral_2715/*"Back/back{0:D5}"*/;
  sub_B70630((BattleServantConfConponent_o *)&v9->SPRITE_NAME_BG, v10, v11, v12, v13, v14, v15, v16);
  v17 = TitleInfoEventTowerReward_TypeInfo->static_fields;
  v18 = (System_Int32_array **)StringLiteral_17016/*"bit_floor_reward"*/;
  v17->CLIP_NAME_TOWER_REWARD = (struct System_String_o *)StringLiteral_17016/*"bit_floor_reward"*/;
  sub_B70630((BattleServantConfConponent_o *)&v17->CLIP_NAME_TOWER_REWARD, v18, v19, v20, v21, v22, v23, v24);
}


void __fastcall TitleInfoEventTowerReward___ctor(TitleInfoEventTowerReward_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall TitleInfoEventTowerReward__Close(TitleInfoEventTowerReward_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  System_String_o *voiceName; // x21
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  struct System_String_o **p_voiceAssetName; // x20
  System_String_o *v13; // x21
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Action_o *v20; // x20
  const MethodInfo *v21; // x2

  if ( (byte_43502E7 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&SoundManager_TypeInfo);
    sub_B70694(&Method_TitleInfoEventTowerReward__Close_b__37_0__);
    byte_43502E7 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B7076C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  if ( this->fields.voicePlayer )
  {
    voiceName = this->fields.voiceName;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__stopVoice_23209504(voiceName, 0.0, 0LL);
    this->fields.voicePlayer = 0LL;
    sub_B70630((BattleServantConfConponent_o *)&this->fields.voicePlayer, 0LL, v6, v7, v8, v9, v10, v11);
  }
  p_voiceAssetName = &this->fields.voiceAssetName;
  if ( !System_String__IsNullOrEmpty(this->fields.voiceAssetName, 0LL) )
  {
    v13 = *p_voiceAssetName;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__releaseAudioAssetStorage(v13, 0LL);
    *p_voiceAssetName = 0LL;
    sub_B70630((BattleServantConfConponent_o *)&this->fields.voiceAssetName, 0LL, v14, v15, v16, v17, v18, v19);
  }
  *(_QWORD *)&this->fields.selectVoiceIndex = 0LL;
  this->fields.playCnt = 0;
  v20 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v20, (Il2CppObject *)this, Method_TitleInfoEventTowerReward__Close_b__37_0__, 0LL);
  TitleInfoEventTowerReward__StartRewardAction(this, v20, v21);
}


void __fastcall TitleInfoEventTowerReward__EndItemGetEffectAction(
        TitleInfoEventTowerReward_o *this,
        System_Action_o *afterDetail,
        const MethodInfo *method)
{
  if ( !afterDetail )
    sub_B7076C(this, 0LL);
  System_Action__Invoke(afterDetail, 0LL);
}


void __fastcall TitleInfoEventTowerReward__EndPlayVoice(TitleInfoEventTowerReward_o *this, const MethodInfo *method)
{
  TitleInfoEventTowerReward_o *v2; // x19
  int32_t playCnt; // w8
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceList; // x20
  __int64 selectVoiceIndex; // x21
  ServantVoiceData_array *v6; // x9
  ServantVoiceData_o *v7; // x8
  __int64 v8; // x0

  v2 = this;
  if ( (byte_43502E4 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    this = (TitleInfoEventTowerReward_o *)sub_B70694(&StringLiteral_10842/*"PlayVoice"*/);
    byte_43502E4 = 1;
  }
  playCnt = v2->fields.playCnt;
  if ( playCnt < v2->fields.maxPlayCnt )
  {
    voiceList = v2->fields.voiceList;
    if ( !voiceList )
      goto LABEL_12;
    selectVoiceIndex = v2->fields.selectVoiceIndex;
    if ( voiceList->fields._size <= (unsigned int)selectVoiceIndex )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
    v6 = voiceList->fields._items->m_Items[selectVoiceIndex];
    if ( !v6 )
      goto LABEL_12;
    if ( playCnt >= v6->max_length )
    {
      v8 = sub_B70798(this);
      sub_B70738(v8, 0LL);
    }
    v7 = v6->m_Items[playCnt];
    if ( !v7 )
LABEL_12:
      sub_B7076C(this, method);
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)v2,
      (System_String_o *)StringLiteral_10842/*"PlayVoice"*/,
      v7->fields.delay,
      0LL);
  }
}


void __fastcall TitleInfoEventTowerReward__OnLoadEndBG(TitleInfoEventTowerReward_o *this, const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  _DWORD *monitor; // x8
  int32_t v4; // w21
  int32_t v5; // w22
  UIStandFigureR_o *klass; // x20
  System_Action_o *v7; // x23

  v2 = (Il2CppObject *)this;
  if ( (byte_43502E0 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    this = (TitleInfoEventTowerReward_o *)sub_B70694(&Method_TitleInfoEventTowerReward_OnLoadEndSvt__);
    byte_43502E0 = 1;
  }
  monitor = v2[8].monitor;
  if ( !monitor
    || (v4 = monitor[11],
        v5 = monitor[12],
        klass = (UIStandFigureR_o *)v2[4].klass,
        v7 = (System_Action_o *)sub_B70764(System_Action_TypeInfo),
        System_Action___ctor(v7, v2, Method_TitleInfoEventTowerReward_OnLoadEndSvt__, 0LL),
        !klass) )
  {
    sub_B7076C(this, method);
  }
  UIStandFigureR__SetCharacter(klass, v4, v5, 1, 0, 0, v7, 0LL);
}


void __fastcall TitleInfoEventTowerReward__OnLoadEndSvt(TitleInfoEventTowerReward_o *this, const MethodInfo *method)
{
  TitleInfoEventTowerReward_o *v2; // x19
  struct EventTowerReward_o *eventTowerReward; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v4; // x20
  struct EventTowerReward_o *v5; // x8
  struct System_String_array *voiceIds; // x8
  TitleInfoEventTowerReward_o *v7; // x22
  __int64 v8; // x25
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x23
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  unsigned __int64 v16; // x23
  struct EventTowerReward_o *v17; // x8
  struct System_String_array *v18; // x9
  int size; // w24
  TitleInfoEventTowerReward_o *v20; // x22
  __int64 v21; // x25
  unsigned int v22; // w8
  __int64 v23; // x8
  __int64 v24; // x8
  struct EventTowerReward_o *v25; // x9
  struct EventTowerReward_o *v26; // x8
  System_Int32_array **VoiceAssetName_29794896; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_String_o *voiceAssetName; // x20
  System_Action_o *v35; // x21
  __int64 v36; // x0

  v2 = this;
  if ( (byte_43502E1 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_ServantVoiceMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_B70694(&Method_System_Collections_Generic_List_ServantVoiceData____AddRange__);
    sub_B70694(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_B70694(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    sub_B70694(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&SoundManager_TypeInfo);
    this = (TitleInfoEventTowerReward_o *)sub_B70694(&Method_TitleInfoEventTowerReward__OnLoadEndSvt_b__31_0__);
    byte_43502E1 = 1;
  }
  eventTowerReward = v2->fields.eventTowerReward;
  if ( !eventTowerReward )
    goto LABEL_42;
  if ( eventTowerReward->fields.voiceIds )
  {
    v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v4,
      (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    this = (TitleInfoEventTowerReward_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_42;
    this = (TitleInfoEventTowerReward_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                            (DataManager_o *)this,
                                            (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
    v5 = v2->fields.eventTowerReward;
    if ( !v5 )
      goto LABEL_42;
    voiceIds = v5->fields.voiceIds;
    if ( !voiceIds )
      goto LABEL_42;
    v7 = this;
    v8 = *(_QWORD *)&voiceIds->max_length;
    v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v9,
      (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    v2->fields.voiceList = (struct System_Collections_Generic_List_ServantVoiceData____o *)v9;
    sub_B70630(
      (BattleServantConfConponent_o *)&v2->fields.voiceList,
      (System_Int32_array **)v9,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
    if ( (int)v8 >= 1 )
    {
      v16 = 0LL;
      while ( 1 )
      {
        v17 = v2->fields.eventTowerReward;
        if ( !v17 )
          break;
        v18 = v17->fields.voiceIds;
        if ( !v18 )
          break;
        if ( v16 >= v18->max_length )
        {
LABEL_43:
          v36 = sub_B70798(this);
          sub_B70738(v36, 0LL);
        }
        if ( !v7 )
          break;
        this = (TitleInfoEventTowerReward_o *)ServantVoiceMaster__getEntity_29814688(
                                                (ServantVoiceMaster_o *)v7,
                                                14,
                                                v17->fields.svtId,
                                                v17->fields.limitCount,
                                                v18->m_Items[v16],
                                                0LL);
        if ( this )
        {
          if ( !v4 )
            break;
          System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
            (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v4,
            (System_Collections_Generic_IEnumerable_T__o *)this,
            (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_ServantVoiceData____AddRange__);
        }
        if ( (__int64)++v16 >= (int)v8 )
          goto LABEL_18;
      }
LABEL_42:
      sub_B7076C(this, method);
    }
LABEL_18:
    this = (TitleInfoEventTowerReward_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_42;
    this = (TitleInfoEventTowerReward_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                            (DataManager_o *)this,
                                            (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    if ( !v4 )
      goto LABEL_42;
    size = v4->fields._size;
    if ( size >= 1 )
    {
      v20 = this;
      v21 = 4LL;
      v22 = v4->fields._size;
      while ( 1 )
      {
        if ( v22 <= (int)v21 - 4 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
        v23 = *((_QWORD *)&v4->fields._items->obj.klass + v21);
        if ( !v23 )
          goto LABEL_42;
        if ( !*(_DWORD *)(v23 + 24) )
          goto LABEL_43;
        v24 = *(_QWORD *)(v23 + 32);
        if ( !v24 )
          goto LABEL_42;
        v25 = v2->fields.eventTowerReward;
        if ( !v25 || !v20 )
          goto LABEL_42;
        this = (TitleInfoEventTowerReward_o *)VoicePlayCondMaster__isVoicePlay(
                                                (VoicePlayCondMaster_o *)v20,
                                                v25->fields.svtId,
                                                *(System_String_o **)(v24 + 16),
                                                0LL,
                                                -1LL,
                                                -1,
                                                0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( v4->fields._size <= (unsigned int)(v21 - 4) )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
          if ( !v2->fields.voiceList )
            goto LABEL_42;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v2->fields.voiceList,
            *((EventMissionProgressRequest_Argument_ProgressData_o **)&v4->fields._items->obj.klass + v21),
            (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
        }
        if ( (int)v21 - 3 >= size )
          break;
        v22 = v4->fields._size;
        ++v21;
      }
    }
    v26 = v2->fields.eventTowerReward;
    if ( !v26 )
      goto LABEL_42;
    VoiceAssetName_29794896 = (System_Int32_array **)ServantVoiceEntity__getVoiceAssetName_29794896(
                                                       v26->fields.svtId,
                                                       0LL);
    v2->fields.voiceAssetName = (struct System_String_o *)VoiceAssetName_29794896;
    sub_B70630(
      (BattleServantConfConponent_o *)&v2->fields.voiceAssetName,
      VoiceAssetName_29794896,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
    voiceAssetName = v2->fields.voiceAssetName;
    v35 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(v35, (Il2CppObject *)v2, Method_TitleInfoEventTowerReward__OnLoadEndSvt_b__31_0__, 0LL);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__loadAudioAssetStorage(voiceAssetName, v35, 1, 0LL);
  }
}


void __fastcall TitleInfoEventTowerReward__OnTouchDisp(TitleInfoEventTowerReward_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *screenTouchInfo; // x0
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v5; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v7; // x21

  if ( (byte_43502E6 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&AvalonSceneManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&Method_TitleInfoEventTowerReward__OnTouchDisp_b__36_0__);
    byte_43502E6 = 1;
  }
  screenTouchInfo = (UnityEngine_Component_o *)this->fields.screenTouchInfo;
  if ( !screenTouchInfo )
    goto LABEL_10;
  screenTouchInfo = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(screenTouchInfo, 0LL);
  if ( !screenTouchInfo )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)screenTouchInfo, 0, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v5 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v5->static_fields->DEFAULT_FADE_TIME;
  v7 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_TitleInfoEventTowerReward__OnTouchDisp_b__36_0__, 0LL);
  if ( !Instance )
LABEL_10:
    sub_B7076C(screenTouchInfo, method);
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v7, 0LL);
  this->fields.state = 0;
}


void __fastcall TitleInfoEventTowerReward__Open(
        TitleInfoEventTowerReward_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  TerminalPramsManager_c *v10; // x0
  struct EventTowerReward_o *eventTowerReward_k__BackingField; // x1
  struct EventTowerReward_o **p_eventTowerReward; // x20
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  TerminalPramsManager_c *v19; // x0
  struct QuestRewardInfo_array *resultEventTowerRewardInfo_k__BackingField; // x1
  struct EventTowerReward_o *eventTowerReward; // x8
  struct ScreenTouchInformationComponent_o **p_screenTouchInfo; // x22
  UnityEngine_Object_o *screenTouchInfo; // x23
  __int64 v24; // x1
  CommonUI_o *Instance; // x23
  __int64 transform; // x0
  System_Int32_array **Component_srcLineSprite; // x0
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
  __int64 v40; // x21
  TitleInfoEventTowerReward_c *v41; // x8
  int effectId; // w23
  System_String_o *CLIP_NAME_TOWER_REWARD; // x22
  System_String_o *FloorRewardPrefabName; // x0
  TitleInfoEventTowerReward_c *v45; // x0
  __int64 v46; // x2
  struct EventTowerReward_o *v47; // x8
  Il2CppObject *v48; // x0
  System_String_o *v49; // x0
  UnityEngine_Object_o *simpleAnimation; // x23
  System_String_o *v51; // x22
  __int64 v52; // x8
  __int64 v53; // x22
  unsigned __int64 v54; // x10
  SimpleAnimation_State_c **v55; // x11
  __int64 v56; // x0
  UnityEngine_Object_o *animation; // x23
  int towerId; // w8
  unsigned int v59; // w22
  struct System_Collections_Generic_List_UIFont__o *floorNumFontList; // x23
  int size; // w9
  UnityEngine_Object_o *v62; // x22
  struct EventTowerReward_o *v63; // x8
  struct System_Collections_Generic_List_UIFont__o *v64; // x23
  int v65; // w24
  struct EventTowerReward_o *v66; // x8
  UILabel_o *floorLabel; // x22
  __int64 v68; // x2
  UISprite_o *nameSprite; // x21
  System_String_o *v70; // x22
  __int64 v71; // x2
  Il2CppObject *v72; // x23
  Il2CppObject *v73; // x0
  __int64 v74; // x2
  int v75; // w23
  __int64 v76; // x21
  System_Text_StringBuilder_o *v77; // x22
  __int64 v78; // x26
  __int64 v79; // x27
  __int64 v80; // x8
  System_String_o *v81; // x0
  UILabel_o *rewardLabel; // x23
  _DWORD *v83; // x8
  int32_t v84; // w21
  struct EventTowerReward_o *v85; // x8
  System_String_o *SPRITE_NAME_BG; // x20
  Il2CppObject *v87; // x0
  System_String_o *v88; // x0
  ExUITexture_o *bgSprite; // x20
  System_String_o *v90; // x21
  System_Action_o *v91; // x22
  __int64 v92; // x0
  int32_t v93; // [xsp+0h] [xbp-70h] BYREF
  int eventId; // [xsp+4h] [xbp-6Ch] BYREF
  System_String_o *countText; // [xsp+8h] [xbp-68h] BYREF
  System_String_o *nameText; // [xsp+10h] [xbp-60h] BYREF
  WarEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_43502DF & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_EventTowerMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_B70694(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_UIFont__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_UIFont__get_Item__);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&SimpleAnimation_State_TypeInfo);
    sub_B70694(&System_Text_StringBuilder_TypeInfo);
    sub_B70694(&TerminalPramsManager_TypeInfo);
    sub_B70694(&Method_TitleInfoEventTowerReward_OnLoadEndBG__);
    sub_B70694(&TitleInfoEventTowerReward_TypeInfo);
    sub_B70694(&StringLiteral_26/*"\n"*/);
    sub_B70694(&StringLiteral_5830/*"EVENT_TOWER_REWARD_GET"*/);
    sub_B70694(&StringLiteral_11064/*"QUEST_CLEAR_COSTUME_GET"*/);
    sub_B70694(&StringLiteral_16127/*"_"*/);
    sub_B70694(&StringLiteral_5831/*"EVENT_TOWER_REWARD_GET_2"*/);
    byte_43502DF = 1;
  }
  nameText = 0LL;
  entity = 0LL;
  countText = 0LL;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_434DEC4 )
  {
    sub_B70694(&TerminalPramsManager_TypeInfo);
    byte_434DEC4 = 1;
  }
  v10 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v10 = TerminalPramsManager_TypeInfo;
  }
  eventTowerReward_k__BackingField = v10->static_fields->_eventTowerReward_k__BackingField;
  this->fields.eventTowerReward = eventTowerReward_k__BackingField;
  p_eventTowerReward = &this->fields.eventTowerReward;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.eventTowerReward,
    (System_Int32_array **)eventTowerReward_k__BackingField,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !byte_434EFD1 )
  {
    sub_B70694(&TerminalPramsManager_TypeInfo);
    byte_434EFD1 = 1;
  }
  v19 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v19 = TerminalPramsManager_TypeInfo;
  }
  resultEventTowerRewardInfo_k__BackingField = v19->static_fields->_resultEventTowerRewardInfo_k__BackingField;
  this->fields.resultEventTowerRewardInfo = resultEventTowerRewardInfo_k__BackingField;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.resultEventTowerRewardInfo,
    (System_Int32_array **)resultEventTowerRewardInfo_k__BackingField,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  eventTowerReward = this->fields.eventTowerReward;
  if ( !eventTowerReward || eventTowerReward->fields.eventId <= 0 )
  {
    ActionExtensions__Call(callback, 0LL);
    return;
  }
  p_screenTouchInfo = &this->fields.screenTouchInfo;
  screenTouchInfo = (UnityEngine_Object_o *)this->fields.screenTouchInfo;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(screenTouchInfo, 0LL, 0LL) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !Instance )
      goto LABEL_146;
    transform = (__int64)CommonUI__CreateScreeenTouchInfo(Instance, (UnityEngine_Transform_o *)transform, 0, 0LL);
    if ( !transform )
      goto LABEL_146;
    Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                       (UnityEngine_GameObject_o *)transform,
                                                       (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    *p_screenTouchInfo = (struct ScreenTouchInformationComponent_o *)Component_srcLineSprite;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.screenTouchInfo,
      Component_srcLineSprite,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
  }
  transform = (__int64)*p_screenTouchInfo;
  if ( !*p_screenTouchInfo )
    goto LABEL_146;
  transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
  if ( !transform )
    goto LABEL_146;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
  transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_146;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0LL);
  transform = (__int64)this->fields.standFigure;
  if ( !transform )
    goto LABEL_146;
  transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
  if ( !transform )
    goto LABEL_146;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
  this->fields.endCallback = callback;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.endCallback,
    (System_Int32_array **)callback,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  this->fields.state = 0;
  transform = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !transform )
    goto LABEL_146;
  transform = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                         (DataManager_o *)transform,
                         (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventTowerMaster___);
  if ( !*p_eventTowerReward || !transform )
    goto LABEL_146;
  transform = (__int64)EventTowerMaster__GetEntity(
                         (EventTowerMaster_o *)transform,
                         (*p_eventTowerReward)->fields.eventId,
                         (*p_eventTowerReward)->fields.towerId,
                         0LL);
  v40 = transform;
  v41 = TitleInfoEventTowerReward_TypeInfo;
  if ( (BYTE3(TitleInfoEventTowerReward_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventTowerReward_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventTowerReward_TypeInfo);
    v41 = TitleInfoEventTowerReward_TypeInfo;
  }
  if ( !*p_eventTowerReward
    || (effectId = (*p_eventTowerReward)->fields.effectId,
        CLIP_NAME_TOWER_REWARD = v41->static_fields->CLIP_NAME_TOWER_REWARD,
        (transform = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (transform = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                               (DataManager_o *)transform,
                               (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventDetailMaster___),
        !*p_eventTowerReward)
    || !transform )
  {
LABEL_146:
    sub_B7076C(transform, v24);
  }
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)transform,
         &entity,
         (*p_eventTowerReward)->fields.eventId,
         (const MethodInfo_21C049C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
    transform = (__int64)entity;
    if ( !entity )
      goto LABEL_146;
    FloorRewardPrefabName = EventDetailEntity__GetFloorRewardPrefabName((EventDetailEntity_o *)entity, 0LL);
    if ( FloorRewardPrefabName )
      CLIP_NAME_TOWER_REWARD = FloorRewardPrefabName;
  }
  v45 = TitleInfoEventTowerReward_TypeInfo;
  if ( (BYTE3(TitleInfoEventTowerReward_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventTowerReward_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventTowerReward_TypeInfo);
    v45 = TitleInfoEventTowerReward_TypeInfo;
  }
  transform = System_String__op_Equality(CLIP_NAME_TOWER_REWARD, v45->static_fields->CLIP_NAME_TOWER_REWARD, 0LL);
  if ( (transform & 1) != 0 )
  {
    v47 = *p_eventTowerReward;
    if ( !*p_eventTowerReward )
      goto LABEL_146;
    if ( v47->fields.towerId == 2 && v47->fields.floor == 100 )
      effectId = 3;
  }
  eventId = effectId;
  v48 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId, v46);
  v49 = System_String__Concat_44837872(
          (Il2CppObject *)CLIP_NAME_TOWER_REWARD,
          (Il2CppObject *)StringLiteral_16127/*"_"*/,
          v48,
          0LL);
  simpleAnimation = (UnityEngine_Object_o *)this->fields.simpleAnimation;
  v51 = v49;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(simpleAnimation, 0LL, 0LL) )
  {
    transform = (__int64)this->fields.simpleAnimation;
    if ( !transform )
      goto LABEL_146;
    transform = (__int64)SimpleAnimation__get_Item((SimpleAnimation_o *)transform, v51, 0LL);
    if ( !transform )
      goto LABEL_146;
    v52 = *(_QWORD *)transform;
    v53 = transform;
    if ( *(_WORD *)(*(_QWORD *)transform + 298LL) )
    {
      v54 = 0LL;
      v55 = (SimpleAnimation_State_c **)(*(_QWORD *)(v52 + 176) + 8LL);
      while ( *(v55 - 1) != SimpleAnimation_State_TypeInfo )
      {
        ++v54;
        v55 += 2;
        if ( v54 >= *(unsigned __int16 *)(*(_QWORD *)transform + 298LL) )
          goto LABEL_62;
      }
      v56 = v52 + 16LL * (*(_DWORD *)v55 + 14) + 312;
    }
    else
    {
LABEL_62:
      v56 = sub_B08590(transform, SimpleAnimation_State_TypeInfo, 14LL);
    }
    transform = (*(__int64 (__fastcall **)(__int64, _QWORD))v56)(v53, *(_QWORD *)(v56 + 8));
    if ( !this->fields.simpleAnimation )
      goto LABEL_146;
    SimpleAnimation__set_clip(this->fields.simpleAnimation, (UnityEngine_AnimationClip_o *)transform, 0LL);
    transform = (__int64)this->fields.simpleAnimation;
    if ( !transform )
      goto LABEL_146;
    goto LABEL_75;
  }
  animation = (UnityEngine_Object_o *)this->fields.animation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  transform = UnityEngine_Object__op_Inequality(animation, 0LL, 0LL);
  if ( (transform & 1) != 0 )
  {
    transform = (__int64)this->fields.animation;
    if ( !transform )
      goto LABEL_146;
    transform = (__int64)UnityEngine_Animation__GetClip((UnityEngine_Animation_o *)transform, v51, 0LL);
    if ( !this->fields.animation )
      goto LABEL_146;
    UnityEngine_Animation__set_clip(this->fields.animation, (UnityEngine_AnimationClip_o *)transform, 0LL);
    transform = (__int64)this->fields.animation;
    if ( !transform )
      goto LABEL_146;
LABEL_75:
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)transform, 0, 0LL);
  }
  if ( !*p_eventTowerReward )
    goto LABEL_146;
  towerId = (*p_eventTowerReward)->fields.towerId;
  v59 = towerId - 1;
  if ( towerId >= 1 )
  {
    floorNumFontList = this->fields.floorNumFontList;
    if ( !floorNumFontList )
      goto LABEL_146;
    size = floorNumFontList->fields._size;
    if ( size >= towerId )
    {
      if ( size <= v59 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
      v62 = (UnityEngine_Object_o *)floorNumFontList->fields._items->m_Items[v59];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      transform = UnityEngine_Object__op_Inequality(v62, 0LL, 0LL);
      if ( (transform & 1) != 0 )
      {
        v63 = this->fields.eventTowerReward;
        if ( !v63 )
          goto LABEL_146;
        v64 = this->fields.floorNumFontList;
        if ( !v64 )
          goto LABEL_146;
        v65 = v63->fields.towerId - 1;
        if ( v64->fields._size <= (unsigned int)v65 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
        if ( !this->fields.floorLabel )
          goto LABEL_146;
        UILabel__set_font(this->fields.floorLabel, v64->fields._items->m_Items[v65], 0LL);
      }
    }
  }
  v66 = this->fields.eventTowerReward;
  if ( !v66 )
    goto LABEL_146;
  floorLabel = this->fields.floorLabel;
  transform = (__int64)System_Int32__ToString((int)v66 + 24, 0LL);
  if ( !floorLabel )
    goto LABEL_146;
  UILabel__set_text(floorLabel, (System_String_o *)transform, 0LL);
  if ( v40 )
  {
    transform = (__int64)TitleInfoEventTowerReward_TypeInfo;
    nameSprite = this->fields.nameSprite;
    if ( (BYTE3(TitleInfoEventTowerReward_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TitleInfoEventTowerReward_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventTowerReward_TypeInfo);
      transform = (__int64)TitleInfoEventTowerReward_TypeInfo;
    }
    if ( !*p_eventTowerReward )
      goto LABEL_146;
    v70 = **(System_String_o ***)(transform + 184);
    eventId = (*p_eventTowerReward)->fields.eventId;
    transform = j_il2cpp_value_box_0(int_TypeInfo, &eventId, v68);
    if ( !*p_eventTowerReward )
      goto LABEL_146;
    v72 = (Il2CppObject *)transform;
    v93 = (*p_eventTowerReward)->fields.towerId;
    v73 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v93, v71);
    transform = (__int64)System_String__Format_44753704(v70, v72, v73, 0LL);
    if ( !nameSprite )
      goto LABEL_146;
    UISprite__set_spriteName(nameSprite, (System_String_o *)transform, 0LL);
    transform = (__int64)this->fields.nameSprite;
    if ( !transform )
      goto LABEL_146;
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)transform + 840LL))(
      transform,
      *(_QWORD *)(*(_QWORD *)transform + 848LL));
  }
  transform = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !transform )
    goto LABEL_146;
  transform = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                         (DataManager_o *)transform,
                         (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_GiftMaster___);
  if ( !*p_eventTowerReward )
    goto LABEL_146;
  if ( !transform )
    goto LABEL_146;
  transform = (__int64)GiftMaster__GetGiftListById((GiftMaster_o *)transform, (*p_eventTowerReward)->fields.giftId, 0LL);
  if ( !transform )
    goto LABEL_146;
  v75 = *(_DWORD *)(transform + 24);
  v76 = transform;
  if ( v75 >= 1 )
  {
    v77 = (System_Text_StringBuilder_o *)sub_B70764(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v77, 0LL);
    v78 = 0LL;
    v79 = v76 + 32;
    while ( 1 )
    {
      if ( (_DWORD)v78 )
      {
        if ( !v77 )
          goto LABEL_146;
        transform = (__int64)System_Text_StringBuilder__Append_42601980(v77, (System_String_o *)StringLiteral_26/*"\n"*/, 0LL);
      }
      if ( (unsigned int)v78 >= *(_DWORD *)(v76 + 24) )
        goto LABEL_147;
      transform = *(_QWORD *)(v79 + 8 * v78);
      if ( !transform )
        goto LABEL_146;
      GiftEntity__GetInfo((GiftEntity_o *)transform, &nameText, &countText, 0LL);
      if ( (unsigned int)v78 >= *(_DWORD *)(v76 + 24) )
        goto LABEL_147;
      v80 = *(_QWORD *)(v79 + 8 * v78);
      if ( !v80 )
        goto LABEL_146;
      if ( *(_DWORD *)(v80 + 20) == 9 )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v81 = (System_String_o *)StringLiteral_11064/*"QUEST_CLEAR_COSTUME_GET"*/;
      }
      else
      {
        if ( !System_String__IsNullOrEmpty(countText, 0LL) )
        {
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          transform = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_5830/*"EVENT_TOWER_REWARD_GET"*/, 0LL);
          if ( !v77 )
            goto LABEL_146;
          transform = (__int64)System_Text_StringBuilder__AppendFormat_42608532(
                                 v77,
                                 (System_String_o *)transform,
                                 (Il2CppObject *)nameText,
                                 (Il2CppObject *)countText,
                                 0LL);
          goto LABEL_133;
        }
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v81 = (System_String_o *)StringLiteral_5831/*"EVENT_TOWER_REWARD_GET_2"*/;
      }
      transform = (__int64)LocalizationManager__Get(v81, 0LL);
      if ( !v77 )
        goto LABEL_146;
      transform = (__int64)System_Text_StringBuilder__AppendFormat(
                             v77,
                             (System_String_o *)transform,
                             (Il2CppObject *)nameText,
                             0LL);
LABEL_133:
      if ( (int)++v78 >= v75 )
      {
        rewardLabel = this->fields.rewardLabel;
        transform = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v77->klass->vtable._3_ToString.method)(
                      v77,
                      v77->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
        if ( rewardLabel )
        {
          UILabel__set_text(rewardLabel, (System_String_o *)transform, 0LL);
          if ( !*(_DWORD *)(v76 + 24) )
          {
LABEL_147:
            v92 = sub_B70798(transform);
            sub_B70738(v92, 0LL);
          }
          v83 = *(_DWORD **)(v76 + 32);
          if ( v83 )
          {
            transform = (__int64)this->fields.itemIcon;
            if ( transform )
            {
              v84 = v83[5];
              ItemIconComponent__SetGift((ItemIconComponent_o *)transform, v84, v83[6], v83[7], 0, 0LL);
              transform = (__int64)this->fields.imageFrame;
              if ( transform )
              {
                UnityEngine_GameObject__SetActive(
                  (UnityEngine_GameObject_o *)transform,
                  ((unsigned int)(v84 - 1) < 0xB) & (0x461u >> (v84 - 1)),
                  0LL);
                break;
              }
            }
          }
        }
        goto LABEL_146;
      }
    }
  }
  transform = (__int64)TitleInfoEventTowerReward_TypeInfo;
  if ( (BYTE3(TitleInfoEventTowerReward_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventTowerReward_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventTowerReward_TypeInfo);
  }
  v85 = *p_eventTowerReward;
  if ( !*p_eventTowerReward )
    goto LABEL_146;
  SPRITE_NAME_BG = TitleInfoEventTowerReward_TypeInfo->static_fields->SPRITE_NAME_BG;
  eventId = v85->fields.bgId;
  v87 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId, v74);
  v88 = System_String__Format(SPRITE_NAME_BG, v87, 0LL);
  bgSprite = this->fields.bgSprite;
  v90 = v88;
  v91 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v91, (Il2CppObject *)this, Method_TitleInfoEventTowerReward_OnLoadEndBG__, 0LL);
  if ( !bgSprite )
    goto LABEL_146;
  ExUITexture__SetAssetImage(bgSprite, v90, v91, 0LL);
}


void __fastcall TitleInfoEventTowerReward__PlayVoice(TitleInfoEventTowerReward_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  TitleInfoEventTowerReward_o *v8; // x19
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceList; // x20
  __int64 selectVoiceIndex; // x21
  ServantVoiceData_array *v11; // x8
  __int64 playCnt; // x9
  ServantVoiceData_o *v13; // x20
  System_Int32_array **id; // x1
  struct EventTowerReward_o *eventTowerReward; // x8
  System_String_o *VoiceAssetName_29794896; // x0
  System_String_o *voiceName; // x21
  System_String_o *v18; // x22
  SeManager_c *v19; // x8
  float DEFAULT_VOLUME; // s8
  System_Action_o *v21; // x23
  System_Int32_array **v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  UIStandFigureR_o *standFigure; // x21
  int32_t face; // w22
  float FadeTime; // s0
  __int64 v32; // x0

  v8 = this;
  if ( (byte_43502E3 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    sub_B70694(&SeManager_TypeInfo);
    sub_B70694(&SoundManager_TypeInfo);
    this = (TitleInfoEventTowerReward_o *)sub_B70694(&Method_TitleInfoEventTowerReward_EndPlayVoice__);
    byte_43502E3 = 1;
  }
  voiceList = v8->fields.voiceList;
  if ( !voiceList )
    goto LABEL_18;
  selectVoiceIndex = v8->fields.selectVoiceIndex;
  if ( voiceList->fields._size <= (unsigned int)selectVoiceIndex )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
  v11 = voiceList->fields._items->m_Items[selectVoiceIndex];
  if ( !v11 )
    goto LABEL_18;
  playCnt = v8->fields.playCnt;
  if ( (unsigned int)playCnt >= v11->max_length )
  {
    v32 = sub_B70798(this);
    sub_B70738(v32, 0LL);
  }
  v13 = v11->m_Items[playCnt];
  if ( !v13 )
    goto LABEL_18;
  id = (System_Int32_array **)v13->fields.id;
  v8->fields.voiceName = (struct System_String_o *)id;
  sub_B70630((BattleServantConfConponent_o *)&v8->fields.voiceName, id, v2, v3, v4, v5, v6, v7);
  eventTowerReward = v8->fields.eventTowerReward;
  if ( !eventTowerReward )
    goto LABEL_18;
  VoiceAssetName_29794896 = ServantVoiceEntity__getVoiceAssetName_29794896(eventTowerReward->fields.svtId, 0LL);
  voiceName = v8->fields.voiceName;
  v18 = VoiceAssetName_29794896;
  v19 = SeManager_TypeInfo;
  if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    v19 = SeManager_TypeInfo;
  }
  DEFAULT_VOLUME = v19->static_fields->DEFAULT_VOLUME;
  v21 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v21, (Il2CppObject *)v8, Method_TitleInfoEventTowerReward_EndPlayVoice__, 0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  v22 = (System_Int32_array **)SoundManager__playVoice_23183232(v18, voiceName, DEFAULT_VOLUME, v21, 0LL);
  v8->fields.voicePlayer = (struct SePlayer_o *)v22;
  sub_B70630((BattleServantConfConponent_o *)&v8->fields.voicePlayer, v22, v23, v24, v25, v26, v27, v28);
  standFigure = v8->fields.standFigure;
  face = v13->fields.face;
  FadeTime = ServantVoiceData__GetFadeTime(v13, 0LL);
  if ( !standFigure )
LABEL_18:
    sub_B7076C(this, method);
  UIStandFigureR__SetFace(standFigure, face, FadeTime, 0LL);
  ++v8->fields.playCnt;
}


void __fastcall TitleInfoEventTowerReward__StartRewardAction(
        TitleInfoEventTowerReward_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  System_Action_o *v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_Action_o **v14; // x22
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  QuestRewardInfo_array *resultEventTowerRewardInfo; // x20
  System_Action_o *v22; // x22
  const MethodInfo *v23; // x4

  if ( (byte_43502E8 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_TitleInfoEventTowerReward___c__DisplayClass38_0__StartRewardAction_b__0__);
    sub_B70694(&TitleInfoEventTowerReward___c__DisplayClass38_0_TypeInfo);
    byte_43502E8 = 1;
  }
  v5 = sub_B70764(TitleInfoEventTowerReward___c__DisplayClass38_0_TypeInfo);
  TitleInfoEventTowerReward___c__DisplayClass38_0___ctor((TitleInfoEventTowerReward___c__DisplayClass38_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_8;
  *(_QWORD *)(v5 + 16) = this;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = callback;
  v14 = (System_Action_o **)(v5 + 24);
  sub_B70630((BattleServantConfConponent_o *)(v5 + 24), (System_Int32_array **)callback, v15, v16, v17, v18, v19, v20);
  resultEventTowerRewardInfo = this->fields.resultEventTowerRewardInfo;
  if ( resultEventTowerRewardInfo )
  {
    v22 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(
      v22,
      (Il2CppObject *)v5,
      Method_TitleInfoEventTowerReward___c__DisplayClass38_0__StartRewardAction_b__0__,
      0LL);
    TitleInfoEventTowerReward__StartRewardAction_sub(this, resultEventTowerRewardInfo, 0, v22, v23);
    return;
  }
  v6 = *v14;
  if ( !*v14 )
LABEL_8:
    sub_B7076C(v6, v7);
  System_Action__Invoke(v6, 0LL);
}


void __fastcall TitleInfoEventTowerReward__StartRewardAction_sub(
        TitleInfoEventTowerReward_o *this,
        QuestRewardInfo_array *rewardInfoList,
        int32_t idx,
        System_Action_o *subEndAction,
        const MethodInfo *method)
{
  System_Int32_array **v9; // x1
  __int64 v10; // x19
  System_Action_o *IsServant_27751796; // x0
  __int64 v12; // x1
  WarEntity_o *Entity; // x0
  WarEntity_o *v14; // x19
  __int64 v15; // x26
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Action_o **v28; // x20
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  __int64 v41; // x8
  __int64 v42; // x9
  int v43; // w10
  SummonAssetManager_o *Instance; // x19
  System_Action_o *v45; // x20
  __int64 v46; // x0

  while ( 1 )
  {
    if ( (byte_43502E9 & 1) == 0 )
    {
      sub_B70694(&System_Action_TypeInfo);
      sub_B70694(&Method_DataManager_GetMasterData_ServantMaster___);
      sub_B70694(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      sub_B70694(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
      sub_B70694(&Method_TitleInfoEventTowerReward___c__DisplayClass39_0__StartRewardAction_sub_b__0__);
      sub_B70694(&TitleInfoEventTowerReward___c__DisplayClass39_0_TypeInfo);
      byte_43502E9 = 1;
    }
    v15 = sub_B70764(TitleInfoEventTowerReward___c__DisplayClass39_0_TypeInfo);
    TitleInfoEventTowerReward___c__DisplayClass39_0___ctor(
      (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)v15,
      0LL);
    if ( !v15 )
      goto LABEL_24;
    *(_QWORD *)(v15 + 24) = this;
    sub_B70630((BattleServantConfConponent_o *)(v15 + 24), (System_Int32_array **)this, v16, v17, v18, v19, v20, v21);
    *(_QWORD *)(v15 + 32) = rewardInfoList;
    sub_B70630(
      (BattleServantConfConponent_o *)(v15 + 32),
      (System_Int32_array **)rewardInfoList,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
    *(_QWORD *)(v15 + 48) = subEndAction;
    v28 = (System_Action_o **)(v15 + 48);
    *(_DWORD *)(v15 + 40) = idx;
    sub_B70630(
      (BattleServantConfConponent_o *)(v15 + 48),
      (System_Int32_array **)subEndAction,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
    v41 = *(_QWORD *)(v15 + 32);
    if ( !v41 )
      goto LABEL_24;
    v42 = *(int *)(v15 + 40);
    v43 = *(_DWORD *)(v41 + 24);
    if ( (int)v42 >= v43 )
    {
      IsServant_27751796 = *v28;
      if ( *v28 )
      {
        System_Action__Invoke(IsServant_27751796, 0LL);
        return;
      }
LABEL_24:
      sub_B7076C(IsServant_27751796, v12);
    }
    if ( (unsigned int)v42 >= v43 )
    {
      v46 = sub_B70798(IsServant_27751796);
      sub_B70738(v46, 0LL);
    }
    v9 = *(System_Int32_array ***)(v41 + 8 * v42 + 32);
    *(_QWORD *)(v15 + 16) = v9;
    v10 = v15 + 16;
    sub_B70630((BattleServantConfConponent_o *)(v15 + 16), v9, v35, v36, v37, v38, v39, v40);
    if ( !*(_QWORD *)(v15 + 16) )
      goto LABEL_24;
    IsServant_27751796 = (System_Action_o *)Gift__IsServant_27751796(*(_DWORD *)(*(_QWORD *)(v15 + 16) + 16LL), 0LL);
    if ( ((unsigned __int8)IsServant_27751796 & 1) == 0 )
      break;
    IsServant_27751796 = (System_Action_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !IsServant_27751796 )
      goto LABEL_24;
    IsServant_27751796 = (System_Action_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)IsServant_27751796,
                                              (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !*(_QWORD *)v10 || !IsServant_27751796 )
      goto LABEL_24;
    Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               (DataMasterBase_WarMaster__WarEntity__int__o *)IsServant_27751796,
               *(_DWORD *)(*(_QWORD *)v10 + 20LL),
               (const MethodInfo_21C0440 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( Entity )
    {
      v14 = Entity;
      if ( !SvtType__IsCombineMaterial(*(&Entity->fields.startType + 1), 0LL)
        && !SvtType__IsStatusUp(*(&v14->fields.startType + 1), 0LL) )
      {
        goto LABEL_22;
      }
    }
LABEL_14:
    rewardInfoList = *(QuestRewardInfo_array **)(v15 + 32);
    subEndAction = *(System_Action_o **)(v15 + 48);
    idx = *(_DWORD *)(v15 + 40) + 1;
  }
  if ( !*(_QWORD *)v10 )
    goto LABEL_24;
  if ( !Gift__IsCommandCode_27752192(*(_DWORD *)(*(_QWORD *)v10 + 16LL), 0LL) )
    goto LABEL_14;
LABEL_22:
  Instance = (SummonAssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  v45 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(
    v45,
    (Il2CppObject *)v15,
    Method_TitleInfoEventTowerReward___c__DisplayClass39_0__StartRewardAction_sub_b__0__,
    0LL);
  if ( !Instance )
    goto LABEL_24;
  SummonAssetManager__LoadSummonAssets(Instance, v45, 0LL);
}


void __fastcall TitleInfoEventTowerReward__StartVoice(TitleInfoEventTowerReward_o *this, const MethodInfo *method)
{
  TitleInfoEventTowerReward_o *v2; // x19
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceList; // x8
  System_Random_o *v4; // x20
  struct System_Collections_Generic_List_ServantVoiceData____o *v5; // x8
  struct System_Collections_Generic_List_ServantVoiceData____o *v6; // x21
  ServantVoiceData_array *v7; // x8

  v2 = this;
  if ( (byte_43502E2 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    this = (TitleInfoEventTowerReward_o *)sub_B70694(&System_Random_TypeInfo);
    byte_43502E2 = 1;
  }
  voiceList = v2->fields.voiceList;
  if ( !voiceList )
    goto LABEL_13;
  if ( voiceList->fields._size )
  {
    v4 = (System_Random_o *)sub_B70764(System_Random_TypeInfo);
    System_Random___ctor(v4, 0LL);
    v5 = v2->fields.voiceList;
    if ( v5 )
    {
      if ( v4 )
      {
        this = (TitleInfoEventTowerReward_o *)((__int64 (__fastcall *)(System_Random_o *, _QWORD, Il2CppMethodPointer))v4->klass->vtable._7_Next.method)(
                                                v4,
                                                (unsigned int)v5->fields._size,
                                                v4->klass->vtable._8_NextDouble.methodPtr);
        v6 = v2->fields.voiceList;
        v2->fields.selectVoiceIndex = (int)this;
        if ( v6 )
        {
          if ( v6->fields._size <= (unsigned int)this )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
          v7 = v6->fields._items->m_Items[(int)this];
          if ( v7 )
          {
            *(_QWORD *)&v2->fields.maxPlayCnt = (unsigned int)*(_QWORD *)&v7->max_length;
            TitleInfoEventTowerReward__PlayVoice(v2, method);
            return;
          }
        }
      }
    }
LABEL_13:
    sub_B7076C(this, method);
  }
}


void __fastcall TitleInfoEventTowerReward__Update(TitleInfoEventTowerReward_o *this, const MethodInfo *method)
{
  int32_t state; // w8
  UnityEngine_Object_o *simpleAnimation; // x20
  UnityEngine_Object_o *monitor; // x0
  __int64 v6; // x1
  struct SimpleAnimation_o *v7; // x20
  System_String_o *name; // x0
  UnityEngine_Object_c *klass; // x8
  UnityEngine_Object_o *v10; // x20
  unsigned __int64 v11; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 v13; // x0
  const MethodInfo *v14; // x1
  UnityEngine_Object_o *animation; // x20
  UnityEngine_Animation_o *v16; // x20
  System_String_o *v17; // x0
  UnityEngine_AnimationState_o *v18; // x20
  float time; // s8
  long double v20; // q0
  UnityEngine_Object_c *v21; // x8
  unsigned __int64 v22; // x10
  SimpleAnimation_State_c **v23; // x11
  __int64 v24; // x0

  if ( (byte_43502E5 & 1) == 0 )
  {
    sub_B70694(&CTouch_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&SimpleAnimation_State_TypeInfo);
    byte_43502E5 = 1;
  }
  state = this->fields.state;
  if ( state != 2 )
  {
    if ( state != 1 )
      return;
    simpleAnimation = (UnityEngine_Object_o *)this->fields.simpleAnimation;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    monitor = (UnityEngine_Object_o *)UnityEngine_Object__op_Inequality(simpleAnimation, 0LL, 0LL);
    if ( ((unsigned __int8)monitor & 1) != 0 )
    {
      v7 = this->fields.simpleAnimation;
      if ( !v7 )
        goto LABEL_44;
      monitor = (UnityEngine_Object_o *)v7[1].monitor;
      if ( !monitor )
        goto LABEL_44;
      name = UnityEngine_Object__get_name(monitor, 0LL);
      monitor = (UnityEngine_Object_o *)SimpleAnimation__get_Item(v7, name, 0LL);
      if ( !monitor )
        goto LABEL_44;
      klass = monitor->klass;
      v10 = monitor;
      if ( *(_WORD *)&monitor->klass->_2.bitflags1 )
      {
        v11 = 0LL;
        p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
        {
          ++v11;
          p_offset += 2;
          if ( v11 >= *(unsigned __int16 *)&monitor->klass->_2.bitflags1 )
            goto LABEL_16;
        }
        v13 = (__int64)(&klass->vtable._3_ToString.method + 2 * *(_DWORD *)p_offset);
      }
      else
      {
LABEL_16:
        v13 = sub_B08590(monitor, SimpleAnimation_State_TypeInfo, 3LL);
      }
      v20 = ((long double (__fastcall *)(UnityEngine_Object_o *, _QWORD))*(_QWORD *)v13)(v10, *(_QWORD *)(v13 + 8));
      v21 = v10->klass;
      time = *(float *)&v20;
      if ( *(_WORD *)&v10->klass->_2.bitflags1 )
      {
        v22 = 0LL;
        v23 = (SimpleAnimation_State_c **)&v21->_1.interfaceOffsets->offset;
        while ( *(v23 - 1) != SimpleAnimation_State_TypeInfo )
        {
          ++v22;
          v23 += 2;
          if ( v22 >= *(unsigned __int16 *)&v10->klass->_2.bitflags1 )
            goto LABEL_36;
        }
        v24 = (__int64)(&v21[1]._1.implementedInterfaces + 2 * *(_DWORD *)v23);
      }
      else
      {
LABEL_36:
        v24 = sub_B08590(v10, SimpleAnimation_State_TypeInfo, 14LL);
      }
      monitor = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(UnityEngine_Object_o *, _QWORD))v24)(
                                          v10,
                                          *(_QWORD *)(v24 + 8));
      if ( !monitor )
        goto LABEL_44;
    }
    else
    {
      animation = (UnityEngine_Object_o *)this->fields.animation;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      monitor = (UnityEngine_Object_o *)UnityEngine_Object__op_Inequality(animation, 0LL, 0LL);
      if ( ((unsigned __int8)monitor & 1) == 0 )
        goto LABEL_40;
      v16 = this->fields.animation;
      if ( !v16 )
        goto LABEL_44;
      monitor = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(this->fields.animation, 0LL);
      if ( !monitor )
        goto LABEL_44;
      v17 = UnityEngine_Object__get_name(monitor, 0LL);
      monitor = (UnityEngine_Object_o *)UnityEngine_Animation__get_Item(v16, v17, 0LL);
      if ( !monitor )
        goto LABEL_44;
      v18 = (UnityEngine_AnimationState_o *)monitor;
      time = UnityEngine_AnimationState__get_time((UnityEngine_AnimationState_o *)monitor, 0LL);
      monitor = (UnityEngine_Object_o *)UnityEngine_AnimationState__get_clip(v18, 0LL);
      if ( !monitor )
        goto LABEL_44;
    }
    if ( time < UnityEngine_AnimationClip__get_length((UnityEngine_AnimationClip_o *)monitor, 0LL) )
      return;
LABEL_40:
    monitor = (UnityEngine_Object_o *)this->fields.screenTouchInfo;
    if ( monitor )
    {
      monitor = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)monitor, 0LL);
      if ( monitor )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)monitor, 1, 0LL);
        this->fields.state = 2;
        return;
      }
    }
LABEL_44:
    sub_B7076C(monitor, v6);
  }
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  if ( CTouch__isTouchPush(0LL) )
    TitleInfoEventTowerReward__OnTouchDisp(this, v14);
}


void __fastcall TitleInfoEventTowerReward___Close_b__37_0(TitleInfoEventTowerReward_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_endCallback; // x0
  System_Action_o *v9; // x19
  struct System_Action_o *endCallback; // t1

  endCallback = this->fields.endCallback;
  p_endCallback = (BattleServantConfConponent_o *)&this->fields.endCallback;
  v9 = endCallback;
  if ( endCallback )
  {
    p_endCallback->klass = 0LL;
    sub_B70630(p_endCallback, 0LL, v2, v3, v4, v5, v6, v7);
    ActionExtensions__Call(v9, 0LL);
  }
}


void __fastcall TitleInfoEventTowerReward___OnLoadEndSvt_b__31_0(
        TitleInfoEventTowerReward_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1
  CommonUI_o *v5; // x20
  struct EventTowerReward_o *eventTowerReward; // x8
  struct EventTowerReward_o *v7; // x8
  System_String_o *topImg; // x20
  UnityEngine_Object_o *simpleAnimation; // x20
  struct SimpleAnimation_o *v10; // x8
  UnityEngine_Object_o *monitor; // x20
  struct SimpleAnimation_o *v12; // x20
  System_String_o *name; // x0
  UnityEngine_Object_o *animation; // x20
  UnityEngine_Object_o *clip; // x20
  UnityEngine_Animation_o *v16; // x20
  System_String_o *v17; // x0

  if ( (byte_43502EB & 1) == 0 )
  {
    sub_B70694(&AvalonSceneManager_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_BgmMaster___);
    sub_B70694(&Method_DataMasterBase_BgmMaster__BgmEntity__int__GetEntity__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&SoundManager_TypeInfo);
    sub_B70694(&StringLiteral_13232/*"StartVoice"*/);
    byte_43502EB = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = Instance;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !v5 )
    goto LABEL_46;
  CommonUI__maskFadein(v5, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_13232/*"StartVoice"*/,
    this->fields.voiceStartTime,
    0LL);
  eventTowerReward = this->fields.eventTowerReward;
  if ( !eventTowerReward )
    goto LABEL_46;
  if ( eventTowerReward->fields.bgmId >= 1 )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_46;
    Instance = (CommonUI_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                               (DataManager_o *)Instance,
                               (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_BgmMaster___);
    v7 = this->fields.eventTowerReward;
    if ( !v7 )
      goto LABEL_46;
    if ( !Instance )
      goto LABEL_46;
    Instance = (CommonUI_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                               (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                               v7->fields.bgmId,
                               (const MethodInfo_21C0440 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__GetEntity__);
    if ( !Instance )
      goto LABEL_46;
    topImg = (System_String_o *)Instance->fields.topImg;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playBgm(topImg, 0LL);
  }
  simpleAnimation = (UnityEngine_Object_o *)this->fields.simpleAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(simpleAnimation, 0LL, 0LL) )
  {
    Instance = (CommonUI_o *)this->fields.simpleAnimation;
    if ( !Instance )
      goto LABEL_46;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 1, 0LL);
    v10 = this->fields.simpleAnimation;
    if ( !v10 )
      goto LABEL_46;
    monitor = (UnityEngine_Object_o *)v10[1].monitor;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    Instance = (CommonUI_o *)UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      v12 = this->fields.simpleAnimation;
      if ( v12 )
      {
        Instance = (CommonUI_o *)v12[1].monitor;
        if ( Instance )
        {
          name = UnityEngine_Object__get_name((UnityEngine_Object_o *)Instance, 0LL);
          SimpleAnimation__Play_16672920(v12, name, 0LL);
          goto LABEL_43;
        }
      }
LABEL_46:
      sub_B7076C(Instance, v4);
    }
  }
  else
  {
    animation = (UnityEngine_Object_o *)this->fields.animation;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(animation, 0LL, 0LL) )
    {
      Instance = (CommonUI_o *)this->fields.animation;
      if ( !Instance )
        goto LABEL_46;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 1, 0LL);
      Instance = (CommonUI_o *)this->fields.animation;
      if ( !Instance )
        goto LABEL_46;
      clip = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip((UnityEngine_Animation_o *)Instance, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Instance = (CommonUI_o *)UnityEngine_Object__op_Inequality(clip, 0LL, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        v16 = this->fields.animation;
        if ( v16 )
        {
          Instance = (CommonUI_o *)UnityEngine_Animation__get_clip(this->fields.animation, 0LL);
          if ( Instance )
          {
            v17 = UnityEngine_Object__get_name((UnityEngine_Object_o *)Instance, 0LL);
            UnityEngine_Animation__Play_51542184(v16, v17, 0LL);
            goto LABEL_43;
          }
        }
        goto LABEL_46;
      }
    }
  }
LABEL_43:
  Instance = (CommonUI_o *)this->fields.standFigure;
  if ( !Instance )
    goto LABEL_46;
  Instance = (CommonUI_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_46;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  this->fields.state = 1;
}


void __fastcall TitleInfoEventTowerReward___c__DisplayClass38_0___ctor(
        TitleInfoEventTowerReward___c__DisplayClass38_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TitleInfoEventTowerReward___c__DisplayClass38_0___StartRewardAction_b__0(
        TitleInfoEventTowerReward___c__DisplayClass38_0_o *this,
        const MethodInfo *method)
{
  TitleInfoEventTowerReward_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B7076C(0LL, method);
  TitleInfoEventTowerReward__EndItemGetEffectAction(_4__this, this->fields.callback, 0LL);
}


void __fastcall TitleInfoEventTowerReward___c__DisplayClass39_0___ctor(
        TitleInfoEventTowerReward___c__DisplayClass39_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TitleInfoEventTowerReward___c__DisplayClass39_0___StartRewardAction_sub_b__0(
        TitleInfoEventTowerReward___c__DisplayClass39_0_o *this,
        const MethodInfo *method)
{
  TitleInfoEventTowerReward___c__DisplayClass39_0_o *v2; // x19
  struct QuestRewardInfo_o *rewardInfo; // x8
  struct TitleInfoEventTowerReward_o *_4__this; // x20
  UnityEngine_Component_o **p__4__this; // x22
  TitleInfoEventTowerReward___c__DisplayClass39_0_o *v6; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  struct QuestRewardInfo_o *v8; // x8
  int32_t v9; // w20
  struct QuestRewardInfo_o *v10; // x8
  UnityEngine_Component_o *v11; // x20
  TitleInfoEventTowerReward___c__DisplayClass39_0_o *v12; // x21
  UnityEngine_GameObject_o *v13; // x0
  ServantRewardAction_o *v14; // x20
  System_Action_o *_9__1; // x21

  v2 = this;
  if ( (byte_434F28D & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    sub_B70694(&SoundManager_TypeInfo);
    this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)sub_B70694(&Method_TitleInfoEventTowerReward___c__DisplayClass39_0__StartRewardAction_sub_b__1__);
    byte_434F28D = 1;
  }
  rewardInfo = v2->fields.rewardInfo;
  if ( !rewardInfo )
    goto LABEL_31;
  this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)Gift__IsServant_27751796(rewardInfo->fields.type, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    p__4__this = (UnityEngine_Component_o **)&v2->fields.__4__this;
    _4__this = v2->fields.__4__this;
    this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    if ( v2->fields.__4__this )
    {
      v6 = this;
      gameObject = UnityEngine_Component__get_gameObject(*p__4__this, 0LL);
      this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)GameObjectExtensions__GetParent(gameObject, 0LL);
      if ( v6 )
      {
        this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)SummonAssetManager__InstantiateSvtGetPrefab(
                                                                      (SummonAssetManager_o *)v6,
                                                                      (UnityEngine_Transform_o *)this,
                                                                      0,
                                                                      0LL);
        if ( _4__this )
        {
          _4__this->fields.servantRewardAction = (struct ServantRewardAction_o *)this;
          sub_B70630(&_4__this->fields.servantRewardAction);
          v8 = v2->fields.rewardInfo;
          if ( v8 )
          {
            if ( v8->fields.isSkipSvtDetail )
              v9 = 38;
            else
              v9 = 6;
            if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !SoundManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
            }
            SoundManager__stopBgm(0LL);
            if ( *p__4__this )
            {
              this = *(TitleInfoEventTowerReward___c__DisplayClass39_0_o **)&(*p__4__this)[8].fields.m_CachedPtr;
              if ( this )
              {
                ServantRewardAction__Setup_28561756((ServantRewardAction_o *)this, v2->fields.rewardInfo, v9, 0LL);
                goto LABEL_26;
              }
            }
          }
        }
      }
    }
LABEL_31:
    sub_B7076C(this, method);
  }
  v10 = v2->fields.rewardInfo;
  if ( !v10 )
    goto LABEL_31;
  this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)Gift__IsCommandCode_27752192(v10->fields.type, 0LL);
  p__4__this = (UnityEngine_Component_o **)&v2->fields.__4__this;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v11 = *p__4__this;
    this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    if ( !*p__4__this )
      goto LABEL_31;
    v12 = this;
    v13 = UnityEngine_Component__get_gameObject(*p__4__this, 0LL);
    this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)GameObjectExtensions__GetParent(v13, 0LL);
    if ( !v12 )
      goto LABEL_31;
    this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)SummonAssetManager__InstantiateSvtGetPrefab(
                                                                  (SummonAssetManager_o *)v12,
                                                                  (UnityEngine_Transform_o *)this,
                                                                  0,
                                                                  0LL);
    if ( !v11 )
      goto LABEL_31;
    *(_QWORD *)&v11[8].fields.m_CachedPtr = this;
    sub_B70630(&v11[8].fields);
    if ( !*p__4__this )
      goto LABEL_31;
    this = *(TitleInfoEventTowerReward___c__DisplayClass39_0_o **)&(*p__4__this)[8].fields.m_CachedPtr;
    if ( !this )
      goto LABEL_31;
    ServantRewardAction__SetupCommandCode((ServantRewardAction_o *)this, v2->fields.rewardInfo, 6, 0LL);
  }
LABEL_26:
  if ( !*p__4__this )
    goto LABEL_31;
  v14 = *(ServantRewardAction_o **)&(*p__4__this)[8].fields.m_CachedPtr;
  _9__1 = v2->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v2,
      Method_TitleInfoEventTowerReward___c__DisplayClass39_0__StartRewardAction_sub_b__1__,
      0LL);
    v2->fields.__9__1 = _9__1;
    sub_B70630(&v2->fields.__9__1);
  }
  if ( !v14 )
    goto LABEL_31;
  ServantRewardAction__Play(v14, _9__1, 0.0, 0LL);
}


void __fastcall TitleInfoEventTowerReward___c__DisplayClass39_0___StartRewardAction_sub_b__1(
        TitleInfoEventTowerReward___c__DisplayClass39_0_o *this,
        const MethodInfo *method)
{
  TitleInfoEventTowerReward___c__DisplayClass39_0_o *v2; // x19
  struct TitleInfoEventTowerReward_o *_4__this; // x8
  UnityEngine_Object_o *gameObject; // x20

  v2 = this;
  if ( (byte_434F28E & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)sub_B70694(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    byte_434F28E = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)_4__this->fields.servantRewardAction;
  if ( !this )
    goto LABEL_11;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__DestroyImmediate_36067420(gameObject, 0LL);
  this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  if ( !this
    || (SummonAssetManager__UnloadSummonAssets((SummonAssetManager_o *)this, 0LL),
        (this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)v2->fields.__4__this) == 0LL) )
  {
LABEL_11:
    sub_B7076C(this, method);
  }
  TitleInfoEventTowerReward__StartRewardAction_sub(
    (TitleInfoEventTowerReward_o *)this,
    v2->fields.rewardInfoList,
    v2->fields.idx + 1,
    v2->fields.subEndAction,
    0LL);
}