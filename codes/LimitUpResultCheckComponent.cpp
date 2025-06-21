void __fastcall LimitUpResultCheckComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct LimitUpResultCheckComponent_StaticFields *static_fields; // x8

  if ( (byte_4B2041F & 1) == 0 )
  {
    sub_1BCAFF8(&LimitUpResultCheckComponent_TypeInfo, v1);
    byte_4B2041F = 1;
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

  if ( (byte_4B20419 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GameObject__get_Count__, method);
    byte_4B20419 = 1;
  }
  resInfoList = this->fields.resInfoList;
  return !resInfoList || resInfoList->fields._size <= 0;
}


Il2CppObject *__fastcall LimitUpResultCheckComponent__CreateResultInfoObject_object_(
        LimitUpResultCheckComponent_o *this,
        Il2CppObject *origin,
        const MethodInfo_30978D4 *method)
{
  UnityEngine_Component_o *v5; // x21
  UnityEngine_Transform_o *transform; // x0

  v5 = (UnityEngine_Component_o *)this;
  if ( !method->rgctx_data )
    this = (LimitUpResultCheckComponent_o *)sub_1C1B4B8();
  if ( !v5 || (this = (LimitUpResultCheckComponent_o *)UnityEngine_Component__get_gameObject(v5, 0LL)) == 0LL )
    sub_1BCB254(this, origin);
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  return BaseMonoBehaviour__createObject_object_(
           (BaseMonoBehaviour_o *)v5,
           origin,
           transform,
           0LL,
           (const MethodInfo_30037F4 *)method->rgctx_data->_1_BaseMonoBehaviour_createObject_T_);
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
  LimitUpResultCheckComponent_c *v15; // x0
  int32_t CONCURRENTLY_DISP_NUM; // w24
  LimitUpResultCheckComponent_c *v17; // x0
  System_Collections_Generic_List_object__o *v18; // x22
  const MethodInfo *v19; // x4
  const MethodInfo *v20; // x6
  int32_t v21; // w25
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  OpenInfoWindowComponent_o *v27; // x1
  Il2CppClass **v28; // x0
  OpenInfoWindowComponent_o *v29; // x21
  _BOOL4 isGetNewSkill; // w8
  int32_t monitor; // w4
  bool v32; // w5

  if ( (byte_4B20418 & 1) == 0 )
  {
    sub_1BCAFF8(&LimitUpResultCheckComponent_TypeInfo, callback);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GameObject__Add__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GameObject__RemoveAt__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GameObject___ctor__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GameObject__get_Count__, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GameObject__get_Item__, v11);
    sub_1BCAFF8(&System_Collections_Generic_List_GameObject__TypeInfo, v12);
    byte_4B20418 = 1;
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
  v15 = LimitUpResultCheckComponent_TypeInfo;
  if ( !LimitUpResultCheckComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LimitUpResultCheckComponent_TypeInfo);
    v15 = LimitUpResultCheckComponent_TypeInfo;
  }
  CONCURRENTLY_DISP_NUM = v15->static_fields->CONCURRENTLY_DISP_NUM;
  if ( !this->fields.isChangeSkill )
  {
    openInfowindowComp = (OpenInfoWindowComponent_o *)this->fields.resUsrSvtData;
    if ( !openInfowindowComp )
      goto LABEL_40;
    if ( UserServantEntity__isLimitCountMax((UserServantEntity_o *)openInfowindowComp, 0LL) )
    {
      v17 = LimitUpResultCheckComponent_TypeInfo;
      if ( !LimitUpResultCheckComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LimitUpResultCheckComponent_TypeInfo);
        v17 = LimitUpResultCheckComponent_TypeInfo;
      }
      CONCURRENTLY_DISP_NUM = v17->static_fields->CONCURRENTLY_DISP_NUM_BY_LIMIT_MAX;
    }
  }
  v18 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_GameObject___ctor__);
  openInfowindowComp = (OpenInfoWindowComponent_o *)this->fields.resInfoList;
  if ( !openInfowindowComp )
