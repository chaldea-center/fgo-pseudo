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
  UnityEngine_Color___ctor_40633184(*(UnityEngine_Color_o *)(&v2 - 3), v3, v4, v5, (const MethodInfo *)&v10);
  this->fields.DISABLE_COLOR = v10;
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

  if ( (byte_418A4AD & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_8834/*"MSG_FRIENDSHIP_EXCEED_DISABLE"*/, v3);
    byte_418A4AD = 1;
  }
  if ( !this->fields.isInitialized )
  {
    disableLabel = this->fields.disableLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v5 = LocalizationManager__Get((System_String_o *)StringLiteral_8834/*"MSG_FRIENDSHIP_EXCEED_DISABLE"*/, 0LL);
    if ( !disableLabel
      || (UILabel__set_text(disableLabel, v5, 0LL), (v5 = (System_String_o *)this->fields.disableLabel) == 0LL) )
    {
      sub_B2C434(v5, v6);
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
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  UnityEngine_Component_o *disableLabel; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v20; // x25
  __int64 v21; // x26
  DataMasterBase_WarMaster__WarEntity__int__o *v22; // x24
  WarEntity_o *Entity; // x26
  FriendshipMaster_o *v24; // x24
  __int64 v25; // x27
  __int64 v26; // x28
  int32_t eventId; // w25
  int32_t lastQuestId; // w26
  int v29; // w23
  int32_t v30; // w22
  _BOOL4 v31; // w23
  const MethodInfo *v32; // x4
  float v33; // s8
  int32_t v34; // w1
  int32_t v35; // w2
  int32_t v36; // w3
  const MethodInfo *v37; // x4
  const MethodInfo *v38; // [xsp+0h] [xbp-70h]
  float fraction[2]; // [xsp+8h] [xbp-68h] BYREF
  int32_t max[2]; // [xsp+18h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16

  if ( (byte_418A4AE & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_FriendshipMaster___, userServantEntity);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v13);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v14);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_418A4AE = 1;
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
  disableLabel = (UnityEngine_Component_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !disableLabel )
    goto LABEL_38;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)disableLabel,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  v21 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v20 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  v22 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v41.fields.currentCryptoKey = v21;
  *(_QWORD *)&v41.fields.fakeValue = v20;
  disableLabel = (UnityEngine_Component_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                              v41,
                                              0LL);
  if ( !v22 )
    goto LABEL_38;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             v22,
             (int32_t)disableLabel,
             (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  disableLabel = (UnityEngine_Component_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !disableLabel )
    goto LABEL_38;
  disableLabel = (UnityEngine_Component_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)disableLabel,
                                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_FriendshipMaster___);
  if ( !Entity )
    goto LABEL_38;
  v24 = (FriendshipMaster_o *)disableLabel;
  v25 = *(_QWORD *)&userServantCollectionEntity->fields.friendship.fields.currentCryptoKey;
  v26 = *(_QWORD *)&userServantCollectionEntity->fields.friendship.fields.fakeValue;
  eventId = Entity->fields.eventId;
  lastQuestId = Entity->fields.lastQuestId;
  v29 = *(_DWORD *)((char *)&qword_70 + (_QWORD)userServantCollectionEntity + 4);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v42.fields.currentCryptoKey = v25;
  *(_QWORD *)&v42.fields.fakeValue = v26;
  disableLabel = (UnityEngine_Component_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                              v42,
                                              0LL);
  if ( !v24 )
    goto LABEL_38;
  FriendshipMaster__GetFriendshipRank(
    v24,
    eventId,
    (int32_t)disableLabel,
    lastQuestId - isOnEffect + v29,
    &max[1],
    max,
    (int32_t *)&fraction[1],
    fraction,
    v38);
  v30 = max[1];
  disableLabel = (UnityEngine_Component_o *)this->fields.currentFriendshipGauge;
  v31 = max[1] != max[0];
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
    v33 = fraction[0];
    v34 = v30;
    v35 = currentMax;
    v36 = 0;
  }
  else
  {
    if ( !disableLabel )
      goto LABEL_38;
    v33 = fraction[0];
    v35 = max[0];
    v34 = v30;
    v36 = v31;
  }
  FriendshipExceedFriendshipGauge__Set((FriendshipExceedFriendshipGauge_o *)disableLabel, v34, v35, v33, v36, v32);
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
    sub_B2C434(disableLabel, v17);
  FriendshipExceedFriendshipGauge__Set((FriendshipExceedFriendshipGauge_o *)disableLabel, v30, max[0] + 1, v33, 2, v37);
}