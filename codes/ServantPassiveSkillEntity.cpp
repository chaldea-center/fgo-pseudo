void __fastcall ServantPassiveSkillEntity___ctor(ServantPassiveSkillEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EAA0B & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)method, v2, v3);
    byte_42EAA0B = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall ServantPassiveSkillEntity__CreatePK(
        int32_t svtId,
        int32_t num,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_42EAA06 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, num, priority, method);
    byte_42EAA06 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           svtId,
           num,
           priority,
           (const MethodInfo_1AE3440 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall ServantPassiveSkillEntity__CreatePrimaryKey(
        ServantPassiveSkillEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return ServantPassiveSkillEntity__CreatePK(this->fields.svtId, this->fields.num, this->fields.priority, v2);
}


bool __fastcall ServantPassiveSkillEntity__HasFlag(
        ServantPassiveSkillEntity_o *this,
        int32_t typeFlag,
        const MethodInfo *method)
{
  return (this->fields.flag & typeFlag) != 0;
}


void __fastcall ServantPassiveSkillEntity__getEffectExplanation(
        ServantPassiveSkillEntity_o *this,
        int32_t *charge,
        System_String_o **title,
        System_String_o **explanation,
        int32_t skillLv,
        bool isEquip,
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
  DataManager_o *Instance; // x0
  __int64 v26; // x1
  SkillEntity_o *Entity; // x0
  int v28; // w1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  SkillEntity_o *v35; // x24
  int32_t v36; // w1
  LocalizationManager_c *v37; // x0
  System_String_o *unknownNameText; // x1
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_String_o *EffectExplanation; // x1
  System_String_o *EffectTitle; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7

  if ( (byte_42EAA08 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_SkillMaster___, (_DWORD)charge, (_DWORD)title, explanation);
    sub_B5D5C4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v13, v14, v15);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_1/*""*/, v22, v23, v24);
    byte_42EAA08 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SkillMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v26);
  }
  Entity = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                              this->fields.skillId,
                              (const MethodInfo_23FAE10 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( Entity )
  {
    v35 = Entity;
    if ( isEquip )
    {
      *charge = -1;
      v36 = 0;
    }
    else
    {
      *charge = SkillEntity__getEffectChargeTurn(Entity, skillLv, 0LL);
      Entity = v35;
      v36 = skillLv;
    }
    EffectTitle = SkillEntity__getEffectTitle(Entity, v36, 0LL);
    *title = EffectTitle;
    sub_B5D560((BattleServantConfConponent_o *)title, (System_Int32_array **)EffectTitle, v47, v48, v49, v50, v51, v52);
    EffectExplanation = SkillEntity__getEffectExplanation(v35, skillLv, 0LL);
    *explanation = EffectExplanation;
  }
  else
  {
    *charge = -1;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    if ( !byte_42E6772 )
    {
      sub_B5D5C4(&LocalizationManager_TypeInfo, v28, (_DWORD)v29, v30);
      byte_42E6772 = 1;
    }
    v37 = LocalizationManager_TypeInfo;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v37 = LocalizationManager_TypeInfo;
    }
    unknownNameText = v37->static_fields->unknownNameText;
    *title = unknownNameText;
    sub_B5D560(
      (BattleServantConfConponent_o *)title,
      (System_Int32_array **)unknownNameText,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
    *explanation = (System_String_o *)StringLiteral_1/*""*/;
    EffectExplanation = (System_String_o *)StringLiteral_1/*""*/;
  }
  sub_B5D560(
    (BattleServantConfConponent_o *)explanation,
    (System_Int32_array **)EffectExplanation,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
}


int32_t __fastcall ServantPassiveSkillEntity__getFriendPointUpVal(
        ServantPassiveSkillEntity_o *this,
        int32_t skillLv,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  SkillLvEntity_o *Entity; // x0

  if ( (byte_42EAA0A & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_SkillLvMaster___, skillLv, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7, v8);
    byte_42EAA0A = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SkillLvMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v10);
  }
  Entity = SkillLvMaster__GetEntity((SkillLvMaster_o *)Instance, this->fields.skillId, skillLv, 0LL);
  if ( Entity )
    LODWORD(Entity) = SkillLvEntity__getFriendPointUpVal(Entity, 0LL);
  return (int)Entity;
}


int32_t __fastcall ServantPassiveSkillEntity__getServantID(ServantPassiveSkillEntity_o *this, const MethodInfo *method)
{
  return this->fields.svtId;
}


int32_t __fastcall ServantPassiveSkillEntity__getServantIdx(
        ServantPassiveSkillEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.num;
}


int32_t __fastcall ServantPassiveSkillEntity__getSkillId(ServantPassiveSkillEntity_o *this, const MethodInfo *method)
{
  return this->fields.skillId;
}


