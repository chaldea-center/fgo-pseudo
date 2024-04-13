void __fastcall CoinRoomEffectComponent___ctor(CoinRoomEffectComponent_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  System_Int32_array **v18; // x1
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v19; // x20
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Int32_array **v26; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7

  if ( (byte_42E8D19 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin___ctor__,
      (_DWORD)method,
      (_DWORD)v2,
      v3);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_16633/*"ar154"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_1/*""*/, v15, v16, v17);
    byte_42E8D19 = 1;
  }
  v18 = (System_Int32_array **)StringLiteral_16633/*"ar154"*/;
  this->fields.arrivedPlaySeName = (struct System_String_o *)StringLiteral_16633/*"ar154"*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.arrivedPlaySeName, v18, v2, v3, v4, v5, v6, v7);
  *(_QWORD *)&this->fields.arrivedPlaySeIntervalTime = 0x3E83D4CCCCDLL;
  this->fields.TARGET_ITEM_ID = 7999;
  v19 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v19,
    (const MethodInfo_2F31510 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin___ctor__);
  this->fields.selectedCoinDic = (struct System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *)v19;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.selectedCoinDic,
    (System_Int32_array **)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v26 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.stateName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.stateName, v26, v27, v28, v29, v30, v31, v32);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


UnityEngine_ParticleSystem_EmissionModule_o __fastcall CoinRoomEffectComponent__GetEmissionModule(
        CoinRoomEffectComponent_o *this,
        UnityEngine_GameObject_o *targetObject,
        const MethodInfo *method)
{
  __int64 v3; // x3

  if ( (byte_42E8D16 & 1) == 0 )
  {
    this = (CoinRoomEffectComponent_o *)sub_B5D5C4(
                                          &Method_UnityEngine_GameObject_GetComponent_ParticleSystem___,
                                          (_DWORD)targetObject,
                                          (_DWORD)method,
                                          v3);
    byte_42E8D16 = 1;
  }
  if ( !targetObject
    || (this = (CoinRoomEffectComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              targetObject,
                                              (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ParticleSystem___)) == 0LL )
  {
    sub_B5D69C(this, targetObject);
  }
  return UnityEngine_ParticleSystem__get_emission((UnityEngine_ParticleSystem_o *)this, 0LL);
}


void __fastcall CoinRoomEffectComponent__NextAcquiredEffect(CoinRoomEffectComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  __int64 v17; // x20
  UnityEngine_GameObject_o *acquiredEffect; // x0
  __int64 v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  QuestRewardInfo_o *v26; // x22
  __int64 v27; // x21
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  CommonUI_o *Instance; // x19
  System_Action_o *v35; // x21

  if ( (byte_42E8D17 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&QuestRewardInfo_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&Method_CoinRoomEffectComponent___c__DisplayClass27_0__NextAcquiredEffect_b__0__, v11, v12, v13);
    sub_B5D5C4(&CoinRoomEffectComponent___c__DisplayClass27_0_TypeInfo, v14, v15, v16);
    byte_42E8D17 = 1;
  }
  v17 = sub_B5D694(CoinRoomEffectComponent___c__DisplayClass27_0_TypeInfo);
  CoinRoomEffectComponent___c__DisplayClass27_0___ctor((CoinRoomEffectComponent___c__DisplayClass27_0_o *)v17, 0LL);
  if ( !v17 )
    goto LABEL_13;
  *(_QWORD *)(v17 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v17 + 16), (System_Int32_array **)this, v20, v21, v22, v23, v24, v25);
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
        v26 = (QuestRewardInfo_o *)sub_B5D694(QuestRewardInfo_TypeInfo);
        QuestRewardInfo___ctor(v26, 0LL);
        *(_QWORD *)(v17 + 24) = v26;
        v27 = v17 + 24;
        sub_B5D560((BattleServantConfConponent_o *)(v17 + 24), (System_Int32_array **)v26, v28, v29, v30, v31, v32, v33);
        if ( *(_QWORD *)(v17 + 24) )
        {
          *(_DWORD *)(*(_QWORD *)(v17 + 24) + 20LL) = this->fields.TARGET_ITEM_ID;
          if ( *(_QWORD *)v27 )
          {
            *(_DWORD *)(*(_QWORD *)v27 + 24LL) = 1;
            if ( *(_QWORD *)v27 )
            {
              *(_DWORD *)(*(_QWORD *)v27 + 16LL) = 2;
              Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              v35 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
              System_Action___ctor(
                v35,
                (Il2CppObject *)v17,
                Method_CoinRoomEffectComponent___c__DisplayClass27_0__NextAcquiredEffect_b__0__,
                0LL);
              if ( Instance )
              {
                CommonUI__LoadCoinRoomGetEffect(Instance, v35, 0LL);
                return;
              }
            }
          }
        }
      }
    }
LABEL_13:
    sub_B5D69C(acquiredEffect, v19);
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  DataManager_o *Instance; // x0
  __int64 v39; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x20
  UserServantEntity_o *Entity; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  struct UserCoinRoomEntity_o *afterEntity; // x8
  int32_t cnt; // w8
  __int64 *v56; // x8
  struct System_String_o *v57; // x1
  const MethodInfo *v58; // x1

  v9 = beforeUserCoinRoomEntity;
  if ( (byte_42E8D14 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMasterData_UserCoinRoomMaster___,
      (_DWORD)beforeUserCoinRoomEntity,
      (_DWORD)selectedCoinDic,
      method);
    sub_B5D5C4(&Method_DataMasterBase_UserCoinRoomMaster__UserCoinRoomEntity__long__GetEntity__, v11, v12, v13);
    sub_B5D5C4(&NetworkManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17, v18, v19);
    sub_B5D5C4(&SoundManager_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&UserCoinRoomEntity_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_18504/*"effect_Circle_act2"*/, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_18503/*"effect_Circle_act1"*/, v29, v30, v31);
    byte_42E8D14 = 1;
  }
  this->fields.state = 1;
  if ( !v9 )
  {
    v9 = (UserCoinRoomEntity_o *)sub_B5D694(UserCoinRoomEntity_TypeInfo);
    UserCoinRoomEntity___ctor(v9, 0LL);
  }
  this->fields.beforeEntity = v9;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.beforeEntity,
    (System_Int32_array **)v9,
    (System_String_array **)selectedCoinDic,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.selectedCoinDic = selectedCoinDic;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.selectedCoinDic,
    (System_Int32_array **)selectedCoinDic,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(Instance, (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserCoinRoomMaster___);
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
                   (const MethodInfo_23FB038 *)Method_DataMasterBase_UserCoinRoomMaster__UserCoinRoomEntity__long__GetEntity__),
        this->fields.afterEntity = (struct UserCoinRoomEntity_o *)Entity,
        sub_B5D560(
          (BattleServantConfConponent_o *)&this->fields.afterEntity,
          (System_Int32_array **)Entity,
          v42,
          v43,
          v44,
          v45,
          v46,
          v47),
        (afterEntity = this->fields.afterEntity) == 0LL) )
  {
LABEL_18:
    sub_B5D69C(Instance, v39);
  }
  cnt = afterEntity->fields.cnt;
  this->fields.isAcquired = cnt == 0;
  if ( cnt )
    v56 = &StringLiteral_18503/*"effect_Circle_act1"*/;
  else
    v56 = &StringLiteral_18504/*"effect_Circle_act2"*/;
  v57 = (struct System_String_o *)*v56;
  this->fields.stateName = (struct System_String_o *)*v56;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.stateName,
    (System_Int32_array **)v57,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__stopBgm(0LL);
  CoinRoomEffectComponent__StartPutInAnimation(this, v58);
}


