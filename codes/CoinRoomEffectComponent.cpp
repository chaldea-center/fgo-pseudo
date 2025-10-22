void CoinRoomEffectComponent___ctor(CoinRoomEffectComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w1
  System_Collections_Generic_Dictionary_int__object__o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w1
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4C5AA47 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin___ctor__);
    sub_1C3E564(&System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__TypeInfo);
    sub_1C3E564(&StringLiteral_16867/*"ar154"*/);
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C5AA47 = 1;
  }
  v5 = StringLiteral_16867/*"ar154"*/;
  this->fields.arrivedPlaySeName = (struct System_String_o *)StringLiteral_16867/*"ar154"*/;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.arrivedPlaySeName, v5, v2, v3);
  *(_QWORD *)&this->fields.arrivedPlaySeIntervalTime = 0x3E83D4CCCCDLL;
  this->fields.TARGET_ITEM_ID = 7999;
  v6 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C3E7B0(System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v6,
    (const MethodInfo_340BA68 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin___ctor__);
  this->fields.selectedCoinDic = (struct System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *)v6;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.selectedCoinDic, (int32_t)v6, v7, v8);
  v9 = StringLiteral_1/*""*/;
  this->fields.stateName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.stateName, v9, v10, v11);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


UnityEngine_ParticleSystem_EmissionModule_o CoinRoomEffectComponent__GetEmissionModule(
        CoinRoomEffectComponent_o *this,
        UnityEngine_GameObject_o *targetObject,
        const MethodInfo *method)
{
  if ( (byte_4C5AA44 & 1) == 0 )
  {
    this = (CoinRoomEffectComponent_o *)sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_ParticleSystem___);
    byte_4C5AA44 = 1;
  }
  if ( !targetObject
    || (this = (CoinRoomEffectComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                              targetObject,
                                              (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_ParticleSystem___)) == 0 )
  {
    sub_1C3E7C0(this, targetObject);
  }
  return UnityEngine_ParticleSystem__get_emission((UnityEngine_ParticleSystem_o *)this, 0);
}


