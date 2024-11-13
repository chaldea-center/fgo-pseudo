void __fastcall CoinRoomEffectComponent___ctor(CoinRoomEffectComponent_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  int64_t v15; // x1
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  System_Collections_Generic_Dictionary_int__object__o *v19; // x20
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  void *v26; // x1
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7

  if ( (byte_4B197FF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin___ctor__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_17043/*"ar154"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v13, v14);
    byte_4B197FF = 1;
  }
  v15 = StringLiteral_17043/*"ar154"*/;
  this->fields.arrivedPlaySeName = (struct System_String_o *)StringLiteral_17043/*"ar154"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.arrivedPlaySeName, v15, v2, v3, v4, v5, v6, v7);
  *(_QWORD *)&this->fields.arrivedPlaySeIntervalTime = 0x3E83D4CCCCDLL;
  this->fields.TARGET_ITEM_ID = 7999;
  v19 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCAA2C(
                                                                  System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__TypeInfo,
                                                                  v16,
                                                                  v17,
                                                                  v18);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v19,
    (const MethodInfo_3205510 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin___ctor__);
  this->fields.selectedCoinDic = (struct System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *)v19;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.selectedCoinDic, (int64_t)v19, v20, v21, v22, v23, v24, v25);
  v26 = StringLiteral_1/*""*/;
  this->fields.stateName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.stateName, (int64_t)v26, v27, v28, v29, v30, v31, v32);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


UnityEngine_ParticleSystem_EmissionModule_o __fastcall CoinRoomEffectComponent__GetEmissionModule(
        CoinRoomEffectComponent_o *this,
        UnityEngine_GameObject_o *targetObject,
        const MethodInfo *method)
{
  if ( (byte_4B197FC & 1) == 0 )
  {
    this = (CoinRoomEffectComponent_o *)sub_1BCA7E0(
                                          &Method_UnityEngine_GameObject_GetComponent_ParticleSystem___,
                                          targetObject,
                                          method);
    byte_4B197FC = 1;
  }
  if ( !targetObject
    || (this = (CoinRoomEffectComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                              targetObject,
                                              (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ParticleSystem___)) == 0LL )
  {
    sub_1BCAA3C(this, targetObject);
  }
  return UnityEngine_ParticleSystem__get_emission((UnityEngine_ParticleSystem_o *)this, 0LL);
}


void __fastcall CoinRoomEffectComponent__NextAcquiredEffect(CoinRoomEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x20
  UnityEngine_GameObject_o *acquiredEffect; // x0
  __int64 v15; // x1
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  QuestRewardInfo_o *v25; // x21
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  _DWORD *v32; // x8
  int32_t TARGET_ITEM_ID; // w9
  Il2CppObject *Instance; // x19
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  System_Action_o *v38; // x21

  if ( (byte_4B197FD & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&QuestRewardInfo_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7, v8);
    sub_1BCA7E0(&Method_CoinRoomEffectComponent___c__DisplayClass27_0__NextAcquiredEffect_b__0__, v9, v10);
    sub_1BCA7E0(&CoinRoomEffectComponent___c__DisplayClass27_0_TypeInfo, v11, v12);
    byte_4B197FD = 1;
  }
  v13 = sub_1BCAA2C(CoinRoomEffectComponent___c__DisplayClass27_0_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_11;
  *(_QWORD *)(v13 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v13 + 16), (int64_t)this, v16, v17, v18, v19, v20, v21);
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
        v25 = (QuestRewardInfo_o *)sub_1BCAA2C(QuestRewardInfo_TypeInfo, v22, v23, v24);
        QuestRewardInfo___ctor(v25, 0LL);
        *(_QWORD *)(v13 + 24) = v25;
        sub_1BCA784((PartyOrganizationUtility_o *)(v13 + 24), (int64_t)v25, v26, v27, v28, v29, v30, v31);
        v32 = *(_DWORD **)(v13 + 24);
        if ( v32 )
        {
          TARGET_ITEM_ID = this->fields.TARGET_ITEM_ID;
          v32[4] = 2;
          v32[5] = TARGET_ITEM_ID;
          v32[6] = 1;
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v38 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v35, v36, v37);
          System_Action___ctor(
            v38,
            (Il2CppObject *)v13,
            Method_CoinRoomEffectComponent___c__DisplayClass27_0__NextAcquiredEffect_b__0__,
            0LL);
          if ( Instance )
          {
            CommonUI__LoadCoinRoomGetEffect((CommonUI_o *)Instance, v38, 0LL);
            return;
          }
        }
      }
    }
LABEL_11:
    sub_1BCAA3C(acquiredEffect, v15);
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
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  DataManager_o *Instance; // x0
  __int64 v32; // x1
  __int64 v33; // x1
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *Entity; // x0
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  struct UserCoinRoomEntity_o *afterEntity; // x8
  int32_t cnt; // w8
  __int64 *v50; // x8
  struct System_String_o *v51; // x1
  __int64 v52; // x1
  const MethodInfo *v53; // x1

  v9 = beforeUserCoinRoomEntity;
  if ( (byte_4B197FA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserCoinRoomMaster___, beforeUserCoinRoomEntity, selectedCoinDic);
    sub_1BCA7E0(&Method_DataMasterBase_UserCoinRoomMaster__UserCoinRoomEntity__long__GetEntity__, v11, v12);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16);
    sub_1BCA7E0(&SoundManager_TypeInfo, v17, v18);
    sub_1BCA7E0(&UserCoinRoomEntity_TypeInfo, v19, v20);
    sub_1BCA7E0(&StringLiteral_19118/*"effect_Circle_act2"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_19117/*"effect_Circle_act1"*/, v23, v24);
    byte_4B197FA = 1;
  }
  this->fields.state = 1;
  if ( !v9 )
  {
    v9 = (UserCoinRoomEntity_o *)sub_1BCAA2C(
                                   UserCoinRoomEntity_TypeInfo,
                                   beforeUserCoinRoomEntity,
                                   selectedCoinDic,
                                   method);
    UserCoinRoomEntity___ctor(v9, 0LL);
  }
  this->fields.beforeEntity = v9;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.beforeEntity,
    (int64_t)v9,
    (int64_t)selectedCoinDic,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.selectedCoinDic = selectedCoinDic;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.selectedCoinDic,
    (int64_t)selectedCoinDic,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserCoinRoomMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v33);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_object
    || (Entity = DataMasterBase_object__object__long___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                   (int64_t)Instance,
                   (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserCoinRoomMaster__UserCoinRoomEntity__long__GetEntity__),
        this->fields.afterEntity = (struct UserCoinRoomEntity_o *)Entity,
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&this->fields.afterEntity,
          (int64_t)Entity,
          v36,
          v37,
          v38,
          v39,
          v40,
          v41),
        (afterEntity = this->fields.afterEntity) == 0LL) )
  {
LABEL_16:
    sub_1BCAA3C(Instance, v32);
  }
  cnt = afterEntity->fields.cnt;
  this->fields.isAcquired = cnt == 0;
  if ( cnt )
    v50 = &StringLiteral_19117/*"effect_Circle_act1"*/;
  else
    v50 = &StringLiteral_19118/*"effect_Circle_act2"*/;
  v51 = (struct System_String_o *)*v50;
  this->fields.stateName = (struct System_String_o *)*v50;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.stateName, (int64_t)v51, v42, v43, v44, v45, v46, v47);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v52);
  SoundManager__stopBgm(0LL);
  CoinRoomEffectComponent__StartPutInAnimation(this, v53);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall CoinRoomEffectComponent__PlayCoinArrivedSE(
        CoinRoomEffectComponent_o *this,
        int32_t totalCount,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x21
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  if ( (byte_4B197FE & 1) == 0 )
  {
    sub_1BCA7E0(&CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_TypeInfo, *(_QWORD *)&totalCount, method);
    byte_4B197FE = 1;
  }
  v6 = sub_1BCAA2C(CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_TypeInfo, *(_QWORD *)&totalCount, method, v3);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  *(_DWORD *)(v6 + 16) = 0;
  *(_QWORD *)(v6 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v6 + 32), (int64_t)this, v7, v8, v9, v10, v11, v12);
  *(_DWORD *)(v6 + 40) = totalCount;
  return (System_Collections_IEnumerator_o *)v6;
}


