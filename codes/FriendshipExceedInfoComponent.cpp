void __fastcall FriendshipExceedInfoComponent___ctor(FriendshipExceedInfoComponent_o *this, const MethodInfo *method)
{
  this->fields.DISABLE_COLOR = (struct UnityEngine_Color_o)xmmword_BDE520;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FriendshipExceedInfoComponent__InitLabel(
        FriendshipExceedInfoComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UILabel_o *disableLabel; // x20
  System_String_o *v5; // x0
  __int64 v6; // x1

  if ( (byte_4B05D94 & 1) == 0 )
  {
    sub_1BC3008(&LocalizationManager_TypeInfo, method);
    sub_1BC3008(&StringLiteral_8717/*"MSG_FRIENDSHIP_EXCEED_DISABLE"*/, v3);
    byte_4B05D94 = 1;
  }
  if ( !this->fields.isInitialized )
  {
    disableLabel = this->fields.disableLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v5 = LocalizationManager__Get((System_String_o *)StringLiteral_8717/*"MSG_FRIENDSHIP_EXCEED_DISABLE"*/, 0LL);
    if ( !disableLabel
      || (UILabel__set_text(disableLabel, v5, 0LL), (v5 = (System_String_o *)this->fields.disableLabel) == 0LL) )
    {
      sub_1BC3264(v5, v6);
    }
    UIWidget__set_color((UIWidget_o *)v5, this->fields.DISABLE_COLOR, 0LL);
    this->fields.isInitialized = 1;
  }
}


void __fastcall FriendshipExceedInfoComponent__SetInfo(
        FriendshipExceedInfoComponent_o *this,
        UserServantEntity_o *userServantEntity,
        UserServantCollectionEntity_o *userServantCollectionEntity,
        bool isExecutable,
        bool isOnEffect,
        int32_t currentMax,
        bool isSpecialEffect,
        const MethodInfo *method)
{
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  UnityEngine_Component_o *disableLabel; // x0
  Il2CppObject *MasterData_object; // x0
  __int64 v22; // x26
  __int64 v23; // x27
  DataMasterBase_TMaster__TEntity__PKType__o *v24; // x25
  Il2CppObject *Entity; // x27
  FriendshipMaster_o *v26; // x25
  __int64 v27; // x28
  __int64 v28; // x29
  int32_t klass; // w26
  int klass_high; // w27
  int32_t friendshipExceedCount; // w24
  _BOOL4 v32; // w23
  const MethodInfo *v33; // x5
  float v34; // s0
  bool v35; // w4
  int32_t v36; // w2
  int32_t v37; // w3
  const MethodInfo *v38; // x5
  float fraction[2]; // [xsp+10h] [xbp-70h] BYREF
  __int64 max; // [xsp+18h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16

  if ( (byte_4B05D95 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_FriendshipMaster___, userServantEntity);
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantMaster___, v15);
    sub_1BC3008(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v16);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    byte_4B05D95 = 1;
  }
  *(_QWORD *)fraction = 0LL;
  max = 0LL;
  FriendshipExceedInfoComponent__InitLabel(this, (const MethodInfo *)userServantEntity);
  if ( !userServantEntity || !userServantCollectionEntity )
  {
    disableLabel = (UnityEngine_Component_o *)this->fields.disableLabel;
    if ( disableLabel )
    {
      disableLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(disableLabel, 0LL);
      if ( disableLabel )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)disableLabel, 0, 0LL);
        disableLabel = (UnityEngine_Component_o *)this->fields.currentFriendshipGauge;
        if ( disableLabel )
        {
          disableLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(disableLabel, 0LL);
          if ( disableLabel )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)disableLabel, 0, 0LL);
            disableLabel = (UnityEngine_Component_o *)this->fields.resultFriendshipGauge;
            if ( disableLabel )
            {
              disableLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(disableLabel, 0LL);
              if ( disableLabel )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)disableLabel, 0, 0LL);
                return;
              }
            }
          }
        }
      }
    }
    goto LABEL_36;
  }
  disableLabel = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !disableLabel )
    goto LABEL_36;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)disableLabel,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantMaster___);
  v23 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v22 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  v24 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v41.fields.currentCryptoKey = v23;
  *(_QWORD *)&v41.fields.fakeValue = v22;
  disableLabel = (UnityEngine_Component_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(
                                              v41,
                                              0LL);
  if ( !v24 )
    goto LABEL_36;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v24,
             (int32_t)disableLabel,
             (const MethodInfo_32AF070 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  disableLabel = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !disableLabel )
    goto LABEL_36;
  disableLabel = (UnityEngine_Component_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)disableLabel,
                                              (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_FriendshipMaster___);
  if ( !Entity )
    goto LABEL_36;
  v26 = (FriendshipMaster_o *)disableLabel;
  v27 = *(_QWORD *)&userServantCollectionEntity->fields.friendship.fields.currentCryptoKey;
  v28 = *(_QWORD *)&userServantCollectionEntity->fields.friendship.fields.fakeValue;
  klass = (int32_t)Entity[6].klass;
  klass_high = HIDWORD(Entity[6].klass);
  friendshipExceedCount = userServantCollectionEntity->fields.friendshipExceedCount;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v42.fields.currentCryptoKey = v27;
  *(_QWORD *)&v42.fields.fakeValue = v28;
  disableLabel = (UnityEngine_Component_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(
                                              v42,
                                              0LL);
  if ( !v26 )
    goto LABEL_36;
  FriendshipMaster__GetFriendshipRank(
    v26,
    klass,
    (int32_t)disableLabel,
    klass_high - isOnEffect + friendshipExceedCount,
    (int32_t *)&max + 1,
    (int32_t *)&max,
    (int32_t *)&fraction[1],
    fraction,
    0LL);
  disableLabel = (UnityEngine_Component_o *)this->fields.currentFriendshipGauge;
  v32 = HIDWORD(max) != max;
  if ( !disableLabel )
    goto LABEL_36;
  disableLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(disableLabel, 0LL);
  if ( !disableLabel )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)disableLabel, 1, 0LL);
  disableLabel = (UnityEngine_Component_o *)this->fields.currentFriendshipGauge;
  v19 = HIDWORD(max);
  if ( currentMax )
  {
    if ( !disableLabel )
      goto LABEL_36;
    v34 = fraction[0];
    v35 = isSpecialEffect;
    v36 = currentMax;
    v37 = 0;
  }
  else
  {
    if ( !disableLabel )
      goto LABEL_36;
    v34 = fraction[0];
    v36 = max;
    v35 = isSpecialEffect;
    v37 = v32;
  }
  FriendshipExceedFriendshipGauge__Set(
    (FriendshipExceedFriendshipGauge_o *)disableLabel,
    SHIDWORD(max),
    v36,
    v34,
    v37,
    v35,
    v33);
  disableLabel = (UnityEngine_Component_o *)this->fields.disableLabel;
  if ( !disableLabel )
    goto LABEL_36;
  disableLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(disableLabel, 0LL);
  if ( !disableLabel )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)disableLabel, !isExecutable, 0LL);
  disableLabel = (UnityEngine_Component_o *)this->fields.resultFriendshipGauge;
  if ( !disableLabel )
    goto LABEL_36;
  disableLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(disableLabel, 0LL);
  if ( !disableLabel )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)disableLabel, isExecutable, 0LL);
  if ( !isExecutable )
    return;
  disableLabel = (UnityEngine_Component_o *)this->fields.resultFriendshipGauge;
  if ( !disableLabel )
LABEL_36:
    sub_1BC3264(disableLabel, v19);
  FriendshipExceedFriendshipGauge__Set(
    (FriendshipExceedFriendshipGauge_o *)disableLabel,
    SHIDWORD(max),
    max + 1,
    fraction[0],
    2,
    isSpecialEffect,
    v38);
}