void __fastcall LimitUpResultCheckComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct LimitUpResultCheckComponent_StaticFields *static_fields; // x8

  if ( (byte_4BB8173 & 1) == 0 )
  {
    sub_1C13D24(&LimitUpResultCheckComponent_TypeInfo, v1);
    byte_4BB8173 = 1;
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

  if ( (byte_4BB816D & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_GameObject__get_Count__, method);
    byte_4BB816D = 1;
  }
  resInfoList = this->fields.resInfoList;
  return !resInfoList || resInfoList->fields._size <= 0;
}


Il2CppObject *__fastcall LimitUpResultCheckComponent__CreateResultInfoObject_object_(
        LimitUpResultCheckComponent_o *this,
        Il2CppObject *origin,
        const MethodInfo_3007FEC *method)
{
  UnityEngine_Component_o *v5; // x21
  UnityEngine_Transform_o *transform; // x0

  v5 = (UnityEngine_Component_o *)this;
  if ( !method->rgctx_data )
    this = (LimitUpResultCheckComponent_o *)sub_1C65C5C();
  if ( !v5 || (this = (LimitUpResultCheckComponent_o *)UnityEngine_Component__get_gameObject(v5, 0LL)) == 0LL )
    sub_1C13F80(this, origin);
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  return BaseMonoBehaviour__createObject_object_(
           (BaseMonoBehaviour_o *)v5,
           origin,
           transform,
           0LL,
           (const MethodInfo_2F79D4C *)method->rgctx_data->_1_BaseMonoBehaviour_createObject_T_);
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
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  int64_t v31; // x1
  Il2CppClass **v32; // x0
  OpenInfoWindowComponent_o *v33; // x21
  _BOOL4 isGetNewSkill; // w8
  int32_t monitor; // w4
  bool v36; // w5

  if ( (byte_4BB816C & 1) == 0 )
  {
    sub_1C13D24(&LimitUpResultCheckComponent_TypeInfo, callback);
    sub_1C13D24(&Method_System_Collections_Generic_List_GameObject__Add__, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_GameObject__RemoveAt__, v8);
    sub_1C13D24(&Method_System_Collections_Generic_List_GameObject___ctor__, v9);
    sub_1C13D24(&Method_System_Collections_Generic_List_GameObject__get_Count__, v10);
    sub_1C13D24(&Method_System_Collections_Generic_List_GameObject__get_Item__, v11);
    sub_1C13D24(&System_Collections_Generic_List_GameObject__TypeInfo, v12);
    byte_4BB816C = 1;
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
  v18 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  openInfowindowComp = (OpenInfoWindowComponent_o *)this->fields.resInfoList;
  if ( !openInfowindowComp )
LABEL_40:
    sub_1C13F80(openInfowindowComp, callback);
  v21 = 0;
  while ( SLODWORD(openInfowindowComp->fields.m_CancellationTokenSource) > 0
       && v21 < CONCURRENTLY_DISP_NUM
       && (v21 == 0 || !this->fields.isChangeSkill) )
  {
    openInfowindowComp = (OpenInfoWindowComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                        (System_Collections_Generic_List_object__o *)openInfowindowComp,
                                                        0,
                                                        (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( v18 )
    {
      items = v18->fields._items;
      v29 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++v18->fields._version;
      if ( items )
      {
        size = v18->fields._size;
        v31 = (int64_t)openInfowindowComp;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v18,
            (Il2CppObject *)openInfowindowComp,
            *(const MethodInfo_362D1CC **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
        }
        else
        {
          v32 = &items->obj.klass + size;
          v18->fields._size = size + 1;
          v32[4] = (Il2CppClass *)v31;
          sub_1C13CC8((PartyOrganizationUtility_o *)(v32 + 4), v31, v22, v23, v24, v25, v26, v27);
        }
        openInfowindowComp = (OpenInfoWindowComponent_o *)this->fields.resInfoList;
        if ( openInfowindowComp )
        {
          System_Collections_Generic_List_object___RemoveAt(
            (System_Collections_Generic_List_object__o *)openInfowindowComp,
            0,
            (const MethodInfo_362E9A0 *)Method_System_Collections_Generic_List_GameObject__RemoveAt__);
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
    v33 = this->fields.openInfowindowComp;
    if ( isGetNewSkill )
    {
      monitor = 125;
      v36 = 1;
      goto LABEL_38;
    }
  }
  else
  {
    v33 = this->fields.openInfowindowComp;
  }
  openInfowindowComp = (OpenInfoWindowComponent_o *)LimitUpResultCheckComponent_TypeInfo;
  if ( !LimitUpResultCheckComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LimitUpResultCheckComponent_TypeInfo);
    openInfowindowComp = (OpenInfoWindowComponent_o *)LimitUpResultCheckComponent_TypeInfo;
  }
  v36 = 0;
  monitor = (int32_t)openInfowindowComp[1].fields.basePanel->monitor;
LABEL_38:
  if ( !v33 )
    goto LABEL_40;
  OpenInfoWindowComponent__OpenLimitUpResultInfo(
    v33,
    (System_Collections_Generic_List_GameObject__o *)v18,
    callback,
    isFirstDisp,
    monitor,
    v36,
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
      sub_1C13F80(openInfowindowComp, isActive);
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
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  struct System_Object_array *items; // x8
  _QWORD *v41; // x9
  __int64 size; // x10
  int64_t v43; // x1
  Il2CppClass **v44; // x0

  if ( (byte_4BB816F & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMaster_ConstantStrMaster___, *(_QWORD *)&questId);
    sub_1C13D24(&Method_DataManager_GetMaster_QuestMaster___, v5);
    sub_1C13D24(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v6);
    sub_1C13D24(&DataManager_TypeInfo, v7);
    sub_1C13D24(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v8);
    sub_1C13D24(&Method_LimitUpResultCheckComponent_CreateResultInfoObject_LimitUpResultInfoComponent___, v9);
    sub_1C13D24(&Method_System_Collections_Generic_List_GameObject__Add__, v10);
    sub_1C13D24(&LocalizationManager_TypeInfo, v11);
    sub_1C13D24(&StringLiteral_9823/*"OPEN_HERO_QUEST_TITLE"*/, v12);
    sub_1C13D24(&StringLiteral_9829/*"OPEN_MAIN_SCENARIO_TITLE"*/, v13);
    sub_1C13D24(&StringLiteral_9820/*"OPEN_EVENT_QUEST_NAME"*/, v14);
    sub_1C13D24(&StringLiteral_9821/*"OPEN_EVENT_QUEST_NAME_LIMIT_UP"*/, v15);
    sub_1C13D24(&StringLiteral_9815/*"OPENING_MOVIE_SKIP_CONFIRM_DIALOG_SKIP"*/, v16);
    sub_1C13D24(&StringLiteral_9816/*"OPENING_MOVIE_SKIP_CONFIRM_DIALOG_TITLE"*/, v17);
    sub_1C13D24(&StringLiteral_9822/*"OPEN_EVENT_QUEST_TITLE_LIMIT_UP"*/, v18);
    byte_4BB816F = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  Entity = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !Entity )
    goto LABEL_43;
  Entity = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                           Entity,
                                                           questId,
                                                           (const MethodInfo_3238624 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
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
        v25 = LocalizationManager__Get((System_String_o *)StringLiteral_9821/*"OPEN_EVENT_QUEST_NAME_LIMIT_UP"*/, 0LL);
        v26 = &StringLiteral_9820/*"OPEN_EVENT_QUEST_NAME"*/;
      }
      else
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Entity = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_ConstantStrMaster___);
        if ( !Entity )
          goto LABEL_43;
        Value = (Il2CppObject *)ConstantStrMaster__GetValue(
                                  (ConstantStrMaster_o *)Entity,
                                  (System_String_o *)StringLiteral_9823/*"OPEN_HERO_QUEST_TITLE"*/,
                                  0LL);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v30 = LocalizationManager__Get((System_String_o *)StringLiteral_9822/*"OPEN_EVENT_QUEST_TITLE_LIMIT_UP"*/, 0LL);
        v25 = System_String__Format(v30, Value, 0LL);
LABEL_31:
        v26 = &StringLiteral_9815/*"OPENING_MOVIE_SKIP_CONFIRM_DIALOG_SKIP"*/;
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
                                                                 (const MethodInfo_3007FEC *)Method_LimitUpResultCheckComponent_CreateResultInfoObject_LimitUpResultInfoComponent___);
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
            v41 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++resInfoList->fields._version;
            if ( items )
            {
              size = resInfoList->fields._size;
              v43 = (int64_t)Entity;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  resInfoList,
                  (Il2CppObject *)Entity,
                  *(const MethodInfo_362D1CC **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
              }
              else
              {
                resInfoList->fields._size = size + 1;
                v44 = &items->obj.klass + size;
                v44[4] = (Il2CppClass *)v43;
                sub_1C13CC8((PartyOrganizationUtility_o *)(v44 + 4), v43, v34, v35, v36, v37, v38, v39);
              }
              return;
            }
          }
        }
LABEL_43:
        sub_1C13F80(Entity, v21);
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
      v28 = (System_String_o **)&StringLiteral_9821/*"OPEN_EVENT_QUEST_NAME_LIMIT_UP"*/;
      if ( !IsLimitCountSealQuest )
        v28 = (System_String_o **)&StringLiteral_9829/*"OPEN_MAIN_SCENARIO_TITLE"*/;
      if ( IsLimitCountSealQuest )
        v26 = &StringLiteral_9820/*"OPEN_EVENT_QUEST_NAME"*/;
      else
        v26 = &StringLiteral_9815/*"OPENING_MOVIE_SKIP_CONFIRM_DIALOG_SKIP"*/;
      v25 = LocalizationManager__Get(*v28, 0LL);
      goto LABEL_32;
    case 4:
      goto LABEL_33;
    case 5:
    case 6:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v25 = LocalizationManager__Get((System_String_o *)StringLiteral_9816/*"OPENING_MOVIE_SKIP_CONFIRM_DIALOG_TITLE"*/, 0LL);
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
  int64_t Master_object; // x0
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
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  struct System_Object_array *items; // x8
  _QWORD *v45; // x9
  __int64 size; // x10
  int64_t v47; // x1
  Il2CppClass **v48; // x0
  TransformServantInfo_o *transformInfo; // [xsp+8h] [xbp-68h] BYREF
  System_String_o *detail; // [xsp+10h] [xbp-60h] BYREF
  System_String_o *name; // [xsp+18h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16

  if ( (byte_4BB8171 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMaster_ServantSkillMaster___, *(_QWORD *)&skillId);
    sub_1C13D24(&Method_DataManager_GetMaster_SkillMaster___, v9);
    sub_1C13D24(&DataManager_TypeInfo, v10);
    sub_1C13D24(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v11);
    sub_1C13D24(&Method_LimitUpResultCheckComponent_CreateResultInfoObject_LimitUpResultInfoSkillComponent___, v12);
    sub_1C13D24(&Method_System_Collections_Generic_List_GameObject__Add__, v13);
    sub_1C13D24(&Method_System_Collections_Generic_List_GameObject__get_Count__, v14);
    sub_1C13D24(&LocalizationManager_TypeInfo, v15);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
    sub_1C13D24(&StringLiteral_7086/*"GET_MULTI"*/, v17);
    sub_1C13D24(&StringLiteral_7085/*"GET_LIMIT_UP_REWARD_TITLE"*/, v18);
    byte_4BB8171 = 1;
  }
  detail = 0LL;
  name = 0LL;
  transformInfo = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_SkillMaster___);
  if ( !Master_object )
    goto LABEL_33;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             skillId,
             (const MethodInfo_3238624 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_7086/*"GET_MULTI"*/, 0LL);
  if ( !this->fields.resUsrSvtData )
    goto LABEL_33;
  v22 = (System_String_o *)Master_object;
  Master_object = UserServantEntity__getSkillLevel(this->fields.resUsrSvtData, targetIdx, 0LL);
  if ( !Entity )
    goto LABEL_33;
  SkillEntity__getSkillMessageInfo((SkillEntity_o *)Entity, &name, &detail, Master_object, 0LL);
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_7085/*"GET_LIMIT_UP_REWARD_TITLE"*/, 0LL);
  v24 = System_String__Format(v23, (Il2CppObject *)name, 0LL);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_ServantSkillMaster___);
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_33;
  v26 = (ServantSkillMaster_o *)Master_object;
  v28 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v27 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v52.fields.currentCryptoKey = v28;
  *(_QWORD *)&v52.fields.fakeValue = v27;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v52, 0LL);
  if ( !v26 )
    goto LABEL_33;
  EntityFromSkillId = ServantSkillMaster__getEntityFromSkillId(v26, Master_object, targetIdx + 1, skillId, 0LL);
  v30 = this->fields.transformationCount <= 1 ? 128LL : 136LL;
  v31 = EntityFromSkillId;
  Master_object = (int64_t)LimitUpResultCheckComponent__CreateResultInfoObject_object_(
                             this,
                             *(Il2CppObject **)((char *)&this->klass + v30),
                             (const MethodInfo_3007FEC *)Method_LimitUpResultCheckComponent_CreateResultInfoObject_LimitUpResultInfoSkillComponent___);
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
  Master_object = (int64_t)this->fields.baseUsrSvtData;
  if ( !Master_object
    || (Master_object = UserServantEntity__GetTransformedServantInfo(
                          (UserServantEntity_o *)Master_object,
                          &transformInfo,
                          transformIndex,
                          0LL),
        !transformInfo)
    || (Master_object = (int64_t)v33->fields.battleNameLabel) == 0 )
  {
LABEL_33:
    sub_1C13F80(Master_object, v20);
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
  Master_object = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v33, 0LL);
  if ( !v37 )
    goto LABEL_33;
  items = v37->fields._items;
  v45 = Method_System_Collections_Generic_List_GameObject__Add__;
  ++v37->fields._version;
  if ( !items )
    goto LABEL_33;
  size = v37->fields._size;
  v47 = Master_object;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v37,
      (Il2CppObject *)Master_object,
      *(const MethodInfo_362D1CC **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
  }
  else
  {
    v48 = &items->obj.klass + size;
    v37->fields._size = size + 1;
    v48[4] = (Il2CppClass *)v47;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v48 + 4), v47, v38, v39, v40, v41, v42, v43);
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
  LimitUpResultCheckComponent_o *v24; // x23
  int max_length; // w8
  unsigned int v26; // w9
  unsigned int v27; // w22
  char *v28; // x24
  int32_t *v29; // x24
  int v30; // w26
  int v31; // t1
  char *v32; // x25
  int v33; // w9
  int32_t *v34; // x25
  int v35; // t1
  const MethodInfo *v36; // x4
  int32_t v37; // w21
  int32_t v38; // w20
  DataMasterBase_TMaster__TEntity__PKType__o *v39; // x24
  Il2CppObject *Entity; // x23
  SkillEntity_o *v41; // x20
  int32_t v42; // w24
  int32_t SkillLevel; // w0
  UILabel_o *skillChangeInfoTitle; // x22
  int32_t v45; // w21
  UILabel_o *skillChangeInfoSubTitleOld; // x22
  UILabel_o *skillChangeInfoSubTitleNow; // x22
  UILabel_o *skillChangeInfoNameOld; // x22
  System_String_o *v49; // x0
  UILabel_o *skillChangeInfoNameNow; // x20
  System_String_o *v51; // x0
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  __int64 v58; // x8
  _QWORD *v59; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v61; // x8
  System_String_o *detail; // [xsp+8h] [xbp-58h] BYREF
  System_String_o *name; // [xsp+18h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v64; // 0:x0.16

  v3 = transformIndex;
  v4 = this;
  if ( (byte_4BB8170 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_SkillMaster___, *(_QWORD *)&transformIndex);
    sub_1C13D24(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v5);
    sub_1C13D24(&Method_System_Collections_Generic_List_GameObject__Add__, v6);
    sub_1C13D24(&LocalizationManager_TypeInfo, v7);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_1C13D24(&StringLiteral_7084/*"GET_LIMIT_UP_REWARD_DETAIL"*/, v10);
    sub_1C13D24(&StringLiteral_2058/*"AES"*/, v11);
    sub_1C13D24(&StringLiteral_3476/*"CHANGE_INFO"*/, v12);
    this = (LimitUpResultCheckComponent_o *)sub_1C13D24(&StringLiteral_3040/*"BECAME INVISIBLE"*/, v13);
    byte_4BB8170 = 1;
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
  *(_QWORD *)&v64.fields.currentCryptoKey = v16;
  *(_QWORD *)&v64.fields.fakeValue = v15;
  this = (LimitUpResultCheckComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v64, 0LL);
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
      sub_1C13F80(this, *(_QWORD *)&transformIndex);
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
                                            0LL);
  v24 = this;
  if ( !v20 )
    goto LABEL_57;
  max_length = v20->max_length;
  if ( max_length < 1 )
    return;
  v26 = 0;
  while ( 1 )
  {
    if ( max_length == v26 )
      goto LABEL_56;
    v27 = v26;
    v28 = (char *)v20 + 4 * (int)v26;
    v31 = *((_DWORD *)v28 + 8);
    v29 = (int32_t *)(v28 + 32);
    v30 = v31;
    if ( !this )
      goto LABEL_57;
    if ( v26 >= LODWORD(this->fields.m_CancellationTokenSource) )
      goto LABEL_56;
    v32 = (char *)this + 4 * (int)v26;
    v35 = *((_DWORD *)v32 + 8);
    v34 = (int32_t *)(v32 + 32);
    v33 = v35;
    if ( v30 != v35 && v33 >= 1 )
      break;
    v26 = v27 + 1;
    if ( max_length == v27 + 1 )
      return;
  }
  this = (LimitUpResultCheckComponent_o *)v4->fields.resUsrSvtData;
  if ( !this )
    goto LABEL_57;
  this = (LimitUpResultCheckComponent_o *)UserServantEntity__IsHeroine((UserServantEntity_o *)this, 0LL);
  if ( v30 < 1 || ((unsigned __int8)this & 1) == 0 )
  {
    if ( v27 < LODWORD(v24->fields.m_CancellationTokenSource) )
    {
      LimitUpResultCheckComponent__SetSkillRelease(v4, *v34, v27, v3, v36);
      return;
    }
LABEL_56:
    sub_1C13F88(this, *(_QWORD *)&transformIndex);
  }
  if ( v27 >= v20->max_length || v27 >= LODWORD(v24->fields.m_CancellationTokenSource) )
    goto LABEL_56;
  v37 = *v29;
  v38 = *v34;
  this = (LimitUpResultCheckComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_57;
  this = (LimitUpResultCheckComponent_o *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)this,
                                            (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !this )
    goto LABEL_57;
  v39 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             v37,
             (const MethodInfo_3238624 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  this = (LimitUpResultCheckComponent_o *)DataMasterBase_object__object__int___GetEntity(
                                            v39,
                                            v38,
                                            (const MethodInfo_3238624 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( !v4->fields.baseUsrSvtData )
    goto LABEL_57;
  v41 = (SkillEntity_o *)this;
  this = (LimitUpResultCheckComponent_o *)UserServantEntity__getSkillLevel(v4->fields.baseUsrSvtData, v27, 0LL);
  if ( !v4->fields.resUsrSvtData )
    goto LABEL_57;
  v42 = (int)this;
  SkillLevel = UserServantEntity__getSkillLevel(v4->fields.resUsrSvtData, v27, 0LL);
  skillChangeInfoTitle = v4->fields.skillChangeInfoTitle;
  v45 = SkillLevel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (LimitUpResultCheckComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3476/*"CHANGE_INFO"*/, 0LL);
  if ( !skillChangeInfoTitle )
    goto LABEL_57;
  UILabel__set_text(skillChangeInfoTitle, (System_String_o *)this, 0LL);
  skillChangeInfoSubTitleOld = v4->fields.skillChangeInfoSubTitleOld;
  this = (LimitUpResultCheckComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3040/*"BECAME INVISIBLE"*/, 0LL);
  if ( !skillChangeInfoSubTitleOld )
    goto LABEL_57;
  UILabel__set_text(skillChangeInfoSubTitleOld, (System_String_o *)this, 0LL);
  skillChangeInfoSubTitleNow = v4->fields.skillChangeInfoSubTitleNow;
  this = (LimitUpResultCheckComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2058/*"AES"*/, 0LL);
  if ( !skillChangeInfoSubTitleNow )
    goto LABEL_57;
  UILabel__set_text(skillChangeInfoSubTitleNow, (System_String_o *)this, 0LL);
  if ( !Entity )
    goto LABEL_57;
  SkillEntity__getSkillMessageInfo((SkillEntity_o *)Entity, &name, &detail, v42, 0LL);
  skillChangeInfoNameOld = v4->fields.skillChangeInfoNameOld;
  v49 = LocalizationManager__Get((System_String_o *)StringLiteral_7084/*"GET_LIMIT_UP_REWARD_DETAIL"*/, 0LL);
  this = (LimitUpResultCheckComponent_o *)System_String__Format(v49, (Il2CppObject *)name, 0LL);
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
  if ( !v41 )
    goto LABEL_57;
  SkillEntity__getSkillMessageInfo(v41, &name, &detail, v45, 0LL);
  skillChangeInfoNameNow = v4->fields.skillChangeInfoNameNow;
  v51 = LocalizationManager__Get((System_String_o *)StringLiteral_7084/*"GET_LIMIT_UP_REWARD_DETAIL"*/, 0LL);
  this = (LimitUpResultCheckComponent_o *)System_String__Format(v51, (Il2CppObject *)name, 0LL);
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
  v58 = *(_QWORD *)&this->fields.m_CachedPtr;
  v59 = Method_System_Collections_Generic_List_GameObject__Add__;
  ++HIDWORD(this->fields.m_CancellationTokenSource);
  if ( !v58 )
    goto LABEL_57;
  m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v58 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      *(Il2CppObject **)&transformIndex,
      *(const MethodInfo_362D1CC **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
  }
  else
  {
    v61 = v58 + 8 * m_CancellationTokenSource_low;
    LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_QWORD *)(v61 + 32) = *(_QWORD *)&transformIndex;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v61 + 32), *(int64_t *)&transformIndex, v52, v53, v54, v55, v56, v57);
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
  int64_t LimitCntMax; // x0
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
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  System_String_o *v37; // x23
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  Il2CppObject *v41; // x25
  System_String_o *v42; // x24
  Il2CppObject *v43; // x0
  System_String_o *v44; // x24
  Il2CppObject *v45; // x25
  System_Func_object__bool__o *v46; // x26
  bool v47; // w20
  const MethodInfo *v48; // x5
  System_Collections_Generic_List_object__o *resInfoList; // x19
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  struct System_Object_array *items; // x8
  _QWORD *v57; // x9
  __int64 size; // x10
  int64_t v59; // x1
  Il2CppClass **v60; // x0
  int v61; // [xsp+4h] [xbp-5Ch] BYREF
  System_String_o *countText; // [xsp+8h] [xbp-58h] BYREF
  System_String_o *nameText; // [xsp+18h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v64; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v65; // 0:x0.16

  if ( (byte_4BB8172 & 1) == 0 )
  {
    sub_1C13D24(&Method_BasicHelper_Any_int_____, rewardGiftDataList);
    sub_1C13D24(&Method_DataManager_GetMaster_CombineLimitGiftMaster___, v5);
    sub_1C13D24(&Method_DataManager_GetMaster_GiftMaster___, v6);
    sub_1C13D24(&DataManager_TypeInfo, v7);
    sub_1C13D24(&System_Func_int____bool__TypeInfo, v8);
    sub_1C13D24(&int_TypeInfo, v9);
    sub_1C13D24(&Method_LimitUpResultCheckComponent_CreateResultInfoObject_LimitUpResultInfoRewardComponent___, v10);
    sub_1C13D24(&Method_System_Collections_Generic_List_GameObject__Add__, v11);
    sub_1C13D24(&LocalizationManager_TypeInfo, v12);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_1C13D24(&Method_LimitUpResultCheckComponent___c__DisplayClass45_0__checkLimitUpReward_b__0__, v14);
    sub_1C13D24(&LimitUpResultCheckComponent___c__DisplayClass45_0_TypeInfo, v15);
    sub_1C13D24(&StringLiteral_7081/*"GET_FRIEND_POINT_SERVANT_USED_RECOMMENDED_TITLE"*/, v16);
    sub_1C13D24(&StringLiteral_7082/*"GET_FRIEND_POINT_SUPPORT_BTN"*/, v17);
    byte_4BB8172 = 1;
  }
  nameText = 0LL;
  countText = 0LL;
  v18 = sub_1C13F70(LimitUpResultCheckComponent___c__DisplayClass45_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v18, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_CombineLimitGiftMaster___);
  LimitCntMax = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_GiftMaster___);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_34;
  v23 = (GiftMaster_o *)LimitCntMax;
  v25 = *(_QWORD *)&baseUsrSvtData->fields.limitCount.fields.currentCryptoKey;
  v24 = *(_QWORD *)&baseUsrSvtData->fields.limitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v64.fields.currentCryptoKey = v25;
  *(_QWORD *)&v64.fields.fakeValue = v24;
  LimitCntMax = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v64, 0LL);
  if ( !v18 )
    goto LABEL_34;
  *(_DWORD *)(v18 + 16) = LimitCntMax + 1;
  LimitCntMax = (int64_t)this->fields.baseUsrSvtData;
  if ( !LimitCntMax )
    goto LABEL_34;
  LimitCntMax = UserServantEntity__getLimitCntMax((UserServantEntity_o *)LimitCntMax, 0LL);
  if ( (int)LimitCntMax < *(_DWORD *)(v18 + 16) )
  {
    LimitCntMax = (int64_t)this->fields.baseUsrSvtData;
    if ( !LimitCntMax )
      goto LABEL_34;
    LimitCntMax = UserServantEntity__getLimitCntMax((UserServantEntity_o *)LimitCntMax, 0LL);
    *(_DWORD *)(v18 + 16) = LimitCntMax;
  }
  v26 = this->fields.baseUsrSvtData;
  if ( !v26 )
    goto LABEL_34;
  v28 = *(_QWORD *)&v26->fields.svtId.fields.currentCryptoKey;
  v27 = *(_QWORD *)&v26->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v65.fields.currentCryptoKey = v28;
  *(_QWORD *)&v65.fields.fakeValue = v27;
  LimitCntMax = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v65, 0LL);
  if ( !Master_object )
    goto LABEL_34;
  LimitCntMax = CombineLimitGiftMaster__GetCombineLimitGiftId(
                  (CombineLimitGiftMaster_o *)Master_object,
                  LimitCntMax,
                  *(_DWORD *)(v18 + 16),
                  0LL);
  if ( !(_DWORD)LimitCntMax )
    return;
  if ( !v23 )
    goto LABEL_34;
  DataById = GiftMaster__getDataById(v23, LimitCntMax, 0LL);
  *(_QWORD *)(v18 + 24) = DataById;
  v30 = v18 + 24;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v18 + 24), (int64_t)DataById, v31, v32, v33, v34, v35, v36);
  if ( !*(_QWORD *)(v18 + 24) )
    return;
  GiftEntity__GetInfo(*(GiftEntity_o **)(v18 + 24), &nameText, &countText, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v37 = LocalizationManager__Get((System_String_o *)StringLiteral_7082/*"GET_FRIEND_POINT_SUPPORT_BTN"*/, 0LL);
  LimitCntMax = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_7081/*"GET_FRIEND_POINT_SERVANT_USED_RECOMMENDED_TITLE"*/, 0LL);
  if ( !*(_QWORD *)v30 )
    goto LABEL_34;
  v41 = (Il2CppObject *)nameText;
  v42 = (System_String_o *)LimitCntMax;
  v61 = *(_DWORD *)(*(_QWORD *)v30 + 28LL);
  v43 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v61, v38, v39, v40);
  v44 = System_String__Format_62982316(v42, v41, v43, 0LL);
  v45 = LimitUpResultCheckComponent__CreateResultInfoObject_object_(
          this,
          (Il2CppObject *)this->fields.limitUpResultInfoRewardOrigin,
          (const MethodInfo_3007FEC *)Method_LimitUpResultCheckComponent_CreateResultInfoObject_LimitUpResultInfoRewardComponent___);
  if ( rewardGiftDataList )
  {
    v46 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_int____bool__TypeInfo);
    System_Func_object__bool____ctor(
      v46,
      (Il2CppObject *)v18,
      Method_LimitUpResultCheckComponent___c__DisplayClass45_0__checkLimitUpReward_b__0__,
      0LL);
    v47 = !BasicHelper__Any_object_(
             (System_Collections_Generic_List_T__o *)rewardGiftDataList,
             (System_Func_T__bool__o *)v46,
             (const MethodInfo_2F7A3D8 *)Method_BasicHelper_Any_int_____);
  }
  else
  {
    v47 = 1;
  }
  LimitCntMax = *(_QWORD *)v30;
  if ( !*(_QWORD *)v30
    || (LimitCntMax = GiftEntity__getIconImageId((GiftEntity_o *)LimitCntMax, 0LL), !v45)
    || (LimitUpResultInfoRewardComponent__Setup(
          (LimitUpResultInfoRewardComponent_o *)v45,
          LimitCntMax,
          v47,
          v37,
          v44,
          v48),
        resInfoList = (System_Collections_Generic_List_object__o *)this->fields.resInfoList,
        LimitCntMax = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v45, 0LL),
        !resInfoList)
    || (items = resInfoList->fields._items,
        v57 = Method_System_Collections_Generic_List_GameObject__Add__,
        ++resInfoList->fields._version,
        !items) )
  {
LABEL_34:
    sub_1C13F80(LimitCntMax, v21);
  }
  size = resInfoList->fields._size;
  v59 = LimitCntMax;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      resInfoList,
      (Il2CppObject *)LimitCntMax,
      *(const MethodInfo_362D1CC **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
  }
  else
  {
    v60 = &items->obj.klass + size;
    resInfoList->fields._size = size + 1;
    v60[4] = (Il2CppClass *)v59;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v60 + 4), v59, v50, v51, v52, v53, v54, v55);
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

  if ( (byte_4BB816E & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, method);
    sub_1C13D24(&Method_System_Collections_Generic_List_int___ctor__, v3);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__get_Count__, v4);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__get_Item__, v5);
    sub_1C13D24(&System_Collections_Generic_List_int__TypeInfo, v6);
    sub_1C13D24(&LocalizationManager_TypeInfo, v7);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_1C13D24(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v10);
    sub_1C13D24(&StringLiteral_9828/*"OPEN_MAIN_QUEST_TITLE_LIMIT_UP"*/, v11);
    sub_1C13D24(&StringLiteral_9817/*"OPEN_BROWSER"*/, v12);
    byte_4BB816E = 1;
  }
  this->fields.isOpenQuest = 0;
  v13 = (System_Collections_Generic_List_int__o *)sub_1C13F70(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v13,
    (const MethodInfo_360F954 *)Method_System_Collections_Generic_List_int___ctor__);
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
      baseUsrSvtData = (UserServantEntity_o *)SingletonTemplate_object___get_Instance((const MethodInfo_386A7A8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
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
      baseUsrSvtData = (UserServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(
                                                v33,
                                                0LL);
      if ( !v19 )
LABEL_31:
        sub_1C13F80(baseUsrSvtData, v14);
      v22 = clsQuestCheck__GetReleaseQuestIdByServantLimit_34549460(
              v19,
              (int32_t)baseUsrSvtData,
              this->fields.svtCollectionLimitCnt,
              LimitCntMax,
              494,
              0LL);
    }
    else
    {
      baseUsrSvtData = (UserServantEntity_o *)SingletonTemplate_object___get_Instance((const MethodInfo_386A7A8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
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
      baseUsrSvtData = (UserServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(
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
    baseUsrSvtData = (UserServantEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9828/*"OPEN_MAIN_QUEST_TITLE_LIMIT_UP"*/, 0LL);
    if ( storyQuestInfoTitle )
    {
      UILabel__set_text(storyQuestInfoTitle, (System_String_o *)baseUsrSvtData, 0LL);
      heroQuestInfoTitle = this->fields.heroQuestInfoTitle;
      baseUsrSvtData = (UserServantEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9817/*"OPEN_BROWSER"*/, 0LL);
      if ( heroQuestInfoTitle )
      {
        UILabel__set_text(heroQuestInfoTitle, (System_String_o *)baseUsrSvtData, 0LL);
        baseUsrSvtData = (UserServantEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( baseUsrSvtData )
        {
          DataManager__GetMasterData_object_(
            (DataManager_o *)baseUsrSvtData,
            (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
          if ( v27 && v27->fields._size >= 1 )
          {
            v30 = 0;
            do
            {
              if ( System_Collections_Generic_List_int___get_Item(
                     v27,
                     v30,
                     (const MethodInfo_360FEB8 *)Method_System_Collections_Generic_List_int__get_Item__) >= 1 )
              {
                Item = System_Collections_Generic_List_int___get_Item(
                         v27,
                         v30,
                         (const MethodInfo_360FEB8 *)Method_System_Collections_Generic_List_int__get_Item__);
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
  PartyListViewItem_o *v7; // x7
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  struct UserServantEntity_o **p_resUsrSvtData; // x21
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  System_Collections_Generic_List_object__o *v26; // x22
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  __int64 v33; // x1
  UserServantEntity_o *resUsrSvtData; // x0
  struct UserServantEntity_o *v35; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v36; // x21
  __int64 v37; // x22
  __int64 v38; // x23
  const MethodInfo *v39; // x1
  const MethodInfo *v40; // x2
  int32_t v41; // w21
  const MethodInfo *v42; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16

  if ( (byte_4BB816B & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMaster_ServantMaster___, *(_QWORD *)&kind);
    sub_1C13D24(&DataManager_TypeInfo, v14);
    sub_1C13D24(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v15);
    sub_1C13D24(&Method_System_Collections_Generic_List_GameObject___ctor__, v16);
    sub_1C13D24(&System_Collections_Generic_List_GameObject__TypeInfo, v17);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
    byte_4BB816B = 1;
  }
  this->fields.baseUsrSvtData = baseData;
  sub_1C13CC8(
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
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.resUsrSvtData, (int64_t)resData, v20, v21, v22, v23, v24, v25);
  this->fields.svtCollectionLimitCnt = baseCollectionLimitCnt;
  this->fields.kind = kind;
  v26 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v26,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.resInfoList = (struct System_Collections_Generic_List_GameObject__o *)v26;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.resInfoList, (int64_t)v26, v27, v28, v29, v30, v31, v32);
  *(_WORD *)&this->fields.isGetNewSkill = 0;
  this->fields.isOpenQuest = 0;
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_17;
  this->fields.transformationCount = UserServantEntity__GetTransformCount(resUsrSvtData, 1, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  resUsrSvtData = (UserServantEntity_o *)DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_ServantMaster___);
  v35 = *p_resUsrSvtData;
  if ( !*p_resUsrSvtData )
    goto LABEL_17;
  v36 = (DataMasterBase_TMaster__TEntity__PKType__o *)resUsrSvtData;
  v38 = *(_QWORD *)&v35->fields.svtId.fields.currentCryptoKey;
  v37 = *(_QWORD *)&v35->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v43.fields.currentCryptoKey = v38;
  *(_QWORD *)&v43.fields.fakeValue = v37;
  resUsrSvtData = (UserServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v43, 0LL);
  if ( !v36
    || (resUsrSvtData = (UserServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                                 v36,
                                                 (int32_t)resUsrSvtData,
                                                 (const MethodInfo_3238624 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_17:
    sub_1C13F80(resUsrSvtData, v33);
  }
  if ( ServantEntity__get_IsServant((ServantEntity_o *)resUsrSvtData, 0LL) )
  {
    if ( this->fields.transformationCount >= 1 )
    {
      v41 = 0;
      do
        LimitUpResultCheckComponent__checkGetSkill(this, v41++, v40);
      while ( v41 < this->fields.transformationCount );
    }
    LimitUpResultCheckComponent__checkQuestOpen(this, v39);
    LimitUpResultCheckComponent__checkLimitUpReward(this, rewardGiftDataList, v42);
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
    sub_1C13F88(this, data);
  if ( data->m_Items[1] == this->fields.afterLimitCnt )
  {
    if ( max_length > 1 )
    {
      giftEntity = this->fields.giftEntity;
      if ( giftEntity )
        return data->m_Items[2] == giftEntity->fields.id;
LABEL_9:
      sub_1C13F80(this, data);
    }
    goto LABEL_8;
  }
  return 0;
}