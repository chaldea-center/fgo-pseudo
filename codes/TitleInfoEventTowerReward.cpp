void TitleInfoEventTowerReward___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  int32_t v8; // w1
  struct TitleInfoEventTowerReward_StaticFields *static_fields; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  int32_t v16; // w1
  struct TitleInfoEventTowerReward_StaticFields *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7

  if ( (byte_596F127 & 1) == 0 )
  {
    sub_2213A60(&TitleInfoEventTowerReward_TypeInfo);
    sub_2213A60(&StringLiteral_25445/*"tower_{0}_{1}"*/);
    sub_2213A60(&StringLiteral_17948/*"bit_floor_reward"*/);
    sub_2213A60(&StringLiteral_3153/*"Back/back{0:D5}"*/);
    byte_596F127 = 1;
  }
  v7 = StringLiteral_25445/*"tower_{0}_{1}"*/;
  TitleInfoEventTowerReward_TypeInfo->static_fields->SPRITE_NAME_TOWER = (struct System_String_o *)StringLiteral_25445/*"tower_{0}_{1}"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)TitleInfoEventTowerReward_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v8 = StringLiteral_3153/*"Back/back{0:D5}"*/;
  static_fields = TitleInfoEventTowerReward_TypeInfo->static_fields;
  static_fields->SPRITE_NAME_BG = (struct System_String_o *)StringLiteral_3153/*"Back/back{0:D5}"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&static_fields->SPRITE_NAME_BG, v8, v10, v11, v12, v13, v14, v15);
  v16 = StringLiteral_17948/*"bit_floor_reward"*/;
  v17 = TitleInfoEventTowerReward_TypeInfo->static_fields;
  v17->CLIP_NAME_TOWER_REWARD = (struct System_String_o *)StringLiteral_17948/*"bit_floor_reward"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v17->CLIP_NAME_TOWER_REWARD, v16, v18, v19, v20, v21, v22, v23);
}


void TitleInfoEventTowerReward___ctor(TitleInfoEventTowerReward_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void TitleInfoEventTowerReward__Close(TitleInfoEventTowerReward_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x2
  System_String_o *voiceName; // x21
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  struct System_String_o **p_voiceAssetName; // x20
  __int64 v15; // x1
  __int64 v16; // x2
  System_String_o *v17; // x21
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  System_Action_c *v24; // x0
  System_Action_o *v25; // x20
  const MethodInfo *v26; // x2

  if ( (byte_596F124 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&SoundManager_TypeInfo);
    sub_2213A60(&Method_TitleInfoEventTowerReward__Close_b__37_0__);
    byte_596F124 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_2213CDC(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  if ( this->fields.voicePlayer )
  {
    voiceName = this->fields.voiceName;
    if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v5, v6);
    SoundManager__stopVoice_48512080(voiceName, 0.0, 0);
    this->fields.voicePlayer = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.voicePlayer, 0, v8, v9, v10, v11, v12, v13);
  }
  p_voiceAssetName = &this->fields.voiceAssetName;
  if ( !System_String__IsNullOrEmpty(this->fields.voiceAssetName, 0) )
  {
    v17 = *p_voiceAssetName;
    if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v15, v16);
    SoundManager__releaseAudioAssetStorage(v17, 0);
    *p_voiceAssetName = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.voiceAssetName, 0, v18, v19, v20, v21, v22, v23);
  }
  v24 = System_Action_TypeInfo;
  *(_QWORD *)&this->fields.selectVoiceIndex = 0;
  this->fields.playCnt = 0;
  v25 = (System_Action_o *)sub_2213CCC(v24);
  System_Action___ctor(v25, (Il2CppObject *)this, Method_TitleInfoEventTowerReward__Close_b__37_0__, 0);
  TitleInfoEventTowerReward__StartRewardAction(this, v25, v26);
}


void TitleInfoEventTowerReward__EndItemGetEffectAction(
        TitleInfoEventTowerReward_o *this,
        System_Action_o *afterDetail,
        const MethodInfo *method)
{
  if ( !afterDetail )
    sub_2213CDC(this, 0);
  ((void (__fastcall *)(intptr_t, intptr_t))afterDetail->fields.invoke_impl)(
    afterDetail->fields.method_code,
    afterDetail->fields.method);
}


void TitleInfoEventTowerReward__EndPlayVoice(TitleInfoEventTowerReward_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *voiceList; // x0
  __int64 playCnt; // x8
  __int64 v5; // x8

  if ( (byte_596F121 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    sub_2213A60(&StringLiteral_11130/*"PlayVoice"*/);
    byte_596F121 = 1;
  }
  if ( this->fields.playCnt < this->fields.maxPlayCnt )
  {
    voiceList = (System_Collections_Generic_List_object__o *)this->fields.voiceList;
    if ( !voiceList )
      goto LABEL_10;
    voiceList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                               voiceList,
                                                               this->fields.selectVoiceIndex,
                                                               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    if ( !voiceList )
      goto LABEL_10;
    playCnt = this->fields.playCnt;
    if ( (unsigned int)playCnt >= voiceList->fields._size )
      sub_2213CE4(voiceList);
    v5 = *((_QWORD *)&voiceList->fields._syncRoot + playCnt);
    if ( !v5 )
LABEL_10:
      sub_2213CDC(voiceList, method);
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_11130/*"PlayVoice"*/,
      *(float *)(v5 + 24),
      0);
  }
}


void TitleInfoEventTowerReward__OnLoadEndBG(TitleInfoEventTowerReward_o *this, const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  Il2CppClass *klass; // x8
  UIStandFigureR_o *monitor; // x20
  int32_t v5; // w21
  int32_t data; // w22
  System_Action_o *v7; // x23

  v2 = (Il2CppObject *)this;
  if ( (byte_596F11D & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    this = (TitleInfoEventTowerReward_o *)sub_2213A60(&Method_TitleInfoEventTowerReward_OnLoadEndSvt__);
    byte_596F11D = 1;
  }
  klass = v2[9].klass;
  if ( !klass
    || (monitor = (UIStandFigureR_o *)v2[4].monitor,
        v5 = *(&klass->_1.byval_arg.bits + 1),
        data = (int32_t)klass->_1.this_arg.data,
        v7 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo),
        System_Action___ctor(v7, v2, Method_TitleInfoEventTowerReward_OnLoadEndSvt__, 0),
        !monitor) )
  {
    sub_2213CDC(this, method);
  }
  UIStandFigureR__SetCharacter(monitor, v5, data, 1, 0, 0, v7, 0);
}


