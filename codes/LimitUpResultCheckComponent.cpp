void __fastcall LimitUpResultCheckComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40FC259 & 1) == 0 )
  {
    sub_B16FFC(&LimitUpResultCheckComponent_TypeInfo, v1);
    byte_40FC259 = 1;
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

  if ( (byte_40FC253 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Count__, method);
    byte_40FC253 = 1;
  }
  resInfoList = this->fields.resInfoList;
  return !resInfoList || resInfoList->fields._size <= 0;
}


Il2CppObject *__fastcall LimitUpResultCheckComponent__CreateResultInfoObject_object_(
        LimitUpResultCheckComponent_o *this,
        Il2CppObject *origin,
        const MethodInfo_19D9360 *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *transform; // x2

  if ( !this || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL )
    sub_B170D4();
  transform = UnityEngine_GameObject__get_transform(gameObject, 0LL);
  return (Il2CppObject *)((__int64 (__fastcall *)(LimitUpResultCheckComponent_o *, Il2CppObject *, UnityEngine_Transform_o *, _QWORD))method->rgctx_data->_0_BaseMonoBehaviour_createObject_T_->methodPointer)(
                           this,
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
  __int64 v17; // x3
  __int64 v18; // x4
  LimitUpResultCheckComponent_c *v19; // x0
  int32_t CONCURRENTLY_DISP_NUM; // w24
  UserServantEntity_o *resUsrSvtData; // x0
  LimitUpResultCheckComponent_c *v22; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v23; // x22
  struct System_Collections_Generic_List_GameObject__o *v24; // x8
  int32_t v25; // w25
  struct System_Collections_Generic_List_GameObject__o *v26; // x0
  OpenInfoWindowComponent_o *v27; // x0
  OpenInfoWindowComponent_o *v28; // x21

  if ( (byte_40FC252 & 1) == 0 )
  {
    sub_B16FFC(&LimitUpResultCheckComponent_TypeInfo, callback);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__Add__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__RemoveAt__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject___ctor__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Count__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Item__, v11);
    sub_B16FFC(&System_Collections_Generic_List_GameObject__TypeInfo, v12);
    byte_40FC252 = 1;
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
  v19 = LimitUpResultCheckComponent_TypeInfo;
  if ( (BYTE3(LimitUpResultCheckComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LimitUpResultCheckComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LimitUpResultCheckComponent_TypeInfo);
    v19 = LimitUpResultCheckComponent_TypeInfo;
  }
  CONCURRENTLY_DISP_NUM = v19->static_fields->CONCURRENTLY_DISP_NUM;
  if ( !this->fields.isChangeSkill )
  {
    resUsrSvtData = this->fields.resUsrSvtData;
    if ( !resUsrSvtData )
      goto LABEL_34;
    if ( UserServantEntity__isLimitCountMax(resUsrSvtData, 0LL) )
    {
      v22 = LimitUpResultCheckComponent_TypeInfo;
      if ( (BYTE3(LimitUpResultCheckComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LimitUpResultCheckComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LimitUpResultCheckComponent_TypeInfo);
        v22 = LimitUpResultCheckComponent_TypeInfo;
      }
      CONCURRENTLY_DISP_NUM = v22->static_fields->CONCURRENTLY_DISP_NUM_BY_LIMIT_MAX;
    }
  }
  v23 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_GameObject__TypeInfo,
                                                                                                  v15,
                                                                                                  v16,
                                                                                                  v17,
                                                                                                  v18);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v23,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  v24 = this->fields.resInfoList;
  if ( !v24 )
LABEL_34:
    sub_B170D4();
  v25 = 0;
  while ( v24->fields._size > 0 && v25 < CONCURRENTLY_DISP_NUM && (v25 == 0 || !this->fields.isChangeSkill) )
  {
    if ( v23 )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v23,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v24->fields._items->m_Items[0],
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__);
      v26 = this->fields.resInfoList;
      if ( v26 )
      {
        System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)v26,
          0,
          (const MethodInfo_2F279C8 *)Method_System_Collections_Generic_List_GameObject__RemoveAt__);
        v24 = this->fields.resInfoList;
        ++v25;
        if ( v24 )
          continue;
      }
    }
    goto LABEL_34;
  }
  if ( this->fields.isChangeSkill )
  {
    v27 = this->fields.openInfowindowComp;
    this->fields.isChangeSkill = 0;
    if ( v27 )
    {
      OpenInfoWindowComponent__OpenResultInfo(
        v27,
        (System_Collections_Generic_List_GameObject__o *)v23,
        callback,
        isFirstDisp,
        0LL);
      return;
    }
    goto LABEL_34;
  }
  v28 = this->fields.openInfowindowComp;
  if ( (BYTE3(LimitUpResultCheckComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LimitUpResultCheckComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LimitUpResultCheckComponent_TypeInfo);
  }
  if ( !v28 )
    goto LABEL_34;
  OpenInfoWindowComponent__OpenLimitUpResultInfo(
    v28,
    (System_Collections_Generic_List_GameObject__o *)v23,
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
  UnityEngine_GameObject_o *gameObject; // x0

  if ( this->fields.isGetNewSkill || this->fields.isOpenQuest )
  {
    openInfowindowComp = (UnityEngine_Component_o *)this->fields.openInfowindowComp;
    if ( !openInfowindowComp || (gameObject = UnityEngine_Component__get_gameObject(openInfowindowComp, 0LL)) == 0LL )
      sub_B170D4();
    UnityEngine_GameObject__SetActive(gameObject, isActive, 0LL);
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
  DataMasterBase_WarMaster__WarEntity__int__o *v20; // x0
  WarEntity_o *Entity; // x0
  WarEntity_o *v22; // x20
  System_String_o *v23; // x23
  System_String_o *v24; // x22
  System_String_o *v25; // x0
  __int64 *v26; // x21
  ConstantStrMaster_o *v27; // x0
  Il2CppObject *Value; // x21
  System_String_o *v29; // x0
  __int64 *v30; // x8
  System_String_o *v31; // x0
  Il2CppObject *v32; // x0
  UnityEngine_Component_o *v33; // x20
  struct System_Collections_Generic_List_GameObject__o *resInfoList; // x19
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_40FC255 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_ConstantStrMaster___, *(_QWORD *)&questId);
    sub_B16FFC(&Method_DataManager_GetMaster_QuestMaster___, v5);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v6);
    sub_B16FFC(&DataManager_TypeInfo, v7);
    sub_B16FFC(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v8);
    sub_B16FFC(&Method_LimitUpResultCheckComponent_CreateResultInfoObject_LimitUpResultInfoComponent___, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__Add__, v10);
    sub_B16FFC(&LocalizationManager_TypeInfo, v11);
    sub_B16FFC(&StringLiteral_9738/*"OPEN_MAIN_SCENARIO_TITLE"*/, v12);
    sub_B16FFC(&StringLiteral_9744/*"OPEN_STORY_QUEST_TITLE_LIMIT_UP"*/, v13);
    sub_B16FFC(&StringLiteral_9735/*"OPEN_LIMIT_UNSEALED_QUEST_NAME_LIMIT_UP"*/, v14);
    sub_B16FFC(&StringLiteral_9736/*"OPEN_LIMIT_UNSEALED_QUEST_TITLE_LIMIT_UP"*/, v15);
    sub_B16FFC(&StringLiteral_9731/*"OPEN_EVENT_QUEST_NAME_LIMIT_UP"*/, v16);
    sub_B16FFC(&StringLiteral_9732/*"OPEN_EVENT_QUEST_TITLE_LIMIT_UP"*/, v17);
    sub_B16FFC(&StringLiteral_9737/*"OPEN_MAIN_QUEST_TITLE_LIMIT_UP"*/, v18);
    byte_40FC255 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v20 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !v20 )
    goto LABEL_47;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             v20,
             questId,
             (const MethodInfo_266F388 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( !Entity )
    goto LABEL_47;
  v22 = Entity;
  v23 = 0LL;
  v24 = 0LL;
  switch ( LODWORD(Entity->fields.longName) )
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
        v25 = LocalizationManager__Get((System_String_o *)StringLiteral_9736/*"OPEN_LIMIT_UNSEALED_QUEST_TITLE_LIMIT_UP"*/, 0LL);
        v26 = &StringLiteral_9735/*"OPEN_LIMIT_UNSEALED_QUEST_NAME_LIMIT_UP"*/;
      }
      else
      {
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        v27 = (ConstantStrMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ConstantStrMaster___);
        if ( !v27 )
          goto LABEL_47;
        Value = (Il2CppObject *)ConstantStrMaster__GetValue(v27, (System_String_o *)StringLiteral_9738/*"OPEN_MAIN_SCENARIO_TITLE"*/, 0LL);
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v29 = LocalizationManager__Get((System_String_o *)StringLiteral_9737/*"OPEN_MAIN_QUEST_TITLE_LIMIT_UP"*/, 0LL);
        v25 = System_String__Format(v29, Value, 0LL);
LABEL_27:
        v26 = &StringLiteral_9731/*"OPEN_EVENT_QUEST_NAME_LIMIT_UP"*/;
      }
