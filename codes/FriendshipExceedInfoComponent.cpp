// local variable allocation has failed, the output may be wrong!
void __fastcall FriendshipExceedInfoComponent___ctor(FriendshipExceedInfoComponent_o *this, const MethodInfo *method)
{
  int v2; // s3
  float v3; // s4
  float v4; // s5
  float v5; // s6
  int v6; // s0
  int v7; // s2
  int v9; // s1
  struct UnityEngine_Color_o v10; // [xsp+0h] [xbp-20h] BYREF

  v6 = 1062928384;
  v7 = 1050935296;
  v9 = 0;
  *(_QWORD *)&v10.fields.r = 0LL;
  UnityEngine_Color___ctor_41410832(*(UnityEngine_Color_o *)(&v2 - 3), v3, v4, v5, (const MethodInfo *)&v10);
  this->fields.DISABLE_COLOR = v10;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FriendshipExceedInfoComponent__InitLabel(
        FriendshipExceedInfoComponent_o *this,
        const MethodInfo *method)
{
  UILabel_o *disableLabel; // x20
  System_String_o *v4; // x0
  __int64 v5; // x1

  if ( (byte_438D8C7 & 1) == 0 )
  {
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&StringLiteral_8996/*"MSG_FRIENDSHIP_EXCEED_DISABLE"*/);
    byte_438D8C7 = 1;
  }
  if ( !this->fields.isInitialized )
  {
    disableLabel = this->fields.disableLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v4 = LocalizationManager__Get((System_String_o *)StringLiteral_8996/*"MSG_FRIENDSHIP_EXCEED_DISABLE"*/, 0LL);
    if ( !disableLabel
      || (UILabel__set_text(disableLabel, v4, 0LL), (v4 = (System_String_o *)this->fields.disableLabel) == 0LL) )
    {
      sub_B7769C(v4, v5);
    }
    UIWidget__set_color((UIWidget_o *)v4, this->fields.DISABLE_COLOR, 0LL);
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
  UnityEngine_Component_o *disableLabel; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v16; // x25
  __int64 v17; // x26
  DataMasterBase_WarMaster__WarEntity__int__o *v18; // x24
  WarEntity_o *Entity; // x26
  FriendshipMaster_o *v20; // x24
  __int64 v21; // x27
  __int64 v22; // x28
  int32_t eventId; // w25
  int32_t lastQuestId; // w26
  int32_t friendshipExceedCount; // w23
  int32_t v26; // w22
  _BOOL4 v27; // w23
  const MethodInfo *v28; // x4
  float v29; // s8
  int32_t v30; // w1
  int32_t v31; // w2
  int32_t v32; // w3
  const MethodInfo *v33; // x4
  const MethodInfo *v34; // [xsp+0h] [xbp-70h]
  float fraction[2]; // [xsp+8h] [xbp-68h] BYREF
  int32_t max[2]; // [xsp+18h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16

  if ( (byte_438D8C8 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_FriendshipMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B775C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438D8C8 = 1;
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
    goto LABEL_38;
  }
  disableLabel = (UnityEngine_Component_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !disableLabel )
    goto LABEL_38;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)disableLabel,
                                         (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantMaster___);
  v17 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v16 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  v18 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v37.fields.currentCryptoKey = v17;
  *(_QWORD *)&v37.fields.fakeValue = v16;
  disableLabel = (UnityEngine_Component_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
                                              v37,
                                              0LL);
  if ( !v18 )
    goto LABEL_38;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             v18,
             (int32_t)disableLabel,
             (const MethodInfo_21FB894 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  disableLabel = (UnityEngine_Component_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !disableLabel )
    goto LABEL_38;
  disableLabel = (UnityEngine_Component_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)disableLabel,
                                              (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_FriendshipMaster___);
  if ( !Entity )
    goto LABEL_38;
  v20 = (FriendshipMaster_o *)disableLabel;
  v21 = *(_QWORD *)&userServantCollectionEntity->fields.friendship.fields.currentCryptoKey;
  v22 = *(_QWORD *)&userServantCollectionEntity->fields.friendship.fields.fakeValue;
  eventId = Entity->fields.eventId;
  lastQuestId = Entity->fields.lastQuestId;
  friendshipExceedCount = userServantCollectionEntity->fields.friendshipExceedCount;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v38.fields.currentCryptoKey = v21;
  *(_QWORD *)&v38.fields.fakeValue = v22;
  disableLabel = (UnityEngine_Component_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
                                              v38,
                                              0LL);
  if ( !v20 )
    goto LABEL_38;
  FriendshipMaster__GetFriendshipRank(
    v20,
    eventId,
    (int32_t)disableLabel,
    lastQuestId - isOnEffect + friendshipExceedCount,
    &max[1],
    max,
    (int32_t *)&fraction[1],
    fraction,
    v34);
  v26 = max[1];
  disableLabel = (UnityEngine_Component_o *)this->fields.currentFriendshipGauge;
  v27 = max[1] != max[0];
  if ( !disableLabel )
    goto LABEL_38;
  disableLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(disableLabel, 0LL);
  if ( !disableLabel )
    goto LABEL_38;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)disableLabel, 1, 0LL);
  disableLabel = (UnityEngine_Component_o *)this->fields.currentFriendshipGauge;
  if ( currentMax )
  {
    if ( !disableLabel )
      goto LABEL_38;
    v29 = fraction[0];
    v30 = v26;
    v31 = currentMax;
    v32 = 0;
  }
  else
  {
    if ( !disableLabel )
      goto LABEL_38;
    v29 = fraction[0];
    v31 = max[0];
    v30 = v26;
    v32 = v27;
  }
  FriendshipExceedFriendshipGauge__Set((FriendshipExceedFriendshipGauge_o *)disableLabel, v30, v31, v29, v32, v28);
  disableLabel = (UnityEngine_Component_o *)this->fields.disableLabel;
  if ( !disableLabel )
    goto LABEL_38;
  disableLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(disableLabel, 0LL);
  if ( !disableLabel )
    goto LABEL_38;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)disableLabel, !isExecutable, 0LL);
  disableLabel = (UnityEngine_Component_o *)this->fields.resultFriendshipGauge;
  if ( !disableLabel )
    goto LABEL_38;
  disableLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(disableLabel, 0LL);
  if ( !disableLabel )
    goto LABEL_38;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)disableLabel, isExecutable, 0LL);
  if ( !isExecutable )
    return;
  disableLabel = (UnityEngine_Component_o *)this->fields.resultFriendshipGauge;
  if ( !disableLabel )
LABEL_38:
    sub_B7769C(disableLabel, v13);
  FriendshipExceedFriendshipGauge__Set((FriendshipExceedFriendshipGauge_o *)disableLabel, v26, max[0] + 1, v29, 2, v33);
}