void __fastcall CoinRoomEffectComponent__StartPutInAnimation(CoinRoomEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
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
  System_Action_o *v23; // x20
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  __int64 v30; // x1
  CoinRoomUtility_c *v31; // x0
  int32_t v32; // w0
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  CoinRoomEffectComponent___c_c *v36; // x8
  struct System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *selectedCoinDic; // x21
  int32_t v38; // w20
  System_Func_T__TResult__o *_9__25_0; // x22
  Il2CppObject *v40; // x23
  struct CoinRoomEffectComponent___c_StaticFields *static_fields; // x0
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  UnityEngine_GameObject_o *coinListPanel; // x0
  __int64 v49; // x1
  int energyPartLoopRateOverTimeMax; // w22
  Il2CppObject *Component_object; // x0
  struct SimpleAnimation_o **p_circleAnimation; // x21
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  CoinRoomEffectComponent_o *v59; // x0
  const MethodInfo *v60; // x2
  const MethodInfo *v61; // x2
  System_Collections_IEnumerator_o *v62; // x0
  struct UserCoinRoomEntity_o *afterEntity; // x8
  int32_t cnt; // w8
  int32_t v65; // w22
  const MethodInfo *v66; // x4
  struct UserCoinRoomEntity_o *beforeEntity; // x8
  struct UserCoinRoomEntity_o *v68; // x8
  UnityEngine_ParticleSystem_MinMaxCurve_o v69; // [xsp+0h] [xbp-90h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v70; // [xsp+28h] [xbp-68h] BYREF
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+48h] [xbp-48h] BYREF
  UnityEngine_ParticleSystem_EmissionModule_o v72; // 0:x0.8

  if ( (byte_4B197FB & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_CoinRoomEffectComponent_NextAcquiredEffect__, v5, v6);
    sub_1BCA7E0(&CoinRoomUtility_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Sum_KeyValuePair_int__SelectedUserSvtCoin____, v9, v10);
    sub_1BCA7E0(&System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_CoinRoomControlEffect___, v13, v14);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v15, v16);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_TitleInfoControl___, v17, v18);
    sub_1BCA7E0(&Method_CoinRoomEffectComponent___c__StartPutInAnimation_b__25_0__, v19, v20);
    sub_1BCA7E0(&CoinRoomEffectComponent___c_TypeInfo, v21, v22);
    byte_4B197FB = 1;
  }
  m_ParticleSystem = 0LL;
  v23 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
  System_Action___ctor(v23, (Il2CppObject *)this, Method_CoinRoomEffectComponent_NextAcquiredEffect__, 0LL);
  this->fields.endCallBack = v23;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.endCallBack, (int64_t)v23, v24, v25, v26, v27, v28, v29);
  v31 = CoinRoomUtility_TypeInfo;
  if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo, v30);
  v32 = CoinRoomUtility__MaxPoint((const MethodInfo *)v31);
  v36 = CoinRoomEffectComponent___c_TypeInfo;
  selectedCoinDic = this->fields.selectedCoinDic;
  v38 = v32;
  if ( !CoinRoomEffectComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomEffectComponent___c_TypeInfo, v33);
    v36 = CoinRoomEffectComponent___c_TypeInfo;
  }
  _9__25_0 = (System_Func_T__TResult__o *)v36->static_fields->__9__25_0;
  if ( !_9__25_0 )
  {
    if ( !v36->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v36, v33);
      v36 = CoinRoomEffectComponent___c_TypeInfo;
    }
    v40 = (Il2CppObject *)v36->static_fields->__9;
    _9__25_0 = (System_Func_T__TResult__o *)sub_1BCAA2C(
                                              System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__TypeInfo,
                                              v33,
                                              v34,
                                              v35);
    System_Func_KeyValuePair_int__object___int____ctor(
      _9__25_0,
      v40,
      Method_CoinRoomEffectComponent___c__StartPutInAnimation_b__25_0__,
      0LL);
    static_fields = CoinRoomEffectComponent___c_TypeInfo->static_fields;
    static_fields->__9__25_0 = (struct System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__o *)_9__25_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__25_0,
      (int64_t)_9__25_0,
      v42,
      v43,
      v44,
      v45,
      v46,
      v47);
  }
  coinListPanel = (UnityEngine_GameObject_o *)System_Linq_Enumerable__Sum_KeyValuePair_int__object__(
                                                (System_Collections_Generic_IEnumerable_TSource__o *)selectedCoinDic,
                                                (System_Func_TSource__int__o *)_9__25_0,
                                                (const MethodInfo_2F4A468 *)Method_System_Linq_Enumerable_Sum_KeyValuePair_int__SelectedUserSvtCoin____);
  if ( !this->fields.effectCircleObject )
    goto LABEL_31;
  energyPartLoopRateOverTimeMax = (int)coinListPanel;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       this->fields.effectCircleObject,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  this->fields.circleAnimation = (struct SimpleAnimation_o *)Component_object;
  p_circleAnimation = &this->fields.circleAnimation;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.circleAnimation,
    (int64_t)Component_object,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
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
                                                (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoControl___);
  if ( !coinListPanel )
    goto LABEL_31;
  TitleInfoControl__SetHelpBtn((TitleInfoControl_o *)coinListPanel, 0, 0LL);
  MainMenuBar__setMenuActive(0, 0LL, 0LL);
  if ( energyPartLoopRateOverTimeMax >= this->fields.energyPartLoopRateOverTimeMax )
    energyPartLoopRateOverTimeMax = this->fields.energyPartLoopRateOverTimeMax;
  m_ParticleSystem = CoinRoomEffectComponent__GetEmissionModule(v59, this->fields.coinPartObject, v60).fields.m_ParticleSystem;
  UnityEngine_ParticleSystem_MinMaxCurve__op_Implicit(&v70, (float)energyPartLoopRateOverTimeMax, 0LL);
  v72.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
  v69 = v70;
  UnityEngine_ParticleSystem_EmissionModule__set_rateOverTime(v72, &v69, 0LL);
  v62 = CoinRoomEffectComponent__PlayCoinArrivedSE(this, energyPartLoopRateOverTimeMax, v61);
  coinListPanel = (UnityEngine_GameObject_o *)UnityEngine_MonoBehaviour__StartCoroutine_70139516(
                                                (UnityEngine_MonoBehaviour_o *)this,
                                                v62,
                                                0LL);
  afterEntity = this->fields.afterEntity;
  if ( !afterEntity )
    goto LABEL_31;
  cnt = afterEntity->fields.cnt;
  coinListPanel = this->fields.effectCircleObject;
  v65 = cnt ? cnt : v38;
  if ( !coinListPanel )
    goto LABEL_31;
  coinListPanel = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                coinListPanel,
                                                (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_CoinRoomControlEffect___);
  beforeEntity = this->fields.beforeEntity;
  if ( !beforeEntity
    || !coinListPanel
    || (CoinRoomControlEffect__SetValue(
          (CoinRoomControlEffect_o *)coinListPanel,
          beforeEntity->fields.cnt,
          v65,
          v38,
          v66),
        (coinListPanel = this->fields.gaugeObject) == 0LL)
    || (UnityEngine_GameObject__SetActive(coinListPanel, 1, 0LL), (v68 = this->fields.beforeEntity) == 0LL)
    || (coinListPanel = (UnityEngine_GameObject_o *)this->fields.gaugeSlider) == 0LL
    || (UIProgressBar__set_value((UIProgressBar_o *)coinListPanel, (float)v68->fields.cnt / (float)v38, 0LL),
        (coinListPanel = (UnityEngine_GameObject_o *)*p_circleAnimation) == 0LL) )
  {
LABEL_31:
    sub_1BCAA3C(coinListPanel, v49);
  }
  SimpleAnimation__Play_64539336((SimpleAnimation_o *)coinListPanel, this->fields.stateName, 0LL);
}


