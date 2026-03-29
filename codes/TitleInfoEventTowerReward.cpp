void TitleInfoEventTowerReward___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  int32_t v7; // w1
  struct TitleInfoEventTowerReward_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  int32_t v15; // w1
  struct TitleInfoEventTowerReward_StaticFields *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7

  if ( (byte_4D2F370 & 1) == 0 )
  {
    sub_1C93AD4(&TitleInfoEventTowerReward_TypeInfo);
    sub_1C93AD4(&StringLiteral_24450/*"tower_{0}_{1}"*/);
    sub_1C93AD4(&StringLiteral_17337/*"bit_floor_reward"*/);
    sub_1C93AD4(&StringLiteral_3045/*"Back/back{0:D5}"*/);
    byte_4D2F370 = 1;
  }
  TitleInfoEventTowerReward_TypeInfo->static_fields->SPRITE_NAME_TOWER = (struct System_String_o *)StringLiteral_24450/*"tower_{0}_{1}"*/;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)TitleInfoEventTowerReward_TypeInfo->static_fields,
    StringLiteral_24450/*"tower_{0}_{1}"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v7 = StringLiteral_3045/*"Back/back{0:D5}"*/;
  static_fields = TitleInfoEventTowerReward_TypeInfo->static_fields;
  static_fields->SPRITE_NAME_BG = (struct System_String_o *)StringLiteral_3045/*"Back/back{0:D5}"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->SPRITE_NAME_BG, v7, v9, v10, v11, v12, v13, v14);
  v15 = StringLiteral_17337/*"bit_floor_reward"*/;
  v16 = TitleInfoEventTowerReward_TypeInfo->static_fields;
  v16->CLIP_NAME_TOWER_REWARD = (struct System_String_o *)StringLiteral_17337/*"bit_floor_reward"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v16->CLIP_NAME_TOWER_REWARD, v15, v17, v18, v19, v20, v21, v22);
}


void TitleInfoEventTowerReward___ctor(TitleInfoEventTowerReward_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void TitleInfoEventTowerReward__Close(TitleInfoEventTowerReward_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  System_String_o *voiceName; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  struct System_String_o **p_voiceAssetName; // x20
  System_String_o *v13; // x21
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  System_Action_o *v20; // x20
  const MethodInfo *v21; // x2

  if ( (byte_4D2F36D & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&SoundManager_TypeInfo);
    sub_1C93AD4(&Method_TitleInfoEventTowerReward__Close_b__37_0__);
    byte_4D2F36D = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C93D2C(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  if ( this->fields.voicePlayer )
  {
    voiceName = this->fields.voiceName;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__stopVoice_42249956(voiceName, 0.0, 0);
    this->fields.voicePlayer = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.voicePlayer, 0, v6, v7, v8, v9, v10, v11);
  }
  p_voiceAssetName = &this->fields.voiceAssetName;
  if ( !System_String__IsNullOrEmpty(this->fields.voiceAssetName, 0) )
  {
    v13 = *p_voiceAssetName;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__releaseAudioAssetStorage(v13, 0);
    *p_voiceAssetName = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.voiceAssetName, 0, v14, v15, v16, v17, v18, v19);
  }
  *(_QWORD *)&this->fields.selectVoiceIndex = 0;
  this->fields.playCnt = 0;
  v20 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v20, (Il2CppObject *)this, Method_TitleInfoEventTowerReward__Close_b__37_0__, 0);
  TitleInfoEventTowerReward__StartRewardAction(this, v20, v21);
}


void TitleInfoEventTowerReward__EndItemGetEffectAction(
        TitleInfoEventTowerReward_o *this,
        System_Action_o *afterDetail,
        const MethodInfo *method)
{
  if ( !afterDetail )
    sub_1C93D2C(this, 0);
  ((void (__fastcall *)(intptr_t, intptr_t))afterDetail->fields.invoke_impl)(
    afterDetail->fields.method_code,
    afterDetail->fields.method);
}


void TitleInfoEventTowerReward__EndPlayVoice(TitleInfoEventTowerReward_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *voiceList; // x0
  __int64 playCnt; // x8
  __int64 v5; // x8

  if ( (byte_4D2F36A & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    sub_1C93AD4(&StringLiteral_10753/*"PlayVoice"*/);
    byte_4D2F36A = 1;
  }
  if ( this->fields.playCnt < this->fields.maxPlayCnt )
  {
    voiceList = (System_Collections_Generic_List_object__o *)this->fields.voiceList;
    if ( !voiceList )
      goto LABEL_10;
    voiceList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                               voiceList,
                                                               this->fields.selectVoiceIndex,
                                                               (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    if ( !voiceList )
      goto LABEL_10;
    playCnt = this->fields.playCnt;
    if ( (unsigned int)playCnt >= voiceList->fields._size )
      sub_1C93D34(voiceList);
    v5 = *((_QWORD *)&voiceList->fields._syncRoot + playCnt);
    if ( !v5 )
LABEL_10:
      sub_1C93D2C(voiceList, method);
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10753/*"PlayVoice"*/,
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
  if ( (byte_4D2F366 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    this = (TitleInfoEventTowerReward_o *)sub_1C93AD4(&Method_TitleInfoEventTowerReward_OnLoadEndSvt__);
    byte_4D2F366 = 1;
  }
  klass = v2[9].klass;
  if ( !klass
    || (monitor = (UIStandFigureR_o *)v2[4].monitor,
        v5 = *(&klass->_1.byval_arg.bits + 1),
        data = (int32_t)klass->_1.this_arg.data,
        v7 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo),
        System_Action___ctor(v7, v2, Method_TitleInfoEventTowerReward_OnLoadEndSvt__, 0),
        !monitor) )
  {
    sub_1C93D2C(this, method);
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
  il2cpp_array_size_t max_length; // x25
  System_Collections_Generic_List_object__o *v9; // x23
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  unsigned __int64 v16; // x23
  struct EventTowerReward_o *v17; // x8
  struct System_String_array *v18; // x9
  int size; // w25
  TitleInfoEventTowerReward_o *v20; // x22
  int32_t v21; // w23
  struct ExUITexture_o *bgSprite; // x8
  struct EventTowerReward_o *v23; // x9
  System_Collections_Generic_List_object__o *voiceList; // x24
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 v33; // x10
  TitleInfoEventTowerReward_o *v34; // x1
  Il2CppClass **v35; // x0
  struct EventTowerReward_o *v36; // x8
  System_String_o *VoiceAssetName_43508840; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  System_String_o *voiceAssetName; // x20
  System_Action_o *v45; // x21

  v2 = this;
  if ( (byte_4D2F367 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantVoiceMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantVoiceData____AddRange__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    sub_1C93AD4(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&SoundManager_TypeInfo);
    this = (TitleInfoEventTowerReward_o *)sub_1C93AD4(&Method_TitleInfoEventTowerReward__OnLoadEndSvt_b__31_0__);
    byte_4D2F367 = 1;
  }
  eventTowerReward = v2->fields.eventTowerReward;
  if ( !eventTowerReward )
    goto LABEL_39;
  if ( eventTowerReward->fields.voiceIds )
  {
    v4 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v4,
      (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    this = (TitleInfoEventTowerReward_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_39;
    this = (TitleInfoEventTowerReward_o *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)this,
                                            (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
    v5 = v2->fields.eventTowerReward;
    if ( !v5 )
      goto LABEL_39;
    voiceIds = v5->fields.voiceIds;
    if ( !voiceIds )
      goto LABEL_39;
    v7 = this;
    max_length = voiceIds->max_length;
    v9 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v9,
      (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    v2->fields.voiceList = (struct System_Collections_Generic_List_ServantVoiceData____o *)v9;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v2->fields.voiceList, (int32_t)v9, v10, v11, v12, v13, v14, v15);
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
          sub_1C93D34(this);
        if ( !v7 )
          break;
        this = (TitleInfoEventTowerReward_o *)ServantVoiceMaster__getEntity_43529260(
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
            (const MethodInfo_3879BA8 *)Method_System_Collections_Generic_List_ServantVoiceData____AddRange__);
        }
        if ( (unsigned int)max_length == ++v16 )
          goto LABEL_18;
      }
LABEL_39:
      sub_1C93D2C(this, method);
    }
LABEL_18:
    this = (TitleInfoEventTowerReward_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_39;
    this = (TitleInfoEventTowerReward_o *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)this,
                                            (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
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
                                                (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
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
                                                  (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
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
              *(const MethodInfo_387999C **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
          }
          else
          {
            v35 = &items->obj.klass + v33;
            voiceList->fields._size = v33 + 1;
            v35[4] = (Il2CppClass *)v34;
            sub_1C93A78((GrandQuestFolderBoardItem_o *)(v35 + 4), (int32_t)v34, v25, v26, v27, v28, v29, v30);
          }
        }
      }
      while ( size != ++v21 );
    }
    v36 = v2->fields.eventTowerReward;
    if ( !v36 )
      goto LABEL_39;
    VoiceAssetName_43508840 = ServantVoiceEntity__getVoiceAssetName_43508840(v36->fields.svtId, 0);
    v2->fields.voiceAssetName = VoiceAssetName_43508840;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&v2->fields.voiceAssetName,
      (int32_t)VoiceAssetName_43508840,
      v38,
      v39,
      v40,
      v41,
      v42,
      v43);
    voiceAssetName = v2->fields.voiceAssetName;
    v45 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(v45, (Il2CppObject *)v2, Method_TitleInfoEventTowerReward__OnLoadEndSvt_b__31_0__, 0);
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__loadAudioAssetStorage(voiceAssetName, v45, 1, 0);
  }
}


void TitleInfoEventTowerReward__OnTouchDisp(TitleInfoEventTowerReward_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *screenTouchInfo; // x0
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v5; // x8
  CommonUI_o *v6; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v8; // x21

  if ( (byte_4D2F36C & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&AvalonSceneManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_TitleInfoEventTowerReward__OnTouchDisp_b__36_0__);
    byte_4D2F36C = 1;
  }
  screenTouchInfo = (UnityEngine_Component_o *)this->fields.screenTouchInfo;
  if ( !screenTouchInfo )
    goto LABEL_9;
  screenTouchInfo = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(screenTouchInfo, 0);
  if ( !screenTouchInfo )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)screenTouchInfo, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = AvalonSceneManager_TypeInfo;
  v6 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v5 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v5->static_fields->DEFAULT_FADE_TIME;
  v8 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_TitleInfoEventTowerReward__OnTouchDisp_b__36_0__, 0);
  if ( !v6 )
LABEL_9:
    sub_1C93D2C(screenTouchInfo, method);
  CommonUI__maskFadeout(v6, 1, DEFAULT_FADE_TIME, v8, 0);
  this->fields.state = 0;
}


void TitleInfoEventTowerReward__Open(
        TitleInfoEventTowerReward_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  TerminalPramsManager_c *v10; // x0
  struct EventTowerReward_o *eventTowerReward_k__BackingField; // x1
  struct EventTowerReward_o **p_eventTowerReward; // x20
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  TerminalPramsManager_c *v19; // x0
  struct QuestRewardInfo_array *resultEventTowerRewardInfo_k__BackingField; // x1
  struct EventTowerReward_o *eventTowerReward; // x8
  struct ScreenTouchInformationComponent_o **p_screenTouchInfo; // x22
  UnityEngine_Object_o *screenTouchInfo; // x23
  __int64 v24; // x1
  Il2CppObject *Instance; // x23
  __int64 transform; // x0
  Il2CppObject *Component_object; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  __int64 v40; // x21
  TitleInfoEventTowerReward_c *v41; // x8
  int effectId; // w23
  System_String_o *CLIP_NAME_TOWER_REWARD; // x22
  System_String_o *FloorRewardPrefabName; // x0
  TitleInfoEventTowerReward_c *v45; // x0
  struct EventTowerReward_o *v46; // x8
  Il2CppObject *v47; // x0
  System_String_o *v48; // x0
  UnityEngine_Object_o *simpleAnimation; // x23
  System_String_o *v50; // x22
  bool v51; // w0
  __int64 v52; // x23
  __int64 v53; // x8
  __int64 v54; // x21
  __int64 v55; // x9
  SimpleAnimation_State_c **v56; // x10
  __int64 v57; // x0
  UnityEngine_Object_o *animation; // x23
  int towerId; // w8
  __int64 v60; // x22
  Il2CppObject *Item; // x21
  struct EventTowerReward_o *v62; // x8
  UILabel_o *floorLabel; // x21
  struct EventTowerReward_o *v64; // x8
  UILabel_o *v65; // x22
  UISprite_o *nameSprite; // x21
  System_String_o *v67; // x22
  Il2CppObject *v68; // x23
  Il2CppObject *v69; // x0
  int v70; // w26
  __int64 v71; // x21
  System_Text_StringBuilder_o *v72; // x22
  unsigned int i; // w27
  __int64 v74; // x23
  __int64 v75; // x23
  __int64 v76; // t1
  System_String_o *v77; // x0
  bool IsNullOrEmpty; // w23
  UILabel_o *rewardLabel; // x23
  _DWORD *v80; // x8
  int32_t v81; // w21
  struct EventTowerReward_o *v82; // x8
  System_String_o *SPRITE_NAME_BG; // x20
  Il2CppObject *v84; // x0
  System_String_o *v85; // x0
  ExUITexture_o *bgSprite; // x20
  System_String_o *v87; // x21
  System_Action_o *v88; // x22
  int32_t v89; // [xsp+0h] [xbp-80h] BYREF
  int eventId; // [xsp+4h] [xbp-7Ch] BYREF
  System_String_o *countText; // [xsp+8h] [xbp-78h] BYREF
  System_String_o *nameText; // [xsp+10h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4D2F365 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_EventTowerMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_1C93AD4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_UIFont__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_UIFont__get_Item__);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&SimpleAnimation_State_TypeInfo);
    sub_1C93AD4(&System_Text_StringBuilder_TypeInfo);
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    sub_1C93AD4(&Method_TitleInfoEventTowerReward_OnLoadEndBG__);
    sub_1C93AD4(&TitleInfoEventTowerReward_TypeInfo);
    sub_1C93AD4(&StringLiteral_43/*"\n"*/);
    sub_1C93AD4(&StringLiteral_5765/*"EVENT_TOWER_REWARD_GET"*/);
    sub_1C93AD4(&StringLiteral_10925/*"QUEST_CLEAR_COSTUME_GET"*/);
    sub_1C93AD4(&StringLiteral_16207/*"_"*/);
    sub_1C93AD4(&StringLiteral_5766/*"EVENT_TOWER_REWARD_GET_2"*/);
    byte_4D2F365 = 1;
  }
  nameText = 0;
  entity = 0;
  countText = 0;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D2D92E )
  {
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    byte_4D2D92E = 1;
  }
  v10 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v10 = TerminalPramsManager_TypeInfo;
  }
  eventTowerReward_k__BackingField = v10->static_fields->_eventTowerReward_k__BackingField;
  this->fields.eventTowerReward = eventTowerReward_k__BackingField;
  p_eventTowerReward = &this->fields.eventTowerReward;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.eventTowerReward,
    (int32_t)eventTowerReward_k__BackingField,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !byte_4D2DE02 )
  {
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    byte_4D2DE02 = 1;
  }
  v19 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v19 = TerminalPramsManager_TypeInfo;
  }
  resultEventTowerRewardInfo_k__BackingField = v19->static_fields->_resultEventTowerRewardInfo_k__BackingField;
  this->fields.resultEventTowerRewardInfo = resultEventTowerRewardInfo_k__BackingField;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.resultEventTowerRewardInfo,
    (int32_t)resultEventTowerRewardInfo_k__BackingField,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  eventTowerReward = this->fields.eventTowerReward;
  if ( !eventTowerReward || eventTowerReward->fields.eventId <= 0 )
  {
    ActionExtensions__Call(callback, 0);
    return;
  }
  p_screenTouchInfo = &this->fields.screenTouchInfo;
  screenTouchInfo = (UnityEngine_Object_o *)this->fields.screenTouchInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(screenTouchInfo, 0, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !Instance )
      goto LABEL_134;
    transform = (__int64)CommonUI__CreateScreeenTouchInfo(
                           (CommonUI_o *)Instance,
                           (UnityEngine_Transform_o *)transform,
                           0,
                           0);
    if ( !transform )
      goto LABEL_134;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)transform,
                         (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    *p_screenTouchInfo = (struct ScreenTouchInformationComponent_o *)Component_object;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.screenTouchInfo,
      (int32_t)Component_object,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
  }
  transform = (__int64)*p_screenTouchInfo;
  if ( !*p_screenTouchInfo )
    goto LABEL_134;
  transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
  if ( !transform )
    goto LABEL_134;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0);
  transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_134;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0);
  transform = (__int64)this->fields.standFigure;
  if ( !transform )
    goto LABEL_134;
  transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
  if ( !transform )
    goto LABEL_134;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0);
  this->fields.endCallback = callback;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.endCallback, (int32_t)callback, v34, v35, v36, v37, v38, v39);
  this->fields.state = 0;
  transform = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !transform )
    goto LABEL_134;
  transform = (__int64)DataManager__GetMasterData_object_(
                         (DataManager_o *)transform,
                         (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_EventTowerMaster___);
  if ( !*p_eventTowerReward || !transform )
    goto LABEL_134;
  transform = (__int64)EventTowerMaster__GetEntity(
                         (EventTowerMaster_o *)transform,
                         (*p_eventTowerReward)->fields.eventId,
                         (*p_eventTowerReward)->fields.towerId,
                         0);
  v40 = transform;
  v41 = TitleInfoEventTowerReward_TypeInfo;
  if ( !TitleInfoEventTowerReward_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventTowerReward_TypeInfo);
    v41 = TitleInfoEventTowerReward_TypeInfo;
  }
  if ( !*p_eventTowerReward )
    goto LABEL_134;
  effectId = (*p_eventTowerReward)->fields.effectId;
  CLIP_NAME_TOWER_REWARD = v41->static_fields->CLIP_NAME_TOWER_REWARD;
  transform = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !transform )
    goto LABEL_134;
  transform = (__int64)DataManager__GetMasterData_object_(
                         (DataManager_o *)transform,
                         (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !*p_eventTowerReward || !transform )
    goto LABEL_134;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)transform,
         &entity,
         (*p_eventTowerReward)->fields.eventId,
         (const MethodInfo_34632C0 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
    transform = (__int64)entity;
    if ( !entity )
      goto LABEL_134;
    FloorRewardPrefabName = EventDetailEntity__GetFloorRewardPrefabName((EventDetailEntity_o *)entity, 0);
    if ( FloorRewardPrefabName )
      CLIP_NAME_TOWER_REWARD = FloorRewardPrefabName;
  }
  v45 = TitleInfoEventTowerReward_TypeInfo;
  if ( !TitleInfoEventTowerReward_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventTowerReward_TypeInfo);
    v45 = TitleInfoEventTowerReward_TypeInfo;
  }
  transform = System_String__op_Equality(CLIP_NAME_TOWER_REWARD, v45->static_fields->CLIP_NAME_TOWER_REWARD, 0);
  if ( (transform & 1) != 0 )
  {
    v46 = *p_eventTowerReward;
    if ( !*p_eventTowerReward )
      goto LABEL_134;
    if ( v46->fields.towerId == 2 && v46->fields.floor == 100 )
      effectId = 3;
  }
  eventId = effectId;
  v47 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId);
  v48 = System_String__Concat_64463740(
          (Il2CppObject *)CLIP_NAME_TOWER_REWARD,
          (Il2CppObject *)StringLiteral_16207/*"_"*/,
          v47,
          0);
  simpleAnimation = (UnityEngine_Object_o *)this->fields.simpleAnimation;
  v50 = v48;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v51 = UnityEngine_Object__op_Inequality(simpleAnimation, 0, 0);
  if ( v51 )
    v52 = v40;
  else
    v52 = 0;
  if ( v51 )
  {
    transform = (__int64)this->fields.simpleAnimation;
    if ( transform )
    {
      transform = (__int64)SimpleAnimation__get_Item((SimpleAnimation_o *)transform, v50, 0);
      if ( transform )
      {
        v53 = *(_QWORD *)transform;
        v54 = transform;
        v55 = *(unsigned __int16 *)(*(_QWORD *)transform + 302LL);
        if ( *(_WORD *)(*(_QWORD *)transform + 302LL) )
        {
          v56 = (SimpleAnimation_State_c **)(*(_QWORD *)(v53 + 176) + 8LL);
          while ( *(v56 - 1) != SimpleAnimation_State_TypeInfo )
          {
            --v55;
            v56 += 2;
            if ( !v55 )
              goto LABEL_58;
          }
          v57 = v53 + 16LL * (*(_DWORD *)v56 + 14) + 312;
        }
        else
        {
LABEL_58:
          v57 = sub_1C69E5C(transform, SimpleAnimation_State_TypeInfo, 14);
        }
        transform = (*(__int64 (__fastcall **)(__int64, _QWORD))v57)(v54, *(_QWORD *)(v57 + 8));
        if ( this->fields.simpleAnimation )
        {
          SimpleAnimation__set_clip(this->fields.simpleAnimation, (UnityEngine_AnimationClip_o *)transform, 0);
          transform = (__int64)this->fields.simpleAnimation;
          if ( transform )
          {
            v40 = v52;
LABEL_71:
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)transform, 0, 0);
            goto LABEL_72;
          }
        }
      }
    }
