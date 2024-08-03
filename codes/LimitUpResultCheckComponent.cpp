void __fastcall LimitUpResultCheckComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct LimitUpResultCheckComponent_StaticFields *static_fields; // x8

  if ( (byte_49FFC8F & 1) == 0 )
  {
    sub_1B640C8(&LimitUpResultCheckComponent_TypeInfo, v1);
    byte_49FFC8F = 1;
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

  if ( (byte_49FFC89 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__get_Count__, method);
    byte_49FFC89 = 1;
  }
  resInfoList = this->fields.resInfoList;
  return !resInfoList || resInfoList->fields._size <= 0;
}


Il2CppObject *__fastcall LimitUpResultCheckComponent__CreateResultInfoObject_object_(
        LimitUpResultCheckComponent_o *this,
        Il2CppObject *origin,
        const MethodInfo_2EB01E0 *method)
{
  UnityEngine_Component_o *v5; // x21
  UnityEngine_Transform_o *transform; // x0

  v5 = (UnityEngine_Component_o *)this;
  if ( !method->rgctx_data )
    this = (LimitUpResultCheckComponent_o *)sub_1BB6000();
  if ( !v5 || (this = (LimitUpResultCheckComponent_o *)UnityEngine_Component__get_gameObject(v5, 0LL)) == 0LL )
    sub_1B64324(this);
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  return BaseMonoBehaviour__createObject_object_(
           (BaseMonoBehaviour_o *)v5,
           origin,
           transform,
           0LL,
           (const MethodInfo_2E24124 *)method->rgctx_data->_1_BaseMonoBehaviour_createObject_T_);
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
  System_Collections_Generic_List_object__o *v20; // x22
  const MethodInfo *v21; // x4
  const MethodInfo *v22; // x6
  int32_t v23; // w25
  int32_t v24; // w2
  int32_t v25; // w3
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  OpenInfoWindowComponent_o *v29; // x1
  Il2CppClass **v30; // x0
  OpenInfoWindowComponent_o *v31; // x21
  _BOOL4 isGetNewSkill; // w8
  int32_t monitor; // w4
  bool v34; // w5

  if ( (byte_49FFC88 & 1) == 0 )
  {
    sub_1B640C8(&LimitUpResultCheckComponent_TypeInfo, callback);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__RemoveAt__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject___ctor__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__get_Count__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__get_Item__, v11);
    sub_1B640C8(&System_Collections_Generic_List_GameObject__TypeInfo, v12);
    byte_49FFC88 = 1;
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
  v17 = LimitUpResultCheckComponent_TypeInfo;
  if ( !LimitUpResultCheckComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LimitUpResultCheckComponent_TypeInfo);
    v17 = LimitUpResultCheckComponent_TypeInfo;
  }
  CONCURRENTLY_DISP_NUM = v17->static_fields->CONCURRENTLY_DISP_NUM;
  if ( !this->fields.isChangeSkill )
  {
    openInfowindowComp = (OpenInfoWindowComponent_o *)this->fields.resUsrSvtData;
    if ( !openInfowindowComp )
      goto LABEL_40;
    if ( UserServantEntity__isLimitCountMax((UserServantEntity_o *)openInfowindowComp, 0LL) )
    {
      v19 = LimitUpResultCheckComponent_TypeInfo;
      if ( !LimitUpResultCheckComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LimitUpResultCheckComponent_TypeInfo);
        v19 = LimitUpResultCheckComponent_TypeInfo;
      }
      CONCURRENTLY_DISP_NUM = v19->static_fields->CONCURRENTLY_DISP_NUM_BY_LIMIT_MAX;
    }
  }
  v20 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_GameObject__TypeInfo,
                                                       v15,
                                                       v16);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  openInfowindowComp = (OpenInfoWindowComponent_o *)this->fields.resInfoList;
  if ( !openInfowindowComp )
