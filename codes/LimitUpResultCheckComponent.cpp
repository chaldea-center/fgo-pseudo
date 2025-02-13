void __fastcall LimitUpResultCheckComponent___cctor(const MethodInfo *method)
{
  struct LimitUpResultCheckComponent_StaticFields *static_fields; // x8

  if ( (byte_4BE0029 & 1) == 0 )
  {
    sub_1C21E38(&LimitUpResultCheckComponent_TypeInfo);
    byte_4BE0029 = 1;
  }
  static_fields = LimitUpResultCheckComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->CONCURRENTLY_DISP_NUM = 0x100000002LL;
  static_fields->LIMIT_UP_DIALOG_GRID_HEIGHT = 127;
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

  if ( (byte_4BE0023 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    byte_4BE0023 = 1;
  }
  resInfoList = this->fields.resInfoList;
  return !resInfoList || resInfoList->fields._size <= 0;
}


Il2CppObject *__fastcall LimitUpResultCheckComponent__CreateResultInfoObject_object_(
        LimitUpResultCheckComponent_o *this,
        Il2CppObject *origin,
        const MethodInfo_3028B24 *method)
{
  UnityEngine_Component_o *v5; // x21
  UnityEngine_Transform_o *transform; // x0

  v5 = (UnityEngine_Component_o *)this;
  if ( !method->rgctx_data )
    this = (LimitUpResultCheckComponent_o *)sub_1C73D70();
  if ( !v5 || (this = (LimitUpResultCheckComponent_o *)UnityEngine_Component__get_gameObject(v5, 0LL)) == 0LL )
    sub_1C22094(this, origin);
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  return BaseMonoBehaviour__createObject_object_(
           (BaseMonoBehaviour_o *)v5,
           origin,
           transform,
           0LL,
           (const MethodInfo_2F9A6E4 *)method->rgctx_data->_1_BaseMonoBehaviour_createObject_T_);
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
  System_Collections_Generic_List_object__o *v12; // x22
  const MethodInfo *v13; // x4
  const MethodInfo *v14; // x6
  int32_t v15; // w25
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  int64_t v25; // x1
  Il2CppClass **v26; // x0
  OpenInfoWindowComponent_o *v27; // x21
  _BOOL4 isGetNewSkill; // w8
  int32_t monitor; // w4
  bool v30; // w5

  if ( (byte_4BE0022 & 1) == 0 )
  {
    sub_1C21E38(&LimitUpResultCheckComponent_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__RemoveAt__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1C21E38(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_4BE0022 = 1;
  }
  resInfoList = this->fields.resInfoList;
  if ( !resInfoList || resInfoList->fields._size <= 0 )
  {
    ActionExtensions__Call(callback, 0LL);
    return;
  }
  openInfowindowComp = this->fields.openInfowindowComp;
  if ( !openInfowindowComp )
    goto LABEL_40;
  OpenInfoWindowComponent__Init(openInfowindowComp, (const MethodInfo *)callback);
  v9 = LimitUpResultCheckComponent_TypeInfo;
  if ( !LimitUpResultCheckComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LimitUpResultCheckComponent_TypeInfo);
    v9 = LimitUpResultCheckComponent_TypeInfo;
  }
  CONCURRENTLY_DISP_NUM = v9->static_fields->CONCURRENTLY_DISP_NUM;
  if ( !this->fields.isChangeSkill )
  {
    openInfowindowComp = (OpenInfoWindowComponent_o *)this->fields.resUsrSvtData;
    if ( !openInfowindowComp )
      goto LABEL_40;
    if ( UserServantEntity__isLimitCountMax((UserServantEntity_o *)openInfowindowComp, 0LL) )
    {
      v11 = LimitUpResultCheckComponent_TypeInfo;
      if ( !LimitUpResultCheckComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LimitUpResultCheckComponent_TypeInfo);
        v11 = LimitUpResultCheckComponent_TypeInfo;
      }
      CONCURRENTLY_DISP_NUM = v11->static_fields->CONCURRENTLY_DISP_NUM_BY_LIMIT_MAX;
    }
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  openInfowindowComp = (OpenInfoWindowComponent_o *)this->fields.resInfoList;
  if ( !openInfowindowComp )
LABEL_40:
    sub_1C22094(openInfowindowComp, callback);
  v15 = 0;
  while ( SLODWORD(openInfowindowComp->fields.m_CancellationTokenSource) > 0
       && v15 < CONCURRENTLY_DISP_NUM
       && (v15 == 0 || !this->fields.isChangeSkill) )
  {
    openInfowindowComp = (OpenInfoWindowComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                        (System_Collections_Generic_List_object__o *)openInfowindowComp,
                                                        0,
                                                        (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( v12 )
    {
      items = v12->fields._items;
      v23 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++v12->fields._version;
      if ( items )
      {
        size = v12->fields._size;
        v25 = (int64_t)openInfowindowComp;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v12,
            (Il2CppObject *)openInfowindowComp,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
        else
        {
          v26 = &items->obj.klass + size;
          v12->fields._size = size + 1;
          v26[4] = (Il2CppClass *)v25;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v26 + 4), v25, v16, v17, v18, v19, v20, v21);
        }
        openInfowindowComp = (OpenInfoWindowComponent_o *)this->fields.resInfoList;
        if ( openInfowindowComp )
        {
          System_Collections_Generic_List_object___RemoveAt(
            (System_Collections_Generic_List_object__o *)openInfowindowComp,
            0,
            (const MethodInfo_3650888 *)Method_System_Collections_Generic_List_GameObject__RemoveAt__);
          openInfowindowComp = (OpenInfoWindowComponent_o *)this->fields.resInfoList;
          ++v15;
          if ( openInfowindowComp )
            continue;
        }
      }
    }
    goto LABEL_40;
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
        v13);
      return;
    }
    goto LABEL_40;
  }
  if ( this->fields.transformationCount > 1 )
  {
    isGetNewSkill = this->fields.isGetNewSkill;
    v27 = this->fields.openInfowindowComp;
    if ( isGetNewSkill )
    {
      monitor = 125;
      v30 = 1;
      goto LABEL_38;
    }
  }
  else
  {
    v27 = this->fields.openInfowindowComp;
  }
  openInfowindowComp = (OpenInfoWindowComponent_o *)LimitUpResultCheckComponent_TypeInfo;
  if ( !LimitUpResultCheckComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LimitUpResultCheckComponent_TypeInfo);
    openInfowindowComp = (OpenInfoWindowComponent_o *)LimitUpResultCheckComponent_TypeInfo;
  }
  v30 = 0;
  monitor = (int32_t)openInfowindowComp[1].fields.basePanel->monitor;
