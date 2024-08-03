void __fastcall TitleInfoEventTowerReward___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t v7; // w1
  struct TitleInfoEventTowerReward_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w1
  struct TitleInfoEventTowerReward_StaticFields *v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3

  if ( (byte_49FAF46 & 1) == 0 )
  {
    sub_1B640C8(&TitleInfoEventTowerReward_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_23908/*"tower_{0}_{1}"*/, v4);
    sub_1B640C8(&StringLiteral_17168/*"bit_floor_reward"*/, v5);
    sub_1B640C8(&StringLiteral_3113/*"Back/back{0:D5}"*/, v6);
    byte_49FAF46 = 1;
  }
  TitleInfoEventTowerReward_TypeInfo->static_fields->SPRITE_NAME_TOWER = (struct System_String_o *)StringLiteral_23908/*"tower_{0}_{1}"*/;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)TitleInfoEventTowerReward_TypeInfo->static_fields,
    StringLiteral_23908/*"tower_{0}_{1}"*/,
    v2,
    v3);
  v7 = StringLiteral_3113/*"Back/back{0:D5}"*/;
  static_fields = TitleInfoEventTowerReward_TypeInfo->static_fields;
  static_fields->SPRITE_NAME_BG = (struct System_String_o *)StringLiteral_3113/*"Back/back{0:D5}"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->SPRITE_NAME_BG, v7, v9, v10);
  v11 = StringLiteral_17168/*"bit_floor_reward"*/;
  v12 = TitleInfoEventTowerReward_TypeInfo->static_fields;
  v12->CLIP_NAME_TOWER_REWARD = (struct System_String_o *)StringLiteral_17168/*"bit_floor_reward"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v12->CLIP_NAME_TOWER_REWARD, v11, v13, v14);
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
  System_String_o *voiceName; // x21
  int32_t v7; // w2
  int32_t v8; // w3
  struct System_String_o **p_voiceAssetName; // x20
  __int64 v10; // x1
  __int64 v11; // x2
  System_String_o *v12; // x21
  int32_t v13; // w2
  int32_t v14; // w3
  System_Action_o *v15; // x20
  const MethodInfo *v16; // x2

  if ( (byte_49FAF43 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&SoundManager_TypeInfo, v3);
    sub_1B640C8(&Method_TitleInfoEventTowerReward__Close_b__37_0__, v4);
    byte_49FAF43 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B64324(0LL);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  if ( this->fields.voicePlayer )
  {
    voiceName = this->fields.voiceName;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__stopVoice_38387556(voiceName, 0.0, 0LL);
    this->fields.voicePlayer = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.voicePlayer, 0, v7, v8);
  }
  p_voiceAssetName = &this->fields.voiceAssetName;
  if ( !System_String__IsNullOrEmpty(this->fields.voiceAssetName, 0LL) )
  {
    v12 = *p_voiceAssetName;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__releaseAudioAssetStorage(v12, 0LL);
    *p_voiceAssetName = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.voiceAssetName, 0, v13, v14);
  }
  *(_QWORD *)&this->fields.selectVoiceIndex = 0LL;
  this->fields.playCnt = 0;
  v15 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v10, v11);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_TitleInfoEventTowerReward__Close_b__37_0__, 0LL);
  TitleInfoEventTowerReward__StartRewardAction(this, v15, v16);
}


void __fastcall TitleInfoEventTowerReward__EndItemGetEffectAction(
        TitleInfoEventTowerReward_o *this,
        System_Action_o *afterDetail,
        const MethodInfo *method)
{
  if ( !afterDetail )
    sub_1B64324(this);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))afterDetail->fields.m_target)(
    afterDetail->fields.original_method_info,
    *(_QWORD *)&afterDetail->fields.extra_arg);
}


void __fastcall TitleInfoEventTowerReward__EndPlayVoice(TitleInfoEventTowerReward_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *voiceList; // x0
  __int64 v5; // x1
  __int64 playCnt; // x8
  __int64 v7; // x8

  if ( (byte_49FAF40 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, method);
    sub_1B640C8(&StringLiteral_10618/*"PlayVoice"*/, v3);
    byte_49FAF40 = 1;
  }
  if ( this->fields.playCnt < this->fields.maxPlayCnt )
  {
    voiceList = (System_Collections_Generic_List_object__o *)this->fields.voiceList;
    if ( !voiceList )
      goto LABEL_10;
    voiceList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                               voiceList,
                                                               this->fields.selectVoiceIndex,
                                                               (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    if ( !voiceList )
      goto LABEL_10;
    playCnt = this->fields.playCnt;
    if ( (unsigned int)playCnt >= voiceList->fields._size )
      sub_1B6432C(voiceList, v5);
    v7 = *((_QWORD *)&voiceList->fields._syncRoot + playCnt);
    if ( !v7 )
LABEL_10:
      sub_1B64324(voiceList);
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10618/*"PlayVoice"*/,
      *(float *)(v7 + 24),
      0LL);
  }
}


void __fastcall TitleInfoEventTowerReward__OnLoadEndBG(TitleInfoEventTowerReward_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  __int64 v4; // x1
  Il2CppClass *klass; // x8
  UIStandFigureR_o *monitor; // x20
  int32_t v7; // w21
  int32_t data; // w22
  System_Action_o *v9; // x23

  v3 = (Il2CppObject *)this;
  if ( (byte_49FAF3C & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    this = (TitleInfoEventTowerReward_o *)sub_1B640C8(&Method_TitleInfoEventTowerReward_OnLoadEndSvt__, v4);
    byte_49FAF3C = 1;
  }
  klass = v3[9].klass;
  if ( !klass
    || (monitor = (UIStandFigureR_o *)v3[4].monitor,
        v7 = *(&klass->_1.byval_arg.bits + 1),
        data = (int32_t)klass->_1.this_arg.data,
        v9 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, method, v2),
        System_Action___ctor(v9, v3, Method_TitleInfoEventTowerReward_OnLoadEndSvt__, 0LL),
        !monitor) )
  {
    sub_1B64324(this);
  }
  UIStandFigureR__SetCharacter(monitor, v7, data, 1, 0, 0, v9, 0LL);
}


