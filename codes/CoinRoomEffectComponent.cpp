void __fastcall CoinRoomEffectComponent___ctor(CoinRoomEffectComponent_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Int32_array **v12; // x1
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v15; // x20
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Int32_array **v22; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  if ( (byte_4214785 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin___ctor__, method);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__TypeInfo, v9);
    sub_B0D8A4(&StringLiteral_16484/*"ar154"*/, v10);
    sub_B0D8A4(&StringLiteral_1/*""*/, v11);
    byte_4214785 = 1;
  }
  v12 = (System_Int32_array **)StringLiteral_16484/*"ar154"*/;
  this->fields.arrivedPlaySeName = (struct System_String_o *)StringLiteral_16484/*"ar154"*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.arrivedPlaySeName, v12, v2, v3, v4, v5, v6, v7);
  *(_QWORD *)&this->fields.arrivedPlaySeIntervalTime = 0x3E83D4CCCCDLL;
  this->fields.TARGET_ITEM_ID = 7999;
  v15 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B0D974(
                                                                                                   System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__TypeInfo,
                                                                                                   v13,
                                                                                                   v14);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v15,
    (const MethodInfo_2E8F874 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin___ctor__);
  this->fields.selectedCoinDic = (struct System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *)v15;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.selectedCoinDic,
    (System_Int32_array **)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v22 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.stateName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.stateName, v22, v23, v24, v25, v26, v27, v28);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


UnityEngine_ParticleSystem_EmissionModule_o __fastcall CoinRoomEffectComponent__GetEmissionModule(
        CoinRoomEffectComponent_o *this,
        UnityEngine_GameObject_o *targetObject,
        const MethodInfo *method)
{
  if ( (byte_4214782 & 1) == 0 )
  {
    this = (CoinRoomEffectComponent_o *)sub_B0D8A4(
                                          &Method_UnityEngine_GameObject_GetComponent_ParticleSystem___,
                                          targetObject);
    byte_4214782 = 1;
  }
  if ( !targetObject
    || (this = (CoinRoomEffectComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              targetObject,
                                              (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_ParticleSystem___)) == 0LL )
  {
    sub_B0D97C(this);
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
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  __int64 v16; // x1
  __int64 v17; // x2
  QuestRewardInfo_o *v18; // x22
  __int64 v19; // x21
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  CommonUI_o *Instance; // x19
  __int64 v27; // x1
  __int64 v28; // x2
  System_Action_o *v29; // x21

  if ( (byte_4214783 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&QuestRewardInfo_TypeInfo, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B0D8A4(&Method_CoinRoomEffectComponent___c__DisplayClass27_0__NextAcquiredEffect_b__0__, v6);
    sub_B0D8A4(&CoinRoomEffectComponent___c__DisplayClass27_0_TypeInfo, v7);
    byte_4214783 = 1;
  }
  v8 = sub_B0D974(CoinRoomEffectComponent___c__DisplayClass27_0_TypeInfo, method, v2);
  CoinRoomEffectComponent___c__DisplayClass27_0___ctor((CoinRoomEffectComponent___c__DisplayClass27_0_o *)v8, 0LL);
  if ( !v8 )
    goto LABEL_13;
  *(_QWORD *)(v8 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v8 + 16), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
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
        v18 = (QuestRewardInfo_o *)sub_B0D974(QuestRewardInfo_TypeInfo, v16, v17);
        QuestRewardInfo___ctor(v18, 0LL);
        *(_QWORD *)(v8 + 24) = v18;
        v19 = v8 + 24;
        sub_B0D840((BattleServantConfConponent_o *)(v8 + 24), (System_Int32_array **)v18, v20, v21, v22, v23, v24, v25);
        if ( *(_QWORD *)(v8 + 24) )
        {
          *(_DWORD *)(*(_QWORD *)(v8 + 24) + 20LL) = this->fields.TARGET_ITEM_ID;
          if ( *(_QWORD *)v19 )
          {
            *(_DWORD *)(*(_QWORD *)v19 + 24LL) = 1;
            if ( *(_QWORD *)v19 )
            {
              *(_DWORD *)(*(_QWORD *)v19 + 16LL) = 2;
              Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              v29 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v27, v28);
              System_Action___ctor(
                v29,
                (Il2CppObject *)v8,
                Method_CoinRoomEffectComponent___c__DisplayClass27_0__NextAcquiredEffect_b__0__,
                0LL);
              if ( Instance )
              {
                CommonUI__LoadCoinRoomGetEffect(Instance, v29, 0LL);
                return;
              }
            }
          }
        }
      }
    }
LABEL_13:
    sub_B0D97C(acquiredEffect);
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
  UserCoinRoomEntity_o *v9; // x21
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  DataManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x20
  UserServantEntity_o *Entity; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  struct UserCoinRoomEntity_o *afterEntity; // x8
  int32_t cnt; // w8
  __int64 *v41; // x8
  struct System_String_o *v42; // x1
  const MethodInfo *v43; // x1

  v9 = beforeUserCoinRoomEntity;
  if ( (byte_4214780 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserCoinRoomMaster___, beforeUserCoinRoomEntity);
    sub_B0D8A4(&Method_DataMasterBase_UserCoinRoomMaster__UserCoinRoomEntity__long__GetEntity__, v11);
    sub_B0D8A4(&NetworkManager_TypeInfo, v12);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_B0D8A4(&SoundManager_TypeInfo, v14);
    sub_B0D8A4(&UserCoinRoomEntity_TypeInfo, v15);
    sub_B0D8A4(&StringLiteral_18333/*"effect_Circle_act2"*/, v16);
    sub_B0D8A4(&StringLiteral_18332/*"effect_Circle_act1"*/, v17);
    byte_4214780 = 1;
  }
  this->fields.state = 1;
  if ( !v9 )
  {
    v9 = (UserCoinRoomEntity_o *)sub_B0D974(UserCoinRoomEntity_TypeInfo, beforeUserCoinRoomEntity, selectedCoinDic);
    UserCoinRoomEntity___ctor(v9, 0LL);
  }
  this->fields.beforeEntity = v9;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.beforeEntity,
    (System_Int32_array **)v9,
    (System_String_array **)selectedCoinDic,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.selectedCoinDic = selectedCoinDic;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.selectedCoinDic,
    (System_Int32_array **)selectedCoinDic,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(Instance, (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserCoinRoomMaster___);
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
                   (const MethodInfo_2669DFC *)Method_DataMasterBase_UserCoinRoomMaster__UserCoinRoomEntity__long__GetEntity__),
        this->fields.afterEntity = (struct UserCoinRoomEntity_o *)Entity,
        sub_B0D840(
          (BattleServantConfConponent_o *)&this->fields.afterEntity,
          (System_Int32_array **)Entity,
          v27,
          v28,
          v29,
          v30,
          v31,
          v32),
        (afterEntity = this->fields.afterEntity) == 0LL) )
  {
LABEL_18:
    sub_B0D97C(Instance);
  }
  cnt = afterEntity->fields.cnt;
  this->fields.isAcquired = cnt == 0;
  if ( cnt )
    v41 = &StringLiteral_18332/*"effect_Circle_act1"*/;
  else
    v41 = &StringLiteral_18333/*"effect_Circle_act2"*/;
  v42 = (struct System_String_o *)*v41;
  this->fields.stateName = (struct System_String_o *)*v41;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.stateName,
    (System_Int32_array **)v42,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__stopBgm(0LL);
  CoinRoomEffectComponent__StartPutInAnimation(this, v43);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall CoinRoomEffectComponent__PlayCoinArrivedSE(
        CoinRoomEffectComponent_o *this,
        int32_t totalCount,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_4214784 & 1) == 0 )
  {
    sub_B0D8A4(&CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_TypeInfo, *(_QWORD *)&totalCount);
    byte_4214784 = 1;
  }
  v5 = sub_B0D974(CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_TypeInfo, *(_QWORD *)&totalCount, method);
  CoinRoomEffectComponent__PlayCoinArrivedSE_d__28___ctor(
    (CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_B0D97C(v6);
  *(_QWORD *)(v5 + 32) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v7, v8, v9, v10, v11, v12);
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
  __int64 v13; // x1
  System_Action_o *v14; // x20
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  int32_t v21; // w0
  __int64 v22; // x1
  __int64 v23; // x2
  struct System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *selectedCoinDic; // x21
  int32_t v25; // w20
  CoinRoomEffectComponent___c_c *v26; // x8
  struct CoinRoomEffectComponent___c_StaticFields *static_fields; // x9
  System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__o *_9__25_0; // x22
  Il2CppObject *v29; // x23
  struct CoinRoomEffectComponent___c_StaticFields *v30; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  UnityEngine_GameObject_o *coinListPanel; // x0
  int32_t v38; // w22
  struct SimpleAnimation_o *Component_srcLineSprite; // x0
  struct SimpleAnimation_o **p_circleAnimation; // x21
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  CoinRoomEffectComponent_o *v47; // x0
  int32_t v48; // w22
  const MethodInfo *v49; // x2
  const MethodInfo *v50; // x2
  System_Collections_IEnumerator_o *v51; // x0
  struct UserCoinRoomEntity_o *afterEntity; // x8
  int32_t cnt; // w8
  int32_t v54; // w22
  const MethodInfo *v55; // x4
  struct UserCoinRoomEntity_o *beforeEntity; // x8
  struct UserCoinRoomEntity_o *v57; // x8
  UnityEngine_ParticleSystem_MinMaxCurve_o v58; // [xsp+0h] [xbp-80h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v59; // [xsp+28h] [xbp-58h] BYREF
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+48h] [xbp-38h] BYREF
  UnityEngine_ParticleSystem_EmissionModule_o v61; // 0:x0.8

  if ( (byte_4214781 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_CoinRoomEffectComponent_NextAcquiredEffect__, v4);
    sub_B0D8A4(&CoinRoomUtility_TypeInfo, v5);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Sum_KeyValuePair_int__SelectedUserSvtCoin____, v6);
    sub_B0D8A4(&Method_System_Func_KeyValuePair_int__SelectedUserSvtCoin___int___ctor__, v7);
    sub_B0D8A4(&System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__TypeInfo, v8);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_CoinRoomControlEffect___, v9);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v10);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_TitleInfoControl___, v11);
    sub_B0D8A4(&Method_CoinRoomEffectComponent___c__StartPutInAnimation_b__25_0__, v12);
    sub_B0D8A4(&CoinRoomEffectComponent___c_TypeInfo, v13);
    byte_4214781 = 1;
  }
  m_ParticleSystem = 0LL;
  v14 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, method, v2);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_CoinRoomEffectComponent_NextAcquiredEffect__, 0LL);
  this->fields.endCallBack = v14;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.endCallBack,
    (System_Int32_array **)v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  if ( (BYTE3(CoinRoomUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CoinRoomUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
  }
  v21 = CoinRoomUtility__MaxPoint(0LL);
  selectedCoinDic = this->fields.selectedCoinDic;
  v25 = v21;
  v26 = CoinRoomEffectComponent___c_TypeInfo;
  if ( (BYTE3(CoinRoomEffectComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CoinRoomEffectComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomEffectComponent___c_TypeInfo);
    v26 = CoinRoomEffectComponent___c_TypeInfo;
  }
  static_fields = v26->static_fields;
  _9__25_0 = static_fields->__9__25_0;
  if ( !_9__25_0 )
  {
    if ( (BYTE3(v26->vtable._0_Equals.methodPtr) & 4) != 0 && !v26->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v26);
      static_fields = CoinRoomEffectComponent___c_TypeInfo->static_fields;
    }
    v29 = (Il2CppObject *)static_fields->__9;
    _9__25_0 = (System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__o *)sub_B0D974(
                                                                               System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__TypeInfo,
                                                                               v22,
                                                                               v23);
    System_Func_KeyValuePair_int__SelectedUserSvtCoin___int____ctor(
      _9__25_0,
      v29,
      Method_CoinRoomEffectComponent___c__StartPutInAnimation_b__25_0__,
      (const MethodInfo_260A704 *)Method_System_Func_KeyValuePair_int__SelectedUserSvtCoin___int___ctor__);
    v30 = CoinRoomEffectComponent___c_TypeInfo->static_fields;
    v30->__9__25_0 = _9__25_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v30->__9__25_0,
      (System_Int32_array **)_9__25_0,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36);
  }
  coinListPanel = (UnityEngine_GameObject_o *)System_Linq_Enumerable__Sum_KeyValuePair_int__SelectedUserSvtCoin__(
                                                (System_Collections_Generic_IEnumerable_TSource__o *)selectedCoinDic,
                                                (System_Func_TSource__int__o *)_9__25_0,
                                                (const MethodInfo_1B55798 *)Method_System_Linq_Enumerable_Sum_KeyValuePair_int__SelectedUserSvtCoin____);
  if ( !this->fields.effectCircleObject )
    goto LABEL_32;
  v38 = (int)coinListPanel;
  Component_srcLineSprite = (struct SimpleAnimation_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          this->fields.effectCircleObject,
                                                          (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  this->fields.circleAnimation = Component_srcLineSprite;
  p_circleAnimation = &this->fields.circleAnimation;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.circleAnimation,
    (System_Int32_array **)Component_srcLineSprite,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
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
                                                (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoControl___);
  if ( !coinListPanel )
    goto LABEL_32;
  TitleInfoControl__SetHelpBtn((TitleInfoControl_o *)coinListPanel, 0, 0LL);
  MainMenuBar__setMenuActive(0, 0LL, 0LL);
  v47 = (CoinRoomEffectComponent_o *)UnityEngine_Mathf__Min_40819044(
                                       v38,
                                       this->fields.energyPartLoopRateOverTimeMax,
                                       0LL);
  v48 = (int)v47;
  m_ParticleSystem = CoinRoomEffectComponent__GetEmissionModule(v47, this->fields.coinPartObject, v49).fields.m_ParticleSystem;
  UnityEngine_ParticleSystem_MinMaxCurve__op_Implicit(&v59, (float)v48, 0LL);
  v61.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
  v58 = v59;
  UnityEngine_ParticleSystem_EmissionModule__set_rateOverTime(v61, &v58, 0LL);
  v51 = CoinRoomEffectComponent__PlayCoinArrivedSE(this, v48, v50);
  coinListPanel = (UnityEngine_GameObject_o *)UnityEngine_MonoBehaviour__StartCoroutine_34930128(
                                                (UnityEngine_MonoBehaviour_o *)this,
                                                v51,
                                                0LL);
  afterEntity = this->fields.afterEntity;
  if ( !afterEntity )
    goto LABEL_32;
  cnt = afterEntity->fields.cnt;
  coinListPanel = this->fields.effectCircleObject;
  v54 = cnt ? cnt : v25;
  if ( !coinListPanel )
    goto LABEL_32;
  coinListPanel = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                coinListPanel,
                                                (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_CoinRoomControlEffect___);
  beforeEntity = this->fields.beforeEntity;
  if ( !beforeEntity
    || !coinListPanel
    || (CoinRoomControlEffect__SetValue(
          (CoinRoomControlEffect_o *)coinListPanel,
          beforeEntity->fields.cnt,
          v54,
          v25,
          v55),
        (coinListPanel = this->fields.gaugeObject) == 0LL)
    || (UnityEngine_GameObject__SetActive(coinListPanel, 1, 0LL), (v57 = this->fields.beforeEntity) == 0LL)
    || (coinListPanel = (UnityEngine_GameObject_o *)this->fields.gaugeSlider) == 0LL
    || (UIProgressBar__set_value((UIProgressBar_o *)coinListPanel, (float)v57->fields.cnt / (float)v25, 0LL),
        (coinListPanel = (UnityEngine_GameObject_o *)*p_circleAnimation) == 0LL) )
  {
LABEL_32:
    sub_B0D97C(coinListPanel);
  }
  SimpleAnimation__Play_50482404((SimpleAnimation_o *)coinListPanel, this->fields.stateName, 0LL);
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
  unsigned __int64 v13; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  _BOOL4 isAcquired; // w8
  __int64 v23; // x1
  __int64 v24; // x2
  CommonUI_o *Instance; // x20
  CoinRoomUtility_c *v26; // x8
  float EFFECT_FADE_TIME; // s8
  System_Action_o *v28; // x21
  System_String_o *MainBgmName; // x19

  if ( (byte_421477F & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&BgmManager_TypeInfo, v3);
    sub_B0D8A4(&Method_CoinRoomEffectComponent__Update_b__23_0__, v4);
    sub_B0D8A4(&CoinRoomUtility_TypeInfo, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B0D8A4(&SoundManager_TypeInfo, v8);
    sub_B0D8A4(&SimpleAnimation_State_TypeInfo, v9);
    byte_421477F = 1;
  }
  if ( !this->fields.endCallBack || this->fields.isEffectEnd )
    return;
  circleAnimation = this->fields.circleAnimation;
  if ( !circleAnimation
    || (circleAnimation = (SimpleAnimation_o *)SimpleAnimation__GetState(circleAnimation, this->fields.stateName, 0LL)) == 0LL )
  {
LABEL_29:
    sub_B0D97C(circleAnimation);
  }
  klass = circleAnimation->klass;
  v12 = circleAnimation;
  if ( *(_WORD *)&circleAnimation->klass->_2.bitflags1 )
  {
    v13 = 0LL;
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v13;
      p_offset += 2;
      if ( v13 >= *(unsigned __int16 *)&circleAnimation->klass->_2.bitflags1 )
        goto LABEL_11;
    }
    v15 = (__int64)(&klass->vtable._5_OnDisable.method + 2 * *(_DWORD *)p_offset);
  }
  else
  {
LABEL_11:
    v15 = sub_AA67A0(circleAnimation, SimpleAnimation_State_TypeInfo, 5LL);
  }
  if ( (*(float (__fastcall **)(SimpleAnimation_o *, _QWORD))v15)(v12, *(_QWORD *)(v15 + 8)) >= 0.95 )
  {
    isAcquired = this->fields.isAcquired;
    this->fields.isEffectEnd = 1;
    if ( isAcquired )
    {
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v26 = CoinRoomUtility_TypeInfo;
      if ( (BYTE3(CoinRoomUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CoinRoomUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
        v26 = CoinRoomUtility_TypeInfo;
      }
      EFFECT_FADE_TIME = v26->static_fields->EFFECT_FADE_TIME;
      v28 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v23, v24);
      System_Action___ctor(v28, (Il2CppObject *)this, Method_CoinRoomEffectComponent__Update_b__23_0__, 0LL);
      if ( Instance )
      {
        CommonUI__maskFadeout(Instance, 2, EFFECT_FADE_TIME, v28, 0LL);
        return;
      }
    }
    else
    {
      this->fields.endCallBack = 0LL;
      sub_B0D840((BattleServantConfConponent_o *)&this->fields.endCallBack, 0LL, v16, v17, v18, v19, v20, v21);
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
      circleAnimation = (SimpleAnimation_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
  __int64 v3; // x1
  System_Action_o *endCallBack; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  CommonUI_o *v11; // x19

  if ( (byte_4214786 & 1) == 0 )
  {
    sub_B0D8A4(&CoinRoomUtility_TypeInfo, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    byte_4214786 = 1;
  }
  endCallBack = this->fields.endCallBack;
  if ( !endCallBack )
    goto LABEL_9;
  System_Action__Invoke(endCallBack, 0LL);
  this->fields.endCallBack = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.endCallBack, 0LL, v5, v6, v7, v8, v9, v10);
  this->fields.isEffectEnd = 0;
  endCallBack = (System_Action_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (CommonUI_o *)endCallBack;
  if ( (BYTE3(CoinRoomUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CoinRoomUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
  }
  if ( !v11 )
LABEL_9:
    sub_B0D97C(endCallBack);
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
  CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct CoinRoomEffectComponent_o *_4__this; // x21
  UnityEngine_ParticleSystem_o *v7; // x20
  float duration; // s0
  float v9; // s2
  srcLineSprite_o *Component_srcLineSprite; // x0
  float playIntervalTime_5__4; // s0
  float v12; // s0
  float v13; // s1
  float totalTime_5__7; // s8
  float deltaTime; // s0
  float time_5__8; // s9
  float v17; // s0
  System_String_o *arrivedPlaySeName; // x20
  _BOOL4 isGaugeAnimation_5__5; // w9
  int v20; // w8
  struct UserCoinRoomEntity_o *beforeEntity; // x8
  struct UserCoinRoomEntity_o *afterEntity; // x9
  Il2CppObject **v23; // x19
  bool result; // w0
  __int64 v25; // x1
  __int64 v26; // x2
  float lifeTime_5__2; // s8
  UnityEngine_WaitForSeconds_o *v28; // x20
  Il2CppObject **p__2__current; // x19
  UnityEngine_ParticleSystem_MinMaxCurve_o v30; // [xsp+0h] [xbp-70h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v31; // [xsp+20h] [xbp-50h] BYREF
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+58h] [xbp-18h] BYREF
  UnityEngine_ParticleSystem_MainModule_o v33; // 0:x0.8
  UnityEngine_ParticleSystem_MainModule_o v34; // 0:x0.8

  v2 = this;
  if ( (byte_4211E4D & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_CoinRoomGaugeEffectComponent___, method);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_ParticleSystem___, v3);
    sub_B0D8A4(&SoundManager_TypeInfo, v4);
    this = (CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_o *)sub_B0D8A4(&UnityEngine_WaitForSeconds_TypeInfo, v5);
    byte_4211E4D = 1;
  }
  m_ParticleSystem = 0LL;
  memset(&v31, 0, sizeof(v31));
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
                                                                     (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_ParticleSystem___);
      if ( !this )
        goto LABEL_31;
      v7 = (UnityEngine_ParticleSystem_o *)this;
      m_ParticleSystem = UnityEngine_ParticleSystem__get_main((UnityEngine_ParticleSystem_o *)this, 0LL).fields.m_ParticleSystem;
      v33.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
      UnityEngine_ParticleSystem_MainModule__get_startLifetime(&v30, v33, 0LL);
      v31 = v30;
      v2->fields._lifeTime_5__2 = UnityEngine_ParticleSystem_MinMaxCurve__get_constant(&v31, 0LL);
      m_ParticleSystem = UnityEngine_ParticleSystem__get_main(v7, 0LL).fields.m_ParticleSystem;
      v34.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
      duration = UnityEngine_ParticleSystem_MainModule__get_duration(v34, 0LL);
      v9 = duration / (float)v2->fields.totalCount;
      v2->fields._duration_5__3 = duration;
      v2->fields._playIntervalTime_5__4 = v9;
      v2->fields._playIntervalTime_5__4 = UnityEngine_Mathf__Max(v9, _4__this->fields.arrivedPlaySeIntervalTime, 0LL);
      v2->fields._isGaugeAnimation_5__5 = 0;
      this = (CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_o *)_4__this->fields.gaugeObject;
      if ( !this )
        goto LABEL_31;
      Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  (UnityEngine_GameObject_o *)this,
                                  (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_CoinRoomGaugeEffectComponent___);
      v2->fields._gaugeEffectComponent_5__6 = (struct CoinRoomGaugeEffectComponent_o *)Component_srcLineSprite;
      sub_B0D840(&v2->fields._gaugeEffectComponent_5__6, Component_srcLineSprite);
LABEL_26:
      this = (CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_o *)_4__this->fields.coinPartObject;
      if ( !this )
        goto LABEL_31;
      if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL) )
      {
        lifeTime_5__2 = v2->fields._lifeTime_5__2;
        v28 = (UnityEngine_WaitForSeconds_o *)sub_B0D974(UnityEngine_WaitForSeconds_TypeInfo, v25, v26);
        UnityEngine_WaitForSeconds___ctor(v28, lifeTime_5__2 * 0.9, 0LL);
        v2->fields.__2__current = (Il2CppObject *)v28;
        sub_B0D840(&v2->fields.__2__current, v28);
        v2->fields.__1__state = 2;
        return 1;
      }
      else
      {
        v2->fields.__2__current = 0LL;
        p__2__current = &v2->fields.__2__current;
        sub_B0D840(p__2__current, 0LL);
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
      v12 = playIntervalTime_5__4 + 1.0;
      v2->fields._playCount_5__9 = 0;
      v2->fields.__1__state = -1;
      v2->fields._time_5__8 = v12;
      v13 = 0.0;
      goto LABEL_11;
    case 3:
      totalTime_5__7 = v2->fields._totalTime_5__7;
      v2->fields.__1__state = -1;
      deltaTime = UnityEngine_Time__get_deltaTime(0LL);
      time_5__8 = v2->fields._time_5__8;
      v2->fields._totalTime_5__7 = totalTime_5__7 + deltaTime;
      v17 = UnityEngine_Time__get_deltaTime(0LL);
      v13 = v2->fields._totalTime_5__7;
      v12 = time_5__8 + v17;
      v2->fields._time_5__8 = v12;
LABEL_11:
      if ( v13 >= v2->fields._duration_5__3 || v2->fields._playCount_5__9 >= v2->fields.totalCount )
        return 0;
      if ( v12 < v2->fields._playIntervalTime_5__4 )
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
      v20 = v2->fields._playCount_5__9 + 1;
      v2->fields._time_5__8 = 0.0;
      v2->fields._playCount_5__9 = v20;
      if ( !isGaugeAnimation_5__5 )
      {
        beforeEntity = _4__this->fields.beforeEntity;
        if ( !beforeEntity
          || (afterEntity = _4__this->fields.afterEntity) == 0LL
          || (this = (CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_o *)v2->fields._gaugeEffectComponent_5__6) == 0LL )
        {
LABEL_31:
          sub_B0D97C(this);
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
      v23 = &v2->fields.__2__current;
      sub_B0D840(v23, 0LL);
      *((_DWORD *)v23 - 2) = 3;
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
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
  struct CoinRoomEffectComponent___c_StaticFields *static_fields; // x0

  if ( (byte_4211E49 & 1) == 0 )
  {
    sub_B0D8A4(&CoinRoomEffectComponent___c_TypeInfo, v1);
    byte_4211E49 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(CoinRoomEffectComponent___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = CoinRoomEffectComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct CoinRoomEffectComponent___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
  CommonUI_o *Instance; // x0
  System_String_o *MainBgmName; // x19

  if ( (byte_4211E4B & 1) == 0 )
  {
    sub_B0D8A4(&BgmManager_TypeInfo, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v2);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B0D8A4(&SoundManager_TypeInfo, v4);
    byte_4211E4B = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  CommonUI__ReleaseCoinRoomGetEffect(Instance, 0LL);
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  MainBgmName = BgmManager__GetMainBgmName(0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm(MainBgmName, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
LABEL_12:
    sub_B0D97C(Instance);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 90, 1, 0LL, 0LL);
}


int32_t __fastcall CoinRoomEffectComponent___c___StartPutInAnimation_b__25_0(
        CoinRoomEffectComponent___c_o *this,
        System_Collections_Generic_KeyValuePair_int__SelectedUserSvtCoin__o x,
        const MethodInfo *method)
{
  struct SelectedUserSvtCoin_o *value; // x19

  value = x.fields.value;
  if ( (byte_4211E4A & 1) == 0 )
  {
    this = (CoinRoomEffectComponent___c_o *)sub_B0D8A4(
                                              &Method_System_Collections_Generic_KeyValuePair_int__SelectedUserSvtCoin__get_Value__,
                                              *(_QWORD *)&x.fields.key);
    byte_4211E4A = 1;
  }
  if ( !value )
    sub_B0D97C(this);
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
  QuestRewardInfo_o *questRewardInfo; // x20
  UnityEngine_Transform_o *v12; // x21
  CoinRoomEffectComponent___c_c *v13; // x8
  struct CoinRoomEffectComponent___c_StaticFields *static_fields; // x9
  System_Action_o *_9__27_1; // x22
  Il2CppObject *v16; // x23
  struct CoinRoomEffectComponent___c_StaticFields *v17; // x0

  v2 = this;
  if ( (byte_4211E4C & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B0D8A4(&Method_CoinRoomEffectComponent___c__NextAcquiredEffect_b__27_1__, v4);
    this = (CoinRoomEffectComponent___c__DisplayClass27_0_o *)sub_B0D8A4(&CoinRoomEffectComponent___c_TypeInfo, v5);
    byte_4211E4C = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_17;
  this = (CoinRoomEffectComponent___c__DisplayClass27_0_o *)_4__this->fields.gaugeObject;
  if ( !this )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (CoinRoomEffectComponent___c__DisplayClass27_0_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = v2->fields.__4__this;
  if ( !v7 )
    goto LABEL_17;
  v8 = (CommonUI_o *)this;
  this = (CoinRoomEffectComponent___c__DisplayClass27_0_o *)v7->fields.acquiredEffect;
  if ( !this )
    goto LABEL_17;
  this = (CoinRoomEffectComponent___c__DisplayClass27_0_o *)UnityEngine_GameObject__get_transform(
                                                              (UnityEngine_GameObject_o *)this,
                                                              0LL);
  questRewardInfo = v2->fields.questRewardInfo;
  v12 = (UnityEngine_Transform_o *)this;
  v13 = CoinRoomEffectComponent___c_TypeInfo;
  if ( (BYTE3(CoinRoomEffectComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CoinRoomEffectComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomEffectComponent___c_TypeInfo);
    v13 = CoinRoomEffectComponent___c_TypeInfo;
  }
  static_fields = v13->static_fields;
  _9__27_1 = static_fields->__9__27_1;
  if ( !_9__27_1 )
  {
    if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      static_fields = CoinRoomEffectComponent___c_TypeInfo->static_fields;
    }
    v16 = (Il2CppObject *)static_fields->__9;
    _9__27_1 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v9, v10);
    System_Action___ctor(_9__27_1, v16, Method_CoinRoomEffectComponent___c__NextAcquiredEffect_b__27_1__, 0LL);
    v17 = CoinRoomEffectComponent___c_TypeInfo->static_fields;
    v17->__9__27_1 = _9__27_1;
    sub_B0D840(&v17->__9__27_1, _9__27_1);
  }
  if ( !v8 )
LABEL_17:
    sub_B0D97C(this);
  CommonUI__OpenCoinRoomGetEffect(v8, v12, 0, questRewardInfo, _9__27_1, 0LL);
}