LABEL_38:
  if ( !v27 )
    goto LABEL_40;
  OpenInfoWindowComponent__OpenLimitUpResultInfo(
    v27,
    (System_Collections_Generic_List_GameObject__o *)v12,
    callback,
    isFirstDisp,
    monitor,
    v30,
    v14);
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
      sub_1C22094(openInfowindowComp, isActive);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)openInfowindowComp, isActive, 0LL);
  }
}


void __fastcall LimitUpResultCheckComponent__SetResInfoListQuestInfo(
        LimitUpResultCheckComponent_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *Entity; // x0
  __int64 v7; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x20
  System_String_o *v9; // x23
  System_String_o *v10; // x22
  System_String_o *v11; // x0
  __int64 *v12; // x21
  bool IsLimitCountSealQuest; // w21
  System_String_o **v14; // x8
  Il2CppObject *Value; // x21
  System_String_o *v16; // x0
  System_String_o *v17; // x0
  UnityEngine_Component_o *v18; // x20
  System_Collections_Generic_List_object__o *resInfoList; // x19
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  int64_t v29; // x1
  Il2CppClass **v30; // x0

  if ( (byte_4BE0025 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_ConstantStrMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_QuestMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1C21E38(&Method_LimitUpResultCheckComponent_CreateResultInfoObject_LimitUpResultInfoComponent___);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&StringLiteral_9839/*"OPEN_MAIN_SCENARIO_TITLE"*/);
    sub_1C21E38(&StringLiteral_9845/*"OPEN_STORY_QUEST_TITLE_LIMIT_UP"*/);
    sub_1C21E38(&StringLiteral_9836/*"OPEN_LIMIT_UNSEALED_QUEST_NAME_LIMIT_UP"*/);
    sub_1C21E38(&StringLiteral_9837/*"OPEN_LIMIT_UNSEALED_QUEST_TITLE_LIMIT_UP"*/);
    sub_1C21E38(&StringLiteral_9831/*"OPEN_EVENT_QUEST_NAME_LIMIT_UP"*/);
    sub_1C21E38(&StringLiteral_9832/*"OPEN_EVENT_QUEST_TITLE_LIMIT_UP"*/);
    sub_1C21E38(&StringLiteral_9838/*"OPEN_MAIN_QUEST_TITLE_LIMIT_UP"*/);
    byte_4BE0025 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  Entity = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !Entity )
    goto LABEL_43;
  Entity = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                           Entity,
                                                           questId,
                                                           (const MethodInfo_325BDC8 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( !Entity )
    goto LABEL_43;
  v8 = Entity;
  v9 = 0LL;
  v10 = 0LL;
  switch ( LODWORD(Entity->fields.list) )
  {
    case 1:
    case 2:
      if ( !Master_object )
        goto LABEL_43;
      if ( ServantLimitImageMaster__IsLimitCountSealQuest((ServantLimitImageMaster_o *)Master_object, questId, 0LL) )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v11 = LocalizationManager__Get((System_String_o *)StringLiteral_9837/*"OPEN_LIMIT_UNSEALED_QUEST_TITLE_LIMIT_UP"*/, 0LL);
        v12 = &StringLiteral_9836/*"OPEN_LIMIT_UNSEALED_QUEST_NAME_LIMIT_UP"*/;
      }
      else
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Entity = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ConstantStrMaster___);
        if ( !Entity )
          goto LABEL_43;
        Value = (Il2CppObject *)ConstantStrMaster__GetValue(
                                  (ConstantStrMaster_o *)Entity,
                                  (System_String_o *)StringLiteral_9839/*"OPEN_MAIN_SCENARIO_TITLE"*/,
                                  0LL);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v16 = LocalizationManager__Get((System_String_o *)StringLiteral_9838/*"OPEN_MAIN_QUEST_TITLE_LIMIT_UP"*/, 0LL);
        v11 = System_String__Format(v16, Value, 0LL);
LABEL_31:
        v12 = &StringLiteral_9831/*"OPEN_EVENT_QUEST_NAME_LIMIT_UP"*/;
      }
LABEL_32:
      v10 = v11;
      v17 = LocalizationManager__Get((System_String_o *)*v12, 0LL);
      v9 = System_String__Format(v17, (Il2CppObject *)v8->fields._MasterName_k__BackingField, 0LL);
      this->fields.isOpenQuest = 1;
