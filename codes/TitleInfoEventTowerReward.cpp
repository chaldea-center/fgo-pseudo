void __fastcall TitleInfoEventTowerReward___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t v7; // w1
  struct TitleInfoEventTowerReward_StaticFields *static_fields; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w1
  struct TitleInfoEventTowerReward_StaticFields *v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_4B00A15 & 1) == 0 )
  {
    sub_1BC3008(&TitleInfoEventTowerReward_TypeInfo, v1);
    sub_1BC3008(&StringLiteral_23907/*"tower_{0}_{1}"*/, v4);
    sub_1BC3008(&StringLiteral_17058/*"bit_floor_reward"*/, v5);
    sub_1BC3008(&StringLiteral_3010/*"Back/back{0:D5}"*/, v6);
    byte_4B00A15 = 1;
  }
  TitleInfoEventTowerReward_TypeInfo->static_fields->SPRITE_NAME_TOWER = (struct System_String_o *)StringLiteral_23907/*"tower_{0}_{1}"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)TitleInfoEventTowerReward_TypeInfo->static_fields, StringLiteral_23907/*"tower_{0}_{1}"*/, v2, v3);
  v7 = StringLiteral_3010/*"Back/back{0:D5}"*/;
  static_fields = TitleInfoEventTowerReward_TypeInfo->static_fields;
  static_fields->SPRITE_NAME_BG = (struct System_String_o *)StringLiteral_3010/*"Back/back{0:D5}"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->SPRITE_NAME_BG, v7, v9, v10);
  v11 = StringLiteral_17058/*"bit_floor_reward"*/;
  v12 = TitleInfoEventTowerReward_TypeInfo->static_fields;
  v12->CLIP_NAME_TOWER_REWARD = (struct System_String_o *)StringLiteral_17058/*"bit_floor_reward"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v12->CLIP_NAME_TOWER_REWARD, v11, v13, v14);
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
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct System_String_o **p_voiceAssetName; // x20
  System_String_o *v11; // x21
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_Action_o *v14; // x20
  const MethodInfo *v15; // x2

  if ( (byte_4B00A12 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, method);
    sub_1BC3008(&SoundManager_TypeInfo, v3);
    sub_1BC3008(&Method_TitleInfoEventTowerReward__Close_b__37_0__, v4);
    byte_4B00A12 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BC3264(0LL, v6);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  if ( this->fields.voicePlayer )
  {
    voiceName = this->fields.voiceName;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__stopVoice_40539072(voiceName, 0.0, 0LL);
    this->fields.voicePlayer = 0LL;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.voicePlayer, 0, v8, v9);
  }
  p_voiceAssetName = &this->fields.voiceAssetName;
  if ( !System_String__IsNullOrEmpty(this->fields.voiceAssetName, 0LL) )
  {
    v11 = *p_voiceAssetName;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__releaseAudioAssetStorage(v11, 0LL);
    *p_voiceAssetName = 0LL;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.voiceAssetName, 0, v12, v13);
  }
  *(_QWORD *)&this->fields.selectVoiceIndex = 0LL;
  this->fields.playCnt = 0;
  v14 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_TitleInfoEventTowerReward__Close_b__37_0__, 0LL);
  TitleInfoEventTowerReward__StartRewardAction(this, v14, v15);
}


void __fastcall TitleInfoEventTowerReward__EndItemGetEffectAction(
        TitleInfoEventTowerReward_o *this,
        System_Action_o *afterDetail,
        const MethodInfo *method)
{
  if ( !afterDetail )
    sub_1BC3264(this, 0LL);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))afterDetail->fields.m_target)(
    afterDetail->fields.original_method_info,
    *(_QWORD *)&afterDetail->fields.extra_arg);
}


void __fastcall TitleInfoEventTowerReward__EndPlayVoice(TitleInfoEventTowerReward_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *voiceList; // x0
  __int64 v5; // x2
  __int64 playCnt; // x8
  __int64 v7; // x8

  if ( (byte_4B00A0F & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, method);
    sub_1BC3008(&StringLiteral_10583/*"PlayVoice"*/, v3);
    byte_4B00A0F = 1;
  }
  if ( this->fields.playCnt < this->fields.maxPlayCnt )
  {
    voiceList = (System_Collections_Generic_List_object__o *)this->fields.voiceList;
    if ( !voiceList )
      goto LABEL_10;
    voiceList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                               voiceList,
                                                               this->fields.selectVoiceIndex,
                                                               (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    if ( !voiceList )
      goto LABEL_10;
    playCnt = this->fields.playCnt;
    if ( (unsigned int)playCnt >= voiceList->fields._size )
      sub_1BC326C(voiceList, method, v5);
    v7 = *((_QWORD *)&voiceList->fields._syncRoot + playCnt);
    if ( !v7 )
LABEL_10:
      sub_1BC3264(voiceList, method);
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10583/*"PlayVoice"*/,
      *(float *)(v7 + 24),
      0LL);
  }
}


