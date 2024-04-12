void __fastcall ServantPassiveSkillEntity___ctor(ServantPassiveSkillEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42B20AC & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_string___ctor__);
    byte_42B20AC = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23E2224 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall ServantPassiveSkillEntity__CreatePK(
        int32_t svtId,
        int32_t num,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_42B20A7 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_42B20A7 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           svtId,
           num,
           priority,
           (const MethodInfo_1A4E378 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
  DataManager_o *Instance; // x0
  __int64 v14; // x1
  SkillEntity_o *Entity; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  SkillEntity_o *v22; // x24
  int32_t v23; // w1
  LocalizationManager_c *v24; // x0
  System_String_o *unknownNameText; // x1
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_String_o *EffectExplanation; // x1
  System_String_o *EffectTitle; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7

  if ( (byte_42B20A9 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_B52984(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B20A9 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_SkillMaster___)) == 0LL )
  {
    sub_B52A5C(Instance, v14);
  }
  Entity = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                              this->fields.skillId,
                              (const MethodInfo_23E22D8 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( Entity )
  {
    v22 = Entity;
    if ( isEquip )
    {
      *charge = -1;
      v23 = 0;
    }
    else
    {
      *charge = SkillEntity__getEffectChargeTurn(Entity, skillLv, 0LL);
      Entity = v22;
      v23 = skillLv;
    }
    EffectTitle = SkillEntity__getEffectTitle(Entity, v23, 0LL);
    *title = EffectTitle;
    sub_B52920((BattleServantConfConponent_o *)title, (System_Int32_array **)EffectTitle, v34, v35, v36, v37, v38, v39);
    EffectExplanation = SkillEntity__getEffectExplanation(v22, skillLv, 0LL);
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
    if ( !byte_42ADEE6 )
    {
      sub_B52984(&LocalizationManager_TypeInfo);
      byte_42ADEE6 = 1;
    }
    v24 = LocalizationManager_TypeInfo;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v24 = LocalizationManager_TypeInfo;
    }
    unknownNameText = v24->static_fields->unknownNameText;
    *title = unknownNameText;
    sub_B52920(
      (BattleServantConfConponent_o *)title,
      (System_Int32_array **)unknownNameText,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
    *explanation = (System_String_o *)StringLiteral_1/*""*/;
    EffectExplanation = (System_String_o *)StringLiteral_1/*""*/;
  }
  sub_B52920(
    (BattleServantConfConponent_o *)explanation,
    (System_Int32_array **)EffectExplanation,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
}


int32_t __fastcall ServantPassiveSkillEntity__getFriendPointUpVal(
        ServantPassiveSkillEntity_o *this,
        int32_t skillLv,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  SkillLvEntity_o *Entity; // x0

  if ( (byte_42B20AB & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B20AB = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_SkillLvMaster___)) == 0LL )
  {
    sub_B52A5C(Instance, v6);
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
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  SkillEntity_o *Entity; // x0
  LocalizationManager_c *v7; // x0

  if ( (byte_42B20AA & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_B52984(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B20AA = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_SkillMaster___)) == 0LL )
  {
    sub_B52A5C(Instance, v4);
  }
  Entity = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                              this->fields.skillId,
                              (const MethodInfo_23E22D8 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( Entity )
    return SkillEntity__getName(Entity, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !byte_42ADEE6 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    byte_42ADEE6 = 1;
  }
  v7 = LocalizationManager_TypeInfo;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v7 = LocalizationManager_TypeInfo;
  }
  return v7->static_fields->unknownNameText;
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
  int64_t Time; // x0
  DataManager_o *Instance; // x0
  __int64 v21; // x1
  bool IsExchangeSvt; // w22
  const MethodInfo *v23; // x7
  int condQuestId; // w23
  int32_t condQuestPhase; // w24
  bool IsQuestPhaseClear; // w0
  CommonReleaseMaster_o *v27; // x23
  WarEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_42B20A8 & 1) == 0 )
  {
    sub_B52984(&CondType_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_EventFilterMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantPassiveSkillReleaseMaster___);
    sub_B52984(&Method_DataManager_GetMaster_UserExchangeSvtMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_EventFilterMaster__EventFilterEntity__int__TryGetEntity__);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B20A8 = 1;
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
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_41;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventFilterMaster___);
    if ( !Instance )
      goto LABEL_41;
    if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
            (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
            &entity,
            this->fields.eventId,
            (const MethodInfo_23E2334 *)Method_DataMasterBase_EventFilterMaster__EventFilterEntity__int__TryGetEntity__) )
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
          Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_41;
          Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
          if ( !Instance )
            goto LABEL_41;
          v27 = (CommonReleaseMaster_o *)Instance;
          IsExchangeSvt = 0;
          if ( !CommonReleaseMaster__IsOpen(
                  (CommonReleaseMaster_o *)Instance,
                  this->fields.commonReleaseId,
                  0LL,
                  0,
                  0LL) )
            goto LABEL_22;
          if ( CommonReleaseMaster__IsContainCondType(v27, this->fields.commonReleaseId, 192, 0LL) )
          {
            if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !DataManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            }
            Instance = (DataManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_UserExchangeSvtMaster___);
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
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantPassiveSkillReleaseMaster___);
        if ( Instance )
          return ServantPassiveSkillReleaseMaster__isUse(
                   (ServantPassiveSkillReleaseMaster_o *)Instance,
                   this->fields.svtId,
                   this->fields.num,
                   this->fields.priority,
                   dispLimitCount,
                   beforeClearQuestId,
                   IsExchangeSvt,
                   v23);
      }
LABEL_41:
      sub_B52A5C(Instance, v21);
    }
  }
  return 0;
}