void __fastcall TitleInfoEventTowerReward__OnLoadEndSvt(TitleInfoEventTowerReward_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  TitleInfoEventTowerReward_o *v3; // x19
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
  System_Collections_Generic_List_object__o *v16; // x20
  __int64 v17; // x1
  __int64 v18; // x2
  struct EventTowerReward_o *v19; // x8
  struct System_String_array *voiceIds; // x8
  TitleInfoEventTowerReward_o *v21; // x22
  __int64 v22; // x25
  System_Collections_Generic_List_object__o *v23; // x23
  int32_t v24; // w2
  int32_t v25; // w3
  __int64 v26; // x1
  unsigned __int64 v27; // x23
  struct EventTowerReward_o *v28; // x8
  struct System_String_array *v29; // x9
  int size; // w25
  TitleInfoEventTowerReward_o *v31; // x22
  int32_t v32; // w23
  struct ExUITexture_o *bgSprite; // x8
  struct EventTowerReward_o *v34; // x9
  System_Collections_Generic_List_object__o *voiceList; // x24
  int32_t v36; // w2
  int32_t v37; // w3
  struct System_Object_array *items; // x8
  _QWORD *v39; // x9
  __int64 v40; // x10
  TitleInfoEventTowerReward_o *v41; // x1
  Il2CppClass **v42; // x0
  struct EventTowerReward_o *v43; // x8
  System_String_o *VoiceAssetName_39436496; // x0
  int32_t v45; // w2
  int32_t v46; // w3
  System_String_o *voiceAssetName; // x20
  __int64 v48; // x1
  __int64 v49; // x2
  System_Action_o *v50; // x21

  v3 = this;
  if ( (byte_49FAF3D & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantVoiceMaster___, v4);
    sub_1B640C8(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantVoiceData____AddRange__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, v10);
    sub_1B640C8(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v11);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_1B640C8(&SoundManager_TypeInfo, v13);
    this = (TitleInfoEventTowerReward_o *)sub_1B640C8(&Method_TitleInfoEventTowerReward__OnLoadEndSvt_b__31_0__, v14);
    byte_49FAF3D = 1;
  }
  eventTowerReward = v3->fields.eventTowerReward;
  if ( !eventTowerReward )
    goto LABEL_39;
  if ( eventTowerReward->fields.voiceIds )
  {
    v16 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                         System_Collections_Generic_List_ServantVoiceData____TypeInfo,
                                                         method,
                                                         v2);
    System_Collections_Generic_List_object____ctor(
      v16,
      (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    this = (TitleInfoEventTowerReward_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_39;
    this = (TitleInfoEventTowerReward_o *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)this,
                                            (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
    v19 = v3->fields.eventTowerReward;
    if ( !v19 )
      goto LABEL_39;
    voiceIds = v19->fields.voiceIds;
    if ( !voiceIds )
      goto LABEL_39;
    v21 = this;
    v22 = *(_QWORD *)&voiceIds->max_length;
    v23 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                         System_Collections_Generic_List_ServantVoiceData____TypeInfo,
                                                         v17,
                                                         v18);
    System_Collections_Generic_List_object____ctor(
      v23,
      (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    v3->fields.voiceList = (struct System_Collections_Generic_List_ServantVoiceData____o *)v23;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v3->fields.voiceList, (int32_t)v23, v24, v25);
    if ( (int)v22 >= 1 )
    {
      v27 = 0LL;
      while ( 1 )
      {
        v28 = v3->fields.eventTowerReward;
        if ( !v28 )
          break;
        v29 = v28->fields.voiceIds;
        if ( !v29 )
          break;
        if ( v27 >= v29->max_length )
LABEL_40:
          sub_1B6432C(this, v26);
        if ( !v21 )
          break;
        this = (TitleInfoEventTowerReward_o *)ServantVoiceMaster__getEntity_39458332(
                                                (ServantVoiceMaster_o *)v21,
                                                14,
                                                v28->fields.svtId,
                                                v28->fields.limitCount,
                                                v29->m_Items[v27],
                                                0LL);
        if ( this )
        {
          if ( !v16 )
            break;
          System_Collections_Generic_List_object___AddRange(
            v16,
            (System_Collections_Generic_IEnumerable_T__o *)this,
            (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_ServantVoiceData____AddRange__);
        }
        if ( (unsigned int)v22 == ++v27 )
          goto LABEL_18;
      }
LABEL_39:
      sub_1B64324(this);
    }
LABEL_18:
    this = (TitleInfoEventTowerReward_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_39;
    this = (TitleInfoEventTowerReward_o *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)this,
                                            (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    if ( !v16 )
      goto LABEL_39;
    size = v16->fields._size;
    if ( size >= 1 )
    {
      v31 = this;
      v32 = 0;
      do
      {
        this = (TitleInfoEventTowerReward_o *)System_Collections_Generic_List_object___get_Item(
                                                v16,
                                                v32,
                                                (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
        if ( !this )
          goto LABEL_39;
        if ( !LODWORD(this->fields.m_CancellationTokenSource) )
          goto LABEL_40;
        bgSprite = this->fields.bgSprite;
        if ( !bgSprite )
          goto LABEL_39;
        v34 = v3->fields.eventTowerReward;
        if ( !v34 || !v31 )
          goto LABEL_39;
        this = (TitleInfoEventTowerReward_o *)VoicePlayCondMaster__isVoicePlay(
                                                (VoicePlayCondMaster_o *)v31,
                                                v34->fields.svtId,
                                                *(System_String_o **)&bgSprite->fields.m_CachedPtr,
                                                0LL,
                                                -1LL,
                                                -1,
                                                0LL,
                                                0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          voiceList = (System_Collections_Generic_List_object__o *)v3->fields.voiceList;
          this = (TitleInfoEventTowerReward_o *)System_Collections_Generic_List_object___get_Item(
                                                  v16,
                                                  v32,
                                                  (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
          if ( !voiceList )
            goto LABEL_39;
          items = voiceList->fields._items;
          v39 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
          ++voiceList->fields._version;
          if ( !items )
            goto LABEL_39;
          v40 = voiceList->fields._size;
          v41 = this;
          if ( (unsigned int)v40 >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              voiceList,
              (Il2CppObject *)this,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
          }
          else
          {
            v42 = &items->obj.klass + v40;
            voiceList->fields._size = v40 + 1;
            v42[4] = (Il2CppClass *)v41;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v42 + 4), (int32_t)v41, v36, v37);
          }
        }
      }
      while ( size != ++v32 );
    }
    v43 = v3->fields.eventTowerReward;
    if ( !v43 )
      goto LABEL_39;
    VoiceAssetName_39436496 = ServantVoiceEntity__getVoiceAssetName_39436496(v43->fields.svtId, 0LL);
    v3->fields.voiceAssetName = VoiceAssetName_39436496;
    sub_1B6406C(
      (ServantStatusBattleListViewItem_o *)&v3->fields.voiceAssetName,
      (int32_t)VoiceAssetName_39436496,
      v45,
      v46);
    voiceAssetName = v3->fields.voiceAssetName;
    v50 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v48, v49);
    System_Action___ctor(v50, (Il2CppObject *)v3, Method_TitleInfoEventTowerReward__OnLoadEndSvt_b__31_0__, 0LL);
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__loadAudioAssetStorage(voiceAssetName, v50, 1, 0LL);
  }
}


void __fastcall TitleInfoEventTowerReward__OnTouchDisp(TitleInfoEventTowerReward_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Component_o *screenTouchInfo; // x0
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  AvalonSceneManager_c *v10; // x8
  CommonUI_o *v11; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v13; // x21

  if ( (byte_49FAF42 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&AvalonSceneManager_TypeInfo, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B640C8(&Method_TitleInfoEventTowerReward__OnTouchDisp_b__36_0__, v5);
    byte_49FAF42 = 1;
  }
  screenTouchInfo = (UnityEngine_Component_o *)this->fields.screenTouchInfo;
  if ( !screenTouchInfo )
    goto LABEL_9;
  screenTouchInfo = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(screenTouchInfo, 0LL);
  if ( !screenTouchInfo )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)screenTouchInfo, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = AvalonSceneManager_TypeInfo;
  v11 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v10 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v10->static_fields->DEFAULT_FADE_TIME;
  v13 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v8, v9);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_TitleInfoEventTowerReward__OnTouchDisp_b__36_0__, 0LL);
  if ( !v11 )
LABEL_9:
    sub_1B64324(screenTouchInfo);
  CommonUI__maskFadeout(v11, 1, DEFAULT_FADE_TIME, v13, 0LL);
  this->fields.state = 0;
}


void __fastcall TitleInfoEventTowerReward__Open(
        TitleInfoEventTowerReward_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
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
  int32_t v33; // w3
  TerminalPramsManager_c *v34; // x0
  struct QuestRewardInfo_array *resultEventTowerRewardInfo_k__BackingField; // x1
  struct EventTowerReward_o *eventTowerReward; // x8
  struct ScreenTouchInformationComponent_o **p_screenTouchInfo; // x22
  UnityEngine_Object_o *screenTouchInfo; // x23
  Il2CppObject *Instance; // x23
  __int64 transform; // x0
  Il2CppObject *Component_object; // x0
  int32_t v42; // w2
  int32_t v43; // w3
  int32_t v44; // w2
  int32_t v45; // w3
  __int64 v46; // x21
  TitleInfoEventTowerReward_c *v47; // x8
  int effectId; // w23
  System_String_o *CLIP_NAME_TOWER_REWARD; // x22
  System_String_o *FloorRewardPrefabName; // x0
  TitleInfoEventTowerReward_c *v51; // x0
  struct EventTowerReward_o *v52; // x8
  Il2CppObject *v53; // x0
  System_String_o *v54; // x0
  UnityEngine_Object_o *simpleAnimation; // x23
  System_String_o *v56; // x22
  bool v57; // w0
  __int64 v58; // x23
  __int64 v59; // x8
  __int64 v60; // x21
  __int64 v61; // x9
  SimpleAnimation_State_c **v62; // x10
  __int64 v63; // x0
  UnityEngine_Object_o *animation; // x23
  int towerId; // w8
  __int64 v66; // x22
  Il2CppObject *Item; // x21
  struct EventTowerReward_o *v68; // x8
  UILabel_o *floorLabel; // x21
  struct EventTowerReward_o *v70; // x8
  UILabel_o *v71; // x22
  UISprite_o *nameSprite; // x21
  System_String_o *v73; // x22
  Il2CppObject *v74; // x23
  Il2CppObject *v75; // x0
  __int64 v76; // x1
  __int64 v77; // x2
  int v78; // w26
  __int64 v79; // x21
  System_Text_StringBuilder_o *v80; // x22
  __int64 v81; // x1
  unsigned int i; // w27
  __int64 v83; // x23
  __int64 v84; // x23
  __int64 v85; // t1
  System_String_o *v86; // x0
  bool IsNullOrEmpty; // w23
  UILabel_o *rewardLabel; // x23
  _DWORD *v89; // x8
  int32_t v90; // w21
  struct EventTowerReward_o *v91; // x8
  System_String_o *SPRITE_NAME_BG; // x20
  Il2CppObject *v93; // x0
  System_String_o *v94; // x0
  ExUITexture_o *bgSprite; // x20
  System_String_o *v96; // x21
  __int64 v97; // x1
  __int64 v98; // x2
  System_Action_o *v99; // x22
  int32_t v100; // [xsp+0h] [xbp-80h] BYREF
  int eventId; // [xsp+4h] [xbp-7Ch] BYREF
  System_String_o *countText; // [xsp+8h] [xbp-78h] BYREF
  System_String_o *nameText; // [xsp+10h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_49FAF3B & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, callback);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventDetailMaster___, v6);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventTowerMaster___, v7);
    sub_1B640C8(&Method_DataManager_GetMasterData_GiftMaster___, v8);
    sub_1B640C8(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v9);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___, v10);
    sub_1B640C8(&int_TypeInfo, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_UIFont__get_Count__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_UIFont__get_Item__, v13);
    sub_1B640C8(&LocalizationManager_TypeInfo, v14);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v15);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v16);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_1B640C8(&SimpleAnimation_State_TypeInfo, v18);
    sub_1B640C8(&System_Text_StringBuilder_TypeInfo, v19);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v20);
    sub_1B640C8(&Method_TitleInfoEventTowerReward_OnLoadEndBG__, v21);
    sub_1B640C8(&TitleInfoEventTowerReward_TypeInfo, v22);
    sub_1B640C8(&StringLiteral_43/*"\n"*/, v23);
    sub_1B640C8(&StringLiteral_5708/*"EVENT_TOWER_REWARD_GET"*/, v24);
    sub_1B640C8(&StringLiteral_10797/*"QUEST_CLEAR_COSTUME_GET"*/, v25);
    sub_1B640C8(&StringLiteral_16054/*"_"*/, v26);
    sub_1B640C8(&StringLiteral_5709/*"EVENT_TOWER_REWARD_GET_2"*/, v27);
    byte_49FAF3B = 1;
  }
  nameText = 0LL;
  entity = 0LL;
  countText = 0LL;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F9659 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, callback);
    byte_49F9659 = 1;
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
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.eventTowerReward,
    (int32_t)eventTowerReward_k__BackingField,
    (int32_t)method,
    v3);
  if ( !byte_49F9AE3 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v31);
    byte_49F9AE3 = 1;
  }
  v34 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v34 = TerminalPramsManager_TypeInfo;
  }
  resultEventTowerRewardInfo_k__BackingField = v34->static_fields->_resultEventTowerRewardInfo_k__BackingField;
  this->fields.resultEventTowerRewardInfo = resultEventTowerRewardInfo_k__BackingField;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.resultEventTowerRewardInfo,
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
                         (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    *p_screenTouchInfo = (struct ScreenTouchInformationComponent_o *)Component_object;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.screenTouchInfo, (int32_t)Component_object, v42, v43);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.endCallback, (int32_t)callback, v44, v45);
  this->fields.state = 0;
  transform = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !transform )
    goto LABEL_134;
  transform = (__int64)DataManager__GetMasterData_object_(
                         (DataManager_o *)transform,
                         (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventTowerMaster___);
  if ( !*p_eventTowerReward || !transform )
    goto LABEL_134;
  transform = (__int64)EventTowerMaster__GetEntity(
                         (EventTowerMaster_o *)transform,
                         (*p_eventTowerReward)->fields.eventId,
                         (*p_eventTowerReward)->fields.towerId,
                         0LL);
  v46 = transform;
  v47 = TitleInfoEventTowerReward_TypeInfo;
  if ( !TitleInfoEventTowerReward_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventTowerReward_TypeInfo);
    v47 = TitleInfoEventTowerReward_TypeInfo;
  }
  if ( !*p_eventTowerReward )
    goto LABEL_134;
  effectId = (*p_eventTowerReward)->fields.effectId;
  CLIP_NAME_TOWER_REWARD = v47->static_fields->CLIP_NAME_TOWER_REWARD;
  transform = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !transform )
    goto LABEL_134;
  transform = (__int64)DataManager__GetMasterData_object_(
                         (DataManager_o *)transform,
                         (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !*p_eventTowerReward || !transform )
    goto LABEL_134;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)transform,
         &entity,
         (*p_eventTowerReward)->fields.eventId,
         (const MethodInfo_30D3EF8 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
    transform = (__int64)entity;
    if ( !entity )
      goto LABEL_134;
    FloorRewardPrefabName = EventDetailEntity__GetFloorRewardPrefabName((EventDetailEntity_o *)entity, 0LL);
    if ( FloorRewardPrefabName )
      CLIP_NAME_TOWER_REWARD = FloorRewardPrefabName;
  }
  v51 = TitleInfoEventTowerReward_TypeInfo;
  if ( !TitleInfoEventTowerReward_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventTowerReward_TypeInfo);
    v51 = TitleInfoEventTowerReward_TypeInfo;
  }
  transform = System_String__op_Equality(CLIP_NAME_TOWER_REWARD, v51->static_fields->CLIP_NAME_TOWER_REWARD, 0LL);
  if ( (transform & 1) != 0 )
  {
    v52 = *p_eventTowerReward;
    if ( !*p_eventTowerReward )
      goto LABEL_134;
    if ( v52->fields.towerId == 2 && v52->fields.floor == 100 )
      effectId = 3;
  }
  eventId = effectId;
  v53 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId);
  v54 = System_String__Concat_61386408(
          (Il2CppObject *)CLIP_NAME_TOWER_REWARD,
          (Il2CppObject *)StringLiteral_16054/*"_"*/,
          v53,
          0LL);
  simpleAnimation = (UnityEngine_Object_o *)this->fields.simpleAnimation;
  v56 = v54;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v57 = UnityEngine_Object__op_Inequality(simpleAnimation, 0LL, 0LL);
  if ( v57 )
    v58 = v46;
  else
    v58 = 0LL;
  if ( v57 )
  {
    transform = (__int64)this->fields.simpleAnimation;
    if ( transform )
    {
      transform = (__int64)SimpleAnimation__get_Item((SimpleAnimation_o *)transform, v56, 0LL);
      if ( transform )
      {
        v59 = *(_QWORD *)transform;
        v60 = transform;
        v61 = *(unsigned __int16 *)(*(_QWORD *)transform + 302LL);
        if ( *(_WORD *)(*(_QWORD *)transform + 302LL) )
        {
          v62 = (SimpleAnimation_State_c **)(*(_QWORD *)(v59 + 176) + 8LL);
          while ( *(v62 - 1) != SimpleAnimation_State_TypeInfo )
          {
            --v61;
            v62 += 2;
            if ( !v61 )
              goto LABEL_58;
          }
          v63 = v59 + 16LL * (*(_DWORD *)v62 + 14) + 312;
        }
        else
        {
LABEL_58:
          v63 = sub_1BB60A8(transform, SimpleAnimation_State_TypeInfo, 14LL);
        }
        transform = (*(__int64 (__fastcall **)(__int64, _QWORD))v63)(v60, *(_QWORD *)(v63 + 8));
        if ( this->fields.simpleAnimation )
        {
          SimpleAnimation__set_clip(this->fields.simpleAnimation, (UnityEngine_AnimationClip_o *)transform, 0LL);
          transform = (__int64)this->fields.simpleAnimation;
          if ( transform )
          {
            v46 = v58;
LABEL_71:
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)transform, 0, 0LL);
            goto LABEL_72;
          }
        }
      }
    }
