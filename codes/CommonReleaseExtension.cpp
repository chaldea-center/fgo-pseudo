bool CommonReleaseExtension__IsFirstOpenAfterQuestCleared(
        int32_t commonReleaseId,
        int32_t asClearedQuestId,
        bool isCheckResetFlag,
        const MethodInfo *method)
{
  __int64 v7; // x22
  const MethodInfo *v8; // x2

  if ( (byte_5938107 & 1) == 0 )
  {
    sub_21FFC50(&CommonReleaseExtension_CommonReleaseCondOverwriterFirstOpenAfterQuestCleared_TypeInfo);
    byte_5938107 = 1;
  }
  v7 = sub_21FFEBC(CommonReleaseExtension_CommonReleaseCondOverwriterFirstOpenAfterQuestCleared_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  *(_DWORD *)(v7 + 28) = asClearedQuestId;
  *(_BYTE *)(v7 + 32) = isCheckResetFlag;
  return CommonReleaseExtension_CommonReleaseCondOverwriterFirstOpenAfterQuestCleared__IsFirstOpenAfterQuestCleared(
           (CommonReleaseExtension_CommonReleaseCondOverwriterFirstOpenAfterQuestCleared_o *)v7,
           commonReleaseId,
           v8);
}


bool CommonReleaseExtension__IsOpenConsiderBeforeClearQuest(
        int32_t commonReleaseId,
        int32_t beforeClearQuestId,
        bool isCheckResetFlag,
        const MethodInfo *method)
{
  __int64 v7; // x22
  const MethodInfo *v8; // x0
  CommonReleaseMaster_o *master; // x0
  __int64 v10; // x1

  if ( (byte_5938106 & 1) == 0 )
  {
    sub_21FFC50(&CommonReleaseExtension_CommonReleaseCondOverwriterBeforeClearQuest_TypeInfo);
    byte_5938106 = 1;
  }
  v7 = sub_21FFEBC(CommonReleaseExtension_CommonReleaseCondOverwriterBeforeClearQuest_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  *(_DWORD *)(v7 + 24) = beforeClearQuestId;
  *(_BYTE *)(v7 + 28) = isCheckResetFlag;
  master = CommonReleaseExtension__get_master(v8);
  if ( !master )
    sub_21FFECC(0, v10);
  return CommonReleaseMaster__IsOpen(master, commonReleaseId, (CommonReleaseCondOverwriter_o *)v7, 0, 0);
}


bool CommonReleaseExtension__IsOpenConsiderEquippedWithTargetCostume(
        int32_t commonReleaseId,
        int32_t svtId,
        int32_t dispLimitCount,
        const MethodInfo *method)
{
  __int64 v7; // x22
  const MethodInfo *v8; // x0
  CommonReleaseMaster_o *master; // x0
  __int64 v10; // x1

  if ( (byte_5938108 & 1) == 0 )
  {
    sub_21FFC50(&CommonReleaseExtension_CommonReleaseCondOverwriterEquippedWithTargetCostume_TypeInfo);
    byte_5938108 = 1;
  }
  v7 = sub_21FFEBC(CommonReleaseExtension_CommonReleaseCondOverwriterEquippedWithTargetCostume_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  *(_DWORD *)(v7 + 24) = svtId;
  *(_DWORD *)(v7 + 28) = dispLimitCount;
  master = CommonReleaseExtension__get_master(v8);
  if ( !master )
    sub_21FFECC(0, v10);
  return CommonReleaseMaster__IsOpen(master, commonReleaseId, (CommonReleaseCondOverwriter_o *)v7, 0, 0);
}


bool CommonReleaseExtension__IsOpenInBattle(
        int32_t commonReleaseId,
        BattleData_o *btlData,
        BattleServantData_o *svtData,
        BattleActionData_o *actData,
        BattleCommandData_o *cmdData,
        const MethodInfo *method)
{
  BattleVoicePlayCondArgs_o *v11; // x24
  const MethodInfo *v12; // x2

  if ( (byte_5938109 & 1) == 0 )
  {
    sub_21FFC50(&BattleVoicePlayCondArgs_TypeInfo);
    byte_5938109 = 1;
  }
  v11 = (BattleVoicePlayCondArgs_o *)sub_21FFEBC(BattleVoicePlayCondArgs_TypeInfo);
  BattleVoicePlayCondArgs___ctor(v11, btlData, svtData, actData, cmdData, 0);
  return CommonReleaseExtension__IsOpenInBattle_48542032(commonReleaseId, v11, v12);
}


// local variable allocation has failed, the output may be wrong!
bool CommonReleaseExtension__IsOpenInBattle_48542032(
        int32_t commonReleaseId,
        BattleVoicePlayCondArgs_o *condArgs,
        const MethodInfo *method)
{
  int32_t v4; // w19
  CommonReleaseMaster_o *master; // x21
  __int64 v6; // x22
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  __int64 v13; // x0
  __int64 v14; // x1

  v4 = commonReleaseId;
  if ( (byte_593810A & 1) == 0 )
  {
    *(_QWORD *)&commonReleaseId = sub_21FFC50(&CommonReleaseExtension_CommonReleaseCondOverWriterInBattle_TypeInfo);
    byte_593810A = 1;
  }
  master = CommonReleaseExtension__get_master(*(const MethodInfo **)&commonReleaseId);
  v6 = sub_21FFEBC(CommonReleaseExtension_CommonReleaseCondOverWriterInBattle_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  *(_QWORD *)(v6 + 24) = condArgs;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v6 + 24), (int32_t)condArgs, v7, v8, v9, v10, v11, v12);
  if ( !master )
    sub_21FFECC(v13, v14);
  return CommonReleaseMaster__IsOpen(master, v4, (CommonReleaseCondOverwriter_o *)v6, 0, 0);
}


CommonReleaseMaster_o *CommonReleaseExtension__get_master(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1

  if ( (byte_5938105 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5938105 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v2);
  return (CommonReleaseMaster_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
}


void CommonReleaseExtension_CommonReleaseCondOverWriterInBattle___ctor(
        CommonReleaseExtension_CommonReleaseCondOverWriterInBattle_o *this,
        BattleVoicePlayCondArgs_o *condArgs,
        const MethodInfo *method)
{
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._condArgs = condArgs;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields._condArgs, (int32_t)condArgs, v5, v6, v7, v8, v9, v10);
}


bool CommonReleaseExtension_CommonReleaseCondOverWriterInBattle__IsOpen(
        CommonReleaseExtension_CommonReleaseCondOverWriterInBattle_o *this,
        CommonReleaseEntity_o *entity,
        const MethodInfo *method)
{
  CommonReleaseExtension_CommonReleaseCondOverWriterInBattle_o *v4; // x20
  int64_t condNum; // x23
  int32_t condType; // w21
  int32_t condId; // w22
  BattleVoicePlayCondArgs_o *condArgs; // x19

  v4 = this;
  if ( (byte_593810E & 1) == 0 )
  {
    this = (CommonReleaseExtension_CommonReleaseCondOverWriterInBattle_o *)sub_21FFC50(&CondType_TypeInfo);
    byte_593810E = 1;
  }
  if ( !entity )
    sub_21FFECC(this, entity);
  condNum = entity->fields.condNum;
  condType = entity->fields.condType;
  condId = entity->fields.condId;
  condArgs = v4->fields._condArgs;
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, entity);
  return CondType__IsOpen(condType, condId, condNum, 0, condArgs, 0);
}


void CommonReleaseExtension_CommonReleaseCondOverwriterBase___ctor(
        CommonReleaseExtension_CommonReleaseCondOverwriterBase_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool CommonReleaseExtension_CommonReleaseCondOverwriterBase__IsOpen(
        CommonReleaseExtension_CommonReleaseCondOverwriterBase_o *this,
        CommonReleaseEntity_o *entity,
        const MethodInfo *method)
{
  int32_t condType; // w20
  int32_t condId; // w21
  int64_t condNum; // x19

  if ( (byte_593810B & 1) == 0 )
  {
    this = (CommonReleaseExtension_CommonReleaseCondOverwriterBase_o *)sub_21FFC50(&CondType_TypeInfo);
    byte_593810B = 1;
  }
  if ( !entity )
    sub_21FFECC(this, entity);
  condType = entity->fields.condType;
  condId = entity->fields.condId;
  condNum = entity->fields.condNum;
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, entity);
  return CondType__IsOpen(condType, condId, condNum, 0, 0, 0);
}


void CommonReleaseExtension_CommonReleaseCondOverwriterBeforeClearQuest___ctor(
        CommonReleaseExtension_CommonReleaseCondOverwriterBeforeClearQuest_o *this,
        int32_t beforeClearQuestId,
        bool isCheckResetFlag,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.beforeClearQuestId = beforeClearQuestId;
  this->fields.isCheckResetFlag = isCheckResetFlag;
}


bool CommonReleaseExtension_CommonReleaseCondOverwriterBeforeClearQuest__IsOpen(
        CommonReleaseExtension_CommonReleaseCondOverwriterBeforeClearQuest_o *this,
        CommonReleaseEntity_o *entity,
        const MethodInfo *method)
{
  CommonReleaseExtension_CommonReleaseCondOverwriterBeforeClearQuest_o *v4; // x19
  int loopCnt; // w8
  int32_t condType; // w9
  int32_t condId; // w20
  int32_t beforeClearQuestId; // w21
  _BOOL4 isCheckResetFlag; // w19
  bool IsQuestClear_47254560; // w0
  int32_t v13; // w20
  int32_t v14; // w21
  _BOOL4 v15; // w19
  int32_t v16; // w22
  _BOOL4 v17; // w19
  int32_t condNum; // w20
  int32_t v19; // w21
  int32_t v20; // w22
  _BOOL4 v21; // w19
  int32_t v22; // w20
  int32_t v23; // w21

  v4 = this;
  if ( (byte_593810C & 1) == 0 )
  {
    this = (CommonReleaseExtension_CommonReleaseCondOverwriterBeforeClearQuest_o *)sub_21FFC50(&CondType_TypeInfo);
    byte_593810C = 1;
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
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, entity);
      IsQuestClear_47254560 = CondType__IsQuestClear_47254560(condId, beforeClearQuestId, isCheckResetFlag, 0);
      return !IsQuestClear_47254560;
    }
    v13 = entity->fields.condId;
    v14 = v4->fields.beforeClearQuestId;
    v15 = v4->fields.isCheckResetFlag;
    if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, entity);
    return CondType__IsQuestClear_47254560(v13, v14, v15, 0);
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
                     0);
