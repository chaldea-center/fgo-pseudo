void __fastcall TitleInfoEventTowerReward___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v18; // x1
  struct TitleInfoEventTowerReward_StaticFields *v19; // x0
  System_Int32_array **v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  struct TitleInfoEventTowerReward_StaticFields *v27; // x0
  System_Int32_array **v28; // x1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7

  if ( (byte_42E6C40 & 1) == 0 )
  {
    sub_B5D5C4(&TitleInfoEventTowerReward_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_23052/*"tower_{0}_{1}"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_16972/*"bit_floor_reward"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_2707/*"Back/back{0:D5}"*/, v14, v15, v16);
    byte_42E6C40 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)TitleInfoEventTowerReward_TypeInfo->static_fields;
  v18 = (System_Int32_array **)StringLiteral_23052/*"tower_{0}_{1}"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_23052/*"tower_{0}_{1}"*/;
  sub_B5D560(static_fields, v18, v2, v3, v4, v5, v6, v7);
  v19 = TitleInfoEventTowerReward_TypeInfo->static_fields;
  v20 = (System_Int32_array **)StringLiteral_2707/*"Back/back{0:D5}"*/;
  v19->SPRITE_NAME_BG = (struct System_String_o *)StringLiteral_2707/*"Back/back{0:D5}"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v19->SPRITE_NAME_BG, v20, v21, v22, v23, v24, v25, v26);
  v27 = TitleInfoEventTowerReward_TypeInfo->static_fields;
  v28 = (System_Int32_array **)StringLiteral_16972/*"bit_floor_reward"*/;
  v27->CLIP_NAME_TOWER_REWARD = (struct System_String_o *)StringLiteral_16972/*"bit_floor_reward"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v27->CLIP_NAME_TOWER_REWARD, v28, v29, v30, v31, v32, v33, v34);
}


void __fastcall TitleInfoEventTowerReward___ctor(TitleInfoEventTowerReward_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall TitleInfoEventTowerReward__Close(TitleInfoEventTowerReward_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v12; // x1
  System_String_o *voiceName; // x21
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  struct System_String_o **p_voiceAssetName; // x20
  System_String_o *v21; // x21
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Action_o *v28; // x20
  const MethodInfo *v29; // x2

  if ( (byte_42E6C3D & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_TitleInfoEventTowerReward__Close_b__37_0__, v8, v9, v10);
    byte_42E6C3D = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B5D69C(0LL, v12);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  if ( this->fields.voicePlayer )
  {
    voiceName = this->fields.voiceName;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__stopVoice_23417380(voiceName, 0.0, 0LL);
    this->fields.voicePlayer = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.voicePlayer, 0LL, v14, v15, v16, v17, v18, v19);
  }
  p_voiceAssetName = &this->fields.voiceAssetName;
  if ( !System_String__IsNullOrEmpty(this->fields.voiceAssetName, 0LL) )
  {
    v21 = *p_voiceAssetName;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__releaseAudioAssetStorage(v21, 0LL);
    *p_voiceAssetName = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.voiceAssetName, 0LL, v22, v23, v24, v25, v26, v27);
  }
  *(_QWORD *)&this->fields.selectVoiceIndex = 0LL;
  this->fields.playCnt = 0;
  v28 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v28, (Il2CppObject *)this, Method_TitleInfoEventTowerReward__Close_b__37_0__, 0LL);
  TitleInfoEventTowerReward__StartRewardAction(this, v28, v29);
}


void __fastcall TitleInfoEventTowerReward__EndItemGetEffectAction(
        TitleInfoEventTowerReward_o *this,
        System_Action_o *afterDetail,
        const MethodInfo *method)
{
  if ( !afterDetail )
    sub_B5D69C(this, 0LL);
  System_Action__Invoke(afterDetail, 0LL);
}


void __fastcall TitleInfoEventTowerReward__EndPlayVoice(TitleInfoEventTowerReward_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TitleInfoEventTowerReward_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int32_t playCnt; // w8
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceList; // x20
  __int64 selectVoiceIndex; // x21
  ServantVoiceData_array *v11; // x9
  ServantVoiceData_o *v12; // x8
  __int64 v13; // x0

  v4 = this;
  if ( (byte_42E6C3A & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, (_DWORD)method, v2, v3);
    this = (TitleInfoEventTowerReward_o *)sub_B5D5C4(&StringLiteral_10821/*"PlayVoice"*/, v5, v6, v7);
    byte_42E6C3A = 1;
  }
  playCnt = v4->fields.playCnt;
  if ( playCnt < v4->fields.maxPlayCnt )
  {
    voiceList = v4->fields.voiceList;
    if ( !voiceList )
      goto LABEL_12;
    selectVoiceIndex = v4->fields.selectVoiceIndex;
    if ( voiceList->fields._size <= (unsigned int)selectVoiceIndex )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v11 = voiceList->fields._items->m_Items[selectVoiceIndex];
    if ( !v11 )
      goto LABEL_12;
    if ( playCnt >= v11->max_length )
    {
      v13 = sub_B5D6C8(this);
      sub_B5D668(v13, 0LL);
    }
    v12 = v11->m_Items[playCnt];
    if ( !v12 )
LABEL_12:
      sub_B5D69C(this, method);
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)v4,
      (System_String_o *)StringLiteral_10821/*"PlayVoice"*/,
      v12->fields.delay,
      0LL);
  }
}


void __fastcall TitleInfoEventTowerReward__OnLoadEndBG(TitleInfoEventTowerReward_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  _DWORD *monitor; // x8
  int32_t v9; // w21
  int32_t v10; // w22
  UIStandFigureR_o *klass; // x20
  System_Action_o *v12; // x23

  v4 = (Il2CppObject *)this;
  if ( (byte_42E6C36 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    this = (TitleInfoEventTowerReward_o *)sub_B5D5C4(&Method_TitleInfoEventTowerReward_OnLoadEndSvt__, v5, v6, v7);
    byte_42E6C36 = 1;
  }
  monitor = v4[8].monitor;
  if ( !monitor
    || (v9 = monitor[11],
        v10 = monitor[12],
        klass = (UIStandFigureR_o *)v4[4].klass,
        v12 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo),
        System_Action___ctor(v12, v4, Method_TitleInfoEventTowerReward_OnLoadEndSvt__, 0LL),
        !klass) )
  {
    sub_B5D69C(this, method);
  }
  UIStandFigureR__SetCharacter(klass, v9, v10, 1, 0, 0, v12, 0LL);
}


