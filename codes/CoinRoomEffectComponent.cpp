void __fastcall CoinRoomEffectComponent___ctor(CoinRoomEffectComponent_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int32_array **v9; // x1
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Int32_array **v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_4352056 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin___ctor__);
    sub_B70694(&System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__TypeInfo);
    sub_B70694(&StringLiteral_16677/*"ar154"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4352056 = 1;
  }
  v9 = (System_Int32_array **)StringLiteral_16677/*"ar154"*/;
  this->fields.arrivedPlaySeName = (struct System_String_o *)StringLiteral_16677/*"ar154"*/;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.arrivedPlaySeName, v9, v2, v3, v4, v5, v6, v7);
  *(_QWORD *)&this->fields.arrivedPlaySeIntervalTime = 0x3E83D4CCCCDLL;
  this->fields.TARGET_ITEM_ID = 7999;
  v10 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B70764(System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v10,
    (const MethodInfo_2FC59B4 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin___ctor__);
  this->fields.selectedCoinDic = (struct System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *)v10;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.selectedCoinDic,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.stateName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.stateName, v17, v18, v19, v20, v21, v22, v23);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


UnityEngine_ParticleSystem_EmissionModule_o __fastcall CoinRoomEffectComponent__GetEmissionModule(
        CoinRoomEffectComponent_o *this,
        UnityEngine_GameObject_o *targetObject,
        const MethodInfo *method)
{
  if ( (byte_4352053 & 1) == 0 )
  {
    this = (CoinRoomEffectComponent_o *)sub_B70694(&Method_UnityEngine_GameObject_GetComponent_ParticleSystem___);
    byte_4352053 = 1;
  }
  if ( !targetObject
    || (this = (CoinRoomEffectComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              targetObject,
                                              (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_ParticleSystem___)) == 0LL )
  {
    sub_B7076C(this, targetObject);
  }
  return UnityEngine_ParticleSystem__get_emission((UnityEngine_ParticleSystem_o *)this, 0LL);
}


void __fastcall CoinRoomEffectComponent__NextAcquiredEffect(CoinRoomEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  UnityEngine_GameObject_o *acquiredEffect; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  QuestRewardInfo_o *v12; // x22
  __int64 v13; // x21
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  CommonUI_o *Instance; // x19
  System_Action_o *v21; // x21

  if ( (byte_4352054 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&QuestRewardInfo_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&Method_CoinRoomEffectComponent___c__DisplayClass27_0__NextAcquiredEffect_b__0__);
    sub_B70694(&CoinRoomEffectComponent___c__DisplayClass27_0_TypeInfo);
    byte_4352054 = 1;
  }
  v3 = sub_B70764(CoinRoomEffectComponent___c__DisplayClass27_0_TypeInfo);
  CoinRoomEffectComponent___c__DisplayClass27_0___ctor((CoinRoomEffectComponent___c__DisplayClass27_0_o *)v3, 0LL);
  if ( !v3 )
    goto LABEL_13;
  *(_QWORD *)(v3 + 16) = this;
  sub_B70630((BattleServantConfConponent_o *)(v3 + 16), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
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
        v12 = (QuestRewardInfo_o *)sub_B70764(QuestRewardInfo_TypeInfo);
        QuestRewardInfo___ctor(v12, 0LL);
        *(_QWORD *)(v3 + 24) = v12;
        v13 = v3 + 24;
        sub_B70630((BattleServantConfConponent_o *)(v3 + 24), (System_Int32_array **)v12, v14, v15, v16, v17, v18, v19);
        if ( *(_QWORD *)(v3 + 24) )
        {
          *(_DWORD *)(*(_QWORD *)(v3 + 24) + 20LL) = this->fields.TARGET_ITEM_ID;
          if ( *(_QWORD *)v13 )
          {
            *(_DWORD *)(*(_QWORD *)v13 + 24LL) = 1;
            if ( *(_QWORD *)v13 )
            {
              *(_DWORD *)(*(_QWORD *)v13 + 16LL) = 2;
              Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              v21 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
              System_Action___ctor(
                v21,
                (Il2CppObject *)v3,
                Method_CoinRoomEffectComponent___c__DisplayClass27_0__NextAcquiredEffect_b__0__,
                0LL);
              if ( Instance )
              {
                CommonUI__LoadCoinRoomGetEffect(Instance, v21, 0LL);
                return;
              }
            }
          }
        }
      }
    }
LABEL_13:
    sub_B7076C(acquiredEffect, v5);
  }
}


