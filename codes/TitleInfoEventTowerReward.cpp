void __fastcall TitleInfoEventTowerReward___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  int64_t v14; // x1
  struct TitleInfoEventTowerReward_StaticFields *static_fields; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int64_t v22; // x1
  struct TitleInfoEventTowerReward_StaticFields *v23; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7

  if ( (byte_4B14CB7 & 1) == 0 )
  {
    sub_1BCA7E0(&TitleInfoEventTowerReward_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_24257/*"tower_{0}_{1}"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_17410/*"bit_floor_reward"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_3155/*"Back/back{0:D5}"*/, v12, v13);
    byte_4B14CB7 = 1;
  }
  TitleInfoEventTowerReward_TypeInfo->static_fields->SPRITE_NAME_TOWER = (struct System_String_o *)StringLiteral_24257/*"tower_{0}_{1}"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)TitleInfoEventTowerReward_TypeInfo->static_fields,
    StringLiteral_24257/*"tower_{0}_{1}"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v14 = StringLiteral_3155/*"Back/back{0:D5}"*/;
  static_fields = TitleInfoEventTowerReward_TypeInfo->static_fields;
  static_fields->SPRITE_NAME_BG = (struct System_String_o *)StringLiteral_3155/*"Back/back{0:D5}"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->SPRITE_NAME_BG, v14, v16, v17, v18, v19, v20, v21);
  v22 = StringLiteral_17410/*"bit_floor_reward"*/;
  v23 = TitleInfoEventTowerReward_TypeInfo->static_fields;
  v23->CLIP_NAME_TOWER_REWARD = (struct System_String_o *)StringLiteral_17410/*"bit_floor_reward"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v23->CLIP_NAME_TOWER_REWARD, v22, v24, v25, v26, v27, v28, v29);
}


void __fastcall TitleInfoEventTowerReward___ctor(TitleInfoEventTowerReward_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall TitleInfoEventTowerReward__Close(TitleInfoEventTowerReward_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v9; // x1
  __int64 v10; // x1
  System_String_o *voiceName; // x21
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  struct System_String_o **p_voiceAssetName; // x20
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  System_String_o *v22; // x21
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  System_Action_o *v29; // x20
  const MethodInfo *v30; // x2

  if ( (byte_4B14CB4 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&SoundManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_TitleInfoEventTowerReward__Close_b__37_0__, v6, v7);
    byte_4B14CB4 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCAA3C(0LL, v9);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  if ( this->fields.voicePlayer )
  {
    voiceName = this->fields.voiceName;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v10);
    SoundManager__stopVoice_39419756(voiceName, 0.0, 0LL);
    this->fields.voicePlayer = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.voicePlayer, 0LL, v12, v13, v14, v15, v16, v17);
  }
  p_voiceAssetName = &this->fields.voiceAssetName;
  if ( !System_String__IsNullOrEmpty(this->fields.voiceAssetName, 0LL) )
  {
    v22 = *p_voiceAssetName;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v19);
    SoundManager__releaseAudioAssetStorage(v22, 0LL);
    *p_voiceAssetName = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.voiceAssetName, 0LL, v23, v24, v25, v26, v27, v28);
  }
  *(_QWORD *)&this->fields.selectVoiceIndex = 0LL;
  this->fields.playCnt = 0;
  v29 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v19, v20, v21);
  System_Action___ctor(v29, (Il2CppObject *)this, Method_TitleInfoEventTowerReward__Close_b__37_0__, 0LL);
  TitleInfoEventTowerReward__StartRewardAction(this, v29, v30);
}


void __fastcall TitleInfoEventTowerReward__EndItemGetEffectAction(
        TitleInfoEventTowerReward_o *this,
        System_Action_o *afterDetail,
        const MethodInfo *method)
{
  if ( !afterDetail )
    sub_1BCAA3C(this, 0LL);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))afterDetail->fields.m_target)(
    afterDetail->fields.original_method_info,
    *(_QWORD *)&afterDetail->fields.extra_arg);
}


void __fastcall TitleInfoEventTowerReward__EndPlayVoice(TitleInfoEventTowerReward_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  System_Collections_Generic_List_object__o *voiceList; // x0
  __int64 playCnt; // x8
  __int64 v8; // x8

  if ( (byte_4B14CB1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, method, v2);
    sub_1BCA7E0(&StringLiteral_10805/*"PlayVoice"*/, v4, v5);
    byte_4B14CB1 = 1;
  }
  if ( this->fields.playCnt < this->fields.maxPlayCnt )
  {
    voiceList = (System_Collections_Generic_List_object__o *)this->fields.voiceList;
    if ( !voiceList )
      goto LABEL_10;
    voiceList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                               voiceList,
                                                               this->fields.selectVoiceIndex,
                                                               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    if ( !voiceList )
      goto LABEL_10;
    playCnt = this->fields.playCnt;
    if ( (unsigned int)playCnt >= voiceList->fields._size )
      sub_1BCAA44(voiceList, method);
    v8 = *((_QWORD *)&voiceList->fields._syncRoot + playCnt);
    if ( !v8 )
LABEL_10:
      sub_1BCAA3C(voiceList, method);
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10805/*"PlayVoice"*/,
      *(float *)(v8 + 24),
      0LL);
  }
}


void __fastcall TitleInfoEventTowerReward__OnLoadEndBG(TitleInfoEventTowerReward_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppClass *klass; // x8
  UIStandFigureR_o *monitor; // x20
  int32_t v9; // w21
  int32_t data; // w22
  System_Action_o *v11; // x23

  v4 = (Il2CppObject *)this;
  if ( (byte_4B14CAD & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    this = (TitleInfoEventTowerReward_o *)sub_1BCA7E0(&Method_TitleInfoEventTowerReward_OnLoadEndSvt__, v5, v6);
    byte_4B14CAD = 1;
  }
  klass = v4[9].klass;
  if ( !klass
    || (monitor = (UIStandFigureR_o *)v4[4].monitor,
        v9 = *(&klass->_1.byval_arg.bits + 1),
        data = (int32_t)klass->_1.this_arg.data,
        v11 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3),
        System_Action___ctor(v11, v4, Method_TitleInfoEventTowerReward_OnLoadEndSvt__, 0LL),
        !monitor) )
  {
    sub_1BCAA3C(this, method);
  }
  UIStandFigureR__SetCharacter(monitor, v9, data, 1, 0, 0, v11, 0LL);
}