LABEL_40:
    sub_1BCB254(openInfowindowComp, callback);
  v21 = 0;
  while ( SLODWORD(openInfowindowComp->fields.m_CancellationTokenSource) > 0
       && v21 < CONCURRENTLY_DISP_NUM
       && (v21 == 0 || !this->fields.isChangeSkill) )
  {
    openInfowindowComp = (OpenInfoWindowComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                        (System_Collections_Generic_List_object__o *)openInfowindowComp,
                                                        0,
                                                        (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( v18 )
    {
      items = v18->fields._items;
      v25 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++v18->fields._version;
      if ( items )
      {
        size = v18->fields._size;
        v27 = openInfowindowComp;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v18,
            (Il2CppObject *)openInfowindowComp,
            *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
        }
        else
        {
          v28 = &items->obj.klass + size;
          v18->fields._size = size + 1;
          v28[4] = (Il2CppClass *)v27;
          sub_1BCAF9C((CGThumbnailListItem_o *)(v28 + 4), (int32_t)v27, v22, v23);
        }
        openInfowindowComp = (OpenInfoWindowComponent_o *)this->fields.resInfoList;
        if ( openInfowindowComp )
        {
          System_Collections_Generic_List_object___RemoveAt(
            (System_Collections_Generic_List_object__o *)openInfowindowComp,
            0,
            (const MethodInfo_36BB3A4 *)Method_System_Collections_Generic_List_GameObject__RemoveAt__);
          openInfowindowComp = (OpenInfoWindowComponent_o *)this->fields.resInfoList;
          ++v21;
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
        (System_Collections_Generic_List_GameObject__o *)v18,
        callback,
        isFirstDisp,
        v19);
      return;
    }
    goto LABEL_40;
  }
  if ( this->fields.transformationCount > 1 )
  {
    isGetNewSkill = this->fields.isGetNewSkill;
    v29 = this->fields.openInfowindowComp;
    if ( isGetNewSkill )
    {
      monitor = 125;
      v32 = 1;
      goto LABEL_38;
    }
  }
  else
  {
    v29 = this->fields.openInfowindowComp;
  }
  openInfowindowComp = (OpenInfoWindowComponent_o *)LimitUpResultCheckComponent_TypeInfo;
  if ( !LimitUpResultCheckComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LimitUpResultCheckComponent_TypeInfo);
    openInfowindowComp = (OpenInfoWindowComponent_o *)LimitUpResultCheckComponent_TypeInfo;
  }
  v32 = 0;
  monitor = (int32_t)openInfowindowComp[1].fields.m_CancellationTokenSource->monitor;
LABEL_38:
  if ( !v29 )
    goto LABEL_40;
  OpenInfoWindowComponent__OpenLimitUpResultInfo(
    v29,
    (System_Collections_Generic_List_GameObject__o *)v18,
    callback,
    isFirstDisp,
    monitor,
    v32,
    v20);
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
      sub_1BCB254(openInfowindowComp, isActive);
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
  Il2CppObject *Master_object; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *Entity; // x0
  __int64 v21; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v22; // x20
  System_String_o *v23; // x23
  System_String_o *v24; // x22
  System_String_o *v25; // x0
  __int64 *v26; // x21
  bool IsLimitCountSealQuest; // w21
  System_String_o **v28; // x8
  Il2CppObject *Value; // x21
  System_String_o *v30; // x0
  System_String_o *v31; // x0
  UnityEngine_Component_o *v32; // x20
  System_Collections_Generic_List_object__o *resInfoList; // x19
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  DataMasterBase_TMaster__TEntity__PKType__o *v39; // x1
  Il2CppClass **v40; // x0

  if ( (byte_4B2041B & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_ConstantStrMaster___, *(_QWORD *)&questId);
    sub_1BCAFF8(&Method_DataManager_GetMaster_QuestMaster___, v5);
    sub_1BCAFF8(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v6);
    sub_1BCAFF8(&DataManager_TypeInfo, v7);
    sub_1BCAFF8(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v8);
    sub_1BCAFF8(&Method_LimitUpResultCheckComponent_CreateResultInfoObject_LimitUpResultInfoComponent___, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GameObject__Add__, v10);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v11);
    sub_1BCAFF8(&StringLiteral_9573/*"OPEN_MAIN_SCENARIO_TITLE"*/, v12);
    sub_1BCAFF8(&StringLiteral_9579/*"OPEN_STORY_QUEST_TITLE_LIMIT_UP"*/, v13);
    sub_1BCAFF8(&StringLiteral_9570/*"OPEN_LIMIT_UNSEALED_QUEST_NAME_LIMIT_UP"*/, v14);
    sub_1BCAFF8(&StringLiteral_9571/*"OPEN_LIMIT_UNSEALED_QUEST_TITLE_LIMIT_UP"*/, v15);
    sub_1BCAFF8(&StringLiteral_9565/*"OPEN_EVENT_QUEST_NAME_LIMIT_UP"*/, v16);
    sub_1BCAFF8(&StringLiteral_9566/*"OPEN_EVENT_QUEST_TITLE_LIMIT_UP"*/, v17);
    sub_1BCAFF8(&StringLiteral_9572/*"OPEN_MAIN_QUEST_TITLE_LIMIT_UP"*/, v18);
    byte_4B2041B = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  Entity = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !Entity )
    goto LABEL_43;
  Entity = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                           Entity,
                                                           questId,
                                                           (const MethodInfo_32C7E00 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( !Entity )
    goto LABEL_43;
  v22 = Entity;
  v23 = 0LL;
  v24 = 0LL;
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
        v25 = LocalizationManager__Get((System_String_o *)StringLiteral_9571/*"OPEN_LIMIT_UNSEALED_QUEST_TITLE_LIMIT_UP"*/, 0LL);
        v26 = &StringLiteral_9570/*"OPEN_LIMIT_UNSEALED_QUEST_NAME_LIMIT_UP"*/;
      }
      else
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Entity = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ConstantStrMaster___);
        if ( !Entity )
          goto LABEL_43;
        Value = (Il2CppObject *)ConstantStrMaster__GetValue(
                                  (ConstantStrMaster_o *)Entity,
                                  (System_String_o *)StringLiteral_9573/*"OPEN_MAIN_SCENARIO_TITLE"*/,
                                  0LL);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v30 = LocalizationManager__Get((System_String_o *)StringLiteral_9572/*"OPEN_MAIN_QUEST_TITLE_LIMIT_UP"*/, 0LL);
        v25 = System_String__Format(v30, Value, 0LL);
LABEL_31:
        v26 = &StringLiteral_9565/*"OPEN_EVENT_QUEST_NAME_LIMIT_UP"*/;
      }
LABEL_32:
      v24 = v25;
      v31 = LocalizationManager__Get((System_String_o *)*v26, 0LL);
      v23 = System_String__Format(v31, (Il2CppObject *)v22->fields._MasterName_k__BackingField, 0LL);
      this->fields.isOpenQuest = 1;
