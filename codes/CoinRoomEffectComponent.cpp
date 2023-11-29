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
  __int64 v15; // x3
  __int64 v16; // x4
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v17; // x20
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Int32_array **v24; // x1
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7

  if ( (byte_40F9A57 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin___ctor__, method);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__TypeInfo, v9);
    sub_B16FFC(&StringLiteral_16371, v10);
    sub_B16FFC(&StringLiteral_1, v11);
    byte_40F9A57 = 1;
  }
  v12 = (System_Int32_array **)StringLiteral_16371;
  this->fields.arrivedPlaySeName = (struct System_String_o *)StringLiteral_16371;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.arrivedPlaySeName, v12, v2, v3, v4, v5, v6, v7);
  *(_QWORD *)&this->fields.arrivedPlaySeIntervalTime = 0x3E83D4CCCCDLL;
  this->fields.TARGET_ITEM_ID = 7999;
  v17 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B170CC(
                                                                                                   System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__TypeInfo,
                                                                                                   v13,
                                                                                                   v14,
                                                                                                   v15,
                                                                                                   v16);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v17,
    (const MethodInfo_2DE8808 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin___ctor__);
  this->fields.selectedCoinDic = (struct System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *)v17;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.selectedCoinDic,
    (System_Int32_array **)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = (System_Int32_array **)StringLiteral_1;
  this->fields.stateName = (struct System_String_o *)StringLiteral_1;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.stateName, v24, v25, v26, v27, v28, v29, v30);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


