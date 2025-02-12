void __fastcall CoinRoomEffectComponent___ctor(CoinRoomEffectComponent_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  int64_t v12; // x1
  System_Collections_Generic_Dictionary_int__object__o *v13; // x20
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  void *v20; // x1
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7

  if ( (byte_4BCB192 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin___ctor__, method);
    sub_1C1ABD4(&System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__TypeInfo, v9);
    sub_1C1ABD4(&StringLiteral_17144/*"ar154"*/, v10);
    sub_1C1ABD4(&StringLiteral_1/*""*/, v11);
    byte_4BCB192 = 1;
  }
  v12 = StringLiteral_17144/*"ar154"*/;
  this->fields.arrivedPlaySeName = (struct System_String_o *)StringLiteral_17144/*"ar154"*/;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.arrivedPlaySeName, v12, v2, v3, v4, v5, v6, v7);
  *(_QWORD *)&this->fields.arrivedPlaySeIntervalTime = 0x3E83D4CCCCDLL;
  this->fields.TARGET_ITEM_ID = 7999;
  v13 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C1AE20(System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v13,
    (const MethodInfo_32A1928 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin___ctor__);
  this->fields.selectedCoinDic = (struct System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *)v13;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.selectedCoinDic, (int64_t)v13, v14, v15, v16, v17, v18, v19);
  v20 = StringLiteral_1/*""*/;
  this->fields.stateName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.stateName, (int64_t)v20, v21, v22, v23, v24, v25, v26);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


UnityEngine_ParticleSystem_EmissionModule_o __fastcall CoinRoomEffectComponent__GetEmissionModule(
        CoinRoomEffectComponent_o *this,
        UnityEngine_GameObject_o *targetObject,
        const MethodInfo *method)
{
  if ( (byte_4BCB18F & 1) == 0 )
  {
    this = (CoinRoomEffectComponent_o *)sub_1C1ABD4(
                                          &Method_UnityEngine_GameObject_GetComponent_ParticleSystem___,
                                          targetObject);
    byte_4BCB18F = 1;
  }
  if ( !targetObject
    || (this = (CoinRoomEffectComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                              targetObject,
                                              (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_ParticleSystem___)) == 0LL )
  {
    sub_1C1AE30(this, targetObject);
  }
  return UnityEngine_ParticleSystem__get_emission((UnityEngine_ParticleSystem_o *)this, 0LL);
}


void __fastcall CoinRoomEffectComponent__NextAcquiredEffect(CoinRoomEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x20
  UnityEngine_GameObject_o *acquiredEffect; // x0
  __int64 v9; // x1
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  QuestRewardInfo_o *v16; // x21
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  _DWORD *v23; // x8
  int32_t TARGET_ITEM_ID; // w9
  Il2CppObject *Instance; // x19
  System_Action_o *v26; // x21

  if ( (byte_4BCB190 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, method);
    sub_1C1ABD4(&QuestRewardInfo_TypeInfo, v3);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1C1ABD4(&Method_CoinRoomEffectComponent___c__DisplayClass27_0__NextAcquiredEffect_b__0__, v5);
    sub_1C1ABD4(&CoinRoomEffectComponent___c__DisplayClass27_0_TypeInfo, v6);
    byte_4BCB190 = 1;
  }
  v7 = sub_1C1AE20(CoinRoomEffectComponent___c__DisplayClass27_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    goto LABEL_11;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v7 + 16), (int64_t)this, v10, v11, v12, v13, v14, v15);
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
        v16 = (QuestRewardInfo_o *)sub_1C1AE20(QuestRewardInfo_TypeInfo);
        QuestRewardInfo___ctor(v16, 0LL);
        *(_QWORD *)(v7 + 24) = v16;
        sub_1C1AB78((PartyOrganizationUtility_o *)(v7 + 24), (int64_t)v16, v17, v18, v19, v20, v21, v22);
        v23 = *(_DWORD **)(v7 + 24);
        if ( v23 )
        {
          TARGET_ITEM_ID = this->fields.TARGET_ITEM_ID;
          v23[4] = 2;
          v23[5] = TARGET_ITEM_ID;
          v23[6] = 1;
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v26 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
          System_Action___ctor(
            v26,
            (Il2CppObject *)v7,
            Method_CoinRoomEffectComponent___c__DisplayClass27_0__NextAcquiredEffect_b__0__,
            0LL);
          if ( Instance )
          {
            CommonUI__LoadCoinRoomGetEffect((CommonUI_o *)Instance, v26, 0LL);
            return;
          }
        }
      }
    }
