void __fastcall CoinRoomEffectComponent___ctor(CoinRoomEffectComponent_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int64_t v9; // x1
  System_Collections_Generic_Dictionary_int__object__o *v10; // x20
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  void *v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7

  if ( (byte_4BDFC53 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin___ctor__);
    sub_1C21E38(&System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__TypeInfo);
    sub_1C21E38(&StringLiteral_17157/*"ar154"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDFC53 = 1;
  }
  v9 = StringLiteral_17157/*"ar154"*/;
  this->fields.arrivedPlaySeName = (struct System_String_o *)StringLiteral_17157/*"ar154"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.arrivedPlaySeName, v9, v2, v3, v4, v5, v6, v7);
  *(_QWORD *)&this->fields.arrivedPlaySeIntervalTime = 0x3E83D4CCCCDLL;
  this->fields.TARGET_ITEM_ID = 7999;
  v10 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C22084(System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v10,
    (const MethodInfo_32B5078 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin___ctor__);
  this->fields.selectedCoinDic = (struct System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *)v10;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.selectedCoinDic, (int64_t)v10, v11, v12, v13, v14, v15, v16);
  v17 = StringLiteral_1/*""*/;
  this->fields.stateName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.stateName, (int64_t)v17, v18, v19, v20, v21, v22, v23);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


UnityEngine_ParticleSystem_EmissionModule_o __fastcall CoinRoomEffectComponent__GetEmissionModule(
        CoinRoomEffectComponent_o *this,
        UnityEngine_GameObject_o *targetObject,
        const MethodInfo *method)
{
  if ( (byte_4BDFC50 & 1) == 0 )
  {
    this = (CoinRoomEffectComponent_o *)sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_ParticleSystem___);
    byte_4BDFC50 = 1;
  }
  if ( !targetObject
    || (this = (CoinRoomEffectComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                              targetObject,
                                              (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_ParticleSystem___)) == 0LL )
  {
    sub_1C22094(this, targetObject);
  }
  return UnityEngine_ParticleSystem__get_emission((UnityEngine_ParticleSystem_o *)this, 0LL);
}


void __fastcall CoinRoomEffectComponent__NextAcquiredEffect(CoinRoomEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  UnityEngine_GameObject_o *acquiredEffect; // x0
  __int64 v5; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  QuestRewardInfo_o *v12; // x21
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  _DWORD *v19; // x8
  int32_t TARGET_ITEM_ID; // w9
  Il2CppObject *Instance; // x19
  System_Action_o *v22; // x21

  if ( (byte_4BDFC51 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&QuestRewardInfo_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_CoinRoomEffectComponent___c__DisplayClass27_0__NextAcquiredEffect_b__0__);
    sub_1C21E38(&CoinRoomEffectComponent___c__DisplayClass27_0_TypeInfo);
    byte_4BDFC51 = 1;
  }
  v3 = sub_1C22084(CoinRoomEffectComponent___c__DisplayClass27_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  if ( !v3 )
    goto LABEL_11;
  *(_QWORD *)(v3 + 16) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 16), (int64_t)this, v6, v7, v8, v9, v10, v11);
  if ( this->fields.state == 1 )
  {
    acquiredEffect = this->fields.acquiredEffect;
    if ( acquiredEffect )
    {
      UnityEngine_GameObject__SetActive(acquiredEffect, 1, 0LL);
      acquiredEffect = this->fields.acquiredEffect;
      this->fields.state = 1;
      if ( acquiredEffect )
      {
        UnityEngine_GameObject__SetActive(acquiredEffect, 1, 0LL);
        v12 = (QuestRewardInfo_o *)sub_1C22084(QuestRewardInfo_TypeInfo);
        QuestRewardInfo___ctor(v12, 0LL);
        *(_QWORD *)(v3 + 24) = v12;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 24), (int64_t)v12, v13, v14, v15, v16, v17, v18);
        v19 = *(_DWORD **)(v3 + 24);
        if ( v19 )
        {
          TARGET_ITEM_ID = this->fields.TARGET_ITEM_ID;
          v19[4] = 2;
          v19[5] = TARGET_ITEM_ID;
          v19[6] = 1;
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v22 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
          System_Action___ctor(
            v22,
            (Il2CppObject *)v3,
            Method_CoinRoomEffectComponent___c__DisplayClass27_0__NextAcquiredEffect_b__0__,
            0LL);
          if ( Instance )
          {
            CommonUI__LoadCoinRoomGetEffect((CommonUI_o *)Instance, v22, 0LL);
            return;
          }
        }
      }
    }
LABEL_11:
    sub_1C22094(acquiredEffect, v5);
  }
}