void TitleInfoEventTowerReward__OnLoadEndSvt(TitleInfoEventTowerReward_o *this, const MethodInfo *method)
{
  TitleInfoEventTowerReward_o *v2; // x19
  struct EventTowerReward_o *eventTowerReward; // x8
  System_Collections_Generic_List_object__o *v4; // x20
  struct EventTowerReward_o *v5; // x8
  struct System_String_array *voiceIds; // x8
  TitleInfoEventTowerReward_o *v7; // x22
  il2cpp_array_size_t max_length; // x26
  System_Collections_Generic_List_object__o *v9; // x23
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  unsigned __int64 v16; // x23
  struct EventTowerReward_o *v17; // x8
  struct System_String_array *v18; // x9
  int size; // w25
  TitleInfoEventTowerReward_o *v20; // x22
  int32_t v21; // w23
  struct ExUITexture_o *bgSprite; // x8
  struct EventTowerReward_o *v23; // x9
  System_Collections_Generic_List_object__o *voiceList; // x24
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 v33; // x10
  TitleInfoEventTowerReward_o *v34; // x1
  Il2CppClass **v35; // x0
  struct EventTowerReward_o *v36; // x8
  System_String_o *VoiceAssetName_49817936; // x0
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  System_String_o *voiceAssetName; // x20
  System_Action_o *v45; // x21
  __int64 v46; // x1
  __int64 v47; // x2

  v2 = this;
  if ( (byte_596F11E & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantVoiceMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantVoiceData____AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    sub_2213A60(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&SoundManager_TypeInfo);
    this = (TitleInfoEventTowerReward_o *)sub_2213A60(&Method_TitleInfoEventTowerReward__OnLoadEndSvt_b__31_0__);
    byte_596F11E = 1;
  }
  eventTowerReward = v2->fields.eventTowerReward;
  if ( !eventTowerReward )
    goto LABEL_39;
  if ( eventTowerReward->fields.voiceIds )
  {
    v4 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v4,
      (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    this = (TitleInfoEventTowerReward_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_39;
    this = (TitleInfoEventTowerReward_o *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)this,
                                            (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
    v5 = v2->fields.eventTowerReward;
    if ( !v5 )
      goto LABEL_39;
    voiceIds = v5->fields.voiceIds;
    if ( !voiceIds )
      goto LABEL_39;
    v7 = this;
    max_length = voiceIds->max_length;
    v9 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v9,
      (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    v2->fields.voiceList = (struct System_Collections_Generic_List_ServantVoiceData____o *)v9;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v2->fields.voiceList, (int32_t)v9, v10, v11, v12, v13, v14, v15);
    if ( (int)max_length >= 1 )
    {
      v16 = 0;
      while ( 1 )
      {
        v17 = v2->fields.eventTowerReward;
        if ( !v17 )
          break;
        v18 = v17->fields.voiceIds;
        if ( !v18 )
          break;
        if ( v16 >= LODWORD(v18->max_length) )
LABEL_40:
          sub_2213CE4(this);
        if ( !v7 )
          break;
        this = (TitleInfoEventTowerReward_o *)ServantVoiceMaster__getEntity_49838616(
                                                (ServantVoiceMaster_o *)v7,
                                                14,
                                                v17->fields.svtId,
                                                v17->fields.limitCount,
                                                v18->m_Items[v16],
                                                0);
        if ( this )
        {
          if ( !v4 )
            break;
          System_Collections_Generic_List_object___AddRange(
            v4,
            (System_Collections_Generic_IEnumerable_T__o *)this,
            (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_ServantVoiceData____AddRange__);
        }
        if ( (unsigned int)max_length == ++v16 )
          goto LABEL_18;
      }
LABEL_39:
      sub_2213CDC(this, method);
    }
LABEL_18:
    this = (TitleInfoEventTowerReward_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_39;
    this = (TitleInfoEventTowerReward_o *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)this,
                                            (const MethodInfo_385636C *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    if ( !v4 )
      goto LABEL_39;
    size = v4->fields._size;
    if ( size >= 1 )
    {
      v20 = this;
      v21 = 0;
      do
      {
        this = (TitleInfoEventTowerReward_o *)System_Collections_Generic_List_object___get_Item(
                                                v4,
                                                v21,
                                                (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
        if ( !this )
          goto LABEL_39;
        if ( !LODWORD(this->fields.m_CancellationTokenSource) )
          goto LABEL_40;
        bgSprite = this->fields.bgSprite;
        if ( !bgSprite )
          goto LABEL_39;
        v23 = v2->fields.eventTowerReward;
        if ( !v23 || !v20 )
          goto LABEL_39;
        this = (TitleInfoEventTowerReward_o *)VoicePlayCondMaster__isVoicePlay(
                                                (VoicePlayCondMaster_o *)v20,
                                                v23->fields.svtId,
                                                (System_String_o *)bgSprite->fields.m_CachedPtr,
                                                0,
                                                -1,
                                                -1,
                                                0,
                                                0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          voiceList = (System_Collections_Generic_List_object__o *)v2->fields.voiceList;
          this = (TitleInfoEventTowerReward_o *)System_Collections_Generic_List_object___get_Item(
                                                  v4,
                                                  v21,
                                                  (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
          if ( !voiceList )
            goto LABEL_39;
          items = voiceList->fields._items;
          v32 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
          ++voiceList->fields._version;
          if ( !items )
            goto LABEL_39;
          v33 = voiceList->fields._size;
          v34 = this;
          if ( (unsigned int)v33 >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              voiceList,
              (Il2CppObject *)this,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
          }
          else
          {
            v35 = &items->obj.klass + v33;
            voiceList->fields._size = v33 + 1;
            v35[4] = (Il2CppClass *)v34;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v35 + 4), (int32_t)v34, v25, v26, v27, v28, v29, v30);
          }
        }
      }
      while ( size != ++v21 );
    }
    v36 = v2->fields.eventTowerReward;
    if ( !v36 )
      goto LABEL_39;
    VoiceAssetName_49817936 = ServantVoiceEntity__getVoiceAssetName_49817936(v36->fields.svtId, 0);
    v2->fields.voiceAssetName = VoiceAssetName_49817936;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v2->fields.voiceAssetName,
      (int32_t)VoiceAssetName_49817936,
      v38,
      v39,
      v40,
      v41,
      v42,
      v43);
    voiceAssetName = v2->fields.voiceAssetName;
    v45 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v45, (Il2CppObject *)v2, Method_TitleInfoEventTowerReward__OnLoadEndSvt_b__31_0__, 0);
    if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v46, v47);
    SoundManager__loadAudioAssetStorage(voiceAssetName, v45, 1, 0);
  }
}


void TitleInfoEventTowerReward__OnTouchDisp(TitleInfoEventTowerReward_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *screenTouchInfo; // x0
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  AvalonSceneManager_c *v7; // x8
  CommonUI_o *v8; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v10; // x21

  if ( (byte_596F123 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_TitleInfoEventTowerReward__OnTouchDisp_b__36_0__);
    byte_596F123 = 1;
  }
  screenTouchInfo = (UnityEngine_Component_o *)this->fields.screenTouchInfo;
  if ( !screenTouchInfo )
    goto LABEL_9;
  screenTouchInfo = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(screenTouchInfo, 0);
  if ( !screenTouchInfo )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)screenTouchInfo, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = AvalonSceneManager_TypeInfo;
  v8 = (CommonUI_o *)Instance;
  if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v5, v6);
    v7 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v7->static_fields->DEFAULT_FADE_TIME;
  v10 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_TitleInfoEventTowerReward__OnTouchDisp_b__36_0__, 0);
  if ( !v8 )
LABEL_9:
    sub_2213CDC(screenTouchInfo, method);
  CommonUI__maskFadeout(v8, 1, DEFAULT_FADE_TIME, v10, 0);
  this->fields.state = 0;
}


void TitleInfoEventTowerReward__Open(
        TitleInfoEventTowerReward_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  TerminalPramsManager_c *v10; // x0
  struct EventTowerReward_o *eventTowerReward_k__BackingField; // x1
  struct EventTowerReward_o **p_eventTowerReward; // x20
  __int64 v13; // x1
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  TerminalPramsManager_c *v20; // x0
  struct QuestRewardInfo_array *resultEventTowerRewardInfo_k__BackingField; // x1
  __int64 v22; // x1
  __int64 v23; // x2
  struct EventTowerReward_o *eventTowerReward; // x8
  struct ScreenTouchInformationComponent_o **p_screenTouchInfo; // x22
  UnityEngine_Object_o *screenTouchInfo; // x23
  __int64 v27; // x1
  Il2CppObject *Instance; // x23
  __int64 transform; // x0
  Il2CppObject *Component_object; // x0
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  __int64 v43; // x2
  __int64 v44; // x21
  TitleInfoEventTowerReward_c *v45; // x8
  int effectId; // w23
  System_String_o *CLIP_NAME_TOWER_REWARD; // x22
  __int64 v48; // x2
  System_String_o *FloorRewardPrefabName; // x0
  TitleInfoEventTowerReward_c *v50; // x0
  struct EventTowerReward_o *v51; // x8
  Il2CppObject *v52; // x0
  System_String_o *v53; // x0
  __int64 v54; // x1
  __int64 v55; // x2
  UnityEngine_Object_o *simpleAnimation; // x23
  System_String_o *v57; // x22
  bool v58; // w0
  __int64 v59; // x2
  __int64 v60; // x23
  __int64 v61; // x8
  __int64 v62; // x21
  __int64 v63; // x9
  SimpleAnimation_State_c **v64; // x10
  __int64 v65; // x0
  UnityEngine_Object_o *animation; // x23
  struct EventTowerReward_o *v67; // x8
  int towerId; // w9
  __int64 v69; // x1
  __int64 v70; // x2
  Il2CppObject *Item; // x22
  UILabel_o *floorLabel; // x22
  UILabel_o *v73; // x22
  __int64 v74; // x2
  UISprite_o *nameSprite; // x21
  System_String_o *v76; // x22
  Il2CppObject *v77; // x23
  Il2CppObject *v78; // x0
  __int64 v79; // x2
  __int64 v80; // x23
  __int64 v81; // x21
  System_Text_StringBuilder_o *v82; // x22
  __int64 v83; // x26
  __int64 v84; // x29
  __int64 v85; // x2
  __int64 v86; // x8
  System_String_o *v87; // x0
  __int64 v88; // x1
  __int64 v89; // x2
  bool IsNullOrEmpty; // w8
  int v91; // w9
  UILabel_o *rewardLabel; // x23
  _DWORD *v93; // x8
  unsigned int v94; // w21
  struct TitleInfoEventTowerReward_StaticFields *static_fields; // x9
  System_String_o *SPRITE_NAME_BG; // x20
  Il2CppObject *v97; // x0
  System_String_o *v98; // x21
  ExUITexture_o *bgSprite; // x20
  System_Action_o *v100; // x22
  int32_t v101; // [xsp+0h] [xbp-80h] BYREF
  int eventId; // [xsp+4h] [xbp-7Ch] BYREF
  System_String_o *countText; // [xsp+8h] [xbp-78h] BYREF
  System_String_o *nameText; // [xsp+10h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_596F11C & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_EventTowerMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_2213A60(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    sub_2213A60(&Method_System_Collections_Generic_List_UIFont__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_UIFont__get_Item__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&SimpleAnimation_State_TypeInfo);
    sub_2213A60(&System_Text_StringBuilder_TypeInfo);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&Method_TitleInfoEventTowerReward_OnLoadEndBG__);
    sub_2213A60(&TitleInfoEventTowerReward_TypeInfo);
    sub_2213A60(&StringLiteral_43/*"\n"*/);
    sub_2213A60(&StringLiteral_5970/*"EVENT_TOWER_REWARD_GET"*/);
    sub_2213A60(&StringLiteral_11321/*"QUEST_CLEAR_COSTUME_GET"*/);
    sub_2213A60(&StringLiteral_16746/*"_"*/);
    sub_2213A60(&StringLiteral_5971/*"EVENT_TOWER_REWARD_GET_2"*/);
    byte_596F11C = 1;
  }
  nameText = 0;
  entity = 0;
  countText = 0;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, callback, method);
  if ( !byte_596D5F6 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D5F6 = 1;
  }
  v10 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, callback, method);
    v10 = TerminalPramsManager_TypeInfo;
  }
  eventTowerReward_k__BackingField = v10->static_fields->_eventTowerReward_k__BackingField;
  this->fields.eventTowerReward = eventTowerReward_k__BackingField;
  p_eventTowerReward = &this->fields.eventTowerReward;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.eventTowerReward,
    (int32_t)eventTowerReward_k__BackingField,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !byte_596DB63 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DB63 = 1;
  }
  v20 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v13, v14);
    v20 = TerminalPramsManager_TypeInfo;
  }
  resultEventTowerRewardInfo_k__BackingField = v20->static_fields->_resultEventTowerRewardInfo_k__BackingField;
  this->fields.resultEventTowerRewardInfo = resultEventTowerRewardInfo_k__BackingField;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.resultEventTowerRewardInfo,
    (int32_t)resultEventTowerRewardInfo_k__BackingField,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  eventTowerReward = this->fields.eventTowerReward;
  if ( !eventTowerReward || eventTowerReward->fields.eventId <= 0 )
  {
    ActionExtensions__Call(callback, 0);
    return;
  }
  p_screenTouchInfo = &this->fields.screenTouchInfo;
  screenTouchInfo = (UnityEngine_Object_o *)this->fields.screenTouchInfo;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22, v23);
  if ( UnityEngine_Object__op_Equality(screenTouchInfo, 0, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !Instance )
      goto LABEL_132;
    transform = (__int64)CommonUI__CreateScreeenTouchInfo(
                           (CommonUI_o *)Instance,
                           (UnityEngine_Transform_o *)transform,
                           0,
                           0);
    if ( !transform )
      goto LABEL_132;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)transform,
                         (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    *p_screenTouchInfo = (struct ScreenTouchInformationComponent_o *)Component_object;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.screenTouchInfo,
      (int32_t)Component_object,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36);
  }
  transform = (__int64)*p_screenTouchInfo;
  if ( !*p_screenTouchInfo )
    goto LABEL_132;
  transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
  if ( !transform )
    goto LABEL_132;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0);
  transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_132;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0);
  transform = (__int64)this->fields.standFigure;
  if ( !transform )
    goto LABEL_132;
  transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
  if ( !transform )
    goto LABEL_132;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0);
  this->fields.endCallback = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.endCallback,
    (int32_t)callback,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  this->fields.state = 0;
  transform = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !transform )
    goto LABEL_132;
  transform = (__int64)DataManager__GetMasterData_object_(
                         (DataManager_o *)transform,
                         (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventTowerMaster___);
  if ( !*p_eventTowerReward || !transform )
    goto LABEL_132;
  transform = (__int64)EventTowerMaster__GetEntity(
                         (EventTowerMaster_o *)transform,
                         (*p_eventTowerReward)->fields.eventId,
                         (*p_eventTowerReward)->fields.towerId,
                         0);
  v44 = transform;
  v45 = TitleInfoEventTowerReward_TypeInfo;
  if ( !*(&TitleInfoEventTowerReward_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventTowerReward_TypeInfo, v27, v43);
    v45 = TitleInfoEventTowerReward_TypeInfo;
  }
  if ( !*p_eventTowerReward )
    goto LABEL_132;
  effectId = (*p_eventTowerReward)->fields.effectId;
  CLIP_NAME_TOWER_REWARD = v45->static_fields->CLIP_NAME_TOWER_REWARD;
  transform = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !transform )
    goto LABEL_132;
  transform = (__int64)DataManager__GetMasterData_object_(
                         (DataManager_o *)transform,
                         (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !*p_eventTowerReward || !transform )
    goto LABEL_132;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)transform,
         &entity,
         (*p_eventTowerReward)->fields.eventId,
         (const MethodInfo_3F10B80 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
    transform = (__int64)entity;
    if ( !entity )
      goto LABEL_132;
    FloorRewardPrefabName = EventDetailEntity__GetFloorRewardPrefabName((EventDetailEntity_o *)entity, 0);
    if ( FloorRewardPrefabName )
      CLIP_NAME_TOWER_REWARD = FloorRewardPrefabName;
  }
  v50 = TitleInfoEventTowerReward_TypeInfo;
  if ( !*(&TitleInfoEventTowerReward_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventTowerReward_TypeInfo, v27, v48);
    v50 = TitleInfoEventTowerReward_TypeInfo;
  }
  transform = System_String__op_Equality(CLIP_NAME_TOWER_REWARD, v50->static_fields->CLIP_NAME_TOWER_REWARD, 0);
  if ( (transform & 1) != 0 )
  {
    v51 = *p_eventTowerReward;
    if ( !*p_eventTowerReward )
      goto LABEL_132;
    if ( v51->fields.towerId == 2 && v51->fields.floor == 100 )
      effectId = 3;
  }
  eventId = effectId;
  v52 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &eventId);
  v53 = System_String__Concat_75694732(
          (Il2CppObject *)CLIP_NAME_TOWER_REWARD,
          (Il2CppObject *)StringLiteral_16746/*"_"*/,
          v52,
          0);
  simpleAnimation = (UnityEngine_Object_o *)this->fields.simpleAnimation;
  v57 = v53;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v54, v55);
  v58 = UnityEngine_Object__op_Inequality(simpleAnimation, 0, 0);
  if ( v58 )
    v60 = v44;
  else
    v60 = 0;
  if ( v58 )
  {
    transform = (__int64)this->fields.simpleAnimation;
    if ( transform )
    {
      transform = (__int64)SimpleAnimation__get_Item((SimpleAnimation_o *)transform, v57, 0);
      if ( transform )
      {
        v61 = *(_QWORD *)transform;
        v62 = transform;
        v63 = *(unsigned __int16 *)(*(_QWORD *)transform + 302LL);
        if ( *(_WORD *)(*(_QWORD *)transform + 302LL) )
        {
          v64 = (SimpleAnimation_State_c **)(*(_QWORD *)(v61 + 176) + 8LL);
          while ( *(v64 - 1) != SimpleAnimation_State_TypeInfo )
          {
            --v63;
            v64 += 2;
            if ( !v63 )
              goto LABEL_58;
          }
          v65 = v61 + 16LL * (*(_DWORD *)v64 + 14) + 312;
        }
        else
        {
LABEL_58:
          v65 = sub_224BC3C(transform, SimpleAnimation_State_TypeInfo, 14);
        }
        transform = (*(__int64 (__fastcall **)(__int64, _QWORD))v65)(v62, *(_QWORD *)(v65 + 8));
        if ( this->fields.simpleAnimation )
        {
          SimpleAnimation__set_clip(this->fields.simpleAnimation, (UnityEngine_AnimationClip_o *)transform, 0);
          transform = (__int64)this->fields.simpleAnimation;
          if ( transform )
          {
            v44 = v60;
LABEL_71:
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)transform, 0, 0);
            goto LABEL_72;
          }
        }
      }
    }
