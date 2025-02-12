// local variable allocation has failed, the output may be wrong!
bool __fastcall CommonReleaseExtension__IsOpenConsiderBeforeClearQuest(
        int32_t commonReleaseId,
        int32_t beforeClearQuestId,
        bool isCheckResetFlag,
        const MethodInfo *method)
{
  __int64 v7; // x22
  const MethodInfo *v8; // x0
  CommonReleaseMaster_o *master; // x0
  __int64 v10; // x1

  if ( (byte_4BC75AD & 1) == 0 )
  {
    sub_1C1ABD4(
      &CommonReleaseExtension_CommonReleaseCondOverwriterBeforeClearQuest_TypeInfo,
      *(_QWORD *)&beforeClearQuestId);
    byte_4BC75AD = 1;
  }
  v7 = sub_1C1AE20(CommonReleaseExtension_CommonReleaseCondOverwriterBeforeClearQuest_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 24) = beforeClearQuestId;
  *(_BYTE *)(v7 + 28) = isCheckResetFlag;
  master = CommonReleaseExtension__get_master(v8);
  if ( !master )
    sub_1C1AE30(0LL, v10);
  return CommonReleaseMaster__IsOpen(master, commonReleaseId, (CommonReleaseCondOverwriter_o *)v7, 0, 0LL);
}


CommonReleaseMaster_o *__fastcall CommonReleaseExtension__get_master(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4BC75AC & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_CommonReleaseMaster___, v1);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_4BC75AC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1C1AE30(0LL, v4);
  return (CommonReleaseMaster_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
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

  if ( (byte_4BC75AE & 1) == 0 )
  {
    this = (CommonReleaseExtension_CommonReleaseCondOverwriterBase_o *)sub_1C1ABD4(&CondType_TypeInfo, entity);
    byte_4BC75AE = 1;
  }
  if ( !entity )
    sub_1C1AE30(this, entity);
  condType = entity->fields.condType;
  condId = entity->fields.condId;
  condNum = entity->fields.condNum;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpen(condType, condId, condNum, 0, 0LL, 0LL);
}


void __fastcall CommonReleaseExtension_CommonReleaseCondOverwriterBeforeClearQuest___ctor(
        CommonReleaseExtension_CommonReleaseCondOverwriterBeforeClearQuest_o *this,
        int32_t beforeClearQuestId,
        bool isCheckResetFlag,
        const MethodInfo *method)
{
  bool v6; // w21

  v6 = isCheckResetFlag;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.beforeClearQuestId = beforeClearQuestId;
  this->fields.isCheckResetFlag = v6;
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
  bool IsQuestClear_38787928; // w0
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
  if ( (byte_4BC75AF & 1) == 0 )
  {
    this = (CommonReleaseExtension_CommonReleaseCondOverwriterBeforeClearQuest_o *)sub_1C1ABD4(
                                                                                     &CondType_TypeInfo,
                                                                                     entity);
    byte_4BC75AF = 1;
  }
  if ( !v4->fields.originalCommonReleaseId )
  {
    if ( !entity )
      goto LABEL_32;
    v4->fields.originalCommonReleaseId = entity->fields.id;
  }
  loopCnt = v4->fields.loopCnt;
  if ( loopCnt > 9 )
    return 0;
  if ( !entity )
    goto LABEL_32;
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
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear_38787928 = CondType__IsQuestClear_38787928(condId, beforeClearQuestId, isCheckResetFlag, 0LL);
      return !IsQuestClear_38787928;
    }
    v13 = entity->fields.condId;
    v14 = v4->fields.beforeClearQuestId;
    v15 = v4->fields.isCheckResetFlag;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__IsQuestClear_38787928(v13, v14, v15, 0LL);
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
          this = (CommonReleaseExtension_CommonReleaseCondOverwriterBeforeClearQuest_o *)CommonReleaseExtension__get_master((const MethodInfo *)this);
          if ( this )
            return CommonReleaseMaster__IsOpen(
                     (CommonReleaseMaster_o *)this,
                     entity->fields.condId,
                     (CommonReleaseCondOverwriter_o *)v4,
                     0,
                     0LL);
LABEL_32:
          sub_1C1AE30(this, entity);
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
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear_38787928 = CondType__IsQuestPhaseClear_38845668(v21, condNum, v22, v23, 0LL);
      return !IsQuestClear_38787928;
    }
    v17 = entity->fields.condId;
    v16 = entity->fields.condNum;
    v18 = v4->fields.beforeClearQuestId;
    v19 = v4->fields.isCheckResetFlag;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__IsQuestPhaseClear_38845668(v17, v16, v18, v19, 0LL);
  }
}