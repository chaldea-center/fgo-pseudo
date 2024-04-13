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
  UnityEngine_Color___ctor_41567816(*(UnityEngine_Color_o *)(&v2 - 3), v3, v4, v5, (const MethodInfo *)&v10);
  this->fields.DISABLE_COLOR = v10;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FriendshipExceedInfoComponent__InitLabel(
        FriendshipExceedInfoComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UILabel_o *disableLabel; // x20
  System_String_o *v9; // x0
  __int64 v10; // x1

  if ( (byte_42EB4FE & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_8925/*"MSG_FRIENDSHIP_EXCEED_DISABLE"*/, v5, v6, v7);
    byte_42EB4FE = 1;
  }
  if ( !this->fields.isInitialized )
  {
    disableLabel = this->fields.disableLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v9 = LocalizationManager__Get((System_String_o *)StringLiteral_8925/*"MSG_FRIENDSHIP_EXCEED_DISABLE"*/, 0LL);
    if ( !disableLabel
      || (UILabel__set_text(disableLabel, v9, 0LL), (v9 = (System_String_o *)this->fields.disableLabel) == 0LL) )
    {
      sub_B5D69C(v9, v10);
    }
    UIWidget__set_color((UIWidget_o *)v9, this->fields.DISABLE_COLOR, 0LL);
    this->fields.isInitialized = 1;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendshipExceedInfoComponent__SetInfo(
        FriendshipExceedInfoComponent_o *this,
        UserServantEntity_o *userServantEntity,
        UserServantCollectionEntity_o *userServantCollectionEntity,
        bool isExecutable,
        bool isOnEffect,
        int32_t currentMax,
        const MethodInfo *method)
{
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  __int64 v25; // x1
  UnityEngine_Component_o *disableLabel; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v28; // x25
  __int64 v29; // x26
  DataMasterBase_WarMaster__WarEntity__int__o *v30; // x24
  WarEntity_o *Entity; // x26
  FriendshipMaster_o *v32; // x24
  __int64 v33; // x27
  __int64 v34; // x28
  int32_t eventId; // w25
  int32_t lastQuestId; // w26
  int v37; // w23
  int32_t v38; // w22
  _BOOL4 v39; // w23
  const MethodInfo *v40; // x4
  float v41; // s8
  int32_t v42; // w1
  int32_t v43; // w2
  int32_t v44; // w3
  const MethodInfo *v45; // x4
  const MethodInfo *v46; // [xsp+0h] [xbp-70h]
  float fraction[2]; // [xsp+8h] [xbp-68h] BYREF
  int32_t max[2]; // [xsp+18h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16

  if ( (byte_42EB4FF & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMasterData_FriendshipMaster___,
      (_DWORD)userServantEntity,
      (_DWORD)userServantCollectionEntity,
      isExecutable);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v13, v14, v15);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v16, v17, v18);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22, v23, v24);
    byte_42EB4FF = 1;
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
  disableLabel = (UnityEngine_Component_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !disableLabel )
    goto LABEL_38;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)disableLabel,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  v29 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v28 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  v30 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v49.fields.currentCryptoKey = v29;
  *(_QWORD *)&v49.fields.fakeValue = v28;
  disableLabel = (UnityEngine_Component_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                              v49,
                                              0LL);
  if ( !v30 )
    goto LABEL_38;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             v30,
             (int32_t)disableLabel,
             (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  disableLabel = (UnityEngine_Component_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !disableLabel )
    goto LABEL_38;
  disableLabel = (UnityEngine_Component_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)disableLabel,
                                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_FriendshipMaster___);
  if ( !Entity )
    goto LABEL_38;
  v32 = (FriendshipMaster_o *)disableLabel;
  v33 = *(_QWORD *)&userServantCollectionEntity->fields.friendship.fields.currentCryptoKey;
  v34 = *(_QWORD *)&userServantCollectionEntity->fields.friendship.fields.fakeValue;
  eventId = Entity->fields.eventId;
  lastQuestId = Entity->fields.lastQuestId;
  v37 = *(_DWORD *)((char *)&qword_70 + (_QWORD)userServantCollectionEntity + 4);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v50.fields.currentCryptoKey = v33;
  *(_QWORD *)&v50.fields.fakeValue = v34;
  disableLabel = (UnityEngine_Component_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                              v50,
                                              0LL);
  if ( !v32 )
    goto LABEL_38;
  FriendshipMaster__GetFriendshipRank(
    v32,
    eventId,
    (int32_t)disableLabel,
    lastQuestId - isOnEffect + v37,
    &max[1],
    max,
    (int32_t *)&fraction[1],
    fraction,
    v46);
  v38 = max[1];
  disableLabel = (UnityEngine_Component_o *)this->fields.currentFriendshipGauge;
  v39 = max[1] != max[0];
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
    v41 = fraction[0];
    v42 = v38;
    v43 = currentMax;
    v44 = 0;
  }
  else
  {
    if ( !disableLabel )
      goto LABEL_38;
    v41 = fraction[0];
    v43 = max[0];
    v42 = v38;
    v44 = v39;
  }
  FriendshipExceedFriendshipGauge__Set((FriendshipExceedFriendshipGauge_o *)disableLabel, v42, v43, v41, v44, v40);
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
    sub_B5D69C(disableLabel, v25);
  FriendshipExceedFriendshipGauge__Set((FriendshipExceedFriendshipGauge_o *)disableLabel, v38, max[0] + 1, v41, 2, v45);
}