LABEL_33:
      if ( !System_String__IsNullOrEmpty(v10, 0LL) && !System_String__IsNullOrEmpty(v9, 0LL) )
      {
        Entity = (DataMasterBase_TMaster__TEntity__PKType__o *)LimitUpResultCheckComponent__CreateResultInfoObject_object_(
                                                                 this,
                                                                 (Il2CppObject *)this->fields.limitUpResultInfoStoryOrigin,
                                                                 (const MethodInfo_3028B24 *)Method_LimitUpResultCheckComponent_CreateResultInfoObject_LimitUpResultInfoComponent___);
        if ( Entity )
        {
          v18 = (UnityEngine_Component_o *)Entity;
          ((void (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *, System_String_o *, System_String_o *, Il2CppMethodPointer))Entity->klass->vtable._4_ForForceDerived.method)(
            Entity,
            v10,
            v9,
            Entity->klass->vtable._5_preProcess.methodPtr);
          resInfoList = (System_Collections_Generic_List_object__o *)this->fields.resInfoList;
          Entity = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(v18, 0LL);
          if ( resInfoList )
          {
            items = resInfoList->fields._items;
            v27 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++resInfoList->fields._version;
            if ( items )
            {
              size = resInfoList->fields._size;
              v29 = (int64_t)Entity;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  resInfoList,
                  (Il2CppObject *)Entity,
                  *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
              }
              else
              {
                resInfoList->fields._size = size + 1;
                v30 = &items->obj.klass + size;
                v30[4] = (Il2CppClass *)v29;
                sub_1C21DDC((PartyOrganizationUtility_o *)(v30 + 4), v29, v20, v21, v22, v23, v24, v25);
              }
              return;
            }
          }
        }
LABEL_43:
        sub_1C22094(Entity, v7);
      }
      return;
    case 3:
      if ( !Master_object )
        goto LABEL_43;
      IsLimitCountSealQuest = ServantLimitImageMaster__IsLimitCountSealQuest(
                                (ServantLimitImageMaster_o *)Master_object,
                                questId,
                                0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v14 = (System_String_o **)&StringLiteral_9837/*"OPEN_LIMIT_UNSEALED_QUEST_TITLE_LIMIT_UP"*/;
      if ( !IsLimitCountSealQuest )
        v14 = (System_String_o **)&StringLiteral_9845/*"OPEN_STORY_QUEST_TITLE_LIMIT_UP"*/;
      if ( IsLimitCountSealQuest )
        v12 = &StringLiteral_9836/*"OPEN_LIMIT_UNSEALED_QUEST_NAME_LIMIT_UP"*/;
      else
        v12 = &StringLiteral_9831/*"OPEN_EVENT_QUEST_NAME_LIMIT_UP"*/;
      v11 = LocalizationManager__Get(*v14, 0LL);
      goto LABEL_32;
    case 4:
      goto LABEL_33;
    case 5:
    case 6:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v11 = LocalizationManager__Get((System_String_o *)StringLiteral_9832/*"OPEN_EVENT_QUEST_TITLE_LIMIT_UP"*/, 0LL);
      goto LABEL_31;
    default:
      v10 = 0LL;
      goto LABEL_33;
  }
}


void __fastcall LimitUpResultCheckComponent__SetSkillRelease(
        LimitUpResultCheckComponent_o *this,
        int32_t skillId,
        int32_t targetIdx,
        int32_t transformIndex,
        const MethodInfo *method)
{
  int64_t Master_object; // x0
  __int64 v10; // x1
  Il2CppObject *Entity; // x24
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
  System_Collections_Generic_List_object__o *v27; // x20
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  int64_t v37; // x1
  Il2CppClass **v38; // x0
  TransformServantInfo_o *transformInfo; // [xsp+8h] [xbp-68h] BYREF
  System_String_o *detail; // [xsp+10h] [xbp-60h] BYREF
  System_String_o *name; // [xsp+18h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16

  if ( (byte_4BE0027 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_ServantSkillMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C21E38(&Method_LimitUpResultCheckComponent_CreateResultInfoObject_LimitUpResultInfoSkillComponent___);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&StringLiteral_7099/*"GET_SKILL_TITLE"*/);
    sub_1C21E38(&StringLiteral_7098/*"GET_SKILL_NAME_LIMIT_UP"*/);
    byte_4BE0027 = 1;
  }
  detail = 0LL;
  name = 0LL;
  transformInfo = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_SkillMaster___);
  if ( !Master_object )
    goto LABEL_33;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             skillId,
             (const MethodInfo_325BDC8 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_7099/*"GET_SKILL_TITLE"*/, 0LL);
  if ( !this->fields.resUsrSvtData )
    goto LABEL_33;
  v12 = (System_String_o *)Master_object;
  Master_object = UserServantEntity__getSkillLevel(this->fields.resUsrSvtData, targetIdx, 0LL);
  if ( !Entity )
    goto LABEL_33;
  SkillEntity__getSkillMessageInfo((SkillEntity_o *)Entity, &name, &detail, Master_object, 0LL);
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_7098/*"GET_SKILL_NAME_LIMIT_UP"*/, 0LL);
  v14 = System_String__Format(v13, (Il2CppObject *)name, 0LL);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ServantSkillMaster___);
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_33;
  v16 = (ServantSkillMaster_o *)Master_object;
  v18 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v42.fields.currentCryptoKey = v18;
  *(_QWORD *)&v42.fields.fakeValue = v17;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v42, 0LL);
  if ( !v16 )
    goto LABEL_33;
  EntityFromSkillId = ServantSkillMaster__getEntityFromSkillId(v16, Master_object, targetIdx + 1, skillId, 0LL);
  v20 = this->fields.transformationCount <= 1 ? 128LL : 136LL;
  v21 = EntityFromSkillId;
  Master_object = (int64_t)LimitUpResultCheckComponent__CreateResultInfoObject_object_(
                             this,
                             *(Il2CppObject **)((char *)&this->klass + v20),
                             (const MethodInfo_3028B24 *)Method_LimitUpResultCheckComponent_CreateResultInfoObject_LimitUpResultInfoSkillComponent___);
  if ( !Master_object )
    goto LABEL_33;
  v23 = (LimitUpResultInfoSkillComponent_o *)Master_object;
  LimitUpResultInfoSkillComponent__Setup(
    (LimitUpResultInfoSkillComponent_o *)Master_object,
    skillId,
    v14,
    v21,
    v12,
    detail,
    v22);
  if ( this->fields.transformationCount < 2 )
    goto LABEL_27;
  Master_object = (int64_t)this->fields.baseUsrSvtData;
  if ( !Master_object
    || (Master_object = UserServantEntity__GetTransformedServantInfo(
                          (UserServantEntity_o *)Master_object,
                          &transformInfo,
                          transformIndex,
                          0LL),
        !transformInfo)
    || (Master_object = (int64_t)v23->fields.battleNameLabel) == 0 )
  {
LABEL_33:
    sub_1C22094(Master_object, v10);
  }
  UILabel__set_text((UILabel_o *)Master_object, transformInfo->fields.titleText, 0LL);
  if ( this->fields.transformationCount >= 2 )
  {
    resInfoList = this->fields.resInfoList;
    if ( !resInfoList )
      goto LABEL_33;
    v25 = resInfoList->fields._size < 1;
  }
  else
  {
    v25 = 0;
  }
  LimitUpResultInfoSkillComponent__SetTitleDisp(v23, v25, v24);
