void __fastcall LimitUpResultCheckComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  struct LimitUpResultCheckComponent_StaticFields *static_fields; // x8

  if ( (byte_4B19BC9 & 1) == 0 )
  {
    sub_1BCA7E0(&LimitUpResultCheckComponent_TypeInfo, v1, v2);
    byte_4B19BC9 = 1;
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
  __int64 v2; // x2
  struct System_Collections_Generic_List_GameObject__o *resInfoList; // x8

  if ( (byte_4B19BC3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Count__, method, v2);
    byte_4B19BC3 = 1;
  }
  resInfoList = this->fields.resInfoList;
  return !resInfoList || resInfoList->fields._size <= 0;
}


Il2CppObject *__fastcall LimitUpResultCheckComponent__CreateResultInfoObject_object_(
        LimitUpResultCheckComponent_o *this,
        Il2CppObject *origin,
        const MethodInfo_2F8AAA4 *method)
{
  UnityEngine_Component_o *v5; // x21
  UnityEngine_Transform_o *transform; // x0

  v5 = (UnityEngine_Component_o *)this;
  if ( !method->rgctx_data )
    this = (LimitUpResultCheckComponent_o *)sub_1C1C718(method);
  if ( !v5 || (this = (LimitUpResultCheckComponent_o *)UnityEngine_Component__get_gameObject(v5, 0LL)) == 0LL )
    sub_1BCAA3C(this, origin);
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  return BaseMonoBehaviour__createObject_object_(
           (BaseMonoBehaviour_o *)v5,
           origin,
           transform,
           0LL,
           (const MethodInfo_2EFD548 *)method->rgctx_data->_1_BaseMonoBehaviour_createObject_T_);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall LimitUpResultCheckComponent__DispResultLimitUp(
        LimitUpResultCheckComponent_o *this,
        System_Action_o *callback,
        bool isFirstDisp,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  struct System_Collections_Generic_List_GameObject__o *resInfoList; // x8
  OpenInfoWindowComponent_o *openInfowindowComp; // x0
  __int64 v21; // x2
  __int64 v22; // x3
  LimitUpResultCheckComponent_c *v23; // x0
  int32_t CONCURRENTLY_DISP_NUM; // w24
  LimitUpResultCheckComponent_c *v25; // x0
  System_Collections_Generic_List_object__o *v26; // x22
  const MethodInfo *v27; // x4
  const MethodInfo *v28; // x6
  int32_t v29; // w25
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  int64_t v39; // x1
  Il2CppClass **v40; // x0
  OpenInfoWindowComponent_o *v41; // x21
  _BOOL4 isGetNewSkill; // w8
  int32_t monitor; // w4
  bool v44; // w5

  if ( (byte_4B19BC2 & 1) == 0 )
  {
    sub_1BCA7E0(&LimitUpResultCheckComponent_TypeInfo, callback, isFirstDisp);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__Add__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__RemoveAt__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject___ctor__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Count__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Item__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_GameObject__TypeInfo, v17, v18);
    byte_4B19BC2 = 1;
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
  v23 = LimitUpResultCheckComponent_TypeInfo;
  if ( !LimitUpResultCheckComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LimitUpResultCheckComponent_TypeInfo, callback);
    v23 = LimitUpResultCheckComponent_TypeInfo;
  }
  CONCURRENTLY_DISP_NUM = v23->static_fields->CONCURRENTLY_DISP_NUM;
  if ( !this->fields.isChangeSkill )
  {
    openInfowindowComp = (OpenInfoWindowComponent_o *)this->fields.resUsrSvtData;
    if ( !openInfowindowComp )
      goto LABEL_40;
    if ( UserServantEntity__isLimitCountMax((UserServantEntity_o *)openInfowindowComp, 0LL) )
    {
      v25 = LimitUpResultCheckComponent_TypeInfo;
      if ( !LimitUpResultCheckComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LimitUpResultCheckComponent_TypeInfo, callback);
        v25 = LimitUpResultCheckComponent_TypeInfo;
      }
      CONCURRENTLY_DISP_NUM = v25->static_fields->CONCURRENTLY_DISP_NUM_BY_LIMIT_MAX;
    }
  }
  v26 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_GameObject__TypeInfo,
                                                       callback,
                                                       v21,
                                                       v22);
  System_Collections_Generic_List_object____ctor(
    v26,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  openInfowindowComp = (OpenInfoWindowComponent_o *)this->fields.resInfoList;
  if ( !openInfowindowComp )
LABEL_40:
    sub_1BCAA3C(openInfowindowComp, callback);
  v29 = 0;
  while ( SLODWORD(openInfowindowComp->fields.m_CancellationTokenSource) > 0
       && v29 < CONCURRENTLY_DISP_NUM
       && (v29 == 0 || !this->fields.isChangeSkill) )
  {
    openInfowindowComp = (OpenInfoWindowComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                        (System_Collections_Generic_List_object__o *)openInfowindowComp,
                                                        0,
                                                        (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( v26 )
    {
      items = v26->fields._items;
      v37 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++v26->fields._version;
      if ( items )
      {
        size = v26->fields._size;
        v39 = (int64_t)openInfowindowComp;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v26,
            (Il2CppObject *)openInfowindowComp,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
        }
        else
        {
          v40 = &items->obj.klass + size;
          v26->fields._size = size + 1;
          v40[4] = (Il2CppClass *)v39;
          sub_1BCA784((PartyOrganizationUtility_o *)(v40 + 4), v39, v30, v31, v32, v33, v34, v35);
        }
        openInfowindowComp = (OpenInfoWindowComponent_o *)this->fields.resInfoList;
        if ( openInfowindowComp )
        {
          System_Collections_Generic_List_object___RemoveAt(
            (System_Collections_Generic_List_object__o *)openInfowindowComp,
            0,
            (const MethodInfo_35A3430 *)Method_System_Collections_Generic_List_GameObject__RemoveAt__);
          openInfowindowComp = (OpenInfoWindowComponent_o *)this->fields.resInfoList;
          ++v29;
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
        (System_Collections_Generic_List_GameObject__o *)v26,
        callback,
        isFirstDisp,
        v27);
      return;
    }
    goto LABEL_40;
  }
  if ( this->fields.transformationCount > 1 )
  {
    isGetNewSkill = this->fields.isGetNewSkill;
    v41 = this->fields.openInfowindowComp;
    if ( isGetNewSkill )
    {
      monitor = 125;
      v44 = 1;
      goto LABEL_38;
    }
  }
  else
  {
    v41 = this->fields.openInfowindowComp;
  }
  openInfowindowComp = (OpenInfoWindowComponent_o *)LimitUpResultCheckComponent_TypeInfo;
  if ( !LimitUpResultCheckComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LimitUpResultCheckComponent_TypeInfo, callback);
    openInfowindowComp = (OpenInfoWindowComponent_o *)LimitUpResultCheckComponent_TypeInfo;
  }
  v44 = 0;
  monitor = (int32_t)openInfowindowComp[1].fields.basePanel->monitor;
LABEL_38:
  if ( !v41 )
    goto LABEL_40;
  OpenInfoWindowComponent__OpenLimitUpResultInfo(
    v41,
    (System_Collections_Generic_List_GameObject__o *)v26,
    callback,
    isFirstDisp,
    monitor,
    v44,
    v28);
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
      sub_1BCAA3C(openInfowindowComp, isActive);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  Il2CppObject *Master_object; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *Entity; // x0
  __int64 v35; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v36; // x20
  System_String_o *v37; // x23
  System_String_o *v38; // x22
  __int64 v39; // x1
  System_String_o *v40; // x0
  __int64 *v41; // x21
  __int64 v42; // x1
  bool IsLimitCountSealQuest; // w21
  System_String_o **v44; // x8
  __int64 v45; // x1
  Il2CppObject *Value; // x21
  System_String_o *v47; // x0
  System_String_o *v48; // x0
  UnityEngine_Component_o *v49; // x20
  System_Collections_Generic_List_object__o *resInfoList; // x19
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  struct System_Object_array *items; // x8
  _QWORD *v58; // x9
  __int64 size; // x10
  int64_t v60; // x1
  Il2CppClass **v61; // x0

  if ( (byte_4B19BC5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_ConstantStrMaster___, *(_QWORD *)&questId, method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_QuestMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v7, v8);
    sub_1BCA7E0(&DataManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v11, v12);
    sub_1BCA7E0(&Method_LimitUpResultCheckComponent_CreateResultInfoObject_LimitUpResultInfoComponent___, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__Add__, v15, v16);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v17, v18);
    sub_1BCA7E0(&StringLiteral_9775/*"OPEN_MAIN_SCENARIO_TITLE"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_9781/*"OPEN_STORY_QUEST_TITLE_LIMIT_UP"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_9772/*"OPEN_LIMIT_UNSEALED_QUEST_NAME_LIMIT_UP"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_9773/*"OPEN_LIMIT_UNSEALED_QUEST_TITLE_LIMIT_UP"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_9767/*"OPEN_EVENT_QUEST_NAME_LIMIT_UP"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_9768/*"OPEN_EVENT_QUEST_TITLE_LIMIT_UP"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_9774/*"OPEN_MAIN_QUEST_TITLE_LIMIT_UP"*/, v31, v32);
    byte_4B19BC5 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&questId);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  Entity = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !Entity )
    goto LABEL_43;
  Entity = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                           Entity,
                                                           questId,
                                                           (const MethodInfo_31B2E40 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( !Entity )
    goto LABEL_43;
  v36 = Entity;
  v37 = 0LL;
  v38 = 0LL;
  switch ( LODWORD(Entity->fields._lookup) )
  {
    case 1:
    case 2:
      if ( !Master_object )
        goto LABEL_43;
      if ( ServantLimitImageMaster__IsLimitCountSealQuest((ServantLimitImageMaster_o *)Master_object, questId, 0LL) )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v39);
        v40 = LocalizationManager__Get((System_String_o *)StringLiteral_9773/*"OPEN_LIMIT_UNSEALED_QUEST_TITLE_LIMIT_UP"*/, 0LL);
        v41 = &StringLiteral_9772/*"OPEN_LIMIT_UNSEALED_QUEST_NAME_LIMIT_UP"*/;
      }
      else
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v39);
        Entity = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ConstantStrMaster___);
        if ( !Entity )
          goto LABEL_43;
        Value = (Il2CppObject *)ConstantStrMaster__GetValue(
                                  (ConstantStrMaster_o *)Entity,
                                  (System_String_o *)StringLiteral_9775/*"OPEN_MAIN_SCENARIO_TITLE"*/,
                                  0LL);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v45);
        v47 = LocalizationManager__Get((System_String_o *)StringLiteral_9774/*"OPEN_MAIN_QUEST_TITLE_LIMIT_UP"*/, 0LL);
        v40 = System_String__Format(v47, Value, 0LL);
