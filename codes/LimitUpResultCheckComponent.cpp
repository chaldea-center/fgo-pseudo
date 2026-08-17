void LimitUpResultCheckComponent___cctor(const MethodInfo *method)
{
  struct LimitUpResultCheckComponent_StaticFields *static_fields; // x8

  if ( (byte_596A172 & 1) == 0 )
  {
    sub_2213A60(&LimitUpResultCheckComponent_TypeInfo);
    byte_596A172 = 1;
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

  if ( (byte_596A16C & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    byte_596A16C = 1;
  }
  resInfoList = this->fields.resInfoList;
  return !resInfoList || resInfoList->fields._size <= 0;
}


Il2CppObject *LimitUpResultCheckComponent__CreateResultInfoObject_object_(
        LimitUpResultCheckComponent_o *this,
        Il2CppObject *origin,
        const MethodInfo_38E6524 *method)
{
  UnityEngine_Component_o *v5; // x21
  UnityEngine_Transform_o *transform; // x0

  v5 = (UnityEngine_Component_o *)this;
  if ( !method->rgctx_data )
    this = (LimitUpResultCheckComponent_o *)sub_224B964();
  if ( !v5 || (this = (LimitUpResultCheckComponent_o *)UnityEngine_Component__get_gameObject(v5, 0)) == 0 )
    sub_2213CDC(this, origin);
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  return BaseMonoBehaviour__createObject_object_(
           (BaseMonoBehaviour_o *)v5,
           origin,
           transform,
           0,
           (const MethodInfo_380F544 *)method->rgctx_data->_1_BaseMonoBehaviour_createObject_T_);
}


void LimitUpResultCheckComponent__DispResultLimitUp(
        LimitUpResultCheckComponent_o *this,
        System_Action_o *callback,
        bool isFirstDisp,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_GameObject__o *resInfoList; // x8
  OpenInfoWindowComponent_o *openInfowindowComp; // x0
  __int64 v9; // x2
  LimitUpResultCheckComponent_c *v10; // x0
  int32_t CONCURRENTLY_DISP_NUM; // w24
  __int64 v12; // x1
  __int64 v13; // x2
  LimitUpResultCheckComponent_c *v14; // x0
  System_Collections_Generic_List_object__o *v15; // x22
  __int64 v16; // x2
  const MethodInfo *v17; // x4
  const MethodInfo *v18; // x6
  int32_t v19; // w28
  bool v20; // zf
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  OpenInfoWindowComponent_o *v30; // x1
  Il2CppClass **v31; // x0
  OpenInfoWindowComponent_o *v32; // x21
  _BOOL4 isGetNewSkill; // w8
  int32_t monitor; // w4
  bool v35; // w5

  if ( (byte_596A16B & 1) == 0 )
  {
    sub_2213A60(&LimitUpResultCheckComponent_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__RemoveAt__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_596A16B = 1;
  }
  resInfoList = this->fields.resInfoList;
  if ( !resInfoList || resInfoList->fields._size <= 0 )
  {
    ActionExtensions__Call(callback, 0);
    return;
  }
  openInfowindowComp = this->fields.openInfowindowComp;
  if ( !openInfowindowComp )
    goto LABEL_30;
  OpenInfoWindowComponent__Init(openInfowindowComp, (const MethodInfo *)callback);
  v10 = LimitUpResultCheckComponent_TypeInfo;
  if ( !*(&LimitUpResultCheckComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(LimitUpResultCheckComponent_TypeInfo, callback, v9);
    v10 = LimitUpResultCheckComponent_TypeInfo;
  }
  CONCURRENTLY_DISP_NUM = v10->static_fields->CONCURRENTLY_DISP_NUM;
  if ( !this->fields.isChangeSkill )
  {
    openInfowindowComp = (OpenInfoWindowComponent_o *)this->fields.resUsrSvtData;
    if ( !openInfowindowComp )
      goto LABEL_30;
    if ( UserServantEntity__isLimitCountMax((UserServantEntity_o *)openInfowindowComp, 0) )
    {
      v14 = LimitUpResultCheckComponent_TypeInfo;
      if ( !*(&LimitUpResultCheckComponent_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(LimitUpResultCheckComponent_TypeInfo, v12, v13);
        v14 = LimitUpResultCheckComponent_TypeInfo;
      }
      CONCURRENTLY_DISP_NUM = v14->static_fields->CONCURRENTLY_DISP_NUM_BY_LIMIT_MAX;
    }
  }
  v15 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
  openInfowindowComp = (OpenInfoWindowComponent_o *)this->fields.resInfoList;
  if ( !openInfowindowComp )
LABEL_30:
    sub_2213CDC(openInfowindowComp, callback);
  v19 = 0;
  while ( SLODWORD(openInfowindowComp->fields.m_CancellationTokenSource) > 0 )
  {
    v20 = !this->fields.isChangeSkill || v19 == 0;
    if ( !v20 || v19 >= CONCURRENTLY_DISP_NUM )
      break;
    openInfowindowComp = (OpenInfoWindowComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                        (System_Collections_Generic_List_object__o *)openInfowindowComp,
                                                        0,
                                                        (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( v15 )
    {
      items = v15->fields._items;
      v28 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++v15->fields._version;
      if ( items )
      {
        size = v15->fields._size;
        v30 = openInfowindowComp;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v15,
            (Il2CppObject *)openInfowindowComp,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
        }
        else
        {
          v31 = &items->obj.klass + size;
          v15->fields._size = size + 1;
          v31[4] = (Il2CppClass *)v30;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v31 + 4), (int32_t)v30, v21, v22, v23, v24, v25, v26);
        }
        openInfowindowComp = (OpenInfoWindowComponent_o *)this->fields.resInfoList;
        if ( openInfowindowComp )
        {
          System_Collections_Generic_List_object___RemoveAt(
            (System_Collections_Generic_List_object__o *)openInfowindowComp,
            0,
            (const MethodInfo_44853FC *)Method_System_Collections_Generic_List_GameObject__RemoveAt__);
          openInfowindowComp = (OpenInfoWindowComponent_o *)this->fields.resInfoList;
          ++v19;
          if ( openInfowindowComp )
            continue;
        }
      }
    }
    goto LABEL_30;
  }
  if ( this->fields.isChangeSkill )
  {
    openInfowindowComp = this->fields.openInfowindowComp;
    this->fields.isChangeSkill = 0;
    if ( openInfowindowComp )
    {
      OpenInfoWindowComponent__OpenResultInfo(
        openInfowindowComp,
        (System_Collections_Generic_List_GameObject__o *)v15,
        callback,
        isFirstDisp,
        v17);
      return;
    }
    goto LABEL_30;
  }
  if ( this->fields.transformationCount > 1 )
  {
    isGetNewSkill = this->fields.isGetNewSkill;
    v32 = this->fields.openInfowindowComp;
    if ( isGetNewSkill )
    {
      monitor = 125;
      v35 = 1;
      goto LABEL_42;
    }
  }
  else
  {
    v32 = this->fields.openInfowindowComp;
  }
  openInfowindowComp = (OpenInfoWindowComponent_o *)LimitUpResultCheckComponent_TypeInfo;
  if ( !*(&LimitUpResultCheckComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(LimitUpResultCheckComponent_TypeInfo, callback, v16);
    openInfowindowComp = (OpenInfoWindowComponent_o *)LimitUpResultCheckComponent_TypeInfo;
  }
  v35 = 0;
  monitor = (int32_t)openInfowindowComp[1].fields.m_CancellationTokenSource->monitor;
LABEL_42:
  if ( !v32 )
    goto LABEL_30;
  OpenInfoWindowComponent__OpenLimitUpResultInfo(
    v32,
    (System_Collections_Generic_List_GameObject__o *)v15,
    callback,
    isFirstDisp,
    monitor,
    v35,
    v18);
}


// local variable allocation has failed, the output may be wrong!
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
      sub_2213CDC(openInfowindowComp, isActive);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)openInfowindowComp, isActive, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void LimitUpResultCheckComponent__SetResInfoListQuestInfo(
        LimitUpResultCheckComponent_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x24
  void *Entity; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  int v9; // w8
  Il2CppObject **v10; // x20
  System_String_o *v11; // x23
  __int64 v12; // x1
  __int64 v13; // x2
  System_String_o *v14; // x0
  System_String_o **v15; // x23
  System_String_o *v16; // x22
  __int64 v17; // x1
  __int64 v18; // x2
  bool IsLimitCountSealQuest; // w21
  System_String_o **v20; // x8
  __int64 v21; // x1
  __int64 v22; // x2
  Il2CppObject *Value; // x21
  System_String_o *v24; // x0
  System_String_o *v25; // x0
  UnityEngine_Component_o *v26; // x20
  System_Collections_Generic_List_object__o *resInfoList; // x19
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  Il2CppClass *v37; // x1
  Il2CppClass **v38; // x0

  if ( (byte_596A16E & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ConstantStrMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_QuestMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_2213A60(&Method_LimitUpResultCheckComponent_CreateResultInfoObject_LimitUpResultInfoComponent___);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_10046/*"OPEN_MAIN_SCENARIO_TITLE"*/);
    sub_2213A60(&StringLiteral_10052/*"OPEN_STORY_QUEST_TITLE_LIMIT_UP"*/);
    sub_2213A60(&StringLiteral_10043/*"OPEN_LIMIT_UNSEALED_QUEST_NAME_LIMIT_UP"*/);
    sub_2213A60(&StringLiteral_10044/*"OPEN_LIMIT_UNSEALED_QUEST_TITLE_LIMIT_UP"*/);
    sub_2213A60(&StringLiteral_10038/*"OPEN_EVENT_QUEST_NAME_LIMIT_UP"*/);
    sub_2213A60(&StringLiteral_10039/*"OPEN_EVENT_QUEST_TITLE_LIMIT_UP"*/);
    sub_2213A60(&StringLiteral_10045/*"OPEN_MAIN_QUEST_TITLE_LIMIT_UP"*/);
    byte_596A16E = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&questId, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  Entity = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !Entity )
    goto LABEL_46;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Entity,
             questId,
             (const MethodInfo_3F10B30 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( !Entity )
    goto LABEL_46;
  v9 = *((_DWORD *)Entity + 10);
  v10 = (Il2CppObject **)Entity;
  v11 = 0;
  if ( v9 > 4 )
  {
    if ( v9 == 5 || (v16 = 0, v9 == 6) )
    {
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7, v8);
      v14 = LocalizationManager__Get((System_String_o *)StringLiteral_10039/*"OPEN_EVENT_QUEST_TITLE_LIMIT_UP"*/, 0);
      goto LABEL_35;
    }
  }
  else
  {
    if ( (unsigned int)(v9 - 1) < 2 )
    {
      if ( !Master_object )
        goto LABEL_46;
      if ( ServantLimitImageMaster__IsLimitCountSealQuest((ServantLimitImageMaster_o *)Master_object, questId, 0) )
      {
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v12, v13);
        v14 = LocalizationManager__Get((System_String_o *)StringLiteral_10044/*"OPEN_LIMIT_UNSEALED_QUEST_TITLE_LIMIT_UP"*/, 0);
        v15 = (System_String_o **)&StringLiteral_10043/*"OPEN_LIMIT_UNSEALED_QUEST_NAME_LIMIT_UP"*/;
        goto LABEL_36;
      }
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v12, v13);
      Entity = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ConstantStrMaster___);
      if ( !Entity )
        goto LABEL_46;
      Value = (Il2CppObject *)ConstantStrMaster__GetValue(
                                (ConstantStrMaster_o *)Entity,
                                (System_String_o *)StringLiteral_10046/*"OPEN_MAIN_SCENARIO_TITLE"*/,
                                0);
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v21, v22);
      v24 = LocalizationManager__Get((System_String_o *)StringLiteral_10045/*"OPEN_MAIN_QUEST_TITLE_LIMIT_UP"*/, 0);
      v14 = System_String__Format(v24, Value, 0);
LABEL_35:
      v15 = (System_String_o **)&StringLiteral_10038/*"OPEN_EVENT_QUEST_NAME_LIMIT_UP"*/;
LABEL_36:
      v16 = v14;
      v25 = LocalizationManager__Get(*v15, 0);
      v11 = System_String__Format(v25, v10[3], 0);
      this->fields.isOpenQuest = 1;
      goto LABEL_37;
    }
    v16 = 0;
    if ( v9 == 3 )
    {
      if ( !Master_object )
        goto LABEL_46;
      IsLimitCountSealQuest = ServantLimitImageMaster__IsLimitCountSealQuest(
                                (ServantLimitImageMaster_o *)Master_object,
                                questId,
                                0);
      if ( IsLimitCountSealQuest )
        v15 = (System_String_o **)&StringLiteral_10043/*"OPEN_LIMIT_UNSEALED_QUEST_NAME_LIMIT_UP"*/;
      else
        v15 = (System_String_o **)&StringLiteral_10038/*"OPEN_EVENT_QUEST_NAME_LIMIT_UP"*/;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v17, v18);
      v20 = (System_String_o **)&StringLiteral_10044/*"OPEN_LIMIT_UNSEALED_QUEST_TITLE_LIMIT_UP"*/;
      if ( !IsLimitCountSealQuest )
        v20 = (System_String_o **)&StringLiteral_10052/*"OPEN_STORY_QUEST_TITLE_LIMIT_UP"*/;
      v14 = LocalizationManager__Get(*v20, 0);
      goto LABEL_36;
    }
  }