LABEL_32:
          sub_21FFECC(this, entity);
        }
        return CommonReleaseExtension_CommonReleaseCondOverwriterBase__IsOpen(
                 (CommonReleaseExtension_CommonReleaseCondOverwriterBase_o *)this,
                 entity,
                 method);
      }
      v16 = v4->fields.beforeClearQuestId;
      v17 = v4->fields.isCheckResetFlag;
      v19 = entity->fields.condId;
      condNum = entity->fields.condNum;
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, entity);
      IsQuestClear_47254560 = CondType__IsQuestPhaseClear_47317140(v19, condNum, v16, v17, 0);
      return !IsQuestClear_47254560;
    }
    v20 = v4->fields.beforeClearQuestId;
    v21 = v4->fields.isCheckResetFlag;
    v23 = entity->fields.condId;
    v22 = entity->fields.condNum;
    if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, entity);
    return CondType__IsQuestPhaseClear_47317140(v23, v22, v20, v21, 0);
  }
}


void CommonReleaseExtension_CommonReleaseCondOverwriterEquippedWithTargetCostume___ctor(
        CommonReleaseExtension_CommonReleaseCondOverwriterEquippedWithTargetCostume_o *this,
        int32_t svtId,
        int32_t dispLimitCount,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._SvtId_k__BackingField = svtId;
  this->fields._DispLimitCount_k__BackingField = dispLimitCount;
}