LABEL_134:
    sub_1C93D2C(transform, v24);
  }
  animation = (UnityEngine_Object_o *)this->fields.animation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = UnityEngine_Object__op_Inequality(animation, 0, 0);
  if ( (transform & 1) != 0 )
  {
    transform = (__int64)this->fields.animation;
    if ( !transform )
      goto LABEL_134;
    transform = (__int64)UnityEngine_Animation__GetClip((UnityEngine_Animation_o *)transform, v50, 0);
    if ( !this->fields.animation )
      goto LABEL_134;
    UnityEngine_Animation__set_clip(this->fields.animation, (UnityEngine_AnimationClip_o *)transform, 0);
    transform = (__int64)this->fields.animation;
    if ( !transform )
      goto LABEL_134;
    goto LABEL_71;
  }
LABEL_72:
  if ( !*p_eventTowerReward )
    goto LABEL_134;
  towerId = (*p_eventTowerReward)->fields.towerId;
  v24 = (unsigned int)(towerId - 1);
  if ( towerId >= 1 )
    v60 = v40;
  else
    v60 = 0;
  if ( towerId >= 1 )
  {
    transform = (__int64)this->fields.floorNumFontList;
    if ( !transform )
      goto LABEL_134;
    if ( *(_DWORD *)(transform + 24) >= towerId )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)transform,
               v24,
               (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_UIFont__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      transform = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Item, 0, 0);
      if ( (transform & 1) != 0 )
      {
        v62 = this->fields.eventTowerReward;
        if ( !v62 )
          goto LABEL_134;
        transform = (__int64)this->fields.floorNumFontList;
        if ( !transform )
          goto LABEL_134;
        floorLabel = this->fields.floorLabel;
        transform = (__int64)System_Collections_Generic_List_object___get_Item(
                               (System_Collections_Generic_List_object__o *)transform,
                               v62->fields.towerId - 1,
                               (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_UIFont__get_Item__);
        if ( !floorLabel )
          goto LABEL_134;
        UILabel__set_bitmapFont(floorLabel, (UIFont_o *)transform, 0);
      }
      v40 = v60;
    }
  }
  v64 = this->fields.eventTowerReward;
  if ( !v64 )
    goto LABEL_134;
  v65 = this->fields.floorLabel;
  transform = (__int64)System_Int32__ToString((int)v64 + 24, 0);
  if ( !v65 )
    goto LABEL_134;
  UILabel__set_text(v65, (System_String_o *)transform, 0);
  if ( v40 )
  {
    transform = (__int64)TitleInfoEventTowerReward_TypeInfo;
    nameSprite = this->fields.nameSprite;
    if ( !TitleInfoEventTowerReward_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventTowerReward_TypeInfo);
      transform = (__int64)TitleInfoEventTowerReward_TypeInfo;
    }
    if ( !*p_eventTowerReward )
      goto LABEL_134;
    v67 = **(System_String_o ***)(transform + 184);
    eventId = (*p_eventTowerReward)->fields.eventId;
    transform = j_il2cpp_value_box_0(int_TypeInfo, &eventId);
    if ( !*p_eventTowerReward )
      goto LABEL_134;
    v68 = (Il2CppObject *)transform;
    v89 = (*p_eventTowerReward)->fields.towerId;
    v69 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v89);
    transform = (__int64)System_String__Format_64467032(v67, v68, v69, 0);
    if ( !nameSprite )
      goto LABEL_134;
    UISprite__set_spriteName(nameSprite, (System_String_o *)transform, 0);
    transform = (__int64)this->fields.nameSprite;
    if ( !transform )
      goto LABEL_134;
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)transform + 840LL))(
      transform,
      *(_QWORD *)(*(_QWORD *)transform + 848LL));
  }
  transform = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !transform )
    goto LABEL_134;
  transform = (__int64)DataManager__GetMasterData_object_(
                         (DataManager_o *)transform,
                         (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_GiftMaster___);
  if ( !*p_eventTowerReward )
    goto LABEL_134;
  if ( !transform )
    goto LABEL_134;
  transform = (__int64)GiftMaster__GetGiftListById((GiftMaster_o *)transform, (*p_eventTowerReward)->fields.giftId, 0);
  if ( !transform )
    goto LABEL_134;
  v70 = *(_DWORD *)(transform + 24);
  v71 = transform;
  if ( v70 < 1 )
    goto LABEL_129;
  v72 = (System_Text_StringBuilder_o *)sub_1C93D20(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v72, 0);
  for ( i = 0; i != v70; ++i )
  {
    if ( i )
    {
      if ( !v72 )
        goto LABEL_134;
      transform = (__int64)System_Text_StringBuilder__Append_64509684(v72, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
    }
    if ( i >= *(_DWORD *)(v71 + 24) )
      goto LABEL_135;
    v74 = v71 + 8LL * (int)i;
    v76 = *(_QWORD *)(v74 + 32);
    v75 = v74 + 32;
    transform = v76;
    if ( !v76 )
      goto LABEL_134;
    GiftEntity__GetInfo((GiftEntity_o *)transform, &nameText, &countText, 0);
    if ( i >= *(_DWORD *)(v71 + 24) )
      goto LABEL_135;
    if ( !*(_QWORD *)v75 )
      goto LABEL_134;
    if ( *(_DWORD *)(*(_QWORD *)v75 + 20LL) == 9 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v77 = (System_String_o *)StringLiteral_10925/*"QUEST_CLEAR_COSTUME_GET"*/;
      goto LABEL_117;
    }
    IsNullOrEmpty = System_String__IsNullOrEmpty(countText, 0);
    if ( LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      if ( IsNullOrEmpty )
        goto LABEL_116;
    }
    else
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( IsNullOrEmpty )
      {
LABEL_116:
        v77 = (System_String_o *)StringLiteral_5766/*"EVENT_TOWER_REWARD_GET_2"*/;
LABEL_117:
        transform = (__int64)LocalizationManager__Get(v77, 0);
        if ( !v72 )
          goto LABEL_134;
        transform = (__int64)System_Text_StringBuilder__AppendFormat(
                               v72,
                               (System_String_o *)transform,
                               (Il2CppObject *)nameText,
                               0);
        continue;
      }
    }
    transform = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_5765/*"EVENT_TOWER_REWARD_GET"*/, 0);
    if ( !v72 )
      goto LABEL_134;
    transform = (__int64)System_Text_StringBuilder__AppendFormat_64516036(
                           v72,
                           (System_String_o *)transform,
                           (Il2CppObject *)nameText,
                           (Il2CppObject *)countText,
                           0);
  }
  rewardLabel = this->fields.rewardLabel;
  transform = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v72->klass->vtable._3_ToString.methodPtr)(
                v72,
                v72->klass->vtable._3_ToString.method);
  if ( !rewardLabel )
    goto LABEL_134;
  UILabel__set_text(rewardLabel, (System_String_o *)transform, 0);
  if ( !*(_DWORD *)(v71 + 24) )