void __fastcall TitleInfoEventTowerReward__OnLoadEndSvt(TitleInfoEventTowerReward_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TitleInfoEventTowerReward_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
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
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  struct EventTowerReward_o *eventTowerReward; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v39; // x20
  struct EventTowerReward_o *v40; // x8
  struct System_String_array *voiceIds; // x8
  TitleInfoEventTowerReward_o *v42; // x22
  __int64 v43; // x25
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v44; // x23
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  unsigned __int64 v51; // x23
  struct EventTowerReward_o *v52; // x8
  struct System_String_array *v53; // x9
  int size; // w24
  TitleInfoEventTowerReward_o *v55; // x22
  __int64 v56; // x25
  unsigned int v57; // w8
  __int64 v58; // x8
  __int64 v59; // x8
  struct EventTowerReward_o *v60; // x9
  struct EventTowerReward_o *v61; // x8
  System_Int32_array **VoiceAssetName_31472176; // x0
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  System_String_o *voiceAssetName; // x20
  System_Action_o *v70; // x21
  __int64 v71; // x0

  v4 = this;
  if ( (byte_42E6C37 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantVoiceMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantVoiceData____AddRange__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, v23, v24, v25);
    sub_B5D5C4(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v26, v27, v28);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v29, v30, v31);
    sub_B5D5C4(&SoundManager_TypeInfo, v32, v33, v34);
    this = (TitleInfoEventTowerReward_o *)sub_B5D5C4(
                                            &Method_TitleInfoEventTowerReward__OnLoadEndSvt_b__31_0__,
                                            v35,
                                            v36,
                                            v37);
    byte_42E6C37 = 1;
  }
  eventTowerReward = v4->fields.eventTowerReward;
  if ( !eventTowerReward )
    goto LABEL_42;
  if ( eventTowerReward->fields.voiceIds )
  {
    v39 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v39,
      (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    this = (TitleInfoEventTowerReward_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_42;
    this = (TitleInfoEventTowerReward_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                            (DataManager_o *)this,
                                            (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
    v40 = v4->fields.eventTowerReward;
    if ( !v40 )
      goto LABEL_42;
    voiceIds = v40->fields.voiceIds;
    if ( !voiceIds )
      goto LABEL_42;
    v42 = this;
    v43 = *(_QWORD *)&voiceIds->max_length;
    v44 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v44,
      (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    v4->fields.voiceList = (struct System_Collections_Generic_List_ServantVoiceData____o *)v44;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v4->fields.voiceList,
      (System_Int32_array **)v44,
      v45,
      v46,
      v47,
      v48,
      v49,
      v50);
    if ( (int)v43 >= 1 )
    {
      v51 = 0LL;
      while ( 1 )
      {
        v52 = v4->fields.eventTowerReward;
        if ( !v52 )
          break;
        v53 = v52->fields.voiceIds;
        if ( !v53 )
          break;
        if ( v51 >= v53->max_length )
        {
LABEL_43:
          v71 = sub_B5D6C8(this);
          sub_B5D668(v71, 0LL);
        }
        if ( !v42 )
          break;
        this = (TitleInfoEventTowerReward_o *)ServantVoiceMaster__getEntity_31491968(
                                                (ServantVoiceMaster_o *)v42,
                                                14,
                                                v52->fields.svtId,
                                                v52->fields.limitCount,
                                                v53->m_Items[v51],
                                                0LL);
        if ( this )
        {
          if ( !v39 )
            break;
          System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
            (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v39,
            (System_Collections_Generic_IEnumerable_T__o *)this,
            (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_ServantVoiceData____AddRange__);
        }
        if ( (__int64)++v51 >= (int)v43 )
          goto LABEL_18;
      }
LABEL_42:
      sub_B5D69C(this, method);
    }
LABEL_18:
    this = (TitleInfoEventTowerReward_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_42;
    this = (TitleInfoEventTowerReward_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                            (DataManager_o *)this,
                                            (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    if ( !v39 )
      goto LABEL_42;
    size = v39->fields._size;
    if ( size >= 1 )
    {
      v55 = this;
      v56 = 4LL;
      v57 = v39->fields._size;
      while ( 1 )
      {
        if ( v57 <= (int)v56 - 4 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v58 = *((_QWORD *)&v39->fields._items->obj.klass + v56);
        if ( !v58 )
          goto LABEL_42;
        if ( !*(_DWORD *)(v58 + 24) )
          goto LABEL_43;
        v59 = *(_QWORD *)(v58 + 32);
        if ( !v59 )
          goto LABEL_42;
        v60 = v4->fields.eventTowerReward;
        if ( !v60 || !v55 )
          goto LABEL_42;
        this = (TitleInfoEventTowerReward_o *)VoicePlayCondMaster__isVoicePlay(
                                                (VoicePlayCondMaster_o *)v55,
                                                v60->fields.svtId,
                                                *(System_String_o **)(v59 + 16),
                                                0LL,
                                                -1LL,
                                                -1,
                                                0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( v39->fields._size <= (unsigned int)(v56 - 4) )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          if ( !v4->fields.voiceList )
            goto LABEL_42;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v4->fields.voiceList,
            *((EventMissionProgressRequest_Argument_ProgressData_o **)&v39->fields._items->obj.klass + v56),
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
        }
        if ( (int)v56 - 3 >= size )
          break;
        v57 = v39->fields._size;
        ++v56;
      }
    }
    v61 = v4->fields.eventTowerReward;
    if ( !v61 )
      goto LABEL_42;
    VoiceAssetName_31472176 = (System_Int32_array **)ServantVoiceEntity__getVoiceAssetName_31472176(
                                                       v61->fields.svtId,
                                                       0LL);
    v4->fields.voiceAssetName = (struct System_String_o *)VoiceAssetName_31472176;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v4->fields.voiceAssetName,
      VoiceAssetName_31472176,
      v63,
      v64,
      v65,
      v66,
      v67,
      v68);
    voiceAssetName = v4->fields.voiceAssetName;
    v70 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v70, (Il2CppObject *)v4, Method_TitleInfoEventTowerReward__OnLoadEndSvt_b__31_0__, 0LL);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__loadAudioAssetStorage(voiceAssetName, v70, 1, 0LL);
  }
}


void __fastcall TitleInfoEventTowerReward__OnTouchDisp(TitleInfoEventTowerReward_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  UnityEngine_Component_o *screenTouchInfo; // x0
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v16; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v18; // x21

  if ( (byte_42E6C3C & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&Method_TitleInfoEventTowerReward__OnTouchDisp_b__36_0__, v11, v12, v13);
    byte_42E6C3C = 1;
  }
  screenTouchInfo = (UnityEngine_Component_o *)this->fields.screenTouchInfo;
  if ( !screenTouchInfo )
    goto LABEL_10;
  screenTouchInfo = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(screenTouchInfo, 0LL);
  if ( !screenTouchInfo )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)screenTouchInfo, 0, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v16 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v16 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v16->static_fields->DEFAULT_FADE_TIME;
  v18 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v18, (Il2CppObject *)this, Method_TitleInfoEventTowerReward__OnTouchDisp_b__36_0__, 0LL);
  if ( !Instance )
LABEL_10:
    sub_B5D69C(screenTouchInfo, method);
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v18, 0LL);
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
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
  int v73; // w1
  int v74; // w2
  __int64 v75; // x3
  TerminalPramsManager_c *v76; // x0
  struct EventTowerReward_o *eventTowerReward_k__BackingField; // x1
  struct EventTowerReward_o **p_eventTowerReward; // x20
  int v79; // w1
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  TerminalPramsManager_c *v86; // x0
  struct QuestRewardInfo_array *resultEventTowerRewardInfo_k__BackingField; // x1
  struct EventTowerReward_o *eventTowerReward; // x8
  struct ScreenTouchInformationComponent_o **p_screenTouchInfo; // x22
  UnityEngine_Object_o *screenTouchInfo; // x23
  __int64 v91; // x1
  CommonUI_o *Instance; // x23
  __int64 transform; // x0
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v95; // x2
  System_String_array **v96; // x3
  System_Boolean_array **v97; // x4
  System_Int32_array **v98; // x5
  System_Int32_array *v99; // x6
  System_Int32_array *v100; // x7
  System_String_array **v101; // x2
  System_String_array **v102; // x3
  System_Boolean_array **v103; // x4
  System_Int32_array **v104; // x5
  System_Int32_array *v105; // x6
  System_Int32_array *v106; // x7
  __int64 v107; // x21
  TitleInfoEventTowerReward_c *v108; // x8
  int effectId; // w23
  System_String_o *CLIP_NAME_TOWER_REWARD; // x22
  System_String_o *FloorRewardPrefabName; // x0
  TitleInfoEventTowerReward_c *v112; // x0
  struct EventTowerReward_o *v113; // x8
  Il2CppObject *v114; // x0
  System_String_o *v115; // x0
  UnityEngine_Object_o *simpleAnimation; // x23
  System_String_o *v117; // x22
  __int64 v118; // x3
  __int64 v119; // x8
  __int64 v120; // x22
  unsigned __int64 v121; // x10
  SimpleAnimation_State_c **v122; // x11
  __int64 v123; // x0
  UnityEngine_Object_o *animation; // x23
  int towerId; // w8
  unsigned int v126; // w22
  struct System_Collections_Generic_List_UIFont__o *floorNumFontList; // x23
  int size; // w9
  UnityEngine_Object_o *v129; // x22
  struct EventTowerReward_o *v130; // x8
  struct System_Collections_Generic_List_UIFont__o *v131; // x23
  int v132; // w24
  struct EventTowerReward_o *v133; // x8
  UILabel_o *floorLabel; // x22
  UISprite_o *nameSprite; // x21
  System_String_o *v136; // x22
  Il2CppObject *v137; // x23
  Il2CppObject *v138; // x0
  int v139; // w23
  __int64 v140; // x21
  System_Text_StringBuilder_o *v141; // x22
  __int64 v142; // x26
  __int64 v143; // x27
  __int64 v144; // x8
  System_String_o *v145; // x0
  UILabel_o *rewardLabel; // x23
  _DWORD *v147; // x8
  int32_t v148; // w21
  struct EventTowerReward_o *v149; // x8
  System_String_o *SPRITE_NAME_BG; // x20
  Il2CppObject *v151; // x0
  System_String_o *v152; // x0
  ExUITexture_o *bgSprite; // x20
  System_String_o *v154; // x21
  System_Action_o *v155; // x22
  __int64 v156; // x0
  int32_t v157; // [xsp+0h] [xbp-70h] BYREF
  int eventId; // [xsp+4h] [xbp-6Ch] BYREF
  System_String_o *countText; // [xsp+8h] [xbp-68h] BYREF
  System_String_o *nameText; // [xsp+10h] [xbp-60h] BYREF
  WarEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_42E6C35 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventDetailMaster___, v10, v11, v12);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventTowerMaster___, v13, v14, v15);
    sub_B5D5C4(&Method_DataManager_GetMasterData_GiftMaster___, v16, v17, v18);
    sub_B5D5C4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v19, v20, v21);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___, v22, v23, v24);
    sub_B5D5C4(&int_TypeInfo, v25, v26, v27);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UIFont__get_Count__, v28, v29, v30);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UIFont__get_Item__, v31, v32, v33);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v34, v35, v36);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v37, v38, v39);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v40, v41, v42);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v43, v44, v45);
    sub_B5D5C4(&SimpleAnimation_State_TypeInfo, v46, v47, v48);
    sub_B5D5C4(&System_Text_StringBuilder_TypeInfo, v49, v50, v51);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v52, v53, v54);
    sub_B5D5C4(&Method_TitleInfoEventTowerReward_OnLoadEndBG__, v55, v56, v57);
    sub_B5D5C4(&TitleInfoEventTowerReward_TypeInfo, v58, v59, v60);
    sub_B5D5C4(&StringLiteral_26/*"\n"*/, v61, v62, v63);
    sub_B5D5C4(&StringLiteral_5818/*"EVENT_TOWER_REWARD_GET"*/, v64, v65, v66);
    sub_B5D5C4(&StringLiteral_11043/*"QUEST_CLEAR_COSTUME_GET"*/, v67, v68, v69);
    sub_B5D5C4(&StringLiteral_16096/*"_"*/, v70, v71, v72);
    sub_B5D5C4(&StringLiteral_5819/*"EVENT_TOWER_REWARD_GET_2"*/, v73, v74, v75);
    byte_42E6C35 = 1;
  }
  nameText = 0LL;
  entity = 0LL;
  countText = 0LL;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E4B40 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    byte_42E4B40 = 1;
  }
  v76 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v76 = TerminalPramsManager_TypeInfo;
  }
  eventTowerReward_k__BackingField = v76->static_fields->_eventTowerReward_k__BackingField;
  this->fields.eventTowerReward = eventTowerReward_k__BackingField;
  p_eventTowerReward = &this->fields.eventTowerReward;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.eventTowerReward,
    (System_Int32_array **)eventTowerReward_k__BackingField,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !byte_42E5CE8 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v79, (_DWORD)v80, v81);
    byte_42E5CE8 = 1;
  }
  v86 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v86 = TerminalPramsManager_TypeInfo;
  }
  resultEventTowerRewardInfo_k__BackingField = v86->static_fields->_resultEventTowerRewardInfo_k__BackingField;
  this->fields.resultEventTowerRewardInfo = resultEventTowerRewardInfo_k__BackingField;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.resultEventTowerRewardInfo,
    (System_Int32_array **)resultEventTowerRewardInfo_k__BackingField,
    v80,
    v81,
    v82,
    v83,
    v84,
    v85);
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
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !Instance )
      goto LABEL_146;
    transform = (__int64)CommonUI__CreateScreeenTouchInfo(Instance, (UnityEngine_Transform_o *)transform, 0, 0LL);
    if ( !transform )
      goto LABEL_146;
    Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                       (UnityEngine_GameObject_o *)transform,
                                                       (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    *p_screenTouchInfo = (struct ScreenTouchInformationComponent_o *)Component_srcLineSprite;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.screenTouchInfo,
      Component_srcLineSprite,
      v95,
      v96,
      v97,
      v98,
      v99,
      v100);
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.endCallback,
    (System_Int32_array **)callback,
    v101,
    v102,
    v103,
    v104,
    v105,
    v106);
  this->fields.state = 0;
  transform = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !transform )
    goto LABEL_146;
  transform = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                         (DataManager_o *)transform,
                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventTowerMaster___);
  if ( !*p_eventTowerReward || !transform )
    goto LABEL_146;
  transform = (__int64)EventTowerMaster__GetEntity(
                         (EventTowerMaster_o *)transform,
                         (*p_eventTowerReward)->fields.eventId,
                         (*p_eventTowerReward)->fields.towerId,
                         0LL);
  v107 = transform;
  v108 = TitleInfoEventTowerReward_TypeInfo;
  if ( (BYTE3(TitleInfoEventTowerReward_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventTowerReward_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventTowerReward_TypeInfo);
    v108 = TitleInfoEventTowerReward_TypeInfo;
  }
  if ( !*p_eventTowerReward
    || (effectId = (*p_eventTowerReward)->fields.effectId,
        CLIP_NAME_TOWER_REWARD = v108->static_fields->CLIP_NAME_TOWER_REWARD,
        (transform = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (transform = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                               (DataManager_o *)transform,
                               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventDetailMaster___),
        !*p_eventTowerReward)
    || !transform )
  {
LABEL_146:
    sub_B5D69C(transform, v91);
  }
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)transform,
         &entity,
         (*p_eventTowerReward)->fields.eventId,
         (const MethodInfo_23FAE6C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
    transform = (__int64)entity;
    if ( !entity )
      goto LABEL_146;
    FloorRewardPrefabName = EventDetailEntity__GetFloorRewardPrefabName((EventDetailEntity_o *)entity, 0LL);
    if ( FloorRewardPrefabName )
      CLIP_NAME_TOWER_REWARD = FloorRewardPrefabName;
  }
  v112 = TitleInfoEventTowerReward_TypeInfo;
  if ( (BYTE3(TitleInfoEventTowerReward_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventTowerReward_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventTowerReward_TypeInfo);
    v112 = TitleInfoEventTowerReward_TypeInfo;
  }
  transform = System_String__op_Equality(CLIP_NAME_TOWER_REWARD, v112->static_fields->CLIP_NAME_TOWER_REWARD, 0LL);
  if ( (transform & 1) != 0 )
  {
    v113 = *p_eventTowerReward;
    if ( !*p_eventTowerReward )
      goto LABEL_146;
    if ( v113->fields.towerId == 2 && v113->fields.floor == 100 )
      effectId = 3;
  }
  eventId = effectId;
  v114 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId);
  v115 = System_String__Concat_44657492(
           (Il2CppObject *)CLIP_NAME_TOWER_REWARD,
           (Il2CppObject *)StringLiteral_16096/*"_"*/,
           v114,
           0LL);
  simpleAnimation = (UnityEngine_Object_o *)this->fields.simpleAnimation;
  v117 = v115;
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
    transform = (__int64)SimpleAnimation__get_Item((SimpleAnimation_o *)transform, v117, 0LL);
    if ( !transform )
      goto LABEL_146;
    v119 = *(_QWORD *)transform;
    v120 = transform;
    if ( *(_WORD *)(*(_QWORD *)transform + 298LL) )
    {
      v121 = 0LL;
      v122 = (SimpleAnimation_State_c **)(*(_QWORD *)(v119 + 176) + 8LL);
      while ( *(v122 - 1) != SimpleAnimation_State_TypeInfo )
      {
        ++v121;
        v122 += 2;
        if ( v121 >= *(unsigned __int16 *)(*(_QWORD *)transform + 298LL) )
          goto LABEL_62;
      }
      v123 = v119 + 16LL * (*(_DWORD *)v122 + 14) + 312;
    }
    else
    {
LABEL_62:
      v123 = sub_AF54C0(transform, SimpleAnimation_State_TypeInfo, 14LL, v118);
    }
    transform = (*(__int64 (__fastcall **)(__int64, _QWORD))v123)(v120, *(_QWORD *)(v123 + 8));
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
    transform = (__int64)UnityEngine_Animation__GetClip((UnityEngine_Animation_o *)transform, v117, 0LL);
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
  v126 = towerId - 1;
  if ( towerId >= 1 )
  {
    floorNumFontList = this->fields.floorNumFontList;
    if ( !floorNumFontList )
      goto LABEL_146;
    size = floorNumFontList->fields._size;
    if ( size >= towerId )
    {
      if ( size <= v126 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v129 = (UnityEngine_Object_o *)floorNumFontList->fields._items->m_Items[v126];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      transform = UnityEngine_Object__op_Inequality(v129, 0LL, 0LL);
      if ( (transform & 1) != 0 )
      {
        v130 = this->fields.eventTowerReward;
        if ( !v130 )
          goto LABEL_146;
        v131 = this->fields.floorNumFontList;
        if ( !v131 )
          goto LABEL_146;
        v132 = v130->fields.towerId - 1;
        if ( v131->fields._size <= (unsigned int)v132 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        if ( !this->fields.floorLabel )
          goto LABEL_146;
        UILabel__set_font(this->fields.floorLabel, v131->fields._items->m_Items[v132], 0LL);
      }
    }
  }
  v133 = this->fields.eventTowerReward;
  if ( !v133 )
    goto LABEL_146;
  floorLabel = this->fields.floorLabel;
  transform = (__int64)System_Int32__ToString((int)v133 + 24, 0LL);
  if ( !floorLabel )
    goto LABEL_146;
  UILabel__set_text(floorLabel, (System_String_o *)transform, 0LL);
  if ( v107 )
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
    v136 = **(System_String_o ***)(transform + 184);
    eventId = (*p_eventTowerReward)->fields.eventId;
    transform = j_il2cpp_value_box_0(int_TypeInfo, &eventId);
    if ( !*p_eventTowerReward )
      goto LABEL_146;
    v137 = (Il2CppObject *)transform;
    v157 = (*p_eventTowerReward)->fields.towerId;
    v138 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v157);
    transform = (__int64)System_String__Format_44573324(v136, v137, v138, 0LL);
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
  transform = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !transform )
    goto LABEL_146;
  transform = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                         (DataManager_o *)transform,
                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_GiftMaster___);
  if ( !*p_eventTowerReward )
    goto LABEL_146;
  if ( !transform )
    goto LABEL_146;
  transform = (__int64)GiftMaster__GetGiftListById((GiftMaster_o *)transform, (*p_eventTowerReward)->fields.giftId, 0LL);
  if ( !transform )
    goto LABEL_146;
  v139 = *(_DWORD *)(transform + 24);
  v140 = transform;
  if ( v139 >= 1 )
  {
    v141 = (System_Text_StringBuilder_o *)sub_B5D694(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v141, 0LL);
    v142 = 0LL;
    v143 = v140 + 32;
    while ( 1 )
    {
      if ( (_DWORD)v142 )
      {
        if ( !v141 )
          goto LABEL_146;
        transform = (__int64)System_Text_StringBuilder__Append_42953744(v141, (System_String_o *)StringLiteral_26/*"\n"*/, 0LL);
      }
      if ( (unsigned int)v142 >= *(_DWORD *)(v140 + 24) )
        goto LABEL_147;
      transform = *(_QWORD *)(v143 + 8 * v142);
      if ( !transform )
        goto LABEL_146;
      GiftEntity__GetInfo((GiftEntity_o *)transform, &nameText, &countText, 0LL);
      if ( (unsigned int)v142 >= *(_DWORD *)(v140 + 24) )
        goto LABEL_147;
      v144 = *(_QWORD *)(v143 + 8 * v142);
      if ( !v144 )
        goto LABEL_146;
      if ( *(_DWORD *)(v144 + 20) == 9 )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v145 = (System_String_o *)StringLiteral_11043/*"QUEST_CLEAR_COSTUME_GET"*/;
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
          transform = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_5818/*"EVENT_TOWER_REWARD_GET"*/, 0LL);
          if ( !v141 )
            goto LABEL_146;
          transform = (__int64)System_Text_StringBuilder__AppendFormat_42960296(
                                 v141,
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
        v145 = (System_String_o *)StringLiteral_5819/*"EVENT_TOWER_REWARD_GET_2"*/;
      }
      transform = (__int64)LocalizationManager__Get(v145, 0LL);
      if ( !v141 )
        goto LABEL_146;
      transform = (__int64)System_Text_StringBuilder__AppendFormat(
                             v141,
                             (System_String_o *)transform,
                             (Il2CppObject *)nameText,
                             0LL);
LABEL_133:
      if ( (int)++v142 >= v139 )
      {
        rewardLabel = this->fields.rewardLabel;
        transform = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v141->klass->vtable._3_ToString.method)(
                      v141,
                      v141->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
        if ( rewardLabel )
        {
          UILabel__set_text(rewardLabel, (System_String_o *)transform, 0LL);
          if ( !*(_DWORD *)(v140 + 24) )
          {
LABEL_147:
            v156 = sub_B5D6C8(transform);
            sub_B5D668(v156, 0LL);
          }
          v147 = *(_DWORD **)(v140 + 32);
          if ( v147 )
          {
            transform = (__int64)this->fields.itemIcon;
            if ( transform )
            {
              v148 = v147[5];
              ItemIconComponent__SetGift((ItemIconComponent_o *)transform, v148, v147[6], v147[7], 0, 0LL);
              transform = (__int64)this->fields.imageFrame;
              if ( transform )
              {
                UnityEngine_GameObject__SetActive(
                  (UnityEngine_GameObject_o *)transform,
                  ((unsigned int)(v148 - 1) < 0xB) & (0x461u >> (v148 - 1)),
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
  v149 = *p_eventTowerReward;
  if ( !*p_eventTowerReward )
    goto LABEL_146;
  SPRITE_NAME_BG = TitleInfoEventTowerReward_TypeInfo->static_fields->SPRITE_NAME_BG;
  eventId = v149->fields.bgId;
  v151 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId);
  v152 = System_String__Format(SPRITE_NAME_BG, v151, 0LL);
  bgSprite = this->fields.bgSprite;
  v154 = v152;
  v155 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v155, (Il2CppObject *)this, Method_TitleInfoEventTowerReward_OnLoadEndBG__, 0LL);
  if ( !bgSprite )
    goto LABEL_146;
  ExUITexture__SetAssetImage(bgSprite, v154, v155, 0LL);
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
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceList; // x20
  __int64 selectVoiceIndex; // x21
  ServantVoiceData_array *v23; // x8
  __int64 playCnt; // x9
  ServantVoiceData_o *v25; // x20
  System_Int32_array **id; // x1
  struct EventTowerReward_o *eventTowerReward; // x8
  System_String_o *VoiceAssetName_31472176; // x0
  System_String_o *voiceName; // x21
  System_String_o *v30; // x22
  SeManager_c *v31; // x8
  float DEFAULT_VOLUME; // s8
  System_Action_o *v33; // x23
  System_Int32_array **v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  UIStandFigureR_o *standFigure; // x21
  int32_t face; // w22
  float FadeTime; // s0
  __int64 v44; // x0

  v8 = this;
  if ( (byte_42E6C39 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, v9, v10, v11);
    sub_B5D5C4(&SeManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&SoundManager_TypeInfo, v15, v16, v17);
    this = (TitleInfoEventTowerReward_o *)sub_B5D5C4(&Method_TitleInfoEventTowerReward_EndPlayVoice__, v18, v19, v20);
    byte_42E6C39 = 1;
  }
  voiceList = v8->fields.voiceList;
  if ( !voiceList )
    goto LABEL_18;
  selectVoiceIndex = v8->fields.selectVoiceIndex;
  if ( voiceList->fields._size <= (unsigned int)selectVoiceIndex )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v23 = voiceList->fields._items->m_Items[selectVoiceIndex];
  if ( !v23 )
    goto LABEL_18;
  playCnt = v8->fields.playCnt;
  if ( (unsigned int)playCnt >= v23->max_length )
  {
    v44 = sub_B5D6C8(this);
    sub_B5D668(v44, 0LL);
  }
  v25 = v23->m_Items[playCnt];
  if ( !v25 )
    goto LABEL_18;
  id = (System_Int32_array **)v25->fields.id;
  v8->fields.voiceName = (struct System_String_o *)id;
  sub_B5D560((BattleServantConfConponent_o *)&v8->fields.voiceName, id, v2, v3, v4, v5, v6, v7);
  eventTowerReward = v8->fields.eventTowerReward;
  if ( !eventTowerReward )
    goto LABEL_18;
  VoiceAssetName_31472176 = ServantVoiceEntity__getVoiceAssetName_31472176(eventTowerReward->fields.svtId, 0LL);
  voiceName = v8->fields.voiceName;
  v30 = VoiceAssetName_31472176;
  v31 = SeManager_TypeInfo;
  if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    v31 = SeManager_TypeInfo;
  }
  DEFAULT_VOLUME = v31->static_fields->DEFAULT_VOLUME;
  v33 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v33, (Il2CppObject *)v8, Method_TitleInfoEventTowerReward_EndPlayVoice__, 0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  v34 = (System_Int32_array **)SoundManager__playVoice_23391328(v30, voiceName, DEFAULT_VOLUME, v33, 0LL);
  v8->fields.voicePlayer = (struct SePlayer_o *)v34;
  sub_B5D560((BattleServantConfConponent_o *)&v8->fields.voicePlayer, v34, v35, v36, v37, v38, v39, v40);
  standFigure = v8->fields.standFigure;
  face = v25->fields.face;
  FadeTime = ServantVoiceData__GetFadeTime(v25, 0LL);
  if ( !standFigure )
LABEL_18:
    sub_B5D69C(this, method);
  UIStandFigureR__SetFace(standFigure, face, FadeTime, 0LL);
  ++v8->fields.playCnt;
}


void __fastcall TitleInfoEventTowerReward__StartRewardAction(
        TitleInfoEventTowerReward_o *this,
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
  __int64 v12; // x21
  System_Action_o *v13; // x0
  __int64 v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Action_o **v21; // x22
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  QuestRewardInfo_array *resultEventTowerRewardInfo; // x20
  System_Action_o *v29; // x22
  const MethodInfo *v30; // x4

  if ( (byte_42E6C3E & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_TitleInfoEventTowerReward___c__DisplayClass38_0__StartRewardAction_b__0__, v6, v7, v8);
    sub_B5D5C4(&TitleInfoEventTowerReward___c__DisplayClass38_0_TypeInfo, v9, v10, v11);
    byte_42E6C3E = 1;
  }
  v12 = sub_B5D694(TitleInfoEventTowerReward___c__DisplayClass38_0_TypeInfo);
  TitleInfoEventTowerReward___c__DisplayClass38_0___ctor((TitleInfoEventTowerReward___c__DisplayClass38_0_o *)v12, 0LL);
  if ( !v12 )
    goto LABEL_8;
  *(_QWORD *)(v12 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v12 + 16), (System_Int32_array **)this, v15, v16, v17, v18, v19, v20);
  *(_QWORD *)(v12 + 24) = callback;
  v21 = (System_Action_o **)(v12 + 24);
  sub_B5D560((BattleServantConfConponent_o *)(v12 + 24), (System_Int32_array **)callback, v22, v23, v24, v25, v26, v27);
  resultEventTowerRewardInfo = this->fields.resultEventTowerRewardInfo;
  if ( resultEventTowerRewardInfo )
  {
    v29 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      v29,
      (Il2CppObject *)v12,
      Method_TitleInfoEventTowerReward___c__DisplayClass38_0__StartRewardAction_b__0__,
      0LL);
    TitleInfoEventTowerReward__StartRewardAction_sub(this, resultEventTowerRewardInfo, 0, v29, v30);
    return;
  }
  v13 = *v21;
  if ( !*v21 )
LABEL_8:
    sub_B5D69C(v13, v14);
  System_Action__Invoke(v13, 0LL);
}


void __fastcall TitleInfoEventTowerReward__StartRewardAction_sub(
        TitleInfoEventTowerReward_o *this,
        QuestRewardInfo_array *rewardInfoList,
        int32_t idx,
        System_Action_o *subEndAction,
        const MethodInfo *method)
{
  System_Int32_array **v5; // x28
  int32_t v6; // w19
  System_Int32_array **v7; // x20
  System_Int32_array **v9; // x1
  __int64 v10; // x19
  System_Action_o *IsServant_28424960; // x0
  __int64 v12; // x1
  WarEntity_o *Entity; // x0
  WarEntity_o *v14; // x19
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
  __int64 v33; // x26
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_Action_o **v46; // x20
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  __int64 v59; // x8
  __int64 v60; // x9
  int v61; // w10
  SummonAssetManager_o *Instance; // x19
  System_Action_o *v63; // x20
  __int64 v64; // x0

  v5 = (System_Int32_array **)subEndAction;
  v6 = idx;
  v7 = (System_Int32_array **)rewardInfoList;
  while ( 1 )
  {
    if ( (byte_42E6C3F & 1) == 0 )
    {
      sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)rewardInfoList, idx, subEndAction);
      sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v15, v16, v17);
      sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v18, v19, v20);
      sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21, v22, v23);
      sub_B5D5C4(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, v24, v25, v26);
      sub_B5D5C4(&Method_TitleInfoEventTowerReward___c__DisplayClass39_0__StartRewardAction_sub_b__0__, v27, v28, v29);
      sub_B5D5C4(&TitleInfoEventTowerReward___c__DisplayClass39_0_TypeInfo, v30, v31, v32);
      byte_42E6C3F = 1;
    }
    v33 = sub_B5D694(TitleInfoEventTowerReward___c__DisplayClass39_0_TypeInfo);
    TitleInfoEventTowerReward___c__DisplayClass39_0___ctor(
      (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)v33,
      0LL);
    if ( !v33 )
      goto LABEL_24;
    *(_QWORD *)(v33 + 24) = this;
    sub_B5D560((BattleServantConfConponent_o *)(v33 + 24), (System_Int32_array **)this, v34, v35, v36, v37, v38, v39);
    *(_QWORD *)(v33 + 32) = v7;
    sub_B5D560((BattleServantConfConponent_o *)(v33 + 32), v7, v40, v41, v42, v43, v44, v45);
    *(_QWORD *)(v33 + 48) = v5;
    v46 = (System_Action_o **)(v33 + 48);
    *(_DWORD *)(v33 + 40) = v6;
    sub_B5D560((BattleServantConfConponent_o *)(v33 + 48), v5, v47, v48, v49, v50, v51, v52);
    v59 = *(_QWORD *)(v33 + 32);
    if ( !v59 )
      goto LABEL_24;
    v60 = *(int *)(v33 + 40);
    v61 = *(_DWORD *)(v59 + 24);
    if ( (int)v60 >= v61 )
    {
      IsServant_28424960 = *v46;
      if ( *v46 )
      {
        System_Action__Invoke(IsServant_28424960, 0LL);
        return;
      }
LABEL_24:
      sub_B5D69C(IsServant_28424960, v12);
    }
    if ( (unsigned int)v60 >= v61 )
    {
      v64 = sub_B5D6C8(IsServant_28424960);
      sub_B5D668(v64, 0LL);
    }
    v9 = *(System_Int32_array ***)(v59 + 8 * v60 + 32);
    *(_QWORD *)(v33 + 16) = v9;
    v10 = v33 + 16;
    sub_B5D560((BattleServantConfConponent_o *)(v33 + 16), v9, v53, v54, v55, v56, v57, v58);
    if ( !*(_QWORD *)(v33 + 16) )
      goto LABEL_24;
    IsServant_28424960 = (System_Action_o *)Gift__IsServant_28424960(*(_DWORD *)(*(_QWORD *)(v33 + 16) + 16LL), 0LL);
    if ( ((unsigned __int8)IsServant_28424960 & 1) == 0 )
      break;
    IsServant_28424960 = (System_Action_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !IsServant_28424960 )
      goto LABEL_24;
    IsServant_28424960 = (System_Action_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)IsServant_28424960,
                                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !*(_QWORD *)v10 || !IsServant_28424960 )
      goto LABEL_24;
    Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               (DataMasterBase_WarMaster__WarEntity__int__o *)IsServant_28424960,
               *(_DWORD *)(*(_QWORD *)v10 + 20LL),
               (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
    v7 = *(System_Int32_array ***)(v33 + 32);
    v5 = *(System_Int32_array ***)(v33 + 48);
    v6 = *(_DWORD *)(v33 + 40) + 1;
  }
  if ( !*(_QWORD *)v10 )
    goto LABEL_24;
  if ( !Gift__IsCommandCode_28425356(*(_DWORD *)(*(_QWORD *)v10 + 16LL), 0LL) )
    goto LABEL_14;
