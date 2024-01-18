void __fastcall TitleInfoEventTowerReward___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v12; // x1
  struct TitleInfoEventTowerReward_StaticFields *v13; // x0
  System_Int32_array **v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  struct TitleInfoEventTowerReward_StaticFields *v21; // x0
  System_Int32_array **v22; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  if ( (byte_41863B8 & 1) == 0 )
  {
    sub_B2C35C(&TitleInfoEventTowerReward_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_22747/*"tower_{0}_{1}"*/, v8);
    sub_B2C35C(&StringLiteral_16766/*"bit_floor_reward"*/, v9);
    sub_B2C35C(&StringLiteral_2653/*"Back/back{0:D5}"*/, v10);
    byte_41863B8 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)TitleInfoEventTowerReward_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_22747/*"tower_{0}_{1}"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_22747/*"tower_{0}_{1}"*/;
  sub_B2C2F8(static_fields, v12, v2, v3, v4, v5, v6, v7);
  v13 = TitleInfoEventTowerReward_TypeInfo->static_fields;
  v14 = (System_Int32_array **)StringLiteral_2653/*"Back/back{0:D5}"*/;
  v13->SPRITE_NAME_BG = (struct System_String_o *)StringLiteral_2653/*"Back/back{0:D5}"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v13->SPRITE_NAME_BG, v14, v15, v16, v17, v18, v19, v20);
  v21 = TitleInfoEventTowerReward_TypeInfo->static_fields;
  v22 = (System_Int32_array **)StringLiteral_16766/*"bit_floor_reward"*/;
  v21->CLIP_NAME_TOWER_REWARD = (struct System_String_o *)StringLiteral_16766/*"bit_floor_reward"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v21->CLIP_NAME_TOWER_REWARD, v22, v23, v24, v25, v26, v27, v28);
}


void __fastcall TitleInfoEventTowerReward___ctor(TitleInfoEventTowerReward_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall TitleInfoEventTowerReward__Close(TitleInfoEventTowerReward_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  System_String_o *voiceName; // x21
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct System_String_o **p_voiceAssetName; // x20
  System_String_o *v15; // x21
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Action_o *v22; // x20
  const MethodInfo *v23; // x2

  if ( (byte_41863B5 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&SoundManager_TypeInfo, v3);
    sub_B2C35C(&Method_TitleInfoEventTowerReward__Close_b__37_0__, v4);
    byte_41863B5 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B2C434(0LL, v6);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  if ( this->fields.voicePlayer )
  {
    voiceName = this->fields.voiceName;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__stopVoice_24812896(voiceName, 0.0, 0LL);
    this->fields.voicePlayer = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.voicePlayer, 0LL, v8, v9, v10, v11, v12, v13);
  }
  p_voiceAssetName = &this->fields.voiceAssetName;
  if ( !System_String__IsNullOrEmpty(this->fields.voiceAssetName, 0LL) )
  {
    v15 = *p_voiceAssetName;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__releaseAudioAssetStorage(v15, 0LL);
    *p_voiceAssetName = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.voiceAssetName, 0LL, v16, v17, v18, v19, v20, v21);
  }
  *(_QWORD *)&this->fields.selectVoiceIndex = 0LL;
  this->fields.playCnt = 0;
  v22 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v22, (Il2CppObject *)this, Method_TitleInfoEventTowerReward__Close_b__37_0__, 0LL);
  TitleInfoEventTowerReward__StartRewardAction(this, v22, v23);
}


void __fastcall TitleInfoEventTowerReward__EndItemGetEffectAction(
        TitleInfoEventTowerReward_o *this,
        System_Action_o *afterDetail,
        const MethodInfo *method)
{
  if ( !afterDetail )
    sub_B2C434(this, 0LL);
  System_Action__Invoke(afterDetail, 0LL);
}


void __fastcall TitleInfoEventTowerReward__EndPlayVoice(TitleInfoEventTowerReward_o *this, const MethodInfo *method)
{
  TitleInfoEventTowerReward_o *v2; // x19
  __int64 v3; // x1
  int32_t playCnt; // w8
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceList; // x20
  __int64 selectVoiceIndex; // x21
  ServantVoiceData_array *v7; // x9
  ServantVoiceData_o *v8; // x8
  __int64 v9; // x0

  v2 = this;
  if ( (byte_41863B2 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, method);
    this = (TitleInfoEventTowerReward_o *)sub_B2C35C(&StringLiteral_10695/*"PlayVoice"*/, v3);
    byte_41863B2 = 1;
  }
  playCnt = v2->fields.playCnt;
  if ( playCnt < v2->fields.maxPlayCnt )
  {
    voiceList = v2->fields.voiceList;
    if ( !voiceList )
      goto LABEL_12;
    selectVoiceIndex = v2->fields.selectVoiceIndex;
    if ( voiceList->fields._size <= (unsigned int)selectVoiceIndex )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    v7 = voiceList->fields._items->m_Items[selectVoiceIndex];
    if ( !v7 )
      goto LABEL_12;
    if ( playCnt >= v7->max_length )
    {
      v9 = sub_B2C460(this);
      sub_B2C400(v9, 0LL);
    }
    v8 = v7->m_Items[playCnt];
    if ( !v8 )
LABEL_12:
      sub_B2C434(this, method);
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)v2,
      (System_String_o *)StringLiteral_10695/*"PlayVoice"*/,
      v8->fields.delay,
      0LL);
  }
}


void __fastcall TitleInfoEventTowerReward__OnLoadEndBG(TitleInfoEventTowerReward_o *this, const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  __int64 v3; // x1
  _DWORD *monitor; // x8
  int32_t v5; // w21
  int32_t v6; // w22
  UIStandFigureR_o *klass; // x20
  System_Action_o *v8; // x23

  v2 = (Il2CppObject *)this;
  if ( (byte_41863AE & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    this = (TitleInfoEventTowerReward_o *)sub_B2C35C(&Method_TitleInfoEventTowerReward_OnLoadEndSvt__, v3);
    byte_41863AE = 1;
  }
  monitor = v2[8].monitor;
  if ( !monitor
    || (v5 = monitor[11],
        v6 = monitor[12],
        klass = (UIStandFigureR_o *)v2[4].klass,
        v8 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo),
        System_Action___ctor(v8, v2, Method_TitleInfoEventTowerReward_OnLoadEndSvt__, 0LL),
        !klass) )
  {
    sub_B2C434(this, method);
  }
  UIStandFigureR__SetCharacter(klass, v5, v6, 1, 0, 0, v8, 0LL);
}