bool CommonReleaseExtension_CommonReleaseCondOverwriterEquippedWithTargetCostume__IsOpen(
        CommonReleaseExtension_CommonReleaseCondOverwriterEquippedWithTargetCostume_o *this,
        CommonReleaseEntity_o *entity,
        const MethodInfo *method)
{
  int32_t loopCnt; // w8
  int32_t condType; // w9
  int32_t DispLimitCount_k__BackingField; // w8

  loopCnt = this->fields.loopCnt;
  if ( loopCnt > 9 )
    return 0;
  if ( !entity )
LABEL_13:
    sub_21FFECC(this, entity);
  condType = entity->fields.condType;
  if ( condType == 113 )
  {
    this->fields.loopCnt = loopCnt + 1;
    this = (CommonReleaseExtension_CommonReleaseCondOverwriterEquippedWithTargetCostume_o *)CommonReleaseExtension__get_master((const MethodInfo *)this);
    if ( this )
      return CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)this, entity->fields.condId, 0, 0, 0);
    goto LABEL_13;
  }
  if ( condType != 70 )
    return CommonReleaseExtension_CommonReleaseCondOverwriterBase__IsOpen(
             (CommonReleaseExtension_CommonReleaseCondOverwriterBase_o *)this,
             entity,
             method);
  if ( entity->fields.condId != this->fields._SvtId_k__BackingField )
    return 0;
  DispLimitCount_k__BackingField = this->fields._DispLimitCount_k__BackingField;
  if ( DispLimitCount_k__BackingField < 11 )
    ++DispLimitCount_k__BackingField;
  return entity->fields.condNum == DispLimitCount_k__BackingField;
}


int32_t CommonReleaseExtension_CommonReleaseCondOverwriterEquippedWithTargetCostume__get_DispLimitCount(
        CommonReleaseExtension_CommonReleaseCondOverwriterEquippedWithTargetCostume_o *this,
        const MethodInfo *method)
{
  return this->fields._DispLimitCount_k__BackingField;
}