void __fastcall TitleInfoEventTowerReward__OnLoadEndBG(TitleInfoEventTowerReward_o *this, const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  __int64 v3; // x1
  Il2CppClass *klass; // x8
  UIStandFigureR_o *monitor; // x20
  int32_t v6; // w21
  int32_t data; // w22
  System_Action_o *v8; // x23

  v2 = (Il2CppObject *)this;
  if ( (byte_4B00A0B & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, method);
    this = (TitleInfoEventTowerReward_o *)sub_1BC3008(&Method_TitleInfoEventTowerReward_OnLoadEndSvt__, v3);
    byte_4B00A0B = 1;
  }
  klass = v2[9].klass;
  if ( !klass
    || (monitor = (UIStandFigureR_o *)v2[4].monitor,
        v6 = *(&klass->_1.byval_arg.bits + 1),
        data = (int32_t)klass->_1.this_arg.data,
        v8 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo),
        System_Action___ctor(v8, v2, Method_TitleInfoEventTowerReward_OnLoadEndSvt__, 0LL),
        !monitor) )
  {
    sub_1BC3264(this, method);
  }
  UIStandFigureR__SetCharacter(monitor, v6, data, 1, 0, 0, v8, 0LL);
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
  struct EventTowerReward_o *eventTowerReward; // x8
  System_Collections_Generic_List_object__o *v15; // x20
  struct EventTowerReward_o *v16; // x8
  struct System_String_array *voiceIds; // x8
  TitleInfoEventTowerReward_o *v18; // x22
  __int64 v19; // x25
  System_Collections_Generic_List_object__o *v20; // x23
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  __int64 v23; // x2
  unsigned __int64 v24; // x23
  struct EventTowerReward_o *v25; // x8
  struct System_String_array *v26; // x9
  int size; // w25
  TitleInfoEventTowerReward_o *v28; // x22
  int32_t v29; // w23
  struct ExUITexture_o *bgSprite; // x8
  struct EventTowerReward_o *v31; // x9
  System_Collections_Generic_List_object__o *voiceList; // x24
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 v37; // x10
  TitleInfoEventTowerReward_o *v38; // x1
  Il2CppClass **v39; // x0
  struct EventTowerReward_o *v40; // x8
  System_String_o *VoiceAssetName_41775916; // x0
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  System_String_o *voiceAssetName; // x20
  System_Action_o *v45; // x21

  v2 = this;
  if ( (byte_4B00A0C & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, method);
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantVoiceMaster___, v3);
    sub_1BC3008(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, v4);
    sub_1BC3008(&Method_System_Collections_Generic_List_ServantVoiceData____AddRange__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, v9);
    sub_1BC3008(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v10);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1BC3008(&SoundManager_TypeInfo, v12);
    this = (TitleInfoEventTowerReward_o *)sub_1BC3008(&Method_TitleInfoEventTowerReward__OnLoadEndSvt_b__31_0__, v13);
    byte_4B00A0C = 1;
  }
  eventTowerReward = v2->fields.eventTowerReward;
  if ( !eventTowerReward )
    goto LABEL_39;
  if ( eventTowerReward->fields.voiceIds )
  {
    v15 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v15,
      (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    this = (TitleInfoEventTowerReward_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_39;
    this = (TitleInfoEventTowerReward_o *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)this,
                                            (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
    v16 = v2->fields.eventTowerReward;
    if ( !v16 )
      goto LABEL_39;
    voiceIds = v16->fields.voiceIds;
    if ( !voiceIds )
      goto LABEL_39;
    v18 = this;
    v19 = *(_QWORD *)&voiceIds->max_length;
    v20 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v20,
      (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    v2->fields.voiceList = (struct System_Collections_Generic_List_ServantVoiceData____o *)v20;
    sub_1BC2FAC((CGThumbnailListItem_o *)&v2->fields.voiceList, (int32_t)v20, v21, v22);
    if ( (int)v19 >= 1 )
    {
      v24 = 0LL;
      while ( 1 )
      {
        v25 = v2->fields.eventTowerReward;
        if ( !v25 )
          break;
        v26 = v25->fields.voiceIds;
        if ( !v26 )
          break;
        if ( v24 >= v26->max_length )
LABEL_40:
          sub_1BC326C(this, method, v23);
        if ( !v18 )
          break;
        this = (TitleInfoEventTowerReward_o *)ServantVoiceMaster__getEntity_41797680(
                                                (ServantVoiceMaster_o *)v18,
                                                14,
                                                v25->fields.svtId,
                                                v25->fields.limitCount,
                                                v26->m_Items[v24],
                                                0LL);
        if ( this )
        {
          if ( !v15 )
            break;
          System_Collections_Generic_List_object___AddRange(
            v15,
            (System_Collections_Generic_IEnumerable_T__o *)this,
            (const MethodInfo_36A104C *)Method_System_Collections_Generic_List_ServantVoiceData____AddRange__);
        }
        if ( (unsigned int)v19 == ++v24 )
          goto LABEL_18;
      }
LABEL_39:
      sub_1BC3264(this, method);
    }
LABEL_18:
    this = (TitleInfoEventTowerReward_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_39;
    this = (TitleInfoEventTowerReward_o *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)this,
                                            (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    if ( !v15 )
      goto LABEL_39;
    size = v15->fields._size;
    if ( size >= 1 )
    {
      v28 = this;
      v29 = 0;
      do
      {
        this = (TitleInfoEventTowerReward_o *)System_Collections_Generic_List_object___get_Item(
                                                v15,
                                                v29,
                                                (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
        if ( !this )
          goto LABEL_39;
        if ( !LODWORD(this->fields.m_CancellationTokenSource) )
          goto LABEL_40;
        bgSprite = this->fields.bgSprite;
        if ( !bgSprite )
          goto LABEL_39;
        v31 = v2->fields.eventTowerReward;
        if ( !v31 || !v28 )
          goto LABEL_39;
        this = (TitleInfoEventTowerReward_o *)VoicePlayCondMaster__isVoicePlay(
                                                (VoicePlayCondMaster_o *)v28,
                                                v31->fields.svtId,
                                                *(System_String_o **)&bgSprite->fields.m_CachedPtr,
                                                0LL,
                                                -1LL,
                                                -1,
                                                0LL,
                                                0LL,
                                                0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          voiceList = (System_Collections_Generic_List_object__o *)v2->fields.voiceList;
          this = (TitleInfoEventTowerReward_o *)System_Collections_Generic_List_object___get_Item(
                                                  v15,
                                                  v29,
                                                  (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
          if ( !voiceList )
            goto LABEL_39;
          items = voiceList->fields._items;
          v36 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
          ++voiceList->fields._version;
          if ( !items )
            goto LABEL_39;
          v37 = voiceList->fields._size;
          v38 = this;
          if ( (unsigned int)v37 >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              voiceList,
              (Il2CppObject *)this,
              *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
          }
          else
          {
            v39 = &items->obj.klass + v37;
            voiceList->fields._size = v37 + 1;
            v39[4] = (Il2CppClass *)v38;
            sub_1BC2FAC((CGThumbnailListItem_o *)(v39 + 4), (int32_t)v38, v33, v34);
          }
        }
      }
      while ( size != ++v29 );
    }
    v40 = v2->fields.eventTowerReward;
    if ( !v40 )
      goto LABEL_39;
    VoiceAssetName_41775916 = ServantVoiceEntity__getVoiceAssetName_41775916(v40->fields.svtId, 0LL);
    v2->fields.voiceAssetName = VoiceAssetName_41775916;
    sub_1BC2FAC((CGThumbnailListItem_o *)&v2->fields.voiceAssetName, (int32_t)VoiceAssetName_41775916, v42, v43);
    voiceAssetName = v2->fields.voiceAssetName;
    v45 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
    System_Action___ctor(v45, (Il2CppObject *)v2, Method_TitleInfoEventTowerReward__OnLoadEndSvt_b__31_0__, 0LL);
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__loadAudioAssetStorage(voiceAssetName, v45, 1, 0LL);
  }
}


void __fastcall TitleInfoEventTowerReward__OnTouchDisp(TitleInfoEventTowerReward_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Component_o *screenTouchInfo; // x0
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v8; // x8
  CommonUI_o *v9; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v11; // x21

  if ( (byte_4B00A11 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, method);
    sub_1BC3008(&AvalonSceneManager_TypeInfo, v3);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1BC3008(&Method_TitleInfoEventTowerReward__OnTouchDisp_b__36_0__, v5);
    byte_4B00A11 = 1;
  }
  screenTouchInfo = (UnityEngine_Component_o *)this->fields.screenTouchInfo;
  if ( !screenTouchInfo )
    goto LABEL_9;
  screenTouchInfo = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(screenTouchInfo, 0LL);
  if ( !screenTouchInfo )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)screenTouchInfo, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = AvalonSceneManager_TypeInfo;
  v9 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v8 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v8->static_fields->DEFAULT_FADE_TIME;
  v11 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_TitleInfoEventTowerReward__OnTouchDisp_b__36_0__, 0LL);
  if ( !v9 )
LABEL_9:
    sub_1BC3264(screenTouchInfo, method);
  CommonUI__maskFadeout(v9, 1, DEFAULT_FADE_TIME, v11, 0LL);
  this->fields.state = 0;
}


void __fastcall TitleInfoEventTowerReward__Open(
        TitleInfoEventTowerReward_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
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
  TerminalPramsManager_c *v28; // x0
  struct EventTowerReward_o *eventTowerReward_k__BackingField; // x1
  struct EventTowerReward_o **p_eventTowerReward; // x20
  __int64 v31; // x1
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  TerminalPramsManager_c *v34; // x0
  struct QuestRewardInfo_array *resultEventTowerRewardInfo_k__BackingField; // x1
  struct EventTowerReward_o *eventTowerReward; // x8
  struct ScreenTouchInformationComponent_o **p_screenTouchInfo; // x22
  UnityEngine_Object_o *screenTouchInfo; // x23
  __int64 v39; // x1
  Il2CppObject *Instance; // x23
  __int64 transform; // x0
  Il2CppObject *Component_object; // x0
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  __int64 v47; // x21
  TitleInfoEventTowerReward_c *v48; // x8
  int effectId; // w23
  System_String_o *CLIP_NAME_TOWER_REWARD; // x22
  System_String_o *FloorRewardPrefabName; // x0
  TitleInfoEventTowerReward_c *v52; // x0
  __int64 v53; // x2
  __int64 v54; // x3
  __int64 v55; // x4
  struct EventTowerReward_o *v56; // x8
  Il2CppObject *v57; // x0
  System_String_o *v58; // x0
  UnityEngine_Object_o *simpleAnimation; // x23
  System_String_o *v60; // x22
  bool v61; // w0
  __int64 v62; // x23
  __int64 v63; // x8
  __int64 v64; // x21
  __int64 v65; // x9
  SimpleAnimation_State_c **v66; // x10
  __int64 v67; // x0
  UnityEngine_Object_o *animation; // x23
  int towerId; // w8
  __int64 v70; // x22
  Il2CppObject *Item; // x21
  struct EventTowerReward_o *v72; // x8
  UILabel_o *floorLabel; // x21
  struct EventTowerReward_o *v74; // x8
  UILabel_o *v75; // x22
  __int64 v76; // x2
  __int64 v77; // x3
  __int64 v78; // x4
  UISprite_o *nameSprite; // x21
  System_String_o *v80; // x22
  __int64 v81; // x2
  __int64 v82; // x3
  __int64 v83; // x4
  Il2CppObject *v84; // x23
  Il2CppObject *v85; // x0
  __int64 v86; // x2
  __int64 v87; // x3
  __int64 v88; // x4
  int v89; // w26
  __int64 v90; // x21
  System_Text_StringBuilder_o *v91; // x22
  __int64 v92; // x2
  unsigned int i; // w27
  __int64 v94; // x23
  __int64 v95; // x23
  __int64 v96; // t1
  System_String_o *v97; // x0
  bool IsNullOrEmpty; // w23
  UILabel_o *rewardLabel; // x23
  _DWORD *v100; // x8
  int32_t v101; // w21
  struct EventTowerReward_o *v102; // x8
  System_String_o *SPRITE_NAME_BG; // x20
  Il2CppObject *v104; // x0
  System_String_o *v105; // x0
  ExUITexture_o *bgSprite; // x20
  System_String_o *v107; // x21
  System_Action_o *v108; // x22
  int32_t v109; // [xsp+0h] [xbp-80h] BYREF
  int eventId; // [xsp+4h] [xbp-7Ch] BYREF
  System_String_o *countText; // [xsp+8h] [xbp-78h] BYREF
  System_String_o *nameText; // [xsp+10h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4B00A0A & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, callback);
    sub_1BC3008(&Method_DataManager_GetMasterData_EventDetailMaster___, v6);
    sub_1BC3008(&Method_DataManager_GetMasterData_EventTowerMaster___, v7);
    sub_1BC3008(&Method_DataManager_GetMasterData_GiftMaster___, v8);
    sub_1BC3008(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v9);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___, v10);
    sub_1BC3008(&int_TypeInfo, v11);
    sub_1BC3008(&Method_System_Collections_Generic_List_UIFont__get_Count__, v12);
    sub_1BC3008(&Method_System_Collections_Generic_List_UIFont__get_Item__, v13);
    sub_1BC3008(&LocalizationManager_TypeInfo, v14);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v15);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v16);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_1BC3008(&SimpleAnimation_State_TypeInfo, v18);
    sub_1BC3008(&System_Text_StringBuilder_TypeInfo, v19);
    sub_1BC3008(&TerminalPramsManager_TypeInfo, v20);
    sub_1BC3008(&Method_TitleInfoEventTowerReward_OnLoadEndBG__, v21);
    sub_1BC3008(&TitleInfoEventTowerReward_TypeInfo, v22);
    sub_1BC3008(&StringLiteral_43/*"\n"*/, v23);
    sub_1BC3008(&StringLiteral_5689/*"EVENT_TOWER_REWARD_GET"*/, v24);
    sub_1BC3008(&StringLiteral_10755/*"QUEST_CLEAR_COSTUME_GET"*/, v25);
    sub_1BC3008(&StringLiteral_15961/*"_"*/, v26);
    sub_1BC3008(&StringLiteral_5690/*"EVENT_TOWER_REWARD_GET_2"*/, v27);
    byte_4B00A0A = 1;
  }
  nameText = 0LL;
  entity = 0LL;
  countText = 0LL;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4AFF053 )
  {
    sub_1BC3008(&TerminalPramsManager_TypeInfo, callback);
    byte_4AFF053 = 1;
  }
  v28 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v28 = TerminalPramsManager_TypeInfo;
  }
  eventTowerReward_k__BackingField = v28->static_fields->_eventTowerReward_k__BackingField;
  this->fields.eventTowerReward = eventTowerReward_k__BackingField;
  p_eventTowerReward = &this->fields.eventTowerReward;
  sub_1BC2FAC(
    (CGThumbnailListItem_o *)&this->fields.eventTowerReward,
    (int32_t)eventTowerReward_k__BackingField,
    (int32_t)method,
    v3);
  if ( !byte_4AFF4EC )
  {
    sub_1BC3008(&TerminalPramsManager_TypeInfo, v31);
    byte_4AFF4EC = 1;
  }
  v34 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v34 = TerminalPramsManager_TypeInfo;
  }
  resultEventTowerRewardInfo_k__BackingField = v34->static_fields->_resultEventTowerRewardInfo_k__BackingField;
  this->fields.resultEventTowerRewardInfo = resultEventTowerRewardInfo_k__BackingField;
  sub_1BC2FAC(
    (CGThumbnailListItem_o *)&this->fields.resultEventTowerRewardInfo,
    (int32_t)resultEventTowerRewardInfo_k__BackingField,
    v32,
    v33);
  eventTowerReward = this->fields.eventTowerReward;
  if ( !eventTowerReward || eventTowerReward->fields.eventId <= 0 )
  {
    ActionExtensions__Call(callback, 0LL);
    return;
  }
  p_screenTouchInfo = &this->fields.screenTouchInfo;
  screenTouchInfo = (UnityEngine_Object_o *)this->fields.screenTouchInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(screenTouchInfo, 0LL, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !Instance )
      goto LABEL_134;
    transform = (__int64)CommonUI__CreateScreeenTouchInfo(
                           (CommonUI_o *)Instance,
                           (UnityEngine_Transform_o *)transform,
                           0,
                           0LL);
    if ( !transform )
      goto LABEL_134;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)transform,
                         (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    *p_screenTouchInfo = (struct ScreenTouchInformationComponent_o *)Component_object;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.screenTouchInfo, (int32_t)Component_object, v43, v44);
  }
  transform = (__int64)*p_screenTouchInfo;
  if ( !*p_screenTouchInfo )
    goto LABEL_134;
  transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
  if ( !transform )
    goto LABEL_134;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
  transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_134;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0LL);
  transform = (__int64)this->fields.standFigure;
  if ( !transform )
    goto LABEL_134;
  transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
  if ( !transform )
    goto LABEL_134;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
  this->fields.endCallback = callback;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.endCallback, (int32_t)callback, v45, v46);
  this->fields.state = 0;
  transform = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !transform )
    goto LABEL_134;
  transform = (__int64)DataManager__GetMasterData_object_(
                         (DataManager_o *)transform,
                         (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_EventTowerMaster___);
  if ( !*p_eventTowerReward || !transform )
    goto LABEL_134;
  transform = (__int64)EventTowerMaster__GetEntity(
                         (EventTowerMaster_o *)transform,
                         (*p_eventTowerReward)->fields.eventId,
                         (*p_eventTowerReward)->fields.towerId,
                         0LL);
  v47 = transform;
  v48 = TitleInfoEventTowerReward_TypeInfo;
  if ( !TitleInfoEventTowerReward_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventTowerReward_TypeInfo);
    v48 = TitleInfoEventTowerReward_TypeInfo;
  }
  if ( !*p_eventTowerReward )
    goto LABEL_134;
  effectId = (*p_eventTowerReward)->fields.effectId;
  CLIP_NAME_TOWER_REWARD = v48->static_fields->CLIP_NAME_TOWER_REWARD;
  transform = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !transform )
    goto LABEL_134;
  transform = (__int64)DataManager__GetMasterData_object_(
                         (DataManager_o *)transform,
                         (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !*p_eventTowerReward || !transform )
    goto LABEL_134;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)transform,
         &entity,
         (*p_eventTowerReward)->fields.eventId,
         (const MethodInfo_32AF0BC *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
    transform = (__int64)entity;
    if ( !entity )
      goto LABEL_134;
    FloorRewardPrefabName = EventDetailEntity__GetFloorRewardPrefabName((EventDetailEntity_o *)entity, 0LL);
    if ( FloorRewardPrefabName )
      CLIP_NAME_TOWER_REWARD = FloorRewardPrefabName;
  }
  v52 = TitleInfoEventTowerReward_TypeInfo;
  if ( !TitleInfoEventTowerReward_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventTowerReward_TypeInfo);
    v52 = TitleInfoEventTowerReward_TypeInfo;
  }
  transform = System_String__op_Equality(CLIP_NAME_TOWER_REWARD, v52->static_fields->CLIP_NAME_TOWER_REWARD, 0LL);
  if ( (transform & 1) != 0 )
  {
    v56 = *p_eventTowerReward;
    if ( !*p_eventTowerReward )
      goto LABEL_134;
    if ( v56->fields.towerId == 2 && v56->fields.floor == 100 )
      effectId = 3;
  }
  eventId = effectId;
  v57 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId, v53, v54, v55);
  v58 = System_String__Concat_62386648(
          (Il2CppObject *)CLIP_NAME_TOWER_REWARD,
          (Il2CppObject *)StringLiteral_15961/*"_"*/,
          v57,
          0LL);
  simpleAnimation = (UnityEngine_Object_o *)this->fields.simpleAnimation;
  v60 = v58;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v61 = UnityEngine_Object__op_Inequality(simpleAnimation, 0LL, 0LL);
  if ( v61 )
    v62 = v47;
  else
    v62 = 0LL;
  if ( v61 )
  {
    transform = (__int64)this->fields.simpleAnimation;
    if ( transform )
    {
      transform = (__int64)SimpleAnimation__get_Item((SimpleAnimation_o *)transform, v60, 0LL);
      if ( transform )
      {
        v63 = *(_QWORD *)transform;
        v64 = transform;
        v65 = *(unsigned __int16 *)(*(_QWORD *)transform + 302LL);
        if ( *(_WORD *)(*(_QWORD *)transform + 302LL) )
        {
          v66 = (SimpleAnimation_State_c **)(*(_QWORD *)(v63 + 176) + 8LL);
          while ( *(v66 - 1) != SimpleAnimation_State_TypeInfo )
          {
            --v65;
            v66 += 2;
            if ( !v65 )
              goto LABEL_58;
          }
          v67 = v63 + 16LL * (*(_DWORD *)v66 + 14) + 312;
        }
        else
        {
LABEL_58:
          v67 = sub_1C13570(transform, SimpleAnimation_State_TypeInfo, 14LL);
        }
        transform = (*(__int64 (__fastcall **)(__int64, _QWORD))v67)(v64, *(_QWORD *)(v67 + 8));
        if ( this->fields.simpleAnimation )
        {
          SimpleAnimation__set_clip(this->fields.simpleAnimation, (UnityEngine_AnimationClip_o *)transform, 0LL);
          transform = (__int64)this->fields.simpleAnimation;
          if ( transform )
          {
            v47 = v62;
LABEL_71:
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)transform, 0, 0LL);
            goto LABEL_72;
          }
        }
      }
    }