LABEL_37:
  if ( !System_String__IsNullOrEmpty(v16, 0) && !System_String__IsNullOrEmpty(v11, 0) )
  {
    Entity = LimitUpResultCheckComponent__CreateResultInfoObject_object_(
               this,
               (Il2CppObject *)this->fields.limitUpResultInfoStoryOrigin,
               (const MethodInfo_38E6524 *)Method_LimitUpResultCheckComponent_CreateResultInfoObject_LimitUpResultInfoComponent___);
    if ( Entity )
    {
      v26 = (UnityEngine_Component_o *)Entity;
      (*(void (__fastcall **)(void *, System_String_o *, System_String_o *, _QWORD))(*(_QWORD *)Entity + 376LL))(
        Entity,
        v16,
        v11,
        *(_QWORD *)(*(_QWORD *)Entity + 384LL));
      resInfoList = (System_Collections_Generic_List_object__o *)this->fields.resInfoList;
      Entity = UnityEngine_Component__get_gameObject(v26, 0);
      if ( resInfoList )
      {
        items = resInfoList->fields._items;
        v35 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++resInfoList->fields._version;
        if ( items )
        {
          size = resInfoList->fields._size;
          v37 = (Il2CppClass *)Entity;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              resInfoList,
              (Il2CppObject *)Entity,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
          }
          else
          {
            v38 = &items->obj.klass + size;
            resInfoList->fields._size = size + 1;
            v38[4] = v37;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v38 + 4), (int32_t)v37, v28, v29, v30, v31, v32, v33);
          }
          return;
        }
      }
    }