void __fastcall TitleInfoEventTowerReward__OnLoadEndSvt(TitleInfoEventTowerReward_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  TitleInfoEventTowerReward_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  struct EventTowerReward_o *eventTowerReward; // x8
  System_Collections_Generic_List_object__o *v28; // x20
  __int64 v29; // x2
  __int64 v30; // x3
  struct EventTowerReward_o *v31; // x8
  struct System_String_array *voiceIds; // x8
  TitleInfoEventTowerReward_o *v33; // x22
  __int64 v34; // x25
  System_Collections_Generic_List_object__o *v35; // x23
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  unsigned __int64 v42; // x23
  struct EventTowerReward_o *v43; // x8
  struct System_String_array *v44; // x9
  int size; // w25
  TitleInfoEventTowerReward_o *v46; // x22
  int32_t v47; // w23
  struct ExUITexture_o *bgSprite; // x8
  struct EventTowerReward_o *v49; // x9
  System_Collections_Generic_List_object__o *voiceList; // x24
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  struct System_Object_array *items; // x8
  _QWORD *v58; // x9
  __int64 v59; // x10
  TitleInfoEventTowerReward_o *v60; // x1
  Il2CppClass **v61; // x0
  struct EventTowerReward_o *v62; // x8
  System_String_o *VoiceAssetName_40580584; // x0
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  System_String_o *voiceAssetName; // x20
  __int64 v71; // x1
  __int64 v72; // x2
  __int64 v73; // x3
  System_Action_o *v74; // x21
  __int64 v75; // x1

  v4 = this;
  if ( (byte_4B14CAE & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantVoiceMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantVoiceData____AddRange__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, v17, v18);
    sub_1BCA7E0(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21, v22);
    sub_1BCA7E0(&SoundManager_TypeInfo, v23, v24);
    this = (TitleInfoEventTowerReward_o *)sub_1BCA7E0(
                                            &Method_TitleInfoEventTowerReward__OnLoadEndSvt_b__31_0__,
                                            v25,
                                            v26);
    byte_4B14CAE = 1;
  }
  eventTowerReward = v4->fields.eventTowerReward;
  if ( !eventTowerReward )
    goto LABEL_39;
  if ( eventTowerReward->fields.voiceIds )
  {
    v28 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_ServantVoiceData____TypeInfo,
                                                         method,
                                                         v2,
                                                         v3);
    System_Collections_Generic_List_object____ctor(
      v28,
      (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    this = (TitleInfoEventTowerReward_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_39;
    this = (TitleInfoEventTowerReward_o *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)this,
                                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
    v31 = v4->fields.eventTowerReward;
    if ( !v31 )
      goto LABEL_39;
    voiceIds = v31->fields.voiceIds;
    if ( !voiceIds )
      goto LABEL_39;
    v33 = this;
    v34 = *(_QWORD *)&voiceIds->max_length;
    v35 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_ServantVoiceData____TypeInfo,
                                                         method,
                                                         v29,
                                                         v30);
    System_Collections_Generic_List_object____ctor(
      v35,
      (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    v4->fields.voiceList = (struct System_Collections_Generic_List_ServantVoiceData____o *)v35;
    sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields.voiceList, (int64_t)v35, v36, v37, v38, v39, v40, v41);
    if ( (int)v34 >= 1 )
    {
      v42 = 0LL;
      while ( 1 )
      {
        v43 = v4->fields.eventTowerReward;
        if ( !v43 )
          break;
        v44 = v43->fields.voiceIds;
        if ( !v44 )
          break;
        if ( v42 >= v44->max_length )
LABEL_40:
          sub_1BCAA44(this, method);
        if ( !v33 )
          break;
        this = (TitleInfoEventTowerReward_o *)ServantVoiceMaster__getEntity_40602528(
                                                (ServantVoiceMaster_o *)v33,
                                                14,
                                                v43->fields.svtId,
                                                v43->fields.limitCount,
                                                v44->m_Items[v42],
                                                0LL);
        if ( this )
        {
          if ( !v28 )
            break;
          System_Collections_Generic_List_object___AddRange(
            v28,
            (System_Collections_Generic_IEnumerable_T__o *)this,
            (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_ServantVoiceData____AddRange__);
        }
        if ( (unsigned int)v34 == ++v42 )
          goto LABEL_18;
      }
LABEL_39:
      sub_1BCAA3C(this, method);
    }
LABEL_18:
    this = (TitleInfoEventTowerReward_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_39;
    this = (TitleInfoEventTowerReward_o *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)this,
                                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    if ( !v28 )
      goto LABEL_39;
    size = v28->fields._size;
    if ( size >= 1 )
    {
      v46 = this;
      v47 = 0;
      do
      {
        this = (TitleInfoEventTowerReward_o *)System_Collections_Generic_List_object___get_Item(
                                                v28,
                                                v47,
                                                (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
        if ( !this )
          goto LABEL_39;
        if ( !LODWORD(this->fields.m_CancellationTokenSource) )
          goto LABEL_40;
        bgSprite = this->fields.bgSprite;
        if ( !bgSprite )
          goto LABEL_39;
        v49 = v4->fields.eventTowerReward;
        if ( !v49 || !v46 )
          goto LABEL_39;
        this = (TitleInfoEventTowerReward_o *)VoicePlayCondMaster__isVoicePlay(
                                                (VoicePlayCondMaster_o *)v46,
                                                v49->fields.svtId,
                                                *(System_String_o **)&bgSprite->fields.m_CachedPtr,
                                                0LL,
                                                -1LL,
                                                -1,
                                                0LL,
                                                0LL,
                                                0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          voiceList = (System_Collections_Generic_List_object__o *)v4->fields.voiceList;
          this = (TitleInfoEventTowerReward_o *)System_Collections_Generic_List_object___get_Item(
                                                  v28,
                                                  v47,
                                                  (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
          if ( !voiceList )
            goto LABEL_39;
          items = voiceList->fields._items;
          v58 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
          ++voiceList->fields._version;
          if ( !items )
            goto LABEL_39;
          v59 = voiceList->fields._size;
          v60 = this;
          if ( (unsigned int)v59 >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              voiceList,
              (Il2CppObject *)this,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
          }
          else
          {
            v61 = &items->obj.klass + v59;
            voiceList->fields._size = v59 + 1;
            v61[4] = (Il2CppClass *)v60;
            sub_1BCA784((PartyOrganizationUtility_o *)(v61 + 4), (int64_t)v60, v51, v52, v53, v54, v55, v56);
          }
        }
      }
      while ( size != ++v47 );
    }
    v62 = v4->fields.eventTowerReward;
    if ( !v62 )
      goto LABEL_39;
    VoiceAssetName_40580584 = ServantVoiceEntity__getVoiceAssetName_40580584(v62->fields.svtId, 0LL);
    v4->fields.voiceAssetName = VoiceAssetName_40580584;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&v4->fields.voiceAssetName,
      (int64_t)VoiceAssetName_40580584,
      v64,
      v65,
      v66,
      v67,
      v68,
      v69);
    voiceAssetName = v4->fields.voiceAssetName;
    v74 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v71, v72, v73);
    System_Action___ctor(v74, (Il2CppObject *)v4, Method_TitleInfoEventTowerReward__OnLoadEndSvt_b__31_0__, 0LL);
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v75);
    SoundManager__loadAudioAssetStorage(voiceAssetName, v74, 1, 0LL);
  }
}


void __fastcall TitleInfoEventTowerReward__OnTouchDisp(TitleInfoEventTowerReward_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Component_o *screenTouchInfo; // x0
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  AvalonSceneManager_c *v15; // x8
  CommonUI_o *v16; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v18; // x21

  if ( (byte_4B14CB3 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7);
    sub_1BCA7E0(&Method_TitleInfoEventTowerReward__OnTouchDisp_b__36_0__, v8, v9);
    byte_4B14CB3 = 1;
  }
  screenTouchInfo = (UnityEngine_Component_o *)this->fields.screenTouchInfo;
  if ( !screenTouchInfo )
    goto LABEL_9;
  screenTouchInfo = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(screenTouchInfo, 0LL);
  if ( !screenTouchInfo )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)screenTouchInfo, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v15 = AvalonSceneManager_TypeInfo;
  v16 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v12);
    v15 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v15->static_fields->DEFAULT_FADE_TIME;
  v18 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v12, v13, v14);
  System_Action___ctor(v18, (Il2CppObject *)this, Method_TitleInfoEventTowerReward__OnTouchDisp_b__36_0__, 0LL);
  if ( !v16 )
LABEL_9:
    sub_1BCAA3C(screenTouchInfo, method);
  CommonUI__maskFadeout(v16, 1, DEFAULT_FADE_TIME, v18, 0LL);
  this->fields.state = 0;
}


void __fastcall TitleInfoEventTowerReward__Open(
        TitleInfoEventTowerReward_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x1
  __int64 v53; // x2
  TerminalPramsManager_c *v54; // x0
  struct EventTowerReward_o *eventTowerReward_k__BackingField; // x1
  struct EventTowerReward_o **p_eventTowerReward; // x20
  __int64 v57; // x1
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  TerminalPramsManager_c *v64; // x0
  struct QuestRewardInfo_array *resultEventTowerRewardInfo_k__BackingField; // x1
  __int64 v66; // x1
  struct EventTowerReward_o *eventTowerReward; // x8
  struct ScreenTouchInformationComponent_o **p_screenTouchInfo; // x22
  UnityEngine_Object_o *screenTouchInfo; // x23
  __int64 v70; // x1
  Il2CppObject *Instance; // x23
  __int64 transform; // x0
  Il2CppObject *Component_object; // x0
  int64_t v74; // x2
  int32_t v75; // w3
  System_String_o *v76; // x4
  BattleSetupInfo_o *v77; // x5
  FollowerInfo_o *v78; // x6
  PartyListViewItem_o *v79; // x7
  int64_t v80; // x2
  int32_t v81; // w3
  System_String_o *v82; // x4
  BattleSetupInfo_o *v83; // x5
  FollowerInfo_o *v84; // x6
  PartyListViewItem_o *v85; // x7
  __int64 v86; // x21
  TitleInfoEventTowerReward_c *v87; // x8
  int effectId; // w23
  System_String_o *CLIP_NAME_TOWER_REWARD; // x22
  System_String_o *FloorRewardPrefabName; // x0
  TitleInfoEventTowerReward_c *v91; // x0
  struct EventTowerReward_o *v92; // x8
  Il2CppObject *v93; // x0
  System_String_o *v94; // x0
  __int64 v95; // x1
  UnityEngine_Object_o *simpleAnimation; // x23
  System_String_o *v97; // x22
  bool v98; // w0
  __int64 v99; // x23
  __int64 v100; // x8
  __int64 v101; // x21
  __int64 v102; // x9
  SimpleAnimation_State_c **v103; // x10
  __int64 v104; // x0
  UnityEngine_Object_o *animation; // x23
  int towerId; // w8
  __int64 v107; // x22
  __int64 v108; // x1
  Il2CppObject *Item; // x21
  struct EventTowerReward_o *v110; // x8
  UILabel_o *floorLabel; // x21
  struct EventTowerReward_o *v112; // x8
  UILabel_o *v113; // x22
  UISprite_o *nameSprite; // x21
  System_String_o *v115; // x22
  Il2CppObject *v116; // x23
  Il2CppObject *v117; // x0
  __int64 v118; // x2
  __int64 v119; // x3
  int v120; // w26
  __int64 v121; // x21
  System_Text_StringBuilder_o *v122; // x22
  unsigned int i; // w27
  __int64 v124; // x23
  __int64 v125; // x23
  __int64 v126; // t1
  System_String_o *v127; // x0
  __int64 v128; // x1
  bool IsNullOrEmpty; // w23
  UILabel_o *rewardLabel; // x23
  _DWORD *v131; // x8
  int32_t v132; // w21
  struct EventTowerReward_o *v133; // x8
  System_String_o *SPRITE_NAME_BG; // x20
  Il2CppObject *v135; // x0
  System_String_o *v136; // x0
  ExUITexture_o *bgSprite; // x20
  System_String_o *v138; // x21
  __int64 v139; // x1
  __int64 v140; // x2
  __int64 v141; // x3
  System_Action_o *v142; // x22
  int32_t v143; // [xsp+0h] [xbp-80h] BYREF
  int eventId; // [xsp+4h] [xbp-7Ch] BYREF
  System_String_o *countText; // [xsp+8h] [xbp-78h] BYREF
  System_String_o *nameText; // [xsp+10h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4B14CAC & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventDetailMaster___, v10, v11);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventTowerMaster___, v12, v13);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_GiftMaster___, v14, v15);
    sub_1BCA7E0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v16, v17);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___, v18, v19);
    sub_1BCA7E0(&int_TypeInfo, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UIFont__get_Count__, v22, v23);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UIFont__get_Item__, v24, v25);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v26, v27);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v28, v29);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v30, v31);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v32, v33);
    sub_1BCA7E0(&SimpleAnimation_State_TypeInfo, v34, v35);
    sub_1BCA7E0(&System_Text_StringBuilder_TypeInfo, v36, v37);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v38, v39);
    sub_1BCA7E0(&Method_TitleInfoEventTowerReward_OnLoadEndBG__, v40, v41);
    sub_1BCA7E0(&TitleInfoEventTowerReward_TypeInfo, v42, v43);
    sub_1BCA7E0(&StringLiteral_43/*"\n"*/, v44, v45);
    sub_1BCA7E0(&StringLiteral_5818/*"EVENT_TOWER_REWARD_GET"*/, v46, v47);
    sub_1BCA7E0(&StringLiteral_10985/*"QUEST_CLEAR_COSTUME_GET"*/, v48, v49);
    sub_1BCA7E0(&StringLiteral_16290/*"_"*/, v50, v51);
    sub_1BCA7E0(&StringLiteral_5819/*"EVENT_TOWER_REWARD_GET_2"*/, v52, v53);
    byte_4B14CAC = 1;
  }
  nameText = 0LL;
  entity = 0LL;
  countText = 0LL;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, callback);
  if ( !byte_4B1337A )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, callback, method);
    byte_4B1337A = 1;
  }
  v54 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, callback);
    v54 = TerminalPramsManager_TypeInfo;
  }
  eventTowerReward_k__BackingField = v54->static_fields->_eventTowerReward_k__BackingField;
  this->fields.eventTowerReward = eventTowerReward_k__BackingField;
  p_eventTowerReward = &this->fields.eventTowerReward;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.eventTowerReward,
    (int64_t)eventTowerReward_k__BackingField,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !byte_4B13824 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v57, v58);
    byte_4B13824 = 1;
  }
  v64 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v57);
    v64 = TerminalPramsManager_TypeInfo;
  }
  resultEventTowerRewardInfo_k__BackingField = v64->static_fields->_resultEventTowerRewardInfo_k__BackingField;
  this->fields.resultEventTowerRewardInfo = resultEventTowerRewardInfo_k__BackingField;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.resultEventTowerRewardInfo,
    (int64_t)resultEventTowerRewardInfo_k__BackingField,
    v58,
    v59,
    v60,
    v61,
    v62,
    v63);
  eventTowerReward = this->fields.eventTowerReward;
  if ( !eventTowerReward || eventTowerReward->fields.eventId <= 0 )
  {
    ActionExtensions__Call(callback, 0LL);
    return;
  }
  p_screenTouchInfo = &this->fields.screenTouchInfo;
  screenTouchInfo = (UnityEngine_Object_o *)this->fields.screenTouchInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v66);
  if ( UnityEngine_Object__op_Equality(screenTouchInfo, 0LL, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    *p_screenTouchInfo = (struct ScreenTouchInformationComponent_o *)Component_object;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.screenTouchInfo,
      (int64_t)Component_object,
      v74,
      v75,
      v76,
      v77,
      v78,
      v79);
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
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.endCallback, (int64_t)callback, v80, v81, v82, v83, v84, v85);
  this->fields.state = 0;
  transform = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !transform )
    goto LABEL_134;
  transform = (__int64)DataManager__GetMasterData_object_(
                         (DataManager_o *)transform,
                         (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventTowerMaster___);
  if ( !*p_eventTowerReward || !transform )
    goto LABEL_134;
  transform = (__int64)EventTowerMaster__GetEntity(
                         (EventTowerMaster_o *)transform,
                         (*p_eventTowerReward)->fields.eventId,
                         (*p_eventTowerReward)->fields.towerId,
                         0LL);
  v86 = transform;
  v87 = TitleInfoEventTowerReward_TypeInfo;
  if ( !TitleInfoEventTowerReward_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventTowerReward_TypeInfo, v70);
    v87 = TitleInfoEventTowerReward_TypeInfo;
  }
  if ( !*p_eventTowerReward )
    goto LABEL_134;
  effectId = (*p_eventTowerReward)->fields.effectId;
  CLIP_NAME_TOWER_REWARD = v87->static_fields->CLIP_NAME_TOWER_REWARD;
  transform = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !transform )
    goto LABEL_134;
  transform = (__int64)DataManager__GetMasterData_object_(
                         (DataManager_o *)transform,
                         (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !*p_eventTowerReward || !transform )
    goto LABEL_134;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)transform,
         &entity,
         (*p_eventTowerReward)->fields.eventId,
         (const MethodInfo_31B2E94 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
    transform = (__int64)entity;
    if ( !entity )
      goto LABEL_134;
    FloorRewardPrefabName = EventDetailEntity__GetFloorRewardPrefabName((EventDetailEntity_o *)entity, 0LL);
    if ( FloorRewardPrefabName )
      CLIP_NAME_TOWER_REWARD = FloorRewardPrefabName;
  }
  v91 = TitleInfoEventTowerReward_TypeInfo;
  if ( !TitleInfoEventTowerReward_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventTowerReward_TypeInfo, v70);
    v91 = TitleInfoEventTowerReward_TypeInfo;
  }
  transform = System_String__op_Equality(CLIP_NAME_TOWER_REWARD, v91->static_fields->CLIP_NAME_TOWER_REWARD, 0LL);
  if ( (transform & 1) != 0 )
  {
    v92 = *p_eventTowerReward;
    if ( !*p_eventTowerReward )
      goto LABEL_134;
    if ( v92->fields.towerId == 2 && v92->fields.floor == 100 )
      effectId = 3;
  }
  eventId = effectId;
  v93 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId);
  v94 = System_String__Concat_62412232(
          (Il2CppObject *)CLIP_NAME_TOWER_REWARD,
          (Il2CppObject *)StringLiteral_16290/*"_"*/,
          v93,
          0LL);
  simpleAnimation = (UnityEngine_Object_o *)this->fields.simpleAnimation;
  v97 = v94;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v95);
  v98 = UnityEngine_Object__op_Inequality(simpleAnimation, 0LL, 0LL);
  if ( v98 )
    v99 = v86;
  else
    v99 = 0LL;
  if ( v98 )
  {
    transform = (__int64)this->fields.simpleAnimation;
    if ( transform )
    {
      transform = (__int64)SimpleAnimation__get_Item((SimpleAnimation_o *)transform, v97, 0LL);
      if ( transform )
      {
        v100 = *(_QWORD *)transform;
        v101 = transform;
        v102 = *(unsigned __int16 *)(*(_QWORD *)transform + 302LL);
        if ( *(_WORD *)(*(_QWORD *)transform + 302LL) )
        {
          v103 = (SimpleAnimation_State_c **)(*(_QWORD *)(v100 + 176) + 8LL);
          while ( *(v103 - 1) != SimpleAnimation_State_TypeInfo )
          {
            --v102;
            v103 += 2;
            if ( !v102 )
              goto LABEL_58;
          }
          v104 = v100 + 16LL * (*(_DWORD *)v103 + 14) + 312;
        }
        else
        {
LABEL_58:
          v104 = sub_1C1C7C0(transform, SimpleAnimation_State_TypeInfo, 14LL);
        }
        transform = (*(__int64 (__fastcall **)(__int64, _QWORD))v104)(v101, *(_QWORD *)(v104 + 8));
        if ( this->fields.simpleAnimation )
        {
          SimpleAnimation__set_clip(this->fields.simpleAnimation, (UnityEngine_AnimationClip_o *)transform, 0LL);
          transform = (__int64)this->fields.simpleAnimation;
          if ( transform )
          {
            v86 = v99;
LABEL_71:
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)transform, 0, 0LL);
            goto LABEL_72;
          }
        }
      }
    }
