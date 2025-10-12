void LimitUpResultCheckComponent___cctor(const MethodInfo *method)
{
  struct LimitUpResultCheckComponent_StaticFields *static_fields; // x8

  if ( (byte_4C3BA4C & 1) == 0 )
  {
    sub_1C32C20(&LimitUpResultCheckComponent_TypeInfo);
    byte_4C3BA4C = 1;
  }
  static_fields = LimitUpResultCheckComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->CONCURRENTLY_DISP_NUM = 0x100000002LL;
  static_fields->LIMIT_UP_DIALOG_GRID_HEIGHT = 127;
}


void LimitUpResultCheckComponent___ctor(LimitUpResultCheckComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void LimitUpResultCheckComponent__CheckAssertion(LimitUpResultCheckComponent_o *this, const MethodInfo *method)
{
  ;
}


bool LimitUpResultCheckComponent__CheckFinishedResultLimitUp(
        LimitUpResultCheckComponent_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_GameObject__o *resInfoList; // x8

  if ( (byte_4C3BA46 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    byte_4C3BA46 = 1;
  }
  resInfoList = this->fields.resInfoList;
  return !resInfoList || resInfoList->fields._size <= 0;
}


Il2CppObject *LimitUpResultCheckComponent__CreateResultInfoObject_object_(
        LimitUpResultCheckComponent_o *this,
        Il2CppObject *origin,
        const MethodInfo_315DA9C *method)
{
  UnityEngine_Component_o *v5; // x21
  UnityEngine_Transform_o *transform; // x0

  v5 = (UnityEngine_Component_o *)this;
  if ( !method->rgctx_data )
    this = (LimitUpResultCheckComponent_o *)sub_1C83390();
  if ( !v5 || (this = (LimitUpResultCheckComponent_o *)UnityEngine_Component__get_gameObject(v5, 0)) == 0 )
    sub_1C32E7C(this);
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  return BaseMonoBehaviour__createObject_object_(
           (BaseMonoBehaviour_o *)v5,
           origin,
           transform,
           0,
           (const MethodInfo_30C6068 *)method->rgctx_data->_1_BaseMonoBehaviour_createObject_T_);
}


void LimitUpResultCheckComponent__DispResultLimitUp(
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
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  OpenInfoWindowComponent_o *v21; // x1
  Il2CppClass **v22; // x0
  OpenInfoWindowComponent_o *v23; // x21
  _BOOL4 isGetNewSkill; // w8
  int32_t monitor; // w4
  bool v26; // w5

  if ( (byte_4C3BA45 & 1) == 0 )
  {
    sub_1C32C20(&LimitUpResultCheckComponent_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__RemoveAt__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1C32C20(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_4C3BA45 = 1;
  }
  resInfoList = this->fields.resInfoList;
  if ( !resInfoList || resInfoList->fields._size <= 0 )
  {
    ActionExtensions__Call(callback, 0);
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
    if ( UserServantEntity__isLimitCountMax((UserServantEntity_o *)openInfowindowComp, 0) )
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
  v12 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  openInfowindowComp = (OpenInfoWindowComponent_o *)this->fields.resInfoList;
  if ( !openInfowindowComp )
LABEL_40:
    sub_1C32E7C(openInfowindowComp);
  v15 = 0;
  while ( SLODWORD(openInfowindowComp->fields.m_CancellationTokenSource) > 0
       && v15 < CONCURRENTLY_DISP_NUM
       && (v15 == 0 || !this->fields.isChangeSkill) )
  {
    openInfowindowComp = (OpenInfoWindowComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                        (System_Collections_Generic_List_object__o *)openInfowindowComp,
                                                        0,
                                                        (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( v12 )
    {
      items = v12->fields._items;
      v19 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++v12->fields._version;
      if ( items )
      {
        size = v12->fields._size;
        v21 = openInfowindowComp;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v12,
            (Il2CppObject *)openInfowindowComp,
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
        else
        {
          v22 = &items->obj.klass + size;
          v12->fields._size = size + 1;
          v22[4] = (Il2CppClass *)v21;
          sub_1C32BC4((CGThumbnailListItem_o *)(v22 + 4), (int32_t)v21, v16, v17);
        }
        openInfowindowComp = (OpenInfoWindowComponent_o *)this->fields.resInfoList;
        if ( openInfowindowComp )
        {
          System_Collections_Generic_List_object___RemoveAt(
            (System_Collections_Generic_List_object__o *)openInfowindowComp,
            0,
            (const MethodInfo_3799F90 *)Method_System_Collections_Generic_List_GameObject__RemoveAt__);
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
    v23 = this->fields.openInfowindowComp;
    if ( isGetNewSkill )
    {
      monitor = 125;
      v26 = 1;
      goto LABEL_38;
    }
  }
  else
  {
    v23 = this->fields.openInfowindowComp;
  }
  openInfowindowComp = (OpenInfoWindowComponent_o *)LimitUpResultCheckComponent_TypeInfo;
  if ( !LimitUpResultCheckComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LimitUpResultCheckComponent_TypeInfo);
    openInfowindowComp = (OpenInfoWindowComponent_o *)LimitUpResultCheckComponent_TypeInfo;
  }
  v26 = 0;
  monitor = (int32_t)openInfowindowComp[1].fields.m_CancellationTokenSource->monitor;
LABEL_38:
  if ( !v23 )
    goto LABEL_40;
  OpenInfoWindowComponent__OpenLimitUpResultInfo(
    v23,
    (System_Collections_Generic_List_GameObject__o *)v12,
    callback,
    isFirstDisp,
    monitor,
    v26,
    v14);
}


void LimitUpResultCheckComponent__SetActiveInfoWindow(
        LimitUpResultCheckComponent_o *this,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_Component_o *openInfowindowComp; // x0

  if ( this->fields.isGetNewSkill || this->fields.isOpenQuest )
  {
    openInfowindowComp = (UnityEngine_Component_o *)this->fields.openInfowindowComp;
    if ( !openInfowindowComp
      || (openInfowindowComp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(openInfowindowComp, 0)) == 0 )
    {
      sub_1C32E7C(openInfowindowComp);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)openInfowindowComp, isActive, 0);
  }
}


void LimitUpResultCheckComponent__SetResInfoListQuestInfo(
        LimitUpResultCheckComponent_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *Entity; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *v7; // x20
  System_String_o *v8; // x23
  System_String_o *v9; // x22
  System_String_o *v10; // x0
  System_String_o **v11; // x21
  bool IsLimitCountSealQuest; // w21
  System_String_o **v13; // x8
  Il2CppObject *Value; // x21
  System_String_o *v15; // x0
  System_String_o *v16; // x0
  UnityEngine_Component_o *v17; // x20
  System_Collections_Generic_List_object__o *resInfoList; // x19
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  DataMasterBase_TMaster__TEntity__PKType__o *v24; // x1
  Il2CppClass **v25; // x0

  if ( (byte_4C3BA48 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_ConstantStrMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_QuestMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1C32C20(&Method_LimitUpResultCheckComponent_CreateResultInfoObject_LimitUpResultInfoComponent___);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_9647/*"OPEN_MAIN_SCENARIO_TITLE"*/);
    sub_1C32C20(&StringLiteral_9653/*"OPEN_STORY_QUEST_TITLE_LIMIT_UP"*/);
    sub_1C32C20(&StringLiteral_9644/*"OPEN_LIMIT_UNSEALED_QUEST_NAME_LIMIT_UP"*/);
    sub_1C32C20(&StringLiteral_9645/*"OPEN_LIMIT_UNSEALED_QUEST_TITLE_LIMIT_UP"*/);
    sub_1C32C20(&StringLiteral_9639/*"OPEN_EVENT_QUEST_NAME_LIMIT_UP"*/);
    sub_1C32C20(&StringLiteral_9640/*"OPEN_EVENT_QUEST_TITLE_LIMIT_UP"*/);
    sub_1C32C20(&StringLiteral_9646/*"OPEN_MAIN_QUEST_TITLE_LIMIT_UP"*/);
    byte_4C3BA48 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  Entity = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !Entity )
    goto LABEL_41;
  Entity = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                           Entity,
                                                           questId,
                                                           (const MethodInfo_3396838 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( !Entity )
    goto LABEL_41;
  v7 = Entity;
  v8 = 0;
  v9 = 0;
  switch ( LODWORD(Entity->fields.list) )
  {
    case 1:
    case 2:
      if ( !Master_object )
        goto LABEL_41;
      if ( ServantLimitImageMaster__IsLimitCountSealQuest((ServantLimitImageMaster_o *)Master_object, questId, 0) )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v10 = LocalizationManager__Get((System_String_o *)StringLiteral_9645/*"OPEN_LIMIT_UNSEALED_QUEST_TITLE_LIMIT_UP"*/, 0);
        v11 = (System_String_o **)&StringLiteral_9644/*"OPEN_LIMIT_UNSEALED_QUEST_NAME_LIMIT_UP"*/;
      }
      else
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Entity = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ConstantStrMaster___);
        if ( !Entity )
          goto LABEL_41;
        Value = (Il2CppObject *)ConstantStrMaster__GetValue(
                                  (ConstantStrMaster_o *)Entity,
                                  (System_String_o *)StringLiteral_9647/*"OPEN_MAIN_SCENARIO_TITLE"*/,
                                  0);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v15 = LocalizationManager__Get((System_String_o *)StringLiteral_9646/*"OPEN_MAIN_QUEST_TITLE_LIMIT_UP"*/, 0);
        v10 = System_String__Format(v15, Value, 0);
LABEL_29:
        v11 = (System_String_o **)&StringLiteral_9639/*"OPEN_EVENT_QUEST_NAME_LIMIT_UP"*/;
      }
LABEL_30:
      v9 = v10;
      v16 = LocalizationManager__Get(*v11, 0);
      v8 = System_String__Format(v16, (Il2CppObject *)v7->fields._MasterName_k__BackingField, 0);
      this->fields.isOpenQuest = 1;
LABEL_31:
      if ( !System_String__IsNullOrEmpty(v9, 0) && !System_String__IsNullOrEmpty(v8, 0) )
      {
        Entity = (DataMasterBase_TMaster__TEntity__PKType__o *)LimitUpResultCheckComponent__CreateResultInfoObject_object_(
                                                                 this,
                                                                 (Il2CppObject *)this->fields.limitUpResultInfoStoryOrigin,
                                                                 (const MethodInfo_315DA9C *)Method_LimitUpResultCheckComponent_CreateResultInfoObject_LimitUpResultInfoComponent___);
        if ( Entity )
        {
          v17 = (UnityEngine_Component_o *)Entity;
          ((void (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *, System_String_o *, System_String_o *, const MethodInfo *))Entity->klass->vtable._4_ForForceDerived.methodPtr)(
            Entity,
            v9,
            v8,
            Entity->klass->vtable._4_ForForceDerived.method);
          resInfoList = (System_Collections_Generic_List_object__o *)this->fields.resInfoList;
          Entity = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(v17, 0);
          if ( resInfoList )
          {
            items = resInfoList->fields._items;
            v22 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++resInfoList->fields._version;
            if ( items )
            {
              size = resInfoList->fields._size;
              v24 = Entity;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  resInfoList,
                  (Il2CppObject *)Entity,
                  *(const MethodInfo_37987BC **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
              }
              else
              {
                resInfoList->fields._size = size + 1;
                v25 = &items->obj.klass + size;
                v25[4] = (Il2CppClass *)v24;
                sub_1C32BC4((CGThumbnailListItem_o *)(v25 + 4), (int32_t)v24, v19, v20);
              }
              return;
            }
          }
        }
LABEL_41:
        sub_1C32E7C(Entity);
      }
      return;
    case 3:
      if ( !Master_object )
        goto LABEL_41;
      IsLimitCountSealQuest = ServantLimitImageMaster__IsLimitCountSealQuest(
                                (ServantLimitImageMaster_o *)Master_object,
                                questId,
                                0);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v13 = (System_String_o **)&StringLiteral_9645/*"OPEN_LIMIT_UNSEALED_QUEST_TITLE_LIMIT_UP"*/;
      if ( IsLimitCountSealQuest )
      {
        v11 = (System_String_o **)&StringLiteral_9644/*"OPEN_LIMIT_UNSEALED_QUEST_NAME_LIMIT_UP"*/;
      }
      else
      {
        v13 = (System_String_o **)&StringLiteral_9653/*"OPEN_STORY_QUEST_TITLE_LIMIT_UP"*/;
        v11 = (System_String_o **)&StringLiteral_9639/*"OPEN_EVENT_QUEST_NAME_LIMIT_UP"*/;
      }
      v10 = LocalizationManager__Get(*v13, 0);
      goto LABEL_30;
    case 4:
      goto LABEL_31;
    case 5:
    case 6:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v10 = LocalizationManager__Get((System_String_o *)StringLiteral_9640/*"OPEN_EVENT_QUEST_TITLE_LIMIT_UP"*/, 0);
      goto LABEL_29;
    default:
      v9 = 0;
      goto LABEL_31;
  }
}


void LimitUpResultCheckComponent__SetSkillRelease(
        LimitUpResultCheckComponent_o *this,
        int32_t skillId,
        int32_t targetIdx,
        int32_t transformIndex,
        const MethodInfo *method)
{
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  SkillEntity_o *v10; // x24
  System_String_o *v11; // x23
  struct UserServantEntity_o *resUsrSvtData; // x8
  ServantLimitImageMaster_o *v13; // x25
  __int64 v14; // x26
  __int64 v15; // x27
  int32_t v16; // w26
  int32_t ServantImageLimitSealAfter; // w26
  struct UserServantEntity_o *v18; // x8
  ServantLimitAddMaster_o *v19; // x25
  struct UserServantEntity_o *v20; // x8
  int32_t v21; // w27
  int32_t v22; // w28
  System_String_o *v23; // x0
  System_String_o *v24; // x24
  struct UserServantEntity_o *v25; // x8
  ServantSkillMaster_o *v26; // x25
  __int64 v27; // x26
  __int64 v28; // x27
  ServantSkillEntity_o *EntityFromSkillId; // x0
  __int64 v30; // x8
  ServantSkillEntity_o *v31; // x25
  const MethodInfo *v32; // x6
  LimitUpResultInfoSkillComponent_o *v33; // x22
  const MethodInfo *v34; // x2
  bool v35; // w1
  struct System_Collections_Generic_List_GameObject__o *resInfoList; // x8
  System_Collections_Generic_List_object__o *v37; // x20
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  struct System_Object_array *items; // x8
  _QWORD *v41; // x9
  __int64 size; // x10
  DataMasterBase_TMaster__TEntity__PKType__o *v43; // x1
  Il2CppClass **v44; // x0
  int32_t transformCount; // [xsp+Ch] [xbp-84h]
  TransformServantInfo_o *transformInfo; // [xsp+10h] [xbp-80h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+18h] [xbp-78h] BYREF
  System_String_o *detail; // [xsp+20h] [xbp-70h] BYREF
  System_String_o *name; // [xsp+28h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16

  if ( (byte_4C3BA4A & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_ServantSkillMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C32C20(&ImageLimitCount_TypeInfo);
    sub_1C32C20(&Method_LimitUpResultCheckComponent_CreateResultInfoObject_LimitUpResultInfoSkillComponent___);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&StringLiteral_6963/*"GET_SKILL_TITLE"*/);
    sub_1C32C20(&StringLiteral_6962/*"GET_SKILL_NAME_LIMIT_UP"*/);
    byte_4C3BA4A = 1;
  }
  detail = 0;
  name = 0;
  transformInfo = 0;
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_SkillMaster___);
  if ( !Master_object )
    goto LABEL_52;
  v10 = (SkillEntity_o *)DataMasterBase_object__object__int___GetEntity(
                           Master_object,
                           skillId,
                           (const MethodInfo_3396838 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager__Get(
                                                                  (System_String_o *)StringLiteral_6963/*"GET_SKILL_TITLE"*/,
                                                                  0);
  if ( !this->fields.resUsrSvtData )
    goto LABEL_52;
  v11 = (System_String_o *)Master_object;
  transformCount = transformIndex;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UserServantEntity__getSkillLevel(
                                                                  this->fields.resUsrSvtData,
                                                                  targetIdx,
                                                                  0);
  if ( !v10 )
    goto LABEL_52;
  SkillEntity__getSkillMessageInfo(v10, &name, &detail, (int32_t)Master_object, 0);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_52;
  v13 = (ServantLimitImageMaster_o *)Master_object;
  v15 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v50.fields.currentCryptoKey = v15;
  *(_QWORD *)&v50.fields.fakeValue = v14;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(
                                                                  v50,
                                                                  0);
  if ( !this->fields.resUsrSvtData )
    goto LABEL_52;
  v16 = (int)Master_object;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UserServantEntity__getDispLimitCount(
                                                                  this->fields.resUsrSvtData,
                                                                  0,
                                                                  0);
  if ( !v13 )
    goto LABEL_52;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 v13,
                                 v16,
                                 (int32_t)Master_object,
                                 0);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  v18 = this->fields.resUsrSvtData;
  if ( !v18 )
    goto LABEL_52;
  v19 = (ServantLimitAddMaster_o *)Master_object;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(
                                                                  v18->fields.svtId,
                                                                  0);
  v20 = this->fields.resUsrSvtData;
  if ( !v20 )
    goto LABEL_52;
  v21 = (int)Master_object;
  v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v20->fields.limitCount, 0);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)ImageLimitCount__GetLimitCountByDispLimit(
                                                                  ServantImageLimitSealAfter,
                                                                  v22,
                                                                  0);
  if ( !v19 )
    goto LABEL_52;
  if ( ServantLimitAddMaster__TryGetEntity(v19, &entity, v21, (int32_t)Master_object, 0) )
  {
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)entity;
    if ( !entity )
      goto LABEL_52;
    if ( ServantLimitAddEntity__HasKeyOverwriteSkillName(entity, 0) )
    {
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)entity;
      if ( !entity )
        goto LABEL_52;
      name = ServantLimitAddEntity__GetOverwriteSkillName(entity, v10->fields.id, name, 0);
    }
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_6962/*"GET_SKILL_NAME_LIMIT_UP"*/, 0);
  v24 = System_String__Format(v23, (Il2CppObject *)name, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantSkillMaster___);
  v25 = this->fields.resUsrSvtData;
  if ( !v25 )
    goto LABEL_52;
  v26 = (ServantSkillMaster_o *)Master_object;
  v28 = *(_QWORD *)&v25->fields.svtId.fields.currentCryptoKey;
  v27 = *(_QWORD *)&v25->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v51.fields.currentCryptoKey = v28;
  *(_QWORD *)&v51.fields.fakeValue = v27;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(
                                                                  v51,
                                                                  0);
  if ( !v26 )
    goto LABEL_52;
  EntityFromSkillId = ServantSkillMaster__getEntityFromSkillId(v26, (int32_t)Master_object, targetIdx + 1, skillId, 0);
  v30 = this->fields.transformationCount <= 1 ? 128LL : 136LL;
  v31 = EntityFromSkillId;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)LimitUpResultCheckComponent__CreateResultInfoObject_object_(
                                                                  this,
                                                                  *(Il2CppObject **)((char *)&this->klass + v30),
                                                                  (const MethodInfo_315DA9C *)Method_LimitUpResultCheckComponent_CreateResultInfoObject_LimitUpResultInfoSkillComponent___);
  if ( !Master_object )
    goto LABEL_52;
  v33 = (LimitUpResultInfoSkillComponent_o *)Master_object;
  LimitUpResultInfoSkillComponent__Setup(
    (LimitUpResultInfoSkillComponent_o *)Master_object,
    skillId,
    v24,
    v31,
    v11,
    detail,
    v32);
  if ( this->fields.transformationCount < 2 )
    goto LABEL_46;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.baseUsrSvtData;
  if ( !Master_object
    || (Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UserServantEntity__GetTransformedServantInfo(
                                                                        (UserServantEntity_o *)Master_object,
                                                                        &transformInfo,
                                                                        transformCount,
                                                                        0),
        !transformInfo)
    || (Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v33->fields.battleNameLabel) == 0 )
  {
LABEL_52:
    sub_1C32E7C(Master_object);
  }
  UILabel__set_text((UILabel_o *)Master_object, transformInfo->fields.titleText, 0);
  if ( this->fields.transformationCount >= 2 )
  {
    resInfoList = this->fields.resInfoList;
    if ( !resInfoList )
      goto LABEL_52;
    v35 = resInfoList->fields._size < 1;
  }
  else
  {
    v35 = 0;
  }
  LimitUpResultInfoSkillComponent__SetTitleDisp(v33, v35, v34);
LABEL_46:
  v37 = (System_Collections_Generic_List_object__o *)this->fields.resInfoList;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)v33,
                                                                  0);
  if ( !v37 )
    goto LABEL_52;
  items = v37->fields._items;
  v41 = Method_System_Collections_Generic_List_GameObject__Add__;
  ++v37->fields._version;
  if ( !items )
    goto LABEL_52;
  size = v37->fields._size;
  v43 = Master_object;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v37,
      (Il2CppObject *)Master_object,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
  }
  else
  {
    v44 = &items->obj.klass + size;
    v37->fields._size = size + 1;
    v44[4] = (Il2CppClass *)v43;
    sub_1C32BC4((CGThumbnailListItem_o *)(v44 + 4), (int32_t)v43, v38, v39);
  }
  this->fields.isGetNewSkill = 1;
}


