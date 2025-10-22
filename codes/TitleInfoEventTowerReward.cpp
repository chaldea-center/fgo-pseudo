void TitleInfoEventTowerReward___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  int32_t v3; // w1
  struct TitleInfoEventTowerReward_StaticFields *static_fields; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  int32_t v7; // w1
  struct TitleInfoEventTowerReward_StaticFields *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4C556F9 & 1) == 0 )
  {
    sub_1C3E564(&TitleInfoEventTowerReward_TypeInfo);
    sub_1C3E564(&StringLiteral_24165/*"tower_{0}_{1}"*/);
    sub_1C3E564(&StringLiteral_17225/*"bit_floor_reward"*/);
    sub_1C3E564(&StringLiteral_3031/*"Back/back{0:D5}"*/);
    byte_4C556F9 = 1;
  }
  TitleInfoEventTowerReward_TypeInfo->static_fields->SPRITE_NAME_TOWER = (struct System_String_o *)StringLiteral_24165/*"tower_{0}_{1}"*/;
  sub_1C3E508((CGThumbnailListItem_o *)TitleInfoEventTowerReward_TypeInfo->static_fields, StringLiteral_24165/*"tower_{0}_{1}"*/, v1, v2);
  v3 = StringLiteral_3031/*"Back/back{0:D5}"*/;
  static_fields = TitleInfoEventTowerReward_TypeInfo->static_fields;
  static_fields->SPRITE_NAME_BG = (struct System_String_o *)StringLiteral_3031/*"Back/back{0:D5}"*/;
  sub_1C3E508((CGThumbnailListItem_o *)&static_fields->SPRITE_NAME_BG, v3, v5, v6);
  v7 = StringLiteral_17225/*"bit_floor_reward"*/;
  v8 = TitleInfoEventTowerReward_TypeInfo->static_fields;
  v8->CLIP_NAME_TOWER_REWARD = (struct System_String_o *)StringLiteral_17225/*"bit_floor_reward"*/;
  sub_1C3E508((CGThumbnailListItem_o *)&v8->CLIP_NAME_TOWER_REWARD, v7, v9, v10);
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
  const MethodInfo *v7; // x3
  struct System_String_o **p_voiceAssetName; // x20
  System_String_o *v9; // x21
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Action_o *v12; // x20
  const MethodInfo *v13; // x2

  if ( (byte_4C556F6 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&SoundManager_TypeInfo);
    sub_1C3E564(&Method_TitleInfoEventTowerReward__Close_b__37_0__);
    byte_4C556F6 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C3E7C0(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  if ( this->fields.voicePlayer )
  {
    voiceName = this->fields.voiceName;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__stopVoice_41567336(voiceName, 0.0, 0);
    this->fields.voicePlayer = 0;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.voicePlayer, 0, v6, v7);
  }
  p_voiceAssetName = &this->fields.voiceAssetName;
  if ( !System_String__IsNullOrEmpty(this->fields.voiceAssetName, 0) )
  {
    v9 = *p_voiceAssetName;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__releaseAudioAssetStorage(v9, 0);
    *p_voiceAssetName = 0;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.voiceAssetName, 0, v10, v11);
  }
  *(_QWORD *)&this->fields.selectVoiceIndex = 0;
  this->fields.playCnt = 0;
  v12 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_TitleInfoEventTowerReward__Close_b__37_0__, 0);
  TitleInfoEventTowerReward__StartRewardAction(this, v12, v13);
}


void TitleInfoEventTowerReward__EndItemGetEffectAction(
        TitleInfoEventTowerReward_o *this,
        System_Action_o *afterDetail,
        const MethodInfo *method)
{
  if ( !afterDetail )
    sub_1C3E7C0(this, 0);
  ((void (__fastcall *)(intptr_t, intptr_t))afterDetail->fields.invoke_impl)(
    afterDetail->fields.method_code,
    afterDetail->fields.method);
}