LABEL_134:
    sub_1BCAA3C(transform, v70);
  }
  animation = (UnityEngine_Object_o *)this->fields.animation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v70);
  transform = UnityEngine_Object__op_Inequality(animation, 0LL, 0LL);
  if ( (transform & 1) != 0 )
  {
    transform = (__int64)this->fields.animation;
    if ( !transform )
      goto LABEL_134;
    transform = (__int64)UnityEngine_Animation__GetClip((UnityEngine_Animation_o *)transform, v97, 0LL);
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
  v70 = (unsigned int)(towerId - 1);
  if ( towerId >= 1 )
    v107 = v86;
  else
    v107 = 0LL;
  if ( towerId >= 1 )
  {
    transform = (__int64)this->fields.floorNumFontList;
    if ( !transform )
      goto LABEL_134;
    if ( *(_DWORD *)(transform + 24) >= towerId )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)transform,
               v70,
               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_UIFont__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v108);
      transform = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Item, 0LL, 0LL);
      if ( (transform & 1) != 0 )
      {
        v110 = this->fields.eventTowerReward;
        if ( !v110 )
          goto LABEL_134;
        transform = (__int64)this->fields.floorNumFontList;
        if ( !transform )
          goto LABEL_134;
        floorLabel = this->fields.floorLabel;
        transform = (__int64)System_Collections_Generic_List_object___get_Item(
                               (System_Collections_Generic_List_object__o *)transform,
                               v110->fields.towerId - 1,
                               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_UIFont__get_Item__);
        if ( !floorLabel )
          goto LABEL_134;
        UILabel__set_bitmapFont(floorLabel, (UIFont_o *)transform, 0LL);
      }
      v86 = v107;
    }
  }
  v112 = this->fields.eventTowerReward;
  if ( !v112 )
    goto LABEL_134;
  v113 = this->fields.floorLabel;
  transform = (__int64)System_Int32__ToString((int)v112 + 24, 0LL);
  if ( !v113 )
    goto LABEL_134;
  UILabel__set_text(v113, (System_String_o *)transform, 0LL);
  if ( v86 )
  {
    transform = (__int64)TitleInfoEventTowerReward_TypeInfo;
    nameSprite = this->fields.nameSprite;
    if ( !TitleInfoEventTowerReward_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventTowerReward_TypeInfo, v70);
      transform = (__int64)TitleInfoEventTowerReward_TypeInfo;
    }
    if ( !*p_eventTowerReward )
      goto LABEL_134;
    v115 = **(System_String_o ***)(transform + 184);
    eventId = (*p_eventTowerReward)->fields.eventId;
    transform = j_il2cpp_value_box_0(int_TypeInfo, &eventId);
    if ( !*p_eventTowerReward )
      goto LABEL_134;
    v116 = (Il2CppObject *)transform;
    v143 = (*p_eventTowerReward)->fields.towerId;
    v117 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v143);
    transform = (__int64)System_String__Format_62415592(v115, v116, v117, 0LL);
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
  transform = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !transform )
    goto LABEL_134;
  transform = (__int64)DataManager__GetMasterData_object_(
                         (DataManager_o *)transform,
                         (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_GiftMaster___);
  if ( !*p_eventTowerReward )
    goto LABEL_134;
  if ( !transform )
    goto LABEL_134;
  transform = (__int64)GiftMaster__GetGiftListById((GiftMaster_o *)transform, (*p_eventTowerReward)->fields.giftId, 0LL);
  if ( !transform )
    goto LABEL_134;
  v120 = *(_DWORD *)(transform + 24);
  v121 = transform;
  if ( v120 < 1 )
    goto LABEL_129;
  v122 = (System_Text_StringBuilder_o *)sub_1BCAA2C(System_Text_StringBuilder_TypeInfo, v70, v118, v119);
  System_Text_StringBuilder___ctor(v122, 0LL);
  for ( i = 0; i != v120; ++i )
  {
    if ( i )
    {
      if ( !v122 )
        goto LABEL_134;
      transform = (__int64)System_Text_StringBuilder__Append_61563116(v122, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
    }
    if ( i >= *(_DWORD *)(v121 + 24) )
      goto LABEL_135;
    v124 = v121 + 8LL * (int)i;
    v126 = *(_QWORD *)(v124 + 32);
    v125 = v124 + 32;
    transform = v126;
    if ( !v126 )
      goto LABEL_134;
    GiftEntity__GetInfo((GiftEntity_o *)transform, &nameText, &countText, 0LL);
    if ( i >= *(_DWORD *)(v121 + 24) )
      goto LABEL_135;
    if ( !*(_QWORD *)v125 )
      goto LABEL_134;
    if ( *(_DWORD *)(*(_QWORD *)v125 + 20LL) == 9 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v70);
      v127 = (System_String_o *)StringLiteral_10985/*"QUEST_CLEAR_COSTUME_GET"*/;
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
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v128);
      if ( IsNullOrEmpty )
      {
LABEL_116:
        v127 = (System_String_o *)StringLiteral_5819/*"EVENT_TOWER_REWARD_GET_2"*/;
LABEL_117:
        transform = (__int64)LocalizationManager__Get(v127, 0LL);
        if ( !v122 )
          goto LABEL_134;
        transform = (__int64)System_Text_StringBuilder__AppendFormat(
                               v122,
                               (System_String_o *)transform,
                               (Il2CppObject *)nameText,
                               0LL);
        continue;
      }
    }
    transform = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_5818/*"EVENT_TOWER_REWARD_GET"*/, 0LL);
    if ( !v122 )
      goto LABEL_134;
    transform = (__int64)System_Text_StringBuilder__AppendFormat_61569468(
                           v122,
                           (System_String_o *)transform,
                           (Il2CppObject *)nameText,
                           (Il2CppObject *)countText,
                           0LL);
  }
  rewardLabel = this->fields.rewardLabel;
  transform = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v122->klass->vtable._3_ToString.method)(
                v122,
                v122->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  if ( !rewardLabel )
    goto LABEL_134;
  UILabel__set_text(rewardLabel, (System_String_o *)transform, 0LL);
  if ( !*(_DWORD *)(v121 + 24) )
LABEL_135:
    sub_1BCAA44(transform, v70);
  v131 = *(_DWORD **)(v121 + 32);
  if ( !v131 )
    goto LABEL_134;
  transform = (__int64)this->fields.itemIcon;
  if ( !transform )
    goto LABEL_134;
  v132 = v131[5];
  ItemIconComponent__SetGift_38855180((ItemIconComponent_o *)transform, v132, v131[6], v131[7], 0, 0LL);
  transform = (__int64)this->fields.imageFrame;
  if ( !transform )
    goto LABEL_134;
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)transform,
    (0x461u >> (v132 - 1)) & ((unsigned int)(v132 - 1) < 0xB),
    0LL);
