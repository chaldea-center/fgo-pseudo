void CoinRoomEffectComponent___ctor(CoinRoomEffectComponent_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t v9; // w1
  System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__c *v10; // x0
  System_Collections_Generic_Dictionary_int__object__o *v11; // x20
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  int32_t v18; // w1
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7

  if ( (byte_593C5F8 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin___ctor__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__TypeInfo);
    sub_21FFC50(&StringLiteral_17526/*"ar154"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593C5F8 = 1;
  }
  v9 = StringLiteral_17526/*"ar154"*/;
  this->fields.arrivedPlaySeName = (struct System_String_o *)StringLiteral_17526/*"ar154"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.arrivedPlaySeName, v9, v2, v3, v4, v5, v6, v7);
  v10 = System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__TypeInfo;
  this->fields.TARGET_ITEM_ID = 7999;
  *(_QWORD *)&this->fields.arrivedPlaySeIntervalTime = 0x3E83D4CCCCDLL;
  v11 = (System_Collections_Generic_Dictionary_int__object__o *)sub_21FFEBC(v10);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v11,
    (const MethodInfo_3F68354 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin___ctor__);
  this->fields.selectedCoinDic = (struct System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *)v11;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.selectedCoinDic,
    (int32_t)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v18 = (int)StringLiteral_1/*""*/;
  this->fields.stateName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.stateName, v18, v19, v20, v21, v22, v23, v24);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


UnityEngine_ParticleSystem_EmissionModule_o CoinRoomEffectComponent__GetEmissionModule(
        CoinRoomEffectComponent_o *this,
        UnityEngine_GameObject_o *targetObject,
        const MethodInfo *method)
{
  if ( (byte_593C5F5 & 1) == 0 )
  {
    this = (CoinRoomEffectComponent_o *)sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_ParticleSystem___);
    byte_593C5F5 = 1;
  }
  if ( !targetObject
    || (this = (CoinRoomEffectComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                              targetObject,
                                              (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_ParticleSystem___)) == 0 )
  {
    sub_21FFECC(this, targetObject);
  }
  return UnityEngine_ParticleSystem__get_emission((UnityEngine_ParticleSystem_o *)this, 0);
}


void CoinRoomEffectComponent__NextAcquiredEffect(CoinRoomEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  UnityEngine_GameObject_o *acquiredEffect; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  QuestRewardInfo_o *v12; // x21
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  _DWORD *v19; // x8
  int32_t TARGET_ITEM_ID; // w9
  Il2CppObject *Instance; // x19
  System_Action_o *v22; // x21

  if ( (byte_593C5F6 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&QuestRewardInfo_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_CoinRoomEffectComponent___c__DisplayClass27_0__NextAcquiredEffect_b__0__);
    sub_21FFC50(&CoinRoomEffectComponent___c__DisplayClass27_0_TypeInfo);
    byte_593C5F6 = 1;
  }
  v3 = sub_21FFEBC(CoinRoomEffectComponent___c__DisplayClass27_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_11;
  *(_QWORD *)(v3 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 16), (int32_t)this, v6, v7, v8, v9, v10, v11);
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
        v12 = (QuestRewardInfo_o *)sub_21FFEBC(QuestRewardInfo_TypeInfo);
        QuestRewardInfo___ctor(v12, 0);
        *(_QWORD *)(v3 + 24) = v12;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 24), (int32_t)v12, v13, v14, v15, v16, v17, v18);
        v19 = *(_DWORD **)(v3 + 24);
        if ( v19 )
        {
          TARGET_ITEM_ID = this->fields.TARGET_ITEM_ID;
          v19[4] = 2;
          v19[5] = TARGET_ITEM_ID;
          v19[6] = 1;
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v22 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
          System_Action___ctor(
            v22,
            (Il2CppObject *)v3,
            Method_CoinRoomEffectComponent___c__DisplayClass27_0__NextAcquiredEffect_b__0__,
            0);
          if ( Instance )
          {
            CommonUI__LoadCoinRoomGetEffect((CommonUI_o *)Instance, v22, 0);
            return;
          }
        }
      }
    }