LABEL_46:
    sub_2213CDC(Entity, v7);
  }
}


// local variable allocation has failed, the output may be wrong!
void LimitUpResultCheckComponent__SetSkillRelease(
        LimitUpResultCheckComponent_o *this,
        int32_t skillId,
        int32_t targetIdx,
        int32_t transformIndex,
        const MethodInfo *method)
{
  int v8; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x2
  SkillEntity_o *v13; // x24
  System_String_o *v14; // x29
  __int64 v15; // x2
  struct UserServantEntity_o *resUsrSvtData; // x8
  ServantLimitImageMaster_o *v17; // x25
  __int64 v18; // x26
  __int64 v19; // x27
  int32_t v20; // w26
  int32_t ServantImageLimitSealAfter; // w26
  struct UserServantEntity_o *v22; // x8
  ServantLimitAddMaster_o *v23; // x25
  struct UserServantEntity_o *v24; // x8
  int32_t v25; // w27
  __int64 v26; // x1
  __int64 v27; // x2
  int32_t v28; // w28
  __int64 v29; // x2
  System_String_o *v30; // x0
  __int64 v31; // x1
  __int64 v32; // x2
  System_String_o *v33; // x24
  __int64 v34; // x2
  struct UserServantEntity_o *v35; // x8
  ServantSkillMaster_o *v36; // x25
  __int64 v37; // x26
  __int64 v38; // x27
  ServantSkillEntity_o *EntityFromSkillId; // x25
  __int64 v40; // x8
  const MethodInfo *v41; // x6
  LimitUpResultInfoSkillComponent_o *v42; // x22
  const MethodInfo *v43; // x2
  bool v44; // w1
  struct System_Collections_Generic_List_GameObject__o *resInfoList; // x8
  ServantEntity_TransformInfo_o *v46; // x0
  ServantEntity_TransformInfo_o *v47; // x20
  float r; // s8
  float g; // s9
  float b; // s10
  float a; // s11
  const MethodInfo *v52; // x1
  System_Collections_Generic_List_object__o *v53; // x20
  System_String_o *v54; // x2
  System_String_o *v55; // x3
  int32_t v56; // w4
  int32_t v57; // w5
  bool v58; // w6
  bool v59; // w7
  struct System_Object_array *items; // x8
  _QWORD *v61; // x9
  __int64 size; // x10
  DataMasterBase_TMaster__TEntity__PKType__o *v63; // x1
  Il2CppClass **v64; // x0
  TransformServantInfo_o *transformInfo; // [xsp+10h] [xbp-A0h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+18h] [xbp-98h] BYREF
  System_String_o *detail; // [xsp+20h] [xbp-90h] BYREF
  System_String_o *name; // [xsp+28h] [xbp-88h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v70; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v71; // 0:x0.16
  UnityEngine_Color_o CondLabelColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o CondSpriteColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o DefaultCondTitleLabelColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v75; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v76; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  if ( (byte_596A170 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantSkillMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_SkillMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_2213A60(&ImageLimitCount_TypeInfo);
    sub_2213A60(&Method_LimitUpResultCheckComponent_CreateResultInfoObject_LimitUpResultInfoSkillComponent___);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&StringLiteral_7257/*"GET_SKILL_TITLE"*/);
    sub_2213A60(&StringLiteral_7256/*"GET_SKILL_NAME_LIMIT_UP"*/);
    byte_596A170 = 1;
  }
  detail = 0;
  name = 0;
  v8 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  transformInfo = 0;
  entity = 0;
  if ( !v8 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&skillId, *(_QWORD *)&targetIdx);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_SkillMaster___);
  if ( !Master_object )
    goto LABEL_58;
  v13 = (SkillEntity_o *)DataMasterBase_object__object__int___GetEntity(
                           Master_object,
                           skillId,
                           (const MethodInfo_3F10B30 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v11, v12);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager__Get(
                                                                  (System_String_o *)StringLiteral_7257/*"GET_SKILL_TITLE"*/,
                                                                  0);
  if ( !this->fields.resUsrSvtData )
    goto LABEL_58;
  v14 = (System_String_o *)Master_object;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UserServantEntity__getSkillLevel(
                                                                  this->fields.resUsrSvtData,
                                                                  targetIdx,
                                                                  0);
  if ( !v13 )
    goto LABEL_58;
  SkillEntity__getSkillMessageInfo(v13, &name, &detail, (int32_t)Master_object, 0);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_58;
  v17 = (ServantLimitImageMaster_o *)Master_object;
  v18 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v19 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10, v15);
  *(_QWORD *)&v70.fields.currentCryptoKey = v18;
  *(_QWORD *)&v70.fields.fakeValue = v19;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                                  v70,
                                                                  0);
  if ( !this->fields.resUsrSvtData )
    goto LABEL_58;
  v20 = (int)Master_object;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UserServantEntity__getDispLimitCount(
                                                                  this->fields.resUsrSvtData,
                                                                  0,
                                                                  0);
  if ( !v17 )
    goto LABEL_58;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 v17,
                                 v20,
                                 (int32_t)Master_object,
                                 0);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  v22 = this->fields.resUsrSvtData;
  if ( !v22 )
    goto LABEL_58;
  v23 = (ServantLimitAddMaster_o *)Master_object;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                                  v22->fields.svtId,
                                                                  0);
  v24 = this->fields.resUsrSvtData;
  if ( !v24 )
    goto LABEL_58;
  v25 = (int)Master_object;
  v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v24->fields.limitCount, 0);
  if ( !*(&ImageLimitCount_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v26, v27);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)ImageLimitCount__GetLimitCountByDispLimit(
                                                                  ServantImageLimitSealAfter,
                                                                  v28,
                                                                  0);
  if ( !v23 )
    goto LABEL_58;
  if ( ServantLimitAddMaster__TryGetEntity(v23, &entity, v25, (int32_t)Master_object, 0) )
  {
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)entity;
    if ( !entity )
      goto LABEL_58;
    if ( ServantLimitAddEntity__HasKeyOverwriteSkillName(entity, 0) )
    {
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)entity;
      if ( !entity )
        goto LABEL_58;
      name = ServantLimitAddEntity__GetOverwriteSkillName(entity, v13->fields.id, name, 0);
    }
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v10, v29);
  v30 = LocalizationManager__Get((System_String_o *)StringLiteral_7256/*"GET_SKILL_NAME_LIMIT_UP"*/, 0);
  v33 = System_String__Format(v30, (Il2CppObject *)name, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v31, v32);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantSkillMaster___);
  v35 = this->fields.resUsrSvtData;
  if ( !v35 )
    goto LABEL_58;
  v36 = (ServantSkillMaster_o *)Master_object;
  v37 = *(_QWORD *)&v35->fields.svtId.fields.currentCryptoKey;
  v38 = *(_QWORD *)&v35->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10, v34);
  *(_QWORD *)&v71.fields.currentCryptoKey = v37;
  *(_QWORD *)&v71.fields.fakeValue = v38;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                                  v71,
                                                                  0);
  if ( !v36 )
    goto LABEL_58;
  EntityFromSkillId = ServantSkillMaster__getEntityFromSkillId(v36, (int32_t)Master_object, targetIdx + 1, skillId, 0);
  v40 = 128;
  if ( this->fields.transformationCount > 1 )
    v40 = 136;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)LimitUpResultCheckComponent__CreateResultInfoObject_object_(
                                                                  this,
                                                                  *(Il2CppObject **)((char *)&this->klass + v40),
                                                                  (const MethodInfo_38E6524 *)Method_LimitUpResultCheckComponent_CreateResultInfoObject_LimitUpResultInfoSkillComponent___);
  if ( !Master_object )
    goto LABEL_58;
  v42 = (LimitUpResultInfoSkillComponent_o *)Master_object;
  LimitUpResultInfoSkillComponent__Setup(
    (LimitUpResultInfoSkillComponent_o *)Master_object,
    skillId,
    v33,
    EntityFromSkillId,
    v14,
    detail,
    v41);
  if ( this->fields.transformationCount < 2 )
    goto LABEL_52;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.baseUsrSvtData;
  if ( !Master_object )
    goto LABEL_58;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UserServantEntity__GetTransformedServantInfo(
                                                                  (UserServantEntity_o *)Master_object,
                                                                  &transformInfo,
                                                                  transformIndex,
                                                                  0);
  if ( !transformInfo )
    goto LABEL_58;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v42->fields.battleNameLabel;
  if ( !Master_object )
    goto LABEL_58;
  UILabel__set_text((UILabel_o *)Master_object, transformInfo->fields.titleText, 0);
  if ( this->fields.transformationCount >= 2 )
  {
    resInfoList = this->fields.resInfoList;
    if ( !resInfoList )
      goto LABEL_58;
    v44 = resInfoList->fields._size < 1;
  }
  else
  {
    v44 = 0;
  }
  LimitUpResultInfoSkillComponent__SetTitleDisp(v42, v44, v43);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.baseUsrSvtData;
  if ( !Master_object )
    goto LABEL_58;
  if ( !UserServantEntity__get_IsSaveTransformServant((UserServantEntity_o *)Master_object, 0) )
    goto LABEL_52;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.baseUsrSvtData;
  if ( !Master_object
    || (Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UserServantEntity__GetServantEntity(
                                                                        (UserServantEntity_o *)Master_object,
                                                                        transformIndex,
                                                                        0)) == 0 )
  {
LABEL_58:
    sub_2213CDC(Master_object, v10);
  }
  v46 = ServantEntity__GetTransformInfo((ServantEntity_o *)Master_object, 0);
  if ( v46 )
  {
    v47 = v46;
    CondLabelColor = ServantEntity_TransformInfo__GetCondLabelColor(v46, 0);
    r = CondLabelColor.fields.r;
    g = CondLabelColor.fields.g;
    b = CondLabelColor.fields.b;
    a = CondLabelColor.fields.a;
    CondSpriteColor = ServantEntity_TransformInfo__GetCondSpriteColor(v47, 0);
  }
  else
  {
    DefaultCondTitleLabelColor = TransformHelper__get_DefaultCondTitleLabelColor(0);
    r = DefaultCondTitleLabelColor.fields.r;
    g = DefaultCondTitleLabelColor.fields.g;
    b = DefaultCondTitleLabelColor.fields.b;
    a = DefaultCondTitleLabelColor.fields.a;
    CondSpriteColor = TransformHelper__get_DefaultCondTitleSpriteColor(0);
  }
  v76 = CondSpriteColor;
  v75.fields.r = r;
  v75.fields.g = g;
  v75.fields.b = b;
  v75.fields.a = a;
  LimitUpResultInfoSkillComponent__SetTransformLabelSpriteColor(v42, v75, v76, v52);