LABEL_129:
  transform = (__int64)TitleInfoEventTowerReward_TypeInfo;
  if ( !TitleInfoEventTowerReward_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TitleInfoEventTowerReward_TypeInfo, v70);
  v133 = *p_eventTowerReward;
  if ( !*p_eventTowerReward )
    goto LABEL_134;
  SPRITE_NAME_BG = TitleInfoEventTowerReward_TypeInfo->static_fields->SPRITE_NAME_BG;
  eventId = v133->fields.bgId;
  v135 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId);
  v136 = System_String__Format(SPRITE_NAME_BG, v135, 0LL);
  bgSprite = this->fields.bgSprite;
  v138 = v136;
  v142 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v139, v140, v141);
  System_Action___ctor(v142, (Il2CppObject *)this, Method_TitleInfoEventTowerReward_OnLoadEndBG__, 0LL);
  if ( !bgSprite )
    goto LABEL_134;
  ExUITexture__SetAssetImage(bgSprite, v138, v142, 0LL);
}


void __fastcall TitleInfoEventTowerReward__PlayVoice(TitleInfoEventTowerReward_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  System_Collections_Generic_List_object__o *voiceList; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  __int64 playCnt; // x8
  ServantVoiceData_o *v20; // x20
  struct System_String_o *id; // x1
  struct EventTowerReward_o *eventTowerReward; // x8
  System_String_o *VoiceAssetName_40580584; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  SeManager_c *v27; // x8
  System_String_o *voiceName; // x21
  System_String_o *v29; // x22
  float DEFAULT_VOLUME; // s8
  System_Action_o *v31; // x23
  __int64 v32; // x1
  struct SePlayer_o *v33; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  UIStandFigureR_o *standFigure; // x21
  int32_t face; // w22
  float FadeTime; // s0

  if ( (byte_4B14CB0 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, v4, v5);
    sub_1BCA7E0(&SeManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&SoundManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_TitleInfoEventTowerReward_EndPlayVoice__, v10, v11);
    byte_4B14CB0 = 1;
  }
  voiceList = (System_Collections_Generic_List_object__o *)this->fields.voiceList;
  if ( !voiceList )
    goto LABEL_14;
  voiceList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                             voiceList,
                                                             this->fields.selectVoiceIndex,
                                                             (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
  if ( !voiceList )
    goto LABEL_14;
  playCnt = this->fields.playCnt;
  if ( (unsigned int)playCnt >= voiceList->fields._size )
    sub_1BCAA44(voiceList, method);
  v20 = (ServantVoiceData_o *)*((_QWORD *)&voiceList->fields._syncRoot + playCnt);
  if ( !v20 )
    goto LABEL_14;
  id = v20->fields.id;
  this->fields.voiceName = id;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.voiceName, (int64_t)id, v13, v14, v15, v16, v17, v18);
  eventTowerReward = this->fields.eventTowerReward;
  if ( !eventTowerReward )
    goto LABEL_14;
  VoiceAssetName_40580584 = ServantVoiceEntity__getVoiceAssetName_40580584(eventTowerReward->fields.svtId, 0LL);
  v27 = SeManager_TypeInfo;
  voiceName = this->fields.voiceName;
  v29 = VoiceAssetName_40580584;
  if ( !SeManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, v24);
    v27 = SeManager_TypeInfo;
  }
  DEFAULT_VOLUME = v27->static_fields->DEFAULT_VOLUME;
  v31 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v24, v25, v26);
  System_Action___ctor(v31, (Il2CppObject *)this, Method_TitleInfoEventTowerReward_EndPlayVoice__, 0LL);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v32);
  v33 = SoundManager__playVoice_39419392(v29, voiceName, DEFAULT_VOLUME, v31, 0LL);
  this->fields.voicePlayer = v33;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.voicePlayer, (int64_t)v33, v34, v35, v36, v37, v38, v39);
  standFigure = this->fields.standFigure;
  face = v20->fields.face;
  FadeTime = ServantVoiceData__GetFadeTime(v20, 0LL);
  if ( !standFigure )