LABEL_11:
    sub_21FFECC(acquiredEffect, v5);
  }
}


void CoinRoomEffectComponent__OpenEffect(
        CoinRoomEffectComponent_o *this,
        UserCoinRoomEntity_o *beforeUserCoinRoomEntity,
        System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *selectedCoinDic,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  DataManager_o *Instance; // x0
  __int64 v18; // x1
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *Entity; // x0
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  struct UserCoinRoomEntity_o *afterEntity; // x8
  bool v34; // zf
  struct System_String_o **v35; // x8
  struct System_String_o *v36; // x1
  __int64 v37; // x1
  const MethodInfo *v38; // x1

  if ( (byte_593C5F3 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_UserCoinRoomMaster___);
    sub_21FFC50(&Method_DataMasterBase_UserCoinRoomMaster__UserCoinRoomEntity__long__GetEntity__);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&SoundManager_TypeInfo);
    sub_21FFC50(&UserCoinRoomEntity_TypeInfo);
    sub_21FFC50(&StringLiteral_19759/*"effect_Circle_act2"*/);
    sub_21FFC50(&StringLiteral_19758/*"effect_Circle_act1"*/);
    byte_593C5F3 = 1;
  }
  this->fields.state = 1;
  if ( !beforeUserCoinRoomEntity )
  {
    beforeUserCoinRoomEntity = (UserCoinRoomEntity_o *)sub_21FFEBC(UserCoinRoomEntity_TypeInfo);
    UserCoinRoomEntity___ctor(beforeUserCoinRoomEntity, 0);
  }
  this->fields.beforeEntity = beforeUserCoinRoomEntity;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.beforeEntity,
    (int32_t)beforeUserCoinRoomEntity,
    (System_String_o *)selectedCoinDic,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.selectedCoinDic = selectedCoinDic;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.selectedCoinDic,
    (int32_t)selectedCoinDic,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserCoinRoomMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v18);
  if ( !byte_5931D52 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5931D52 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v18);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object
    || (Entity = DataMasterBase_object__object__long___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                   *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                   (const MethodInfo_3EDF9E8 *)Method_DataMasterBase_UserCoinRoomMaster__UserCoinRoomEntity__long__GetEntity__),
        this->fields.afterEntity = (struct UserCoinRoomEntity_o *)Entity,
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&this->fields.afterEntity,
          (int32_t)Entity,
          v21,
          v22,
          v23,
          v24,
          v25,
          v26),
        (afterEntity = this->fields.afterEntity) == 0) )
  {
LABEL_20:
    sub_21FFECC(Instance, v18);
  }
  v34 = afterEntity->fields.cnt == 0;
  this->fields.isAcquired = v34;
  if ( v34 )
    v35 = (struct System_String_o **)&StringLiteral_19759/*"effect_Circle_act2"*/;
  else
    v35 = (struct System_String_o **)&StringLiteral_19758/*"effect_Circle_act1"*/;
  v36 = *v35;
  this->fields.stateName = *v35;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.stateName, (int32_t)v36, v27, v28, v29, v30, v31, v32);
  if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v37);
  SoundManager__stopBgm(0);
  CoinRoomEffectComponent__StartPutInAnimation(this, v38);
}


