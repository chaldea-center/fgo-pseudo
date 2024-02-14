// local variable allocation has failed, the output may be wrong!
bool __fastcall CommonReleaseExtension__IsOpenConsiderBeforeClearQuest(
        int32_t commonReleaseId,
        int32_t beforeClearQuestId,
        bool isCheckResetFlag,
        const MethodInfo *method)
{
  CommonReleaseExtension_CommonReleaseCondOverwriterBeforeClearQuest_o *v7; // x22
  const MethodInfo *v8; // x0
  CommonReleaseMaster_o *master; // x0
  const MethodInfo *v10; // x4

  if ( (byte_421093D & 1) == 0 )
  {
    sub_B0D8A4(
      &CommonReleaseExtension_CommonReleaseCondOverwriterBeforeClearQuest_TypeInfo,
      *(_QWORD *)&beforeClearQuestId);
    byte_421093D = 1;
  }
  v7 = (CommonReleaseExtension_CommonReleaseCondOverwriterBeforeClearQuest_o *)sub_B0D974(
                                                                                 CommonReleaseExtension_CommonReleaseCondOverwriterBeforeClearQuest_TypeInfo,
                                                                                 *(_QWORD *)&beforeClearQuestId,
                                                                                 isCheckResetFlag);
  CommonReleaseExtension_CommonReleaseCondOverwriterBeforeClearQuest___ctor(
    v7,
    beforeClearQuestId,
    isCheckResetFlag,
    0LL);
  master = CommonReleaseExtension__get_master(v8);
  if ( !master )
    sub_B0D97C(0LL);
  return CommonReleaseMaster__IsOpen(master, commonReleaseId, (CommonReleaseCondOverwriter_o *)v7, 0, v10);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CommonReleaseExtension__IsOpenConsiderBeforeClearQuestFixed(
        int32_t commonReleaseId,
        int32_t beforeClearQuestId,
        bool isCheckResetFlag,
        const MethodInfo *method)
{
  CommonReleaseExtension_CommonReleaseCondOverwriterBeforeClearQuestFixed_o *v7; // x22
  const MethodInfo *v8; // x0
  CommonReleaseMaster_o *master; // x0
  const MethodInfo *v10; // x4

  if ( (byte_421093E & 1) == 0 )
  {
    sub_B0D8A4(
      &CommonReleaseExtension_CommonReleaseCondOverwriterBeforeClearQuestFixed_TypeInfo,
      *(_QWORD *)&beforeClearQuestId);
    byte_421093E = 1;
  }
  v7 = (CommonReleaseExtension_CommonReleaseCondOverwriterBeforeClearQuestFixed_o *)sub_B0D974(
                                                                                      CommonReleaseExtension_CommonReleaseCondOverwriterBeforeClearQuestFixed_TypeInfo,
                                                                                      *(_QWORD *)&beforeClearQuestId,
                                                                                      isCheckResetFlag);
  CommonReleaseExtension_CommonReleaseCondOverwriterBeforeClearQuestFixed___ctor(
    v7,
    beforeClearQuestId,
    isCheckResetFlag,
    0LL);
  master = CommonReleaseExtension__get_master(v8);
  if ( !master )
    sub_B0D97C(0LL);
  return CommonReleaseMaster__IsOpen(master, commonReleaseId, (CommonReleaseCondOverwriter_o *)v7, 0, v10);
}


CommonReleaseMaster_o *__fastcall CommonReleaseExtension__get_master(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  WebViewManager_o *Instance; // x0

  if ( (byte_421093C & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_CommonReleaseMaster___, v1);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_421093C = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  return (CommonReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
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

  if ( (byte_4211E8A & 1) == 0 )
  {
    this = (CommonReleaseExtension_CommonReleaseCondOverwriterBase_o *)sub_B0D8A4(&CondType_TypeInfo, entity);
    byte_4211E8A = 1;
  }
  if ( !entity )
    sub_B0D97C(this);
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
  if ( (byte_4211E8B & 1) == 0 )
  {
    this = (CommonReleaseExtension_CommonReleaseCondOverwriterBeforeClearQuest_o *)sub_B0D8A4(
                                                                                     &CondType_TypeInfo,
                                                                                     entity);
    byte_4211E8B = 1;
  }
  if ( !entity )
    sub_B0D97C(this);
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
      return !CondType__IsQuestClear_25410236(condId, beforeClearQuestId, isCheckResetFlag, 0LL);
    }
    v14 = entity->fields.condId;
    v15 = v4->fields.beforeClearQuestId;
    v16 = v4->fields.isCheckResetFlag;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__IsQuestClear_25410236(v14, v15, v16, 0LL);
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
    return CondType__IsQuestPhaseClear_25466004(v11, condNum, v12, v13, 0LL);
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
  int32_t condId; // w21
  int32_t beforeClearQuestId; // w20
  _BOOL4 isCheckResetFlag; // w19
  bool IsQuestClear_25410236; // w0
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
  if ( (byte_4211E8C & 1) == 0 )
  {
    this = (CommonReleaseExtension_CommonReleaseCondOverwriterBeforeClearQuestFixed_o *)sub_B0D8A4(
                                                                                          &CondType_TypeInfo,
                                                                                          entity);
    byte_4211E8C = 1;
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
      IsQuestClear_25410236 = CondType__IsQuestClear_25410236(condId, beforeClearQuestId, isCheckResetFlag, 0LL);
      return !IsQuestClear_25410236;
    }
    v13 = entity->fields.condId;
    v14 = v4->fields.beforeClearQuestId;
    v15 = v4->fields.isCheckResetFlag;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__IsQuestClear_25410236(v13, v14, v15, 0LL);
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
          this = (CommonReleaseExtension_CommonReleaseCondOverwriterBeforeClearQuestFixed_o *)CommonReleaseExtension__get_master(0LL);
          if ( this )
            return CommonReleaseMaster__IsOpen(
                     (CommonReleaseMaster_o *)this,
                     entity->fields.condId,
                     (CommonReleaseCondOverwriter_o *)v4,
                     0,
                     0LL);
LABEL_36:
          sub_B0D97C(this);
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
      IsQuestClear_25410236 = CondType__IsQuestPhaseClear_25466004(v21, condNum, v22, v23, 0LL);
      return !IsQuestClear_25410236;
    }
    v17 = entity->fields.condId;
    v16 = entity->fields.condNum;
    v18 = v4->fields.beforeClearQuestId;
    v19 = v4->fields.isCheckResetFlag;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__IsQuestPhaseClear_25466004(v17, v16, v18, v19, 0LL);
  }
}