LABEL_14:
    sub_1BCAA3C(voiceList, method);
  UIStandFigureR__SetFace(standFigure, face, FadeTime, 0LL);
  ++this->fields.playCnt;
}


void __fastcall TitleInfoEventTowerReward__StartRewardAction(
        TitleInfoEventTowerReward_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  __int64 v19; // x22
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  __int64 v26; // x2
  __int64 v27; // x3
  QuestRewardInfo_array *resultEventTowerRewardInfo; // x20
  System_Action_o *v29; // x22
  const MethodInfo *v30; // x4

  if ( (byte_4B14CB5 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&Method_TitleInfoEventTowerReward___c__DisplayClass38_0__StartRewardAction_b__0__, v6, v7);
    sub_1BCA7E0(&TitleInfoEventTowerReward___c__DisplayClass38_0_TypeInfo, v8, v9);
    byte_4B14CB5 = 1;
  }
  v10 = sub_1BCAA2C(TitleInfoEventTowerReward___c__DisplayClass38_0_TypeInfo, callback, method, v3);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    goto LABEL_8;
  *(_QWORD *)(v10 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v10 + 16), (int64_t)this, v13, v14, v15, v16, v17, v18);
  *(_QWORD *)(v10 + 24) = callback;
  v19 = v10 + 24;
  sub_1BCA784((PartyOrganizationUtility_o *)(v10 + 24), (int64_t)callback, v20, v21, v22, v23, v24, v25);
  resultEventTowerRewardInfo = this->fields.resultEventTowerRewardInfo;
  if ( resultEventTowerRewardInfo )
  {
    v29 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v12, v26, v27);
    System_Action___ctor(
      v29,
      (Il2CppObject *)v10,
      Method_TitleInfoEventTowerReward___c__DisplayClass38_0__StartRewardAction_b__0__,
      0LL);
    TitleInfoEventTowerReward__StartRewardAction_sub(this, resultEventTowerRewardInfo, 0, v29, v30);
    return;
  }
  if ( !*(_QWORD *)v19 )