void __fastcall TitleInfoEventTowerReward__OnLoadEndSvt(TitleInfoEventTowerReward_o *this, const MethodInfo *method)
{
  TitleInfoEventTowerReward_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  struct EventTowerReward_o *eventTowerReward; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v16; // x20
  struct EventTowerReward_o *v17; // x8
  struct System_String_array *voiceIds; // x8
  TitleInfoEventTowerReward_o *v19; // x22
  __int64 v20; // x25
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v21; // x23
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  unsigned __int64 v28; // x23
  struct EventTowerReward_o *v29; // x8
  struct System_String_array *v30; // x9
  int size; // w24
  TitleInfoEventTowerReward_o *v32; // x22
  __int64 v33; // x25
  unsigned int v34; // w8
  __int64 v35; // x8
  __int64 v36; // x8
  struct EventTowerReward_o *v37; // x9
  struct EventTowerReward_o *v38; // x8
  int32_t svtId; // w20
  System_Int32_array **VoiceAssetName_31404932; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_String_o *voiceAssetName; // x20
  System_Action_o *v48; // x21
  __int64 v49; // x0

  v2 = this;
  if ( (byte_41863AF & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantVoiceMaster___, v3);
    sub_B2C35C(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantVoiceData____AddRange__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, v9);
    sub_B2C35C(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v10);
    sub_B2C35C(&ServantVoiceEntity_TypeInfo, v11);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_B2C35C(&SoundManager_TypeInfo, v13);
    this = (TitleInfoEventTowerReward_o *)sub_B2C35C(&Method_TitleInfoEventTowerReward__OnLoadEndSvt_b__31_0__, v14);
    byte_41863AF = 1;
  }
  eventTowerReward = v2->fields.eventTowerReward;
  if ( !eventTowerReward )
    goto LABEL_45;
  if ( eventTowerReward->fields.voiceIds )
  {
    v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v16,
      (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    this = (TitleInfoEventTowerReward_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_45;
    this = (TitleInfoEventTowerReward_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                            (DataManager_o *)this,
                                            (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
    v17 = v2->fields.eventTowerReward;
    if ( !v17 )
      goto LABEL_45;
    voiceIds = v17->fields.voiceIds;
    if ( !voiceIds )
      goto LABEL_45;
    v19 = this;
    v20 = *(_QWORD *)&voiceIds->max_length;
    v21 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v21,
      (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    v2->fields.voiceList = (struct System_Collections_Generic_List_ServantVoiceData____o *)v21;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v2->fields.voiceList,
      (System_Int32_array **)v21,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
    if ( (int)v20 >= 1 )
    {
      v28 = 0LL;
      while ( 1 )
      {
        v29 = v2->fields.eventTowerReward;
        if ( !v29 )
          break;
        v30 = v29->fields.voiceIds;
        if ( !v30 )
          break;
        if ( v28 >= v30->max_length )
        {
LABEL_46:
          v49 = sub_B2C460(this);
          sub_B2C400(v49, 0LL);
        }
        if ( !v19 )
          break;
        this = (TitleInfoEventTowerReward_o *)ServantVoiceMaster__getEntity_31426160(
                                                (ServantVoiceMaster_o *)v19,
                                                14,
                                                v29->fields.svtId,
                                                v29->fields.limitCount,
                                                v30->m_Items[v28],
                                                0LL);
        if ( this )
        {
          if ( !v16 )
            break;
          System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
            (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v16,
            (System_Collections_Generic_IEnumerable_T__o *)this,
            (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_ServantVoiceData____AddRange__);
        }
        if ( (__int64)++v28 >= (int)v20 )
          goto LABEL_18;
      }
LABEL_45:
      sub_B2C434(this, method);
    }
LABEL_18:
    this = (TitleInfoEventTowerReward_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_45;
    this = (TitleInfoEventTowerReward_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                            (DataManager_o *)this,
                                            (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    if ( !v16 )
      goto LABEL_45;
    size = v16->fields._size;
    if ( size >= 1 )
    {
      v32 = this;
      v33 = 4LL;
      v34 = v16->fields._size;
      while ( 1 )
      {
        if ( v34 <= (int)v33 - 4 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        v35 = *((_QWORD *)&v16->fields._items->obj.klass + v33);
        if ( !v35 )
          goto LABEL_45;
        if ( !*(_DWORD *)(v35 + 24) )
          goto LABEL_46;
        v36 = *(_QWORD *)(v35 + 32);
        if ( !v36 )
          goto LABEL_45;
        v37 = v2->fields.eventTowerReward;
        if ( !v37 || !v32 )
          goto LABEL_45;
        this = (TitleInfoEventTowerReward_o *)VoicePlayCondMaster__isVoicePlay(
                                                (VoicePlayCondMaster_o *)v32,
                                                v37->fields.svtId,
                                                *(System_String_o **)(v36 + 16),
                                                0LL,
                                                -1LL,
                                                -1,
                                                0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( v16->fields._size <= (unsigned int)(v33 - 4) )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
          if ( !v2->fields.voiceList )
            goto LABEL_45;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v2->fields.voiceList,
            *((EventMissionProgressRequest_Argument_ProgressData_o **)&v16->fields._items->obj.klass + v33),
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
        }
        if ( (int)v33 - 3 >= size )
          break;
        v34 = v16->fields._size;
        ++v33;
      }
    }
    v38 = v2->fields.eventTowerReward;
    if ( !v38 )
      goto LABEL_45;
    svtId = v38->fields.svtId;
    if ( (BYTE3(ServantVoiceEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantVoiceEntity_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantVoiceEntity_TypeInfo);
    }
    VoiceAssetName_31404932 = (System_Int32_array **)ServantVoiceEntity__getVoiceAssetName_31404932(svtId, 0LL);
    v2->fields.voiceAssetName = (struct System_String_o *)VoiceAssetName_31404932;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v2->fields.voiceAssetName,
      VoiceAssetName_31404932,
      v41,
      v42,
      v43,
      v44,
      v45,
      v46);
    voiceAssetName = v2->fields.voiceAssetName;
    v48 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v48, (Il2CppObject *)v2, Method_TitleInfoEventTowerReward__OnLoadEndSvt_b__31_0__, 0LL);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__loadAudioAssetStorage(voiceAssetName, v48, 1, 0LL);
  }
}


void __fastcall TitleInfoEventTowerReward__OnTouchDisp(TitleInfoEventTowerReward_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Component_o *screenTouchInfo; // x0
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v8; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v10; // x21

  if ( (byte_41863B4 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&AvalonSceneManager_TypeInfo, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B2C35C(&Method_TitleInfoEventTowerReward__OnTouchDisp_b__36_0__, v5);
    byte_41863B4 = 1;
  }
  screenTouchInfo = (UnityEngine_Component_o *)this->fields.screenTouchInfo;
  if ( !screenTouchInfo )
    goto LABEL_10;
  screenTouchInfo = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(screenTouchInfo, 0LL);
  if ( !screenTouchInfo )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)screenTouchInfo, 0, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v8 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v8->static_fields->DEFAULT_FADE_TIME;
  v10 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_TitleInfoEventTowerReward__OnTouchDisp_b__36_0__, 0LL);
  if ( !Instance )
LABEL_10:
    sub_B2C434(screenTouchInfo, method);
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v10, 0LL);
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
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
  TerminalPramsManager_c *v32; // x0
  struct EventTowerReward_o *eventTowerReward_k__BackingField; // x1
  struct EventTowerReward_o **p_eventTowerReward; // x20
  __int64 v35; // x1
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  TerminalPramsManager_c *v42; // x0
  struct QuestRewardInfo_array *resultEventTowerRewardInfo_k__BackingField; // x1
  struct EventTowerReward_o *eventTowerReward; // x8
  struct ScreenTouchInformationComponent_o **p_screenTouchInfo; // x22
  UnityEngine_Object_o *screenTouchInfo; // x23
  __int64 v47; // x1
  CommonUI_o *Instance; // x23
  __int64 transform; // x0
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  __int64 v63; // x21
  TitleInfoEventTowerReward_c *v64; // x8
  int effectId; // w23
  System_String_o *CLIP_NAME_TOWER_REWARD; // x22
  System_String_o *FloorRewardPrefabName; // x0
  TitleInfoEventTowerReward_c *v68; // x0
  struct EventTowerReward_o *v69; // x8
  Il2CppObject *v70; // x0
  System_String_o *v71; // x0
  UnityEngine_Object_o *simpleAnimation; // x23
  System_String_o *v73; // x22
  __int64 v74; // x3
  __int64 v75; // x8
  __int64 v76; // x22
  unsigned __int64 v77; // x10
  SimpleAnimation_State_c **v78; // x11
  __int64 v79; // x0
  UnityEngine_Object_o *animation; // x23
  int towerId; // w8
  unsigned int v82; // w22
  struct System_Collections_Generic_List_UIFont__o *floorNumFontList; // x23
  int size; // w9
  UnityEngine_Object_o *v85; // x22
  struct EventTowerReward_o *v86; // x8
  struct System_Collections_Generic_List_UIFont__o *v87; // x23
  int v88; // w24
  struct EventTowerReward_o *v89; // x8
  UILabel_o *floorLabel; // x22
  UISprite_o *nameSprite; // x21
  System_String_o *v92; // x22
  Il2CppObject *v93; // x23
  Il2CppObject *v94; // x0
  int v95; // w23
  __int64 v96; // x21
  System_Text_StringBuilder_o *v97; // x22
  __int64 v98; // x26
  __int64 v99; // x27
  __int64 v100; // x8
  System_String_o *v101; // x0
  UILabel_o *rewardLabel; // x23
  _DWORD *v103; // x8
  int32_t v104; // w21
  struct EventTowerReward_o *v105; // x8
  System_String_o *SPRITE_NAME_BG; // x20
  Il2CppObject *v107; // x0
  System_String_o *v108; // x0
  ExUITexture_o *bgSprite; // x20
  System_String_o *v110; // x21
  System_Action_o *v111; // x22
  __int64 v112; // x0
  int32_t v113; // [xsp+0h] [xbp-70h] BYREF
  int eventId; // [xsp+4h] [xbp-6Ch] BYREF
  System_String_o *countText; // [xsp+8h] [xbp-68h] BYREF
  System_String_o *nameText; // [xsp+10h] [xbp-60h] BYREF
  WarEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_41863AD & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, callback);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventDetailMaster___, v10);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventTowerMaster___, v11);
    sub_B2C35C(&Method_DataManager_GetMasterData_GiftMaster___, v12);
    sub_B2C35C(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v13);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___, v14);
    sub_B2C35C(&int_TypeInfo, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_UIFont__get_Count__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_UIFont__get_Item__, v17);
    sub_B2C35C(&LocalizationManager_TypeInfo, v18);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v19);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v21);
    sub_B2C35C(&SimpleAnimation_State_TypeInfo, v22);
    sub_B2C35C(&System_Text_StringBuilder_TypeInfo, v23);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v24);
    sub_B2C35C(&Method_TitleInfoEventTowerReward_OnLoadEndBG__, v25);
    sub_B2C35C(&TitleInfoEventTowerReward_TypeInfo, v26);
    sub_B2C35C(&StringLiteral_26/*"\n"*/, v27);
    sub_B2C35C(&StringLiteral_5741/*"EVENT_TOWER_REWARD_GET"*/, v28);
    sub_B2C35C(&StringLiteral_10913/*"QUEST_CLEAR_COSTUME_GET"*/, v29);
    sub_B2C35C(&StringLiteral_15905/*"_"*/, v30);
    sub_B2C35C(&StringLiteral_5742/*"EVENT_TOWER_REWARD_GET_2"*/, v31);
    byte_41863AD = 1;
  }
  nameText = 0LL;
  entity = 0LL;
  countText = 0LL;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4183C87 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, callback);
    byte_4183C87 = 1;
  }
  v32 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v32 = TerminalPramsManager_TypeInfo;
  }
  eventTowerReward_k__BackingField = v32->static_fields->_eventTowerReward_k__BackingField;
  this->fields.eventTowerReward = eventTowerReward_k__BackingField;
  p_eventTowerReward = &this->fields.eventTowerReward;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.eventTowerReward,
    (System_Int32_array **)eventTowerReward_k__BackingField,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !byte_4184745 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v35);
    byte_4184745 = 1;
  }
  v42 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v42 = TerminalPramsManager_TypeInfo;
  }
  resultEventTowerRewardInfo_k__BackingField = v42->static_fields->_resultEventTowerRewardInfo_k__BackingField;
  this->fields.resultEventTowerRewardInfo = resultEventTowerRewardInfo_k__BackingField;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.resultEventTowerRewardInfo,
    (System_Int32_array **)resultEventTowerRewardInfo_k__BackingField,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
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
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !Instance )
      goto LABEL_146;
    transform = (__int64)CommonUI__CreateScreeenTouchInfo(Instance, (UnityEngine_Transform_o *)transform, 0, 0LL);
    if ( !transform )
      goto LABEL_146;
    Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                       (UnityEngine_GameObject_o *)transform,
                                                       (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    *p_screenTouchInfo = (struct ScreenTouchInformationComponent_o *)Component_srcLineSprite;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.screenTouchInfo,
      Component_srcLineSprite,
      v51,
      v52,
      v53,
      v54,
      v55,
      v56);
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.endCallback,
    (System_Int32_array **)callback,
    v57,
    v58,
    v59,
    v60,
    v61,
    v62);
  this->fields.state = 0;
  transform = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !transform )
    goto LABEL_146;
  transform = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                         (DataManager_o *)transform,
                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventTowerMaster___);
  if ( !*p_eventTowerReward || !transform )
    goto LABEL_146;
  transform = (__int64)EventTowerMaster__GetEntity(
                         (EventTowerMaster_o *)transform,
                         (*p_eventTowerReward)->fields.eventId,
                         (*p_eventTowerReward)->fields.towerId,
                         0LL);
  v63 = transform;
  v64 = TitleInfoEventTowerReward_TypeInfo;
  if ( (BYTE3(TitleInfoEventTowerReward_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventTowerReward_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventTowerReward_TypeInfo);
    v64 = TitleInfoEventTowerReward_TypeInfo;
  }
  if ( !*p_eventTowerReward
    || (effectId = (*p_eventTowerReward)->fields.effectId,
        CLIP_NAME_TOWER_REWARD = v64->static_fields->CLIP_NAME_TOWER_REWARD,
        (transform = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (transform = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                               (DataManager_o *)transform,
                               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventDetailMaster___),
        !*p_eventTowerReward)
    || !transform )
  {
LABEL_146:
    sub_B2C434(transform, v47);
  }
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)transform,
         &entity,
         (*p_eventTowerReward)->fields.eventId,
         (const MethodInfo_24E412C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
    transform = (__int64)entity;
    if ( !entity )
      goto LABEL_146;
    FloorRewardPrefabName = EventDetailEntity__GetFloorRewardPrefabName((EventDetailEntity_o *)entity, 0LL);
    if ( FloorRewardPrefabName )
      CLIP_NAME_TOWER_REWARD = FloorRewardPrefabName;
  }
  v68 = TitleInfoEventTowerReward_TypeInfo;
  if ( (BYTE3(TitleInfoEventTowerReward_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventTowerReward_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventTowerReward_TypeInfo);
    v68 = TitleInfoEventTowerReward_TypeInfo;
  }
  transform = System_String__op_Equality(CLIP_NAME_TOWER_REWARD, v68->static_fields->CLIP_NAME_TOWER_REWARD, 0LL);
  if ( (transform & 1) != 0 )
  {
    v69 = *p_eventTowerReward;
    if ( !*p_eventTowerReward )
      goto LABEL_146;
    if ( v69->fields.towerId == 2 && v69->fields.floor == 100 )
      effectId = 3;
  }
  eventId = effectId;
  v70 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId);
  v71 = System_String__Concat_44385236(
          (Il2CppObject *)CLIP_NAME_TOWER_REWARD,
          (Il2CppObject *)StringLiteral_15905/*"_"*/,
          v70,
          0LL);
  simpleAnimation = (UnityEngine_Object_o *)this->fields.simpleAnimation;
  v73 = v71;
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
    transform = (__int64)SimpleAnimation__get_Item((SimpleAnimation_o *)transform, v73, 0LL);
    if ( !transform )
      goto LABEL_146;
    v75 = *(_QWORD *)transform;
    v76 = transform;
    if ( *(_WORD *)(*(_QWORD *)transform + 298LL) )
    {
      v77 = 0LL;
      v78 = (SimpleAnimation_State_c **)(*(_QWORD *)(v75 + 176) + 8LL);
      while ( *(v78 - 1) != SimpleAnimation_State_TypeInfo )
      {
        ++v77;
        v78 += 2;
        if ( v77 >= *(unsigned __int16 *)(*(_QWORD *)transform + 298LL) )
          goto LABEL_62;
      }
      v79 = v75 + 16LL * (*(_DWORD *)v78 + 14) + 312;
    }
    else
    {
LABEL_62:
      v79 = sub_AC5258(transform, SimpleAnimation_State_TypeInfo, 14LL, v74);
    }
    transform = (*(__int64 (__fastcall **)(__int64, _QWORD))v79)(v76, *(_QWORD *)(v79 + 8));
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
    transform = (__int64)UnityEngine_Animation__GetClip((UnityEngine_Animation_o *)transform, v73, 0LL);
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
  v82 = towerId - 1;
  if ( towerId >= 1 )
  {
    floorNumFontList = this->fields.floorNumFontList;
    if ( !floorNumFontList )
      goto LABEL_146;
    size = floorNumFontList->fields._size;
    if ( size >= towerId )
    {
      if ( size <= v82 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v85 = (UnityEngine_Object_o *)floorNumFontList->fields._items->m_Items[v82];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      transform = UnityEngine_Object__op_Inequality(v85, 0LL, 0LL);
      if ( (transform & 1) != 0 )
      {
        v86 = this->fields.eventTowerReward;
        if ( !v86 )
          goto LABEL_146;
        v87 = this->fields.floorNumFontList;
        if ( !v87 )
          goto LABEL_146;
        v88 = v86->fields.towerId - 1;
        if ( v87->fields._size <= (unsigned int)v88 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        if ( !this->fields.floorLabel )
          goto LABEL_146;
        UILabel__set_font(this->fields.floorLabel, v87->fields._items->m_Items[v88], 0LL);
      }
    }
  }
  v89 = this->fields.eventTowerReward;
  if ( !v89 )
    goto LABEL_146;
  floorLabel = this->fields.floorLabel;
  transform = (__int64)System_Int32__ToString((int)v89 + 24, 0LL);
  if ( !floorLabel )
    goto LABEL_146;
  UILabel__set_text(floorLabel, (System_String_o *)transform, 0LL);
  if ( v63 )
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
    v92 = **(System_String_o ***)(transform + 184);
    eventId = (*p_eventTowerReward)->fields.eventId;
    transform = j_il2cpp_value_box_0(int_TypeInfo, &eventId);
    if ( !*p_eventTowerReward )
      goto LABEL_146;
    v93 = (Il2CppObject *)transform;
    v113 = (*p_eventTowerReward)->fields.towerId;
    v94 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v113);
    transform = (__int64)System_String__Format_44301068(v92, v93, v94, 0LL);
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
  transform = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !transform )
    goto LABEL_146;
  transform = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                         (DataManager_o *)transform,
                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_GiftMaster___);
  if ( !*p_eventTowerReward )
    goto LABEL_146;
  if ( !transform )
    goto LABEL_146;
  transform = (__int64)GiftMaster__GetGiftListById((GiftMaster_o *)transform, (*p_eventTowerReward)->fields.giftId, 0LL);
  if ( !transform )
    goto LABEL_146;
  v95 = *(_DWORD *)(transform + 24);
  v96 = transform;
  if ( v95 >= 1 )
  {
    v97 = (System_Text_StringBuilder_o *)sub_B2C42C(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v97, 0LL);
    v98 = 0LL;
    v99 = v96 + 32;
    while ( 1 )
    {
      if ( (_DWORD)v98 )
      {
        if ( !v97 )
          goto LABEL_146;
        transform = (__int64)System_Text_StringBuilder__Append_42408700(v97, (System_String_o *)StringLiteral_26/*"\n"*/, 0LL);
      }
      if ( (unsigned int)v98 >= *(_DWORD *)(v96 + 24) )
        goto LABEL_147;
      transform = *(_QWORD *)(v99 + 8 * v98);
      if ( !transform )
        goto LABEL_146;
      GiftEntity__GetInfo((GiftEntity_o *)transform, &nameText, &countText, 0LL);
      if ( (unsigned int)v98 >= *(_DWORD *)(v96 + 24) )
        goto LABEL_147;
      v100 = *(_QWORD *)(v99 + 8 * v98);
      if ( !v100 )
        goto LABEL_146;
      if ( *(_DWORD *)(v100 + 20) == 9 )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v101 = (System_String_o *)StringLiteral_10913/*"QUEST_CLEAR_COSTUME_GET"*/;
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
          transform = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_5741/*"EVENT_TOWER_REWARD_GET"*/, 0LL);
          if ( !v97 )
            goto LABEL_146;
          transform = (__int64)System_Text_StringBuilder__AppendFormat_42415252(
                                 v97,
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
        v101 = (System_String_o *)StringLiteral_5742/*"EVENT_TOWER_REWARD_GET_2"*/;
      }
      transform = (__int64)LocalizationManager__Get(v101, 0LL);
      if ( !v97 )
        goto LABEL_146;
      transform = (__int64)System_Text_StringBuilder__AppendFormat(
                             v97,
                             (System_String_o *)transform,
                             (Il2CppObject *)nameText,
                             0LL);
LABEL_133:
      if ( (int)++v98 >= v95 )
      {
        rewardLabel = this->fields.rewardLabel;
        transform = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v97->klass->vtable._3_ToString.method)(
                      v97,
                      v97->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
        if ( rewardLabel )
        {
          UILabel__set_text(rewardLabel, (System_String_o *)transform, 0LL);
          if ( !*(_DWORD *)(v96 + 24) )
          {
LABEL_147:
            v112 = sub_B2C460(transform);
            sub_B2C400(v112, 0LL);
          }
          v103 = *(_DWORD **)(v96 + 32);
          if ( v103 )
          {
            transform = (__int64)this->fields.itemIcon;
            if ( transform )
            {
              v104 = v103[5];
              ItemIconComponent__SetGift((ItemIconComponent_o *)transform, v104, v103[6], v103[7], 0, 0LL);
              transform = (__int64)this->fields.imageFrame;
              if ( transform )
              {
                UnityEngine_GameObject__SetActive(
                  (UnityEngine_GameObject_o *)transform,
                  ((unsigned int)(v104 - 1) < 0xB) & (0x461u >> (v104 - 1)),
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
  v105 = *p_eventTowerReward;
  if ( !*p_eventTowerReward )
    goto LABEL_146;
  SPRITE_NAME_BG = TitleInfoEventTowerReward_TypeInfo->static_fields->SPRITE_NAME_BG;
  eventId = v105->fields.bgId;
  v107 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId);
  v108 = System_String__Format(SPRITE_NAME_BG, v107, 0LL);
  bgSprite = this->fields.bgSprite;
  v110 = v108;
  v111 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v111, (Il2CppObject *)this, Method_TitleInfoEventTowerReward_OnLoadEndBG__, 0LL);
  if ( !bgSprite )
    goto LABEL_146;
  ExUITexture__SetAssetImage(bgSprite, v110, v111, 0LL);
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceList; // x20
  __int64 selectVoiceIndex; // x21
  ServantVoiceData_array *v16; // x8
  __int64 playCnt; // x9
  ServantVoiceData_o *v18; // x20
  System_Int32_array **id; // x1
  struct EventTowerReward_o *eventTowerReward; // x8
  int32_t svtId; // w22
  System_String_o *VoiceAssetName_31404932; // x0
  System_String_o *voiceName; // x21
  System_String_o *v24; // x22
  SeManager_c *v25; // x8
  float DEFAULT_VOLUME; // s8
  System_Action_o *v27; // x23
  System_Int32_array **v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  UIStandFigureR_o *standFigure; // x21
  int32_t face; // w22
  float FadeTime; // s0
  __int64 v38; // x0

  v8 = this;
  if ( (byte_41863B1 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, v9);
    sub_B2C35C(&SeManager_TypeInfo, v10);
    sub_B2C35C(&ServantVoiceEntity_TypeInfo, v11);
    sub_B2C35C(&SoundManager_TypeInfo, v12);
    this = (TitleInfoEventTowerReward_o *)sub_B2C35C(&Method_TitleInfoEventTowerReward_EndPlayVoice__, v13);
    byte_41863B1 = 1;
  }
  voiceList = v8->fields.voiceList;
  if ( !voiceList )
    goto LABEL_21;
  selectVoiceIndex = v8->fields.selectVoiceIndex;
  if ( voiceList->fields._size <= (unsigned int)selectVoiceIndex )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  v16 = voiceList->fields._items->m_Items[selectVoiceIndex];
  if ( !v16 )
    goto LABEL_21;
  playCnt = v8->fields.playCnt;
  if ( (unsigned int)playCnt >= v16->max_length )
  {
    v38 = sub_B2C460(this);
    sub_B2C400(v38, 0LL);
  }
  v18 = v16->m_Items[playCnt];
  if ( !v18 )
    goto LABEL_21;
  id = (System_Int32_array **)v18->fields.id;
  v8->fields.voiceName = (struct System_String_o *)id;
  sub_B2C2F8((BattleServantConfConponent_o *)&v8->fields.voiceName, id, v2, v3, v4, v5, v6, v7);
  eventTowerReward = v8->fields.eventTowerReward;
  if ( !eventTowerReward )
    goto LABEL_21;
  svtId = eventTowerReward->fields.svtId;
  if ( (BYTE3(ServantVoiceEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantVoiceEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantVoiceEntity_TypeInfo);
  }
  VoiceAssetName_31404932 = ServantVoiceEntity__getVoiceAssetName_31404932(svtId, 0LL);
  voiceName = v8->fields.voiceName;
  v24 = VoiceAssetName_31404932;
  v25 = SeManager_TypeInfo;
  if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    v25 = SeManager_TypeInfo;
  }
  DEFAULT_VOLUME = v25->static_fields->DEFAULT_VOLUME;
  v27 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v27, (Il2CppObject *)v8, Method_TitleInfoEventTowerReward_EndPlayVoice__, 0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  v28 = (System_Int32_array **)SoundManager__playVoice_24786800(v24, voiceName, DEFAULT_VOLUME, v27, 0LL);
  v8->fields.voicePlayer = (struct SePlayer_o *)v28;
  sub_B2C2F8((BattleServantConfConponent_o *)&v8->fields.voicePlayer, v28, v29, v30, v31, v32, v33, v34);
  standFigure = v8->fields.standFigure;
  face = v18->fields.face;
  FadeTime = ServantVoiceData__GetFadeTime(v18, 0LL);
  if ( !standFigure )
LABEL_21:
    sub_B2C434(this, method);
  UIStandFigureR__SetFace(standFigure, face, FadeTime, 0LL);
  ++v8->fields.playCnt;
}


void __fastcall TitleInfoEventTowerReward__StartRewardAction(
        TitleInfoEventTowerReward_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x21
  System_Action_o *v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_Action_o **v16; // x22
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  QuestRewardInfo_array *resultEventTowerRewardInfo; // x20
  System_Action_o *v24; // x22
  const MethodInfo *v25; // x4

  if ( (byte_41863B6 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, callback);
    sub_B2C35C(&Method_TitleInfoEventTowerReward___c__DisplayClass38_0__StartRewardAction_b__0__, v5);
    sub_B2C35C(&TitleInfoEventTowerReward___c__DisplayClass38_0_TypeInfo, v6);
    byte_41863B6 = 1;
  }
  v7 = sub_B2C42C(TitleInfoEventTowerReward___c__DisplayClass38_0_TypeInfo);
  TitleInfoEventTowerReward___c__DisplayClass38_0___ctor((TitleInfoEventTowerReward___c__DisplayClass38_0_o *)v7, 0LL);
  if ( !v7 )
    goto LABEL_8;
  *(_QWORD *)(v7 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v7 + 16), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = callback;
  v16 = (System_Action_o **)(v7 + 24);
  sub_B2C2F8((BattleServantConfConponent_o *)(v7 + 24), (System_Int32_array **)callback, v17, v18, v19, v20, v21, v22);
  resultEventTowerRewardInfo = this->fields.resultEventTowerRewardInfo;
  if ( resultEventTowerRewardInfo )
  {
    v24 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      v24,
      (Il2CppObject *)v7,
      Method_TitleInfoEventTowerReward___c__DisplayClass38_0__StartRewardAction_b__0__,
      0LL);
    TitleInfoEventTowerReward__StartRewardAction_sub(this, resultEventTowerRewardInfo, 0, v24, v25);
    return;
  }
  v8 = *v16;
  if ( !*v16 )
LABEL_8:
    sub_B2C434(v8, v9);
  System_Action__Invoke(v8, 0LL);
}


void __fastcall TitleInfoEventTowerReward__StartRewardAction_sub(
        TitleInfoEventTowerReward_o *this,
        QuestRewardInfo_array *rewardInfoList,
        int32_t idx,
        System_Action_o *subEndAction,
        const MethodInfo *method)
{
  System_Int32_array **v7; // x20
  System_Int32_array **v9; // x1
  __int64 v10; // x19
  System_Action_o *IsServant_27324084; // x0
  __int64 v12; // x1
  WarEntity_o *Entity; // x0
  WarEntity_o *v14; // x19
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x26
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
  System_Action_o **v34; // x20
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  __int64 v47; // x8
  __int64 v48; // x9
  int v49; // w10
  SummonAssetManager_o *Instance; // x19
  System_Action_o *v51; // x20
  __int64 v52; // x0

  v7 = (System_Int32_array **)rewardInfoList;
  while ( 1 )
  {
    if ( (byte_41863B7 & 1) == 0 )
    {
      sub_B2C35C(&System_Action_TypeInfo, rewardInfoList);
      sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v15);
      sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v16);
      sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
      sub_B2C35C(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, v18);
      sub_B2C35C(&Method_TitleInfoEventTowerReward___c__DisplayClass39_0__StartRewardAction_sub_b__0__, v19);
      sub_B2C35C(&TitleInfoEventTowerReward___c__DisplayClass39_0_TypeInfo, v20);
      byte_41863B7 = 1;
    }
    v21 = sub_B2C42C(TitleInfoEventTowerReward___c__DisplayClass39_0_TypeInfo);
    TitleInfoEventTowerReward___c__DisplayClass39_0___ctor(
      (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)v21,
      0LL);
    if ( !v21 )
      goto LABEL_24;
    *(_QWORD *)(v21 + 24) = this;
    sub_B2C2F8((BattleServantConfConponent_o *)(v21 + 24), (System_Int32_array **)this, v22, v23, v24, v25, v26, v27);
    *(_QWORD *)(v21 + 32) = v7;
    sub_B2C2F8((BattleServantConfConponent_o *)(v21 + 32), v7, v28, v29, v30, v31, v32, v33);
    *(_QWORD *)(v21 + 48) = subEndAction;
    v34 = (System_Action_o **)(v21 + 48);
    *(_DWORD *)(v21 + 40) = idx;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)(v21 + 48),
      (System_Int32_array **)subEndAction,
      v35,
      v36,
      v37,
      v38,
      v39,
      v40);
    v47 = *(_QWORD *)(v21 + 32);
    if ( !v47 )
      goto LABEL_24;
    v48 = *(int *)(v21 + 40);
    v49 = *(_DWORD *)(v47 + 24);
    if ( (int)v48 >= v49 )
    {
      IsServant_27324084 = *v34;
      if ( *v34 )
      {
        System_Action__Invoke(IsServant_27324084, 0LL);
        return;
      }
LABEL_24:
      sub_B2C434(IsServant_27324084, v12);
    }
    if ( (unsigned int)v48 >= v49 )
    {
      v52 = sub_B2C460(IsServant_27324084);
      sub_B2C400(v52, 0LL);
    }
    v9 = *(System_Int32_array ***)(v47 + 8 * v48 + 32);
    *(_QWORD *)(v21 + 16) = v9;
    v10 = v21 + 16;
    sub_B2C2F8((BattleServantConfConponent_o *)(v21 + 16), v9, v41, v42, v43, v44, v45, v46);
    if ( !*(_QWORD *)(v21 + 16) )
      goto LABEL_24;
    IsServant_27324084 = (System_Action_o *)Gift__IsServant_27324084(*(_DWORD *)(*(_QWORD *)(v21 + 16) + 16LL), 0LL);
    if ( ((unsigned __int8)IsServant_27324084 & 1) == 0 )
      break;
    IsServant_27324084 = (System_Action_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !IsServant_27324084 )
      goto LABEL_24;
    IsServant_27324084 = (System_Action_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)IsServant_27324084,
                                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !*(_QWORD *)v10 || !IsServant_27324084 )
      goto LABEL_24;
    Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               (DataMasterBase_WarMaster__WarEntity__int__o *)IsServant_27324084,
               *(_DWORD *)(*(_QWORD *)v10 + 20LL),
               (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
    v7 = *(System_Int32_array ***)(v21 + 32);
    subEndAction = *(System_Action_o **)(v21 + 48);
    idx = *(_DWORD *)(v21 + 40) + 1;
  }
  if ( !*(_QWORD *)v10 )
    goto LABEL_24;
  if ( !Gift__IsCommandCode_27324480(*(_DWORD *)(*(_QWORD *)v10 + 16LL), 0LL) )
    goto LABEL_14;
