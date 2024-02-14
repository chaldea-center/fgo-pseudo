void __fastcall LimitUpResultCheckComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4213EE6 & 1) == 0 )
  {
    sub_B0D8A4(&LimitUpResultCheckComponent_TypeInfo, v1);
    byte_4213EE6 = 1;
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

  if ( (byte_4213EE0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__get_Count__, method);
    byte_4213EE0 = 1;
  }
  resInfoList = this->fields.resInfoList;
  return !resInfoList || resInfoList->fields._size <= 0;
}


Il2CppObject *__fastcall LimitUpResultCheckComponent__CreateResultInfoObject_object_(
        LimitUpResultCheckComponent_o *this,
        Il2CppObject *origin,
        const MethodInfo_1B6AE58 *method)
{
  LimitUpResultCheckComponent_o *v5; // x20
  UnityEngine_Transform_o *transform; // x2

  if ( !this
    || (v5 = this,
        (this = (LimitUpResultCheckComponent_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL)) == 0LL) )
  {
    sub_B0D97C(this);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *resInfoList; // x8
  OpenInfoWindowComponent_o *openInfowindowComp; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  LimitUpResultCheckComponent_c *v17; // x0
  int32_t CONCURRENTLY_DISP_NUM; // w24
  LimitUpResultCheckComponent_c *v19; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x22
  struct System_Collections_Generic_List_GameObject__o *v21; // x8
  int32_t v22; // w25
  OpenInfoWindowComponent_o *v23; // x21

  if ( (byte_4213EDF & 1) == 0 )
  {
    sub_B0D8A4(&LimitUpResultCheckComponent_TypeInfo, callback);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__RemoveAt__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject___ctor__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v11);
    sub_B0D8A4(&System_Collections_Generic_List_GameObject__TypeInfo, v12);
    byte_4213EDF = 1;
  }
  resInfoList = this->fields.resInfoList;
  if ( !resInfoList || resInfoList->fields._size <= 0 )
  {
    ActionExtensions__Call(callback, 0LL);
    return;
  }
  openInfowindowComp = this->fields.openInfowindowComp;
  if ( !openInfowindowComp )
    goto LABEL_34;
  OpenInfoWindowComponent__Init(openInfowindowComp, 0LL);
  v17 = LimitUpResultCheckComponent_TypeInfo;
  if ( (BYTE3(LimitUpResultCheckComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LimitUpResultCheckComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LimitUpResultCheckComponent_TypeInfo);
    v17 = LimitUpResultCheckComponent_TypeInfo;
  }
  CONCURRENTLY_DISP_NUM = v17->static_fields->CONCURRENTLY_DISP_NUM;
  if ( !this->fields.isChangeSkill )
  {
    openInfowindowComp = (OpenInfoWindowComponent_o *)this->fields.resUsrSvtData;
    if ( !openInfowindowComp )
      goto LABEL_34;
    if ( UserServantEntity__isLimitCountMax((UserServantEntity_o *)openInfowindowComp, 0LL) )
    {
      v19 = LimitUpResultCheckComponent_TypeInfo;
      if ( (BYTE3(LimitUpResultCheckComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LimitUpResultCheckComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LimitUpResultCheckComponent_TypeInfo);
        v19 = LimitUpResultCheckComponent_TypeInfo;
      }
      CONCURRENTLY_DISP_NUM = v19->static_fields->CONCURRENTLY_DISP_NUM_BY_LIMIT_MAX;
    }
  }
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_GameObject__TypeInfo,
                                                                                                  v15,
                                                                                                  v16);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  v21 = this->fields.resInfoList;
  if ( !v21 )
LABEL_34:
    sub_B0D97C(openInfowindowComp);
  v22 = 0;
  while ( v21->fields._size > 0 && v22 < CONCURRENTLY_DISP_NUM && (v22 == 0 || !this->fields.isChangeSkill) )
  {
    if ( v20 )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v20,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v21->fields._items->m_Items[0],
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_GameObject__Add__);
      openInfowindowComp = (OpenInfoWindowComponent_o *)this->fields.resInfoList;
      if ( openInfowindowComp )
      {
        System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)openInfowindowComp,
          0,
          (const MethodInfo_2FC73D8 *)Method_System_Collections_Generic_List_GameObject__RemoveAt__);
        v21 = this->fields.resInfoList;
        ++v22;
        if ( v21 )
          continue;
      }
    }
    goto LABEL_34;
  }
  if ( this->fields.isChangeSkill )
  {
    openInfowindowComp = this->fields.openInfowindowComp;
    this->fields.isChangeSkill = 0;
    if ( openInfowindowComp )
    {
      OpenInfoWindowComponent__OpenResultInfo(
        openInfowindowComp,
        (System_Collections_Generic_List_GameObject__o *)v20,
        callback,
        isFirstDisp,
        0LL);
      return;
    }
    goto LABEL_34;
  }
  openInfowindowComp = (OpenInfoWindowComponent_o *)LimitUpResultCheckComponent_TypeInfo;
  v23 = this->fields.openInfowindowComp;
  if ( (BYTE3(LimitUpResultCheckComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LimitUpResultCheckComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LimitUpResultCheckComponent_TypeInfo);
  }
  if ( !v23 )
    goto LABEL_34;
  OpenInfoWindowComponent__OpenLimitUpResultInfo(
    v23,
    (System_Collections_Generic_List_GameObject__o *)v20,
    callback,
    isFirstDisp,
    LimitUpResultCheckComponent_TypeInfo->static_fields->LIMIT_UP_DIALOG_GRID_HEIGHT,
    0LL);
}


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
      sub_B0D97C(openInfowindowComp);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)openInfowindowComp, isActive, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall LimitUpResultCheckComponent__SetResInfoListQuestInfo(
        LimitUpResultCheckComponent_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  ServantLimitImageMaster_o *Master_WarQuestSelectionMaster; // x24
  DataMasterBase_WarMaster__WarEntity__int__o *Entity; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v21; // x20
  System_String_o *v22; // x23
  System_String_o *v23; // x22
  System_String_o *v24; // x0
  __int64 *v25; // x21
  Il2CppObject *Value; // x21
  System_String_o *v27; // x0
  __int64 *v28; // x8
  System_String_o *v29; // x0
  UnityEngine_Component_o *v30; // x20
  struct System_Collections_Generic_List_GameObject__o *resInfoList; // x19

  if ( (byte_4213EE2 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_ConstantStrMaster___, *(_QWORD *)&questId);
    sub_B0D8A4(&Method_DataManager_GetMaster_QuestMaster___, v5);
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v6);
    sub_B0D8A4(&DataManager_TypeInfo, v7);
    sub_B0D8A4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v8);
    sub_B0D8A4(&Method_LimitUpResultCheckComponent_CreateResultInfoObject_LimitUpResultInfoComponent___, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__Add__, v10);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v11);
    sub_B0D8A4(&StringLiteral_9792/*"OPEN_MAIN_SCENARIO_TITLE"*/, v12);
    sub_B0D8A4(&StringLiteral_9798/*"OPEN_STORY_QUEST_TITLE_LIMIT_UP"*/, v13);
    sub_B0D8A4(&StringLiteral_9789/*"OPEN_LIMIT_UNSEALED_QUEST_NAME_LIMIT_UP"*/, v14);
    sub_B0D8A4(&StringLiteral_9790/*"OPEN_LIMIT_UNSEALED_QUEST_TITLE_LIMIT_UP"*/, v15);
    sub_B0D8A4(&StringLiteral_9785/*"OPEN_EVENT_QUEST_NAME_LIMIT_UP"*/, v16);
    sub_B0D8A4(&StringLiteral_9786/*"OPEN_EVENT_QUEST_TITLE_LIMIT_UP"*/, v17);
    sub_B0D8A4(&StringLiteral_9791/*"OPEN_MAIN_QUEST_TITLE_LIMIT_UP"*/, v18);
    byte_4213EE2 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  Entity = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !Entity )
    goto LABEL_47;
  Entity = (DataMasterBase_WarMaster__WarEntity__int__o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                            Entity,
                                                            questId,
                                                            (const MethodInfo_2669BD4 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( !Entity )
    goto LABEL_47;
  v21 = Entity;
  v22 = 0LL;
  v23 = 0LL;
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
        v24 = LocalizationManager__Get((System_String_o *)StringLiteral_9790/*"OPEN_LIMIT_UNSEALED_QUEST_TITLE_LIMIT_UP"*/, 0LL);
        v25 = &StringLiteral_9789/*"OPEN_LIMIT_UNSEALED_QUEST_NAME_LIMIT_UP"*/;
      }
      else
      {
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        Entity = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ConstantStrMaster___);
        if ( !Entity )
          goto LABEL_47;
        Value = (Il2CppObject *)ConstantStrMaster__GetValue(
                                  (ConstantStrMaster_o *)Entity,
                                  (System_String_o *)StringLiteral_9792/*"OPEN_MAIN_SCENARIO_TITLE"*/,
                                  0LL);
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v27 = LocalizationManager__Get((System_String_o *)StringLiteral_9791/*"OPEN_MAIN_QUEST_TITLE_LIMIT_UP"*/, 0LL);
        v24 = System_String__Format(v27, Value, 0LL);
LABEL_27:
        v25 = &StringLiteral_9785/*"OPEN_EVENT_QUEST_NAME_LIMIT_UP"*/;
      }