LABEL_8:
    sub_1BCAA3C(v11, v12);
  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v19 + 24LL))(
    *(_QWORD *)(*(_QWORD *)v19 + 64LL),
    *(_QWORD *)(*(_QWORD *)v19 + 40LL));
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventTowerReward__StartRewardAction_sub(
        TitleInfoEventTowerReward_o *this,
        QuestRewardInfo_array *rewardInfoList,
        int32_t idx,
        System_Action_o *subEndAction,
        const MethodInfo *method)
{
  System_Action_o *v5; // x28
  int32_t v6; // w29
  QuestRewardInfo_array *v7; // x19
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x26
  Il2CppObject *IsServant_38401528; // x0
  __int64 v23; // x1
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  __int64 v36; // x19
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  __int64 v49; // x8
  __int64 v50; // x9
  int v51; // w10
  int64_t v52; // x1
  __int64 v53; // x19
  Il2CppObject *Entity; // x0
  Il2CppObject *v55; // x19
  Il2CppObject *Instance; // x19
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x3
  System_Action_o *v60; // x20

  v5 = subEndAction;
  v6 = idx;
  v7 = rewardInfoList;
  while ( 1 )
  {
    if ( (byte_4B14CB6 & 1) == 0 )
    {
      sub_1BCA7E0(&System_Action_TypeInfo, rewardInfoList, *(_QWORD *)&idx);
      sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v9, v10);
      sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11, v12);
      sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13, v14);
      sub_1BCA7E0(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, v15, v16);
      sub_1BCA7E0(&Method_TitleInfoEventTowerReward___c__DisplayClass39_0__StartRewardAction_sub_b__0__, v17, v18);
      sub_1BCA7E0(&TitleInfoEventTowerReward___c__DisplayClass39_0_TypeInfo, v19, v20);
      byte_4B14CB6 = 1;
    }
    v21 = sub_1BCAA2C(
            TitleInfoEventTowerReward___c__DisplayClass39_0_TypeInfo,
            rewardInfoList,
            *(_QWORD *)&idx,
            subEndAction);
    System_Object___ctor((Il2CppObject *)v21, 0LL);
    if ( !v21 )
      goto LABEL_24;
    *(_QWORD *)(v21 + 24) = this;
    sub_1BCA784((PartyOrganizationUtility_o *)(v21 + 24), (int64_t)this, v24, v25, v26, v27, v28, v29);
    *(_QWORD *)(v21 + 32) = v7;
    sub_1BCA784((PartyOrganizationUtility_o *)(v21 + 32), (int64_t)v7, v30, v31, v32, v33, v34, v35);
    *(_QWORD *)(v21 + 48) = v5;
    v36 = v21 + 48;
    *(_DWORD *)(v21 + 40) = v6;
    sub_1BCA784((PartyOrganizationUtility_o *)(v21 + 48), (int64_t)v5, v37, v38, v39, v40, v41, v42);
    v49 = *(_QWORD *)(v21 + 32);
    if ( !v49 )
      goto LABEL_24;
    v50 = *(int *)(v21 + 40);
    v51 = *(_DWORD *)(v49 + 24);
    if ( (int)v50 >= v51 )
    {
      if ( *(_QWORD *)v36 )
      {
        (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v36 + 24LL))(
          *(_QWORD *)(*(_QWORD *)v36 + 64LL),
          *(_QWORD *)(*(_QWORD *)v36 + 40LL));
        return;
      }
      goto LABEL_24;
    }
    if ( (unsigned int)v50 >= v51 )
      sub_1BCAA44(IsServant_38401528, v23);
    v52 = *(_QWORD *)(v49 + 8 * v50 + 32);
    *(_QWORD *)(v21 + 16) = v52;
    v53 = v21 + 16;
    sub_1BCA784((PartyOrganizationUtility_o *)(v21 + 16), v52, v43, v44, v45, v46, v47, v48);
    if ( !*(_QWORD *)(v21 + 16) )
      goto LABEL_24;
    IsServant_38401528 = (Il2CppObject *)Gift__IsServant_38401528(*(_DWORD *)(*(_QWORD *)(v21 + 16) + 16LL), 0LL);
    if ( ((unsigned __int8)IsServant_38401528 & 1) == 0 )
      break;
    IsServant_38401528 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !IsServant_38401528 )
      goto LABEL_24;
    IsServant_38401528 = DataManager__GetMasterData_object_(
                           (DataManager_o *)IsServant_38401528,
                           (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !*(_QWORD *)v53 || !IsServant_38401528 )
      goto LABEL_24;
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)IsServant_38401528,
               *(_DWORD *)(*(_QWORD *)v53 + 20LL),
               (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( Entity )
    {
      v55 = Entity;
      if ( !SvtType__IsCombineMaterial(HIDWORD(Entity[5].klass), 0LL)
        && !SvtType__IsStatusUp(HIDWORD(v55[5].klass), 0LL) )
      {
        goto LABEL_22;
      }
    }
LABEL_19:
    v7 = *(QuestRewardInfo_array **)(v21 + 32);
    v5 = *(System_Action_o **)(v21 + 48);
    v6 = *(_DWORD *)(v21 + 40) + 1;
  }
  if ( !*(_QWORD *)v53 )
    goto LABEL_24;
  if ( !Gift__IsCommandCode_38401920(*(_DWORD *)(*(_QWORD *)v53 + 16LL), 0LL) )
    goto LABEL_19;
LABEL_22:
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  v60 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v57, v58, v59);
  System_Action___ctor(
    v60,
    (Il2CppObject *)v21,
    Method_TitleInfoEventTowerReward___c__DisplayClass39_0__StartRewardAction_sub_b__0__,
    0LL);
  if ( !Instance )
LABEL_24:
    sub_1BCAA3C(IsServant_38401528, v23);
  SummonAssetManager__LoadSummonAssets((SummonAssetManager_o *)Instance, v60, 0LL);
}