System_Collections_IEnumerator_o *__fastcall CoinRoomEffectComponent__PlayCoinArrivedSE(
        CoinRoomEffectComponent_o *this,
        int32_t totalCount,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42E8D18 & 1) == 0 )
  {
    sub_B5D5C4(&CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_TypeInfo, totalCount, (_DWORD)method, v3);
    byte_42E8D18 = 1;
  }
  v6 = sub_B5D694(CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_TypeInfo);
  CoinRoomEffectComponent__PlayCoinArrivedSE_d__28___ctor(
    (CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_o *)v6,
    0,
    0LL);
  if ( !v6 )
    sub_B5D69C(v7, v8);
  *(_QWORD *)(v6 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14);
  *(_DWORD *)(v6 + 40) = totalCount;
  return (System_Collections_IEnumerator_o *)v6;
}


void __fastcall CoinRoomEffectComponent__StartPutInAnimation(CoinRoomEffectComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  System_Action_o *v35; // x20
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  CoinRoomUtility_c *v42; // x0
  int32_t v43; // w0
  struct System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *selectedCoinDic; // x21
  int32_t v45; // w20
  CoinRoomEffectComponent___c_c *v46; // x8
  struct CoinRoomEffectComponent___c_StaticFields *static_fields; // x9
  System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__o *_9__25_0; // x22
  Il2CppObject *v49; // x23
  struct CoinRoomEffectComponent___c_StaticFields *v50; // x0
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  UnityEngine_GameObject_o *coinListPanel; // x0
  __int64 v58; // x1
  int32_t v59; // w22
  struct SimpleAnimation_o *Component_srcLineSprite; // x0
  struct SimpleAnimation_o **p_circleAnimation; // x21
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  CoinRoomEffectComponent_o *v68; // x0
  int32_t v69; // w22
  const MethodInfo *v70; // x2
  const MethodInfo *v71; // x2
  System_Collections_IEnumerator_o *v72; // x0
  struct UserCoinRoomEntity_o *afterEntity; // x8
  int32_t cnt; // w8
  int32_t v75; // w22
  const MethodInfo *v76; // x4
  struct UserCoinRoomEntity_o *beforeEntity; // x8
  struct UserCoinRoomEntity_o *v78; // x8
  UnityEngine_ParticleSystem_MinMaxCurve_o v79; // [xsp+0h] [xbp-80h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v80; // [xsp+28h] [xbp-58h] BYREF
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+48h] [xbp-38h] BYREF
  UnityEngine_ParticleSystem_EmissionModule_o v82; // 0:x0.8

  if ( (byte_42E8D15 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_CoinRoomEffectComponent_NextAcquiredEffect__, v5, v6, v7);
    sub_B5D5C4(&CoinRoomUtility_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Sum_KeyValuePair_int__SelectedUserSvtCoin____, v11, v12, v13);
    sub_B5D5C4(&Method_System_Func_KeyValuePair_int__SelectedUserSvtCoin___int___ctor__, v14, v15, v16);
    sub_B5D5C4(&System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_CoinRoomControlEffect___, v20, v21, v22);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v23, v24, v25);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_TitleInfoControl___, v26, v27, v28);
    sub_B5D5C4(&Method_CoinRoomEffectComponent___c__StartPutInAnimation_b__25_0__, v29, v30, v31);
    sub_B5D5C4(&CoinRoomEffectComponent___c_TypeInfo, v32, v33, v34);
    byte_42E8D15 = 1;
  }
  m_ParticleSystem = 0LL;
  v35 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v35, (Il2CppObject *)this, Method_CoinRoomEffectComponent_NextAcquiredEffect__, 0LL);
  this->fields.endCallBack = v35;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.endCallBack,
    (System_Int32_array **)v35,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  v42 = CoinRoomUtility_TypeInfo;
  if ( (BYTE3(CoinRoomUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CoinRoomUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
  }
  v43 = CoinRoomUtility__MaxPoint((const MethodInfo *)v42);
  selectedCoinDic = this->fields.selectedCoinDic;
  v45 = v43;
  v46 = CoinRoomEffectComponent___c_TypeInfo;
  if ( (BYTE3(CoinRoomEffectComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CoinRoomEffectComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomEffectComponent___c_TypeInfo);
    v46 = CoinRoomEffectComponent___c_TypeInfo;
  }
  static_fields = v46->static_fields;
  _9__25_0 = static_fields->__9__25_0;
  if ( !_9__25_0 )
  {
    if ( (BYTE3(v46->vtable._0_Equals.methodPtr) & 4) != 0 && !v46->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v46);
      static_fields = CoinRoomEffectComponent___c_TypeInfo->static_fields;
    }
    v49 = (Il2CppObject *)static_fields->__9;
    _9__25_0 = (System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__o *)sub_B5D694(System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__TypeInfo);
    System_Func_KeyValuePair_int__SelectedUserSvtCoin___int____ctor(
      _9__25_0,
      v49,
      Method_CoinRoomEffectComponent___c__StartPutInAnimation_b__25_0__,
      (const MethodInfo_2792D58 *)Method_System_Func_KeyValuePair_int__SelectedUserSvtCoin___int___ctor__);
    v50 = CoinRoomEffectComponent___c_TypeInfo->static_fields;
    v50->__9__25_0 = _9__25_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v50->__9__25_0,
      (System_Int32_array **)_9__25_0,
      v51,
      v52,
      v53,
      v54,
      v55,
      v56);
  }
  coinListPanel = (UnityEngine_GameObject_o *)System_Linq_Enumerable__Sum_KeyValuePair_int__SelectedUserSvtCoin__(
                                                (System_Collections_Generic_IEnumerable_TSource__o *)selectedCoinDic,
                                                (System_Func_TSource__int__o *)_9__25_0,
                                                (const MethodInfo_1CB6CD8 *)Method_System_Linq_Enumerable_Sum_KeyValuePair_int__SelectedUserSvtCoin____);
  if ( !this->fields.effectCircleObject )
    goto LABEL_32;
  v59 = (int)coinListPanel;
  Component_srcLineSprite = (struct SimpleAnimation_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          this->fields.effectCircleObject,
                                                          (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  this->fields.circleAnimation = Component_srcLineSprite;
  p_circleAnimation = &this->fields.circleAnimation;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.circleAnimation,
    (System_Int32_array **)Component_srcLineSprite,
    v62,
    v63,
    v64,
    v65,
    v66,
    v67);
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
                                                (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_TitleInfoControl___);
  if ( !coinListPanel )
    goto LABEL_32;
  TitleInfoControl__SetHelpBtn((TitleInfoControl_o *)coinListPanel, 0, 0LL);
  MainMenuBar__setMenuActive(0, 0LL, 0LL);
  v68 = (CoinRoomEffectComponent_o *)UnityEngine_Mathf__Min_41629336(
                                       v59,
                                       this->fields.energyPartLoopRateOverTimeMax,
                                       0LL);
  v69 = (int)v68;
  m_ParticleSystem = CoinRoomEffectComponent__GetEmissionModule(v68, this->fields.coinPartObject, v70).fields.m_ParticleSystem;
  UnityEngine_ParticleSystem_MinMaxCurve__op_Implicit(&v80, (float)v69, 0LL);
  v82.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
  v79 = v80;
  UnityEngine_ParticleSystem_EmissionModule__set_rateOverTime(v82, &v79, 0LL);
  v72 = CoinRoomEffectComponent__PlayCoinArrivedSE(this, v69, v71);
  coinListPanel = (UnityEngine_GameObject_o *)UnityEngine_MonoBehaviour__StartCoroutine_35615088(
                                                (UnityEngine_MonoBehaviour_o *)this,
                                                v72,
                                                0LL);
  afterEntity = this->fields.afterEntity;
  if ( !afterEntity )
    goto LABEL_32;
  cnt = afterEntity->fields.cnt;
  coinListPanel = this->fields.effectCircleObject;
  v75 = cnt ? cnt : v45;
  if ( !coinListPanel )
    goto LABEL_32;
  coinListPanel = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                coinListPanel,
                                                (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_CoinRoomControlEffect___);
  beforeEntity = this->fields.beforeEntity;
  if ( !beforeEntity
    || !coinListPanel
    || (CoinRoomControlEffect__SetValue(
          (CoinRoomControlEffect_o *)coinListPanel,
          beforeEntity->fields.cnt,
          v75,
          v45,
          v76),
        (coinListPanel = this->fields.gaugeObject) == 0LL)
    || (UnityEngine_GameObject__SetActive(coinListPanel, 1, 0LL), (v78 = this->fields.beforeEntity) == 0LL)
    || (coinListPanel = (UnityEngine_GameObject_o *)this->fields.gaugeSlider) == 0LL
    || (UIProgressBar__set_value((UIProgressBar_o *)coinListPanel, (float)v78->fields.cnt / (float)v45, 0LL),
        (coinListPanel = (UnityEngine_GameObject_o *)*p_circleAnimation) == 0LL) )
  {
LABEL_32:
    sub_B5D69C(coinListPanel, v58);
  }
  SimpleAnimation__Play_16676044((SimpleAnimation_o *)coinListPanel, this->fields.stateName, 0LL);
}


void __fastcall CoinRoomEffectComponent__Update(CoinRoomEffectComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  SimpleAnimation_o *circleAnimation; // x0
  __int64 v27; // x3
  SimpleAnimation_c *klass; // x8
  SimpleAnimation_o *v29; // x21
  unsigned __int64 v30; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  _BOOL4 isAcquired; // w8
  CommonUI_o *Instance; // x20
  CoinRoomUtility_c *v41; // x8
  float EFFECT_FADE_TIME; // s8
  System_Action_o *v43; // x21
  System_String_o *MainBgmName; // x19

  if ( (byte_42E8D13 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&BgmManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_CoinRoomEffectComponent__Update_b__23_0__, v8, v9, v10);
    sub_B5D5C4(&CoinRoomUtility_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v17, v18, v19);
    sub_B5D5C4(&SoundManager_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&SimpleAnimation_State_TypeInfo, v23, v24, v25);
    byte_42E8D13 = 1;
  }
  if ( !this->fields.endCallBack || this->fields.isEffectEnd )
    return;
  circleAnimation = this->fields.circleAnimation;
  if ( !circleAnimation
    || (circleAnimation = (SimpleAnimation_o *)SimpleAnimation__GetState(circleAnimation, this->fields.stateName, 0LL)) == 0LL )
  {
LABEL_29:
    sub_B5D69C(circleAnimation, method);
  }
  klass = circleAnimation->klass;
  v29 = circleAnimation;
  if ( *(_WORD *)&circleAnimation->klass->_2.bitflags1 )
  {
    v30 = 0LL;
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v30;
      p_offset += 2;
      if ( v30 >= *(unsigned __int16 *)&circleAnimation->klass->_2.bitflags1 )
        goto LABEL_11;
    }
    v32 = (__int64)(&klass->vtable._5_OnDisable.method + 2 * *(_DWORD *)p_offset);
  }
  else
  {
LABEL_11:
    v32 = sub_AF54C0(circleAnimation, SimpleAnimation_State_TypeInfo, 5LL, v27);
  }
  if ( (*(float (__fastcall **)(SimpleAnimation_o *, _QWORD))v32)(v29, *(_QWORD *)(v32 + 8)) >= 0.95 )
  {
    isAcquired = this->fields.isAcquired;
    this->fields.isEffectEnd = 1;
    if ( isAcquired )
    {
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v41 = CoinRoomUtility_TypeInfo;
      if ( (BYTE3(CoinRoomUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CoinRoomUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
        v41 = CoinRoomUtility_TypeInfo;
      }
      EFFECT_FADE_TIME = v41->static_fields->EFFECT_FADE_TIME;
      v43 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v43, (Il2CppObject *)this, Method_CoinRoomEffectComponent__Update_b__23_0__, 0LL);
      if ( Instance )
      {
        CommonUI__maskFadeout(Instance, 2, EFFECT_FADE_TIME, v43, 0LL);
        return;
      }
    }
    else
    {
      this->fields.endCallBack = 0LL;
      sub_B5D560((BattleServantConfConponent_o *)&this->fields.endCallBack, 0LL, v33, v34, v35, v36, v37, v38);
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
      circleAnimation = (SimpleAnimation_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Action_o *endCallBack; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  CommonUI_o *v15; // x19

  if ( (byte_42E8D1A & 1) == 0 )
  {
    sub_B5D5C4(&CoinRoomUtility_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6, v7);
    byte_42E8D1A = 1;
  }
  endCallBack = this->fields.endCallBack;
  if ( !endCallBack )
    goto LABEL_9;
  System_Action__Invoke(endCallBack, 0LL);
  this->fields.endCallBack = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.endCallBack, 0LL, v9, v10, v11, v12, v13, v14);
  this->fields.isEffectEnd = 0;
  endCallBack = (System_Action_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v15 = (CommonUI_o *)endCallBack;
  if ( (BYTE3(CoinRoomUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CoinRoomUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
  }
  if ( !v15 )
LABEL_9:
    sub_B5D69C(endCallBack, method);
  CommonUI__maskFadein(v15, CoinRoomUtility_TypeInfo->static_fields->EFFECT_FADE_TIME, 0LL, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  struct CoinRoomEffectComponent_o *_4__this; // x21
  UnityEngine_ParticleSystem_o *v15; // x20
  float duration; // s0
  float v17; // s2
  float playIntervalTime_5__4; // s0
  float v19; // s0
  float v20; // s1
  float totalTime_5__7; // s8
  float deltaTime; // s0
  float time_5__8; // s9
  float v24; // s0
  System_String_o *arrivedPlaySeName; // x20
  _BOOL4 isGaugeAnimation_5__5; // w9
  int v27; // w8
  struct UserCoinRoomEntity_o *beforeEntity; // x8
  struct UserCoinRoomEntity_o *afterEntity; // x9
  Il2CppObject **v30; // x19
  bool result; // w0
  float lifeTime_5__2; // s8
  UnityEngine_WaitForSeconds_o *v33; // x20
  Il2CppObject **p__2__current; // x19
  UnityEngine_ParticleSystem_MinMaxCurve_o v35; // [xsp+0h] [xbp-70h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v36; // [xsp+20h] [xbp-50h] BYREF
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+58h] [xbp-18h] BYREF
  UnityEngine_ParticleSystem_MainModule_o v38; // 0:x0.8
  UnityEngine_ParticleSystem_MainModule_o v39; // 0:x0.8

  v4 = this;
  if ( (byte_42E5EA6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_CoinRoomGaugeEffectComponent___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_ParticleSystem___, v5, v6, v7);
    sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    this = (CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_o *)sub_B5D5C4(
                                                                   &UnityEngine_WaitForSeconds_TypeInfo,
                                                                   v11,
                                                                   v12,
                                                                   v13);
    byte_42E5EA6 = 1;
  }
  m_ParticleSystem = 0LL;
  memset(&v36, 0, sizeof(v36));
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_31;
      this = (CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_o *)_4__this->fields.coinPartObject;
      if ( !this )
        goto LABEL_31;
      this = (CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                     (UnityEngine_GameObject_o *)this,
                                                                     (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ParticleSystem___);
      if ( !this )
        goto LABEL_31;
      v15 = (UnityEngine_ParticleSystem_o *)this;
      m_ParticleSystem = UnityEngine_ParticleSystem__get_main((UnityEngine_ParticleSystem_o *)this, 0LL).fields.m_ParticleSystem;
      v38.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
      UnityEngine_ParticleSystem_MainModule__get_startLifetime(&v35, v38, 0LL);
      v36 = v35;
      v4->fields._lifeTime_5__2 = UnityEngine_ParticleSystem_MinMaxCurve__get_constant(&v36, 0LL);
      m_ParticleSystem = UnityEngine_ParticleSystem__get_main(v15, 0LL).fields.m_ParticleSystem;
      v39.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
      duration = UnityEngine_ParticleSystem_MainModule__get_duration(v39, 0LL);
      v17 = duration / (float)v4->fields.totalCount;
      v4->fields._duration_5__3 = duration;
      v4->fields._playIntervalTime_5__4 = v17;
      v4->fields._playIntervalTime_5__4 = UnityEngine_Mathf__Max(v17, _4__this->fields.arrivedPlaySeIntervalTime, 0LL);
      v4->fields._isGaugeAnimation_5__5 = 0;
      this = (CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_o *)_4__this->fields.gaugeObject;
      if ( !this )
        goto LABEL_31;
      v4->fields._gaugeEffectComponent_5__6 = (struct CoinRoomGaugeEffectComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)this,
                                                                                         (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_CoinRoomGaugeEffectComponent___);
      sub_B5D560(&v4->fields._gaugeEffectComponent_5__6);
LABEL_26:
      this = (CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_o *)_4__this->fields.coinPartObject;
      if ( !this )
        goto LABEL_31;
      if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL) )
      {
        lifeTime_5__2 = v4->fields._lifeTime_5__2;
        v33 = (UnityEngine_WaitForSeconds_o *)sub_B5D694(UnityEngine_WaitForSeconds_TypeInfo);
        UnityEngine_WaitForSeconds___ctor(v33, lifeTime_5__2 * 0.9, 0LL);
        v4->fields.__2__current = (Il2CppObject *)v33;
        sub_B5D560(&v4->fields.__2__current);
        v4->fields.__1__state = 2;
        return 1;
      }
      else
      {
        v4->fields.__2__current = 0LL;
        p__2__current = &v4->fields.__2__current;
        sub_B5D560(p__2__current);
        result = 1;
        *((_DWORD *)p__2__current - 2) = 1;
      }
      return result;
    case 1:
      v4->fields.__1__state = -1;
      if ( _4__this )
        goto LABEL_26;
      goto LABEL_31;
    case 2:
      playIntervalTime_5__4 = v4->fields._playIntervalTime_5__4;
      v4->fields._totalTime_5__7 = 0.0;
      v19 = playIntervalTime_5__4 + 1.0;
      v4->fields._playCount_5__9 = 0;
      v4->fields.__1__state = -1;
      v4->fields._time_5__8 = v19;
      v20 = 0.0;
      goto LABEL_11;
    case 3:
      totalTime_5__7 = v4->fields._totalTime_5__7;
      v4->fields.__1__state = -1;
      deltaTime = UnityEngine_Time__get_deltaTime(0LL);
      time_5__8 = v4->fields._time_5__8;
      v4->fields._totalTime_5__7 = totalTime_5__7 + deltaTime;
      v24 = UnityEngine_Time__get_deltaTime(0LL);
      v20 = v4->fields._totalTime_5__7;
      v19 = time_5__8 + v24;
      v4->fields._time_5__8 = v19;
LABEL_11:
      if ( v20 >= v4->fields._duration_5__3 || v4->fields._playCount_5__9 >= v4->fields.totalCount )
        return 0;
      if ( v19 < v4->fields._playIntervalTime_5__4 )
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
      isGaugeAnimation_5__5 = v4->fields._isGaugeAnimation_5__5;
      v27 = v4->fields._playCount_5__9 + 1;
      v4->fields._time_5__8 = 0.0;
      v4->fields._playCount_5__9 = v27;
      if ( !isGaugeAnimation_5__5 )
      {
        beforeEntity = _4__this->fields.beforeEntity;
        if ( !beforeEntity
          || (afterEntity = _4__this->fields.afterEntity) == 0LL
          || (this = (CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_o *)v4->fields._gaugeEffectComponent_5__6) == 0LL )
        {
LABEL_31:
          sub_B5D69C(this, method);
        }
        CoinRoomGaugeEffectComponent__StartAnimation(
          (CoinRoomGaugeEffectComponent_o *)this,
          beforeEntity->fields.cnt,
          afterEntity->fields.cnt,
          0LL);
        v4->fields._isGaugeAnimation_5__5 = 1;
      }
LABEL_23:
      v4->fields.__2__current = 0LL;
      v30 = &v4->fields.__2__current;
      sub_B5D560(v30);
      *((_DWORD *)v30 - 2) = 3;
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct CoinRoomEffectComponent___c_StaticFields *static_fields; // x0

  if ( (byte_42E5EA2 & 1) == 0 )
  {
    sub_B5D5C4(&CoinRoomEffectComponent___c_TypeInfo, v1, v2, v3);
    byte_42E5EA2 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(CoinRoomEffectComponent___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = CoinRoomEffectComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct CoinRoomEffectComponent___c_o *)v4;
  sub_B5D560(static_fields);
}


void __fastcall CoinRoomEffectComponent___c___ctor(CoinRoomEffectComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall CoinRoomEffectComponent___c___NextAcquiredEffect_b__27_1(
        CoinRoomEffectComponent___c_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  CommonUI_o *Instance; // x0
  __int64 v14; // x1
  System_String_o *MainBgmName; // x19

  if ( (byte_42E5EA4 & 1) == 0 )
  {
    sub_B5D5C4(&BgmManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4, v5, v6);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7, v8, v9);
    sub_B5D5C4(&SoundManager_TypeInfo, v10, v11, v12);
    byte_42E5EA4 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  CommonUI__ReleaseCoinRoomGetEffect(Instance, 0LL);
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  MainBgmName = BgmManager__GetMainBgmName(0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm(MainBgmName, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
LABEL_12:
    sub_B5D69C(Instance, v14);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 90, 1, 0LL, 0LL);
}


int32_t __fastcall CoinRoomEffectComponent___c___StartPutInAnimation_b__25_0(
        CoinRoomEffectComponent___c_o *this,
        System_Collections_Generic_KeyValuePair_int__SelectedUserSvtCoin__o x,
        const MethodInfo *method)
{
  struct SelectedUserSvtCoin_o *value; // x19

  value = x.fields.value;
  if ( (byte_42E5EA3 & 1) == 0 )
  {
    this = (CoinRoomEffectComponent___c_o *)sub_B5D5C4(
                                              &Method_System_Collections_Generic_KeyValuePair_int__SelectedUserSvtCoin__get_Value__,
                                              x.fields.key,
                                              x.fields.value,
                                              method);
    byte_42E5EA3 = 1;
  }
  if ( !value )
    sub_B5D69C(this, *(_QWORD *)&x.fields.key);
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
  int v2; // w2
  __int64 v3; // x3
  CoinRoomEffectComponent___c__DisplayClass27_0_o *v4; // x20
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  struct CoinRoomEffectComponent_o *_4__this; // x8
  struct CoinRoomEffectComponent_o *v15; // x8
  CommonUI_o *v16; // x19
  QuestRewardInfo_o *questRewardInfo; // x20
  UnityEngine_Transform_o *v18; // x21
  CoinRoomEffectComponent___c_c *v19; // x8
  struct CoinRoomEffectComponent___c_StaticFields *static_fields; // x9
  System_Action_o *_9__27_1; // x22
  Il2CppObject *v22; // x23
  struct CoinRoomEffectComponent___c_StaticFields *v23; // x0

  v4 = this;
  if ( (byte_42E5EA5 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&Method_CoinRoomEffectComponent___c__NextAcquiredEffect_b__27_1__, v8, v9, v10);
    this = (CoinRoomEffectComponent___c__DisplayClass27_0_o *)sub_B5D5C4(
                                                                &CoinRoomEffectComponent___c_TypeInfo,
                                                                v11,
                                                                v12,
                                                                v13);
    byte_42E5EA5 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_17;
  this = (CoinRoomEffectComponent___c__DisplayClass27_0_o *)_4__this->fields.gaugeObject;
  if ( !this )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (CoinRoomEffectComponent___c__DisplayClass27_0_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v15 = v4->fields.__4__this;
  if ( !v15 )
    goto LABEL_17;
  v16 = (CommonUI_o *)this;
  this = (CoinRoomEffectComponent___c__DisplayClass27_0_o *)v15->fields.acquiredEffect;
  if ( !this )
    goto LABEL_17;
  this = (CoinRoomEffectComponent___c__DisplayClass27_0_o *)UnityEngine_GameObject__get_transform(
                                                              (UnityEngine_GameObject_o *)this,
                                                              0LL);
  questRewardInfo = v4->fields.questRewardInfo;
  v18 = (UnityEngine_Transform_o *)this;
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
    _9__27_1 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(_9__27_1, v22, Method_CoinRoomEffectComponent___c__NextAcquiredEffect_b__27_1__, 0LL);
    v23 = CoinRoomEffectComponent___c_TypeInfo->static_fields;
    v23->__9__27_1 = _9__27_1;
    sub_B5D560(&v23->__9__27_1);
  }
  if ( !v16 )
LABEL_17:
    sub_B5D69C(this, method);
  CommonUI__OpenCoinRoomGetEffect(v16, v18, 0, questRewardInfo, _9__27_1, 0LL);
}