LABEL_134:
    sub_1B64324(transform);
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
    transform = (__int64)UnityEngine_Animation__GetClip((UnityEngine_Animation_o *)transform, v56, 0LL);
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
  if ( towerId >= 1 )
    v66 = v46;
  else
    v66 = 0LL;
  if ( towerId >= 1 )
  {
    transform = (__int64)this->fields.floorNumFontList;
    if ( !transform )
      goto LABEL_134;
    if ( *(_DWORD *)(transform + 24) >= towerId )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)transform,
               towerId - 1,
               (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_UIFont__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      transform = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Item, 0LL, 0LL);
      if ( (transform & 1) != 0 )
      {
        v68 = this->fields.eventTowerReward;
        if ( !v68 )
          goto LABEL_134;
        transform = (__int64)this->fields.floorNumFontList;
        if ( !transform )
          goto LABEL_134;
        floorLabel = this->fields.floorLabel;
        transform = (__int64)System_Collections_Generic_List_object___get_Item(
                               (System_Collections_Generic_List_object__o *)transform,
                               v68->fields.towerId - 1,
                               (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_UIFont__get_Item__);
        if ( !floorLabel )
          goto LABEL_134;
        UILabel__set_bitmapFont(floorLabel, (UIFont_o *)transform, 0LL);
      }
      v46 = v66;
    }
  }
  v70 = this->fields.eventTowerReward;
  if ( !v70 )
    goto LABEL_134;
  v71 = this->fields.floorLabel;
  transform = (__int64)System_Int32__ToString((int)v70 + 24, 0LL);
  if ( !v71 )
    goto LABEL_134;
  UILabel__set_text(v71, (System_String_o *)transform, 0LL);
  if ( v46 )
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
    v73 = **(System_String_o ***)(transform + 184);
    eventId = (*p_eventTowerReward)->fields.eventId;
    transform = j_il2cpp_value_box_0(int_TypeInfo, &eventId);
    if ( !*p_eventTowerReward )
      goto LABEL_134;
    v74 = (Il2CppObject *)transform;
    v100 = (*p_eventTowerReward)->fields.towerId;
    v75 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v100);
    transform = (__int64)System_String__Format_61389768(v73, v74, v75, 0LL);
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
  transform = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !transform )
    goto LABEL_134;
  transform = (__int64)DataManager__GetMasterData_object_(
                         (DataManager_o *)transform,
                         (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_GiftMaster___);
  if ( !*p_eventTowerReward )
    goto LABEL_134;
  if ( !transform )
    goto LABEL_134;
  transform = (__int64)GiftMaster__GetGiftListById((GiftMaster_o *)transform, (*p_eventTowerReward)->fields.giftId, 0LL);
  if ( !transform )
    goto LABEL_134;
  v78 = *(_DWORD *)(transform + 24);
  v79 = transform;
  if ( v78 < 1 )
    goto LABEL_129;
  v80 = (System_Text_StringBuilder_o *)sub_1B64314(System_Text_StringBuilder_TypeInfo, v76, v77);
  System_Text_StringBuilder___ctor(v80, 0LL);
  for ( i = 0; i != v78; ++i )
  {
    if ( i )
    {
      if ( !v80 )
        goto LABEL_134;
      transform = (__int64)System_Text_StringBuilder__Append_60536548(v80, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
    }
    if ( i >= *(_DWORD *)(v79 + 24) )
      goto LABEL_135;
    v83 = v79 + 8LL * (int)i;
    v85 = *(_QWORD *)(v83 + 32);
    v84 = v83 + 32;
    transform = v85;
    if ( !v85 )
      goto LABEL_134;
    GiftEntity__GetInfo((GiftEntity_o *)transform, &nameText, &countText, 0LL);
    if ( i >= *(_DWORD *)(v79 + 24) )
      goto LABEL_135;
    if ( !*(_QWORD *)v84 )
      goto LABEL_134;
    if ( *(_DWORD *)(*(_QWORD *)v84 + 20LL) == 9 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v86 = (System_String_o *)StringLiteral_10797/*"QUEST_CLEAR_COSTUME_GET"*/;
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
        v86 = (System_String_o *)StringLiteral_5709/*"EVENT_TOWER_REWARD_GET_2"*/;
LABEL_117:
        transform = (__int64)LocalizationManager__Get(v86, 0LL);
        if ( !v80 )
          goto LABEL_134;
        transform = (__int64)System_Text_StringBuilder__AppendFormat(
                               v80,
                               (System_String_o *)transform,
                               (Il2CppObject *)nameText,
                               0LL);
        continue;
      }
    }
    transform = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_5708/*"EVENT_TOWER_REWARD_GET"*/, 0LL);
    if ( !v80 )
      goto LABEL_134;
    transform = (__int64)System_Text_StringBuilder__AppendFormat_60542900(
                           v80,
                           (System_String_o *)transform,
                           (Il2CppObject *)nameText,
                           (Il2CppObject *)countText,
                           0LL);
  }
  rewardLabel = this->fields.rewardLabel;
  transform = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v80->klass->vtable._3_ToString.method)(
                v80,
                v80->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  if ( !rewardLabel )
    goto LABEL_134;
  UILabel__set_text(rewardLabel, (System_String_o *)transform, 0LL);
  if ( !*(_DWORD *)(v79 + 24) )
LABEL_135:
    sub_1B6432C(transform, v81);
  v89 = *(_DWORD **)(v79 + 32);
  if ( !v89 )
    goto LABEL_134;
  transform = (__int64)this->fields.itemIcon;
  if ( !transform )
    goto LABEL_134;
  v90 = v89[5];
  ItemIconComponent__SetGift_37829292((ItemIconComponent_o *)transform, v90, v89[6], v89[7], 0, 0LL);
  transform = (__int64)this->fields.imageFrame;
  if ( !transform )
    goto LABEL_134;
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)transform,
    (0x461u >> (v90 - 1)) & ((unsigned int)(v90 - 1) < 0xB),
    0LL);
