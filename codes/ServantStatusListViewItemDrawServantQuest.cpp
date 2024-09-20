void __fastcall ServantStatusListViewItemDrawServantQuest___cctor(const MethodInfo *method)
{
  if ( (byte_4A57E09 & 1) == 0 )
  {
    sub_1B885B0(&ServantStatusListViewItemDrawServantQuest_TypeInfo);
    byte_4A57E09 = 1;
  }
  *ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields = (struct ServantStatusListViewItemDrawServantQuest_StaticFields)0x840000007ALL;
}


void __fastcall ServantStatusListViewItemDrawServantQuest___ctor(
        ServantStatusListViewItemDrawServantQuest_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A57E08 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_ServantStatusQuestBoardDraw__TypeInfo);
    byte_4A57E08 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ServantStatusQuestBoardDraw__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw___ctor__);
  this->fields.questBoardList = (struct System_Collections_Generic_List_ServantStatusQuestBoardDraw__o *)v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.questBoardList, (int32_t)v3, v4, v5);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


UnityEngine_GameObject_o *__fastcall ServantStatusListViewItemDrawServantQuest__CreateQuestBoardPrefab(
        ServantStatusListViewItemDrawServantQuest_o *this,
        UnityEngine_GameObject_o *parent,
        const MethodInfo *method)
{
  UnityEngine_Object_o *loadPrefab; // x22
  ServantStatusQuestBoardManager_o *v6; // x22
  int32_t v7; // w2
  int32_t v8; // w3
  Il2CppObject *object; // x22
  Il2CppObject *v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  UnityEngine_GameObject_o *v13; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v15; // x1
  UnityEngine_GameObject_o *v16; // x0
  UnityEngine_GameObject_o *v17; // x20
  UnityEngine_GameObject_o *v18; // x19

  if ( (byte_4A57E04 & 1) == 0 )
  {
    sub_1B885B0(&NGUITools_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Resources_Load_GameObject___);
    sub_1B885B0(&ServantStatusQuestBoardManager_TypeInfo);
    byte_4A57E04 = 1;
  }
  loadPrefab = (UnityEngine_Object_o *)this->fields.loadPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(loadPrefab, 0LL, 0LL) )
  {
    v6 = (ServantStatusQuestBoardManager_o *)sub_1B887FC(ServantStatusQuestBoardManager_TypeInfo);
    ServantStatusQuestBoardManager___ctor(v6, 0LL);
    this->fields.questBoardManager = v6;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.questBoardManager, (int32_t)v6, v7, v8);
    object = UnityEngine_Resources__Load_object_(
               this->fields.questBoardPrefabPath,
               (const MethodInfo_2F130B0 *)Method_UnityEngine_Resources_Load_GameObject___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v10 = UnityEngine_Object__Instantiate_object_(
            object,
            (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    this->fields.loadPrefab = (struct UnityEngine_GameObject_o *)v10;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.loadPrefab, (int32_t)v10, v11, v12);
    v13 = this->fields.loadPrefab;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    GameObjectExtensions__SetParent_33729948(v13, gameObject, 0LL);
    v16 = this->fields.loadPrefab;
    if ( !v16 )
LABEL_14:
      sub_1B8880C(v16, v15);
    UnityEngine_GameObject__SetActive(v16, 0, 0LL);
  }
  v17 = this->fields.loadPrefab;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  v16 = NGUITools__AddChild_46862524(parent, v17, 0LL);
  if ( !v16 )
    goto LABEL_14;
  v18 = v16;
  UnityEngine_GameObject__SetActive(v16, 1, 0LL);
  return v18;
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

  if ( (byte_4A57E06 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__GetEnumerator__);
    byte_4A57E06 = 1;
  }
  memset(&v5, 0, sizeof(v5));
  questBoardList = this->fields.questBoardList;
  if ( !questBoardList )
    sub_1B8880C(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v5,
    (System_Collections_Generic_List_object__o *)questBoardList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v5,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__MoveNext__) )
  {
    if ( !v5.fields._current )
      sub_1B8880C(0LL, v4);
    ServantStatusQuestBoardDraw__OnChangeAlphaAnim(
      (ServantStatusQuestBoardDraw_o *)v5.fields._current,
      this->fields.questBoardManager,
      0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v5,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__Dispose__);
}