LABEL_134:
    sub_1BC3264(transform, v39);
  }
  animation = (UnityEngine_Object_o *)this->fields.animation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = UnityEngine_Object__op_Inequality(animation, 0LL, 0LL);
  if ( (transform & 1) != 0 )
  {
    transform = (__int64)this->fields.animation;
    if ( !transform )
      goto LABEL_134;
    transform = (__int64)UnityEngine_Animation__GetClip((UnityEngine_Animation_o *)transform, v60, 0LL);
    if ( !this->fields.animation )
      goto LABEL_134;
    UnityEngine_Animation__set_clip(this->fields.animation, (UnityEngine_AnimationClip_o *)transform, 0LL);
    transform = (__int64)this->fields.animation;
    if ( !transform )
      goto LABEL_134;
    goto LABEL_71;
  }
LABEL_72:
  if ( !*p_eventTowerReward )
    goto LABEL_134;
  towerId = (*p_eventTowerReward)->fields.towerId;
  v39 = (unsigned int)(towerId - 1);
  if ( towerId >= 1 )
    v70 = v47;
  else
    v70 = 0LL;
  if ( towerId >= 1 )
  {
    transform = (__int64)this->fields.floorNumFontList;
    if ( !transform )
      goto LABEL_134;
    if ( *(_DWORD *)(transform + 24) >= towerId )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)transform,
               v39,
               (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_UIFont__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      transform = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Item, 0LL, 0LL);
      if ( (transform & 1) != 0 )
      {
        v72 = this->fields.eventTowerReward;
        if ( !v72 )
          goto LABEL_134;
        transform = (__int64)this->fields.floorNumFontList;
        if ( !transform )
          goto LABEL_134;
        floorLabel = this->fields.floorLabel;
        transform = (__int64)System_Collections_Generic_List_object___get_Item(
                               (System_Collections_Generic_List_object__o *)transform,
                               v72->fields.towerId - 1,
                               (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_UIFont__get_Item__);
        if ( !floorLabel )
          goto LABEL_134;
        UILabel__set_bitmapFont(floorLabel, (UIFont_o *)transform, 0LL);
      }
      v47 = v70;
    }
  }
  v74 = this->fields.eventTowerReward;
  if ( !v74 )
    goto LABEL_134;
  v75 = this->fields.floorLabel;
  transform = (__int64)System_Int32__ToString((int)v74 + 24, 0LL);
  if ( !v75 )
    goto LABEL_134;
  UILabel__set_text(v75, (System_String_o *)transform, 0LL);
  if ( v47 )
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
    v80 = **(System_String_o ***)(transform + 184);
    eventId = (*p_eventTowerReward)->fields.eventId;
    transform = j_il2cpp_value_box_0(int_TypeInfo, &eventId, v76, v77, v78);
    if ( !*p_eventTowerReward )
      goto LABEL_134;
    v84 = (Il2CppObject *)transform;
    v109 = (*p_eventTowerReward)->fields.towerId;
    v85 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v109, v81, v82, v83);
    transform = (__int64)System_String__Format_62389940(v80, v84, v85, 0LL);
    if ( !nameSprite )
      goto LABEL_134;
    UISprite__set_spriteName(nameSprite, (System_String_o *)transform, 0LL);
    transform = (__int64)this->fields.nameSprite;
    if ( !transform )
      goto LABEL_134;
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)transform + 840LL))(
      transform,
      *(_QWORD *)(*(_QWORD *)transform + 848LL));
  }
  transform = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !transform )
    goto LABEL_134;
  transform = (__int64)DataManager__GetMasterData_object_(
                         (DataManager_o *)transform,
                         (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_GiftMaster___);
  if ( !*p_eventTowerReward )
    goto LABEL_134;
  if ( !transform )
    goto LABEL_134;
  transform = (__int64)GiftMaster__GetGiftListById((GiftMaster_o *)transform, (*p_eventTowerReward)->fields.giftId, 0LL);
  if ( !transform )
    goto LABEL_134;
  v89 = *(_DWORD *)(transform + 24);
  v90 = transform;
  if ( v89 < 1 )
    goto LABEL_129;
  v91 = (System_Text_StringBuilder_o *)sub_1BC3254(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v91, 0LL);
  for ( i = 0; i != v89; ++i )
  {
    if ( i )
    {
      if ( !v91 )
        goto LABEL_134;
      transform = (__int64)System_Text_StringBuilder__Append_62432592(v91, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
    }
    if ( i >= *(_DWORD *)(v90 + 24) )
      goto LABEL_135;
    v94 = v90 + 8LL * (int)i;
    v96 = *(_QWORD *)(v94 + 32);
    v95 = v94 + 32;
    transform = v96;
    if ( !v96 )
      goto LABEL_134;
    GiftEntity__GetInfo((GiftEntity_o *)transform, &nameText, &countText, 0LL);
    if ( i >= *(_DWORD *)(v90 + 24) )
      goto LABEL_135;
    if ( !*(_QWORD *)v95 )
      goto LABEL_134;
    if ( *(_DWORD *)(*(_QWORD *)v95 + 20LL) == 9 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v97 = (System_String_o *)StringLiteral_10755/*"QUEST_CLEAR_COSTUME_GET"*/;
      goto LABEL_117;
    }
    IsNullOrEmpty = System_String__IsNullOrEmpty(countText, 0LL);
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
        v97 = (System_String_o *)StringLiteral_5690/*"EVENT_TOWER_REWARD_GET_2"*/;
LABEL_117:
        transform = (__int64)LocalizationManager__Get(v97, 0LL);
        if ( !v91 )
          goto LABEL_134;
        transform = (__int64)System_Text_StringBuilder__AppendFormat(
                               v91,
                               (System_String_o *)transform,
                               (Il2CppObject *)nameText,
                               0LL);
        continue;
      }
    }
    transform = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_5689/*"EVENT_TOWER_REWARD_GET"*/, 0LL);
    if ( !v91 )
      goto LABEL_134;
    transform = (__int64)System_Text_StringBuilder__AppendFormat_62438944(
                           v91,
                           (System_String_o *)transform,
                           (Il2CppObject *)nameText,
                           (Il2CppObject *)countText,
                           0LL);
  }
  rewardLabel = this->fields.rewardLabel;
  transform = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v91->klass->vtable._3_ToString.method)(
                v91,
                v91->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  if ( !rewardLabel )
    goto LABEL_134;
  UILabel__set_text(rewardLabel, (System_String_o *)transform, 0LL);
  if ( !*(_DWORD *)(v90 + 24) )
LABEL_135:
    sub_1BC326C(transform, v39, v92);
  v100 = *(_DWORD **)(v90 + 32);
  if ( !v100 )
    goto LABEL_134;
  transform = (__int64)this->fields.itemIcon;
  if ( !transform )
    goto LABEL_134;
  v101 = v100[5];
  ItemIconComponent__SetGift_39952716((ItemIconComponent_o *)transform, v101, v100[6], v100[7], 0, 0LL);
  transform = (__int64)this->fields.imageFrame;
  if ( !transform )
    goto LABEL_134;
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)transform,
    (0x461u >> (v101 - 1)) & ((unsigned int)(v101 - 1) < 0xB),
    0LL);