LABEL_135:
    sub_1C93D34(transform);
  v80 = *(_DWORD **)(v71 + 32);
  if ( !v80 )
    goto LABEL_134;
  transform = (__int64)this->fields.itemIcon;
  if ( !transform )
    goto LABEL_134;
  v81 = v80[5];
  ItemIconComponent__SetGift_41640856((ItemIconComponent_o *)transform, v81, v80[6], (int)v80[7], 0, 0);
  transform = (__int64)this->fields.imageFrame;
  if ( !transform )
    goto LABEL_134;
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)transform,
    (0x461u >> (v81 - 1)) & ((unsigned int)(v81 - 1) < 0xB),
    0);
LABEL_129:
  transform = (__int64)TitleInfoEventTowerReward_TypeInfo;
  if ( !TitleInfoEventTowerReward_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TitleInfoEventTowerReward_TypeInfo);
  v82 = *p_eventTowerReward;
  if ( !*p_eventTowerReward )
    goto LABEL_134;
  SPRITE_NAME_BG = TitleInfoEventTowerReward_TypeInfo->static_fields->SPRITE_NAME_BG;
  eventId = v82->fields.bgId;
  v84 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId);
  v85 = System_String__Format(SPRITE_NAME_BG, v84, 0);
  bgSprite = this->fields.bgSprite;
  v87 = v85;
  v88 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v88, (Il2CppObject *)this, Method_TitleInfoEventTowerReward_OnLoadEndBG__, 0);
  if ( !bgSprite )
    goto LABEL_134;
  ExUITexture__SetAssetImage(bgSprite, v87, v88, 0);
}


