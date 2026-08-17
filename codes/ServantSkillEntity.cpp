void ServantSkillEntity___ctor(ServantSkillEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5971300 & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_string___ctor__);
    byte_5971300 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3F0E590 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *ServantSkillEntity__CreatePK(int32_t svtId, int32_t num, int32_t priority, const MethodInfo *method)
{
  if ( (byte_59712F7 & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_59712F7 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           svtId,
           num,
           priority,
           (const MethodInfo_38548C4 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *ServantSkillEntity__CreatePrimaryKey(ServantSkillEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return ServantSkillEntity__CreatePK(this->fields.svtId, this->fields.num, this->fields.priority, v2);
}


// local variable allocation has failed, the output may be wrong!
System_Nullable_ValueTuple_FuncList_TYPE__int___o ServantSkillEntity__GetFriendPointUpTypeVal(
        ServantSkillEntity_o *this,
        int32_t skillLv,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  System_Nullable_ValueTuple_FuncList_TYPE__int___o v7; // x0

  if ( (byte_59712FD & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    byte_59712FD = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&skillLv);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_SkillLvMaster___);
  if ( !Master_object )
    sub_2213CDC(0, v6);
  *(_QWORD *)&v7.fields.hasValue = SkillLvMaster__GetEntity(
                                     (SkillLvMaster_o *)Master_object,
                                     this->fields.skillId,
                                     skillLv,
                                     0);
  v7.fields.value.fields.Item2 = 0;
  if ( *(_QWORD *)&v7.fields.hasValue )
    return SkillLvEntity__GetFriendPointUpTypeVal(*(SkillLvEntity_o **)&v7.fields.hasValue, 0);
  return v7;
}


// local variable allocation has failed, the output may be wrong!
int32_t ServantSkillEntity__GetStrengthStatus(
        ServantSkillEntity_o *this,
        int32_t beforeClearQuestId,
        const MethodInfo *method)
{
  int StrengthStatusReleaseId; // w0
  bool IsOpenConsiderBeforeClearQuest; // w8
  int32_t result; // w0

  StrengthStatusReleaseId = ServantSkillEntity__GetStrengthStatusReleaseId(
                              this,
                              *(const MethodInfo **)&beforeClearQuestId);
  if ( StrengthStatusReleaseId < 1 )
    return this->fields.strengthStatus;
  IsOpenConsiderBeforeClearQuest = CommonReleaseExtension__IsOpenConsiderBeforeClearQuest(
                                     StrengthStatusReleaseId,
                                     beforeClearQuestId,
                                     0,
                                     0);
  result = 0;
  if ( IsOpenConsiderBeforeClearQuest )
    return this->fields.strengthStatus;
  return result;
}


int32_t ServantSkillEntity__GetStrengthStatusReleaseId(ServantSkillEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59712FE & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_24994/*"strengthStatusReleaseId"*/);
    byte_59712FE = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_24994/*"strengthStatusReleaseId"*/, 0, 0);
}


bool ServantSkillEntity__IsFlagOn(ServantSkillEntity_o *this, int32_t check, const MethodInfo *method)
{
  return (this->fields.flag & check) != 0;
}


bool ServantSkillEntity__IsForceReleaseSkillRankUp(ServantSkillEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59712FF & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_21936/*"isForceReleaseSkillRankUp"*/);
    byte_59712FF = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21936/*"isForceReleaseSkillRankUp"*/, 0, 0) == 1;
}