UnityEngine_ParticleSystem_EmissionModule_o __fastcall CoinRoomEffectComponent__GetEmissionModule(
        CoinRoomEffectComponent_o *this,
        UnityEngine_GameObject_o *targetObject,
        const MethodInfo *method)
{
  UnityEngine_ParticleSystem_o *Component_srcLineSprite; // x0

  if ( (byte_40F9A54 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ParticleSystem___, targetObject);
    byte_40F9A54 = 1;
  }
  if ( !targetObject
    || (Component_srcLineSprite = (UnityEngine_ParticleSystem_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                    targetObject,
                                                                    (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ParticleSystem___)) == 0LL )
  {
    sub_B170D4();
  }
  return UnityEngine_ParticleSystem__get_emission(Component_srcLineSprite, 0LL);
}


void __fastcall CoinRoomEffectComponent__NextAcquiredEffect(CoinRoomEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  UnityEngine_GameObject_o *acquiredEffect; // x0
  UnityEngine_GameObject_o *v18; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  QuestRewardInfo_o *v23; // x22
  __int64 v24; // x21
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  CommonUI_o *Instance; // x19
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  System_Action_o *v36; // x21

  if ( (byte_40F9A55 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&QuestRewardInfo_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B16FFC(&Method_CoinRoomEffectComponent___c__DisplayClass27_0__NextAcquiredEffect_b__0__, v8);
    sub_B16FFC(&CoinRoomEffectComponent___c__DisplayClass27_0_TypeInfo, v9);
    byte_40F9A55 = 1;
  }
  v10 = sub_B170CC(CoinRoomEffectComponent___c__DisplayClass27_0_TypeInfo, method, v2, v3, v4);
  CoinRoomEffectComponent___c__DisplayClass27_0___ctor((CoinRoomEffectComponent___c__DisplayClass27_0_o *)v10, 0LL);
  if ( !v10 )
    goto LABEL_13;
  *(_QWORD *)(v10 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v10 + 16), (System_Int32_array **)this, v11, v12, v13, v14, v15, v16);
  if ( this->fields.state == 1 )
  {
    acquiredEffect = this->fields.acquiredEffect;
    if ( acquiredEffect )
    {
      UnityEngine_GameObject__SetActive(acquiredEffect, 1, 0LL);
      v18 = this->fields.acquiredEffect;
      this->fields.state = 1;
      if ( v18 )
      {
        UnityEngine_GameObject__SetActive(v18, 1, 0LL);
        v23 = (QuestRewardInfo_o *)sub_B170CC(QuestRewardInfo_TypeInfo, v19, v20, v21, v22);
        QuestRewardInfo___ctor(v23, 0LL);
        *(_QWORD *)(v10 + 24) = v23;
        v24 = v10 + 24;
        sub_B16F98((BattleServantConfConponent_o *)(v10 + 24), (System_Int32_array **)v23, v25, v26, v27, v28, v29, v30);
        if ( *(_QWORD *)(v10 + 24) )
        {
          *(_DWORD *)(*(_QWORD *)(v10 + 24) + 20LL) = this->fields.TARGET_ITEM_ID;
          if ( *(_QWORD *)v24 )
          {
            *(_DWORD *)(*(_QWORD *)v24 + 24LL) = 1;
            if ( *(_QWORD *)v24 )
            {
              *(_DWORD *)(*(_QWORD *)v24 + 16LL) = 2;
              Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              v36 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v32, v33, v34, v35);
              System_Action___ctor(
                v36,
                (Il2CppObject *)v10,
                Method_CoinRoomEffectComponent___c__DisplayClass27_0__NextAcquiredEffect_b__0__,
                0LL);
              if ( Instance )
              {
                CommonUI__LoadCoinRoomGetEffect(Instance, v36, 0LL);
                return;
              }
            }
          }
        }
      }
    }
LABEL_13:
    sub_B170D4();
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x20
  int64_t UserId; // x0
  UserServantEntity_o *Entity; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  struct UserCoinRoomEntity_o *afterEntity; // x8
  int32_t cnt; // w8
  __int64 *v42; // x8
  struct System_String_o *v43; // x1
  const MethodInfo *v44; // x1

  v9 = beforeUserCoinRoomEntity;
  if ( (byte_40F9A52 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserCoinRoomMaster___, beforeUserCoinRoomEntity);
    sub_B16FFC(&Method_DataMasterBase_UserCoinRoomMaster__UserCoinRoomEntity__long__GetEntity__, v11);
    sub_B16FFC(&NetworkManager_TypeInfo, v12);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_B16FFC(&SoundManager_TypeInfo, v14);
    sub_B16FFC(&UserCoinRoomEntity_TypeInfo, v15);
    sub_B16FFC(&StringLiteral_18207, v16);
    sub_B16FFC(&StringLiteral_18206, v17);
    byte_40F9A52 = 1;
  }
  this->fields.state = 1;
  if ( !v9 )
  {
    v9 = (UserCoinRoomEntity_o *)sub_B170CC(
                                   UserCoinRoomEntity_TypeInfo,
                                   beforeUserCoinRoomEntity,
                                   selectedCoinDic,
                                   method,
                                   v4);
    UserCoinRoomEntity___ctor(v9, 0LL);
  }
  this->fields.beforeEntity = v9;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.beforeEntity,
    (System_Int32_array **)v9,
    (System_String_array **)selectedCoinDic,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.selectedCoinDic = selectedCoinDic;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.selectedCoinDic,
    (System_Int32_array **)selectedCoinDic,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserCoinRoomMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster
    || (Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                   MasterData_WarQuestSelectionMaster,
                   UserId,
                   (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserCoinRoomMaster__UserCoinRoomEntity__long__GetEntity__),
        this->fields.afterEntity = (struct UserCoinRoomEntity_o *)Entity,
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.afterEntity,
          (System_Int32_array **)Entity,
          v28,
          v29,
          v30,
          v31,
          v32,
          v33),
        (afterEntity = this->fields.afterEntity) == 0LL) )
  {
LABEL_18:
    sub_B170D4();
  }
  cnt = afterEntity->fields.cnt;
  this->fields.isAcquired = cnt == 0;
  if ( cnt )
    v42 = &StringLiteral_18206;
  else
    v42 = &StringLiteral_18207;
  v43 = (struct System_String_o *)*v42;
  this->fields.stateName = (struct System_String_o *)*v42;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.stateName,
    (System_Int32_array **)v43,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x21
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_40F9A56 & 1) == 0 )
  {
    sub_B16FFC(&CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_TypeInfo, *(_QWORD *)&totalCount);
    byte_40F9A56 = 1;
  }
  v7 = sub_B170CC(CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_TypeInfo, *(_QWORD *)&totalCount, method, v3, v4);
  CoinRoomEffectComponent__PlayCoinArrivedSE_d__28___ctor(
    (CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_o *)v7,
    0,
    0LL);
  if ( !v7 )
    sub_B170D4();
  *(_QWORD *)(v7 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v7 + 40) = totalCount;
  return (System_Collections_IEnumerator_o *)v7;
}