LABEL_40:
      v23 = v24;
      v29 = LocalizationManager__Get((System_String_o *)*v25, 0LL);
      v22 = System_String__Format(v29, (Il2CppObject *)v21->fields._MasterName_k__BackingField, 0LL);
      this->fields.isOpenQuest = 1;
LABEL_41:
      if ( !System_String__IsNullOrEmpty(v23, 0LL) && !System_String__IsNullOrEmpty(v22, 0LL) )
      {
        Entity = (DataMasterBase_WarMaster__WarEntity__int__o *)LimitUpResultCheckComponent__CreateResultInfoObject_object_(
                                                                  this,
                                                                  (Il2CppObject *)this->fields.limitUpResultInfoStoryOrigin,
                                                                  (const MethodInfo_1B6AE58 *)Method_LimitUpResultCheckComponent_CreateResultInfoObject_LimitUpResultInfoComponent___);
        if ( Entity )
        {
          v30 = (UnityEngine_Component_o *)Entity;
          ((void (__fastcall *)(DataMasterBase_WarMaster__WarEntity__int__o *, System_String_o *, System_String_o *, Il2CppMethodPointer))Entity->klass->vtable._4_getList.method)(
            Entity,
            v23,
            v22,
            Entity->klass->vtable._5_ForForceDerived.methodPtr);
          resInfoList = this->fields.resInfoList;
          Entity = (DataMasterBase_WarMaster__WarEntity__int__o *)UnityEngine_Component__get_gameObject(v30, 0LL);
          if ( resInfoList )
          {
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)resInfoList,
              (EventMissionProgressRequest_Argument_ProgressData_o *)Entity,
              (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_GameObject__Add__);
            return;
          }
        }
