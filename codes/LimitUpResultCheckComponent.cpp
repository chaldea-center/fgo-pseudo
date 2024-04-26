void __fastcall LimitUpResultCheckComponent___cctor(const MethodInfo *method)
{
  if ( (byte_43511C8 & 1) == 0 )
  {
    sub_B70694(&LimitUpResultCheckComponent_TypeInfo);
    byte_43511C8 = 1;
  }
  LimitUpResultCheckComponent_TypeInfo->static_fields->CONCURRENTLY_DISP_NUM = 2;
  LimitUpResultCheckComponent_TypeInfo->static_fields->CONCURRENTLY_DISP_NUM_BY_LIMIT_MAX = 1;
  LimitUpResultCheckComponent_TypeInfo->static_fields->LIMIT_UP_DIALOG_GRID_HEIGHT = 127;
}


void __fastcall LimitUpResultCheckComponent___ctor(LimitUpResultCheckComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall LimitUpResultCheckComponent__CheckAssertion(
        LimitUpResultCheckComponent_o *this,
        const MethodInfo *method)
{
  ;
}


bool __fastcall LimitUpResultCheckComponent__CheckFinishedResultLimitUp(
        LimitUpResultCheckComponent_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_GameObject__o *resInfoList; // x8

  if ( (byte_43511C2 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    byte_43511C2 = 1;
  }
  resInfoList = this->fields.resInfoList;
  return !resInfoList || resInfoList->fields._size <= 0;
}


Il2CppObject *__fastcall LimitUpResultCheckComponent__CreateResultInfoObject_object_(
        LimitUpResultCheckComponent_o *this,
        Il2CppObject *origin,
        const MethodInfo_1D530D8 *method)
{
  LimitUpResultCheckComponent_o *v5; // x20
  UnityEngine_Transform_o *transform; // x2

  if ( !this
    || (v5 = this,
        (this = (LimitUpResultCheckComponent_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL)) == 0LL) )
  {
    sub_B7076C(this, origin);
  }
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  return (Il2CppObject *)((__int64 (__fastcall *)(LimitUpResultCheckComponent_o *, Il2CppObject *, UnityEngine_Transform_o *, _QWORD))method->rgctx_data->_0_BaseMonoBehaviour_createObject_T_->methodPointer)(
                           v5,
                           origin,
                           transform,
                           0LL);
}


void __fastcall LimitUpResultCheckComponent__DispResultLimitUp(
        LimitUpResultCheckComponent_o *this,
        System_Action_o *callback,
        bool isFirstDisp,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_GameObject__o *resInfoList; // x8
  OpenInfoWindowComponent_o *openInfowindowComp; // x0
  LimitUpResultCheckComponent_c *v9; // x0
  int32_t CONCURRENTLY_DISP_NUM; // w24
  LimitUpResultCheckComponent_c *v11; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x22
  struct System_Collections_Generic_List_GameObject__o *v13; // x8
  int32_t v14; // w25
  OpenInfoWindowComponent_o *v15; // x21
  _BOOL4 isGetNewSkill; // w8
  int32_t monitor; // w4
  bool v18; // w5

  if ( (byte_43511C1 & 1) == 0 )
  {
    sub_B70694(&LimitUpResultCheckComponent_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__RemoveAt__);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_B70694(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_43511C1 = 1;
  }
  resInfoList = this->fields.resInfoList;
  if ( !resInfoList || resInfoList->fields._size <= 0 )
  {
    ActionExtensions__Call(callback, 0LL);
    return;
  }
  openInfowindowComp = this->fields.openInfowindowComp;
  if ( !openInfowindowComp )
    goto LABEL_39;
  OpenInfoWindowComponent__Init(openInfowindowComp, 0LL);
  v9 = LimitUpResultCheckComponent_TypeInfo;
  if ( (BYTE3(LimitUpResultCheckComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LimitUpResultCheckComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LimitUpResultCheckComponent_TypeInfo);
    v9 = LimitUpResultCheckComponent_TypeInfo;
  }
  CONCURRENTLY_DISP_NUM = v9->static_fields->CONCURRENTLY_DISP_NUM;
  if ( !this->fields.isChangeSkill )
  {
    openInfowindowComp = (OpenInfoWindowComponent_o *)this->fields.resUsrSvtData;
    if ( !openInfowindowComp )
      goto LABEL_39;
    if ( UserServantEntity__isLimitCountMax((UserServantEntity_o *)openInfowindowComp, 0LL) )
    {
      v11 = LimitUpResultCheckComponent_TypeInfo;
      if ( (BYTE3(LimitUpResultCheckComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LimitUpResultCheckComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LimitUpResultCheckComponent_TypeInfo);
        v11 = LimitUpResultCheckComponent_TypeInfo;
      }
      CONCURRENTLY_DISP_NUM = v11->static_fields->CONCURRENTLY_DISP_NUM_BY_LIMIT_MAX;
    }
  }
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  v13 = this->fields.resInfoList;
  if ( !v13 )
LABEL_39:
    sub_B7076C(openInfowindowComp, callback);
  v14 = 0;
  while ( v13->fields._size > 0 && v14 < CONCURRENTLY_DISP_NUM && (v14 == 0 || !this->fields.isChangeSkill) )
  {
    if ( v12 )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v12,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v13->fields._items->m_Items[0],
        (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_GameObject__Add__);
      openInfowindowComp = (OpenInfoWindowComponent_o *)this->fields.resInfoList;
      if ( openInfowindowComp )
      {
        System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)openInfowindowComp,
          0,
          (const MethodInfo_3027378 *)Method_System_Collections_Generic_List_GameObject__RemoveAt__);
        v13 = this->fields.resInfoList;
        ++v14;
        if ( v13 )
          continue;
      }
    }
    goto LABEL_39;
  }
  if ( this->fields.isChangeSkill )
  {
    openInfowindowComp = this->fields.openInfowindowComp;
    this->fields.isChangeSkill = 0;
    if ( openInfowindowComp )
    {
      OpenInfoWindowComponent__OpenResultInfo(
        openInfowindowComp,
        (System_Collections_Generic_List_GameObject__o *)v12,
        callback,
        isFirstDisp,
        0LL);
      return;
    }
    goto LABEL_39;
  }
  if ( this->fields.transformationCount > 1 )
  {
    isGetNewSkill = this->fields.isGetNewSkill;
    v15 = this->fields.openInfowindowComp;
    if ( isGetNewSkill )
    {
      monitor = 125;
      v18 = 1;
      if ( !v15 )
        goto LABEL_39;
      goto LABEL_38;
    }
  }
  else
  {
    v15 = this->fields.openInfowindowComp;
  }
  openInfowindowComp = (OpenInfoWindowComponent_o *)LimitUpResultCheckComponent_TypeInfo;
  if ( (BYTE3(LimitUpResultCheckComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LimitUpResultCheckComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LimitUpResultCheckComponent_TypeInfo);
    openInfowindowComp = (OpenInfoWindowComponent_o *)LimitUpResultCheckComponent_TypeInfo;
  }
  v18 = 0;
  monitor = (int32_t)openInfowindowComp[1].fields.baseWindow->monitor;
  if ( !v15 )
    goto LABEL_39;
LABEL_38:
  OpenInfoWindowComponent__OpenLimitUpResultInfo(
    v15,
    (System_Collections_Generic_List_GameObject__o *)v12,
    callback,
    isFirstDisp,
    monitor,
    v18,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall LimitUpResultCheckComponent__SetActiveInfoWindow(
        LimitUpResultCheckComponent_o *this,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_Component_o *openInfowindowComp; // x0

  if ( this->fields.isGetNewSkill || this->fields.isOpenQuest )
  {
    openInfowindowComp = (UnityEngine_Component_o *)this->fields.openInfowindowComp;
    if ( !openInfowindowComp
      || (openInfowindowComp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(openInfowindowComp, 0LL)) == 0LL )
    {
      sub_B7076C(openInfowindowComp, isActive);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)openInfowindowComp, isActive, 0LL);
  }
}


void __fastcall LimitUpResultCheckComponent__SetResInfoListQuestInfo(
        LimitUpResultCheckComponent_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  ServantLimitImageMaster_o *Master_WarQuestSelectionMaster; // x24
  DataMasterBase_WarMaster__WarEntity__int__o *Entity; // x0
  __int64 v7; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v8; // x20
  System_String_o *v9; // x23
  System_String_o *v10; // x22
  System_String_o *v11; // x0
  __int64 *v12; // x21
  Il2CppObject *Value; // x21
  System_String_o *v14; // x0
  __int64 *v15; // x8
  System_String_o *v16; // x0
  UnityEngine_Component_o *v17; // x20
  struct System_Collections_Generic_List_GameObject__o *resInfoList; // x19

  if ( (byte_43511C4 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMaster_ConstantStrMaster___);
    sub_B70694(&Method_DataManager_GetMaster_QuestMaster___);
    sub_B70694(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_B70694(&Method_LimitUpResultCheckComponent_CreateResultInfoObject_LimitUpResultInfoComponent___);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&StringLiteral_9883/*"OPEN_MAIN_SCENARIO_TITLE"*/);
    sub_B70694(&StringLiteral_9889/*"OPEN_STORY_QUEST_TITLE_LIMIT_UP"*/);
    sub_B70694(&StringLiteral_9880/*"OPEN_LIMIT_UNSEALED_QUEST_NAME_LIMIT_UP"*/);
    sub_B70694(&StringLiteral_9881/*"OPEN_LIMIT_UNSEALED_QUEST_TITLE_LIMIT_UP"*/);
    sub_B70694(&StringLiteral_9875/*"OPEN_EVENT_QUEST_NAME_LIMIT_UP"*/);
    sub_B70694(&StringLiteral_9876/*"OPEN_EVENT_QUEST_TITLE_LIMIT_UP"*/);
    sub_B70694(&StringLiteral_9882/*"OPEN_MAIN_QUEST_TITLE_LIMIT_UP"*/);
    byte_43511C4 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  Entity = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !Entity )
    goto LABEL_47;
  Entity = (DataMasterBase_WarMaster__WarEntity__int__o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                            Entity,
                                                            questId,
                                                            (const MethodInfo_21C0440 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( !Entity )
    goto LABEL_47;
  v8 = Entity;
  v9 = 0LL;
  v10 = 0LL;
  switch ( LODWORD(Entity->fields._lookup) )
  {
    case 1:
    case 2:
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_47;
      if ( ServantLimitImageMaster__IsLimitCountSealQuest(Master_WarQuestSelectionMaster, questId, 0LL) )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v11 = LocalizationManager__Get((System_String_o *)StringLiteral_9881/*"OPEN_LIMIT_UNSEALED_QUEST_TITLE_LIMIT_UP"*/, 0LL);
        v12 = &StringLiteral_9880/*"OPEN_LIMIT_UNSEALED_QUEST_NAME_LIMIT_UP"*/;
      }
      else
      {
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        Entity = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ConstantStrMaster___);
        if ( !Entity )
          goto LABEL_47;
        Value = (Il2CppObject *)ConstantStrMaster__GetValue(
                                  (ConstantStrMaster_o *)Entity,
                                  (System_String_o *)StringLiteral_9883/*"OPEN_MAIN_SCENARIO_TITLE"*/,
                                  0LL);
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v14 = LocalizationManager__Get((System_String_o *)StringLiteral_9882/*"OPEN_MAIN_QUEST_TITLE_LIMIT_UP"*/, 0LL);
        v11 = System_String__Format(v14, Value, 0LL);
LABEL_27:
        v12 = &StringLiteral_9875/*"OPEN_EVENT_QUEST_NAME_LIMIT_UP"*/;
      }
LABEL_40:
      v10 = v11;
      v16 = LocalizationManager__Get((System_String_o *)*v12, 0LL);
      v9 = System_String__Format(v16, (Il2CppObject *)v8->fields._MasterName_k__BackingField, 0LL);
      this->fields.isOpenQuest = 1;
LABEL_41:
      if ( !System_String__IsNullOrEmpty(v10, 0LL) && !System_String__IsNullOrEmpty(v9, 0LL) )
      {
        Entity = (DataMasterBase_WarMaster__WarEntity__int__o *)LimitUpResultCheckComponent__CreateResultInfoObject_object_(
                                                                  this,
                                                                  (Il2CppObject *)this->fields.limitUpResultInfoStoryOrigin,
                                                                  (const MethodInfo_1D530D8 *)Method_LimitUpResultCheckComponent_CreateResultInfoObject_LimitUpResultInfoComponent___);
        if ( Entity )
        {
          v17 = (UnityEngine_Component_o *)Entity;
          ((void (__fastcall *)(DataMasterBase_WarMaster__WarEntity__int__o *, System_String_o *, System_String_o *, Il2CppMethodPointer))Entity->klass->vtable._4_getList.method)(
            Entity,
            v10,
            v9,
            Entity->klass->vtable._5_ForForceDerived.methodPtr);
          resInfoList = this->fields.resInfoList;
          Entity = (DataMasterBase_WarMaster__WarEntity__int__o *)UnityEngine_Component__get_gameObject(v17, 0LL);
          if ( resInfoList )
          {
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)resInfoList,
              (EventMissionProgressRequest_Argument_ProgressData_o *)Entity,
              (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_GameObject__Add__);
            return;
          }
        }
LABEL_47:
        sub_B7076C(Entity, v7);
      }
      return;
    case 3:
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_47;
      if ( ServantLimitImageMaster__IsLimitCountSealQuest(Master_WarQuestSelectionMaster, questId, 0LL) )
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v12 = &StringLiteral_9880/*"OPEN_LIMIT_UNSEALED_QUEST_NAME_LIMIT_UP"*/;
        v15 = &StringLiteral_9881/*"OPEN_LIMIT_UNSEALED_QUEST_TITLE_LIMIT_UP"*/;
      }
      else
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v12 = &StringLiteral_9875/*"OPEN_EVENT_QUEST_NAME_LIMIT_UP"*/;
        v15 = &StringLiteral_9889/*"OPEN_STORY_QUEST_TITLE_LIMIT_UP"*/;
      }
      v11 = LocalizationManager__Get((System_String_o *)*v15, 0LL);
      goto LABEL_40;
    case 4:
      goto LABEL_41;
    case 5:
    case 6:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v11 = LocalizationManager__Get((System_String_o *)StringLiteral_9876/*"OPEN_EVENT_QUEST_TITLE_LIMIT_UP"*/, 0LL);
      goto LABEL_27;
    default:
      v10 = 0LL;
      goto LABEL_41;
  }
}


void __fastcall LimitUpResultCheckComponent__SetSkillRelease(
        LimitUpResultCheckComponent_o *this,
        int32_t skillId,
        int32_t targetIdx,
        int32_t transformIndex,
        const MethodInfo *method)
{
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  __int64 v10; // x1
  SkillEntity_o *Entity; // x24
  System_String_o *v12; // x23
  System_String_o *v13; // x0
  System_String_o *v14; // x24
  struct UserServantEntity_o *resUsrSvtData; // x8
  ServantSkillMaster_o *v16; // x25
  __int64 v17; // x26
  __int64 v18; // x27
  ServantSkillEntity_o *EntityFromSkillId; // x0
  __int64 v20; // x8
  ServantSkillEntity_o *v21; // x25
  const MethodInfo *v22; // x6
  LimitUpResultInfoSkillComponent_o *v23; // x22
  const MethodInfo *v24; // x2
  bool v25; // w1
  struct System_Collections_Generic_List_GameObject__o *resInfoList; // x8
  struct System_Collections_Generic_List_GameObject__o *v27; // x20
  TransformServantInfo_o *v28; // [xsp+0h] [xbp-60h] BYREF
  System_String_o *detail; // [xsp+8h] [xbp-58h] BYREF
  System_String_o *name; // [xsp+18h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16

  if ( (byte_43511C6 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMaster_ServantSkillMaster___);
    sub_B70694(&Method_DataManager_GetMaster_SkillMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_B70694(&Method_LimitUpResultCheckComponent_CreateResultInfoObject_LimitUpResultInfoSkillComponent___);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&StringLiteral_6975/*"GET_SKILL_TITLE"*/);
    sub_B70694(&StringLiteral_6974/*"GET_SKILL_NAME_LIMIT_UP"*/);
    byte_43511C6 = 1;
  }
  name = 0LL;
  v28 = 0LL;
  detail = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_SkillMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_32;
  Entity = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              Master_WarQuestSelectionMaster,
                              skillId,
                              (const MethodInfo_21C0440 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)LocalizationManager__Get(
                                                                                    (System_String_o *)StringLiteral_6975/*"GET_SKILL_TITLE"*/,
                                                                                    0LL);
  if ( !this->fields.resUsrSvtData )
    goto LABEL_32;
  v12 = (System_String_o *)Master_WarQuestSelectionMaster;
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)UserServantEntity__getSkillLevel(
                                                                                    this->fields.resUsrSvtData,
                                                                                    targetIdx,
                                                                                    0LL);
  if ( !Entity )
    goto LABEL_32;
  SkillEntity__getSkillMessageInfo(Entity, &name, &detail, (int32_t)Master_WarQuestSelectionMaster, 0LL);
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_6974/*"GET_SKILL_NAME_LIMIT_UP"*/, 0LL);
  v14 = System_String__Format(v13, (Il2CppObject *)name, 0LL);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ServantSkillMaster___);
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_32;
  v16 = (ServantSkillMaster_o *)Master_WarQuestSelectionMaster;
  v18 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v31.fields.currentCryptoKey = v18;
  *(_QWORD *)&v31.fields.fakeValue = v17;
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(
                                                                                    v31,
                                                                                    0LL);
  if ( !v16 )
    goto LABEL_32;
  EntityFromSkillId = ServantSkillMaster__getEntityFromSkillId(
                        v16,
                        (int32_t)Master_WarQuestSelectionMaster,
                        targetIdx + 1,
                        skillId,
                        0LL);
  v20 = this->fields.transformationCount <= 1 ? 120LL : 128LL;
  v21 = EntityFromSkillId;
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)LimitUpResultCheckComponent__CreateResultInfoObject_object_(
                                                                                    this,
                                                                                    *(Il2CppObject **)((char *)&this->klass + v20),
                                                                                    (const MethodInfo_1D530D8 *)Method_LimitUpResultCheckComponent_CreateResultInfoObject_LimitUpResultInfoSkillComponent___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_32;
  v23 = (LimitUpResultInfoSkillComponent_o *)Master_WarQuestSelectionMaster;
  LimitUpResultInfoSkillComponent__Setup(
    (LimitUpResultInfoSkillComponent_o *)Master_WarQuestSelectionMaster,
    skillId,
    v14,
    v21,
    v12,
    detail,
    v22);
  if ( this->fields.transformationCount < 2 )
    goto LABEL_30;
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)this->fields.baseUsrSvtData;
  if ( !Master_WarQuestSelectionMaster
    || (Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)UserServantEntity__GetTransformedServantInfo(
                                                                                          (UserServantEntity_o *)Master_WarQuestSelectionMaster,
                                                                                          &v28,
                                                                                          transformIndex,
                                                                                          0LL),
        !v28)
    || (Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)v23->fields.battleNameLabel) == 0LL )
  {
LABEL_32:
    sub_B7076C(Master_WarQuestSelectionMaster, v10);
  }
  UILabel__set_text((UILabel_o *)Master_WarQuestSelectionMaster, v28->fields.titleText, 0LL);
  if ( this->fields.transformationCount >= 2 )
  {
    resInfoList = this->fields.resInfoList;
    if ( !resInfoList )
      goto LABEL_32;
    v25 = resInfoList->fields._size < 1;
  }
  else
  {
    v25 = 0;
  }
  LimitUpResultInfoSkillComponent__SetTitleDisp(v23, v25, v24);
