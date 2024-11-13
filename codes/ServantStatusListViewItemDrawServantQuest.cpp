void __fastcall ServantStatusListViewItemDrawServantQuest___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B13222 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantStatusListViewItemDrawServantQuest_TypeInfo, v1, v2);
    byte_4B13222 = 1;
  }
  *ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields = (struct ServantStatusListViewItemDrawServantQuest_StaticFields)0x840000007ALL;
}


void __fastcall ServantStatusListViewItemDrawServantQuest___ctor(
        ServantStatusListViewItemDrawServantQuest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_Generic_List_object__o *v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B13221 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw___ctor__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_List_ServantStatusQuestBoardDraw__TypeInfo, v5, v6);
    byte_4B13221 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_ServantStatusQuestBoardDraw__TypeInfo,
                                                      method,
                                                      v2,
                                                      v3);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw___ctor__);
  this->fields.questBoardList = (struct System_Collections_Generic_List_ServantStatusQuestBoardDraw__o *)v7;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.questBoardList, (int64_t)v7, v8, v9, v10, v11, v12, v13);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


UnityEngine_GameObject_o *__fastcall ServantStatusListViewItemDrawServantQuest__CreateQuestBoardPrefab(
        ServantStatusListViewItemDrawServantQuest_o *this,
        UnityEngine_GameObject_o *parent,
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
  UnityEngine_Object_o *loadPrefab; // x22
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  ServantStatusQuestBoardManager_o *v17; // x22
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  __int64 v24; // x1
  Il2CppObject *object; // x22
  Il2CppObject *v26; // x0
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  UnityEngine_GameObject_o *v33; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v35; // x1
  UnityEngine_GameObject_o *v36; // x0
  UnityEngine_GameObject_o *v37; // x20
  UnityEngine_GameObject_o *v38; // x19

  if ( (byte_4B1321D & 1) == 0 )
  {
    sub_1BCA7E0(&NGUITools_TypeInfo, parent, method);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v5, v6);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_Resources_Load_GameObject___, v9, v10);
    sub_1BCA7E0(&ServantStatusQuestBoardManager_TypeInfo, v11, v12);
    byte_4B1321D = 1;
  }
  loadPrefab = (UnityEngine_Object_o *)this->fields.loadPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, parent);
  if ( UnityEngine_Object__op_Equality(loadPrefab, 0LL, 0LL) )
  {
    v17 = (ServantStatusQuestBoardManager_o *)sub_1BCAA2C(ServantStatusQuestBoardManager_TypeInfo, v14, v15, v16);
    ServantStatusQuestBoardManager___ctor(v17, 0LL);
    this->fields.questBoardManager = v17;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.questBoardManager,
      (int64_t)v17,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
    object = UnityEngine_Resources__Load_object_(
               this->fields.questBoardPrefabPath,
               (const MethodInfo_2FA6FF0 *)Method_UnityEngine_Resources_Load_GameObject___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
    v26 = UnityEngine_Object__Instantiate_object_(
            object,
            (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    this->fields.loadPrefab = (struct UnityEngine_GameObject_o *)v26;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.loadPrefab, (int64_t)v26, v27, v28, v29, v30, v31, v32);
    v33 = this->fields.loadPrefab;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    GameObjectExtensions__SetParent_34336872(v33, gameObject, 0LL);
    v36 = this->fields.loadPrefab;
    if ( !v36 )
LABEL_14:
      sub_1BCAA3C(v36, v35);
    UnityEngine_GameObject__SetActive(v36, 0, 0LL);
  }
  v37 = this->fields.loadPrefab;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v14);
  v36 = NGUITools__AddChild_47424456(parent, v37, 0LL);
  if ( !v36 )
    goto LABEL_14;
  v38 = v36;
  UnityEngine_GameObject__SetActive(v36, 1, 0LL);
  return v38;
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  struct System_Collections_Generic_List_ServantStatusQuestBoardDraw__o *questBoardList; // x0
  __int64 v11; // x1
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B1321F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__MoveNext__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__get_Current__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__GetEnumerator__, v8, v9);
    byte_4B1321F = 1;
  }
  memset(&v12, 0, sizeof(v12));
  questBoardList = this->fields.questBoardList;
  if ( !questBoardList )
    sub_1BCAA3C(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    (System_Collections_Generic_List_object__o *)questBoardList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v12,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__MoveNext__) )
  {
    if ( !v12.fields._current )
      sub_1BCAA3C(0LL, v11);
    ServantStatusQuestBoardDraw__OnChangeAlphaAnim(
      (ServantStatusQuestBoardDraw_o *)v12.fields._current,
      this->fields.questBoardManager,
      0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v12,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__Dispose__);
}