LABEL_52:
  v53 = (System_Collections_Generic_List_object__o *)this->fields.resInfoList;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)v42,
                                                                  0);
  if ( !v53 )
    goto LABEL_58;
  items = v53->fields._items;
  v61 = Method_System_Collections_Generic_List_GameObject__Add__;
  ++v53->fields._version;
  if ( !items )
    goto LABEL_58;
  size = v53->fields._size;
  v63 = Master_object;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v53,
      (Il2CppObject *)Master_object,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
  }
  else
  {
    v64 = &items->obj.klass + size;
    v53->fields._size = size + 1;
    v64[4] = (Il2CppClass *)v63;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v64 + 4), (int32_t)v63, v54, v55, v56, v57, v58, v59);
  }
  this->fields.isGetNewSkill = 1;
}


// local variable allocation has failed, the output may be wrong!
void LimitUpResultCheckComponent__checkGetSkill(
        LimitUpResultCheckComponent_o *this,
        int32_t transformIndex,
        const MethodInfo *method)
{
  int32_t v3; // w20
  LimitUpResultCheckComponent_o *v4; // x19
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int64 v6; // x21
  __int64 v7; // x22
  int32_t v8; // w22
  __int64 v9; // x2
  struct UserServantEntity_o *v10; // x8
  __int64 v11; // x20
  __int64 v12; // x21
  __int64 v13; // x20
  __int64 v14; // x21
  System_Int32_array *TransformedSkillIdList; // x0
  int32_t kind; // w8
  System_Int32_array *v17; // x21
  int32_t LimitCntMax; // w22
  int32_t v19; // w1
  int32_t v20; // w3
  LimitUpResultCheckComponent_o *v21; // x23
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v23; // x22
  int v24; // w26
  int v25; // w8
  const MethodInfo *v26; // x4
  int32_t v27; // w21
  int32_t v28; // w20
  DataMasterBase_TMaster__TEntity__PKType__o *v29; // x24
  Il2CppObject *Entity; // x23
  SkillEntity_o *v31; // x20
  int32_t v32; // w24
  __int64 v33; // x1
  __int64 v34; // x2
  int32_t SkillLevel; // w21
  UILabel_o *skillChangeInfoTitle; // x22
  UILabel_o *skillChangeInfoSubTitleOld; // x22
  UILabel_o *skillChangeInfoSubTitleNow; // x22
  UILabel_o *skillChangeInfoNameOld; // x22
  System_String_o *v40; // x0
  UILabel_o *skillChangeInfoNameNow; // x20
  System_String_o *v42; // x0
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  intptr_t m_CachedPtr; // x8
  _QWORD *v50; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v52; // x8
  System_String_o *detail; // [xsp+8h] [xbp-58h] BYREF
  System_String_o *name; // [xsp+18h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v56; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v57; // 0:x0.16

  v3 = transformIndex;
  v4 = this;
  if ( (byte_596A16F & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_2213A60(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_7255/*"GET_SKILL_NAME"*/);
    sub_2213A60(&StringLiteral_2009/*"AFTER_CHANGE_SKILL_SUB_TITLE"*/);
    sub_2213A60(&StringLiteral_3465/*"CHANGE_SKILL_TITLE"*/);
    this = (LimitUpResultCheckComponent_o *)sub_2213A60(&StringLiteral_3019/*"BEFORE_CHANGE_SKILL_SUB_TITLE"*/);
    byte_596A16F = 1;
  }
  baseUsrSvtData = v4->fields.baseUsrSvtData;
  name = 0;
  detail = 0;
  *(_WORD *)&v4->fields.isGetNewSkill = 0;
  if ( !baseUsrSvtData )
    goto LABEL_68;
  v6 = *(_QWORD *)&baseUsrSvtData->fields.limitCount.fields.currentCryptoKey;
  v7 = *(_QWORD *)&baseUsrSvtData->fields.limitCount.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(
      CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
      *(_QWORD *)&transformIndex,
      method);
  *(_QWORD *)&v55.fields.currentCryptoKey = v6;
  *(_QWORD *)&v55.fields.fakeValue = v7;
  this = (LimitUpResultCheckComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v55, 0);
  if ( !v4->fields.baseUsrSvtData )
    goto LABEL_68;
  v8 = (int)this;
  this = (LimitUpResultCheckComponent_o *)UserServantEntity__get_IsSaveTransformServant(v4->fields.baseUsrSvtData, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v10 = v4->fields.baseUsrSvtData;
    if ( v3 )
    {
      if ( !v10 )
        goto LABEL_68;
      v11 = *(_QWORD *)&v10->fields.transformVal.fields.currentCryptoKey;
      v12 = *(_QWORD *)&v10->fields.transformVal.fields.fakeValue;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(
          CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
          *(_QWORD *)&transformIndex,
          v9);
      *(_QWORD *)&v56.fields.currentCryptoKey = v11;
      *(_QWORD *)&v56.fields.fakeValue = v12;
      v3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v56, 0) ^ 1;
    }
    else
    {
      if ( !v10 )
        goto LABEL_68;
      v13 = *(_QWORD *)&v10->fields.transformVal.fields.currentCryptoKey;
      v14 = *(_QWORD *)&v10->fields.transformVal.fields.fakeValue;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(
          CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
          *(_QWORD *)&transformIndex,
          v9);
      *(_QWORD *)&v57.fields.currentCryptoKey = v13;
      *(_QWORD *)&v57.fields.fakeValue = v14;
      v3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v57, 0);
    }
  }
  this = (LimitUpResultCheckComponent_o *)v4->fields.baseUsrSvtData;
  if ( !this )
    goto LABEL_68;
  TransformedSkillIdList = UserServantEntity__GetTransformedSkillIdList(
                             (UserServantEntity_o *)this,
                             v3,
                             -1,
                             v8,
                             1,
                             -1,
                             1,
                             0);
  kind = v4->fields.kind;
  v17 = TransformedSkillIdList;
  if ( kind == 19 || kind == 10 )
  {
    this = (LimitUpResultCheckComponent_o *)v4->fields.baseUsrSvtData;
    if ( !this )
      goto LABEL_68;
    LimitCntMax = v8 + 1;
    if ( UserServantEntity__getLimitCntMax((UserServantEntity_o *)this, 0) < LimitCntMax )
    {
      this = (LimitUpResultCheckComponent_o *)v4->fields.baseUsrSvtData;
      if ( !this )
        goto LABEL_68;
      LimitCntMax = UserServantEntity__getLimitCntMax((UserServantEntity_o *)this, 0);
    }
    this = (LimitUpResultCheckComponent_o *)v4->fields.resUsrSvtData;
    if ( this )
    {
      v19 = v3;
      v20 = LimitCntMax;
      goto LABEL_28;
    }
LABEL_68:
    sub_2213CDC(this, *(_QWORD *)&transformIndex);
  }
  this = (LimitUpResultCheckComponent_o *)v4->fields.resUsrSvtData;
  if ( !this )
    goto LABEL_68;
  v19 = v3;
  v20 = -1;
