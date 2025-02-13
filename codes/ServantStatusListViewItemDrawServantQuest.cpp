void __fastcall ServantStatusListViewItemDrawServantQuest___cctor(const MethodInfo *method)
{
  if ( (byte_4BD94F5 & 1) == 0 )
  {
    sub_1C21E38(&ServantStatusListViewItemDrawServantQuest_TypeInfo);
    byte_4BD94F5 = 1;
  }
  *ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields = (struct ServantStatusListViewItemDrawServantQuest_StaticFields)0x840000007ALL;
}


void __fastcall ServantStatusListViewItemDrawServantQuest___ctor(
        ServantStatusListViewItemDrawServantQuest_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4BD94F4 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_ServantStatusQuestBoardDraw__TypeInfo);
    byte_4BD94F4 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_ServantStatusQuestBoardDraw__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw___ctor__);
  this->fields.questBoardList = (struct System_Collections_Generic_List_ServantStatusQuestBoardDraw__o *)v3;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.questBoardList, (int64_t)v3, v4, v5, v6, v7, v8, v9);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


UnityEngine_GameObject_o *__fastcall ServantStatusListViewItemDrawServantQuest__CreateQuestBoardPrefab(
        ServantStatusListViewItemDrawServantQuest_o *this,
        UnityEngine_GameObject_o *parent,
        const MethodInfo *method)
{
  UnityEngine_Object_o *loadPrefab; // x22
  ServantStatusQuestBoardManager_o *v6; // x22
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  Il2CppObject *object; // x22
  Il2CppObject *v14; // x0
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  UnityEngine_GameObject_o *v21; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v23; // x1
  UnityEngine_GameObject_o *v24; // x0
  UnityEngine_GameObject_o *v25; // x20
  UnityEngine_GameObject_o *v26; // x19

  if ( (byte_4BD94F0 & 1) == 0 )
  {
    sub_1C21E38(&NGUITools_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_Resources_Load_GameObject___);
    sub_1C21E38(&ServantStatusQuestBoardManager_TypeInfo);
    byte_4BD94F0 = 1;
  }
  loadPrefab = (UnityEngine_Object_o *)this->fields.loadPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(loadPrefab, 0LL, 0LL) )
  {
    v6 = (ServantStatusQuestBoardManager_o *)sub_1C22084(ServantStatusQuestBoardManager_TypeInfo);
    ServantStatusQuestBoardManager___ctor(v6, 0LL);
    this->fields.questBoardManager = v6;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.questBoardManager, (int64_t)v6, v7, v8, v9, v10, v11, v12);
    object = UnityEngine_Resources__Load_object_(
               this->fields.questBoardPrefabPath,
               (const MethodInfo_3045110 *)Method_UnityEngine_Resources_Load_GameObject___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v14 = UnityEngine_Object__Instantiate_object_(
            object,
            (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
    this->fields.loadPrefab = (struct UnityEngine_GameObject_o *)v14;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.loadPrefab, (int64_t)v14, v15, v16, v17, v18, v19, v20);
    v21 = this->fields.loadPrefab;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    GameObjectExtensions__SetParent_34803496(v21, gameObject, 0LL);
    v24 = this->fields.loadPrefab;
    if ( !v24 )
LABEL_14:
      sub_1C22094(v24, v23);
    UnityEngine_GameObject__SetActive(v24, 0, 0LL);
  }
  v25 = this->fields.loadPrefab;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  v24 = NGUITools__AddChild_48037168(parent, v25, 0LL);
  if ( !v24 )
    goto LABEL_14;
  v26 = v24;
  UnityEngine_GameObject__SetActive(v24, 1, 0LL);
  return v26;
}


int32_t __fastcall ServantStatusListViewItemDrawServantQuest__GetKind(
        ServantStatusListViewItemDrawServantQuest_o *this,
        const MethodInfo *method)
{
  return 15;
}


