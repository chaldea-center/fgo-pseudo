void __fastcall LimitUpResultCheckComponent___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E7D6B & 1) == 0 )
  {
    sub_B5D5C4(&LimitUpResultCheckComponent_TypeInfo, v1, v2, v3);
    byte_42E7D6B = 1;
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
  int v2; // w2
  __int64 v3; // x3
  struct System_Collections_Generic_List_GameObject__o *resInfoList; // x8

  if ( (byte_42E7D65 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Count__, (_DWORD)method, v2, v3);
    byte_42E7D65 = 1;
  }
  resInfoList = this->fields.resInfoList;
  return !resInfoList || resInfoList->fields._size <= 0;
}


Il2CppObject *__fastcall LimitUpResultCheckComponent__CreateResultInfoObject_object_(
        LimitUpResultCheckComponent_o *this,
        Il2CppObject *origin,
        const MethodInfo_1E60D78 *method)
{
  LimitUpResultCheckComponent_o *v5; // x20
  UnityEngine_Transform_o *transform; // x2

  if ( !this
    || (v5 = this,
        (this = (LimitUpResultCheckComponent_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL)) == 0LL) )
  {
    sub_B5D69C(this, origin);
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
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  int v13; // w1
  char v14; // w2
  __int64 v15; // x3
  int v16; // w1
  char v17; // w2
  __int64 v18; // x3
  int v19; // w1
  char v20; // w2
  __int64 v21; // x3
  int v22; // w1
  char v23; // w2
  __int64 v24; // x3
  struct System_Collections_Generic_List_GameObject__o *resInfoList; // x8
  OpenInfoWindowComponent_o *openInfowindowComp; // x0
  LimitUpResultCheckComponent_c *v27; // x0
  int32_t CONCURRENTLY_DISP_NUM; // w24
  LimitUpResultCheckComponent_c *v29; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v30; // x22
  struct System_Collections_Generic_List_GameObject__o *v31; // x8
  int32_t v32; // w25
  OpenInfoWindowComponent_o *v33; // x21

  if ( (byte_42E7D64 & 1) == 0 )
  {
    sub_B5D5C4(&LimitUpResultCheckComponent_TypeInfo, (_DWORD)callback, isFirstDisp, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__Add__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__RemoveAt__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject___ctor__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v19, v20, v21);
    sub_B5D5C4(&System_Collections_Generic_List_GameObject__TypeInfo, v22, v23, v24);
    byte_42E7D64 = 1;
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
  v27 = LimitUpResultCheckComponent_TypeInfo;
  if ( (BYTE3(LimitUpResultCheckComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LimitUpResultCheckComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LimitUpResultCheckComponent_TypeInfo);
    v27 = LimitUpResultCheckComponent_TypeInfo;
  }
  CONCURRENTLY_DISP_NUM = v27->static_fields->CONCURRENTLY_DISP_NUM;
  if ( !this->fields.isChangeSkill )
  {
    openInfowindowComp = (OpenInfoWindowComponent_o *)this->fields.resUsrSvtData;
    if ( !openInfowindowComp )
      goto LABEL_34;
    if ( UserServantEntity__isLimitCountMax((UserServantEntity_o *)openInfowindowComp, 0LL) )
    {
      v29 = LimitUpResultCheckComponent_TypeInfo;
      if ( (BYTE3(LimitUpResultCheckComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LimitUpResultCheckComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LimitUpResultCheckComponent_TypeInfo);
        v29 = LimitUpResultCheckComponent_TypeInfo;
      }
      CONCURRENTLY_DISP_NUM = v29->static_fields->CONCURRENTLY_DISP_NUM_BY_LIMIT_MAX;
    }
  }
  v30 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v30,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
  v31 = this->fields.resInfoList;
  if ( !v31 )
LABEL_34:
    sub_B5D69C(openInfowindowComp, callback);
  v32 = 0;
  while ( v31->fields._size > 0 && v32 < CONCURRENTLY_DISP_NUM && (v32 == 0 || !this->fields.isChangeSkill) )
  {
    if ( v30 )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v30,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v31->fields._items->m_Items[0],
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GameObject__Add__);
      openInfowindowComp = (OpenInfoWindowComponent_o *)this->fields.resInfoList;
      if ( openInfowindowComp )
      {
        System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)openInfowindowComp,
          0,
          (const MethodInfo_3058CB0 *)Method_System_Collections_Generic_List_GameObject__RemoveAt__);
        v31 = this->fields.resInfoList;
        ++v32;
        if ( v31 )
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
        (System_Collections_Generic_List_GameObject__o *)v30,
        callback,
        isFirstDisp,
        0LL);
      return;
    }
    goto LABEL_34;
  }
  openInfowindowComp = (OpenInfoWindowComponent_o *)LimitUpResultCheckComponent_TypeInfo;
  v33 = this->fields.openInfowindowComp;
  if ( (BYTE3(LimitUpResultCheckComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LimitUpResultCheckComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LimitUpResultCheckComponent_TypeInfo);
  }
  if ( !v33 )
    goto LABEL_34;
  OpenInfoWindowComponent__OpenLimitUpResultInfo(
    v33,
    (System_Collections_Generic_List_GameObject__o *)v30,
    callback,
    isFirstDisp,
    LimitUpResultCheckComponent_TypeInfo->static_fields->LIMIT_UP_DIALOG_GRID_HEIGHT,
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
      sub_B5D69C(openInfowindowComp, isActive);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)openInfowindowComp, isActive, 0LL);
  }
}


