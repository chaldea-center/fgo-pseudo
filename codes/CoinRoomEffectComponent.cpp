void __fastcall CoinRoomEffectComponent___ctor(CoinRoomEffectComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t v8; // w1
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_Dictionary_int__object__o *v11; // x20
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w1
  int32_t v15; // w2
  int32_t v16; // w3

  if ( (byte_49FF8EA & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin___ctor__, method);
    sub_1B640C8(&System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__TypeInfo, v5);
    sub_1B640C8(&StringLiteral_16803/*"ar154"*/, v6);
    sub_1B640C8(&StringLiteral_1/*""*/, v7);
    byte_49FF8EA = 1;
  }
  v8 = StringLiteral_16803/*"ar154"*/;
  this->fields.arrivedPlaySeName = (struct System_String_o *)StringLiteral_16803/*"ar154"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.arrivedPlaySeName, v8, v2, v3);
  *(_QWORD *)&this->fields.arrivedPlaySeIntervalTime = 0x3E83D4CCCCDLL;
  this->fields.TARGET_ITEM_ID = 7999;
  v11 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B64314(
                                                                  System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__TypeInfo,
                                                                  v9,
                                                                  v10);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v11,
    (const MethodInfo_3122FB0 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin___ctor__);
  this->fields.selectedCoinDic = (struct System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *)v11;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.selectedCoinDic, (int32_t)v11, v12, v13);
  v14 = (int)StringLiteral_1/*""*/;
  this->fields.stateName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.stateName, v14, v15, v16);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


UnityEngine_ParticleSystem_EmissionModule_o __fastcall CoinRoomEffectComponent__GetEmissionModule(
        CoinRoomEffectComponent_o *this,
        UnityEngine_GameObject_o *targetObject,
        const MethodInfo *method)
{
  if ( (byte_49FF8E7 & 1) == 0 )
  {
    this = (CoinRoomEffectComponent_o *)sub_1B640C8(
                                          &Method_UnityEngine_GameObject_GetComponent_ParticleSystem___,
                                          targetObject);
    byte_49FF8E7 = 1;
  }
  if ( !targetObject
    || (this = (CoinRoomEffectComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                              targetObject,
                                              (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_ParticleSystem___)) == 0LL )
  {
    sub_1B64324(this);
  }
  return UnityEngine_ParticleSystem__get_emission((UnityEngine_ParticleSystem_o *)this, 0LL);
}


void __fastcall CoinRoomEffectComponent__NextAcquiredEffect(CoinRoomEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x20
  UnityEngine_GameObject_o *acquiredEffect; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  __int64 v12; // x1
  __int64 v13; // x2
  QuestRewardInfo_o *v14; // x21
  int32_t v15; // w2
  int32_t v16; // w3
  _DWORD *v17; // x8
  int32_t TARGET_ITEM_ID; // w9
  Il2CppObject *Instance; // x19
  __int64 v20; // x1
  __int64 v21; // x2
  System_Action_o *v22; // x21

  if ( (byte_49FF8E8 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&QuestRewardInfo_TypeInfo, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B640C8(&Method_CoinRoomEffectComponent___c__DisplayClass27_0__NextAcquiredEffect_b__0__, v6);
    sub_1B640C8(&CoinRoomEffectComponent___c__DisplayClass27_0_TypeInfo, v7);
    byte_49FF8E8 = 1;
  }
  v8 = sub_1B64314(CoinRoomEffectComponent___c__DisplayClass27_0_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    goto LABEL_11;
  *(_QWORD *)(v8 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v8 + 16), (int32_t)this, v10, v11);
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
        v14 = (QuestRewardInfo_o *)sub_1B64314(QuestRewardInfo_TypeInfo, v12, v13);
        QuestRewardInfo___ctor(v14, 0LL);
        *(_QWORD *)(v8 + 24) = v14;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v8 + 24), (int32_t)v14, v15, v16);
        v17 = *(_DWORD **)(v8 + 24);
        if ( v17 )
        {
          TARGET_ITEM_ID = this->fields.TARGET_ITEM_ID;
          v17[4] = 2;
          v17[5] = TARGET_ITEM_ID;
          v17[6] = 1;
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v22 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v20, v21);
          System_Action___ctor(
            v22,
            (Il2CppObject *)v8,
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
    sub_1B64324(acquiredEffect);
  }
}