void LimitUpResultCheckComponent__checkGetSkill(
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
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v17; // x22
  int v18; // w26
  int v19; // w8
  const MethodInfo *v20; // x4
  int32_t v21; // w21
  int32_t v22; // w20
  DataMasterBase_TMaster__TEntity__PKType__o *v23; // x24
  Il2CppObject *Entity; // x23
  SkillEntity_o *v25; // x20
  int32_t v26; // w24
  int32_t SkillLevel; // w0
  UILabel_o *skillChangeInfoTitle; // x22
  int32_t v29; // w21
  UILabel_o *skillChangeInfoSubTitleOld; // x22
  UILabel_o *skillChangeInfoSubTitleNow; // x22
  UILabel_o *skillChangeInfoNameOld; // x22
  System_String_o *v33; // x0
  UILabel_o *skillChangeInfoNameNow; // x20
  System_String_o *v35; // x0
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  Il2CppObject *skillChangeInfo; // x1
  intptr_t m_CachedPtr; // x8
  _QWORD *v40; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v42; // x8
  System_String_o *detail; // [xsp+8h] [xbp-58h] BYREF
  System_String_o *name; // [xsp+18h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16

  v4 = this;
  if ( (byte_4C3BA49 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C32C20(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&StringLiteral_6961/*"GET_SKILL_NAME"*/);
    sub_1C32C20(&StringLiteral_1928/*"AFTER_CHANGE_SKILL_SUB_TITLE"*/);
    sub_1C32C20(&StringLiteral_3328/*"CHANGE_SKILL_TITLE"*/);
    this = (LimitUpResultCheckComponent_o *)sub_1C32C20(&StringLiteral_2903/*"BEFORE_CHANGE_SKILL_SUB_TITLE"*/);
    byte_4C3BA49 = 1;
  }
  name = 0;
  detail = 0;
  baseUsrSvtData = v4->fields.baseUsrSvtData;
  *(_WORD *)&v4->fields.isGetNewSkill = 0;
  if ( !baseUsrSvtData )
    goto LABEL_57;
  v7 = *(_QWORD *)&baseUsrSvtData->fields.limitCount.fields.currentCryptoKey;
  v6 = *(_QWORD *)&baseUsrSvtData->fields.limitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v45.fields.currentCryptoKey = v7;
  *(_QWORD *)&v45.fields.fakeValue = v6;
  this = (LimitUpResultCheckComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v45, 0);
  if ( !v4->fields.baseUsrSvtData )
    goto LABEL_57;
  v8 = (int)this;
  TransformedSkillIdList = UserServantEntity__GetTransformedSkillIdList(
                             v4->fields.baseUsrSvtData,
                             transformIndex,
                             -1,
                             (int32_t)this,
                             1,
                             -1,
                             1,
                             0);
  kind = v4->fields.kind;
  v11 = TransformedSkillIdList;
  if ( kind == 19 || kind == 10 )
  {
    this = (LimitUpResultCheckComponent_o *)v4->fields.baseUsrSvtData;
    if ( !this )
      goto LABEL_57;
    LimitCntMax = v8 + 1;
    if ( UserServantEntity__getLimitCntMax((UserServantEntity_o *)this, 0) < LimitCntMax )
    {
      this = (LimitUpResultCheckComponent_o *)v4->fields.baseUsrSvtData;
      if ( !this )
        goto LABEL_57;
      LimitCntMax = UserServantEntity__getLimitCntMax((UserServantEntity_o *)this, 0);
    }
    this = (LimitUpResultCheckComponent_o *)v4->fields.resUsrSvtData;
    if ( this )
    {
      v13 = transformIndex;
      v14 = LimitCntMax;
      goto LABEL_17;
    }
LABEL_57:
    sub_1C32E7C(this);
  }
  this = (LimitUpResultCheckComponent_o *)v4->fields.resUsrSvtData;
  if ( !this )
    goto LABEL_57;
  v14 = -1;
  v13 = transformIndex;
LABEL_17:
  this = (LimitUpResultCheckComponent_o *)UserServantEntity__GetTransformedSkillIdList(
                                            (UserServantEntity_o *)this,
                                            v13,
                                            -1,
                                            v14,
                                            1,
                                            -1,
                                            1,
                                            0);
  v15 = this;
  if ( !v11 )
    goto LABEL_57;
  max_length = v11->max_length;
  if ( (int)max_length < 1 )
    return;
  v17 = 0;
  while ( 1 )
  {
    if ( v17 >= (unsigned int)max_length )
      goto LABEL_58;
    if ( !v15 )
      goto LABEL_57;
    if ( v17 >= LODWORD(v15->fields.m_CancellationTokenSource) )
      goto LABEL_58;
    v18 = v11->m_Items[v17];
    v19 = *((_DWORD *)&v15->fields.openInfowindowComp + v17);
    if ( v18 != v19 && v19 >= 1 )
      break;
LABEL_28:
    LODWORD(max_length) = v11->max_length;
    if ( (__int64)++v17 >= (int)max_length )
      return;
  }
  this = (LimitUpResultCheckComponent_o *)v4->fields.resUsrSvtData;
  if ( !this )
    goto LABEL_57;
  this = (LimitUpResultCheckComponent_o *)UserServantEntity__IsHeroine((UserServantEntity_o *)this, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( v18 < 1 )
      goto LABEL_52;
    goto LABEL_28;
  }
  if ( v18 <= 0 )
  {
LABEL_52:
    if ( (unsigned int)v17 < LODWORD(v15->fields.m_CancellationTokenSource) )
    {
      LimitUpResultCheckComponent__SetSkillRelease(
        v4,
        *((_DWORD *)&v15->fields.openInfowindowComp + (int)v17),
        v17,
        transformIndex,
        v20);
      return;
    }
LABEL_58:
    sub_1C32E84(this);
  }
  if ( (unsigned int)v17 >= LODWORD(v11->max_length)
    || (unsigned int)v17 >= LODWORD(v15->fields.m_CancellationTokenSource) )
  {
    goto LABEL_58;
  }
  v21 = v11->m_Items[v17];
  v22 = *((_DWORD *)&v15->fields.openInfowindowComp + v17);
  this = (LimitUpResultCheckComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_57;
  this = (LimitUpResultCheckComponent_o *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)this,
                                            (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !this )
    goto LABEL_57;
  v23 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             v21,
             (const MethodInfo_3396838 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  this = (LimitUpResultCheckComponent_o *)DataMasterBase_object__object__int___GetEntity(
                                            v23,
                                            v22,
                                            (const MethodInfo_3396838 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( !v4->fields.baseUsrSvtData )
    goto LABEL_57;
  v25 = (SkillEntity_o *)this;
  this = (LimitUpResultCheckComponent_o *)UserServantEntity__getSkillLevel(v4->fields.baseUsrSvtData, v17, 0);
  if ( !v4->fields.resUsrSvtData )
    goto LABEL_57;
  v26 = (int)this;
  SkillLevel = UserServantEntity__getSkillLevel(v4->fields.resUsrSvtData, v17, 0);
  skillChangeInfoTitle = v4->fields.skillChangeInfoTitle;
  v29 = SkillLevel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (LimitUpResultCheckComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3328/*"CHANGE_SKILL_TITLE"*/, 0);
  if ( !skillChangeInfoTitle )
    goto LABEL_57;
  UILabel__set_text(skillChangeInfoTitle, (System_String_o *)this, 0);
  skillChangeInfoSubTitleOld = v4->fields.skillChangeInfoSubTitleOld;
  this = (LimitUpResultCheckComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2903/*"BEFORE_CHANGE_SKILL_SUB_TITLE"*/, 0);
  if ( !skillChangeInfoSubTitleOld )
    goto LABEL_57;
  UILabel__set_text(skillChangeInfoSubTitleOld, (System_String_o *)this, 0);
  skillChangeInfoSubTitleNow = v4->fields.skillChangeInfoSubTitleNow;
  this = (LimitUpResultCheckComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_1928/*"AFTER_CHANGE_SKILL_SUB_TITLE"*/, 0);
  if ( !skillChangeInfoSubTitleNow )
    goto LABEL_57;
  UILabel__set_text(skillChangeInfoSubTitleNow, (System_String_o *)this, 0);
  if ( !Entity )
    goto LABEL_57;
  SkillEntity__getSkillMessageInfo((SkillEntity_o *)Entity, &name, &detail, v26, 0);
  skillChangeInfoNameOld = v4->fields.skillChangeInfoNameOld;
  v33 = LocalizationManager__Get((System_String_o *)StringLiteral_6961/*"GET_SKILL_NAME"*/, 0);
  this = (LimitUpResultCheckComponent_o *)System_String__Format(v33, (Il2CppObject *)name, 0);
  if ( !skillChangeInfoNameOld )
    goto LABEL_57;
  UILabel__set_text(skillChangeInfoNameOld, (System_String_o *)this, 0);
  this = (LimitUpResultCheckComponent_o *)v4->fields.skillChangeInfoDetailOld;
  if ( !this )
    goto LABEL_57;
  this = (LimitUpResultCheckComponent_o *)WrapControlText__textBBCodeAdjust(
                                            (UILabel_o *)this,
                                            detail,
                                            (int32_t)this[1].fields.skillChangeInfoTitle,
                                            0,
                                            0);
  if ( !v25 )
    goto LABEL_57;
  SkillEntity__getSkillMessageInfo(v25, &name, &detail, v29, 0);
  skillChangeInfoNameNow = v4->fields.skillChangeInfoNameNow;
  v35 = LocalizationManager__Get((System_String_o *)StringLiteral_6961/*"GET_SKILL_NAME"*/, 0);
  this = (LimitUpResultCheckComponent_o *)System_String__Format(v35, (Il2CppObject *)name, 0);
  if ( !skillChangeInfoNameNow )
    goto LABEL_57;
  UILabel__set_text(skillChangeInfoNameNow, (System_String_o *)this, 0);
  this = (LimitUpResultCheckComponent_o *)v4->fields.skillChangeInfoDetailNow;
  if ( !this )
    goto LABEL_57;
  WrapControlText__textBBCodeAdjust((UILabel_o *)this, detail, (int32_t)this[1].fields.skillChangeInfoTitle, 0, 0);
  this = (LimitUpResultCheckComponent_o *)v4->fields.resInfoList;
  if ( !this )
    goto LABEL_57;
  skillChangeInfo = (Il2CppObject *)v4->fields.skillChangeInfo;
  m_CachedPtr = this->fields.m_CachedPtr;
  v40 = Method_System_Collections_Generic_List_GameObject__Add__;
  ++HIDWORD(this->fields.m_CancellationTokenSource);
  if ( !m_CachedPtr )
    goto LABEL_57;
  m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      skillChangeInfo,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
  }
  else
  {
    v42 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
    LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_QWORD *)(v42 + 32) = skillChangeInfo;
    sub_1C32BC4((CGThumbnailListItem_o *)(v42 + 32), (int32_t)skillChangeInfo, v36, v37);
  }
  *(_WORD *)&v4->fields.isGetNewSkill = 257;
}


void LimitUpResultCheckComponent__checkLimitUpReward(
        LimitUpResultCheckComponent_o *this,
        System_Collections_Generic_List_int____o *rewardGiftDataList,
        const MethodInfo *method)
{
  __int64 v5; // x21
  Il2CppObject *Master_object; // x23
  GiftMaster_o *LimitCntMax; // x0
  struct UserServantEntity_o *baseUsrSvtData; // x8
  GiftMaster_o *v9; // x22
  __int64 v10; // x24
  __int64 v11; // x25
  struct UserServantEntity_o *v12; // x8
  __int64 v13; // x24
  __int64 v14; // x25
  GiftEntity_o *DataById; // x0
  __int64 v16; // x22
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_String_o *v19; // x23
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  __int64 v23; // x5
  __int64 v24; // x6
  __int64 v25; // x7
  Il2CppObject *v26; // x25
  System_String_o *v27; // x24
  Il2CppObject *v28; // x0
  System_String_o *v29; // x24
  Il2CppObject *v30; // x25
  System_Func_object__bool__o *v31; // x26
  bool v32; // w20
  const MethodInfo *v33; // x5
  System_Collections_Generic_List_object__o *resInfoList; // x19
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  struct System_Object_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  GiftMaster_o *v40; // x1
  Il2CppClass **v41; // x0
  int v42; // [xsp+4h] [xbp-5Ch] BYREF
  System_String_o *countText; // [xsp+8h] [xbp-58h] BYREF
  System_String_o *nameText; // [xsp+18h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16

  if ( (byte_4C3BA4B & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_Any_int_____);
    sub_1C32C20(&Method_DataManager_GetMaster_CombineLimitGiftMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_GiftMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&System_Func_int____bool__TypeInfo);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&Method_LimitUpResultCheckComponent_CreateResultInfoObject_LimitUpResultInfoRewardComponent___);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&Method_LimitUpResultCheckComponent___c__DisplayClass45_0__checkLimitUpReward_b__0__);
    sub_1C32C20(&LimitUpResultCheckComponent___c__DisplayClass45_0_TypeInfo);
    sub_1C32C20(&StringLiteral_6958/*"GET_LIMIT_UP_REWARD_DETAIL"*/);
    sub_1C32C20(&StringLiteral_6959/*"GET_LIMIT_UP_REWARD_TITLE"*/);
    byte_4C3BA4B = 1;
  }
  nameText = 0;
  countText = 0;
  v5 = sub_1C32E6C(LimitUpResultCheckComponent___c__DisplayClass45_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_CombineLimitGiftMaster___);
  LimitCntMax = (GiftMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_GiftMaster___);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_34;
  v9 = LimitCntMax;
  v11 = *(_QWORD *)&baseUsrSvtData->fields.limitCount.fields.currentCryptoKey;
  v10 = *(_QWORD *)&baseUsrSvtData->fields.limitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v45.fields.currentCryptoKey = v11;
  *(_QWORD *)&v45.fields.fakeValue = v10;
  LimitCntMax = (GiftMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v45, 0);
  if ( !v5 )
    goto LABEL_34;
  *(_DWORD *)(v5 + 16) = (_DWORD)LimitCntMax + 1;
  LimitCntMax = (GiftMaster_o *)this->fields.baseUsrSvtData;
  if ( !LimitCntMax )
    goto LABEL_34;
  LimitCntMax = (GiftMaster_o *)UserServantEntity__getLimitCntMax((UserServantEntity_o *)LimitCntMax, 0);
  if ( (int)LimitCntMax < *(_DWORD *)(v5 + 16) )
  {
    LimitCntMax = (GiftMaster_o *)this->fields.baseUsrSvtData;
    if ( !LimitCntMax )
      goto LABEL_34;
    LimitCntMax = (GiftMaster_o *)UserServantEntity__getLimitCntMax((UserServantEntity_o *)LimitCntMax, 0);
    *(_DWORD *)(v5 + 16) = (_DWORD)LimitCntMax;
  }
  v12 = this->fields.baseUsrSvtData;
  if ( !v12 )
    goto LABEL_34;
  v14 = *(_QWORD *)&v12->fields.svtId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&v12->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v46.fields.currentCryptoKey = v14;
  *(_QWORD *)&v46.fields.fakeValue = v13;
  LimitCntMax = (GiftMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v46, 0);
  if ( !Master_object )
    goto LABEL_34;
  LimitCntMax = (GiftMaster_o *)CombineLimitGiftMaster__GetCombineLimitGiftId(
                                  (CombineLimitGiftMaster_o *)Master_object,
                                  (int32_t)LimitCntMax,
                                  *(_DWORD *)(v5 + 16),
                                  0);
  if ( !(_DWORD)LimitCntMax )
    return;
  if ( !v9 )
    goto LABEL_34;
  DataById = GiftMaster__getDataById(v9, (int32_t)LimitCntMax, 0);
  *(_QWORD *)(v5 + 24) = DataById;
  v16 = v5 + 24;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 24), (int32_t)DataById, v17, v18);
  if ( !*(_QWORD *)(v5 + 24) )
    return;
  GiftEntity__GetInfo(*(GiftEntity_o **)(v5 + 24), &nameText, &countText, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_6959/*"GET_LIMIT_UP_REWARD_TITLE"*/, 0);
  LimitCntMax = (GiftMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6958/*"GET_LIMIT_UP_REWARD_DETAIL"*/, 0);
  if ( !*(_QWORD *)v16 )
    goto LABEL_34;
  v26 = (Il2CppObject *)nameText;
  v27 = (System_String_o *)LimitCntMax;
  v42 = *(_DWORD *)(*(_QWORD *)v16 + 28LL);
  v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v42, v20, v21, v22, v23, v24, v25);
  v29 = System_String__Format_63559836(v27, v26, v28, 0);
  v30 = LimitUpResultCheckComponent__CreateResultInfoObject_object_(
          this,
          (Il2CppObject *)this->fields.limitUpResultInfoRewardOrigin,
          (const MethodInfo_315DA9C *)Method_LimitUpResultCheckComponent_CreateResultInfoObject_LimitUpResultInfoRewardComponent___);
  if ( rewardGiftDataList )
  {
    v31 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_int____bool__TypeInfo);
    System_Func_object__bool____ctor(
      v31,
      (Il2CppObject *)v5,
      Method_LimitUpResultCheckComponent___c__DisplayClass45_0__checkLimitUpReward_b__0__,
      0);
    v32 = !BasicHelper__Any_object_(
             (System_Collections_Generic_List_T__o *)rewardGiftDataList,
             (System_Func_T__bool__o *)v31,
             (const MethodInfo_30C6790 *)Method_BasicHelper_Any_int_____);
  }
  else
  {
    v32 = 1;
  }
  LimitCntMax = *(GiftMaster_o **)v16;
  if ( !*(_QWORD *)v16
    || (LimitCntMax = (GiftMaster_o *)GiftEntity__getIconImageId((GiftEntity_o *)LimitCntMax, 0), !v30)
    || (LimitUpResultInfoRewardComponent__Setup(
          (LimitUpResultInfoRewardComponent_o *)v30,
          (int32_t)LimitCntMax,
          v32,
          v19,
          v29,
          v33),
        resInfoList = (System_Collections_Generic_List_object__o *)this->fields.resInfoList,
        LimitCntMax = (GiftMaster_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v30, 0),
        !resInfoList)
    || (items = resInfoList->fields._items,
        v38 = Method_System_Collections_Generic_List_GameObject__Add__,
        ++resInfoList->fields._version,
        !items) )
  {
LABEL_34:
    sub_1C32E7C(LimitCntMax);
  }
  size = resInfoList->fields._size;
  v40 = LimitCntMax;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      resInfoList,
      (Il2CppObject *)LimitCntMax,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
  }
  else
  {
    v41 = &items->obj.klass + size;
    resInfoList->fields._size = size + 1;
    v41[4] = (Il2CppClass *)v40;
    sub_1C32BC4((CGThumbnailListItem_o *)(v41 + 4), (int32_t)v40, v35, v36);
  }
}