void __fastcall CoinRoomEffectComponent__OpenEffect(
        CoinRoomEffectComponent_o *this,
        UserCoinRoomEntity_o *beforeUserCoinRoomEntity,
        System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *selectedCoinDic,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  DataManager_o *Instance; // x0
  __int64 v18; // x1
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *Entity; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  struct UserCoinRoomEntity_o *afterEntity; // x8
  int32_t cnt; // w8
  __int64 *v35; // x8
  struct System_String_o *v36; // x1
  const MethodInfo *v37; // x1

  if ( (byte_4BDFC4E & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_UserCoinRoomMaster___);
    sub_1C21E38(&Method_DataMasterBase_UserCoinRoomMaster__UserCoinRoomEntity__long__GetEntity__);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&SoundManager_TypeInfo);
    sub_1C21E38(&UserCoinRoomEntity_TypeInfo);
    sub_1C21E38(&StringLiteral_19249/*"effect_Circle_act2"*/);
    sub_1C21E38(&StringLiteral_19248/*"effect_Circle_act1"*/);
    byte_4BDFC4E = 1;
  }
  this->fields.state = 1;
  if ( !beforeUserCoinRoomEntity )
  {
    beforeUserCoinRoomEntity = (UserCoinRoomEntity_o *)sub_1C22084(UserCoinRoomEntity_TypeInfo);
    UserCoinRoomEntity___ctor(beforeUserCoinRoomEntity, 0LL);
  }
  this->fields.beforeEntity = beforeUserCoinRoomEntity;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.beforeEntity,
    (int64_t)beforeUserCoinRoomEntity,
    (int64_t)selectedCoinDic,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.selectedCoinDic = selectedCoinDic;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.selectedCoinDic,
    (int64_t)selectedCoinDic,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserCoinRoomMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BD6FF5 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BD6FF5 = 1;
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
                   (const MethodInfo_325E324 *)Method_DataMasterBase_UserCoinRoomMaster__UserCoinRoomEntity__long__GetEntity__),
        this->fields.afterEntity = (struct UserCoinRoomEntity_o *)Entity,
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&this->fields.afterEntity,
          (int64_t)Entity,
          v21,
          v22,
          v23,
          v24,
          v25,
          v26),
        (afterEntity = this->fields.afterEntity) == 0LL) )
  {
LABEL_20:
    sub_1C22094(Instance, v18);
  }
  cnt = afterEntity->fields.cnt;
  this->fields.isAcquired = cnt == 0;
  if ( cnt )
    v35 = &StringLiteral_19248/*"effect_Circle_act1"*/;
  else
    v35 = &StringLiteral_19249/*"effect_Circle_act2"*/;
  v36 = (struct System_String_o *)*v35;
  this->fields.stateName = (struct System_String_o *)*v35;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.stateName, (int64_t)v36, v27, v28, v29, v30, v31, v32);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__stopBgm(0LL);
  CoinRoomEffectComponent__StartPutInAnimation(this, v37);
}