LABEL_129:
  transform = (__int64)TitleInfoEventTowerReward_TypeInfo;
  if ( !TitleInfoEventTowerReward_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TitleInfoEventTowerReward_TypeInfo);
  v102 = *p_eventTowerReward;
  if ( !*p_eventTowerReward )
    goto LABEL_134;
  SPRITE_NAME_BG = TitleInfoEventTowerReward_TypeInfo->static_fields->SPRITE_NAME_BG;
  eventId = v102->fields.bgId;
  v104 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId, v86, v87, v88);
  v105 = System_String__Format(SPRITE_NAME_BG, v104, 0LL);
  bgSprite = this->fields.bgSprite;
  v107 = v105;
  v108 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(v108, (Il2CppObject *)this, Method_TitleInfoEventTowerReward_OnLoadEndBG__, 0LL);
  if ( !bgSprite )
    goto LABEL_134;
  ExUITexture__SetAssetImage(bgSprite, v107, v108, 0LL);
}


void __fastcall TitleInfoEventTowerReward__PlayVoice(TitleInfoEventTowerReward_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *voiceList; // x0
  __int64 v8; // x2
  const MethodInfo *v9; // x3
  __int64 playCnt; // x8
  ServantVoiceData_o *v11; // x20
  struct System_String_o *id; // x1
  struct EventTowerReward_o *eventTowerReward; // x8
  System_String_o *VoiceAssetName_41775916; // x0
  SeManager_c *v15; // x8
  System_String_o *voiceName; // x21
  System_String_o *v17; // x22
  float DEFAULT_VOLUME; // s8
  System_Action_o *v19; // x23
  struct SePlayer_o *v20; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  UIStandFigureR_o *standFigure; // x21
  int32_t face; // w22
  float FadeTime; // s0

  if ( (byte_4B00A0E & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, v3);
    sub_1BC3008(&SeManager_TypeInfo, v4);
    sub_1BC3008(&SoundManager_TypeInfo, v5);
    sub_1BC3008(&Method_TitleInfoEventTowerReward_EndPlayVoice__, v6);
    byte_4B00A0E = 1;
  }
  voiceList = (System_Collections_Generic_List_object__o *)this->fields.voiceList;
  if ( !voiceList )
    goto LABEL_14;
  voiceList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                             voiceList,
                                                             this->fields.selectVoiceIndex,
                                                             (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
  if ( !voiceList )
    goto LABEL_14;
  playCnt = this->fields.playCnt;
  if ( (unsigned int)playCnt >= voiceList->fields._size )
    sub_1BC326C(voiceList, method, v8);
  v11 = (ServantVoiceData_o *)*((_QWORD *)&voiceList->fields._syncRoot + playCnt);
  if ( !v11 )
    goto LABEL_14;
  id = v11->fields.id;
  this->fields.voiceName = id;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.voiceName, (int32_t)id, v8, v9);
  eventTowerReward = this->fields.eventTowerReward;
  if ( !eventTowerReward )
    goto LABEL_14;
  VoiceAssetName_41775916 = ServantVoiceEntity__getVoiceAssetName_41775916(eventTowerReward->fields.svtId, 0LL);
  v15 = SeManager_TypeInfo;
  voiceName = this->fields.voiceName;
  v17 = VoiceAssetName_41775916;
  if ( !SeManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    v15 = SeManager_TypeInfo;
  }
  DEFAULT_VOLUME = v15->static_fields->DEFAULT_VOLUME;
  v19 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(v19, (Il2CppObject *)this, Method_TitleInfoEventTowerReward_EndPlayVoice__, 0LL);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  v20 = SoundManager__playVoice_40538664(v17, voiceName, DEFAULT_VOLUME, v19, 0, 0LL);
  this->fields.voicePlayer = v20;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.voicePlayer, (int32_t)v20, v21, v22);
  standFigure = this->fields.standFigure;
  face = v11->fields.face;
  FadeTime = ServantVoiceData__GetFadeTime(v11, 0LL);
  if ( !standFigure )