LABEL_47:
        sub_B0D97C(Entity);
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
        v25 = &StringLiteral_9789/*"OPEN_LIMIT_UNSEALED_QUEST_NAME_LIMIT_UP"*/;
        v28 = &StringLiteral_9790/*"OPEN_LIMIT_UNSEALED_QUEST_TITLE_LIMIT_UP"*/;
      }
      else
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v25 = &StringLiteral_9785/*"OPEN_EVENT_QUEST_NAME_LIMIT_UP"*/;
        v28 = &StringLiteral_9798/*"OPEN_STORY_QUEST_TITLE_LIMIT_UP"*/;
      }
      v24 = LocalizationManager__Get((System_String_o *)*v28, 0LL);
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
      v24 = LocalizationManager__Get((System_String_o *)StringLiteral_9786/*"OPEN_EVENT_QUEST_TITLE_LIMIT_UP"*/, 0LL);
      goto LABEL_27;
    default:
      v23 = 0LL;
      goto LABEL_41;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall LimitUpResultCheckComponent__SetSkillRelease(
        LimitUpResultCheckComponent_o *this,
        int32_t skillId,
        int32_t targetIdx,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  SkillEntity_o *Entity; // x23
  System_String_o *v18; // x22
  System_String_o *v19; // x0
  System_String_o *v20; // x23
  struct UserServantEntity_o *resUsrSvtData; // x8
  ServantSkillMaster_o *v22; // x24
  __int64 v23; // x25
  __int64 v24; // x26
  ServantSkillEntity_o *EntityFromSkillId; // x24
  const MethodInfo *v26; // x6
  UnityEngine_Component_o *v27; // x21
  struct System_Collections_Generic_List_GameObject__o *resInfoList; // x20
  System_String_o *detail; // [xsp+0h] [xbp-50h] BYREF
  System_String_o *name; // [xsp+8h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16

  if ( (byte_4213EE4 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantSkillMaster___, *(_QWORD *)&skillId);
    sub_B0D8A4(&Method_DataManager_GetMaster_SkillMaster___, v7);
    sub_B0D8A4(&DataManager_TypeInfo, v8);
    sub_B0D8A4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v9);
    sub_B0D8A4(&Method_LimitUpResultCheckComponent_CreateResultInfoObject_LimitUpResultInfoSkillComponent___, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__Add__, v11);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v12);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_B0D8A4(&StringLiteral_6898/*"GET_SKILL_TITLE"*/, v14);
    sub_B0D8A4(&StringLiteral_6897/*"GET_SKILL_NAME_LIMIT_UP"*/, v15);
    byte_4213EE4 = 1;
  }
  detail = 0LL;
  name = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_SkillMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_20;
  Entity = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              Master_WarQuestSelectionMaster,
                              skillId,
                              (const MethodInfo_2669BD4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)LocalizationManager__Get(
                                                                                    (System_String_o *)StringLiteral_6898/*"GET_SKILL_TITLE"*/,
                                                                                    0LL);
  if ( !this->fields.resUsrSvtData )
    goto LABEL_20;
  v18 = (System_String_o *)Master_WarQuestSelectionMaster;
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)UserServantEntity__getSkillLevel(
                                                                                    this->fields.resUsrSvtData,
                                                                                    targetIdx,
                                                                                    0LL);
  if ( !Entity )
    goto LABEL_20;
  SkillEntity__getSkillMessageInfo(Entity, &name, &detail, (int32_t)Master_WarQuestSelectionMaster, 0LL);
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_6897/*"GET_SKILL_NAME_LIMIT_UP"*/, 0LL);
  v20 = System_String__Format(v19, (Il2CppObject *)name, 0LL);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantSkillMaster___);
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_20;
  v22 = (ServantSkillMaster_o *)Master_WarQuestSelectionMaster;
  v24 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v23 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v31.fields.currentCryptoKey = v24;
  *(_QWORD *)&v31.fields.fakeValue = v23;
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                                                                    v31,
                                                                                    0LL);
  if ( !v22
    || (EntityFromSkillId = ServantSkillMaster__getEntityFromSkillId(
                              v22,
                              (int32_t)Master_WarQuestSelectionMaster,
                              targetIdx + 1,
                              skillId,
                              0LL),
        (Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)LimitUpResultCheckComponent__CreateResultInfoObject_object_(
                                                                                           this,
                                                                                           (Il2CppObject *)this->fields.limitUpResultInfoSkillOrigin,
                                                                                           (const MethodInfo_1B6AE58 *)Method_LimitUpResultCheckComponent_CreateResultInfoObject_LimitUpResultInfoSkillComponent___)) == 0LL)
    || (v27 = (UnityEngine_Component_o *)Master_WarQuestSelectionMaster,
        LimitUpResultInfoSkillComponent__Setup(
          (LimitUpResultInfoSkillComponent_o *)Master_WarQuestSelectionMaster,
          skillId,
          v20,
          EntityFromSkillId,
          v18,
          detail,
          v26),
        resInfoList = this->fields.resInfoList,
        Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)UnityEngine_Component__get_gameObject(
                                                                                          v27,
                                                                                          0LL),
        !resInfoList) )
  {
LABEL_20:
    sub_B0D97C(Master_WarQuestSelectionMaster);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)resInfoList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)Master_WarQuestSelectionMaster,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_GameObject__Add__);
  this->fields.isGetNewSkill = 1;
}