LABEL_27:
  v27 = (System_Collections_Generic_List_object__o *)this->fields.resInfoList;
  Master_object = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v23, 0LL);
  if ( !v27 )
    goto LABEL_33;
  items = v27->fields._items;
  v35 = Method_System_Collections_Generic_List_GameObject__Add__;
  ++v27->fields._version;
  if ( !items )
    goto LABEL_33;
  size = v27->fields._size;
  v37 = Master_object;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v27,
      (Il2CppObject *)Master_object,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
  }
  else
  {
    v38 = &items->obj.klass + size;
    v27->fields._size = size + 1;
    v38[4] = (Il2CppClass *)v37;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v38 + 4), v37, v28, v29, v30, v31, v32, v33);
  }
  this->fields.isGetNewSkill = 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall LimitUpResultCheckComponent__checkGetSkill(
        LimitUpResultCheckComponent_o *this,
        int32_t transformIndex,
        const MethodInfo *method)
{
  int32_t v3; // w20
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
  DataMasterBase_TMaster__TEntity__PKType__o *v30; // x24
  Il2CppObject *Entity; // x23
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
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  __int64 v49; // x8
  _QWORD *v50; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v52; // x8
  System_String_o *detail; // [xsp+8h] [xbp-58h] BYREF
  System_String_o *name; // [xsp+18h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x0.16

  v3 = transformIndex;
  v4 = this;
  if ( (byte_4BE0026 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C21E38(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&StringLiteral_7097/*"GET_SKILL_NAME"*/);
    sub_1C21E38(&StringLiteral_2059/*"AFTER_CHANGE_SKILL_SUB_TITLE"*/);
    sub_1C21E38(&StringLiteral_3488/*"CHANGE_SKILL_TITLE"*/);
    this = (LimitUpResultCheckComponent_o *)sub_1C21E38(&StringLiteral_3052/*"BEFORE_CHANGE_SKILL_SUB_TITLE"*/);
    byte_4BE0026 = 1;
  }
  name = 0LL;
  detail = 0LL;
  baseUsrSvtData = v4->fields.baseUsrSvtData;
  *(_WORD *)&v4->fields.isGetNewSkill = 0;
  if ( !baseUsrSvtData )
    goto LABEL_57;
  v7 = *(_QWORD *)&baseUsrSvtData->fields.limitCount.fields.currentCryptoKey;
  v6 = *(_QWORD *)&baseUsrSvtData->fields.limitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v55.fields.currentCryptoKey = v7;
  *(_QWORD *)&v55.fields.fakeValue = v6;
  this = (LimitUpResultCheckComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v55, 0LL);
  if ( !v4->fields.baseUsrSvtData )
    goto LABEL_57;
  v8 = (int)this;
  TransformedSkillIdList = UserServantEntity__GetTransformedSkillIdList(
                             v4->fields.baseUsrSvtData,
                             v3,
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
      goto LABEL_57;
    LimitCntMax = v8 + 1;
    if ( UserServantEntity__getLimitCntMax((UserServantEntity_o *)this, 0LL) < LimitCntMax )
    {
      this = (LimitUpResultCheckComponent_o *)v4->fields.baseUsrSvtData;
      if ( !this )
        goto LABEL_57;
      LimitCntMax = UserServantEntity__getLimitCntMax((UserServantEntity_o *)this, 0LL);
    }
    this = (LimitUpResultCheckComponent_o *)v4->fields.resUsrSvtData;
    if ( !this )
LABEL_57:
      sub_1C22094(this, *(_QWORD *)&transformIndex);
    v13 = v3;
    v14 = LimitCntMax;
  }
  else
  {
    this = (LimitUpResultCheckComponent_o *)v4->fields.resUsrSvtData;
    if ( !this )
      goto LABEL_57;
    v14 = -1;
    v13 = v3;
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
    goto LABEL_57;
  max_length = v11->max_length;
  if ( max_length < 1 )
    return;
  v17 = 0;
  while ( 1 )
  {
    if ( max_length == v17 )
      goto LABEL_56;
    v18 = v17;
    v19 = (char *)v11 + 4 * (int)v17;
    v22 = *((_DWORD *)v19 + 8);
    v20 = (int32_t *)(v19 + 32);
    v21 = v22;
    if ( !this )
      goto LABEL_57;
    if ( v17 >= LODWORD(this->fields.m_CancellationTokenSource) )
      goto LABEL_56;
    v23 = (char *)this + 4 * (int)v17;
    v26 = *((_DWORD *)v23 + 8);
    v25 = (int32_t *)(v23 + 32);
    v24 = v26;
    if ( v21 != v26 && v24 >= 1 )
      break;
    v17 = v18 + 1;
    if ( max_length == v18 + 1 )
      return;
  }
  this = (LimitUpResultCheckComponent_o *)v4->fields.resUsrSvtData;
  if ( !this )
    goto LABEL_57;
  this = (LimitUpResultCheckComponent_o *)UserServantEntity__IsHeroine((UserServantEntity_o *)this, 0LL);
  if ( v21 < 1 || ((unsigned __int8)this & 1) == 0 )
  {
    if ( v18 < LODWORD(v15->fields.m_CancellationTokenSource) )
    {
      LimitUpResultCheckComponent__SetSkillRelease(v4, *v25, v18, v3, v27);
      return;
    }
LABEL_56:
    sub_1C2209C(this, *(_QWORD *)&transformIndex);
  }
  if ( v18 >= v11->max_length || v18 >= LODWORD(v15->fields.m_CancellationTokenSource) )
    goto LABEL_56;
  v28 = *v20;
  v29 = *v25;
  this = (LimitUpResultCheckComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_57;
  this = (LimitUpResultCheckComponent_o *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)this,
                                            (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !this )
    goto LABEL_57;
  v30 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             v28,
             (const MethodInfo_325BDC8 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  this = (LimitUpResultCheckComponent_o *)DataMasterBase_object__object__int___GetEntity(
                                            v30,
                                            v29,
                                            (const MethodInfo_325BDC8 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( !v4->fields.baseUsrSvtData )
    goto LABEL_57;
  v32 = (SkillEntity_o *)this;
  this = (LimitUpResultCheckComponent_o *)UserServantEntity__getSkillLevel(v4->fields.baseUsrSvtData, v18, 0LL);
  if ( !v4->fields.resUsrSvtData )
    goto LABEL_57;
  v33 = (int)this;
  SkillLevel = UserServantEntity__getSkillLevel(v4->fields.resUsrSvtData, v18, 0LL);
  skillChangeInfoTitle = v4->fields.skillChangeInfoTitle;
  v36 = SkillLevel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (LimitUpResultCheckComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3488/*"CHANGE_SKILL_TITLE"*/, 0LL);
  if ( !skillChangeInfoTitle )
    goto LABEL_57;
  UILabel__set_text(skillChangeInfoTitle, (System_String_o *)this, 0LL);
  skillChangeInfoSubTitleOld = v4->fields.skillChangeInfoSubTitleOld;
  this = (LimitUpResultCheckComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3052/*"BEFORE_CHANGE_SKILL_SUB_TITLE"*/, 0LL);
  if ( !skillChangeInfoSubTitleOld )
    goto LABEL_57;
  UILabel__set_text(skillChangeInfoSubTitleOld, (System_String_o *)this, 0LL);
  skillChangeInfoSubTitleNow = v4->fields.skillChangeInfoSubTitleNow;
  this = (LimitUpResultCheckComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2059/*"AFTER_CHANGE_SKILL_SUB_TITLE"*/, 0LL);
  if ( !skillChangeInfoSubTitleNow )
    goto LABEL_57;
  UILabel__set_text(skillChangeInfoSubTitleNow, (System_String_o *)this, 0LL);
  if ( !Entity )
    goto LABEL_57;
  SkillEntity__getSkillMessageInfo((SkillEntity_o *)Entity, &name, &detail, v33, 0LL);
  skillChangeInfoNameOld = v4->fields.skillChangeInfoNameOld;
  v40 = LocalizationManager__Get((System_String_o *)StringLiteral_7097/*"GET_SKILL_NAME"*/, 0LL);
  this = (LimitUpResultCheckComponent_o *)System_String__Format(v40, (Il2CppObject *)name, 0LL);
  if ( !skillChangeInfoNameOld )
    goto LABEL_57;
  UILabel__set_text(skillChangeInfoNameOld, (System_String_o *)this, 0LL);
  this = (LimitUpResultCheckComponent_o *)v4->fields.skillChangeInfoDetailOld;
  if ( !this )
    goto LABEL_57;
  this = (LimitUpResultCheckComponent_o *)WrapControlText__textBBCodeAdjust(
                                            (UILabel_o *)this,
                                            detail,
                                            (int32_t)this[1].fields.skillChangeInfoTitle,
                                            0,
                                            0LL);
  if ( !v32 )
    goto LABEL_57;
  SkillEntity__getSkillMessageInfo(v32, &name, &detail, v36, 0LL);
  skillChangeInfoNameNow = v4->fields.skillChangeInfoNameNow;
  v42 = LocalizationManager__Get((System_String_o *)StringLiteral_7097/*"GET_SKILL_NAME"*/, 0LL);
  this = (LimitUpResultCheckComponent_o *)System_String__Format(v42, (Il2CppObject *)name, 0LL);
  if ( !skillChangeInfoNameNow )
    goto LABEL_57;
  UILabel__set_text(skillChangeInfoNameNow, (System_String_o *)this, 0LL);
  this = (LimitUpResultCheckComponent_o *)v4->fields.skillChangeInfoDetailNow;
  if ( !this )
    goto LABEL_57;
  WrapControlText__textBBCodeAdjust((UILabel_o *)this, detail, (int32_t)this[1].fields.skillChangeInfoTitle, 0, 0LL);
  this = (LimitUpResultCheckComponent_o *)v4->fields.resInfoList;
  if ( !this )
    goto LABEL_57;
  *(_QWORD *)&transformIndex = v4->fields.skillChangeInfo;
  v49 = *(_QWORD *)&this->fields.m_CachedPtr;
  v50 = Method_System_Collections_Generic_List_GameObject__Add__;
  ++HIDWORD(this->fields.m_CancellationTokenSource);
  if ( !v49 )
    goto LABEL_57;
  m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v49 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      *(Il2CppObject **)&transformIndex,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
  }
  else
  {
    v52 = v49 + 8 * m_CancellationTokenSource_low;
    LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_QWORD *)(v52 + 32) = *(_QWORD *)&transformIndex;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v52 + 32), *(int64_t *)&transformIndex, v43, v44, v45, v46, v47, v48);
  }
  *(_WORD *)&v4->fields.isGetNewSkill = 257;
}


void __fastcall LimitUpResultCheckComponent__checkLimitUpReward(
        LimitUpResultCheckComponent_o *this,
        System_Collections_Generic_List_int____o *rewardGiftDataList,
        const MethodInfo *method)
{
  __int64 v5; // x21
  Il2CppObject *Master_object; // x23
  int64_t LimitCntMax; // x0
  __int64 v8; // x1
  struct UserServantEntity_o *baseUsrSvtData; // x8
  GiftMaster_o *v10; // x22
  __int64 v11; // x24
  __int64 v12; // x25
  struct UserServantEntity_o *v13; // x8
  __int64 v14; // x24
  __int64 v15; // x25
  GiftEntity_o *DataById; // x0
  __int64 v17; // x22
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  System_String_o *v24; // x23
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  Il2CppObject *v28; // x25
  System_String_o *v29; // x24
  Il2CppObject *v30; // x0
  System_String_o *v31; // x24
  Il2CppObject *v32; // x25
  System_Func_object__bool__o *v33; // x26
  bool v34; // w20
  const MethodInfo *v35; // x5
  System_Collections_Generic_List_object__o *resInfoList; // x19
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  struct System_Object_array *items; // x8
  _QWORD *v44; // x9
  __int64 size; // x10
  int64_t v46; // x1
  Il2CppClass **v47; // x0
  int v48; // [xsp+4h] [xbp-5Ch] BYREF
  System_String_o *countText; // [xsp+8h] [xbp-58h] BYREF
  System_String_o *nameText; // [xsp+18h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16

  if ( (byte_4BE0028 & 1) == 0 )
  {
    sub_1C21E38(&Method_BasicHelper_Any_int_____);
    sub_1C21E38(&Method_DataManager_GetMaster_CombineLimitGiftMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_GiftMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&System_Func_int____bool__TypeInfo);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&Method_LimitUpResultCheckComponent_CreateResultInfoObject_LimitUpResultInfoRewardComponent___);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&Method_LimitUpResultCheckComponent___c__DisplayClass45_0__checkLimitUpReward_b__0__);
    sub_1C21E38(&LimitUpResultCheckComponent___c__DisplayClass45_0_TypeInfo);
    sub_1C21E38(&StringLiteral_7094/*"GET_LIMIT_UP_REWARD_DETAIL"*/);
    sub_1C21E38(&StringLiteral_7095/*"GET_LIMIT_UP_REWARD_TITLE"*/);
    byte_4BE0028 = 1;
  }
  nameText = 0LL;
  countText = 0LL;
  v5 = sub_1C22084(LimitUpResultCheckComponent___c__DisplayClass45_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_CombineLimitGiftMaster___);
  LimitCntMax = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_GiftMaster___);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_34;
  v10 = (GiftMaster_o *)LimitCntMax;
  v12 = *(_QWORD *)&baseUsrSvtData->fields.limitCount.fields.currentCryptoKey;
  v11 = *(_QWORD *)&baseUsrSvtData->fields.limitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v51.fields.currentCryptoKey = v12;
  *(_QWORD *)&v51.fields.fakeValue = v11;
  LimitCntMax = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v51, 0LL);
  if ( !v5 )
    goto LABEL_34;
  *(_DWORD *)(v5 + 16) = LimitCntMax + 1;
  LimitCntMax = (int64_t)this->fields.baseUsrSvtData;
  if ( !LimitCntMax )
    goto LABEL_34;
  LimitCntMax = UserServantEntity__getLimitCntMax((UserServantEntity_o *)LimitCntMax, 0LL);
  if ( (int)LimitCntMax < *(_DWORD *)(v5 + 16) )
  {
    LimitCntMax = (int64_t)this->fields.baseUsrSvtData;
    if ( !LimitCntMax )
      goto LABEL_34;
    LimitCntMax = UserServantEntity__getLimitCntMax((UserServantEntity_o *)LimitCntMax, 0LL);
    *(_DWORD *)(v5 + 16) = LimitCntMax;
  }
  v13 = this->fields.baseUsrSvtData;
  if ( !v13 )
    goto LABEL_34;
  v15 = *(_QWORD *)&v13->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&v13->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v52.fields.currentCryptoKey = v15;
  *(_QWORD *)&v52.fields.fakeValue = v14;
  LimitCntMax = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v52, 0LL);
  if ( !Master_object )
    goto LABEL_34;
  LimitCntMax = CombineLimitGiftMaster__GetCombineLimitGiftId(
                  (CombineLimitGiftMaster_o *)Master_object,
                  LimitCntMax,
                  *(_DWORD *)(v5 + 16),
                  0LL);
  if ( !(_DWORD)LimitCntMax )
    return;
  if ( !v10 )
    goto LABEL_34;
  DataById = GiftMaster__getDataById(v10, LimitCntMax, 0LL);
  *(_QWORD *)(v5 + 24) = DataById;
  v17 = v5 + 24;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 24), (int64_t)DataById, v18, v19, v20, v21, v22, v23);
  if ( !*(_QWORD *)(v5 + 24) )
    return;
  GiftEntity__GetInfo(*(GiftEntity_o **)(v5 + 24), &nameText, &countText, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v24 = LocalizationManager__Get((System_String_o *)StringLiteral_7095/*"GET_LIMIT_UP_REWARD_TITLE"*/, 0LL);
  LimitCntMax = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_7094/*"GET_LIMIT_UP_REWARD_DETAIL"*/, 0LL);
  if ( !*(_QWORD *)v17 )
    goto LABEL_34;
  v28 = (Il2CppObject *)nameText;
  v29 = (System_String_o *)LimitCntMax;
  v48 = *(_DWORD *)(*(_QWORD *)v17 + 28LL);
  v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v48, v25, v26, v27);
  v31 = System_String__Format_63129848(v29, v28, v30, 0LL);
  v32 = LimitUpResultCheckComponent__CreateResultInfoObject_object_(
          this,
          (Il2CppObject *)this->fields.limitUpResultInfoRewardOrigin,
          (const MethodInfo_3028B24 *)Method_LimitUpResultCheckComponent_CreateResultInfoObject_LimitUpResultInfoRewardComponent___);
  if ( rewardGiftDataList )
  {
    v33 = (System_Func_object__bool__o *)sub_1C22084(System_Func_int____bool__TypeInfo);
    System_Func_object__bool____ctor(
      v33,
      (Il2CppObject *)v5,
      Method_LimitUpResultCheckComponent___c__DisplayClass45_0__checkLimitUpReward_b__0__,
      0LL);
    v34 = !BasicHelper__Any_object_(
             (System_Collections_Generic_List_T__o *)rewardGiftDataList,
             (System_Func_T__bool__o *)v33,
             (const MethodInfo_2F9AD70 *)Method_BasicHelper_Any_int_____);
  }
  else
  {
    v34 = 1;
  }
  LimitCntMax = *(_QWORD *)v17;
  if ( !*(_QWORD *)v17
    || (LimitCntMax = GiftEntity__getIconImageId((GiftEntity_o *)LimitCntMax, 0LL), !v32)
    || (LimitUpResultInfoRewardComponent__Setup(
          (LimitUpResultInfoRewardComponent_o *)v32,
          LimitCntMax,
          v34,
          v24,
          v31,
          v35),
        resInfoList = (System_Collections_Generic_List_object__o *)this->fields.resInfoList,
        LimitCntMax = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v32, 0LL),
        !resInfoList)
    || (items = resInfoList->fields._items,
        v44 = Method_System_Collections_Generic_List_GameObject__Add__,
        ++resInfoList->fields._version,
        !items) )
  {
LABEL_34:
    sub_1C22094(LimitCntMax, v8);
  }
  size = resInfoList->fields._size;
  v46 = LimitCntMax;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      resInfoList,
      (Il2CppObject *)LimitCntMax,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
  }
  else
  {
    v47 = &items->obj.klass + size;
    resInfoList->fields._size = size + 1;
    v47[4] = (Il2CppClass *)v46;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v47 + 4), v46, v37, v38, v39, v40, v41, v42);
  }
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
  int32_t v20; // w21
  int32_t Item; // w0
  const MethodInfo *v22; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  if ( (byte_4BE0024 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1C21E38(&StringLiteral_9844/*"OPEN_STORY_QUEST_TITLE"*/);
    sub_1C21E38(&StringLiteral_9833/*"OPEN_HERO_QUEST_TITLE"*/);
    byte_4BE0024 = 1;
  }
  this->fields.isOpenQuest = 0;
  v3 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
  svtCollectionLimitCnt = this->fields.svtCollectionLimitCnt;
  if ( (svtCollectionLimitCnt & 0x80000000) == 0 )
  {
    if ( this->fields.kind == 19 )
    {
      baseUsrSvtData = this->fields.baseUsrSvtData;
      if ( !baseUsrSvtData )
        goto LABEL_31;
      LimitCntMax = svtCollectionLimitCnt + 1;
      if ( UserServantEntity__getLimitCntMax(baseUsrSvtData, 0LL) < svtCollectionLimitCnt + 1 )
      {
        baseUsrSvtData = this->fields.baseUsrSvtData;
        if ( !baseUsrSvtData )
          goto LABEL_31;
        LimitCntMax = UserServantEntity__getLimitCntMax(baseUsrSvtData, 0LL);
      }
      baseUsrSvtData = (UserServantEntity_o *)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
      resUsrSvtData = this->fields.resUsrSvtData;
      if ( !resUsrSvtData )
        goto LABEL_31;
      v9 = (clsQuestCheck_o *)baseUsrSvtData;
      v11 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
      v10 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v23.fields.currentCryptoKey = v11;
      *(_QWORD *)&v23.fields.fakeValue = v10;
      baseUsrSvtData = (UserServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(
                                                v23,
                                                0LL);
      if ( !v9 )
LABEL_31:
        sub_1C22094(baseUsrSvtData, v4);
      v12 = clsQuestCheck__GetReleaseQuestIdByServantLimit_34635344(
              v9,
              (int32_t)baseUsrSvtData,
              this->fields.svtCollectionLimitCnt,
              LimitCntMax,
              494,
              0LL);
    }
    else
    {
      baseUsrSvtData = (UserServantEntity_o *)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
      v13 = this->fields.resUsrSvtData;
      if ( !v13 )
        goto LABEL_31;
      v14 = (clsQuestCheck_o *)baseUsrSvtData;
      v16 = *(_QWORD *)&v13->fields.svtId.fields.currentCryptoKey;
      v15 = *(_QWORD *)&v13->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v24.fields.currentCryptoKey = v16;
      *(_QWORD *)&v24.fields.fakeValue = v15;
      baseUsrSvtData = (UserServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(
                                                v24,
                                                0LL);
      if ( !v14 )
        goto LABEL_31;
      v12 = clsQuestCheck__GetReleaseQuestIdByServantLimit(
              v14,
              (int32_t)baseUsrSvtData,
              this->fields.svtCollectionLimitCnt,
              0LL);
    }
    v17 = v12;
    storyQuestInfoTitle = this->fields.storyQuestInfoTitle;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    baseUsrSvtData = (UserServantEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9844/*"OPEN_STORY_QUEST_TITLE"*/, 0LL);
    if ( storyQuestInfoTitle )
    {
      UILabel__set_text(storyQuestInfoTitle, (System_String_o *)baseUsrSvtData, 0LL);
      heroQuestInfoTitle = this->fields.heroQuestInfoTitle;
      baseUsrSvtData = (UserServantEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9833/*"OPEN_HERO_QUEST_TITLE"*/, 0LL);
      if ( heroQuestInfoTitle )
      {
        UILabel__set_text(heroQuestInfoTitle, (System_String_o *)baseUsrSvtData, 0LL);
        baseUsrSvtData = (UserServantEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( baseUsrSvtData )
        {
          DataManager__GetMasterData_object_(
            (DataManager_o *)baseUsrSvtData,
            (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
          if ( v17 && v17->fields._size >= 1 )
          {
            v20 = 0;
            do
            {
              if ( System_Collections_Generic_List_int___get_Item(
                     v17,
                     v20,
                     (const MethodInfo_3631DA0 *)Method_System_Collections_Generic_List_int__get_Item__) >= 1 )
              {
                Item = System_Collections_Generic_List_int___get_Item(
                         v17,
                         v20,
                         (const MethodInfo_3631DA0 *)Method_System_Collections_Generic_List_int__get_Item__);
                LimitUpResultCheckComponent__SetResInfoListQuestInfo(this, Item, v22);
              }
              ++v20;
            }
            while ( v20 < v17->fields._size );
          }
          return;
        }
      }
    }
    goto LABEL_31;
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
  PartyListViewItem_o *v7; // x7
  struct UserServantEntity_o **p_resUsrSvtData; // x21
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  System_Collections_Generic_List_object__o *v21; // x22
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  __int64 v28; // x1
  UserServantEntity_o *resUsrSvtData; // x0
  struct UserServantEntity_o *v30; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v31; // x21
  __int64 v32; // x22
  __int64 v33; // x23
  const MethodInfo *v34; // x1
  const MethodInfo *v35; // x2
  int32_t v36; // w21
  const MethodInfo *v37; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16

  if ( (byte_4BE0021 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4BE0021 = 1;
  }
  this->fields.baseUsrSvtData = baseData;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.baseUsrSvtData,
    (int64_t)baseData,
    (int64_t)baseData,
    (int32_t)resData,
    *(System_String_o **)&baseCollectionLimitCnt,
    (BattleSetupInfo_o *)rewardGiftDataList,
    (FollowerInfo_o *)method,
    v7);
  p_resUsrSvtData = &this->fields.resUsrSvtData;
  this->fields.resUsrSvtData = resData;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.resUsrSvtData, (int64_t)resData, v15, v16, v17, v18, v19, v20);
  this->fields.svtCollectionLimitCnt = baseCollectionLimitCnt;
  this->fields.kind = kind;
  v21 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.resInfoList = (struct System_Collections_Generic_List_GameObject__o *)v21;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.resInfoList, (int64_t)v21, v22, v23, v24, v25, v26, v27);
  *(_WORD *)&this->fields.isGetNewSkill = 0;
  this->fields.isOpenQuest = 0;
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_17;
  this->fields.transformationCount = UserServantEntity__GetTransformCount(resUsrSvtData, 1, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  resUsrSvtData = (UserServantEntity_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ServantMaster___);
  v30 = *p_resUsrSvtData;
  if ( !*p_resUsrSvtData )
    goto LABEL_17;
  v31 = (DataMasterBase_TMaster__TEntity__PKType__o *)resUsrSvtData;
  v33 = *(_QWORD *)&v30->fields.svtId.fields.currentCryptoKey;
  v32 = *(_QWORD *)&v30->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v38.fields.currentCryptoKey = v33;
  *(_QWORD *)&v38.fields.fakeValue = v32;
  resUsrSvtData = (UserServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v38, 0LL);
  if ( !v31
    || (resUsrSvtData = (UserServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                                 v31,
                                                 (int32_t)resUsrSvtData,
                                                 (const MethodInfo_325BDC8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_17:
    sub_1C22094(resUsrSvtData, v28);
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


void __fastcall LimitUpResultCheckComponent___c__DisplayClass45_0___ctor(
        LimitUpResultCheckComponent___c__DisplayClass45_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall LimitUpResultCheckComponent___c__DisplayClass45_0___checkLimitUpReward_b__0(
        LimitUpResultCheckComponent___c__DisplayClass45_0_o *this,
        System_Int32_array *data,
        const MethodInfo *method)
{
  il2cpp_array_size_t max_length; // w8
  struct GiftEntity_o *giftEntity; // x8

  if ( !data )
    goto LABEL_9;
  max_length = data->max_length;
  if ( !max_length )
LABEL_8:
    sub_1C2209C(this, data);
  if ( data->m_Items[1] == this->fields.afterLimitCnt )
  {
    if ( max_length > 1 )
    {
      giftEntity = this->fields.giftEntity;
      if ( giftEntity )
        return data->m_Items[2] == giftEntity->fields.id;
LABEL_9:
      sub_1C22094(this, data);
    }
    goto LABEL_8;
  }
  return 0;
}