LABEL_40:
    sub_1B64324(openInfowindowComp);
  v23 = 0;
  while ( SLODWORD(openInfowindowComp->fields.m_CancellationTokenSource) > 0
       && v23 < CONCURRENTLY_DISP_NUM
       && (v23 == 0 || !this->fields.isChangeSkill) )
  {
    openInfowindowComp = (OpenInfoWindowComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                        (System_Collections_Generic_List_object__o *)openInfowindowComp,
                                                        0,
                                                        (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( v20 )
    {
      items = v20->fields._items;
      v27 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++v20->fields._version;
      if ( items )
      {
        size = v20->fields._size;
        v29 = openInfowindowComp;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v20,
            (Il2CppObject *)openInfowindowComp,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
        }
        else
        {
          v30 = &items->obj.klass + size;
          v20->fields._size = size + 1;
          v30[4] = (Il2CppClass *)v29;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v30 + 4), (int32_t)v29, v24, v25);
        }
        openInfowindowComp = (OpenInfoWindowComponent_o *)this->fields.resInfoList;
        if ( openInfowindowComp )
        {
          System_Collections_Generic_List_object___RemoveAt(
            (System_Collections_Generic_List_object__o *)openInfowindowComp,
            0,
            (const MethodInfo_34AEF48 *)Method_System_Collections_Generic_List_GameObject__RemoveAt__);
          openInfowindowComp = (OpenInfoWindowComponent_o *)this->fields.resInfoList;
          ++v23;
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
        (System_Collections_Generic_List_GameObject__o *)v20,
        callback,
        isFirstDisp,
        v21);
      return;
    }
    goto LABEL_40;
  }
  if ( this->fields.transformationCount > 1 )
  {
    isGetNewSkill = this->fields.isGetNewSkill;
    v31 = this->fields.openInfowindowComp;
    if ( isGetNewSkill )
    {
      monitor = 125;
      v34 = 1;
      goto LABEL_38;
    }
  }
  else
  {
    v31 = this->fields.openInfowindowComp;
  }
  openInfowindowComp = (OpenInfoWindowComponent_o *)LimitUpResultCheckComponent_TypeInfo;
  if ( !LimitUpResultCheckComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LimitUpResultCheckComponent_TypeInfo);
    openInfowindowComp = (OpenInfoWindowComponent_o *)LimitUpResultCheckComponent_TypeInfo;
  }
  v34 = 0;
  monitor = (int32_t)openInfowindowComp[1].fields.basePanel->monitor;
LABEL_38:
  if ( !v31 )
    goto LABEL_40;
  OpenInfoWindowComponent__OpenLimitUpResultInfo(
    v31,
    (System_Collections_Generic_List_GameObject__o *)v20,
    callback,
    isFirstDisp,
    monitor,
    v34,
    v22);
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
      sub_1B64324(openInfowindowComp);
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
  DataMasterBase_TMaster__TEntity__PKType__o *v21; // x20
  System_String_o *v22; // x23
  System_String_o *v23; // x22
  System_String_o *v24; // x0
  __int64 *v25; // x21
  bool IsLimitCountSealQuest; // w21
  System_String_o **v27; // x8
  Il2CppObject *Value; // x21
  System_String_o *v29; // x0
  System_String_o *v30; // x0
  UnityEngine_Component_o *v31; // x20
  System_Collections_Generic_List_object__o *resInfoList; // x19
  int32_t v33; // w2
  int32_t v34; // w3
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  DataMasterBase_TMaster__TEntity__PKType__o *v38; // x1
  Il2CppClass **v39; // x0

  if ( (byte_49FFC8B & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_ConstantStrMaster___, *(_QWORD *)&questId);
    sub_1B640C8(&Method_DataManager_GetMaster_QuestMaster___, v5);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v6);
    sub_1B640C8(&DataManager_TypeInfo, v7);
    sub_1B640C8(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v8);
    sub_1B640C8(&Method_LimitUpResultCheckComponent_CreateResultInfoObject_LimitUpResultInfoComponent___, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__Add__, v10);
    sub_1B640C8(&LocalizationManager_TypeInfo, v11);
    sub_1B640C8(&StringLiteral_9599/*"OPEN_MAIN_SCENARIO_TITLE"*/, v12);
    sub_1B640C8(&StringLiteral_9605/*"OPEN_STORY_QUEST_TITLE_LIMIT_UP"*/, v13);
    sub_1B640C8(&StringLiteral_9596/*"OPEN_LIMIT_UNSEALED_QUEST_NAME_LIMIT_UP"*/, v14);
    sub_1B640C8(&StringLiteral_9597/*"OPEN_LIMIT_UNSEALED_QUEST_TITLE_LIMIT_UP"*/, v15);
    sub_1B640C8(&StringLiteral_9591/*"OPEN_EVENT_QUEST_NAME_LIMIT_UP"*/, v16);
    sub_1B640C8(&StringLiteral_9592/*"OPEN_EVENT_QUEST_TITLE_LIMIT_UP"*/, v17);
    sub_1B640C8(&StringLiteral_9598/*"OPEN_MAIN_QUEST_TITLE_LIMIT_UP"*/, v18);
    byte_49FFC8B = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  Entity = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !Entity )
    goto LABEL_43;
  Entity = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                           Entity,
                                                           questId,
                                                           (const MethodInfo_30D3EA4 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( !Entity )
    goto LABEL_43;
  v21 = Entity;
  v22 = 0LL;
  v23 = 0LL;
  switch ( LODWORD(Entity->fields._lookup) )
  {
    case 1:
    case 2:
      if ( !Master_object )
        goto LABEL_43;
      if ( ServantLimitImageMaster__IsLimitCountSealQuest((ServantLimitImageMaster_o *)Master_object, questId, 0LL) )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v24 = LocalizationManager__Get((System_String_o *)StringLiteral_9597/*"OPEN_LIMIT_UNSEALED_QUEST_TITLE_LIMIT_UP"*/, 0LL);
        v25 = &StringLiteral_9596/*"OPEN_LIMIT_UNSEALED_QUEST_NAME_LIMIT_UP"*/;
      }
      else
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Entity = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ConstantStrMaster___);
        if ( !Entity )
          goto LABEL_43;
        Value = (Il2CppObject *)ConstantStrMaster__GetValue(
                                  (ConstantStrMaster_o *)Entity,
                                  (System_String_o *)StringLiteral_9599/*"OPEN_MAIN_SCENARIO_TITLE"*/,
                                  0LL);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v29 = LocalizationManager__Get((System_String_o *)StringLiteral_9598/*"OPEN_MAIN_QUEST_TITLE_LIMIT_UP"*/, 0LL);
        v24 = System_String__Format(v29, Value, 0LL);