void TitleInfoEventTowerReward__PlayVoice(TitleInfoEventTowerReward_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *voiceList; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  __int64 playCnt; // x8
  ServantVoiceData_o *v11; // x20
  struct System_String_o *id; // x1
  struct EventTowerReward_o *eventTowerReward; // x8
  System_String_o *VoiceAssetName_43508840; // x0
  SeManager_c *v15; // x8
  System_String_o *voiceName; // x21
  System_String_o *v17; // x22
  float DEFAULT_VOLUME; // s8
  System_Action_o *v19; // x23
  struct SePlayer_o *v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  UIStandFigureR_o *standFigure; // x21
  int32_t face; // w22
  float FadeTime; // s0

  if ( (byte_4D2F369 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    sub_1C93AD4(&SeManager_TypeInfo);
    sub_1C93AD4(&SoundManager_TypeInfo);
    sub_1C93AD4(&Method_TitleInfoEventTowerReward_EndPlayVoice__);
    byte_4D2F369 = 1;
  }
  voiceList = (System_Collections_Generic_List_object__o *)this->fields.voiceList;
  if ( !voiceList )
    goto LABEL_14;
  voiceList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                             voiceList,
                                                             this->fields.selectVoiceIndex,
                                                             (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
  if ( !voiceList )
    goto LABEL_14;
  playCnt = this->fields.playCnt;
  if ( (unsigned int)playCnt >= voiceList->fields._size )
    sub_1C93D34(voiceList);
  v11 = (ServantVoiceData_o *)*((_QWORD *)&voiceList->fields._syncRoot + playCnt);
  if ( !v11 )
    goto LABEL_14;
  id = v11->fields.id;
  this->fields.voiceName = id;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.voiceName, (int32_t)id, v4, v5, v6, v7, v8, v9);
  eventTowerReward = this->fields.eventTowerReward;
  if ( !eventTowerReward )
    goto LABEL_14;
  VoiceAssetName_43508840 = ServantVoiceEntity__getVoiceAssetName_43508840(eventTowerReward->fields.svtId, 0);
  v15 = SeManager_TypeInfo;
  voiceName = this->fields.voiceName;
  v17 = VoiceAssetName_43508840;
  if ( !SeManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    v15 = SeManager_TypeInfo;
  }
  DEFAULT_VOLUME = v15->static_fields->DEFAULT_VOLUME;
  v19 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v19, (Il2CppObject *)this, Method_TitleInfoEventTowerReward_EndPlayVoice__, 0);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  v20 = SoundManager__playVoice_42249560(v17, voiceName, DEFAULT_VOLUME, v19, 0, 0);
  this->fields.voicePlayer = v20;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.voicePlayer, (int32_t)v20, v21, v22, v23, v24, v25, v26);
  standFigure = this->fields.standFigure;
  face = v11->fields.face;
  FadeTime = ServantVoiceData__GetFadeTime(v11, 0);
  if ( !standFigure )