System_Collections_IEnumerator_o *__fastcall CoinRoomEffectComponent__PlayCoinArrivedSE(
        CoinRoomEffectComponent_o *this,
        int32_t totalCount,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4BDFC52 & 1) == 0 )
  {
    sub_1C21E38(&CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_TypeInfo);
    byte_4BDFC52 = 1;
  }
  v5 = sub_1C22084(CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  *(_DWORD *)(v5 + 40) = totalCount;
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall CoinRoomEffectComponent__StartPutInAnimation(CoinRoomEffectComponent_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  CoinRoomUtility_c *v10; // x0
  int32_t v11; // w0
  CoinRoomEffectComponent___c_c *v12; // x8
  struct System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *selectedCoinDic; // x21
  int32_t v14; // w20
  System_Func_T__TResult__o *_9__25_0; // x22
  Il2CppObject *v16; // x23
  struct CoinRoomEffectComponent___c_StaticFields *static_fields; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  UnityEngine_GameObject_o *coinListPanel; // x0
  __int64 v25; // x1
  int energyPartLoopRateOverTimeMax; // w22
  Il2CppObject *Component_object; // x0
  struct SimpleAnimation_o **p_circleAnimation; // x21
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  CoinRoomEffectComponent_o *v35; // x0
  const MethodInfo *v36; // x2
  const MethodInfo *v37; // x2
  System_Collections_IEnumerator_o *v38; // x0
  struct UserCoinRoomEntity_o *afterEntity; // x8
  int32_t cnt; // w8
  int32_t v41; // w22
  const MethodInfo *v42; // x4
  struct UserCoinRoomEntity_o *beforeEntity; // x8
  struct UserCoinRoomEntity_o *v44; // x8
  UnityEngine_ParticleSystem_MinMaxCurve_o v45; // [xsp+0h] [xbp-90h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v46; // [xsp+28h] [xbp-68h] BYREF
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+48h] [xbp-48h] BYREF
  UnityEngine_ParticleSystem_EmissionModule_o v48; // 0:x0.8

  if ( (byte_4BDFC4F & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_CoinRoomEffectComponent_NextAcquiredEffect__);
    sub_1C21E38(&CoinRoomUtility_TypeInfo);
    sub_1C21E38(&Method_System_Linq_Enumerable_Sum_KeyValuePair_int__SelectedUserSvtCoin____);
    sub_1C21E38(&System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__TypeInfo);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_CoinRoomControlEffect___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_TitleInfoControl___);
    sub_1C21E38(&Method_CoinRoomEffectComponent___c__StartPutInAnimation_b__25_0__);
    sub_1C21E38(&CoinRoomEffectComponent___c_TypeInfo);
    byte_4BDFC4F = 1;
  }
  m_ParticleSystem = 0LL;
  v3 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_CoinRoomEffectComponent_NextAcquiredEffect__, 0LL);
  this->fields.endCallBack = v3;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.endCallBack, (int64_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = CoinRoomUtility_TypeInfo;
  if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
  v11 = CoinRoomUtility__MaxPoint((const MethodInfo *)v10);
  v12 = CoinRoomEffectComponent___c_TypeInfo;
  selectedCoinDic = this->fields.selectedCoinDic;
  v14 = v11;
  if ( !CoinRoomEffectComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomEffectComponent___c_TypeInfo);
    v12 = CoinRoomEffectComponent___c_TypeInfo;
  }
  _9__25_0 = (System_Func_T__TResult__o *)v12->static_fields->__9__25_0;
  if ( !_9__25_0 )
  {
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = CoinRoomEffectComponent___c_TypeInfo;
    }
    v16 = (Il2CppObject *)v12->static_fields->__9;
    _9__25_0 = (System_Func_T__TResult__o *)sub_1C22084(System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__TypeInfo);
    System_Func_KeyValuePair_int__object___int____ctor(
      _9__25_0,
      v16,
      Method_CoinRoomEffectComponent___c__StartPutInAnimation_b__25_0__,
      0LL);
    static_fields = CoinRoomEffectComponent___c_TypeInfo->static_fields;
    static_fields->__9__25_0 = (struct System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__o *)_9__25_0;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&static_fields->__9__25_0,
      (int64_t)_9__25_0,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
  }
  coinListPanel = (UnityEngine_GameObject_o *)System_Linq_Enumerable__Sum_KeyValuePair_int__object__(
                                                (System_Collections_Generic_IEnumerable_TSource__o *)selectedCoinDic,
                                                (System_Func_TSource__int__o *)_9__25_0,
                                                (const MethodInfo_2FE8244 *)Method_System_Linq_Enumerable_Sum_KeyValuePair_int__SelectedUserSvtCoin____);
  if ( !this->fields.effectCircleObject )
    goto LABEL_31;
  energyPartLoopRateOverTimeMax = (int)coinListPanel;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       this->fields.effectCircleObject,
                       (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  this->fields.circleAnimation = (struct SimpleAnimation_o *)Component_object;
  p_circleAnimation = &this->fields.circleAnimation;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.circleAnimation,
    (int64_t)Component_object,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  coinListPanel = this->fields.coinListPanel;
  if ( !coinListPanel )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive(coinListPanel, 0, 0LL);
  coinListPanel = this->fields.lobbyPanel;
  if ( !coinListPanel )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive(coinListPanel, 0, 0LL);
  coinListPanel = this->fields.titleInfoObject;
  if ( !coinListPanel )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive(coinListPanel, 0, 0LL);
  coinListPanel = this->fields.titleInfoObject;
  if ( !coinListPanel )
    goto LABEL_31;
  coinListPanel = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                coinListPanel,
                                                (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoControl___);
  if ( !coinListPanel )
    goto LABEL_31;
  TitleInfoControl__SetHelpBtn((TitleInfoControl_o *)coinListPanel, 0, 0LL);
  MainMenuBar__setMenuActive(0, 0LL, 0LL);
  if ( energyPartLoopRateOverTimeMax >= this->fields.energyPartLoopRateOverTimeMax )
    energyPartLoopRateOverTimeMax = this->fields.energyPartLoopRateOverTimeMax;
  m_ParticleSystem = CoinRoomEffectComponent__GetEmissionModule(v35, this->fields.coinPartObject, v36).fields.m_ParticleSystem;
  UnityEngine_ParticleSystem_MinMaxCurve__op_Implicit(&v46, (float)energyPartLoopRateOverTimeMax, 0LL);
  v48.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
  v45 = v46;
  UnityEngine_ParticleSystem_EmissionModule__set_rateOverTime(v48, &v45, 0LL);
  v38 = CoinRoomEffectComponent__PlayCoinArrivedSE(this, energyPartLoopRateOverTimeMax, v37);
  coinListPanel = (UnityEngine_GameObject_o *)UnityEngine_MonoBehaviour__StartCoroutine_70854884(
                                                (UnityEngine_MonoBehaviour_o *)this,
                                                v38,
                                                0LL);
  afterEntity = this->fields.afterEntity;
  if ( !afterEntity )
    goto LABEL_31;
  cnt = afterEntity->fields.cnt;
  coinListPanel = this->fields.effectCircleObject;
  v41 = cnt ? cnt : v14;
  if ( !coinListPanel )
    goto LABEL_31;
  coinListPanel = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                coinListPanel,
                                                (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_CoinRoomControlEffect___);
  beforeEntity = this->fields.beforeEntity;
  if ( !beforeEntity
    || !coinListPanel
    || (CoinRoomControlEffect__SetValue(
          (CoinRoomControlEffect_o *)coinListPanel,
          beforeEntity->fields.cnt,
          v41,
          v14,
          v42),
        (coinListPanel = this->fields.gaugeObject) == 0LL)
    || (UnityEngine_GameObject__SetActive(coinListPanel, 1, 0LL), (v44 = this->fields.beforeEntity) == 0LL)
    || (coinListPanel = (UnityEngine_GameObject_o *)this->fields.gaugeSlider) == 0LL
    || (UIProgressBar__set_value((UIProgressBar_o *)coinListPanel, (float)v44->fields.cnt / (float)v14, 0LL),
        (coinListPanel = (UnityEngine_GameObject_o *)*p_circleAnimation) == 0LL) )
  {
LABEL_31:
    sub_1C22094(coinListPanel, v25);
  }
  SimpleAnimation__Play_65253852((SimpleAnimation_o *)coinListPanel, this->fields.stateName, 0LL);
}