void CoinRoomEffectComponent__NextAcquiredEffect(CoinRoomEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  UnityEngine_GameObject_o *acquiredEffect; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  QuestRewardInfo_o *v8; // x21
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  _DWORD *v11; // x8
  int32_t TARGET_ITEM_ID; // w9
  Il2CppObject *Instance; // x19
  System_Action_o *v14; // x21

  if ( (byte_4C5AA45 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&QuestRewardInfo_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C3E564(&Method_CoinRoomEffectComponent___c__DisplayClass27_0__NextAcquiredEffect_b__0__);
    sub_1C3E564(&CoinRoomEffectComponent___c__DisplayClass27_0_TypeInfo);
    byte_4C5AA45 = 1;
  }
  v3 = sub_1C3E7B0(CoinRoomEffectComponent___c__DisplayClass27_0_TypeInfo);
  CoinRoomEffectComponent___c__DisplayClass27_0___ctor((CoinRoomEffectComponent___c__DisplayClass27_0_o *)v3, 0);
  if ( !v3 )
    goto LABEL_11;
  *(_QWORD *)(v3 + 16) = this;
  sub_1C3E508((CGThumbnailListItem_o *)(v3 + 16), (int32_t)this, v6, v7);
  if ( this->fields.state == 1 )
  {
    acquiredEffect = this->fields.acquiredEffect;
    if ( acquiredEffect )
    {
      UnityEngine_GameObject__SetActive(acquiredEffect, 1, 0);
      acquiredEffect = this->fields.acquiredEffect;
      this->fields.state = 1;
      if ( acquiredEffect )
      {
        UnityEngine_GameObject__SetActive(acquiredEffect, 1, 0);
        v8 = (QuestRewardInfo_o *)sub_1C3E7B0(QuestRewardInfo_TypeInfo);
        QuestRewardInfo___ctor(v8, 0);
        *(_QWORD *)(v3 + 24) = v8;
        sub_1C3E508((CGThumbnailListItem_o *)(v3 + 24), (int32_t)v8, v9, v10);
        v11 = *(_DWORD **)(v3 + 24);
        if ( v11 )
        {
          TARGET_ITEM_ID = this->fields.TARGET_ITEM_ID;
          v11[4] = 2;
          v11[5] = TARGET_ITEM_ID;
          v11[6] = 1;
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v14 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
          System_Action___ctor(
            v14,
            (Il2CppObject *)v3,
            Method_CoinRoomEffectComponent___c__DisplayClass27_0__NextAcquiredEffect_b__0__,
            0);
          if ( Instance )
          {
            CommonUI__LoadCoinRoomGetEffect((CommonUI_o *)Instance, v14, 0);
            return;
          }
        }
      }
    }
LABEL_11:
    sub_1C3E7C0(acquiredEffect, v5);
  }
}


void CoinRoomEffectComponent__OpenEffect(
        CoinRoomEffectComponent_o *this,
        UserCoinRoomEntity_o *beforeUserCoinRoomEntity,
        System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *selectedCoinDic,
        const MethodInfo *method)
{
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *Entity; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct UserCoinRoomEntity_o *afterEntity; // x8
  int32_t cnt; // w8
  __int64 *v19; // x8
  struct System_String_o *v20; // x1
  const MethodInfo *v21; // x1

  if ( (byte_4C5AA42 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_UserCoinRoomMaster___);
    sub_1C3E564(&Method_DataMasterBase_UserCoinRoomMaster__UserCoinRoomEntity__long__GetEntity__);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&SoundManager_TypeInfo);
    sub_1C3E564(&UserCoinRoomEntity_TypeInfo);
    sub_1C3E564(&StringLiteral_18950/*"effect_Circle_act2"*/);
    sub_1C3E564(&StringLiteral_18949/*"effect_Circle_act1"*/);
    byte_4C5AA42 = 1;
  }
  this->fields.state = 1;
  if ( !beforeUserCoinRoomEntity )
  {
    beforeUserCoinRoomEntity = (UserCoinRoomEntity_o *)sub_1C3E7B0(UserCoinRoomEntity_TypeInfo);
    UserCoinRoomEntity___ctor(beforeUserCoinRoomEntity, 0);
  }
  this->fields.beforeEntity = beforeUserCoinRoomEntity;
  sub_1C3E508(
    (CGThumbnailListItem_o *)&this->fields.beforeEntity,
    (int32_t)beforeUserCoinRoomEntity,
    (int32_t)selectedCoinDic,
    method);
  this->fields.selectedCoinDic = selectedCoinDic;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.selectedCoinDic, (int32_t)selectedCoinDic, v7, v8);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserCoinRoomMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C50AE2 )
  {
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C50AE2 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object
    || (Entity = DataMasterBase_object__object__long___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                   *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                   (const MethodInfo_33B54B4 *)Method_DataMasterBase_UserCoinRoomMaster__UserCoinRoomEntity__long__GetEntity__),
        this->fields.afterEntity = (struct UserCoinRoomEntity_o *)Entity,
        sub_1C3E508((CGThumbnailListItem_o *)&this->fields.afterEntity, (int32_t)Entity, v13, v14),
        (afterEntity = this->fields.afterEntity) == 0) )
  {
LABEL_20:
    sub_1C3E7C0(Instance, v10);
  }
  cnt = afterEntity->fields.cnt;
  this->fields.isAcquired = cnt == 0;
  if ( cnt )
    v19 = &StringLiteral_18949/*"effect_Circle_act1"*/;
  else
    v19 = &StringLiteral_18950/*"effect_Circle_act2"*/;
  v20 = (struct System_String_o *)*v19;
  this->fields.stateName = (struct System_String_o *)*v19;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.stateName, (int32_t)v20, v15, v16);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__stopBgm(0);
  CoinRoomEffectComponent__StartPutInAnimation(this, v21);
}


System_Collections_IEnumerator_o *CoinRoomEffectComponent__PlayCoinArrivedSE(
        CoinRoomEffectComponent_o *this,
        int32_t totalCount,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C5AA46 & 1) == 0 )
  {
    sub_1C3E564(&CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_TypeInfo);
    byte_4C5AA46 = 1;
  }
  v5 = sub_1C3E7B0(CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_TypeInfo);
  CoinRoomEffectComponent__PlayCoinArrivedSE_d__28___ctor(
    (CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_o *)v5,
    0,
    0);
  if ( !v5 )
    sub_1C3E7C0(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_1C3E508((CGThumbnailListItem_o *)(v5 + 32), (int32_t)this, v8, v9);
  *(_DWORD *)(v5 + 40) = totalCount;
  return (System_Collections_IEnumerator_o *)v5;
}