LABEL_22:
  Instance = (SummonAssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  v63 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v63,
    (Il2CppObject *)v33,
    Method_TitleInfoEventTowerReward___c__DisplayClass39_0__StartRewardAction_sub_b__0__,
    0LL);
  if ( !Instance )
    goto LABEL_24;
  SummonAssetManager__LoadSummonAssets(Instance, v63, 0LL);
}


void __fastcall TitleInfoEventTowerReward__StartVoice(TitleInfoEventTowerReward_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TitleInfoEventTowerReward_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceList; // x8
  System_Random_o *v12; // x20
  struct System_Collections_Generic_List_ServantVoiceData____o *v13; // x8
  struct System_Collections_Generic_List_ServantVoiceData____o *v14; // x21
  ServantVoiceData_array *v15; // x8

  v4 = this;
  if ( (byte_42E6C38 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, v5, v6, v7);
    this = (TitleInfoEventTowerReward_o *)sub_B5D5C4(&System_Random_TypeInfo, v8, v9, v10);
    byte_42E6C38 = 1;
  }
  voiceList = v4->fields.voiceList;
  if ( !voiceList )
    goto LABEL_13;
  if ( voiceList->fields._size )
  {
    v12 = (System_Random_o *)sub_B5D694(System_Random_TypeInfo);
    System_Random___ctor(v12, 0LL);
    v13 = v4->fields.voiceList;
    if ( v13 )
    {
      if ( v12 )
      {
        this = (TitleInfoEventTowerReward_o *)((__int64 (__fastcall *)(System_Random_o *, _QWORD, Il2CppMethodPointer))v12->klass->vtable._7_Next.method)(
                                                v12,
                                                (unsigned int)v13->fields._size,
                                                v12->klass->vtable._8_NextDouble.methodPtr);
        v14 = v4->fields.voiceList;
        v4->fields.selectVoiceIndex = (int)this;
        if ( v14 )
        {
          if ( v14->fields._size <= (unsigned int)this )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          v15 = v14->fields._items->m_Items[(int)this];
          if ( v15 )
          {
            *(_QWORD *)&v4->fields.maxPlayCnt = (unsigned int)*(_QWORD *)&v15->max_length;
            TitleInfoEventTowerReward__PlayVoice(v4, method);
            return;
          }
        }
      }
    }
LABEL_13:
    sub_B5D69C(this, method);
  }
}