LABEL_40:
      v24 = v25;
      v31 = LocalizationManager__Get((System_String_o *)*v26, 0LL);
      v23 = System_String__Format(v31, (Il2CppObject *)v22->fields.age, 0LL);
      this->fields.isOpenQuest = 1;
LABEL_41:
      if ( !System_String__IsNullOrEmpty(v24, 0LL) && !System_String__IsNullOrEmpty(v23, 0LL) )
      {
        v32 = LimitUpResultCheckComponent__CreateResultInfoObject_object_(
                this,
                (Il2CppObject *)this->fields.limitUpResultInfoStoryOrigin,
                (const MethodInfo_19D9360 *)Method_LimitUpResultCheckComponent_CreateResultInfoObject_LimitUpResultInfoComponent___);
        if ( v32 )
        {
          v33 = (UnityEngine_Component_o *)v32;
          ((void (__fastcall *)(Il2CppObject *, System_String_o *, System_String_o *, Il2CppMethodPointer))v32->klass->vtable[4].method)(
            v32,
            v24,
            v23,
            v32->klass->vtable[5].methodPtr);
          resInfoList = this->fields.resInfoList;
          gameObject = UnityEngine_Component__get_gameObject(v33, 0LL);
          if ( resInfoList )
          {
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)resInfoList,
              (EventMissionProgressRequest_Argument_ProgressData_o *)gameObject,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__);
            return;
          }
        }