void __fastcall CoinRoomEffectComponent__OpenEffect(
        CoinRoomEffectComponent_o *this,
        UserCoinRoomEntity_o *beforeUserCoinRoomEntity,
        System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *selectedCoinDic,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  DataManager_o *Instance; // x0
  __int64 v18; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x20
  UserServantEntity_o *Entity; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  struct UserCoinRoomEntity_o *afterEntity; // x8
  int32_t cnt; // w8
  __int64 *v35; // x8
  struct System_String_o *v36; // x1
  const MethodInfo *v37; // x1

  if ( (byte_4352051 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_UserCoinRoomMaster___);
    sub_B70694(&Method_DataMasterBase_UserCoinRoomMaster__UserCoinRoomEntity__long__GetEntity__);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&SoundManager_TypeInfo);
    sub_B70694(&UserCoinRoomEntity_TypeInfo);
    sub_B70694(&StringLiteral_18554/*"effect_Circle_act2"*/);
    sub_B70694(&StringLiteral_18553/*"effect_Circle_act1"*/);
    byte_4352051 = 1;
  }
  this->fields.state = 1;
  if ( !beforeUserCoinRoomEntity )
  {
    beforeUserCoinRoomEntity = (UserCoinRoomEntity_o *)sub_B70764(UserCoinRoomEntity_TypeInfo);
    UserCoinRoomEntity___ctor(beforeUserCoinRoomEntity, 0LL);
  }
  this->fields.beforeEntity = beforeUserCoinRoomEntity;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.beforeEntity,
    (System_Int32_array **)beforeUserCoinRoomEntity,
    (System_String_array **)selectedCoinDic,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.selectedCoinDic = selectedCoinDic;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.selectedCoinDic,
    (System_Int32_array **)selectedCoinDic,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(Instance, (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserCoinRoomMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster
    || (Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                   MasterData_WarQuestSelectionMaster,
                   (int64_t)Instance,
                   (const MethodInfo_21C0668 *)Method_DataMasterBase_UserCoinRoomMaster__UserCoinRoomEntity__long__GetEntity__),
        this->fields.afterEntity = (struct UserCoinRoomEntity_o *)Entity,
        sub_B70630(
          (BattleServantConfConponent_o *)&this->fields.afterEntity,
          (System_Int32_array **)Entity,
          v21,
          v22,
          v23,
          v24,
          v25,
          v26),
        (afterEntity = this->fields.afterEntity) == 0LL) )
  {
LABEL_18:
    sub_B7076C(Instance, v18);
  }
  cnt = afterEntity->fields.cnt;
  this->fields.isAcquired = cnt == 0;
  if ( cnt )
    v35 = &StringLiteral_18553/*"effect_Circle_act1"*/;
  else
    v35 = &StringLiteral_18554/*"effect_Circle_act2"*/;
  v36 = (struct System_String_o *)*v35;
  this->fields.stateName = (struct System_String_o *)*v35;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.stateName,
    (System_Int32_array **)v36,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
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
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_4352055 & 1) == 0 )
  {
    sub_B70694(&CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_TypeInfo);
    byte_4352055 = 1;
  }
  v5 = sub_B70764(CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_TypeInfo);
  CoinRoomEffectComponent__PlayCoinArrivedSE_d__28___ctor(
    (CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_B7076C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v5 + 40) = totalCount;
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall CoinRoomEffectComponent__StartPutInAnimation(CoinRoomEffectComponent_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  CoinRoomUtility_c *v10; // x0
  int32_t v11; // w0
  struct System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *selectedCoinDic; // x21
  int32_t v13; // w20
  CoinRoomEffectComponent___c_c *v14; // x8
  struct CoinRoomEffectComponent___c_StaticFields *static_fields; // x9
  System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__o *_9__25_0; // x22
  Il2CppObject *v17; // x23
  struct CoinRoomEffectComponent___c_StaticFields *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  UnityEngine_GameObject_o *coinListPanel; // x0
  __int64 v26; // x1
  int32_t v27; // w22
  struct SimpleAnimation_o *Component_srcLineSprite; // x0
  struct SimpleAnimation_o **p_circleAnimation; // x21
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  CoinRoomEffectComponent_o *v36; // x0
  int32_t v37; // w22
  const MethodInfo *v38; // x2
  const MethodInfo *v39; // x2
  System_Collections_IEnumerator_o *v40; // x0
  struct UserCoinRoomEntity_o *afterEntity; // x8
  int32_t cnt; // w8
  int32_t v43; // w22
  const MethodInfo *v44; // x4
  struct UserCoinRoomEntity_o *beforeEntity; // x8
  struct UserCoinRoomEntity_o *v46; // x8
  UnityEngine_ParticleSystem_MinMaxCurve_o v47; // [xsp+0h] [xbp-80h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v48; // [xsp+28h] [xbp-58h] BYREF
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+48h] [xbp-38h] BYREF
  UnityEngine_ParticleSystem_EmissionModule_o v50; // 0:x0.8

  if ( (byte_4352052 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_CoinRoomEffectComponent_NextAcquiredEffect__);
    sub_B70694(&CoinRoomUtility_TypeInfo);
    sub_B70694(&Method_System_Linq_Enumerable_Sum_KeyValuePair_int__SelectedUserSvtCoin____);
    sub_B70694(&Method_System_Func_KeyValuePair_int__SelectedUserSvtCoin___int___ctor__);
    sub_B70694(&System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__TypeInfo);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_CoinRoomControlEffect___);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_TitleInfoControl___);
    sub_B70694(&Method_CoinRoomEffectComponent___c__StartPutInAnimation_b__25_0__);
    sub_B70694(&CoinRoomEffectComponent___c_TypeInfo);
    byte_4352052 = 1;
  }
  m_ParticleSystem = 0LL;
  v3 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_CoinRoomEffectComponent_NextAcquiredEffect__, 0LL);
  this->fields.endCallBack = v3;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.endCallBack,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  v10 = CoinRoomUtility_TypeInfo;
  if ( (BYTE3(CoinRoomUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CoinRoomUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
  }
  v11 = CoinRoomUtility__MaxPoint((const MethodInfo *)v10);
  selectedCoinDic = this->fields.selectedCoinDic;
  v13 = v11;
  v14 = CoinRoomEffectComponent___c_TypeInfo;
  if ( (BYTE3(CoinRoomEffectComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CoinRoomEffectComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomEffectComponent___c_TypeInfo);
    v14 = CoinRoomEffectComponent___c_TypeInfo;
  }
  static_fields = v14->static_fields;
  _9__25_0 = static_fields->__9__25_0;
  if ( !_9__25_0 )
  {
    if ( (BYTE3(v14->vtable._0_Equals.methodPtr) & 4) != 0 && !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      static_fields = CoinRoomEffectComponent___c_TypeInfo->static_fields;
    }
    v17 = (Il2CppObject *)static_fields->__9;
    _9__25_0 = (System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__o *)sub_B70764(System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__TypeInfo);
    System_Func_KeyValuePair_int__SelectedUserSvtCoin___int____ctor(
      _9__25_0,
      v17,
      Method_CoinRoomEffectComponent___c__StartPutInAnimation_b__25_0__,
      (const MethodInfo_29996C0 *)Method_System_Func_KeyValuePair_int__SelectedUserSvtCoin___int___ctor__);
    v18 = CoinRoomEffectComponent___c_TypeInfo->static_fields;
    v18->__9__25_0 = _9__25_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v18->__9__25_0,
      (System_Int32_array **)_9__25_0,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
  }
  coinListPanel = (UnityEngine_GameObject_o *)System_Linq_Enumerable__Sum_KeyValuePair_int__SelectedUserSvtCoin__(
                                                (System_Collections_Generic_IEnumerable_TSource__o *)selectedCoinDic,
                                                (System_Func_TSource__int__o *)_9__25_0,
                                                (const MethodInfo_1CC7B2C *)Method_System_Linq_Enumerable_Sum_KeyValuePair_int__SelectedUserSvtCoin____);
  if ( !this->fields.effectCircleObject )
    goto LABEL_32;
  v27 = (int)coinListPanel;
  Component_srcLineSprite = (struct SimpleAnimation_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          this->fields.effectCircleObject,
                                                          (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  this->fields.circleAnimation = Component_srcLineSprite;
  p_circleAnimation = &this->fields.circleAnimation;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.circleAnimation,
    (System_Int32_array **)Component_srcLineSprite,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  coinListPanel = this->fields.coinListPanel;
  if ( !coinListPanel )
    goto LABEL_32;
  UnityEngine_GameObject__SetActive(coinListPanel, 0, 0LL);
  coinListPanel = this->fields.lobbyPanel;
  if ( !coinListPanel )
    goto LABEL_32;
  UnityEngine_GameObject__SetActive(coinListPanel, 0, 0LL);
  coinListPanel = this->fields.titleInfoObject;
  if ( !coinListPanel )
    goto LABEL_32;
  UnityEngine_GameObject__SetActive(coinListPanel, 0, 0LL);
  coinListPanel = this->fields.titleInfoObject;
  if ( !coinListPanel )
    goto LABEL_32;
  coinListPanel = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                coinListPanel,
                                                (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoControl___);
  if ( !coinListPanel )
    goto LABEL_32;
  TitleInfoControl__SetHelpBtn((TitleInfoControl_o *)coinListPanel, 0, 0LL);
  MainMenuBar__setMenuActive(0, 0LL, 0LL);
  v36 = (CoinRoomEffectComponent_o *)UnityEngine_Mathf__Min_41127788(
                                       v27,
                                       this->fields.energyPartLoopRateOverTimeMax,
                                       0LL);
  v37 = (int)v36;
  m_ParticleSystem = CoinRoomEffectComponent__GetEmissionModule(v36, this->fields.coinPartObject, v38).fields.m_ParticleSystem;
  UnityEngine_ParticleSystem_MinMaxCurve__op_Implicit(&v48, (float)v37, 0LL);
  v50.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
  v47 = v48;
  UnityEngine_ParticleSystem_EmissionModule__set_rateOverTime(v50, &v47, 0LL);
  v40 = CoinRoomEffectComponent__PlayCoinArrivedSE(this, v37, v39);
  coinListPanel = (UnityEngine_GameObject_o *)UnityEngine_MonoBehaviour__StartCoroutine_36062060(
                                                (UnityEngine_MonoBehaviour_o *)this,
                                                v40,
                                                0LL);
  afterEntity = this->fields.afterEntity;
  if ( !afterEntity )
    goto LABEL_32;
  cnt = afterEntity->fields.cnt;
  coinListPanel = this->fields.effectCircleObject;
  v43 = cnt ? cnt : v13;
  if ( !coinListPanel )
    goto LABEL_32;
  coinListPanel = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                coinListPanel,
                                                (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_CoinRoomControlEffect___);
  beforeEntity = this->fields.beforeEntity;
  if ( !beforeEntity
    || !coinListPanel
    || (CoinRoomControlEffect__SetValue(
          (CoinRoomControlEffect_o *)coinListPanel,
          beforeEntity->fields.cnt,
          v43,
          v13,
          v44),
        (coinListPanel = this->fields.gaugeObject) == 0LL)
    || (UnityEngine_GameObject__SetActive(coinListPanel, 1, 0LL), (v46 = this->fields.beforeEntity) == 0LL)
    || (coinListPanel = (UnityEngine_GameObject_o *)this->fields.gaugeSlider) == 0LL
    || (UIProgressBar__set_value((UIProgressBar_o *)coinListPanel, (float)v46->fields.cnt / (float)v13, 0LL),
        (coinListPanel = (UnityEngine_GameObject_o *)*p_circleAnimation) == 0LL) )
  {
LABEL_32:
    sub_B7076C(coinListPanel, v26);
  }
  SimpleAnimation__Play_16672920((SimpleAnimation_o *)coinListPanel, this->fields.stateName, 0LL);
}


void __fastcall CoinRoomEffectComponent__Update(CoinRoomEffectComponent_o *this, const MethodInfo *method)
{
  SimpleAnimation_o *circleAnimation; // x0
  SimpleAnimation_c *klass; // x8
  SimpleAnimation_o *v5; // x21
  unsigned __int64 v6; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  _BOOL4 isAcquired; // w8
  CommonUI_o *Instance; // x20
  CoinRoomUtility_c *v17; // x8
  float EFFECT_FADE_TIME; // s8
  System_Action_o *v19; // x21
  System_String_o *MainBgmName; // x19

  if ( (byte_4352050 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&BgmManager_TypeInfo);
    sub_B70694(&Method_CoinRoomEffectComponent__Update_b__23_0__);
    sub_B70694(&CoinRoomUtility_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&SoundManager_TypeInfo);
    sub_B70694(&SimpleAnimation_State_TypeInfo);
    byte_4352050 = 1;
  }
  if ( !this->fields.endCallBack || this->fields.isEffectEnd )
    return;
  circleAnimation = this->fields.circleAnimation;
  if ( !circleAnimation
    || (circleAnimation = (SimpleAnimation_o *)SimpleAnimation__GetState(circleAnimation, this->fields.stateName, 0LL)) == 0LL )
  {
LABEL_29:
    sub_B7076C(circleAnimation, method);
  }
  klass = circleAnimation->klass;
  v5 = circleAnimation;
  if ( *(_WORD *)&circleAnimation->klass->_2.bitflags1 )
  {
    v6 = 0LL;
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v6;
      p_offset += 2;
      if ( v6 >= *(unsigned __int16 *)&circleAnimation->klass->_2.bitflags1 )
        goto LABEL_11;
    }
    v8 = (__int64)(&klass->vtable._5_OnDisable.method + 2 * *(_DWORD *)p_offset);
  }
  else
  {
LABEL_11:
    v8 = sub_B08590(circleAnimation, SimpleAnimation_State_TypeInfo, 5LL);
  }
  if ( (*(float (__fastcall **)(SimpleAnimation_o *, _QWORD))v8)(v5, *(_QWORD *)(v8 + 8)) >= 0.95 )
  {
    isAcquired = this->fields.isAcquired;
    this->fields.isEffectEnd = 1;
    if ( isAcquired )
    {
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v17 = CoinRoomUtility_TypeInfo;
      if ( (BYTE3(CoinRoomUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CoinRoomUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
        v17 = CoinRoomUtility_TypeInfo;
      }
      EFFECT_FADE_TIME = v17->static_fields->EFFECT_FADE_TIME;
      v19 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
      System_Action___ctor(v19, (Il2CppObject *)this, Method_CoinRoomEffectComponent__Update_b__23_0__, 0LL);
      if ( Instance )
      {
        CommonUI__maskFadeout(Instance, 2, EFFECT_FADE_TIME, v19, 0LL);
        return;
      }
    }
    else
    {
      this->fields.endCallBack = 0LL;
      sub_B70630((BattleServantConfConponent_o *)&this->fields.endCallBack, 0LL, v9, v10, v11, v12, v13, v14);
      this->fields.isEffectEnd = 0;
      this->fields.state = 2;
      if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
      MainBgmName = BgmManager__GetMainBgmName(0LL);
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playBgm(MainBgmName, 0LL);
      circleAnimation = (SimpleAnimation_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( circleAnimation )
      {
        AvalonSceneManager__transitionScene((AvalonSceneManager_o *)circleAnimation, 90, 1, 0LL, 0LL);
        return;
      }
    }
    goto LABEL_29;
  }
}


void __fastcall CoinRoomEffectComponent___Update_b__23_0(CoinRoomEffectComponent_o *this, const MethodInfo *method)
{
  System_Action_o *endCallBack; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  CommonUI_o *v10; // x19

  if ( (byte_4352057 & 1) == 0 )
  {
    sub_B70694(&CoinRoomUtility_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4352057 = 1;
  }
  endCallBack = this->fields.endCallBack;
  if ( !endCallBack )
    goto LABEL_9;
  System_Action__Invoke(endCallBack, 0LL);
  this->fields.endCallBack = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.endCallBack, 0LL, v4, v5, v6, v7, v8, v9);
  this->fields.isEffectEnd = 0;
  endCallBack = (System_Action_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (CommonUI_o *)endCallBack;
  if ( (BYTE3(CoinRoomUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CoinRoomUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
  }
  if ( !v10 )
LABEL_9:
    sub_B7076C(endCallBack, method);
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
  CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_o *v2; // x19
  struct CoinRoomEffectComponent_o *_4__this; // x21
  UnityEngine_ParticleSystem_o *v4; // x20
  float duration; // s0
  float v6; // s2
  float playIntervalTime_5__4; // s0
  float v8; // s0
  float v9; // s1
  float totalTime_5__7; // s8
  float deltaTime; // s0
  float time_5__8; // s9
  float v13; // s0
  System_String_o *arrivedPlaySeName; // x20
  _BOOL4 isGaugeAnimation_5__5; // w9
  int v16; // w8
  struct UserCoinRoomEntity_o *beforeEntity; // x8
  struct UserCoinRoomEntity_o *afterEntity; // x9
  Il2CppObject **v19; // x19
  bool result; // w0
  float lifeTime_5__2; // s8
  UnityEngine_WaitForSeconds_o *v22; // x20
  Il2CppObject **p__2__current; // x19
  UnityEngine_ParticleSystem_MinMaxCurve_o v24; // [xsp+0h] [xbp-70h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v25; // [xsp+20h] [xbp-50h] BYREF
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+58h] [xbp-18h] BYREF
  UnityEngine_ParticleSystem_MainModule_o v27; // 0:x0.8
  UnityEngine_ParticleSystem_MainModule_o v28; // 0:x0.8

  v2 = this;
  if ( (byte_434EDC1 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_CoinRoomGaugeEffectComponent___);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_ParticleSystem___);
    sub_B70694(&SoundManager_TypeInfo);
    this = (CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_o *)sub_B70694(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_434EDC1 = 1;
  }
  m_ParticleSystem = 0LL;
  memset(&v25, 0, sizeof(v25));
  _4__this = v2->fields.__4__this;
  switch ( v2->fields.__1__state )
  {
    case 0:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_31;
      this = (CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_o *)_4__this->fields.coinPartObject;
      if ( !this )
        goto LABEL_31;
      this = (CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                     (UnityEngine_GameObject_o *)this,
                                                                     (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_ParticleSystem___);
      if ( !this )
        goto LABEL_31;
      v4 = (UnityEngine_ParticleSystem_o *)this;
      m_ParticleSystem = UnityEngine_ParticleSystem__get_main((UnityEngine_ParticleSystem_o *)this, 0LL).fields.m_ParticleSystem;
      v27.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
      UnityEngine_ParticleSystem_MainModule__get_startLifetime(&v24, v27, 0LL);
      v25 = v24;
      v2->fields._lifeTime_5__2 = UnityEngine_ParticleSystem_MinMaxCurve__get_constant(&v25, 0LL);
      m_ParticleSystem = UnityEngine_ParticleSystem__get_main(v4, 0LL).fields.m_ParticleSystem;
      v28.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
      duration = UnityEngine_ParticleSystem_MainModule__get_duration(v28, 0LL);
      v6 = duration / (float)v2->fields.totalCount;
      v2->fields._duration_5__3 = duration;
      v2->fields._playIntervalTime_5__4 = v6;
      v2->fields._playIntervalTime_5__4 = UnityEngine_Mathf__Max(v6, _4__this->fields.arrivedPlaySeIntervalTime, 0LL);
      v2->fields._isGaugeAnimation_5__5 = 0;
      this = (CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_o *)_4__this->fields.gaugeObject;
      if ( !this )
        goto LABEL_31;
      v2->fields._gaugeEffectComponent_5__6 = (struct CoinRoomGaugeEffectComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)this,
                                                                                         (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_CoinRoomGaugeEffectComponent___);
      sub_B70630(&v2->fields._gaugeEffectComponent_5__6);
LABEL_26:
      this = (CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_o *)_4__this->fields.coinPartObject;
      if ( !this )
        goto LABEL_31;
      if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL) )
      {
        lifeTime_5__2 = v2->fields._lifeTime_5__2;
        v22 = (UnityEngine_WaitForSeconds_o *)sub_B70764(UnityEngine_WaitForSeconds_TypeInfo);
        UnityEngine_WaitForSeconds___ctor(v22, lifeTime_5__2 * 0.9, 0LL);
        v2->fields.__2__current = (Il2CppObject *)v22;
        sub_B70630(&v2->fields.__2__current);
        v2->fields.__1__state = 2;
        return 1;
      }
      else
      {
        v2->fields.__2__current = 0LL;
        p__2__current = &v2->fields.__2__current;
        sub_B70630(p__2__current);
        result = 1;
        *((_DWORD *)p__2__current - 2) = 1;
      }
      return result;
    case 1:
      v2->fields.__1__state = -1;
      if ( _4__this )
        goto LABEL_26;
      goto LABEL_31;
    case 2:
      playIntervalTime_5__4 = v2->fields._playIntervalTime_5__4;
      v2->fields._totalTime_5__7 = 0.0;
      v8 = playIntervalTime_5__4 + 1.0;
      v2->fields._playCount_5__9 = 0;
      v2->fields.__1__state = -1;
      v2->fields._time_5__8 = v8;
      v9 = 0.0;
      goto LABEL_11;
    case 3:
      totalTime_5__7 = v2->fields._totalTime_5__7;
      v2->fields.__1__state = -1;
      deltaTime = UnityEngine_Time__get_deltaTime(0LL);
      time_5__8 = v2->fields._time_5__8;
      v2->fields._totalTime_5__7 = totalTime_5__7 + deltaTime;
      v13 = UnityEngine_Time__get_deltaTime(0LL);
      v9 = v2->fields._totalTime_5__7;
      v8 = time_5__8 + v13;
      v2->fields._time_5__8 = v8;
LABEL_11:
      if ( v9 >= v2->fields._duration_5__3 || v2->fields._playCount_5__9 >= v2->fields.totalCount )
        return 0;
      if ( v8 < v2->fields._playIntervalTime_5__4 )
        goto LABEL_23;
      if ( !_4__this )
        goto LABEL_31;
      arrivedPlaySeName = _4__this->fields.arrivedPlaySeName;
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      this = (CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_o *)SoundManager__playSeContinue(arrivedPlaySeName, 0LL);
      isGaugeAnimation_5__5 = v2->fields._isGaugeAnimation_5__5;
      v16 = v2->fields._playCount_5__9 + 1;
      v2->fields._time_5__8 = 0.0;
      v2->fields._playCount_5__9 = v16;
      if ( !isGaugeAnimation_5__5 )
      {
        beforeEntity = _4__this->fields.beforeEntity;
        if ( !beforeEntity
          || (afterEntity = _4__this->fields.afterEntity) == 0LL
          || (this = (CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_o *)v2->fields._gaugeEffectComponent_5__6) == 0LL )
        {
LABEL_31:
          sub_B7076C(this, method);
        }
        CoinRoomGaugeEffectComponent__StartAnimation(
          (CoinRoomGaugeEffectComponent_o *)this,
          beforeEntity->fields.cnt,
          afterEntity->fields.cnt,
          0LL);
        v2->fields._isGaugeAnimation_5__5 = 1;
      }
LABEL_23:
      v2->fields.__2__current = 0LL;
      v19 = &v2->fields.__2__current;
      sub_B70630(v19);
      *((_DWORD *)v19 - 2) = 3;
      return 1;
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

  v2 = sub_B70698(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B70764(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B70698(&Method_CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_System_Collections_IEnumerator_Reset__);
  sub_B70738(v3, v4);
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
  struct CoinRoomEffectComponent___c_StaticFields *static_fields; // x0

  if ( (byte_434EDBD & 1) == 0 )
  {
    sub_B70694(&CoinRoomEffectComponent___c_TypeInfo);
    byte_434EDBD = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(CoinRoomEffectComponent___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = CoinRoomEffectComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct CoinRoomEffectComponent___c_o *)v1;
  sub_B70630(static_fields);
}


void __fastcall CoinRoomEffectComponent___c___ctor(CoinRoomEffectComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall CoinRoomEffectComponent___c___NextAcquiredEffect_b__27_1(
        CoinRoomEffectComponent___c_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v3; // x1
  System_String_o *MainBgmName; // x19

  if ( (byte_434EDBF & 1) == 0 )
  {
    sub_B70694(&BgmManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&SoundManager_TypeInfo);
    byte_434EDBF = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  CommonUI__ReleaseCoinRoomGetEffect(Instance, 0LL);
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  MainBgmName = BgmManager__GetMainBgmName(0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm(MainBgmName, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
LABEL_12:
    sub_B7076C(Instance, v3);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 90, 1, 0LL, 0LL);
}


int32_t __fastcall CoinRoomEffectComponent___c___StartPutInAnimation_b__25_0(
        CoinRoomEffectComponent___c_o *this,
        System_Collections_Generic_KeyValuePair_int__SelectedUserSvtCoin__o x,
        const MethodInfo *method)
{
  struct SelectedUserSvtCoin_o *value; // x19

  value = x.fields.value;
  if ( (byte_434EDBE & 1) == 0 )
  {
    this = (CoinRoomEffectComponent___c_o *)sub_B70694(&Method_System_Collections_Generic_KeyValuePair_int__SelectedUserSvtCoin__get_Value__);
    byte_434EDBE = 1;
  }
  if ( !value )
    sub_B7076C(this, *(_QWORD *)&x.fields.key);
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
  QuestRewardInfo_o *questRewardInfo; // x20
  UnityEngine_Transform_o *v7; // x21
  CoinRoomEffectComponent___c_c *v8; // x8
  struct CoinRoomEffectComponent___c_StaticFields *static_fields; // x9
  System_Action_o *_9__27_1; // x22
  Il2CppObject *v11; // x23
  struct CoinRoomEffectComponent___c_StaticFields *v12; // x0

  v2 = this;
  if ( (byte_434EDC0 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&Method_CoinRoomEffectComponent___c__NextAcquiredEffect_b__27_1__);
    this = (CoinRoomEffectComponent___c__DisplayClass27_0_o *)sub_B70694(&CoinRoomEffectComponent___c_TypeInfo);
    byte_434EDC0 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_17;
  this = (CoinRoomEffectComponent___c__DisplayClass27_0_o *)_4__this->fields.gaugeObject;
  if ( !this )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (CoinRoomEffectComponent___c__DisplayClass27_0_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = v2->fields.__4__this;
  if ( !v4 )
    goto LABEL_17;
  v5 = (CommonUI_o *)this;
  this = (CoinRoomEffectComponent___c__DisplayClass27_0_o *)v4->fields.acquiredEffect;
  if ( !this )
    goto LABEL_17;
  this = (CoinRoomEffectComponent___c__DisplayClass27_0_o *)UnityEngine_GameObject__get_transform(
                                                              (UnityEngine_GameObject_o *)this,
                                                              0LL);
  questRewardInfo = v2->fields.questRewardInfo;
  v7 = (UnityEngine_Transform_o *)this;
  v8 = CoinRoomEffectComponent___c_TypeInfo;
  if ( (BYTE3(CoinRoomEffectComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CoinRoomEffectComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomEffectComponent___c_TypeInfo);
    v8 = CoinRoomEffectComponent___c_TypeInfo;
  }
  static_fields = v8->static_fields;
  _9__27_1 = static_fields->__9__27_1;
  if ( !_9__27_1 )
  {
    if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      static_fields = CoinRoomEffectComponent___c_TypeInfo->static_fields;
    }
    v11 = (Il2CppObject *)static_fields->__9;
    _9__27_1 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(_9__27_1, v11, Method_CoinRoomEffectComponent___c__NextAcquiredEffect_b__27_1__, 0LL);
    v12 = CoinRoomEffectComponent___c_TypeInfo->static_fields;
    v12->__9__27_1 = _9__27_1;
    sub_B70630(&v12->__9__27_1);
  }
  if ( !v5 )
LABEL_17:
    sub_B7076C(this, method);
  CommonUI__OpenCoinRoomGetEffect(v5, v7, 0, questRewardInfo, _9__27_1, 0LL);
}