void __fastcall TitleInfoEventTowerReward__Update(TitleInfoEventTowerReward_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int32_t state; // w8
  UnityEngine_Object_o *simpleAnimation; // x20
  UnityEngine_Object_o *monitor; // x0
  __int64 v14; // x1
  struct SimpleAnimation_o *v15; // x20
  System_String_o *name; // x0
  __int64 v17; // x3
  UnityEngine_Object_c *klass; // x8
  UnityEngine_Object_o *v19; // x20
  unsigned __int64 v20; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 v22; // x0
  const MethodInfo *v23; // x1
  UnityEngine_Object_o *animation; // x20
  UnityEngine_Animation_o *v25; // x20
  System_String_o *v26; // x0
  UnityEngine_AnimationState_o *v27; // x20
  float time; // s8
  __int64 v29; // x3
  long double v30; // q0
  UnityEngine_Object_c *v31; // x8
  unsigned __int64 v32; // x10
  SimpleAnimation_State_c **v33; // x11
  __int64 v34; // x0

  if ( (byte_42E6C3B & 1) == 0 )
  {
    sub_B5D5C4(&CTouch_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&SimpleAnimation_State_TypeInfo, v8, v9, v10);
    byte_42E6C3B = 1;
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
      v15 = this->fields.simpleAnimation;
      if ( !v15 )
        goto LABEL_44;
      monitor = (UnityEngine_Object_o *)v15[1].monitor;
      if ( !monitor )
        goto LABEL_44;
      name = UnityEngine_Object__get_name(monitor, 0LL);
      monitor = (UnityEngine_Object_o *)SimpleAnimation__get_Item(v15, name, 0LL);
      if ( !monitor )
        goto LABEL_44;
      klass = monitor->klass;
      v19 = monitor;
      if ( *(_WORD *)&monitor->klass->_2.bitflags1 )
      {
        v20 = 0LL;
        p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
        {
          ++v20;
          p_offset += 2;
          if ( v20 >= *(unsigned __int16 *)&monitor->klass->_2.bitflags1 )
            goto LABEL_16;
        }
        v22 = (__int64)(&klass->vtable._3_ToString.method + 2 * *(_DWORD *)p_offset);
      }
      else
      {
LABEL_16:
        v22 = sub_AF54C0(monitor, SimpleAnimation_State_TypeInfo, 3LL, v17);
      }
      v30 = ((long double (__fastcall *)(UnityEngine_Object_o *, _QWORD))*(_QWORD *)v22)(v19, *(_QWORD *)(v22 + 8));
      v31 = v19->klass;
      time = *(float *)&v30;
      if ( *(_WORD *)&v19->klass->_2.bitflags1 )
      {
        v32 = 0LL;
        v33 = (SimpleAnimation_State_c **)&v31->_1.interfaceOffsets->offset;
        while ( *(v33 - 1) != SimpleAnimation_State_TypeInfo )
        {
          ++v32;
          v33 += 2;
          if ( v32 >= *(unsigned __int16 *)&v19->klass->_2.bitflags1 )
            goto LABEL_36;
        }
        v34 = (__int64)(&v31[1]._1.implementedInterfaces + 2 * *(_DWORD *)v33);
      }
      else
      {
LABEL_36:
        v34 = sub_AF54C0(v19, SimpleAnimation_State_TypeInfo, 14LL, v29);
      }
      monitor = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(UnityEngine_Object_o *, _QWORD))v34)(
                                          v19,
                                          *(_QWORD *)(v34 + 8));
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
      v25 = this->fields.animation;
      if ( !v25 )
        goto LABEL_44;
      monitor = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(this->fields.animation, 0LL);
      if ( !monitor )
        goto LABEL_44;
      v26 = UnityEngine_Object__get_name(monitor, 0LL);
      monitor = (UnityEngine_Object_o *)UnityEngine_Animation__get_Item(v25, v26, 0LL);
      if ( !monitor )
        goto LABEL_44;
      v27 = (UnityEngine_AnimationState_o *)monitor;
      time = UnityEngine_AnimationState__get_time((UnityEngine_AnimationState_o *)monitor, 0LL);
      monitor = (UnityEngine_Object_o *)UnityEngine_AnimationState__get_clip(v27, 0LL);
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
    sub_B5D69C(monitor, v14);
  }
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  if ( CTouch__isTouchPush(0LL) )
    TitleInfoEventTowerReward__OnTouchDisp(this, v23);
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
    sub_B5D560(p_endCallback, 0LL, v2, v3, v4, v5, v6, v7);
    ActionExtensions__Call(v9, 0LL);
  }
}


