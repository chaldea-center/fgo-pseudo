bool __fastcall CommonReleaseExtension__IsOpenConsiderBeforeClearQuest(
        int32_t commonReleaseId,
        int32_t beforeClearQuestId,
        bool isCheckResetFlag,
        const MethodInfo *method)
{
  CommonReleaseExtension_CommonReleaseCondOverwriterBeforeClearQuest_o *v7; // x22
  const MethodInfo *v8; // x0
  CommonReleaseMaster_o *master; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x4

  if ( (byte_42E4D63 & 1) == 0 )
  {
    sub_B5D5C4(
      &CommonReleaseExtension_CommonReleaseCondOverwriterBeforeClearQuest_TypeInfo,
      beforeClearQuestId,
      isCheckResetFlag,
      method);
    byte_42E4D63 = 1;
  }
  v7 = (CommonReleaseExtension_CommonReleaseCondOverwriterBeforeClearQuest_o *)sub_B5D694(CommonReleaseExtension_CommonReleaseCondOverwriterBeforeClearQuest_TypeInfo);
  CommonReleaseExtension_CommonReleaseCondOverwriterBeforeClearQuest___ctor(
    v7,
    beforeClearQuestId,
    isCheckResetFlag,
    0LL);
  master = CommonReleaseExtension__get_master(v8);
  if ( !master )
    sub_B5D69C(0LL, v10);
  return CommonReleaseMaster__IsOpen(master, commonReleaseId, (CommonReleaseCondOverwriter_o *)v7, 0, v11);
}


CommonReleaseMaster_o *__fastcall CommonReleaseExtension__get_master(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  WebViewManager_o *Instance; // x0
  __int64 v8; // x1

  if ( (byte_42E4D62 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_CommonReleaseMaster___, v1, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4, v5, v6);
    byte_42E4D62 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v8);
  return (CommonReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
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
  __int64 v3; // x3
  int32_t condId; // w20
  int32_t condType; // w21
  int64_t condNum; // x19

  if ( (byte_42E6CFC & 1) == 0 )
  {
    this = (CommonReleaseExtension_CommonReleaseCondOverwriterBase_o *)sub_B5D5C4(
                                                                         &CondType_TypeInfo,
                                                                         (_DWORD)entity,
                                                                         (_DWORD)method,
                                                                         v3);
    byte_42E6CFC = 1;
  }
  if ( !entity )
    sub_B5D69C(this, entity);
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
  __int64 v3; // x3
  CommonReleaseExtension_CommonReleaseCondOverwriterBeforeClearQuest_o *v5; // x19
  int loopCnt; // w8
  int32_t condType; // w9
  int32_t condId; // w21
  int32_t beforeClearQuestId; // w20
  _BOOL4 isCheckResetFlag; // w19
  bool IsQuestClear_25877652; // w0
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

  v5 = this;
  if ( (byte_42E6CFD & 1) == 0 )
  {
    this = (CommonReleaseExtension_CommonReleaseCondOverwriterBeforeClearQuest_o *)sub_B5D5C4(
                                                                                     &CondType_TypeInfo,
                                                                                     (_DWORD)entity,
                                                                                     (_DWORD)method,
                                                                                     v3);
    byte_42E6CFD = 1;
  }
  if ( !v5->fields.originalCommonReleaseId )
  {
    if ( !entity )
      goto LABEL_36;
    v5->fields.originalCommonReleaseId = entity->fields.id;
  }
  loopCnt = v5->fields.loopCnt;
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
      beforeClearQuestId = v5->fields.beforeClearQuestId;
      isCheckResetFlag = v5->fields.isCheckResetFlag;
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear_25877652 = CondType__IsQuestClear_25877652(condId, beforeClearQuestId, isCheckResetFlag, 0LL);
      return !IsQuestClear_25877652;
    }
    v14 = entity->fields.condId;
    v15 = v5->fields.beforeClearQuestId;
    v16 = v5->fields.isCheckResetFlag;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__IsQuestClear_25877652(v14, v15, v16, 0LL);
  }
  else
  {
    if ( condType != 46 )
    {
      if ( condType != 47 )
      {
        if ( condType == 113 )
        {
          v5->fields.loopCnt = loopCnt + 1;
          this = (CommonReleaseExtension_CommonReleaseCondOverwriterBeforeClearQuest_o *)CommonReleaseExtension__get_master(0LL);
          if ( this )
            return CommonReleaseMaster__IsOpen(
                     (CommonReleaseMaster_o *)this,
                     entity->fields.condId,
                     (CommonReleaseCondOverwriter_o *)v5,
                     0,
                     0LL);
LABEL_36:
          sub_B5D69C(this, entity);
        }
        return CommonReleaseExtension_CommonReleaseCondOverwriterBase__IsOpen(
                 (CommonReleaseExtension_CommonReleaseCondOverwriterBase_o *)this,
                 entity,
                 method);
      }
      v22 = entity->fields.condId;
      condNum = entity->fields.condNum;
      v23 = v5->fields.beforeClearQuestId;
      v24 = v5->fields.isCheckResetFlag;
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear_25877652 = CondType__IsQuestPhaseClear_25933948(v22, condNum, v23, v24, 0LL);
      return !IsQuestClear_25877652;
    }
    v18 = entity->fields.condId;
    v17 = entity->fields.condNum;
    v19 = v5->fields.beforeClearQuestId;
    v20 = v5->fields.isCheckResetFlag;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__IsQuestPhaseClear_25933948(v18, v17, v19, v20, 0LL);
  }
}