LABEL_31:
        v25 = &StringLiteral_9591/*"OPEN_EVENT_QUEST_NAME_LIMIT_UP"*/;
      }
LABEL_32:
      v23 = v24;
      v30 = LocalizationManager__Get((System_String_o *)*v25, 0LL);
      v22 = System_String__Format(v30, (Il2CppObject *)v21->fields._MasterName_k__BackingField, 0LL);
      this->fields.isOpenQuest = 1;
LABEL_33:
      if ( !System_String__IsNullOrEmpty(v23, 0LL) && !System_String__IsNullOrEmpty(v22, 0LL) )
      {
        Entity = (DataMasterBase_TMaster__TEntity__PKType__o *)LimitUpResultCheckComponent__CreateResultInfoObject_object_(
                                                                 this,
                                                                 (Il2CppObject *)this->fields.limitUpResultInfoStoryOrigin,
                                                                 (const MethodInfo_2EB01E0 *)Method_LimitUpResultCheckComponent_CreateResultInfoObject_LimitUpResultInfoComponent___);
        if ( Entity )
        {
          v31 = (UnityEngine_Component_o *)Entity;
          ((void (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *, System_String_o *, System_String_o *, Il2CppMethodPointer))Entity->klass->vtable._4_getList.method)(
            Entity,
            v23,
            v22,
            Entity->klass->vtable._5_ForForceDerived.methodPtr);
          resInfoList = (System_Collections_Generic_List_object__o *)this->fields.resInfoList;
          Entity = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(v31, 0LL);
          if ( resInfoList )
          {
            items = resInfoList->fields._items;
            v36 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++resInfoList->fields._version;
            if ( items )
            {
              size = resInfoList->fields._size;
              v38 = Entity;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  resInfoList,
                  (Il2CppObject *)Entity,
                  *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
              }
              else
              {
                resInfoList->fields._size = size + 1;
                v39 = &items->obj.klass + size;
                v39[4] = (Il2CppClass *)v38;
                sub_1B6406C((ServantStatusBattleListViewItem_o *)(v39 + 4), (int32_t)v38, v33, v34);
              }
              return;
            }
          }
        }