void __fastcall LimitUpResultCheckComponent__SetResInfoListQuestInfo(
        LimitUpResultCheckComponent_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  ServantLimitImageMaster_o *Master_WarQuestSelectionMaster; // x24
  DataMasterBase_WarMaster__WarEntity__int__o *Entity; // x0
  __int64 v50; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v51; // x20
  System_String_o *v52; // x23
  System_String_o *v53; // x22
  System_String_o *v54; // x0
  __int64 *v55; // x21
  Il2CppObject *Value; // x21
  System_String_o *v57; // x0
  __int64 *v58; // x8
  System_String_o *v59; // x0
  UnityEngine_Component_o *v60; // x20
  struct System_Collections_Generic_List_GameObject__o *resInfoList; // x19

  if ( (byte_42E7D67 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_ConstantStrMaster___, questId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_QuestMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v9, v10, v11);
    sub_B5D5C4(&DataManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v15, v16, v17);
    sub_B5D5C4(&Method_LimitUpResultCheckComponent_CreateResultInfoObject_LimitUpResultInfoComponent___, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__Add__, v21, v22, v23);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_9867/*"OPEN_MAIN_SCENARIO_TITLE"*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_9873/*"OPEN_STORY_QUEST_TITLE_LIMIT_UP"*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_9864/*"OPEN_LIMIT_UNSEALED_QUEST_NAME_LIMIT_UP"*/, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_9865/*"OPEN_LIMIT_UNSEALED_QUEST_TITLE_LIMIT_UP"*/, v36, v37, v38);
    sub_B5D5C4(&StringLiteral_9859/*"OPEN_EVENT_QUEST_NAME_LIMIT_UP"*/, v39, v40, v41);
    sub_B5D5C4(&StringLiteral_9860/*"OPEN_EVENT_QUEST_TITLE_LIMIT_UP"*/, v42, v43, v44);
    sub_B5D5C4(&StringLiteral_9866/*"OPEN_MAIN_QUEST_TITLE_LIMIT_UP"*/, v45, v46, v47);
    byte_42E7D67 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  Entity = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !Entity )
    goto LABEL_47;
  Entity = (DataMasterBase_WarMaster__WarEntity__int__o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                            Entity,
                                                            questId,
                                                            (const MethodInfo_23FAE10 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( !Entity )
    goto LABEL_47;
  v51 = Entity;
  v52 = 0LL;
  v53 = 0LL;
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
        v54 = LocalizationManager__Get((System_String_o *)StringLiteral_9865/*"OPEN_LIMIT_UNSEALED_QUEST_TITLE_LIMIT_UP"*/, 0LL);
        v55 = &StringLiteral_9864/*"OPEN_LIMIT_UNSEALED_QUEST_NAME_LIMIT_UP"*/;
      }
      else
      {
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        Entity = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ConstantStrMaster___);
        if ( !Entity )
          goto LABEL_47;
        Value = (Il2CppObject *)ConstantStrMaster__GetValue(
                                  (ConstantStrMaster_o *)Entity,
                                  (System_String_o *)StringLiteral_9867/*"OPEN_MAIN_SCENARIO_TITLE"*/,
                                  0LL);
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v57 = LocalizationManager__Get((System_String_o *)StringLiteral_9866/*"OPEN_MAIN_QUEST_TITLE_LIMIT_UP"*/, 0LL);
        v54 = System_String__Format(v57, Value, 0LL);
LABEL_27:
        v55 = &StringLiteral_9859/*"OPEN_EVENT_QUEST_NAME_LIMIT_UP"*/;
      }
LABEL_40:
      v53 = v54;
      v59 = LocalizationManager__Get((System_String_o *)*v55, 0LL);
      v52 = System_String__Format(v59, (Il2CppObject *)v51->fields._MasterName_k__BackingField, 0LL);
      this->fields.isOpenQuest = 1;
LABEL_41:
      if ( !System_String__IsNullOrEmpty(v53, 0LL) && !System_String__IsNullOrEmpty(v52, 0LL) )
      {
        Entity = (DataMasterBase_WarMaster__WarEntity__int__o *)LimitUpResultCheckComponent__CreateResultInfoObject_object_(
                                                                  this,
                                                                  (Il2CppObject *)this->fields.limitUpResultInfoStoryOrigin,
                                                                  (const MethodInfo_1E60D78 *)Method_LimitUpResultCheckComponent_CreateResultInfoObject_LimitUpResultInfoComponent___);
        if ( Entity )
        {
          v60 = (UnityEngine_Component_o *)Entity;
          ((void (__fastcall *)(DataMasterBase_WarMaster__WarEntity__int__o *, System_String_o *, System_String_o *, Il2CppMethodPointer))Entity->klass->vtable._4_getList.method)(
            Entity,
            v53,
            v52,
            Entity->klass->vtable._5_ForForceDerived.methodPtr);
          resInfoList = this->fields.resInfoList;
          Entity = (DataMasterBase_WarMaster__WarEntity__int__o *)UnityEngine_Component__get_gameObject(v60, 0LL);
          if ( resInfoList )
          {
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)resInfoList,
              (EventMissionProgressRequest_Argument_ProgressData_o *)Entity,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GameObject__Add__);
            return;
          }
        }