void __fastcall CoinRoomEffectComponent__Update(CoinRoomEffectComponent_o *this, const MethodInfo *method)
{
  SimpleAnimation_o *circleAnimation; // x0
  SimpleAnimation_c *klass; // x8
  SimpleAnimation_o *v5; // x21
  __int64 v6; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v8; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  _BOOL4 isAcquired; // w8
  Il2CppObject *Instance; // x20
  CoinRoomUtility_c *v17; // x8
  float EFFECT_FADE_TIME; // s8
  System_Action_o *v19; // x21
  System_String_o *MainBgmName; // x19

  if ( (byte_4BDFC4D & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&BgmManager_TypeInfo);
    sub_1C21E38(&Method_CoinRoomEffectComponent__Update_b__23_0__);
    sub_1C21E38(&CoinRoomUtility_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C21E38(&SoundManager_TypeInfo);
    sub_1C21E38(&SimpleAnimation_State_TypeInfo);
    byte_4BDFC4D = 1;
  }
  if ( !this->fields.endCallBack || this->fields.isEffectEnd )
    return;
  circleAnimation = this->fields.circleAnimation;
  if ( !circleAnimation
    || (circleAnimation = (SimpleAnimation_o *)SimpleAnimation__GetState(circleAnimation, this->fields.stateName, 0LL)) == 0LL )
  {
LABEL_26:
    sub_1C22094(circleAnimation, method);
  }
  klass = circleAnimation->klass;
  v5 = circleAnimation;
  v6 = *(unsigned __int16 *)(&circleAnimation->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&circleAnimation->klass->_2.bitflags2 + 3) )
  {
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v6;
      p_offset += 2;
      if ( !v6 )
        goto LABEL_11;
    }
    v8 = (__int64)(&klass->vtable._5_OnDisable.method + 2 * *(_DWORD *)p_offset);
  }
  else
  {
LABEL_11:
    v8 = sub_1C73E18(circleAnimation, SimpleAnimation_State_TypeInfo, 5LL);
  }
  if ( (*(float (__fastcall **)(SimpleAnimation_o *, _QWORD))v8)(v5, *(_QWORD *)(v8 + 8)) >= 0.95 )
  {
    isAcquired = this->fields.isAcquired;
    this->fields.isEffectEnd = 1;
    if ( isAcquired )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v17 = CoinRoomUtility_TypeInfo;
      if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
        v17 = CoinRoomUtility_TypeInfo;
      }
      EFFECT_FADE_TIME = v17->static_fields->EFFECT_FADE_TIME;
      v19 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      System_Action___ctor(v19, (Il2CppObject *)this, Method_CoinRoomEffectComponent__Update_b__23_0__, 0LL);
      if ( Instance )
      {
        CommonUI__maskFadeout((CommonUI_o *)Instance, 2, EFFECT_FADE_TIME, v19, 0LL);
        return;
      }
    }
    else
    {
      this->fields.endCallBack = 0LL;
      sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.endCallBack, 0LL, v9, v10, v11, v12, v13, v14);
      this->fields.isEffectEnd = 0;
      this->fields.state = 2;
      if ( !BgmManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
      MainBgmName = BgmManager__GetMainBgmName(0LL);
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      SoundManager__playBgm(MainBgmName, 0LL);
      circleAnimation = (SimpleAnimation_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( circleAnimation )
      {
        AvalonSceneManager__transitionScene((AvalonSceneManager_o *)circleAnimation, 90, 1, 0LL, 0LL);
        return;
      }
    }
    goto LABEL_26;
  }
}