void TitleInfoEventTowerReward__EndPlayVoice(TitleInfoEventTowerReward_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *voiceList; // x0
  __int64 playCnt; // x8
  __int64 v5; // x8

  if ( (byte_4C556F3 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    sub_1C3E564(&StringLiteral_10678/*"PlayVoice"*/);
    byte_4C556F3 = 1;
  }
  if ( this->fields.playCnt < this->fields.maxPlayCnt )
  {
    voiceList = (System_Collections_Generic_List_object__o *)this->fields.voiceList;
    if ( !voiceList )
      goto LABEL_10;
    voiceList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                               voiceList,
                                                               this->fields.selectVoiceIndex,
                                                               (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    if ( !voiceList )
      goto LABEL_10;
    playCnt = this->fields.playCnt;
    if ( (unsigned int)playCnt >= voiceList->fields._size )
      sub_1C3E7C8(voiceList, method);
    v5 = *((_QWORD *)&voiceList->fields._syncRoot + playCnt);
    if ( !v5 )
LABEL_10:
      sub_1C3E7C0(voiceList, method);
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10678/*"PlayVoice"*/,
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
  if ( (byte_4C556EF & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    this = (TitleInfoEventTowerReward_o *)sub_1C3E564(&Method_TitleInfoEventTowerReward_OnLoadEndSvt__);
    byte_4C556EF = 1;
  }
  klass = v2[9].klass;
  if ( !klass
    || (monitor = (UIStandFigureR_o *)v2[4].monitor,
        v5 = *(&klass->_1.byval_arg.bits + 1),
        data = (int32_t)klass->_1.this_arg.data,
        v7 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo),
        System_Action___ctor(v7, v2, Method_TitleInfoEventTowerReward_OnLoadEndSvt__, 0),
        !monitor) )
  {
    sub_1C3E7C0(this, method);
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
  const MethodInfo *v11; // x3
  unsigned __int64 v12; // x23
  struct EventTowerReward_o *v13; // x8
  struct System_String_array *v14; // x9
  int size; // w25
  TitleInfoEventTowerReward_o *v16; // x22
  int32_t v17; // w23
  struct ExUITexture_o *bgSprite; // x8
  struct EventTowerReward_o *v19; // x9
  System_Collections_Generic_List_object__o *voiceList; // x24
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  TitleInfoEventTowerReward_o *v26; // x1
  Il2CppClass **v27; // x0
  struct EventTowerReward_o *v28; // x8
  System_String_o *VoiceAssetName_42847476; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  System_String_o *voiceAssetName; // x20
  System_Action_o *v33; // x21

  v2 = this;
  if ( (byte_4C556F0 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMasterData_ServantVoiceMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_1C3E564(&Method_System_Collections_Generic_List_ServantVoiceData____AddRange__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    sub_1C3E564(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&SoundManager_TypeInfo);
    this = (TitleInfoEventTowerReward_o *)sub_1C3E564(&Method_TitleInfoEventTowerReward__OnLoadEndSvt_b__31_0__);
    byte_4C556F0 = 1;
  }
  eventTowerReward = v2->fields.eventTowerReward;
  if ( !eventTowerReward )
    goto LABEL_39;
  if ( eventTowerReward->fields.voiceIds )
  {
    v4 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v4,
      (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    this = (TitleInfoEventTowerReward_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_39;
    this = (TitleInfoEventTowerReward_o *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)this,
                                            (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
    v5 = v2->fields.eventTowerReward;
    if ( !v5 )
      goto LABEL_39;
    voiceIds = v5->fields.voiceIds;
    if ( !voiceIds )
      goto LABEL_39;
    v7 = this;
    max_length = voiceIds->max_length;
    v9 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v9,
      (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    v2->fields.voiceList = (struct System_Collections_Generic_List_ServantVoiceData____o *)v9;
    sub_1C3E508((CGThumbnailListItem_o *)&v2->fields.voiceList, (int32_t)v9, v10, v11);
    if ( (int)max_length >= 1 )
    {
      v12 = 0;
      while ( 1 )
      {
        v13 = v2->fields.eventTowerReward;
        if ( !v13 )
          break;
        v14 = v13->fields.voiceIds;
        if ( !v14 )
          break;
        if ( v12 >= LODWORD(v14->max_length) )
LABEL_40:
          sub_1C3E7C8(this, method);
        if ( !v7 )
          break;
        this = (TitleInfoEventTowerReward_o *)ServantVoiceMaster__getEntity_42869204(
                                                (ServantVoiceMaster_o *)v7,
                                                14,
                                                v13->fields.svtId,
                                                v13->fields.limitCount,
                                                v14->m_Items[v12],
                                                0);
        if ( this )
        {
          if ( !v4 )
            break;
          System_Collections_Generic_List_object___AddRange(
            v4,
            (System_Collections_Generic_IEnumerable_T__o *)this,
            (const MethodInfo_37B566C *)Method_System_Collections_Generic_List_ServantVoiceData____AddRange__);
        }
        if ( (unsigned int)max_length == ++v12 )
          goto LABEL_18;
      }
LABEL_39:
      sub_1C3E7C0(this, method);
    }
LABEL_18:
    this = (TitleInfoEventTowerReward_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_39;
    this = (TitleInfoEventTowerReward_o *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)this,
                                            (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    if ( !v4 )
      goto LABEL_39;
    size = v4->fields._size;
    if ( size >= 1 )
    {
      v16 = this;
      v17 = 0;
      do
      {
        this = (TitleInfoEventTowerReward_o *)System_Collections_Generic_List_object___get_Item(
                                                v4,
                                                v17,
                                                (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
        if ( !this )
          goto LABEL_39;
        if ( !LODWORD(this->fields.m_CancellationTokenSource) )
          goto LABEL_40;
        bgSprite = this->fields.bgSprite;
        if ( !bgSprite )
          goto LABEL_39;
        v19 = v2->fields.eventTowerReward;
        if ( !v19 || !v16 )
          goto LABEL_39;
        this = (TitleInfoEventTowerReward_o *)VoicePlayCondMaster__isVoicePlay(
                                                (VoicePlayCondMaster_o *)v16,
                                                v19->fields.svtId,
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
                                                  v17,
                                                  (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
          if ( !voiceList )
            goto LABEL_39;
          items = voiceList->fields._items;
          v24 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
          ++voiceList->fields._version;
          if ( !items )
            goto LABEL_39;
          v25 = voiceList->fields._size;
          v26 = this;
          if ( (unsigned int)v25 >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              voiceList,
              (Il2CppObject *)this,
              *(const MethodInfo_37B5460 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
          }
          else
          {
            v27 = &items->obj.klass + v25;
            voiceList->fields._size = v25 + 1;
            v27[4] = (Il2CppClass *)v26;
            sub_1C3E508((CGThumbnailListItem_o *)(v27 + 4), (int32_t)v26, v21, v22);
          }
        }
      }
      while ( size != ++v17 );
    }
    v28 = v2->fields.eventTowerReward;
    if ( !v28 )
      goto LABEL_39;
    VoiceAssetName_42847476 = ServantVoiceEntity__getVoiceAssetName_42847476(v28->fields.svtId, 0);
    v2->fields.voiceAssetName = VoiceAssetName_42847476;
    sub_1C3E508((CGThumbnailListItem_o *)&v2->fields.voiceAssetName, (int32_t)VoiceAssetName_42847476, v30, v31);
    voiceAssetName = v2->fields.voiceAssetName;
    v33 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
    System_Action___ctor(v33, (Il2CppObject *)v2, Method_TitleInfoEventTowerReward__OnLoadEndSvt_b__31_0__, 0);
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__loadAudioAssetStorage(voiceAssetName, v33, 1, 0);
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

  if ( (byte_4C556F5 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&AvalonSceneManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C3E564(&Method_TitleInfoEventTowerReward__OnTouchDisp_b__36_0__);
    byte_4C556F5 = 1;
  }
  screenTouchInfo = (UnityEngine_Component_o *)this->fields.screenTouchInfo;
  if ( !screenTouchInfo )
    goto LABEL_9;
  screenTouchInfo = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(screenTouchInfo, 0);
  if ( !screenTouchInfo )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)screenTouchInfo, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = AvalonSceneManager_TypeInfo;
  v6 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v5 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v5->static_fields->DEFAULT_FADE_TIME;
  v8 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_TitleInfoEventTowerReward__OnTouchDisp_b__36_0__, 0);
  if ( !v6 )
LABEL_9:
    sub_1C3E7C0(screenTouchInfo, method);
  CommonUI__maskFadeout(v6, 1, DEFAULT_FADE_TIME, v8, 0);
  this->fields.state = 0;
}


void TitleInfoEventTowerReward__Open(
        TitleInfoEventTowerReward_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  TerminalPramsManager_c *v6; // x0
  struct EventTowerReward_o *eventTowerReward_k__BackingField; // x1
  struct EventTowerReward_o **p_eventTowerReward; // x20
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  TerminalPramsManager_c *v11; // x0
  struct QuestRewardInfo_array *resultEventTowerRewardInfo_k__BackingField; // x1
  struct EventTowerReward_o *eventTowerReward; // x8
  struct ScreenTouchInformationComponent_o **p_screenTouchInfo; // x22
  UnityEngine_Object_o *screenTouchInfo; // x23
  __int64 v16; // x1
  Il2CppObject *Instance; // x23
  __int64 transform; // x0
  Il2CppObject *Component_object; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  __int64 v24; // x21
  TitleInfoEventTowerReward_c *v25; // x8
  int effectId; // w23
  System_String_o *CLIP_NAME_TOWER_REWARD; // x22
  System_String_o *FloorRewardPrefabName; // x0
  TitleInfoEventTowerReward_c *v29; // x0
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  __int64 v33; // x5
  __int64 v34; // x6
  __int64 v35; // x7
  struct EventTowerReward_o *v36; // x8
  Il2CppObject *v37; // x0
  System_String_o *v38; // x0
  UnityEngine_Object_o *simpleAnimation; // x23
  System_String_o *v40; // x22
  bool v41; // w0
  __int64 v42; // x23
  __int64 v43; // x8
  __int64 v44; // x21
  __int64 v45; // x9
  SimpleAnimation_State_c **v46; // x10
  __int64 v47; // x0
  UnityEngine_Object_o *animation; // x23
  int towerId; // w8
  __int64 v50; // x22
  Il2CppObject *Item; // x21
  struct EventTowerReward_o *v52; // x8
  UILabel_o *floorLabel; // x21
  struct EventTowerReward_o *v54; // x8
  UILabel_o *v55; // x22
  __int64 v56; // x2
  __int64 v57; // x3
  __int64 v58; // x4
  __int64 v59; // x5
  __int64 v60; // x6
  __int64 v61; // x7
  UISprite_o *nameSprite; // x21
  System_String_o *v63; // x22
  __int64 v64; // x2
  __int64 v65; // x3
  __int64 v66; // x4
  __int64 v67; // x5
  __int64 v68; // x6
  __int64 v69; // x7
  Il2CppObject *v70; // x23
  Il2CppObject *v71; // x0
  __int64 v72; // x2
  __int64 v73; // x3
  __int64 v74; // x4
  __int64 v75; // x5
  __int64 v76; // x6
  __int64 v77; // x7
  int v78; // w26
  __int64 v79; // x21
  System_Text_StringBuilder_o *v80; // x22
  unsigned int i; // w27
  __int64 v82; // x23
  __int64 v83; // x23
  __int64 v84; // t1
  System_String_o *v85; // x0
  bool IsNullOrEmpty; // w23
  UILabel_o *rewardLabel; // x23
  _DWORD *v88; // x8
  int32_t v89; // w21
  struct EventTowerReward_o *v90; // x8
  System_String_o *SPRITE_NAME_BG; // x20
  Il2CppObject *v92; // x0
  System_String_o *v93; // x0
  ExUITexture_o *bgSprite; // x20
  System_String_o *v95; // x21
  System_Action_o *v96; // x22
  int32_t v97; // [xsp+0h] [xbp-80h] BYREF
  int eventId; // [xsp+4h] [xbp-7Ch] BYREF
  System_String_o *countText; // [xsp+8h] [xbp-78h] BYREF
  System_String_o *nameText; // [xsp+10h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4C556EE & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_EventTowerMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_1C3E564(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_UIFont__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_UIFont__get_Item__);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&SimpleAnimation_State_TypeInfo);
    sub_1C3E564(&System_Text_StringBuilder_TypeInfo);
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    sub_1C3E564(&Method_TitleInfoEventTowerReward_OnLoadEndBG__);
    sub_1C3E564(&TitleInfoEventTowerReward_TypeInfo);
    sub_1C3E564(&StringLiteral_43/*"\n"*/);
    sub_1C3E564(&StringLiteral_5739/*"EVENT_TOWER_REWARD_GET"*/);
    sub_1C3E564(&StringLiteral_10850/*"QUEST_CLEAR_COSTUME_GET"*/);
    sub_1C3E564(&StringLiteral_16119/*"_"*/);
    sub_1C3E564(&StringLiteral_5740/*"EVENT_TOWER_REWARD_GET_2"*/);
    byte_4C556EE = 1;
  }
  nameText = 0;
  entity = 0;
  countText = 0;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C53D54 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C53D54 = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  eventTowerReward_k__BackingField = v6->static_fields->_eventTowerReward_k__BackingField;
  this->fields.eventTowerReward = eventTowerReward_k__BackingField;
  p_eventTowerReward = &this->fields.eventTowerReward;
  sub_1C3E508(
    (CGThumbnailListItem_o *)&this->fields.eventTowerReward,
    (int32_t)eventTowerReward_k__BackingField,
    (int32_t)method,
    v3);
  if ( !byte_4C541A1 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C541A1 = 1;
  }
  v11 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v11 = TerminalPramsManager_TypeInfo;
  }
  resultEventTowerRewardInfo_k__BackingField = v11->static_fields->_resultEventTowerRewardInfo_k__BackingField;
  this->fields.resultEventTowerRewardInfo = resultEventTowerRewardInfo_k__BackingField;
  sub_1C3E508(
    (CGThumbnailListItem_o *)&this->fields.resultEventTowerRewardInfo,
    (int32_t)resultEventTowerRewardInfo_k__BackingField,
    v9,
    v10);
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
                         (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    *p_screenTouchInfo = (struct ScreenTouchInformationComponent_o *)Component_object;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.screenTouchInfo, (int32_t)Component_object, v20, v21);
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
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.endCallback, (int32_t)callback, v22, v23);
  this->fields.state = 0;
  transform = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !transform )
    goto LABEL_134;
  transform = (__int64)DataManager__GetMasterData_object_(
                         (DataManager_o *)transform,
                         (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_EventTowerMaster___);
  if ( !*p_eventTowerReward || !transform )
    goto LABEL_134;
  transform = (__int64)EventTowerMaster__GetEntity(
                         (EventTowerMaster_o *)transform,
                         (*p_eventTowerReward)->fields.eventId,
                         (*p_eventTowerReward)->fields.towerId,
                         0);
  v24 = transform;
  v25 = TitleInfoEventTowerReward_TypeInfo;
  if ( !TitleInfoEventTowerReward_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventTowerReward_TypeInfo);
    v25 = TitleInfoEventTowerReward_TypeInfo;
  }
  if ( !*p_eventTowerReward )
    goto LABEL_134;
  effectId = (*p_eventTowerReward)->fields.effectId;
  CLIP_NAME_TOWER_REWARD = v25->static_fields->CLIP_NAME_TOWER_REWARD;
  transform = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !transform )
    goto LABEL_134;
  transform = (__int64)DataManager__GetMasterData_object_(
                         (DataManager_o *)transform,
                         (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !*p_eventTowerReward || !transform )
    goto LABEL_134;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)transform,
         &entity,
         (*p_eventTowerReward)->fields.eventId,
         (const MethodInfo_33B2FA4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
    transform = (__int64)entity;
    if ( !entity )
      goto LABEL_134;
    FloorRewardPrefabName = EventDetailEntity__GetFloorRewardPrefabName((EventDetailEntity_o *)entity, 0);
    if ( FloorRewardPrefabName )
      CLIP_NAME_TOWER_REWARD = FloorRewardPrefabName;
  }
  v29 = TitleInfoEventTowerReward_TypeInfo;
  if ( !TitleInfoEventTowerReward_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventTowerReward_TypeInfo);
    v29 = TitleInfoEventTowerReward_TypeInfo;
  }
  transform = System_String__op_Equality(CLIP_NAME_TOWER_REWARD, v29->static_fields->CLIP_NAME_TOWER_REWARD, 0);
  if ( (transform & 1) != 0 )
  {
    v36 = *p_eventTowerReward;
    if ( !*p_eventTowerReward )
      goto LABEL_134;
    if ( v36->fields.towerId == 2 && v36->fields.floor == 100 )
      effectId = 3;
  }
  eventId = effectId;
  v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId, v30, v31, v32, v33, v34, v35);
  v38 = System_String__Concat_63674468(
          (Il2CppObject *)CLIP_NAME_TOWER_REWARD,
          (Il2CppObject *)StringLiteral_16119/*"_"*/,
          v37,
          0);
  simpleAnimation = (UnityEngine_Object_o *)this->fields.simpleAnimation;
  v40 = v38;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v41 = UnityEngine_Object__op_Inequality(simpleAnimation, 0, 0);
  if ( v41 )
    v42 = v24;
  else
    v42 = 0;
  if ( v41 )
  {
    transform = (__int64)this->fields.simpleAnimation;
    if ( transform )
    {
      transform = (__int64)SimpleAnimation__get_Item((SimpleAnimation_o *)transform, v40, 0);
      if ( transform )
      {
        v43 = *(_QWORD *)transform;
        v44 = transform;
        v45 = *(unsigned __int16 *)(*(_QWORD *)transform + 302LL);
        if ( *(_WORD *)(*(_QWORD *)transform + 302LL) )
        {
          v46 = (SimpleAnimation_State_c **)(*(_QWORD *)(v43 + 176) + 8LL);
          while ( *(v46 - 1) != SimpleAnimation_State_TypeInfo )
          {
            --v45;
            v46 += 2;
            if ( !v45 )
              goto LABEL_58;
          }
          v47 = v43 + 16LL * (*(_DWORD *)v46 + 14) + 312;
        }
        else
        {
LABEL_58:
          v47 = sub_1C8ED7C(transform, SimpleAnimation_State_TypeInfo, 14);
        }
        transform = (*(__int64 (__fastcall **)(__int64, _QWORD))v47)(v44, *(_QWORD *)(v47 + 8));
        if ( this->fields.simpleAnimation )
        {
          SimpleAnimation__set_clip(this->fields.simpleAnimation, (UnityEngine_AnimationClip_o *)transform, 0);
          transform = (__int64)this->fields.simpleAnimation;
          if ( transform )
          {
            v24 = v42;
LABEL_71:
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)transform, 0, 0);
            goto LABEL_72;
          }
        }
      }
    }
LABEL_134:
    sub_1C3E7C0(transform, v16);
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
    transform = (__int64)UnityEngine_Animation__GetClip((UnityEngine_Animation_o *)transform, v40, 0);
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
  v16 = (unsigned int)(towerId - 1);
  if ( towerId >= 1 )
    v50 = v24;
  else
    v50 = 0;
  if ( towerId >= 1 )
  {
    transform = (__int64)this->fields.floorNumFontList;
    if ( !transform )
      goto LABEL_134;
    if ( *(_DWORD *)(transform + 24) >= towerId )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)transform,
               v16,
               (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_UIFont__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      transform = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Item, 0, 0);
      if ( (transform & 1) != 0 )
      {
        v52 = this->fields.eventTowerReward;
        if ( !v52 )
          goto LABEL_134;
        transform = (__int64)this->fields.floorNumFontList;
        if ( !transform )
          goto LABEL_134;
        floorLabel = this->fields.floorLabel;
        transform = (__int64)System_Collections_Generic_List_object___get_Item(
                               (System_Collections_Generic_List_object__o *)transform,
                               v52->fields.towerId - 1,
                               (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_UIFont__get_Item__);
        if ( !floorLabel )
          goto LABEL_134;
        UILabel__set_bitmapFont(floorLabel, (UIFont_o *)transform, 0);
      }
      v24 = v50;
    }
  }
  v54 = this->fields.eventTowerReward;
  if ( !v54 )
    goto LABEL_134;
  v55 = this->fields.floorLabel;
  transform = (__int64)System_Int32__ToString((int)v54 + 24, 0);
  if ( !v55 )
    goto LABEL_134;
  UILabel__set_text(v55, (System_String_o *)transform, 0);
  if ( v24 )
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
    v63 = **(System_String_o ***)(transform + 184);
    eventId = (*p_eventTowerReward)->fields.eventId;
    transform = j_il2cpp_value_box_0(int_TypeInfo, &eventId, v56, v57, v58, v59, v60, v61);
    if ( !*p_eventTowerReward )
      goto LABEL_134;
    v70 = (Il2CppObject *)transform;
    v97 = (*p_eventTowerReward)->fields.towerId;
    v71 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v97, v64, v65, v66, v67, v68, v69);
    transform = (__int64)System_String__Format_63677760(v63, v70, v71, 0);
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
  transform = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !transform )
    goto LABEL_134;
  transform = (__int64)DataManager__GetMasterData_object_(
                         (DataManager_o *)transform,
                         (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_GiftMaster___);
  if ( !*p_eventTowerReward )
    goto LABEL_134;
  if ( !transform )
    goto LABEL_134;
  transform = (__int64)GiftMaster__GetGiftListById((GiftMaster_o *)transform, (*p_eventTowerReward)->fields.giftId, 0);
  if ( !transform )
    goto LABEL_134;
  v78 = *(_DWORD *)(transform + 24);
  v79 = transform;
  if ( v78 < 1 )
    goto LABEL_129;
  v80 = (System_Text_StringBuilder_o *)sub_1C3E7B0(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v80, 0);
  for ( i = 0; i != v78; ++i )
  {
    if ( i )
    {
      if ( !v80 )
        goto LABEL_134;
      transform = (__int64)System_Text_StringBuilder__Append_63721532(v80, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
    }
    if ( i >= *(_DWORD *)(v79 + 24) )
      goto LABEL_135;
    v82 = v79 + 8LL * (int)i;
    v84 = *(_QWORD *)(v82 + 32);
    v83 = v82 + 32;
    transform = v84;
    if ( !v84 )
      goto LABEL_134;
    GiftEntity__GetInfo((GiftEntity_o *)transform, &nameText, &countText, 0);
    if ( i >= *(_DWORD *)(v79 + 24) )
      goto LABEL_135;
    if ( !*(_QWORD *)v83 )
      goto LABEL_134;
    if ( *(_DWORD *)(*(_QWORD *)v83 + 20LL) == 9 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v85 = (System_String_o *)StringLiteral_10850/*"QUEST_CLEAR_COSTUME_GET"*/;
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
        v85 = (System_String_o *)StringLiteral_5740/*"EVENT_TOWER_REWARD_GET_2"*/;
LABEL_117:
        transform = (__int64)LocalizationManager__Get(v85, 0);
        if ( !v80 )
          goto LABEL_134;
        transform = (__int64)System_Text_StringBuilder__AppendFormat(
                               v80,
                               (System_String_o *)transform,
                               (Il2CppObject *)nameText,
                               0);
        continue;
      }
    }
    transform = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_5739/*"EVENT_TOWER_REWARD_GET"*/, 0);
    if ( !v80 )
      goto LABEL_134;
    transform = (__int64)System_Text_StringBuilder__AppendFormat_63727884(
                           v80,
                           (System_String_o *)transform,
                           (Il2CppObject *)nameText,
                           (Il2CppObject *)countText,
                           0);
  }
  rewardLabel = this->fields.rewardLabel;
  transform = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v80->klass->vtable._3_ToString.methodPtr)(
                v80,
                v80->klass->vtable._3_ToString.method);
  if ( !rewardLabel )
    goto LABEL_134;
  UILabel__set_text(rewardLabel, (System_String_o *)transform, 0);
  if ( !*(_DWORD *)(v79 + 24) )
LABEL_135:
    sub_1C3E7C8(transform, v16);
  v88 = *(_DWORD **)(v79 + 32);
  if ( !v88 )
    goto LABEL_134;
  transform = (__int64)this->fields.itemIcon;
  if ( !transform )
    goto LABEL_134;
  v89 = v88[5];
  ItemIconComponent__SetGift_40968388((ItemIconComponent_o *)transform, v89, v88[6], (int)v88[7], 0, 0);
  transform = (__int64)this->fields.imageFrame;
  if ( !transform )
    goto LABEL_134;
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)transform,
    (0x461u >> (v89 - 1)) & ((unsigned int)(v89 - 1) < 0xB),
    0);
LABEL_129:
  transform = (__int64)TitleInfoEventTowerReward_TypeInfo;
  if ( !TitleInfoEventTowerReward_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TitleInfoEventTowerReward_TypeInfo);
  v90 = *p_eventTowerReward;
  if ( !*p_eventTowerReward )
    goto LABEL_134;
  SPRITE_NAME_BG = TitleInfoEventTowerReward_TypeInfo->static_fields->SPRITE_NAME_BG;
  eventId = v90->fields.bgId;
  v92 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId, v72, v73, v74, v75, v76, v77);
  v93 = System_String__Format(SPRITE_NAME_BG, v92, 0);
  bgSprite = this->fields.bgSprite;
  v95 = v93;
  v96 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(v96, (Il2CppObject *)this, Method_TitleInfoEventTowerReward_OnLoadEndBG__, 0);
  if ( !bgSprite )
    goto LABEL_134;
  ExUITexture__SetAssetImage(bgSprite, v95, v96, 0);
}


void TitleInfoEventTowerReward__PlayVoice(TitleInfoEventTowerReward_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *voiceList; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  __int64 playCnt; // x8
  ServantVoiceData_o *v7; // x20
  struct System_String_o *id; // x1
  struct EventTowerReward_o *eventTowerReward; // x8
  System_String_o *VoiceAssetName_42847476; // x0
  SeManager_c *v11; // x8
  System_String_o *voiceName; // x21
  System_String_o *v13; // x22
  float DEFAULT_VOLUME; // s8
  System_Action_o *v15; // x23
  struct SePlayer_o *v16; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  UIStandFigureR_o *standFigure; // x21
  int32_t face; // w22
  float FadeTime; // s0

  if ( (byte_4C556F2 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    sub_1C3E564(&SeManager_TypeInfo);
    sub_1C3E564(&SoundManager_TypeInfo);
    sub_1C3E564(&Method_TitleInfoEventTowerReward_EndPlayVoice__);
    byte_4C556F2 = 1;
  }
  voiceList = (System_Collections_Generic_List_object__o *)this->fields.voiceList;
  if ( !voiceList )
    goto LABEL_14;
  voiceList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                             voiceList,
                                                             this->fields.selectVoiceIndex,
                                                             (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
  if ( !voiceList )
    goto LABEL_14;
  playCnt = this->fields.playCnt;
  if ( (unsigned int)playCnt >= voiceList->fields._size )
    sub_1C3E7C8(voiceList, method);
  v7 = (ServantVoiceData_o *)*((_QWORD *)&voiceList->fields._syncRoot + playCnt);
  if ( !v7 )
    goto LABEL_14;
  id = v7->fields.id;
  this->fields.voiceName = id;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.voiceName, (int32_t)id, v4, v5);
  eventTowerReward = this->fields.eventTowerReward;
  if ( !eventTowerReward )
    goto LABEL_14;
  VoiceAssetName_42847476 = ServantVoiceEntity__getVoiceAssetName_42847476(eventTowerReward->fields.svtId, 0);
  v11 = SeManager_TypeInfo;
  voiceName = this->fields.voiceName;
  v13 = VoiceAssetName_42847476;
  if ( !SeManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    v11 = SeManager_TypeInfo;
  }
  DEFAULT_VOLUME = v11->static_fields->DEFAULT_VOLUME;
  v15 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_TitleInfoEventTowerReward_EndPlayVoice__, 0);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  v16 = SoundManager__playVoice_41566940(v13, voiceName, DEFAULT_VOLUME, v15, 0, 0);
  this->fields.voicePlayer = v16;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.voicePlayer, (int32_t)v16, v17, v18);
  standFigure = this->fields.standFigure;
  face = v7->fields.face;
  FadeTime = ServantVoiceData__GetFadeTime(v7, 0);
  if ( !standFigure )
LABEL_14:
    sub_1C3E7C0(voiceList, method);
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
  const MethodInfo *v9; // x3
  __int64 v10; // x22
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  QuestRewardInfo_array *resultEventTowerRewardInfo; // x20
  System_Action_o *v14; // x22
  const MethodInfo *v15; // x4

  if ( (byte_4C556F7 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_TitleInfoEventTowerReward___c__DisplayClass38_0__StartRewardAction_b__0__);
    sub_1C3E564(&TitleInfoEventTowerReward___c__DisplayClass38_0_TypeInfo);
    byte_4C556F7 = 1;
  }
  v5 = sub_1C3E7B0(TitleInfoEventTowerReward___c__DisplayClass38_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_8;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C3E508((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 24) = callback;
  v10 = v5 + 24;
  sub_1C3E508((CGThumbnailListItem_o *)(v5 + 24), (int32_t)callback, v11, v12);
  resultEventTowerRewardInfo = this->fields.resultEventTowerRewardInfo;
  if ( resultEventTowerRewardInfo )
  {
    v14 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
    System_Action___ctor(
      v14,
      (Il2CppObject *)v5,
      Method_TitleInfoEventTowerReward___c__DisplayClass38_0__StartRewardAction_b__0__,
      0);
    TitleInfoEventTowerReward__StartRewardAction_sub(this, resultEventTowerRewardInfo, 0, v14, v15);
    return;
  }
  if ( !*(_QWORD *)v10 )
LABEL_8:
    sub_1C3E7C0(v6, v7);
  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v10 + 24LL))(
    *(_QWORD *)(*(_QWORD *)v10 + 64LL),
    *(_QWORD *)(*(_QWORD *)v10 + 40LL));
}