void __fastcall CoinRoomEffectComponent__OpenEffect(
        CoinRoomEffectComponent_o *this,
        UserCoinRoomEntity_o *beforeUserCoinRoomEntity,
        System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *selectedCoinDic,
        const MethodInfo *method)
{
  UserCoinRoomEntity_o *v5; // x21
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  DataManager_o *Instance; // x0
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *Entity; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t v21; // w2
  int32_t v22; // w3
  struct UserCoinRoomEntity_o *afterEntity; // x8
  int32_t cnt; // w8
  __int64 *v25; // x8
  struct System_String_o *v26; // x1
  const MethodInfo *v27; // x1

  v5 = beforeUserCoinRoomEntity;
  if ( (byte_49FF8E5 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserCoinRoomMaster___, beforeUserCoinRoomEntity);
    sub_1B640C8(&Method_DataMasterBase_UserCoinRoomMaster__UserCoinRoomEntity__long__GetEntity__, v7);
    sub_1B640C8(&NetworkManager_TypeInfo, v8);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_1B640C8(&SoundManager_TypeInfo, v10);
    sub_1B640C8(&UserCoinRoomEntity_TypeInfo, v11);
    sub_1B640C8(&StringLiteral_18850/*"effect_Circle_act2"*/, v12);
    sub_1B640C8(&StringLiteral_18849/*"effect_Circle_act1"*/, v13);
    byte_49FF8E5 = 1;
  }
  this->fields.state = 1;
  if ( !v5 )
  {
    v5 = (UserCoinRoomEntity_o *)sub_1B64314(UserCoinRoomEntity_TypeInfo, beforeUserCoinRoomEntity, selectedCoinDic);
    UserCoinRoomEntity___ctor(v5, 0LL);
  }
  this->fields.beforeEntity = v5;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.beforeEntity,
    (int32_t)v5,
    (int32_t)selectedCoinDic,
    (int32_t)method);
  this->fields.selectedCoinDic = selectedCoinDic;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.selectedCoinDic, (int32_t)selectedCoinDic, v14, v15);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserCoinRoomMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_object
    || (Entity = DataMasterBase_object__object__long___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                   (int64_t)Instance,
                   (const MethodInfo_30D4050 *)Method_DataMasterBase_UserCoinRoomMaster__UserCoinRoomEntity__long__GetEntity__),
        this->fields.afterEntity = (struct UserCoinRoomEntity_o *)Entity,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.afterEntity, (int32_t)Entity, v19, v20),
        (afterEntity = this->fields.afterEntity) == 0LL) )
  {
LABEL_16:
    sub_1B64324(Instance);
  }
  cnt = afterEntity->fields.cnt;
  this->fields.isAcquired = cnt == 0;
  if ( cnt )
    v25 = &StringLiteral_18849/*"effect_Circle_act1"*/;
  else
    v25 = &StringLiteral_18850/*"effect_Circle_act2"*/;
  v26 = (struct System_String_o *)*v25;
  this->fields.stateName = (struct System_String_o *)*v25;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.stateName, (int32_t)v26, v21, v22);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__stopBgm(0LL);
  CoinRoomEffectComponent__StartPutInAnimation(this, v27);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall CoinRoomEffectComponent__PlayCoinArrivedSE(
        CoinRoomEffectComponent_o *this,
        int32_t totalCount,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_49FF8E9 & 1) == 0 )
  {
    sub_1B640C8(&CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_TypeInfo, *(_QWORD *)&totalCount);
    byte_49FF8E9 = 1;
  }
  v5 = sub_1B64314(CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_TypeInfo, *(_QWORD *)&totalCount, method);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(_DWORD *)(v5 + 40) = totalCount;
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall CoinRoomEffectComponent__StartPutInAnimation(CoinRoomEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Action_o *v13; // x20
  int32_t v14; // w2
  int32_t v15; // w3
  CoinRoomUtility_c *v16; // x0
  int32_t v17; // w0
  __int64 v18; // x1
  __int64 v19; // x2
  CoinRoomEffectComponent___c_c *v20; // x8
  struct System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *selectedCoinDic; // x21
  int32_t v22; // w20
  System_Func_T__TResult__o *_9__25_0; // x22
  Il2CppObject *v24; // x23
  struct CoinRoomEffectComponent___c_StaticFields *static_fields; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  UnityEngine_GameObject_o *coinListPanel; // x0
  int energyPartLoopRateOverTimeMax; // w22
  Il2CppObject *Component_object; // x0
  struct SimpleAnimation_o **p_circleAnimation; // x21
  int32_t v32; // w2
  int32_t v33; // w3
  CoinRoomEffectComponent_o *v34; // x0
  const MethodInfo *v35; // x2
  const MethodInfo *v36; // x2
  System_Collections_IEnumerator_o *v37; // x0
  struct UserCoinRoomEntity_o *afterEntity; // x8
  int32_t cnt; // w8
  int32_t v40; // w22
  const MethodInfo *v41; // x4
  struct UserCoinRoomEntity_o *beforeEntity; // x8
  struct UserCoinRoomEntity_o *v43; // x8
  UnityEngine_ParticleSystem_MinMaxCurve_o v44; // [xsp+0h] [xbp-90h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v45; // [xsp+28h] [xbp-68h] BYREF
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+48h] [xbp-48h] BYREF
  UnityEngine_ParticleSystem_EmissionModule_o v47; // 0:x0.8

  if ( (byte_49FF8E6 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_CoinRoomEffectComponent_NextAcquiredEffect__, v4);
    sub_1B640C8(&CoinRoomUtility_TypeInfo, v5);
    sub_1B640C8(&Method_System_Linq_Enumerable_Sum_KeyValuePair_int__SelectedUserSvtCoin____, v6);
    sub_1B640C8(&System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__TypeInfo, v7);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_CoinRoomControlEffect___, v8);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v9);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_TitleInfoControl___, v10);
    sub_1B640C8(&Method_CoinRoomEffectComponent___c__StartPutInAnimation_b__25_0__, v11);
    sub_1B640C8(&CoinRoomEffectComponent___c_TypeInfo, v12);
    byte_49FF8E6 = 1;
  }
  m_ParticleSystem = 0LL;
  v13 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, method, v2);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_CoinRoomEffectComponent_NextAcquiredEffect__, 0LL);
  this->fields.endCallBack = v13;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.endCallBack, (int32_t)v13, v14, v15);
  v16 = CoinRoomUtility_TypeInfo;
  if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
  v17 = CoinRoomUtility__MaxPoint((const MethodInfo *)v16);
  v20 = CoinRoomEffectComponent___c_TypeInfo;
  selectedCoinDic = this->fields.selectedCoinDic;
  v22 = v17;
  if ( !CoinRoomEffectComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomEffectComponent___c_TypeInfo);
    v20 = CoinRoomEffectComponent___c_TypeInfo;
  }
  _9__25_0 = (System_Func_T__TResult__o *)v20->static_fields->__9__25_0;
  if ( !_9__25_0 )
  {
    if ( !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      v20 = CoinRoomEffectComponent___c_TypeInfo;
    }
    v24 = (Il2CppObject *)v20->static_fields->__9;
    _9__25_0 = (System_Func_T__TResult__o *)sub_1B64314(
                                              System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__TypeInfo,
                                              v18,
                                              v19);
    System_Func_KeyValuePair_int__object___int____ctor(
      _9__25_0,
      v24,
      Method_CoinRoomEffectComponent___c__StartPutInAnimation_b__25_0__,
      0LL);
    static_fields = CoinRoomEffectComponent___c_TypeInfo->static_fields;
    static_fields->__9__25_0 = (struct System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__o *)_9__25_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__25_0, (int32_t)_9__25_0, v26, v27);
  }
  coinListPanel = (UnityEngine_GameObject_o *)System_Linq_Enumerable__Sum_KeyValuePair_int__object__(
                                                (System_Collections_Generic_IEnumerable_TSource__o *)selectedCoinDic,
                                                (System_Func_TSource__int__o *)_9__25_0,
                                                (const MethodInfo_2E6FFBC *)Method_System_Linq_Enumerable_Sum_KeyValuePair_int__SelectedUserSvtCoin____);
  if ( !this->fields.effectCircleObject )
    goto LABEL_31;
  energyPartLoopRateOverTimeMax = (int)coinListPanel;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       this->fields.effectCircleObject,
                       (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  this->fields.circleAnimation = (struct SimpleAnimation_o *)Component_object;
  p_circleAnimation = &this->fields.circleAnimation;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.circleAnimation, (int32_t)Component_object, v32, v33);
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
                                                (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoControl___);
  if ( !coinListPanel )
    goto LABEL_31;
  TitleInfoControl__SetHelpBtn((TitleInfoControl_o *)coinListPanel, 0, 0LL);
  MainMenuBar__setMenuActive(0, 0LL, 0LL);
  if ( energyPartLoopRateOverTimeMax >= this->fields.energyPartLoopRateOverTimeMax )
    energyPartLoopRateOverTimeMax = this->fields.energyPartLoopRateOverTimeMax;
  m_ParticleSystem = CoinRoomEffectComponent__GetEmissionModule(v34, this->fields.coinPartObject, v35).fields.m_ParticleSystem;
  UnityEngine_ParticleSystem_MinMaxCurve__op_Implicit(&v45, (float)energyPartLoopRateOverTimeMax, 0LL);
  v47.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
  v44 = v45;
  UnityEngine_ParticleSystem_EmissionModule__set_rateOverTime(v47, &v44, 0LL);
  v37 = CoinRoomEffectComponent__PlayCoinArrivedSE(this, energyPartLoopRateOverTimeMax, v36);
  coinListPanel = (UnityEngine_GameObject_o *)UnityEngine_MonoBehaviour__StartCoroutine_69113008(
                                                (UnityEngine_MonoBehaviour_o *)this,
                                                v37,
                                                0LL);
  afterEntity = this->fields.afterEntity;
  if ( !afterEntity )
    goto LABEL_31;
  cnt = afterEntity->fields.cnt;
  coinListPanel = this->fields.effectCircleObject;
  v40 = cnt ? cnt : v22;
  if ( !coinListPanel )
    goto LABEL_31;
  coinListPanel = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                coinListPanel,
                                                (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_CoinRoomControlEffect___);
  beforeEntity = this->fields.beforeEntity;
  if ( !beforeEntity
    || !coinListPanel
    || (CoinRoomControlEffect__SetValue(
          (CoinRoomControlEffect_o *)coinListPanel,
          beforeEntity->fields.cnt,
          v40,
          v22,
          v41),
        (coinListPanel = this->fields.gaugeObject) == 0LL)
    || (UnityEngine_GameObject__SetActive(coinListPanel, 1, 0LL), (v43 = this->fields.beforeEntity) == 0LL)
    || (coinListPanel = (UnityEngine_GameObject_o *)this->fields.gaugeSlider) == 0LL
    || (UIProgressBar__set_value((UIProgressBar_o *)coinListPanel, (float)v43->fields.cnt / (float)v22, 0LL),
        (coinListPanel = (UnityEngine_GameObject_o *)*p_circleAnimation) == 0LL) )
  {
LABEL_31:
    sub_1B64324(coinListPanel);
  }
  SimpleAnimation__Play_63513060((SimpleAnimation_o *)coinListPanel, this->fields.stateName, 0LL);
}