void __fastcall CoinRoomEffectComponent___Update_b__23_0(CoinRoomEffectComponent_o *this, const MethodInfo *method)
{
  CoinRoomEffectComponent_o *v2; // x19
  struct System_Action_o *endCallBack; // x8
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  CommonUI_o *v10; // x19

  v2 = this;
  if ( (byte_4BDFC54 & 1) == 0 )
  {
    sub_1C21E38(&CoinRoomUtility_TypeInfo);
    this = (CoinRoomEffectComponent_o *)sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BDFC54 = 1;
  }
  endCallBack = v2->fields.endCallBack;
  if ( !endCallBack )
    goto LABEL_8;
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))endCallBack->fields.m_target)(
    endCallBack->fields.original_method_info,
    *(_QWORD *)&endCallBack->fields.extra_arg);
  v2->fields.endCallBack = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v2->fields.endCallBack, 0LL, v4, v5, v6, v7, v8, v9);
  v2->fields.isEffectEnd = 0;
  this = (CoinRoomEffectComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (CommonUI_o *)this;
  if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
  if ( !v10 )
LABEL_8:
    sub_1C22094(this, method);
  CommonUI__maskFadein(v10, CoinRoomUtility_TypeInfo->static_fields->EFFECT_FADE_TIME, 0LL, 0LL);
}