LABEL_28:
  this = (LimitUpResultCheckComponent_o *)UserServantEntity__GetTransformedSkillIdList(
                                            (UserServantEntity_o *)this,
                                            v19,
                                            -1,
                                            v20,
                                            1,
                                            -1,
                                            1,
                                            0);
  v21 = this;
  if ( !v17 )
    goto LABEL_68;
  max_length = v17->max_length;
  if ( (int)max_length < 1 )
    return;
  v23 = 0;
  while ( 1 )
  {
    if ( v23 >= (unsigned int)max_length )
      goto LABEL_69;
    if ( !v21 )
      goto LABEL_68;
    if ( v23 >= LODWORD(v21->fields.m_CancellationTokenSource) )
      goto LABEL_69;
    v24 = v17->m_Items[v23];
    v25 = *((_DWORD *)&v21->fields.openInfowindowComp + v23);
    if ( v24 != v25 && v25 >= 1 )
      break;
LABEL_39:
    LODWORD(max_length) = v17->max_length;
    if ( (__int64)++v23 >= (int)max_length )
      return;
  }
  this = (LimitUpResultCheckComponent_o *)v4->fields.resUsrSvtData;
  if ( !this )
    goto LABEL_68;
  this = (LimitUpResultCheckComponent_o *)UserServantEntity__IsHeroine((UserServantEntity_o *)this, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( v24 < 1 )
      goto LABEL_63;
    goto LABEL_39;
  }
  if ( v24 <= 0 )
  {
LABEL_63:
    if ( (unsigned int)v23 < LODWORD(v21->fields.m_CancellationTokenSource) )
    {
      LimitUpResultCheckComponent__SetSkillRelease(
        v4,
        *((_DWORD *)&v21->fields.openInfowindowComp + (int)v23),
        v23,
        v3,
        v26);
      return;
    }
LABEL_69:
    sub_2213CE4(this);
  }
  if ( (unsigned int)v23 >= LODWORD(v17->max_length)
    || (unsigned int)v23 >= LODWORD(v21->fields.m_CancellationTokenSource) )
  {
    goto LABEL_69;
  }
  v27 = v17->m_Items[v23];
  v28 = *((_DWORD *)&v21->fields.openInfowindowComp + v23);
  this = (LimitUpResultCheckComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_68;
  this = (LimitUpResultCheckComponent_o *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)this,
                                            (const MethodInfo_385636C *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !this )
    goto LABEL_68;
  v29 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             v27,
             (const MethodInfo_3F10B30 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  this = (LimitUpResultCheckComponent_o *)DataMasterBase_object__object__int___GetEntity(
                                            v29,
                                            v28,
                                            (const MethodInfo_3F10B30 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( !v4->fields.baseUsrSvtData )
    goto LABEL_68;
  v31 = (SkillEntity_o *)this;
  this = (LimitUpResultCheckComponent_o *)UserServantEntity__getSkillLevel(v4->fields.baseUsrSvtData, v23, 0);
  if ( !v4->fields.resUsrSvtData )
    goto LABEL_68;
  v32 = (int)this;
  SkillLevel = UserServantEntity__getSkillLevel(v4->fields.resUsrSvtData, v23, 0);
  skillChangeInfoTitle = v4->fields.skillChangeInfoTitle;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v33, v34);
  this = (LimitUpResultCheckComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3465/*"CHANGE_SKILL_TITLE"*/, 0);
  if ( !skillChangeInfoTitle )
    goto LABEL_68;
  UILabel__set_text(skillChangeInfoTitle, (System_String_o *)this, 0);
  skillChangeInfoSubTitleOld = v4->fields.skillChangeInfoSubTitleOld;
  this = (LimitUpResultCheckComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3019/*"BEFORE_CHANGE_SKILL_SUB_TITLE"*/, 0);
  if ( !skillChangeInfoSubTitleOld )
    goto LABEL_68;
  UILabel__set_text(skillChangeInfoSubTitleOld, (System_String_o *)this, 0);
  skillChangeInfoSubTitleNow = v4->fields.skillChangeInfoSubTitleNow;
  this = (LimitUpResultCheckComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2009/*"AFTER_CHANGE_SKILL_SUB_TITLE"*/, 0);
  if ( !skillChangeInfoSubTitleNow )
    goto LABEL_68;
  UILabel__set_text(skillChangeInfoSubTitleNow, (System_String_o *)this, 0);
  if ( !Entity )
    goto LABEL_68;
  SkillEntity__getSkillMessageInfo((SkillEntity_o *)Entity, &name, &detail, v32, 0);
  skillChangeInfoNameOld = v4->fields.skillChangeInfoNameOld;
  v40 = LocalizationManager__Get((System_String_o *)StringLiteral_7255/*"GET_SKILL_NAME"*/, 0);
  this = (LimitUpResultCheckComponent_o *)System_String__Format(v40, (Il2CppObject *)name, 0);
  if ( !skillChangeInfoNameOld )
    goto LABEL_68;
  UILabel__set_text(skillChangeInfoNameOld, (System_String_o *)this, 0);
  this = (LimitUpResultCheckComponent_o *)v4->fields.skillChangeInfoDetailOld;
  if ( !this )
    goto LABEL_68;
  this = (LimitUpResultCheckComponent_o *)WrapControlText__textBBCodeAdjust(
                                            (UILabel_o *)this,
                                            detail,
                                            (int32_t)this[1].fields.skillChangeInfoTitle,
                                            0,
                                            0);
  if ( !v31 )
    goto LABEL_68;
  SkillEntity__getSkillMessageInfo(v31, &name, &detail, SkillLevel, 0);
  skillChangeInfoNameNow = v4->fields.skillChangeInfoNameNow;
  v42 = LocalizationManager__Get((System_String_o *)StringLiteral_7255/*"GET_SKILL_NAME"*/, 0);
  this = (LimitUpResultCheckComponent_o *)System_String__Format(v42, (Il2CppObject *)name, 0);
  if ( !skillChangeInfoNameNow )
    goto LABEL_68;
  UILabel__set_text(skillChangeInfoNameNow, (System_String_o *)this, 0);
  this = (LimitUpResultCheckComponent_o *)v4->fields.skillChangeInfoDetailNow;
  if ( !this )
    goto LABEL_68;
  WrapControlText__textBBCodeAdjust((UILabel_o *)this, detail, (int32_t)this[1].fields.skillChangeInfoTitle, 0, 0);
  this = (LimitUpResultCheckComponent_o *)v4->fields.resInfoList;
  if ( !this )
    goto LABEL_68;
  m_CachedPtr = this->fields.m_CachedPtr;
  *(_QWORD *)&transformIndex = v4->fields.skillChangeInfo;
  v50 = Method_System_Collections_Generic_List_GameObject__Add__;
  ++HIDWORD(this->fields.m_CancellationTokenSource);
  if ( !m_CachedPtr )
    goto LABEL_68;
  m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      *(Il2CppObject **)&transformIndex,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
  }
  else
  {
    v52 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
    LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_QWORD *)(v52 + 32) = *(_QWORD *)&transformIndex;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v52 + 32), transformIndex, v43, v44, v45, v46, v47, v48);
  }
  *(_WORD *)&v4->fields.isGetNewSkill = 257;
}