LABEL_22:
  Instance = (SummonAssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  v51 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v51,
    (Il2CppObject *)v21,
    Method_TitleInfoEventTowerReward___c__DisplayClass39_0__StartRewardAction_sub_b__0__,
    0LL);
  if ( !Instance )
    goto LABEL_24;
  SummonAssetManager__LoadSummonAssets(Instance, v51, 0LL);
}


void __fastcall TitleInfoEventTowerReward__StartVoice(TitleInfoEventTowerReward_o *this, const MethodInfo *method)
{
  TitleInfoEventTowerReward_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceList; // x8
  System_Random_o *v6; // x20
  struct System_Collections_Generic_List_ServantVoiceData____o *v7; // x8
  struct System_Collections_Generic_List_ServantVoiceData____o *v8; // x21
  ServantVoiceData_array *v9; // x8

  v2 = this;
  if ( (byte_41863B0 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, v3);
    this = (TitleInfoEventTowerReward_o *)sub_B2C35C(&System_Random_TypeInfo, v4);
    byte_41863B0 = 1;
  }
  voiceList = v2->fields.voiceList;
  if ( !voiceList )
    goto LABEL_13;
  if ( voiceList->fields._size )
  {
    v6 = (System_Random_o *)sub_B2C42C(System_Random_TypeInfo);
    System_Random___ctor(v6, 0LL);
    v7 = v2->fields.voiceList;
    if ( v7 )
    {
      if ( v6 )
      {
        this = (TitleInfoEventTowerReward_o *)((__int64 (__fastcall *)(System_Random_o *, _QWORD, Il2CppMethodPointer))v6->klass->vtable._7_Next.method)(
                                                v6,
                                                (unsigned int)v7->fields._size,
                                                v6->klass->vtable._8_NextDouble.methodPtr);
        v8 = v2->fields.voiceList;
        v2->fields.selectVoiceIndex = (int)this;
        if ( v8 )
        {
          if ( v8->fields._size <= (unsigned int)this )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
          v9 = v8->fields._items->m_Items[(int)this];
          if ( v9 )
          {
            *(_QWORD *)&v2->fields.maxPlayCnt = (unsigned int)*(_QWORD *)&v9->max_length;
            TitleInfoEventTowerReward__PlayVoice(v2, method);
            return;
          }
        }
      }
    }
LABEL_13:
    sub_B2C434(this, method);
  }
}