void __fastcall CoinRoomEffectComponent__PlayCoinArrivedSE_d__28___ctor(
        CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall CoinRoomEffectComponent__PlayCoinArrivedSE_d__28__MoveNext(
        CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  const MethodInfo *v3; // x3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_o *v8; // x19
  struct CoinRoomEffectComponent_o *_4__this; // x21
  CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_o *v10; // x20
  float duration; // s0
  int totalCount; // s1
  float arrivedPlaySeIntervalTime; // s2
  float v14; // s0
  Il2CppObject *Component_object; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  float lifeTime_5__2; // s8
  UnityEngine_WaitForSeconds_o *v29; // x20
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  int v37; // w8
  float playIntervalTime_5__4; // s0
  float v39; // s0
  float v40; // s1
  float totalTime_5__7; // s8
  float deltaTime; // s0
  float time_5__8; // s9
  float v44; // s0
  _QWORD *v45; // x0
  _BOOL4 isGaugeAnimation_5__5; // w9
  int v47; // w8
  struct UserCoinRoomEntity_o *beforeEntity; // x8
  struct UserCoinRoomEntity_o *afterEntity; // x9
  bool result; // w0
  PartyOrganizationUtility_o *v51; // x19
  UnityEngine_ParticleSystem_MinMaxCurve_o v52; // [xsp+0h] [xbp-80h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v53; // [xsp+20h] [xbp-60h] BYREF
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+48h] [xbp-38h] BYREF
  UnityEngine_ParticleSystem_MainModule_o v55; // 0:x0.8
  UnityEngine_ParticleSystem_MainModule_o v56; // 0:x0.8

  v8 = this;
  if ( (byte_4BDFC59 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_CoinRoomGaugeEffectComponent___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_ParticleSystem___);
    sub_1C21E38(&Method_CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_MoveNext__);
    this = (CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_o *)sub_1C21E38(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_4BDFC59 = 1;
  }
  m_ParticleSystem = 0LL;
  memset(&v53, 0, sizeof(v53));
  _4__this = v8->fields.__4__this;
  switch ( v8->fields.__1__state )
  {
    case 0:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_32;
      this = (CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_o *)_4__this->fields.coinPartObject;
      if ( !this )
        goto LABEL_32;
      this = (CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                     (UnityEngine_GameObject_o *)this,
                                                                     (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_ParticleSystem___);
      if ( !this )
        goto LABEL_32;
      v10 = this;
      m_ParticleSystem = UnityEngine_ParticleSystem__get_main((UnityEngine_ParticleSystem_o *)this, 0LL).fields.m_ParticleSystem;
      v55.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
      UnityEngine_ParticleSystem_MainModule__get_startLifetime(&v52, v55, 0LL);
      v53 = v52;
      v8->fields._lifeTime_5__2 = UnityEngine_ParticleSystem_MinMaxCurve__get_constant(&v53, 0LL);
      m_ParticleSystem = UnityEngine_ParticleSystem__get_main((UnityEngine_ParticleSystem_o *)v10, 0LL).fields.m_ParticleSystem;
      v56.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
      duration = UnityEngine_ParticleSystem_MainModule__get_duration(v56, 0LL);
      totalCount = v8->fields.totalCount;
      v8->fields._duration_5__3 = duration;
      arrivedPlaySeIntervalTime = _4__this->fields.arrivedPlaySeIntervalTime;
      v8->fields._isGaugeAnimation_5__5 = 0;
      v14 = duration / (float)totalCount;
      if ( v14 <= arrivedPlaySeIntervalTime )
        v14 = arrivedPlaySeIntervalTime;
      v8->fields._playIntervalTime_5__4 = v14;
      this = (CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_o *)_4__this->fields.gaugeObject;
      if ( !this )
        goto LABEL_32;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)this,
                           (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_CoinRoomGaugeEffectComponent___);
      v8->fields._gaugeEffectComponent_5__6 = (struct CoinRoomGaugeEffectComponent_o *)Component_object;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&v8->fields._gaugeEffectComponent_5__6,
        (int64_t)Component_object,
        v16,
        v17,
        v18,
        v19,
        v20,
        v21);
LABEL_12:
      this = (CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_o *)_4__this->fields.coinPartObject;
      if ( !this )
        goto LABEL_32;
      if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL) )
      {
        lifeTime_5__2 = v8->fields._lifeTime_5__2;
        v29 = (UnityEngine_WaitForSeconds_o *)sub_1C22084(UnityEngine_WaitForSeconds_TypeInfo);
        UnityEngine_WaitForSeconds___ctor(v29, lifeTime_5__2 * 0.9, 0LL);
        v8->fields.__2__current = (Il2CppObject *)v29;
        p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
        sub_1C21DDC(p__2__current, (int64_t)v29, v31, v32, v33, v34, v35, v36);
        v37 = 2;
LABEL_29:
        *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = v37;
        return 1;
      }
      else
      {
        v8->fields.__2__current = 0LL;
        v51 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
        sub_1C21DDC(v51, 0LL, v22, v23, v24, v25, v26, v27);
        result = 1;
        *(_DWORD *)&v51[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
      }
      return result;
    case 1:
      v8->fields.__1__state = -1;
      if ( _4__this )
        goto LABEL_12;
      goto LABEL_32;
    case 2:
      playIntervalTime_5__4 = v8->fields._playIntervalTime_5__4;
      v8->fields._totalTime_5__7 = 0.0;
      v39 = playIntervalTime_5__4 + 1.0;
      v8->fields._playCount_5__9 = 0;
      v8->fields.__1__state = -1;
      v8->fields._time_5__8 = v39;
      v40 = 0.0;
      goto LABEL_17;
    case 3:
      totalTime_5__7 = v8->fields._totalTime_5__7;
      v8->fields.__1__state = -1;
      deltaTime = UnityEngine_Time__get_deltaTime(0LL);
      time_5__8 = v8->fields._time_5__8;
      v8->fields._totalTime_5__7 = totalTime_5__7 + deltaTime;
      v44 = UnityEngine_Time__get_deltaTime(0LL);
      v40 = v8->fields._totalTime_5__7;
      v39 = time_5__8 + v44;
      v8->fields._time_5__8 = v39;
LABEL_17:
      if ( v40 >= v8->fields._duration_5__3 || v8->fields._playCount_5__9 >= v8->fields.totalCount )
        return 0;
      if ( v39 < v8->fields._playIntervalTime_5__4 )
        goto LABEL_28;
      v45 = Method_CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_MoveNext__;
      if ( (*((_BYTE *)Method_CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_MoveNext__ + 83) & 2) != 0 )
        v45 = (_QWORD *)sub_1C21E50(Method_CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_MoveNext__);
      this = (CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_o *)sub_1C21E1C(v45, v45[4]);
      if ( !_4__this )
        goto LABEL_32;
      this = (CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_o *)OverwriteAssetSoundName__PlaySeContinue(
                                                                     (System_Reflection_MethodBase_o *)this,
                                                                     _4__this->fields.arrivedPlaySeName,
                                                                     0,
                                                                     0LL);
      isGaugeAnimation_5__5 = v8->fields._isGaugeAnimation_5__5;
      v47 = v8->fields._playCount_5__9 + 1;
      v8->fields._time_5__8 = 0.0;
      v8->fields._playCount_5__9 = v47;
      if ( !isGaugeAnimation_5__5 )
      {
        beforeEntity = _4__this->fields.beforeEntity;
        if ( !beforeEntity
          || (afterEntity = _4__this->fields.afterEntity) == 0LL
          || (this = (CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_o *)v8->fields._gaugeEffectComponent_5__6) == 0LL )
        {
LABEL_32:
          sub_1C22094(this, method);
        }
        CoinRoomGaugeEffectComponent__StartAnimation(
          (CoinRoomGaugeEffectComponent_o *)this,
          beforeEntity->fields.cnt,
          afterEntity->fields.cnt,
          v3);
        v8->fields._isGaugeAnimation_5__5 = 1;
      }
LABEL_28:
      v8->fields.__2__current = 0LL;
      p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      sub_1C21DDC(p__2__current, 0LL, v2, (int32_t)v3, v4, v5, v6, v7);
      v37 = 3;
      goto LABEL_29;
    default:
      return 0;
  }
}