LABEL_31:
        v41 = &StringLiteral_9767/*"OPEN_EVENT_QUEST_NAME_LIMIT_UP"*/;
      }
LABEL_32:
      v38 = v40;
      v48 = LocalizationManager__Get((System_String_o *)*v41, 0LL);
      v37 = System_String__Format(v48, (Il2CppObject *)v36->fields._MasterName_k__BackingField, 0LL);
      this->fields.isOpenQuest = 1;
LABEL_33:
      if ( !System_String__IsNullOrEmpty(v38, 0LL) && !System_String__IsNullOrEmpty(v37, 0LL) )
      {
        Entity = (DataMasterBase_TMaster__TEntity__PKType__o *)LimitUpResultCheckComponent__CreateResultInfoObject_object_(
                                                                 this,
                                                                 (Il2CppObject *)this->fields.limitUpResultInfoStoryOrigin,
                                                                 (const MethodInfo_2F8AAA4 *)Method_LimitUpResultCheckComponent_CreateResultInfoObject_LimitUpResultInfoComponent___);
        if ( Entity )
        {
          v49 = (UnityEngine_Component_o *)Entity;
          ((void (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *, System_String_o *, System_String_o *, Il2CppMethodPointer))Entity->klass->vtable._4_getList.method)(
            Entity,
            v38,
            v37,
            Entity->klass->vtable._5_ForForceDerived.methodPtr);
          resInfoList = (System_Collections_Generic_List_object__o *)this->fields.resInfoList;
          Entity = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(v49, 0LL);
          if ( resInfoList )
          {
            items = resInfoList->fields._items;
            v58 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++resInfoList->fields._version;
            if ( items )
            {
              size = resInfoList->fields._size;
              v60 = (int64_t)Entity;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  resInfoList,
                  (Il2CppObject *)Entity,
                  *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
              }
              else
              {
                resInfoList->fields._size = size + 1;
                v61 = &items->obj.klass + size;
                v61[4] = (Il2CppClass *)v60;
                sub_1BCA784((PartyOrganizationUtility_o *)(v61 + 4), v60, v51, v52, v53, v54, v55, v56);
              }
              return;
            }
          }
        }