LABEL_47:
        sub_B170D4();
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
        v26 = &StringLiteral_9735/*"OPEN_LIMIT_UNSEALED_QUEST_NAME_LIMIT_UP"*/;
        v30 = &StringLiteral_9736/*"OPEN_LIMIT_UNSEALED_QUEST_TITLE_LIMIT_UP"*/;
      }
      else
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v26 = &StringLiteral_9731/*"OPEN_EVENT_QUEST_NAME_LIMIT_UP"*/;
        v30 = &StringLiteral_9744/*"OPEN_STORY_QUEST_TITLE_LIMIT_UP"*/;
      }
      v25 = LocalizationManager__Get((System_String_o *)*v30, 0LL);
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
      v25 = LocalizationManager__Get((System_String_o *)StringLiteral_9732/*"OPEN_EVENT_QUEST_TITLE_LIMIT_UP"*/, 0LL);
      goto LABEL_27;
    default:
      v24 = 0LL;
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
  System_String_o *v18; // x0
  System_String_o *v19; // x22
  int32_t SkillLevel; // w0
  System_String_o *v21; // x0
  System_String_o *v22; // x23
  WarQuestSelectionMaster_o *v23; // x0
  struct UserServantEntity_o *resUsrSvtData; // x8
  ServantSkillMaster_o *v25; // x24
  __int64 v26; // x25
  __int64 v27; // x26
  int32_t v28; // w0
  ServantSkillEntity_o *EntityFromSkillId; // x24
  Il2CppObject *v30; // x0
  UnityEngine_Component_o *v31; // x21
  struct System_Collections_Generic_List_GameObject__o *resInfoList; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *detail; // [xsp+0h] [xbp-50h] BYREF
  System_String_o *name; // [xsp+8h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16

  if ( (byte_40FC257 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_ServantSkillMaster___, *(_QWORD *)&skillId);
    sub_B16FFC(&Method_DataManager_GetMaster_SkillMaster___, v7);
    sub_B16FFC(&DataManager_TypeInfo, v8);
    sub_B16FFC(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v9);
    sub_B16FFC(&Method_LimitUpResultCheckComponent_CreateResultInfoObject_LimitUpResultInfoSkillComponent___, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__Add__, v11);
    sub_B16FFC(&LocalizationManager_TypeInfo, v12);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_B16FFC(&StringLiteral_6850/*"GET_SKILL_TITLE"*/, v14);
    sub_B16FFC(&StringLiteral_6849/*"GET_SKILL_NAME_LIMIT_UP"*/, v15);
    byte_40FC257 = 1;
  }
  detail = 0LL;
  name = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_SkillMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_20;
  Entity = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              Master_WarQuestSelectionMaster,
                              skillId,
                              (const MethodInfo_266F388 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_6850/*"GET_SKILL_TITLE"*/, 0LL);
  if ( !this->fields.resUsrSvtData )
    goto LABEL_20;
  v19 = v18;
  SkillLevel = UserServantEntity__getSkillLevel(this->fields.resUsrSvtData, targetIdx, 0LL);
  if ( !Entity )
    goto LABEL_20;
  SkillEntity__getSkillMessageInfo(Entity, &name, &detail, SkillLevel, 0LL);
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_6849/*"GET_SKILL_NAME_LIMIT_UP"*/, 0LL);
  v22 = System_String__Format(v21, (Il2CppObject *)name, 0LL);
  v23 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantSkillMaster___);
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_20;
  v25 = (ServantSkillMaster_o *)v23;
  v27 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v26 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v36.fields.currentCryptoKey = v27;
  *(_QWORD *)&v36.fields.fakeValue = v26;
  v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v36, 0LL);
  if ( !v25
    || (EntityFromSkillId = ServantSkillMaster__getEntityFromSkillId(v25, v28, targetIdx + 1, skillId, 0LL),
        (v30 = LimitUpResultCheckComponent__CreateResultInfoObject_object_(
                 this,
                 (Il2CppObject *)this->fields.limitUpResultInfoSkillOrigin,
                 (const MethodInfo_19D9360 *)Method_LimitUpResultCheckComponent_CreateResultInfoObject_LimitUpResultInfoSkillComponent___)) == 0LL)
    || (v31 = (UnityEngine_Component_o *)v30,
        LimitUpResultInfoSkillComponent__Setup(
          (LimitUpResultInfoSkillComponent_o *)v30,
          skillId,
          v22,
          EntityFromSkillId,
          v19,
          detail,
          0LL),
        resInfoList = this->fields.resInfoList,
        gameObject = UnityEngine_Component__get_gameObject(v31, 0LL),
        !resInfoList) )
  {
LABEL_20:
    sub_B170D4();
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)resInfoList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)gameObject,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__);
  this->fields.isGetNewSkill = 1;
}