LABEL_33:
      if ( !System_String__IsNullOrEmpty(v24, 0LL) && !System_String__IsNullOrEmpty(v23, 0LL) )
      {
        Entity = (DataMasterBase_TMaster__TEntity__PKType__o *)LimitUpResultCheckComponent__CreateResultInfoObject_object_(
                                                                 this,
                                                                 (Il2CppObject *)this->fields.limitUpResultInfoStoryOrigin,
                                                                 (const MethodInfo_30978D4 *)Method_LimitUpResultCheckComponent_CreateResultInfoObject_LimitUpResultInfoComponent___);
        if ( Entity )
        {
          v32 = (UnityEngine_Component_o *)Entity;
          ((void (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *, System_String_o *, System_String_o *, Il2CppMethodPointer))Entity->klass->vtable._4_ForForceDerived.method)(
            Entity,
            v24,
            v23,
            Entity->klass->vtable._5_preProcess.methodPtr);
          resInfoList = (System_Collections_Generic_List_object__o *)this->fields.resInfoList;
          Entity = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(v32, 0LL);
          if ( resInfoList )
          {
            items = resInfoList->fields._items;
            v37 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++resInfoList->fields._version;
            if ( items )
            {
              size = resInfoList->fields._size;
              v39 = Entity;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  resInfoList,
                  (Il2CppObject *)Entity,
                  *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
              }
              else
              {
                resInfoList->fields._size = size + 1;
                v40 = &items->obj.klass + size;
                v40[4] = (Il2CppClass *)v39;
                sub_1BCAF9C((CGThumbnailListItem_o *)(v40 + 4), (int32_t)v39, v34, v35);
              }
              return;
            }
          }
        }
LABEL_43:
        sub_1BCB254(Entity, v21);
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
      v28 = (System_String_o **)&StringLiteral_9571/*"OPEN_LIMIT_UNSEALED_QUEST_TITLE_LIMIT_UP"*/;
      if ( !IsLimitCountSealQuest )
        v28 = (System_String_o **)&StringLiteral_9579/*"OPEN_STORY_QUEST_TITLE_LIMIT_UP"*/;
      if ( IsLimitCountSealQuest )
        v26 = &StringLiteral_9570/*"OPEN_LIMIT_UNSEALED_QUEST_NAME_LIMIT_UP"*/;
      else
        v26 = &StringLiteral_9565/*"OPEN_EVENT_QUEST_NAME_LIMIT_UP"*/;
      v25 = LocalizationManager__Get(*v28, 0LL);
      goto LABEL_32;
    case 4:
      goto LABEL_33;
    case 5:
    case 6:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v25 = LocalizationManager__Get((System_String_o *)StringLiteral_9566/*"OPEN_EVENT_QUEST_TITLE_LIMIT_UP"*/, 0LL);
      goto LABEL_31;
    default:
      v24 = 0LL;
      goto LABEL_33;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall LimitUpResultCheckComponent__SetSkillRelease(
        LimitUpResultCheckComponent_o *this,
        int32_t skillId,
        int32_t targetIdx,
        int32_t transformIndex,
        const MethodInfo *method)
{
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
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v20; // x1
  Il2CppObject *Entity; // x24
  System_String_o *v22; // x23
  System_String_o *v23; // x0
  System_String_o *v24; // x24
  struct UserServantEntity_o *resUsrSvtData; // x8
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
  TransformServantInfo_o *transformInfo; // [xsp+8h] [xbp-68h] BYREF
  System_String_o *detail; // [xsp+10h] [xbp-60h] BYREF
  System_String_o *name; // [xsp+18h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // 0:x0.16

  if ( (byte_4B2041D & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_ServantSkillMaster___, *(_QWORD *)&skillId);
    sub_1BCAFF8(&Method_DataManager_GetMaster_SkillMaster___, v9);
    sub_1BCAFF8(&DataManager_TypeInfo, v10);
    sub_1BCAFF8(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v11);
    sub_1BCAFF8(&Method_LimitUpResultCheckComponent_CreateResultInfoObject_LimitUpResultInfoSkillComponent___, v12);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GameObject__Add__, v13);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GameObject__get_Count__, v14);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v15);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
    sub_1BCAFF8(&StringLiteral_6911/*"GET_SKILL_TITLE"*/, v17);
    sub_1BCAFF8(&StringLiteral_6910/*"GET_SKILL_NAME_LIMIT_UP"*/, v18);
    byte_4B2041D = 1;
  }
  detail = 0LL;
  name = 0LL;
  transformInfo = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_SkillMaster___);
  if ( !Master_object )
    goto LABEL_33;
  Entity = DataMasterBase_object__object__int___GetEntity(
             Master_object,
             skillId,
             (const MethodInfo_32C7E00 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager__Get(
                                                                  (System_String_o *)StringLiteral_6911/*"GET_SKILL_TITLE"*/,
                                                                  0LL);
  if ( !this->fields.resUsrSvtData )
    goto LABEL_33;
  v22 = (System_String_o *)Master_object;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UserServantEntity__getSkillLevel(
                                                                  this->fields.resUsrSvtData,
                                                                  targetIdx,
                                                                  0LL);
  if ( !Entity )
    goto LABEL_33;
  SkillEntity__getSkillMessageInfo((SkillEntity_o *)Entity, &name, &detail, (int32_t)Master_object, 0LL);
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_6910/*"GET_SKILL_NAME_LIMIT_UP"*/, 0LL);
  v24 = System_String__Format(v23, (Il2CppObject *)name, 0LL);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ServantSkillMaster___);
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_33;
  v26 = (ServantSkillMaster_o *)Master_object;
  v28 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v27 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v48.fields.currentCryptoKey = v28;
  *(_QWORD *)&v48.fields.fakeValue = v27;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(
                                                                  v48,
                                                                  0LL);
  if ( !v26 )
    goto LABEL_33;
  EntityFromSkillId = ServantSkillMaster__getEntityFromSkillId(v26, (int32_t)Master_object, targetIdx + 1, skillId, 0LL);
  v30 = this->fields.transformationCount <= 1 ? 128LL : 136LL;
  v31 = EntityFromSkillId;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)LimitUpResultCheckComponent__CreateResultInfoObject_object_(
                                                                  this,
                                                                  *(Il2CppObject **)((char *)&this->klass + v30),
                                                                  (const MethodInfo_30978D4 *)Method_LimitUpResultCheckComponent_CreateResultInfoObject_LimitUpResultInfoSkillComponent___);
  if ( !Master_object )
    goto LABEL_33;
  v33 = (LimitUpResultInfoSkillComponent_o *)Master_object;
  LimitUpResultInfoSkillComponent__Setup(
    (LimitUpResultInfoSkillComponent_o *)Master_object,
    skillId,
    v24,
    v31,
    v22,
    detail,
    v32);
  if ( this->fields.transformationCount < 2 )
    goto LABEL_27;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.baseUsrSvtData;
  if ( !Master_object
    || (Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UserServantEntity__GetTransformedServantInfo(
                                                                        (UserServantEntity_o *)Master_object,
                                                                        &transformInfo,
                                                                        transformIndex,
                                                                        0LL),
        !transformInfo)
    || (Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v33->fields.battleNameLabel) == 0LL )
  {
LABEL_33:
    sub_1BCB254(Master_object, v20);
  }
  UILabel__set_text((UILabel_o *)Master_object, transformInfo->fields.titleText, 0LL);
  if ( this->fields.transformationCount >= 2 )
  {
    resInfoList = this->fields.resInfoList;
    if ( !resInfoList )
      goto LABEL_33;
    v35 = resInfoList->fields._size < 1;
  }
  else
  {
    v35 = 0;
  }
  LimitUpResultInfoSkillComponent__SetTitleDisp(v33, v35, v34);