LABEL_43:
        sub_1BCAA3C(Entity, v35);
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
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v42);
      v44 = (System_String_o **)&StringLiteral_9773/*"OPEN_LIMIT_UNSEALED_QUEST_TITLE_LIMIT_UP"*/;
      if ( !IsLimitCountSealQuest )
        v44 = (System_String_o **)&StringLiteral_9781/*"OPEN_STORY_QUEST_TITLE_LIMIT_UP"*/;
      if ( IsLimitCountSealQuest )
        v41 = &StringLiteral_9772/*"OPEN_LIMIT_UNSEALED_QUEST_NAME_LIMIT_UP"*/;
      else
        v41 = &StringLiteral_9767/*"OPEN_EVENT_QUEST_NAME_LIMIT_UP"*/;
      v40 = LocalizationManager__Get(*v44, 0LL);
      goto LABEL_32;
    case 4:
      goto LABEL_33;
    case 5:
    case 6:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v35);
      v40 = LocalizationManager__Get((System_String_o *)StringLiteral_9768/*"OPEN_EVENT_QUEST_TITLE_LIMIT_UP"*/, 0LL);
      goto LABEL_31;
    default:
      v38 = 0LL;
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  int64_t Master_object; // x0
  __int64 v30; // x1
  __int64 v31; // x1
  Il2CppObject *Entity; // x24
  System_String_o *v33; // x23
  System_String_o *v34; // x0
  System_String_o *v35; // x24
  struct UserServantEntity_o *resUsrSvtData; // x8
  ServantSkillMaster_o *v37; // x25
  __int64 v38; // x26
  __int64 v39; // x27
  ServantSkillEntity_o *EntityFromSkillId; // x0
  __int64 v41; // x8
  ServantSkillEntity_o *v42; // x25
  const MethodInfo *v43; // x6
  LimitUpResultInfoSkillComponent_o *v44; // x22
  const MethodInfo *v45; // x2
  bool v46; // w1
  struct System_Collections_Generic_List_GameObject__o *resInfoList; // x8
  System_Collections_Generic_List_object__o *v48; // x20
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  struct System_Object_array *items; // x8
  _QWORD *v56; // x9
  __int64 size; // x10
  int64_t v58; // x1
  Il2CppClass **v59; // x0
  TransformServantInfo_o *transformInfo; // [xsp+8h] [xbp-68h] BYREF
  System_String_o *detail; // [xsp+10h] [xbp-60h] BYREF
  System_String_o *name; // [xsp+18h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // 0:x0.16

  if ( (byte_4B19BC7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantSkillMaster___, *(_QWORD *)&skillId, *(_QWORD *)&targetIdx);
    sub_1BCA7E0(&Method_DataManager_GetMaster_SkillMaster___, v9, v10);
    sub_1BCA7E0(&DataManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v13, v14);
    sub_1BCA7E0(&Method_LimitUpResultCheckComponent_CreateResultInfoObject_LimitUpResultInfoSkillComponent___, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__Add__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Count__, v19, v20);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v21, v22);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v23, v24);
    sub_1BCA7E0(&StringLiteral_7046/*"GET_SKILL_TITLE"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_7045/*"GET_SKILL_NAME_LIMIT_UP"*/, v27, v28);
    byte_4B19BC7 = 1;
  }
  detail = 0LL;
  name = 0LL;
  transformInfo = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&skillId);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_SkillMaster___);
  if ( !Master_object )
    goto LABEL_33;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             skillId,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v31);
  Master_object = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_7046/*"GET_SKILL_TITLE"*/, 0LL);
  if ( !this->fields.resUsrSvtData )
    goto LABEL_33;
  v33 = (System_String_o *)Master_object;
  Master_object = UserServantEntity__getSkillLevel(this->fields.resUsrSvtData, targetIdx, 0LL);
  if ( !Entity )
    goto LABEL_33;
  SkillEntity__getSkillMessageInfo((SkillEntity_o *)Entity, &name, &detail, Master_object, 0LL);
  v34 = LocalizationManager__Get((System_String_o *)StringLiteral_7045/*"GET_SKILL_NAME_LIMIT_UP"*/, 0LL);
  v35 = System_String__Format(v34, (Il2CppObject *)name, 0LL);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantSkillMaster___);
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_33;
  v37 = (ServantSkillMaster_o *)Master_object;
  v39 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v38 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v30);
  *(_QWORD *)&v63.fields.currentCryptoKey = v39;
  *(_QWORD *)&v63.fields.fakeValue = v38;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v63, 0LL);
  if ( !v37 )
    goto LABEL_33;
  EntityFromSkillId = ServantSkillMaster__getEntityFromSkillId(v37, Master_object, targetIdx + 1, skillId, 0LL);
  v41 = this->fields.transformationCount <= 1 ? 128LL : 136LL;
  v42 = EntityFromSkillId;
  Master_object = (int64_t)LimitUpResultCheckComponent__CreateResultInfoObject_object_(
                             this,
                             *(Il2CppObject **)((char *)&this->klass + v41),
                             (const MethodInfo_2F8AAA4 *)Method_LimitUpResultCheckComponent_CreateResultInfoObject_LimitUpResultInfoSkillComponent___);
  if ( !Master_object )
    goto LABEL_33;
  v44 = (LimitUpResultInfoSkillComponent_o *)Master_object;
  LimitUpResultInfoSkillComponent__Setup(
    (LimitUpResultInfoSkillComponent_o *)Master_object,
    skillId,
    v35,
    v42,
    v33,
    detail,
    v43);
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
    || (Master_object = (int64_t)v44->fields.battleNameLabel) == 0 )
  {
LABEL_33:
    sub_1BCAA3C(Master_object, v30);
  }
  UILabel__set_text((UILabel_o *)Master_object, transformInfo->fields.titleText, 0LL);
  if ( this->fields.transformationCount >= 2 )
  {
    resInfoList = this->fields.resInfoList;
    if ( !resInfoList )
      goto LABEL_33;
    v46 = resInfoList->fields._size < 1;
  }
  else
  {
    v46 = 0;
  }
  LimitUpResultInfoSkillComponent__SetTitleDisp(v44, v46, v45);