LABEL_132:
    sub_2213CDC(transform, v27);
  }
  animation = (UnityEngine_Object_o *)this->fields.animation;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27, v59);
  transform = UnityEngine_Object__op_Inequality(animation, 0, 0);
  if ( (transform & 1) != 0 )
  {
    transform = (__int64)this->fields.animation;
    if ( !transform )
      goto LABEL_132;
    transform = (__int64)UnityEngine_Animation__GetClip((UnityEngine_Animation_o *)transform, v57, 0);
    if ( !this->fields.animation )
      goto LABEL_132;
    UnityEngine_Animation__set_clip(this->fields.animation, (UnityEngine_AnimationClip_o *)transform, 0);
    transform = (__int64)this->fields.animation;
    if ( !transform )
      goto LABEL_132;
    goto LABEL_71;
  }
LABEL_72:
  v67 = *p_eventTowerReward;
  if ( !*p_eventTowerReward )
    goto LABEL_132;
  towerId = v67->fields.towerId;
  v27 = (unsigned int)(towerId - 1);
  if ( towerId >= 1 )
  {
    transform = (__int64)this->fields.floorNumFontList;
    if ( !transform )
      goto LABEL_132;
    if ( *(_DWORD *)(transform + 24) >= towerId )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)transform,
               v27,
               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_UIFont__get_Item__);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v69, v70);
      transform = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Item, 0, 0);
      v67 = *p_eventTowerReward;
      if ( (transform & 1) != 0 )
      {
        if ( !v67 )
          goto LABEL_132;
        transform = (__int64)this->fields.floorNumFontList;
        if ( !transform )
          goto LABEL_132;
        floorLabel = this->fields.floorLabel;
        transform = (__int64)System_Collections_Generic_List_object___get_Item(
                               (System_Collections_Generic_List_object__o *)transform,
                               v67->fields.towerId - 1,
                               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_UIFont__get_Item__);
        if ( !floorLabel )
          goto LABEL_132;
        UILabel__set_bitmapFont(floorLabel, (UIFont_o *)transform, 0);
        v67 = *p_eventTowerReward;
      }
      if ( !v67 )
        goto LABEL_132;
    }
  }
  v73 = this->fields.floorLabel;
  transform = (__int64)System_Int32__ToString((int)v67 + 24, 0);
  if ( !v73 )
    goto LABEL_132;
  UILabel__set_text(v73, (System_String_o *)transform, 0);
  if ( v44 )
  {
    transform = (__int64)TitleInfoEventTowerReward_TypeInfo;
    nameSprite = this->fields.nameSprite;
    if ( !*(&TitleInfoEventTowerReward_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventTowerReward_TypeInfo, v27, v74);
      transform = (__int64)TitleInfoEventTowerReward_TypeInfo;
    }
    if ( !*p_eventTowerReward )
      goto LABEL_132;
    v76 = **(System_String_o ***)(transform + 184);
    eventId = (*p_eventTowerReward)->fields.eventId;
    transform = j_il2cpp_value_box_0(qword_5984348, &eventId);
    if ( !*p_eventTowerReward )
      goto LABEL_132;
    v77 = (Il2CppObject *)transform;
    v101 = (*p_eventTowerReward)->fields.towerId;
    v78 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v101);
    transform = (__int64)System_String__Format_75697880(v76, v77, v78, 0);
    if ( !nameSprite )
      goto LABEL_132;
    UISprite__set_spriteName(nameSprite, (System_String_o *)transform, 0);
    transform = (__int64)this->fields.nameSprite;
    if ( !transform )
      goto LABEL_132;
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)transform + 840LL))(
      transform,
      *(_QWORD *)(*(_QWORD *)transform + 848LL));
  }
  transform = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !transform )
    goto LABEL_132;
  transform = (__int64)DataManager__GetMasterData_object_(
                         (DataManager_o *)transform,
                         (const MethodInfo_385636C *)Method_DataManager_GetMasterData_GiftMaster___);
  if ( !*p_eventTowerReward )
    goto LABEL_132;
  if ( !transform )
    goto LABEL_132;
  transform = (__int64)GiftMaster__GetGiftListById((GiftMaster_o *)transform, (*p_eventTowerReward)->fields.giftId, 0);
  if ( !transform )
    goto LABEL_132;
  v80 = *(_QWORD *)(transform + 24);
  v81 = transform;
  if ( (int)v80 < 1 )
    goto LABEL_127;
  v82 = (System_Text_StringBuilder_o *)sub_2213CCC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v82, 0);
  v83 = 0;
  v84 = v81 + 32;
  do
  {
    if ( (_DWORD)v83 )
    {
      if ( !v82 )
        goto LABEL_132;
      transform = (__int64)System_Text_StringBuilder__Append_75735064(v82, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
    }
    if ( (unsigned int)v83 >= *(_DWORD *)(v81 + 24) )
      goto LABEL_133;
    transform = *(_QWORD *)(v84 + 8 * v83);
    if ( !transform )
      goto LABEL_132;
    GiftEntity__GetInfo((GiftEntity_o *)transform, &nameText, &countText, 0);
    if ( (unsigned int)v83 >= *(_DWORD *)(v81 + 24) )
      goto LABEL_133;
    v86 = *(_QWORD *)(v84 + 8 * v83);
    if ( !v86 )
      goto LABEL_132;
    if ( *(_DWORD *)(v86 + 20) == 9 )
    {
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v27, v85);
      v87 = (System_String_o *)StringLiteral_11321/*"QUEST_CLEAR_COSTUME_GET"*/;
LABEL_114:
      transform = (__int64)LocalizationManager__Get(v87, 0);
      if ( !v82 )
        goto LABEL_132;
      transform = (__int64)System_Text_StringBuilder__AppendFormat(
                             v82,
                             (System_String_o *)transform,
                             (Il2CppObject *)nameText,
                             0);
      goto LABEL_120;
    }
    IsNullOrEmpty = System_String__IsNullOrEmpty(countText, 0);
    v91 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
    if ( IsNullOrEmpty )
    {
      if ( !v91 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v88, v89);
      v87 = (System_String_o *)StringLiteral_5971/*"EVENT_TOWER_REWARD_GET_2"*/;
      goto LABEL_114;
    }
    if ( !v91 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v88, v89);
    transform = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_5970/*"EVENT_TOWER_REWARD_GET"*/, 0);
    if ( !v82 )
      goto LABEL_132;
    transform = (__int64)System_Text_StringBuilder__AppendFormat_75741272(
                           v82,
                           (System_String_o *)transform,
                           (Il2CppObject *)nameText,
                           (Il2CppObject *)countText,
                           0);