void LimitUpResultCheckComponent__checkLimitUpReward(
        LimitUpResultCheckComponent_o *this,
        System_Collections_Generic_List_int____o *rewardGiftDataList,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Master_object; // x23
  GiftMaster_o *LimitCntMax; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  struct UserServantEntity_o *baseUsrSvtData; // x8
  GiftMaster_o *v13; // x22
  __int64 v14; // x24
  __int64 v15; // x25
  int v16; // w8
  __int64 v17; // x2
  struct UserServantEntity_o *v18; // x8
  __int64 v19; // x24
  __int64 v20; // x25
  GiftEntity_o *DataById; // x0
  __int64 v22; // x22
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  __int64 v29; // x1
  __int64 v30; // x2
  System_String_o *v31; // x23
  System_String_o *v32; // x24
  Il2CppObject *v33; // x25
  Il2CppObject *v34; // x0
  System_String_o *v35; // x24
  Il2CppObject *v36; // x25
  System_Func_object__bool__o *v37; // x26
  bool v38; // w20
  const MethodInfo *v39; // x5
  System_Collections_Generic_List_object__o *resInfoList; // x19
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  struct System_Object_array *items; // x8
  _QWORD *v48; // x9
  __int64 size; // x10
  GiftMaster_o *v50; // x1
  Il2CppClass **v51; // x0
  int v52; // [xsp+4h] [xbp-5Ch] BYREF
  System_String_o *countText; // [xsp+8h] [xbp-58h] BYREF
  System_String_o *nameText; // [xsp+18h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v56; // 0:x0.16

  if ( (byte_596A171 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_Any_int_____);
    sub_2213A60(&Method_DataManager_GetMaster_CombineLimitGiftMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_GiftMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&System_Func_int____bool__TypeInfo);
    sub_2213A60(&Method_LimitUpResultCheckComponent_CreateResultInfoObject_LimitUpResultInfoRewardComponent___);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_LimitUpResultCheckComponent___c__DisplayClass45_0__checkLimitUpReward_b__0__);
    sub_2213A60(&LimitUpResultCheckComponent___c__DisplayClass45_0_TypeInfo);
    sub_2213A60(&StringLiteral_7252/*"GET_LIMIT_UP_REWARD_DETAIL"*/);
    sub_2213A60(&StringLiteral_7253/*"GET_LIMIT_UP_REWARD_TITLE"*/);
    byte_596A171 = 1;
  }
  nameText = 0;
  countText = 0;
  v5 = sub_2213CCC(LimitUpResultCheckComponent___c__DisplayClass45_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v6, v7);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_CombineLimitGiftMaster___);
  LimitCntMax = (GiftMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_GiftMaster___);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_34;
  v13 = LimitCntMax;
  v14 = *(_QWORD *)&baseUsrSvtData->fields.limitCount.fields.currentCryptoKey;
  v15 = *(_QWORD *)&baseUsrSvtData->fields.limitCount.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10, v11);
  *(_QWORD *)&v55.fields.currentCryptoKey = v14;
  *(_QWORD *)&v55.fields.fakeValue = v15;
  LimitCntMax = (GiftMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v55, 0);
  if ( !v5 )
    goto LABEL_34;
  v16 = (int)LimitCntMax;
  LimitCntMax = (GiftMaster_o *)this->fields.baseUsrSvtData;
  *(_DWORD *)(v5 + 16) = v16 + 1;
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
  v18 = this->fields.baseUsrSvtData;
  if ( !v18 )
    goto LABEL_34;
  v19 = *(_QWORD *)&v18->fields.svtId.fields.currentCryptoKey;
  v20 = *(_QWORD *)&v18->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10, v17);
  *(_QWORD *)&v56.fields.currentCryptoKey = v19;
  *(_QWORD *)&v56.fields.fakeValue = v20;
  LimitCntMax = (GiftMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v56, 0);
  if ( !Master_object )
    goto LABEL_34;
  LimitCntMax = (GiftMaster_o *)CombineLimitGiftMaster__GetCombineLimitGiftId(
                                  (CombineLimitGiftMaster_o *)Master_object,
                                  (int32_t)LimitCntMax,
                                  *(_DWORD *)(v5 + 16),
                                  0);
  if ( !(_DWORD)LimitCntMax )
    return;
  if ( !v13 )
    goto LABEL_34;
  DataById = GiftMaster__getDataById(v13, (int32_t)LimitCntMax, 0);
  *(_QWORD *)(v5 + 24) = DataById;
  v22 = v5 + 24;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)DataById, v23, v24, v25, v26, v27, v28);
  if ( !*(_QWORD *)(v5 + 24) )
    return;
  GiftEntity__GetInfo(*(GiftEntity_o **)(v5 + 24), &nameText, &countText, 0);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v29, v30);
  v31 = LocalizationManager__Get((System_String_o *)StringLiteral_7253/*"GET_LIMIT_UP_REWARD_TITLE"*/, 0);
  LimitCntMax = (GiftMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_7252/*"GET_LIMIT_UP_REWARD_DETAIL"*/, 0);
  if ( !*(_QWORD *)v22 )
    goto LABEL_34;
  v32 = (System_String_o *)LimitCntMax;
  v33 = (Il2CppObject *)nameText;
  v52 = *(_DWORD *)(*(_QWORD *)v22 + 28LL);
  v34 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v52);
  v35 = System_String__Format_75697880(v32, v33, v34, 0);
  v36 = LimitUpResultCheckComponent__CreateResultInfoObject_object_(
          this,
          (Il2CppObject *)this->fields.limitUpResultInfoRewardOrigin,
          (const MethodInfo_38E6524 *)Method_LimitUpResultCheckComponent_CreateResultInfoObject_LimitUpResultInfoRewardComponent___);
  if ( rewardGiftDataList )
  {
    v37 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_int____bool__TypeInfo);
    System_Func_object__bool____ctor(
      v37,
      (Il2CppObject *)v5,
      Method_LimitUpResultCheckComponent___c__DisplayClass45_0__checkLimitUpReward_b__0__,
      0);
    v38 = !BasicHelper__Any_object_(
             (System_Collections_Generic_List_T__o *)rewardGiftDataList,
             (System_Func_T__bool__o *)v37,
             (const MethodInfo_380FDE0 *)Method_BasicHelper_Any_int_____);
  }
  else
  {
    v38 = 1;
  }
  LimitCntMax = *(GiftMaster_o **)v22;
  if ( !*(_QWORD *)v22
    || (LimitCntMax = (GiftMaster_o *)GiftEntity__getIconImageId((GiftEntity_o *)LimitCntMax, 0), !v36)
    || (LimitUpResultInfoRewardComponent__Setup(
          (LimitUpResultInfoRewardComponent_o *)v36,
          (int32_t)LimitCntMax,
          v38,
          v31,
          v35,
          v39),
        resInfoList = (System_Collections_Generic_List_object__o *)this->fields.resInfoList,
        LimitCntMax = (GiftMaster_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v36, 0),
        !resInfoList)
    || (items = resInfoList->fields._items,
        v48 = Method_System_Collections_Generic_List_GameObject__Add__,
        ++resInfoList->fields._version,
        !items) )
  {
LABEL_34:
    sub_2213CDC(LimitCntMax, v10);
  }
  size = resInfoList->fields._size;
  v50 = LimitCntMax;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      resInfoList,
      (Il2CppObject *)LimitCntMax,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
  }
  else
  {
    v51 = &items->obj.klass + size;
    resInfoList->fields._size = size + 1;
    v51[4] = (Il2CppClass *)v50;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v51 + 4), (int32_t)v50, v41, v42, v43, v44, v45, v46);
  }
}