void __fastcall TitleInfoEventTowerReward__StartVoice(TitleInfoEventTowerReward_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  TitleInfoEventTowerReward_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceList; // x8
  System_Random_o *v10; // x20
  struct System_Collections_Generic_List_ServantVoiceData____o *v11; // x8
  System_Collections_Generic_List_object__o *v12; // x8

  v4 = this;
  if ( (byte_4B14CAF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, v5, v6);
    this = (TitleInfoEventTowerReward_o *)sub_1BCA7E0(&System_Random_TypeInfo, v7, v8);
    byte_4B14CAF = 1;
  }
  voiceList = v4->fields.voiceList;
  if ( !voiceList )
    goto LABEL_11;
  if ( voiceList->fields._size )
  {
    v10 = (System_Random_o *)sub_1BCAA2C(System_Random_TypeInfo, method, v2, v3);
    System_Random___ctor(v10, 0LL);
    v11 = v4->fields.voiceList;
    if ( v11 )
    {
      if ( v10 )
      {
        this = (TitleInfoEventTowerReward_o *)((__int64 (__fastcall *)(System_Random_o *, _QWORD, Il2CppMethodPointer))v10->klass->vtable._7_Next.method)(
                                                v10,
                                                (unsigned int)v11->fields._size,
                                                v10->klass->vtable._8_NextDouble.methodPtr);
        v12 = (System_Collections_Generic_List_object__o *)v4->fields.voiceList;
        v4->fields.selectVoiceIndex = (int)this;
        if ( v12 )
        {
          this = (TitleInfoEventTowerReward_o *)System_Collections_Generic_List_object___get_Item(
                                                  v12,
                                                  (int32_t)this,
                                                  (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
          if ( this )
          {
            *(_QWORD *)&v4->fields.maxPlayCnt = (unsigned int)this->fields.m_CancellationTokenSource;
            TitleInfoEventTowerReward__PlayVoice(v4, method);
            return;
          }
        }
      }
    }
LABEL_11:
    sub_1BCAA3C(this, method);
  }
}


void __fastcall TitleInfoEventTowerReward__Update(TitleInfoEventTowerReward_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  int32_t state; // w8
  UnityEngine_Object_o *simpleAnimation; // x20
  UnityEngine_Object_o *monitor; // x0
  __int64 v11; // x1
  struct SimpleAnimation_o *v12; // x20
  System_String_o *name; // x0
  UnityEngine_Object_c *klass; // x8
  UnityEngine_Object_o *v15; // x20
  __int64 v16; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v18; // x0
  const MethodInfo *v19; // x1
  UnityEngine_Object_o *animation; // x20
  UnityEngine_Animation_o *v21; // x20
  System_String_o *v22; // x0
  UnityEngine_AnimationState_o *v23; // x20
  float time; // s8
  long double v25; // q0
  UnityEngine_Object_c *v26; // x8
  __int64 v27; // x9
  SimpleAnimation_State_c **v28; // x10
  __int64 v29; // x0

  if ( (byte_4B14CB2 & 1) == 0 )
  {
    sub_1BCA7E0(&CTouch_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    sub_1BCA7E0(&SimpleAnimation_State_TypeInfo, v6, v7);
    byte_4B14CB2 = 1;
  }
  state = this->fields.state;
  if ( state != 2 )
  {
    if ( state != 1 )
      return;
    simpleAnimation = (UnityEngine_Object_o *)this->fields.simpleAnimation;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    monitor = (UnityEngine_Object_o *)UnityEngine_Object__op_Inequality(simpleAnimation, 0LL, 0LL);
    if ( ((unsigned __int8)monitor & 1) != 0 )
    {
      v12 = this->fields.simpleAnimation;
      if ( !v12 )
        goto LABEL_41;
      monitor = (UnityEngine_Object_o *)v12[1].monitor;
      if ( !monitor )
        goto LABEL_41;
      name = UnityEngine_Object__get_name(monitor, 0LL);
      monitor = (UnityEngine_Object_o *)SimpleAnimation__get_Item(v12, name, 0LL);
      if ( !monitor )
        goto LABEL_41;
      klass = monitor->klass;
      v15 = monitor;
      v16 = *(unsigned __int16 *)(&monitor->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&monitor->klass->_2.bitflags2 + 3) )
      {
        p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v16;
          p_offset += 2;
          if ( !v16 )
            goto LABEL_15;
        }
        v18 = (__int64)(&klass->vtable._3_ToString.method + 2 * *(_DWORD *)p_offset);
      }
      else
      {
LABEL_15:
        v18 = sub_1C1C7C0(monitor, SimpleAnimation_State_TypeInfo, 3LL);
      }
      v25 = ((long double (__fastcall *)(UnityEngine_Object_o *, _QWORD))*(_QWORD *)v18)(v15, *(_QWORD *)(v18 + 8));
      v26 = v15->klass;
      time = *(float *)&v25;
      v27 = *(unsigned __int16 *)(&v15->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v15->klass->_2.bitflags2 + 3) )
      {
        v28 = (SimpleAnimation_State_c **)&v26->_1.interfaceOffsets->offset;
        while ( *(v28 - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v27;
          v28 += 2;
          if ( !v27 )
            goto LABEL_33;
        }
        v29 = (__int64)(&v26[1]._1.implementedInterfaces + 2 * *(_DWORD *)v28);
      }
      else
      {
LABEL_33:
        v29 = sub_1C1C7C0(v15, SimpleAnimation_State_TypeInfo, 14LL);
      }
      monitor = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(UnityEngine_Object_o *, _QWORD))v29)(
                                          v15,
                                          *(_QWORD *)(v29 + 8));
      if ( !monitor )
        goto LABEL_41;
    }
    else
    {
      animation = (UnityEngine_Object_o *)this->fields.animation;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
      monitor = (UnityEngine_Object_o *)UnityEngine_Object__op_Inequality(animation, 0LL, 0LL);
      if ( ((unsigned __int8)monitor & 1) == 0 )
        goto LABEL_37;
      v21 = this->fields.animation;
      if ( !v21 )
        goto LABEL_41;
      monitor = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(this->fields.animation, 0LL);
      if ( !monitor )
        goto LABEL_41;
      v22 = UnityEngine_Object__get_name(monitor, 0LL);
      monitor = (UnityEngine_Object_o *)UnityEngine_Animation__get_Item(v21, v22, 0LL);
      if ( !monitor )
        goto LABEL_41;
      v23 = (UnityEngine_AnimationState_o *)monitor;
      time = UnityEngine_AnimationState__get_time((UnityEngine_AnimationState_o *)monitor, 0LL);
      monitor = (UnityEngine_Object_o *)UnityEngine_AnimationState__get_clip(v23, 0LL);
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
    sub_1BCAA3C(monitor, v11);
  }
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, method);
  if ( CTouch__isTouchPush(0LL) )
    TitleInfoEventTowerReward__OnTouchDisp(this, v19);
}


void __fastcall TitleInfoEventTowerReward___Close_b__37_0(TitleInfoEventTowerReward_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  PartyOrganizationUtility_o *p_endCallback; // x0
  System_Action_o *v9; // x19
  struct System_Action_o *endCallback; // t1

  endCallback = this->fields.endCallback;
  p_endCallback = (PartyOrganizationUtility_o *)&this->fields.endCallback;
  v9 = endCallback;
  if ( endCallback )
  {
    p_endCallback->klass = 0LL;
    sub_1BCA784(p_endCallback, 0LL, v2, v3, v4, v5, v6, v7);
    ActionExtensions__Call(v9, 0LL);
  }
}


void __fastcall TitleInfoEventTowerReward___OnLoadEndSvt_b__31_0(
        TitleInfoEventTowerReward_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  CommonUI_o *Instance; // x0
  __int64 v19; // x1
  CommonUI_o *v20; // x20
  struct EventTowerReward_o *eventTowerReward; // x8
  struct EventTowerReward_o *v22; // x8
  System_String_o *m_CancellationTokenSource; // x20
  UnityEngine_Object_o *simpleAnimation; // x20
  struct SimpleAnimation_o *v25; // x8
  UnityEngine_Object_o *monitor; // x20
  struct SimpleAnimation_o *v27; // x20
  System_String_o *name; // x0
  UnityEngine_Object_o *animation; // x20
  __int64 v30; // x1
  UnityEngine_Object_o *clip; // x20
  UnityEngine_Animation_o *v32; // x20
  System_String_o *v33; // x0

  if ( (byte_4B14CB8 & 1) == 0 )
  {
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_BgmMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataMasterBase_BgmMaster__BgmEntity__int__GetEntity__, v6, v7);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13);
    sub_1BCA7E0(&SoundManager_TypeInfo, v14, v15);
    sub_1BCA7E0(&StringLiteral_13126/*"StartVoice"*/, v16, v17);
    byte_4B14CB8 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v20 = Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v19);
  if ( !v20 )
    goto LABEL_40;
  CommonUI__maskFadein(v20, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_13126/*"StartVoice"*/,
    this->fields.voiceStartTime,
    0LL);
  eventTowerReward = this->fields.eventTowerReward;
  if ( !eventTowerReward )
    goto LABEL_40;
  if ( eventTowerReward->fields.bgmId >= 1 )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_40;
    Instance = (CommonUI_o *)DataManager__GetMasterData_object_(
                               (DataManager_o *)Instance,
                               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_BgmMaster___);
    v22 = this->fields.eventTowerReward;
    if ( !v22 )
      goto LABEL_40;
    if ( !Instance )
      goto LABEL_40;
    Instance = (CommonUI_o *)DataMasterBase_object__object__int___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               v22->fields.bgmId,
                               (const MethodInfo_31B2E40 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__GetEntity__);
    if ( !Instance )
      goto LABEL_40;
    m_CancellationTokenSource = (System_String_o *)Instance->fields.m_CancellationTokenSource;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v19);
    SoundManager__playBgm(m_CancellationTokenSource, 0LL);
  }
  simpleAnimation = (UnityEngine_Object_o *)this->fields.simpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
  if ( UnityEngine_Object__op_Inequality(simpleAnimation, 0LL, 0LL) )
  {
    Instance = (CommonUI_o *)this->fields.simpleAnimation;
    if ( !Instance )
      goto LABEL_40;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 1, 0LL);
    v25 = this->fields.simpleAnimation;
    if ( !v25 )
      goto LABEL_40;
    monitor = (UnityEngine_Object_o *)v25[1].monitor;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
    Instance = (CommonUI_o *)UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      v27 = this->fields.simpleAnimation;
      if ( v27 )
      {
        Instance = (CommonUI_o *)v27[1].monitor;
        if ( Instance )
        {
          name = UnityEngine_Object__get_name((UnityEngine_Object_o *)Instance, 0LL);
          SimpleAnimation__Play_64539336(v27, name, 0LL);
          goto LABEL_37;
        }
      }