void __fastcall TitleInfoEventTowerReward___OnLoadEndSvt_b__31_0(
        TitleInfoEventTowerReward_o *this,
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
  CommonUI_o *Instance; // x0
  __int64 v27; // x1
  CommonUI_o *v28; // x20
  struct EventTowerReward_o *eventTowerReward; // x8
  struct EventTowerReward_o *v30; // x8
  System_String_o *topImg; // x20
  UnityEngine_Object_o *simpleAnimation; // x20
  struct SimpleAnimation_o *v33; // x8
  UnityEngine_Object_o *monitor; // x20
  struct SimpleAnimation_o *v35; // x20
  System_String_o *name; // x0
  UnityEngine_Object_o *animation; // x20
  UnityEngine_Object_o *clip; // x20
  UnityEngine_Animation_o *v39; // x20
  System_String_o *v40; // x0

  if ( (byte_42E6C41 & 1) == 0 )
  {
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_BgmMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataMasterBase_BgmMaster__BgmEntity__int__GetEntity__, v8, v9, v10);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v17, v18, v19);
    sub_B5D5C4(&SoundManager_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_13207/*"StartVoice"*/, v23, v24, v25);
    byte_42E6C41 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v28 = Instance;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !v28 )
    goto LABEL_46;
  CommonUI__maskFadein(v28, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_13207/*"StartVoice"*/,
    this->fields.voiceStartTime,
    0LL);
  eventTowerReward = this->fields.eventTowerReward;
  if ( !eventTowerReward )
    goto LABEL_46;
  if ( eventTowerReward->fields.bgmId >= 1 )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_46;
    Instance = (CommonUI_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                               (DataManager_o *)Instance,
                               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_BgmMaster___);
    v30 = this->fields.eventTowerReward;
    if ( !v30 )
      goto LABEL_46;
    if ( !Instance )
      goto LABEL_46;
    Instance = (CommonUI_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                               (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                               v30->fields.bgmId,
                               (const MethodInfo_23FAE10 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__GetEntity__);
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
    v33 = this->fields.simpleAnimation;
    if ( !v33 )
      goto LABEL_46;
    monitor = (UnityEngine_Object_o *)v33[1].monitor;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    Instance = (CommonUI_o *)UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      v35 = this->fields.simpleAnimation;
      if ( v35 )
      {
        Instance = (CommonUI_o *)v35[1].monitor;
        if ( Instance )
        {
          name = UnityEngine_Object__get_name((UnityEngine_Object_o *)Instance, 0LL);
          SimpleAnimation__Play_16676044(v35, name, 0LL);
          goto LABEL_43;
        }
      }
LABEL_46:
      sub_B5D69C(Instance, v27);
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
        v39 = this->fields.animation;
        if ( v39 )
        {
          Instance = (CommonUI_o *)UnityEngine_Animation__get_clip(this->fields.animation, 0LL);
          if ( Instance )
          {
            v40 = UnityEngine_Object__get_name((UnityEngine_Object_o *)Instance, 0LL);
            UnityEngine_Animation__Play_51249124(v39, v40, 0LL);
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
    sub_B5D69C(0LL, method);
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
  int v2; // w2
  __int64 v3; // x3
  TitleInfoEventTowerReward___c__DisplayClass39_0_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  struct QuestRewardInfo_o *rewardInfo; // x8
  struct TitleInfoEventTowerReward_o *_4__this; // x20
  UnityEngine_Component_o **p__4__this; // x22
  TitleInfoEventTowerReward___c__DisplayClass39_0_o *v17; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  struct QuestRewardInfo_o *v19; // x8
  int32_t v20; // w20
  struct QuestRewardInfo_o *v21; // x8
  UnityEngine_Component_o *v22; // x20
  TitleInfoEventTowerReward___c__DisplayClass39_0_o *v23; // x21
  UnityEngine_GameObject_o *v24; // x0
  ServantRewardAction_o *v25; // x20
  System_Action_o *_9__1; // x21

  v4 = this;
  if ( (byte_42E6245 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)sub_B5D5C4(
                                                                  &Method_TitleInfoEventTowerReward___c__DisplayClass39_0__StartRewardAction_sub_b__1__,
                                                                  v11,
                                                                  v12,
                                                                  v13);
    byte_42E6245 = 1;
  }
  rewardInfo = v4->fields.rewardInfo;
  if ( !rewardInfo )
    goto LABEL_31;
  this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)Gift__IsServant_28424960(rewardInfo->fields.type, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    p__4__this = (UnityEngine_Component_o **)&v4->fields.__4__this;
    _4__this = v4->fields.__4__this;
    this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    if ( v4->fields.__4__this )
    {
      v17 = this;
      gameObject = UnityEngine_Component__get_gameObject(*p__4__this, 0LL);
      this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)GameObjectExtensions__GetParent(gameObject, 0LL);
      if ( v17 )
      {
        this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)SummonAssetManager__InstantiateSvtGetPrefab(
                                                                      (SummonAssetManager_o *)v17,
                                                                      (UnityEngine_Transform_o *)this,
                                                                      0,
                                                                      0LL);
        if ( _4__this )
        {
          _4__this->fields.servantRewardAction = (struct ServantRewardAction_o *)this;
          sub_B5D560(&_4__this->fields.servantRewardAction);
          v19 = v4->fields.rewardInfo;
          if ( v19 )
          {
            if ( v19->fields.isSkipSvtDetail )
              v20 = 38;
            else
              v20 = 6;
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
                ServantRewardAction__Setup_29038112((ServantRewardAction_o *)this, v4->fields.rewardInfo, v20, 0LL);
                goto LABEL_26;
              }
            }
          }
        }
      }
    }