LABEL_43:
        sub_1B64324(Entity);
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
      v27 = (System_String_o **)&StringLiteral_9597/*"OPEN_LIMIT_UNSEALED_QUEST_TITLE_LIMIT_UP"*/;
      if ( !IsLimitCountSealQuest )
        v27 = (System_String_o **)&StringLiteral_9605/*"OPEN_STORY_QUEST_TITLE_LIMIT_UP"*/;
      if ( IsLimitCountSealQuest )
        v25 = &StringLiteral_9596/*"OPEN_LIMIT_UNSEALED_QUEST_NAME_LIMIT_UP"*/;
      else
        v25 = &StringLiteral_9591/*"OPEN_EVENT_QUEST_NAME_LIMIT_UP"*/;
      v24 = LocalizationManager__Get(*v27, 0LL);
      goto LABEL_32;
    case 4:
      goto LABEL_33;
    case 5:
    case 6:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v24 = LocalizationManager__Get((System_String_o *)StringLiteral_9592/*"OPEN_EVENT_QUEST_TITLE_LIMIT_UP"*/, 0LL);
      goto LABEL_31;
    default:
      v23 = 0LL;
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
  Il2CppObject *Entity; // x24
  System_String_o *v21; // x23
  System_String_o *v22; // x0
  System_String_o *v23; // x24
  struct UserServantEntity_o *resUsrSvtData; // x8
  ServantSkillMaster_o *v25; // x25
  __int64 v26; // x26
  __int64 v27; // x27
  ServantSkillEntity_o *EntityFromSkillId; // x0
  __int64 v29; // x8
  ServantSkillEntity_o *v30; // x25
  const MethodInfo *v31; // x6
  LimitUpResultInfoSkillComponent_o *v32; // x22
  const MethodInfo *v33; // x2
  bool v34; // w1
  struct System_Collections_Generic_List_GameObject__o *resInfoList; // x8
  System_Collections_Generic_List_object__o *v36; // x20
  int32_t v37; // w2
  int32_t v38; // w3
  struct System_Object_array *items; // x8
  _QWORD *v40; // x9
  __int64 size; // x10
  DataMasterBase_TMaster__TEntity__PKType__o *v42; // x1
  Il2CppClass **v43; // x0
  TransformServantInfo_o *transformInfo; // [xsp+8h] [xbp-68h] BYREF
  System_String_o *detail; // [xsp+10h] [xbp-60h] BYREF
  System_String_o *name; // [xsp+18h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16

  if ( (byte_49FFC8D & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_ServantSkillMaster___, *(_QWORD *)&skillId);
    sub_1B640C8(&Method_DataManager_GetMaster_SkillMaster___, v9);
    sub_1B640C8(&DataManager_TypeInfo, v10);
    sub_1B640C8(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v11);
    sub_1B640C8(&Method_LimitUpResultCheckComponent_CreateResultInfoObject_LimitUpResultInfoSkillComponent___, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__Add__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__get_Count__, v14);
    sub_1B640C8(&LocalizationManager_TypeInfo, v15);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
    sub_1B640C8(&StringLiteral_6895/*"GET_SKILL_TITLE"*/, v17);
    sub_1B640C8(&StringLiteral_6894/*"GET_SKILL_NAME_LIMIT_UP"*/, v18);
    byte_49FFC8D = 1;
  }
  detail = 0LL;
  name = 0LL;
  transformInfo = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_SkillMaster___);
  if ( !Master_object )
    goto LABEL_33;
  Entity = DataMasterBase_object__object__int___GetEntity(
             Master_object,
             skillId,
             (const MethodInfo_30D3EA4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager__Get(
                                                                  (System_String_o *)StringLiteral_6895/*"GET_SKILL_TITLE"*/,
                                                                  0LL);
  if ( !this->fields.resUsrSvtData )
    goto LABEL_33;
  v21 = (System_String_o *)Master_object;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UserServantEntity__getSkillLevel(
                                                                  this->fields.resUsrSvtData,
                                                                  targetIdx,
                                                                  0LL);
  if ( !Entity )
    goto LABEL_33;
  SkillEntity__getSkillMessageInfo((SkillEntity_o *)Entity, &name, &detail, (int32_t)Master_object, 0LL);
  v22 = LocalizationManager__Get((System_String_o *)StringLiteral_6894/*"GET_SKILL_NAME_LIMIT_UP"*/, 0LL);
  v23 = System_String__Format(v22, (Il2CppObject *)name, 0LL);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantSkillMaster___);
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_33;
  v25 = (ServantSkillMaster_o *)Master_object;
  v27 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v26 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v47.fields.currentCryptoKey = v27;
  *(_QWORD *)&v47.fields.fakeValue = v26;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                                                  v47,
                                                                  0LL);
  if ( !v25 )
    goto LABEL_33;
  EntityFromSkillId = ServantSkillMaster__getEntityFromSkillId(v25, (int32_t)Master_object, targetIdx + 1, skillId, 0LL);
  v29 = this->fields.transformationCount <= 1 ? 128LL : 136LL;
  v30 = EntityFromSkillId;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)LimitUpResultCheckComponent__CreateResultInfoObject_object_(
                                                                  this,
                                                                  *(Il2CppObject **)((char *)&this->klass + v29),
                                                                  (const MethodInfo_2EB01E0 *)Method_LimitUpResultCheckComponent_CreateResultInfoObject_LimitUpResultInfoSkillComponent___);
  if ( !Master_object )
    goto LABEL_33;
  v32 = (LimitUpResultInfoSkillComponent_o *)Master_object;
  LimitUpResultInfoSkillComponent__Setup(
    (LimitUpResultInfoSkillComponent_o *)Master_object,
    skillId,
    v23,
    v30,
    v21,
    detail,
    v31);
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
    || (Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v32->fields.battleNameLabel) == 0LL )
  {
LABEL_33:
    sub_1B64324(Master_object);
  }
  UILabel__set_text((UILabel_o *)Master_object, transformInfo->fields.titleText, 0LL);
  if ( this->fields.transformationCount >= 2 )
  {
    resInfoList = this->fields.resInfoList;
    if ( !resInfoList )
      goto LABEL_33;
    v34 = resInfoList->fields._size < 1;
  }
  else
  {
    v34 = 0;
  }
  LimitUpResultInfoSkillComponent__SetTitleDisp(v32, v34, v33);