void __fastcall CoinRoomEffectComponent__Update(CoinRoomEffectComponent_o *this, const MethodInfo *method)
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
  SimpleAnimation_o *circleAnimation; // x0
  SimpleAnimation_c *klass; // x8
  SimpleAnimation_o *v20; // x21
  __int64 v21; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v23; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  _BOOL4 isAcquired; // w8
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  Il2CppObject *Instance; // x20
  CoinRoomUtility_c *v35; // x8
  float EFFECT_FADE_TIME; // s8
  System_Action_o *v37; // x21
  __int64 v38; // x1
  __int64 v39; // x1
  System_String_o *MainBgmName; // x19

  if ( (byte_4B197F9 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&BgmManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_CoinRoomEffectComponent__Update_b__23_0__, v6, v7);
    sub_1BCA7E0(&CoinRoomUtility_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v12, v13);
    sub_1BCA7E0(&SoundManager_TypeInfo, v14, v15);
    sub_1BCA7E0(&SimpleAnimation_State_TypeInfo, v16, v17);
    byte_4B197F9 = 1;
  }
  if ( !this->fields.endCallBack || this->fields.isEffectEnd )
    return;
  circleAnimation = this->fields.circleAnimation;
  if ( !circleAnimation
    || (circleAnimation = (SimpleAnimation_o *)SimpleAnimation__GetState(circleAnimation, this->fields.stateName, 0LL)) == 0LL )
  {
LABEL_26:
    sub_1BCAA3C(circleAnimation, method);
  }
  klass = circleAnimation->klass;
  v20 = circleAnimation;
  v21 = *(unsigned __int16 *)(&circleAnimation->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&circleAnimation->klass->_2.bitflags2 + 3) )
  {
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v21;
      p_offset += 2;
      if ( !v21 )
        goto LABEL_11;
    }
    v23 = (__int64)(&klass->vtable._5_OnDisable.method + 2 * *(_DWORD *)p_offset);
  }
  else
  {
LABEL_11:
    v23 = sub_1C1C7C0(circleAnimation, SimpleAnimation_State_TypeInfo, 5LL);
  }
  if ( (*(float (__fastcall **)(SimpleAnimation_o *, _QWORD))v23)(v20, *(_QWORD *)(v23 + 8)) >= 0.95 )
  {
    isAcquired = this->fields.isAcquired;
    this->fields.isEffectEnd = 1;
    if ( isAcquired )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v35 = CoinRoomUtility_TypeInfo;
      if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo, v31);
        v35 = CoinRoomUtility_TypeInfo;
      }
      EFFECT_FADE_TIME = v35->static_fields->EFFECT_FADE_TIME;
      v37 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v31, v32, v33);
      System_Action___ctor(v37, (Il2CppObject *)this, Method_CoinRoomEffectComponent__Update_b__23_0__, 0LL);
      if ( Instance )
      {
        CommonUI__maskFadeout((CommonUI_o *)Instance, 2, EFFECT_FADE_TIME, v37, 0LL);
        return;
      }
    }
    else
    {
      this->fields.endCallBack = 0LL;
      sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.endCallBack, 0LL, v24, v25, v26, v27, v28, v29);
      this->fields.isEffectEnd = 0;
      this->fields.state = 2;
      if ( !BgmManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v38);
      MainBgmName = BgmManager__GetMainBgmName(0LL);
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v39);
      SoundManager__playBgm(MainBgmName, 0LL);
      circleAnimation = (SimpleAnimation_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
  __int64 v2; // x2
  CoinRoomEffectComponent_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  struct System_Action_o *endCallBack; // x8
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  CommonUI_o *v13; // x19

  v3 = this;
  if ( (byte_4B19800 & 1) == 0 )
  {
    sub_1BCA7E0(&CoinRoomUtility_TypeInfo, method, v2);
    this = (CoinRoomEffectComponent_o *)sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4, v5);
    byte_4B19800 = 1;
  }
  endCallBack = v3->fields.endCallBack;
  if ( !endCallBack )
    goto LABEL_8;
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))endCallBack->fields.m_target)(
    endCallBack->fields.original_method_info,
    *(_QWORD *)&endCallBack->fields.extra_arg);
  v3->fields.endCallBack = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&v3->fields.endCallBack, 0LL, v7, v8, v9, v10, v11, v12);
  v3->fields.isEffectEnd = 0;
  this = (CoinRoomEffectComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v13 = (CommonUI_o *)this;
  if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo, method);
  if ( !v13 )