void TitleInfoEventTowerReward__StartRewardAction_sub(
        TitleInfoEventTowerReward_o *this,
        QuestRewardInfo_array *rewardInfoList,
        int32_t idx,
        System_Action_o *subEndAction,
        const MethodInfo *method)
{
  __int64 v9; // x26
  Il2CppObject *IsServant_40473420; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  __int64 v16; // x19
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  __int64 v21; // x8
  __int64 v22; // x9
  int v23; // w10
  __int64 v24; // x1
  __int64 v25; // x19
  Il2CppObject *Entity; // x0
  Il2CppObject *v27; // x19
  Il2CppObject *Instance; // x19
  System_Action_o *v29; // x20

  while ( 1 )
  {
    if ( (byte_4C556F8 & 1) == 0 )
    {
      sub_1C3E564(&System_Action_TypeInfo);
      sub_1C3E564(&Method_DataManager_GetMasterData_ServantMaster___);
      sub_1C3E564(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      sub_1C3E564(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
      sub_1C3E564(&Method_TitleInfoEventTowerReward___c__DisplayClass39_0__StartRewardAction_sub_b__0__);
      sub_1C3E564(&TitleInfoEventTowerReward___c__DisplayClass39_0_TypeInfo);
      byte_4C556F8 = 1;
    }
    v9 = sub_1C3E7B0(TitleInfoEventTowerReward___c__DisplayClass39_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v9, 0);
    if ( !v9 )
      goto LABEL_23;
    *(_QWORD *)(v9 + 24) = this;
    sub_1C3E508((CGThumbnailListItem_o *)(v9 + 24), (int32_t)this, v12, v13);
    *(_QWORD *)(v9 + 32) = rewardInfoList;
    sub_1C3E508((CGThumbnailListItem_o *)(v9 + 32), (int32_t)rewardInfoList, v14, v15);
    *(_QWORD *)(v9 + 48) = subEndAction;
    v16 = v9 + 48;
    *(_DWORD *)(v9 + 40) = idx;
    sub_1C3E508((CGThumbnailListItem_o *)(v9 + 48), (int32_t)subEndAction, v17, v18);
    v21 = *(_QWORD *)(v9 + 32);
    if ( !v21 )
      goto LABEL_23;
    v22 = *(int *)(v9 + 40);
    v23 = *(_DWORD *)(v21 + 24);
    if ( (int)v22 >= v23 )
    {
      if ( *(_QWORD *)v16 )
      {
        (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v16 + 24LL))(
          *(_QWORD *)(*(_QWORD *)v16 + 64LL),
          *(_QWORD *)(*(_QWORD *)v16 + 40LL));
        return;
      }
      goto LABEL_23;
    }
    if ( (unsigned int)v22 >= v23 )
      sub_1C3E7C8(IsServant_40473420, v11);
    v24 = *(_QWORD *)(v21 + 8 * v22 + 32);
    *(_QWORD *)(v9 + 16) = v24;
    v25 = v9 + 16;
    sub_1C3E508((CGThumbnailListItem_o *)(v9 + 16), v24, v19, v20);
    if ( !*(_QWORD *)(v9 + 16) )
      goto LABEL_23;
    IsServant_40473420 = (Il2CppObject *)Gift__IsServant_40473420(*(_DWORD *)(*(_QWORD *)(v9 + 16) + 16LL), 0);
    if ( ((unsigned __int8)IsServant_40473420 & 1) == 0 )
      break;
    IsServant_40473420 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !IsServant_40473420 )
      goto LABEL_23;
    IsServant_40473420 = DataManager__GetMasterData_object_(
                           (DataManager_o *)IsServant_40473420,
                           (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !*(_QWORD *)v25 || !IsServant_40473420 )
      goto LABEL_23;
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)IsServant_40473420,
               *(_DWORD *)(*(_QWORD *)v25 + 20LL),
               (const MethodInfo_33B2F58 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( Entity )
    {
      v27 = Entity;
      if ( !SvtType__IsCombineMaterial(HIDWORD(Entity[5].klass), 0) && !SvtType__IsStatusUp(HIDWORD(v27[5].klass), 0) )
        goto LABEL_21;
    }
LABEL_18:
    rewardInfoList = *(QuestRewardInfo_array **)(v9 + 32);
    subEndAction = *(System_Action_o **)(v9 + 48);
    idx = *(_DWORD *)(v9 + 40) + 1;
  }
  if ( !*(_QWORD *)v25 )
    goto LABEL_23;
  if ( !Gift__IsCommandCode_40473812(*(_DWORD *)(*(_QWORD *)v25 + 16LL), 0) )
    goto LABEL_18;
LABEL_21:
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  v29 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(
    v29,
    (Il2CppObject *)v9,
    Method_TitleInfoEventTowerReward___c__DisplayClass39_0__StartRewardAction_sub_b__0__,
    0);
  if ( !Instance )
LABEL_23:
    sub_1C3E7C0(IsServant_40473420, v11);
  SummonAssetManager__LoadSummonAssets((SummonAssetManager_o *)Instance, v29, 0);
}


void TitleInfoEventTowerReward__StartVoice(TitleInfoEventTowerReward_o *this, const MethodInfo *method)
{
  TitleInfoEventTowerReward_o *v2; // x19
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceList; // x8
  System_Random_o *v4; // x20
  struct System_Collections_Generic_List_ServantVoiceData____o *v5; // x8
  System_Collections_Generic_List_object__o *v6; // x8

  v2 = this;
  if ( (byte_4C556F1 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    this = (TitleInfoEventTowerReward_o *)sub_1C3E564(&System_Random_TypeInfo);
    byte_4C556F1 = 1;
  }
  voiceList = v2->fields.voiceList;
  if ( !voiceList )
    goto LABEL_11;
  if ( voiceList->fields._size )
  {
    v4 = (System_Random_o *)sub_1C3E7B0(System_Random_TypeInfo);
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
                                                  (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
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
    sub_1C3E7C0(this, method);
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

  if ( (byte_4C556F4 & 1) == 0 )
  {
    sub_1C3E564(&CTouch_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&SimpleAnimation_State_TypeInfo);
    byte_4C556F4 = 1;
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
        v13 = sub_1C8ED7C(m_Clip, SimpleAnimation_State_TypeInfo, 3);
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
        v24 = sub_1C8ED7C(v10, SimpleAnimation_State_TypeInfo, 14);
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
    sub_1C3E7C0(m_Clip, v6);
  }
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  if ( CTouch__isTouchPush(0) )
    TitleInfoEventTowerReward__OnTouchDisp(this, v14);
}


void TitleInfoEventTowerReward___Close_b__37_0(TitleInfoEventTowerReward_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_endCallback; // x0
  System_Action_o *v5; // x19
  struct System_Action_o *endCallback; // t1

  endCallback = this->fields.endCallback;
  p_endCallback = (CGThumbnailListItem_o *)&this->fields.endCallback;
  v5 = endCallback;
  if ( endCallback )
  {
    p_endCallback->klass = 0;
    sub_1C3E508(p_endCallback, 0, v2, v3);
    ActionExtensions__Call(v5, 0);
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

  if ( (byte_4C556FA & 1) == 0 )
  {
    sub_1C3E564(&AvalonSceneManager_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMasterData_BgmMaster___);
    sub_1C3E564(&Method_DataMasterBase_BgmMaster__BgmEntity__int__GetEntity__);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&SoundManager_TypeInfo);
    sub_1C3E564(&StringLiteral_13072/*"StartVoice"*/);
    byte_4C556FA = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v5 )
    goto LABEL_40;
  CommonUI__maskFadein(v5, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0, 0);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_13072/*"StartVoice"*/,
    this->fields.voiceStartTime,
    0);
  eventTowerReward = this->fields.eventTowerReward;
  if ( !eventTowerReward )
    goto LABEL_40;
  if ( eventTowerReward->fields.bgmId >= 1 )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_40;
    Instance = (CommonUI_o *)DataManager__GetMasterData_object_(
                               (DataManager_o *)Instance,
                               (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_BgmMaster___);
    v7 = this->fields.eventTowerReward;
    if ( !v7 )
      goto LABEL_40;
    if ( !Instance )
      goto LABEL_40;
    Instance = (CommonUI_o *)DataMasterBase_object__object__int___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               v7->fields.bgmId,
                               (const MethodInfo_33B2F58 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__GetEntity__);
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
          SimpleAnimation__Play_66582224(v12, name, 0);
          goto LABEL_37;
        }
      }
LABEL_40:
      sub_1C3E7C0(Instance, v4);
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
            UnityEngine_Animation__Play_71086848(v16, v17, 0);
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
  struct System_Action_o *callback; // x8

  if ( !this->fields.__4__this || (callback = this->fields.callback) == 0 )
    sub_1C3E7C0(this, method);
  ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
    callback->fields.method_code,
    callback->fields.method);
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
  const MethodInfo *v8; // x3
  struct QuestRewardInfo_o *v9; // x8
  int32_t v10; // w20
  struct TitleInfoEventTowerReward_o *v11; // x8
  struct QuestRewardInfo_o *v12; // x8
  struct TitleInfoEventTowerReward_o *v13; // x20
  TitleInfoEventTowerReward___c__DisplayClass39_0_o *v14; // x21
  UnityEngine_GameObject_o *v15; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct TitleInfoEventTowerReward_o *v18; // x8
  struct TitleInfoEventTowerReward_o *v19; // x8
  ServantRewardAction_o *servantRewardAction; // x20
  System_Action_o *_9__1; // x21
  int32_t v22; // w2
  const MethodInfo *v23; // x3

  v2 = this;
  if ( (byte_4C556FB & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    sub_1C3E564(&SoundManager_TypeInfo);
    this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)sub_1C3E564(&Method_TitleInfoEventTowerReward___c__DisplayClass39_0__StartRewardAction_sub_b__1__);
    byte_4C556FB = 1;
  }
  rewardInfo = v2->fields.rewardInfo;
  if ( !rewardInfo )
    goto LABEL_30;
  this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)Gift__IsServant_40473420(rewardInfo->fields.type, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    _4__this = v2->fields.__4__this;
    this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
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
          sub_1C3E508((CGThumbnailListItem_o *)&_4__this->fields.servantRewardAction, (int32_t)this, v7, v8);
          v9 = v2->fields.rewardInfo;
          if ( v9 )
          {
            if ( v9->fields.isSkipSvtDetail )
              v10 = 38;
            else
              v10 = 6;
            if ( !SoundManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
            SoundManager__stopBgm(0);
            v11 = v2->fields.__4__this;
            if ( v11 )
            {
              this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)v11->fields.servantRewardAction;
              if ( this )
              {
                ServantRewardAction__Setup_37235488((ServantRewardAction_o *)this, v2->fields.rewardInfo, v10, 0);
                goto LABEL_25;
              }
            }
          }
        }
      }
    }