LABEL_11:
    sub_1C1AE30(acquiredEffect, v9);
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
  UserCoinRoomEntity_o *v9; // x21
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  DataManager_o *Instance; // x0
  __int64 v25; // x1
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *Entity; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  struct UserCoinRoomEntity_o *afterEntity; // x8
  int32_t cnt; // w8
  __int64 *v42; // x8
  struct System_String_o *v43; // x1
  const MethodInfo *v44; // x1

  v9 = beforeUserCoinRoomEntity;
  if ( (byte_4BCB18D & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_UserCoinRoomMaster___, beforeUserCoinRoomEntity);
    sub_1C1ABD4(&Method_DataMasterBase_UserCoinRoomMaster__UserCoinRoomEntity__long__GetEntity__, v11);
    sub_1C1ABD4(&NetworkManager_TypeInfo, v12);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_1C1ABD4(&SoundManager_TypeInfo, v14);
    sub_1C1ABD4(&UserCoinRoomEntity_TypeInfo, v15);
    sub_1C1ABD4(&StringLiteral_19234/*"effect_Circle_act2"*/, v16);
    sub_1C1ABD4(&StringLiteral_19233/*"effect_Circle_act1"*/, v17);
    byte_4BCB18D = 1;
  }
  this->fields.state = 1;
  if ( !v9 )
  {
    v9 = (UserCoinRoomEntity_o *)sub_1C1AE20(UserCoinRoomEntity_TypeInfo);
    UserCoinRoomEntity___ctor(v9, 0LL);
  }
  this->fields.beforeEntity = v9;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.beforeEntity,
    (int64_t)v9,
    (int64_t)selectedCoinDic,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.selectedCoinDic = selectedCoinDic;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.selectedCoinDic,
    (int64_t)selectedCoinDic,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_UserCoinRoomMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BC2585 )
  {
    sub_1C1ABD4(&NetworkManager_TypeInfo, v25);
    byte_4BC2585 = 1;
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
                   (const MethodInfo_324ABD4 *)Method_DataMasterBase_UserCoinRoomMaster__UserCoinRoomEntity__long__GetEntity__),
        this->fields.afterEntity = (struct UserCoinRoomEntity_o *)Entity,
        sub_1C1AB78(
          (PartyOrganizationUtility_o *)&this->fields.afterEntity,
          (int64_t)Entity,
          v28,
          v29,
          v30,
          v31,
          v32,
          v33),
        (afterEntity = this->fields.afterEntity) == 0LL) )
  {
LABEL_20:
    sub_1C1AE30(Instance, v25);
  }
  cnt = afterEntity->fields.cnt;
  this->fields.isAcquired = cnt == 0;
  if ( cnt )
    v42 = &StringLiteral_19233/*"effect_Circle_act1"*/;
  else
    v42 = &StringLiteral_19234/*"effect_Circle_act2"*/;
  v43 = (struct System_String_o *)*v42;
  this->fields.stateName = (struct System_String_o *)*v42;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.stateName, (int64_t)v43, v34, v35, v36, v37, v38, v39);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__stopBgm(0LL);
  CoinRoomEffectComponent__StartPutInAnimation(this, v44);
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_4BCB191 & 1) == 0 )
  {
    sub_1C1ABD4(&CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_TypeInfo, *(_QWORD *)&totalCount);
    byte_4BCB191 = 1;
  }
  v5 = sub_1C1AE20(CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  *(_DWORD *)(v5 + 40) = totalCount;
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall CoinRoomEffectComponent__StartPutInAnimation(CoinRoomEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Action_o *v12; // x20
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  CoinRoomUtility_c *v19; // x0
  int32_t v20; // w0
  CoinRoomEffectComponent___c_c *v21; // x8
  struct System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *selectedCoinDic; // x21
  int32_t v23; // w20
  System_Func_T__TResult__o *_9__25_0; // x22
  Il2CppObject *v25; // x23
  struct CoinRoomEffectComponent___c_StaticFields *static_fields; // x0
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  UnityEngine_GameObject_o *coinListPanel; // x0
  __int64 v34; // x1
  int energyPartLoopRateOverTimeMax; // w22
  Il2CppObject *Component_object; // x0
  struct SimpleAnimation_o **p_circleAnimation; // x21
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  CoinRoomEffectComponent_o *v44; // x0
  const MethodInfo *v45; // x2
  const MethodInfo *v46; // x2
  System_Collections_IEnumerator_o *v47; // x0
  struct UserCoinRoomEntity_o *afterEntity; // x8
  int32_t cnt; // w8
  int32_t v50; // w22
  const MethodInfo *v51; // x4
  struct UserCoinRoomEntity_o *beforeEntity; // x8
  struct UserCoinRoomEntity_o *v53; // x8
  UnityEngine_ParticleSystem_MinMaxCurve_o v54; // [xsp+0h] [xbp-90h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v55; // [xsp+28h] [xbp-68h] BYREF
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+48h] [xbp-48h] BYREF
  UnityEngine_ParticleSystem_EmissionModule_o v57; // 0:x0.8

  if ( (byte_4BCB18E & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, method);
    sub_1C1ABD4(&Method_CoinRoomEffectComponent_NextAcquiredEffect__, v3);
    sub_1C1ABD4(&CoinRoomUtility_TypeInfo, v4);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_Sum_KeyValuePair_int__SelectedUserSvtCoin____, v5);
    sub_1C1ABD4(&System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__TypeInfo, v6);
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_CoinRoomControlEffect___, v7);
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v8);
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_TitleInfoControl___, v9);
    sub_1C1ABD4(&Method_CoinRoomEffectComponent___c__StartPutInAnimation_b__25_0__, v10);
    sub_1C1ABD4(&CoinRoomEffectComponent___c_TypeInfo, v11);
    byte_4BCB18E = 1;
  }
  m_ParticleSystem = 0LL;
  v12 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_CoinRoomEffectComponent_NextAcquiredEffect__, 0LL);
  this->fields.endCallBack = v12;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.endCallBack, (int64_t)v12, v13, v14, v15, v16, v17, v18);
  v19 = CoinRoomUtility_TypeInfo;
  if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
  v20 = CoinRoomUtility__MaxPoint((const MethodInfo *)v19);
  v21 = CoinRoomEffectComponent___c_TypeInfo;
  selectedCoinDic = this->fields.selectedCoinDic;
  v23 = v20;
  if ( !CoinRoomEffectComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomEffectComponent___c_TypeInfo);
    v21 = CoinRoomEffectComponent___c_TypeInfo;
  }
  _9__25_0 = (System_Func_T__TResult__o *)v21->static_fields->__9__25_0;
  if ( !_9__25_0 )
  {
    if ( !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      v21 = CoinRoomEffectComponent___c_TypeInfo;
    }
    v25 = (Il2CppObject *)v21->static_fields->__9;
    _9__25_0 = (System_Func_T__TResult__o *)sub_1C1AE20(System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__TypeInfo);
    System_Func_KeyValuePair_int__object___int____ctor(
      _9__25_0,
      v25,
      Method_CoinRoomEffectComponent___c__StartPutInAnimation_b__25_0__,
      0LL);
    static_fields = CoinRoomEffectComponent___c_TypeInfo->static_fields;
    static_fields->__9__25_0 = (struct System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__o *)_9__25_0;
    sub_1C1AB78(
      (PartyOrganizationUtility_o *)&static_fields->__9__25_0,
      (int64_t)_9__25_0,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
  }
  coinListPanel = (UnityEngine_GameObject_o *)System_Linq_Enumerable__Sum_KeyValuePair_int__object__(
                                                (System_Collections_Generic_IEnumerable_TSource__o *)selectedCoinDic,
                                                (System_Func_TSource__int__o *)_9__25_0,
                                                (const MethodInfo_2FD78D0 *)Method_System_Linq_Enumerable_Sum_KeyValuePair_int__SelectedUserSvtCoin____);
  if ( !this->fields.effectCircleObject )
    goto LABEL_31;
  energyPartLoopRateOverTimeMax = (int)coinListPanel;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       this->fields.effectCircleObject,
                       (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  this->fields.circleAnimation = (struct SimpleAnimation_o *)Component_object;
  p_circleAnimation = &this->fields.circleAnimation;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.circleAnimation,
    (int64_t)Component_object,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
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
                                                (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoControl___);
  if ( !coinListPanel )
    goto LABEL_31;
  TitleInfoControl__SetHelpBtn((TitleInfoControl_o *)coinListPanel, 0, 0LL);
  MainMenuBar__setMenuActive(0, 0LL, 0LL);
  if ( energyPartLoopRateOverTimeMax >= this->fields.energyPartLoopRateOverTimeMax )
    energyPartLoopRateOverTimeMax = this->fields.energyPartLoopRateOverTimeMax;
  m_ParticleSystem = CoinRoomEffectComponent__GetEmissionModule(v44, this->fields.coinPartObject, v45).fields.m_ParticleSystem;
  UnityEngine_ParticleSystem_MinMaxCurve__op_Implicit(&v55, (float)energyPartLoopRateOverTimeMax, 0LL);
  v57.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
  v54 = v55;
  UnityEngine_ParticleSystem_EmissionModule__set_rateOverTime(v57, &v54, 0LL);
  v47 = CoinRoomEffectComponent__PlayCoinArrivedSE(this, energyPartLoopRateOverTimeMax, v46);
  coinListPanel = (UnityEngine_GameObject_o *)UnityEngine_MonoBehaviour__StartCoroutine_70779684(
                                                (UnityEngine_MonoBehaviour_o *)this,
                                                v47,
                                                0LL);
  afterEntity = this->fields.afterEntity;
  if ( !afterEntity )
    goto LABEL_31;
  cnt = afterEntity->fields.cnt;
  coinListPanel = this->fields.effectCircleObject;
  v50 = cnt ? cnt : v23;
  if ( !coinListPanel )
    goto LABEL_31;
  coinListPanel = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                coinListPanel,
                                                (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_CoinRoomControlEffect___);
  beforeEntity = this->fields.beforeEntity;
  if ( !beforeEntity
    || !coinListPanel
    || (CoinRoomControlEffect__SetValue(
          (CoinRoomControlEffect_o *)coinListPanel,
          beforeEntity->fields.cnt,
          v50,
          v23,
          v51),
        (coinListPanel = this->fields.gaugeObject) == 0LL)
    || (UnityEngine_GameObject__SetActive(coinListPanel, 1, 0LL), (v53 = this->fields.beforeEntity) == 0LL)
    || (coinListPanel = (UnityEngine_GameObject_o *)this->fields.gaugeSlider) == 0LL
    || (UIProgressBar__set_value((UIProgressBar_o *)coinListPanel, (float)v53->fields.cnt / (float)v23, 0LL),
        (coinListPanel = (UnityEngine_GameObject_o *)*p_circleAnimation) == 0LL) )
  {
LABEL_31:
    sub_1C1AE30(coinListPanel, v34);
  }
  SimpleAnimation__Play_65178652((SimpleAnimation_o *)coinListPanel, this->fields.stateName, 0LL);
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
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  _BOOL4 isAcquired; // w8
  Il2CppObject *Instance; // x20
  CoinRoomUtility_c *v24; // x8
  float EFFECT_FADE_TIME; // s8
  System_Action_o *v26; // x21
  System_String_o *MainBgmName; // x19

  if ( (byte_4BCB18C & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, method);
    sub_1C1ABD4(&BgmManager_TypeInfo, v3);
    sub_1C1ABD4(&Method_CoinRoomEffectComponent__Update_b__23_0__, v4);
    sub_1C1ABD4(&CoinRoomUtility_TypeInfo, v5);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v7);
    sub_1C1ABD4(&SoundManager_TypeInfo, v8);
    sub_1C1ABD4(&SimpleAnimation_State_TypeInfo, v9);
    byte_4BCB18C = 1;
  }
  if ( !this->fields.endCallBack || this->fields.isEffectEnd )
    return;
  circleAnimation = this->fields.circleAnimation;
  if ( !circleAnimation
    || (circleAnimation = (SimpleAnimation_o *)SimpleAnimation__GetState(circleAnimation, this->fields.stateName, 0LL)) == 0LL )
  {
LABEL_26:
    sub_1C1AE30(circleAnimation, method);
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
    v15 = sub_1C6CBB4(circleAnimation, SimpleAnimation_State_TypeInfo, 5LL);
  }
  if ( (*(float (__fastcall **)(SimpleAnimation_o *, _QWORD))v15)(v12, *(_QWORD *)(v15 + 8)) >= 0.95 )
  {
    isAcquired = this->fields.isAcquired;
    this->fields.isEffectEnd = 1;
    if ( isAcquired )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v24 = CoinRoomUtility_TypeInfo;
      if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
        v24 = CoinRoomUtility_TypeInfo;
      }
      EFFECT_FADE_TIME = v24->static_fields->EFFECT_FADE_TIME;
      v26 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
      System_Action___ctor(v26, (Il2CppObject *)this, Method_CoinRoomEffectComponent__Update_b__23_0__, 0LL);
      if ( Instance )
      {
        CommonUI__maskFadeout((CommonUI_o *)Instance, 2, EFFECT_FADE_TIME, v26, 0LL);
        return;
      }
    }
    else
    {
      this->fields.endCallBack = 0LL;
      sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.endCallBack, 0LL, v16, v17, v18, v19, v20, v21);
      this->fields.isEffectEnd = 0;
      this->fields.state = 2;
      if ( !BgmManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
      MainBgmName = BgmManager__GetMainBgmName(0LL);
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      SoundManager__playBgm(MainBgmName, 0LL);
      circleAnimation = (SimpleAnimation_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  CommonUI_o *v11; // x19

  v2 = this;
  if ( (byte_4BCB193 & 1) == 0 )
  {
    sub_1C1ABD4(&CoinRoomUtility_TypeInfo, method);
    this = (CoinRoomEffectComponent_o *)sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    byte_4BCB193 = 1;
  }
  endCallBack = v2->fields.endCallBack;
  if ( !endCallBack )
    goto LABEL_8;
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))endCallBack->fields.m_target)(
    endCallBack->fields.original_method_info,
    *(_QWORD *)&endCallBack->fields.extra_arg);
  v2->fields.endCallBack = 0LL;
  sub_1C1AB78((PartyOrganizationUtility_o *)&v2->fields.endCallBack, 0LL, v5, v6, v7, v8, v9, v10);
  v2->fields.isEffectEnd = 0;
  this = (CoinRoomEffectComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (CommonUI_o *)this;
  if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
  if ( !v11 )
LABEL_8:
    sub_1C1AE30(this, method);
  CommonUI__maskFadein(v11, CoinRoomUtility_TypeInfo->static_fields->EFFECT_FADE_TIME, 0LL, 0LL);
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct CoinRoomEffectComponent_o *_4__this; // x21
  CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_o *v13; // x20
  float duration; // s0
  int totalCount; // s1
  float arrivedPlaySeIntervalTime; // s2
  float v17; // s0
  Il2CppObject *Component_object; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  float lifeTime_5__2; // s8
  UnityEngine_WaitForSeconds_o *v32; // x20
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  int v40; // w8
  float playIntervalTime_5__4; // s0
  float v42; // s0
  float v43; // s1
  float totalTime_5__7; // s8
  float deltaTime; // s0
  float time_5__8; // s9
  float v47; // s0
  _QWORD *v48; // x0
  _BOOL4 isGaugeAnimation_5__5; // w9
  int v50; // w8
  struct UserCoinRoomEntity_o *beforeEntity; // x8
  struct UserCoinRoomEntity_o *afterEntity; // x9
  bool result; // w0
  PartyOrganizationUtility_o *v54; // x19
  UnityEngine_ParticleSystem_MinMaxCurve_o v55; // [xsp+0h] [xbp-80h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v56; // [xsp+20h] [xbp-60h] BYREF
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+48h] [xbp-38h] BYREF
  UnityEngine_ParticleSystem_MainModule_o v58; // 0:x0.8
  UnityEngine_ParticleSystem_MainModule_o v59; // 0:x0.8

  v8 = this;
  if ( (byte_4BCB198 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_CoinRoomGaugeEffectComponent___, method);
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_ParticleSystem___, v9);
    sub_1C1ABD4(&Method_CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_MoveNext__, v10);
    this = (CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_o *)sub_1C1ABD4(&UnityEngine_WaitForSeconds_TypeInfo, v11);
    byte_4BCB198 = 1;
  }
  m_ParticleSystem = 0LL;
  memset(&v56, 0, sizeof(v56));
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
                                                                     (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_ParticleSystem___);
      if ( !this )
        goto LABEL_32;
      v13 = this;
      m_ParticleSystem = UnityEngine_ParticleSystem__get_main((UnityEngine_ParticleSystem_o *)this, 0LL).fields.m_ParticleSystem;
      v58.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
      UnityEngine_ParticleSystem_MainModule__get_startLifetime(&v55, v58, 0LL);
      v56 = v55;
      v8->fields._lifeTime_5__2 = UnityEngine_ParticleSystem_MinMaxCurve__get_constant(&v56, 0LL);
      m_ParticleSystem = UnityEngine_ParticleSystem__get_main((UnityEngine_ParticleSystem_o *)v13, 0LL).fields.m_ParticleSystem;
      v59.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
      duration = UnityEngine_ParticleSystem_MainModule__get_duration(v59, 0LL);
      totalCount = v8->fields.totalCount;
      v8->fields._duration_5__3 = duration;
      arrivedPlaySeIntervalTime = _4__this->fields.arrivedPlaySeIntervalTime;
      v8->fields._isGaugeAnimation_5__5 = 0;
      v17 = duration / (float)totalCount;
      if ( v17 <= arrivedPlaySeIntervalTime )
        v17 = arrivedPlaySeIntervalTime;
      v8->fields._playIntervalTime_5__4 = v17;
      this = (CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_o *)_4__this->fields.gaugeObject;
      if ( !this )
        goto LABEL_32;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)this,
                           (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_CoinRoomGaugeEffectComponent___);
      v8->fields._gaugeEffectComponent_5__6 = (struct CoinRoomGaugeEffectComponent_o *)Component_object;
      sub_1C1AB78(
        (PartyOrganizationUtility_o *)&v8->fields._gaugeEffectComponent_5__6,
        (int64_t)Component_object,
        v19,
        v20,
        v21,
        v22,
        v23,
        v24);