LABEL_47:
        sub_B5D69C(Entity, v50);
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
        v55 = &StringLiteral_9864/*"OPEN_LIMIT_UNSEALED_QUEST_NAME_LIMIT_UP"*/;
        v58 = &StringLiteral_9865/*"OPEN_LIMIT_UNSEALED_QUEST_TITLE_LIMIT_UP"*/;
      }
      else
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v55 = &StringLiteral_9859/*"OPEN_EVENT_QUEST_NAME_LIMIT_UP"*/;
        v58 = &StringLiteral_9873/*"OPEN_STORY_QUEST_TITLE_LIMIT_UP"*/;
      }
      v54 = LocalizationManager__Get((System_String_o *)*v58, 0LL);
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
      v54 = LocalizationManager__Get((System_String_o *)StringLiteral_9860/*"OPEN_EVENT_QUEST_TITLE_LIMIT_UP"*/, 0LL);
      goto LABEL_27;
    default:
      v53 = 0LL;
      goto LABEL_41;
  }
}


void __fastcall LimitUpResultCheckComponent__SetSkillRelease(
        LimitUpResultCheckComponent_o *this,
        int32_t skillId,
        int32_t targetIdx,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
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
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  __int64 v35; // x1
  SkillEntity_o *Entity; // x23
  System_String_o *v37; // x22
  System_String_o *v38; // x0
  System_String_o *v39; // x23
  struct UserServantEntity_o *resUsrSvtData; // x8
  ServantSkillMaster_o *v41; // x24
  __int64 v42; // x25
  __int64 v43; // x26
  ServantSkillEntity_o *EntityFromSkillId; // x24
  const MethodInfo *v45; // x6
  UnityEngine_Component_o *v46; // x21
  struct System_Collections_Generic_List_GameObject__o *resInfoList; // x20
  System_String_o *detail; // [xsp+0h] [xbp-50h] BYREF
  System_String_o *name; // [xsp+8h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16

  if ( (byte_42E7D69 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantSkillMaster___, skillId, targetIdx, method);
    sub_B5D5C4(&Method_DataManager_GetMaster_SkillMaster___, v7, v8, v9);
    sub_B5D5C4(&DataManager_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v13, v14, v15);
    sub_B5D5C4(
      &Method_LimitUpResultCheckComponent_CreateResultInfoObject_LimitUpResultInfoSkillComponent___,
      v16,
      v17,
      v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__Add__, v19, v20, v21);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v25, v26, v27);
    sub_B5D5C4(&StringLiteral_6961/*"GET_SKILL_TITLE"*/, v28, v29, v30);
    sub_B5D5C4(&StringLiteral_6960/*"GET_SKILL_NAME_LIMIT_UP"*/, v31, v32, v33);
    byte_42E7D69 = 1;
  }
  detail = 0LL;
  name = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_SkillMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_20;
  Entity = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              Master_WarQuestSelectionMaster,
                              skillId,
                              (const MethodInfo_23FAE10 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)LocalizationManager__Get(
                                                                                    (System_String_o *)StringLiteral_6961/*"GET_SKILL_TITLE"*/,
                                                                                    0LL);
  if ( !this->fields.resUsrSvtData )
    goto LABEL_20;
  v37 = (System_String_o *)Master_WarQuestSelectionMaster;
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)UserServantEntity__getSkillLevel(
                                                                                    this->fields.resUsrSvtData,
                                                                                    targetIdx,
                                                                                    0LL);
  if ( !Entity )
    goto LABEL_20;
  SkillEntity__getSkillMessageInfo(Entity, &name, &detail, (int32_t)Master_WarQuestSelectionMaster, 0LL);
  v38 = LocalizationManager__Get((System_String_o *)StringLiteral_6960/*"GET_SKILL_NAME_LIMIT_UP"*/, 0LL);
  v39 = System_String__Format(v38, (Il2CppObject *)name, 0LL);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantSkillMaster___);
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_20;
  v41 = (ServantSkillMaster_o *)Master_WarQuestSelectionMaster;
  v43 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v42 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v50.fields.currentCryptoKey = v43;
  *(_QWORD *)&v50.fields.fakeValue = v42;
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                                                    v50,
                                                                                    0LL);
  if ( !v41
    || (EntityFromSkillId = ServantSkillMaster__getEntityFromSkillId(
                              v41,
                              (int32_t)Master_WarQuestSelectionMaster,
                              targetIdx + 1,
                              skillId,
                              0LL),
        (Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)LimitUpResultCheckComponent__CreateResultInfoObject_object_(
                                                                                           this,
                                                                                           (Il2CppObject *)this->fields.limitUpResultInfoSkillOrigin,
                                                                                           (const MethodInfo_1E60D78 *)Method_LimitUpResultCheckComponent_CreateResultInfoObject_LimitUpResultInfoSkillComponent___)) == 0LL)
    || (v46 = (UnityEngine_Component_o *)Master_WarQuestSelectionMaster,
        LimitUpResultInfoSkillComponent__Setup(
          (LimitUpResultInfoSkillComponent_o *)Master_WarQuestSelectionMaster,
          skillId,
          v39,
          EntityFromSkillId,
          v37,
          detail,
          v45),
        resInfoList = this->fields.resInfoList,
        Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)UnityEngine_Component__get_gameObject(
                                                                                          v46,
                                                                                          0LL),
        !resInfoList) )
  {
LABEL_20:
    sub_B5D69C(Master_WarQuestSelectionMaster, v35);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)resInfoList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)Master_WarQuestSelectionMaster,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GameObject__Add__);
  this->fields.isGetNewSkill = 1;
}