LABEL_27:
  v48 = (System_Collections_Generic_List_object__o *)this->fields.resInfoList;
  Master_object = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v44, 0LL);
  if ( !v48 )
    goto LABEL_33;
  items = v48->fields._items;
  v56 = Method_System_Collections_Generic_List_GameObject__Add__;
  ++v48->fields._version;
  if ( !items )
    goto LABEL_33;
  size = v48->fields._size;
  v58 = Master_object;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v48,
      (Il2CppObject *)Master_object,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
  }
  else
  {
    v59 = &items->obj.klass + size;
    v48->fields._size = size + 1;
    v59[4] = (Il2CppClass *)v58;
    sub_1BCA784((PartyOrganizationUtility_o *)(v59 + 4), v58, v49, v50, v51, v52, v53, v54);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int64 v24; // x21
  __int64 v25; // x22
  int v26; // w22
  System_Int32_array *TransformedSkillIdList; // x0
  int32_t kind; // w8
  System_Int32_array *v29; // x21
  int32_t LimitCntMax; // w22
  int32_t v31; // w1
  int32_t v32; // w3
  LimitUpResultCheckComponent_o *v33; // x23
  int max_length; // w8
  unsigned int v35; // w9
  unsigned int v36; // w22
  char *v37; // x24
  int32_t *v38; // x24
  int v39; // w26
  int v40; // t1
  char *v41; // x25
  int v42; // w9
  int32_t *v43; // x25
  int v44; // t1
  const MethodInfo *v45; // x4
  int32_t v46; // w21
  int32_t v47; // w20
  DataMasterBase_TMaster__TEntity__PKType__o *v48; // x24
  Il2CppObject *Entity; // x23
  SkillEntity_o *v50; // x20
  int32_t v51; // w24
  int32_t SkillLevel; // w0
  __int64 v53; // x1
  UILabel_o *skillChangeInfoTitle; // x22
  int32_t v55; // w21
  UILabel_o *skillChangeInfoSubTitleOld; // x22
  UILabel_o *skillChangeInfoSubTitleNow; // x22
  UILabel_o *skillChangeInfoNameOld; // x22
  System_String_o *v59; // x0
  UILabel_o *skillChangeInfoNameNow; // x20
  System_String_o *v61; // x0
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  __int64 v68; // x8
  _QWORD *v69; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v71; // x8
  System_String_o *detail; // [xsp+8h] [xbp-58h] BYREF
  System_String_o *name; // [xsp+18h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v74; // 0:x0.16

  v3 = transformIndex;
  v4 = this;
  if ( (byte_4B19BC6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SkillMaster___, *(_QWORD *)&transformIndex, method);
    sub_1BCA7E0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__Add__, v7, v8);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13, v14);
    sub_1BCA7E0(&StringLiteral_7044/*"GET_SKILL_NAME"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_2050/*"AFTER_CHANGE_SKILL_SUB_TITLE"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_3465/*"CHANGE_SKILL_TITLE"*/, v19, v20);
    this = (LimitUpResultCheckComponent_o *)sub_1BCA7E0(&StringLiteral_3029/*"BEFORE_CHANGE_SKILL_SUB_TITLE"*/, v21, v22);
    byte_4B19BC6 = 1;
  }
  name = 0LL;
  detail = 0LL;
  baseUsrSvtData = v4->fields.baseUsrSvtData;
  *(_WORD *)&v4->fields.isGetNewSkill = 0;
  if ( !baseUsrSvtData )
    goto LABEL_57;
  v25 = *(_QWORD *)&baseUsrSvtData->fields.limitCount.fields.currentCryptoKey;
  v24 = *(_QWORD *)&baseUsrSvtData->fields.limitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&transformIndex);
  *(_QWORD *)&v74.fields.currentCryptoKey = v25;
  *(_QWORD *)&v74.fields.fakeValue = v24;
  this = (LimitUpResultCheckComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v74, 0LL);
  if ( !v4->fields.baseUsrSvtData )
    goto LABEL_57;
  v26 = (int)this;
  TransformedSkillIdList = UserServantEntity__GetTransformedSkillIdList(
                             v4->fields.baseUsrSvtData,
                             v3,
                             -1,
                             (int32_t)this,
                             1,
                             -1,
                             0LL);
  kind = v4->fields.kind;
  v29 = TransformedSkillIdList;
  if ( kind == 19 || kind == 10 )
  {
    this = (LimitUpResultCheckComponent_o *)v4->fields.baseUsrSvtData;
    if ( !this )
      goto LABEL_57;
    LimitCntMax = v26 + 1;
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
      sub_1BCAA3C(this, *(_QWORD *)&transformIndex);
    v31 = v3;
    v32 = LimitCntMax;
  }
  else
  {
    this = (LimitUpResultCheckComponent_o *)v4->fields.resUsrSvtData;
    if ( !this )
      goto LABEL_57;
    v32 = -1;
    v31 = v3;
  }
  this = (LimitUpResultCheckComponent_o *)UserServantEntity__GetTransformedSkillIdList(
                                            (UserServantEntity_o *)this,
                                            v31,
                                            -1,
                                            v32,
                                            1,
                                            -1,
                                            0LL);
  v33 = this;
  if ( !v29 )
    goto LABEL_57;
  max_length = v29->max_length;
  if ( max_length < 1 )
    return;
  v35 = 0;
  while ( 1 )
  {
    if ( max_length == v35 )
      goto LABEL_56;
    v36 = v35;
    v37 = (char *)v29 + 4 * (int)v35;
    v40 = *((_DWORD *)v37 + 8);
    v38 = (int32_t *)(v37 + 32);
    v39 = v40;
    if ( !this )
      goto LABEL_57;
    if ( v35 >= LODWORD(this->fields.m_CancellationTokenSource) )
      goto LABEL_56;
    v41 = (char *)this + 4 * (int)v35;
    v44 = *((_DWORD *)v41 + 8);
    v43 = (int32_t *)(v41 + 32);
    v42 = v44;
    if ( v39 != v44 && v42 >= 1 )
      break;
    v35 = v36 + 1;
    if ( max_length == v36 + 1 )
      return;
  }
  this = (LimitUpResultCheckComponent_o *)v4->fields.resUsrSvtData;
  if ( !this )
    goto LABEL_57;
  this = (LimitUpResultCheckComponent_o *)UserServantEntity__IsHeroine((UserServantEntity_o *)this, 0LL);
  if ( v39 < 1 || ((unsigned __int8)this & 1) == 0 )
  {
    if ( v36 < LODWORD(v33->fields.m_CancellationTokenSource) )
    {
      LimitUpResultCheckComponent__SetSkillRelease(v4, *v43, v36, v3, v45);
      return;
    }
LABEL_56:
    sub_1BCAA44(this, *(_QWORD *)&transformIndex);
  }
  if ( v36 >= v29->max_length || v36 >= LODWORD(v33->fields.m_CancellationTokenSource) )
    goto LABEL_56;
  v46 = *v38;
  v47 = *v43;
  this = (LimitUpResultCheckComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_57;
  this = (LimitUpResultCheckComponent_o *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)this,
                                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !this )
    goto LABEL_57;
  v48 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             v46,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  this = (LimitUpResultCheckComponent_o *)DataMasterBase_object__object__int___GetEntity(
                                            v48,
                                            v47,
                                            (const MethodInfo_31B2E40 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( !v4->fields.baseUsrSvtData )
    goto LABEL_57;
  v50 = (SkillEntity_o *)this;
  this = (LimitUpResultCheckComponent_o *)UserServantEntity__getSkillLevel(v4->fields.baseUsrSvtData, v36, 0LL);
  if ( !v4->fields.resUsrSvtData )
    goto LABEL_57;
  v51 = (int)this;
  SkillLevel = UserServantEntity__getSkillLevel(v4->fields.resUsrSvtData, v36, 0LL);
  skillChangeInfoTitle = v4->fields.skillChangeInfoTitle;
  v55 = SkillLevel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v53);
  this = (LimitUpResultCheckComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3465/*"CHANGE_SKILL_TITLE"*/, 0LL);
  if ( !skillChangeInfoTitle )
    goto LABEL_57;
  UILabel__set_text(skillChangeInfoTitle, (System_String_o *)this, 0LL);
  skillChangeInfoSubTitleOld = v4->fields.skillChangeInfoSubTitleOld;
  this = (LimitUpResultCheckComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3029/*"BEFORE_CHANGE_SKILL_SUB_TITLE"*/, 0LL);
  if ( !skillChangeInfoSubTitleOld )
    goto LABEL_57;
  UILabel__set_text(skillChangeInfoSubTitleOld, (System_String_o *)this, 0LL);
  skillChangeInfoSubTitleNow = v4->fields.skillChangeInfoSubTitleNow;
  this = (LimitUpResultCheckComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2050/*"AFTER_CHANGE_SKILL_SUB_TITLE"*/, 0LL);
  if ( !skillChangeInfoSubTitleNow )
    goto LABEL_57;
  UILabel__set_text(skillChangeInfoSubTitleNow, (System_String_o *)this, 0LL);
  if ( !Entity )
    goto LABEL_57;
  SkillEntity__getSkillMessageInfo((SkillEntity_o *)Entity, &name, &detail, v51, 0LL);
  skillChangeInfoNameOld = v4->fields.skillChangeInfoNameOld;
  v59 = LocalizationManager__Get((System_String_o *)StringLiteral_7044/*"GET_SKILL_NAME"*/, 0LL);
  this = (LimitUpResultCheckComponent_o *)System_String__Format(v59, (Il2CppObject *)name, 0LL);
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
  if ( !v50 )
    goto LABEL_57;
  SkillEntity__getSkillMessageInfo(v50, &name, &detail, v55, 0LL);
  skillChangeInfoNameNow = v4->fields.skillChangeInfoNameNow;
  v61 = LocalizationManager__Get((System_String_o *)StringLiteral_7044/*"GET_SKILL_NAME"*/, 0LL);
  this = (LimitUpResultCheckComponent_o *)System_String__Format(v61, (Il2CppObject *)name, 0LL);
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
  *(_QWORD *)&transformIndex = v4->fields.skillChangeInfo;
  v68 = *(_QWORD *)&this->fields.m_CachedPtr;
  v69 = Method_System_Collections_Generic_List_GameObject__Add__;
  ++HIDWORD(this->fields.m_CancellationTokenSource);
  if ( !v68 )
    goto LABEL_57;
  m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v68 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      *(Il2CppObject **)&transformIndex,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v69[4] + 192LL) + 112LL));
  }
  else
  {
    v71 = v68 + 8 * m_CancellationTokenSource_low;
    LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_QWORD *)(v71 + 32) = *(_QWORD *)&transformIndex;
    sub_1BCA784((PartyOrganizationUtility_o *)(v71 + 32), *(int64_t *)&transformIndex, v62, v63, v64, v65, v66, v67);
  }
  *(_WORD *)&v4->fields.isGetNewSkill = 257;
}