int32_t CommonReleaseExtension_CommonReleaseCondOverwriterEquippedWithTargetCostume__get_SvtId(
        CommonReleaseExtension_CommonReleaseCondOverwriterEquippedWithTargetCostume_o *this,
        const MethodInfo *method)
{
  return this->fields._SvtId_k__BackingField;
}


void CommonReleaseExtension_CommonReleaseCondOverwriterFirstOpenAfterQuestCleared___ctor(
        CommonReleaseExtension_CommonReleaseCondOverwriterFirstOpenAfterQuestCleared_o *this,
        int32_t asClearedQuestId,
        bool isCheckResetFlag,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.asClearedQuestId = asClearedQuestId;
  this->fields.isCheckResetFlag = isCheckResetFlag;
}


bool CommonReleaseExtension_CommonReleaseCondOverwriterFirstOpenAfterQuestCleared__IsFirstOpenAfterQuestCleared(
        CommonReleaseExtension_CommonReleaseCondOverwriterFirstOpenAfterQuestCleared_o *this,
        int32_t commonReleaseId,
        const MethodInfo *method)
{
  CommonReleaseMaster_o *master; // x0
  __int64 v6; // x1
  bool IsOpen; // w8
  bool result; // w0

  master = CommonReleaseExtension__get_master((const MethodInfo *)this);
  if ( !master )
    sub_21FFECC(0, v6);
  IsOpen = CommonReleaseMaster__IsOpen(master, commonReleaseId, (CommonReleaseCondOverwriter_o *)this, 0, 0);
  result = 0;
  if ( IsOpen )
    return this->fields.isNotClearedAsClearedQuest;
  return result;
}


bool CommonReleaseExtension_CommonReleaseCondOverwriterFirstOpenAfterQuestCleared__IsOpen(
        CommonReleaseExtension_CommonReleaseCondOverwriterFirstOpenAfterQuestCleared_o *this,
        CommonReleaseEntity_o *entity,
        const MethodInfo *method)
{
  CommonReleaseExtension_CommonReleaseCondOverwriterFirstOpenAfterQuestCleared_o *v4; // x19
  int loopCnt; // w8
  int32_t condType; // w9
  int32_t condId; // w20
  _BOOL4 isCheckResetFlag; // w21
  int v9; // w8
  bool IsQuestClear_47254560; // w8
  bool result; // w0

  v4 = this;
  if ( (byte_593810D & 1) == 0 )
  {
    this = (CommonReleaseExtension_CommonReleaseCondOverwriterFirstOpenAfterQuestCleared_o *)sub_21FFC50(&CondType_TypeInfo);
    byte_593810D = 1;
  }
  if ( !v4->fields.originalCommonReleaseId )
  {
    if ( !entity )
      goto LABEL_21;
    v4->fields.originalCommonReleaseId = entity->fields.id;
  }
  loopCnt = v4->fields.loopCnt;
  if ( loopCnt > 9 )
    return 0;
  if ( !entity )
LABEL_21:
    sub_21FFECC(this, entity);
  condType = entity->fields.condType;
  if ( condType == 113 )
  {
    v4->fields.loopCnt = loopCnt + 1;
    this = (CommonReleaseExtension_CommonReleaseCondOverwriterFirstOpenAfterQuestCleared_o *)CommonReleaseExtension__get_master((const MethodInfo *)this);
    if ( this )
      return CommonReleaseMaster__IsOpen(
               (CommonReleaseMaster_o *)this,
               entity->fields.condId,
               (CommonReleaseCondOverwriter_o *)v4,
               0,
               0);
    goto LABEL_21;
  }
  if ( condType != 1 )
    return CommonReleaseExtension_CommonReleaseCondOverwriterBase__IsOpen(
             (CommonReleaseExtension_CommonReleaseCondOverwriterBase_o *)this,
             entity,
             method);
  condId = entity->fields.condId;
  isCheckResetFlag = v4->fields.isCheckResetFlag;
  v9 = *(&CondType_TypeInfo->_2.cctor_finished + 1);
  if ( condId == v4->fields.asClearedQuestId )
  {
    if ( !v9 )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, entity);
    IsQuestClear_47254560 = CondType__IsQuestClear_47254560(condId, -1, isCheckResetFlag, 0);
    result = 1;
    v4->fields.isNotClearedAsClearedQuest = !IsQuestClear_47254560;
  }
  else
  {
    if ( !v9 )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, entity);
    return CondType__IsQuestClear_47254560(condId, -1, isCheckResetFlag, 0);
  }
  return result;
}