System_Collections_IEnumerator_o *CoinRoomEffectComponent__PlayCoinArrivedSE(
        CoinRoomEffectComponent_o *this,
        int32_t totalCount,
        const MethodInfo *method)
{
  __int64 v5; // x21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_Collections_IEnumerator_o *result; // x0

  if ( (byte_593C5F7 & 1) == 0 )
  {
    sub_21FFC50(&CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_TypeInfo);
    byte_593C5F7 = 1;
  }
  v5 = sub_21FFEBC(CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  result = (System_Collections_IEnumerator_o *)v5;
  *(_DWORD *)(v5 + 40) = totalCount;
  return result;
}


void CoinRoomEffectComponent__StartPutInAnimation(CoinRoomEffectComponent_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  __int64 v10; // x1
  CoinRoomUtility_c *v11; // x0
  int32_t v12; // w0
  __int64 v13; // x1
  CoinRoomEffectComponent___c_c *v14; // x8
  struct System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *selectedCoinDic; // x21
  int32_t v16; // w20
  struct CoinRoomEffectComponent___c_StaticFields *static_fields; // x9
  System_Func_T__TResult__o *_9__25_0; // x22
  Il2CppObject *v19; // x23
  struct CoinRoomEffectComponent___c_StaticFields *v20; // x0
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  UnityEngine_GameObject_o *coinListPanel; // x0
  __int64 v28; // x1
  int energyPartLoopRateOverTimeMax; // w22
  Il2CppObject *Component_object; // x0
  struct SimpleAnimation_o **p_circleAnimation; // x21
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  CoinRoomEffectComponent_o *v38; // x0
  const MethodInfo *v39; // x2
  UnityEngine_ParticleSystem_EmissionModule_o v40; // x0
  const MethodInfo *v41; // x2
  System_Collections_IEnumerator_o *v42; // x0
  struct UserCoinRoomEntity_o *afterEntity; // x8
  int32_t cnt; // w8
  int32_t v45; // w22
  const MethodInfo *v46; // x4
  struct UserCoinRoomEntity_o *beforeEntity; // x8
  struct UserCoinRoomEntity_o *v48; // x8
  UnityEngine_ParticleSystem_MinMaxCurve_o v49; // [xsp+0h] [xbp-90h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v50; // [xsp+28h] [xbp-68h] BYREF
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+48h] [xbp-48h] BYREF

  if ( (byte_593C5F4 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_CoinRoomEffectComponent_NextAcquiredEffect__);
    sub_21FFC50(&CoinRoomUtility_TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_Sum_KeyValuePair_int__SelectedUserSvtCoin____);
    sub_21FFC50(&System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__TypeInfo);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_CoinRoomControlEffect___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_TitleInfoControl___);
    sub_21FFC50(&Method_CoinRoomEffectComponent___c__StartPutInAnimation_b__25_0__);
    sub_21FFC50(&CoinRoomEffectComponent___c_TypeInfo);
    byte_593C5F4 = 1;
  }
  m_ParticleSystem = 0;
  v3 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_CoinRoomEffectComponent_NextAcquiredEffect__, 0);
  this->fields.endCallBack = v3;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.endCallBack, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v11 = CoinRoomUtility_TypeInfo;
  if ( !*(&CoinRoomUtility_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo, v10);
  v12 = CoinRoomUtility__MaxPoint((const MethodInfo *)v11);
  v14 = CoinRoomEffectComponent___c_TypeInfo;
  selectedCoinDic = this->fields.selectedCoinDic;
  v16 = v12;
  if ( !*(&CoinRoomEffectComponent___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomEffectComponent___c_TypeInfo, v13);
    v14 = CoinRoomEffectComponent___c_TypeInfo;
  }
  static_fields = v14->static_fields;
  _9__25_0 = (System_Func_T__TResult__o *)static_fields->__9__25_0;
  if ( !_9__25_0 )
  {
    if ( !*(&v14->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v14, v13);
      static_fields = CoinRoomEffectComponent___c_TypeInfo->static_fields;
    }
    v19 = (Il2CppObject *)static_fields->__9;
    _9__25_0 = (System_Func_T__TResult__o *)sub_21FFEBC(System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__TypeInfo);
    System_Func_KeyValuePair_int__object___int____ctor(
      _9__25_0,
      v19,
      Method_CoinRoomEffectComponent___c__StartPutInAnimation_b__25_0__,
      0);
    v20 = CoinRoomEffectComponent___c_TypeInfo->static_fields;
    v20->__9__25_0 = (struct System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__o *)_9__25_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v20->__9__25_0, (int32_t)_9__25_0, v21, v22, v23, v24, v25, v26);
  }
  coinListPanel = (UnityEngine_GameObject_o *)System_Linq_Enumerable__Sum_KeyValuePair_int__object__(
                                                (System_Collections_Generic_IEnumerable_TSource__o *)selectedCoinDic,
                                                (System_Func_TSource__int__o *)_9__25_0,
                                                (const MethodInfo_3866978 *)Method_System_Linq_Enumerable_Sum_KeyValuePair_int__SelectedUserSvtCoin____);
  if ( !this->fields.effectCircleObject )
    goto LABEL_31;
  energyPartLoopRateOverTimeMax = (int)coinListPanel;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       this->fields.effectCircleObject,
                       (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  this->fields.circleAnimation = (struct SimpleAnimation_o *)Component_object;
  p_circleAnimation = &this->fields.circleAnimation;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.circleAnimation,
    (int32_t)Component_object,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
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
                                                (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoControl___);
  if ( !coinListPanel )
    goto LABEL_31;
  TitleInfoControl__SetHelpBtn((TitleInfoControl_o *)coinListPanel, 0, 0);
  MainMenuBar__setMenuActive(0, 0, 0);
  if ( energyPartLoopRateOverTimeMax >= this->fields.energyPartLoopRateOverTimeMax )
    energyPartLoopRateOverTimeMax = this->fields.energyPartLoopRateOverTimeMax;
  m_ParticleSystem = CoinRoomEffectComponent__GetEmissionModule(v38, this->fields.coinPartObject, v39).fields.m_ParticleSystem;
  UnityEngine_ParticleSystem_MinMaxCurve__op_Implicit(&v50, (float)energyPartLoopRateOverTimeMax, 0);
  v40.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
  v49 = v50;
  UnityEngine_ParticleSystem_EmissionModule__set_rateOverTime(v40, &v49, 0);
  v42 = CoinRoomEffectComponent__PlayCoinArrivedSE(this, energyPartLoopRateOverTimeMax, v41);
  coinListPanel = (UnityEngine_GameObject_o *)UnityEngine_MonoBehaviour__StartCoroutine_83231452(
                                                (UnityEngine_MonoBehaviour_o *)this,
                                                v42,
                                                0);
  afterEntity = this->fields.afterEntity;
  if ( !afterEntity )
    goto LABEL_31;
  cnt = afterEntity->fields.cnt;
  coinListPanel = this->fields.effectCircleObject;
  v45 = cnt ? cnt : v16;
  if ( !coinListPanel )
    goto LABEL_31;
  coinListPanel = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                coinListPanel,
                                                (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_CoinRoomControlEffect___);
  beforeEntity = this->fields.beforeEntity;
  if ( !beforeEntity
    || !coinListPanel
    || (CoinRoomControlEffect__SetValue(
          (CoinRoomControlEffect_o *)coinListPanel,
          beforeEntity->fields.cnt,
          v45,
          v16,
          v46),
        (coinListPanel = this->fields.gaugeObject) == 0)
    || (UnityEngine_GameObject__SetActive(coinListPanel, 1, 0), (v48 = this->fields.beforeEntity) == 0)
    || (coinListPanel = (UnityEngine_GameObject_o *)this->fields.gaugeSlider) == 0
    || (UIProgressBar__set_value((UIProgressBar_o *)coinListPanel, (float)v48->fields.cnt / (float)v16, 0),
        (coinListPanel = (UnityEngine_GameObject_o *)*p_circleAnimation) == 0) )
  {
LABEL_31:
    sub_21FFECC(coinListPanel, v28);
  }
  SimpleAnimation__Play_78338864((SimpleAnimation_o *)coinListPanel, this->fields.stateName, 0);
}