void CoinRoomEffectComponent__StartPutInAnimation(CoinRoomEffectComponent_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  int32_t v6; // w0
  CoinRoomEffectComponent___c_c *v7; // x8
  struct System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *selectedCoinDic; // x21
  int32_t v9; // w20
  System_Func_T__TResult__o *_9__25_0; // x22
  Il2CppObject *v11; // x23
  struct CoinRoomEffectComponent___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  UnityEngine_GameObject_o *coinListPanel; // x0
  __int64 v16; // x1
  int energyPartLoopRateOverTimeMax; // w22
  Il2CppObject *Component_object; // x0
  struct SimpleAnimation_o **p_circleAnimation; // x21
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  CoinRoomEffectComponent_o *v22; // x0
  const MethodInfo *v23; // x2
  UnityEngine_ParticleSystem_EmissionModule_o v24; // x0
  const MethodInfo *v25; // x2
  System_Collections_IEnumerator_o *v26; // x0
  struct UserCoinRoomEntity_o *afterEntity; // x8
  int32_t cnt; // w8
  int32_t v29; // w22
  const MethodInfo *v30; // x4
  struct UserCoinRoomEntity_o *beforeEntity; // x8
  struct UserCoinRoomEntity_o *v32; // x8
  UnityEngine_ParticleSystem_MinMaxCurve_o v33; // [xsp+0h] [xbp-90h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v34; // [xsp+28h] [xbp-68h] BYREF
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+48h] [xbp-48h] BYREF

  if ( (byte_4C5AA43 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_CoinRoomEffectComponent_NextAcquiredEffect__);
    sub_1C3E564(&CoinRoomUtility_TypeInfo);
    sub_1C3E564(&Method_System_Linq_Enumerable_Sum_KeyValuePair_int__SelectedUserSvtCoin____);
    sub_1C3E564(&System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__TypeInfo);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_CoinRoomControlEffect___);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_TitleInfoControl___);
    sub_1C3E564(&Method_CoinRoomEffectComponent___c__StartPutInAnimation_b__25_0__);
    sub_1C3E564(&CoinRoomEffectComponent___c_TypeInfo);
    byte_4C5AA43 = 1;
  }
  m_ParticleSystem = 0;
  v3 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_CoinRoomEffectComponent_NextAcquiredEffect__, 0);
  this->fields.endCallBack = v3;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.endCallBack, (int32_t)v3, v4, v5);
  if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
  v6 = CoinRoomUtility__MaxPoint(0);
  v7 = CoinRoomEffectComponent___c_TypeInfo;
  selectedCoinDic = this->fields.selectedCoinDic;
  v9 = v6;
  if ( !CoinRoomEffectComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomEffectComponent___c_TypeInfo);
    v7 = CoinRoomEffectComponent___c_TypeInfo;
  }
  _9__25_0 = (System_Func_T__TResult__o *)v7->static_fields->__9__25_0;
  if ( !_9__25_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = CoinRoomEffectComponent___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v7->static_fields->__9;
    _9__25_0 = (System_Func_T__TResult__o *)sub_1C3E7B0(System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__TypeInfo);
    System_Func_KeyValuePair_int__object___int____ctor(
      _9__25_0,
      v11,
      Method_CoinRoomEffectComponent___c__StartPutInAnimation_b__25_0__,
      0);
    static_fields = CoinRoomEffectComponent___c_TypeInfo->static_fields;
    static_fields->__9__25_0 = (struct System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__o *)_9__25_0;
    sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__25_0, (int32_t)_9__25_0, v13, v14);
  }
  coinListPanel = (UnityEngine_GameObject_o *)System_Linq_Enumerable__Sum_KeyValuePair_int__object__(
                                                (System_Collections_Generic_IEnumerable_TSource__o *)selectedCoinDic,
                                                (System_Func_TSource__int__o *)_9__25_0,
                                                (const MethodInfo_3137780 *)Method_System_Linq_Enumerable_Sum_KeyValuePair_int__SelectedUserSvtCoin____);
  if ( !this->fields.effectCircleObject )
    goto LABEL_31;
  energyPartLoopRateOverTimeMax = (int)coinListPanel;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       this->fields.effectCircleObject,
                       (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  this->fields.circleAnimation = (struct SimpleAnimation_o *)Component_object;
  p_circleAnimation = &this->fields.circleAnimation;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.circleAnimation, (int32_t)Component_object, v20, v21);
  coinListPanel = this->fields.coinListPanel;
  if ( !coinListPanel )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive(coinListPanel, 0, 0);
  coinListPanel = this->fields.lobbyPanel;
  if ( !coinListPanel )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive(coinListPanel, 0, 0);
  coinListPanel = this->fields.titleInfoObject;
  if ( !coinListPanel )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive(coinListPanel, 0, 0);
  coinListPanel = this->fields.titleInfoObject;
  if ( !coinListPanel )
    goto LABEL_31;
  coinListPanel = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                coinListPanel,
                                                (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_TitleInfoControl___);
  if ( !coinListPanel )
    goto LABEL_31;
  TitleInfoControl__SetHelpBtn((TitleInfoControl_o *)coinListPanel, 0, 0);
  MainMenuBar__setMenuActive(0, 0, 0);
  if ( energyPartLoopRateOverTimeMax >= this->fields.energyPartLoopRateOverTimeMax )
    energyPartLoopRateOverTimeMax = this->fields.energyPartLoopRateOverTimeMax;
  m_ParticleSystem = CoinRoomEffectComponent__GetEmissionModule(v22, this->fields.coinPartObject, v23).fields.m_ParticleSystem;
  UnityEngine_ParticleSystem_MinMaxCurve__op_Implicit(&v34, (float)energyPartLoopRateOverTimeMax, 0);
  v24.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
  v33 = v34;
  UnityEngine_ParticleSystem_EmissionModule__set_rateOverTime(v24, &v33, 0);
  v26 = CoinRoomEffectComponent__PlayCoinArrivedSE(this, energyPartLoopRateOverTimeMax, v25);
  coinListPanel = (UnityEngine_GameObject_o *)UnityEngine_MonoBehaviour__StartCoroutine_71327136(
                                                (UnityEngine_MonoBehaviour_o *)this,
                                                v26,
                                                0);
  afterEntity = this->fields.afterEntity;
  if ( !afterEntity )
    goto LABEL_31;
  cnt = afterEntity->fields.cnt;
  coinListPanel = this->fields.effectCircleObject;
  v29 = cnt ? cnt : v9;
  if ( !coinListPanel )
    goto LABEL_31;
  coinListPanel = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                coinListPanel,
                                                (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_CoinRoomControlEffect___);
  beforeEntity = this->fields.beforeEntity;
  if ( !beforeEntity
    || !coinListPanel
    || (CoinRoomControlEffect__SetValue(
          (CoinRoomControlEffect_o *)coinListPanel,
          beforeEntity->fields.cnt,
          v29,
          v9,
          v30),
        (coinListPanel = this->fields.gaugeObject) == 0)
    || (UnityEngine_GameObject__SetActive(coinListPanel, 1, 0), (v32 = this->fields.beforeEntity) == 0)
    || (coinListPanel = (UnityEngine_GameObject_o *)this->fields.gaugeSlider) == 0
    || (UIProgressBar__set_value((UIProgressBar_o *)coinListPanel, (float)v32->fields.cnt / (float)v9, 0),
        (coinListPanel = (UnityEngine_GameObject_o *)*p_circleAnimation) == 0) )
  {
LABEL_31:
    sub_1C3E7C0(coinListPanel, v16);
  }
  SimpleAnimation__Play_66582224((SimpleAnimation_o *)coinListPanel, this->fields.stateName, 0);
}