void __fastcall ServantStatusListViewItemDrawServantQuest__OnDestroy(
        ServantStatusListViewItemDrawServantQuest_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *loadPrefab; // x21
  UnityEngine_Object_o *v4; // x21
  int32_t v5; // w2
  int32_t v6; // w3
  __int64 v7; // x0
  __int64 v8; // x1
  struct System_Collections_Generic_List_ServantStatusQuestBoardDraw__o *questBoardList; // x8
  int32_t size; // w2
  int v11; // w9

  if ( (byte_4A57E03 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Clear__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57E03 = 1;
  }
  loadPrefab = (UnityEngine_Object_o *)this->fields.loadPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(loadPrefab, 0LL, 0LL) )
  {
    v4 = (UnityEngine_Object_o *)this->fields.loadPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69459380(v4, 0LL);
    this->fields.loadPrefab = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.loadPrefab, 0, v5, v6);
    questBoardList = this->fields.questBoardList;
    if ( !questBoardList )
      sub_1B8880C(v7, v8);
    size = questBoardList->fields._size;
    v11 = questBoardList->fields._version + 1;
    questBoardList->fields._size = 0;
    questBoardList->fields._version = v11;
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
  int32_t v45; // w2
  int32_t v46; // w3
  System_String_Fields fields; // x8
  _QWORD *v48; // x9
  __int64 klass_low; // x10
  __int64 v50; // x8
  int32_t QuestBoardPitch; // w8
  UnityEngine_GameObject_o *v52; // x23
  UnityEngine_Transform_o *v53; // x24
  Il2CppObject *v54; // x23
  int32_t v55; // w2
  int32_t v56; // w3
  System_String_Fields v57; // x8
  _QWORD *v58; // x9
  __int64 v59; // x10
  __int64 v60; // x8
  int32_t v61; // w8
  int v62; // w20
  MapControl_QuestInfo_o *v63; // x24
  unsigned int i; // w21
  __int64 v65; // x23
  MapControl_QuestInfo_o *v66; // x23
  UnityEngine_GameObject_o *v67; // x26
  Il2CppObject *v68; // x25
  ServantStatusListViewItemDrawServantQuest_c *v69; // x8
  UnityEngine_Transform_o *v70; // x26
  int32_t v71; // w28
  UnityEngine_GameObject_o *v72; // x26
  ServantStatusQuestBoardManager_o *v73; // x27
  int32_t v74; // w2
  int32_t v75; // w3
  System_String_Fields v76; // x8
  _QWORD *v77; // x9
  __int64 v78; // x10
  __int64 v79; // x8
  int32_t v80; // w8
  UnityEngine_GameObject_o *v81; // x20
  UnityEngine_Transform_o *v82; // x22
  Il2CppObject *v83; // x20
  int32_t v84; // w2
  int32_t v85; // w3
  System_String_Fields v86; // x8
  _QWORD *v87; // x9
  __int64 v88; // x10
  __int64 v89; // x8
  int32_t v90; // w8
  int v91; // [xsp+Ch] [xbp-B4h]
  ServantStatusListViewItem_o *v92; // [xsp+10h] [xbp-B0h]
  int v93; // [xsp+1Ch] [xbp-A4h]
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v95; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v96; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v97; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v98; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v99; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v100; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v101; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A57E05 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_ServantStatusQuestBoardDraw___);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Add__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&ServantStatusListViewItemDrawServantQuest_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1B885B0(&StringLiteral_11874/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_INTERLUDE"*/);
    sub_1B885B0(&StringLiteral_11876/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_RAINFORCEMENT"*/);
    sub_1B885B0(&StringLiteral_11875/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_LIMIT_LIBERATION"*/);
    byte_4A57E05 = 1;
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
        Instance = LocalizationManager__Get((System_String_o *)StringLiteral_11874/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_INTERLUDE"*/, 0LL);
        if ( !explanationLabel )
          goto LABEL_105;
        UILabel__set_text(explanationLabel, Instance, 0LL);
        explanation2Label = this->fields.explanation2Label;
        Instance = LocalizationManager__Get((System_String_o *)StringLiteral_11876/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_RAINFORCEMENT"*/, 0LL);
        if ( !explanation2Label )
          goto LABEL_105;
        UILabel__set_text(explanation2Label, Instance, 0LL);
        if ( item->fields.svtEntity )
        {
          Instance = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( Instance )
          {
            Instance = (System_String_o *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)Instance,
                                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestMaster___);
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
                            v92 = item;
                            Instance = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                            if ( Instance )
                            {
                              Instance = (System_String_o *)DataManager__GetMasterData_object_(
                                                              (DataManager_o *)Instance,
                                                              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
                              if ( klass < 1 )
                                goto LABEL_54;
                              if ( !v13 )
                                goto LABEL_105;
                              v93 = 0;
                              v30 = (ServantLimitImageMaster_o *)Instance;
                              v31 = 0LL;
                              v32 = 0;
                              v91 = klass;
                              do
                              {
                                if ( v32 >= LODWORD(v13[1].klass) )
LABEL_106:
                                  sub_1B88814(Instance, v9);
                                v33 = *((_QWORD *)&v13[1].monitor + (int)v32);
                                Instance = (System_String_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_QuestTree__get_Instance__);
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
                                    Instance = LocalizationManager__Get((System_String_o *)StringLiteral_11875/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_LIMIT_LIBERATION"*/, 0LL);
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
                                                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusQuestBoardDraw___);
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
                                  v95.fields.x = 0.0;
                                  v95.fields.z = 0.0;
                                  v42 = v30;
                                  v95.fields.y = (float)-(v40->static_fields->QuestBoardPitch * v93
                                                        + v40->static_fields->QuestBoardSize / 2);
                                  UnityEngine_Transform__set_localPosition(v41, v95, 0LL);
                                  inputMessageObject = this->fields.inputMessageObject;
                                  questBoardManager = this->fields.questBoardManager;
                                  Instance = (System_String_o *)ServantStatusListViewItem__get_LimitCount(v92, 0LL);
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
                                  v48 = Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Add__;
                                  ++HIDWORD(Instance[1].klass);
                                  if ( !*(_QWORD *)&fields )
                                    goto LABEL_105;
                                  klass_low = SLODWORD(Instance[1].klass);
                                  v30 = v42;
                                  klass = v91;
                                  if ( (unsigned int)klass_low >= *(_DWORD *)(*(_QWORD *)&fields + 24LL) )
                                  {
                                    System_Collections_Generic_List_object___AddWithResize(
                                      (System_Collections_Generic_List_object__o *)Instance,
                                      Component_object,
                                      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
                                  }
                                  else
                                  {
                                    v50 = *(_QWORD *)&fields + 8 * klass_low;
                                    LODWORD(Instance[1].klass) = klass_low + 1;
                                    *(_QWORD *)(v50 + 32) = Component_object;
                                    sub_1B88554(
                                      (ServantStatusBattleListViewItem_o *)(v50 + 32),
                                      (int32_t)Component_object,
                                      v45,
                                      v46);
                                  }
                                  QuestBoardPitch = ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardPitch;
                                  mHeight = QuestBoardPitch + v37;
                                  v18 = v18 + (float)QuestBoardPitch;
                                  y = y - (float)QuestBoardPitch;
                                  v23 = v23 + (float)(QuestBoardPitch / 2);
                                  ++v93;
                                }
                                else
                                {
                                  v34 = v31;
                                }
                                ++v32;
                                v31 = v34;
                              }
                              while ( klass != v32 );
                              if ( !v93 )
                              {
LABEL_54:
                                Instance = (System_String_o *)ServantStatusListViewItemDrawServantQuest__CreateQuestBoardPrefab(
                                                                this,
                                                                this->fields.interludeQuestBase,
                                                                v29);
                                if ( !Instance )
                                  goto LABEL_105;
                                v52 = (UnityEngine_GameObject_o *)Instance;
                                Instance = (System_String_o *)UnityEngine_GameObject__get_transform(
                                                                (UnityEngine_GameObject_o *)Instance,
                                                                0LL);
                                v53 = (UnityEngine_Transform_o *)Instance;
                                if ( !ServantStatusListViewItemDrawServantQuest_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawServantQuest_TypeInfo);
                                if ( !v53 )
                                  goto LABEL_105;
                                v96.fields.x = 0.0;
                                v96.fields.z = 0.0;
                                v96.fields.y = (float)(ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardSize
                                                     / -2);
                                UnityEngine_Transform__set_localPosition(v53, v96, 0LL);
                                Instance = (System_String_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                v52,
                                                                (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusQuestBoardDraw___);
                                if ( !Instance )
                                  goto LABEL_105;
                                v54 = (Il2CppObject *)Instance;
                                ServantStatusQuestBoardDraw__SetDark((ServantStatusQuestBoardDraw_o *)Instance, 0LL);
                                Instance = (System_String_o *)this->fields.questBoardList;
                                if ( !Instance )
                                  goto LABEL_105;
                                v57 = Instance->fields;
                                v58 = Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Add__;
                                ++HIDWORD(Instance[1].klass);
                                if ( !*(_QWORD *)&v57 )
                                  goto LABEL_105;
                                v59 = SLODWORD(Instance[1].klass);
                                if ( (unsigned int)v59 >= *(_DWORD *)(*(_QWORD *)&v57 + 24LL) )
                                {
                                  System_Collections_Generic_List_object___AddWithResize(
                                    (System_Collections_Generic_List_object__o *)Instance,
                                    v54,
                                    *(const MethodInfo_34FD834 **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
                                }
                                else
                                {
                                  v60 = *(_QWORD *)&v57 + 8 * v59;
                                  LODWORD(Instance[1].klass) = v59 + 1;
                                  *(_QWORD *)(v60 + 32) = v54;
                                  sub_1B88554((ServantStatusBattleListViewItem_o *)(v60 + 32), (int32_t)v54, v55, v56);
                                }
                                v61 = ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardPitch;
                                mHeight += v61;
                                v18 = v18 + (float)v61;
                                v23 = v23 + (float)(v61 / 2);
                                y = y - (float)v61;
                              }
                              if ( klass < 1 )
                                goto LABEL_87;
                              if ( !v13 )
                                goto LABEL_105;
                              v62 = 0;
                              v63 = 0LL;
                              for ( i = 0; i != klass; ++i )
                              {
                                if ( i >= LODWORD(v13[1].klass) )
                                  goto LABEL_106;
                                v65 = *((_QWORD *)&v13[1].monitor + (int)i);
                                Instance = (System_String_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_QuestTree__get_Instance__);
                                if ( !v65 || !Instance )
                                  goto LABEL_105;
                                Instance = (System_String_o *)QuestTree__GetQuestInfo(
                                                                (QuestTree_o *)Instance,
                                                                *(_DWORD *)(v65 + 16),
                                                                0LL);
                                if ( Instance
                                  && (v66 = (MapControl_QuestInfo_o *)Instance,
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
                                  v67 = (UnityEngine_GameObject_o *)Instance;
                                  v68 = UnityEngine_GameObject__GetComponent_object_(
                                          (UnityEngine_GameObject_o *)Instance,
                                          (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusQuestBoardDraw___);
                                  Instance = (System_String_o *)UnityEngine_GameObject__get_transform(v67, 0LL);
                                  v69 = ServantStatusListViewItemDrawServantQuest_TypeInfo;
                                  v70 = (UnityEngine_Transform_o *)Instance;
                                  if ( !ServantStatusListViewItemDrawServantQuest_TypeInfo->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawServantQuest_TypeInfo);
                                    v69 = ServantStatusListViewItemDrawServantQuest_TypeInfo;
                                  }
                                  if ( !v70 )
                                    goto LABEL_105;
                                  v97.fields.x = 0.0;
                                  v97.fields.z = 0.0;
                                  v71 = mHeight;
                                  v97.fields.y = (float)-(v69->static_fields->QuestBoardPitch * v62
                                                        + v69->static_fields->QuestBoardSize / 2);
                                  UnityEngine_Transform__set_localPosition(v70, v97, 0LL);
                                  v72 = this->fields.inputMessageObject;
                                  v73 = this->fields.questBoardManager;
                                  Instance = (System_String_o *)ServantStatusListViewItem__get_LimitCount(v92, 0LL);
                                  if ( !v68 )
                                    goto LABEL_105;
                                  ServantStatusQuestBoardDraw__SetItem(
                                    (ServantStatusQuestBoardDraw_o *)v68,
                                    v66,
                                    v63,
                                    v72,
                                    v73,
                                    (int32_t)Instance,
                                    0LL);
                                  Instance = (System_String_o *)this->fields.questBoardList;
                                  if ( !Instance )
                                    goto LABEL_105;
                                  v76 = Instance->fields;
                                  v77 = Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Add__;
                                  ++HIDWORD(Instance[1].klass);
                                  if ( !*(_QWORD *)&v76 )
                                    goto LABEL_105;
                                  v78 = SLODWORD(Instance[1].klass);
                                  if ( (unsigned int)v78 >= *(_DWORD *)(*(_QWORD *)&v76 + 24LL) )
                                  {
                                    System_Collections_Generic_List_object___AddWithResize(
                                      (System_Collections_Generic_List_object__o *)Instance,
                                      v68,
                                      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v77[4] + 192LL) + 112LL));
                                  }
                                  else
                                  {
                                    v79 = *(_QWORD *)&v76 + 8 * v78;
                                    LODWORD(Instance[1].klass) = v78 + 1;
                                    *(_QWORD *)(v79 + 32) = v68;
                                    sub_1B88554((ServantStatusBattleListViewItem_o *)(v79 + 32), (int32_t)v68, v74, v75);
                                  }
                                  ++v62;
                                  v80 = ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardPitch;
                                  mHeight = v80 + v71;
                                  v18 = v18 + (float)v80;
                                  v23 = v23 + (float)(v80 / 2);
                                }
                                else
                                {
                                  v66 = v63;
                                }
                                v63 = v66;
                              }
                              if ( !v62 )
                              {
LABEL_87:
                                Instance = (System_String_o *)ServantStatusListViewItemDrawServantQuest__CreateQuestBoardPrefab(
                                                                this,
                                                                this->fields.rainforcementQuestBase,
                                                                v29);
                                if ( !Instance )
                                  goto LABEL_105;
                                v81 = (UnityEngine_GameObject_o *)Instance;
                                Instance = (System_String_o *)UnityEngine_GameObject__get_transform(
                                                                (UnityEngine_GameObject_o *)Instance,
                                                                0LL);
                                v82 = (UnityEngine_Transform_o *)Instance;
                                if ( !ServantStatusListViewItemDrawServantQuest_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawServantQuest_TypeInfo);
                                if ( !v82 )
                                  goto LABEL_105;
                                v98.fields.x = 0.0;
                                v98.fields.z = 0.0;
                                v98.fields.y = (float)(ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardSize
                                                     / -2);
                                UnityEngine_Transform__set_localPosition(v82, v98, 0LL);
                                Instance = (System_String_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                v81,
                                                                (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusQuestBoardDraw___);
                                if ( !Instance )
                                  goto LABEL_105;
                                v83 = (Il2CppObject *)Instance;
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
                                    v83,
                                    *(const MethodInfo_34FD834 **)(*(_QWORD *)(v87[4] + 192LL) + 112LL));
                                }
                                else
                                {
                                  v89 = *(_QWORD *)&v86 + 8 * v88;
                                  LODWORD(Instance[1].klass) = v88 + 1;
                                  *(_QWORD *)(v89 + 32) = v83;
                                  sub_1B88554((ServantStatusBattleListViewItem_o *)(v89 + 32), (int32_t)v83, v84, v85);
                                }
                                v90 = ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardPitch;
                                mHeight += v90;
                                v18 = v18 + (float)v90;
                                v23 = v23 + (float)(v90 / 2);
                              }
                              Instance = (System_String_o *)this->fields.baseSprite;
                              if ( Instance )
                              {
                                UIWidget__set_height((UIWidget_o *)Instance, mHeight, 0LL);
                                Instance = (System_String_o *)this->fields.baseCollider;
                                if ( Instance )
                                {
                                  v99.fields.z = 0.0;
                                  v99.fields.x = v17;
                                  v99.fields.y = v18;
                                  UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)Instance, v99, 0LL);
                                  Instance = (System_String_o *)this->fields.titleBase;
                                  if ( Instance )
                                  {
                                    Instance = (System_String_o *)UnityEngine_GameObject__get_transform(
                                                                    (UnityEngine_GameObject_o *)Instance,
                                                                    0LL);
                                    if ( Instance )
                                    {
                                      v100.fields.x = v22;
                                      v100.fields.y = v23;
                                      v100.fields.z = v24;
                                      UnityEngine_Transform__set_localPosition(
                                        (UnityEngine_Transform_o *)Instance,
                                        v100,
                                        0LL);
                                      Instance = (System_String_o *)this->fields.rainforcementBase;
                                      if ( Instance )
                                      {
                                        Instance = (System_String_o *)UnityEngine_GameObject__get_transform(
                                                                        (UnityEngine_GameObject_o *)Instance,
                                                                        0LL);
                                        if ( Instance )
                                        {
                                          v101.fields.x = x;
                                          v101.fields.y = y;
                                          v101.fields.z = z;
                                          UnityEngine_Transform__set_localPosition(
                                            (UnityEngine_Transform_o *)Instance,
                                            v101,
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
          sub_1B8880C(Instance, v9);
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

  if ( (byte_4A57E07 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__GetEnumerator__);
    byte_4A57E07 = 1;
  }
  memset(&v7, 0, sizeof(v7));
  questBoardManager = this->fields.questBoardManager;
  if ( questBoardManager )
  {
    if ( ServantStatusQuestBoardManager__UpdateAlphaAnim(questBoardManager, 0LL) )
      ServantStatusListViewItemDrawServantQuest__OnChangeAlphaAnim(this, v4);
    questBoardList = this->fields.questBoardList;
    if ( !questBoardList )
      sub_1B8880C(0LL, v4);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v7,
      (System_Collections_Generic_List_object__o *)questBoardList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v7,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__MoveNext__) )
    {
      if ( !v7.fields._current )
        sub_1B8880C(0LL, v6);
      ServantStatusQuestBoardDraw__UpdateItem(
        (ServantStatusQuestBoardDraw_o *)v7.fields._current,
        this->fields.questBoardManager,
        0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v7,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__Dispose__);
  }
}