System_String_o *__fastcall ServantPassiveSkillEntity__getSkillName(
        ServantPassiveSkillEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  DataManager_o *Instance; // x0
  __int64 v15; // x1
  SkillEntity_o *Entity; // x0
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  LocalizationManager_c *v21; // x0

  if ( (byte_42EAA09 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_SkillMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v5, v6, v7);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    byte_42EAA09 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SkillMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v15);
  }
  Entity = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                              this->fields.skillId,
                              (const MethodInfo_23FAE10 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( Entity )
    return SkillEntity__getName(Entity, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !byte_42E6772 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, v17, v18, v19);
    byte_42E6772 = 1;
  }
  v21 = LocalizationManager_TypeInfo;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v21 = LocalizationManager_TypeInfo;
  }
  return v21->static_fields->unknownNameText;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantPassiveSkillEntity__isUse(
        ServantPassiveSkillEntity_o *this,
        int64_t userId,
        int32_t svtLv,
        int32_t limitCount,
        int32_t dispLimitCount,
        int32_t friendshipRank,
        int32_t beforeClearQuestId,
        bool isMySvt,
        const MethodInfo *method)
{
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int64_t Time; // x0
  DataManager_o *Instance; // x0
  __int64 v45; // x1
  bool IsExchangeSvt; // w22
  const MethodInfo *v47; // x7
  int condQuestId; // w23
  int32_t condQuestPhase; // w24
  bool IsQuestPhaseClear; // w0
  CommonReleaseMaster_o *v51; // x23
  WarEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_42EAA07 & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, userId, svtLv, *(_QWORD *)&limitCount);
    sub_B5D5C4(&Method_DataManager_GetMasterData_CommonReleaseMaster___, v17, v18, v19);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventFilterMaster___, v20, v21, v22);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantPassiveSkillReleaseMaster___, v23, v24, v25);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserExchangeSvtMaster___, v26, v27, v28);
    sub_B5D5C4(&DataManager_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&Method_DataMasterBase_EventFilterMaster__EventFilterEntity__int__TryGetEntity__, v32, v33, v34);
    sub_B5D5C4(&NetworkManager_TypeInfo, v35, v36, v37);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v38, v39, v40);
    byte_42EAA07 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( Time >= this->fields.startedAt && Time <= this->fields.endedAt && (isMySvt || (this->fields.flag & 0x40) == 0) )
  {
    if ( this->fields.eventId < 1 )
      goto LABEL_20;
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_41;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventFilterMaster___);
    if ( !Instance )
      goto LABEL_41;
    if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
            (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
            &entity,
            this->fields.eventId,
            (const MethodInfo_23FAE6C *)Method_DataMasterBase_EventFilterMaster__EventFilterEntity__int__TryGetEntity__) )
      goto LABEL_20;
    Instance = (DataManager_o *)entity;
    if ( !entity )
      goto LABEL_41;
    if ( EventFilterEntity__IsOpen((EventFilterEntity_o *)entity, 0LL) )
    {
LABEL_20:
      if ( this->fields.condLv <= svtLv
        && this->fields.condLimitCount <= limitCount
        && this->fields.condFriendshipRank <= friendshipRank )
      {
        condQuestId = this->fields.condQuestId;
        if ( condQuestId < 1 )
          goto LABEL_34;
        condQuestPhase = this->fields.condQuestPhase;
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        IsQuestPhaseClear = CondType__IsQuestPhaseClear(userId, condQuestId, condQuestPhase, beforeClearQuestId, 0, 0LL);
        IsExchangeSvt = 0;
        if ( IsQuestPhaseClear )
        {
          if ( this->fields.commonReleaseId < 1 )
            goto LABEL_40;
LABEL_34:
          Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_41;
          Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
          if ( !Instance )
            goto LABEL_41;
          v51 = (CommonReleaseMaster_o *)Instance;
          IsExchangeSvt = 0;
          if ( !CommonReleaseMaster__IsOpen(
                  (CommonReleaseMaster_o *)Instance,
                  this->fields.commonReleaseId,
                  0LL,
                  0,
                  0LL) )
            goto LABEL_22;
          if ( CommonReleaseMaster__IsContainCondType(v51, this->fields.commonReleaseId, 192, 0LL) )
          {
            if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !DataManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            }
            Instance = (DataManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserExchangeSvtMaster___);
            if ( !Instance )
              goto LABEL_41;
            IsExchangeSvt = UserExchangeSvtMaster__IsExchangeSvt(
                              (UserExchangeSvtMaster_o *)Instance,
                              this->fields.svtId,
                              0LL);
          }
          else
          {
LABEL_40:
            IsExchangeSvt = 1;
          }
        }
      }
      else
      {
        IsExchangeSvt = 0;
      }
LABEL_22:
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantPassiveSkillReleaseMaster___);
        if ( Instance )
          return ServantPassiveSkillReleaseMaster__isUse(
                   (ServantPassiveSkillReleaseMaster_o *)Instance,
                   this->fields.svtId,
                   this->fields.num,
                   this->fields.priority,
                   dispLimitCount,
                   beforeClearQuestId,
                   IsExchangeSvt,
                   v47);
      }
LABEL_41:
      sub_B5D69C(Instance, v45);
    }
  }
  return 0;
}