void __fastcall LimitUpResultCheckComponent__checkLimitUpReward(
        LimitUpResultCheckComponent_o *this,
        System_Collections_Generic_List_int____o *rewardGiftDataList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x21
  __int64 v33; // x1
  Il2CppObject *Master_object; // x23
  int64_t LimitCntMax; // x0
  __int64 v36; // x1
  struct UserServantEntity_o *baseUsrSvtData; // x8
  GiftMaster_o *v38; // x22
  __int64 v39; // x24
  __int64 v40; // x25
  struct UserServantEntity_o *v41; // x8
  __int64 v42; // x24
  __int64 v43; // x25
  GiftEntity_o *DataById; // x0
  __int64 v45; // x22
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  __int64 v52; // x1
  System_String_o *v53; // x23
  Il2CppObject *v54; // x25
  System_String_o *v55; // x24
  Il2CppObject *v56; // x0
  System_String_o *v57; // x24
  __int64 v58; // x2
  __int64 v59; // x3
  Il2CppObject *v60; // x25
  System_Func_object__bool__o *v61; // x26
  bool v62; // w20
  const MethodInfo *v63; // x5
  System_Collections_Generic_List_object__o *resInfoList; // x19
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  struct System_Object_array *items; // x8
  _QWORD *v72; // x9
  __int64 size; // x10
  int64_t v74; // x1
  Il2CppClass **v75; // x0
  int v76; // [xsp+4h] [xbp-5Ch] BYREF
  System_String_o *countText; // [xsp+8h] [xbp-58h] BYREF
  System_String_o *nameText; // [xsp+18h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v79; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v80; // 0:x0.16

  if ( (byte_4B19BC8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_int_____, rewardGiftDataList, method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_CombineLimitGiftMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataManager_GetMaster_GiftMaster___, v8, v9);
    sub_1BCA7E0(&DataManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&System_Func_int____bool__TypeInfo, v12, v13);
    sub_1BCA7E0(&int_TypeInfo, v14, v15);
    sub_1BCA7E0(
      &Method_LimitUpResultCheckComponent_CreateResultInfoObject_LimitUpResultInfoRewardComponent___,
      v16,
      v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__Add__, v18, v19);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v20, v21);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v22, v23);
    sub_1BCA7E0(&Method_LimitUpResultCheckComponent___c__DisplayClass45_0__checkLimitUpReward_b__0__, v24, v25);
    sub_1BCA7E0(&LimitUpResultCheckComponent___c__DisplayClass45_0_TypeInfo, v26, v27);
    sub_1BCA7E0(&StringLiteral_7041/*"GET_LIMIT_UP_REWARD_DETAIL"*/, v28, v29);
    sub_1BCA7E0(&StringLiteral_7042/*"GET_LIMIT_UP_REWARD_TITLE"*/, v30, v31);
    byte_4B19BC8 = 1;
  }
  nameText = 0LL;
  countText = 0LL;
  v32 = sub_1BCAA2C(LimitUpResultCheckComponent___c__DisplayClass45_0_TypeInfo, rewardGiftDataList, method, v3);
  System_Object___ctor((Il2CppObject *)v32, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v33);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_CombineLimitGiftMaster___);
  LimitCntMax = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_GiftMaster___);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_34;
  v38 = (GiftMaster_o *)LimitCntMax;
  v40 = *(_QWORD *)&baseUsrSvtData->fields.limitCount.fields.currentCryptoKey;
  v39 = *(_QWORD *)&baseUsrSvtData->fields.limitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v36);
  *(_QWORD *)&v79.fields.currentCryptoKey = v40;
  *(_QWORD *)&v79.fields.fakeValue = v39;
  LimitCntMax = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v79, 0LL);
  if ( !v32 )
    goto LABEL_34;
  *(_DWORD *)(v32 + 16) = LimitCntMax + 1;
  LimitCntMax = (int64_t)this->fields.baseUsrSvtData;
  if ( !LimitCntMax )
    goto LABEL_34;
  LimitCntMax = UserServantEntity__getLimitCntMax((UserServantEntity_o *)LimitCntMax, 0LL);
  if ( (int)LimitCntMax < *(_DWORD *)(v32 + 16) )
  {
    LimitCntMax = (int64_t)this->fields.baseUsrSvtData;
    if ( !LimitCntMax )
      goto LABEL_34;
    LimitCntMax = UserServantEntity__getLimitCntMax((UserServantEntity_o *)LimitCntMax, 0LL);
    *(_DWORD *)(v32 + 16) = LimitCntMax;
  }
  v41 = this->fields.baseUsrSvtData;
  if ( !v41 )
    goto LABEL_34;
  v43 = *(_QWORD *)&v41->fields.svtId.fields.currentCryptoKey;
  v42 = *(_QWORD *)&v41->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v36);
  *(_QWORD *)&v80.fields.currentCryptoKey = v43;
  *(_QWORD *)&v80.fields.fakeValue = v42;
  LimitCntMax = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v80, 0LL);
  if ( !Master_object )
    goto LABEL_34;
  LimitCntMax = CombineLimitGiftMaster__GetCombineLimitGiftId(
                  (CombineLimitGiftMaster_o *)Master_object,
                  LimitCntMax,
                  *(_DWORD *)(v32 + 16),
                  0LL);
  if ( !(_DWORD)LimitCntMax )
    return;
  if ( !v38 )
    goto LABEL_34;
  DataById = GiftMaster__getDataById(v38, LimitCntMax, 0LL);
  *(_QWORD *)(v32 + 24) = DataById;
  v45 = v32 + 24;
  sub_1BCA784((PartyOrganizationUtility_o *)(v32 + 24), (int64_t)DataById, v46, v47, v48, v49, v50, v51);
  if ( !*(_QWORD *)(v32 + 24) )
    return;
  GiftEntity__GetInfo(*(GiftEntity_o **)(v32 + 24), &nameText, &countText, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v52);
  v53 = LocalizationManager__Get((System_String_o *)StringLiteral_7042/*"GET_LIMIT_UP_REWARD_TITLE"*/, 0LL);
  LimitCntMax = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_7041/*"GET_LIMIT_UP_REWARD_DETAIL"*/, 0LL);
  if ( !*(_QWORD *)v45 )
    goto LABEL_34;
  v54 = (Il2CppObject *)nameText;
  v55 = (System_String_o *)LimitCntMax;
  v76 = *(_DWORD *)(*(_QWORD *)v45 + 28LL);
  v56 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v76);
  v57 = System_String__Format_62415592(v55, v54, v56, 0LL);
  v60 = LimitUpResultCheckComponent__CreateResultInfoObject_object_(
          this,
          (Il2CppObject *)this->fields.limitUpResultInfoRewardOrigin,
          (const MethodInfo_2F8AAA4 *)Method_LimitUpResultCheckComponent_CreateResultInfoObject_LimitUpResultInfoRewardComponent___);
  if ( rewardGiftDataList )
  {
    v61 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_int____bool__TypeInfo, v36, v58, v59);
    System_Func_object__bool____ctor(
      v61,
      (Il2CppObject *)v32,
      Method_LimitUpResultCheckComponent___c__DisplayClass45_0__checkLimitUpReward_b__0__,
      0LL);
    v62 = !BasicHelper__Any_object_(
             (System_Collections_Generic_List_T__o *)rewardGiftDataList,
             (System_Func_T__bool__o *)v61,
             (const MethodInfo_2EFDC94 *)Method_BasicHelper_Any_int_____);
  }
  else
  {
    v62 = 1;
  }
  LimitCntMax = *(_QWORD *)v45;
  if ( !*(_QWORD *)v45
    || (LimitCntMax = GiftEntity__getIconImageId((GiftEntity_o *)LimitCntMax, 0LL), !v60)
    || (LimitUpResultInfoRewardComponent__Setup(
          (LimitUpResultInfoRewardComponent_o *)v60,
          LimitCntMax,
          v62,
          v53,
          v57,
          v63),
        resInfoList = (System_Collections_Generic_List_object__o *)this->fields.resInfoList,
        LimitCntMax = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v60, 0LL),
        !resInfoList)
    || (items = resInfoList->fields._items,
        v72 = Method_System_Collections_Generic_List_GameObject__Add__,
        ++resInfoList->fields._version,
        !items) )
  {
LABEL_34:
    sub_1BCAA3C(LimitCntMax, v36);
  }
  size = resInfoList->fields._size;
  v74 = LimitCntMax;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      resInfoList,
      (Il2CppObject *)LimitCntMax,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v72[4] + 192LL) + 112LL));
  }
  else
  {
    v75 = &items->obj.klass + size;
    resInfoList->fields._size = size + 1;
    v75[4] = (Il2CppClass *)v74;
    sub_1BCA784((PartyOrganizationUtility_o *)(v75 + 4), v74, v65, v66, v67, v68, v69, v70);
  }
}