LABEL_14:
    sub_1C93D2C(voiceList, method);
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
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  __int64 v14; // x22
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  QuestRewardInfo_array *resultEventTowerRewardInfo; // x20
  System_Action_o *v22; // x22
  const MethodInfo *v23; // x4

  if ( (byte_4D2F36E & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_TitleInfoEventTowerReward___c__DisplayClass38_0__StartRewardAction_b__0__);
    sub_1C93AD4(&TitleInfoEventTowerReward___c__DisplayClass38_0_TypeInfo);
    byte_4D2F36E = 1;
  }
  v5 = sub_1C93D20(TitleInfoEventTowerReward___c__DisplayClass38_0_TypeInfo);
  TitleInfoEventTowerReward___c__DisplayClass38_0___ctor((TitleInfoEventTowerReward___c__DisplayClass38_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_8;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = callback;
  v14 = v5 + 24;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)callback, v15, v16, v17, v18, v19, v20);
  resultEventTowerRewardInfo = this->fields.resultEventTowerRewardInfo;
  if ( resultEventTowerRewardInfo )
  {
    v22 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
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
    sub_1C93D2C(v6, v7);
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
  Il2CppObject *IsServant_41140096; // x0
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
  __int64 v24; // x19
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
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
    if ( (byte_4D2F36F & 1) == 0 )
    {
      sub_1C93AD4(&System_Action_TypeInfo);
      sub_1C93AD4(&Method_DataManager_GetMasterData_ServantMaster___);
      sub_1C93AD4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      sub_1C93AD4(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
      sub_1C93AD4(&Method_TitleInfoEventTowerReward___c__DisplayClass39_0__StartRewardAction_sub_b__0__);
      sub_1C93AD4(&TitleInfoEventTowerReward___c__DisplayClass39_0_TypeInfo);
      byte_4D2F36F = 1;
    }
    v9 = sub_1C93D20(TitleInfoEventTowerReward___c__DisplayClass39_0_TypeInfo);
    TitleInfoEventTowerReward___c__DisplayClass39_0___ctor((TitleInfoEventTowerReward___c__DisplayClass39_0_o *)v9, 0);
    if ( !v9 )
      goto LABEL_23;
    *(_QWORD *)(v9 + 24) = this;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v9 + 24), (int32_t)this, v12, v13, v14, v15, v16, v17);
    *(_QWORD *)(v9 + 32) = rewardInfoList;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v9 + 32), (int32_t)rewardInfoList, v18, v19, v20, v21, v22, v23);
    *(_QWORD *)(v9 + 48) = subEndAction;
    v24 = v9 + 48;
    *(_DWORD *)(v9 + 40) = idx;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v9 + 48), (int32_t)subEndAction, v25, v26, v27, v28, v29, v30);
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
      sub_1C93D34(IsServant_41140096);
    v40 = *(_QWORD *)(v37 + 8 * v38 + 32);
    *(_QWORD *)(v9 + 16) = v40;
    v41 = v9 + 16;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v9 + 16), v40, v31, v32, v33, v34, v35, v36);
    if ( !*(_QWORD *)(v9 + 16) )
      goto LABEL_23;
    IsServant_41140096 = (Il2CppObject *)Gift__IsServant_41140096(*(_DWORD *)(*(_QWORD *)(v9 + 16) + 16LL), 0);
    if ( ((unsigned __int8)IsServant_41140096 & 1) == 0 )
      break;
    IsServant_41140096 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !IsServant_41140096 )
      goto LABEL_23;
    IsServant_41140096 = DataManager__GetMasterData_object_(
                           (DataManager_o *)IsServant_41140096,
                           (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !*(_QWORD *)v41 || !IsServant_41140096 )
      goto LABEL_23;
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)IsServant_41140096,
               *(_DWORD *)(*(_QWORD *)v41 + 20LL),
               (const MethodInfo_3463274 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
  if ( !Gift__IsCommandCode_41140488(*(_DWORD *)(*(_QWORD *)v41 + 16LL), 0) )
    goto LABEL_18;
LABEL_21:
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  v45 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(
    v45,
    (Il2CppObject *)v9,
    Method_TitleInfoEventTowerReward___c__DisplayClass39_0__StartRewardAction_sub_b__0__,
    0);
  if ( !Instance )
LABEL_23:
    sub_1C93D2C(IsServant_41140096, v11);
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
  if ( (byte_4D2F368 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    this = (TitleInfoEventTowerReward_o *)sub_1C93AD4(&System_Random_TypeInfo);
    byte_4D2F368 = 1;
  }
  voiceList = v2->fields.voiceList;
  if ( !voiceList )
    goto LABEL_11;
  if ( voiceList->fields._size )
  {
    v4 = (System_Random_o *)sub_1C93D20(System_Random_TypeInfo);
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
                                                  (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
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
    sub_1C93D2C(this, method);
  }
}


void TitleInfoEventTowerReward__Update(TitleInfoEventTowerReward_o *this, const MethodInfo *method)
{
  int32_t state; // w8
  UnityEngine_Object_o *simpleAnimation; // x20
  UnityEngine_Object_o *m_Clip; // x0
  __int64 v6; // x1
  struct SimpleAnimation_o *v7; // x20
  System_String_o *name; // x0
  UnityEngine_Object_c *klass; // x8
  UnityEngine_Object_o *v10; // x20
  __int64 v11; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v13; // x0
  const MethodInfo *v14; // x1
  UnityEngine_Object_o *animation; // x20
  UnityEngine_Animation_o *v16; // x20
  System_String_o *v17; // x0
  UnityEngine_AnimationState_o *v18; // x20
  float time; // s8
  long double v20; // q0
  UnityEngine_Object_c *v21; // x8
  __int64 v22; // x9
  SimpleAnimation_State_c **v23; // x10
  __int64 v24; // x0

  if ( (byte_4D2F36B & 1) == 0 )
  {
    sub_1C93AD4(&CTouch_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&SimpleAnimation_State_TypeInfo);
    byte_4D2F36B = 1;
  }
  state = this->fields.state;
  if ( state != 2 )
  {
    if ( state != 1 )
      return;
    simpleAnimation = (UnityEngine_Object_o *)this->fields.simpleAnimation;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    m_Clip = (UnityEngine_Object_o *)UnityEngine_Object__op_Inequality(simpleAnimation, 0, 0);
    if ( ((unsigned __int8)m_Clip & 1) != 0 )
    {
      v7 = this->fields.simpleAnimation;
      if ( !v7 )
        goto LABEL_41;
      m_Clip = (UnityEngine_Object_o *)v7->fields.m_Clip;
      if ( !m_Clip )
        goto LABEL_41;
      name = UnityEngine_Object__get_name(m_Clip, 0);
      m_Clip = (UnityEngine_Object_o *)SimpleAnimation__get_Item(v7, name, 0);
      if ( !m_Clip )
        goto LABEL_41;
      klass = m_Clip->klass;
      v10 = m_Clip;
      v11 = *(unsigned __int16 *)&m_Clip->klass->_2.rank;
      if ( *(_WORD *)&m_Clip->klass->_2.rank )
      {
        p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v11;
          p_offset += 2;
          if ( !v11 )
            goto LABEL_15;
        }
        v13 = (__int64)(&klass->vtable._3_ToString + *(_DWORD *)p_offset);
      }
      else
      {
LABEL_15:
        v13 = sub_1C69E5C(m_Clip, SimpleAnimation_State_TypeInfo, 3);
      }
      v20 = ((long double (__fastcall *)(UnityEngine_Object_o *, _QWORD))*(_QWORD *)v13)(v10, *(_QWORD *)(v13 + 8));
      v21 = v10->klass;
      time = *(float *)&v20;
      v22 = *(unsigned __int16 *)&v10->klass->_2.rank;
      if ( *(_WORD *)&v10->klass->_2.rank )
      {
        v23 = (SimpleAnimation_State_c **)&v21->_1.interfaceOffsets->offset;
        while ( *(v23 - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v22;
          v23 += 2;
          if ( !v22 )
            goto LABEL_33;
        }
        v24 = (__int64)(&v21[1]._1.nestedTypes + 2 * *(_DWORD *)v23);
      }
      else
      {
LABEL_33:
        v24 = sub_1C69E5C(v10, SimpleAnimation_State_TypeInfo, 14);
      }
      m_Clip = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(UnityEngine_Object_o *, _QWORD))v24)(
                                         v10,
                                         *(_QWORD *)(v24 + 8));
      if ( !m_Clip )
        goto LABEL_41;
    }
    else
    {
      animation = (UnityEngine_Object_o *)this->fields.animation;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      m_Clip = (UnityEngine_Object_o *)UnityEngine_Object__op_Inequality(animation, 0, 0);
      if ( ((unsigned __int8)m_Clip & 1) == 0 )
        goto LABEL_37;
      v16 = this->fields.animation;
      if ( !v16 )
        goto LABEL_41;
      m_Clip = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(this->fields.animation, 0);
      if ( !m_Clip )
        goto LABEL_41;
      v17 = UnityEngine_Object__get_name(m_Clip, 0);
      m_Clip = (UnityEngine_Object_o *)UnityEngine_Animation__get_Item(v16, v17, 0);
      if ( !m_Clip )
        goto LABEL_41;
      v18 = (UnityEngine_AnimationState_o *)m_Clip;
      time = UnityEngine_AnimationState__get_time((UnityEngine_AnimationState_o *)m_Clip, 0);
      m_Clip = (UnityEngine_Object_o *)UnityEngine_AnimationState__get_clip(v18, 0);
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
    sub_1C93D2C(m_Clip, v6);
  }
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  if ( CTouch__isTouchPush(0) )
    TitleInfoEventTowerReward__OnTouchDisp(this, v14);
}


void TitleInfoEventTowerReward___Close_b__37_0(TitleInfoEventTowerReward_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandQuestFolderBoardItem_o *p_endCallback; // x0
  System_Action_o *v9; // x19
  struct System_Action_o *endCallback; // t1

  endCallback = this->fields.endCallback;
  p_endCallback = (GrandQuestFolderBoardItem_o *)&this->fields.endCallback;
  v9 = endCallback;
  if ( endCallback )
  {
    p_endCallback->klass = 0;
    sub_1C93A78(p_endCallback, 0, v2, v3, v4, v5, v6, v7);
    ActionExtensions__Call(v9, 0);
  }
}


void TitleInfoEventTowerReward___OnLoadEndSvt_b__31_0(TitleInfoEventTowerReward_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1
  CommonUI_o *v5; // x20
  struct EventTowerReward_o *eventTowerReward; // x8
  struct EventTowerReward_o *v7; // x8
  System_String_o *m_CancellationTokenSource; // x20
  UnityEngine_Object_o *simpleAnimation; // x20
  struct SimpleAnimation_o *v10; // x8
  UnityEngine_Object_o *m_Clip; // x20
  struct SimpleAnimation_o *v12; // x20
  System_String_o *name; // x0
  UnityEngine_Object_o *animation; // x20
  UnityEngine_Object_o *clip; // x20
  UnityEngine_Animation_o *v16; // x20
  System_String_o *v17; // x0

  if ( (byte_4D2F371 & 1) == 0 )
  {
    sub_1C93AD4(&AvalonSceneManager_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_BgmMaster___);
    sub_1C93AD4(&Method_DataMasterBase_BgmMaster__BgmEntity__int__GetEntity__);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&SoundManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_13158/*"StartVoice"*/);
    byte_4D2F371 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v5 )
    goto LABEL_40;
  CommonUI__maskFadein(v5, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0, 0);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_13158/*"StartVoice"*/,
    this->fields.voiceStartTime,
    0);
  eventTowerReward = this->fields.eventTowerReward;
  if ( !eventTowerReward )
    goto LABEL_40;
  if ( eventTowerReward->fields.bgmId >= 1 )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_40;
    Instance = (CommonUI_o *)DataManager__GetMasterData_object_(
                               (DataManager_o *)Instance,
                               (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_BgmMaster___);
    v7 = this->fields.eventTowerReward;
    if ( !v7 )
      goto LABEL_40;
    if ( !Instance )
      goto LABEL_40;
    Instance = (CommonUI_o *)DataMasterBase_object__object__int___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               v7->fields.bgmId,
                               (const MethodInfo_3463274 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__GetEntity__);
    if ( !Instance )
      goto LABEL_40;
    m_CancellationTokenSource = (System_String_o *)Instance->fields.m_CancellationTokenSource;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__playBgm(m_CancellationTokenSource, 0);
  }
  simpleAnimation = (UnityEngine_Object_o *)this->fields.simpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(simpleAnimation, 0, 0) )
  {
    Instance = (CommonUI_o *)this->fields.simpleAnimation;
    if ( !Instance )
      goto LABEL_40;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 1, 0);
    v10 = this->fields.simpleAnimation;
    if ( !v10 )
      goto LABEL_40;
    m_Clip = (UnityEngine_Object_o *)v10->fields.m_Clip;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Instance = (CommonUI_o *)UnityEngine_Object__op_Inequality(m_Clip, 0, 0);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      v12 = this->fields.simpleAnimation;
      if ( v12 )
      {
        Instance = (CommonUI_o *)v12->fields.m_Clip;
        if ( Instance )
        {
          name = UnityEngine_Object__get_name((UnityEngine_Object_o *)Instance, 0);
          SimpleAnimation__Play_67370764(v12, name, 0);
          goto LABEL_37;
        }
      }