void CoinRoomEffectComponent__Update(CoinRoomEffectComponent_o *this, const MethodInfo *method)
{
  SimpleAnimation_o *circleAnimation; // x0
  SimpleAnimation_c *klass; // x8
  SimpleAnimation_o *v5; // x21
  __int64 v6; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  _BOOL4 isAcquired; // w8
  Il2CppObject *Instance; // x20
  CoinRoomUtility_c *v13; // x8
  float EFFECT_FADE_TIME; // s8
  System_Action_o *v15; // x21
  System_String_o *MainBgmName; // x19

  if ( (byte_4C5AA41 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&BgmManager_TypeInfo);
    sub_1C3E564(&Method_CoinRoomEffectComponent__Update_b__23_0__);
    sub_1C3E564(&CoinRoomUtility_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C3E564(&SoundManager_TypeInfo);
    sub_1C3E564(&SimpleAnimation_State_TypeInfo);
    byte_4C5AA41 = 1;
  }
  if ( !this->fields.endCallBack || this->fields.isEffectEnd )
    return;
  circleAnimation = this->fields.circleAnimation;
  if ( !circleAnimation
    || (circleAnimation = (SimpleAnimation_o *)SimpleAnimation__GetState(circleAnimation, this->fields.stateName, 0)) == 0 )
  {
LABEL_26:
    sub_1C3E7C0(circleAnimation, method);
  }
  klass = circleAnimation->klass;
  v5 = circleAnimation;
  v6 = *(unsigned __int16 *)&circleAnimation->klass->_2.rank;
  if ( *(_WORD *)&circleAnimation->klass->_2.rank )
  {
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v6;
      p_offset += 2;
      if ( !v6 )
        goto LABEL_11;
    }
    v8 = (__int64)(&klass->vtable._5_OnDisable + *(_DWORD *)p_offset);
  }
  else
  {
LABEL_11:
    v8 = sub_1C8ED7C(circleAnimation, SimpleAnimation_State_TypeInfo, 5);
  }
  if ( (*(float (__fastcall **)(SimpleAnimation_o *, _QWORD))v8)(v5, *(_QWORD *)(v8 + 8)) >= 0.95 )
  {
    isAcquired = this->fields.isAcquired;
    this->fields.isEffectEnd = 1;
    if ( isAcquired )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v13 = CoinRoomUtility_TypeInfo;
      if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
        v13 = CoinRoomUtility_TypeInfo;
      }
      EFFECT_FADE_TIME = v13->static_fields->EFFECT_FADE_TIME;
      v15 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
      System_Action___ctor(v15, (Il2CppObject *)this, Method_CoinRoomEffectComponent__Update_b__23_0__, 0);
      if ( Instance )
      {
        CommonUI__maskFadeout((CommonUI_o *)Instance, 2, EFFECT_FADE_TIME, v15, 0);
        return;
      }
    }
    else
    {
      this->fields.endCallBack = 0;
      sub_1C3E508((CGThumbnailListItem_o *)&this->fields.endCallBack, 0, v9, v10);
      this->fields.isEffectEnd = 0;
      this->fields.state = 2;
      if ( !BgmManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
      MainBgmName = BgmManager__GetMainBgmName(0, 0);
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      SoundManager__playBgm(MainBgmName, 0);
      circleAnimation = (SimpleAnimation_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( circleAnimation )
      {
        AvalonSceneManager__transitionScene((AvalonSceneManager_o *)circleAnimation, 90, 1, 0, 0);
        return;
      }
    }
    goto LABEL_26;
  }
}