LABEL_14:
    sub_1BC3264(voiceList, method);
  UIStandFigureR__SetFace(standFigure, face, FadeTime, 0LL);
  ++this->fields.playCnt;
}


void __fastcall TitleInfoEventTowerReward__StartRewardAction(
        TitleInfoEventTowerReward_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  __int64 v12; // x22
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  QuestRewardInfo_array *resultEventTowerRewardInfo; // x20
  System_Action_o *v16; // x22
  const MethodInfo *v17; // x4

  if ( (byte_4B00A13 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, callback);
    sub_1BC3008(&Method_TitleInfoEventTowerReward___c__DisplayClass38_0__StartRewardAction_b__0__, v5);
    sub_1BC3008(&TitleInfoEventTowerReward___c__DisplayClass38_0_TypeInfo, v6);
    byte_4B00A13 = 1;
  }
  v7 = sub_1BC3254(TitleInfoEventTowerReward___c__DisplayClass38_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    goto LABEL_8;
  *(_QWORD *)(v7 + 16) = this;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v7 + 16), (int32_t)this, v10, v11);
  *(_QWORD *)(v7 + 24) = callback;
  v12 = v7 + 24;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v7 + 24), (int32_t)callback, v13, v14);
  resultEventTowerRewardInfo = this->fields.resultEventTowerRewardInfo;
  if ( resultEventTowerRewardInfo )
  {
    v16 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
    System_Action___ctor(
      v16,
      (Il2CppObject *)v7,
      Method_TitleInfoEventTowerReward___c__DisplayClass38_0__StartRewardAction_b__0__,
      0LL);
    TitleInfoEventTowerReward__StartRewardAction_sub(this, resultEventTowerRewardInfo, 0, v16, v17);
    return;
  }
  if ( !*(_QWORD *)v12 )