LABEL_40:
      sub_1C93D2C(Instance, v4);
    }
  }
  else
  {
    animation = (UnityEngine_Object_o *)this->fields.animation;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Instance = (CommonUI_o *)UnityEngine_Object__op_Inequality(clip, 0, 0);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        v16 = this->fields.animation;
        if ( v16 )
        {
          Instance = (CommonUI_o *)UnityEngine_Animation__get_clip(this->fields.animation, 0);
          if ( Instance )
          {
            v17 = UnityEngine_Object__get_name((UnityEngine_Object_o *)Instance, 0);
            UnityEngine_Animation__Play_71862428(v16, v17, 0);
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
    sub_1C93D2C(0, method);
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
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  struct QuestRewardInfo_o *v13; // x8
  int32_t v14; // w20
  struct TitleInfoEventTowerReward_o *v15; // x8
  struct QuestRewardInfo_o *v16; // x8
  struct TitleInfoEventTowerReward_o *v17; // x20
  TitleInfoEventTowerReward___c__DisplayClass39_0_o *v18; // x21
  UnityEngine_GameObject_o *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  struct TitleInfoEventTowerReward_o *v26; // x8
  struct TitleInfoEventTowerReward_o *v27; // x8
  ServantRewardAction_o *servantRewardAction; // x20
  System_Action_o *_9__1; // x21
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7

  v2 = this;
  if ( (byte_4D2F544 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    sub_1C93AD4(&SoundManager_TypeInfo);
    this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)sub_1C93AD4(&Method_TitleInfoEventTowerReward___c__DisplayClass39_0__StartRewardAction_sub_b__1__);
    byte_4D2F544 = 1;
  }
  rewardInfo = v2->fields.rewardInfo;
  if ( !rewardInfo )
    goto LABEL_30;
  this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)Gift__IsServant_41140096(rewardInfo->fields.type, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    _4__this = v2->fields.__4__this;
    this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
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
          sub_1C93A78(
            (GrandQuestFolderBoardItem_o *)&_4__this->fields.servantRewardAction,
            (int32_t)this,
            v7,
            v8,
            v9,
            v10,
            v11,
            v12);
          v13 = v2->fields.rewardInfo;
          if ( v13 )
          {
            if ( v13->fields.isSkipSvtDetail )
              v14 = 38;
            else
              v14 = 6;
            if ( !SoundManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
            SoundManager__stopBgm(0);
            v15 = v2->fields.__4__this;
            if ( v15 )
            {
              this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)v15->fields.servantRewardAction;
              if ( this )
              {
                ServantRewardAction__Setup_37870420((ServantRewardAction_o *)this, v2->fields.rewardInfo, v14, 0);
                goto LABEL_25;
              }
            }
          }
        }
      }
    }