LABEL_27:
  v37 = (System_Collections_Generic_List_object__o *)this->fields.resInfoList;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)v33,
                                                                  0LL);
  if ( !v37 )
    goto LABEL_33;
  items = v37->fields._items;
  v41 = Method_System_Collections_Generic_List_GameObject__Add__;
  ++v37->fields._version;
  if ( !items )
    goto LABEL_33;
  size = v37->fields._size;
  v43 = Master_object;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v37,
      (Il2CppObject *)Master_object,
      *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
  }
  else
  {
    v44 = &items->obj.klass + size;
    v37->fields._size = size + 1;
    v44[4] = (Il2CppClass *)v43;
    sub_1BCAF9C((CGThumbnailListItem_o *)(v44 + 4), (int32_t)v43, v38, v39);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int64 v15; // x21
  __int64 v16; // x22
  int v17; // w22
  System_Int32_array *TransformedSkillIdList; // x0
  int32_t kind; // w8
  System_Int32_array *v20; // x21
  int32_t LimitCntMax; // w22
  int32_t v22; // w1
  int32_t v23; // w3
  __int64 v24; // x2
  LimitUpResultCheckComponent_o *v25; // x23
  int max_length; // w8
  unsigned int v27; // w9
  unsigned int v28; // w22
  char *v29; // x24
  int32_t *v30; // x24
  int v31; // w26
  int v32; // t1
  char *v33; // x25
  int v34; // w9
  int32_t *v35; // x25
  int v36; // t1
  const MethodInfo *v37; // x4
  int32_t v38; // w21
  int32_t v39; // w20
  DataMasterBase_TMaster__TEntity__PKType__o *v40; // x24
  Il2CppObject *Entity; // x23
  SkillEntity_o *v42; // x20
  int32_t v43; // w24
  int32_t SkillLevel; // w0
  UILabel_o *skillChangeInfoTitle; // x22
  int32_t v46; // w21
  UILabel_o *skillChangeInfoSubTitleOld; // x22
  UILabel_o *skillChangeInfoSubTitleNow; // x22
  UILabel_o *skillChangeInfoNameOld; // x22
  System_String_o *v50; // x0
  UILabel_o *skillChangeInfoNameNow; // x20
  System_String_o *v52; // x0
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  __int64 v55; // x8
  _QWORD *v56; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v58; // x8
  System_String_o *detail; // [xsp+8h] [xbp-58h] BYREF
  System_String_o *name; // [xsp+18h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // 0:x0.16

  v3 = transformIndex;
  v4 = this;
  if ( (byte_4B2041C & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_SkillMaster___, *(_QWORD *)&transformIndex);
    sub_1BCAFF8(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GameObject__Add__, v6);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v7);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_1BCAFF8(&StringLiteral_6909/*"GET_SKILL_NAME"*/, v10);
    sub_1BCAFF8(&StringLiteral_1919/*"AFTER_CHANGE_SKILL_SUB_TITLE"*/, v11);
    sub_1BCAFF8(&StringLiteral_3302/*"CHANGE_SKILL_TITLE"*/, v12);
    this = (LimitUpResultCheckComponent_o *)sub_1BCAFF8(&StringLiteral_2884/*"BEFORE_CHANGE_SKILL_SUB_TITLE"*/, v13);
    byte_4B2041C = 1;
  }
  name = 0LL;
  detail = 0LL;
  baseUsrSvtData = v4->fields.baseUsrSvtData;
  *(_WORD *)&v4->fields.isGetNewSkill = 0;
  if ( !baseUsrSvtData )
    goto LABEL_57;
  v16 = *(_QWORD *)&baseUsrSvtData->fields.limitCount.fields.currentCryptoKey;
  v15 = *(_QWORD *)&baseUsrSvtData->fields.limitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v61.fields.currentCryptoKey = v16;
  *(_QWORD *)&v61.fields.fakeValue = v15;
  this = (LimitUpResultCheckComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v61, 0LL);
  if ( !v4->fields.baseUsrSvtData )
    goto LABEL_57;
  v17 = (int)this;
  TransformedSkillIdList = UserServantEntity__GetTransformedSkillIdList(
                             v4->fields.baseUsrSvtData,
                             v3,
                             -1,
                             (int32_t)this,
                             1,
                             -1,
                             1,
                             0LL);
  kind = v4->fields.kind;
  v20 = TransformedSkillIdList;
  if ( kind == 19 || kind == 10 )
  {
    this = (LimitUpResultCheckComponent_o *)v4->fields.baseUsrSvtData;
    if ( !this )
      goto LABEL_57;
    LimitCntMax = v17 + 1;
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
      sub_1BCB254(this, *(_QWORD *)&transformIndex);
    v22 = v3;
    v23 = LimitCntMax;
  }
  else
  {
    this = (LimitUpResultCheckComponent_o *)v4->fields.resUsrSvtData;
    if ( !this )
      goto LABEL_57;
    v23 = -1;
    v22 = v3;
  }
  this = (LimitUpResultCheckComponent_o *)UserServantEntity__GetTransformedSkillIdList(
                                            (UserServantEntity_o *)this,
                                            v22,
                                            -1,
                                            v23,
                                            1,
                                            -1,
                                            1,
                                            0LL);
  v25 = this;
  if ( !v20 )
    goto LABEL_57;
  max_length = v20->max_length;
  if ( max_length < 1 )
    return;
  v27 = 0;
  while ( 1 )
  {
    if ( max_length == v27 )
      goto LABEL_56;
    v28 = v27;
    v29 = (char *)v20 + 4 * (int)v27;
    v32 = *((_DWORD *)v29 + 8);
    v30 = (int32_t *)(v29 + 32);
    v31 = v32;
    if ( !this )
      goto LABEL_57;
    if ( v27 >= LODWORD(this->fields.m_CancellationTokenSource) )
      goto LABEL_56;
    v33 = (char *)this + 4 * (int)v27;
    v36 = *((_DWORD *)v33 + 8);
    v35 = (int32_t *)(v33 + 32);
    v34 = v36;
    if ( v31 != v36 && v34 >= 1 )
      break;
    v27 = v28 + 1;
    if ( max_length == v28 + 1 )
      return;
  }
  this = (LimitUpResultCheckComponent_o *)v4->fields.resUsrSvtData;
  if ( !this )
    goto LABEL_57;
  this = (LimitUpResultCheckComponent_o *)UserServantEntity__IsHeroine((UserServantEntity_o *)this, 0LL);
  if ( v31 < 1 || ((unsigned __int8)this & 1) == 0 )
  {
    if ( v28 < LODWORD(v25->fields.m_CancellationTokenSource) )
    {
      LimitUpResultCheckComponent__SetSkillRelease(v4, *v35, v28, v3, v37);
      return;
    }
LABEL_56:
    sub_1BCB25C(this, *(_QWORD *)&transformIndex, v24);
  }
  if ( v28 >= v20->max_length || v28 >= LODWORD(v25->fields.m_CancellationTokenSource) )
    goto LABEL_56;
  v38 = *v30;
  v39 = *v35;
  this = (LimitUpResultCheckComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_57;
  this = (LimitUpResultCheckComponent_o *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)this,
                                            (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !this )
    goto LABEL_57;
  v40 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             v38,
             (const MethodInfo_32C7E00 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  this = (LimitUpResultCheckComponent_o *)DataMasterBase_object__object__int___GetEntity(
                                            v40,
                                            v39,
                                            (const MethodInfo_32C7E00 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( !v4->fields.baseUsrSvtData )
    goto LABEL_57;
  v42 = (SkillEntity_o *)this;
  this = (LimitUpResultCheckComponent_o *)UserServantEntity__getSkillLevel(v4->fields.baseUsrSvtData, v28, 0LL);
  if ( !v4->fields.resUsrSvtData )
    goto LABEL_57;
  v43 = (int)this;
  SkillLevel = UserServantEntity__getSkillLevel(v4->fields.resUsrSvtData, v28, 0LL);
  skillChangeInfoTitle = v4->fields.skillChangeInfoTitle;
  v46 = SkillLevel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (LimitUpResultCheckComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3302/*"CHANGE_SKILL_TITLE"*/, 0LL);
  if ( !skillChangeInfoTitle )
    goto LABEL_57;
  UILabel__set_text(skillChangeInfoTitle, (System_String_o *)this, 0LL);
  skillChangeInfoSubTitleOld = v4->fields.skillChangeInfoSubTitleOld;
  this = (LimitUpResultCheckComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2884/*"BEFORE_CHANGE_SKILL_SUB_TITLE"*/, 0LL);
  if ( !skillChangeInfoSubTitleOld )
    goto LABEL_57;
  UILabel__set_text(skillChangeInfoSubTitleOld, (System_String_o *)this, 0LL);
  skillChangeInfoSubTitleNow = v4->fields.skillChangeInfoSubTitleNow;
  this = (LimitUpResultCheckComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_1919/*"AFTER_CHANGE_SKILL_SUB_TITLE"*/, 0LL);
  if ( !skillChangeInfoSubTitleNow )
    goto LABEL_57;
  UILabel__set_text(skillChangeInfoSubTitleNow, (System_String_o *)this, 0LL);
  if ( !Entity )
    goto LABEL_57;
  SkillEntity__getSkillMessageInfo((SkillEntity_o *)Entity, &name, &detail, v43, 0LL);
  skillChangeInfoNameOld = v4->fields.skillChangeInfoNameOld;
  v50 = LocalizationManager__Get((System_String_o *)StringLiteral_6909/*"GET_SKILL_NAME"*/, 0LL);
  this = (LimitUpResultCheckComponent_o *)System_String__Format(v50, (Il2CppObject *)name, 0LL);
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
  if ( !v42 )
    goto LABEL_57;
  SkillEntity__getSkillMessageInfo(v42, &name, &detail, v46, 0LL);
  skillChangeInfoNameNow = v4->fields.skillChangeInfoNameNow;
  v52 = LocalizationManager__Get((System_String_o *)StringLiteral_6909/*"GET_SKILL_NAME"*/, 0LL);
  this = (LimitUpResultCheckComponent_o *)System_String__Format(v52, (Il2CppObject *)name, 0LL);
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
  v55 = *(_QWORD *)&this->fields.m_CachedPtr;
  v56 = Method_System_Collections_Generic_List_GameObject__Add__;
  ++HIDWORD(this->fields.m_CancellationTokenSource);
  if ( !v55 )
    goto LABEL_57;
  m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v55 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      *(Il2CppObject **)&transformIndex,
      *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
  }
  else
  {
    v58 = v55 + 8 * m_CancellationTokenSource_low;
    LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_QWORD *)(v58 + 32) = *(_QWORD *)&transformIndex;
    sub_1BCAF9C((CGThumbnailListItem_o *)(v58 + 32), transformIndex, v53, v54);
  }
  *(_WORD *)&v4->fields.isGetNewSkill = 257;
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
  __int64 v18; // x21
  Il2CppObject *Master_object; // x23
  GiftMaster_o *LimitCntMax; // x0
  __int64 v21; // x1
  struct UserServantEntity_o *baseUsrSvtData; // x8
  GiftMaster_o *v23; // x22
  __int64 v24; // x24
  __int64 v25; // x25
  struct UserServantEntity_o *v26; // x8
  __int64 v27; // x24
  __int64 v28; // x25
  GiftEntity_o *DataById; // x0
  __int64 v30; // x22
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  System_String_o *v33; // x23
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  Il2CppObject *v37; // x25
  System_String_o *v38; // x24
  Il2CppObject *v39; // x0
  System_String_o *v40; // x24
  Il2CppObject *v41; // x25
  System_Func_object__bool__o *v42; // x26
  bool v43; // w20
  const MethodInfo *v44; // x5
  System_Collections_Generic_List_object__o *resInfoList; // x19
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  struct System_Object_array *items; // x8
  _QWORD *v49; // x9
  __int64 size; // x10
  GiftMaster_o *v51; // x1
  Il2CppClass **v52; // x0
  int v53; // [xsp+4h] [xbp-5Ch] BYREF
  System_String_o *countText; // [xsp+8h] [xbp-58h] BYREF
  System_String_o *nameText; // [xsp+18h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v56; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v57; // 0:x0.16

  if ( (byte_4B2041E & 1) == 0 )
  {
    sub_1BCAFF8(&Method_BasicHelper_Any_int_____, rewardGiftDataList);
    sub_1BCAFF8(&Method_DataManager_GetMaster_CombineLimitGiftMaster___, v5);
    sub_1BCAFF8(&Method_DataManager_GetMaster_GiftMaster___, v6);
    sub_1BCAFF8(&DataManager_TypeInfo, v7);
    sub_1BCAFF8(&System_Func_int____bool__TypeInfo, v8);
    sub_1BCAFF8(&int_TypeInfo, v9);
    sub_1BCAFF8(&Method_LimitUpResultCheckComponent_CreateResultInfoObject_LimitUpResultInfoRewardComponent___, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GameObject__Add__, v11);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v12);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_1BCAFF8(&Method_LimitUpResultCheckComponent___c__DisplayClass45_0__checkLimitUpReward_b__0__, v14);
    sub_1BCAFF8(&LimitUpResultCheckComponent___c__DisplayClass45_0_TypeInfo, v15);
    sub_1BCAFF8(&StringLiteral_6906/*"GET_LIMIT_UP_REWARD_DETAIL"*/, v16);
    sub_1BCAFF8(&StringLiteral_6907/*"GET_LIMIT_UP_REWARD_TITLE"*/, v17);
    byte_4B2041E = 1;
  }
  nameText = 0LL;
  countText = 0LL;
  v18 = sub_1BCB244(LimitUpResultCheckComponent___c__DisplayClass45_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v18, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_CombineLimitGiftMaster___);
  LimitCntMax = (GiftMaster_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_GiftMaster___);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_34;
  v23 = LimitCntMax;
  v25 = *(_QWORD *)&baseUsrSvtData->fields.limitCount.fields.currentCryptoKey;
  v24 = *(_QWORD *)&baseUsrSvtData->fields.limitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v56.fields.currentCryptoKey = v25;
  *(_QWORD *)&v56.fields.fakeValue = v24;
  LimitCntMax = (GiftMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v56, 0LL);
  if ( !v18 )
    goto LABEL_34;
  *(_DWORD *)(v18 + 16) = (_DWORD)LimitCntMax + 1;
  LimitCntMax = (GiftMaster_o *)this->fields.baseUsrSvtData;
  if ( !LimitCntMax )
    goto LABEL_34;
  LimitCntMax = (GiftMaster_o *)UserServantEntity__getLimitCntMax((UserServantEntity_o *)LimitCntMax, 0LL);
  if ( (int)LimitCntMax < *(_DWORD *)(v18 + 16) )
  {
    LimitCntMax = (GiftMaster_o *)this->fields.baseUsrSvtData;
    if ( !LimitCntMax )
      goto LABEL_34;
    LimitCntMax = (GiftMaster_o *)UserServantEntity__getLimitCntMax((UserServantEntity_o *)LimitCntMax, 0LL);
    *(_DWORD *)(v18 + 16) = (_DWORD)LimitCntMax;
  }
  v26 = this->fields.baseUsrSvtData;
  if ( !v26 )
    goto LABEL_34;
  v28 = *(_QWORD *)&v26->fields.svtId.fields.currentCryptoKey;
  v27 = *(_QWORD *)&v26->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v57.fields.currentCryptoKey = v28;
  *(_QWORD *)&v57.fields.fakeValue = v27;
  LimitCntMax = (GiftMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v57, 0LL);
  if ( !Master_object )
    goto LABEL_34;
  LimitCntMax = (GiftMaster_o *)CombineLimitGiftMaster__GetCombineLimitGiftId(
                                  (CombineLimitGiftMaster_o *)Master_object,
                                  (int32_t)LimitCntMax,
                                  *(_DWORD *)(v18 + 16),
                                  0LL);
  if ( !(_DWORD)LimitCntMax )
    return;
  if ( !v23 )
    goto LABEL_34;
  DataById = GiftMaster__getDataById(v23, (int32_t)LimitCntMax, 0LL);
  *(_QWORD *)(v18 + 24) = DataById;
  v30 = v18 + 24;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v18 + 24), (int32_t)DataById, v31, v32);
  if ( !*(_QWORD *)(v18 + 24) )
    return;
  GiftEntity__GetInfo(*(GiftEntity_o **)(v18 + 24), &nameText, &countText, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v33 = LocalizationManager__Get((System_String_o *)StringLiteral_6907/*"GET_LIMIT_UP_REWARD_TITLE"*/, 0LL);
  LimitCntMax = (GiftMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6906/*"GET_LIMIT_UP_REWARD_DETAIL"*/, 0LL);
  if ( !*(_QWORD *)v30 )
    goto LABEL_34;
  v37 = (Il2CppObject *)nameText;
  v38 = (System_String_o *)LimitCntMax;
  v53 = *(_DWORD *)(*(_QWORD *)v30 + 28LL);
  v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v53, v34, v35, v36);
  v40 = System_String__Format_62491716(v38, v37, v39, 0LL);
  v41 = LimitUpResultCheckComponent__CreateResultInfoObject_object_(
          this,
          (Il2CppObject *)this->fields.limitUpResultInfoRewardOrigin,
          (const MethodInfo_30978D4 *)Method_LimitUpResultCheckComponent_CreateResultInfoObject_LimitUpResultInfoRewardComponent___);
  if ( rewardGiftDataList )
  {
    v42 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_int____bool__TypeInfo);
    System_Func_object__bool____ctor(
      v42,
      (Il2CppObject *)v18,
      Method_LimitUpResultCheckComponent___c__DisplayClass45_0__checkLimitUpReward_b__0__,
      0LL);
    v43 = !BasicHelper__Any_object_(
             (System_Collections_Generic_List_T__o *)rewardGiftDataList,
             (System_Func_T__bool__o *)v42,
             (const MethodInfo_3003F1C *)Method_BasicHelper_Any_int_____);
  }
  else
  {
    v43 = 1;
  }
  LimitCntMax = *(GiftMaster_o **)v30;
  if ( !*(_QWORD *)v30
    || (LimitCntMax = (GiftMaster_o *)GiftEntity__getIconImageId((GiftEntity_o *)LimitCntMax, 0LL), !v41)
    || (LimitUpResultInfoRewardComponent__Setup(
          (LimitUpResultInfoRewardComponent_o *)v41,
          (int32_t)LimitCntMax,
          v43,
          v33,
          v40,
          v44),
        resInfoList = (System_Collections_Generic_List_object__o *)this->fields.resInfoList,
        LimitCntMax = (GiftMaster_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v41, 0LL),
        !resInfoList)
    || (items = resInfoList->fields._items,
        v49 = Method_System_Collections_Generic_List_GameObject__Add__,
        ++resInfoList->fields._version,
        !items) )
  {
LABEL_34:
    sub_1BCB254(LimitCntMax, v21);
  }
  size = resInfoList->fields._size;
  v51 = LimitCntMax;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      resInfoList,
      (Il2CppObject *)LimitCntMax,
      *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
  }
  else
  {
    v52 = &items->obj.klass + size;
    resInfoList->fields._size = size + 1;
    v52[4] = (Il2CppClass *)v51;
    sub_1BCAF9C((CGThumbnailListItem_o *)(v52 + 4), (int32_t)v51, v46, v47);
  }
}