LABEL_129:
  transform = (__int64)TitleInfoEventTowerReward_TypeInfo;
  if ( !TitleInfoEventTowerReward_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TitleInfoEventTowerReward_TypeInfo);
  v91 = *p_eventTowerReward;
  if ( !*p_eventTowerReward )
    goto LABEL_134;
  SPRITE_NAME_BG = TitleInfoEventTowerReward_TypeInfo->static_fields->SPRITE_NAME_BG;
  eventId = v91->fields.bgId;
  v93 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId);
  v94 = System_String__Format(SPRITE_NAME_BG, v93, 0LL);
  bgSprite = this->fields.bgSprite;
  v96 = v94;
  v99 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v97, v98);
  System_Action___ctor(v99, (Il2CppObject *)this, Method_TitleInfoEventTowerReward_OnLoadEndBG__, 0LL);
  if ( !bgSprite )
    goto LABEL_134;
  ExUITexture__SetAssetImage(bgSprite, v96, v99, 0LL);
}


void __fastcall TitleInfoEventTowerReward__PlayVoice(TitleInfoEventTowerReward_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *voiceList; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  __int64 playCnt; // x8
  ServantVoiceData_o *v12; // x20
  struct System_String_o *id; // x1
  struct EventTowerReward_o *eventTowerReward; // x8
  System_String_o *VoiceAssetName_39436496; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  SeManager_c *v18; // x8
  System_String_o *voiceName; // x21
  System_String_o *v20; // x22
  float DEFAULT_VOLUME; // s8
  System_Action_o *v22; // x23
  struct SePlayer_o *v23; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  UIStandFigureR_o *standFigure; // x21
  int32_t face; // w22
  float FadeTime; // s0

  if ( (byte_49FAF3F & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, v3);
    sub_1B640C8(&SeManager_TypeInfo, v4);
    sub_1B640C8(&SoundManager_TypeInfo, v5);
    sub_1B640C8(&Method_TitleInfoEventTowerReward_EndPlayVoice__, v6);
    byte_49FAF3F = 1;
  }
  voiceList = (System_Collections_Generic_List_object__o *)this->fields.voiceList;
  if ( !voiceList )
    goto LABEL_14;
  voiceList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                             voiceList,
                                                             this->fields.selectVoiceIndex,
                                                             (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
  if ( !voiceList )
    goto LABEL_14;
  playCnt = this->fields.playCnt;
  if ( (unsigned int)playCnt >= voiceList->fields._size )
    sub_1B6432C(voiceList, v8);
  v12 = (ServantVoiceData_o *)*((_QWORD *)&voiceList->fields._syncRoot + playCnt);
  if ( !v12 )
    goto LABEL_14;
  id = v12->fields.id;
  this->fields.voiceName = id;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.voiceName, (int32_t)id, v9, v10);
  eventTowerReward = this->fields.eventTowerReward;
  if ( !eventTowerReward )
    goto LABEL_14;
  VoiceAssetName_39436496 = ServantVoiceEntity__getVoiceAssetName_39436496(eventTowerReward->fields.svtId, 0LL);
  v18 = SeManager_TypeInfo;
  voiceName = this->fields.voiceName;
  v20 = VoiceAssetName_39436496;
  if ( !SeManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    v18 = SeManager_TypeInfo;
  }
  DEFAULT_VOLUME = v18->static_fields->DEFAULT_VOLUME;
  v22 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v16, v17);
  System_Action___ctor(v22, (Il2CppObject *)this, Method_TitleInfoEventTowerReward_EndPlayVoice__, 0LL);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  v23 = SoundManager__playVoice_38387180(v20, voiceName, DEFAULT_VOLUME, v22, 0LL);
  this->fields.voicePlayer = v23;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.voicePlayer, (int32_t)v23, v24, v25);
  standFigure = this->fields.standFigure;
  face = v12->fields.face;
  FadeTime = ServantVoiceData__GetFadeTime(v12, 0LL);
  if ( !standFigure )