void LimitUpResultCheckComponent__checkQuestOpen(LimitUpResultCheckComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__c *v3; // x0
  System_Collections_Generic_List_int__o *v4; // x0
  __int64 v5; // x1
  int32_t svtCollectionLimitCnt; // w8
  UserServantEntity_o *baseUsrSvtData; // x0
  int32_t LimitCntMax; // w20
  __int64 v9; // x2
  struct UserServantEntity_o *resUsrSvtData; // x8
  clsQuestCheck_o *v11; // x21
  __int64 v12; // x22
  __int64 v13; // x23
  System_Collections_Generic_List_int__o *v14; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x2
  struct UserServantEntity_o *v18; // x8
  clsQuestCheck_o *v19; // x20
  __int64 v20; // x21
  __int64 v21; // x22
  System_Collections_Generic_List_int__o *v22; // x20
  UILabel_o *storyQuestInfoTitle; // x21
  UILabel_o *heroQuestInfoTitle; // x21
  int32_t v25; // w21
  int32_t Item; // w0
  const MethodInfo *v27; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16

  if ( (byte_596A16D & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_2213A60(&StringLiteral_10051/*"OPEN_STORY_QUEST_TITLE"*/);
    sub_2213A60(&StringLiteral_10040/*"OPEN_HERO_QUEST_TITLE"*/);
    byte_596A16D = 1;
  }
  v3 = System_Collections_Generic_List_int__TypeInfo;
  this->fields.isOpenQuest = 0;
  v4 = (System_Collections_Generic_List_int__o *)sub_2213CCC(v3);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
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
      baseUsrSvtData = (UserServantEntity_o *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
      resUsrSvtData = this->fields.resUsrSvtData;
      if ( !resUsrSvtData )
        goto LABEL_31;
      v11 = (clsQuestCheck_o *)baseUsrSvtData;
      v12 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
      v13 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5, v9);
      *(_QWORD *)&v28.fields.currentCryptoKey = v12;
      *(_QWORD *)&v28.fields.fakeValue = v13;
      baseUsrSvtData = (UserServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                v28,
                                                0);
      if ( !v11 )
LABEL_31:
        sub_2213CDC(baseUsrSvtData, v5);
      v14 = clsQuestCheck__GetReleaseQuestIdByServantLimit_42723580(
              v11,
              (int32_t)baseUsrSvtData,
              this->fields.svtCollectionLimitCnt,
              LimitCntMax,
              494,
              0);
    }
    else
    {
      baseUsrSvtData = (UserServantEntity_o *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
      v18 = this->fields.resUsrSvtData;
      if ( !v18 )
        goto LABEL_31;
      v19 = (clsQuestCheck_o *)baseUsrSvtData;
      v20 = *(_QWORD *)&v18->fields.svtId.fields.currentCryptoKey;
      v21 = *(_QWORD *)&v18->fields.svtId.fields.fakeValue;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5, v17);
      *(_QWORD *)&v29.fields.currentCryptoKey = v20;
      *(_QWORD *)&v29.fields.fakeValue = v21;
      baseUsrSvtData = (UserServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                v29,
                                                0);
      if ( !v19 )
        goto LABEL_31;
      v14 = clsQuestCheck__GetReleaseQuestIdByServantLimit(
              v19,
              (int32_t)baseUsrSvtData,
              this->fields.svtCollectionLimitCnt,
              0);
    }
    v22 = v14;
    storyQuestInfoTitle = this->fields.storyQuestInfoTitle;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v15, v16);
    baseUsrSvtData = (UserServantEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10051/*"OPEN_STORY_QUEST_TITLE"*/, 0);
    if ( storyQuestInfoTitle )
    {
      UILabel__set_text(storyQuestInfoTitle, (System_String_o *)baseUsrSvtData, 0);
      heroQuestInfoTitle = this->fields.heroQuestInfoTitle;
      baseUsrSvtData = (UserServantEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10040/*"OPEN_HERO_QUEST_TITLE"*/, 0);
      if ( heroQuestInfoTitle )
      {
        UILabel__set_text(heroQuestInfoTitle, (System_String_o *)baseUsrSvtData, 0);
        baseUsrSvtData = (UserServantEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( baseUsrSvtData )
        {
          DataManager__GetMasterData_object_(
            (DataManager_o *)baseUsrSvtData,
            (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
          if ( v22 && v22->fields._size >= 1 )
          {
            v25 = 0;
            do
            {
              if ( System_Collections_Generic_List_int___get_Item(
                     v22,
                     v25,
                     (const MethodInfo_4466F78 *)Method_System_Collections_Generic_List_int__get_Item__) >= 1 )
              {
                Item = System_Collections_Generic_List_int___get_Item(
                         v22,
                         v25,
                         (const MethodInfo_4466F78 *)Method_System_Collections_Generic_List_int__get_Item__);
                LimitUpResultCheckComponent__SetResInfoListQuestInfo(this, Item, v27);
              }
              ++v25;
            }
            while ( v25 < v22->fields._size );
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
  bool v7; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_Collections_Generic_List_GameObject__c *v20; // x0
  System_Collections_Generic_List_object__o *v21; // x21
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  __int64 v28; // x1
  __int64 v29; // x2
  DataManager_c *v30; // x0
  ServantTransformMaster_o *Master_object; // x0
  __int64 v32; // x1
  __int64 v33; // x2
  struct UserServantEntity_o *resUsrSvtData; // x8
  ServantTransformMaster_o *v35; // x21
  __int64 v36; // x22
  __int64 v37; // x23
  struct UserServantEntity_o *v38; // x8
  int32_t v39; // w22
  _BOOL4 v40; // w21
  __int64 v41; // x2
  ServantEntity_TransformInfo_o *TransformInfo; // x0
  _BOOL4 v43; // w8
  int32_t TransformCount; // w0
  DataManager_c *v45; // x8
  int v46; // w9
  __int64 v47; // x2
  struct UserServantEntity_o *v48; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v49; // x21
  __int64 v50; // x22
  __int64 v51; // x23
  const MethodInfo *v52; // x1
  const MethodInfo *v53; // x2
  int32_t v54; // w21
  const MethodInfo *v55; // x2
  ServantTransformEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v57; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v58; // 0:x0.16

  if ( (byte_596A16A & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ServantMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantTransformMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_2213A60(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_596A16A = 1;
  }
  entity = 0;
  this->fields.baseUsrSvtData = baseData;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)baseData,
    (System_String_o *)baseData,
    (System_String_o *)resData,
    baseCollectionLimitCnt,
    (int32_t)rewardGiftDataList,
    (bool)method,
    v7);
  this->fields.resUsrSvtData = resData;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.resUsrSvtData,
    (int32_t)resData,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v20 = System_Collections_Generic_List_GameObject__TypeInfo;
  this->fields.svtCollectionLimitCnt = baseCollectionLimitCnt;
  this->fields.kind = kind;
  v21 = (System_Collections_Generic_List_object__o *)sub_2213CCC(v20);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.resInfoList = (struct System_Collections_Generic_List_GameObject__o *)v21;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.resInfoList, (int32_t)v21, v22, v23, v24, v25, v26, v27);
  v30 = DataManager_TypeInfo;
  *(_WORD *)&this->fields.isGetNewSkill = 0;
  this->fields.isOpenQuest = 0;
  if ( !*(&v30->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v30, v28, v29);
  Master_object = (ServantTransformMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantTransformMaster___);
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_38;
  v35 = Master_object;
  v36 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v37 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v32, v33);
  *(_QWORD *)&v57.fields.currentCryptoKey = v36;
  *(_QWORD *)&v57.fields.fakeValue = v37;
  Master_object = (ServantTransformMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                v57,
                                                0);
  v38 = this->fields.resUsrSvtData;
  if ( !v38 )
    goto LABEL_38;
  v39 = (int)Master_object;
  Master_object = (ServantTransformMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                v38->fields.dispLimitCount,
                                                0);
  if ( !v35 )
    goto LABEL_38;
  if ( ServantTransformMaster__TryGetEntity(v35, &entity, v39, (int32_t)Master_object, 0) )
  {
    Master_object = (ServantTransformMaster_o *)entity;
    if ( !entity )
      goto LABEL_38;
    v40 = ServantTransformEntity__IsNotSkillChange(entity, 0);
  }
  else
  {
    v40 = 0;
  }
  Master_object = (ServantTransformMaster_o *)this->fields.resUsrSvtData;
  if ( !Master_object )
    goto LABEL_38;
  if ( !UserServantEntity__get_IsSaveTransformServant((UserServantEntity_o *)Master_object, 0) )
    goto LABEL_20;
  Master_object = (ServantTransformMaster_o *)this->fields.resUsrSvtData;
  if ( !Master_object )
    goto LABEL_38;
  Master_object = (ServantTransformMaster_o *)UserServantEntity__GetServantEntity(
                                                (UserServantEntity_o *)Master_object,
                                                -1,
                                                0);
  if ( !Master_object )
    goto LABEL_38;
  TransformInfo = ServantEntity__GetTransformInfo((ServantEntity_o *)Master_object, 0);
  if ( TransformInfo )
    v43 = ServantEntity_TransformInfo__IsNotSkillChange(TransformInfo, 0);
  else
LABEL_20:
    v43 = 0;
  if ( v43 || v40 )
  {
    TransformCount = 1;
  }
  else
  {
    Master_object = (ServantTransformMaster_o *)this->fields.resUsrSvtData;
    if ( !Master_object )
      goto LABEL_38;
    TransformCount = UserServantEntity__GetTransformCount((UserServantEntity_o *)Master_object, 1, 0);
  }
  v45 = DataManager_TypeInfo;
  v46 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  this->fields.transformationCount = TransformCount;
  if ( !v46 )
    j_il2cpp_runtime_class_init_0(v45, v32, v41);
  Master_object = (ServantTransformMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantMaster___);
  v48 = this->fields.resUsrSvtData;
  if ( !v48 )
    goto LABEL_38;
  v49 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  v50 = *(_QWORD *)&v48->fields.svtId.fields.currentCryptoKey;
  v51 = *(_QWORD *)&v48->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v32, v47);
  *(_QWORD *)&v58.fields.currentCryptoKey = v50;
  *(_QWORD *)&v58.fields.fakeValue = v51;
  Master_object = (ServantTransformMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                v58,
                                                0);
  if ( !v49
    || (Master_object = (ServantTransformMaster_o *)DataMasterBase_object__object__int___GetEntity(
                                                      v49,
                                                      (int32_t)Master_object,
                                                      (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0 )
  {
LABEL_38:
    sub_2213CDC(Master_object, v32);
  }
  if ( ServantEntity__get_IsServant((ServantEntity_o *)Master_object, 0) )
  {
    if ( this->fields.transformationCount >= 1 )
    {
      v54 = 0;
      do
        LimitUpResultCheckComponent__checkGetSkill(this, v54++, v53);
      while ( v54 < this->fields.transformationCount );
    }
    LimitUpResultCheckComponent__checkQuestOpen(this, v52);
    LimitUpResultCheckComponent__checkLimitUpReward(this, rewardGiftDataList, v55);
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
  int max_length; // w8
  struct GiftEntity_o *giftEntity; // x8

  if ( !data )
    goto LABEL_8;
  max_length = data->max_length;
  if ( !max_length )
LABEL_9:
    sub_2213CE4(this);
  if ( data->m_Items[0] == this->fields.afterLimitCnt )
  {
    if ( max_length != 1 )
    {
      giftEntity = this->fields.giftEntity;
      if ( giftEntity )
        return data->m_Items[1] == giftEntity->fields.id;
LABEL_8:
      sub_2213CDC(this, data);
    }
    goto LABEL_9;
  }
  return 0;
}