void ServantSkillEntity__getAcquisitionMethodExplanation(
        ServantSkillEntity_o *this,
        System_String_o **title,
        System_String_o **explanation,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  Il2CppObject *Entity; // x0
  __int64 v10; // x1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_String_o *EffectTitle; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  __int64 v24; // x1
  System_String_o *v25; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  __int64 v32; // x1
  System_String_o *v33; // x0
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  System_String_o *v40; // x21
  int32_t condLv; // w22
  System_String_o *v42; // x0
  System_String_o *v43; // x0
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  __int64 v50; // x1
  System_String_o *v51; // x0
  System_String_o *v52; // x2
  System_String_o *v53; // x3
  int32_t v54; // w4
  int32_t v55; // w5
  bool v56; // w6
  bool v57; // w7
  System_String_o *v58; // x21
  int32_t condLimitCount; // w22
  System_String_o *v60; // x0
  System_String_o *v61; // x0
  System_String_o *v62; // x2
  System_String_o *v63; // x3
  int32_t v64; // w4
  int32_t v65; // w5
  bool v66; // w6
  bool v67; // w7
  __int64 v68; // x1
  System_String_o *v69; // x0
  System_String_o *v70; // x2
  System_String_o *v71; // x3
  int32_t v72; // w4
  int32_t v73; // w5
  bool v74; // w6
  bool v75; // w7
  System_String_o *v76; // x21
  int32_t condQuestId; // w20
  System_String_o *v78; // x0
  System_String_o *v79; // x0
  System_String_o *v80; // x2
  System_String_o *v81; // x3
  int32_t v82; // w4
  int32_t v83; // w5
  bool v84; // w6
  bool v85; // w7
  __int64 v86; // x1
  System_String_o *v87; // x1
  System_String_o *v88; // x2
  System_String_o *v89; // x3
  int32_t v90; // w4
  int32_t v91; // w5
  bool v92; // w6
  bool v93; // w7
  LocalizationManager_c *v94; // x0
  System_String_o *unknownNameText; // x1

  if ( (byte_59712FB & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_2213A60(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_43/*"\n"*/);
    sub_2213A60(&StringLiteral_3878/*"COND_TYPE_TITLE"*/);
    sub_2213A60(&StringLiteral_3868/*"COND_TYPE_NONE"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_59712FB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_SkillMaster___)) == 0 )
  {
    sub_2213CDC(Instance, v8);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             this->fields.skillId,
             (const MethodInfo_3F10B30 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( !Entity )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v10);
    if ( !byte_596B976 )
    {
      sub_2213A60(&LocalizationManager_TypeInfo);
      byte_596B976 = 1;
    }
    v94 = LocalizationManager_TypeInfo;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v10);
      v94 = LocalizationManager_TypeInfo;
    }
    unknownNameText = v94->static_fields->unknownNameText;
    *title = unknownNameText;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)title, (int32_t)unknownNameText, v11, v12, v13, v14, v15, v16);
    v87 = (System_String_o *)StringLiteral_1/*""*/;
    goto LABEL_37;
  }
  EffectTitle = SkillEntity__getEffectTitle((SkillEntity_o *)Entity, 0, 0);
  *title = EffectTitle;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)title, (int32_t)EffectTitle, v18, v19, v20, v21, v22, v23);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v24);
  v25 = LocalizationManager__Get((System_String_o *)StringLiteral_3878/*"COND_TYPE_TITLE"*/, 0);
  *explanation = v25;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)explanation, (int32_t)v25, v26, v27, v28, v29, v30, v31);
  if ( this->fields.condLv >= 1 )
  {
    if ( System_String__op_Inequality(*explanation, (System_String_o *)StringLiteral_1/*""*/, 0) )
    {
      v33 = System_String__Concat_75651716(*explanation, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
      *explanation = v33;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)explanation, (int32_t)v33, v34, v35, v36, v37, v38, v39);
    }
    v40 = *explanation;
    condLv = this->fields.condLv;
    if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v32);
    v42 = CondType__OpenConditionTextServantLevel(condLv, (System_String_o *)StringLiteral_1/*""*/, 0);
    v43 = System_String__Concat_75651716(v40, v42, 0);
    *explanation = v43;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)explanation, (int32_t)v43, v44, v45, v46, v47, v48, v49);
  }
  if ( this->fields.condLimitCount >= 1 )
  {
    if ( System_String__op_Inequality(*explanation, (System_String_o *)StringLiteral_1/*""*/, 0) )
    {
      v51 = System_String__Concat_75651716(*explanation, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
      *explanation = v51;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)explanation, (int32_t)v51, v52, v53, v54, v55, v56, v57);
    }
    v58 = *explanation;
    condLimitCount = this->fields.condLimitCount;
    if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v50);
    v60 = CondType__OpenConditionTextServantLimit(condLimitCount, (System_String_o *)StringLiteral_1/*""*/, 0);
    v61 = System_String__Concat_75651716(v58, v60, 0);
    *explanation = v61;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)explanation, (int32_t)v61, v62, v63, v64, v65, v66, v67);
  }
  if ( this->fields.condQuestId >= 1 )
  {
    if ( System_String__op_Inequality(*explanation, (System_String_o *)StringLiteral_1/*""*/, 0) )
    {
      v69 = System_String__Concat_75651716(*explanation, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
      *explanation = v69;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)explanation, (int32_t)v69, v70, v71, v72, v73, v74, v75);
    }
    v76 = *explanation;
    condQuestId = this->fields.condQuestId;
    if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v68);
    v78 = CondType__OpenConditionTextQuestClear(condQuestId, (System_String_o *)StringLiteral_1/*""*/, 0);
    v79 = System_String__Concat_75651716(v76, v78, 0);
    *explanation = v79;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)explanation, (int32_t)v79, v80, v81, v82, v83, v84, v85);
  }
  if ( System_String__op_Equality(*explanation, (System_String_o *)StringLiteral_1/*""*/, 0) )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v86);
    v87 = LocalizationManager__Get((System_String_o *)StringLiteral_3868/*"COND_TYPE_NONE"*/, 0);