LABEL_31:
    sub_B5D69C(this, method);
  }
  v21 = v4->fields.rewardInfo;
  if ( !v21 )
    goto LABEL_31;
  this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)Gift__IsCommandCode_28425356(v21->fields.type, 0LL);
  p__4__this = (UnityEngine_Component_o **)&v4->fields.__4__this;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v22 = *p__4__this;
    this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    if ( !*p__4__this )
      goto LABEL_31;
    v23 = this;
    v24 = UnityEngine_Component__get_gameObject(*p__4__this, 0LL);
    this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)GameObjectExtensions__GetParent(v24, 0LL);
    if ( !v23 )
      goto LABEL_31;
    this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)SummonAssetManager__InstantiateSvtGetPrefab(
                                                                  (SummonAssetManager_o *)v23,
                                                                  (UnityEngine_Transform_o *)this,
                                                                  0,
                                                                  0LL);
    if ( !v22 )
      goto LABEL_31;
    *(_QWORD *)&v22[8].fields.m_CachedPtr = this;
    sub_B5D560(&v22[8].fields);
    if ( !*p__4__this )
      goto LABEL_31;
    this = *(TitleInfoEventTowerReward___c__DisplayClass39_0_o **)&(*p__4__this)[8].fields.m_CachedPtr;
    if ( !this )
      goto LABEL_31;
    ServantRewardAction__SetupCommandCode((ServantRewardAction_o *)this, v4->fields.rewardInfo, 6, 0LL);
  }