void __fastcall ServantStatusListViewItemDrawServantQuest__OnDestroy(
        ServantStatusListViewItemDrawServantQuest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *loadPrefab; // x21
  __int64 v7; // x1
  UnityEngine_Object_o *v8; // x21
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  __int64 v15; // x0
  __int64 v16; // x1
  struct System_Collections_Generic_List_ServantStatusQuestBoardDraw__o *questBoardList; // x8
  int32_t size; // w2
  int v19; // w9

  if ( (byte_4B1321C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Clear__, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B1321C = 1;
  }
  loadPrefab = (UnityEngine_Object_o *)this->fields.loadPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(loadPrefab, 0LL, 0LL) )
  {
    v8 = (UnityEngine_Object_o *)this->fields.loadPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
    UnityEngine_Object__Destroy_70154244(v8, 0LL);
    this->fields.loadPrefab = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.loadPrefab, 0LL, v9, v10, v11, v12, v13, v14);
    questBoardList = this->fields.questBoardList;
    if ( !questBoardList )
      sub_1BCAA3C(v15, v16);
    size = questBoardList->fields._size;
    v19 = questBoardList->fields._version + 1;
    questBoardList->fields._size = 0;
    questBoardList->fields._version = v19;
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
  UILabel_o *explanationLabel; // x21
  System_String_o *Instance; // x0
  __int64 v29; // x1
  UILabel_o *explanation2Label; // x21
  struct ServantEntity_o *svtEntity; // x8
  struct UISprite_o *baseSprite; // x8
  System_String_o *v33; // x22
  int32_t mHeight; // w27
  float v35; // s0
  float v36; // s1
  float v37; // s10
  float v38; // s15
  float v39; // s0
  float v40; // s1
  float v41; // s2
  float v42; // s11
  float v43; // s8
  float v44; // s13
  float x; // s12
  float y; // s9
  float z; // s14
  int klass; // w29
  const MethodInfo *v49; // x2
  ServantLimitImageMaster_o *v50; // x28
  MapControl_QuestInfo_o *v51; // x25
  unsigned int v52; // w21
  __int64 v53; // x26
  MapControl_QuestInfo_o *v54; // x24
  __int64 v55; // x1
  const MethodInfo *v56; // x2
  UILabel_o *v57; // x26
  int32_t v58; // w23
  UnityEngine_GameObject_o *v59; // x27
  Il2CppObject *Component_object; // x26
  ServantStatusListViewItemDrawServantQuest_c *v61; // x8
  UnityEngine_Transform_o *v62; // x27
  ServantLimitImageMaster_o *v63; // x29
  UnityEngine_GameObject_o *inputMessageObject; // x27
  ServantStatusQuestBoardManager_o *questBoardManager; // x28
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  System_String_Fields fields; // x8
  _QWORD *v73; // x9
  __int64 klass_low; // x10
  __int64 v75; // x8
  int32_t QuestBoardPitch; // w8
  UnityEngine_GameObject_o *v77; // x23
  UnityEngine_Transform_o *v78; // x24
  Il2CppObject *v79; // x23
  int64_t v80; // x2
  int32_t v81; // w3
  System_String_o *v82; // x4
  BattleSetupInfo_o *v83; // x5
  FollowerInfo_o *v84; // x6
  PartyListViewItem_o *v85; // x7
  System_String_Fields v86; // x8
  _QWORD *v87; // x9
  __int64 v88; // x10
  __int64 v89; // x8
  int32_t v90; // w8
  int v91; // w20
  MapControl_QuestInfo_o *v92; // x24
  unsigned int i; // w21
  __int64 v94; // x23
  MapControl_QuestInfo_o *v95; // x23
  UnityEngine_GameObject_o *v96; // x26
  Il2CppObject *v97; // x25
  ServantStatusListViewItemDrawServantQuest_c *v98; // x8
  UnityEngine_Transform_o *v99; // x26
  int32_t v100; // w28
  UnityEngine_GameObject_o *v101; // x26
  ServantStatusQuestBoardManager_o *v102; // x27
  int64_t v103; // x2
  int32_t v104; // w3
  System_String_o *v105; // x4
  BattleSetupInfo_o *v106; // x5
  FollowerInfo_o *v107; // x6
  PartyListViewItem_o *v108; // x7
  System_String_Fields v109; // x8
  _QWORD *v110; // x9
  __int64 v111; // x10
  __int64 v112; // x8
  int32_t v113; // w8
  UnityEngine_GameObject_o *v114; // x20
  UnityEngine_Transform_o *v115; // x22
  Il2CppObject *v116; // x20
  int64_t v117; // x2
  int32_t v118; // w3
  System_String_o *v119; // x4
  BattleSetupInfo_o *v120; // x5
  FollowerInfo_o *v121; // x6
  PartyListViewItem_o *v122; // x7
  System_String_Fields v123; // x8
  _QWORD *v124; // x9
  __int64 v125; // x10
  __int64 v126; // x8
  int32_t v127; // w8
  int v128; // [xsp+Ch] [xbp-B4h]
  ServantStatusListViewItem_o *v129; // [xsp+10h] [xbp-B0h]
  int v130; // [xsp+1Ch] [xbp-A4h]
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v132; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v133; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v134; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v135; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v136; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v137; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v138; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B1321E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestMaster___, item, *(_QWORD *)&mode);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_ServantStatusQuestBoardDraw___, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Add__, v11, v12);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&ServantStatusListViewItemDrawServantQuest_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17, v18);
    sub_1BCA7E0(&Method_SingletonTemplate_QuestTree__get_Instance__, v19, v20);
    sub_1BCA7E0(&StringLiteral_12012/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_INTERLUDE"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_12014/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_RAINFORCEMENT"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_12013/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_LIMIT_LIBERATION"*/, v25, v26);
    byte_4B1321E = 1;
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
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item);
        Instance = LocalizationManager__Get((System_String_o *)StringLiteral_12012/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_INTERLUDE"*/, 0LL);
        if ( !explanationLabel )
          goto LABEL_105;
        UILabel__set_text(explanationLabel, Instance, 0LL);
        explanation2Label = this->fields.explanation2Label;
        Instance = LocalizationManager__Get((System_String_o *)StringLiteral_12014/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_RAINFORCEMENT"*/, 0LL);
        if ( !explanation2Label )
          goto LABEL_105;
        UILabel__set_text(explanation2Label, Instance, 0LL);
        if ( item->fields.svtEntity )
        {
          Instance = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( Instance )
          {
            Instance = (System_String_o *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)Instance,
                                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestMaster___);
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
                  v33 = Instance;
                  Instance = (System_String_o *)this->fields.baseCollider;
                  if ( Instance )
                  {
                    mHeight = baseSprite->fields.mHeight;
                    *(UnityEngine_Vector3_o *)&v35 = UnityEngine_BoxCollider__get_size(
                                                       (UnityEngine_BoxCollider_o *)Instance,
                                                       0LL);
                    Instance = (System_String_o *)this->fields.titleBase;
                    if ( Instance )
                    {
                      v37 = v35;
                      v38 = v36;
                      Instance = (System_String_o *)UnityEngine_GameObject__get_transform(
                                                      (UnityEngine_GameObject_o *)Instance,
                                                      0LL);
                      if ( Instance )
                      {
                        *(UnityEngine_Vector3_o *)&v39 = UnityEngine_Transform__get_localPosition(
                                                           (UnityEngine_Transform_o *)Instance,
                                                           0LL);
                        Instance = (System_String_o *)this->fields.rainforcementBase;
                        if ( Instance )
                        {
                          v42 = v39;
                          v43 = v40;
                          v44 = v41;
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
                              if ( !v33 )
                                goto LABEL_105;
                              klass = (int)v33[1].klass;
                            }
                            else
                            {
                              klass = 0;
                            }
                            v129 = item;
                            Instance = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                            if ( Instance )
                            {
                              Instance = (System_String_o *)DataManager__GetMasterData_object_(
                                                              (DataManager_o *)Instance,
                                                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
                              if ( klass < 1 )
                                goto LABEL_54;
                              if ( !v33 )
                                goto LABEL_105;
                              v130 = 0;
                              v50 = (ServantLimitImageMaster_o *)Instance;
                              v51 = 0LL;
                              v52 = 0;
                              v128 = klass;
                              do
                              {
                                if ( v52 >= LODWORD(v33[1].klass) )
LABEL_106:
                                  sub_1BCAA44(Instance, v29);
                                v53 = *((_QWORD *)&v33[1].monitor + (int)v52);
                                Instance = (System_String_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_QuestTree__get_Instance__);
                                if ( !v53 || !Instance )
                                  goto LABEL_105;
                                Instance = (System_String_o *)QuestTree__GetQuestInfo(
                                                                (QuestTree_o *)Instance,
                                                                *(_DWORD *)(v53 + 16),
                                                                0LL);
                                if ( Instance
                                  && (v54 = (MapControl_QuestInfo_o *)Instance,
                                      Instance = (System_String_o *)MapControl_QuestInfo__GetQuestType(
                                                                      (MapControl_QuestInfo_o *)Instance,
                                                                      0LL),
                                      (_DWORD)Instance == 3) )
                                {
                                  if ( !v50 )
                                    goto LABEL_105;
                                  if ( ServantLimitImageMaster__IsLimitCountSealQuest(v50, *(_DWORD *)(v53 + 16), 0LL) )
                                  {
                                    v57 = this->fields.explanationLabel;
                                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v55);
                                    Instance = LocalizationManager__Get((System_String_o *)StringLiteral_12013/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_LIMIT_LIBERATION"*/, 0LL);
                                    if ( !v57 )
                                      goto LABEL_105;
                                    UILabel__set_text(v57, Instance, 0LL);
                                  }
                                  v58 = mHeight;
                                  Instance = (System_String_o *)ServantStatusListViewItemDrawServantQuest__CreateQuestBoardPrefab(
                                                                  this,
                                                                  this->fields.interludeQuestBase,
                                                                  v56);
                                  if ( !Instance )
                                    goto LABEL_105;
                                  v59 = (UnityEngine_GameObject_o *)Instance;
                                  Component_object = UnityEngine_GameObject__GetComponent_object_(
                                                       (UnityEngine_GameObject_o *)Instance,
                                                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusQuestBoardDraw___);
                                  Instance = (System_String_o *)UnityEngine_GameObject__get_transform(v59, 0LL);
                                  v61 = ServantStatusListViewItemDrawServantQuest_TypeInfo;
                                  v62 = (UnityEngine_Transform_o *)Instance;
                                  if ( !ServantStatusListViewItemDrawServantQuest_TypeInfo->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(
                                      ServantStatusListViewItemDrawServantQuest_TypeInfo,
                                      v29);
                                    v61 = ServantStatusListViewItemDrawServantQuest_TypeInfo;
                                  }
                                  if ( !v62 )
                                    goto LABEL_105;
                                  v132.fields.x = 0.0;
                                  v132.fields.z = 0.0;
                                  v63 = v50;
                                  v132.fields.y = (float)-(v61->static_fields->QuestBoardPitch * v130
                                                         + v61->static_fields->QuestBoardSize / 2);
                                  UnityEngine_Transform__set_localPosition(v62, v132, 0LL);
                                  inputMessageObject = this->fields.inputMessageObject;
                                  questBoardManager = this->fields.questBoardManager;
                                  Instance = (System_String_o *)ServantStatusListViewItem__get_LimitCount(v129, 0LL);
                                  if ( !Component_object )
                                    goto LABEL_105;
                                  ServantStatusQuestBoardDraw__SetItem(
                                    (ServantStatusQuestBoardDraw_o *)Component_object,
                                    v54,
                                    v51,
                                    inputMessageObject,
                                    questBoardManager,
                                    (int32_t)Instance,
                                    0LL);
                                  Instance = (System_String_o *)this->fields.questBoardList;
                                  if ( !Instance )
                                    goto LABEL_105;
                                  fields = Instance->fields;
                                  v73 = Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Add__;
                                  ++HIDWORD(Instance[1].klass);
                                  if ( !*(_QWORD *)&fields )
                                    goto LABEL_105;
                                  klass_low = SLODWORD(Instance[1].klass);
                                  v50 = v63;
                                  klass = v128;
                                  if ( (unsigned int)klass_low >= *(_DWORD *)(*(_QWORD *)&fields + 24LL) )
                                  {
                                    System_Collections_Generic_List_object___AddWithResize(
                                      (System_Collections_Generic_List_object__o *)Instance,
                                      Component_object,
                                      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
                                  }
                                  else
                                  {
                                    v75 = *(_QWORD *)&fields + 8 * klass_low;
                                    LODWORD(Instance[1].klass) = klass_low + 1;
                                    *(_QWORD *)(v75 + 32) = Component_object;
                                    sub_1BCA784(
                                      (PartyOrganizationUtility_o *)(v75 + 32),
                                      (int64_t)Component_object,
                                      v66,
                                      v67,
                                      v68,
                                      v69,
                                      v70,
                                      v71);
                                  }
                                  QuestBoardPitch = ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardPitch;
                                  mHeight = QuestBoardPitch + v58;
                                  v38 = v38 + (float)QuestBoardPitch;
                                  y = y - (float)QuestBoardPitch;
                                  v43 = v43 + (float)(QuestBoardPitch / 2);
                                  ++v130;
                                }
                                else
                                {
                                  v54 = v51;
                                }
                                ++v52;
                                v51 = v54;
                              }
                              while ( klass != v52 );
                              if ( !v130 )
                              {
LABEL_54:
                                Instance = (System_String_o *)ServantStatusListViewItemDrawServantQuest__CreateQuestBoardPrefab(
                                                                this,
                                                                this->fields.interludeQuestBase,
                                                                v49);
                                if ( !Instance )
                                  goto LABEL_105;
                                v77 = (UnityEngine_GameObject_o *)Instance;
                                Instance = (System_String_o *)UnityEngine_GameObject__get_transform(
                                                                (UnityEngine_GameObject_o *)Instance,
                                                                0LL);
                                v78 = (UnityEngine_Transform_o *)Instance;
                                if ( !ServantStatusListViewItemDrawServantQuest_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawServantQuest_TypeInfo, v29);
                                if ( !v78 )
                                  goto LABEL_105;
                                v133.fields.x = 0.0;
                                v133.fields.z = 0.0;
                                v133.fields.y = (float)(ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardSize
                                                      / -2);
                                UnityEngine_Transform__set_localPosition(v78, v133, 0LL);
                                Instance = (System_String_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                v77,
                                                                (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusQuestBoardDraw___);
                                if ( !Instance )
                                  goto LABEL_105;
                                v79 = (Il2CppObject *)Instance;
                                ServantStatusQuestBoardDraw__SetDark((ServantStatusQuestBoardDraw_o *)Instance, 0LL);
                                Instance = (System_String_o *)this->fields.questBoardList;
                                if ( !Instance )
                                  goto LABEL_105;
                                v86 = Instance->fields;
                                v87 = Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Add__;
                                ++HIDWORD(Instance[1].klass);
                                if ( !*(_QWORD *)&v86 )
                                  goto LABEL_105;
                                v88 = SLODWORD(Instance[1].klass);
                                if ( (unsigned int)v88 >= *(_DWORD *)(*(_QWORD *)&v86 + 24LL) )
                                {
                                  System_Collections_Generic_List_object___AddWithResize(
                                    (System_Collections_Generic_List_object__o *)Instance,
                                    v79,
                                    *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v87[4] + 192LL) + 112LL));
                                }
                                else
                                {
                                  v89 = *(_QWORD *)&v86 + 8 * v88;
                                  LODWORD(Instance[1].klass) = v88 + 1;
                                  *(_QWORD *)(v89 + 32) = v79;
                                  sub_1BCA784(
                                    (PartyOrganizationUtility_o *)(v89 + 32),
                                    (int64_t)v79,
                                    v80,
                                    v81,
                                    v82,
                                    v83,
                                    v84,
                                    v85);
                                }
                                v90 = ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardPitch;
                                mHeight += v90;
                                v38 = v38 + (float)v90;
                                v43 = v43 + (float)(v90 / 2);
                                y = y - (float)v90;
                              }
                              if ( klass < 1 )
                                goto LABEL_87;
                              if ( !v33 )
                                goto LABEL_105;
                              v91 = 0;
                              v92 = 0LL;
                              for ( i = 0; i != klass; ++i )
                              {
                                if ( i >= LODWORD(v33[1].klass) )
                                  goto LABEL_106;
                                v94 = *((_QWORD *)&v33[1].monitor + (int)i);
                                Instance = (System_String_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_QuestTree__get_Instance__);
                                if ( !v94 || !Instance )
                                  goto LABEL_105;
                                Instance = (System_String_o *)QuestTree__GetQuestInfo(
                                                                (QuestTree_o *)Instance,
                                                                *(_DWORD *)(v94 + 16),
                                                                0LL);
                                if ( Instance
                                  && (v95 = (MapControl_QuestInfo_o *)Instance,
                                      Instance = (System_String_o *)MapControl_QuestInfo__GetQuestType(
                                                                      (MapControl_QuestInfo_o *)Instance,
                                                                      0LL),
                                      (_DWORD)Instance != 3) )
                                {
                                  Instance = (System_String_o *)ServantStatusListViewItemDrawServantQuest__CreateQuestBoardPrefab(
                                                                  this,
                                                                  this->fields.rainforcementQuestBase,
                                                                  v49);
                                  if ( !Instance )
                                    goto LABEL_105;
                                  v96 = (UnityEngine_GameObject_o *)Instance;
                                  v97 = UnityEngine_GameObject__GetComponent_object_(
                                          (UnityEngine_GameObject_o *)Instance,
                                          (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusQuestBoardDraw___);
                                  Instance = (System_String_o *)UnityEngine_GameObject__get_transform(v96, 0LL);
                                  v98 = ServantStatusListViewItemDrawServantQuest_TypeInfo;
                                  v99 = (UnityEngine_Transform_o *)Instance;
                                  if ( !ServantStatusListViewItemDrawServantQuest_TypeInfo->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(
                                      ServantStatusListViewItemDrawServantQuest_TypeInfo,
                                      v29);
                                    v98 = ServantStatusListViewItemDrawServantQuest_TypeInfo;
                                  }
                                  if ( !v99 )
                                    goto LABEL_105;
                                  v134.fields.x = 0.0;
                                  v134.fields.z = 0.0;
                                  v100 = mHeight;
                                  v134.fields.y = (float)-(v98->static_fields->QuestBoardPitch * v91
                                                         + v98->static_fields->QuestBoardSize / 2);
                                  UnityEngine_Transform__set_localPosition(v99, v134, 0LL);
                                  v101 = this->fields.inputMessageObject;
                                  v102 = this->fields.questBoardManager;
                                  Instance = (System_String_o *)ServantStatusListViewItem__get_LimitCount(v129, 0LL);
                                  if ( !v97 )
                                    goto LABEL_105;
                                  ServantStatusQuestBoardDraw__SetItem(
                                    (ServantStatusQuestBoardDraw_o *)v97,
                                    v95,
                                    v92,
                                    v101,
                                    v102,
                                    (int32_t)Instance,
                                    0LL);
                                  Instance = (System_String_o *)this->fields.questBoardList;
                                  if ( !Instance )
                                    goto LABEL_105;
                                  v109 = Instance->fields;
                                  v110 = Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Add__;
                                  ++HIDWORD(Instance[1].klass);
                                  if ( !*(_QWORD *)&v109 )
                                    goto LABEL_105;
                                  v111 = SLODWORD(Instance[1].klass);
                                  if ( (unsigned int)v111 >= *(_DWORD *)(*(_QWORD *)&v109 + 24LL) )
                                  {
                                    System_Collections_Generic_List_object___AddWithResize(
                                      (System_Collections_Generic_List_object__o *)Instance,
                                      v97,
                                      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v110[4] + 192LL) + 112LL));
                                  }
                                  else
                                  {
                                    v112 = *(_QWORD *)&v109 + 8 * v111;
                                    LODWORD(Instance[1].klass) = v111 + 1;
                                    *(_QWORD *)(v112 + 32) = v97;
                                    sub_1BCA784(
                                      (PartyOrganizationUtility_o *)(v112 + 32),
                                      (int64_t)v97,
                                      v103,
                                      v104,
                                      v105,
                                      v106,
                                      v107,
                                      v108);
                                  }
                                  ++v91;
                                  v113 = ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardPitch;
                                  mHeight = v113 + v100;
                                  v38 = v38 + (float)v113;
                                  v43 = v43 + (float)(v113 / 2);
                                }
                                else
                                {
                                  v95 = v92;
                                }
                                v92 = v95;
                              }
                              if ( !v91 )
                              {
LABEL_87:
                                Instance = (System_String_o *)ServantStatusListViewItemDrawServantQuest__CreateQuestBoardPrefab(
                                                                this,
                                                                this->fields.rainforcementQuestBase,
                                                                v49);
                                if ( !Instance )
                                  goto LABEL_105;
                                v114 = (UnityEngine_GameObject_o *)Instance;
                                Instance = (System_String_o *)UnityEngine_GameObject__get_transform(
                                                                (UnityEngine_GameObject_o *)Instance,
                                                                0LL);
                                v115 = (UnityEngine_Transform_o *)Instance;
                                if ( !ServantStatusListViewItemDrawServantQuest_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawServantQuest_TypeInfo, v29);
                                if ( !v115 )
                                  goto LABEL_105;
                                v135.fields.x = 0.0;
                                v135.fields.z = 0.0;
                                v135.fields.y = (float)(ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardSize
                                                      / -2);
                                UnityEngine_Transform__set_localPosition(v115, v135, 0LL);
                                Instance = (System_String_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                v114,
                                                                (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusQuestBoardDraw___);
                                if ( !Instance )
                                  goto LABEL_105;
                                v116 = (Il2CppObject *)Instance;
                                ServantStatusQuestBoardDraw__SetDark((ServantStatusQuestBoardDraw_o *)Instance, 0LL);
                                Instance = (System_String_o *)this->fields.questBoardList;
                                if ( !Instance )
                                  goto LABEL_105;
                                v123 = Instance->fields;
                                v124 = Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Add__;
                                ++HIDWORD(Instance[1].klass);
                                if ( !*(_QWORD *)&v123 )
                                  goto LABEL_105;
                                v125 = SLODWORD(Instance[1].klass);
                                if ( (unsigned int)v125 >= *(_DWORD *)(*(_QWORD *)&v123 + 24LL) )
                                {
                                  System_Collections_Generic_List_object___AddWithResize(
                                    (System_Collections_Generic_List_object__o *)Instance,
                                    v116,
                                    *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v124[4] + 192LL) + 112LL));
                                }
                                else
                                {
                                  v126 = *(_QWORD *)&v123 + 8 * v125;
                                  LODWORD(Instance[1].klass) = v125 + 1;
                                  *(_QWORD *)(v126 + 32) = v116;
                                  sub_1BCA784(
                                    (PartyOrganizationUtility_o *)(v126 + 32),
                                    (int64_t)v116,
                                    v117,
                                    v118,
                                    v119,
                                    v120,
                                    v121,
                                    v122);
                                }
                                v127 = ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardPitch;
                                mHeight += v127;
                                v38 = v38 + (float)v127;
                                v43 = v43 + (float)(v127 / 2);
                              }
                              Instance = (System_String_o *)this->fields.baseSprite;
                              if ( Instance )
                              {
                                UIWidget__set_height((UIWidget_o *)Instance, mHeight, 0LL);
                                Instance = (System_String_o *)this->fields.baseCollider;
                                if ( Instance )
                                {
                                  v136.fields.z = 0.0;
                                  v136.fields.x = v37;
                                  v136.fields.y = v38;
                                  UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)Instance, v136, 0LL);
                                  Instance = (System_String_o *)this->fields.titleBase;
                                  if ( Instance )
                                  {
                                    Instance = (System_String_o *)UnityEngine_GameObject__get_transform(
                                                                    (UnityEngine_GameObject_o *)Instance,
                                                                    0LL);
                                    if ( Instance )
                                    {
                                      v137.fields.x = v42;
                                      v137.fields.y = v43;
                                      v137.fields.z = v44;
                                      UnityEngine_Transform__set_localPosition(
                                        (UnityEngine_Transform_o *)Instance,
                                        v137,
                                        0LL);
                                      Instance = (System_String_o *)this->fields.rainforcementBase;
                                      if ( Instance )
                                      {
                                        Instance = (System_String_o *)UnityEngine_GameObject__get_transform(
                                                                        (UnityEngine_GameObject_o *)Instance,
                                                                        0LL);
                                        if ( Instance )
                                        {
                                          v138.fields.x = x;
                                          v138.fields.y = y;
                                          v138.fields.z = z;
                                          UnityEngine_Transform__set_localPosition(
                                            (UnityEngine_Transform_o *)Instance,
                                            v138,
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
          sub_1BCAA3C(Instance, v29);
        }
      }
    }
  }
}


void __fastcall ServantStatusListViewItemDrawServantQuest__Update(
        ServantStatusListViewItemDrawServantQuest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  ServantStatusQuestBoardManager_o *questBoardManager; // x0
  const MethodInfo *v11; // x1
  struct System_Collections_Generic_List_ServantStatusQuestBoardDraw__o *questBoardList; // x0
  __int64 v13; // x1
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B13220 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__MoveNext__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__get_Current__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__GetEnumerator__, v8, v9);
    byte_4B13220 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  questBoardManager = this->fields.questBoardManager;
  if ( questBoardManager )
  {
    if ( ServantStatusQuestBoardManager__UpdateAlphaAnim(questBoardManager, 0LL) )
      ServantStatusListViewItemDrawServantQuest__OnChangeAlphaAnim(this, v11);
    questBoardList = this->fields.questBoardList;
    if ( !questBoardList )
      sub_1BCAA3C(0LL, v11);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v14,
      (System_Collections_Generic_List_object__o *)questBoardList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v14,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__MoveNext__) )
    {
      if ( !v14.fields._current )
        sub_1BCAA3C(0LL, v13);
      ServantStatusQuestBoardDraw__UpdateItem(
        (ServantStatusQuestBoardDraw_o *)v14.fields._current,
        this->fields.questBoardManager,
        0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v14,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__Dispose__);
  }
}