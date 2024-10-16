void __fastcall ServantStatusListViewItemDrawServantQuest___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4AB2F23 & 1) == 0 )
  {
    sub_1BAB41C(&ServantStatusListViewItemDrawServantQuest_TypeInfo, v1);
    byte_4AB2F23 = 1;
  }
  *ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields = (struct ServantStatusListViewItemDrawServantQuest_StaticFields)0x840000007ALL;
}


void __fastcall ServantStatusListViewItemDrawServantQuest___ctor(
        ServantStatusListViewItemDrawServantQuest_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_4AB2F22 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw___ctor__, method);
    sub_1BAB41C(&System_Collections_Generic_List_ServantStatusQuestBoardDraw__TypeInfo, v3);
    byte_4AB2F22 = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1BAB668(System_Collections_Generic_List_ServantStatusQuestBoardDraw__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_354D088 *)Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw___ctor__);
  this->fields.questBoardList = (struct System_Collections_Generic_List_ServantStatusQuestBoardDraw__o *)v4;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.questBoardList, (int32_t)v4, v5, v6);
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
  int32_t v11; // w2
  int32_t v12; // w3
  Il2CppObject *object; // x22
  Il2CppObject *v14; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  UnityEngine_GameObject_o *v17; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v19; // x1
  UnityEngine_GameObject_o *v20; // x0
  UnityEngine_GameObject_o *v21; // x20
  UnityEngine_GameObject_o *v22; // x19

  if ( (byte_4AB2F1E & 1) == 0 )
  {
    sub_1BAB41C(&NGUITools_TypeInfo, parent);
    sub_1BAB41C(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v6);
    sub_1BAB41C(&Method_UnityEngine_Resources_Load_GameObject___, v7);
    sub_1BAB41C(&ServantStatusQuestBoardManager_TypeInfo, v8);
    byte_4AB2F1E = 1;
  }
  loadPrefab = (UnityEngine_Object_o *)this->fields.loadPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(loadPrefab, 0LL, 0LL) )
  {
    v10 = (ServantStatusQuestBoardManager_o *)sub_1BAB668(ServantStatusQuestBoardManager_TypeInfo);
    ServantStatusQuestBoardManager___ctor(v10, 0LL);
    this->fields.questBoardManager = v10;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.questBoardManager, (int32_t)v10, v11, v12);
    object = UnityEngine_Resources__Load_object_(
               this->fields.questBoardPrefabPath,
               (const MethodInfo_2F57C2C *)Method_UnityEngine_Resources_Load_GameObject___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v14 = UnityEngine_Object__Instantiate_object_(
            object,
            (const MethodInfo_2F483D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    this->fields.loadPrefab = (struct UnityEngine_GameObject_o *)v14;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.loadPrefab, (int32_t)v14, v15, v16);
    v17 = this->fields.loadPrefab;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    GameObjectExtensions__SetParent_34025528(v17, gameObject, 0LL);
    v20 = this->fields.loadPrefab;
    if ( !v20 )
LABEL_14:
      sub_1BAB678(v20, v19);
    UnityEngine_GameObject__SetActive(v20, 0, 0LL);
  }
  v21 = this->fields.loadPrefab;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  v20 = NGUITools__AddChild_47108880(parent, v21, 0LL);
  if ( !v20 )
    goto LABEL_14;
  v22 = v20;
  UnityEngine_GameObject__SetActive(v20, 1, 0LL);
  return v22;
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

  if ( (byte_4AB2F20 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__Dispose__, method);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__MoveNext__, v3);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__get_Current__, v4);
    sub_1BAB41C(&Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__GetEnumerator__, v5);
    byte_4AB2F20 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  questBoardList = this->fields.questBoardList;
  if ( !questBoardList )
    sub_1BAB678(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    (System_Collections_Generic_List_object__o *)questBoardList,
    (const MethodInfo_354E3B4 *)Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v8,
            (const MethodInfo_32C4C78 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__MoveNext__) )
  {
    if ( !v8.fields._current )
      sub_1BAB678(0LL, v7);
    ServantStatusQuestBoardDraw__OnChangeAlphaAnim(
      (ServantStatusQuestBoardDraw_o *)v8.fields._current,
      this->fields.questBoardManager,
      0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_32C4C74 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__Dispose__);
}