void CoinRoomEffectComponent__Update(CoinRoomEffectComponent_o *this, const MethodInfo *method)
{
  SimpleAnimation_o *circleAnimation; // x0
  SimpleAnimation_c *klass; // x8
  SimpleAnimation_o *v5; // x21
  __int64 v6; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v8; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  _BOOL4 isAcquired; // w8
  __int64 v16; // x1
  Il2CppObject *Instance; // x20
  CoinRoomUtility_c *v18; // x8
  float EFFECT_FADE_TIME; // s8
  System_Action_o *v20; // x21
  __int64 v21; // x1
  __int64 v22; // x1
  System_String_o *MainBgmName; // x19

  if ( (byte_593C5F2 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&BgmManager_TypeInfo);
    sub_21FFC50(&Method_CoinRoomEffectComponent__Update_b__23_0__);
    sub_21FFC50(&CoinRoomUtility_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_21FFC50(&SoundManager_TypeInfo);
    sub_21FFC50(&SimpleAnimation_State_TypeInfo);
    byte_593C5F2 = 1;
  }
  if ( !this->fields.endCallBack || this->fields.isEffectEnd )
    return;
  circleAnimation = this->fields.circleAnimation;
  if ( !circleAnimation
    || (circleAnimation = (SimpleAnimation_o *)SimpleAnimation__GetState(circleAnimation, this->fields.stateName, 0)) == 0 )
  {
LABEL_26:
    sub_21FFECC(circleAnimation, method);
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
    v8 = (__int64)(&klass->vtable._5_OnEnable + *(_DWORD *)p_offset);
  }
  else
  {
LABEL_11:
    v8 = sub_2237E2C(circleAnimation, SimpleAnimation_State_TypeInfo, 5);
  }
  if ( (*(float (__fastcall **)(SimpleAnimation_o *, _QWORD))v8)(v5, *(_QWORD *)(v8 + 8)) >= 0.95 )
  {
    isAcquired = this->fields.isAcquired;
    this->fields.isEffectEnd = 1;
    if ( isAcquired )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v18 = CoinRoomUtility_TypeInfo;
      if ( !*(&CoinRoomUtility_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo, v16);
        v18 = CoinRoomUtility_TypeInfo;
      }
      EFFECT_FADE_TIME = v18->static_fields->EFFECT_FADE_TIME;
      v20 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      System_Action___ctor(v20, (Il2CppObject *)this, Method_CoinRoomEffectComponent__Update_b__23_0__, 0);
      if ( Instance )
      {
        CommonUI__maskFadeout((CommonUI_o *)Instance, 2, EFFECT_FADE_TIME, v20, 0);
        return;
      }
    }
    else
    {
      this->fields.endCallBack = 0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.endCallBack, 0, v9, v10, v11, v12, v13, v14);
      this->fields.isEffectEnd = 0;
      this->fields.state = 2;
      if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v21);
      MainBgmName = BgmManager__GetMainBgmName(0, 0);
      if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v22);
      SoundManager__playBgm(MainBgmName, 0);
      circleAnimation = (SimpleAnimation_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  const MethodInfo_476E8C0 *v10; // x0
  CommonUI_o *v11; // x19

  v2 = this;
  if ( (byte_593C5F9 & 1) == 0 )
  {
    sub_21FFC50(&CoinRoomUtility_TypeInfo);
    this = (CoinRoomEffectComponent_o *)sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_593C5F9 = 1;
  }
  endCallBack = v2->fields.endCallBack;
  if ( !endCallBack )
    goto LABEL_8;
  ((void (__fastcall *)(intptr_t, intptr_t))endCallBack->fields.invoke_impl)(
    endCallBack->fields.method_code,
    endCallBack->fields.method);
  v2->fields.endCallBack = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v2->fields.endCallBack, 0, v4, v5, v6, v7, v8, v9);
  v10 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
  v2->fields.isEffectEnd = 0;
  this = (CoinRoomEffectComponent_o *)SingletonMonoBehaviour_object___get_Instance(v10);
  v11 = (CommonUI_o *)this;
  if ( !*(&CoinRoomUtility_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo, method);
  if ( !v11 )
LABEL_8:
    sub_21FFECC(this, method);
  CommonUI__maskFadein(v11, CoinRoomUtility_TypeInfo->static_fields->EFFECT_FADE_TIME, 0, 0);
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
  System_String_o *v2; // x2
  MethodInfo *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t _1__state; // w8
  struct CoinRoomEffectComponent_o *_4__this; // x21
  System_Reflection_MethodBase_o *gaugeEffectComponent_5__6; // x0
  float totalTime_5__7; // s8
  float v13; // s0
  float time_5__8; // s8
  float v15; // s0
  float v16; // s1
  UnityEngine_ParticleSystem_o *v17; // x20
  UnityEngine_ParticleSystem_MainModule_o v18; // x0
  UnityEngine_ParticleSystem_MainModule_o v19; // x0
  float duration; // s0
  int32_t totalCount; // s1
  float arrivedPlaySeIntervalTime; // s2
  float v23; // s1
  Il2CppObject *Component_object; // x0
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
  float lifeTime_5__2; // s8
  UnityEngine_WaitForSeconds_o *v38; // x20
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  int32_t v45; // w8
  float playIntervalTime_5__4; // s1
  _QWORD *v47; // x0
  _BOOL4 isGaugeAnimation_5__5; // w9
  int32_t v49; // w8
  struct UserCoinRoomEntity_o *beforeEntity; // x8
  struct UserCoinRoomEntity_o *afterEntity; // x9
  UnityEngine_ParticleSystem_MinMaxCurve_o v53; // [xsp+0h] [xbp-70h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v54; // [xsp+20h] [xbp-50h] BYREF
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+48h] [xbp-28h] BYREF

  if ( (byte_593C5FE & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_CoinRoomGaugeEffectComponent___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_ParticleSystem___);
    sub_21FFC50(&Method_CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_MoveNext__);
    sub_21FFC50(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_593C5FE = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  gaugeEffectComponent_5__6 = 0;
  m_ParticleSystem = 0;
  memset(&v54, 0, sizeof(v54));
  if ( _1__state > 1 )
  {
    if ( _1__state == 2 )
    {
      playIntervalTime_5__4 = this->fields._playIntervalTime_5__4;
      this->fields._totalTime_5__7 = 0.0;
      this->fields.__1__state = -1;
      v15 = playIntervalTime_5__4 + 1.0;
      v16 = 0.0;
      this->fields._playCount_5__9 = 0;
    }
    else
    {
      if ( _1__state != 3 )
        return (char)gaugeEffectComponent_5__6;
      totalTime_5__7 = this->fields._totalTime_5__7;
      this->fields.__1__state = -1;
      v13 = totalTime_5__7 + UnityEngine_Time__get_deltaTime(0);
      time_5__8 = this->fields._time_5__8;
      this->fields._totalTime_5__7 = v13;
      v15 = time_5__8 + UnityEngine_Time__get_deltaTime(0);
      v16 = this->fields._totalTime_5__7;
    }
    this->fields._time_5__8 = v15;
    if ( v16 >= this->fields._duration_5__3 || this->fields._playCount_5__9 >= this->fields.totalCount )
    {
      LOBYTE(gaugeEffectComponent_5__6) = 0;
      return (char)gaugeEffectComponent_5__6;
    }
    if ( v15 >= this->fields._playIntervalTime_5__4 )
    {
      v47 = Method_CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_MoveNext__;
      if ( (*((_BYTE *)Method_CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_MoveNext__ + 83) & 2) != 0 )
        v47 = (_QWORD *)sub_21FFC68(Method_CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_MoveNext__);
      gaugeEffectComponent_5__6 = (System_Reflection_MethodBase_o *)sub_21FFC34(v47, v47[4]);
      if ( !_4__this )
        goto LABEL_38;
      gaugeEffectComponent_5__6 = (System_Reflection_MethodBase_o *)OverwriteAssetSoundName__PlaySeContinue(
                                                                      gaugeEffectComponent_5__6,
                                                                      _4__this->fields.arrivedPlaySeName,
                                                                      0,
                                                                      0);
      isGaugeAnimation_5__5 = this->fields._isGaugeAnimation_5__5;
      v49 = this->fields._playCount_5__9 + 1;
      this->fields._time_5__8 = 0.0;
      this->fields._playCount_5__9 = v49;
      if ( !isGaugeAnimation_5__5 )
      {
        beforeEntity = _4__this->fields.beforeEntity;
        if ( !beforeEntity )
          goto LABEL_38;
        afterEntity = _4__this->fields.afterEntity;
        if ( !afterEntity )
          goto LABEL_38;
        gaugeEffectComponent_5__6 = (System_Reflection_MethodBase_o *)this->fields._gaugeEffectComponent_5__6;
        if ( !gaugeEffectComponent_5__6 )
          goto LABEL_38;
        CoinRoomGaugeEffectComponent__StartAnimation(
          (CoinRoomGaugeEffectComponent_o *)gaugeEffectComponent_5__6,
          beforeEntity->fields.cnt,
          afterEntity->fields.cnt,
          v3);
        this->fields._isGaugeAnimation_5__5 = 1;
      }
    }
    this->fields.__2__current = 0;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.__2__current,
      0,
      v2,
      (System_String_o *)v3,
      v4,
      v5,
      v6,
      v7);
    v45 = 3;
LABEL_36:
    LOBYTE(gaugeEffectComponent_5__6) = 1;
    this->fields.__1__state = v45;
    return (char)gaugeEffectComponent_5__6;
  }
  if ( !_1__state )
  {
    this->fields.__1__state = -1;
    if ( _4__this )
    {
      gaugeEffectComponent_5__6 = (System_Reflection_MethodBase_o *)_4__this->fields.coinPartObject;
      if ( gaugeEffectComponent_5__6 )
      {
        gaugeEffectComponent_5__6 = (System_Reflection_MethodBase_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                        (UnityEngine_GameObject_o *)gaugeEffectComponent_5__6,
                                                                        (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_ParticleSystem___);
        if ( gaugeEffectComponent_5__6 )
        {
          v17 = (UnityEngine_ParticleSystem_o *)gaugeEffectComponent_5__6;
          m_ParticleSystem = UnityEngine_ParticleSystem__get_main(
                               (UnityEngine_ParticleSystem_o *)gaugeEffectComponent_5__6,
                               0).fields.m_ParticleSystem;
          v18.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
          UnityEngine_ParticleSystem_MainModule__get_startLifetime(&v53, v18, 0);
          v54 = v53;
          this->fields._lifeTime_5__2 = UnityEngine_ParticleSystem_MinMaxCurve__get_constant(&v54, 0);
          m_ParticleSystem = UnityEngine_ParticleSystem__get_main(v17, 0).fields.m_ParticleSystem;
          v19.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
          duration = UnityEngine_ParticleSystem_MainModule__get_duration(v19, 0);
          totalCount = this->fields.totalCount;
          arrivedPlaySeIntervalTime = _4__this->fields.arrivedPlaySeIntervalTime;
          gaugeEffectComponent_5__6 = (System_Reflection_MethodBase_o *)_4__this->fields.gaugeObject;
          this->fields._isGaugeAnimation_5__5 = 0;
          v23 = duration / (float)totalCount;
          if ( v23 <= arrivedPlaySeIntervalTime )
            v23 = arrivedPlaySeIntervalTime;
          this->fields._duration_5__3 = duration;
          this->fields._playIntervalTime_5__4 = v23;
          if ( gaugeEffectComponent_5__6 )
          {
            Component_object = UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)gaugeEffectComponent_5__6,
                                 (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_CoinRoomGaugeEffectComponent___);
            this->fields._gaugeEffectComponent_5__6 = (struct CoinRoomGaugeEffectComponent_o *)Component_object;
            sub_21FFBF4(
              (MissionNaviTransitionBoardItem_o *)&this->fields._gaugeEffectComponent_5__6,
              (int32_t)Component_object,
              v25,
              v26,
              v27,
              v28,
              v29,
              v30);
LABEL_18:
            gaugeEffectComponent_5__6 = (System_Reflection_MethodBase_o *)_4__this->fields.coinPartObject;
            if ( !gaugeEffectComponent_5__6 )
              goto LABEL_38;
            if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)gaugeEffectComponent_5__6, 0) )
            {
              lifeTime_5__2 = this->fields._lifeTime_5__2;
              v38 = (UnityEngine_WaitForSeconds_o *)sub_21FFEBC(UnityEngine_WaitForSeconds_TypeInfo);
              UnityEngine_WaitForSeconds___ctor(v38, lifeTime_5__2 * 0.9, 0);
              this->fields.__2__current = (Il2CppObject *)v38;
              sub_21FFBF4(
                (MissionNaviTransitionBoardItem_o *)&this->fields.__2__current,
                (int32_t)v38,
                v39,
                v40,
                v41,
                v42,
                v43,
                v44);
              v45 = 2;
            }
            else
            {
              this->fields.__2__current = 0;
              sub_21FFBF4(
                (MissionNaviTransitionBoardItem_o *)&this->fields.__2__current,
                0,
                v31,
                v32,
                v33,
                v34,
                v35,
                v36);
              v45 = 1;
            }
            goto LABEL_36;
          }
        }
      }
    }