LABEL_14:
    sub_1B64324(voiceList);
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
  int32_t v9; // w2
  int32_t v10; // w3
  __int64 v11; // x22
  int32_t v12; // w2
  int32_t v13; // w3
  __int64 v14; // x1
  __int64 v15; // x2
  QuestRewardInfo_array *resultEventTowerRewardInfo; // x20
  System_Action_o *v17; // x22
  const MethodInfo *v18; // x4

  if ( (byte_49FAF44 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, callback);
    sub_1B640C8(&Method_TitleInfoEventTowerReward___c__DisplayClass38_0__StartRewardAction_b__0__, v5);
    sub_1B640C8(&TitleInfoEventTowerReward___c__DisplayClass38_0_TypeInfo, v6);
    byte_49FAF44 = 1;
  }
  v7 = sub_1B64314(TitleInfoEventTowerReward___c__DisplayClass38_0_TypeInfo, callback, method);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    goto LABEL_8;
  *(_QWORD *)(v7 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)this, v9, v10);
  *(_QWORD *)(v7 + 24) = callback;
  v11 = v7 + 24;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v7 + 24), (int32_t)callback, v12, v13);
  resultEventTowerRewardInfo = this->fields.resultEventTowerRewardInfo;
  if ( resultEventTowerRewardInfo )
  {
    v17 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v14, v15);
    System_Action___ctor(
      v17,
      (Il2CppObject *)v7,
      Method_TitleInfoEventTowerReward___c__DisplayClass38_0__StartRewardAction_b__0__,
      0LL);
    TitleInfoEventTowerReward__StartRewardAction_sub(this, resultEventTowerRewardInfo, 0, v17, v18);
    return;
  }
  if ( !*(_QWORD *)v11 )