LABEL_27:
  v36 = (System_Collections_Generic_List_object__o *)this->fields.resInfoList;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)v32,
                                                                  0LL);
  if ( !v36 )
    goto LABEL_33;
  items = v36->fields._items;
  v40 = Method_System_Collections_Generic_List_GameObject__Add__;
  ++v36->fields._version;
  if ( !items )
    goto LABEL_33;
  size = v36->fields._size;
  v42 = Master_object;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v36,
      (Il2CppObject *)Master_object,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
  }
  else
  {
    v43 = &items->obj.klass + size;
    v36->fields._size = size + 1;
    v43[4] = (Il2CppClass *)v42;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v43 + 4), (int32_t)v42, v37, v38);
  }
  this->fields.isGetNewSkill = 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall LimitUpResultCheckComponent__checkGetSkill(
        LimitUpResultCheckComponent_o *this,
        int32_t transformIndex,
        const MethodInfo *method)
{
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
  __int64 v24; // x1
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
  int32_t v54; // w3
  Il2CppObject *skillChangeInfo; // x1
  __int64 v56; // x8
  _QWORD *v57; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v59; // x8
  System_String_o *detail; // [xsp+8h] [xbp-58h] BYREF
  System_String_o *name; // [xsp+18h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v62; // 0:x0.16

  v4 = this;
  if ( (byte_49FFC8C & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_SkillMaster___, *(_QWORD *)&transformIndex);
    sub_1B640C8(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__Add__, v6);
    sub_1B640C8(&LocalizationManager_TypeInfo, v7);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_1B640C8(&StringLiteral_6893/*"GET_SKILL_NAME"*/, v10);
    sub_1B640C8(&StringLiteral_2055/*"AFTER_CHANGE_SKILL_SUB_TITLE"*/, v11);
    sub_1B640C8(&StringLiteral_3417/*"CHANGE_SKILL_TITLE"*/, v12);
    this = (LimitUpResultCheckComponent_o *)sub_1B640C8(&StringLiteral_2988/*"BEFORE_CHANGE_SKILL_SUB_TITLE"*/, v13);
    byte_49FFC8C = 1;
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
  *(_QWORD *)&v62.fields.currentCryptoKey = v16;
  *(_QWORD *)&v62.fields.fakeValue = v15;
  this = (LimitUpResultCheckComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v62, 0LL);
  if ( !v4->fields.baseUsrSvtData )
    goto LABEL_57;
  v17 = (int)this;
  TransformedSkillIdList = UserServantEntity__GetTransformedSkillIdList(
                             v4->fields.baseUsrSvtData,
                             transformIndex,
                             -1,
                             (int32_t)this,
                             1,
                             -1,
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
      sub_1B64324(this);
    v22 = transformIndex;
    v23 = LimitCntMax;
  }
  else
  {
    this = (LimitUpResultCheckComponent_o *)v4->fields.resUsrSvtData;
    if ( !this )
      goto LABEL_57;
    v23 = -1;
    v22 = transformIndex;
  }
  this = (LimitUpResultCheckComponent_o *)UserServantEntity__GetTransformedSkillIdList(
                                            (UserServantEntity_o *)this,
                                            v22,
                                            -1,
                                            v23,
                                            1,
                                            -1,
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
      LimitUpResultCheckComponent__SetSkillRelease(v4, *v35, v28, transformIndex, v37);
      return;
    }
LABEL_56:
    sub_1B6432C(this, v24);
  }
  if ( v28 >= v20->max_length || v28 >= LODWORD(v25->fields.m_CancellationTokenSource) )
    goto LABEL_56;
  v38 = *v30;
  v39 = *v35;
  this = (LimitUpResultCheckComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_57;
  this = (LimitUpResultCheckComponent_o *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)this,
                                            (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !this )
    goto LABEL_57;
  v40 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             v38,
             (const MethodInfo_30D3EA4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  this = (LimitUpResultCheckComponent_o *)DataMasterBase_object__object__int___GetEntity(
                                            v40,
                                            v39,
                                            (const MethodInfo_30D3EA4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
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
  this = (LimitUpResultCheckComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3417/*"CHANGE_SKILL_TITLE"*/, 0LL);
  if ( !skillChangeInfoTitle )
    goto LABEL_57;
  UILabel__set_text(skillChangeInfoTitle, (System_String_o *)this, 0LL);
  skillChangeInfoSubTitleOld = v4->fields.skillChangeInfoSubTitleOld;
  this = (LimitUpResultCheckComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2988/*"BEFORE_CHANGE_SKILL_SUB_TITLE"*/, 0LL);
  if ( !skillChangeInfoSubTitleOld )
    goto LABEL_57;
  UILabel__set_text(skillChangeInfoSubTitleOld, (System_String_o *)this, 0LL);
  skillChangeInfoSubTitleNow = v4->fields.skillChangeInfoSubTitleNow;
  this = (LimitUpResultCheckComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2055/*"AFTER_CHANGE_SKILL_SUB_TITLE"*/, 0LL);
  if ( !skillChangeInfoSubTitleNow )
    goto LABEL_57;
  UILabel__set_text(skillChangeInfoSubTitleNow, (System_String_o *)this, 0LL);
  if ( !Entity )
    goto LABEL_57;
  SkillEntity__getSkillMessageInfo((SkillEntity_o *)Entity, &name, &detail, v43, 0LL);
  skillChangeInfoNameOld = v4->fields.skillChangeInfoNameOld;
  v50 = LocalizationManager__Get((System_String_o *)StringLiteral_6893/*"GET_SKILL_NAME"*/, 0LL);
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
                                            0,
                                            0LL);
  if ( !v42 )
    goto LABEL_57;
  SkillEntity__getSkillMessageInfo(v42, &name, &detail, v46, 0LL);
  skillChangeInfoNameNow = v4->fields.skillChangeInfoNameNow;
  v52 = LocalizationManager__Get((System_String_o *)StringLiteral_6893/*"GET_SKILL_NAME"*/, 0LL);
  this = (LimitUpResultCheckComponent_o *)System_String__Format(v52, (Il2CppObject *)name, 0LL);
  if ( !skillChangeInfoNameNow )
    goto LABEL_57;
  UILabel__set_text(skillChangeInfoNameNow, (System_String_o *)this, 0LL);
  this = (LimitUpResultCheckComponent_o *)v4->fields.skillChangeInfoDetailNow;
  if ( !this )
    goto LABEL_57;
  WrapControlText__textBBCodeAdjust((UILabel_o *)this, detail, (int32_t)this[1].fields.skillChangeInfoTitle, 0, 0, 0LL);
  this = (LimitUpResultCheckComponent_o *)v4->fields.resInfoList;
  if ( !this )
    goto LABEL_57;
  skillChangeInfo = (Il2CppObject *)v4->fields.skillChangeInfo;
  v56 = *(_QWORD *)&this->fields.m_CachedPtr;
  v57 = Method_System_Collections_Generic_List_GameObject__Add__;
  ++HIDWORD(this->fields.m_CancellationTokenSource);
  if ( !v56 )
    goto LABEL_57;
  m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v56 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      skillChangeInfo,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
  }
  else
  {
    v59 = v56 + 8 * m_CancellationTokenSource_low;
    LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_QWORD *)(v59 + 32) = skillChangeInfo;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v59 + 32), (int32_t)skillChangeInfo, v53, v54);
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
  struct UserServantEntity_o *baseUsrSvtData; // x8
  GiftMaster_o *v22; // x22
  __int64 v23; // x24
  __int64 v24; // x25
  struct UserServantEntity_o *v25; // x8
  __int64 v26; // x24
  __int64 v27; // x25
  GiftEntity_o *DataById; // x0
  __int64 v29; // x22
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x23
  Il2CppObject *v33; // x25
  System_String_o *v34; // x24
  Il2CppObject *v35; // x0
  System_String_o *v36; // x24
  __int64 v37; // x1
  __int64 v38; // x2
  Il2CppObject *v39; // x25
  System_Func_object__bool__o *v40; // x26
  bool v41; // w20
  const MethodInfo *v42; // x5
  System_Collections_Generic_List_object__o *resInfoList; // x19
  int32_t v44; // w2
  int32_t v45; // w3
  struct System_Object_array *items; // x8
  _QWORD *v47; // x9
  __int64 size; // x10
  GiftMaster_o *v49; // x1
  Il2CppClass **v50; // x0
  int v51; // [xsp+4h] [xbp-5Ch] BYREF
  System_String_o *countText; // [xsp+8h] [xbp-58h] BYREF
  System_String_o *nameText; // [xsp+18h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x0.16

  if ( (byte_49FFC8E & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_Any_int_____, rewardGiftDataList);
    sub_1B640C8(&Method_DataManager_GetMaster_CombineLimitGiftMaster___, v5);
    sub_1B640C8(&Method_DataManager_GetMaster_GiftMaster___, v6);
    sub_1B640C8(&DataManager_TypeInfo, v7);
    sub_1B640C8(&System_Func_int____bool__TypeInfo, v8);
    sub_1B640C8(&int_TypeInfo, v9);
    sub_1B640C8(&Method_LimitUpResultCheckComponent_CreateResultInfoObject_LimitUpResultInfoRewardComponent___, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__Add__, v11);
    sub_1B640C8(&LocalizationManager_TypeInfo, v12);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_1B640C8(&Method_LimitUpResultCheckComponent___c__DisplayClass45_0__checkLimitUpReward_b__0__, v14);
    sub_1B640C8(&LimitUpResultCheckComponent___c__DisplayClass45_0_TypeInfo, v15);
    sub_1B640C8(&StringLiteral_6890/*"GET_LIMIT_UP_REWARD_DETAIL"*/, v16);
    sub_1B640C8(&StringLiteral_6891/*"GET_LIMIT_UP_REWARD_TITLE"*/, v17);
    byte_49FFC8E = 1;
  }
  nameText = 0LL;
  countText = 0LL;
  v18 = sub_1B64314(LimitUpResultCheckComponent___c__DisplayClass45_0_TypeInfo, rewardGiftDataList, method);
  System_Object___ctor((Il2CppObject *)v18, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_CombineLimitGiftMaster___);
  LimitCntMax = (GiftMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_GiftMaster___);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_34;
  v22 = LimitCntMax;
  v24 = *(_QWORD *)&baseUsrSvtData->fields.limitCount.fields.currentCryptoKey;
  v23 = *(_QWORD *)&baseUsrSvtData->fields.limitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v54.fields.currentCryptoKey = v24;
  *(_QWORD *)&v54.fields.fakeValue = v23;
  LimitCntMax = (GiftMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v54, 0LL);
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
  v25 = this->fields.baseUsrSvtData;
  if ( !v25 )
    goto LABEL_34;
  v27 = *(_QWORD *)&v25->fields.svtId.fields.currentCryptoKey;
  v26 = *(_QWORD *)&v25->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v55.fields.currentCryptoKey = v27;
  *(_QWORD *)&v55.fields.fakeValue = v26;
  LimitCntMax = (GiftMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v55, 0LL);
  if ( !Master_object )
    goto LABEL_34;
  LimitCntMax = (GiftMaster_o *)CombineLimitGiftMaster__GetCombineLimitGiftId(
                                  (CombineLimitGiftMaster_o *)Master_object,
                                  (int32_t)LimitCntMax,
                                  *(_DWORD *)(v18 + 16),
                                  0LL);
  if ( !(_DWORD)LimitCntMax )
    return;
  if ( !v22 )
    goto LABEL_34;
  DataById = GiftMaster__getDataById(v22, (int32_t)LimitCntMax, 0LL);
  *(_QWORD *)(v18 + 24) = DataById;
  v29 = v18 + 24;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v18 + 24), (int32_t)DataById, v30, v31);
  if ( !*(_QWORD *)(v18 + 24) )
    return;
  GiftEntity__GetInfo(*(GiftEntity_o **)(v18 + 24), &nameText, &countText, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v32 = LocalizationManager__Get((System_String_o *)StringLiteral_6891/*"GET_LIMIT_UP_REWARD_TITLE"*/, 0LL);
  LimitCntMax = (GiftMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6890/*"GET_LIMIT_UP_REWARD_DETAIL"*/, 0LL);
  if ( !*(_QWORD *)v29 )
    goto LABEL_34;
  v33 = (Il2CppObject *)nameText;
  v34 = (System_String_o *)LimitCntMax;
  v51 = *(_DWORD *)(*(_QWORD *)v29 + 28LL);
  v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v51);
  v36 = System_String__Format_61389768(v34, v33, v35, 0LL);
  v39 = LimitUpResultCheckComponent__CreateResultInfoObject_object_(
          this,
          (Il2CppObject *)this->fields.limitUpResultInfoRewardOrigin,
          (const MethodInfo_2EB01E0 *)Method_LimitUpResultCheckComponent_CreateResultInfoObject_LimitUpResultInfoRewardComponent___);
  if ( rewardGiftDataList )
  {
    v40 = (System_Func_object__bool__o *)sub_1B64314(System_Func_int____bool__TypeInfo, v37, v38);
    System_Func_object__bool____ctor(
      v40,
      (Il2CppObject *)v18,
      Method_LimitUpResultCheckComponent___c__DisplayClass45_0__checkLimitUpReward_b__0__,
      0LL);
    v41 = !BasicHelper__Any_object_(
             (System_Collections_Generic_List_T__o *)rewardGiftDataList,
             (System_Func_T__bool__o *)v40,
             (const MethodInfo_2E24870 *)Method_BasicHelper_Any_int_____);
  }
  else
  {
    v41 = 1;
  }
  LimitCntMax = *(GiftMaster_o **)v29;
  if ( !*(_QWORD *)v29
    || (LimitCntMax = (GiftMaster_o *)GiftEntity__getIconImageId((GiftEntity_o *)LimitCntMax, 0LL), !v39)
    || (LimitUpResultInfoRewardComponent__Setup(
          (LimitUpResultInfoRewardComponent_o *)v39,
          (int32_t)LimitCntMax,
          v41,
          v32,
          v36,
          v42),
        resInfoList = (System_Collections_Generic_List_object__o *)this->fields.resInfoList,
        LimitCntMax = (GiftMaster_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v39, 0LL),
        !resInfoList)
    || (items = resInfoList->fields._items,
        v47 = Method_System_Collections_Generic_List_GameObject__Add__,
        ++resInfoList->fields._version,
        !items) )
  {
LABEL_34:
    sub_1B64324(LimitCntMax);
  }
  size = resInfoList->fields._size;
  v49 = LimitCntMax;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      resInfoList,
      (Il2CppObject *)LimitCntMax,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
  }
  else
  {
    v50 = &items->obj.klass + size;
    resInfoList->fields._size = size + 1;
    v50[4] = (Il2CppClass *)v49;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v50 + 4), (int32_t)v49, v44, v45);
  }
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
  System_Collections_Generic_List_int__o *v14; // x0
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

  if ( (byte_49FFC8A & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Count__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Item__, v6);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v7);
    sub_1B640C8(&LocalizationManager_TypeInfo, v8);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_1B640C8(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v11);
    sub_1B640C8(&StringLiteral_9604/*"OPEN_STORY_QUEST_TITLE"*/, v12);
    sub_1B640C8(&StringLiteral_9593/*"OPEN_HERO_QUEST_TITLE"*/, v13);
    byte_49FFC8A = 1;
  }
  this->fields.isOpenQuest = 0;
  v14 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, method, v2);
  System_Collections_Generic_List_int____ctor(
    v14,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
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
      baseUsrSvtData = (UserServantEntity_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
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
      baseUsrSvtData = (UserServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                                v33,
                                                0LL);
      if ( !v19 )
LABEL_31:
        sub_1B64324(baseUsrSvtData);
      v22 = clsQuestCheck__GetReleaseQuestIdByServantLimit_33215752(
              v19,
              (int32_t)baseUsrSvtData,
              this->fields.svtCollectionLimitCnt,
              LimitCntMax,
              238,
              0LL);
    }
    else
    {
      baseUsrSvtData = (UserServantEntity_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
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
      baseUsrSvtData = (UserServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
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
    baseUsrSvtData = (UserServantEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9604/*"OPEN_STORY_QUEST_TITLE"*/, 0LL);
    if ( storyQuestInfoTitle )
    {
      UILabel__set_text(storyQuestInfoTitle, (System_String_o *)baseUsrSvtData, 0LL);
      heroQuestInfoTitle = this->fields.heroQuestInfoTitle;
      baseUsrSvtData = (UserServantEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9593/*"OPEN_HERO_QUEST_TITLE"*/, 0LL);
      if ( heroQuestInfoTitle )
      {
        UILabel__set_text(heroQuestInfoTitle, (System_String_o *)baseUsrSvtData, 0LL);
        baseUsrSvtData = (UserServantEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( baseUsrSvtData )
        {
          DataManager__GetMasterData_object_(
            (DataManager_o *)baseUsrSvtData,
            (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
          if ( v27 && v27->fields._size >= 1 )
          {
            v30 = 0;
            do
            {
              if ( System_Collections_Generic_List_int___get_Item(
                     v27,
                     v30,
                     (const MethodInfo_348FBEC *)Method_System_Collections_Generic_List_int__get_Item__) >= 1 )
              {
                Item = System_Collections_Generic_List_int___get_Item(
                         v27,
                         v30,
                         (const MethodInfo_348FBEC *)Method_System_Collections_Generic_List_int__get_Item__);
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
  int32_t v20; // w3
  __int64 v21; // x1
  __int64 v22; // x2
  System_Collections_Generic_List_object__o *v23; // x22
  int32_t v24; // w2
  int32_t v25; // w3
  UserServantEntity_o *resUsrSvtData; // x0
  struct UserServantEntity_o *v27; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v28; // x21
  __int64 v29; // x22
  __int64 v30; // x23
  const MethodInfo *v31; // x1
  const MethodInfo *v32; // x2
  int32_t v33; // w21
  const MethodInfo *v34; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16

  if ( (byte_49FFC87 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_ServantMaster___, *(_QWORD *)&kind);
    sub_1B640C8(&DataManager_TypeInfo, v13);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject___ctor__, v15);
    sub_1B640C8(&System_Collections_Generic_List_GameObject__TypeInfo, v16);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
    byte_49FFC87 = 1;
  }
  this->fields.baseUsrSvtData = baseData;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)baseData,
    (int32_t)baseData,
    (int32_t)resData);
  p_resUsrSvtData = &this->fields.resUsrSvtData;
  this->fields.resUsrSvtData = resData;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.resUsrSvtData, (int32_t)resData, v19, v20);
  this->fields.svtCollectionLimitCnt = baseCollectionLimitCnt;
  this->fields.kind = kind;
  v23 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_GameObject__TypeInfo,
                                                       v21,
                                                       v22);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.resInfoList = (struct System_Collections_Generic_List_GameObject__o *)v23;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.resInfoList, (int32_t)v23, v24, v25);
  *(_WORD *)&this->fields.isGetNewSkill = 0;
  this->fields.isOpenQuest = 0;
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_17;
  this->fields.transformationCount = UserServantEntity__GetTransformCount(resUsrSvtData, 1, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  resUsrSvtData = (UserServantEntity_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantMaster___);
  v27 = *p_resUsrSvtData;
  if ( !*p_resUsrSvtData )
    goto LABEL_17;
  v28 = (DataMasterBase_TMaster__TEntity__PKType__o *)resUsrSvtData;
  v30 = *(_QWORD *)&v27->fields.svtId.fields.currentCryptoKey;
  v29 = *(_QWORD *)&v27->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v35.fields.currentCryptoKey = v30;
  *(_QWORD *)&v35.fields.fakeValue = v29;
  resUsrSvtData = (UserServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v35, 0LL);
  if ( !v28
    || (resUsrSvtData = (UserServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                                 v28,
                                                 (int32_t)resUsrSvtData,
                                                 (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_17:
    sub_1B64324(resUsrSvtData);
  }
  if ( ServantEntity__get_IsServant((ServantEntity_o *)resUsrSvtData, 0LL) )
  {
    if ( this->fields.transformationCount >= 1 )
    {
      v33 = 0;
      do
        LimitUpResultCheckComponent__checkGetSkill(this, v33++, v32);
      while ( v33 < this->fields.transformationCount );
    }
    LimitUpResultCheckComponent__checkQuestOpen(this, v31);
    LimitUpResultCheckComponent__checkLimitUpReward(this, rewardGiftDataList, v34);
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
    sub_1B6432C(this, data);
  if ( data->m_Items[1] == this->fields.afterLimitCnt )
  {
    if ( max_length > 1 )
    {
      giftEntity = this->fields.giftEntity;
      if ( giftEntity )
        return data->m_Items[2] == giftEntity->fields.id;
LABEL_9:
      sub_1B64324(this);
    }
    goto LABEL_8;
  }
  return 0;
}