LABEL_120:
    ++v83;
  }
  while ( (_DWORD)v80 != (_DWORD)v83 );
  rewardLabel = this->fields.rewardLabel;
  transform = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v82->klass->vtable._3_ToString.methodPtr)(
                v82,
                v82->klass->vtable._3_ToString.method);
  if ( !rewardLabel )
    goto LABEL_132;
  UILabel__set_text(rewardLabel, (System_String_o *)transform, 0);
  if ( !*(_DWORD *)(v81 + 24) )
LABEL_133:
    sub_2213CE4(transform);
  v93 = *(_DWORD **)(v81 + 32);
  if ( !v93 )
    goto LABEL_132;
  transform = (__int64)this->fields.itemIcon;
  if ( !transform )
    goto LABEL_132;
  v94 = v93[5];
  ItemIconComponent__SetGift_47884936((ItemIconComponent_o *)transform, v94, v93[6], (int)v93[7], 0, 0);
  transform = (__int64)this->fields.imageFrame;
  if ( !transform )
    goto LABEL_132;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, (v94 < 0xC) & (0x8C2u >> v94), 0);
LABEL_127:
  transform = (__int64)TitleInfoEventTowerReward_TypeInfo;
  if ( !*(&TitleInfoEventTowerReward_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TitleInfoEventTowerReward_TypeInfo, v27, v79);
  if ( !*p_eventTowerReward )
    goto LABEL_132;
  static_fields = TitleInfoEventTowerReward_TypeInfo->static_fields;
  eventId = (*p_eventTowerReward)->fields.bgId;
  SPRITE_NAME_BG = static_fields->SPRITE_NAME_BG;
  v97 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &eventId);
  v98 = System_String__Format(SPRITE_NAME_BG, v97, 0);
  bgSprite = this->fields.bgSprite;
  v100 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v100, (Il2CppObject *)this, Method_TitleInfoEventTowerReward_OnLoadEndBG__, 0);
  if ( !bgSprite )
    goto LABEL_132;
  ExUITexture__SetAssetImage(bgSprite, v98, v100, 0);
}