LABEL_37:
    *explanation = v87;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)explanation, (int32_t)v87, v88, v89, v90, v91, v92, v93);
  }
}


void ServantSkillEntity__getEffectExplanation(
        ServantSkillEntity_o *this,
        int32_t *charge,
        System_String_o **title,
        System_String_o **explanation,
        int32_t skillLv,
        bool isEquip,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v14; // x1
  Il2CppObject *Entity; // x0
  __int64 v16; // x1
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  SkillEntity_o *v23; // x24
  int32_t v24; // w1
  int32_t EffectChargeTurn; // w0
  LocalizationManager_c *v26; // x0
  System_String_o *unknownNameText; // x1
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  System_String_o *EffectExplanation; // x1
  System_String_o *EffectTitle; // x0
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7

  if ( (byte_59712FA & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_2213A60(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_59712FA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_SkillMaster___)) == 0 )
  {
    sub_2213CDC(Instance, v14);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             this->fields.skillId,
             (const MethodInfo_3F10B30 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( Entity )
  {
    v23 = (SkillEntity_o *)Entity;
    if ( isEquip )
    {
      v24 = 0;
      EffectChargeTurn = -1;
    }
    else
    {
      EffectChargeTurn = SkillEntity__getEffectChargeTurn((SkillEntity_o *)Entity, skillLv, 0);
      v24 = skillLv;
    }
    *charge = EffectChargeTurn;
    EffectTitle = SkillEntity__getEffectTitle(v23, v24, 0);
    *title = EffectTitle;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)title, (int32_t)EffectTitle, v36, v37, v38, v39, v40, v41);
    EffectExplanation = SkillEntity__getEffectExplanation(v23, skillLv, 0);
  }
  else
  {
    *charge = -1;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v16);
    if ( !byte_596B976 )
    {
      sub_2213A60(&LocalizationManager_TypeInfo);
      byte_596B976 = 1;
    }
    v26 = LocalizationManager_TypeInfo;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v16);
      v26 = LocalizationManager_TypeInfo;
    }
    unknownNameText = v26->static_fields->unknownNameText;
    *title = unknownNameText;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)title, (int32_t)unknownNameText, v17, v18, v19, v20, v21, v22);
    EffectExplanation = (System_String_o *)StringLiteral_1/*""*/;
  }
  *explanation = EffectExplanation;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)explanation, (int32_t)EffectExplanation, v28, v29, v30, v31, v32, v33);
}