void __fastcall CoinRoomEffectComponent__Update(CoinRoomEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  SimpleAnimation_o *circleAnimation; // x0
  SimpleAnimation_c *klass; // x8
  SimpleAnimation_o *v12; // x21
  __int64 v13; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v15; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  _BOOL4 isAcquired; // w8
  __int64 v19; // x1
  __int64 v20; // x2
  Il2CppObject *Instance; // x20
  CoinRoomUtility_c *v22; // x8
  float EFFECT_FADE_TIME; // s8
  System_Action_o *v24; // x21
  System_String_o *MainBgmName; // x19

  if ( (byte_49FF8E4 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&BgmManager_TypeInfo, v3);
    sub_1B640C8(&Method_CoinRoomEffectComponent__Update_b__23_0__, v4);
    sub_1B640C8(&CoinRoomUtility_TypeInfo, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v7);
    sub_1B640C8(&SoundManager_TypeInfo, v8);
    sub_1B640C8(&SimpleAnimation_State_TypeInfo, v9);
    byte_49FF8E4 = 1;
  }
  if ( !this->fields.endCallBack || this->fields.isEffectEnd )
    return;
  circleAnimation = this->fields.circleAnimation;
  if ( !circleAnimation
    || (circleAnimation = (SimpleAnimation_o *)SimpleAnimation__GetState(circleAnimation, this->fields.stateName, 0LL)) == 0LL )
  {
LABEL_26:
    sub_1B64324(circleAnimation);
  }
  klass = circleAnimation->klass;
  v12 = circleAnimation;
  v13 = *(unsigned __int16 *)(&circleAnimation->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&circleAnimation->klass->_2.bitflags2 + 3) )
  {
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v13;
      p_offset += 2;
      if ( !v13 )
        goto LABEL_11;
    }
    v15 = (__int64)(&klass->vtable._5_OnDisable.method + 2 * *(_DWORD *)p_offset);
  }
  else
  {
LABEL_11:
    v15 = sub_1BB60A8(circleAnimation, SimpleAnimation_State_TypeInfo, 5LL);
  }
  if ( (*(float (__fastcall **)(SimpleAnimation_o *, _QWORD))v15)(v12, *(_QWORD *)(v15 + 8)) >= 0.95 )
  {
    isAcquired = this->fields.isAcquired;
    this->fields.isEffectEnd = 1;
    if ( isAcquired )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v22 = CoinRoomUtility_TypeInfo;
      if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
        v22 = CoinRoomUtility_TypeInfo;
      }
      EFFECT_FADE_TIME = v22->static_fields->EFFECT_FADE_TIME;
      v24 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v19, v20);
      System_Action___ctor(v24, (Il2CppObject *)this, Method_CoinRoomEffectComponent__Update_b__23_0__, 0LL);
      if ( Instance )
      {
        CommonUI__maskFadeout((CommonUI_o *)Instance, 2, EFFECT_FADE_TIME, v24, 0LL);
        return;
      }
    }
    else
    {
      this->fields.endCallBack = 0LL;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.endCallBack, 0, v16, v17);
      this->fields.isEffectEnd = 0;
      this->fields.state = 2;
      if ( !BgmManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
      MainBgmName = BgmManager__GetMainBgmName(0LL);
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      SoundManager__playBgm(MainBgmName, 0LL);
      circleAnimation = (SimpleAnimation_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
  __int64 v3; // x1
  struct System_Action_o *endCallBack; // x8
  int32_t v5; // w2
  int32_t v6; // w3
  CommonUI_o *v7; // x19

  v2 = this;
  if ( (byte_49FF8EB & 1) == 0 )
  {
    sub_1B640C8(&CoinRoomUtility_TypeInfo, method);
    this = (CoinRoomEffectComponent_o *)sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    byte_49FF8EB = 1;
  }
  endCallBack = v2->fields.endCallBack;
  if ( !endCallBack )
    goto LABEL_8;
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))endCallBack->fields.m_target)(
    endCallBack->fields.original_method_info,
    *(_QWORD *)&endCallBack->fields.extra_arg);
  v2->fields.endCallBack = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v2->fields.endCallBack, 0, v5, v6);
  v2->fields.isEffectEnd = 0;
  this = (CoinRoomEffectComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (CommonUI_o *)this;
  if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
  if ( !v7 )
LABEL_8:
    sub_1B64324(this);
  CommonUI__maskFadein(v7, CoinRoomUtility_TypeInfo->static_fields->EFFECT_FADE_TIME, 0LL, 0LL);
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
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct CoinRoomEffectComponent_o *_4__this; // x21
  CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_o *v9; // x20
  float duration; // s0
  int totalCount; // s1
  float arrivedPlaySeIntervalTime; // s2
  float v13; // s0
  Il2CppObject *Component_object; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  __int64 v17; // x1
  __int64 v18; // x2
  int32_t v19; // w3
  float lifeTime_5__2; // s8
  UnityEngine_WaitForSeconds_o *v21; // x20
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v23; // w2
  int32_t v24; // w3
  int v25; // w8
  float playIntervalTime_5__4; // s0
  float v27; // s0
  float v28; // s1
  float totalTime_5__7; // s8
  float deltaTime; // s0
  float time_5__8; // s9
  float v32; // s0
  _QWORD *v33; // x0
  _BOOL4 isGaugeAnimation_5__5; // w9
  int v35; // w8
  struct UserCoinRoomEntity_o *beforeEntity; // x8
  struct UserCoinRoomEntity_o *afterEntity; // x9
  bool result; // w0
  ServantStatusBattleListViewItem_o *v39; // x19
  UnityEngine_ParticleSystem_MinMaxCurve_o v40; // [xsp+0h] [xbp-80h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v41; // [xsp+20h] [xbp-60h] BYREF
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+48h] [xbp-38h] BYREF
  UnityEngine_ParticleSystem_MainModule_o v43; // 0:x0.8
  UnityEngine_ParticleSystem_MainModule_o v44; // 0:x0.8

  v4 = this;
  if ( (byte_49FF8F0 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_CoinRoomGaugeEffectComponent___, method);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_ParticleSystem___, v5);
    sub_1B640C8(&Method_CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_MoveNext__, v6);
    this = (CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_o *)sub_1B640C8(&UnityEngine_WaitForSeconds_TypeInfo, v7);
    byte_49FF8F0 = 1;
  }
  m_ParticleSystem = 0LL;
  memset(&v41, 0, sizeof(v41));
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
                                                                     (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_ParticleSystem___);
      if ( !this )
        goto LABEL_32;
      v9 = this;
      m_ParticleSystem = UnityEngine_ParticleSystem__get_main((UnityEngine_ParticleSystem_o *)this, 0LL).fields.m_ParticleSystem;
      v43.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
      UnityEngine_ParticleSystem_MainModule__get_startLifetime(&v40, v43, 0LL);
      v41 = v40;
      v4->fields._lifeTime_5__2 = UnityEngine_ParticleSystem_MinMaxCurve__get_constant(&v41, 0LL);
      m_ParticleSystem = UnityEngine_ParticleSystem__get_main((UnityEngine_ParticleSystem_o *)v9, 0LL).fields.m_ParticleSystem;
      v44.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
      duration = UnityEngine_ParticleSystem_MainModule__get_duration(v44, 0LL);
      totalCount = v4->fields.totalCount;
      v4->fields._duration_5__3 = duration;
      arrivedPlaySeIntervalTime = _4__this->fields.arrivedPlaySeIntervalTime;
      v4->fields._isGaugeAnimation_5__5 = 0;
      v13 = duration / (float)totalCount;
      if ( v13 <= arrivedPlaySeIntervalTime )
        v13 = arrivedPlaySeIntervalTime;
      v4->fields._playIntervalTime_5__4 = v13;
      this = (CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_o *)_4__this->fields.gaugeObject;
      if ( !this )
        goto LABEL_32;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)this,
                           (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_CoinRoomGaugeEffectComponent___);
      v4->fields._gaugeEffectComponent_5__6 = (struct CoinRoomGaugeEffectComponent_o *)Component_object;
      sub_1B6406C(
        (ServantStatusBattleListViewItem_o *)&v4->fields._gaugeEffectComponent_5__6,
        (int32_t)Component_object,
        v15,
        v16);
