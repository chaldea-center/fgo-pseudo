void __fastcall ServantPassiveSkillEntity___ctor(ServantPassiveSkillEntity_o *this, const MethodInfo *method)
{
  if ( (byte_40FBB5B & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_string___ctor__, method);
    byte_40FBB5B = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_266F2D4 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantPassiveSkillEntity__CreatePK(
        int32_t svtId,
        int32_t num,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_40FBB56 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&num);
    byte_40FBB56 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           svtId,
           num,
           priority,
           (const MethodInfo_18C25C8 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  SkillEntity_o *Entity; // x0
  __int64 v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  SkillEntity_o *v27; // x24
  int32_t v28; // w1
  LocalizationManager_c *v29; // x0
  System_String_o *unknownNameText; // x1
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_String_o *EffectExplanation; // x1
  System_String_o *EffectTitle; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7

  if ( (byte_40FBB58 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_SkillMaster___, charge);
    sub_B16FFC(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v13);
    sub_B16FFC(&LocalizationManager_TypeInfo, v14);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_B16FFC(&StringLiteral_1/*""*/, v16);
    byte_40FBB58 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)Instance,
                                                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  Entity = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              MasterData_WarQuestSelectionMaster,
                              this->fields.skillId,
                              (const MethodInfo_266F388 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( Entity )
  {
    v27 = Entity;
    if ( isEquip )
    {
      *charge = -1;
      v28 = 0;
    }
    else
    {
      *charge = SkillEntity__getEffectChargeTurn(Entity, skillLv, 0LL);
      Entity = v27;
      v28 = skillLv;
    }
    EffectTitle = SkillEntity__getEffectTitle(Entity, v28, 0LL);
    *title = EffectTitle;
    sub_B16F98((BattleServantConfConponent_o *)title, (System_Int32_array **)EffectTitle, v39, v40, v41, v42, v43, v44);
    EffectExplanation = SkillEntity__getEffectExplanation(v27, skillLv, 0LL);
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
    if ( !byte_40F87E5 )
    {
      sub_B16FFC(&LocalizationManager_TypeInfo, v20);
      byte_40F87E5 = 1;
    }
    v29 = LocalizationManager_TypeInfo;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v29 = LocalizationManager_TypeInfo;
    }
    unknownNameText = v29->static_fields->unknownNameText;
    *title = unknownNameText;
    sub_B16F98(
      (BattleServantConfConponent_o *)title,
      (System_Int32_array **)unknownNameText,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
    *explanation = (System_String_o *)StringLiteral_1/*""*/;
    EffectExplanation = (System_String_o *)StringLiteral_1/*""*/;
  }
  sub_B16F98(
    (BattleServantConfConponent_o *)explanation,
    (System_Int32_array **)EffectExplanation,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantPassiveSkillEntity__getFriendPointUpVal(
        ServantPassiveSkillEntity_o *this,
        int32_t skillLv,
        const MethodInfo *method)
{
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  SkillLvMaster_o *MasterData_WarQuestSelectionMaster; // x0
  SkillLvEntity_o *Entity; // x0

  if ( (byte_40FBB5A & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_SkillLvMaster___, *(_QWORD *)&skillLv);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40FBB5A = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillLvMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  Entity = SkillLvMaster__GetEntity(MasterData_WarQuestSelectionMaster, this->fields.skillId, skillLv, 0LL);
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  SkillEntity_o *Entity; // x0
  __int64 v9; // x1
  LocalizationManager_c *v11; // x0

  if ( (byte_40FBB59 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_SkillMaster___, method);
    sub_B16FFC(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v3);
    sub_B16FFC(&LocalizationManager_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40FBB59 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)Instance,
                                                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  Entity = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              MasterData_WarQuestSelectionMaster,
                              this->fields.skillId,
                              (const MethodInfo_266F388 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( Entity )
    return SkillEntity__getName(Entity, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !byte_40F87E5 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, v9);
    byte_40F87E5 = 1;
  }
  v11 = LocalizationManager_TypeInfo;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v11 = LocalizationManager_TypeInfo;
  }
  return v11->static_fields->unknownNameText;
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  bool IsExchangeSvt; // w22
  WebViewManager_o *v31; // x0
  ServantPassiveSkillReleaseMaster_o *v32; // x0
  const MethodInfo *v33; // x7
  int condQuestId; // w23
  int32_t condQuestPhase; // w24
  bool IsQuestPhaseClear; // w0
  WebViewManager_o *v37; // x0
  CommonReleaseMaster_o *v38; // x0
  CommonReleaseMaster_o *v39; // x23
  UserExchangeSvtMaster_o *Master_WarQuestSelectionMaster; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_40FBB57 & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, userId);
    sub_B16FFC(&Method_DataManager_GetMasterData_CommonReleaseMaster___, v17);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventFilterMaster___, v18);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantPassiveSkillReleaseMaster___, v19);
    sub_B16FFC(&Method_DataManager_GetMaster_UserExchangeSvtMaster___, v20);
    sub_B16FFC(&DataManager_TypeInfo, v21);
    sub_B16FFC(&Method_DataMasterBase_EventFilterMaster__EventFilterEntity__int__TryGetEntity__, v22);
    sub_B16FFC(&NetworkManager_TypeInfo, v23);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24);
    byte_40FBB57 = 1;
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
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_41;
    MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                          (DataManager_o *)Instance,
                                                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventFilterMaster___);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_41;
    if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
            MasterData_WarQuestSelectionMaster,
            &entity,
            this->fields.eventId,
            (const MethodInfo_266F3E4 *)Method_DataMasterBase_EventFilterMaster__EventFilterEntity__int__TryGetEntity__) )
      goto LABEL_20;
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
          v37 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !v37 )
            goto LABEL_41;
          v38 = (CommonReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)v37,
                                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
          if ( !v38 )
            goto LABEL_41;
          v39 = v38;
          IsExchangeSvt = 0;
          if ( !CommonReleaseMaster__IsOpen(v38, this->fields.commonReleaseId, 0LL, 0, 0LL) )
            goto LABEL_22;
          if ( CommonReleaseMaster__IsContainCondType(v39, this->fields.commonReleaseId, 192, 0LL) )
          {
            if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !DataManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            }
            Master_WarQuestSelectionMaster = (UserExchangeSvtMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserExchangeSvtMaster___);
            if ( !Master_WarQuestSelectionMaster )
              goto LABEL_41;
            IsExchangeSvt = UserExchangeSvtMaster__IsExchangeSvt(
                              Master_WarQuestSelectionMaster,
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
      v31 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( v31 )
      {
        v32 = (ServantPassiveSkillReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                      (DataManager_o *)v31,
                                                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantPassiveSkillReleaseMaster___);
        if ( v32 )
          return ServantPassiveSkillReleaseMaster__isUse(
                   v32,
                   this->fields.svtId,
                   this->fields.num,
                   this->fields.priority,
                   dispLimitCount,
                   beforeClearQuestId,
                   IsExchangeSvt,
                   v33);
      }
LABEL_41:
      sub_B170D4();
    }
  }
  return 0;
}