void __fastcall TitleInfoEventTowerReward__Update(TitleInfoEventTowerReward_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  int32_t state; // w8
  UnityEngine_Object_o *simpleAnimation; // x20
  UnityEngine_Object_o *monitor; // x0
  __int64 v8; // x1
  struct SimpleAnimation_o *v9; // x20
  System_String_o *name; // x0
  __int64 v11; // x3
  UnityEngine_Object_c *klass; // x8
  UnityEngine_Object_o *v13; // x20
  unsigned __int64 v14; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 v16; // x0
  const MethodInfo *v17; // x1
  UnityEngine_Object_o *animation; // x20
  UnityEngine_Animation_o *v19; // x20
  System_String_o *v20; // x0
  UnityEngine_AnimationState_o *v21; // x20
  float time; // s8
  __int64 v23; // x3
  long double v24; // q0
  UnityEngine_Object_c *v25; // x8
  unsigned __int64 v26; // x10
  SimpleAnimation_State_c **v27; // x11
  __int64 v28; // x0

  if ( (byte_41863B3 & 1) == 0 )
  {
    sub_B2C35C(&CTouch_TypeInfo, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    sub_B2C35C(&SimpleAnimation_State_TypeInfo, v4);
    byte_41863B3 = 1;
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
      v9 = this->fields.simpleAnimation;
      if ( !v9 )
        goto LABEL_44;
      monitor = (UnityEngine_Object_o *)v9[1].monitor;
      if ( !monitor )
        goto LABEL_44;
      name = UnityEngine_Object__get_name(monitor, 0LL);
      monitor = (UnityEngine_Object_o *)SimpleAnimation__get_Item(v9, name, 0LL);
      if ( !monitor )
        goto LABEL_44;
      klass = monitor->klass;
      v13 = monitor;
      if ( *(_WORD *)&monitor->klass->_2.bitflags1 )
      {
        v14 = 0LL;
        p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
        {
          ++v14;
          p_offset += 2;
          if ( v14 >= *(unsigned __int16 *)&monitor->klass->_2.bitflags1 )
            goto LABEL_16;
        }
        v16 = (__int64)(&klass->vtable._3_ToString.method + 2 * *(_DWORD *)p_offset);
      }
      else
      {
LABEL_16:
        v16 = sub_AC5258(monitor, SimpleAnimation_State_TypeInfo, 3LL, v11);
      }
      v24 = ((long double (__fastcall *)(UnityEngine_Object_o *, _QWORD))*(_QWORD *)v16)(v13, *(_QWORD *)(v16 + 8));
      v25 = v13->klass;
      time = *(float *)&v24;
      if ( *(_WORD *)&v13->klass->_2.bitflags1 )
      {
        v26 = 0LL;
        v27 = (SimpleAnimation_State_c **)&v25->_1.interfaceOffsets->offset;
        while ( *(v27 - 1) != SimpleAnimation_State_TypeInfo )
        {
          ++v26;
          v27 += 2;
          if ( v26 >= *(unsigned __int16 *)&v13->klass->_2.bitflags1 )
            goto LABEL_36;
        }
        v28 = (__int64)(&v25[1]._1.implementedInterfaces + 2 * *(_DWORD *)v27);
      }
      else
      {
LABEL_36:
        v28 = sub_AC5258(v13, SimpleAnimation_State_TypeInfo, 14LL, v23);
      }
      monitor = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(UnityEngine_Object_o *, _QWORD))v28)(
                                          v13,
                                          *(_QWORD *)(v28 + 8));
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
      v19 = this->fields.animation;
      if ( !v19 )
        goto LABEL_44;
      monitor = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(this->fields.animation, 0LL);
      if ( !monitor )
        goto LABEL_44;
      v20 = UnityEngine_Object__get_name(monitor, 0LL);
      monitor = (UnityEngine_Object_o *)UnityEngine_Animation__get_Item(v19, v20, 0LL);
      if ( !monitor )
        goto LABEL_44;
      v21 = (UnityEngine_AnimationState_o *)monitor;
      time = UnityEngine_AnimationState__get_time((UnityEngine_AnimationState_o *)monitor, 0LL);
      monitor = (UnityEngine_Object_o *)UnityEngine_AnimationState__get_clip(v21, 0LL);
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
    sub_B2C434(monitor, v8);
  }
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  if ( CTouch__isTouchPush(0LL) )
    TitleInfoEventTowerReward__OnTouchDisp(this, v17);
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
    sub_B2C2F8(p_endCallback, 0LL, v2, v3, v4, v5, v6, v7);
    ActionExtensions__Call(v9, 0LL);
  }
}