LABEL_12:
      this = (CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_o *)_4__this->fields.coinPartObject;
      if ( !this )
        goto LABEL_32;
      if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL) )
      {
        lifeTime_5__2 = v4->fields._lifeTime_5__2;
        v21 = (UnityEngine_WaitForSeconds_o *)sub_1B64314(UnityEngine_WaitForSeconds_TypeInfo, v17, v18);
        UnityEngine_WaitForSeconds___ctor(v21, lifeTime_5__2 * 0.9, 0LL);
        v4->fields.__2__current = (Il2CppObject *)v21;
        p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
        sub_1B6406C(p__2__current, (int32_t)v21, v23, v24);
        v25 = 2;
LABEL_29:
        *(_DWORD *)&p__2__current[-1].fields.isMine = v25;
        return 1;
      }
      else
      {
        v4->fields.__2__current = 0LL;
        v39 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
        sub_1B6406C(v39, 0, v18, v19);
        result = 1;
        *(_DWORD *)&v39[-1].fields.isMine = 1;
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
      v27 = playIntervalTime_5__4 + 1.0;
      v4->fields._playCount_5__9 = 0;
      v4->fields.__1__state = -1;
      v4->fields._time_5__8 = v27;
      v28 = 0.0;
      goto LABEL_17;
    case 3:
      totalTime_5__7 = v4->fields._totalTime_5__7;
      v4->fields.__1__state = -1;
      deltaTime = UnityEngine_Time__get_deltaTime(0LL);
      time_5__8 = v4->fields._time_5__8;
      v4->fields._totalTime_5__7 = totalTime_5__7 + deltaTime;
      v32 = UnityEngine_Time__get_deltaTime(0LL);
      v28 = v4->fields._totalTime_5__7;
      v27 = time_5__8 + v32;
      v4->fields._time_5__8 = v27;
LABEL_17:
      if ( v28 >= v4->fields._duration_5__3 || v4->fields._playCount_5__9 >= v4->fields.totalCount )
        return 0;
      if ( v27 < v4->fields._playIntervalTime_5__4 )
        goto LABEL_28;
      v33 = Method_CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_MoveNext__;
      if ( (*((_BYTE *)Method_CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_MoveNext__ + 83) & 2) != 0 )
        v33 = (_QWORD *)sub_1B640E0(Method_CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_MoveNext__);
      this = (CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_o *)sub_1B640AC(v33, v33[4]);
      if ( !_4__this )
        goto LABEL_32;
      this = (CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_o *)OverwriteAssetSoundName__PlaySeContinue(
                                                                     (System_Reflection_MethodBase_o *)this,
                                                                     _4__this->fields.arrivedPlaySeName,
                                                                     0LL);
      isGaugeAnimation_5__5 = v4->fields._isGaugeAnimation_5__5;
      v35 = v4->fields._playCount_5__9 + 1;
      v4->fields._time_5__8 = 0.0;
      v4->fields._playCount_5__9 = v35;
      if ( !isGaugeAnimation_5__5 )
      {
        beforeEntity = _4__this->fields.beforeEntity;
        if ( !beforeEntity
          || (afterEntity = _4__this->fields.afterEntity) == 0LL
          || (this = (CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_o *)v4->fields._gaugeEffectComponent_5__6) == 0LL )
        {
LABEL_32:
          sub_1B64324(this);
        }
        CoinRoomGaugeEffectComponent__StartAnimation(
          (CoinRoomGaugeEffectComponent_o *)this,
          beforeEntity->fields.cnt,
          afterEntity->fields.cnt,
          v3);
        v4->fields._isGaugeAnimation_5__5 = 1;
      }
LABEL_28:
      v4->fields.__2__current = 0LL;
      p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1B6406C(p__2__current, 0, v2, (int32_t)v3);
      v25 = 3;
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FF8EC & 1) == 0 )
  {
    sub_1B640C8(&CoinRoomEffectComponent___c_TypeInfo, v1);
    byte_49FF8EC = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(CoinRoomEffectComponent___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  CoinRoomEffectComponent___c_TypeInfo->static_fields->__9 = (struct CoinRoomEffectComponent___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)CoinRoomEffectComponent___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
}


void __fastcall CoinRoomEffectComponent___c___ctor(CoinRoomEffectComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall CoinRoomEffectComponent___c___NextAcquiredEffect_b__27_1(
        CoinRoomEffectComponent___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  System_String_o *MainBgmName; // x19

  if ( (byte_49FF8EE & 1) == 0 )
  {
    sub_1B640C8(&BgmManager_TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v2);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_1B640C8(&SoundManager_TypeInfo, v4);
    byte_49FF8EE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  CommonUI__ReleaseCoinRoomGetEffect((CommonUI_o *)Instance, 0LL);
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  MainBgmName = BgmManager__GetMainBgmName(0LL);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm(MainBgmName, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
LABEL_10:
    sub_1B64324(Instance);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 90, 1, 0LL, 0LL);
}


int32_t __fastcall CoinRoomEffectComponent___c___StartPutInAnimation_b__25_0(
        CoinRoomEffectComponent___c_o *this,
        System_Collections_Generic_KeyValuePair_int__SelectedUserSvtCoin__o x,
        const MethodInfo *method)
{
  struct SelectedUserSvtCoin_o *value; // x19

  value = x.fields.value;
  if ( (byte_49FF8ED & 1) == 0 )
  {
    this = (CoinRoomEffectComponent___c_o *)sub_1B640C8(
                                              &Method_System_Collections_Generic_KeyValuePair_int__SelectedUserSvtCoin__get_Value__,
                                              *(_QWORD *)&x.fields.key);
    byte_49FF8ED = 1;
  }
  if ( !value )
    sub_1B64324(this);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct CoinRoomEffectComponent_o *_4__this; // x8
  struct CoinRoomEffectComponent_o *v7; // x8
  CommonUI_o *v8; // x19
  __int64 v9; // x1
  __int64 v10; // x2
  CoinRoomEffectComponent___c_c *v11; // x8
  QuestRewardInfo_o *questRewardInfo; // x20
  CoinRoomEffectComponent___c__DisplayClass27_0_o *v13; // x21
  System_Action_o *_9__27_1; // x22
  Il2CppObject *v15; // x23
  struct CoinRoomEffectComponent___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  int32_t v18; // w3

  v2 = this;
  if ( (byte_49FF8EF & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1B640C8(&Method_CoinRoomEffectComponent___c__NextAcquiredEffect_b__27_1__, v4);
    this = (CoinRoomEffectComponent___c__DisplayClass27_0_o *)sub_1B640C8(&CoinRoomEffectComponent___c_TypeInfo, v5);
    byte_49FF8EF = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_15;
  this = (CoinRoomEffectComponent___c__DisplayClass27_0_o *)_4__this->fields.gaugeObject;
  if ( !this )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (CoinRoomEffectComponent___c__DisplayClass27_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = v2->fields.__4__this;
  if ( !v7 )
    goto LABEL_15;
  v8 = (CommonUI_o *)this;
  this = (CoinRoomEffectComponent___c__DisplayClass27_0_o *)v7->fields.acquiredEffect;
  if ( !this )
    goto LABEL_15;
  this = (CoinRoomEffectComponent___c__DisplayClass27_0_o *)UnityEngine_GameObject__get_transform(
                                                              (UnityEngine_GameObject_o *)this,
                                                              0LL);
  v11 = CoinRoomEffectComponent___c_TypeInfo;
  questRewardInfo = v2->fields.questRewardInfo;
  v13 = this;
  if ( !CoinRoomEffectComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomEffectComponent___c_TypeInfo);
    v11 = CoinRoomEffectComponent___c_TypeInfo;
  }
  _9__27_1 = v11->static_fields->__9__27_1;
  if ( !_9__27_1 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      v11 = CoinRoomEffectComponent___c_TypeInfo;
    }
    v15 = (Il2CppObject *)v11->static_fields->__9;
    _9__27_1 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v9, v10);
    System_Action___ctor(_9__27_1, v15, Method_CoinRoomEffectComponent___c__NextAcquiredEffect_b__27_1__, 0LL);
    static_fields = CoinRoomEffectComponent___c_TypeInfo->static_fields;
    static_fields->__9__27_1 = _9__27_1;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__27_1, (int32_t)_9__27_1, v17, v18);
  }
  if ( !v8 )
LABEL_15:
    sub_1B64324(this);
  CommonUI__OpenCoinRoomGetEffect(v8, (UnityEngine_Transform_o *)v13, 0, questRewardInfo, _9__27_1, 0LL);
}