LABEL_30:
    sub_1C93D2C(this, method);
  }
  v16 = v2->fields.rewardInfo;
  if ( !v16 )
    goto LABEL_30;
  this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)Gift__IsCommandCode_41140488(v16->fields.type, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v17 = v2->fields.__4__this;
    this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    if ( !v2->fields.__4__this )
      goto LABEL_30;
    v18 = this;
    v19 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v2->fields.__4__this, 0);
    this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)GameObjectExtensions__GetParent(v19, 0);
    if ( !v18 )
      goto LABEL_30;
    this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)SummonAssetManager__InstantiateSvtGetPrefab(
                                                                  (SummonAssetManager_o *)v18,
                                                                  (UnityEngine_Transform_o *)this,
                                                                  0,
                                                                  0);
    if ( !v17 )
      goto LABEL_30;
    v17->fields.servantRewardAction = (struct ServantRewardAction_o *)this;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&v17->fields.servantRewardAction,
      (int32_t)this,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
    v26 = v2->fields.__4__this;
    if ( !v26 )
      goto LABEL_30;
    this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)v26->fields.servantRewardAction;
    if ( !this )
      goto LABEL_30;
    ServantRewardAction__SetupCommandCode((ServantRewardAction_o *)this, v2->fields.rewardInfo, 6, 0);
  }