void CoinRoomEffectComponent___Update_b__23_0(CoinRoomEffectComponent_o *this, const MethodInfo *method)
{
  CoinRoomEffectComponent_o *v2; // x19
  struct System_Action_o *endCallBack; // x8
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  CommonUI_o *v6; // x19

  v2 = this;
  if ( (byte_4C5AA48 & 1) == 0 )
  {
    sub_1C3E564(&CoinRoomUtility_TypeInfo);
    this = (CoinRoomEffectComponent_o *)sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C5AA48 = 1;
  }
  endCallBack = v2->fields.endCallBack;
  if ( !endCallBack )
    goto LABEL_8;
  ((void (__fastcall *)(intptr_t, intptr_t))endCallBack->fields.invoke_impl)(
    endCallBack->fields.method_code,
    endCallBack->fields.method);
  v2->fields.endCallBack = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&v2->fields.endCallBack, 0, v4, v5);
  v2->fields.isEffectEnd = 0;
  this = (CoinRoomEffectComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (CommonUI_o *)this;
  if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
  if ( !v6 )
LABEL_8:
    sub_1C3E7C0(this, method);
  CommonUI__maskFadein(v6, CoinRoomUtility_TypeInfo->static_fields->EFFECT_FADE_TIME, 0, 0);
}