LABEL_38:
    sub_21FFECC(gaugeEffectComponent_5__6, method);
  }
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_38;
    goto LABEL_18;
  }
  return (char)gaugeEffectComponent_5__6;
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

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_593C5FA & 1) == 0 )
  {
    sub_21FFC50(&CoinRoomEffectComponent___c_TypeInfo);
    byte_593C5FA = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(CoinRoomEffectComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  CoinRoomEffectComponent___c_TypeInfo->static_fields->__9 = (struct CoinRoomEffectComponent___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)CoinRoomEffectComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  __int64 v4; // x1
  __int64 v5; // x1
  System_String_o *MainBgmName; // x19

  if ( (byte_593C5FC & 1) == 0 )
  {
    sub_21FFC50(&BgmManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_21FFC50(&SoundManager_TypeInfo);
    byte_593C5FC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  CommonUI__ReleaseCoinRoomGetEffect((CommonUI_o *)Instance, 0);
  if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v4);
  MainBgmName = BgmManager__GetMainBgmName(0, 0);
  if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v5);
  SoundManager__playBgm(MainBgmName, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
LABEL_10:
    sub_21FFECC(Instance, v3);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 90, 1, 0, 0);
}


int32_t CoinRoomEffectComponent___c___StartPutInAnimation_b__25_0(
        CoinRoomEffectComponent___c_o *this,
        System_Collections_Generic_KeyValuePair_int__SelectedUserSvtCoin__o x,
        const MethodInfo *method)
{
  struct SelectedUserSvtCoin_o *value; // x19

  value = x.fields.value;
  if ( (byte_593C5FB & 1) == 0 )
  {
    this = (CoinRoomEffectComponent___c_o *)sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_int__SelectedUserSvtCoin__get_Value__);
    byte_593C5FB = 1;
  }
  if ( !value )
    sub_21FFECC(this, *(_QWORD *)&x.fields.key);
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
  struct CoinRoomEffectComponent___c_StaticFields *static_fields; // x9
  System_Action_o *_9__27_1; // x22
  Il2CppObject *v11; // x23
  struct CoinRoomEffectComponent___c_StaticFields *v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7

  v2 = this;
  if ( (byte_593C5FD & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_CoinRoomEffectComponent___c__NextAcquiredEffect_b__27_1__);
    this = (CoinRoomEffectComponent___c__DisplayClass27_0_o *)sub_21FFC50(&CoinRoomEffectComponent___c_TypeInfo);
    byte_593C5FD = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_15;
  this = (CoinRoomEffectComponent___c__DisplayClass27_0_o *)_4__this->fields.gaugeObject;
  if ( !this )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  this = (CoinRoomEffectComponent___c__DisplayClass27_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  if ( !*(&CoinRoomEffectComponent___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomEffectComponent___c_TypeInfo, method);
    v6 = CoinRoomEffectComponent___c_TypeInfo;
  }
  static_fields = v6->static_fields;
  _9__27_1 = static_fields->__9__27_1;
  if ( !_9__27_1 )
  {
    if ( !*(&v6->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v6, method);
      static_fields = CoinRoomEffectComponent___c_TypeInfo->static_fields;
    }
    v11 = (Il2CppObject *)static_fields->__9;
    _9__27_1 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(_9__27_1, v11, Method_CoinRoomEffectComponent___c__NextAcquiredEffect_b__27_1__, 0);
    v12 = CoinRoomEffectComponent___c_TypeInfo->static_fields;
    v12->__9__27_1 = _9__27_1;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v12->__9__27_1, (int32_t)_9__27_1, v13, v14, v15, v16, v17, v18);
  }
  if ( !v5 )
LABEL_15:
    sub_21FFECC(this, method);
  CommonUI__OpenCoinRoomGetEffect(v5, (UnityEngine_Transform_o *)v8, 0, questRewardInfo, _9__27_1, 0);
}