LABEL_30:
    sub_1C3E7C0(this, method);
  }
  v12 = v2->fields.rewardInfo;
  if ( !v12 )
    goto LABEL_30;
  this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)Gift__IsCommandCode_40473812(v12->fields.type, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v13 = v2->fields.__4__this;
    this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    if ( !v2->fields.__4__this )
      goto LABEL_30;
    v14 = this;
    v15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v2->fields.__4__this, 0);
    this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)GameObjectExtensions__GetParent(v15, 0);
    if ( !v14 )
      goto LABEL_30;
    this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)SummonAssetManager__InstantiateSvtGetPrefab(
                                                                  (SummonAssetManager_o *)v14,
                                                                  (UnityEngine_Transform_o *)this,
                                                                  0,
                                                                  0);
    if ( !v13 )
      goto LABEL_30;
    v13->fields.servantRewardAction = (struct ServantRewardAction_o *)this;
    sub_1C3E508((CGThumbnailListItem_o *)&v13->fields.servantRewardAction, (int32_t)this, v16, v17);
    v18 = v2->fields.__4__this;
    if ( !v18 )
      goto LABEL_30;
    this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)v18->fields.servantRewardAction;
    if ( !this )
      goto LABEL_30;
    ServantRewardAction__SetupCommandCode((ServantRewardAction_o *)this, v2->fields.rewardInfo, 6, 0);
  }
