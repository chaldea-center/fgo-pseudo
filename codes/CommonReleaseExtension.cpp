bool CommonReleaseExtension__IsFirstOpenAfterQuestCleared(
        int32_t commonReleaseId,
        int32_t asClearedQuestId,
        bool isCheckResetFlag,
        const MethodInfo *method)
{
  __int64 v7; // x22
  const MethodInfo *v8; // x2

  if ( (byte_4D3048D & 1) == 0 )
  {
    sub_1C93AD4(&CommonReleaseExtension_CommonReleaseCondOverwriterFirstOpenAfterQuestCleared_TypeInfo);
    byte_4D3048D = 1;
  }
  v7 = sub_1C93D20(CommonReleaseExtension_CommonReleaseCondOverwriterFirstOpenAfterQuestCleared_TypeInfo);
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

  if ( (byte_4D3048C & 1) == 0 )
  {
    sub_1C93AD4(&CommonReleaseExtension_CommonReleaseCondOverwriterBeforeClearQuest_TypeInfo);
    byte_4D3048C = 1;
  }
  v7 = sub_1C93D20(CommonReleaseExtension_CommonReleaseCondOverwriterBeforeClearQuest_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  *(_DWORD *)(v7 + 24) = beforeClearQuestId;
  *(_BYTE *)(v7 + 28) = isCheckResetFlag;
  master = CommonReleaseExtension__get_master(v8);
  if ( !master )
    sub_1C93D2C(0, v10);
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

  if ( (byte_4D3048E & 1) == 0 )
  {
    sub_1C93AD4(&CommonReleaseExtension_CommonReleaseCondOverwriterEquippedWithTargetCostume_TypeInfo);
    byte_4D3048E = 1;
  }
  v7 = sub_1C93D20(CommonReleaseExtension_CommonReleaseCondOverwriterEquippedWithTargetCostume_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  *(_DWORD *)(v7 + 24) = svtId;
  *(_DWORD *)(v7 + 28) = dispLimitCount;
  master = CommonReleaseExtension__get_master(v8);
  if ( !master )
    sub_1C93D2C(0, v10);
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

  if ( (byte_4D3048F & 1) == 0 )
  {
    sub_1C93AD4(&BattleVoicePlayCondArgs_TypeInfo);
    byte_4D3048F = 1;
  }
  v11 = (BattleVoicePlayCondArgs_o *)sub_1C93D20(BattleVoicePlayCondArgs_TypeInfo);
  BattleVoicePlayCondArgs___ctor(v11, btlData, svtData, actData, cmdData, 0);
  return CommonReleaseExtension__IsOpenInBattle_42319836(commonReleaseId, v11, v12);
}


// local variable allocation has failed, the output may be wrong!
bool CommonReleaseExtension__IsOpenInBattle_42319836(
        int32_t commonReleaseId,
        BattleVoicePlayCondArgs_o *condArgs,
        const MethodInfo *method)
{
  int32_t v4; // w19
  CommonReleaseMaster_o *master; // x21
  __int64 v6; // x22
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  __int64 v13; // x0
  __int64 v14; // x1

  v4 = commonReleaseId;
  if ( (byte_4D30490 & 1) == 0 )
  {
    *(_QWORD *)&commonReleaseId = sub_1C93AD4(&CommonReleaseExtension_CommonReleaseCondOverWriterInBattle_TypeInfo);
    byte_4D30490 = 1;
  }
  master = CommonReleaseExtension__get_master(*(const MethodInfo **)&commonReleaseId);
  v6 = sub_1C93D20(CommonReleaseExtension_CommonReleaseCondOverWriterInBattle_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  *(_QWORD *)(v6 + 24) = condArgs;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v6 + 24), (int32_t)condArgs, v7, v8, v9, v10, v11, v12);
  if ( !master )
    sub_1C93D2C(v13, v14);
  return CommonReleaseMaster__IsOpen(master, v4, (CommonReleaseCondOverwriter_o *)v6, 0, 0);
}


CommonReleaseMaster_o *CommonReleaseExtension__get_master(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1

  if ( (byte_4D3048B & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D3048B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1C93D2C(0, v2);
  return (CommonReleaseMaster_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
}


void CommonReleaseExtension_CommonReleaseCondOverWriterInBattle___ctor(
        CommonReleaseExtension_CommonReleaseCondOverWriterInBattle_o *this,
        BattleVoicePlayCondArgs_o *condArgs,
        const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._condArgs = condArgs;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields._condArgs, (int32_t)condArgs, v5, v6, v7, v8, v9, v10);
}


bool CommonReleaseExtension_CommonReleaseCondOverWriterInBattle__IsOpen(
        CommonReleaseExtension_CommonReleaseCondOverWriterInBattle_o *this,
        CommonReleaseEntity_o *entity,
        const MethodInfo *method)
{
  CommonReleaseExtension_CommonReleaseCondOverWriterInBattle_o *v4; // x20
  int32_t condId; // w22
  int32_t condType; // w23
  int64_t condNum; // x21
  BattleVoicePlayCondArgs_o *condArgs; // x19

  v4 = this;
  if ( (byte_4D30494 & 1) == 0 )
  {
    this = (CommonReleaseExtension_CommonReleaseCondOverWriterInBattle_o *)sub_1C93AD4(&CondType_TypeInfo);
    byte_4D30494 = 1;
  }
  if ( !entity )
    sub_1C93D2C(this, entity);
  condType = entity->fields.condType;
  condId = entity->fields.condId;
  condNum = entity->fields.condNum;
  condArgs = v4->fields._condArgs;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
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
  int32_t condId; // w20
  int32_t condType; // w21
  int64_t condNum; // x19

  if ( (byte_4D30491 & 1) == 0 )
  {
    this = (CommonReleaseExtension_CommonReleaseCondOverwriterBase_o *)sub_1C93AD4(&CondType_TypeInfo);
    byte_4D30491 = 1;
  }
  if ( !entity )
    sub_1C93D2C(this, entity);
  condType = entity->fields.condType;
  condId = entity->fields.condId;
  condNum = entity->fields.condNum;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpen(condType, condId, condNum, 0, 0, 0);
}


void CommonReleaseExtension_CommonReleaseCondOverwriterBeforeClearQuest___ctor(
        CommonReleaseExtension_CommonReleaseCondOverwriterBeforeClearQuest_o *this,
        int32_t beforeClearQuestId,
        bool isCheckResetFlag,
        const MethodInfo *method)
{
  bool v6; // w21

  v6 = isCheckResetFlag;
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.beforeClearQuestId = beforeClearQuestId;
  this->fields.isCheckResetFlag = v6;
}


bool CommonReleaseExtension_CommonReleaseCondOverwriterBeforeClearQuest__IsOpen(
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
  bool IsQuestClear_41038904; // w0
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
  if ( (byte_4D30492 & 1) == 0 )
  {
    this = (CommonReleaseExtension_CommonReleaseCondOverwriterBeforeClearQuest_o *)sub_1C93AD4(&CondType_TypeInfo);
    byte_4D30492 = 1;
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
      IsQuestClear_41038904 = CondType__IsQuestClear_41038904(condId, beforeClearQuestId, isCheckResetFlag, 0);
      return !IsQuestClear_41038904;
    }
    v13 = entity->fields.condId;
    v14 = v4->fields.beforeClearQuestId;
    v15 = v4->fields.isCheckResetFlag;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__IsQuestClear_41038904(v13, v14, v15, 0);
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
          sub_1C93D2C(this, entity);
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
      IsQuestClear_41038904 = CondType__IsQuestPhaseClear_41100720(v21, condNum, v22, v23, 0);
      return !IsQuestClear_41038904;
    }
    v17 = entity->fields.condId;
    v16 = entity->fields.condNum;
    v18 = v4->fields.beforeClearQuestId;
    v19 = v4->fields.isCheckResetFlag;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__IsQuestPhaseClear_41100720(v17, v16, v18, v19, 0);
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
    sub_1C93D2C(this, entity);
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
  bool v6; // w21

  v6 = isCheckResetFlag;
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.asClearedQuestId = asClearedQuestId;
  this->fields.isCheckResetFlag = v6;
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
    sub_1C93D2C(0, v6);
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
  int32_t asClearedQuestId; // w21
  _BOOL4 isCheckResetFlag; // w22
  bool IsQuestClear_41038904; // w0
  bool v11; // w8

  v4 = this;
  if ( (byte_4D30493 & 1) == 0 )
  {
    this = (CommonReleaseExtension_CommonReleaseCondOverwriterFirstOpenAfterQuestCleared_o *)sub_1C93AD4(&CondType_TypeInfo);
    byte_4D30493 = 1;
  }
  if ( !v4->fields.originalCommonReleaseId )
  {
    if ( !entity )
      goto LABEL_19;
    v4->fields.originalCommonReleaseId = entity->fields.id;
  }
  loopCnt = v4->fields.loopCnt;
  if ( loopCnt > 9 )
    return 0;
  if ( !entity )
LABEL_19:
    sub_1C93D2C(this, entity);
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
    goto LABEL_19;
  }
  if ( condType == 1 )
  {
    condId = entity->fields.condId;
    asClearedQuestId = v4->fields.asClearedQuestId;
    isCheckResetFlag = v4->fields.isCheckResetFlag;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    IsQuestClear_41038904 = CondType__IsQuestClear_41038904(condId, -1, isCheckResetFlag, 0);
    if ( condId == asClearedQuestId )
    {
      v11 = !IsQuestClear_41038904;
      IsQuestClear_41038904 = 1;
      v4->fields.isNotClearedAsClearedQuest = v11;
    }
    return IsQuestClear_41038904;
  }
  return CommonReleaseExtension_CommonReleaseCondOverwriterBase__IsOpen(
           (CommonReleaseExtension_CommonReleaseCondOverwriterBase_o *)this,
           entity,
           method);
}