void __fastcall LimitUpResultCheckComponent__checkQuestOpen(
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
  __int64 v12; // x1
  System_Collections_Generic_List_int__o *v13; // x0
  __int64 v14; // x1
  int32_t svtCollectionLimitCnt; // w8
  UserServantEntity_o *baseUsrSvtData; // x0
  int32_t LimitCntMax; // w20
  struct UserServantEntity_o *resUsrSvtData; // x8
  clsQuestCheck_o *v19; // x21
  __int64 v20; // x22
  __int64 v21; // x23
  System_Collections_Generic_List_int__o *v22; // x0
  struct UserServantEntity_o *v23; // x8
  clsQuestCheck_o *v24; // x20
  __int64 v25; // x21
  __int64 v26; // x22
  System_Collections_Generic_List_int__o *v27; // x20
  UILabel_o *storyQuestInfoTitle; // x21
  UILabel_o *heroQuestInfoTitle; // x21
  int32_t v30; // w21
  int32_t Item; // w0
  const MethodInfo *v32; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16

  if ( (byte_4B2041A & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int___ctor__, v3);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__get_Count__, v4);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__get_Item__, v5);
    sub_1BCAFF8(&System_Collections_Generic_List_int__TypeInfo, v6);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v7);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_1BCAFF8(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v10);
    sub_1BCAFF8(&StringLiteral_9578/*"OPEN_STORY_QUEST_TITLE"*/, v11);
    sub_1BCAFF8(&StringLiteral_9567/*"OPEN_HERO_QUEST_TITLE"*/, v12);
    byte_4B2041A = 1;
  }
  this->fields.isOpenQuest = 0;
  v13 = (System_Collections_Generic_List_int__o *)sub_1BCB244(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v13,
    (const MethodInfo_369C358 *)Method_System_Collections_Generic_List_int___ctor__);
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
      baseUsrSvtData = (UserServantEntity_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38F8EF8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
      resUsrSvtData = this->fields.resUsrSvtData;
      if ( !resUsrSvtData )
        goto LABEL_31;
      v19 = (clsQuestCheck_o *)baseUsrSvtData;
      v21 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
      v20 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v33.fields.currentCryptoKey = v21;
      *(_QWORD *)&v33.fields.fakeValue = v20;
      baseUsrSvtData = (UserServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(
                                                v33,
                                                0LL);
      if ( !v19 )
LABEL_31:
        sub_1BCB254(baseUsrSvtData, v14);
      v22 = clsQuestCheck__GetReleaseQuestIdByServantLimit_35192836(
              v19,
              (int32_t)baseUsrSvtData,
              this->fields.svtCollectionLimitCnt,
              LimitCntMax,
              494,
              0LL);
    }
    else
    {
      baseUsrSvtData = (UserServantEntity_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38F8EF8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
      v23 = this->fields.resUsrSvtData;
      if ( !v23 )
        goto LABEL_31;
      v24 = (clsQuestCheck_o *)baseUsrSvtData;
      v26 = *(_QWORD *)&v23->fields.svtId.fields.currentCryptoKey;
      v25 = *(_QWORD *)&v23->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v34.fields.currentCryptoKey = v26;
      *(_QWORD *)&v34.fields.fakeValue = v25;
      baseUsrSvtData = (UserServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(
                                                v34,
                                                0LL);
      if ( !v24 )
        goto LABEL_31;
      v22 = clsQuestCheck__GetReleaseQuestIdByServantLimit(
              v24,
              (int32_t)baseUsrSvtData,
              this->fields.svtCollectionLimitCnt,
              0LL);
    }
    v27 = v22;
    storyQuestInfoTitle = this->fields.storyQuestInfoTitle;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    baseUsrSvtData = (UserServantEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9578/*"OPEN_STORY_QUEST_TITLE"*/, 0LL);
    if ( storyQuestInfoTitle )
    {
      UILabel__set_text(storyQuestInfoTitle, (System_String_o *)baseUsrSvtData, 0LL);
      heroQuestInfoTitle = this->fields.heroQuestInfoTitle;
      baseUsrSvtData = (UserServantEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9567/*"OPEN_HERO_QUEST_TITLE"*/, 0LL);
      if ( heroQuestInfoTitle )
      {
        UILabel__set_text(heroQuestInfoTitle, (System_String_o *)baseUsrSvtData, 0LL);
        baseUsrSvtData = (UserServantEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( baseUsrSvtData )
        {
          DataManager__GetMasterData_object_(
            (DataManager_o *)baseUsrSvtData,
            (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
          if ( v27 && v27->fields._size >= 1 )
          {
            v30 = 0;
            do
            {
              if ( System_Collections_Generic_List_int___get_Item(
                     v27,
                     v30,
                     (const MethodInfo_369C8BC *)Method_System_Collections_Generic_List_int__get_Item__) >= 1 )
              {
                Item = System_Collections_Generic_List_int___get_Item(
                         v27,
                         v30,
                         (const MethodInfo_369C8BC *)Method_System_Collections_Generic_List_int__get_Item__);
                LimitUpResultCheckComponent__SetResInfoListQuestInfo(this, Item, v32);
              }
              ++v30;
            }
            while ( v30 < v27->fields._size );
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
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  struct UserServantEntity_o **p_resUsrSvtData; // x21
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  System_Collections_Generic_List_object__o *v21; // x22
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  __int64 v24; // x1
  UserServantEntity_o *resUsrSvtData; // x0
  struct UserServantEntity_o *v26; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v27; // x21
  __int64 v28; // x22
  __int64 v29; // x23
  const MethodInfo *v30; // x1
  const MethodInfo *v31; // x2
  int32_t v32; // w21
  const MethodInfo *v33; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16

  if ( (byte_4B20417 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_ServantMaster___, *(_QWORD *)&kind);
    sub_1BCAFF8(&DataManager_TypeInfo, v13);
    sub_1BCAFF8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v14);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GameObject___ctor__, v15);
    sub_1BCAFF8(&System_Collections_Generic_List_GameObject__TypeInfo, v16);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
    byte_4B20417 = 1;
  }
  this->fields.baseUsrSvtData = baseData;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)baseData,
    (int32_t)baseData,
    (const MethodInfo *)resData);
  p_resUsrSvtData = &this->fields.resUsrSvtData;
  this->fields.resUsrSvtData = resData;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.resUsrSvtData, (int32_t)resData, v19, v20);
  this->fields.svtCollectionLimitCnt = baseCollectionLimitCnt;
  this->fields.kind = kind;
  v21 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.resInfoList = (struct System_Collections_Generic_List_GameObject__o *)v21;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.resInfoList, (int32_t)v21, v22, v23);
  *(_WORD *)&this->fields.isGetNewSkill = 0;
  this->fields.isOpenQuest = 0;
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_17;
  this->fields.transformationCount = UserServantEntity__GetTransformCount(resUsrSvtData, 1, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  resUsrSvtData = (UserServantEntity_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ServantMaster___);
  v26 = *p_resUsrSvtData;
  if ( !*p_resUsrSvtData )
    goto LABEL_17;
  v27 = (DataMasterBase_TMaster__TEntity__PKType__o *)resUsrSvtData;
  v29 = *(_QWORD *)&v26->fields.svtId.fields.currentCryptoKey;
  v28 = *(_QWORD *)&v26->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v34.fields.currentCryptoKey = v29;
  *(_QWORD *)&v34.fields.fakeValue = v28;
  resUsrSvtData = (UserServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v34, 0LL);
  if ( !v27
    || (resUsrSvtData = (UserServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                                 v27,
                                                 (int32_t)resUsrSvtData,
                                                 (const MethodInfo_32C7E00 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_17:
    sub_1BCB254(resUsrSvtData, v24);
  }
  if ( ServantEntity__get_IsServant((ServantEntity_o *)resUsrSvtData, 0LL) )
  {
    if ( this->fields.transformationCount >= 1 )
    {
      v32 = 0;
      do
        LimitUpResultCheckComponent__checkGetSkill(this, v32++, v31);
      while ( v32 < this->fields.transformationCount );
    }
    LimitUpResultCheckComponent__checkQuestOpen(this, v30);
    LimitUpResultCheckComponent__checkLimitUpReward(this, rewardGiftDataList, v33);
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
    sub_1BCB25C(this, data, method);
  if ( data->m_Items[1] == this->fields.afterLimitCnt )
  {
    if ( max_length > 1 )
    {
      giftEntity = this->fields.giftEntity;
      if ( giftEntity )
        return data->m_Items[2] == giftEntity->fields.id;
LABEL_9:
      sub_1BCB254(this, data);
    }
    goto LABEL_8;
  }
  return 0;
}