LABEL_8:
    sub_1BCAA3C(this, method);
  CommonUI__maskFadein(v13, CoinRoomUtility_TypeInfo->static_fields->EFFECT_FADE_TIME, 0LL, 0LL);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  struct CoinRoomEffectComponent_o *_4__this; // x21
  CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_o *v16; // x20
  float duration; // s0
  int totalCount; // s1
  float arrivedPlaySeIntervalTime; // s2
  float v20; // s0
  Il2CppObject *Component_object; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  __int64 v28; // x1
  int64_t v29; // x2
  __int64 v30; // x3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  float lifeTime_5__2; // s8
  UnityEngine_WaitForSeconds_o *v36; // x20
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  int v44; // w8
  float playIntervalTime_5__4; // s0
  float v46; // s0
  float v47; // s1
  float totalTime_5__7; // s8
  float deltaTime; // s0
  float time_5__8; // s9
  float v51; // s0
  _QWORD *v52; // x0
  _BOOL4 isGaugeAnimation_5__5; // w9
  int v54; // w8
  struct UserCoinRoomEntity_o *beforeEntity; // x8
  struct UserCoinRoomEntity_o *afterEntity; // x9
  bool result; // w0
  PartyOrganizationUtility_o *v58; // x19
  UnityEngine_ParticleSystem_MinMaxCurve_o v59; // [xsp+0h] [xbp-80h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v60; // [xsp+20h] [xbp-60h] BYREF
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+48h] [xbp-38h] BYREF
  UnityEngine_ParticleSystem_MainModule_o v62; // 0:x0.8
  UnityEngine_ParticleSystem_MainModule_o v63; // 0:x0.8

  v8 = this;
  if ( (byte_4B19805 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_CoinRoomGaugeEffectComponent___, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_ParticleSystem___, v9, v10);
    sub_1BCA7E0(&Method_CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_MoveNext__, v11, v12);
    this = (CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_o *)sub_1BCA7E0(
                                                                   &UnityEngine_WaitForSeconds_TypeInfo,
                                                                   v13,
                                                                   v14);
    byte_4B19805 = 1;
  }
  m_ParticleSystem = 0LL;
  memset(&v60, 0, sizeof(v60));
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
                                                                     (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ParticleSystem___);
      if ( !this )
        goto LABEL_32;
      v16 = this;
      m_ParticleSystem = UnityEngine_ParticleSystem__get_main((UnityEngine_ParticleSystem_o *)this, 0LL).fields.m_ParticleSystem;
      v62.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
      UnityEngine_ParticleSystem_MainModule__get_startLifetime(&v59, v62, 0LL);
      v60 = v59;
      v8->fields._lifeTime_5__2 = UnityEngine_ParticleSystem_MinMaxCurve__get_constant(&v60, 0LL);
      m_ParticleSystem = UnityEngine_ParticleSystem__get_main((UnityEngine_ParticleSystem_o *)v16, 0LL).fields.m_ParticleSystem;
      v63.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
      duration = UnityEngine_ParticleSystem_MainModule__get_duration(v63, 0LL);
      totalCount = v8->fields.totalCount;
      v8->fields._duration_5__3 = duration;
      arrivedPlaySeIntervalTime = _4__this->fields.arrivedPlaySeIntervalTime;
      v8->fields._isGaugeAnimation_5__5 = 0;
      v20 = duration / (float)totalCount;
      if ( v20 <= arrivedPlaySeIntervalTime )
        v20 = arrivedPlaySeIntervalTime;
      v8->fields._playIntervalTime_5__4 = v20;
      this = (CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_o *)_4__this->fields.gaugeObject;
      if ( !this )
        goto LABEL_32;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)this,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_CoinRoomGaugeEffectComponent___);
      v8->fields._gaugeEffectComponent_5__6 = (struct CoinRoomGaugeEffectComponent_o *)Component_object;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v8->fields._gaugeEffectComponent_5__6,
        (int64_t)Component_object,
        v22,
        v23,
        v24,
        v25,
        v26,
        v27);