int32_t ServantSkillEntity__getServantID(ServantSkillEntity_o *this, const MethodInfo *method)
{
  return this->fields.svtId;
}


int32_t ServantSkillEntity__getServantIdx(ServantSkillEntity_o *this, const MethodInfo *method)
{
  return this->fields.num;
}


int32_t ServantSkillEntity__getSkillId(ServantSkillEntity_o *this, const MethodInfo *method)
{
  return this->fields.skillId;
}


System_String_o *ServantSkillEntity__getSkillName(ServantSkillEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *Entity; // x0
  __int64 v6; // x1
  LocalizationManager_c *v8; // x0

  if ( (byte_59712FC & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_2213A60(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59712FC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_SkillMaster___)) == 0 )
  {
    sub_2213CDC(Instance, v4);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             this->fields.skillId,
             (const MethodInfo_3F10B30 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( Entity )
    return SkillEntity__getName((SkillEntity_o *)Entity, 0);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v6);
  if ( !byte_596B976 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    byte_596B976 = 1;
  }
  v8 = LocalizationManager_TypeInfo;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v6);
    v8 = LocalizationManager_TypeInfo;
  }
  return v8->static_fields->unknownNameText;
}


bool ServantSkillEntity__isEnable(ServantSkillEntity_o *this, bool isFinishedAt, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *Entity; // x0

  if ( (byte_59712F8 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventMaster___);
    sub_2213A60(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59712F8 = 1;
  }
  if ( this->fields.eventId < 1 )
  {
LABEL_8:
    LOBYTE(Entity) = 1;
    return (char)Entity;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventMaster___)) == 0 )
  {
    sub_2213CDC(Instance, v6);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             this->fields.eventId,
             (const MethodInfo_3F10B30 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( Entity )
  {
    if ( !EventEntity__IsSkillRelease((EventEntity_o *)Entity, isFinishedAt, 0) )
    {
      LOBYTE(Entity) = 0;
      return (char)Entity;
    }
    goto LABEL_8;
  }
  return (char)Entity;
}


bool ServantSkillEntity__isUse(
        ServantSkillEntity_o *this,
        int64_t userId,
        int32_t svtLv,
        int32_t limitCount,
        int32_t dispLimitCount,
        int32_t beforeClearQuestId,
        int32_t specificLimitCount,
        int64_t userSvtId,
        const MethodInfo *method)
{
  bool IsQuestPhaseClear; // w24
  Il2CppObject *Instance; // x0
  __int64 v19; // x1
  int condQuestId; // w25
  int32_t condQuestPhase; // w26
  const MethodInfo *v23; // [xsp+8h] [xbp-58h]

  if ( (byte_59712F9 & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantSkillReleaseMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59712F9 = 1;
  }
  if ( this->fields.condLv <= svtLv && this->fields.condLimitCount <= limitCount )
  {
    condQuestId = this->fields.condQuestId;
    if ( condQuestId < 1 )
    {
      IsQuestPhaseClear = 1;
    }
    else
    {
      condQuestPhase = this->fields.condQuestPhase;
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, userId);
      IsQuestPhaseClear = CondType__IsQuestPhaseClear(userId, condQuestId, condQuestPhase, beforeClearQuestId, 0, 0);
    }
  }
  else
  {
    IsQuestPhaseClear = 0;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantSkillReleaseMaster___)) == 0 )
  {
    sub_2213CDC(Instance, v19);
  }
  return ServantSkillReleaseMaster__isUse(
           (ServantSkillReleaseMaster_o *)Instance,
           this->fields.svtId,
           this->fields.num,
           this->fields.priority,
           dispLimitCount,
           beforeClearQuestId,
           IsQuestPhaseClear,
           specificLimitCount,
           userSvtId,
           v23);
}