void TitleInfoEventTowerReward__PlayVoice(TitleInfoEventTowerReward_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *voiceList; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  __int64 playCnt; // x8
  ServantVoiceData_o *v11; // x20
  struct System_String_o *id; // x1
  struct EventTowerReward_o *eventTowerReward; // x8
  System_String_o *VoiceAssetName_49817936; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  SeManager_c *v17; // x8
  System_String_o *voiceName; // x21
  System_String_o *v19; // x22
  float DEFAULT_VOLUME; // s8
  System_Action_o *v21; // x23
  __int64 v22; // x1
  __int64 v23; // x2
  struct SePlayer_o *v24; // x0
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  UIStandFigureR_o *standFigure; // x21
  int32_t face; // w22
  float FadeTime; // s0

  if ( (byte_596F120 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    sub_2213A60(&SeManager_TypeInfo);
    sub_2213A60(&SoundManager_TypeInfo);
    sub_2213A60(&Method_TitleInfoEventTowerReward_EndPlayVoice__);
    byte_596F120 = 1;
  }
  voiceList = (System_Collections_Generic_List_object__o *)this->fields.voiceList;
  if ( !voiceList )
    goto LABEL_14;
  voiceList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                             voiceList,
                                                             this->fields.selectVoiceIndex,
                                                             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
  if ( !voiceList )
    goto LABEL_14;
  playCnt = this->fields.playCnt;
  if ( (unsigned int)playCnt >= voiceList->fields._size )
    sub_2213CE4(voiceList);
  v11 = (ServantVoiceData_o *)*((_QWORD *)&voiceList->fields._syncRoot + playCnt);
  if ( !v11 )
    goto LABEL_14;
  id = v11->fields.id;
  this->fields.voiceName = id;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.voiceName, (int32_t)id, v4, v5, v6, v7, v8, v9);
  eventTowerReward = this->fields.eventTowerReward;
  if ( !eventTowerReward )
    goto LABEL_14;
  VoiceAssetName_49817936 = ServantVoiceEntity__getVoiceAssetName_49817936(eventTowerReward->fields.svtId, 0);
  v17 = SeManager_TypeInfo;
  voiceName = this->fields.voiceName;
  v19 = VoiceAssetName_49817936;
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, v15, v16);
    v17 = SeManager_TypeInfo;
  }
  DEFAULT_VOLUME = v17->static_fields->DEFAULT_VOLUME;
  v21 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v21, (Il2CppObject *)this, Method_TitleInfoEventTowerReward_EndPlayVoice__, 0);
  if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v22, v23);
  v24 = SoundManager__playVoice_48511684(v19, voiceName, DEFAULT_VOLUME, v21, 0, 0);
  this->fields.voicePlayer = v24;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.voicePlayer, (int32_t)v24, v25, v26, v27, v28, v29, v30);
  standFigure = this->fields.standFigure;
  face = v11->fields.face;
  FadeTime = ServantVoiceData__GetFadeTime(v11, 0);
  if ( !standFigure )
LABEL_14:
    sub_2213CDC(voiceList, method);
  UIStandFigureR__SetFace(standFigure, face, FadeTime, 0);
  ++this->fields.playCnt;
}


void TitleInfoEventTowerReward__StartRewardAction(
        TitleInfoEventTowerReward_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  __int64 v14; // x22
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  QuestRewardInfo_array *resultEventTowerRewardInfo; // x20
  System_Action_o *v22; // x22
  const MethodInfo *v23; // x4

  if ( (byte_596F125 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_TitleInfoEventTowerReward___c__DisplayClass38_0__StartRewardAction_b__0__);
    sub_2213A60(&TitleInfoEventTowerReward___c__DisplayClass38_0_TypeInfo);
    byte_596F125 = 1;
  }
  v5 = sub_2213CCC(TitleInfoEventTowerReward___c__DisplayClass38_0_TypeInfo);
  TitleInfoEventTowerReward___c__DisplayClass38_0___ctor((TitleInfoEventTowerReward___c__DisplayClass38_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_8;
  *(_QWORD *)(v5 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = callback;
  v14 = v5 + 24;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)callback, v15, v16, v17, v18, v19, v20);
  resultEventTowerRewardInfo = this->fields.resultEventTowerRewardInfo;
  if ( resultEventTowerRewardInfo )
  {
    v22 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      v22,
      (Il2CppObject *)v5,
      Method_TitleInfoEventTowerReward___c__DisplayClass38_0__StartRewardAction_b__0__,
      0);
    TitleInfoEventTowerReward__StartRewardAction_sub(this, resultEventTowerRewardInfo, 0, v22, v23);
    return;
  }
  if ( !*(_QWORD *)v14 )
LABEL_8:
    sub_2213CDC(v6, v7);
  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v14 + 24LL))(
    *(_QWORD *)(*(_QWORD *)v14 + 64LL),
    *(_QWORD *)(*(_QWORD *)v14 + 40LL));
}