LABEL_25:
  v19 = v2->fields.__4__this;
  if ( !v19 )
    goto LABEL_30;
  servantRewardAction = v19->fields.servantRewardAction;
  _9__1 = v2->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v2,
      Method_TitleInfoEventTowerReward___c__DisplayClass39_0__StartRewardAction_sub_b__1__,
      0);
    v2->fields.__9__1 = _9__1;
    sub_1C3E508((CGThumbnailListItem_o *)&v2->fields.__9__1, (int32_t)_9__1, v22, v23);
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
  const MethodInfo *v5; // x4

  v2 = this;
  if ( (byte_4C556FC & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)sub_1C3E564(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    byte_4C556FC = 1;
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
  UnityEngine_Object__DestroyImmediate_71341752(gameObject, 0);
  this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  if ( !this
    || (SummonAssetManager__UnloadSummonAssets((SummonAssetManager_o *)this, 0),
        (this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)v2->fields.__4__this) == 0) )
  {
LABEL_10:
    sub_1C3E7C0(this, method);
  }
  TitleInfoEventTowerReward__StartRewardAction_sub(
    (TitleInfoEventTowerReward_o *)this,
    v2->fields.rewardInfoList,
    v2->fields.idx + 1,
    v2->fields.subEndAction,
    v5);
}