void __fastcall CoinRoomEffectComponent__StartPutInAnimation(CoinRoomEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
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
  System_Action_o *v16; // x20
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  CoinRoomUtility_c *v23; // x0
  int32_t v24; // w0
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  struct System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *selectedCoinDic; // x21
  int32_t v30; // w20
  CoinRoomEffectComponent___c_c *v31; // x8
  struct CoinRoomEffectComponent___c_StaticFields *static_fields; // x9
  System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__o *_9__25_0; // x22
  Il2CppObject *v34; // x23
  struct CoinRoomEffectComponent___c_StaticFields *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  int32_t v42; // w0
  int32_t v43; // w22
  struct SimpleAnimation_o *Component_srcLineSprite; // x0
  SimpleAnimation_o **p_circleAnimation; // x21
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  UnityEngine_GameObject_o *coinListPanel; // x0
  UnityEngine_GameObject_o *lobbyPanel; // x0
  UnityEngine_GameObject_o *titleInfoObject; // x0
  UnityEngine_GameObject_o *v55; // x0
  TitleInfoControl_o *v56; // x0
  CoinRoomEffectComponent_o *v57; // x0
  int32_t v58; // w22
  const MethodInfo *v59; // x2
  const MethodInfo *v60; // x2
  System_Collections_IEnumerator_o *v61; // x0
  struct UserCoinRoomEntity_o *afterEntity; // x8
  int32_t cnt; // w8
  UnityEngine_GameObject_o *effectCircleObject; // x0
  int32_t v65; // w22
  CoinRoomControlEffect_o *v66; // x0
  const MethodInfo *v67; // x4
  struct UserCoinRoomEntity_o *beforeEntity; // x8
  UnityEngine_GameObject_o *gaugeObject; // x0
  struct UserCoinRoomEntity_o *v70; // x8
  UIProgressBar_o *gaugeSlider; // x0
  UnityEngine_ParticleSystem_MinMaxCurve_o v72; // [xsp+0h] [xbp-80h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v73; // [xsp+28h] [xbp-58h] BYREF
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+48h] [xbp-38h] BYREF
  UnityEngine_ParticleSystem_EmissionModule_o v75; // 0:x0.8

  if ( (byte_40F9A53 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_CoinRoomEffectComponent_NextAcquiredEffect__, v6);
    sub_B16FFC(&CoinRoomUtility_TypeInfo, v7);
    sub_B16FFC(&Method_System_Linq_Enumerable_Sum_KeyValuePair_int__SelectedUserSvtCoin____, v8);
    sub_B16FFC(&Method_System_Func_KeyValuePair_int__SelectedUserSvtCoin___int___ctor__, v9);
    sub_B16FFC(&System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__TypeInfo, v10);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_CoinRoomControlEffect___, v11);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v12);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_TitleInfoControl___, v13);
    sub_B16FFC(&Method_CoinRoomEffectComponent___c__StartPutInAnimation_b__25_0__, v14);
    sub_B16FFC(&CoinRoomEffectComponent___c_TypeInfo, v15);
    byte_40F9A53 = 1;
  }
  m_ParticleSystem = 0LL;
  v16 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
  System_Action___ctor(v16, (Il2CppObject *)this, Method_CoinRoomEffectComponent_NextAcquiredEffect__, 0LL);
  this->fields.endCallBack = v16;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.endCallBack,
    (System_Int32_array **)v16,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  v23 = CoinRoomUtility_TypeInfo;
  if ( (BYTE3(CoinRoomUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CoinRoomUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
  }
  v24 = CoinRoomUtility__MaxPoint((const MethodInfo *)v23);
  selectedCoinDic = this->fields.selectedCoinDic;
  v30 = v24;
  v31 = CoinRoomEffectComponent___c_TypeInfo;
  if ( (BYTE3(CoinRoomEffectComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CoinRoomEffectComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomEffectComponent___c_TypeInfo);
    v31 = CoinRoomEffectComponent___c_TypeInfo;
  }
  static_fields = v31->static_fields;
  _9__25_0 = static_fields->__9__25_0;
  if ( !_9__25_0 )
  {
    if ( (BYTE3(v31->vtable._0_Equals.methodPtr) & 4) != 0 && !v31->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v31);
      static_fields = CoinRoomEffectComponent___c_TypeInfo->static_fields;
    }
    v34 = (Il2CppObject *)static_fields->__9;
    _9__25_0 = (System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__o *)sub_B170CC(
                                                                               System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__TypeInfo,
                                                                               v25,
                                                                               v26,
                                                                               v27,
                                                                               v28);
    System_Func_KeyValuePair_int__SelectedUserSvtCoin___int____ctor(
      _9__25_0,
      v34,
      Method_CoinRoomEffectComponent___c__StartPutInAnimation_b__25_0__,
      (const MethodInfo_2B5DB98 *)Method_System_Func_KeyValuePair_int__SelectedUserSvtCoin___int___ctor__);
    v35 = CoinRoomEffectComponent___c_TypeInfo->static_fields;
    v35->__9__25_0 = _9__25_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v35->__9__25_0,
      (System_Int32_array **)_9__25_0,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41);
  }
  v42 = System_Linq_Enumerable__Sum_KeyValuePair_int__SelectedUserSvtCoin__(
          (System_Collections_Generic_IEnumerable_TSource__o *)selectedCoinDic,
          (System_Func_TSource__int__o *)_9__25_0,
          (const MethodInfo_19C41B0 *)Method_System_Linq_Enumerable_Sum_KeyValuePair_int__SelectedUserSvtCoin____);
  if ( !this->fields.effectCircleObject )
    goto LABEL_32;
  v43 = v42;
  Component_srcLineSprite = (struct SimpleAnimation_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          this->fields.effectCircleObject,
                                                          (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  this->fields.circleAnimation = Component_srcLineSprite;
  p_circleAnimation = &this->fields.circleAnimation;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.circleAnimation,
    (System_Int32_array **)Component_srcLineSprite,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  coinListPanel = this->fields.coinListPanel;
  if ( !coinListPanel )
    goto LABEL_32;
  UnityEngine_GameObject__SetActive(coinListPanel, 0, 0LL);
  lobbyPanel = this->fields.lobbyPanel;
  if ( !lobbyPanel )
    goto LABEL_32;
  UnityEngine_GameObject__SetActive(lobbyPanel, 0, 0LL);
  titleInfoObject = this->fields.titleInfoObject;
  if ( !titleInfoObject )
    goto LABEL_32;
  UnityEngine_GameObject__SetActive(titleInfoObject, 0, 0LL);
  v55 = this->fields.titleInfoObject;
  if ( !v55 )
    goto LABEL_32;
  v56 = (TitleInfoControl_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                v55,
                                (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoControl___);
  if ( !v56 )
    goto LABEL_32;
  TitleInfoControl__SetHelpBtn(v56, 0, 0LL);
  MainMenuBar__setMenuActive(0, 0LL, 0LL);
  v57 = (CoinRoomEffectComponent_o *)UnityEngine_Mathf__Min_40727532(
                                       v43,
                                       this->fields.energyPartLoopRateOverTimeMax,
                                       0LL);
  v58 = (int)v57;
  m_ParticleSystem = CoinRoomEffectComponent__GetEmissionModule(v57, this->fields.coinPartObject, v59).fields.m_ParticleSystem;
  UnityEngine_ParticleSystem_MinMaxCurve__op_Implicit(&v73, (float)v58, 0LL);
  v75.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
  v72 = v73;
  UnityEngine_ParticleSystem_EmissionModule__set_rateOverTime(v75, &v72, 0LL);
  v61 = CoinRoomEffectComponent__PlayCoinArrivedSE(this, v58, v60);
  UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, v61, 0LL);
  afterEntity = this->fields.afterEntity;
  if ( !afterEntity )
    goto LABEL_32;
  cnt = afterEntity->fields.cnt;
  effectCircleObject = this->fields.effectCircleObject;
  v65 = cnt ? cnt : v30;
  if ( !effectCircleObject )
    goto LABEL_32;
  v66 = (CoinRoomControlEffect_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                     effectCircleObject,
                                     (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_CoinRoomControlEffect___);
  beforeEntity = this->fields.beforeEntity;
  if ( !beforeEntity
    || !v66
    || (CoinRoomControlEffect__SetValue(v66, beforeEntity->fields.cnt, v65, v30, v67),
        (gaugeObject = this->fields.gaugeObject) == 0LL)
    || (UnityEngine_GameObject__SetActive(gaugeObject, 1, 0LL), (v70 = this->fields.beforeEntity) == 0LL)
    || (gaugeSlider = (UIProgressBar_o *)this->fields.gaugeSlider) == 0LL
    || (UIProgressBar__set_value(gaugeSlider, (float)v70->fields.cnt / (float)v30, 0LL), !*p_circleAnimation) )
  {
LABEL_32:
    sub_B170D4();
  }
  SimpleAnimation__Play_16380456(*p_circleAnimation, this->fields.stateName, 0LL);
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
  SimpleAnimation_State_o *State; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v13; // x21
  unsigned __int64 v14; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  _BOOL4 isAcquired; // w8
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  CommonUI_o *Instance; // x20
  CoinRoomUtility_c *v29; // x8
  float EFFECT_FADE_TIME; // s8
  System_Action_o *v31; // x21
  System_String_o *MainBgmName; // x19
  AvalonSceneManager_o *v33; // x0

  if ( (byte_40F9A51 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&BgmManager_TypeInfo, v3);
    sub_B16FFC(&Method_CoinRoomEffectComponent__Update_b__23_0__, v4);
    sub_B16FFC(&CoinRoomUtility_TypeInfo, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B16FFC(&SoundManager_TypeInfo, v8);
    sub_B16FFC(&SimpleAnimation_State_TypeInfo, v9);
    byte_40F9A51 = 1;
  }
  if ( !this->fields.endCallBack || this->fields.isEffectEnd )
    return;
  circleAnimation = this->fields.circleAnimation;
  if ( !circleAnimation || (State = SimpleAnimation__GetState(circleAnimation, this->fields.stateName, 0LL)) == 0LL )
LABEL_29:
    sub_B170D4();
  klass = State->klass;
  v13 = State;
  if ( *(_WORD *)&State->klass->_2.bitflags1 )
  {
    v14 = 0LL;
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v14;
      p_offset += 2;
      if ( v14 >= *(unsigned __int16 *)&State->klass->_2.bitflags1 )
        goto LABEL_11;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 5].method;
  }
  else
  {
LABEL_11:
    p_method = sub_AAFEF8(State, SimpleAnimation_State_TypeInfo, 5LL);
  }
  if ( (*(float (__fastcall **)(SimpleAnimation_State_o *, _QWORD))p_method)(v13, *(_QWORD *)(p_method + 8)) >= 0.95 )
  {
    isAcquired = this->fields.isAcquired;
    this->fields.isEffectEnd = 1;
    if ( isAcquired )
    {
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v29 = CoinRoomUtility_TypeInfo;
      if ( (BYTE3(CoinRoomUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CoinRoomUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
        v29 = CoinRoomUtility_TypeInfo;
      }
      EFFECT_FADE_TIME = v29->static_fields->EFFECT_FADE_TIME;
      v31 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v24, v25, v26, v27);
      System_Action___ctor(v31, (Il2CppObject *)this, Method_CoinRoomEffectComponent__Update_b__23_0__, 0LL);
      if ( Instance )
      {
        CommonUI__maskFadeout(Instance, 2, EFFECT_FADE_TIME, v31, 0LL);
        return;
      }
    }
    else
    {
      this->fields.endCallBack = 0LL;
      sub_B16F98((BattleServantConfConponent_o *)&this->fields.endCallBack, 0LL, v17, v18, v19, v20, v21, v22);
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
      v33 = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( v33 )
      {
        AvalonSceneManager__transitionScene(v33, 90, 1, 0LL, 0LL);
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
  CommonUI_o *Instance; // x19

  if ( (byte_40F9A58 & 1) == 0 )
  {
    sub_B16FFC(&CoinRoomUtility_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    byte_40F9A58 = 1;
  }
  endCallBack = this->fields.endCallBack;
  if ( !endCallBack )
    goto LABEL_9;
  System_Action__Invoke(endCallBack, 0LL);
  this->fields.endCallBack = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.endCallBack, 0LL, v5, v6, v7, v8, v9, v10);
  this->fields.isEffectEnd = 0;
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(CoinRoomUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CoinRoomUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
  }
  if ( !Instance )
LABEL_9:
    sub_B170D4();
  CommonUI__maskFadein(Instance, CoinRoomUtility_TypeInfo->static_fields->EFFECT_FADE_TIME, 0LL, 0LL);
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
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct CoinRoomEffectComponent_o *_4__this; // x21
  UnityEngine_GameObject_o *coinPartObject; // x0
  UnityEngine_ParticleSystem_o *Component_srcLineSprite; // x0
  UnityEngine_ParticleSystem_o *v15; // x20
  float duration; // s0
  float v17; // s2
  UnityEngine_GameObject_o *gaugeObject; // x0
  struct CoinRoomGaugeEffectComponent_o *v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  float playIntervalTime_5__4; // s0
  float v27; // s0
  float v28; // s1
  float totalTime_5__7; // s8
  float deltaTime; // s0
  float time_5__8; // s9
  float v32; // s0
  System_String_o *arrivedPlaySeName; // x20
  _BOOL4 isGaugeAnimation_5__5; // w9
  int32_t v35; // w8
  struct UserCoinRoomEntity_o *beforeEntity; // x8
  struct UserCoinRoomEntity_o *afterEntity; // x9
  CoinRoomGaugeEffectComponent_o *gaugeEffectComponent_5__6; // x0
  Il2CppObject **v39; // x19
  bool result; // w0
  UnityEngine_GameObject_o *v41; // x0
  __int64 v42; // x1
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  float lifeTime_5__2; // s8
  UnityEngine_WaitForSeconds_o *v50; // x20
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  Il2CppObject **p__2__current; // x19
  UnityEngine_ParticleSystem_MinMaxCurve_o v58; // [xsp+0h] [xbp-70h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v59; // [xsp+20h] [xbp-50h] BYREF
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+58h] [xbp-18h] BYREF
  UnityEngine_ParticleSystem_MainModule_o v61; // 0:x0.8
  UnityEngine_ParticleSystem_MainModule_o v62; // 0:x0.8

  if ( (byte_40F7107 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_CoinRoomGaugeEffectComponent___, method);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ParticleSystem___, v9);
    sub_B16FFC(&SoundManager_TypeInfo, v10);
    sub_B16FFC(&UnityEngine_WaitForSeconds_TypeInfo, v11);
    byte_40F7107 = 1;
  }
  m_ParticleSystem = 0LL;
  memset(&v59, 0, sizeof(v59));
  _4__this = this->fields.__4__this;
  switch ( this->fields.__1__state )
  {
    case 0:
      this->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_31;
      coinPartObject = _4__this->fields.coinPartObject;
      if ( !coinPartObject )
        goto LABEL_31;
      Component_srcLineSprite = (UnityEngine_ParticleSystem_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                  coinPartObject,
                                                                  (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ParticleSystem___);
      if ( !Component_srcLineSprite )
        goto LABEL_31;
      v15 = Component_srcLineSprite;
      m_ParticleSystem = UnityEngine_ParticleSystem__get_main(Component_srcLineSprite, 0LL).fields.m_ParticleSystem;
      v61.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
      UnityEngine_ParticleSystem_MainModule__get_startLifetime(&v58, v61, 0LL);
      v59 = v58;
      this->fields._lifeTime_5__2 = UnityEngine_ParticleSystem_MinMaxCurve__get_constant(&v59, 0LL);
      m_ParticleSystem = UnityEngine_ParticleSystem__get_main(v15, 0LL).fields.m_ParticleSystem;
      v62.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
      duration = UnityEngine_ParticleSystem_MainModule__get_duration(v62, 0LL);
      v17 = duration / (float)this->fields.totalCount;
      this->fields._duration_5__3 = duration;
      this->fields._playIntervalTime_5__4 = v17;
      this->fields._playIntervalTime_5__4 = UnityEngine_Mathf__Max(v17, _4__this->fields.arrivedPlaySeIntervalTime, 0LL);
      this->fields._isGaugeAnimation_5__5 = 0;
      gaugeObject = _4__this->fields.gaugeObject;
      if ( !gaugeObject )
        goto LABEL_31;
      v19 = (struct CoinRoomGaugeEffectComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                       gaugeObject,
                                                       (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_CoinRoomGaugeEffectComponent___);
      this->fields._gaugeEffectComponent_5__6 = v19;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields._gaugeEffectComponent_5__6,
        (System_Int32_array **)v19,
        v20,
        v21,
        v22,
        v23,
        v24,
        v25);
LABEL_26:
      v41 = _4__this->fields.coinPartObject;
      if ( !v41 )
        goto LABEL_31;
      if ( UnityEngine_GameObject__get_activeSelf(v41, 0LL) )
      {
        lifeTime_5__2 = this->fields._lifeTime_5__2;
        v50 = (UnityEngine_WaitForSeconds_o *)sub_B170CC(UnityEngine_WaitForSeconds_TypeInfo, v42, v43, v44, v45);
        UnityEngine_WaitForSeconds___ctor(v50, lifeTime_5__2 * 0.9, 0LL);
        this->fields.__2__current = (Il2CppObject *)v50;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.__2__current,
          (System_Int32_array **)v50,
          v51,
          v52,
          v53,
          v54,
          v55,
          v56);
        this->fields.__1__state = 2;
        return 1;
      }
      else
      {
        this->fields.__2__current = 0LL;
        p__2__current = &this->fields.__2__current;
        sub_B16F98((BattleServantConfConponent_o *)p__2__current, 0LL, v43, v44, v45, v46, v47, v48);
        result = 1;
        *((_DWORD *)p__2__current - 2) = 1;
      }
      return result;
    case 1:
      this->fields.__1__state = -1;
      if ( _4__this )
        goto LABEL_26;
      goto LABEL_31;
    case 2:
      playIntervalTime_5__4 = this->fields._playIntervalTime_5__4;
      this->fields._totalTime_5__7 = 0.0;
      v27 = playIntervalTime_5__4 + 1.0;
      this->fields._playCount_5__9 = 0;
      this->fields.__1__state = -1;
      this->fields._time_5__8 = v27;
      v28 = 0.0;
      goto LABEL_11;
    case 3:
      totalTime_5__7 = this->fields._totalTime_5__7;
      this->fields.__1__state = -1;
      deltaTime = UnityEngine_Time__get_deltaTime(0LL);
      time_5__8 = this->fields._time_5__8;
      this->fields._totalTime_5__7 = totalTime_5__7 + deltaTime;
      v32 = UnityEngine_Time__get_deltaTime(0LL);
      v28 = this->fields._totalTime_5__7;
      v27 = time_5__8 + v32;
      this->fields._time_5__8 = v27;
LABEL_11:
      if ( v28 >= this->fields._duration_5__3 || this->fields._playCount_5__9 >= this->fields.totalCount )
        return 0;
      if ( v27 < this->fields._playIntervalTime_5__4 )
        goto LABEL_23;
      if ( !_4__this )
        goto LABEL_31;
      arrivedPlaySeName = _4__this->fields.arrivedPlaySeName;
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSeContinue(arrivedPlaySeName, 0LL);
      isGaugeAnimation_5__5 = this->fields._isGaugeAnimation_5__5;
      v35 = this->fields._playCount_5__9 + 1;
      this->fields._time_5__8 = 0.0;
      this->fields._playCount_5__9 = v35;
      if ( !isGaugeAnimation_5__5 )
      {
        beforeEntity = _4__this->fields.beforeEntity;
        if ( !beforeEntity
          || (afterEntity = _4__this->fields.afterEntity) == 0LL
          || (gaugeEffectComponent_5__6 = this->fields._gaugeEffectComponent_5__6) == 0LL )
        {
LABEL_31:
          sub_B170D4();
        }
        CoinRoomGaugeEffectComponent__StartAnimation(
          gaugeEffectComponent_5__6,
          beforeEntity->fields.cnt,
          afterEntity->fields.cnt,
          0LL);
        this->fields._isGaugeAnimation_5__5 = 1;
      }
LABEL_23:
      this->fields.__2__current = 0LL;
      v39 = &this->fields.__2__current;
      sub_B16F98((BattleServantConfConponent_o *)v39, 0LL, v2, v3, v4, v5, v6, v7);
      *((_DWORD *)v39 - 2) = 3;
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
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_System_Collections_IEnumerator_Reset__);
  sub_B170A0();
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
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F7103 & 1) == 0 )
  {
    sub_B16FFC(&CoinRoomEffectComponent___c_TypeInfo, v1);
    byte_40F7103 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(CoinRoomEffectComponent___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)CoinRoomEffectComponent___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
  AvalonSceneManager_o *v7; // x0

  if ( (byte_40F7105 & 1) == 0 )
  {
    sub_B16FFC(&BgmManager_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v2);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B16FFC(&SoundManager_TypeInfo, v4);
    byte_40F7105 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  CommonUI__ReleaseCoinRoomGetEffect(Instance, 0LL);
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  MainBgmName = BgmManager__GetMainBgmName(0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm(MainBgmName, 0LL);
  v7 = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !v7 )
LABEL_12:
    sub_B170D4();
  AvalonSceneManager__transitionScene(v7, 90, 1, 0LL, 0LL);
}


int32_t __fastcall CoinRoomEffectComponent___c___StartPutInAnimation_b__25_0(
        CoinRoomEffectComponent___c_o *this,
        System_Collections_Generic_KeyValuePair_int__SelectedUserSvtCoin__o x,
        const MethodInfo *method)
{
  struct SelectedUserSvtCoin_o *value; // x19

  value = x.fields.value;
  if ( (byte_40F7104 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_KeyValuePair_int__SelectedUserSvtCoin__get_Value__,
      *(_QWORD *)&x.fields.key);
    byte_40F7104 = 1;
  }
  if ( !value )
    sub_B170D4();
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct CoinRoomEffectComponent_o *_4__this; // x8
  UnityEngine_GameObject_o *gaugeObject; // x0
  WebViewManager_o *Instance; // x0
  struct CoinRoomEffectComponent_o *v9; // x8
  CommonUI_o *v10; // x19
  UnityEngine_GameObject_o *acquiredEffect; // x0
  UnityEngine_Transform_o *transform; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  QuestRewardInfo_o *questRewardInfo; // x20
  UnityEngine_Transform_o *v18; // x21
  CoinRoomEffectComponent___c_c *v19; // x8
  struct CoinRoomEffectComponent___c_StaticFields *static_fields; // x9
  System_Action_o *_9__27_1; // x22
  Il2CppObject *v22; // x23
  struct CoinRoomEffectComponent___c_StaticFields *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7

  if ( (byte_40F7106 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B16FFC(&Method_CoinRoomEffectComponent___c__NextAcquiredEffect_b__27_1__, v4);
    sub_B16FFC(&CoinRoomEffectComponent___c_TypeInfo, v5);
    byte_40F7106 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_17;
  gaugeObject = _4__this->fields.gaugeObject;
  if ( !gaugeObject )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(gaugeObject, 0, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = this->fields.__4__this;
  if ( !v9 )
    goto LABEL_17;
  v10 = (CommonUI_o *)Instance;
  acquiredEffect = v9->fields.acquiredEffect;
  if ( !acquiredEffect )
    goto LABEL_17;
  transform = UnityEngine_GameObject__get_transform(acquiredEffect, 0LL);
  questRewardInfo = this->fields.questRewardInfo;
  v18 = transform;
  v19 = CoinRoomEffectComponent___c_TypeInfo;
  if ( (BYTE3(CoinRoomEffectComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CoinRoomEffectComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomEffectComponent___c_TypeInfo);
    v19 = CoinRoomEffectComponent___c_TypeInfo;
  }
  static_fields = v19->static_fields;
  _9__27_1 = static_fields->__9__27_1;
  if ( !_9__27_1 )
  {
    if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      static_fields = CoinRoomEffectComponent___c_TypeInfo->static_fields;
    }
    v22 = (Il2CppObject *)static_fields->__9;
    _9__27_1 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v13, v14, v15, v16);
    System_Action___ctor(_9__27_1, v22, Method_CoinRoomEffectComponent___c__NextAcquiredEffect_b__27_1__, 0LL);
    v23 = CoinRoomEffectComponent___c_TypeInfo->static_fields;
    v23->__9__27_1 = _9__27_1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v23->__9__27_1,
      (System_Int32_array **)_9__27_1,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
  }
  if ( !v10 )
LABEL_17:
    sub_B170D4();
  CommonUI__OpenCoinRoomGetEffect(v10, v18, 0, questRewardInfo, _9__27_1, 0LL);
}