LABEL_12:
      this = (CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_o *)_4__this->fields.coinPartObject;
      if ( !this )
        goto LABEL_32;
      if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL) )
      {
        lifeTime_5__2 = v8->fields._lifeTime_5__2;
        v32 = (UnityEngine_WaitForSeconds_o *)sub_1C1AE20(UnityEngine_WaitForSeconds_TypeInfo);
        UnityEngine_WaitForSeconds___ctor(v32, lifeTime_5__2 * 0.9, 0LL);
        v8->fields.__2__current = (Il2CppObject *)v32;
        p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
        sub_1C1AB78(p__2__current, (int64_t)v32, v34, v35, v36, v37, v38, v39);
        v40 = 2;
LABEL_29:
        *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = v40;
        return 1;
      }
      else
      {
        v8->fields.__2__current = 0LL;
        v54 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
        sub_1C1AB78(v54, 0LL, v25, v26, v27, v28, v29, v30);
        result = 1;
        *(_DWORD *)&v54[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
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
      v42 = playIntervalTime_5__4 + 1.0;
      v8->fields._playCount_5__9 = 0;
      v8->fields.__1__state = -1;
      v8->fields._time_5__8 = v42;
      v43 = 0.0;
      goto LABEL_17;
    case 3:
      totalTime_5__7 = v8->fields._totalTime_5__7;
      v8->fields.__1__state = -1;
      deltaTime = UnityEngine_Time__get_deltaTime(0LL);
      time_5__8 = v8->fields._time_5__8;
      v8->fields._totalTime_5__7 = totalTime_5__7 + deltaTime;
      v47 = UnityEngine_Time__get_deltaTime(0LL);
      v43 = v8->fields._totalTime_5__7;
      v42 = time_5__8 + v47;
      v8->fields._time_5__8 = v42;
LABEL_17:
      if ( v43 >= v8->fields._duration_5__3 || v8->fields._playCount_5__9 >= v8->fields.totalCount )
        return 0;
      if ( v42 < v8->fields._playIntervalTime_5__4 )
        goto LABEL_28;
      v48 = Method_CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_MoveNext__;
      if ( (*((_BYTE *)Method_CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_MoveNext__ + 83) & 2) != 0 )
        v48 = (_QWORD *)sub_1C1ABEC(Method_CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_MoveNext__);
      this = (CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_o *)sub_1C1ABB8(v48, v48[4]);
      if ( !_4__this )
        goto LABEL_32;
      this = (CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_o *)OverwriteAssetSoundName__PlaySeContinue(
                                                                     (System_Reflection_MethodBase_o *)this,
                                                                     _4__this->fields.arrivedPlaySeName,
                                                                     0,
                                                                     0LL);
      isGaugeAnimation_5__5 = v8->fields._isGaugeAnimation_5__5;
      v50 = v8->fields._playCount_5__9 + 1;
      v8->fields._time_5__8 = 0.0;
      v8->fields._playCount_5__9 = v50;
      if ( !isGaugeAnimation_5__5 )
      {
        beforeEntity = _4__this->fields.beforeEntity;
        if ( !beforeEntity
          || (afterEntity = _4__this->fields.afterEntity) == 0LL
          || (this = (CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_o *)v8->fields._gaugeEffectComponent_5__6) == 0LL )
        {
LABEL_32:
          sub_1C1AE30(this, method);
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
      sub_1C1AB78(p__2__current, 0LL, v2, (int32_t)v3, v4, v5, v6, v7);
      v40 = 3;
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

  v2 = sub_1C1ABE8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C1AE20(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C1ABE8(&Method_CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_System_Collections_IEnumerator_Reset__);
  sub_1C1ACFC(v3, v4);
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
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BCB194 & 1) == 0 )
  {
    sub_1C1ABD4(&CoinRoomEffectComponent___c_TypeInfo, v1);
    byte_4BCB194 = 1;
  }
  v2 = (Il2CppObject *)sub_1C1AE20(CoinRoomEffectComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  CoinRoomEffectComponent___c_TypeInfo->static_fields->__9 = (struct CoinRoomEffectComponent___c_o *)v2;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)CoinRoomEffectComponent___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
  __int64 v6; // x1
  System_String_o *MainBgmName; // x19

  if ( (byte_4BCB196 & 1) == 0 )
  {
    sub_1C1ABD4(&BgmManager_TypeInfo, method);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v2);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_1C1ABD4(&SoundManager_TypeInfo, v4);
    byte_4BCB196 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  CommonUI__ReleaseCoinRoomGetEffect((CommonUI_o *)Instance, 0LL);
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  MainBgmName = BgmManager__GetMainBgmName(0LL);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm(MainBgmName, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
LABEL_10:
    sub_1C1AE30(Instance, v6);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 90, 1, 0LL, 0LL);
}


int32_t __fastcall CoinRoomEffectComponent___c___StartPutInAnimation_b__25_0(
        CoinRoomEffectComponent___c_o *this,
        System_Collections_Generic_KeyValuePair_int__SelectedUserSvtCoin__o x,
        const MethodInfo *method)
{
  struct SelectedUserSvtCoin_o *value; // x19

  value = x.fields.value;
  if ( (byte_4BCB195 & 1) == 0 )
  {
    this = (CoinRoomEffectComponent___c_o *)sub_1C1ABD4(
                                              &Method_System_Collections_Generic_KeyValuePair_int__SelectedUserSvtCoin__get_Value__,
                                              *(_QWORD *)&x.fields.key);
    byte_4BCB195 = 1;
  }
  if ( !value )
    sub_1C1AE30(this, *(_QWORD *)&x.fields.key);
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
  CoinRoomEffectComponent___c_c *v9; // x8
  QuestRewardInfo_o *questRewardInfo; // x20
  CoinRoomEffectComponent___c__DisplayClass27_0_o *v11; // x21
  System_Action_o *_9__27_1; // x22
  Il2CppObject *v13; // x23
  struct CoinRoomEffectComponent___c_StaticFields *static_fields; // x0
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7

  v2 = this;
  if ( (byte_4BCB197 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, method);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1C1ABD4(&Method_CoinRoomEffectComponent___c__NextAcquiredEffect_b__27_1__, v4);
    this = (CoinRoomEffectComponent___c__DisplayClass27_0_o *)sub_1C1ABD4(&CoinRoomEffectComponent___c_TypeInfo, v5);
    byte_4BCB197 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_15;
  this = (CoinRoomEffectComponent___c__DisplayClass27_0_o *)_4__this->fields.gaugeObject;
  if ( !this )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (CoinRoomEffectComponent___c__DisplayClass27_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  v9 = CoinRoomEffectComponent___c_TypeInfo;
  questRewardInfo = v2->fields.questRewardInfo;
  v11 = this;
  if ( !CoinRoomEffectComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomEffectComponent___c_TypeInfo);
    v9 = CoinRoomEffectComponent___c_TypeInfo;
  }
  _9__27_1 = v9->static_fields->__9__27_1;
  if ( !_9__27_1 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = CoinRoomEffectComponent___c_TypeInfo;
    }
    v13 = (Il2CppObject *)v9->static_fields->__9;
    _9__27_1 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
    System_Action___ctor(_9__27_1, v13, Method_CoinRoomEffectComponent___c__NextAcquiredEffect_b__27_1__, 0LL);
    static_fields = CoinRoomEffectComponent___c_TypeInfo->static_fields;
    static_fields->__9__27_1 = _9__27_1;
    sub_1C1AB78(
      (PartyOrganizationUtility_o *)&static_fields->__9__27_1,
      (int64_t)_9__27_1,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  if ( !v8 )
LABEL_15:
    sub_1C1AE30(this, method);
  CommonUI__OpenCoinRoomGetEffect(v8, (UnityEngine_Transform_o *)v11, 0, questRewardInfo, _9__27_1, 0LL);
}