void TitleInfoEventTowerReward__StartRewardAction_sub(
        TitleInfoEventTowerReward_o *this,
        QuestRewardInfo_array *rewardInfoList,
        int32_t idx,
        System_Action_o *subEndAction,
        const MethodInfo *method)
{
  __int64 v9; // x26
  Il2CppObject *IsServant_47387968; // x0
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
  __int64 v24; // x19
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
  __int64 v37; // x8
  __int64 v38; // x9
  int v39; // w10
  __int64 v40; // x1
  __int64 v41; // x19
  Il2CppObject *Entity; // x0
  Il2CppObject *v43; // x19
  Il2CppObject *Instance; // x19
  System_Action_o *v45; // x20

  while ( 1 )
  {
    if ( (byte_596F126 & 1) == 0 )
    {
      sub_2213A60(&System_Action_TypeInfo);
      sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
      sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      sub_2213A60(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
      sub_2213A60(&Method_TitleInfoEventTowerReward___c__DisplayClass39_0__StartRewardAction_sub_b__0__);
      sub_2213A60(&TitleInfoEventTowerReward___c__DisplayClass39_0_TypeInfo);
      byte_596F126 = 1;
    }
    v9 = sub_2213CCC(TitleInfoEventTowerReward___c__DisplayClass39_0_TypeInfo);
    TitleInfoEventTowerReward___c__DisplayClass39_0___ctor((TitleInfoEventTowerReward___c__DisplayClass39_0_o *)v9, 0);
    if ( !v9 )
      goto LABEL_23;
    *(_QWORD *)(v9 + 24) = this;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 24), (int32_t)this, v12, v13, v14, v15, v16, v17);
    *(_QWORD *)(v9 + 32) = rewardInfoList;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 32), (int32_t)rewardInfoList, v18, v19, v20, v21, v22, v23);
    *(_QWORD *)(v9 + 48) = subEndAction;
    v24 = v9 + 48;
    *(_DWORD *)(v9 + 40) = idx;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 48), (int32_t)subEndAction, v25, v26, v27, v28, v29, v30);
    v37 = *(_QWORD *)(v9 + 32);
    if ( !v37 )
      goto LABEL_23;
    v38 = *(int *)(v9 + 40);
    v39 = *(_DWORD *)(v37 + 24);
    if ( (int)v38 >= v39 )
    {
      if ( *(_QWORD *)v24 )
      {
        (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v24 + 24LL))(
          *(_QWORD *)(*(_QWORD *)v24 + 64LL),
          *(_QWORD *)(*(_QWORD *)v24 + 40LL));
        return;
      }
      goto LABEL_23;
    }
    if ( (unsigned int)v38 >= v39 )
      sub_2213CE4(IsServant_47387968);
    v40 = *(_QWORD *)(v37 + 8 * v38 + 32);
    *(_QWORD *)(v9 + 16) = v40;
    v41 = v9 + 16;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 16), v40, v31, v32, v33, v34, v35, v36);
    if ( !*(_QWORD *)(v9 + 16) )
      goto LABEL_23;
    IsServant_47387968 = (Il2CppObject *)Gift__IsServant_47387968(*(_DWORD *)(*(_QWORD *)(v9 + 16) + 16LL), 0);
    if ( ((unsigned __int8)IsServant_47387968 & 1) == 0 )
      break;
    IsServant_47387968 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !IsServant_47387968 )
      goto LABEL_23;
    IsServant_47387968 = DataManager__GetMasterData_object_(
                           (DataManager_o *)IsServant_47387968,
                           (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !*(_QWORD *)v41 || !IsServant_47387968 )
      goto LABEL_23;
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)IsServant_47387968,
               *(_DWORD *)(*(_QWORD *)v41 + 20LL),
               (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( Entity )
    {
      v43 = Entity;
      if ( !SvtType__IsCombineMaterial(HIDWORD(Entity[5].klass), 0) && !SvtType__IsStatusUp(HIDWORD(v43[5].klass), 0) )
        goto LABEL_21;
    }
LABEL_18:
    rewardInfoList = *(QuestRewardInfo_array **)(v9 + 32);
    subEndAction = *(System_Action_o **)(v9 + 48);
    idx = *(_DWORD *)(v9 + 40) + 1;
  }
  if ( !*(_QWORD *)v41 )
    goto LABEL_23;
  if ( !Gift__IsCommandCode_47388336(*(_DWORD *)(*(_QWORD *)v41 + 16LL), 0) )
    goto LABEL_18;
LABEL_21:
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  v45 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v45,
    (Il2CppObject *)v9,
    Method_TitleInfoEventTowerReward___c__DisplayClass39_0__StartRewardAction_sub_b__0__,
    0);
  if ( !Instance )
LABEL_23:
    sub_2213CDC(IsServant_47387968, v11);
  SummonAssetManager__LoadSummonAssets((SummonAssetManager_o *)Instance, v45, 0);
}


void TitleInfoEventTowerReward__StartVoice(TitleInfoEventTowerReward_o *this, const MethodInfo *method)
{
  TitleInfoEventTowerReward_o *v2; // x19
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceList; // x8
  System_Random_o *v4; // x20
  struct System_Collections_Generic_List_ServantVoiceData____o *v5; // x8
  System_Collections_Generic_List_object__o *v6; // x8

  v2 = this;
  if ( (byte_596F11F & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    this = (TitleInfoEventTowerReward_o *)sub_2213A60(&System_Random_TypeInfo);
    byte_596F11F = 1;
  }
  voiceList = v2->fields.voiceList;
  if ( !voiceList )
    goto LABEL_11;
  if ( voiceList->fields._size )
  {
    v4 = (System_Random_o *)sub_2213CCC(System_Random_TypeInfo);
    System_Random___ctor(v4, 0);
    v5 = v2->fields.voiceList;
    if ( v5 )
    {
      if ( v4 )
      {
        this = (TitleInfoEventTowerReward_o *)((__int64 (__fastcall *)(System_Random_o *, _QWORD, const MethodInfo *))v4->klass->vtable._7_Next.methodPtr)(
                                                v4,
                                                (unsigned int)v5->fields._size,
                                                v4->klass->vtable._7_Next.method);
        v6 = (System_Collections_Generic_List_object__o *)v2->fields.voiceList;
        v2->fields.selectVoiceIndex = (int)this;
        if ( v6 )
        {
          this = (TitleInfoEventTowerReward_o *)System_Collections_Generic_List_object___get_Item(
                                                  v6,
                                                  (int32_t)this,
                                                  (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
          if ( this )
          {
            *(_QWORD *)&v2->fields.maxPlayCnt = (unsigned int)this->fields.m_CancellationTokenSource;
            TitleInfoEventTowerReward__PlayVoice(v2, method);
            return;
          }
        }
      }
    }
LABEL_11:
    sub_2213CDC(this, method);
  }
}


void TitleInfoEventTowerReward__Update(TitleInfoEventTowerReward_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t state; // w8
  UnityEngine_Object_o *simpleAnimation; // x20
  UnityEngine_Object_o *m_Clip; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  struct SimpleAnimation_o *v9; // x20
  System_String_o *name; // x0
  UnityEngine_Object_c *klass; // x8
  UnityEngine_Object_o *v12; // x20
  __int64 v13; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v15; // x0
  const MethodInfo *v16; // x1
  UnityEngine_Object_o *animation; // x20
  UnityEngine_Animation_o *v18; // x20
  System_String_o *v19; // x0
  UnityEngine_AnimationState_o *v20; // x20
  float time; // s8
  float v22; // s0
  UnityEngine_Object_c *v23; // x8
  __int64 v24; // x9
  SimpleAnimation_State_c **v25; // x10
  __int64 v26; // x0

  if ( (byte_596F122 & 1) == 0 )
  {
    sub_2213A60(&CTouch_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&SimpleAnimation_State_TypeInfo);
    byte_596F122 = 1;
  }
  state = this->fields.state;
  if ( state != 2 )
  {
    if ( state != 1 )
      return;
    simpleAnimation = (UnityEngine_Object_o *)this->fields.simpleAnimation;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
    m_Clip = (UnityEngine_Object_o *)UnityEngine_Object__op_Inequality(simpleAnimation, 0, 0);
    if ( ((unsigned __int8)m_Clip & 1) != 0 )
    {
      v9 = this->fields.simpleAnimation;
      if ( !v9 )
        goto LABEL_41;
      m_Clip = (UnityEngine_Object_o *)v9->fields.m_Clip;
      if ( !m_Clip )
        goto LABEL_41;
      name = UnityEngine_Object__get_name(m_Clip, 0);
      m_Clip = (UnityEngine_Object_o *)SimpleAnimation__get_Item(v9, name, 0);
      if ( !m_Clip )
        goto LABEL_41;
      klass = m_Clip->klass;
      v12 = m_Clip;
      v13 = *(unsigned __int16 *)&m_Clip->klass->_2.rank;
      if ( *(_WORD *)&m_Clip->klass->_2.rank )
      {
        p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v13;
          p_offset += 2;
          if ( !v13 )
            goto LABEL_15;
        }
        v15 = (__int64)(&klass->vtable._3_ToString + *(_DWORD *)p_offset);
      }
      else
      {
LABEL_15:
        v15 = sub_224BC3C(m_Clip, SimpleAnimation_State_TypeInfo, 3);
      }
      v22 = (*(float (__fastcall **)(UnityEngine_Object_o *, _QWORD))v15)(v12, *(_QWORD *)(v15 + 8));
      v23 = v12->klass;
      time = v22;
      v24 = *(unsigned __int16 *)&v12->klass->_2.rank;
      if ( *(_WORD *)&v12->klass->_2.rank )
      {
        v25 = (SimpleAnimation_State_c **)&v23->_1.interfaceOffsets->offset;
        while ( *(v25 - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v24;
          v25 += 2;
          if ( !v24 )
            goto LABEL_33;
        }
        v26 = (__int64)(&v23[1]._1.nestedTypes + 2 * *(_DWORD *)v25);
      }
      else
      {
LABEL_33:
        v26 = sub_224BC3C(v12, SimpleAnimation_State_TypeInfo, 14);
      }
      m_Clip = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(UnityEngine_Object_o *, _QWORD))v26)(
                                         v12,
                                         *(_QWORD *)(v26 + 8));
      if ( !m_Clip )
        goto LABEL_41;
    }
    else
    {
      animation = (UnityEngine_Object_o *)this->fields.animation;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
      m_Clip = (UnityEngine_Object_o *)UnityEngine_Object__op_Inequality(animation, 0, 0);
      if ( ((unsigned __int8)m_Clip & 1) == 0 )
        goto LABEL_37;
      v18 = this->fields.animation;
      if ( !v18 )
        goto LABEL_41;
      m_Clip = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(this->fields.animation, 0);
      if ( !m_Clip )
        goto LABEL_41;
      v19 = UnityEngine_Object__get_name(m_Clip, 0);
      m_Clip = (UnityEngine_Object_o *)UnityEngine_Animation__get_Item(v18, v19, 0);
      if ( !m_Clip )
        goto LABEL_41;
      v20 = (UnityEngine_AnimationState_o *)m_Clip;
      time = UnityEngine_AnimationState__get_time((UnityEngine_AnimationState_o *)m_Clip, 0);
      m_Clip = (UnityEngine_Object_o *)UnityEngine_AnimationState__get_clip(v20, 0);
      if ( !m_Clip )
        goto LABEL_41;
    }
    if ( time < UnityEngine_AnimationClip__get_length((UnityEngine_AnimationClip_o *)m_Clip, 0) )
      return;
LABEL_37:
    m_Clip = (UnityEngine_Object_o *)this->fields.screenTouchInfo;
    if ( m_Clip )
    {
      m_Clip = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)m_Clip, 0);
      if ( m_Clip )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)m_Clip, 1, 0);
        this->fields.state = 2;
        return;
      }
    }