Il2CppObject *__fastcall CoinRoomEffectComponent__PlayCoinArrivedSE_d__28__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn CoinRoomEffectComponent__PlayCoinArrivedSE_d__28__System_Collections_IEnumerator_Reset(
        CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
}


Il2CppObject *__fastcall CoinRoomEffectComponent__PlayCoinArrivedSE_d__28__System_Collections_IEnumerator_get_Current(
        CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall CoinRoomEffectComponent__PlayCoinArrivedSE_d__28__System_IDisposable_Dispose(
        CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall CoinRoomEffectComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BDFC55 & 1) == 0 )
  {
    sub_1C21E38(&CoinRoomEffectComponent___c_TypeInfo);
    byte_4BDFC55 = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(CoinRoomEffectComponent___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  CoinRoomEffectComponent___c_TypeInfo->static_fields->__9 = (struct CoinRoomEffectComponent___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)CoinRoomEffectComponent___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall CoinRoomEffectComponent___c___ctor(CoinRoomEffectComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall CoinRoomEffectComponent___c___NextAcquiredEffect_b__27_1(
        CoinRoomEffectComponent___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1
  System_String_o *MainBgmName; // x19

  if ( (byte_4BDFC57 & 1) == 0 )
  {
    sub_1C21E38(&BgmManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C21E38(&SoundManager_TypeInfo);
    byte_4BDFC57 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  CommonUI__ReleaseCoinRoomGetEffect((CommonUI_o *)Instance, 0LL);
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  MainBgmName = BgmManager__GetMainBgmName(0LL);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm(MainBgmName, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
LABEL_10:
    sub_1C22094(Instance, v3);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 90, 1, 0LL, 0LL);
}


int32_t __fastcall CoinRoomEffectComponent___c___StartPutInAnimation_b__25_0(
        CoinRoomEffectComponent___c_o *this,
        System_Collections_Generic_KeyValuePair_int__SelectedUserSvtCoin__o x,
        const MethodInfo *method)
{
  struct SelectedUserSvtCoin_o *value; // x19

  value = x.fields.value;
  if ( (byte_4BDFC56 & 1) == 0 )
  {
    this = (CoinRoomEffectComponent___c_o *)sub_1C21E38(&Method_System_Collections_Generic_KeyValuePair_int__SelectedUserSvtCoin__get_Value__);
    byte_4BDFC56 = 1;
  }
  if ( !value )
    sub_1C22094(this, *(_QWORD *)&x.fields.key);
  return value->fields._num_k__BackingField;
}


void __fastcall CoinRoomEffectComponent___c__DisplayClass27_0___ctor(
        CoinRoomEffectComponent___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall CoinRoomEffectComponent___c__DisplayClass27_0___NextAcquiredEffect_b__0(
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
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  v2 = this;
  if ( (byte_4BDFC58 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_CoinRoomEffectComponent___c__NextAcquiredEffect_b__27_1__);
    this = (CoinRoomEffectComponent___c__DisplayClass27_0_o *)sub_1C21E38(&CoinRoomEffectComponent___c_TypeInfo);
    byte_4BDFC58 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_15;
  this = (CoinRoomEffectComponent___c__DisplayClass27_0_o *)_4__this->fields.gaugeObject;
  if ( !this )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (CoinRoomEffectComponent___c__DisplayClass27_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = v2->fields.__4__this;
  if ( !v4 )
    goto LABEL_15;
  v5 = (CommonUI_o *)this;
  this = (CoinRoomEffectComponent___c__DisplayClass27_0_o *)v4->fields.acquiredEffect;
  if ( !this )
    goto LABEL_15;
  this = (CoinRoomEffectComponent___c__DisplayClass27_0_o *)UnityEngine_GameObject__get_transform(
                                                              (UnityEngine_GameObject_o *)this,
                                                              0LL);
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
    _9__27_1 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(_9__27_1, v10, Method_CoinRoomEffectComponent___c__NextAcquiredEffect_b__27_1__, 0LL);
    static_fields = CoinRoomEffectComponent___c_TypeInfo->static_fields;
    static_fields->__9__27_1 = _9__27_1;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&static_fields->__9__27_1,
      (int64_t)_9__27_1,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
  }
  if ( !v5 )
LABEL_15:
    sub_1C22094(this, method);
  CommonUI__OpenCoinRoomGetEffect(v5, (UnityEngine_Transform_o *)v8, 0, questRewardInfo, _9__27_1, 0LL);
}