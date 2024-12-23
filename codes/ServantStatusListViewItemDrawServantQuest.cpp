void __fastcall ServantStatusListViewItemDrawServantQuest___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B63B96 & 1) == 0 )
  {
    sub_1BE4ACC(&ServantStatusListViewItemDrawServantQuest_TypeInfo, v1);
    byte_4B63B96 = 1;
  }
  *ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields = (struct ServantStatusListViewItemDrawServantQuest_StaticFields)0x840000007ALL;
}


void __fastcall ServantStatusListViewItemDrawServantQuest___ctor(
        ServantStatusListViewItemDrawServantQuest_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *v4; // x20
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B63B95 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw___ctor__, method);
    sub_1BE4ACC(&System_Collections_Generic_List_ServantStatusQuestBoardDraw__TypeInfo, v3);
    byte_4B63B95 = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_ServantStatusQuestBoardDraw__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw___ctor__);
  this->fields.questBoardList = (struct System_Collections_Generic_List_ServantStatusQuestBoardDraw__o *)v4;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.questBoardList, (int64_t)v4, v5, v6, v7, v8, v9, v10);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


UnityEngine_GameObject_o *__fastcall ServantStatusListViewItemDrawServantQuest__CreateQuestBoardPrefab(
        ServantStatusListViewItemDrawServantQuest_o *this,
        UnityEngine_GameObject_o *parent,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Object_o *loadPrefab; // x22
  ServantStatusQuestBoardManager_o *v10; // x22
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  Il2CppObject *object; // x22
  Il2CppObject *v18; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  UnityEngine_GameObject_o *v25; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v27; // x1
  UnityEngine_GameObject_o *v28; // x0
  UnityEngine_GameObject_o *v29; // x20
  UnityEngine_GameObject_o *v30; // x19

  if ( (byte_4B63B91 & 1) == 0 )
  {
    sub_1BE4ACC(&NGUITools_TypeInfo, parent);
    sub_1BE4ACC(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v6);
    sub_1BE4ACC(&Method_UnityEngine_Resources_Load_GameObject___, v7);
    sub_1BE4ACC(&ServantStatusQuestBoardManager_TypeInfo, v8);
    byte_4B63B91 = 1;
  }
  loadPrefab = (UnityEngine_Object_o *)this->fields.loadPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(loadPrefab, 0LL, 0LL) )
  {
    v10 = (ServantStatusQuestBoardManager_o *)sub_1BE4D18(ServantStatusQuestBoardManager_TypeInfo);
    ServantStatusQuestBoardManager___ctor(v10, 0LL);
    this->fields.questBoardManager = v10;
    sub_1BE4A70(
      (PartyOrganizationUtility_o *)&this->fields.questBoardManager,
      (int64_t)v10,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
    object = UnityEngine_Resources__Load_object_(
               this->fields.questBoardPrefabPath,
               (const MethodInfo_2FEE238 *)Method_UnityEngine_Resources_Load_GameObject___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v18 = UnityEngine_Object__Instantiate_object_(
            object,
            (const MethodInfo_2FDE9E4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    this->fields.loadPrefab = (struct UnityEngine_GameObject_o *)v18;
    sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.loadPrefab, (int64_t)v18, v19, v20, v21, v22, v23, v24);
    v25 = this->fields.loadPrefab;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    GameObjectExtensions__SetParent_34492620(v25, gameObject, 0LL);
    v28 = this->fields.loadPrefab;
    if ( !v28 )
LABEL_14:
      sub_1BE4D28(v28, v27);
    UnityEngine_GameObject__SetActive(v28, 0, 0LL);
  }
  v29 = this->fields.loadPrefab;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  v28 = NGUITools__AddChild_47712092(parent, v29, 0LL);
  if ( !v28 )
    goto LABEL_14;
  v30 = v28;
  UnityEngine_GameObject__SetActive(v28, 1, 0LL);
  return v30;
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_List_ServantStatusQuestBoardDraw__o *questBoardList; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B63B93 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__Dispose__, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__MoveNext__, v3);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__get_Current__, v4);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__GetEnumerator__, v5);
    byte_4B63B93 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  questBoardList = this->fields.questBoardList;
  if ( !questBoardList )
    sub_1BE4D28(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    (System_Collections_Generic_List_object__o *)questBoardList,
    (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v8,
            (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__MoveNext__) )
  {
    if ( !v8.fields._current )
      sub_1BE4D28(0LL, v7);
    ServantStatusQuestBoardDraw__OnChangeAlphaAnim(
      (ServantStatusQuestBoardDraw_o *)v8.fields._current,
      this->fields.questBoardManager,
      0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__Dispose__);
}


void __fastcall ServantStatusListViewItemDrawServantQuest__OnDestroy(
        ServantStatusListViewItemDrawServantQuest_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *loadPrefab; // x21
  UnityEngine_Object_o *v5; // x21
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  __int64 v12; // x0
  __int64 v13; // x1
  struct System_Collections_Generic_List_ServantStatusQuestBoardDraw__o *questBoardList; // x8
  int32_t size; // w2
  int v16; // w9

  if ( (byte_4B63B90 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Clear__, method);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v3);
    byte_4B63B90 = 1;
  }
  loadPrefab = (UnityEngine_Object_o *)this->fields.loadPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(loadPrefab, 0LL, 0LL) )
  {
    v5 = (UnityEngine_Object_o *)this->fields.loadPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70452000(v5, 0LL);
    this->fields.loadPrefab = 0LL;
    sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.loadPrefab, 0LL, v6, v7, v8, v9, v10, v11);
    questBoardList = this->fields.questBoardList;
    if ( !questBoardList )
      sub_1BE4D28(v12, v13);
    size = questBoardList->fields._size;
    v16 = questBoardList->fields._version + 1;
    questBoardList->fields._size = 0;
    questBoardList->fields._version = v16;
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
  UILabel_o *explanationLabel; // x21
  System_String_o *Instance; // x0
  __int64 v19; // x1
  UILabel_o *explanation2Label; // x21
  struct ServantEntity_o *svtEntity; // x8
  struct UISprite_o *baseSprite; // x8
  System_String_o *v23; // x22
  int32_t mHeight; // w27
  float v25; // s0
  float v26; // s1
  float v27; // s10
  float v28; // s15
  float v29; // s0
  float v30; // s1
  float v31; // s2
  float v32; // s11
  float v33; // s8
  float v34; // s13
  float x; // s12
  float y; // s9
  float z; // s14
  int klass; // w29
  const MethodInfo *v39; // x2
  ServantLimitImageMaster_o *v40; // x28
  MapControl_QuestInfo_o *v41; // x25
  unsigned int v42; // w21
  __int64 v43; // x26
  MapControl_QuestInfo_o *v44; // x24
  const MethodInfo *v45; // x2
  UILabel_o *v46; // x26
  int32_t v47; // w23
  UnityEngine_GameObject_o *v48; // x27
  Il2CppObject *Component_object; // x26
  ServantStatusListViewItemDrawServantQuest_c *v50; // x8
  UnityEngine_Transform_o *v51; // x27
  ServantLimitImageMaster_o *v52; // x29
  UnityEngine_GameObject_o *inputMessageObject; // x27
  ServantStatusQuestBoardManager_o *questBoardManager; // x28
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  System_String_Fields fields; // x8
  _QWORD *v62; // x9
  __int64 klass_low; // x10
  __int64 v64; // x8
  int32_t QuestBoardPitch; // w8
  UnityEngine_GameObject_o *v66; // x23
  UnityEngine_Transform_o *v67; // x24
  Il2CppObject *v68; // x23
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  System_String_Fields v75; // x8
  _QWORD *v76; // x9
  __int64 v77; // x10
  __int64 v78; // x8
  int32_t v79; // w8
  int v80; // w20
  MapControl_QuestInfo_o *v81; // x24
  unsigned int i; // w21
  __int64 v83; // x23
  MapControl_QuestInfo_o *v84; // x23
  UnityEngine_GameObject_o *v85; // x26
  Il2CppObject *v86; // x25
  ServantStatusListViewItemDrawServantQuest_c *v87; // x8
  UnityEngine_Transform_o *v88; // x26
  int32_t v89; // w28
  UnityEngine_GameObject_o *v90; // x26
  ServantStatusQuestBoardManager_o *v91; // x27
  int64_t v92; // x2
  int32_t v93; // w3
  System_String_o *v94; // x4
  BattleSetupInfo_o *v95; // x5
  FollowerInfo_o *v96; // x6
  PartyListViewItem_o *v97; // x7
  System_String_Fields v98; // x8
  _QWORD *v99; // x9
  __int64 v100; // x10
  __int64 v101; // x8
  int32_t v102; // w8
  UnityEngine_GameObject_o *v103; // x20
  UnityEngine_Transform_o *v104; // x22
  Il2CppObject *v105; // x20
  int64_t v106; // x2
  int32_t v107; // w3
  System_String_o *v108; // x4
  BattleSetupInfo_o *v109; // x5
  FollowerInfo_o *v110; // x6
  PartyListViewItem_o *v111; // x7
  System_String_Fields v112; // x8
  _QWORD *v113; // x9
  __int64 v114; // x10
  __int64 v115; // x8
  int32_t v116; // w8
  int v117; // [xsp+Ch] [xbp-B4h]
  ServantStatusListViewItem_o *v118; // [xsp+10h] [xbp-B0h]
  int v119; // [xsp+1Ch] [xbp-A4h]
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v121; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v122; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v123; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v124; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v125; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v126; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v127; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B63B92 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_QuestMaster___, item);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v7);
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_ServantStatusQuestBoardDraw___, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Add__, v9);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v10);
    sub_1BE4ACC(&ServantStatusListViewItemDrawServantQuest_TypeInfo, v11);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_1BE4ACC(&Method_SingletonTemplate_QuestTree__get_Instance__, v13);
    sub_1BE4ACC(&StringLiteral_12044/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_INTERLUDE"*/, v14);
    sub_1BE4ACC(&StringLiteral_12046/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_RAINFORCEMENT"*/, v15);
    sub_1BE4ACC(&StringLiteral_12045/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_LIMIT_LIBERATION"*/, v16);
    byte_4B63B92 = 1;
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
        Instance = LocalizationManager__Get((System_String_o *)StringLiteral_12044/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_INTERLUDE"*/, 0LL);
        if ( !explanationLabel )
          goto LABEL_105;
        UILabel__set_text(explanationLabel, Instance, 0LL);
        explanation2Label = this->fields.explanation2Label;
        Instance = LocalizationManager__Get((System_String_o *)StringLiteral_12046/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_RAINFORCEMENT"*/, 0LL);
        if ( !explanation2Label )
          goto LABEL_105;
        UILabel__set_text(explanation2Label, Instance, 0LL);
        if ( item->fields.svtEntity )
        {
          Instance = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( Instance )
          {
            Instance = (System_String_o *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)Instance,
                                            (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_QuestMaster___);
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
                  v23 = Instance;
                  Instance = (System_String_o *)this->fields.baseCollider;
                  if ( Instance )
                  {
                    mHeight = baseSprite->fields.mHeight;
                    *(UnityEngine_Vector3_o *)&v25 = UnityEngine_BoxCollider__get_size(
                                                       (UnityEngine_BoxCollider_o *)Instance,
                                                       0LL);
                    Instance = (System_String_o *)this->fields.titleBase;
                    if ( Instance )
                    {
                      v27 = v25;
                      v28 = v26;
                      Instance = (System_String_o *)UnityEngine_GameObject__get_transform(
                                                      (UnityEngine_GameObject_o *)Instance,
                                                      0LL);
                      if ( Instance )
                      {
                        *(UnityEngine_Vector3_o *)&v29 = UnityEngine_Transform__get_localPosition(
                                                           (UnityEngine_Transform_o *)Instance,
                                                           0LL);
                        Instance = (System_String_o *)this->fields.rainforcementBase;
                        if ( Instance )
                        {
                          v32 = v29;
                          v33 = v30;
                          v34 = v31;
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
                              if ( !v23 )
                                goto LABEL_105;
                              klass = (int)v23[1].klass;
                            }
                            else
                            {
                              klass = 0;
                            }
                            v118 = item;
                            Instance = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                            if ( Instance )
                            {
                              Instance = (System_String_o *)DataManager__GetMasterData_object_(
                                                              (DataManager_o *)Instance,
                                                              (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
                              if ( klass < 1 )
                                goto LABEL_54;
                              if ( !v23 )
                                goto LABEL_105;
                              v119 = 0;
                              v40 = (ServantLimitImageMaster_o *)Instance;
                              v41 = 0LL;
                              v42 = 0;
                              v117 = klass;
                              do
                              {
                                if ( v42 >= LODWORD(v23[1].klass) )
LABEL_106:
                                  sub_1BE4D30(Instance, v19);
                                v43 = *((_QWORD *)&v23[1].monitor + (int)v42);
                                Instance = (System_String_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38291E8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
                                if ( !v43 || !Instance )
                                  goto LABEL_105;
                                Instance = (System_String_o *)QuestTree__GetQuestInfo(
                                                                (QuestTree_o *)Instance,
                                                                *(_DWORD *)(v43 + 16),
                                                                0LL);
                                if ( Instance
                                  && (v44 = (MapControl_QuestInfo_o *)Instance,
                                      Instance = (System_String_o *)MapControl_QuestInfo__GetQuestType(
                                                                      (MapControl_QuestInfo_o *)Instance,
                                                                      0LL),
                                      (_DWORD)Instance == 3) )
                                {
                                  if ( !v40 )
                                    goto LABEL_105;
                                  if ( ServantLimitImageMaster__IsLimitCountSealQuest(v40, *(_DWORD *)(v43 + 16), 0LL) )
                                  {
                                    v46 = this->fields.explanationLabel;
                                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                    Instance = LocalizationManager__Get((System_String_o *)StringLiteral_12045/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_LIMIT_LIBERATION"*/, 0LL);
                                    if ( !v46 )
                                      goto LABEL_105;
                                    UILabel__set_text(v46, Instance, 0LL);
                                  }
                                  v47 = mHeight;
                                  Instance = (System_String_o *)ServantStatusListViewItemDrawServantQuest__CreateQuestBoardPrefab(
                                                                  this,
                                                                  this->fields.interludeQuestBase,
                                                                  v45);
                                  if ( !Instance )
                                    goto LABEL_105;
                                  v48 = (UnityEngine_GameObject_o *)Instance;
                                  Component_object = UnityEngine_GameObject__GetComponent_object_(
                                                       (UnityEngine_GameObject_o *)Instance,
                                                       (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_ServantStatusQuestBoardDraw___);
                                  Instance = (System_String_o *)UnityEngine_GameObject__get_transform(v48, 0LL);
                                  v50 = ServantStatusListViewItemDrawServantQuest_TypeInfo;
                                  v51 = (UnityEngine_Transform_o *)Instance;
                                  if ( !ServantStatusListViewItemDrawServantQuest_TypeInfo->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawServantQuest_TypeInfo);
                                    v50 = ServantStatusListViewItemDrawServantQuest_TypeInfo;
                                  }
                                  if ( !v51 )
                                    goto LABEL_105;
                                  v121.fields.x = 0.0;
                                  v121.fields.z = 0.0;
                                  v52 = v40;
                                  v121.fields.y = (float)-(v50->static_fields->QuestBoardPitch * v119
                                                         + v50->static_fields->QuestBoardSize / 2);
                                  UnityEngine_Transform__set_localPosition(v51, v121, 0LL);
                                  inputMessageObject = this->fields.inputMessageObject;
                                  questBoardManager = this->fields.questBoardManager;
                                  Instance = (System_String_o *)ServantStatusListViewItem__get_LimitCount(v118, 0LL);
                                  if ( !Component_object )
                                    goto LABEL_105;
                                  ServantStatusQuestBoardDraw__SetItem(
                                    (ServantStatusQuestBoardDraw_o *)Component_object,
                                    v44,
                                    v41,
                                    inputMessageObject,
                                    questBoardManager,
                                    (int32_t)Instance,
                                    0LL);
                                  Instance = (System_String_o *)this->fields.questBoardList;
                                  if ( !Instance )
                                    goto LABEL_105;
                                  fields = Instance->fields;
                                  v62 = Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Add__;
                                  ++HIDWORD(Instance[1].klass);
                                  if ( !*(_QWORD *)&fields )
                                    goto LABEL_105;
                                  klass_low = SLODWORD(Instance[1].klass);
                                  v40 = v52;
                                  klass = v117;
                                  if ( (unsigned int)klass_low >= *(_DWORD *)(*(_QWORD *)&fields + 24LL) )
                                  {
                                    System_Collections_Generic_List_object___AddWithResize(
                                      (System_Collections_Generic_List_object__o *)Instance,
                                      Component_object,
                                      *(const MethodInfo_35EC224 **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
                                  }
                                  else
                                  {
                                    v64 = *(_QWORD *)&fields + 8 * klass_low;
                                    LODWORD(Instance[1].klass) = klass_low + 1;
                                    *(_QWORD *)(v64 + 32) = Component_object;
                                    sub_1BE4A70(
                                      (PartyOrganizationUtility_o *)(v64 + 32),
                                      (int64_t)Component_object,
                                      v55,
                                      v56,
                                      v57,
                                      v58,
                                      v59,
                                      v60);
                                  }
                                  QuestBoardPitch = ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardPitch;
                                  mHeight = QuestBoardPitch + v47;
                                  v28 = v28 + (float)QuestBoardPitch;
                                  y = y - (float)QuestBoardPitch;
                                  v33 = v33 + (float)(QuestBoardPitch / 2);
                                  ++v119;
                                }
                                else
                                {
                                  v44 = v41;
                                }
                                ++v42;
                                v41 = v44;
                              }
                              while ( klass != v42 );
                              if ( !v119 )
                              {
LABEL_54:
                                Instance = (System_String_o *)ServantStatusListViewItemDrawServantQuest__CreateQuestBoardPrefab(
                                                                this,
                                                                this->fields.interludeQuestBase,
                                                                v39);
                                if ( !Instance )
                                  goto LABEL_105;
                                v66 = (UnityEngine_GameObject_o *)Instance;
                                Instance = (System_String_o *)UnityEngine_GameObject__get_transform(
                                                                (UnityEngine_GameObject_o *)Instance,
                                                                0LL);
                                v67 = (UnityEngine_Transform_o *)Instance;
                                if ( !ServantStatusListViewItemDrawServantQuest_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawServantQuest_TypeInfo);
                                if ( !v67 )
                                  goto LABEL_105;
                                v122.fields.x = 0.0;
                                v122.fields.z = 0.0;
                                v122.fields.y = (float)(ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardSize
                                                      / -2);
                                UnityEngine_Transform__set_localPosition(v67, v122, 0LL);
                                Instance = (System_String_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                v66,
                                                                (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_ServantStatusQuestBoardDraw___);
                                if ( !Instance )
                                  goto LABEL_105;
                                v68 = (Il2CppObject *)Instance;
                                ServantStatusQuestBoardDraw__SetDark((ServantStatusQuestBoardDraw_o *)Instance, 0LL);
                                Instance = (System_String_o *)this->fields.questBoardList;
                                if ( !Instance )
                                  goto LABEL_105;
                                v75 = Instance->fields;
                                v76 = Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Add__;
                                ++HIDWORD(Instance[1].klass);
                                if ( !*(_QWORD *)&v75 )
                                  goto LABEL_105;
                                v77 = SLODWORD(Instance[1].klass);
                                if ( (unsigned int)v77 >= *(_DWORD *)(*(_QWORD *)&v75 + 24LL) )
                                {
                                  System_Collections_Generic_List_object___AddWithResize(
                                    (System_Collections_Generic_List_object__o *)Instance,
                                    v68,
                                    *(const MethodInfo_35EC224 **)(*(_QWORD *)(v76[4] + 192LL) + 112LL));
                                }
                                else
                                {
                                  v78 = *(_QWORD *)&v75 + 8 * v77;
                                  LODWORD(Instance[1].klass) = v77 + 1;
                                  *(_QWORD *)(v78 + 32) = v68;
                                  sub_1BE4A70(
                                    (PartyOrganizationUtility_o *)(v78 + 32),
                                    (int64_t)v68,
                                    v69,
                                    v70,
                                    v71,
                                    v72,
                                    v73,
                                    v74);
                                }
                                v79 = ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardPitch;
                                mHeight += v79;
                                v28 = v28 + (float)v79;
                                v33 = v33 + (float)(v79 / 2);
                                y = y - (float)v79;
                              }
                              if ( klass < 1 )
                                goto LABEL_87;
                              if ( !v23 )
                                goto LABEL_105;
                              v80 = 0;
                              v81 = 0LL;
                              for ( i = 0; i != klass; ++i )
                              {
                                if ( i >= LODWORD(v23[1].klass) )
                                  goto LABEL_106;
                                v83 = *((_QWORD *)&v23[1].monitor + (int)i);
                                Instance = (System_String_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38291E8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
                                if ( !v83 || !Instance )
                                  goto LABEL_105;
                                Instance = (System_String_o *)QuestTree__GetQuestInfo(
                                                                (QuestTree_o *)Instance,
                                                                *(_DWORD *)(v83 + 16),
                                                                0LL);
                                if ( Instance
                                  && (v84 = (MapControl_QuestInfo_o *)Instance,
                                      Instance = (System_String_o *)MapControl_QuestInfo__GetQuestType(
                                                                      (MapControl_QuestInfo_o *)Instance,
                                                                      0LL),
                                      (_DWORD)Instance != 3) )
                                {
                                  Instance = (System_String_o *)ServantStatusListViewItemDrawServantQuest__CreateQuestBoardPrefab(
                                                                  this,
                                                                  this->fields.rainforcementQuestBase,
                                                                  v39);
                                  if ( !Instance )
                                    goto LABEL_105;
                                  v85 = (UnityEngine_GameObject_o *)Instance;
                                  v86 = UnityEngine_GameObject__GetComponent_object_(
                                          (UnityEngine_GameObject_o *)Instance,
                                          (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_ServantStatusQuestBoardDraw___);
                                  Instance = (System_String_o *)UnityEngine_GameObject__get_transform(v85, 0LL);
                                  v87 = ServantStatusListViewItemDrawServantQuest_TypeInfo;
                                  v88 = (UnityEngine_Transform_o *)Instance;
                                  if ( !ServantStatusListViewItemDrawServantQuest_TypeInfo->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawServantQuest_TypeInfo);
                                    v87 = ServantStatusListViewItemDrawServantQuest_TypeInfo;
                                  }
                                  if ( !v88 )
                                    goto LABEL_105;
                                  v123.fields.x = 0.0;
                                  v123.fields.z = 0.0;
                                  v89 = mHeight;
                                  v123.fields.y = (float)-(v87->static_fields->QuestBoardPitch * v80
                                                         + v87->static_fields->QuestBoardSize / 2);
                                  UnityEngine_Transform__set_localPosition(v88, v123, 0LL);
                                  v90 = this->fields.inputMessageObject;
                                  v91 = this->fields.questBoardManager;
                                  Instance = (System_String_o *)ServantStatusListViewItem__get_LimitCount(v118, 0LL);
                                  if ( !v86 )
                                    goto LABEL_105;
                                  ServantStatusQuestBoardDraw__SetItem(
                                    (ServantStatusQuestBoardDraw_o *)v86,
                                    v84,
                                    v81,
                                    v90,
                                    v91,
                                    (int32_t)Instance,
                                    0LL);
                                  Instance = (System_String_o *)this->fields.questBoardList;
                                  if ( !Instance )
                                    goto LABEL_105;
                                  v98 = Instance->fields;
                                  v99 = Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Add__;
                                  ++HIDWORD(Instance[1].klass);
                                  if ( !*(_QWORD *)&v98 )
                                    goto LABEL_105;
                                  v100 = SLODWORD(Instance[1].klass);
                                  if ( (unsigned int)v100 >= *(_DWORD *)(*(_QWORD *)&v98 + 24LL) )
                                  {
                                    System_Collections_Generic_List_object___AddWithResize(
                                      (System_Collections_Generic_List_object__o *)Instance,
                                      v86,
                                      *(const MethodInfo_35EC224 **)(*(_QWORD *)(v99[4] + 192LL) + 112LL));
                                  }
                                  else
                                  {
                                    v101 = *(_QWORD *)&v98 + 8 * v100;
                                    LODWORD(Instance[1].klass) = v100 + 1;
                                    *(_QWORD *)(v101 + 32) = v86;
                                    sub_1BE4A70(
                                      (PartyOrganizationUtility_o *)(v101 + 32),
                                      (int64_t)v86,
                                      v92,
                                      v93,
                                      v94,
                                      v95,
                                      v96,
                                      v97);
                                  }
                                  ++v80;
                                  v102 = ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardPitch;
                                  mHeight = v102 + v89;
                                  v28 = v28 + (float)v102;
                                  v33 = v33 + (float)(v102 / 2);
                                }
                                else
                                {
                                  v84 = v81;
                                }
                                v81 = v84;
                              }
                              if ( !v80 )
                              {
LABEL_87:
                                Instance = (System_String_o *)ServantStatusListViewItemDrawServantQuest__CreateQuestBoardPrefab(
                                                                this,
                                                                this->fields.rainforcementQuestBase,
                                                                v39);
                                if ( !Instance )
                                  goto LABEL_105;
                                v103 = (UnityEngine_GameObject_o *)Instance;
                                Instance = (System_String_o *)UnityEngine_GameObject__get_transform(
                                                                (UnityEngine_GameObject_o *)Instance,
                                                                0LL);
                                v104 = (UnityEngine_Transform_o *)Instance;
                                if ( !ServantStatusListViewItemDrawServantQuest_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawServantQuest_TypeInfo);
                                if ( !v104 )
                                  goto LABEL_105;
                                v124.fields.x = 0.0;
                                v124.fields.z = 0.0;
                                v124.fields.y = (float)(ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardSize
                                                      / -2);
                                UnityEngine_Transform__set_localPosition(v104, v124, 0LL);
                                Instance = (System_String_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                v103,
                                                                (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_ServantStatusQuestBoardDraw___);
                                if ( !Instance )
                                  goto LABEL_105;
                                v105 = (Il2CppObject *)Instance;
                                ServantStatusQuestBoardDraw__SetDark((ServantStatusQuestBoardDraw_o *)Instance, 0LL);
                                Instance = (System_String_o *)this->fields.questBoardList;
                                if ( !Instance )
                                  goto LABEL_105;
                                v112 = Instance->fields;
                                v113 = Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Add__;
                                ++HIDWORD(Instance[1].klass);
                                if ( !*(_QWORD *)&v112 )
                                  goto LABEL_105;
                                v114 = SLODWORD(Instance[1].klass);
                                if ( (unsigned int)v114 >= *(_DWORD *)(*(_QWORD *)&v112 + 24LL) )
                                {
                                  System_Collections_Generic_List_object___AddWithResize(
                                    (System_Collections_Generic_List_object__o *)Instance,
                                    v105,
                                    *(const MethodInfo_35EC224 **)(*(_QWORD *)(v113[4] + 192LL) + 112LL));
                                }
                                else
                                {
                                  v115 = *(_QWORD *)&v112 + 8 * v114;
                                  LODWORD(Instance[1].klass) = v114 + 1;
                                  *(_QWORD *)(v115 + 32) = v105;
                                  sub_1BE4A70(
                                    (PartyOrganizationUtility_o *)(v115 + 32),
                                    (int64_t)v105,
                                    v106,
                                    v107,
                                    v108,
                                    v109,
                                    v110,
                                    v111);
                                }
                                v116 = ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardPitch;
                                mHeight += v116;
                                v28 = v28 + (float)v116;
                                v33 = v33 + (float)(v116 / 2);
                              }
                              Instance = (System_String_o *)this->fields.baseSprite;
                              if ( Instance )
                              {
                                UIWidget__set_height((UIWidget_o *)Instance, mHeight, 0LL);
                                Instance = (System_String_o *)this->fields.baseCollider;
                                if ( Instance )
                                {
                                  v125.fields.z = 0.0;
                                  v125.fields.x = v27;
                                  v125.fields.y = v28;
                                  UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)Instance, v125, 0LL);
                                  Instance = (System_String_o *)this->fields.titleBase;
                                  if ( Instance )
                                  {
                                    Instance = (System_String_o *)UnityEngine_GameObject__get_transform(
                                                                    (UnityEngine_GameObject_o *)Instance,
                                                                    0LL);
                                    if ( Instance )
                                    {
                                      v126.fields.x = v32;
                                      v126.fields.y = v33;
                                      v126.fields.z = v34;
                                      UnityEngine_Transform__set_localPosition(
                                        (UnityEngine_Transform_o *)Instance,
                                        v126,
                                        0LL);
                                      Instance = (System_String_o *)this->fields.rainforcementBase;
                                      if ( Instance )
                                      {
                                        Instance = (System_String_o *)UnityEngine_GameObject__get_transform(
                                                                        (UnityEngine_GameObject_o *)Instance,
                                                                        0LL);
                                        if ( Instance )
                                        {
                                          v127.fields.x = x;
                                          v127.fields.y = y;
                                          v127.fields.z = z;
                                          UnityEngine_Transform__set_localPosition(
                                            (UnityEngine_Transform_o *)Instance,
                                            v127,
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
          sub_1BE4D28(Instance, v19);
        }
      }
    }
  }
}


void __fastcall ServantStatusListViewItemDrawServantQuest__Update(
        ServantStatusListViewItemDrawServantQuest_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  ServantStatusQuestBoardManager_o *questBoardManager; // x0
  const MethodInfo *v7; // x1
  struct System_Collections_Generic_List_ServantStatusQuestBoardDraw__o *questBoardList; // x0
  __int64 v9; // x1
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B63B94 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__Dispose__, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__MoveNext__, v3);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__get_Current__, v4);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__GetEnumerator__, v5);
    byte_4B63B94 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  questBoardManager = this->fields.questBoardManager;
  if ( questBoardManager )
  {
    if ( ServantStatusQuestBoardManager__UpdateAlphaAnim(questBoardManager, 0LL) )
      ServantStatusListViewItemDrawServantQuest__OnChangeAlphaAnim(this, v7);
    questBoardList = this->fields.questBoardList;
    if ( !questBoardList )
      sub_1BE4D28(0LL, v7);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v10,
      (System_Collections_Generic_List_object__o *)questBoardList,
      (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v10,
              (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__MoveNext__) )
    {
      if ( !v10.fields._current )
        sub_1BE4D28(0LL, v9);
      ServantStatusQuestBoardDraw__UpdateItem(
        (ServantStatusQuestBoardDraw_o *)v10.fields._current,
        this->fields.questBoardManager,
        0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v10,
      (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__Dispose__);
  }
}