void __fastcall LimitUpResultCheckComponent__checkGetSkill(
        LimitUpResultCheckComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  LimitUpResultCheckComponent_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
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
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int64 v33; // x20
  __int64 v34; // x21
  int v35; // w21
  System_Int32_array *SkillIdList; // x0
  int32_t kind; // w8
  System_Int32_array *v38; // x20
  int32_t LimitCntMax; // w21
  int32_t v40; // w2
  LimitUpResultCheckComponent_o *v41; // x22
  int max_length; // w8
  unsigned int v43; // w9
  unsigned int v44; // w21
  char *v45; // x23
  int32_t *v46; // x23
  int v47; // w25
  int v48; // t1
  char *v49; // x24
  int v50; // w9
  int32_t *v51; // x24
  int v52; // t1
  const MethodInfo *v53; // x3
  int32_t v54; // w22
  int32_t v55; // w20
  DataMasterBase_WarMaster__WarEntity__int__o *v56; // x23
  SkillEntity_o *Entity; // x22
  SkillEntity_o *v58; // x20
  int32_t v59; // w23
  int32_t SkillLevel; // w0
  UILabel_o *skillChangeInfoTitle; // x24
  int32_t v62; // w21
  UILabel_o *skillChangeInfoSubTitleOld; // x24
  UILabel_o *skillChangeInfoSubTitleNow; // x24
  UILabel_o *skillChangeInfoNameOld; // x22
  System_String_o *v66; // x0
  UILabel_o *skillChangeInfoNameNow; // x20
  System_String_o *v68; // x0
  __int64 v69; // x0
  System_String_o *detail; // [xsp+8h] [xbp-48h] BYREF
  System_String_o *name; // [xsp+18h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v72; // 0:x0.16

  v4 = this;
  if ( (byte_42E7D68 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_SkillMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__Add__, v8, v9, v10);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_6959/*"GET_SKILL_NAME"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_1686/*"AFTER_CHANGE_SKILL_SUB_TITLE"*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_3015/*"CHANGE_SKILL_TITLE"*/, v26, v27, v28);
    this = (LimitUpResultCheckComponent_o *)sub_B5D5C4(&StringLiteral_2597/*"BEFORE_CHANGE_SKILL_SUB_TITLE"*/, v29, v30, v31);
    byte_42E7D68 = 1;
  }
  name = 0LL;
  detail = 0LL;
  baseUsrSvtData = v4->fields.baseUsrSvtData;
  *(_WORD *)&v4->fields.isGetNewSkill = 0;
  if ( !baseUsrSvtData )
    goto LABEL_55;
  v34 = *(_QWORD *)&baseUsrSvtData->fields.limitCount.fields.currentCryptoKey;
  v33 = *(_QWORD *)&baseUsrSvtData->fields.limitCount.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v72.fields.currentCryptoKey = v34;
  *(_QWORD *)&v72.fields.fakeValue = v33;
  this = (LimitUpResultCheckComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v72, 0LL);
  if ( !v4->fields.baseUsrSvtData )
    goto LABEL_55;
  v35 = (int)this;
  SkillIdList = UserServantEntity__getSkillIdList(v4->fields.baseUsrSvtData, -1, (int32_t)this, 1, 0LL);
  kind = v4->fields.kind;
  v38 = SkillIdList;
  if ( kind == 19 || kind == 10 )
  {
    this = (LimitUpResultCheckComponent_o *)v4->fields.baseUsrSvtData;
    if ( !this )
      goto LABEL_55;
    LimitCntMax = v35 + 1;
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
      sub_B5D69C(this, method);
    v40 = LimitCntMax;
  }
  else
  {
    this = (LimitUpResultCheckComponent_o *)v4->fields.resUsrSvtData;
    if ( !this )
      goto LABEL_55;
    v40 = -1;
  }
  this = (LimitUpResultCheckComponent_o *)UserServantEntity__getSkillIdList(
                                            (UserServantEntity_o *)this,
                                            -1,
                                            v40,
                                            1,
                                            0LL);
  v41 = this;
  if ( !v38 )
    goto LABEL_55;
  max_length = v38->max_length;
  if ( max_length >= 1 )
  {
    v43 = 0;
    while ( 1 )
    {
      if ( v43 >= max_length )
        goto LABEL_54;
      v44 = v43;
      v45 = (char *)v38 + 4 * (int)v43;
      v48 = *((_DWORD *)v45 + 8);
      v46 = (int32_t *)(v45 + 32);
      v47 = v48;
      if ( !this )
        goto LABEL_55;
      if ( v43 >= LODWORD(this->fields.openInfowindowComp) )
        goto LABEL_54;
      v49 = (char *)this + 4 * (int)v43;
      v52 = *((_DWORD *)v49 + 8);
      v51 = (int32_t *)(v49 + 32);
      v50 = v52;
      if ( v47 != v52 && v50 >= 1 )
        break;
      v43 = v44 + 1;
      if ( (int)(v44 + 1) >= max_length )
        return;
    }
    this = (LimitUpResultCheckComponent_o *)v4->fields.resUsrSvtData;
    if ( !this )
      goto LABEL_55;
    this = (LimitUpResultCheckComponent_o *)UserServantEntity__IsHeroine((UserServantEntity_o *)this, 0LL);
    if ( v47 >= 1 && ((unsigned __int8)this & 1) != 0 )
    {
      if ( v44 < v38->max_length && v44 < LODWORD(v41->fields.openInfowindowComp) )
      {
        v54 = *v46;
        v55 = *v51;
        this = (LimitUpResultCheckComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( this )
        {
          this = (LimitUpResultCheckComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                    (DataManager_o *)this,
                                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SkillMaster___);
          if ( this )
          {
            v56 = (DataMasterBase_WarMaster__WarEntity__int__o *)this;
            Entity = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                        (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                        v54,
                                        (const MethodInfo_23FAE10 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
            this = (LimitUpResultCheckComponent_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                      v56,
                                                      v55,
                                                      (const MethodInfo_23FAE10 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
            if ( v4->fields.baseUsrSvtData )
            {
              v58 = (SkillEntity_o *)this;
              this = (LimitUpResultCheckComponent_o *)UserServantEntity__getSkillLevel(
                                                        v4->fields.baseUsrSvtData,
                                                        v44,
                                                        0LL);
              if ( v4->fields.resUsrSvtData )
              {
                v59 = (int)this;
                SkillLevel = UserServantEntity__getSkillLevel(v4->fields.resUsrSvtData, v44, 0LL);
                skillChangeInfoTitle = v4->fields.skillChangeInfoTitle;
                v62 = SkillLevel;
                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                }
                this = (LimitUpResultCheckComponent_o *)LocalizationManager__Get(
                                                          (System_String_o *)StringLiteral_3015/*"CHANGE_SKILL_TITLE"*/,
                                                          0LL);
                if ( skillChangeInfoTitle )
                {
                  UILabel__set_text(skillChangeInfoTitle, (System_String_o *)this, 0LL);
                  skillChangeInfoSubTitleOld = v4->fields.skillChangeInfoSubTitleOld;
                  this = (LimitUpResultCheckComponent_o *)LocalizationManager__Get(
                                                            (System_String_o *)StringLiteral_2597/*"BEFORE_CHANGE_SKILL_SUB_TITLE"*/,
                                                            0LL);
                  if ( skillChangeInfoSubTitleOld )
                  {
                    UILabel__set_text(skillChangeInfoSubTitleOld, (System_String_o *)this, 0LL);
                    skillChangeInfoSubTitleNow = v4->fields.skillChangeInfoSubTitleNow;
                    this = (LimitUpResultCheckComponent_o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_1686/*"AFTER_CHANGE_SKILL_SUB_TITLE"*/,
                                                              0LL);
                    if ( skillChangeInfoSubTitleNow )
                    {
                      UILabel__set_text(skillChangeInfoSubTitleNow, (System_String_o *)this, 0LL);
                      if ( Entity )
                      {
                        SkillEntity__getSkillMessageInfo(Entity, &name, &detail, v59, 0LL);
                        skillChangeInfoNameOld = v4->fields.skillChangeInfoNameOld;
                        v66 = LocalizationManager__Get((System_String_o *)StringLiteral_6959/*"GET_SKILL_NAME"*/, 0LL);
                        this = (LimitUpResultCheckComponent_o *)System_String__Format(v66, (Il2CppObject *)name, 0LL);
                        if ( skillChangeInfoNameOld )
                        {
                          UILabel__set_text(skillChangeInfoNameOld, (System_String_o *)this, 0LL);
                          this = (LimitUpResultCheckComponent_o *)v4->fields.skillChangeInfoDetailOld;
                          if ( this )
                          {
                            this = (LimitUpResultCheckComponent_o *)WrapControlText__textBBCodeAdjust(
                                                                      (UILabel_o *)this,
                                                                      detail,
                                                                      (int32_t)this[1].fields.skillChangeInfoDetailOld,
                                                                      0,
                                                                      0,
                                                                      0LL);
                            if ( v58 )
                            {
                              SkillEntity__getSkillMessageInfo(v58, &name, &detail, v62, 0LL);
                              skillChangeInfoNameNow = v4->fields.skillChangeInfoNameNow;
                              v68 = LocalizationManager__Get((System_String_o *)StringLiteral_6959/*"GET_SKILL_NAME"*/, 0LL);
                              this = (LimitUpResultCheckComponent_o *)System_String__Format(
                                                                        v68,
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
                                    detail,
                                    (int32_t)this[1].fields.skillChangeInfoDetailOld,
                                    0,
                                    0,
                                    0LL);
                                  this = (LimitUpResultCheckComponent_o *)v4->fields.resInfoList;
                                  if ( this )
                                  {
                                    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
                                      (EventMissionProgressRequest_Argument_ProgressData_o *)v4->fields.skillChangeInfo,
                                      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GameObject__Add__);
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
      v69 = sub_B5D6C8(this);
      sub_B5D668(v69, 0LL);
    }
    if ( v44 >= LODWORD(v41->fields.openInfowindowComp) )
      goto LABEL_54;
    LimitUpResultCheckComponent__SetSkillRelease(v4, *v51, v44, v53);
  }
}


void __fastcall LimitUpResultCheckComponent__checkLimitUpReward(
        LimitUpResultCheckComponent_o *this,
        System_Collections_Generic_List_int____o *rewardGiftDataList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  __int64 v48; // x21
  CombineLimitGiftMaster_o *Master_WarQuestSelectionMaster; // x23
  GiftMaster_o *LimitCntMax; // x0
  __int64 v51; // x1
  struct UserServantEntity_o *baseUsrSvtData; // x8
  GiftMaster_o *v53; // x22
  __int64 v54; // x24
  __int64 v55; // x25
  struct UserServantEntity_o *v56; // x8
  __int64 v57; // x24
  __int64 v58; // x25
  System_Int32_array **DataById; // x0
  __int64 v60; // x22
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  System_String_o *v67; // x23
  Il2CppObject *v68; // x25
  System_String_o *v69; // x24
  Il2CppObject *v70; // x0
  System_String_o *v71; // x24
  Il2CppObject *v72; // x25
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v73; // x26
  bool v74; // w20
  const MethodInfo *v75; // x5
  struct System_Collections_Generic_List_GameObject__o *resInfoList; // x20
  int v77; // [xsp+Ch] [xbp-54h] BYREF
  System_String_o *countText; // [xsp+10h] [xbp-50h] BYREF
  System_String_o *nameText; // [xsp+18h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v80; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v81; // 0:x0.16

  if ( (byte_42E7D6A & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Any_int_____, (_DWORD)rewardGiftDataList, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_CombineLimitGiftMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMaster_GiftMaster___, v9, v10, v11);
    sub_B5D5C4(&DataManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_System_Func_int____bool___ctor__, v15, v16, v17);
    sub_B5D5C4(&System_Func_int____bool__TypeInfo, v18, v19, v20);
    sub_B5D5C4(&int_TypeInfo, v21, v22, v23);
    sub_B5D5C4(
      &Method_LimitUpResultCheckComponent_CreateResultInfoObject_LimitUpResultInfoRewardComponent___,
      v24,
      v25,
      v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__Add__, v27, v28, v29);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v33, v34, v35);
    sub_B5D5C4(&Method_LimitUpResultCheckComponent___c__DisplayClass44_0__checkLimitUpReward_b__0__, v36, v37, v38);
    sub_B5D5C4(&LimitUpResultCheckComponent___c__DisplayClass44_0_TypeInfo, v39, v40, v41);
    sub_B5D5C4(&StringLiteral_6956/*"GET_LIMIT_UP_REWARD_DETAIL"*/, v42, v43, v44);
    sub_B5D5C4(&StringLiteral_6957/*"GET_LIMIT_UP_REWARD_TITLE"*/, v45, v46, v47);
    byte_42E7D6A = 1;
  }
  countText = 0LL;
  nameText = 0LL;
  v48 = sub_B5D694(LimitUpResultCheckComponent___c__DisplayClass44_0_TypeInfo);
  LimitUpResultCheckComponent___c__DisplayClass44_0___ctor(
    (LimitUpResultCheckComponent___c__DisplayClass44_0_o *)v48,
    0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (CombineLimitGiftMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_CombineLimitGiftMaster___);
  LimitCntMax = (GiftMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_GiftMaster___);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_35;
  v53 = LimitCntMax;
  v55 = *(_QWORD *)&baseUsrSvtData->fields.limitCount.fields.currentCryptoKey;
  v54 = *(_QWORD *)&baseUsrSvtData->fields.limitCount.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v80.fields.currentCryptoKey = v55;
  *(_QWORD *)&v80.fields.fakeValue = v54;
  LimitCntMax = (GiftMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v80, 0LL);
  if ( !v48 )
    goto LABEL_35;
  *(_DWORD *)(v48 + 16) = (_DWORD)LimitCntMax + 1;
  LimitCntMax = (GiftMaster_o *)this->fields.baseUsrSvtData;
  if ( !LimitCntMax )
    goto LABEL_35;
  LimitCntMax = (GiftMaster_o *)UserServantEntity__getLimitCntMax((UserServantEntity_o *)LimitCntMax, 0LL);
  if ( (int)LimitCntMax < *(_DWORD *)(v48 + 16) )
  {
    LimitCntMax = (GiftMaster_o *)this->fields.baseUsrSvtData;
    if ( !LimitCntMax )
      goto LABEL_35;
    LimitCntMax = (GiftMaster_o *)UserServantEntity__getLimitCntMax((UserServantEntity_o *)LimitCntMax, 0LL);
    *(_DWORD *)(v48 + 16) = (_DWORD)LimitCntMax;
  }
  v56 = this->fields.baseUsrSvtData;
  if ( !v56 )
    goto LABEL_35;
  v58 = *(_QWORD *)&v56->fields.svtId.fields.currentCryptoKey;
  v57 = *(_QWORD *)&v56->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v81.fields.currentCryptoKey = v58;
  *(_QWORD *)&v81.fields.fakeValue = v57;
  LimitCntMax = (GiftMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v81, 0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_35;
  LimitCntMax = (GiftMaster_o *)CombineLimitGiftMaster__GetCombineLimitGiftId(
                                  Master_WarQuestSelectionMaster,
                                  (int32_t)LimitCntMax,
                                  *(_DWORD *)(v48 + 16),
                                  0LL);
  if ( !(_DWORD)LimitCntMax )
    return;
  if ( !v53 )
    goto LABEL_35;
  DataById = (System_Int32_array **)GiftMaster__getDataById(v53, (int32_t)LimitCntMax, 0LL);
  *(_QWORD *)(v48 + 24) = DataById;
  v60 = v48 + 24;
  sub_B5D560((BattleServantConfConponent_o *)(v48 + 24), DataById, v61, v62, v63, v64, v65, v66);
  if ( !*(_QWORD *)(v48 + 24) )
    return;
  GiftEntity__GetInfo(*(GiftEntity_o **)(v48 + 24), &nameText, &countText, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v67 = LocalizationManager__Get((System_String_o *)StringLiteral_6957/*"GET_LIMIT_UP_REWARD_TITLE"*/, 0LL);
  LimitCntMax = (GiftMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6956/*"GET_LIMIT_UP_REWARD_DETAIL"*/, 0LL);
  if ( !*(_QWORD *)v60 )
    goto LABEL_35;
  v68 = (Il2CppObject *)nameText;
  v69 = (System_String_o *)LimitCntMax;
  v77 = *(_DWORD *)(*(_QWORD *)v60 + 28LL);
  v70 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v77);
  v71 = System_String__Format_44573324(v69, v68, v70, 0LL);
  v72 = LimitUpResultCheckComponent__CreateResultInfoObject_object_(
          this,
          (Il2CppObject *)this->fields.limitUpResultInfoRewardOrigin,
          (const MethodInfo_1E60D78 *)Method_LimitUpResultCheckComponent_CreateResultInfoObject_LimitUpResultInfoRewardComponent___);
  if ( rewardGiftDataList )
  {
    v73 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_int____bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v73,
      (Il2CppObject *)v48,
      Method_LimitUpResultCheckComponent___c__DisplayClass44_0__checkLimitUpReward_b__0__,
      (const MethodInfo_2C2ECD0 *)Method_System_Func_int____bool___ctor__);
    v74 = !BasicHelper__Any_WarBoardData_SquareRangeSearch_(
             (System_Collections_Generic_List_T__o *)rewardGiftDataList,
             (System_Func_T__bool__o *)v73,
             (const MethodInfo_1AD6D34 *)Method_BasicHelper_Any_int_____);
  }
  else
  {
    v74 = 1;
  }
  LimitCntMax = *(GiftMaster_o **)v60;
  if ( !*(_QWORD *)v60
    || (LimitCntMax = (GiftMaster_o *)GiftEntity__getIconImageId((GiftEntity_o *)LimitCntMax, 0LL), !v72)
    || (LimitUpResultInfoRewardComponent__Setup(
          (LimitUpResultInfoRewardComponent_o *)v72,
          (int32_t)LimitCntMax,
          v74,
          v67,
          v71,
          v75),
        resInfoList = this->fields.resInfoList,
        LimitCntMax = (GiftMaster_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v72, 0LL),
        !resInfoList) )
  {
LABEL_35:
    sub_B5D69C(LimitCntMax, v51);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)resInfoList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)LimitCntMax,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GameObject__Add__);
  this->fields.isGetReward = 1;
}


void __fastcall LimitUpResultCheckComponent__checkQuestOpen(
        LimitUpResultCheckComponent_o *this,
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
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
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
  System_Collections_Generic_List_int__o *v38; // x0
  __int64 v39; // x1
  int32_t svtCollectionLimitCnt; // w8
  UserServantEntity_o *baseUsrSvtData; // x0
  int32_t LimitCntMax; // w20
  struct UserServantEntity_o *resUsrSvtData; // x8
  clsQuestCheck_o *v44; // x21
  __int64 v45; // x22
  __int64 v46; // x23
  System_Collections_Generic_List_int__o *v47; // x0
  struct UserServantEntity_o *v48; // x8
  clsQuestCheck_o *v49; // x20
  __int64 v50; // x21
  __int64 v51; // x22
  System_Collections_Generic_List_int__o *v52; // x20
  UILabel_o *storyQuestInfoTitle; // x21
  UILabel_o *heroQuestInfoTitle; // x21
  const MethodInfo *v55; // x2
  __int64 size; // x8
  __int64 v57; // x21
  int32_t v58; // w1
  __int64 v59; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v60; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // 0:x0.16

  if ( (byte_42E7D66 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Count__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Item__, v11, v12, v13);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23, v24, v25);
    sub_B5D5C4(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v26, v27, v28);
    sub_B5D5C4(&SingletonTemplate_clsQuestCheck__TypeInfo, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_9872/*"OPEN_STORY_QUEST_TITLE"*/, v32, v33, v34);
    sub_B5D5C4(&StringLiteral_9861/*"OPEN_HERO_QUEST_TITLE"*/, v35, v36, v37);
    byte_42E7D66 = 1;
  }
  this->fields.isOpenQuest = 0;
  v38 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v38,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
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
      baseUsrSvtData = (UserServantEntity_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
      resUsrSvtData = this->fields.resUsrSvtData;
      if ( !resUsrSvtData )
        goto LABEL_44;
      v44 = (clsQuestCheck_o *)baseUsrSvtData;
      v46 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
      v45 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v60.fields.currentCryptoKey = v46;
      *(_QWORD *)&v60.fields.fakeValue = v45;
      baseUsrSvtData = (UserServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                v60,
                                                0LL);
      if ( !v44 )
LABEL_44:
        sub_B5D69C(baseUsrSvtData, v39);
      v47 = clsQuestCheck__GetReleaseQuestIdByServantLimit_22766084(
              v44,
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
      baseUsrSvtData = (UserServantEntity_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
      v48 = this->fields.resUsrSvtData;
      if ( !v48 )
        goto LABEL_44;
      v49 = (clsQuestCheck_o *)baseUsrSvtData;
      v51 = *(_QWORD *)&v48->fields.svtId.fields.currentCryptoKey;
      v50 = *(_QWORD *)&v48->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v61.fields.currentCryptoKey = v51;
      *(_QWORD *)&v61.fields.fakeValue = v50;
      baseUsrSvtData = (UserServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                v61,
                                                0LL);
      if ( !v49 )
        goto LABEL_44;
      v47 = clsQuestCheck__GetReleaseQuestIdByServantLimit(
              v49,
              (int32_t)baseUsrSvtData,
              this->fields.svtCollectionLimitCnt,
              0LL);
    }
    v52 = v47;
    storyQuestInfoTitle = this->fields.storyQuestInfoTitle;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    baseUsrSvtData = (UserServantEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9872/*"OPEN_STORY_QUEST_TITLE"*/, 0LL);
    if ( storyQuestInfoTitle )
    {
      UILabel__set_text(storyQuestInfoTitle, (System_String_o *)baseUsrSvtData, 0LL);
      heroQuestInfoTitle = this->fields.heroQuestInfoTitle;
      baseUsrSvtData = (UserServantEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9861/*"OPEN_HERO_QUEST_TITLE"*/, 0LL);
      if ( heroQuestInfoTitle )
      {
        UILabel__set_text(heroQuestInfoTitle, (System_String_o *)baseUsrSvtData, 0LL);
        baseUsrSvtData = (UserServantEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( baseUsrSvtData )
        {
          DataManager__GetMasterData_WarQuestSelectionMaster_(
            (DataManager_o *)baseUsrSvtData,
            (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
          if ( v52 )
          {
            LODWORD(size) = v52->fields._size;
            if ( (int)size >= 1 )
            {
              v57 = 8LL;
              do
              {
                if ( v57 - 8 >= (unsigned __int64)(unsigned int)size )
                  System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
                v58 = *((_DWORD *)&v52->fields._items->obj.klass + v57);
                if ( v58 >= 1 )
                {
                  if ( v57 - 8 >= (unsigned __int64)(unsigned int)v52->fields._size )
                    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
                  LimitUpResultCheckComponent__SetResInfoListQuestInfo(this, v58, v55);
                }
                size = v52->fields._size;
                v59 = v57 - 7;
                ++v57;
              }
              while ( v59 < size );
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
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
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
  struct UserServantEntity_o **p_resUsrSvtData; // x23
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v36; // x21
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  __int64 v44; // x1
  struct UserServantEntity_o *v45; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v46; // x21
  __int64 v47; // x22
  __int64 v48; // x23
  const MethodInfo *v49; // x1
  const MethodInfo *v50; // x1
  const MethodInfo *v51; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16

  if ( (byte_42E7D63 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantMaster___, kind, (_DWORD)baseData, resData);
    sub_B5D5C4(&DataManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject___ctor__, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_GameObject__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v26, v27, v28);
    byte_42E7D63 = 1;
  }
  this->fields.baseUsrSvtData = baseData;
  sub_B5D560(
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.resUsrSvtData,
    (System_Int32_array **)resData,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  this->fields.svtCollectionLimitCnt = baseCollectionLimitCnt;
  this->fields.kind = kind;
  v36 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v36,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.resInfoList = (struct System_Collections_Generic_List_GameObject__o *)v36;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.resInfoList,
    (System_Int32_array **)v36,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  *(_DWORD *)&this->fields.isGetNewSkill = 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantMaster___);
  v45 = *p_resUsrSvtData;
  if ( !*p_resUsrSvtData )
    goto LABEL_15;
  v46 = Master_WarQuestSelectionMaster;
  v48 = *(_QWORD *)&v45->fields.svtId.fields.currentCryptoKey;
  v47 = *(_QWORD *)&v45->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v52.fields.currentCryptoKey = v48;
  *(_QWORD *)&v52.fields.fakeValue = v47;
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                                                    v52,
                                                                                    0LL);
  if ( !v46
    || (Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                                                          v46,
                                                                                          (int32_t)Master_WarQuestSelectionMaster,
                                                                                          (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_15:
    sub_B5D69C(Master_WarQuestSelectionMaster, v44);
  }
  if ( ServantEntity__get_IsServant((ServantEntity_o *)Master_WarQuestSelectionMaster, 0LL) )
  {
    LimitUpResultCheckComponent__checkGetSkill(this, v49);
    LimitUpResultCheckComponent__checkQuestOpen(this, v50);
    LimitUpResultCheckComponent__checkLimitUpReward(this, rewardGiftDataList, v51);
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
    v6 = sub_B5D6C8(this);
    sub_B5D668(v6, 0LL);
  }
  if ( data->m_Items[1] == this->fields.afterLimitCnt )
  {
    if ( max_length > 1 )
    {
      giftEntity = this->fields.giftEntity;
      if ( giftEntity )
        return data->m_Items[2] == giftEntity->fields.id;
LABEL_10:
      sub_B5D69C(this, data);
    }
    goto LABEL_9;
  }
  return 0;
}