LABEL_8:
    sub_1B64324(v8);
  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v11 + 24LL))(
    *(_QWORD *)(*(_QWORD *)v11 + 64LL),
    *(_QWORD *)(*(_QWORD *)v11 + 40LL));
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventTowerReward__StartRewardAction_sub(
        TitleInfoEventTowerReward_o *this,
        QuestRewardInfo_array *rewardInfoList,
        int32_t idx,
        System_Action_o *subEndAction,
        const MethodInfo *method)
{
  int32_t v6; // w29
  QuestRewardInfo_array *v7; // x19
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x26
  Il2CppObject *IsServant_37376332; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t v19; // w2
  int32_t v20; // w3
  __int64 v21; // x19
  int32_t v22; // w2
  int32_t v23; // w3
  __int64 v24; // x1
  int32_t v25; // w2
  int32_t v26; // w3
  __int64 v27; // x8
  __int64 v28; // x9
  int v29; // w10
  __int64 v30; // x1
  __int64 v31; // x19
  Il2CppObject *Entity; // x0
  Il2CppObject *v33; // x19
  Il2CppObject *Instance; // x19
  __int64 v35; // x1
  __int64 v36; // x2
  System_Action_o *v37; // x20

  v6 = idx;
  v7 = rewardInfoList;
  while ( 1 )
  {
    if ( (byte_49FAF45 & 1) == 0 )
    {
      sub_1B640C8(&System_Action_TypeInfo, rewardInfoList);
      sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v9);
      sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10);
      sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
      sub_1B640C8(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, v12);
      sub_1B640C8(&Method_TitleInfoEventTowerReward___c__DisplayClass39_0__StartRewardAction_sub_b__0__, v13);
      sub_1B640C8(&TitleInfoEventTowerReward___c__DisplayClass39_0_TypeInfo, v14);
      byte_49FAF45 = 1;
    }
    v15 = sub_1B64314(TitleInfoEventTowerReward___c__DisplayClass39_0_TypeInfo, rewardInfoList, *(_QWORD *)&idx);
    System_Object___ctor((Il2CppObject *)v15, 0LL);
    if ( !v15 )
      goto LABEL_24;
    *(_QWORD *)(v15 + 24) = this;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v15 + 24), (int32_t)this, v17, v18);
    *(_QWORD *)(v15 + 32) = v7;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v15 + 32), (int32_t)v7, v19, v20);
    *(_QWORD *)(v15 + 48) = subEndAction;
    v21 = v15 + 48;
    *(_DWORD *)(v15 + 40) = v6;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v15 + 48), (int32_t)subEndAction, v22, v23);
    v27 = *(_QWORD *)(v15 + 32);
    if ( !v27 )
      goto LABEL_24;
    v28 = *(int *)(v15 + 40);
    v29 = *(_DWORD *)(v27 + 24);
    if ( (int)v28 >= v29 )
    {
      if ( *(_QWORD *)v21 )
      {
        (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v21 + 24LL))(
          *(_QWORD *)(*(_QWORD *)v21 + 64LL),
          *(_QWORD *)(*(_QWORD *)v21 + 40LL));
        return;
      }
      goto LABEL_24;
    }
    if ( (unsigned int)v28 >= v29 )
      sub_1B6432C(IsServant_37376332, v24);
    v30 = *(_QWORD *)(v27 + 8 * v28 + 32);
    *(_QWORD *)(v15 + 16) = v30;
    v31 = v15 + 16;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v15 + 16), v30, v25, v26);
    if ( !*(_QWORD *)(v15 + 16) )
      goto LABEL_24;
    IsServant_37376332 = (Il2CppObject *)Gift__IsServant_37376332(*(_DWORD *)(*(_QWORD *)(v15 + 16) + 16LL), 0LL);
    if ( ((unsigned __int8)IsServant_37376332 & 1) == 0 )
      break;
    IsServant_37376332 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !IsServant_37376332 )
      goto LABEL_24;
    IsServant_37376332 = DataManager__GetMasterData_object_(
                           (DataManager_o *)IsServant_37376332,
                           (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !*(_QWORD *)v31 || !IsServant_37376332 )
      goto LABEL_24;
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)IsServant_37376332,
               *(_DWORD *)(*(_QWORD *)v31 + 20LL),
               (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
    v6 = *(_DWORD *)(v15 + 40) + 1;
  }
  if ( !*(_QWORD *)v31 )
    goto LABEL_24;
  if ( !Gift__IsCommandCode_37376724(*(_DWORD *)(*(_QWORD *)v31 + 16LL), 0LL) )
    goto LABEL_19;
LABEL_22:
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  v37 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v35, v36);
  System_Action___ctor(
    v37,
    (Il2CppObject *)v15,
    Method_TitleInfoEventTowerReward___c__DisplayClass39_0__StartRewardAction_sub_b__0__,
    0LL);
  if ( !Instance )
LABEL_24:
    sub_1B64324(IsServant_37376332);
  SummonAssetManager__LoadSummonAssets((SummonAssetManager_o *)Instance, v37, 0LL);
}


