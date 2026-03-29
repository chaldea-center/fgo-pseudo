void FriendshipExceedInfoComponent___ctor(FriendshipExceedInfoComponent_o *this, const MethodInfo *method)
{
  this->fields.DISABLE_COLOR = (struct UnityEngine_Color_o)xmmword_D00A70;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void FriendshipExceedInfoComponent__InitLabel(FriendshipExceedInfoComponent_o *this, const MethodInfo *method)
{
  UILabel_o *disableLabel; // x20
  System_String_o *v4; // x0
  __int64 v5; // x1

  if ( (byte_4D34A89 & 1) == 0 )
  {
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_8850/*"MSG_FRIENDSHIP_EXCEED_DISABLE"*/);
    byte_4D34A89 = 1;
  }
  if ( !this->fields.isInitialized )
  {
    disableLabel = this->fields.disableLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v4 = LocalizationManager__Get((System_String_o *)StringLiteral_8850/*"MSG_FRIENDSHIP_EXCEED_DISABLE"*/, 0);
    if ( !disableLabel
      || (UILabel__set_text(disableLabel, v4, 0), (v4 = (System_String_o *)this->fields.disableLabel) == 0) )
    {
      sub_1C93D2C(v4, v5);
    }
    UIWidget__set_color((UIWidget_o *)v4, this->fields.DISABLE_COLOR, 0);
    this->fields.isInitialized = 1;
  }
}


void FriendshipExceedInfoComponent__SetInfo(
        FriendshipExceedInfoComponent_o *this,
        UserServantEntity_o *userServantEntity,
        UserServantCollectionEntity_o *userServantCollectionEntity,
        bool isExecutable,
        bool isOnEffect,
        int32_t currentMax,
        const MethodInfo *method)
{
  __int64 v13; // x1
  UnityEngine_Component_o *disableLabel; // x0
  Il2CppObject *MasterData_object; // x0
  __int64 v16; // x25
  __int64 v17; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *v18; // x24
  Il2CppObject *Entity; // x26
  FriendshipMaster_o *v20; // x24
  __int64 v21; // x27
  __int64 v22; // x28
  int32_t klass; // w25
  int klass_high; // w26
  int32_t friendshipExceedCount; // w23
  _BOOL4 v26; // w22
  const MethodInfo *v27; // x4
  float v28; // s0
  int32_t v29; // w2
  int32_t v30; // w3
  const MethodInfo *v31; // x4
  __int64 fraction; // [xsp+8h] [xbp-68h] BYREF
  int32_t max[2]; // [xsp+18h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16

  if ( (byte_4D34A8A & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_FriendshipMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C93AD4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D34A8A = 1;
  }
  *(_QWORD *)max = 0;
  fraction = 0;
  FriendshipExceedInfoComponent__InitLabel(this, (const MethodInfo *)userServantEntity);
  if ( !userServantEntity || !userServantCollectionEntity )
  {
    disableLabel = (UnityEngine_Component_o *)this->fields.disableLabel;
    if ( disableLabel )
    {
      disableLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(disableLabel, 0);
      if ( disableLabel )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)disableLabel, 0, 0);
        disableLabel = (UnityEngine_Component_o *)this->fields.currentFriendshipGauge;
        if ( disableLabel )
        {
          disableLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(disableLabel, 0);
          if ( disableLabel )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)disableLabel, 0, 0);
            disableLabel = (UnityEngine_Component_o *)this->fields.resultFriendshipGauge;
            if ( disableLabel )
            {
              disableLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(disableLabel, 0);
              if ( disableLabel )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)disableLabel, 0, 0);
                return;
              }
            }
          }
        }
      }
    }
    goto LABEL_36;
  }
  disableLabel = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !disableLabel )
    goto LABEL_36;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)disableLabel,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantMaster___);
  v17 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v16 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  v18 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v34.fields.currentCryptoKey = v17;
  *(_QWORD *)&v34.fields.fakeValue = v16;
  disableLabel = (UnityEngine_Component_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v34, 0);
  if ( !v18 )
    goto LABEL_36;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v18,
             (int32_t)disableLabel,
             (const MethodInfo_3463274 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  disableLabel = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !disableLabel )
    goto LABEL_36;
  disableLabel = (UnityEngine_Component_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)disableLabel,
                                              (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_FriendshipMaster___);
  if ( !Entity )
    goto LABEL_36;
  v20 = (FriendshipMaster_o *)disableLabel;
  v21 = *(_QWORD *)&userServantCollectionEntity->fields.friendship.fields.currentCryptoKey;
  v22 = *(_QWORD *)&userServantCollectionEntity->fields.friendship.fields.fakeValue;
  klass = (int32_t)Entity[6].klass;
  klass_high = HIDWORD(Entity[6].klass);
  friendshipExceedCount = userServantCollectionEntity->fields.friendshipExceedCount;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v35.fields.currentCryptoKey = v21;
  *(_QWORD *)&v35.fields.fakeValue = v22;
  disableLabel = (UnityEngine_Component_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v35, 0);
  if ( !v20 )
    goto LABEL_36;
  FriendshipMaster__GetFriendshipRank(
    v20,
    klass,
    (int32_t)disableLabel,
    klass_high - isOnEffect + friendshipExceedCount,
    &max[1],
    max,
    (int32_t *)&fraction + 1,
    (float *)&fraction,
    0);
  disableLabel = (UnityEngine_Component_o *)this->fields.currentFriendshipGauge;
  v26 = max[1] != max[0];
  if ( !disableLabel )
    goto LABEL_36;
  disableLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(disableLabel, 0);
  if ( !disableLabel )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)disableLabel, 1, 0);
  disableLabel = (UnityEngine_Component_o *)this->fields.currentFriendshipGauge;
  v13 = (unsigned int)max[1];
  if ( currentMax )
  {
    if ( !disableLabel )
      goto LABEL_36;
    v28 = *(float *)&fraction;
    v29 = currentMax;
    v30 = 0;
  }
  else
  {
    if ( !disableLabel )
      goto LABEL_36;
    v28 = *(float *)&fraction;
    v29 = max[0];
    v30 = v26;
  }
  FriendshipExceedFriendshipGauge__Set((FriendshipExceedFriendshipGauge_o *)disableLabel, max[1], v29, v28, v30, v27);
  disableLabel = (UnityEngine_Component_o *)this->fields.disableLabel;
  if ( !disableLabel )
    goto LABEL_36;
  disableLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(disableLabel, 0);
  if ( !disableLabel )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)disableLabel, !isExecutable, 0);
  disableLabel = (UnityEngine_Component_o *)this->fields.resultFriendshipGauge;
  if ( !disableLabel )
    goto LABEL_36;
  disableLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(disableLabel, 0);
  if ( !disableLabel )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)disableLabel, isExecutable, 0);
  if ( !isExecutable )
    return;
  disableLabel = (UnityEngine_Component_o *)this->fields.resultFriendshipGauge;
  if ( !disableLabel )
LABEL_36:
    sub_1C93D2C(disableLabel, v13);
  FriendshipExceedFriendshipGauge__Set(
    (FriendshipExceedFriendshipGauge_o *)disableLabel,
    max[1],
    max[0] + 1,
    *(float *)&fraction,
    2,
    v31);
}