LABEL_8:
    sub_1BC3264(v8, v9);
  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v12 + 24LL))(
    *(_QWORD *)(*(_QWORD *)v12 + 64LL),
    *(_QWORD *)(*(_QWORD *)v12 + 40LL));
}


void __fastcall TitleInfoEventTowerReward__StartRewardAction_sub(
        TitleInfoEventTowerReward_o *this,
        QuestRewardInfo_array *rewardInfoList,
        int32_t idx,
        System_Action_o *subEndAction,
        const MethodInfo *method)
{
  QuestRewardInfo_array *v7; // x19
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x26
  Il2CppObject *IsServant_39466060; // x0
  __int64 v17; // x1
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  __int64 v22; // x19
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  __int64 v25; // x2
  const MethodInfo *v26; // x3
  __int64 v27; // x8
  __int64 v28; // x9
  int v29; // w10
  __int64 v30; // x1
  __int64 v31; // x19
  Il2CppObject *Entity; // x0
  Il2CppObject *v33; // x19
  Il2CppObject *Instance; // x19
  System_Action_o *v35; // x20

  v7 = rewardInfoList;
  while ( 1 )
  {
    if ( (byte_4B00A14 & 1) == 0 )
    {
      sub_1BC3008(&System_Action_TypeInfo, rewardInfoList);
      sub_1BC3008(&Method_DataManager_GetMasterData_ServantMaster___, v9);
      sub_1BC3008(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10);
      sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
      sub_1BC3008(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, v12);
      sub_1BC3008(&Method_TitleInfoEventTowerReward___c__DisplayClass39_0__StartRewardAction_sub_b__0__, v13);
      sub_1BC3008(&TitleInfoEventTowerReward___c__DisplayClass39_0_TypeInfo, v14);
      byte_4B00A14 = 1;
    }
    v15 = sub_1BC3254(TitleInfoEventTowerReward___c__DisplayClass39_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v15, 0LL);
    if ( !v15 )
      goto LABEL_24;
    *(_QWORD *)(v15 + 24) = this;
    sub_1BC2FAC((CGThumbnailListItem_o *)(v15 + 24), (int32_t)this, v18, v19);
    *(_QWORD *)(v15 + 32) = v7;
    sub_1BC2FAC((CGThumbnailListItem_o *)(v15 + 32), (int32_t)v7, v20, v21);
    *(_QWORD *)(v15 + 48) = subEndAction;
    v22 = v15 + 48;
    *(_DWORD *)(v15 + 40) = idx;
    sub_1BC2FAC((CGThumbnailListItem_o *)(v15 + 48), (int32_t)subEndAction, v23, v24);
    v27 = *(_QWORD *)(v15 + 32);
    if ( !v27 )
      goto LABEL_24;
    v28 = *(int *)(v15 + 40);
    v29 = *(_DWORD *)(v27 + 24);
    if ( (int)v28 >= v29 )
    {
      if ( *(_QWORD *)v22 )
      {
        (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v22 + 24LL))(
          *(_QWORD *)(*(_QWORD *)v22 + 64LL),
          *(_QWORD *)(*(_QWORD *)v22 + 40LL));
        return;
      }
      goto LABEL_24;
    }
    if ( (unsigned int)v28 >= v29 )
      sub_1BC326C(IsServant_39466060, v17, v25);
    v30 = *(_QWORD *)(v27 + 8 * v28 + 32);
    *(_QWORD *)(v15 + 16) = v30;
    v31 = v15 + 16;
    sub_1BC2FAC((CGThumbnailListItem_o *)(v15 + 16), v30, v25, v26);
    if ( !*(_QWORD *)(v15 + 16) )
      goto LABEL_24;
    IsServant_39466060 = (Il2CppObject *)Gift__IsServant_39466060(*(_DWORD *)(*(_QWORD *)(v15 + 16) + 16LL), 0LL);
    if ( ((unsigned __int8)IsServant_39466060 & 1) == 0 )
      break;
    IsServant_39466060 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !IsServant_39466060 )
      goto LABEL_24;
    IsServant_39466060 = DataManager__GetMasterData_object_(
                           (DataManager_o *)IsServant_39466060,
                           (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !*(_QWORD *)v31 || !IsServant_39466060 )
      goto LABEL_24;
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)IsServant_39466060,
               *(_DWORD *)(*(_QWORD *)v31 + 20LL),
               (const MethodInfo_32AF070 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( Entity )
    {
      v33 = Entity;
      if ( !SvtType__IsCombineMaterial(HIDWORD(Entity[5].klass), 0LL)
        && !SvtType__IsStatusUp(HIDWORD(v33[5].klass), 0LL) )
      {
        goto LABEL_22;
      }
    }
LABEL_19:
    v7 = *(QuestRewardInfo_array **)(v15 + 32);
    subEndAction = *(System_Action_o **)(v15 + 48);
    idx = *(_DWORD *)(v15 + 40) + 1;
  }
  if ( !*(_QWORD *)v31 )
    goto LABEL_24;
  if ( !Gift__IsCommandCode_39466452(*(_DWORD *)(*(_QWORD *)v31 + 16LL), 0LL) )
    goto LABEL_19;
LABEL_22:
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  v35 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(
    v35,
    (Il2CppObject *)v15,
    Method_TitleInfoEventTowerReward___c__DisplayClass39_0__StartRewardAction_sub_b__0__,
    0LL);
  if ( !Instance )
LABEL_24:
    sub_1BC3264(IsServant_39466060, v17);
  SummonAssetManager__LoadSummonAssets((SummonAssetManager_o *)Instance, v35, 0LL);
}