LABEL_30:
  v27 = this->fields.resInfoList;
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)UnityEngine_Component__get_gameObject(
                                                                                    (UnityEngine_Component_o *)v23,
                                                                                    0LL);
  if ( !v27 )
    goto LABEL_32;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v27,
    (EventMissionProgressRequest_Argument_ProgressData_o *)Master_WarQuestSelectionMaster,
    (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_GameObject__Add__);
  this->fields.isGetNewSkill = 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall LimitUpResultCheckComponent__checkGetSkill(
        LimitUpResultCheckComponent_o *this,
        int32_t transformIndex,
        const MethodInfo *method)
{
  LimitUpResultCheckComponent_o *v4; // x19
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int64 v6; // x21
  __int64 v7; // x22
  int v8; // w22
  System_Int32_array *TransformedSkillIdList; // x0
  int32_t kind; // w8
  System_Int32_array *v11; // x21
  int32_t LimitCntMax; // w22
  int32_t v13; // w1
  int32_t v14; // w3
  LimitUpResultCheckComponent_o *v15; // x23
  int max_length; // w8
  unsigned int v17; // w9
  unsigned int v18; // w22
  char *v19; // x24
  int32_t *v20; // x24
  int v21; // w26
  int v22; // t1
  char *v23; // x25
  int v24; // w9
  int32_t *v25; // x25
  int v26; // t1
  const MethodInfo *v27; // x4
  int32_t v28; // w21
  int32_t v29; // w20
  DataMasterBase_WarMaster__WarEntity__int__o *v30; // x24
  SkillEntity_o *Entity; // x23
  SkillEntity_o *v32; // x20
  int32_t v33; // w24
  int32_t SkillLevel; // w0
  UILabel_o *skillChangeInfoTitle; // x22
  int32_t v36; // w21
  UILabel_o *skillChangeInfoSubTitleOld; // x22
  UILabel_o *skillChangeInfoSubTitleNow; // x22
  UILabel_o *skillChangeInfoNameOld; // x22
  System_String_o *v40; // x0
  UILabel_o *skillChangeInfoNameNow; // x20
  System_String_o *v42; // x0
  __int64 v43; // x0
  System_String_o *text; // [xsp+0h] [xbp-50h] BYREF
  System_String_o *name; // [xsp+8h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16

  v4 = this;
  if ( (byte_43511C5 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_B70694(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&StringLiteral_6973/*"GET_SKILL_NAME"*/);
    sub_B70694(&StringLiteral_1691/*"AFTER_CHANGE_SKILL_SUB_TITLE"*/);
    sub_B70694(&StringLiteral_3024/*"CHANGE_SKILL_TITLE"*/);
    this = (LimitUpResultCheckComponent_o *)sub_B70694(&StringLiteral_2605/*"BEFORE_CHANGE_SKILL_SUB_TITLE"*/);
    byte_43511C5 = 1;
  }
  text = 0LL;
  name = 0LL;
  baseUsrSvtData = v4->fields.baseUsrSvtData;
  *(_WORD *)&v4->fields.isGetNewSkill = 0;
  if ( !baseUsrSvtData )
    goto LABEL_55;
  v7 = *(_QWORD *)&baseUsrSvtData->fields.limitCount.fields.currentCryptoKey;
  v6 = *(_QWORD *)&baseUsrSvtData->fields.limitCount.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v46.fields.currentCryptoKey = v7;
  *(_QWORD *)&v46.fields.fakeValue = v6;
  this = (LimitUpResultCheckComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v46, 0LL);
  if ( !v4->fields.baseUsrSvtData )
    goto LABEL_55;
  v8 = (int)this;
  TransformedSkillIdList = UserServantEntity__GetTransformedSkillIdList(
                             v4->fields.baseUsrSvtData,
                             transformIndex,
                             -1,
                             (int32_t)this,
                             1,
                             -1,
                             0LL);
  kind = v4->fields.kind;
  v11 = TransformedSkillIdList;
  if ( kind == 19 || kind == 10 )
  {
    this = (LimitUpResultCheckComponent_o *)v4->fields.baseUsrSvtData;
    if ( !this )
      goto LABEL_55;
    LimitCntMax = v8 + 1;
    if ( UserServantEntity__getLimitCntMax((UserServantEntity_o *)this, 0LL) < LimitCntMax )
    {
      this = (LimitUpResultCheckComponent_o *)v4->fields.baseUsrSvtData;
      if ( !this )
        goto LABEL_55;
      LimitCntMax = UserServantEntity__getLimitCntMax((UserServantEntity_o *)this, 0LL);
    }
    this = (LimitUpResultCheckComponent_o *)v4->fields.resUsrSvtData;
    if ( !this )
LABEL_55:
      sub_B7076C(this, *(_QWORD *)&transformIndex);
    v13 = transformIndex;
    v14 = LimitCntMax;
  }
  else
  {
    this = (LimitUpResultCheckComponent_o *)v4->fields.resUsrSvtData;
    if ( !this )
      goto LABEL_55;
    v14 = -1;
    v13 = transformIndex;
  }
  this = (LimitUpResultCheckComponent_o *)UserServantEntity__GetTransformedSkillIdList(
                                            (UserServantEntity_o *)this,
                                            v13,
                                            -1,
                                            v14,
                                            1,
                                            -1,
                                            0LL);
  v15 = this;
  if ( !v11 )
    goto LABEL_55;
  max_length = v11->max_length;
  if ( max_length >= 1 )
  {
    v17 = 0;
    while ( 1 )
    {
      if ( v17 >= max_length )
        goto LABEL_54;
      v18 = v17;
      v19 = (char *)v11 + 4 * (int)v17;
      v22 = *((_DWORD *)v19 + 8);
      v20 = (int32_t *)(v19 + 32);
      v21 = v22;
      if ( !this )
        goto LABEL_55;
      if ( v17 >= LODWORD(this->fields.openInfowindowComp) )
        goto LABEL_54;
      v23 = (char *)this + 4 * (int)v17;
      v26 = *((_DWORD *)v23 + 8);
      v25 = (int32_t *)(v23 + 32);
      v24 = v26;
      if ( v21 != v26 && v24 >= 1 )
        break;
      v17 = v18 + 1;
      if ( (int)(v18 + 1) >= max_length )
        return;
    }
    this = (LimitUpResultCheckComponent_o *)v4->fields.resUsrSvtData;
    if ( !this )
      goto LABEL_55;
    this = (LimitUpResultCheckComponent_o *)UserServantEntity__IsHeroine((UserServantEntity_o *)this, 0LL);
    if ( v21 >= 1 && ((unsigned __int8)this & 1) != 0 )
    {
      if ( v18 < v11->max_length && v18 < LODWORD(v15->fields.openInfowindowComp) )
      {
        v28 = *v20;
        v29 = *v25;
        this = (LimitUpResultCheckComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( this )
        {
          this = (LimitUpResultCheckComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                    (DataManager_o *)this,
                                                    (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_SkillMaster___);
          if ( this )
          {
            v30 = (DataMasterBase_WarMaster__WarEntity__int__o *)this;
            Entity = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                        (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                        v28,
                                        (const MethodInfo_21C0440 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
            this = (LimitUpResultCheckComponent_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                      v30,
                                                      v29,
                                                      (const MethodInfo_21C0440 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
            if ( v4->fields.baseUsrSvtData )
            {
              v32 = (SkillEntity_o *)this;
              this = (LimitUpResultCheckComponent_o *)UserServantEntity__getSkillLevel(
                                                        v4->fields.baseUsrSvtData,
                                                        v18,
                                                        0LL);
              if ( v4->fields.resUsrSvtData )
              {
                v33 = (int)this;
                SkillLevel = UserServantEntity__getSkillLevel(v4->fields.resUsrSvtData, v18, 0LL);
                skillChangeInfoTitle = v4->fields.skillChangeInfoTitle;
                v36 = SkillLevel;
                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                }
                this = (LimitUpResultCheckComponent_o *)LocalizationManager__Get(
                                                          (System_String_o *)StringLiteral_3024/*"CHANGE_SKILL_TITLE"*/,
                                                          0LL);
                if ( skillChangeInfoTitle )
                {
                  UILabel__set_text(skillChangeInfoTitle, (System_String_o *)this, 0LL);
                  skillChangeInfoSubTitleOld = v4->fields.skillChangeInfoSubTitleOld;
                  this = (LimitUpResultCheckComponent_o *)LocalizationManager__Get(
                                                            (System_String_o *)StringLiteral_2605/*"BEFORE_CHANGE_SKILL_SUB_TITLE"*/,
                                                            0LL);
                  if ( skillChangeInfoSubTitleOld )
                  {
                    UILabel__set_text(skillChangeInfoSubTitleOld, (System_String_o *)this, 0LL);
                    skillChangeInfoSubTitleNow = v4->fields.skillChangeInfoSubTitleNow;
                    this = (LimitUpResultCheckComponent_o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_1691/*"AFTER_CHANGE_SKILL_SUB_TITLE"*/,
                                                              0LL);
                    if ( skillChangeInfoSubTitleNow )
                    {
                      UILabel__set_text(skillChangeInfoSubTitleNow, (System_String_o *)this, 0LL);
                      if ( Entity )
                      {
                        SkillEntity__getSkillMessageInfo(Entity, &name, &text, v33, 0LL);
                        skillChangeInfoNameOld = v4->fields.skillChangeInfoNameOld;
                        v40 = LocalizationManager__Get((System_String_o *)StringLiteral_6973/*"GET_SKILL_NAME"*/, 0LL);
                        this = (LimitUpResultCheckComponent_o *)System_String__Format(v40, (Il2CppObject *)name, 0LL);
                        if ( skillChangeInfoNameOld )
                        {
                          UILabel__set_text(skillChangeInfoNameOld, (System_String_o *)this, 0LL);
                          this = (LimitUpResultCheckComponent_o *)v4->fields.skillChangeInfoDetailOld;
                          if ( this )
                          {
                            this = (LimitUpResultCheckComponent_o *)WrapControlText__textBBCodeAdjust(
                                                                      (UILabel_o *)this,
                                                                      text,
                                                                      (int32_t)this[1].fields.skillChangeInfoSubTitleOld,
                                                                      0,
                                                                      0,
                                                                      0LL);
                            if ( v32 )
                            {
                              SkillEntity__getSkillMessageInfo(v32, &name, &text, v36, 0LL);
                              skillChangeInfoNameNow = v4->fields.skillChangeInfoNameNow;
                              v42 = LocalizationManager__Get((System_String_o *)StringLiteral_6973/*"GET_SKILL_NAME"*/, 0LL);
                              this = (LimitUpResultCheckComponent_o *)System_String__Format(
                                                                        v42,
                                                                        (Il2CppObject *)name,
                                                                        0LL);
                              if ( skillChangeInfoNameNow )
                              {
                                UILabel__set_text(skillChangeInfoNameNow, (System_String_o *)this, 0LL);
                                this = (LimitUpResultCheckComponent_o *)v4->fields.skillChangeInfoDetailNow;
                                if ( this )
                                {
                                  WrapControlText__textBBCodeAdjust(
                                    (UILabel_o *)this,
                                    text,
                                    (int32_t)this[1].fields.skillChangeInfoSubTitleOld,
                                    0,
                                    0,
                                    0LL);
                                  this = (LimitUpResultCheckComponent_o *)v4->fields.resInfoList;
                                  if ( this )
                                  {
                                    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
                                      (EventMissionProgressRequest_Argument_ProgressData_o *)v4->fields.skillChangeInfo,
                                      (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_GameObject__Add__);
                                    *(_WORD *)&v4->fields.isGetNewSkill = 257;
                                    return;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        goto LABEL_55;
      }
LABEL_54:
      v43 = sub_B70798(this);
      sub_B70738(v43, 0LL);
    }
    if ( v18 >= LODWORD(v15->fields.openInfowindowComp) )
      goto LABEL_54;
    LimitUpResultCheckComponent__SetSkillRelease(v4, *v25, v18, transformIndex, v27);
  }
}


void __fastcall LimitUpResultCheckComponent__checkLimitUpReward(
        LimitUpResultCheckComponent_o *this,
        System_Collections_Generic_List_int____o *rewardGiftDataList,
        const MethodInfo *method)
{
  __int64 v5; // x21
  CombineLimitGiftMaster_o *Master_WarQuestSelectionMaster; // x23
  GiftMaster_o *LimitCntMax; // x0
  __int64 v8; // x1
  struct UserServantEntity_o *baseUsrSvtData; // x8
  GiftMaster_o *v10; // x22
  __int64 v11; // x24
  __int64 v12; // x25
  struct UserServantEntity_o *v13; // x8
  __int64 v14; // x24
  __int64 v15; // x25
  System_Int32_array **DataById; // x0
  __int64 v17; // x22
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_String_o *v24; // x23
  __int64 v25; // x2
  Il2CppObject *v26; // x25
  System_String_o *v27; // x24
  Il2CppObject *v28; // x0
  System_String_o *v29; // x24
  Il2CppObject *v30; // x25
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v31; // x26
  bool v32; // w20
  const MethodInfo *v33; // x5
  struct System_Collections_Generic_List_GameObject__o *resInfoList; // x20
  int v35; // [xsp+Ch] [xbp-54h] BYREF
  System_String_o *countText; // [xsp+10h] [xbp-50h] BYREF
  System_String_o *nameText; // [xsp+18h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16

  if ( (byte_43511C7 & 1) == 0 )
  {
    sub_B70694(&Method_BasicHelper_Any_int_____);
    sub_B70694(&Method_DataManager_GetMaster_CombineLimitGiftMaster___);
    sub_B70694(&Method_DataManager_GetMaster_GiftMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_System_Func_int____bool___ctor__);
    sub_B70694(&System_Func_int____bool__TypeInfo);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&Method_LimitUpResultCheckComponent_CreateResultInfoObject_LimitUpResultInfoRewardComponent___);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&Method_LimitUpResultCheckComponent___c__DisplayClass46_0__checkLimitUpReward_b__0__);
    sub_B70694(&LimitUpResultCheckComponent___c__DisplayClass46_0_TypeInfo);
    sub_B70694(&StringLiteral_6970/*"GET_LIMIT_UP_REWARD_DETAIL"*/);
    sub_B70694(&StringLiteral_6971/*"GET_LIMIT_UP_REWARD_TITLE"*/);
    byte_43511C7 = 1;
  }
  countText = 0LL;
  nameText = 0LL;
  v5 = sub_B70764(LimitUpResultCheckComponent___c__DisplayClass46_0_TypeInfo);
  LimitUpResultCheckComponent___c__DisplayClass46_0___ctor(
    (LimitUpResultCheckComponent___c__DisplayClass46_0_o *)v5,
    0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (CombineLimitGiftMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_CombineLimitGiftMaster___);
  LimitCntMax = (GiftMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_GiftMaster___);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_35;
  v10 = LimitCntMax;
  v12 = *(_QWORD *)&baseUsrSvtData->fields.limitCount.fields.currentCryptoKey;
  v11 = *(_QWORD *)&baseUsrSvtData->fields.limitCount.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v38.fields.currentCryptoKey = v12;
  *(_QWORD *)&v38.fields.fakeValue = v11;
  LimitCntMax = (GiftMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v38, 0LL);
  if ( !v5 )
    goto LABEL_35;
  *(_DWORD *)(v5 + 16) = (_DWORD)LimitCntMax + 1;
  LimitCntMax = (GiftMaster_o *)this->fields.baseUsrSvtData;
  if ( !LimitCntMax )
    goto LABEL_35;
  LimitCntMax = (GiftMaster_o *)UserServantEntity__getLimitCntMax((UserServantEntity_o *)LimitCntMax, 0LL);
  if ( (int)LimitCntMax < *(_DWORD *)(v5 + 16) )
  {
    LimitCntMax = (GiftMaster_o *)this->fields.baseUsrSvtData;
    if ( !LimitCntMax )
      goto LABEL_35;
    LimitCntMax = (GiftMaster_o *)UserServantEntity__getLimitCntMax((UserServantEntity_o *)LimitCntMax, 0LL);
    *(_DWORD *)(v5 + 16) = (_DWORD)LimitCntMax;
  }
  v13 = this->fields.baseUsrSvtData;
  if ( !v13 )
    goto LABEL_35;
  v15 = *(_QWORD *)&v13->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&v13->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v39.fields.currentCryptoKey = v15;
  *(_QWORD *)&v39.fields.fakeValue = v14;
  LimitCntMax = (GiftMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v39, 0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_35;
  LimitCntMax = (GiftMaster_o *)CombineLimitGiftMaster__GetCombineLimitGiftId(
                                  Master_WarQuestSelectionMaster,
                                  (int32_t)LimitCntMax,
                                  *(_DWORD *)(v5 + 16),
                                  0LL);
  if ( !(_DWORD)LimitCntMax )
    return;
  if ( !v10 )
    goto LABEL_35;
  DataById = (System_Int32_array **)GiftMaster__getDataById(v10, (int32_t)LimitCntMax, 0LL);
  *(_QWORD *)(v5 + 24) = DataById;
  v17 = v5 + 24;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 24), DataById, v18, v19, v20, v21, v22, v23);
  if ( !*(_QWORD *)(v5 + 24) )
    return;
  GiftEntity__GetInfo(*(GiftEntity_o **)(v5 + 24), &nameText, &countText, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v24 = LocalizationManager__Get((System_String_o *)StringLiteral_6971/*"GET_LIMIT_UP_REWARD_TITLE"*/, 0LL);
  LimitCntMax = (GiftMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6970/*"GET_LIMIT_UP_REWARD_DETAIL"*/, 0LL);
  if ( !*(_QWORD *)v17 )
    goto LABEL_35;
  v26 = (Il2CppObject *)nameText;
  v27 = (System_String_o *)LimitCntMax;
  v35 = *(_DWORD *)(*(_QWORD *)v17 + 28LL);
  v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v35, v25);
  v29 = System_String__Format_44753704(v27, v26, v28, 0LL);
  v30 = LimitUpResultCheckComponent__CreateResultInfoObject_object_(
          this,
          (Il2CppObject *)this->fields.limitUpResultInfoRewardOrigin,
          (const MethodInfo_1D530D8 *)Method_LimitUpResultCheckComponent_CreateResultInfoObject_LimitUpResultInfoRewardComponent___);
  if ( rewardGiftDataList )
  {
    v31 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_int____bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v31,
      (Il2CppObject *)v5,
      Method_LimitUpResultCheckComponent___c__DisplayClass46_0__checkLimitUpReward_b__0__,
      (const MethodInfo_29AC578 *)Method_System_Func_int____bool___ctor__);
    v32 = !BasicHelper__Any_WarBoardData_SquareRangeSearch_(
             (System_Collections_Generic_List_T__o *)rewardGiftDataList,
             (System_Func_T__bool__o *)v31,
             (const MethodInfo_1BDCA88 *)Method_BasicHelper_Any_int_____);
  }
  else
  {
    v32 = 1;
  }
  LimitCntMax = *(GiftMaster_o **)v17;
  if ( !*(_QWORD *)v17
    || (LimitCntMax = (GiftMaster_o *)GiftEntity__getIconImageId((GiftEntity_o *)LimitCntMax, 0LL), !v30)
    || (LimitUpResultInfoRewardComponent__Setup(
          (LimitUpResultInfoRewardComponent_o *)v30,
          (int32_t)LimitCntMax,
          v32,
          v24,
          v29,
          v33),
        resInfoList = this->fields.resInfoList,
        LimitCntMax = (GiftMaster_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v30, 0LL),
        !resInfoList) )
  {
LABEL_35:
    sub_B7076C(LimitCntMax, v8);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)resInfoList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)LimitCntMax,
    (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_GameObject__Add__);
  this->fields.isGetReward = 1;
}


void __fastcall LimitUpResultCheckComponent__checkQuestOpen(
        LimitUpResultCheckComponent_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x0
  __int64 v4; // x1
  int32_t svtCollectionLimitCnt; // w8
  UserServantEntity_o *baseUsrSvtData; // x0
  int32_t LimitCntMax; // w20
  struct UserServantEntity_o *resUsrSvtData; // x8
  clsQuestCheck_o *v9; // x21
  __int64 v10; // x22
  __int64 v11; // x23
  System_Collections_Generic_List_int__o *v12; // x0
  struct UserServantEntity_o *v13; // x8
  clsQuestCheck_o *v14; // x20
  __int64 v15; // x21
  __int64 v16; // x22
  System_Collections_Generic_List_int__o *v17; // x20
  UILabel_o *storyQuestInfoTitle; // x21
  UILabel_o *heroQuestInfoTitle; // x21
  const MethodInfo *v20; // x2
  __int64 size; // x8
  __int64 v22; // x21
  int32_t v23; // w1
  __int64 v24; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  if ( (byte_43511C3 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_B70694(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_B70694(&System_Collections_Generic_List_int__TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_B70694(&SingletonTemplate_clsQuestCheck__TypeInfo);
    sub_B70694(&StringLiteral_9888/*"OPEN_STORY_QUEST_TITLE"*/);
    sub_B70694(&StringLiteral_9877/*"OPEN_HERO_QUEST_TITLE"*/);
    byte_43511C3 = 1;
  }
  this->fields.isOpenQuest = 0;
  v3 = (System_Collections_Generic_List_int__o *)sub_B70764(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_30B547C *)Method_System_Collections_Generic_List_int___ctor__);
  svtCollectionLimitCnt = this->fields.svtCollectionLimitCnt;
  if ( (svtCollectionLimitCnt & 0x80000000) == 0 )
  {
    if ( this->fields.kind == 19 )
    {
      baseUsrSvtData = this->fields.baseUsrSvtData;
      if ( !baseUsrSvtData )
        goto LABEL_44;
      LimitCntMax = svtCollectionLimitCnt + 1;
      if ( UserServantEntity__getLimitCntMax(baseUsrSvtData, 0LL) < svtCollectionLimitCnt + 1 )
      {
        baseUsrSvtData = this->fields.baseUsrSvtData;
        if ( !baseUsrSvtData )
          goto LABEL_44;
        LimitCntMax = UserServantEntity__getLimitCntMax(baseUsrSvtData, 0LL);
      }
      if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
      }
      baseUsrSvtData = (UserServantEntity_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
      resUsrSvtData = this->fields.resUsrSvtData;
      if ( !resUsrSvtData )
        goto LABEL_44;
      v9 = (clsQuestCheck_o *)baseUsrSvtData;
      v11 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
      v10 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v25.fields.currentCryptoKey = v11;
      *(_QWORD *)&v25.fields.fakeValue = v10;
      baseUsrSvtData = (UserServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(
                                                v25,
                                                0LL);
      if ( !v9 )
LABEL_44:
        sub_B7076C(baseUsrSvtData, v4);
      v12 = clsQuestCheck__GetReleaseQuestIdByServantLimit_22186300(
              v9,
              (int32_t)baseUsrSvtData,
              this->fields.svtCollectionLimitCnt,
              LimitCntMax,
              238,
              0LL);
    }
    else
    {
      if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
      }
      baseUsrSvtData = (UserServantEntity_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
      v13 = this->fields.resUsrSvtData;
      if ( !v13 )
        goto LABEL_44;
      v14 = (clsQuestCheck_o *)baseUsrSvtData;
      v16 = *(_QWORD *)&v13->fields.svtId.fields.currentCryptoKey;
      v15 = *(_QWORD *)&v13->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v26.fields.currentCryptoKey = v16;
      *(_QWORD *)&v26.fields.fakeValue = v15;
      baseUsrSvtData = (UserServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(
                                                v26,
                                                0LL);
      if ( !v14 )
        goto LABEL_44;
      v12 = clsQuestCheck__GetReleaseQuestIdByServantLimit(
              v14,
              (int32_t)baseUsrSvtData,
              this->fields.svtCollectionLimitCnt,
              0LL);
    }
    v17 = v12;
    storyQuestInfoTitle = this->fields.storyQuestInfoTitle;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    baseUsrSvtData = (UserServantEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9888/*"OPEN_STORY_QUEST_TITLE"*/, 0LL);
    if ( storyQuestInfoTitle )
    {
      UILabel__set_text(storyQuestInfoTitle, (System_String_o *)baseUsrSvtData, 0LL);
      heroQuestInfoTitle = this->fields.heroQuestInfoTitle;
      baseUsrSvtData = (UserServantEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9877/*"OPEN_HERO_QUEST_TITLE"*/, 0LL);
      if ( heroQuestInfoTitle )
      {
        UILabel__set_text(heroQuestInfoTitle, (System_String_o *)baseUsrSvtData, 0LL);
        baseUsrSvtData = (UserServantEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( baseUsrSvtData )
        {
          DataManager__GetMasterData_WarQuestSelectionMaster_(
            (DataManager_o *)baseUsrSvtData,
            (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
          if ( v17 )
          {
            LODWORD(size) = v17->fields._size;
            if ( (int)size >= 1 )
            {
              v22 = 8LL;
              do
              {
                if ( v22 - 8 >= (unsigned __int64)(unsigned int)size )
                  System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
                v23 = *((_DWORD *)&v17->fields._items->obj.klass + v22);
                if ( v23 >= 1 )
                {
                  if ( v22 - 8 >= (unsigned __int64)(unsigned int)v17->fields._size )
                    System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
                  LimitUpResultCheckComponent__SetResInfoListQuestInfo(this, v23, v20);
                }
                size = v17->fields._size;
                v24 = v22 - 7;
                ++v22;
              }
              while ( v24 < size );
            }
          }
          return;
        }
      }
    }
    goto LABEL_44;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall LimitUpResultCheckComponent__checkResultLimitUp(
        LimitUpResultCheckComponent_o *this,
        int32_t kind,
        UserServantEntity_o *baseData,
        UserServantEntity_o *resData,
        int32_t baseCollectionLimitCnt,
        System_Collections_Generic_List_int____o *rewardGiftDataList,
        const MethodInfo *method)
{
  System_Int32_array *v7; // x7
  struct UserServantEntity_o **p_resUsrSvtData; // x21
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v21; // x22
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  __int64 v28; // x1
  UserServantEntity_o *resUsrSvtData; // x0
  struct UserServantEntity_o *v30; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v31; // x21
  __int64 v32; // x22
  __int64 v33; // x23
  const MethodInfo *v34; // x1
  const MethodInfo *v35; // x2
  int32_t v36; // w21
  const MethodInfo *v37; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16

  if ( (byte_43511C0 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMaster_ServantMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_B70694(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_43511C0 = 1;
  }
  this->fields.baseUsrSvtData = baseData;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.baseUsrSvtData,
    (System_Int32_array **)baseData,
    (System_String_array **)baseData,
    (System_String_array **)resData,
    *(System_Boolean_array ***)&baseCollectionLimitCnt,
    (System_Int32_array **)rewardGiftDataList,
    (System_Int32_array *)method,
    v7);
  this->fields.resUsrSvtData = resData;
  p_resUsrSvtData = &this->fields.resUsrSvtData;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.resUsrSvtData,
    (System_Int32_array **)resData,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  this->fields.svtCollectionLimitCnt = baseCollectionLimitCnt;
  this->fields.kind = kind;
  v21 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v21,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.resInfoList = (struct System_Collections_Generic_List_GameObject__o *)v21;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.resInfoList,
    (System_Int32_array **)v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  resUsrSvtData = this->fields.resUsrSvtData;
  *(_DWORD *)&this->fields.isGetNewSkill = 0;
  if ( !resUsrSvtData )
    goto LABEL_19;
  this->fields.transformationCount = UserServantEntity__GetTransformCount(resUsrSvtData, 1, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  resUsrSvtData = (UserServantEntity_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ServantMaster___);
  v30 = *p_resUsrSvtData;
  if ( !*p_resUsrSvtData )
    goto LABEL_19;
  v31 = (DataMasterBase_WarMaster__WarEntity__int__o *)resUsrSvtData;
  v33 = *(_QWORD *)&v30->fields.svtId.fields.currentCryptoKey;
  v32 = *(_QWORD *)&v30->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v38.fields.currentCryptoKey = v33;
  *(_QWORD *)&v38.fields.fakeValue = v32;
  resUsrSvtData = (UserServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v38, 0LL);
  if ( !v31
    || (resUsrSvtData = (UserServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                 v31,
                                                 (int32_t)resUsrSvtData,
                                                 (const MethodInfo_21C0440 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_19:
    sub_B7076C(resUsrSvtData, v28);
  }
  if ( ServantEntity__get_IsServant((ServantEntity_o *)resUsrSvtData, 0LL) )
  {
    if ( this->fields.transformationCount >= 1 )
    {
      v36 = 0;
      do
        LimitUpResultCheckComponent__checkGetSkill(this, v36++, v35);
      while ( v36 < this->fields.transformationCount );
    }
    LimitUpResultCheckComponent__checkQuestOpen(this, v34);
    LimitUpResultCheckComponent__checkLimitUpReward(this, rewardGiftDataList, v37);
  }
}


void __fastcall LimitUpResultCheckComponent___c__DisplayClass46_0___ctor(
        LimitUpResultCheckComponent___c__DisplayClass46_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall LimitUpResultCheckComponent___c__DisplayClass46_0___checkLimitUpReward_b__0(
        LimitUpResultCheckComponent___c__DisplayClass46_0_o *this,
        System_Int32_array *data,
        const MethodInfo *method)
{
  il2cpp_array_size_t max_length; // w8
  struct GiftEntity_o *giftEntity; // x8
  __int64 v6; // x0

  if ( !data )
    goto LABEL_10;
  max_length = data->max_length;
  if ( !max_length )
  {
LABEL_9:
    v6 = sub_B70798(this);
    sub_B70738(v6, 0LL);
  }
  if ( data->m_Items[1] == this->fields.afterLimitCnt )
  {
    if ( max_length > 1 )
    {
      giftEntity = this->fields.giftEntity;
      if ( giftEntity )
        return data->m_Items[2] == giftEntity->fields.id;
LABEL_10:
      sub_B7076C(this, data);
    }
    goto LABEL_9;
  }
  return 0;
}