void LimitUpResultCheckComponent__checkQuestOpen(LimitUpResultCheckComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x0
  int32_t svtCollectionLimitCnt; // w8
  UserServantEntity_o *baseUsrSvtData; // x0
  int32_t LimitCntMax; // w20
  struct UserServantEntity_o *resUsrSvtData; // x8
  clsQuestCheck_o *v8; // x21
  __int64 v9; // x22
  __int64 v10; // x23
  System_Collections_Generic_List_int__o *v11; // x0
  struct UserServantEntity_o *v12; // x8
  clsQuestCheck_o *v13; // x20
  __int64 v14; // x21
  __int64 v15; // x22
  System_Collections_Generic_List_int__o *v16; // x20
  UILabel_o *storyQuestInfoTitle; // x21
  UILabel_o *heroQuestInfoTitle; // x21
  int32_t v19; // w21
  int32_t Item; // w0
  const MethodInfo *v21; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_4C3BA47 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C32C20(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C32C20(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1C32C20(&StringLiteral_9652/*"OPEN_STORY_QUEST_TITLE"*/);
    sub_1C32C20(&StringLiteral_9641/*"OPEN_HERO_QUEST_TITLE"*/);
    byte_4C3BA47 = 1;
  }
  this->fields.isOpenQuest = 0;
  v3 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
  svtCollectionLimitCnt = this->fields.svtCollectionLimitCnt;
  if ( (svtCollectionLimitCnt & 0x80000000) == 0 )
  {
    if ( this->fields.kind == 19 )
    {
      baseUsrSvtData = this->fields.baseUsrSvtData;
      if ( !baseUsrSvtData )
        goto LABEL_31;
      LimitCntMax = svtCollectionLimitCnt + 1;
      if ( UserServantEntity__getLimitCntMax(baseUsrSvtData, 0) < svtCollectionLimitCnt + 1 )
      {
        baseUsrSvtData = this->fields.baseUsrSvtData;
        if ( !baseUsrSvtData )
          goto LABEL_31;
        LimitCntMax = UserServantEntity__getLimitCntMax(baseUsrSvtData, 0);
      }
      baseUsrSvtData = (UserServantEntity_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
      resUsrSvtData = this->fields.resUsrSvtData;
      if ( !resUsrSvtData )
        goto LABEL_31;
      v8 = (clsQuestCheck_o *)baseUsrSvtData;
      v10 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
      v9 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v22.fields.currentCryptoKey = v10;
      *(_QWORD *)&v22.fields.fakeValue = v9;
      baseUsrSvtData = (UserServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(
                                                v22,
                                                0);
      if ( !v8 )
LABEL_31:
        sub_1C32E7C(baseUsrSvtData);
      v11 = clsQuestCheck__GetReleaseQuestIdByServantLimit_35872180(
              v8,
              (int32_t)baseUsrSvtData,
              this->fields.svtCollectionLimitCnt,
              LimitCntMax,
              494,
              0);
    }
    else
    {
      baseUsrSvtData = (UserServantEntity_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
      v12 = this->fields.resUsrSvtData;
      if ( !v12 )
        goto LABEL_31;
      v13 = (clsQuestCheck_o *)baseUsrSvtData;
      v15 = *(_QWORD *)&v12->fields.svtId.fields.currentCryptoKey;
      v14 = *(_QWORD *)&v12->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v23.fields.currentCryptoKey = v15;
      *(_QWORD *)&v23.fields.fakeValue = v14;
      baseUsrSvtData = (UserServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(
                                                v23,
                                                0);
      if ( !v13 )
        goto LABEL_31;
      v11 = clsQuestCheck__GetReleaseQuestIdByServantLimit(
              v13,
              (int32_t)baseUsrSvtData,
              this->fields.svtCollectionLimitCnt,
              0);
    }
    v16 = v11;
    storyQuestInfoTitle = this->fields.storyQuestInfoTitle;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    baseUsrSvtData = (UserServantEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9652/*"OPEN_STORY_QUEST_TITLE"*/, 0);
    if ( storyQuestInfoTitle )
    {
      UILabel__set_text(storyQuestInfoTitle, (System_String_o *)baseUsrSvtData, 0);
      heroQuestInfoTitle = this->fields.heroQuestInfoTitle;
      baseUsrSvtData = (UserServantEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9641/*"OPEN_HERO_QUEST_TITLE"*/, 0);
      if ( heroQuestInfoTitle )
      {
        UILabel__set_text(heroQuestInfoTitle, (System_String_o *)baseUsrSvtData, 0);
        baseUsrSvtData = (UserServantEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( baseUsrSvtData )
        {
          DataManager__GetMasterData_object_(
            (DataManager_o *)baseUsrSvtData,
            (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
          if ( v16 && v16->fields._size >= 1 )
          {
            v19 = 0;
            do
            {
              if ( System_Collections_Generic_List_int___get_Item(
                     v16,
                     v19,
                     (const MethodInfo_377B4A8 *)Method_System_Collections_Generic_List_int__get_Item__) >= 1 )
              {
                Item = System_Collections_Generic_List_int___get_Item(
                         v16,
                         v19,
                         (const MethodInfo_377B4A8 *)Method_System_Collections_Generic_List_int__get_Item__);
                LimitUpResultCheckComponent__SetResInfoListQuestInfo(this, Item, v21);
              }
              ++v19;
            }
            while ( v19 < v16->fields._size );
          }
          return;
        }
      }
    }
    goto LABEL_31;
  }
}


void LimitUpResultCheckComponent__checkResultLimitUp(
        LimitUpResultCheckComponent_o *this,
        int32_t kind,
        UserServantEntity_o *baseData,
        UserServantEntity_o *resData,
        int32_t baseCollectionLimitCnt,
        System_Collections_Generic_List_int____o *rewardGiftDataList,
        const MethodInfo *method)
{
  struct UserServantEntity_o **p_resUsrSvtData; // x21
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_Collections_Generic_List_object__o *v16; // x22
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  UserServantEntity_o *resUsrSvtData; // x0
  struct UserServantEntity_o *v20; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v21; // x21
  __int64 v22; // x22
  __int64 v23; // x23
  const MethodInfo *v24; // x1
  const MethodInfo *v25; // x2
  int32_t v26; // w21
  const MethodInfo *v27; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  if ( (byte_4C3BA44 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C3BA44 = 1;
  }
  this->fields.baseUsrSvtData = baseData;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)baseData,
    (int32_t)baseData,
    (const MethodInfo *)resData);
  p_resUsrSvtData = &this->fields.resUsrSvtData;
  this->fields.resUsrSvtData = resData;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.resUsrSvtData, (int32_t)resData, v14, v15);
  this->fields.svtCollectionLimitCnt = baseCollectionLimitCnt;
  this->fields.kind = kind;
  v16 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.resInfoList = (struct System_Collections_Generic_List_GameObject__o *)v16;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.resInfoList, (int32_t)v16, v17, v18);
  *(_WORD *)&this->fields.isGetNewSkill = 0;
  this->fields.isOpenQuest = 0;
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_17;
  this->fields.transformationCount = UserServantEntity__GetTransformCount(resUsrSvtData, 1, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  resUsrSvtData = (UserServantEntity_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantMaster___);
  v20 = *p_resUsrSvtData;
  if ( !*p_resUsrSvtData )
    goto LABEL_17;
  v21 = (DataMasterBase_TMaster__TEntity__PKType__o *)resUsrSvtData;
  v23 = *(_QWORD *)&v20->fields.svtId.fields.currentCryptoKey;
  v22 = *(_QWORD *)&v20->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v28.fields.currentCryptoKey = v23;
  *(_QWORD *)&v28.fields.fakeValue = v22;
  resUsrSvtData = (UserServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v28, 0);
  if ( !v21
    || (resUsrSvtData = (UserServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                                 v21,
                                                 (int32_t)resUsrSvtData,
                                                 (const MethodInfo_3396838 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0 )
  {
LABEL_17:
    sub_1C32E7C(resUsrSvtData);
  }
  if ( ServantEntity__get_IsServant((ServantEntity_o *)resUsrSvtData, 0) )
  {
    if ( this->fields.transformationCount >= 1 )
    {
      v26 = 0;
      do
        LimitUpResultCheckComponent__checkGetSkill(this, v26++, v25);
      while ( v26 < this->fields.transformationCount );
    }
    LimitUpResultCheckComponent__checkQuestOpen(this, v24);
    LimitUpResultCheckComponent__checkLimitUpReward(this, rewardGiftDataList, v27);
  }
}


void LimitUpResultCheckComponent___c__DisplayClass45_0___ctor(
        LimitUpResultCheckComponent___c__DisplayClass45_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool LimitUpResultCheckComponent___c__DisplayClass45_0___checkLimitUpReward_b__0(
        LimitUpResultCheckComponent___c__DisplayClass45_0_o *this,
        System_Int32_array *data,
        const MethodInfo *method)
{
  unsigned int max_length; // w8
  struct GiftEntity_o *giftEntity; // x8

  if ( !data )
    goto LABEL_9;
  max_length = data->max_length;
  if ( !max_length )
LABEL_8:
    sub_1C32E84(this);
  if ( data->m_Items[0] == this->fields.afterLimitCnt )
  {
    if ( max_length > 1 )
    {
      giftEntity = this->fields.giftEntity;
      if ( giftEntity )
        return data->m_Items[1] == giftEntity->fields.id;
LABEL_9:
      sub_1C32E7C(this);
    }
    goto LABEL_8;
  }
  return 0;
}