void __fastcall ServantStatusListViewItemDrawServantQuest__OnDestroy(
        ServantStatusListViewItemDrawServantQuest_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *loadPrefab; // x21
  UnityEngine_Object_o *v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  __int64 v8; // x0
  __int64 v9; // x1
  struct System_Collections_Generic_List_ServantStatusQuestBoardDraw__o *questBoardList; // x8
  int32_t size; // w2
  int v12; // w9

  if ( (byte_4AB2F1D & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Clear__, method);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v3);
    byte_4AB2F1D = 1;
  }
  loadPrefab = (UnityEngine_Object_o *)this->fields.loadPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(loadPrefab, 0LL, 0LL) )
  {
    v5 = (UnityEngine_Object_o *)this->fields.loadPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69800620(v5, 0LL);
    this->fields.loadPrefab = 0LL;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.loadPrefab, 0, v6, v7);
    questBoardList = this->fields.questBoardList;
    if ( !questBoardList )
      sub_1BAB678(v8, v9);
    size = questBoardList->fields._size;
    v12 = questBoardList->fields._version + 1;
    questBoardList->fields._size = 0;
    questBoardList->fields._version = v12;
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
  int32_t v55; // w2
  int32_t v56; // w3
  System_String_Fields fields; // x8
  _QWORD *v58; // x9
  __int64 klass_low; // x10
  __int64 v60; // x8
  int32_t QuestBoardPitch; // w8
  UnityEngine_GameObject_o *v62; // x23
  UnityEngine_Transform_o *v63; // x24
  Il2CppObject *v64; // x23
  int32_t v65; // w2
  int32_t v66; // w3
  System_String_Fields v67; // x8
  _QWORD *v68; // x9
  __int64 v69; // x10
  __int64 v70; // x8
  int32_t v71; // w8
  int v72; // w20
  MapControl_QuestInfo_o *v73; // x24
  unsigned int i; // w21
  __int64 v75; // x23
  MapControl_QuestInfo_o *v76; // x23
  UnityEngine_GameObject_o *v77; // x26
  Il2CppObject *v78; // x25
  ServantStatusListViewItemDrawServantQuest_c *v79; // x8
  UnityEngine_Transform_o *v80; // x26
  int32_t v81; // w28
  UnityEngine_GameObject_o *v82; // x26
  ServantStatusQuestBoardManager_o *v83; // x27
  int32_t v84; // w2
  int32_t v85; // w3
  System_String_Fields v86; // x8
  _QWORD *v87; // x9
  __int64 v88; // x10
  __int64 v89; // x8
  int32_t v90; // w8
  UnityEngine_GameObject_o *v91; // x20
  UnityEngine_Transform_o *v92; // x22
  Il2CppObject *v93; // x20
  int32_t v94; // w2
  int32_t v95; // w3
  System_String_Fields v96; // x8
  _QWORD *v97; // x9
  __int64 v98; // x10
  __int64 v99; // x8
  int32_t v100; // w8
  int v101; // [xsp+Ch] [xbp-B4h]
  ServantStatusListViewItem_o *v102; // [xsp+10h] [xbp-B0h]
  int v103; // [xsp+1Ch] [xbp-A4h]
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v105; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v106; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v107; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v108; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v109; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v110; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v111; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4AB2F1F & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataManager_GetMasterData_QuestMaster___, item);
    sub_1BAB41C(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v7);
    sub_1BAB41C(&Method_UnityEngine_GameObject_GetComponent_ServantStatusQuestBoardDraw___, v8);
    sub_1BAB41C(&Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Add__, v9);
    sub_1BAB41C(&LocalizationManager_TypeInfo, v10);
    sub_1BAB41C(&ServantStatusListViewItemDrawServantQuest_TypeInfo, v11);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_1BAB41C(&Method_SingletonTemplate_QuestTree__get_Instance__, v13);
    sub_1BAB41C(&StringLiteral_11883/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_INTERLUDE"*/, v14);
    sub_1BAB41C(&StringLiteral_11885/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_RAINFORCEMENT"*/, v15);
    sub_1BAB41C(&StringLiteral_11884/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_LIMIT_LIBERATION"*/, v16);
    byte_4AB2F1F = 1;
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
        Instance = LocalizationManager__Get((System_String_o *)StringLiteral_11883/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_INTERLUDE"*/, 0LL);
        if ( !explanationLabel )
          goto LABEL_105;
        UILabel__set_text(explanationLabel, Instance, 0LL);
        explanation2Label = this->fields.explanation2Label;
        Instance = LocalizationManager__Get((System_String_o *)StringLiteral_11885/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_RAINFORCEMENT"*/, 0LL);
        if ( !explanation2Label )
          goto LABEL_105;
        UILabel__set_text(explanation2Label, Instance, 0LL);
        if ( item->fields.svtEntity )
        {
          Instance = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( Instance )
          {
            Instance = (System_String_o *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)Instance,
                                            (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_QuestMaster___);
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
                            v102 = item;
                            Instance = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                            if ( Instance )
                            {
                              Instance = (System_String_o *)DataManager__GetMasterData_object_(
                                                              (DataManager_o *)Instance,
                                                              (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
                              if ( klass < 1 )
                                goto LABEL_54;
                              if ( !v23 )
                                goto LABEL_105;
                              v103 = 0;
                              v40 = (ServantLimitImageMaster_o *)Instance;
                              v41 = 0LL;
                              v42 = 0;
                              v101 = klass;
                              do
                              {
                                if ( v42 >= LODWORD(v23[1].klass) )
LABEL_106:
                                  sub_1BAB680(Instance, v19);
                                v43 = *((_QWORD *)&v23[1].monitor + (int)v42);
                                Instance = (System_String_o *)SingletonTemplate_object___get_Instance((const MethodInfo_378A64C *)Method_SingletonTemplate_QuestTree__get_Instance__);
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
                                    Instance = LocalizationManager__Get((System_String_o *)StringLiteral_11884/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_LIMIT_LIBERATION"*/, 0LL);
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
                                                       (const MethodInfo_2F13970 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusQuestBoardDraw___);
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
                                  v105.fields.x = 0.0;
                                  v105.fields.z = 0.0;
                                  v52 = v40;
                                  v105.fields.y = (float)-(v50->static_fields->QuestBoardPitch * v103
                                                         + v50->static_fields->QuestBoardSize / 2);
                                  UnityEngine_Transform__set_localPosition(v51, v105, 0LL);
                                  inputMessageObject = this->fields.inputMessageObject;
                                  questBoardManager = this->fields.questBoardManager;
                                  Instance = (System_String_o *)ServantStatusListViewItem__get_LimitCount(v102, 0LL);
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
                                  v58 = Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Add__;
                                  ++HIDWORD(Instance[1].klass);
                                  if ( !*(_QWORD *)&fields )
                                    goto LABEL_105;
                                  klass_low = SLODWORD(Instance[1].klass);
                                  v40 = v52;
                                  klass = v101;
                                  if ( (unsigned int)klass_low >= *(_DWORD *)(*(_QWORD *)&fields + 24LL) )
                                  {
                                    System_Collections_Generic_List_object___AddWithResize(
                                      (System_Collections_Generic_List_object__o *)Instance,
                                      Component_object,
                                      *(const MethodInfo_354D8BC **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
                                  }
                                  else
                                  {
                                    v60 = *(_QWORD *)&fields + 8 * klass_low;
                                    LODWORD(Instance[1].klass) = klass_low + 1;
                                    *(_QWORD *)(v60 + 32) = Component_object;
                                    sub_1BAB3C0(
                                      (ServantStatusBattleListViewItem_o *)(v60 + 32),
                                      (int32_t)Component_object,
                                      v55,
                                      v56);
                                  }
                                  QuestBoardPitch = ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardPitch;
                                  mHeight = QuestBoardPitch + v47;
                                  v28 = v28 + (float)QuestBoardPitch;
                                  y = y - (float)QuestBoardPitch;
                                  v33 = v33 + (float)(QuestBoardPitch / 2);
                                  ++v103;
                                }
                                else
                                {
                                  v44 = v41;
                                }
                                ++v42;
                                v41 = v44;
                              }
                              while ( klass != v42 );
                              if ( !v103 )
                              {
LABEL_54:
                                Instance = (System_String_o *)ServantStatusListViewItemDrawServantQuest__CreateQuestBoardPrefab(
                                                                this,
                                                                this->fields.interludeQuestBase,
                                                                v39);
                                if ( !Instance )
                                  goto LABEL_105;
                                v62 = (UnityEngine_GameObject_o *)Instance;
                                Instance = (System_String_o *)UnityEngine_GameObject__get_transform(
                                                                (UnityEngine_GameObject_o *)Instance,
                                                                0LL);
                                v63 = (UnityEngine_Transform_o *)Instance;
                                if ( !ServantStatusListViewItemDrawServantQuest_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawServantQuest_TypeInfo);
                                if ( !v63 )
                                  goto LABEL_105;
                                v106.fields.x = 0.0;
                                v106.fields.z = 0.0;
                                v106.fields.y = (float)(ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardSize
                                                      / -2);
                                UnityEngine_Transform__set_localPosition(v63, v106, 0LL);
                                Instance = (System_String_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                v62,
                                                                (const MethodInfo_2F13970 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusQuestBoardDraw___);
                                if ( !Instance )
                                  goto LABEL_105;
                                v64 = (Il2CppObject *)Instance;
                                ServantStatusQuestBoardDraw__SetDark((ServantStatusQuestBoardDraw_o *)Instance, 0LL);
                                Instance = (System_String_o *)this->fields.questBoardList;
                                if ( !Instance )
                                  goto LABEL_105;
                                v67 = Instance->fields;
                                v68 = Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Add__;
                                ++HIDWORD(Instance[1].klass);
                                if ( !*(_QWORD *)&v67 )
                                  goto LABEL_105;
                                v69 = SLODWORD(Instance[1].klass);
                                if ( (unsigned int)v69 >= *(_DWORD *)(*(_QWORD *)&v67 + 24LL) )
                                {
                                  System_Collections_Generic_List_object___AddWithResize(
                                    (System_Collections_Generic_List_object__o *)Instance,
                                    v64,
                                    *(const MethodInfo_354D8BC **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
                                }
                                else
                                {
                                  v70 = *(_QWORD *)&v67 + 8 * v69;
                                  LODWORD(Instance[1].klass) = v69 + 1;
                                  *(_QWORD *)(v70 + 32) = v64;
                                  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v70 + 32), (int32_t)v64, v65, v66);
                                }
                                v71 = ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardPitch;
                                mHeight += v71;
                                v28 = v28 + (float)v71;
                                v33 = v33 + (float)(v71 / 2);
                                y = y - (float)v71;
                              }
                              if ( klass < 1 )
                                goto LABEL_87;
                              if ( !v23 )
                                goto LABEL_105;
                              v72 = 0;
                              v73 = 0LL;
                              for ( i = 0; i != klass; ++i )
                              {
                                if ( i >= LODWORD(v23[1].klass) )
                                  goto LABEL_106;
                                v75 = *((_QWORD *)&v23[1].monitor + (int)i);
                                Instance = (System_String_o *)SingletonTemplate_object___get_Instance((const MethodInfo_378A64C *)Method_SingletonTemplate_QuestTree__get_Instance__);
                                if ( !v75 || !Instance )
                                  goto LABEL_105;
                                Instance = (System_String_o *)QuestTree__GetQuestInfo(
                                                                (QuestTree_o *)Instance,
                                                                *(_DWORD *)(v75 + 16),
                                                                0LL);
                                if ( Instance
                                  && (v76 = (MapControl_QuestInfo_o *)Instance,
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
                                  v77 = (UnityEngine_GameObject_o *)Instance;
                                  v78 = UnityEngine_GameObject__GetComponent_object_(
                                          (UnityEngine_GameObject_o *)Instance,
                                          (const MethodInfo_2F13970 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusQuestBoardDraw___);
                                  Instance = (System_String_o *)UnityEngine_GameObject__get_transform(v77, 0LL);
                                  v79 = ServantStatusListViewItemDrawServantQuest_TypeInfo;
                                  v80 = (UnityEngine_Transform_o *)Instance;
                                  if ( !ServantStatusListViewItemDrawServantQuest_TypeInfo->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawServantQuest_TypeInfo);
                                    v79 = ServantStatusListViewItemDrawServantQuest_TypeInfo;
                                  }
                                  if ( !v80 )
                                    goto LABEL_105;
                                  v107.fields.x = 0.0;
                                  v107.fields.z = 0.0;
                                  v81 = mHeight;
                                  v107.fields.y = (float)-(v79->static_fields->QuestBoardPitch * v72
                                                         + v79->static_fields->QuestBoardSize / 2);
                                  UnityEngine_Transform__set_localPosition(v80, v107, 0LL);
                                  v82 = this->fields.inputMessageObject;
                                  v83 = this->fields.questBoardManager;
                                  Instance = (System_String_o *)ServantStatusListViewItem__get_LimitCount(v102, 0LL);
                                  if ( !v78 )
                                    goto LABEL_105;
                                  ServantStatusQuestBoardDraw__SetItem(
                                    (ServantStatusQuestBoardDraw_o *)v78,
                                    v76,
                                    v73,
                                    v82,
                                    v83,
                                    (int32_t)Instance,
                                    0LL);
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
                                      v78,
                                      *(const MethodInfo_354D8BC **)(*(_QWORD *)(v87[4] + 192LL) + 112LL));
                                  }
                                  else
                                  {
                                    v89 = *(_QWORD *)&v86 + 8 * v88;
                                    LODWORD(Instance[1].klass) = v88 + 1;
                                    *(_QWORD *)(v89 + 32) = v78;
                                    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v89 + 32), (int32_t)v78, v84, v85);
                                  }
                                  ++v72;
                                  v90 = ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardPitch;
                                  mHeight = v90 + v81;
                                  v28 = v28 + (float)v90;
                                  v33 = v33 + (float)(v90 / 2);
                                }
                                else
                                {
                                  v76 = v73;
                                }
                                v73 = v76;
                              }
                              if ( !v72 )
                              {
LABEL_87:
                                Instance = (System_String_o *)ServantStatusListViewItemDrawServantQuest__CreateQuestBoardPrefab(
                                                                this,
                                                                this->fields.rainforcementQuestBase,
                                                                v39);
                                if ( !Instance )
                                  goto LABEL_105;
                                v91 = (UnityEngine_GameObject_o *)Instance;
                                Instance = (System_String_o *)UnityEngine_GameObject__get_transform(
                                                                (UnityEngine_GameObject_o *)Instance,
                                                                0LL);
                                v92 = (UnityEngine_Transform_o *)Instance;
                                if ( !ServantStatusListViewItemDrawServantQuest_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawServantQuest_TypeInfo);
                                if ( !v92 )
                                  goto LABEL_105;
                                v108.fields.x = 0.0;
                                v108.fields.z = 0.0;
                                v108.fields.y = (float)(ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardSize
                                                      / -2);
                                UnityEngine_Transform__set_localPosition(v92, v108, 0LL);
                                Instance = (System_String_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                v91,
                                                                (const MethodInfo_2F13970 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusQuestBoardDraw___);
                                if ( !Instance )
                                  goto LABEL_105;
                                v93 = (Il2CppObject *)Instance;
                                ServantStatusQuestBoardDraw__SetDark((ServantStatusQuestBoardDraw_o *)Instance, 0LL);
                                Instance = (System_String_o *)this->fields.questBoardList;
                                if ( !Instance )
                                  goto LABEL_105;
                                v96 = Instance->fields;
                                v97 = Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Add__;
                                ++HIDWORD(Instance[1].klass);
                                if ( !*(_QWORD *)&v96 )
                                  goto LABEL_105;
                                v98 = SLODWORD(Instance[1].klass);
                                if ( (unsigned int)v98 >= *(_DWORD *)(*(_QWORD *)&v96 + 24LL) )
                                {
                                  System_Collections_Generic_List_object___AddWithResize(
                                    (System_Collections_Generic_List_object__o *)Instance,
                                    v93,
                                    *(const MethodInfo_354D8BC **)(*(_QWORD *)(v97[4] + 192LL) + 112LL));
                                }
                                else
                                {
                                  v99 = *(_QWORD *)&v96 + 8 * v98;
                                  LODWORD(Instance[1].klass) = v98 + 1;
                                  *(_QWORD *)(v99 + 32) = v93;
                                  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v99 + 32), (int32_t)v93, v94, v95);
                                }
                                v100 = ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardPitch;
                                mHeight += v100;
                                v28 = v28 + (float)v100;
                                v33 = v33 + (float)(v100 / 2);
                              }
                              Instance = (System_String_o *)this->fields.baseSprite;
                              if ( Instance )
                              {
                                UIWidget__set_height((UIWidget_o *)Instance, mHeight, 0LL);
                                Instance = (System_String_o *)this->fields.baseCollider;
                                if ( Instance )
                                {
                                  v109.fields.z = 0.0;
                                  v109.fields.x = v27;
                                  v109.fields.y = v28;
                                  UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)Instance, v109, 0LL);
                                  Instance = (System_String_o *)this->fields.titleBase;
                                  if ( Instance )
                                  {
                                    Instance = (System_String_o *)UnityEngine_GameObject__get_transform(
                                                                    (UnityEngine_GameObject_o *)Instance,
                                                                    0LL);
                                    if ( Instance )
                                    {
                                      v110.fields.x = v32;
                                      v110.fields.y = v33;
                                      v110.fields.z = v34;
                                      UnityEngine_Transform__set_localPosition(
                                        (UnityEngine_Transform_o *)Instance,
                                        v110,
                                        0LL);
                                      Instance = (System_String_o *)this->fields.rainforcementBase;
                                      if ( Instance )
                                      {
                                        Instance = (System_String_o *)UnityEngine_GameObject__get_transform(
                                                                        (UnityEngine_GameObject_o *)Instance,
                                                                        0LL);
                                        if ( Instance )
                                        {
                                          v111.fields.x = x;
                                          v111.fields.y = y;
                                          v111.fields.z = z;
                                          UnityEngine_Transform__set_localPosition(
                                            (UnityEngine_Transform_o *)Instance,
                                            v111,
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
          sub_1BAB678(Instance, v19);
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

  if ( (byte_4AB2F21 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__Dispose__, method);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__MoveNext__, v3);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__get_Current__, v4);
    sub_1BAB41C(&Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__GetEnumerator__, v5);
    byte_4AB2F21 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  questBoardManager = this->fields.questBoardManager;
  if ( questBoardManager )
  {
    if ( ServantStatusQuestBoardManager__UpdateAlphaAnim(questBoardManager, 0LL) )
      ServantStatusListViewItemDrawServantQuest__OnChangeAlphaAnim(this, v7);
    questBoardList = this->fields.questBoardList;
    if ( !questBoardList )
      sub_1BAB678(0LL, v7);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v10,
      (System_Collections_Generic_List_object__o *)questBoardList,
      (const MethodInfo_354E3B4 *)Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v10,
              (const MethodInfo_32C4C78 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__MoveNext__) )
    {
      if ( !v10.fields._current )
        sub_1BAB678(0LL, v9);
      ServantStatusQuestBoardDraw__UpdateItem(
        (ServantStatusQuestBoardDraw_o *)v10.fields._current,
        this->fields.questBoardManager,
        0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v10,
      (const MethodInfo_32C4C74 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__Dispose__);
  }
}