void __fastcall LimitUpResultCheckComponent__checkQuestOpen(
        LimitUpResultCheckComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  System_Collections_Generic_List_int__o *v25; // x0
  __int64 v26; // x1
  int32_t svtCollectionLimitCnt; // w8
  UserServantEntity_o *baseUsrSvtData; // x0
  int32_t LimitCntMax; // w20
  struct UserServantEntity_o *resUsrSvtData; // x8
  clsQuestCheck_o *v31; // x21
  __int64 v32; // x22
  __int64 v33; // x23
  System_Collections_Generic_List_int__o *v34; // x0
  __int64 v35; // x1
  struct UserServantEntity_o *v36; // x8
  clsQuestCheck_o *v37; // x20
  __int64 v38; // x21
  __int64 v39; // x22
  System_Collections_Generic_List_int__o *v40; // x20
  UILabel_o *storyQuestInfoTitle; // x21
  UILabel_o *heroQuestInfoTitle; // x21
  int32_t v43; // w21
  int32_t Item; // w0
  const MethodInfo *v45; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16

  if ( (byte_4B19BC4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Count__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Item__, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v11, v12);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17, v18);
    sub_1BCA7E0(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v19, v20);
    sub_1BCA7E0(&StringLiteral_9780/*"OPEN_STORY_QUEST_TITLE"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_9769/*"OPEN_HERO_QUEST_TITLE"*/, v23, v24);
    byte_4B19BC4 = 1;
  }
  this->fields.isOpenQuest = 0;
  v25 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    method,
                                                    v2,
                                                    v3);
  System_Collections_Generic_List_int____ctor(
    v25,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
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
      baseUsrSvtData = (UserServantEntity_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
      resUsrSvtData = this->fields.resUsrSvtData;
      if ( !resUsrSvtData )
        goto LABEL_31;
      v31 = (clsQuestCheck_o *)baseUsrSvtData;
      v33 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
      v32 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v26);
      *(_QWORD *)&v46.fields.currentCryptoKey = v33;
      *(_QWORD *)&v46.fields.fakeValue = v32;
      baseUsrSvtData = (UserServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                v46,
                                                0LL);
      if ( !v31 )
LABEL_31:
        sub_1BCAA3C(baseUsrSvtData, v26);
      v34 = clsQuestCheck__GetReleaseQuestIdByServantLimit_34169000(
              v31,
              (int32_t)baseUsrSvtData,
              this->fields.svtCollectionLimitCnt,
              LimitCntMax,
              494,
              0LL);
    }
    else
    {
      baseUsrSvtData = (UserServantEntity_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
      v36 = this->fields.resUsrSvtData;
      if ( !v36 )
        goto LABEL_31;
      v37 = (clsQuestCheck_o *)baseUsrSvtData;
      v39 = *(_QWORD *)&v36->fields.svtId.fields.currentCryptoKey;
      v38 = *(_QWORD *)&v36->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v26);
      *(_QWORD *)&v47.fields.currentCryptoKey = v39;
      *(_QWORD *)&v47.fields.fakeValue = v38;
      baseUsrSvtData = (UserServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                v47,
                                                0LL);
      if ( !v37 )
        goto LABEL_31;
      v34 = clsQuestCheck__GetReleaseQuestIdByServantLimit(
              v37,
              (int32_t)baseUsrSvtData,
              this->fields.svtCollectionLimitCnt,
              0LL);
    }
    v40 = v34;
    storyQuestInfoTitle = this->fields.storyQuestInfoTitle;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v35);
    baseUsrSvtData = (UserServantEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9780/*"OPEN_STORY_QUEST_TITLE"*/, 0LL);
    if ( storyQuestInfoTitle )
    {
      UILabel__set_text(storyQuestInfoTitle, (System_String_o *)baseUsrSvtData, 0LL);
      heroQuestInfoTitle = this->fields.heroQuestInfoTitle;
      baseUsrSvtData = (UserServantEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9769/*"OPEN_HERO_QUEST_TITLE"*/, 0LL);
      if ( heroQuestInfoTitle )
      {
        UILabel__set_text(heroQuestInfoTitle, (System_String_o *)baseUsrSvtData, 0LL);
        baseUsrSvtData = (UserServantEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( baseUsrSvtData )
        {
          DataManager__GetMasterData_object_(
            (DataManager_o *)baseUsrSvtData,
            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
          if ( v40 && v40->fields._size >= 1 )
          {
            v43 = 0;
            do
            {
              if ( System_Collections_Generic_List_int___get_Item(
                     v40,
                     v43,
                     (const MethodInfo_3584948 *)Method_System_Collections_Generic_List_int__get_Item__) >= 1 )
              {
                Item = System_Collections_Generic_List_int___get_Item(
                         v40,
                         v43,
                         (const MethodInfo_3584948 *)Method_System_Collections_Generic_List_int__get_Item__);
                LimitUpResultCheckComponent__SetResInfoListQuestInfo(this, Item, v45);
              }
              ++v43;
            }
            while ( v43 < v40->fields._size );
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
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  struct UserServantEntity_o **p_resUsrSvtData; // x21
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  System_Collections_Generic_List_object__o *v34; // x22
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  __int64 v41; // x1
  UserServantEntity_o *resUsrSvtData; // x0
  __int64 v43; // x1
  struct UserServantEntity_o *v44; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v45; // x21
  __int64 v46; // x22
  __int64 v47; // x23
  const MethodInfo *v48; // x1
  const MethodInfo *v49; // x2
  int32_t v50; // w21
  const MethodInfo *v51; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16

  if ( (byte_4B19BC1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantMaster___, *(_QWORD *)&kind, baseData);
    sub_1BCA7E0(&DataManager_TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject___ctor__, v18, v19);
    sub_1BCA7E0(&System_Collections_Generic_List_GameObject__TypeInfo, v20, v21);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v22, v23);
    byte_4B19BC1 = 1;
  }
  this->fields.baseUsrSvtData = baseData;
  sub_1BCA784(
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
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.resUsrSvtData, (int64_t)resData, v25, v26, v27, v28, v29, v30);
  this->fields.svtCollectionLimitCnt = baseCollectionLimitCnt;
  this->fields.kind = kind;
  v34 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_GameObject__TypeInfo,
                                                       v31,
                                                       v32,
                                                       v33);
  System_Collections_Generic_List_object____ctor(
    v34,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.resInfoList = (struct System_Collections_Generic_List_GameObject__o *)v34;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.resInfoList, (int64_t)v34, v35, v36, v37, v38, v39, v40);
  *(_WORD *)&this->fields.isGetNewSkill = 0;
  this->fields.isOpenQuest = 0;
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_17;
  this->fields.transformationCount = UserServantEntity__GetTransformCount(resUsrSvtData, 1, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v43);
  resUsrSvtData = (UserServantEntity_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantMaster___);
  v44 = *p_resUsrSvtData;
  if ( !*p_resUsrSvtData )
    goto LABEL_17;
  v45 = (DataMasterBase_TMaster__TEntity__PKType__o *)resUsrSvtData;
  v47 = *(_QWORD *)&v44->fields.svtId.fields.currentCryptoKey;
  v46 = *(_QWORD *)&v44->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v41);
  *(_QWORD *)&v52.fields.currentCryptoKey = v47;
  *(_QWORD *)&v52.fields.fakeValue = v46;
  resUsrSvtData = (UserServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v52, 0LL);
  if ( !v45
    || (resUsrSvtData = (UserServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                                 v45,
                                                 (int32_t)resUsrSvtData,
                                                 (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_17:
    sub_1BCAA3C(resUsrSvtData, v41);
  }
  if ( ServantEntity__get_IsServant((ServantEntity_o *)resUsrSvtData, 0LL) )
  {
    if ( this->fields.transformationCount >= 1 )
    {
      v50 = 0;
      do
        LimitUpResultCheckComponent__checkGetSkill(this, v50++, v49);
      while ( v50 < this->fields.transformationCount );
    }
    LimitUpResultCheckComponent__checkQuestOpen(this, v48);
    LimitUpResultCheckComponent__checkLimitUpReward(this, rewardGiftDataList, v51);
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
    sub_1BCAA44(this, data);
  if ( data->m_Items[1] == this->fields.afterLimitCnt )
  {
    if ( max_length > 1 )
    {
      giftEntity = this->fields.giftEntity;
      if ( giftEntity )
        return data->m_Items[2] == giftEntity->fields.id;
LABEL_9:
      sub_1BCAA3C(this, data);
    }
    goto LABEL_8;
  }
  return 0;
}