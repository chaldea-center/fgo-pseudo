// local variable allocation has failed, the output may be wrong!
bool __fastcall CommonReleaseExtension__IsOpenConsiderBeforeClearQuest(
        int32_t commonReleaseId,
        int32_t beforeClearQuestId,
        bool isCheckResetFlag,
        const MethodInfo *method)
{
  __int64 v4; // x4
  CommonReleaseExtension_CommonReleaseCondOverwriterBeforeClearQuest_o *v8; // x22
  const MethodInfo *v9; // x0
  CommonReleaseMaster_o *master; // x0
  const MethodInfo *v11; // x4

  if ( (byte_40F65CD & 1) == 0 )
  {
    sub_B16FFC(
      &CommonReleaseExtension_CommonReleaseCondOverwriterBeforeClearQuest_TypeInfo,
      *(_QWORD *)&beforeClearQuestId);
    byte_40F65CD = 1;
  }
  v8 = (CommonReleaseExtension_CommonReleaseCondOverwriterBeforeClearQuest_o *)sub_B170CC(
                                                                                 CommonReleaseExtension_CommonReleaseCondOverwriterBeforeClearQuest_TypeInfo,
                                                                                 *(_QWORD *)&beforeClearQuestId,
                                                                                 isCheckResetFlag,
                                                                                 method,
                                                                                 v4);
  CommonReleaseExtension_CommonReleaseCondOverwriterBeforeClearQuest___ctor(
    v8,
    beforeClearQuestId,
    isCheckResetFlag,
    0LL);
  master = CommonReleaseExtension__get_master(v9);
  if ( !master )
    sub_B170D4();
  return CommonReleaseMaster__IsOpen(master, commonReleaseId, (CommonReleaseCondOverwriter_o *)v8, 0, v11);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CommonReleaseExtension__IsOpenConsiderBeforeClearQuestFixed(
        int32_t commonReleaseId,
        int32_t beforeClearQuestId,
        bool isCheckResetFlag,
        const MethodInfo *method)
{
  __int64 v4; // x4
  CommonReleaseExtension_CommonReleaseCondOverwriterBeforeClearQuestFixed_o *v8; // x22
  const MethodInfo *v9; // x0
  CommonReleaseMaster_o *master; // x0
  const MethodInfo *v11; // x4

  if ( (byte_40F65CE & 1) == 0 )
  {
    sub_B16FFC(
      &CommonReleaseExtension_CommonReleaseCondOverwriterBeforeClearQuestFixed_TypeInfo,
      *(_QWORD *)&beforeClearQuestId);
    byte_40F65CE = 1;
  }
  v8 = (CommonReleaseExtension_CommonReleaseCondOverwriterBeforeClearQuestFixed_o *)sub_B170CC(
                                                                                      CommonReleaseExtension_CommonReleaseCondOverwriterBeforeClearQuestFixed_TypeInfo,
                                                                                      *(_QWORD *)&beforeClearQuestId,
                                                                                      isCheckResetFlag,
                                                                                      method,
                                                                                      v4);
  CommonReleaseExtension_CommonReleaseCondOverwriterBeforeClearQuestFixed___ctor(
    v8,
    beforeClearQuestId,
    isCheckResetFlag,
    0LL);
  master = CommonReleaseExtension__get_master(v9);
  if ( !master )
    sub_B170D4();
  return CommonReleaseMaster__IsOpen(master, commonReleaseId, (CommonReleaseCondOverwriter_o *)v8, 0, v11);
}


CommonReleaseMaster_o *__fastcall CommonReleaseExtension__get_master(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  WebViewManager_o *Instance; // x0

  if ( (byte_40F65CC & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_CommonReleaseMaster___, v1);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_40F65CC = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  return (CommonReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
}


void __fastcall CommonReleaseExtension_CommonReleaseCondOverwriterBase___ctor(
        CommonReleaseExtension_CommonReleaseCondOverwriterBase_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall CommonReleaseExtension_CommonReleaseCondOverwriterBase__IsOpen(
        CommonReleaseExtension_CommonReleaseCondOverwriterBase_o *this,
        CommonReleaseEntity_o *entity,
        const MethodInfo *method)
{
  int32_t condId; // w20
  int32_t condType; // w21
  int64_t condNum; // x19

  if ( (byte_40F7144 & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, entity);
    byte_40F7144 = 1;
  }
  if ( !entity )
    sub_B170D4();
  condType = entity->fields.condType;
  condId = entity->fields.condId;
  condNum = entity->fields.condNum;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpen(condType, condId, condNum, 0, 0LL);
}


void __fastcall CommonReleaseExtension_CommonReleaseCondOverwriterBeforeClearQuest___ctor(
        CommonReleaseExtension_CommonReleaseCondOverwriterBeforeClearQuest_o *this,
        int32_t beforeClearQuestId,
        bool isCheckResetFlag,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.beforeClearQuestId = beforeClearQuestId;
  this->fields.isCheckResetFlag = isCheckResetFlag;
}


bool __fastcall CommonReleaseExtension_CommonReleaseCondOverwriterBeforeClearQuest__IsOpen(
        CommonReleaseExtension_CommonReleaseCondOverwriterBeforeClearQuest_o *this,
        CommonReleaseEntity_o *entity,
        const MethodInfo *method)
{
  CommonReleaseExtension_CommonReleaseCondOverwriterBeforeClearQuest_o *v4; // x19
  int32_t condType; // w8
  int32_t condId; // w21
  int32_t beforeClearQuestId; // w20
  _BOOL4 isCheckResetFlag; // w19
  int32_t condNum; // w21
  int32_t v11; // w22
  int32_t v12; // w20
  _BOOL4 v13; // w19
  int32_t v14; // w21
  int32_t v15; // w20
  _BOOL4 v16; // w19

  v4 = this;
  if ( (byte_40F7145 & 1) == 0 )
  {
    this = (CommonReleaseExtension_CommonReleaseCondOverwriterBeforeClearQuest_o *)sub_B16FFC(
                                                                                     &CondType_TypeInfo,
                                                                                     entity);
    byte_40F7145 = 1;
  }
  if ( !entity )
    sub_B170D4();
  condType = entity->fields.condType;
  if ( condType <= 36 )
  {
    if ( condType != 1 )
    {
      if ( condType != 36 )
        return CommonReleaseExtension_CommonReleaseCondOverwriterBase__IsOpen(
                 (CommonReleaseExtension_CommonReleaseCondOverwriterBase_o *)this,
                 entity,
                 method);
LABEL_10:
      condId = entity->fields.condId;
      beforeClearQuestId = v4->fields.beforeClearQuestId;
      isCheckResetFlag = v4->fields.isCheckResetFlag;
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      return !CondType__IsQuestClear_25438860(condId, beforeClearQuestId, isCheckResetFlag, 0LL);
    }
    v14 = entity->fields.condId;
    v15 = v4->fields.beforeClearQuestId;
    v16 = v4->fields.isCheckResetFlag;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__IsQuestClear_25438860(v14, v15, v16, 0LL);
  }
  else
  {
    if ( condType != 46 )
    {
      if ( condType != 47 )
        return CommonReleaseExtension_CommonReleaseCondOverwriterBase__IsOpen(
                 (CommonReleaseExtension_CommonReleaseCondOverwriterBase_o *)this,
                 entity,
                 method);
      goto LABEL_10;
    }
    v11 = entity->fields.condId;
    condNum = entity->fields.condNum;
    v12 = v4->fields.beforeClearQuestId;
    v13 = v4->fields.isCheckResetFlag;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__IsQuestPhaseClear_25491608(v11, condNum, v12, v13, 0LL);
  }
}


void __fastcall CommonReleaseExtension_CommonReleaseCondOverwriterBeforeClearQuestFixed___ctor(
        CommonReleaseExtension_CommonReleaseCondOverwriterBeforeClearQuestFixed_o *this,
        int32_t beforeClearQuestId,
        bool isCheckResetFlag,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.beforeClearQuestId = beforeClearQuestId;
  this->fields.isCheckResetFlag = isCheckResetFlag;
}


bool __fastcall CommonReleaseExtension_CommonReleaseCondOverwriterBeforeClearQuestFixed__IsOpen(
        CommonReleaseExtension_CommonReleaseCondOverwriterBeforeClearQuestFixed_o *this,
        CommonReleaseEntity_o *entity,
        const MethodInfo *method)
{
  CommonReleaseExtension_CommonReleaseCondOverwriterBeforeClearQuestFixed_o *v4; // x19
  int loopCnt; // w8
  int32_t condType; // w9
  CommonReleaseMaster_o *master; // x0
  int32_t condId; // w21
  int32_t beforeClearQuestId; // w20
  _BOOL4 isCheckResetFlag; // w19
  bool IsQuestClear_25438860; // w0
  int32_t v14; // w21
  int32_t v15; // w20
  _BOOL4 v16; // w19
  int32_t v17; // w21
  int32_t v18; // w22
  int32_t v19; // w20
  _BOOL4 v20; // w19
  int32_t condNum; // w21
  int32_t v22; // w22
  int32_t v23; // w20
  _BOOL4 v24; // w19

  v4 = this;
  if ( (byte_40F7146 & 1) == 0 )
  {
    this = (CommonReleaseExtension_CommonReleaseCondOverwriterBeforeClearQuestFixed_o *)sub_B16FFC(
                                                                                          &CondType_TypeInfo,
                                                                                          entity);
    byte_40F7146 = 1;
  }
  if ( !v4->fields.originalCommonReleaseId )
  {
    if ( !entity )
      goto LABEL_36;
    v4->fields.originalCommonReleaseId = entity->fields.id;
  }
  loopCnt = v4->fields.loopCnt;
  if ( loopCnt > 9 )
    return 0;
  if ( !entity )
    goto LABEL_36;
  condType = entity->fields.condType;
  if ( condType <= 36 )
  {
    if ( condType != 1 )
    {
      if ( condType != 36 )
        return CommonReleaseExtension_CommonReleaseCondOverwriterBase__IsOpen(
                 (CommonReleaseExtension_CommonReleaseCondOverwriterBase_o *)this,
                 entity,
                 method);
      condId = entity->fields.condId;
      beforeClearQuestId = v4->fields.beforeClearQuestId;
      isCheckResetFlag = v4->fields.isCheckResetFlag;
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear_25438860 = CondType__IsQuestClear_25438860(condId, beforeClearQuestId, isCheckResetFlag, 0LL);
      return !IsQuestClear_25438860;
    }
    v14 = entity->fields.condId;
    v15 = v4->fields.beforeClearQuestId;
    v16 = v4->fields.isCheckResetFlag;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__IsQuestClear_25438860(v14, v15, v16, 0LL);
  }
  else
  {
    if ( condType != 46 )
    {
      if ( condType != 47 )
      {
        if ( condType == 113 )
        {
          v4->fields.loopCnt = loopCnt + 1;
          master = CommonReleaseExtension__get_master(0LL);
          if ( master )
            return CommonReleaseMaster__IsOpen(
                     master,
                     entity->fields.condId,
                     (CommonReleaseCondOverwriter_o *)v4,
                     0,
                     0LL);
LABEL_36:
          sub_B170D4();
        }
        return CommonReleaseExtension_CommonReleaseCondOverwriterBase__IsOpen(
                 (CommonReleaseExtension_CommonReleaseCondOverwriterBase_o *)this,
                 entity,
                 method);
      }
      v22 = entity->fields.condId;
      condNum = entity->fields.condNum;
      v23 = v4->fields.beforeClearQuestId;
      v24 = v4->fields.isCheckResetFlag;
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear_25438860 = CondType__IsQuestPhaseClear_25491608(v22, condNum, v23, v24, 0LL);
      return !IsQuestClear_25438860;
    }
    v18 = entity->fields.condId;
    v17 = entity->fields.condNum;
    v19 = v4->fields.beforeClearQuestId;
    v20 = v4->fields.isCheckResetFlag;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__IsQuestPhaseClear_25491608(v18, v17, v19, v20, 0LL);
  }
}