void __fastcall TitleInfoEventTowerReward__StartVoice(TitleInfoEventTowerReward_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  TitleInfoEventTowerReward_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceList; // x8
  System_Random_o *v7; // x20
  struct System_Collections_Generic_List_ServantVoiceData____o *v8; // x8
  System_Collections_Generic_List_object__o *v9; // x8
  const MethodInfo *v10; // x1

  v3 = this;
  if ( (byte_49FAF3E & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, v4);
    this = (TitleInfoEventTowerReward_o *)sub_1B640C8(&System_Random_TypeInfo, v5);
    byte_49FAF3E = 1;
  }
  voiceList = v3->fields.voiceList;
  if ( !voiceList )
    goto LABEL_11;
  if ( voiceList->fields._size )
  {
    v7 = (System_Random_o *)sub_1B64314(System_Random_TypeInfo, method, v2);
    System_Random___ctor(v7, 0LL);
    v8 = v3->fields.voiceList;
    if ( v8 )
    {
      if ( v7 )
      {
        this = (TitleInfoEventTowerReward_o *)((__int64 (__fastcall *)(System_Random_o *, _QWORD, Il2CppMethodPointer))v7->klass->vtable._7_Next.method)(
                                                v7,
                                                (unsigned int)v8->fields._size,
                                                v7->klass->vtable._8_NextDouble.methodPtr);
        v9 = (System_Collections_Generic_List_object__o *)v3->fields.voiceList;
        v3->fields.selectVoiceIndex = (int)this;
        if ( v9 )
        {
          this = (TitleInfoEventTowerReward_o *)System_Collections_Generic_List_object___get_Item(
                                                  v9,
                                                  (int32_t)this,
                                                  (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
          if ( this )
          {
            *(_QWORD *)&v3->fields.maxPlayCnt = (unsigned int)this->fields.m_CancellationTokenSource;
            TitleInfoEventTowerReward__PlayVoice(v3, v10);
            return;
          }
        }
      }
    }
LABEL_11:
    sub_1B64324(this);
  }
}


void __fastcall TitleInfoEventTowerReward__Update(TitleInfoEventTowerReward_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  int32_t state; // w8
  UnityEngine_Object_o *simpleAnimation; // x20
  UnityEngine_Object_o *monitor; // x0
  struct SimpleAnimation_o *v8; // x20
  System_String_o *name; // x0
  UnityEngine_Object_c *klass; // x8
  UnityEngine_Object_o *v11; // x20
  __int64 v12; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v14; // x0
  const MethodInfo *v15; // x1
  UnityEngine_Object_o *animation; // x20
  UnityEngine_Animation_o *v17; // x20
  System_String_o *v18; // x0
  UnityEngine_AnimationState_o *v19; // x20
  float time; // s8
  long double v21; // q0
  UnityEngine_Object_c *v22; // x8
  __int64 v23; // x9
  SimpleAnimation_State_c **v24; // x10
  __int64 v25; // x0

  if ( (byte_49FAF41 & 1) == 0 )
  {
    sub_1B640C8(&CTouch_TypeInfo, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    sub_1B640C8(&SimpleAnimation_State_TypeInfo, v4);
    byte_49FAF41 = 1;
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
      v8 = this->fields.simpleAnimation;
      if ( !v8 )
        goto LABEL_41;
      monitor = (UnityEngine_Object_o *)v8[1].monitor;
      if ( !monitor )
        goto LABEL_41;
      name = UnityEngine_Object__get_name(monitor, 0LL);
      monitor = (UnityEngine_Object_o *)SimpleAnimation__get_Item(v8, name, 0LL);
      if ( !monitor )
        goto LABEL_41;
      klass = monitor->klass;
      v11 = monitor;
      v12 = *(unsigned __int16 *)(&monitor->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&monitor->klass->_2.bitflags2 + 3) )
      {
        p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v12;
          p_offset += 2;
          if ( !v12 )
            goto LABEL_15;
        }
        v14 = (__int64)(&klass->vtable._3_ToString.method + 2 * *(_DWORD *)p_offset);
      }
      else
      {
LABEL_15:
        v14 = sub_1BB60A8(monitor, SimpleAnimation_State_TypeInfo, 3LL);
      }
      v21 = ((long double (__fastcall *)(UnityEngine_Object_o *, _QWORD))*(_QWORD *)v14)(v11, *(_QWORD *)(v14 + 8));
      v22 = v11->klass;
      time = *(float *)&v21;
      v23 = *(unsigned __int16 *)(&v11->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v11->klass->_2.bitflags2 + 3) )
      {
        v24 = (SimpleAnimation_State_c **)&v22->_1.interfaceOffsets->offset;
        while ( *(v24 - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v23;
          v24 += 2;
          if ( !v23 )
            goto LABEL_33;
        }
        v25 = (__int64)(&v22[1]._1.implementedInterfaces + 2 * *(_DWORD *)v24);
      }
      else
      {
LABEL_33:
        v25 = sub_1BB60A8(v11, SimpleAnimation_State_TypeInfo, 14LL);
      }
      monitor = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(UnityEngine_Object_o *, _QWORD))v25)(
                                          v11,
                                          *(_QWORD *)(v25 + 8));
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
      v17 = this->fields.animation;
      if ( !v17 )
        goto LABEL_41;
      monitor = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(this->fields.animation, 0LL);
      if ( !monitor )
        goto LABEL_41;
      v18 = UnityEngine_Object__get_name(monitor, 0LL);
      monitor = (UnityEngine_Object_o *)UnityEngine_Animation__get_Item(v17, v18, 0LL);
      if ( !monitor )
        goto LABEL_41;
      v19 = (UnityEngine_AnimationState_o *)monitor;
      time = UnityEngine_AnimationState__get_time((UnityEngine_AnimationState_o *)monitor, 0LL);
      monitor = (UnityEngine_Object_o *)UnityEngine_AnimationState__get_clip(v19, 0LL);
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
    sub_1B64324(monitor);
  }
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  if ( CTouch__isTouchPush(0LL) )
    TitleInfoEventTowerReward__OnTouchDisp(this, v15);
}