LABEL_25:
  v27 = v2->fields.__4__this;
  if ( !v27 )
    goto LABEL_30;
  servantRewardAction = v27->fields.servantRewardAction;
  _9__1 = v2->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v2,
      Method_TitleInfoEventTowerReward___c__DisplayClass39_0__StartRewardAction_sub_b__1__,
      0);
    v2->fields.__9__1 = _9__1;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v2->fields.__9__1, (int32_t)_9__1, v30, v31, v32, v33, v34, v35);
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
  UnityEngine_Object_o *gameObject; // x20

  v2 = this;
  if ( (byte_4D2F545 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)sub_1C93AD4(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    byte_4D2F545 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_10;
  this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)_4__this->fields.servantRewardAction;
  if ( !this )
    goto LABEL_10;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__DestroyImmediate_72120096(gameObject, 0);
  this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  if ( !this
    || (SummonAssetManager__UnloadSummonAssets((SummonAssetManager_o *)this, 0),
        (this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)v2->fields.__4__this) == 0) )
  {
LABEL_10:
    sub_1C93D2C(this, method);
  }
  TitleInfoEventTowerReward__StartRewardAction_sub(
    (TitleInfoEventTowerReward_o *)this,
    v2->fields.rewardInfoList,
    v2->fields.idx + 1,
    v2->fields.subEndAction,
    0);
}