void CoinRoomEffectComponent__PlayCoinArrivedSE_d__28___ctor(
        CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool CoinRoomEffectComponent__PlayCoinArrivedSE_d__28__MoveNext(
        CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_o *v4; // x19
  struct CoinRoomEffectComponent_o *_4__this; // x21
  CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_o *v6; // x20
  UnityEngine_ParticleSystem_MainModule_o v7; // x0
  UnityEngine_ParticleSystem_MainModule_o v8; // x0
  float duration; // s0
  int totalCount; // s1
  float arrivedPlaySeIntervalTime; // s2
  float v12; // s0
  Il2CppObject *Component_object; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  float lifeTime_5__2; // s8
  UnityEngine_WaitForSeconds_o *v19; // x20
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int v23; // w8
  float playIntervalTime_5__4; // s0
  float v25; // s0
  float v26; // s1
  float totalTime_5__7; // s8
  float deltaTime; // s0
  float time_5__8; // s9
  float v30; // s0
  _QWORD *v31; // x0
  _BOOL4 isGaugeAnimation_5__5; // w9
  int v33; // w8
  struct UserCoinRoomEntity_o *beforeEntity; // x8
  struct UserCoinRoomEntity_o *afterEntity; // x9
  bool result; // w0
  CGThumbnailListItem_o *v37; // x19
  UnityEngine_ParticleSystem_MinMaxCurve_o v38; // [xsp+0h] [xbp-80h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v39; // [xsp+20h] [xbp-60h] BYREF
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+48h] [xbp-38h] BYREF

  v4 = this;
  if ( (byte_4C5AB4F & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_CoinRoomGaugeEffectComponent___);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_ParticleSystem___);
    sub_1C3E564(&Method_CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_MoveNext__);
    this = (CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_o *)sub_1C3E564(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_4C5AB4F = 1;
  }
  m_ParticleSystem = 0;
  memset(&v39, 0, sizeof(v39));
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_32;
      this = (CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_o *)_4__this->fields.coinPartObject;
      if ( !this )
        goto LABEL_32;
      this = (CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                     (UnityEngine_GameObject_o *)this,
                                                                     (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_ParticleSystem___);
      if ( !this )
        goto LABEL_32;
      v6 = this;
      m_ParticleSystem = UnityEngine_ParticleSystem__get_main((UnityEngine_ParticleSystem_o *)this, 0).fields.m_ParticleSystem;
      v7.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
      UnityEngine_ParticleSystem_MainModule__get_startLifetime(&v38, v7, 0);
      v39 = v38;
      v4->fields._lifeTime_5__2 = UnityEngine_ParticleSystem_MinMaxCurve__get_constant(&v39, 0);
      m_ParticleSystem = UnityEngine_ParticleSystem__get_main((UnityEngine_ParticleSystem_o *)v6, 0).fields.m_ParticleSystem;
      v8.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
      duration = UnityEngine_ParticleSystem_MainModule__get_duration(v8, 0);
      totalCount = v4->fields.totalCount;
      v4->fields._duration_5__3 = duration;
      arrivedPlaySeIntervalTime = _4__this->fields.arrivedPlaySeIntervalTime;
      v4->fields._isGaugeAnimation_5__5 = 0;
      v12 = duration / (float)totalCount;
      if ( v12 <= arrivedPlaySeIntervalTime )
        v12 = arrivedPlaySeIntervalTime;
      v4->fields._playIntervalTime_5__4 = v12;
      this = (CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_o *)_4__this->fields.gaugeObject;
      if ( !this )
        goto LABEL_32;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)this,
                           (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_CoinRoomGaugeEffectComponent___);
      v4->fields._gaugeEffectComponent_5__6 = (struct CoinRoomGaugeEffectComponent_o *)Component_object;
      sub_1C3E508((CGThumbnailListItem_o *)&v4->fields._gaugeEffectComponent_5__6, (int32_t)Component_object, v14, v15);
LABEL_12:
      this = (CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_o *)_4__this->fields.coinPartObject;
      if ( !this )
        goto LABEL_32;
      if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0) )
      {
        lifeTime_5__2 = v4->fields._lifeTime_5__2;
        v19 = (UnityEngine_WaitForSeconds_o *)sub_1C3E7B0(UnityEngine_WaitForSeconds_TypeInfo);
        UnityEngine_WaitForSeconds___ctor(v19, lifeTime_5__2 * 0.9, 0);
        v4->fields.__2__current = (Il2CppObject *)v19;
        p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1C3E508(p__2__current, (int32_t)v19, v21, v22);
        v23 = 2;
LABEL_29:
        LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = v23;
        return 1;
      }
      else
      {
        v4->fields.__2__current = 0;
        v37 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1C3E508(v37, 0, v16, v17);
        result = 1;
        LODWORD(v37[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
      }
      return result;
    case 1:
      v4->fields.__1__state = -1;
      if ( _4__this )
        goto LABEL_12;
      goto LABEL_32;
    case 2:
      playIntervalTime_5__4 = v4->fields._playIntervalTime_5__4;
      v4->fields._totalTime_5__7 = 0.0;
      v25 = playIntervalTime_5__4 + 1.0;
      v4->fields._playCount_5__9 = 0;
      v4->fields.__1__state = -1;
      v4->fields._time_5__8 = v25;
      v26 = 0.0;
      goto LABEL_17;
    case 3:
      totalTime_5__7 = v4->fields._totalTime_5__7;
      v4->fields.__1__state = -1;
      deltaTime = UnityEngine_Time__get_deltaTime(0);
      time_5__8 = v4->fields._time_5__8;
      v4->fields._totalTime_5__7 = totalTime_5__7 + deltaTime;
      v30 = UnityEngine_Time__get_deltaTime(0);
      v26 = v4->fields._totalTime_5__7;
      v25 = time_5__8 + v30;
      v4->fields._time_5__8 = v25;
LABEL_17:
      if ( v26 >= v4->fields._duration_5__3 || v4->fields._playCount_5__9 >= v4->fields.totalCount )
        return 0;
      if ( v25 < v4->fields._playIntervalTime_5__4 )
        goto LABEL_28;
      v31 = Method_CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_MoveNext__;
      if ( (*((_BYTE *)Method_CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_MoveNext__ + 83) & 2) != 0 )
        v31 = (_QWORD *)sub_1C3E57C(Method_CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_MoveNext__);
      this = (CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_o *)sub_1C3E548(v31, v31[4]);
      if ( !_4__this )
        goto LABEL_32;
      this = (CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_o *)OverwriteAssetSoundName__PlaySeContinue(
                                                                     (System_Reflection_MethodBase_o *)this,
                                                                     _4__this->fields.arrivedPlaySeName,
                                                                     0,
                                                                     0);
      isGaugeAnimation_5__5 = v4->fields._isGaugeAnimation_5__5;
      v33 = v4->fields._playCount_5__9 + 1;
      v4->fields._time_5__8 = 0.0;
      v4->fields._playCount_5__9 = v33;
      if ( !isGaugeAnimation_5__5 )
      {
        beforeEntity = _4__this->fields.beforeEntity;
        if ( !beforeEntity
          || (afterEntity = _4__this->fields.afterEntity) == 0
          || (this = (CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_o *)v4->fields._gaugeEffectComponent_5__6) == 0 )
        {
LABEL_32:
          sub_1C3E7C0(this, method);
        }
        CoinRoomGaugeEffectComponent__StartAnimation(
          (CoinRoomGaugeEffectComponent_o *)this,
          beforeEntity->fields.cnt,
          afterEntity->fields.cnt,
          v3);
        v4->fields._isGaugeAnimation_5__5 = 1;
      }
LABEL_28:
      v4->fields.__2__current = 0;
      p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1C3E508(p__2__current, 0, v2, v3);
      v23 = 3;
      goto LABEL_29;
    default:
      return 0;
  }
}