LABEL_26:
  if ( !*p__4__this )
    goto LABEL_31;
  v25 = *(ServantRewardAction_o **)&(*p__4__this)[8].fields.m_CachedPtr;
  _9__1 = v4->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_TitleInfoEventTowerReward___c__DisplayClass39_0__StartRewardAction_sub_b__1__,
      0LL);
    v4->fields.__9__1 = _9__1;
    sub_B5D560(&v4->fields.__9__1);
  }
  if ( !v25 )
    goto LABEL_31;
  ServantRewardAction__Play(v25, _9__1, 0.0, 0LL);
}


void __fastcall TitleInfoEventTowerReward___c__DisplayClass39_0___StartRewardAction_sub_b__1(
        TitleInfoEventTowerReward___c__DisplayClass39_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TitleInfoEventTowerReward___c__DisplayClass39_0_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct TitleInfoEventTowerReward_o *_4__this; // x8
  UnityEngine_Object_o *gameObject; // x20

  v4 = this;
  if ( (byte_42E6246 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)sub_B5D5C4(
                                                                  &Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__,
                                                                  v5,
                                                                  v6,
                                                                  v7);
    byte_42E6246 = 1;
  }
  _4__this = v4->fields.__4__this;
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
  UnityEngine_Object__DestroyImmediate_35620448(gameObject, 0LL);
  this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  if ( !this
    || (SummonAssetManager__UnloadSummonAssets((SummonAssetManager_o *)this, 0LL),
        (this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)v4->fields.__4__this) == 0LL) )
  {
LABEL_11:
    sub_B5D69C(this, method);
  }
  TitleInfoEventTowerReward__StartRewardAction_sub(
    (TitleInfoEventTowerReward_o *)this,
    v4->fields.rewardInfoList,
    v4->fields.idx + 1,
    v4->fields.subEndAction,
    0LL);
}