void __fastcall TitleInfoEventTowerReward___Close_b__37_0(TitleInfoEventTowerReward_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  ServantStatusBattleListViewItem_o *p_endCallback; // x0
  System_Action_o *v5; // x19
  struct System_Action_o *endCallback; // t1

  endCallback = this->fields.endCallback;
  p_endCallback = (ServantStatusBattleListViewItem_o *)&this->fields.endCallback;
  v5 = endCallback;
  if ( endCallback )
  {
    p_endCallback->klass = 0LL;
    sub_1B6406C(p_endCallback, 0, v2, v3);
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
  CommonUI_o *v11; // x20
  struct EventTowerReward_o *eventTowerReward; // x8
  struct EventTowerReward_o *v13; // x8
  System_String_o *m_CancellationTokenSource; // x20
  UnityEngine_Object_o *simpleAnimation; // x20
  struct SimpleAnimation_o *v16; // x8
  UnityEngine_Object_o *monitor; // x20
  struct SimpleAnimation_o *v18; // x20
  System_String_o *name; // x0
  UnityEngine_Object_o *animation; // x20
  UnityEngine_Object_o *clip; // x20
  UnityEngine_Animation_o *v22; // x20
  System_String_o *v23; // x0

  if ( (byte_49FAF47 & 1) == 0 )
  {
    sub_1B640C8(&AvalonSceneManager_TypeInfo, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_BgmMaster___, v3);
    sub_1B640C8(&Method_DataMasterBase_BgmMaster__BgmEntity__int__GetEntity__, v4);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1B640C8(&SoundManager_TypeInfo, v8);
    sub_1B640C8(&StringLiteral_12902/*"StartVoice"*/, v9);
    byte_49FAF47 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v11 )
    goto LABEL_40;
  CommonUI__maskFadein(v11, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_12902/*"StartVoice"*/,
    this->fields.voiceStartTime,
    0LL);
  eventTowerReward = this->fields.eventTowerReward;
  if ( !eventTowerReward )
    goto LABEL_40;
  if ( eventTowerReward->fields.bgmId >= 1 )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_40;
    Instance = (CommonUI_o *)DataManager__GetMasterData_object_(
                               (DataManager_o *)Instance,
                               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_BgmMaster___);
    v13 = this->fields.eventTowerReward;
    if ( !v13 )
      goto LABEL_40;
    if ( !Instance )
      goto LABEL_40;
    Instance = (CommonUI_o *)DataMasterBase_object__object__int___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               v13->fields.bgmId,
                               (const MethodInfo_30D3EA4 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__GetEntity__);
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
    v16 = this->fields.simpleAnimation;
    if ( !v16 )
      goto LABEL_40;
    monitor = (UnityEngine_Object_o *)v16[1].monitor;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Instance = (CommonUI_o *)UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      v18 = this->fields.simpleAnimation;
      if ( v18 )
      {
        Instance = (CommonUI_o *)v18[1].monitor;
        if ( Instance )
        {
          name = UnityEngine_Object__get_name((UnityEngine_Object_o *)Instance, 0LL);
          SimpleAnimation__Play_63513060(v18, name, 0LL);
          goto LABEL_37;
        }
      }
LABEL_40:
      sub_1B64324(Instance);
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
        v22 = this->fields.animation;
        if ( v22 )
        {
          Instance = (CommonUI_o *)UnityEngine_Animation__get_clip(this->fields.animation, 0LL);
          if ( Instance )
          {
            v23 = UnityEngine_Object__get_name((UnityEngine_Object_o *)Instance, 0LL);
            UnityEngine_Animation__Play_68872828(v22, v23, 0LL);
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
    sub_1B64324(this);
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
  int32_t v11; // w3
  struct QuestRewardInfo_o *v12; // x8
  int32_t v13; // w20
  struct TitleInfoEventTowerReward_o *v14; // x8
  __int64 v15; // x1
  __int64 v16; // x2
  struct QuestRewardInfo_o *v17; // x8
  struct TitleInfoEventTowerReward_o *v18; // x20
  TitleInfoEventTowerReward___c__DisplayClass39_0_o *v19; // x21
  UnityEngine_GameObject_o *v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  struct TitleInfoEventTowerReward_o *v23; // x8
  struct TitleInfoEventTowerReward_o *v24; // x8
  ServantRewardAction_o *servantRewardAction; // x20
  System_Action_o *_9__1; // x21
  int32_t v27; // w2
  int32_t v28; // w3

  v2 = this;
  if ( (byte_49FAF48 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, v3);
    sub_1B640C8(&SoundManager_TypeInfo, v4);
    this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)sub_1B640C8(
                                                                  &Method_TitleInfoEventTowerReward___c__DisplayClass39_0__StartRewardAction_sub_b__1__,
                                                                  v5);
    byte_49FAF48 = 1;
  }
  rewardInfo = v2->fields.rewardInfo;
  if ( !rewardInfo )
    goto LABEL_30;
  this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)Gift__IsServant_37376332(rewardInfo->fields.type, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    _4__this = v2->fields.__4__this;
    this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
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
          sub_1B6406C(
            (ServantStatusBattleListViewItem_o *)&_4__this->fields.servantRewardAction,
            (int32_t)this,
            v10,
            v11);
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
                ServantRewardAction__Setup_34310200((ServantRewardAction_o *)this, v2->fields.rewardInfo, v13, 0LL);
                goto LABEL_25;
              }
            }
          }
        }
      }
    }
LABEL_30:
    sub_1B64324(this);
  }
  v17 = v2->fields.rewardInfo;
  if ( !v17 )
    goto LABEL_30;
  this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)Gift__IsCommandCode_37376724(v17->fields.type, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v18 = v2->fields.__4__this;
    this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    if ( !v2->fields.__4__this )
      goto LABEL_30;
    v19 = this;
    v20 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v2->fields.__4__this, 0LL);
    this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)GameObjectExtensions__GetParent(v20, 0LL);
    if ( !v19 )
      goto LABEL_30;
    this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)SummonAssetManager__InstantiateSvtGetPrefab(
                                                                  (SummonAssetManager_o *)v19,
                                                                  (UnityEngine_Transform_o *)this,
                                                                  0,
                                                                  0LL);
    if ( !v18 )
      goto LABEL_30;
    v18->fields.servantRewardAction = (struct ServantRewardAction_o *)this;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v18->fields.servantRewardAction, (int32_t)this, v21, v22);
    v23 = v2->fields.__4__this;
    if ( !v23 )
      goto LABEL_30;
    this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)v23->fields.servantRewardAction;
    if ( !this )
      goto LABEL_30;
    ServantRewardAction__SetupCommandCode((ServantRewardAction_o *)this, v2->fields.rewardInfo, 6, 0LL);
  }
LABEL_25:
  v24 = v2->fields.__4__this;
  if ( !v24 )
    goto LABEL_30;
  servantRewardAction = v24->fields.servantRewardAction;
  _9__1 = v2->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v15, v16);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v2,
      Method_TitleInfoEventTowerReward___c__DisplayClass39_0__StartRewardAction_sub_b__1__,
      0LL);
    v2->fields.__9__1 = _9__1;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v2->fields.__9__1, (int32_t)_9__1, v27, v28);
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
  if ( (byte_49FAF49 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)sub_1B640C8(
                                                                  &Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__,
                                                                  v3);
    byte_49FAF49 = 1;
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
  UnityEngine_Object__DestroyImmediate_69127924(gameObject, 0LL);
  this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  if ( !this
    || (SummonAssetManager__UnloadSummonAssets((SummonAssetManager_o *)this, 0LL),
        (this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)v2->fields.__4__this) == 0LL) )
  {
LABEL_10:
    sub_1B64324(this);
  }
  TitleInfoEventTowerReward__StartRewardAction_sub(
    (TitleInfoEventTowerReward_o *)this,
    v2->fields.rewardInfoList,
    v2->fields.idx + 1,
    v2->fields.subEndAction,
    v6);
}