Il2CppObject *CoinRoomEffectComponent__PlayCoinArrivedSE_d__28__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn CoinRoomEffectComponent__PlayCoinArrivedSE_d__28__System_Collections_IEnumerator_Reset(
        CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C3E578(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C3E7B0(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3E578(&Method_CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_System_Collections_IEnumerator_Reset__);
  sub_1C3E68C(v3, v4);
}


Il2CppObject *CoinRoomEffectComponent__PlayCoinArrivedSE_d__28__System_Collections_IEnumerator_get_Current(
        CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void CoinRoomEffectComponent__PlayCoinArrivedSE_d__28__System_IDisposable_Dispose(
        CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_o *this,
        const MethodInfo *method)
{
  ;
}


void CoinRoomEffectComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C5AB4B & 1) == 0 )
  {
    sub_1C3E564(&CoinRoomEffectComponent___c_TypeInfo);
    byte_4C5AB4B = 1;
  }
  v1 = (Il2CppObject *)sub_1C3E7B0(CoinRoomEffectComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  CoinRoomEffectComponent___c_TypeInfo->static_fields->__9 = (struct CoinRoomEffectComponent___c_o *)v1;
  sub_1C3E508((CGThumbnailListItem_o *)CoinRoomEffectComponent___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void CoinRoomEffectComponent___c___ctor(CoinRoomEffectComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void CoinRoomEffectComponent___c___NextAcquiredEffect_b__27_1(
        CoinRoomEffectComponent___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1
  System_String_o *MainBgmName; // x19

  if ( (byte_4C5AB4D & 1) == 0 )
  {
    sub_1C3E564(&BgmManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C3E564(&SoundManager_TypeInfo);
    byte_4C5AB4D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  CommonUI__ReleaseCoinRoomGetEffect((CommonUI_o *)Instance, 0);
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  MainBgmName = BgmManager__GetMainBgmName(0, 0);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm(MainBgmName, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
LABEL_10:
    sub_1C3E7C0(Instance, v3);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 90, 1, 0, 0);
}


int32_t CoinRoomEffectComponent___c___StartPutInAnimation_b__25_0(
        CoinRoomEffectComponent___c_o *this,
        System_Collections_Generic_KeyValuePair_int__SelectedUserSvtCoin__o x,
        const MethodInfo *method)
{
  struct SelectedUserSvtCoin_o *value; // x19

  value = x.fields.value;
  if ( (byte_4C5AB4C & 1) == 0 )
  {
    this = (CoinRoomEffectComponent___c_o *)sub_1C3E564(&Method_System_Collections_Generic_KeyValuePair_int__SelectedUserSvtCoin__get_Value__);
    byte_4C5AB4C = 1;
  }
  if ( !value )
    sub_1C3E7C0(this, *(_QWORD *)&x.fields.key);
  return value->fields._num_k__BackingField;
}


void CoinRoomEffectComponent___c__DisplayClass27_0___ctor(
        CoinRoomEffectComponent___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void CoinRoomEffectComponent___c__DisplayClass27_0___NextAcquiredEffect_b__0(
        CoinRoomEffectComponent___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  CoinRoomEffectComponent___c__DisplayClass27_0_o *v2; // x20
  struct CoinRoomEffectComponent_o *_4__this; // x8
  struct CoinRoomEffectComponent_o *v4; // x8
  CommonUI_o *v5; // x19
  CoinRoomEffectComponent___c_c *v6; // x8
  QuestRewardInfo_o *questRewardInfo; // x20
  CoinRoomEffectComponent___c__DisplayClass27_0_o *v8; // x21
  System_Action_o *_9__27_1; // x22
  Il2CppObject *v10; // x23
  struct CoinRoomEffectComponent___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  v2 = this;
  if ( (byte_4C5AB4E & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C3E564(&Method_CoinRoomEffectComponent___c__NextAcquiredEffect_b__27_1__);
    this = (CoinRoomEffectComponent___c__DisplayClass27_0_o *)sub_1C3E564(&CoinRoomEffectComponent___c_TypeInfo);
    byte_4C5AB4E = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_15;
  this = (CoinRoomEffectComponent___c__DisplayClass27_0_o *)_4__this->fields.gaugeObject;
  if ( !this )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  this = (CoinRoomEffectComponent___c__DisplayClass27_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = v2->fields.__4__this;
  if ( !v4 )
    goto LABEL_15;
  v5 = (CommonUI_o *)this;
  this = (CoinRoomEffectComponent___c__DisplayClass27_0_o *)v4->fields.acquiredEffect;
  if ( !this )
    goto LABEL_15;
  this = (CoinRoomEffectComponent___c__DisplayClass27_0_o *)UnityEngine_GameObject__get_transform(
                                                              (UnityEngine_GameObject_o *)this,
                                                              0);
  v6 = CoinRoomEffectComponent___c_TypeInfo;
  questRewardInfo = v2->fields.questRewardInfo;
  v8 = this;
  if ( !CoinRoomEffectComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomEffectComponent___c_TypeInfo);
    v6 = CoinRoomEffectComponent___c_TypeInfo;
  }
  _9__27_1 = v6->static_fields->__9__27_1;
  if ( !_9__27_1 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = CoinRoomEffectComponent___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v6->static_fields->__9;
    _9__27_1 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
    System_Action___ctor(_9__27_1, v10, Method_CoinRoomEffectComponent___c__NextAcquiredEffect_b__27_1__, 0);
    static_fields = CoinRoomEffectComponent___c_TypeInfo->static_fields;
    static_fields->__9__27_1 = _9__27_1;
    sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__27_1, (int32_t)_9__27_1, v12, v13);
  }
  if ( !v5 )
LABEL_15:
    sub_1C3E7C0(this, method);
  CommonUI__OpenCoinRoomGetEffect(v5, (UnityEngine_Transform_o *)v8, 0, questRewardInfo, _9__27_1, 0);
}