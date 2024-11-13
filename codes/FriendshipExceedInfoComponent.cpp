void __fastcall FriendshipExceedInfoComponent___ctor(FriendshipExceedInfoComponent_o *this, const MethodInfo *method)
{
  this->fields.DISABLE_COLOR = (struct UnityEngine_Color_o)xmmword_BD2810;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FriendshipExceedInfoComponent__InitLabel(
        FriendshipExceedInfoComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UILabel_o *disableLabel; // x20
  System_String_o *v7; // x0
  __int64 v8; // x1

  if ( (byte_4B19ABC & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_8886/*"MSG_FRIENDSHIP_EXCEED_DISABLE"*/, v4, v5);
    byte_4B19ABC = 1;
  }
  if ( !this->fields.isInitialized )
  {
    disableLabel = this->fields.disableLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
    v7 = LocalizationManager__Get((System_String_o *)StringLiteral_8886/*"MSG_FRIENDSHIP_EXCEED_DISABLE"*/, 0LL);
    if ( !disableLabel
      || (UILabel__set_text(disableLabel, v7, 0LL), (v7 = (System_String_o *)this->fields.disableLabel) == 0LL) )
    {
      sub_1BCAA3C(v7, v8);
    }
    UIWidget__set_color((UIWidget_o *)v7, this->fields.DISABLE_COLOR, 0LL);
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
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  UnityEngine_Component_o *disableLabel; // x0
  Il2CppObject *MasterData_object; // x0
  __int64 v24; // x1
  __int64 v25; // x25
  __int64 v26; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *v27; // x24
  Il2CppObject *Entity; // x26
  FriendshipMaster_o *v29; // x24
  __int64 v30; // x27
  __int64 v31; // x28
  int32_t klass; // w25
  int klass_high; // w26
  int32_t friendshipExceedCount; // w23
  _BOOL4 v35; // w22
  const MethodInfo *v36; // x4
  float v37; // s0
  int32_t v38; // w2
  int32_t v39; // w3
  const MethodInfo *v40; // x4
  float fraction[2]; // [xsp+8h] [xbp-68h] BYREF
  int32_t max[2]; // [xsp+18h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16

  if ( (byte_4B19ABD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_FriendshipMaster___, userServantEntity, userServantCollectionEntity);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v13, v14);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v15, v16);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19, v20);
    byte_4B19ABD = 1;
  }
  *(_QWORD *)max = 0LL;
  *(_QWORD *)fraction = 0LL;
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
  disableLabel = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !disableLabel )
    goto LABEL_36;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)disableLabel,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  v26 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v25 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  v27 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v24);
  *(_QWORD *)&v43.fields.currentCryptoKey = v26;
  *(_QWORD *)&v43.fields.fakeValue = v25;
  disableLabel = (UnityEngine_Component_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                              v43,
                                              0LL);
  if ( !v27 )
    goto LABEL_36;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v27,
             (int32_t)disableLabel,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  disableLabel = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !disableLabel )
    goto LABEL_36;
  disableLabel = (UnityEngine_Component_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)disableLabel,
                                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_FriendshipMaster___);
  if ( !Entity )
    goto LABEL_36;
  v29 = (FriendshipMaster_o *)disableLabel;
  v30 = *(_QWORD *)&userServantCollectionEntity->fields.friendship.fields.currentCryptoKey;
  v31 = *(_QWORD *)&userServantCollectionEntity->fields.friendship.fields.fakeValue;
  klass = (int32_t)Entity[6].klass;
  klass_high = HIDWORD(Entity[6].klass);
  friendshipExceedCount = userServantCollectionEntity->fields.friendshipExceedCount;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21);
  *(_QWORD *)&v44.fields.currentCryptoKey = v30;
  *(_QWORD *)&v44.fields.fakeValue = v31;
  disableLabel = (UnityEngine_Component_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                              v44,
                                              0LL);
  if ( !v29 )
    goto LABEL_36;
  FriendshipMaster__GetFriendshipRank(
    v29,
    klass,
    (int32_t)disableLabel,
    klass_high - isOnEffect + friendshipExceedCount,
    &max[1],
    max,
    (int32_t *)&fraction[1],
    fraction,
    0LL);
  disableLabel = (UnityEngine_Component_o *)this->fields.currentFriendshipGauge;
  v35 = max[1] != max[0];
  if ( !disableLabel )
    goto LABEL_36;
  disableLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(disableLabel, 0LL);
  if ( !disableLabel )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)disableLabel, 1, 0LL);
  disableLabel = (UnityEngine_Component_o *)this->fields.currentFriendshipGauge;
  v21 = (unsigned int)max[1];
  if ( currentMax )
  {
    if ( !disableLabel )
      goto LABEL_36;
    v37 = fraction[0];
    v38 = currentMax;
    v39 = 0;
  }
  else
  {
    if ( !disableLabel )
      goto LABEL_36;
    v37 = fraction[0];
    v38 = max[0];
    v39 = v35;
  }
  FriendshipExceedFriendshipGauge__Set((FriendshipExceedFriendshipGauge_o *)disableLabel, max[1], v38, v37, v39, v36);
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
    sub_1BCAA3C(disableLabel, v21);
  FriendshipExceedFriendshipGauge__Set(
    (FriendshipExceedFriendshipGauge_o *)disableLabel,
    max[1],
    max[0] + 1,
    fraction[0],
    2,
    v40);
}