void __fastcall TitleInfoEventTowerReward__StartVoice(TitleInfoEventTowerReward_o *this, const MethodInfo *method)
{
  TitleInfoEventTowerReward_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceList; // x8
  System_Random_o *v6; // x20
  struct System_Collections_Generic_List_ServantVoiceData____o *v7; // x8
  System_Collections_Generic_List_object__o *v8; // x8

  v2 = this;
  if ( (byte_4B00A0D & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, v3);
    this = (TitleInfoEventTowerReward_o *)sub_1BC3008(&System_Random_TypeInfo, v4);
    byte_4B00A0D = 1;
  }
  voiceList = v2->fields.voiceList;
  if ( !voiceList )
    goto LABEL_11;
  if ( voiceList->fields._size )
  {
    v6 = (System_Random_o *)sub_1BC3254(System_Random_TypeInfo);
    System_Random___ctor(v6, 0LL);
    v7 = v2->fields.voiceList;
    if ( v7 )
    {
      if ( v6 )
      {
        this = (TitleInfoEventTowerReward_o *)((__int64 (__fastcall *)(System_Random_o *, _QWORD, void *))v6->klass->vtable._7_Next.method)(
                                                v6,
                                                (unsigned int)v7->fields._size,
                                                v6->klass[1]._1.image);
        v8 = (System_Collections_Generic_List_object__o *)v2->fields.voiceList;
        v2->fields.selectVoiceIndex = (int)this;
        if ( v8 )
        {
          this = (TitleInfoEventTowerReward_o *)System_Collections_Generic_List_object___get_Item(
                                                  v8,
                                                  (int32_t)this,
                                                  (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
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
    sub_1BC3264(this, method);
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
  long double v22; // q0
  UnityEngine_Object_c *v23; // x8
  __int64 v24; // x9
  SimpleAnimation_State_c **v25; // x10
  __int64 v26; // x0

  if ( (byte_4B00A10 & 1) == 0 )
  {
    sub_1BC3008(&CTouch_TypeInfo, method);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v3);
    sub_1BC3008(&SimpleAnimation_State_TypeInfo, v4);
    byte_4B00A10 = 1;
  }
  state = this->fields.state;
  if ( state != 2 )
  {
    if ( state != 1 )
      return;
    simpleAnimation = (UnityEngine_Object_o *)this->fields.simpleAnimation;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    monitor = (UnityEngine_Object_o *)UnityEngine_Object__op_Inequality(simpleAnimation, 0LL, 0LL);
    if ( ((unsigned __int8)monitor & 1) != 0 )
    {
      v9 = this->fields.simpleAnimation;
      if ( !v9 )
        goto LABEL_41;
      monitor = (UnityEngine_Object_o *)v9[1].monitor;
      if ( !monitor )
        goto LABEL_41;
      name = UnityEngine_Object__get_name(monitor, 0LL);
      monitor = (UnityEngine_Object_o *)SimpleAnimation__get_Item(v9, name, 0LL);
      if ( !monitor )
        goto LABEL_41;
      klass = monitor->klass;
      v12 = monitor;
      v13 = *(unsigned __int16 *)(&monitor->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&monitor->klass->_2.bitflags2 + 3) )
      {
        p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v13;
          p_offset += 2;
          if ( !v13 )
            goto LABEL_15;
        }
        v15 = (__int64)(&klass->vtable._3_ToString.method + 2 * *(_DWORD *)p_offset);
      }
      else
      {
LABEL_15:
        v15 = sub_1C13570(monitor, SimpleAnimation_State_TypeInfo, 3LL);
      }
      v22 = ((long double (__fastcall *)(UnityEngine_Object_o *, _QWORD))*(_QWORD *)v15)(v12, *(_QWORD *)(v15 + 8));
      v23 = v12->klass;
      time = *(float *)&v22;
      v24 = *(unsigned __int16 *)(&v12->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v12->klass->_2.bitflags2 + 3) )
      {
        v25 = (SimpleAnimation_State_c **)&v23->_1.interfaceOffsets->offset;
        while ( *(v25 - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v24;
          v25 += 2;
          if ( !v24 )
            goto LABEL_33;
        }
        v26 = (__int64)(&v23[1]._1.implementedInterfaces + 2 * *(_DWORD *)v25);
      }
      else
      {
LABEL_33:
        v26 = sub_1C13570(v12, SimpleAnimation_State_TypeInfo, 14LL);
      }
      monitor = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(UnityEngine_Object_o *, _QWORD))v26)(
                                          v12,
                                          *(_QWORD *)(v26 + 8));
      if ( !monitor )
        goto LABEL_41;
    }
    else
    {
      animation = (UnityEngine_Object_o *)this->fields.animation;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      monitor = (UnityEngine_Object_o *)UnityEngine_Object__op_Inequality(animation, 0LL, 0LL);
      if ( ((unsigned __int8)monitor & 1) == 0 )
        goto LABEL_37;
      v18 = this->fields.animation;
      if ( !v18 )
        goto LABEL_41;
      monitor = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(this->fields.animation, 0LL);
      if ( !monitor )
        goto LABEL_41;
      v19 = UnityEngine_Object__get_name(monitor, 0LL);
      monitor = (UnityEngine_Object_o *)UnityEngine_Animation__get_Item(v18, v19, 0LL);
      if ( !monitor )
        goto LABEL_41;
      v20 = (UnityEngine_AnimationState_o *)monitor;
      time = UnityEngine_AnimationState__get_time((UnityEngine_AnimationState_o *)monitor, 0LL);
      monitor = (UnityEngine_Object_o *)UnityEngine_AnimationState__get_clip(v20, 0LL);
      if ( !monitor )
        goto LABEL_41;
    }
    if ( time < UnityEngine_AnimationClip__get_length((UnityEngine_AnimationClip_o *)monitor, 0LL) )
      return;
LABEL_37:
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
LABEL_41:
    sub_1BC3264(monitor, v8);
  }
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  if ( CTouch__isTouchPush(0LL) )
    TitleInfoEventTowerReward__OnTouchDisp(this, v16);
}


void __fastcall TitleInfoEventTowerReward___Close_b__37_0(TitleInfoEventTowerReward_o *this, const MethodInfo *method)
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
    p_endCallback->klass = 0LL;
    sub_1BC2FAC(p_endCallback, 0, v2, v3);
    ActionExtensions__Call(v5, 0LL);
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
  System_String_o *m_CancellationTokenSource; // x20
  UnityEngine_Object_o *simpleAnimation; // x20
  struct SimpleAnimation_o *v17; // x8
  UnityEngine_Object_o *monitor; // x20
  struct SimpleAnimation_o *v19; // x20
  System_String_o *name; // x0
  UnityEngine_Object_o *animation; // x20
  UnityEngine_Object_o *clip; // x20
  UnityEngine_Animation_o *v23; // x20
  System_String_o *v24; // x0

  if ( (byte_4B00A16 & 1) == 0 )
  {
    sub_1BC3008(&AvalonSceneManager_TypeInfo, method);
    sub_1BC3008(&Method_DataManager_GetMasterData_BgmMaster___, v3);
    sub_1BC3008(&Method_DataMasterBase_BgmMaster__BgmEntity__int__GetEntity__, v4);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v5);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1BC3008(&SoundManager_TypeInfo, v8);
    sub_1BC3008(&StringLiteral_12936/*"StartVoice"*/, v9);
    byte_4B00A16 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v12 )
    goto LABEL_40;
  CommonUI__maskFadein(v12, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_12936/*"StartVoice"*/,
    this->fields.voiceStartTime,
    0LL);
  eventTowerReward = this->fields.eventTowerReward;
  if ( !eventTowerReward )
    goto LABEL_40;
  if ( eventTowerReward->fields.bgmId >= 1 )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_40;
    Instance = (CommonUI_o *)DataManager__GetMasterData_object_(
                               (DataManager_o *)Instance,
                               (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_BgmMaster___);
    v14 = this->fields.eventTowerReward;
    if ( !v14 )
      goto LABEL_40;
    if ( !Instance )
      goto LABEL_40;
    Instance = (CommonUI_o *)DataMasterBase_object__object__int___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               v14->fields.bgmId,
                               (const MethodInfo_32AF070 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__GetEntity__);
    if ( !Instance )
      goto LABEL_40;
    m_CancellationTokenSource = (System_String_o *)Instance->fields.m_CancellationTokenSource;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__playBgm(m_CancellationTokenSource, 0LL);
  }
  simpleAnimation = (UnityEngine_Object_o *)this->fields.simpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(simpleAnimation, 0LL, 0LL) )
  {
    Instance = (CommonUI_o *)this->fields.simpleAnimation;
    if ( !Instance )
      goto LABEL_40;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 1, 0LL);
    v17 = this->fields.simpleAnimation;
    if ( !v17 )
      goto LABEL_40;
    monitor = (UnityEngine_Object_o *)v17[1].monitor;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
          SimpleAnimation__Play_65293968(v19, name, 0LL);
          goto LABEL_37;
        }
      }