void __fastcall LimitUpResultCheckComponent__checkGetSkill(
        LimitUpResultCheckComponent_o *this,
        const MethodInfo *method)
{
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
  int32_t v15; // w0
  int32_t v16; // w21
  System_Int32_array *SkillIdList; // x0
  int32_t kind; // w8
  System_Int32_array *v19; // x20
  UserServantEntity_o *v20; // x0
  int32_t LimitCntMax; // w21
  UserServantEntity_o *v22; // x0
  UserServantEntity_o *resUsrSvtData; // x0
  int32_t v24; // w2
  System_Int32_array *IsHeroine; // x0
  __int64 v26; // x1
  __int64 v27; // x2
  System_Int32_array *v28; // x22
  int max_length; // w8
  unsigned int v30; // w9
  unsigned int v31; // w21
  char *v32; // x23
  int32_t *v33; // x23
  int v34; // w25
  int v35; // t1
  char *v36; // x24
  int v37; // w9
  int32_t *v38; // x24
  int v39; // t1
  UserServantEntity_o *v40; // x0
  const MethodInfo *v41; // x3
  int32_t v42; // w22
  int32_t v43; // w20
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v46; // x23
  SkillEntity_o *Entity; // x22
  WarEntity_o *v48; // x0
  SkillEntity_o *v49; // x20
  int32_t SkillLevel; // w0
  int32_t v51; // w23
  int32_t v52; // w0
  UILabel_o *skillChangeInfoTitle; // x24
  int32_t v54; // w21
  System_String_o *v55; // x0
  UILabel_o *skillChangeInfoSubTitleOld; // x24
  System_String_o *v57; // x0
  UILabel_o *skillChangeInfoSubTitleNow; // x24
  System_String_o *v59; // x0
  UILabel_o *skillChangeInfoNameOld; // x22
  System_String_o *v61; // x0
  System_String_o *v62; // x0
  struct UILabel_o *skillChangeInfoDetailOld; // x0
  UILabel_o *skillChangeInfoNameNow; // x20
  System_String_o *v65; // x0
  System_String_o *v66; // x0
  struct UILabel_o *skillChangeInfoDetailNow; // x0
  struct System_Collections_Generic_List_GameObject__o *resInfoList; // x0
  System_String_o *detail; // [xsp+8h] [xbp-48h] BYREF
  System_String_o *name; // [xsp+18h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v71; // 0:x0.16

  if ( (byte_40FC256 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_SkillMaster___, method);
    sub_B16FFC(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__Add__, v4);
    sub_B16FFC(&LocalizationManager_TypeInfo, v5);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_B16FFC(&StringLiteral_6848/*"GET_SKILL_NAME"*/, v8);
    sub_B16FFC(&StringLiteral_1663/*"AFTER_CHANGE_SKILL_SUB_TITLE"*/, v9);
    sub_B16FFC(&StringLiteral_2947/*"CHANGE_SKILL_TITLE"*/, v10);
    sub_B16FFC(&StringLiteral_2533/*"BEFORE_CHANGE_SKILL_SUB_TITLE"*/, v11);
    byte_40FC256 = 1;
  }
  name = 0LL;
  detail = 0LL;
  baseUsrSvtData = this->fields.baseUsrSvtData;
  *(_WORD *)&this->fields.isGetNewSkill = 0;
  if ( !baseUsrSvtData )
    goto LABEL_55;
  v14 = *(_QWORD *)&baseUsrSvtData->fields.limitCount.fields.currentCryptoKey;
  v13 = *(_QWORD *)&baseUsrSvtData->fields.limitCount.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v71.fields.currentCryptoKey = v14;
  *(_QWORD *)&v71.fields.fakeValue = v13;
  v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v71, 0LL);
  if ( !this->fields.baseUsrSvtData )
    goto LABEL_55;
  v16 = v15;
  SkillIdList = UserServantEntity__getSkillIdList(this->fields.baseUsrSvtData, -1, v15, 1, 0LL);
  kind = this->fields.kind;
  v19 = SkillIdList;
  if ( kind == 19 || kind == 10 )
  {
    v20 = this->fields.baseUsrSvtData;
    if ( !v20 )
      goto LABEL_55;
    LimitCntMax = v16 + 1;
    if ( UserServantEntity__getLimitCntMax(v20, 0LL) < LimitCntMax )
    {
      v22 = this->fields.baseUsrSvtData;
      if ( !v22 )
        goto LABEL_55;
      LimitCntMax = UserServantEntity__getLimitCntMax(v22, 0LL);
    }
    resUsrSvtData = this->fields.resUsrSvtData;
    if ( !resUsrSvtData )
LABEL_55:
      sub_B170D4();
    v24 = LimitCntMax;
  }
  else
  {
    resUsrSvtData = this->fields.resUsrSvtData;
    if ( !resUsrSvtData )
      goto LABEL_55;
    v24 = -1;
  }
  IsHeroine = UserServantEntity__getSkillIdList(resUsrSvtData, -1, v24, 1, 0LL);
  v28 = IsHeroine;
  if ( !v19 )
    goto LABEL_55;
  max_length = v19->max_length;
  if ( max_length >= 1 )
  {
    v30 = 0;
    while ( 1 )
    {
      if ( v30 >= max_length )
        goto LABEL_54;
      v31 = v30;
      v32 = (char *)v19 + 4 * (int)v30;
      v35 = *((_DWORD *)v32 + 8);
      v33 = (int32_t *)(v32 + 32);
      v34 = v35;
      if ( !IsHeroine )
        goto LABEL_55;
      if ( v30 >= IsHeroine->max_length )
        goto LABEL_54;
      v36 = (char *)IsHeroine + 4 * (int)v30;
      v39 = *((_DWORD *)v36 + 8);
      v38 = (int32_t *)(v36 + 32);
      v37 = v39;
      if ( v34 != v39 && v37 >= 1 )
        break;
      v30 = v31 + 1;
      if ( (int)(v31 + 1) >= max_length )
        return;
    }
    v40 = this->fields.resUsrSvtData;
    if ( !v40 )
      goto LABEL_55;
    IsHeroine = (System_Int32_array *)UserServantEntity__IsHeroine(v40, 0LL);
    if ( v34 >= 1 && ((unsigned __int8)IsHeroine & 1) != 0 )
    {
      if ( v31 < v19->max_length && v31 < v28->max_length )
      {
        v42 = *v33;
        v43 = *v38;
        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( Instance )
        {
          MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                                (DataManager_o *)Instance,
                                                                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillMaster___);
          if ( MasterData_WarQuestSelectionMaster )
          {
            v46 = MasterData_WarQuestSelectionMaster;
            Entity = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                        MasterData_WarQuestSelectionMaster,
                                        v42,
                                        (const MethodInfo_266F388 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
            v48 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                    v46,
                    v43,
                    (const MethodInfo_266F388 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
            if ( this->fields.baseUsrSvtData )
            {
              v49 = (SkillEntity_o *)v48;
              SkillLevel = UserServantEntity__getSkillLevel(this->fields.baseUsrSvtData, v31, 0LL);
              if ( this->fields.resUsrSvtData )
              {
                v51 = SkillLevel;
                v52 = UserServantEntity__getSkillLevel(this->fields.resUsrSvtData, v31, 0LL);
                skillChangeInfoTitle = this->fields.skillChangeInfoTitle;
                v54 = v52;
                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                }
                v55 = LocalizationManager__Get((System_String_o *)StringLiteral_2947/*"CHANGE_SKILL_TITLE"*/, 0LL);
                if ( skillChangeInfoTitle )
                {
                  UILabel__set_text(skillChangeInfoTitle, v55, 0LL);
                  skillChangeInfoSubTitleOld = this->fields.skillChangeInfoSubTitleOld;
                  v57 = LocalizationManager__Get((System_String_o *)StringLiteral_2533/*"BEFORE_CHANGE_SKILL_SUB_TITLE"*/, 0LL);
                  if ( skillChangeInfoSubTitleOld )
                  {
                    UILabel__set_text(skillChangeInfoSubTitleOld, v57, 0LL);
                    skillChangeInfoSubTitleNow = this->fields.skillChangeInfoSubTitleNow;
                    v59 = LocalizationManager__Get((System_String_o *)StringLiteral_1663/*"AFTER_CHANGE_SKILL_SUB_TITLE"*/, 0LL);
                    if ( skillChangeInfoSubTitleNow )
                    {
                      UILabel__set_text(skillChangeInfoSubTitleNow, v59, 0LL);
                      if ( Entity )
                      {
                        SkillEntity__getSkillMessageInfo(Entity, &name, &detail, v51, 0LL);
                        skillChangeInfoNameOld = this->fields.skillChangeInfoNameOld;
                        v61 = LocalizationManager__Get((System_String_o *)StringLiteral_6848/*"GET_SKILL_NAME"*/, 0LL);
                        v62 = System_String__Format(v61, (Il2CppObject *)name, 0LL);
                        if ( skillChangeInfoNameOld )
                        {
                          UILabel__set_text(skillChangeInfoNameOld, v62, 0LL);
                          skillChangeInfoDetailOld = this->fields.skillChangeInfoDetailOld;
                          if ( skillChangeInfoDetailOld )
                          {
                            WrapControlText__textBBCodeAdjust(
                              skillChangeInfoDetailOld,
                              detail,
                              skillChangeInfoDetailOld->fields.mFontSize,
                              0,
                              0,
                              0LL);
                            if ( v49 )
                            {
                              SkillEntity__getSkillMessageInfo(v49, &name, &detail, v54, 0LL);
                              skillChangeInfoNameNow = this->fields.skillChangeInfoNameNow;
                              v65 = LocalizationManager__Get((System_String_o *)StringLiteral_6848/*"GET_SKILL_NAME"*/, 0LL);
                              v66 = System_String__Format(v65, (Il2CppObject *)name, 0LL);
                              if ( skillChangeInfoNameNow )
                              {
                                UILabel__set_text(skillChangeInfoNameNow, v66, 0LL);
                                skillChangeInfoDetailNow = this->fields.skillChangeInfoDetailNow;
                                if ( skillChangeInfoDetailNow )
                                {
                                  WrapControlText__textBBCodeAdjust(
                                    skillChangeInfoDetailNow,
                                    detail,
                                    skillChangeInfoDetailNow->fields.mFontSize,
                                    0,
                                    0,
                                    0LL);
                                  resInfoList = this->fields.resInfoList;
                                  if ( resInfoList )
                                  {
                                    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)resInfoList,
                                      (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.skillChangeInfo,
                                      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__);
                                    *(_WORD *)&this->fields.isGetNewSkill = 257;
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
      sub_B17100(IsHeroine, v26, v27);
      sub_B170A0();
    }
    if ( v31 >= v28->max_length )
      goto LABEL_54;
    LimitUpResultCheckComponent__SetSkillRelease(this, *v38, v31, v41);
  }
}


void __fastcall LimitUpResultCheckComponent__checkLimitUpReward(
        LimitUpResultCheckComponent_o *this,
        System_Collections_Generic_List_int____o *rewardGiftDataList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
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
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x21
  CombineLimitGiftMaster_o *Master_WarQuestSelectionMaster; // x23
  WarQuestSelectionMaster_o *v23; // x0
  struct UserServantEntity_o *baseUsrSvtData; // x8
  GiftMaster_o *v25; // x22
  __int64 v26; // x24
  __int64 v27; // x25
  int32_t v28; // w0
  UserServantEntity_o *v29; // x0
  UserServantEntity_o *v30; // x0
  struct UserServantEntity_o *v31; // x8
  __int64 v32; // x24
  __int64 v33; // x25
  int32_t v34; // w0
  int32_t CombineLimitGiftId; // w0
  System_Int32_array **DataById; // x0
  GiftEntity_o **v37; // x22
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_String_o *v44; // x23
  System_String_o *v45; // x0
  Il2CppObject *v46; // x25
  System_String_o *v47; // x24
  Il2CppObject *v48; // x0
  System_String_o *v49; // x24
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x3
  __int64 v53; // x4
  Il2CppObject *v54; // x25
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v55; // x26
  bool v56; // w20
  int32_t IconImageId; // w0
  struct System_Collections_Generic_List_GameObject__o *resInfoList; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t num; // [xsp+Ch] [xbp-54h] BYREF
  System_String_o *countText; // [xsp+10h] [xbp-50h] BYREF
  System_String_o *nameText; // [xsp+18h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v64; // 0:x0.16

  if ( (byte_40FC258 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Any_int_____, rewardGiftDataList);
    sub_B16FFC(&Method_DataManager_GetMaster_CombineLimitGiftMaster___, v7);
    sub_B16FFC(&Method_DataManager_GetMaster_GiftMaster___, v8);
    sub_B16FFC(&DataManager_TypeInfo, v9);
    sub_B16FFC(&Method_System_Func_int____bool___ctor__, v10);
    sub_B16FFC(&System_Func_int____bool__TypeInfo, v11);
    sub_B16FFC(&int_TypeInfo, v12);
    sub_B16FFC(&Method_LimitUpResultCheckComponent_CreateResultInfoObject_LimitUpResultInfoRewardComponent___, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__Add__, v14);
    sub_B16FFC(&LocalizationManager_TypeInfo, v15);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
    sub_B16FFC(&Method_LimitUpResultCheckComponent___c__DisplayClass44_0__checkLimitUpReward_b__0__, v17);
    sub_B16FFC(&LimitUpResultCheckComponent___c__DisplayClass44_0_TypeInfo, v18);
    sub_B16FFC(&StringLiteral_6845/*"GET_LIMIT_UP_REWARD_DETAIL"*/, v19);
    sub_B16FFC(&StringLiteral_6846/*"GET_LIMIT_UP_REWARD_TITLE"*/, v20);
    byte_40FC258 = 1;
  }
  countText = 0LL;
  nameText = 0LL;
  v21 = sub_B170CC(LimitUpResultCheckComponent___c__DisplayClass44_0_TypeInfo, rewardGiftDataList, method, v3, v4);
  LimitUpResultCheckComponent___c__DisplayClass44_0___ctor(
    (LimitUpResultCheckComponent___c__DisplayClass44_0_o *)v21,
    0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (CombineLimitGiftMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_CombineLimitGiftMaster___);
  v23 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_GiftMaster___);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_35;
  v25 = (GiftMaster_o *)v23;
  v27 = *(_QWORD *)&baseUsrSvtData->fields.limitCount.fields.currentCryptoKey;
  v26 = *(_QWORD *)&baseUsrSvtData->fields.limitCount.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v63.fields.currentCryptoKey = v27;
  *(_QWORD *)&v63.fields.fakeValue = v26;
  v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v63, 0LL);
  if ( !v21 )
    goto LABEL_35;
  *(_DWORD *)(v21 + 16) = v28 + 1;
  v29 = this->fields.baseUsrSvtData;
  if ( !v29 )
    goto LABEL_35;
  if ( UserServantEntity__getLimitCntMax(v29, 0LL) < *(_DWORD *)(v21 + 16) )
  {
    v30 = this->fields.baseUsrSvtData;
    if ( !v30 )
      goto LABEL_35;
    *(_DWORD *)(v21 + 16) = UserServantEntity__getLimitCntMax(v30, 0LL);
  }
  v31 = this->fields.baseUsrSvtData;
  if ( !v31 )
    goto LABEL_35;
  v33 = *(_QWORD *)&v31->fields.svtId.fields.currentCryptoKey;
  v32 = *(_QWORD *)&v31->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v64.fields.currentCryptoKey = v33;
  *(_QWORD *)&v64.fields.fakeValue = v32;
  v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v64, 0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_35;
  CombineLimitGiftId = CombineLimitGiftMaster__GetCombineLimitGiftId(
                         Master_WarQuestSelectionMaster,
                         v34,
                         *(_DWORD *)(v21 + 16),
                         0LL);
  if ( !CombineLimitGiftId )
    return;
  if ( !v25 )
    goto LABEL_35;
  DataById = (System_Int32_array **)GiftMaster__getDataById(v25, CombineLimitGiftId, 0LL);
  *(_QWORD *)(v21 + 24) = DataById;
  v37 = (GiftEntity_o **)(v21 + 24);
  sub_B16F98((BattleServantConfConponent_o *)(v21 + 24), DataById, v38, v39, v40, v41, v42, v43);
  if ( !*(_QWORD *)(v21 + 24) )
    return;
  GiftEntity__GetInfo(*(GiftEntity_o **)(v21 + 24), &nameText, &countText, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v44 = LocalizationManager__Get((System_String_o *)StringLiteral_6846/*"GET_LIMIT_UP_REWARD_TITLE"*/, 0LL);
  v45 = LocalizationManager__Get((System_String_o *)StringLiteral_6845/*"GET_LIMIT_UP_REWARD_DETAIL"*/, 0LL);
  if ( !*v37 )
    goto LABEL_35;
  v46 = (Il2CppObject *)nameText;
  v47 = v45;
  num = (*v37)->fields.num;
  v48 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num);
  v49 = System_String__Format_43739268(v47, v46, v48, 0LL);
  v54 = LimitUpResultCheckComponent__CreateResultInfoObject_object_(
          this,
          (Il2CppObject *)this->fields.limitUpResultInfoRewardOrigin,
          (const MethodInfo_19D9360 *)Method_LimitUpResultCheckComponent_CreateResultInfoObject_LimitUpResultInfoRewardComponent___);
  if ( rewardGiftDataList )
  {
    v55 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                               System_Func_int____bool__TypeInfo,
                                                                               v50,
                                                                               v51,
                                                                               v52,
                                                                               v53);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v55,
      (Il2CppObject *)v21,
      Method_LimitUpResultCheckComponent___c__DisplayClass44_0__checkLimitUpReward_b__0__,
      (const MethodInfo_2B6AB40 *)Method_System_Func_int____bool___ctor__);
    v56 = !BasicHelper__Any_WarBoardData_SquareRangeSearch_(
             (System_Collections_Generic_List_T__o *)rewardGiftDataList,
             (System_Func_T__bool__o *)v55,
             (const MethodInfo_18B5FC8 *)Method_BasicHelper_Any_int_____);
  }
  else
  {
    v56 = 1;
  }
  if ( !*v37
    || (IconImageId = GiftEntity__getIconImageId(*v37, 0LL), !v54)
    || (LimitUpResultInfoRewardComponent__Setup(
          (LimitUpResultInfoRewardComponent_o *)v54,
          IconImageId,
          v56,
          v44,
          v49,
          0LL),
        resInfoList = this->fields.resInfoList,
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v54, 0LL),
        !resInfoList) )
  {
LABEL_35:
    sub_B170D4();
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)resInfoList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)gameObject,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__);
  this->fields.isGetReward = 1;
}


void __fastcall LimitUpResultCheckComponent__checkQuestOpen(
        LimitUpResultCheckComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
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
  System_Collections_Generic_List_int__o *v17; // x0
  int32_t svtCollectionLimitCnt; // w8
  UserServantEntity_o *baseUsrSvtData; // x0
  int32_t LimitCntMax; // w20
  UserServantEntity_o *v21; // x0
  clsQuestCheck_o *v22; // x0
  struct UserServantEntity_o *resUsrSvtData; // x8
  clsQuestCheck_o *v24; // x21
  __int64 v25; // x22
  __int64 v26; // x23
  int32_t v27; // w0
  System_Collections_Generic_List_int__o *v28; // x0
  clsQuestCheck_o *v29; // x0
  struct UserServantEntity_o *v30; // x8
  clsQuestCheck_o *v31; // x20
  __int64 v32; // x21
  __int64 v33; // x22
  int32_t v34; // w0
  System_Collections_Generic_List_int__o *v35; // x20
  UILabel_o *storyQuestInfoTitle; // x21
  System_String_o *v37; // x0
  UILabel_o *heroQuestInfoTitle; // x21
  System_String_o *v39; // x0
  WebViewManager_o *Instance; // x0
  const MethodInfo *v41; // x2
  __int64 size; // x8
  __int64 v43; // x21
  int32_t v44; // w1
  __int64 v45; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16

  if ( (byte_40FC254 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Count__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Item__, v8);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v9);
    sub_B16FFC(&LocalizationManager_TypeInfo, v10);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_B16FFC(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v13);
    sub_B16FFC(&SingletonTemplate_clsQuestCheck__TypeInfo, v14);
    sub_B16FFC(&StringLiteral_9743/*"OPEN_STORY_QUEST_TITLE"*/, v15);
    sub_B16FFC(&StringLiteral_9733/*"OPEN_HERO_QUEST_TITLE"*/, v16);
    byte_40FC254 = 1;
  }
  this->fields.isOpenQuest = 0;
  v17 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    method,
                                                    v2,
                                                    v3,
                                                    v4);
  System_Collections_Generic_List_int____ctor(
    v17,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
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
        v21 = this->fields.baseUsrSvtData;
        if ( !v21 )
          goto LABEL_44;
        LimitCntMax = UserServantEntity__getLimitCntMax(v21, 0LL);
      }
      if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
      }
      v22 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
      resUsrSvtData = this->fields.resUsrSvtData;
      if ( !resUsrSvtData )
        goto LABEL_44;
      v24 = v22;
      v26 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
      v25 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v46.fields.currentCryptoKey = v26;
      *(_QWORD *)&v46.fields.fakeValue = v25;
      v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v46, 0LL);
      if ( !v24 )
LABEL_44:
        sub_B170D4();
      v28 = clsQuestCheck__GetReleaseQuestIdByServantLimit_18396276(
              v24,
              v27,
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
      v29 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
      v30 = this->fields.resUsrSvtData;
      if ( !v30 )
        goto LABEL_44;
      v31 = v29;
      v33 = *(_QWORD *)&v30->fields.svtId.fields.currentCryptoKey;
      v32 = *(_QWORD *)&v30->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v47.fields.currentCryptoKey = v33;
      *(_QWORD *)&v47.fields.fakeValue = v32;
      v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v47, 0LL);
      if ( !v31 )
        goto LABEL_44;
      v28 = clsQuestCheck__GetReleaseQuestIdByServantLimit(v31, v34, this->fields.svtCollectionLimitCnt, 0LL);
    }
    v35 = v28;
    storyQuestInfoTitle = this->fields.storyQuestInfoTitle;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v37 = LocalizationManager__Get((System_String_o *)StringLiteral_9743/*"OPEN_STORY_QUEST_TITLE"*/, 0LL);
    if ( storyQuestInfoTitle )
    {
      UILabel__set_text(storyQuestInfoTitle, v37, 0LL);
      heroQuestInfoTitle = this->fields.heroQuestInfoTitle;
      v39 = LocalizationManager__Get((System_String_o *)StringLiteral_9733/*"OPEN_HERO_QUEST_TITLE"*/, 0LL);
      if ( heroQuestInfoTitle )
      {
        UILabel__set_text(heroQuestInfoTitle, v39, 0LL);
        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( Instance )
        {
          DataManager__GetMasterData_WarQuestSelectionMaster_(
            (DataManager_o *)Instance,
            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
          if ( v35 )
          {
            LODWORD(size) = v35->fields._size;
            if ( (int)size >= 1 )
            {
              v43 = 8LL;
              do
              {
                if ( v43 - 8 >= (unsigned __int64)(unsigned int)size )
                  System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
                v44 = *((_DWORD *)&v35->fields._items->obj.klass + v43);
                if ( v44 >= 1 )
                {
                  if ( v43 - 8 >= (unsigned __int64)(unsigned int)v35->fields._size )
                    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
                  LimitUpResultCheckComponent__SetResInfoListQuestInfo(this, v44, v41);
                }
                size = v35->fields._size;
                v45 = v43 - 7;
                ++v43;
              }
              while ( v45 < size );
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
  __int64 v28; // x3
  __int64 v29; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v30; // x21
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  struct UserServantEntity_o *v38; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v39; // x21
  __int64 v40; // x22
  __int64 v41; // x23
  int32_t v42; // w0
  ServantEntity_o *Entity; // x0
  const MethodInfo *v44; // x1
  const MethodInfo *v45; // x1
  const MethodInfo *v46; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16

  if ( (byte_40FC251 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_ServantMaster___, *(_QWORD *)&kind);
    sub_B16FFC(&DataManager_TypeInfo, v14);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject___ctor__, v16);
    sub_B16FFC(&System_Collections_Generic_List_GameObject__TypeInfo, v17);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
    byte_40FC251 = 1;
  }
  this->fields.baseUsrSvtData = baseData;
  sub_B16F98(
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
  sub_B16F98(
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
  v30 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_GameObject__TypeInfo,
                                                                                                  v26,
                                                                                                  v27,
                                                                                                  v28,
                                                                                                  v29);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v30,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.resInfoList = (struct System_Collections_Generic_List_GameObject__o *)v30;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.resInfoList,
    (System_Int32_array **)v30,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  *(_DWORD *)&this->fields.isGetNewSkill = 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantMaster___);
  v38 = *p_resUsrSvtData;
  if ( !*p_resUsrSvtData )
    goto LABEL_15;
  v39 = (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster;
  v41 = *(_QWORD *)&v38->fields.svtId.fields.currentCryptoKey;
  v40 = *(_QWORD *)&v38->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v47.fields.currentCryptoKey = v41;
  *(_QWORD *)&v47.fields.fakeValue = v40;
  v42 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v47, 0LL);
  if ( !v39
    || (Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v39,
                                      v42,
                                      (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_15:
    sub_B170D4();
  }
  if ( ServantEntity__get_IsServant(Entity, 0LL) )
  {
    LimitUpResultCheckComponent__checkGetSkill(this, v44);
    LimitUpResultCheckComponent__checkQuestOpen(this, v45);
    LimitUpResultCheckComponent__checkLimitUpReward(this, rewardGiftDataList, v46);
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

  if ( !data )
    goto LABEL_10;
  max_length = data->max_length;
  if ( !max_length )
  {
LABEL_9:
    sub_B17100(this, data, method);
    sub_B170A0();
  }
  if ( data->m_Items[1] == this->fields.afterLimitCnt )
  {
    if ( max_length > 1 )
    {
      giftEntity = this->fields.giftEntity;
      if ( giftEntity )
        return data->m_Items[2] == giftEntity->fields.id;
LABEL_10:
      sub_B170D4();
    }
    goto LABEL_9;
  }
  return 0;
}