LABEL_41:
    sub_2213CDC(m_Clip, v7);
  }
  if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, method, v2);
  if ( CTouch__isTouchPush(0) )
    TitleInfoEventTowerReward__OnTouchDisp(this, v16);
}


void TitleInfoEventTowerReward___Close_b__37_0(TitleInfoEventTowerReward_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_endCallback; // x0
  System_Action_o *v9; // x19
  struct System_Action_o *endCallback; // t1

  endCallback = this->fields.endCallback;
  p_endCallback = (MissionNaviTransitionBoardItem_o *)&this->fields.endCallback;
  v9 = endCallback;
  if ( endCallback )
  {
    p_endCallback->klass = 0;
    sub_2213A04(p_endCallback, 0, v2, v3, v4, v5, v6, v7);
    ActionExtensions__Call(v9, 0);
  }
}


void TitleInfoEventTowerReward___OnLoadEndSvt_b__31_0(TitleInfoEventTowerReward_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  CommonUI_o *v6; // x20
  __int64 v7; // x2
  struct EventTowerReward_o *eventTowerReward; // x8
  struct EventTowerReward_o *v9; // x8
  __int64 v10; // x2
  System_String_o *m_CancellationTokenSource; // x20
  UnityEngine_Object_o *simpleAnimation; // x20
  __int64 v13; // x2
  __int64 v14; // x2
  struct SimpleAnimation_o *v15; // x8
  UnityEngine_Object_o *m_Clip; // x20
  struct SimpleAnimation_o *v17; // x20
  System_String_o *name; // x0
  UnityEngine_Object_o *animation; // x20
  __int64 v20; // x1
  __int64 v21; // x2
  UnityEngine_Object_o *clip; // x20
  UnityEngine_Animation_o *v23; // x20
  System_String_o *v24; // x0

  if ( (byte_596F128 & 1) == 0 )
  {
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_BgmMaster___);
    sub_2213A60(&Method_DataMasterBase_BgmMaster__BgmEntity__int__GetEntity__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&SoundManager_TypeInfo);
    sub_2213A60(&StringLiteral_13610/*"StartVoice"*/);
    byte_596F128 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = Instance;
  if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v4, v5);
  if ( !v6 )
    goto LABEL_40;
  CommonUI__maskFadein(v6, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0, 0);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_13610/*"StartVoice"*/,
    this->fields.voiceStartTime,
    0);
  eventTowerReward = this->fields.eventTowerReward;
  if ( !eventTowerReward )
    goto LABEL_40;
  if ( eventTowerReward->fields.bgmId >= 1 )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_40;
    Instance = (CommonUI_o *)DataManager__GetMasterData_object_(
                               (DataManager_o *)Instance,
                               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_BgmMaster___);
    v9 = this->fields.eventTowerReward;
    if ( !v9 )
      goto LABEL_40;
    if ( !Instance )
      goto LABEL_40;
    Instance = (CommonUI_o *)DataMasterBase_object__object__int___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               v9->fields.bgmId,
                               (const MethodInfo_3F10B30 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__GetEntity__);
    if ( !Instance )
      goto LABEL_40;
    m_CancellationTokenSource = (System_String_o *)Instance->fields.m_CancellationTokenSource;
    if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v4, v10);
    SoundManager__playBgm(m_CancellationTokenSource, 0);
  }
  simpleAnimation = (UnityEngine_Object_o *)this->fields.simpleAnimation;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4, v7);
  if ( UnityEngine_Object__op_Inequality(simpleAnimation, 0, 0) )
  {
    Instance = (CommonUI_o *)this->fields.simpleAnimation;
    if ( !Instance )
      goto LABEL_40;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 1, 0);
    v15 = this->fields.simpleAnimation;
    if ( !v15 )
      goto LABEL_40;
    m_Clip = (UnityEngine_Object_o *)v15->fields.m_Clip;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4, v14);
    Instance = (CommonUI_o *)UnityEngine_Object__op_Inequality(m_Clip, 0, 0);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      v17 = this->fields.simpleAnimation;
      if ( v17 )
      {
        Instance = (CommonUI_o *)v17->fields.m_Clip;
        if ( Instance )
        {
          name = UnityEngine_Object__get_name((UnityEngine_Object_o *)Instance, 0);
          SimpleAnimation__Play_78552168(v17, name, 0);
          goto LABEL_37;
        }
      }