void __fastcall TitleInfoEventTowerReward___OnLoadEndSvt_b__31_0(
        TitleInfoEventTowerReward_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  CommonUI_o *Instance; // x0
  __int64 v11; // x1
  CommonUI_o *v12; // x20
  struct EventTowerReward_o *eventTowerReward; // x8
  struct EventTowerReward_o *v14; // x8
  System_String_o *topImg; // x20
  UnityEngine_Object_o *simpleAnimation; // x20
  struct SimpleAnimation_o *v17; // x8
  UnityEngine_Object_o *monitor; // x20
  struct SimpleAnimation_o *v19; // x20
  System_String_o *name; // x0
  UnityEngine_Object_o *animation; // x20
  UnityEngine_Object_o *clip; // x20
  UnityEngine_Animation_o *v23; // x20
  System_String_o *v24; // x0

  if ( (byte_41863B9 & 1) == 0 )
  {
    sub_B2C35C(&AvalonSceneManager_TypeInfo, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_BgmMaster___, v3);
    sub_B2C35C(&Method_DataMasterBase_BgmMaster__BgmEntity__int__GetEntity__, v4);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B2C35C(&SoundManager_TypeInfo, v8);
    sub_B2C35C(&StringLiteral_13051/*"StartVoice"*/, v9);
    byte_41863B9 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = Instance;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !v12 )
    goto LABEL_46;
  CommonUI__maskFadein(v12, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_13051/*"StartVoice"*/,
    this->fields.voiceStartTime,
    0LL);
  eventTowerReward = this->fields.eventTowerReward;
  if ( !eventTowerReward )
    goto LABEL_46;
  if ( eventTowerReward->fields.bgmId >= 1 )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_46;
    Instance = (CommonUI_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                               (DataManager_o *)Instance,
                               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_BgmMaster___);
    v14 = this->fields.eventTowerReward;
    if ( !v14 )
      goto LABEL_46;
    if ( !Instance )
      goto LABEL_46;
    Instance = (CommonUI_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                               (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                               v14->fields.bgmId,
                               (const MethodInfo_24E40D0 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__GetEntity__);
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
    v17 = this->fields.simpleAnimation;
    if ( !v17 )
      goto LABEL_46;
    monitor = (UnityEngine_Object_o *)v17[1].monitor;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    Instance = (CommonUI_o *)UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      v19 = this->fields.simpleAnimation;
      if ( v19 )
      {
        Instance = (CommonUI_o *)v19[1].monitor;
        if ( Instance )
        {
          name = UnityEngine_Object__get_name((UnityEngine_Object_o *)Instance, 0LL);
          SimpleAnimation__Play_16486620(v19, name, 0LL);
          goto LABEL_43;
        }
      }
LABEL_46:
      sub_B2C434(Instance, v11);
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
        v23 = this->fields.animation;
        if ( v23 )
        {
          Instance = (CommonUI_o *)UnityEngine_Animation__get_clip(this->fields.animation, 0LL);
          if ( Instance )
          {
            v24 = UnityEngine_Object__get_name((UnityEngine_Object_o *)Instance, 0LL);
            UnityEngine_Animation__Play_50201580(v23, v24, 0LL);
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
    sub_B2C434(0LL, method);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct QuestRewardInfo_o *rewardInfo; // x8
  struct TitleInfoEventTowerReward_o *_4__this; // x20
  UnityEngine_Component_o **p__4__this; // x22
  TitleInfoEventTowerReward___c__DisplayClass39_0_o *v9; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  struct QuestRewardInfo_o *v11; // x8
  int32_t v12; // w20
  struct QuestRewardInfo_o *v13; // x8
  UnityEngine_Component_o *v14; // x20
  TitleInfoEventTowerReward___c__DisplayClass39_0_o *v15; // x21
  UnityEngine_GameObject_o *v16; // x0
  ServantRewardAction_o *v17; // x20
  System_Action_o *_9__1; // x21

  v2 = this;
  if ( (byte_418533E & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, v3);
    sub_B2C35C(&SoundManager_TypeInfo, v4);
    this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)sub_B2C35C(
                                                                  &Method_TitleInfoEventTowerReward___c__DisplayClass39_0__StartRewardAction_sub_b__1__,
                                                                  v5);
    byte_418533E = 1;
  }
  rewardInfo = v2->fields.rewardInfo;
  if ( !rewardInfo )
    goto LABEL_31;
  this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)Gift__IsServant_27324084(rewardInfo->fields.type, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    p__4__this = (UnityEngine_Component_o **)&v2->fields.__4__this;
    _4__this = v2->fields.__4__this;
    this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    if ( v2->fields.__4__this )
    {
      v9 = this;
      gameObject = UnityEngine_Component__get_gameObject(*p__4__this, 0LL);
      this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)GameObjectExtensions__GetParent(gameObject, 0LL);
      if ( v9 )
      {
        this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)SummonAssetManager__InstantiateSvtGetPrefab(
                                                                      (SummonAssetManager_o *)v9,
                                                                      (UnityEngine_Transform_o *)this,
                                                                      0,
                                                                      0LL);
        if ( _4__this )
        {
          _4__this->fields.servantRewardAction = (struct ServantRewardAction_o *)this;
          sub_B2C2F8(&_4__this->fields.servantRewardAction, this);
          v11 = v2->fields.rewardInfo;
          if ( v11 )
          {
            if ( v11->fields.isSkipSvtDetail )
              v12 = 38;
            else
              v12 = 6;
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
                ServantRewardAction__Setup_28838960((ServantRewardAction_o *)this, v2->fields.rewardInfo, v12, 0LL);
                goto LABEL_26;
              }
            }
          }
        }
      }
    }