void __fastcall ServantStatusListViewItemDrawServantQuest__OnChangeAlphaAnim(
        ServantStatusListViewItemDrawServantQuest_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ServantStatusQuestBoardDraw__o *questBoardList; // x0
  __int64 v4; // x1
  System_Collections_Generic_List_Enumerator_object__o v5; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4BD94F2 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__GetEnumerator__);
    byte_4BD94F2 = 1;
  }
  memset(&v5, 0, sizeof(v5));
  questBoardList = this->fields.questBoardList;
  if ( !questBoardList )
    sub_1C22094(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v5,
    (System_Collections_Generic_List_object__o *)questBoardList,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v5,
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__MoveNext__) )
  {
    if ( !v5.fields._current )
      sub_1C22094(0LL, v4);
    ServantStatusQuestBoardDraw__OnChangeAlphaAnim(
      (ServantStatusQuestBoardDraw_o *)v5.fields._current,
      this->fields.questBoardManager,
      0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v5,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__Dispose__);
}


void __fastcall ServantStatusListViewItemDrawServantQuest__OnDestroy(
        ServantStatusListViewItemDrawServantQuest_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *loadPrefab; // x21
  UnityEngine_Object_o *v4; // x21
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  __int64 v11; // x0
  __int64 v12; // x1
  struct System_Collections_Generic_List_ServantStatusQuestBoardDraw__o *questBoardList; // x8
  int32_t size; // w2
  int v15; // w9

  if ( (byte_4BD94EF & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Clear__);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD94EF = 1;
  }
  loadPrefab = (UnityEngine_Object_o *)this->fields.loadPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(loadPrefab, 0LL, 0LL) )
  {
    v4 = (UnityEngine_Object_o *)this->fields.loadPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70869612(v4, 0LL);
    this->fields.loadPrefab = 0LL;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.loadPrefab, 0LL, v5, v6, v7, v8, v9, v10);
    questBoardList = this->fields.questBoardList;
    if ( !questBoardList )
      sub_1C22094(v11, v12);
    size = questBoardList->fields._size;
    v15 = questBoardList->fields._version + 1;
    questBoardList->fields._size = 0;
    questBoardList->fields._version = v15;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)questBoardList->fields._items, 0, size, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewItemDrawServantQuest__SetItem(
        ServantStatusListViewItemDrawServantQuest_o *this,
        ServantStatusListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  UILabel_o *explanationLabel; // x21
  System_String_o *Instance; // x0
  __int64 v9; // x1
  UILabel_o *explanation2Label; // x21
  struct ServantEntity_o *svtEntity; // x8
  struct UISprite_o *baseSprite; // x8
  System_String_o *v13; // x22
  int32_t mHeight; // w27
  float v15; // s0
  float v16; // s1
  float v17; // s10
  float v18; // s15
  float v19; // s0
  float v20; // s1
  float v21; // s2
  float v22; // s11
  float v23; // s8
  float v24; // s13
  float x; // s12
  float y; // s9
  float z; // s14
  int klass; // w29
  const MethodInfo *v29; // x2
  ServantLimitImageMaster_o *v30; // x28
  MapControl_QuestInfo_o *v31; // x25
  unsigned int v32; // w21
  __int64 v33; // x26
  MapControl_QuestInfo_o *v34; // x24
  const MethodInfo *v35; // x2
  UILabel_o *v36; // x26
  int32_t v37; // w23
  UnityEngine_GameObject_o *v38; // x27
  Il2CppObject *Component_object; // x26
  ServantStatusListViewItemDrawServantQuest_c *v40; // x8
  UnityEngine_Transform_o *v41; // x27
  ServantLimitImageMaster_o *v42; // x29
  UnityEngine_GameObject_o *inputMessageObject; // x27
  ServantStatusQuestBoardManager_o *questBoardManager; // x28
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  System_String_Fields fields; // x8
  _QWORD *v52; // x9
  __int64 klass_low; // x10
  __int64 v54; // x8
  int32_t QuestBoardPitch; // w8
  UnityEngine_GameObject_o *v56; // x23
  UnityEngine_Transform_o *v57; // x24
  Il2CppObject *v58; // x23
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  System_String_Fields v65; // x8
  _QWORD *v66; // x9
  __int64 v67; // x10
  __int64 v68; // x8
  int32_t v69; // w8
  int v70; // w20
  MapControl_QuestInfo_o *v71; // x24
  unsigned int i; // w21
  __int64 v73; // x23
  MapControl_QuestInfo_o *v74; // x23
  UnityEngine_GameObject_o *v75; // x26
  Il2CppObject *v76; // x25
  ServantStatusListViewItemDrawServantQuest_c *v77; // x8
  UnityEngine_Transform_o *v78; // x26
  int32_t v79; // w28
  UnityEngine_GameObject_o *v80; // x26
  ServantStatusQuestBoardManager_o *v81; // x27
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  System_String_Fields v88; // x8
  _QWORD *v89; // x9
  __int64 v90; // x10
  __int64 v91; // x8
  int32_t v92; // w8
  UnityEngine_GameObject_o *v93; // x20
  UnityEngine_Transform_o *v94; // x22
  Il2CppObject *v95; // x20
  int64_t v96; // x2
  int32_t v97; // w3
  System_String_o *v98; // x4
  BattleSetupInfo_o *v99; // x5
  FollowerInfo_o *v100; // x6
  PartyListViewItem_o *v101; // x7
  System_String_Fields v102; // x8
  _QWORD *v103; // x9
  __int64 v104; // x10
  __int64 v105; // x8
  int32_t v106; // w8
  int v107; // [xsp+Ch] [xbp-B4h]
  ServantStatusListViewItem_o *v108; // [xsp+10h] [xbp-B0h]
  int v109; // [xsp+1Ch] [xbp-A4h]
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v111; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v112; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v113; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v114; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v115; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v116; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v117; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BD94F1 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_ServantStatusQuestBoardDraw___);
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Add__);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&ServantStatusListViewItemDrawServantQuest_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C21E38(&StringLiteral_12093/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_INTERLUDE"*/);
    sub_1C21E38(&StringLiteral_12095/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_RAINFORCEMENT"*/);
    sub_1C21E38(&StringLiteral_12094/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_LIMIT_LIBERATION"*/);
    byte_4BD94F1 = 1;
  }
  if ( !this->fields.isInit )
  {
    this->fields.dispMode = mode;
    if ( item )
    {
      if ( mode )
      {
        this->fields.isInit = 1;
        explanationLabel = this->fields.explanationLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        Instance = LocalizationManager__Get((System_String_o *)StringLiteral_12093/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_INTERLUDE"*/, 0LL);
        if ( !explanationLabel )
          goto LABEL_105;
        UILabel__set_text(explanationLabel, Instance, 0LL);
        explanation2Label = this->fields.explanation2Label;
        Instance = LocalizationManager__Get((System_String_o *)StringLiteral_12095/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_RAINFORCEMENT"*/, 0LL);
        if ( !explanation2Label )
          goto LABEL_105;
        UILabel__set_text(explanation2Label, Instance, 0LL);
        if ( item->fields.svtEntity )
        {
          Instance = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( Instance )
          {
            Instance = (System_String_o *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)Instance,
                                            (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_QuestMaster___);
            svtEntity = item->fields.svtEntity;
            if ( svtEntity )
            {
              if ( Instance )
              {
                Instance = (System_String_o *)QuestMaster__GetQuestEntityList(
                                                (QuestMaster_o *)Instance,
                                                svtEntity->fields.relateQuestIds,
                                                0LL);
                baseSprite = this->fields.baseSprite;
                if ( baseSprite )
                {
                  v13 = Instance;
                  Instance = (System_String_o *)this->fields.baseCollider;
                  if ( Instance )
                  {
                    mHeight = baseSprite->fields.mHeight;
                    *(UnityEngine_Vector3_o *)&v15 = UnityEngine_BoxCollider__get_size(
                                                       (UnityEngine_BoxCollider_o *)Instance,
                                                       0LL);
                    Instance = (System_String_o *)this->fields.titleBase;
                    if ( Instance )
                    {
                      v17 = v15;
                      v18 = v16;
                      Instance = (System_String_o *)UnityEngine_GameObject__get_transform(
                                                      (UnityEngine_GameObject_o *)Instance,
                                                      0LL);
                      if ( Instance )
                      {
                        *(UnityEngine_Vector3_o *)&v19 = UnityEngine_Transform__get_localPosition(
                                                           (UnityEngine_Transform_o *)Instance,
                                                           0LL);
                        Instance = (System_String_o *)this->fields.rainforcementBase;
                        if ( Instance )
                        {
                          v22 = v19;
                          v23 = v20;
                          v24 = v21;
                          Instance = (System_String_o *)UnityEngine_GameObject__get_transform(
                                                          (UnityEngine_GameObject_o *)Instance,
                                                          0LL);
                          if ( Instance )
                          {
                            localPosition = UnityEngine_Transform__get_localPosition(
                                              (UnityEngine_Transform_o *)Instance,
                                              0LL);
                            x = localPosition.fields.x;
                            y = localPosition.fields.y;
                            z = localPosition.fields.z;
                            if ( item->fields.userSvtCollectionEntity )
                            {
                              if ( !v13 )
                                goto LABEL_105;
                              klass = (int)v13[1].klass;
                            }
                            else
                            {
                              klass = 0;
                            }
                            v108 = item;
                            Instance = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                            if ( Instance )
                            {
                              Instance = (System_String_o *)DataManager__GetMasterData_object_(
                                                              (DataManager_o *)Instance,
                                                              (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
                              if ( klass < 1 )
                                goto LABEL_54;
                              if ( !v13 )
                                goto LABEL_105;
                              v109 = 0;
                              v30 = (ServantLimitImageMaster_o *)Instance;
                              v31 = 0LL;
                              v32 = 0;
                              v107 = klass;
                              do
                              {
                                if ( v32 >= LODWORD(v13[1].klass) )
LABEL_106:
                                  sub_1C2209C(Instance, v9);
                                v33 = *((_QWORD *)&v13[1].monitor + (int)v32);
                                Instance = (System_String_o *)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_QuestTree__get_Instance__);
                                if ( !v33 || !Instance )
                                  goto LABEL_105;
                                Instance = (System_String_o *)QuestTree__GetQuestInfo(
                                                                (QuestTree_o *)Instance,
                                                                *(_DWORD *)(v33 + 16),
                                                                0LL);
                                if ( Instance
                                  && (v34 = (MapControl_QuestInfo_o *)Instance,
                                      Instance = (System_String_o *)MapControl_QuestInfo__GetQuestType(
                                                                      (MapControl_QuestInfo_o *)Instance,
                                                                      0LL),
                                      (_DWORD)Instance == 3) )
                                {
                                  if ( !v30 )
                                    goto LABEL_105;
                                  if ( ServantLimitImageMaster__IsLimitCountSealQuest(v30, *(_DWORD *)(v33 + 16), 0LL) )
                                  {
                                    v36 = this->fields.explanationLabel;
                                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                    Instance = LocalizationManager__Get((System_String_o *)StringLiteral_12094/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_LIMIT_LIBERATION"*/, 0LL);
                                    if ( !v36 )
                                      goto LABEL_105;
                                    UILabel__set_text(v36, Instance, 0LL);
                                  }
                                  v37 = mHeight;
                                  Instance = (System_String_o *)ServantStatusListViewItemDrawServantQuest__CreateQuestBoardPrefab(
                                                                  this,
                                                                  this->fields.interludeQuestBase,
                                                                  v35);
                                  if ( !Instance )
                                    goto LABEL_105;
                                  v38 = (UnityEngine_GameObject_o *)Instance;
                                  Component_object = UnityEngine_GameObject__GetComponent_object_(
                                                       (UnityEngine_GameObject_o *)Instance,
                                                       (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusQuestBoardDraw___);
                                  Instance = (System_String_o *)UnityEngine_GameObject__get_transform(v38, 0LL);
                                  v40 = ServantStatusListViewItemDrawServantQuest_TypeInfo;
                                  v41 = (UnityEngine_Transform_o *)Instance;
                                  if ( !ServantStatusListViewItemDrawServantQuest_TypeInfo->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawServantQuest_TypeInfo);
                                    v40 = ServantStatusListViewItemDrawServantQuest_TypeInfo;
                                  }
                                  if ( !v41 )
                                    goto LABEL_105;
                                  v111.fields.x = 0.0;
                                  v111.fields.z = 0.0;
                                  v42 = v30;
                                  v111.fields.y = (float)-(v40->static_fields->QuestBoardPitch * v109
                                                         + v40->static_fields->QuestBoardSize / 2);
                                  UnityEngine_Transform__set_localPosition(v41, v111, 0LL);
                                  inputMessageObject = this->fields.inputMessageObject;
                                  questBoardManager = this->fields.questBoardManager;
                                  Instance = (System_String_o *)ServantStatusListViewItem__get_LimitCount(v108, 0LL);
                                  if ( !Component_object )
                                    goto LABEL_105;
                                  ServantStatusQuestBoardDraw__SetItem(
                                    (ServantStatusQuestBoardDraw_o *)Component_object,
                                    v34,
                                    v31,
                                    inputMessageObject,
                                    questBoardManager,
                                    (int32_t)Instance,
                                    0LL);
                                  Instance = (System_String_o *)this->fields.questBoardList;
                                  if ( !Instance )
                                    goto LABEL_105;
                                  fields = Instance->fields;
                                  v52 = Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Add__;
                                  ++HIDWORD(Instance[1].klass);
                                  if ( !*(_QWORD *)&fields )
                                    goto LABEL_105;
                                  klass_low = SLODWORD(Instance[1].klass);
                                  v30 = v42;
                                  klass = v107;
                                  if ( (unsigned int)klass_low >= *(_DWORD *)(*(_QWORD *)&fields + 24LL) )
                                  {
                                    System_Collections_Generic_List_object___AddWithResize(
                                      (System_Collections_Generic_List_object__o *)Instance,
                                      Component_object,
                                      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
                                  }
                                  else
                                  {
                                    v54 = *(_QWORD *)&fields + 8 * klass_low;
                                    LODWORD(Instance[1].klass) = klass_low + 1;
                                    *(_QWORD *)(v54 + 32) = Component_object;
                                    sub_1C21DDC(
                                      (PartyOrganizationUtility_o *)(v54 + 32),
                                      (int64_t)Component_object,
                                      v45,
                                      v46,
                                      v47,
                                      v48,
                                      v49,
                                      v50);
                                  }
                                  QuestBoardPitch = ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardPitch;
                                  mHeight = QuestBoardPitch + v37;
                                  v18 = v18 + (float)QuestBoardPitch;
                                  y = y - (float)QuestBoardPitch;
                                  v23 = v23 + (float)(QuestBoardPitch / 2);
                                  ++v109;
                                }
                                else
                                {
                                  v34 = v31;
                                }
                                ++v32;
                                v31 = v34;
                              }
                              while ( klass != v32 );
                              if ( !v109 )
                              {
LABEL_54:
                                Instance = (System_String_o *)ServantStatusListViewItemDrawServantQuest__CreateQuestBoardPrefab(
                                                                this,
                                                                this->fields.interludeQuestBase,
                                                                v29);
                                if ( !Instance )
                                  goto LABEL_105;
                                v56 = (UnityEngine_GameObject_o *)Instance;
                                Instance = (System_String_o *)UnityEngine_GameObject__get_transform(
                                                                (UnityEngine_GameObject_o *)Instance,
                                                                0LL);
                                v57 = (UnityEngine_Transform_o *)Instance;
                                if ( !ServantStatusListViewItemDrawServantQuest_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawServantQuest_TypeInfo);
                                if ( !v57 )
                                  goto LABEL_105;
                                v112.fields.x = 0.0;
                                v112.fields.z = 0.0;
                                v112.fields.y = (float)(ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardSize
                                                      / -2);
                                UnityEngine_Transform__set_localPosition(v57, v112, 0LL);
                                Instance = (System_String_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                v56,
                                                                (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusQuestBoardDraw___);
                                if ( !Instance )
                                  goto LABEL_105;
                                v58 = (Il2CppObject *)Instance;
                                ServantStatusQuestBoardDraw__SetDark((ServantStatusQuestBoardDraw_o *)Instance, 0LL);
                                Instance = (System_String_o *)this->fields.questBoardList;
                                if ( !Instance )
                                  goto LABEL_105;
                                v65 = Instance->fields;
                                v66 = Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Add__;
                                ++HIDWORD(Instance[1].klass);
                                if ( !*(_QWORD *)&v65 )
                                  goto LABEL_105;
                                v67 = SLODWORD(Instance[1].klass);
                                if ( (unsigned int)v67 >= *(_DWORD *)(*(_QWORD *)&v65 + 24LL) )
                                {
                                  System_Collections_Generic_List_object___AddWithResize(
                                    (System_Collections_Generic_List_object__o *)Instance,
                                    v58,
                                    *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v66[4] + 192LL) + 112LL));
                                }
                                else
                                {
                                  v68 = *(_QWORD *)&v65 + 8 * v67;
                                  LODWORD(Instance[1].klass) = v67 + 1;
                                  *(_QWORD *)(v68 + 32) = v58;
                                  sub_1C21DDC(
                                    (PartyOrganizationUtility_o *)(v68 + 32),
                                    (int64_t)v58,
                                    v59,
                                    v60,
                                    v61,
                                    v62,
                                    v63,
                                    v64);
                                }
                                v69 = ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardPitch;
                                mHeight += v69;
                                v18 = v18 + (float)v69;
                                v23 = v23 + (float)(v69 / 2);
                                y = y - (float)v69;
                              }
                              if ( klass < 1 )
                                goto LABEL_87;
                              if ( !v13 )
                                goto LABEL_105;
                              v70 = 0;
                              v71 = 0LL;
                              for ( i = 0; i != klass; ++i )
                              {
                                if ( i >= LODWORD(v13[1].klass) )
                                  goto LABEL_106;
                                v73 = *((_QWORD *)&v13[1].monitor + (int)i);
                                Instance = (System_String_o *)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_QuestTree__get_Instance__);
                                if ( !v73 || !Instance )
                                  goto LABEL_105;
                                Instance = (System_String_o *)QuestTree__GetQuestInfo(
                                                                (QuestTree_o *)Instance,
                                                                *(_DWORD *)(v73 + 16),
                                                                0LL);
                                if ( Instance
                                  && (v74 = (MapControl_QuestInfo_o *)Instance,
                                      Instance = (System_String_o *)MapControl_QuestInfo__GetQuestType(
                                                                      (MapControl_QuestInfo_o *)Instance,
                                                                      0LL),
                                      (_DWORD)Instance != 3) )
                                {
                                  Instance = (System_String_o *)ServantStatusListViewItemDrawServantQuest__CreateQuestBoardPrefab(
                                                                  this,
                                                                  this->fields.rainforcementQuestBase,
                                                                  v29);
                                  if ( !Instance )
                                    goto LABEL_105;
                                  v75 = (UnityEngine_GameObject_o *)Instance;
                                  v76 = UnityEngine_GameObject__GetComponent_object_(
                                          (UnityEngine_GameObject_o *)Instance,
                                          (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusQuestBoardDraw___);
                                  Instance = (System_String_o *)UnityEngine_GameObject__get_transform(v75, 0LL);
                                  v77 = ServantStatusListViewItemDrawServantQuest_TypeInfo;
                                  v78 = (UnityEngine_Transform_o *)Instance;
                                  if ( !ServantStatusListViewItemDrawServantQuest_TypeInfo->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawServantQuest_TypeInfo);
                                    v77 = ServantStatusListViewItemDrawServantQuest_TypeInfo;
                                  }
                                  if ( !v78 )
                                    goto LABEL_105;
                                  v113.fields.x = 0.0;
                                  v113.fields.z = 0.0;
                                  v79 = mHeight;
                                  v113.fields.y = (float)-(v77->static_fields->QuestBoardPitch * v70
                                                         + v77->static_fields->QuestBoardSize / 2);
                                  UnityEngine_Transform__set_localPosition(v78, v113, 0LL);
                                  v80 = this->fields.inputMessageObject;
                                  v81 = this->fields.questBoardManager;
                                  Instance = (System_String_o *)ServantStatusListViewItem__get_LimitCount(v108, 0LL);
                                  if ( !v76 )
                                    goto LABEL_105;
                                  ServantStatusQuestBoardDraw__SetItem(
                                    (ServantStatusQuestBoardDraw_o *)v76,
                                    v74,
                                    v71,
                                    v80,
                                    v81,
                                    (int32_t)Instance,
                                    0LL);
                                  Instance = (System_String_o *)this->fields.questBoardList;
                                  if ( !Instance )
                                    goto LABEL_105;
                                  v88 = Instance->fields;
                                  v89 = Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Add__;
                                  ++HIDWORD(Instance[1].klass);
                                  if ( !*(_QWORD *)&v88 )
                                    goto LABEL_105;
                                  v90 = SLODWORD(Instance[1].klass);
                                  if ( (unsigned int)v90 >= *(_DWORD *)(*(_QWORD *)&v88 + 24LL) )
                                  {
                                    System_Collections_Generic_List_object___AddWithResize(
                                      (System_Collections_Generic_List_object__o *)Instance,
                                      v76,
                                      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v89[4] + 192LL) + 112LL));
                                  }
                                  else
                                  {
                                    v91 = *(_QWORD *)&v88 + 8 * v90;
                                    LODWORD(Instance[1].klass) = v90 + 1;
                                    *(_QWORD *)(v91 + 32) = v76;
                                    sub_1C21DDC(
                                      (PartyOrganizationUtility_o *)(v91 + 32),
                                      (int64_t)v76,
                                      v82,
                                      v83,
                                      v84,
                                      v85,
                                      v86,
                                      v87);
                                  }
                                  ++v70;
                                  v92 = ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardPitch;
                                  mHeight = v92 + v79;
                                  v18 = v18 + (float)v92;
                                  v23 = v23 + (float)(v92 / 2);
                                }
                                else
                                {
                                  v74 = v71;
                                }
                                v71 = v74;
                              }
                              if ( !v70 )
                              {
LABEL_87:
                                Instance = (System_String_o *)ServantStatusListViewItemDrawServantQuest__CreateQuestBoardPrefab(
                                                                this,
                                                                this->fields.rainforcementQuestBase,
                                                                v29);
                                if ( !Instance )
                                  goto LABEL_105;
                                v93 = (UnityEngine_GameObject_o *)Instance;
                                Instance = (System_String_o *)UnityEngine_GameObject__get_transform(
                                                                (UnityEngine_GameObject_o *)Instance,
                                                                0LL);
                                v94 = (UnityEngine_Transform_o *)Instance;
                                if ( !ServantStatusListViewItemDrawServantQuest_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawServantQuest_TypeInfo);
                                if ( !v94 )
                                  goto LABEL_105;
                                v114.fields.x = 0.0;
                                v114.fields.z = 0.0;
                                v114.fields.y = (float)(ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardSize
                                                      / -2);
                                UnityEngine_Transform__set_localPosition(v94, v114, 0LL);
                                Instance = (System_String_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                v93,
                                                                (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusQuestBoardDraw___);
                                if ( !Instance )
                                  goto LABEL_105;
                                v95 = (Il2CppObject *)Instance;
                                ServantStatusQuestBoardDraw__SetDark((ServantStatusQuestBoardDraw_o *)Instance, 0LL);
                                Instance = (System_String_o *)this->fields.questBoardList;
                                if ( !Instance )
                                  goto LABEL_105;
                                v102 = Instance->fields;
                                v103 = Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Add__;
                                ++HIDWORD(Instance[1].klass);
                                if ( !*(_QWORD *)&v102 )
                                  goto LABEL_105;
                                v104 = SLODWORD(Instance[1].klass);
                                if ( (unsigned int)v104 >= *(_DWORD *)(*(_QWORD *)&v102 + 24LL) )
                                {
                                  System_Collections_Generic_List_object___AddWithResize(
                                    (System_Collections_Generic_List_object__o *)Instance,
                                    v95,
                                    *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v103[4] + 192LL) + 112LL));
                                }
                                else
                                {
                                  v105 = *(_QWORD *)&v102 + 8 * v104;
                                  LODWORD(Instance[1].klass) = v104 + 1;
                                  *(_QWORD *)(v105 + 32) = v95;
                                  sub_1C21DDC(
                                    (PartyOrganizationUtility_o *)(v105 + 32),
                                    (int64_t)v95,
                                    v96,
                                    v97,
                                    v98,
                                    v99,
                                    v100,
                                    v101);
                                }
                                v106 = ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardPitch;
                                mHeight += v106;
                                v18 = v18 + (float)v106;
                                v23 = v23 + (float)(v106 / 2);
                              }
                              Instance = (System_String_o *)this->fields.baseSprite;
                              if ( Instance )
                              {
                                UIWidget__set_height((UIWidget_o *)Instance, mHeight, 0LL);
                                Instance = (System_String_o *)this->fields.baseCollider;
                                if ( Instance )
                                {
                                  v115.fields.z = 0.0;
                                  v115.fields.x = v17;
                                  v115.fields.y = v18;
                                  UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)Instance, v115, 0LL);
                                  Instance = (System_String_o *)this->fields.titleBase;
                                  if ( Instance )
                                  {
                                    Instance = (System_String_o *)UnityEngine_GameObject__get_transform(
                                                                    (UnityEngine_GameObject_o *)Instance,
                                                                    0LL);
                                    if ( Instance )
                                    {
                                      v116.fields.x = v22;
                                      v116.fields.y = v23;
                                      v116.fields.z = v24;
                                      UnityEngine_Transform__set_localPosition(
                                        (UnityEngine_Transform_o *)Instance,
                                        v116,
                                        0LL);
                                      Instance = (System_String_o *)this->fields.rainforcementBase;
                                      if ( Instance )
                                      {
                                        Instance = (System_String_o *)UnityEngine_GameObject__get_transform(
                                                                        (UnityEngine_GameObject_o *)Instance,
                                                                        0LL);
                                        if ( Instance )
                                        {
                                          v117.fields.x = x;
                                          v117.fields.y = y;
                                          v117.fields.z = z;
                                          UnityEngine_Transform__set_localPosition(
                                            (UnityEngine_Transform_o *)Instance,
                                            v117,
                                            0LL);
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
            }
          }
LABEL_105:
          sub_1C22094(Instance, v9);
        }
      }
    }
  }
}


void __fastcall ServantStatusListViewItemDrawServantQuest__Update(
        ServantStatusListViewItemDrawServantQuest_o *this,
        const MethodInfo *method)
{
  ServantStatusQuestBoardManager_o *questBoardManager; // x0
  const MethodInfo *v4; // x1
  struct System_Collections_Generic_List_ServantStatusQuestBoardDraw__o *questBoardList; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_Enumerator_object__o v7; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4BD94F3 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__GetEnumerator__);
    byte_4BD94F3 = 1;
  }
  memset(&v7, 0, sizeof(v7));
  questBoardManager = this->fields.questBoardManager;
  if ( questBoardManager )
  {
    if ( ServantStatusQuestBoardManager__UpdateAlphaAnim(questBoardManager, 0LL) )
      ServantStatusListViewItemDrawServantQuest__OnChangeAlphaAnim(this, v4);
    questBoardList = this->fields.questBoardList;
    if ( !questBoardList )
      sub_1C22094(0LL, v4);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v7,
      (System_Collections_Generic_List_object__o *)questBoardList,
      (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v7,
              (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__MoveNext__) )
    {
      if ( !v7.fields._current )
        sub_1C22094(0LL, v6);
      ServantStatusQuestBoardDraw__UpdateItem(
        (ServantStatusQuestBoardDraw_o *)v7.fields._current,
        this->fields.questBoardManager,
        0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v7,
      (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__Dispose__);
  }
}