LABEL_40:
      sub_2213CDC(Instance, v4);
    }
  }
  else
  {
    animation = (UnityEngine_Object_o *)this->fields.animation;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4, v13);
    if ( UnityEngine_Object__op_Inequality(animation, 0, 0) )
    {
      Instance = (CommonUI_o *)this->fields.animation;
      if ( !Instance )
        goto LABEL_40;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 1, 0);
      Instance = (CommonUI_o *)this->fields.animation;
      if ( !Instance )
        goto LABEL_40;
      clip = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip((UnityEngine_Animation_o *)Instance, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20, v21);
      Instance = (CommonUI_o *)UnityEngine_Object__op_Inequality(clip, 0, 0);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        v23 = this->fields.animation;
        if ( v23 )
        {
          Instance = (CommonUI_o *)UnityEngine_Animation__get_clip(this->fields.animation, 0);
          if ( Instance )
          {
            v24 = UnityEngine_Object__get_name((UnityEngine_Object_o *)Instance, 0);
            UnityEngine_Animation__Play_83078544(v23, v24, 0);
            goto LABEL_37;
          }
        }
        goto LABEL_40;
      }
    }
  }
LABEL_37:
  Instance = (CommonUI_o *)this->fields.standFigure;
  if ( !Instance )
    goto LABEL_40;
  Instance = (CommonUI_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_40;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  this->fields.state = 1;
}


void TitleInfoEventTowerReward___c__DisplayClass38_0___ctor(
        TitleInfoEventTowerReward___c__DisplayClass38_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TitleInfoEventTowerReward___c__DisplayClass38_0___StartRewardAction_b__0(
        TitleInfoEventTowerReward___c__DisplayClass38_0_o *this,
        const MethodInfo *method)
{
  TitleInfoEventTowerReward_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_2213CDC(0, method);
  TitleInfoEventTowerReward__EndItemGetEffectAction(_4__this, this->fields.callback, 0);
}


void TitleInfoEventTowerReward___c__DisplayClass39_0___ctor(
        TitleInfoEventTowerReward___c__DisplayClass39_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TitleInfoEventTowerReward___c__DisplayClass39_0___StartRewardAction_sub_b__0(
        TitleInfoEventTowerReward___c__DisplayClass39_0_o *this,
        const MethodInfo *method)
{
  TitleInfoEventTowerReward___c__DisplayClass39_0_o *v2; // x19
  struct QuestRewardInfo_o *rewardInfo; // x8
  struct TitleInfoEventTowerReward_o *_4__this; // x20
  TitleInfoEventTowerReward___c__DisplayClass39_0_o *v5; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  __int64 v13; // x2
  struct QuestRewardInfo_o *v14; // x8
  int32_t v15; // w20
  struct TitleInfoEventTowerReward_o *v16; // x8
  struct QuestRewardInfo_o *v17; // x8
  struct TitleInfoEventTowerReward_o *v18; // x20
  TitleInfoEventTowerReward___c__DisplayClass39_0_o *v19; // x21
  UnityEngine_GameObject_o *v20; // x0
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  struct TitleInfoEventTowerReward_o *v27; // x8
  struct TitleInfoEventTowerReward_o *v28; // x8
  ServantRewardAction_o *servantRewardAction; // x20
  System_Action_o *_9__1; // x21
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7

  v2 = this;
  if ( (byte_596F304 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    sub_2213A60(&SoundManager_TypeInfo);
    this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)sub_2213A60(&Method_TitleInfoEventTowerReward___c__DisplayClass39_0__StartRewardAction_sub_b__1__);
    byte_596F304 = 1;
  }
  rewardInfo = v2->fields.rewardInfo;
  if ( !rewardInfo )
    goto LABEL_30;
  this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)Gift__IsServant_47387968(rewardInfo->fields.type, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    _4__this = v2->fields.__4__this;
    this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    if ( v2->fields.__4__this )
    {
      v5 = this;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v2->fields.__4__this, 0);
      this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)GameObjectExtensions__GetParent(gameObject, 0);
      if ( v5 )
      {
        this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)SummonAssetManager__InstantiateSvtGetPrefab(
                                                                      (SummonAssetManager_o *)v5,
                                                                      (UnityEngine_Transform_o *)this,
                                                                      0,
                                                                      0);
        if ( _4__this )
        {
          _4__this->fields.servantRewardAction = (struct ServantRewardAction_o *)this;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&_4__this->fields.servantRewardAction,
            (int32_t)this,
            v7,
            v8,
            v9,
            v10,
            v11,
            v12);
          v14 = v2->fields.rewardInfo;
          if ( v14 )
          {
            if ( v14->fields.isSkipSvtDetail )
              v15 = 38;
            else
              v15 = 6;
            if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, method, v13);
            SoundManager__stopBgm(0);
            v16 = v2->fields.__4__this;
            if ( v16 )
            {
              this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)v16->fields.servantRewardAction;
              if ( this )
              {
                ServantRewardAction__Setup_44071516((ServantRewardAction_o *)this, v2->fields.rewardInfo, v15, 0);
                goto LABEL_25;
              }
            }
          }
        }
      }
    }
LABEL_30:
    sub_2213CDC(this, method);
  }
  v17 = v2->fields.rewardInfo;
  if ( !v17 )
    goto LABEL_30;
  this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)Gift__IsCommandCode_47388336(v17->fields.type, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v18 = v2->fields.__4__this;
    this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    if ( !v2->fields.__4__this )
      goto LABEL_30;
    v19 = this;
    v20 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v2->fields.__4__this, 0);
    this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)GameObjectExtensions__GetParent(v20, 0);
    if ( !v19 )
      goto LABEL_30;
    this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)SummonAssetManager__InstantiateSvtGetPrefab(
                                                                  (SummonAssetManager_o *)v19,
                                                                  (UnityEngine_Transform_o *)this,
                                                                  0,
                                                                  0);
    if ( !v18 )
      goto LABEL_30;
    v18->fields.servantRewardAction = (struct ServantRewardAction_o *)this;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v18->fields.servantRewardAction,
      (int32_t)this,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
    v27 = v2->fields.__4__this;
    if ( !v27 )
      goto LABEL_30;
    this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)v27->fields.servantRewardAction;
    if ( !this )
      goto LABEL_30;
    ServantRewardAction__SetupCommandCode((ServantRewardAction_o *)this, v2->fields.rewardInfo, 6, 0);
  }
LABEL_25:
  v28 = v2->fields.__4__this;
  if ( !v28 )
    goto LABEL_30;
  servantRewardAction = v28->fields.servantRewardAction;
  _9__1 = v2->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v2,
      Method_TitleInfoEventTowerReward___c__DisplayClass39_0__StartRewardAction_sub_b__1__,
      0);
    v2->fields.__9__1 = _9__1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v2->fields.__9__1, (int32_t)_9__1, v31, v32, v33, v34, v35, v36);
  }
  if ( !servantRewardAction )
    goto LABEL_30;
  ServantRewardAction__Play(servantRewardAction, _9__1, 0.0, 0);
}


void TitleInfoEventTowerReward___c__DisplayClass39_0___StartRewardAction_sub_b__1(
        TitleInfoEventTowerReward___c__DisplayClass39_0_o *this,
        const MethodInfo *method)
{
  TitleInfoEventTowerReward___c__DisplayClass39_0_o *v2; // x19
  struct TitleInfoEventTowerReward_o *_4__this; // x8
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *gameObject; // x20

  v2 = this;
  if ( (byte_596F305 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)sub_2213A60(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    byte_596F305 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_10;
  this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)_4__this->fields.servantRewardAction;
  if ( !this )
    goto LABEL_10;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4, v5);
  UnityEngine_Object__DestroyImmediate_83460132(gameObject, 0);
  this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  if ( !this
    || (SummonAssetManager__UnloadSummonAssets((SummonAssetManager_o *)this, 0),
        (this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)v2->fields.__4__this) == 0) )
  {
LABEL_10:
    sub_2213CDC(this, method);
  }
  TitleInfoEventTowerReward__StartRewardAction_sub(
    (TitleInfoEventTowerReward_o *)this,
    v2->fields.rewardInfoList,
    v2->fields.idx + 1,
    v2->fields.subEndAction,
    0);
}