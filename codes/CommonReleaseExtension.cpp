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

  if ( (byte_4387586 & 1) == 0 )
  {
    sub_B775C4(&CommonReleaseExtension_CommonReleaseCondOverwriterBeforeClearQuest_TypeInfo);
    byte_4387586 = 1;
  }
  v7 = (CommonReleaseExtension_CommonReleaseCondOverwriterBeforeClearQuest_o *)sub_B77694(CommonReleaseExtension_CommonReleaseCondOverwriterBeforeClearQuest_TypeInfo);
  CommonReleaseExtension_CommonReleaseCondOverwriterBeforeClearQuest___ctor(
    v7,
    beforeClearQuestId,
    isCheckResetFlag,
    0LL);
  master = CommonReleaseExtension__get_master(v8);
  if ( !master )
    sub_B7769C(0LL, v10);
  return CommonReleaseMaster__IsOpen(master, commonReleaseId, (CommonReleaseCondOverwriter_o *)v7, 0, v11);
}


CommonReleaseMaster_o *__fastcall CommonReleaseExtension__get_master(const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v2; // x1

  if ( (byte_4387585 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4387585 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B7769C(0LL, v2);
  return (CommonReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
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

  if ( (byte_43890A8 & 1) == 0 )
  {
    this = (CommonReleaseExtension_CommonReleaseCondOverwriterBase_o *)sub_B775C4(&CondType_TypeInfo);
    byte_43890A8 = 1;
  }
  if ( !entity )
    sub_B7769C(this, entity);
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
  int loopCnt; // w8
  int32_t condType; // w9
  int32_t condId; // w21
  int32_t beforeClearQuestId; // w20
  _BOOL4 isCheckResetFlag; // w19
  bool IsQuestClear_24699280; // w0
  int32_t v13; // w21
  int32_t v14; // w20
  _BOOL4 v15; // w19
  int32_t v16; // w21
  int32_t v17; // w22
  int32_t v18; // w20
  _BOOL4 v19; // w19
  int32_t condNum; // w21
  int32_t v21; // w22
  int32_t v22; // w20
  _BOOL4 v23; // w19

  v4 = this;
  if ( (byte_43890A9 & 1) == 0 )
  {
    this = (CommonReleaseExtension_CommonReleaseCondOverwriterBeforeClearQuest_o *)sub_B775C4(&CondType_TypeInfo);
    byte_43890A9 = 1;
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
      IsQuestClear_24699280 = CondType__IsQuestClear_24699280(condId, beforeClearQuestId, isCheckResetFlag, 0LL);
      return !IsQuestClear_24699280;
    }
    v13 = entity->fields.condId;
    v14 = v4->fields.beforeClearQuestId;
    v15 = v4->fields.isCheckResetFlag;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__IsQuestClear_24699280(v13, v14, v15, 0LL);
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
          this = (CommonReleaseExtension_CommonReleaseCondOverwriterBeforeClearQuest_o *)CommonReleaseExtension__get_master(0LL);
          if ( this )
            return CommonReleaseMaster__IsOpen(
                     (CommonReleaseMaster_o *)this,
                     entity->fields.condId,
                     (CommonReleaseCondOverwriter_o *)v4,
                     0,
                     0LL);
LABEL_36:
          sub_B7769C(this, entity);
        }
        return CommonReleaseExtension_CommonReleaseCondOverwriterBase__IsOpen(
                 (CommonReleaseExtension_CommonReleaseCondOverwriterBase_o *)this,
                 entity,
                 method);
      }
      v21 = entity->fields.condId;
      condNum = entity->fields.condNum;
      v22 = v4->fields.beforeClearQuestId;
      v23 = v4->fields.isCheckResetFlag;
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear_24699280 = CondType__IsQuestPhaseClear_24756852(v21, condNum, v22, v23, 0LL);
      return !IsQuestClear_24699280;
    }
    v17 = entity->fields.condId;
    v16 = entity->fields.condNum;
    v18 = v4->fields.beforeClearQuestId;
    v19 = v4->fields.isCheckResetFlag;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__IsQuestPhaseClear_24756852(v17, v16, v18, v19, 0LL);
  }
}