void __fastcall ServantPassiveSkillEntity___ctor(ServantPassiveSkillEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42169F1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataEntityBase_string___ctor__, method);
    byte_42169F1 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_2669B20 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantPassiveSkillEntity__CreatePK(
        int32_t svtId,
        int32_t num,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_42169EC & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&num);
    byte_42169EC = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           svtId,
           num,
           priority,
           (const MethodInfo_1713844 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  DataManager_o *Instance; // x0
  SkillEntity_o *Entity; // x0
  __int64 v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  SkillEntity_o *v26; // x24
  int32_t v27; // w1
  LocalizationManager_c *v28; // x0
  System_String_o *unknownNameText; // x1
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_String_o *EffectExplanation; // x1
  System_String_o *EffectTitle; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7

  if ( (byte_42169EE & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_SkillMaster___, charge);
    sub_B0D8A4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v13);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v14);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_B0D8A4(&StringLiteral_1/*""*/, v16);
    byte_42169EE = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_SkillMaster___)) == 0LL )
  {
    sub_B0D97C(Instance);
  }
  Entity = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                              this->fields.skillId,
                              (const MethodInfo_2669BD4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( Entity )
  {
    v26 = Entity;
    if ( isEquip )
    {
      *charge = -1;
      v27 = 0;
    }
    else
    {
      *charge = SkillEntity__getEffectChargeTurn(Entity, skillLv, 0LL);
      Entity = v26;
      v27 = skillLv;
    }
    EffectTitle = SkillEntity__getEffectTitle(Entity, v27, 0LL);
    *title = EffectTitle;
    sub_B0D840((BattleServantConfConponent_o *)title, (System_Int32_array **)EffectTitle, v38, v39, v40, v41, v42, v43);
    EffectExplanation = SkillEntity__getEffectExplanation(v26, skillLv, 0LL);
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
    if ( !byte_4212885 )
    {
      sub_B0D8A4(&LocalizationManager_TypeInfo, v19);
      byte_4212885 = 1;
    }
    v28 = LocalizationManager_TypeInfo;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v28 = LocalizationManager_TypeInfo;
    }
    unknownNameText = v28->static_fields->unknownNameText;
    *title = unknownNameText;
    sub_B0D840(
      (BattleServantConfConponent_o *)title,
      (System_Int32_array **)unknownNameText,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
    *explanation = (System_String_o *)StringLiteral_1/*""*/;
    EffectExplanation = (System_String_o *)StringLiteral_1/*""*/;
  }
  sub_B0D840(
    (BattleServantConfConponent_o *)explanation,
    (System_Int32_array **)EffectExplanation,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantPassiveSkillEntity__getFriendPointUpVal(
        ServantPassiveSkillEntity_o *this,
        int32_t skillLv,
        const MethodInfo *method)
{
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  SkillLvEntity_o *Entity; // x0

  if ( (byte_42169F0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_SkillLvMaster___, *(_QWORD *)&skillLv);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_42169F0 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_SkillLvMaster___)) == 0LL )
  {
    sub_B0D97C(Instance);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  SkillEntity_o *Entity; // x0
  __int64 v8; // x1
  LocalizationManager_c *v10; // x0

  if ( (byte_42169EF & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_SkillMaster___, method);
    sub_B0D8A4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v3);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_42169EF = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_SkillMaster___)) == 0LL )
  {
    sub_B0D97C(Instance);
  }
  Entity = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                              this->fields.skillId,
                              (const MethodInfo_2669BD4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( Entity )
    return SkillEntity__getName(Entity, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !byte_4212885 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, v8);
    byte_4212885 = 1;
  }
  v10 = LocalizationManager_TypeInfo;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v10 = LocalizationManager_TypeInfo;
  }
  return v10->static_fields->unknownNameText;
}


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
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  int64_t Time; // x0
  DataManager_o *Instance; // x0
  bool IsExchangeSvt; // w22
  const MethodInfo *v30; // x7
  int condQuestId; // w23
  int32_t condQuestPhase; // w24
  bool IsQuestPhaseClear; // w0
  CommonReleaseMaster_o *v34; // x23
  WarEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_42169ED & 1) == 0 )
  {
    sub_B0D8A4(&CondType_TypeInfo, userId);
    sub_B0D8A4(&Method_DataManager_GetMasterData_CommonReleaseMaster___, v17);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventFilterMaster___, v18);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantPassiveSkillReleaseMaster___, v19);
    sub_B0D8A4(&Method_DataManager_GetMaster_UserExchangeSvtMaster___, v20);
    sub_B0D8A4(&DataManager_TypeInfo, v21);
    sub_B0D8A4(&Method_DataMasterBase_EventFilterMaster__EventFilterEntity__int__TryGetEntity__, v22);
    sub_B0D8A4(&NetworkManager_TypeInfo, v23);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24);
    byte_42169ED = 1;
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
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_41;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventFilterMaster___);
    if ( !Instance )
      goto LABEL_41;
    if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
            (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
            &entity,
            this->fields.eventId,
            (const MethodInfo_2669C30 *)Method_DataMasterBase_EventFilterMaster__EventFilterEntity__int__TryGetEntity__) )
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
          Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_41;
          Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
          if ( !Instance )
            goto LABEL_41;
          v34 = (CommonReleaseMaster_o *)Instance;
          IsExchangeSvt = 0;
          if ( !CommonReleaseMaster__IsOpen(
                  (CommonReleaseMaster_o *)Instance,
                  this->fields.commonReleaseId,
                  0LL,
                  0,
                  0LL) )
            goto LABEL_22;
          if ( CommonReleaseMaster__IsContainCondType(v34, this->fields.commonReleaseId, 192, 0LL) )
          {
            if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !DataManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            }
            Instance = (DataManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserExchangeSvtMaster___);
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
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantPassiveSkillReleaseMaster___);
        if ( Instance )
          return ServantPassiveSkillReleaseMaster__isUse(
                   (ServantPassiveSkillReleaseMaster_o *)Instance,
                   this->fields.svtId,
                   this->fields.num,
                   this->fields.priority,
                   dispLimitCount,
                   beforeClearQuestId,
                   IsExchangeSvt,
                   v30);
      }
LABEL_41:
      sub_B0D97C(Instance);
    }
  }
  return 0;
}