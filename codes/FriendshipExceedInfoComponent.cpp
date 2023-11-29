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
  UnityEngine_Color___ctor_40666012(*(UnityEngine_Color_o *)(&v2 - 3), v3, v4, v5, (const MethodInfo *)&v10);
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
  UIWidget_o *v6; // x0

  if ( (byte_40FB2B9 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_8805, v3);
    byte_40FB2B9 = 1;
  }
  if ( !this->fields.isInitialized )
  {
    disableLabel = this->fields.disableLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v5 = LocalizationManager__Get((System_String_o *)StringLiteral_8805, 0LL);
    if ( !disableLabel
      || (UILabel__set_text(disableLabel, v5, 0LL), (v6 = (UIWidget_o *)this->fields.disableLabel) == 0LL) )
    {
      sub_B170D4();
    }
    UIWidget__set_color(v6, this->fields.DISABLE_COLOR, 0LL);
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
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v19; // x25
  __int64 v20; // x26
  DataMasterBase_WarMaster__WarEntity__int__o *v21; // x24
  int32_t v22; // w0
  WarEntity_o *Entity; // x26
  WebViewManager_o *v24; // x0
  WarQuestSelectionMaster_o *v25; // x0
  FriendshipMaster_o *v26; // x24
  __int64 v27; // x27
  __int64 v28; // x28
  int32_t eventId; // w25
  int32_t lastQuestId; // w26
  int v31; // w23
  int32_t v32; // w0
  int32_t v33; // w22
  UnityEngine_Component_o *v34; // x0
  _BOOL4 v35; // w23
  UnityEngine_GameObject_o *v36; // x0
  const MethodInfo *v37; // x4
  FriendshipExceedFriendshipGauge_o *v38; // x0
  float v39; // s8
  int32_t v40; // w1
  int32_t v41; // w2
  int32_t v42; // w3
  UnityEngine_Component_o *disableLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *currentFriendshipGauge; // x0
  UnityEngine_GameObject_o *v46; // x0
  UnityEngine_Component_o *resultFriendshipGauge; // x0
  UnityEngine_GameObject_o *v48; // x0
  UnityEngine_Component_o *v49; // x0
  UnityEngine_GameObject_o *v50; // x0
  UnityEngine_Component_o *v51; // x0
  UnityEngine_GameObject_o *v52; // x0
  const MethodInfo *v53; // x4
  FriendshipExceedFriendshipGauge_o *v54; // x0
  const MethodInfo *v55; // [xsp+0h] [xbp-70h]
  float fraction[2]; // [xsp+8h] [xbp-68h] BYREF
  int32_t max[2]; // [xsp+18h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v58; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v59; // 0:x0.16

  if ( (byte_40FB2BA & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_FriendshipMaster___, userServantEntity);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v13);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v14);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_40FB2BA = 1;
  }
  *(_QWORD *)max = 0LL;
  *(_QWORD *)fraction = 0LL;
  FriendshipExceedInfoComponent__InitLabel(this, (const MethodInfo *)userServantEntity);
  if ( !userServantEntity || !userServantCollectionEntity )
  {
    disableLabel = (UnityEngine_Component_o *)this->fields.disableLabel;
    if ( disableLabel )
    {
      gameObject = UnityEngine_Component__get_gameObject(disableLabel, 0LL);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
        currentFriendshipGauge = (UnityEngine_Component_o *)this->fields.currentFriendshipGauge;
        if ( currentFriendshipGauge )
        {
          v46 = UnityEngine_Component__get_gameObject(currentFriendshipGauge, 0LL);
          if ( v46 )
          {
            UnityEngine_GameObject__SetActive(v46, 0, 0LL);
            resultFriendshipGauge = (UnityEngine_Component_o *)this->fields.resultFriendshipGauge;
            if ( resultFriendshipGauge )
            {
              v48 = UnityEngine_Component__get_gameObject(resultFriendshipGauge, 0LL);
              if ( v48 )
              {
                UnityEngine_GameObject__SetActive(v48, 0, 0LL);
                return;
              }
            }
          }
        }
      }
    }
    goto LABEL_38;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  v20 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v19 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  v21 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v58.fields.currentCryptoKey = v20;
  *(_QWORD *)&v58.fields.fakeValue = v19;
  v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v58, 0LL);
  if ( !v21 )
    goto LABEL_38;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             v21,
             v22,
             (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v24 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v24 )
    goto LABEL_38;
  v25 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          (DataManager_o *)v24,
          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_FriendshipMaster___);
  if ( !Entity )
    goto LABEL_38;
  v26 = (FriendshipMaster_o *)v25;
  v27 = *(_QWORD *)&userServantCollectionEntity->fields.friendship.fields.currentCryptoKey;
  v28 = *(_QWORD *)&userServantCollectionEntity->fields.friendship.fields.fakeValue;
  eventId = Entity->fields.eventId;
  lastQuestId = Entity->fields.lastQuestId;
  v31 = *(_DWORD *)((char *)&qword_70 + (_QWORD)userServantCollectionEntity + 4);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v59.fields.currentCryptoKey = v27;
  *(_QWORD *)&v59.fields.fakeValue = v28;
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v59, 0LL);
  if ( !v26 )
    goto LABEL_38;
  FriendshipMaster__GetFriendshipRank(
    v26,
    eventId,
    v32,
    lastQuestId - isOnEffect + v31,
    &max[1],
    max,
    (int32_t *)&fraction[1],
    fraction,
    v55);
  v33 = max[1];
  v34 = (UnityEngine_Component_o *)this->fields.currentFriendshipGauge;
  v35 = max[1] != max[0];
  if ( !v34 )
    goto LABEL_38;
  v36 = UnityEngine_Component__get_gameObject(v34, 0LL);
  if ( !v36 )
    goto LABEL_38;
  UnityEngine_GameObject__SetActive(v36, 1, 0LL);
  v38 = this->fields.currentFriendshipGauge;
  if ( currentMax )
  {
    if ( !v38 )
      goto LABEL_38;
    v39 = fraction[0];
    v40 = v33;
    v41 = currentMax;
    v42 = 0;
  }
  else
  {
    if ( !v38 )
      goto LABEL_38;
    v39 = fraction[0];
    v41 = max[0];
    v40 = v33;
    v42 = v35;
  }
  FriendshipExceedFriendshipGauge__Set(v38, v40, v41, v39, v42, v37);
  v49 = (UnityEngine_Component_o *)this->fields.disableLabel;
  if ( !v49 )
    goto LABEL_38;
  v50 = UnityEngine_Component__get_gameObject(v49, 0LL);
  if ( !v50 )
    goto LABEL_38;
  UnityEngine_GameObject__SetActive(v50, !isExecutable, 0LL);
  v51 = (UnityEngine_Component_o *)this->fields.resultFriendshipGauge;
  if ( !v51 )
    goto LABEL_38;
  v52 = UnityEngine_Component__get_gameObject(v51, 0LL);
  if ( !v52 )
    goto LABEL_38;
  UnityEngine_GameObject__SetActive(v52, isExecutable, 0LL);
  if ( !isExecutable )
    return;
  v54 = this->fields.resultFriendshipGauge;
  if ( !v54 )
LABEL_38:
    sub_B170D4();
  FriendshipExceedFriendshipGauge__Set(v54, v33, max[0] + 1, v39, 2, v53);
}