void __fastcall LimitUpResultCheckComponent__checkGetSkill(
        LimitUpResultCheckComponent_o *this,
        const MethodInfo *method)
{
  LimitUpResultCheckComponent_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int64 v13; // x20
  __int64 v14; // x21
  int v15; // w21
  System_Int32_array *SkillIdList; // x0
  int32_t kind; // w8
  System_Int32_array *v18; // x20
  int32_t LimitCntMax; // w21
  int32_t v20; // w2
  LimitUpResultCheckComponent_o *v21; // x22
  int max_length; // w8
  unsigned int v23; // w9
  unsigned int v24; // w21
  char *v25; // x23
  int32_t *v26; // x23
  int v27; // w25
  int v28; // t1
  char *v29; // x24
  int v30; // w9
  int32_t *v31; // x24
  int v32; // t1
  const MethodInfo *v33; // x3
  int32_t v34; // w22
  int32_t v35; // w20
  DataMasterBase_WarMaster__WarEntity__int__o *v36; // x23
  SkillEntity_o *Entity; // x22
  SkillEntity_o *v38; // x20
  int32_t v39; // w23
  int32_t SkillLevel; // w0
  UILabel_o *skillChangeInfoTitle; // x24
  int32_t v42; // w21
  UILabel_o *skillChangeInfoSubTitleOld; // x24
  UILabel_o *skillChangeInfoSubTitleNow; // x24
  UILabel_o *skillChangeInfoNameOld; // x22
  System_String_o *v46; // x0
  UILabel_o *skillChangeInfoNameNow; // x20
  System_String_o *v48; // x0
  __int64 v49; // x0
  System_String_o *detail; // [xsp+8h] [xbp-48h] BYREF
  System_String_o *name; // [xsp+18h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16

  v2 = this;
  if ( (byte_4213EE3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_SkillMaster___, method);
    sub_B0D8A4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__Add__, v4);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v5);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_B0D8A4(&StringLiteral_6896/*"GET_SKILL_NAME"*/, v8);
    sub_B0D8A4(&StringLiteral_1669/*"AFTER_CHANGE_SKILL_SUB_TITLE"*/, v9);
    sub_B0D8A4(&StringLiteral_2968/*"CHANGE_SKILL_TITLE"*/, v10);
    this = (LimitUpResultCheckComponent_o *)sub_B0D8A4(&StringLiteral_2554/*"BEFORE_CHANGE_SKILL_SUB_TITLE"*/, v11);
    byte_4213EE3 = 1;
  }
  name = 0LL;
  detail = 0LL;
  baseUsrSvtData = v2->fields.baseUsrSvtData;
  *(_WORD *)&v2->fields.isGetNewSkill = 0;
  if ( !baseUsrSvtData )
    goto LABEL_55;
  v14 = *(_QWORD *)&baseUsrSvtData->fields.limitCount.fields.currentCryptoKey;
  v13 = *(_QWORD *)&baseUsrSvtData->fields.limitCount.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v52.fields.currentCryptoKey = v14;
  *(_QWORD *)&v52.fields.fakeValue = v13;
  this = (LimitUpResultCheckComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v52, 0LL);
  if ( !v2->fields.baseUsrSvtData )
    goto LABEL_55;
  v15 = (int)this;
  SkillIdList = UserServantEntity__getSkillIdList(v2->fields.baseUsrSvtData, -1, (int32_t)this, 1, 0LL);
  kind = v2->fields.kind;
  v18 = SkillIdList;
  if ( kind == 19 || kind == 10 )
  {
    this = (LimitUpResultCheckComponent_o *)v2->fields.baseUsrSvtData;
    if ( !this )
      goto LABEL_55;
    LimitCntMax = v15 + 1;
    if ( UserServantEntity__getLimitCntMax((UserServantEntity_o *)this, 0LL) < LimitCntMax )
    {
      this = (LimitUpResultCheckComponent_o *)v2->fields.baseUsrSvtData;
      if ( !this )
        goto LABEL_55;
      LimitCntMax = UserServantEntity__getLimitCntMax((UserServantEntity_o *)this, 0LL);
    }
    this = (LimitUpResultCheckComponent_o *)v2->fields.resUsrSvtData;
    if ( !this )
LABEL_55:
      sub_B0D97C(this);
    v20 = LimitCntMax;
  }
  else
  {
    this = (LimitUpResultCheckComponent_o *)v2->fields.resUsrSvtData;
    if ( !this )
      goto LABEL_55;
    v20 = -1;
  }
  this = (LimitUpResultCheckComponent_o *)UserServantEntity__getSkillIdList(
                                            (UserServantEntity_o *)this,
                                            -1,
                                            v20,
                                            1,
                                            0LL);
  v21 = this;
  if ( !v18 )
    goto LABEL_55;
  max_length = v18->max_length;
  if ( max_length >= 1 )
  {
    v23 = 0;
    while ( 1 )
    {
      if ( v23 >= max_length )
        goto LABEL_54;
      v24 = v23;
      v25 = (char *)v18 + 4 * (int)v23;
      v28 = *((_DWORD *)v25 + 8);
      v26 = (int32_t *)(v25 + 32);
      v27 = v28;
      if ( !this )
        goto LABEL_55;
      if ( v23 >= LODWORD(this->fields.openInfowindowComp) )
        goto LABEL_54;
      v29 = (char *)this + 4 * (int)v23;
      v32 = *((_DWORD *)v29 + 8);
      v31 = (int32_t *)(v29 + 32);
      v30 = v32;
      if ( v27 != v32 && v30 >= 1 )
        break;
      v23 = v24 + 1;
      if ( (int)(v24 + 1) >= max_length )
        return;
    }
    this = (LimitUpResultCheckComponent_o *)v2->fields.resUsrSvtData;
    if ( !this )
      goto LABEL_55;
    this = (LimitUpResultCheckComponent_o *)UserServantEntity__IsHeroine((UserServantEntity_o *)this, 0LL);
    if ( v27 >= 1 && ((unsigned __int8)this & 1) != 0 )
    {
      if ( v24 < v18->max_length && v24 < LODWORD(v21->fields.openInfowindowComp) )
      {
        v34 = *v26;
        v35 = *v31;
        this = (LimitUpResultCheckComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( this )
        {
          this = (LimitUpResultCheckComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                    (DataManager_o *)this,
                                                    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_SkillMaster___);
          if ( this )
          {
            v36 = (DataMasterBase_WarMaster__WarEntity__int__o *)this;
            Entity = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                        (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                        v34,
                                        (const MethodInfo_2669BD4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
            this = (LimitUpResultCheckComponent_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                      v36,
                                                      v35,
                                                      (const MethodInfo_2669BD4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
            if ( v2->fields.baseUsrSvtData )
            {
              v38 = (SkillEntity_o *)this;
              this = (LimitUpResultCheckComponent_o *)UserServantEntity__getSkillLevel(
                                                        v2->fields.baseUsrSvtData,
                                                        v24,
                                                        0LL);
              if ( v2->fields.resUsrSvtData )
              {
                v39 = (int)this;
                SkillLevel = UserServantEntity__getSkillLevel(v2->fields.resUsrSvtData, v24, 0LL);
                skillChangeInfoTitle = v2->fields.skillChangeInfoTitle;
                v42 = SkillLevel;
                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                }
                this = (LimitUpResultCheckComponent_o *)LocalizationManager__Get(
                                                          (System_String_o *)StringLiteral_2968/*"CHANGE_SKILL_TITLE"*/,
                                                          0LL);
                if ( skillChangeInfoTitle )
                {
                  UILabel__set_text(skillChangeInfoTitle, (System_String_o *)this, 0LL);
                  skillChangeInfoSubTitleOld = v2->fields.skillChangeInfoSubTitleOld;
                  this = (LimitUpResultCheckComponent_o *)LocalizationManager__Get(
                                                            (System_String_o *)StringLiteral_2554/*"BEFORE_CHANGE_SKILL_SUB_TITLE"*/,
                                                            0LL);
                  if ( skillChangeInfoSubTitleOld )
                  {
                    UILabel__set_text(skillChangeInfoSubTitleOld, (System_String_o *)this, 0LL);
                    skillChangeInfoSubTitleNow = v2->fields.skillChangeInfoSubTitleNow;
                    this = (LimitUpResultCheckComponent_o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_1669/*"AFTER_CHANGE_SKILL_SUB_TITLE"*/,
                                                              0LL);
                    if ( skillChangeInfoSubTitleNow )
                    {
                      UILabel__set_text(skillChangeInfoSubTitleNow, (System_String_o *)this, 0LL);
                      if ( Entity )
                      {
                        SkillEntity__getSkillMessageInfo(Entity, &name, &detail, v39, 0LL);
                        skillChangeInfoNameOld = v2->fields.skillChangeInfoNameOld;
                        v46 = LocalizationManager__Get((System_String_o *)StringLiteral_6896/*"GET_SKILL_NAME"*/, 0LL);
                        this = (LimitUpResultCheckComponent_o *)System_String__Format(v46, (Il2CppObject *)name, 0LL);
                        if ( skillChangeInfoNameOld )
                        {
                          UILabel__set_text(skillChangeInfoNameOld, (System_String_o *)this, 0LL);
                          this = (LimitUpResultCheckComponent_o *)v2->fields.skillChangeInfoDetailOld;
                          if ( this )
                          {
                            this = (LimitUpResultCheckComponent_o *)WrapControlText__textBBCodeAdjust(
                                                                      (UILabel_o *)this,
                                                                      detail,
                                                                      (int32_t)this[1].fields.skillChangeInfoDetailOld,
                                                                      0,
                                                                      0,
                                                                      0LL);
                            if ( v38 )
                            {
                              SkillEntity__getSkillMessageInfo(v38, &name, &detail, v42, 0LL);
                              skillChangeInfoNameNow = v2->fields.skillChangeInfoNameNow;
                              v48 = LocalizationManager__Get((System_String_o *)StringLiteral_6896/*"GET_SKILL_NAME"*/, 0LL);
                              this = (LimitUpResultCheckComponent_o *)System_String__Format(
                                                                        v48,
                                                                        (Il2CppObject *)name,
                                                                        0LL);
                              if ( skillChangeInfoNameNow )
                              {
                                UILabel__set_text(skillChangeInfoNameNow, (System_String_o *)this, 0LL);
                                this = (LimitUpResultCheckComponent_o *)v2->fields.skillChangeInfoDetailNow;
                                if ( this )
                                {
                                  WrapControlText__textBBCodeAdjust(
                                    (UILabel_o *)this,
                                    detail,
                                    (int32_t)this[1].fields.skillChangeInfoDetailOld,
                                    0,
                                    0,
                                    0LL);
                                  this = (LimitUpResultCheckComponent_o *)v2->fields.resInfoList;
                                  if ( this )
                                  {
                                    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
                                      (EventMissionProgressRequest_Argument_ProgressData_o *)v2->fields.skillChangeInfo,
                                      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_GameObject__Add__);
                                    *(_WORD *)&v2->fields.isGetNewSkill = 257;
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
      v49 = sub_B0D9A8(this);
      sub_B0D948(v49, 0LL);
    }
    if ( v24 >= LODWORD(v21->fields.openInfowindowComp) )
      goto LABEL_54;
    LimitUpResultCheckComponent__SetSkillRelease(v2, *v31, v24, v33);
  }
}


void __fastcall LimitUpResultCheckComponent__checkLimitUpReward(
        LimitUpResultCheckComponent_o *this,
        System_Collections_Generic_List_int____o *rewardGiftDataList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x21
  CombineLimitGiftMaster_o *Master_WarQuestSelectionMaster; // x23
  GiftMaster_o *LimitCntMax; // x0
  struct UserServantEntity_o *baseUsrSvtData; // x8
  GiftMaster_o *v23; // x22
  __int64 v24; // x24
  __int64 v25; // x25
  struct UserServantEntity_o *v26; // x8
  __int64 v27; // x24
  __int64 v28; // x25
  System_Int32_array **DataById; // x0
  __int64 v30; // x22
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_String_o *v37; // x23
  Il2CppObject *v38; // x25
  System_String_o *v39; // x24
  Il2CppObject *v40; // x0
  System_String_o *v41; // x24
  __int64 v42; // x1
  __int64 v43; // x2
  Il2CppObject *v44; // x25
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v45; // x26
  bool v46; // w20
  const MethodInfo *v47; // x5
  struct System_Collections_Generic_List_GameObject__o *resInfoList; // x20
  int v49; // [xsp+Ch] [xbp-54h] BYREF
  System_String_o *countText; // [xsp+10h] [xbp-50h] BYREF
  System_String_o *nameText; // [xsp+18h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16

  if ( (byte_4213EE5 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_Any_int_____, rewardGiftDataList);
    sub_B0D8A4(&Method_DataManager_GetMaster_CombineLimitGiftMaster___, v5);
    sub_B0D8A4(&Method_DataManager_GetMaster_GiftMaster___, v6);
    sub_B0D8A4(&DataManager_TypeInfo, v7);
    sub_B0D8A4(&Method_System_Func_int____bool___ctor__, v8);
    sub_B0D8A4(&System_Func_int____bool__TypeInfo, v9);
    sub_B0D8A4(&int_TypeInfo, v10);
    sub_B0D8A4(&Method_LimitUpResultCheckComponent_CreateResultInfoObject_LimitUpResultInfoRewardComponent___, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__Add__, v12);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v13);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_B0D8A4(&Method_LimitUpResultCheckComponent___c__DisplayClass44_0__checkLimitUpReward_b__0__, v15);
    sub_B0D8A4(&LimitUpResultCheckComponent___c__DisplayClass44_0_TypeInfo, v16);
    sub_B0D8A4(&StringLiteral_6893/*"GET_LIMIT_UP_REWARD_DETAIL"*/, v17);
    sub_B0D8A4(&StringLiteral_6894/*"GET_LIMIT_UP_REWARD_TITLE"*/, v18);
    byte_4213EE5 = 1;
  }
  countText = 0LL;
  nameText = 0LL;
  v19 = sub_B0D974(LimitUpResultCheckComponent___c__DisplayClass44_0_TypeInfo, rewardGiftDataList, method);
  LimitUpResultCheckComponent___c__DisplayClass44_0___ctor(
    (LimitUpResultCheckComponent___c__DisplayClass44_0_o *)v19,
    0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (CombineLimitGiftMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_CombineLimitGiftMaster___);
  LimitCntMax = (GiftMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_GiftMaster___);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_35;
  v23 = LimitCntMax;
  v25 = *(_QWORD *)&baseUsrSvtData->fields.limitCount.fields.currentCryptoKey;
  v24 = *(_QWORD *)&baseUsrSvtData->fields.limitCount.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v52.fields.currentCryptoKey = v25;
  *(_QWORD *)&v52.fields.fakeValue = v24;
  LimitCntMax = (GiftMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v52, 0LL);
  if ( !v19 )
    goto LABEL_35;
  *(_DWORD *)(v19 + 16) = (_DWORD)LimitCntMax + 1;
  LimitCntMax = (GiftMaster_o *)this->fields.baseUsrSvtData;
  if ( !LimitCntMax )
    goto LABEL_35;
  LimitCntMax = (GiftMaster_o *)UserServantEntity__getLimitCntMax((UserServantEntity_o *)LimitCntMax, 0LL);
  if ( (int)LimitCntMax < *(_DWORD *)(v19 + 16) )
  {
    LimitCntMax = (GiftMaster_o *)this->fields.baseUsrSvtData;
    if ( !LimitCntMax )
      goto LABEL_35;
    LimitCntMax = (GiftMaster_o *)UserServantEntity__getLimitCntMax((UserServantEntity_o *)LimitCntMax, 0LL);
    *(_DWORD *)(v19 + 16) = (_DWORD)LimitCntMax;
  }
  v26 = this->fields.baseUsrSvtData;
  if ( !v26 )
    goto LABEL_35;
  v28 = *(_QWORD *)&v26->fields.svtId.fields.currentCryptoKey;
  v27 = *(_QWORD *)&v26->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v53.fields.currentCryptoKey = v28;
  *(_QWORD *)&v53.fields.fakeValue = v27;
  LimitCntMax = (GiftMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v53, 0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_35;
  LimitCntMax = (GiftMaster_o *)CombineLimitGiftMaster__GetCombineLimitGiftId(
                                  Master_WarQuestSelectionMaster,
                                  (int32_t)LimitCntMax,
                                  *(_DWORD *)(v19 + 16),
                                  0LL);
  if ( !(_DWORD)LimitCntMax )
    return;
  if ( !v23 )
    goto LABEL_35;
  DataById = (System_Int32_array **)GiftMaster__getDataById(v23, (int32_t)LimitCntMax, 0LL);
  *(_QWORD *)(v19 + 24) = DataById;
  v30 = v19 + 24;
  sub_B0D840((BattleServantConfConponent_o *)(v19 + 24), DataById, v31, v32, v33, v34, v35, v36);
  if ( !*(_QWORD *)(v19 + 24) )
    return;
  GiftEntity__GetInfo(*(GiftEntity_o **)(v19 + 24), &nameText, &countText, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v37 = LocalizationManager__Get((System_String_o *)StringLiteral_6894/*"GET_LIMIT_UP_REWARD_TITLE"*/, 0LL);
  LimitCntMax = (GiftMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6893/*"GET_LIMIT_UP_REWARD_DETAIL"*/, 0LL);
  if ( !*(_QWORD *)v30 )
    goto LABEL_35;
  v38 = (Il2CppObject *)nameText;
  v39 = (System_String_o *)LimitCntMax;
  v49 = *(_DWORD *)(*(_QWORD *)v30 + 28LL);
  v40 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v49);
  v41 = System_String__Format_43845440(v39, v38, v40, 0LL);
  v44 = LimitUpResultCheckComponent__CreateResultInfoObject_object_(
          this,
          (Il2CppObject *)this->fields.limitUpResultInfoRewardOrigin,
          (const MethodInfo_1B6AE58 *)Method_LimitUpResultCheckComponent_CreateResultInfoObject_LimitUpResultInfoRewardComponent___);
  if ( rewardGiftDataList )
  {
    v45 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                               System_Func_int____bool__TypeInfo,
                                                                               v42,
                                                                               v43);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v45,
      (Il2CppObject *)v19,
      Method_LimitUpResultCheckComponent___c__DisplayClass44_0__checkLimitUpReward_b__0__,
      (const MethodInfo_26189B8 *)Method_System_Func_int____bool___ctor__);
    v46 = !BasicHelper__Any_WarBoardData_SquareRangeSearch_(
             (System_Collections_Generic_List_T__o *)rewardGiftDataList,
             (System_Func_T__bool__o *)v45,
             (const MethodInfo_1707138 *)Method_BasicHelper_Any_int_____);
  }
  else
  {
    v46 = 1;
  }
  LimitCntMax = *(GiftMaster_o **)v30;
  if ( !*(_QWORD *)v30
    || (LimitCntMax = (GiftMaster_o *)GiftEntity__getIconImageId((GiftEntity_o *)LimitCntMax, 0LL), !v44)
    || (LimitUpResultInfoRewardComponent__Setup(
          (LimitUpResultInfoRewardComponent_o *)v44,
          (int32_t)LimitCntMax,
          v46,
          v37,
          v41,
          v47),
        resInfoList = this->fields.resInfoList,
        LimitCntMax = (GiftMaster_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v44, 0LL),
        !resInfoList) )
  {
LABEL_35:
    sub_B0D97C(LimitCntMax);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)resInfoList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)LimitCntMax,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_GameObject__Add__);
  this->fields.isGetReward = 1;
}


void __fastcall LimitUpResultCheckComponent__checkQuestOpen(
        LimitUpResultCheckComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_int__o *v15; // x0
  int32_t svtCollectionLimitCnt; // w8
  UserServantEntity_o *baseUsrSvtData; // x0
  int32_t LimitCntMax; // w20
  struct UserServantEntity_o *resUsrSvtData; // x8
  clsQuestCheck_o *v20; // x21
  __int64 v21; // x22
  __int64 v22; // x23
  System_Collections_Generic_List_int__o *v23; // x0
  struct UserServantEntity_o *v24; // x8
  clsQuestCheck_o *v25; // x20
  __int64 v26; // x21
  __int64 v27; // x22
  System_Collections_Generic_List_int__o *v28; // x20
  UILabel_o *storyQuestInfoTitle; // x21
  UILabel_o *heroQuestInfoTitle; // x21
  const MethodInfo *v31; // x2
  __int64 size; // x8
  __int64 v33; // x21
  int32_t v34; // w1
  __int64 v35; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16

  if ( (byte_4213EE1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Count__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Item__, v6);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v7);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v8);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_B0D8A4(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v11);
    sub_B0D8A4(&SingletonTemplate_clsQuestCheck__TypeInfo, v12);
    sub_B0D8A4(&StringLiteral_9797/*"OPEN_STORY_QUEST_TITLE"*/, v13);
    sub_B0D8A4(&StringLiteral_9787/*"OPEN_HERO_QUEST_TITLE"*/, v14);
    byte_4213EE1 = 1;
  }
  this->fields.isOpenQuest = 0;
  v15 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, method, v2);
  System_Collections_Generic_List_int____ctor(
    v15,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
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
      baseUsrSvtData = (UserServantEntity_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
      resUsrSvtData = this->fields.resUsrSvtData;
      if ( !resUsrSvtData )
        goto LABEL_44;
      v20 = (clsQuestCheck_o *)baseUsrSvtData;
      v22 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
      v21 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v36.fields.currentCryptoKey = v22;
      *(_QWORD *)&v36.fields.fakeValue = v21;
      baseUsrSvtData = (UserServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                                v36,
                                                0LL);
      if ( !v20 )
LABEL_44:
        sub_B0D97C(baseUsrSvtData);
      v23 = clsQuestCheck__GetReleaseQuestIdByServantLimit_23805484(
              v20,
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
      baseUsrSvtData = (UserServantEntity_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
      v24 = this->fields.resUsrSvtData;
      if ( !v24 )
        goto LABEL_44;
      v25 = (clsQuestCheck_o *)baseUsrSvtData;
      v27 = *(_QWORD *)&v24->fields.svtId.fields.currentCryptoKey;
      v26 = *(_QWORD *)&v24->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v37.fields.currentCryptoKey = v27;
      *(_QWORD *)&v37.fields.fakeValue = v26;
      baseUsrSvtData = (UserServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                                v37,
                                                0LL);
      if ( !v25 )
        goto LABEL_44;
      v23 = clsQuestCheck__GetReleaseQuestIdByServantLimit(
              v25,
              (int32_t)baseUsrSvtData,
              this->fields.svtCollectionLimitCnt,
              0LL);
    }
    v28 = v23;
    storyQuestInfoTitle = this->fields.storyQuestInfoTitle;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    baseUsrSvtData = (UserServantEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9797/*"OPEN_STORY_QUEST_TITLE"*/, 0LL);
    if ( storyQuestInfoTitle )
    {
      UILabel__set_text(storyQuestInfoTitle, (System_String_o *)baseUsrSvtData, 0LL);
      heroQuestInfoTitle = this->fields.heroQuestInfoTitle;
      baseUsrSvtData = (UserServantEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9787/*"OPEN_HERO_QUEST_TITLE"*/, 0LL);
      if ( heroQuestInfoTitle )
      {
        UILabel__set_text(heroQuestInfoTitle, (System_String_o *)baseUsrSvtData, 0LL);
        baseUsrSvtData = (UserServantEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( baseUsrSvtData )
        {
          DataManager__GetMasterData_WarQuestSelectionMaster_(
            (DataManager_o *)baseUsrSvtData,
            (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
          if ( v28 )
          {
            LODWORD(size) = v28->fields._size;
            if ( (int)size >= 1 )
            {
              v33 = 8LL;
              do
              {
                if ( v33 - 8 >= (unsigned __int64)(unsigned int)size )
                  System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
                v34 = *((_DWORD *)&v28->fields._items->obj.klass + v33);
                if ( v34 >= 1 )
                {
                  if ( v33 - 8 >= (unsigned __int64)(unsigned int)v28->fields._size )
                    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
                  LimitUpResultCheckComponent__SetResInfoListQuestInfo(this, v34, v31);
                }
                size = v28->fields._size;
                v35 = v33 - 7;
                ++v33;
              }
              while ( v35 < size );
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
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  struct UserServantEntity_o **p_resUsrSvtData; // x23
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  __int64 v26; // x1
  __int64 v27; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v28; // x21
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  struct UserServantEntity_o *v36; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v37; // x21
  __int64 v38; // x22
  __int64 v39; // x23
  const MethodInfo *v40; // x1
  const MethodInfo *v41; // x1
  const MethodInfo *v42; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16

  if ( (byte_4213EDE & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantMaster___, *(_QWORD *)&kind);
    sub_B0D8A4(&DataManager_TypeInfo, v14);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject___ctor__, v16);
    sub_B0D8A4(&System_Collections_Generic_List_GameObject__TypeInfo, v17);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
    byte_4213EDE = 1;
  }
  this->fields.baseUsrSvtData = baseData;
  sub_B0D840(
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
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.resUsrSvtData,
    (System_Int32_array **)resData,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  this->fields.svtCollectionLimitCnt = baseCollectionLimitCnt;
  this->fields.kind = kind;
  v28 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_GameObject__TypeInfo,
                                                                                                  v26,
                                                                                                  v27);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v28,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.resInfoList = (struct System_Collections_Generic_List_GameObject__o *)v28;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.resInfoList,
    (System_Int32_array **)v28,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  *(_DWORD *)&this->fields.isGetNewSkill = 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantMaster___);
  v36 = *p_resUsrSvtData;
  if ( !*p_resUsrSvtData )
    goto LABEL_15;
  v37 = Master_WarQuestSelectionMaster;
  v39 = *(_QWORD *)&v36->fields.svtId.fields.currentCryptoKey;
  v38 = *(_QWORD *)&v36->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v43.fields.currentCryptoKey = v39;
  *(_QWORD *)&v43.fields.fakeValue = v38;
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                                                                    v43,
                                                                                    0LL);
  if ( !v37
    || (Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                                                          v37,
                                                                                          (int32_t)Master_WarQuestSelectionMaster,
                                                                                          (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_15:
    sub_B0D97C(Master_WarQuestSelectionMaster);
  }
  if ( ServantEntity__get_IsServant((ServantEntity_o *)Master_WarQuestSelectionMaster, 0LL) )
  {
    LimitUpResultCheckComponent__checkGetSkill(this, v40);
    LimitUpResultCheckComponent__checkQuestOpen(this, v41);
    LimitUpResultCheckComponent__checkLimitUpReward(this, rewardGiftDataList, v42);
  }
}


void __fastcall LimitUpResultCheckComponent___c__DisplayClass44_0___ctor(
        LimitUpResultCheckComponent___c__DisplayClass44_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall LimitUpResultCheckComponent___c__DisplayClass44_0___checkLimitUpReward_b__0(
        LimitUpResultCheckComponent___c__DisplayClass44_0_o *this,
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
    v6 = sub_B0D9A8(this);
    sub_B0D948(v6, 0LL);
  }
  if ( data->m_Items[1] == this->fields.afterLimitCnt )
  {
    if ( max_length > 1 )
    {
      giftEntity = this->fields.giftEntity;
      if ( giftEntity )
        return data->m_Items[2] == giftEntity->fields.id;
LABEL_10:
      sub_B0D97C(this);
    }
    goto LABEL_9;
  }
  return 0;
}