LABEL_40:
      sub_1BCAA3C(Instance, v19);
    }
  }
  else
  {
    animation = (UnityEngine_Object_o *)this->fields.animation;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
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
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v30);
      Instance = (CommonUI_o *)UnityEngine_Object__op_Inequality(clip, 0LL, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        v32 = this->fields.animation;
        if ( v32 )
        {
          Instance = (CommonUI_o *)UnityEngine_Animation__get_clip(this->fields.animation, 0LL);
          if ( Instance )
          {
            v33 = UnityEngine_Object__get_name((UnityEngine_Object_o *)Instance, 0LL);
            UnityEngine_Animation__Play_69899248(v32, v33, 0LL);
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
    sub_1BCAA3C(this, method);
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
  __int64 v2; // x2
  TitleInfoEventTowerReward___c__DisplayClass39_0_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  struct QuestRewardInfo_o *rewardInfo; // x8
  struct TitleInfoEventTowerReward_o *_4__this; // x20
  TitleInfoEventTowerReward___c__DisplayClass39_0_o *v12; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  struct QuestRewardInfo_o *v20; // x8
  int32_t v21; // w20
  struct TitleInfoEventTowerReward_o *v22; // x8
  __int64 v23; // x2
  __int64 v24; // x3
  struct QuestRewardInfo_o *v25; // x8
  struct TitleInfoEventTowerReward_o *v26; // x20
  TitleInfoEventTowerReward___c__DisplayClass39_0_o *v27; // x21
  UnityEngine_GameObject_o *v28; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  struct TitleInfoEventTowerReward_o *v35; // x8
  struct TitleInfoEventTowerReward_o *v36; // x8
  ServantRewardAction_o *servantRewardAction; // x20
  System_Action_o *_9__1; // x21
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7

  v3 = this;
  if ( (byte_4B14CB9 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, v4, v5);
    sub_1BCA7E0(&SoundManager_TypeInfo, v6, v7);
    this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)sub_1BCA7E0(
                                                                  &Method_TitleInfoEventTowerReward___c__DisplayClass39_0__StartRewardAction_sub_b__1__,
                                                                  v8,
                                                                  v9);
    byte_4B14CB9 = 1;
  }
  rewardInfo = v3->fields.rewardInfo;
  if ( !rewardInfo )
    goto LABEL_30;
  this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)Gift__IsServant_38401528(rewardInfo->fields.type, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    _4__this = v3->fields.__4__this;
    this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    if ( v3->fields.__4__this )
    {
      v12 = this;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v3->fields.__4__this, 0LL);
      this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)GameObjectExtensions__GetParent(gameObject, 0LL);
      if ( v12 )
      {
        this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)SummonAssetManager__InstantiateSvtGetPrefab(
                                                                      (SummonAssetManager_o *)v12,
                                                                      (UnityEngine_Transform_o *)this,
                                                                      0,
                                                                      0LL);
        if ( _4__this )
        {
          _4__this->fields.servantRewardAction = (struct ServantRewardAction_o *)this;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&_4__this->fields.servantRewardAction,
            (int64_t)this,
            v14,
            v15,
            v16,
            v17,
            v18,
            v19);
          v20 = v3->fields.rewardInfo;
          if ( v20 )
          {
            if ( v20->fields.isSkipSvtDetail )
              v21 = 38;
            else
              v21 = 6;
            if ( !SoundManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, method);
            SoundManager__stopBgm(0LL);
            v22 = v3->fields.__4__this;
            if ( v22 )
            {
              this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)v22->fields.servantRewardAction;
              if ( this )
              {
                ServantRewardAction__Setup_35298824((ServantRewardAction_o *)this, v3->fields.rewardInfo, v21, 0LL);
                goto LABEL_25;
              }
            }
          }
        }
      }
    }
LABEL_30:
    sub_1BCAA3C(this, method);
  }
  v25 = v3->fields.rewardInfo;
  if ( !v25 )
    goto LABEL_30;
  this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)Gift__IsCommandCode_38401920(v25->fields.type, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v26 = v3->fields.__4__this;
    this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    if ( !v3->fields.__4__this )
      goto LABEL_30;
    v27 = this;
    v28 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v3->fields.__4__this, 0LL);
    this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)GameObjectExtensions__GetParent(v28, 0LL);
    if ( !v27 )
      goto LABEL_30;
    this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)SummonAssetManager__InstantiateSvtGetPrefab(
                                                                  (SummonAssetManager_o *)v27,
                                                                  (UnityEngine_Transform_o *)this,
                                                                  0,
                                                                  0LL);
    if ( !v26 )
      goto LABEL_30;
    v26->fields.servantRewardAction = (struct ServantRewardAction_o *)this;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&v26->fields.servantRewardAction,
      (int64_t)this,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
    v35 = v3->fields.__4__this;
    if ( !v35 )
      goto LABEL_30;
    this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)v35->fields.servantRewardAction;
    if ( !this )
      goto LABEL_30;
    ServantRewardAction__SetupCommandCode((ServantRewardAction_o *)this, v3->fields.rewardInfo, 6, 0LL);
  }
LABEL_25:
  v36 = v3->fields.__4__this;
  if ( !v36 )
    goto LABEL_30;
  servantRewardAction = v36->fields.servantRewardAction;
  _9__1 = v3->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v23, v24);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v3,
      Method_TitleInfoEventTowerReward___c__DisplayClass39_0__StartRewardAction_sub_b__1__,
      0LL);
    v3->fields.__9__1 = _9__1;
    sub_1BCA784((PartyOrganizationUtility_o *)&v3->fields.__9__1, (int64_t)_9__1, v39, v40, v41, v42, v43, v44);
  }
  if ( !servantRewardAction )
    goto LABEL_30;
  ServantRewardAction__Play(servantRewardAction, _9__1, 0.0, 0LL);
}


void __fastcall TitleInfoEventTowerReward___c__DisplayClass39_0___StartRewardAction_sub_b__1(
        TitleInfoEventTowerReward___c__DisplayClass39_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  TitleInfoEventTowerReward___c__DisplayClass39_0_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  struct TitleInfoEventTowerReward_o *_4__this; // x8
  __int64 v7; // x1
  UnityEngine_Object_o *gameObject; // x20
  const MethodInfo *v9; // x4

  v3 = this;
  if ( (byte_4B14CBA & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)sub_1BCA7E0(
                                                                  &Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__,
                                                                  v4,
                                                                  v5);
    byte_4B14CBA = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    goto LABEL_10;
  this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)_4__this->fields.servantRewardAction;
  if ( !this )
    goto LABEL_10;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  UnityEngine_Object__DestroyImmediate_70154432(gameObject, 0LL);
  this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  if ( !this
    || (SummonAssetManager__UnloadSummonAssets((SummonAssetManager_o *)this, 0LL),
        (this = (TitleInfoEventTowerReward___c__DisplayClass39_0_o *)v3->fields.__4__this) == 0LL) )
  {
LABEL_10:
    sub_1BCAA3C(this, method);
  }
  TitleInfoEventTowerReward__StartRewardAction_sub(
    (TitleInfoEventTowerReward_o *)this,
    v3->fields.rewardInfoList,
    v3->fields.idx + 1,
    v3->fields.subEndAction,
    v9);
}