LABEL_31:
    sub_B2C434(this, method);
  }
  v13 = v2->fields.rewardInfo;
  if ( !v13 )
    goto LABEL_31;
  this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)Gift__IsCommandCode_27324480(v13->fields.type, 0LL);
  p__4__this = (UnityEngine_Component_o **)&v2->fields.__4__this;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v14 = *p__4__this;
    this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    if ( !*p__4__this )
      goto LABEL_31;
    v15 = this;
    v16 = UnityEngine_Component__get_gameObject(*p__4__this, 0LL);
    this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)GameObjectExtensions__GetParent(v16, 0LL);
    if ( !v15 )
      goto LABEL_31;
    this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)SummonAssetManager__InstantiateSvtGetPrefab(
                                                                  (SummonAssetManager_o *)v15,
                                                                  (UnityEngine_Transform_o *)this,
                                                                  0,
                                                                  0LL);
    if ( !v14 )
      goto LABEL_31;
    *(_QWORD *)&v14[8].fields.m_CachedPtr = this;
    sub_B2C2F8(&v14[8].fields, this);
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
  v17 = *(ServantRewardAction_o **)&(*p__4__this)[8].fields.m_CachedPtr;
  _9__1 = v2->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v2,
      Method_TitleInfoEventTowerReward___c__DisplayClass39_0__StartRewardAction_sub_b__1__,
      0LL);
    v2->fields.__9__1 = _9__1;
    sub_B2C2F8(&v2->fields.__9__1, _9__1);
  }
  if ( !v17 )
    goto LABEL_31;
  ServantRewardAction__Play(v17, _9__1, 0.0, 0LL);
}


void __fastcall TitleInfoEventTowerReward___c__DisplayClass39_0___StartRewardAction_sub_b__1(
        TitleInfoEventTowerReward___c__DisplayClass39_0_o *this,
        const MethodInfo *method)
{
  TitleInfoEventTowerReward___c__DisplayClass39_0_o *v2; // x19
  __int64 v3; // x1
  struct TitleInfoEventTowerReward_o *_4__this; // x8
  UnityEngine_Object_o *gameObject; // x20

  v2 = this;
  if ( (byte_418533F & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)sub_B2C35C(
                                                                  &Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__,
                                                                  v3);
    byte_418533F = 1;
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
  UnityEngine_Object__DestroyImmediate_35315108(gameObject, 0LL);
  this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  if ( !this
    || (SummonAssetManager__UnloadSummonAssets((SummonAssetManager_o *)this, 0LL),
        (this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)v2->fields.__4__this) == 0LL) )
  {
LABEL_11:
    sub_B2C434(this, method);
  }
  TitleInfoEventTowerReward__StartRewardAction_sub(
    (TitleInfoEventTowerReward_o *)this,
    v2->fields.rewardInfoList,
    v2->fields.idx + 1,
    v2->fields.subEndAction,
    0LL);
}