LABEL_12:
      this = (CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_o *)_4__this->fields.coinPartObject;
      if ( !this )
        goto LABEL_32;
      if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL) )
      {
        lifeTime_5__2 = v8->fields._lifeTime_5__2;
        v36 = (UnityEngine_WaitForSeconds_o *)sub_1BCAA2C(UnityEngine_WaitForSeconds_TypeInfo, v28, v29, v30);
        UnityEngine_WaitForSeconds___ctor(v36, lifeTime_5__2 * 0.9, 0LL);
        v8->fields.__2__current = (Il2CppObject *)v36;
        p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
        sub_1BCA784(p__2__current, (int64_t)v36, v38, v39, v40, v41, v42, v43);
        v44 = 2;
LABEL_29:
        *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = v44;
        return 1;
      }
      else
      {
        v8->fields.__2__current = 0LL;
        v58 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
        sub_1BCA784(v58, 0LL, v29, v30, v31, v32, v33, v34);
        result = 1;
        *(_DWORD *)&v58[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
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
      v46 = playIntervalTime_5__4 + 1.0;
      v8->fields._playCount_5__9 = 0;
      v8->fields.__1__state = -1;
      v8->fields._time_5__8 = v46;
      v47 = 0.0;
      goto LABEL_17;
    case 3:
      totalTime_5__7 = v8->fields._totalTime_5__7;
      v8->fields.__1__state = -1;
      deltaTime = UnityEngine_Time__get_deltaTime(0LL);
      time_5__8 = v8->fields._time_5__8;
      v8->fields._totalTime_5__7 = totalTime_5__7 + deltaTime;
      v51 = UnityEngine_Time__get_deltaTime(0LL);
      v47 = v8->fields._totalTime_5__7;
      v46 = time_5__8 + v51;
      v8->fields._time_5__8 = v46;
LABEL_17:
      if ( v47 >= v8->fields._duration_5__3 || v8->fields._playCount_5__9 >= v8->fields.totalCount )
        return 0;
      if ( v46 < v8->fields._playIntervalTime_5__4 )
        goto LABEL_28;
      v52 = Method_CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_MoveNext__;
      if ( (*((_BYTE *)Method_CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_MoveNext__ + 83) & 2) != 0 )
        v52 = (_QWORD *)sub_1BCA7F8(Method_CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_MoveNext__);
      this = (CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_o *)sub_1BCA7C4(v52, v52[4]);
      if ( !_4__this )
        goto LABEL_32;
      this = (CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_o *)OverwriteAssetSoundName__PlaySeContinue(
                                                                     (System_Reflection_MethodBase_o *)this,
                                                                     _4__this->fields.arrivedPlaySeName,
                                                                     0LL);
      isGaugeAnimation_5__5 = v8->fields._isGaugeAnimation_5__5;
      v54 = v8->fields._playCount_5__9 + 1;
      v8->fields._time_5__8 = 0.0;
      v8->fields._playCount_5__9 = v54;
      if ( !isGaugeAnimation_5__5 )
      {
        beforeEntity = _4__this->fields.beforeEntity;
        if ( !beforeEntity
          || (afterEntity = _4__this->fields.afterEntity) == 0LL
          || (this = (CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_o *)v8->fields._gaugeEffectComponent_5__6) == 0LL )
        {
LABEL_32:
          sub_1BCAA3C(this, method);
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
      sub_1BCA784(p__2__current, 0LL, v2, (int32_t)v3, v4, v5, v6, v7);
      v44 = 3;
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
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_CoinRoomEffectComponent__PlayCoinArrivedSE_d__28_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
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
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B19801 & 1) == 0 )
  {
    sub_1BCA7E0(&CoinRoomEffectComponent___c_TypeInfo, v1, v2);
    byte_4B19801 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(CoinRoomEffectComponent___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  CoinRoomEffectComponent___c_TypeInfo->static_fields->__9 = (struct CoinRoomEffectComponent___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)CoinRoomEffectComponent___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall CoinRoomEffectComponent___c___ctor(CoinRoomEffectComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall CoinRoomEffectComponent___c___NextAcquiredEffect_b__27_1(
        CoinRoomEffectComponent___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_String_o *MainBgmName; // x19

  if ( (byte_4B19803 & 1) == 0 )
  {
    sub_1BCA7E0(&BgmManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3, v4);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v5, v6);
    sub_1BCA7E0(&SoundManager_TypeInfo, v7, v8);
    byte_4B19803 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  CommonUI__ReleaseCoinRoomGetEffect((CommonUI_o *)Instance, 0LL);
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v11);
  MainBgmName = BgmManager__GetMainBgmName(0LL);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v12);
  SoundManager__playBgm(MainBgmName, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
LABEL_10:
    sub_1BCAA3C(Instance, v10);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 90, 1, 0LL, 0LL);
}


int32_t __fastcall CoinRoomEffectComponent___c___StartPutInAnimation_b__25_0(
        CoinRoomEffectComponent___c_o *this,
        System_Collections_Generic_KeyValuePair_int__SelectedUserSvtCoin__o x,
        const MethodInfo *method)
{
  struct SelectedUserSvtCoin_o *value; // x19

  value = x.fields.value;
  if ( (byte_4B19802 & 1) == 0 )
  {
    this = (CoinRoomEffectComponent___c_o *)sub_1BCA7E0(
                                              &Method_System_Collections_Generic_KeyValuePair_int__SelectedUserSvtCoin__get_Value__,
                                              *(_QWORD *)&x.fields.key,
                                              x.fields.value);
    byte_4B19802 = 1;
  }
  if ( !value )
    sub_1BCAA3C(this, *(_QWORD *)&x.fields.key);
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
  __int64 v2; // x2
  CoinRoomEffectComponent___c__DisplayClass27_0_o *v3; // x20
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  struct CoinRoomEffectComponent_o *_4__this; // x8
  struct CoinRoomEffectComponent_o *v11; // x8
  CommonUI_o *v12; // x19
  __int64 v13; // x2
  __int64 v14; // x3
  CoinRoomEffectComponent___c_c *v15; // x8
  QuestRewardInfo_o *questRewardInfo; // x20
  CoinRoomEffectComponent___c__DisplayClass27_0_o *v17; // x21
  System_Action_o *_9__27_1; // x22
  Il2CppObject *v19; // x23
  struct CoinRoomEffectComponent___c_StaticFields *static_fields; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7

  v3 = this;
  if ( (byte_4B19804 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4, v5);
    sub_1BCA7E0(&Method_CoinRoomEffectComponent___c__NextAcquiredEffect_b__27_1__, v6, v7);
    this = (CoinRoomEffectComponent___c__DisplayClass27_0_o *)sub_1BCA7E0(&CoinRoomEffectComponent___c_TypeInfo, v8, v9);
    byte_4B19804 = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    goto LABEL_15;
  this = (CoinRoomEffectComponent___c__DisplayClass27_0_o *)_4__this->fields.gaugeObject;
  if ( !this )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (CoinRoomEffectComponent___c__DisplayClass27_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = v3->fields.__4__this;
  if ( !v11 )
    goto LABEL_15;
  v12 = (CommonUI_o *)this;
  this = (CoinRoomEffectComponent___c__DisplayClass27_0_o *)v11->fields.acquiredEffect;
  if ( !this )
    goto LABEL_15;
  this = (CoinRoomEffectComponent___c__DisplayClass27_0_o *)UnityEngine_GameObject__get_transform(
                                                              (UnityEngine_GameObject_o *)this,
                                                              0LL);
  v15 = CoinRoomEffectComponent___c_TypeInfo;
  questRewardInfo = v3->fields.questRewardInfo;
  v17 = this;
  if ( !CoinRoomEffectComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomEffectComponent___c_TypeInfo, method);
    v15 = CoinRoomEffectComponent___c_TypeInfo;
  }
  _9__27_1 = v15->static_fields->__9__27_1;
  if ( !_9__27_1 )
  {
    if ( !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15, method);
      v15 = CoinRoomEffectComponent___c_TypeInfo;
    }
    v19 = (Il2CppObject *)v15->static_fields->__9;
    _9__27_1 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v13, v14);
    System_Action___ctor(_9__27_1, v19, Method_CoinRoomEffectComponent___c__NextAcquiredEffect_b__27_1__, 0LL);
    static_fields = CoinRoomEffectComponent___c_TypeInfo->static_fields;
    static_fields->__9__27_1 = _9__27_1;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__27_1,
      (int64_t)_9__27_1,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
  }
  if ( !v12 )
LABEL_15:
    sub_1BCAA3C(this, method);
  CommonUI__OpenCoinRoomGetEffect(v12, (UnityEngine_Transform_o *)v17, 0, questRewardInfo, _9__27_1, 0LL);
}