LABEL_40:
      sub_1BC3264(Instance, v11);
    }
  }
  else
  {
    animation = (UnityEngine_Object_o *)this->fields.animation;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(animation, 0LL, 0LL) )
    {
      Instance = (CommonUI_o *)this->fields.animation;
      if ( !Instance )
        goto LABEL_40;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 1, 0LL);
      Instance = (CommonUI_o *)this->fields.animation;
      if ( !Instance )
        goto LABEL_40;
      clip = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip((UnityEngine_Animation_o *)Instance, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
            UnityEngine_Animation__Play_69779584(v23, v24, 0LL);
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
  Instance = (CommonUI_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_40;
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
  struct System_Action_o *callback; // x8

  if ( !this->fields.__4__this || (callback = this->fields.callback) == 0LL )
    sub_1BC3264(this, method);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback->fields.m_target)(
    callback->fields.original_method_info,
    *(_QWORD *)&callback->fields.extra_arg);
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
  TitleInfoEventTowerReward___c__DisplayClass39_0_o *v8; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct QuestRewardInfo_o *v12; // x8
  int32_t v13; // w20
  struct TitleInfoEventTowerReward_o *v14; // x8
  struct QuestRewardInfo_o *v15; // x8
  struct TitleInfoEventTowerReward_o *v16; // x20
  TitleInfoEventTowerReward___c__DisplayClass39_0_o *v17; // x21
  UnityEngine_GameObject_o *v18; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  struct TitleInfoEventTowerReward_o *v21; // x8
  struct TitleInfoEventTowerReward_o *v22; // x8
  ServantRewardAction_o *servantRewardAction; // x20
  System_Action_o *_9__1; // x21
  int32_t v25; // w2
  const MethodInfo *v26; // x3

  v2 = this;
  if ( (byte_4B00A17 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, method);
    sub_1BC3008(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, v3);
    sub_1BC3008(&SoundManager_TypeInfo, v4);
    this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)sub_1BC3008(
                                                                  &Method_TitleInfoEventTowerReward___c__DisplayClass39_0__StartRewardAction_sub_b__1__,
                                                                  v5);
    byte_4B00A17 = 1;
  }
  rewardInfo = v2->fields.rewardInfo;
  if ( !rewardInfo )
    goto LABEL_30;
  this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)Gift__IsServant_39466060(rewardInfo->fields.type, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    _4__this = v2->fields.__4__this;
    this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    if ( v2->fields.__4__this )
    {
      v8 = this;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v2->fields.__4__this, 0LL);
      this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)GameObjectExtensions__GetParent(gameObject, 0LL);
      if ( v8 )
      {
        this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)SummonAssetManager__InstantiateSvtGetPrefab(
                                                                      (SummonAssetManager_o *)v8,
                                                                      (UnityEngine_Transform_o *)this,
                                                                      0,
                                                                      0LL);
        if ( _4__this )
        {
          _4__this->fields.servantRewardAction = (struct ServantRewardAction_o *)this;
          sub_1BC2FAC((CGThumbnailListItem_o *)&_4__this->fields.servantRewardAction, (int32_t)this, v10, v11);
          v12 = v2->fields.rewardInfo;
          if ( v12 )
          {
            if ( v12->fields.isSkipSvtDetail )
              v13 = 38;
            else
              v13 = 6;
            if ( !SoundManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
            SoundManager__stopBgm(0LL);
            v14 = v2->fields.__4__this;
            if ( v14 )
            {
              this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)v14->fields.servantRewardAction;
              if ( this )
              {
                ServantRewardAction__Setup_36259988((ServantRewardAction_o *)this, v2->fields.rewardInfo, v13, 0LL);
                goto LABEL_25;
              }
            }
          }
        }
      }
    }
LABEL_30:
    sub_1BC3264(this, method);
  }
  v15 = v2->fields.rewardInfo;
  if ( !v15 )
    goto LABEL_30;
  this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)Gift__IsCommandCode_39466452(v15->fields.type, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v16 = v2->fields.__4__this;
    this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    if ( !v2->fields.__4__this )
      goto LABEL_30;
    v17 = this;
    v18 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v2->fields.__4__this, 0LL);
    this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)GameObjectExtensions__GetParent(v18, 0LL);
    if ( !v17 )
      goto LABEL_30;
    this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)SummonAssetManager__InstantiateSvtGetPrefab(
                                                                  (SummonAssetManager_o *)v17,
                                                                  (UnityEngine_Transform_o *)this,
                                                                  0,
                                                                  0LL);
    if ( !v16 )
      goto LABEL_30;
    v16->fields.servantRewardAction = (struct ServantRewardAction_o *)this;
    sub_1BC2FAC((CGThumbnailListItem_o *)&v16->fields.servantRewardAction, (int32_t)this, v19, v20);
    v21 = v2->fields.__4__this;
    if ( !v21 )
      goto LABEL_30;
    this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)v21->fields.servantRewardAction;
    if ( !this )
      goto LABEL_30;
    ServantRewardAction__SetupCommandCode((ServantRewardAction_o *)this, v2->fields.rewardInfo, 6, 0LL);
  }
LABEL_25:
  v22 = v2->fields.__4__this;
  if ( !v22 )
    goto LABEL_30;
  servantRewardAction = v22->fields.servantRewardAction;
  _9__1 = v2->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v2,
      Method_TitleInfoEventTowerReward___c__DisplayClass39_0__StartRewardAction_sub_b__1__,
      0LL);
    v2->fields.__9__1 = _9__1;
    sub_1BC2FAC((CGThumbnailListItem_o *)&v2->fields.__9__1, (int32_t)_9__1, v25, v26);
  }
  if ( !servantRewardAction )
    goto LABEL_30;
  ServantRewardAction__Play(servantRewardAction, _9__1, 0.0, 0LL);
}


void __fastcall TitleInfoEventTowerReward___c__DisplayClass39_0___StartRewardAction_sub_b__1(
        TitleInfoEventTowerReward___c__DisplayClass39_0_o *this,
        const MethodInfo *method)
{
  TitleInfoEventTowerReward___c__DisplayClass39_0_o *v2; // x19
  __int64 v3; // x1
  struct TitleInfoEventTowerReward_o *_4__this; // x8
  UnityEngine_Object_o *gameObject; // x20
  const MethodInfo *v6; // x4

  v2 = this;
  if ( (byte_4B00A18 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)sub_1BC3008(
                                                                  &Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__,
                                                                  v3);
    byte_4B00A18 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_10;
  this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)_4__this->fields.servantRewardAction;
  if ( !this )
    goto LABEL_10;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__DestroyImmediate_70034488(gameObject, 0LL);
  this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  if ( !this
    || (SummonAssetManager__UnloadSummonAssets((SummonAssetManager_o *)this, 0LL),
        (this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)v2->fields.__4__this) == 0LL) )
  {
LABEL_10:
    sub_1BC3264(this, method);
  }
  TitleInfoEventTowerReward__StartRewardAction_sub(
    (TitleInfoEventTowerReward_o *)this,
    v2->fields.rewardInfoList,
    v2->fields.idx + 1,
    v2->fields.subEndAction,
    v6);
}