void ServantStatusListViewItemDrawServantQuest___cctor(const MethodInfo *method)
{
  if ( (byte_4E0254E & 1) == 0 )
  {
    sub_1CE6700(&ServantStatusListViewItemDrawServantQuest_TypeInfo);
    byte_4E0254E = 1;
  }
  *ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields = (struct ServantStatusListViewItemDrawServantQuest_StaticFields)0x840000007ALL;
}


void ServantStatusListViewItemDrawServantQuest___ctor(
        ServantStatusListViewItemDrawServantQuest_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4E0254D & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw___ctor__);
    sub_1CE6700(&System_Collections_Generic_List_ServantStatusQuestBoardDraw__TypeInfo);
    byte_4E0254D = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1CE694C(System_Collections_Generic_List_ServantStatusQuestBoardDraw__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3905734 *)Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw___ctor__);
  this->fields.questBoardList = (struct System_Collections_Generic_List_ServantStatusQuestBoardDraw__o *)v3;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.questBoardList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  ServantStatusListViewItemDraw___ctor((ServantStatusListViewItemDraw_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusListViewItemDrawServantQuest__AdjustLayout(
        ServantStatusListViewItemDrawServantQuest_o *this,
        int32_t baseHeight,
        UnityEngine_Vector2_o colliderSize,
        UnityEngine_Vector3_o titlePosition,
        UnityEngine_Vector3_o reinforcementPosition,
        UnityEngine_Vector3_o svtCoinPosition,
        const MethodInfo *method)
{
  UIWidget_o *baseSprite; // x0
  float x; // s10
  float z; // s11
  float y; // s12
  float v12; // s13
  float v13; // s14
  float v14; // s15
  float v15; // s8
  float v16; // s9
  __int64 v17; // [xsp+60h] [xbp+0h]
  float v18; // [xsp+68h] [xbp+8h]
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4

  baseSprite = (UIWidget_o *)this->fields.baseSprite;
  if ( !baseSprite )
    goto LABEL_10;
  x = colliderSize.fields.x;
  z = reinforcementPosition.fields.z;
  y = reinforcementPosition.fields.y;
  v12 = reinforcementPosition.fields.x;
  v13 = titlePosition.fields.z;
  v14 = titlePosition.fields.y;
  v15 = titlePosition.fields.x;
  v16 = colliderSize.fields.y;
  UIWidget__set_height(baseSprite, baseHeight, 0);
  baseSprite = (UIWidget_o *)this->fields.baseCollider;
  if ( !baseSprite )
    goto LABEL_10;
  v19.fields.z = 0.0;
  v19.fields.x = x;
  v19.fields.y = v16;
  UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)baseSprite, v19, 0);
  baseSprite = (UIWidget_o *)this->fields.titleBase;
  if ( !baseSprite )
    goto LABEL_10;
  baseSprite = (UIWidget_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)baseSprite, 0);
  if ( !baseSprite )
    goto LABEL_10;
  v20.fields.x = v15;
  v20.fields.y = v14;
  v20.fields.z = v13;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)baseSprite, v20, 0);
  baseSprite = (UIWidget_o *)this->fields.rainforcementBase;
  if ( !baseSprite
    || (baseSprite = (UIWidget_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)baseSprite, 0)) == 0
    || (v21.fields.x = v12,
        v21.fields.y = y,
        v21.fields.z = z,
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)baseSprite, v21, 0),
        (baseSprite = (UIWidget_o *)this->fields.svtCoinBase) == 0)
    || (baseSprite = (UIWidget_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)baseSprite, 0)) == 0 )
  {
LABEL_10:
    sub_1CE6958(baseSprite, *(_QWORD *)&baseHeight);
  }
  *(_QWORD *)&v22.fields.x = v17;
  v22.fields.z = v18;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)baseSprite, v22, 0);
}


UnityEngine_GameObject_o *ServantStatusListViewItemDrawServantQuest__CreateQuestBoardPrefab(
        ServantStatusListViewItemDrawServantQuest_o *this,
        UnityEngine_GameObject_o *parent,
        const MethodInfo *method)
{
  UnityEngine_Object_o *loadPrefab; // x22
  ServantStatusQuestBoardManager_o *v6; // x22
  const MethodInfo *v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  Il2CppObject *object; // x22
  Il2CppObject *v15; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  UnityEngine_GameObject_o *v22; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v24; // x1
  UnityEngine_GameObject_o *v25; // x0
  UnityEngine_GameObject_o *v26; // x20
  UnityEngine_GameObject_o *v27; // x19

  if ( (byte_4E02549 & 1) == 0 )
  {
    sub_1CE6700(&NGUITools_TypeInfo);
    sub_1CE6700(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    sub_1CE6700(&Method_UnityEngine_Resources_Load_GameObject___);
    sub_1CE6700(&ServantStatusQuestBoardManager_TypeInfo);
    byte_4E02549 = 1;
  }
  loadPrefab = (UnityEngine_Object_o *)this->fields.loadPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(loadPrefab, 0, 0) )
  {
    v6 = (ServantStatusQuestBoardManager_o *)sub_1CE694C(ServantStatusQuestBoardManager_TypeInfo);
    ServantStatusQuestBoardManager___ctor(v6, v7);
    this->fields.questBoardManager = v6;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.questBoardManager, (int32_t)v6, v8, v9, v10, v11, v12, v13);
    object = UnityEngine_Resources__Load_object_(
               this->fields.questBoardPrefabPath,
               (const MethodInfo_32A11D4 *)Method_UnityEngine_Resources_Load_GameObject___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__Instantiate_object_(
            object,
            (const MethodInfo_3290C24 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    this->fields.loadPrefab = (struct UnityEngine_GameObject_o *)v15;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.loadPrefab, (int32_t)v15, v16, v17, v18, v19, v20, v21);
    v22 = this->fields.loadPrefab;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    GameObjectExtensions__SetParent_37166884(v22, gameObject, 0);
    v25 = this->fields.loadPrefab;
    if ( !v25 )
LABEL_14:
      sub_1CE6958(v25, v24);
    UnityEngine_GameObject__SetActive(v25, 0, 0);
  }
  v26 = this->fields.loadPrefab;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  v25 = NGUITools__AddChild_50459828(parent, v26, 0);
  if ( !v25 )
    goto LABEL_14;
  v27 = v25;
  UnityEngine_GameObject__SetActive(v25, 1, 0);
  return v27;
}


int32_t ServantStatusListViewItemDrawServantQuest__GetKind(
        ServantStatusListViewItemDrawServantQuest_o *this,
        const MethodInfo *method)
{
  return 15;
}


void ServantStatusListViewItemDrawServantQuest__OnChangeAlphaAnim(
        ServantStatusListViewItemDrawServantQuest_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ServantStatusQuestBoardDraw__o *questBoardList; // x0
  _BOOL8 v4; // x0
  MapControl_QuestInfo_o *v5; // x1
  const MethodInfo *v6; // x3
  Il2CppObject *current; // x20
  ServantStatusQuestBoardManager_o *questBoardManager; // x21
  const MethodInfo *v9; // x2
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4E0254B & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__Dispose__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__MoveNext__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__get_Current__);
    sub_1CE6700(&Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__GetEnumerator__);
    byte_4E0254B = 1;
  }
  memset(&v10, 0, sizeof(v10));
  questBoardList = this->fields.questBoardList;
  if ( !questBoardList )
    sub_1CE6958(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v10,
    (System_Collections_Generic_List_object__o *)questBoardList,
    (const MethodInfo_3906A60 *)Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__GetEnumerator__);
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v10,
           (const MethodInfo_36809F0 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__MoveNext__);
    if ( !v4 )
      break;
    current = v10.fields._current;
    if ( !v10.fields._current )
      sub_1CE6958(v4, v5);
    questBoardManager = this->fields.questBoardManager;
    ServantStatusQuestBoardDraw__ChangeNextInfoText(
      (ServantStatusQuestBoardDraw_o *)v10.fields._current,
      v5,
      questBoardManager,
      v6);
    ServantStatusQuestBoardDraw__ChangeNextRewardIcon((ServantStatusQuestBoardDraw_o *)current, questBoardManager, v9);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v10,
    (const MethodInfo_36809EC *)Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__Dispose__);
}


void ServantStatusListViewItemDrawServantQuest__OnDestroy(
        ServantStatusListViewItemDrawServantQuest_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *loadPrefab; // x21
  UnityEngine_Object_o *v4; // x21
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  __int64 v11; // x0
  __int64 v12; // x1
  struct System_Collections_Generic_List_ServantStatusQuestBoardDraw__o *questBoardList; // x8
  int32_t size; // w2
  int v15; // w9

  if ( (byte_4E02548 & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Clear__);
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    byte_4E02548 = 1;
  }
  loadPrefab = (UnityEngine_Object_o *)this->fields.loadPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(loadPrefab, 0, 0) )
  {
    v4 = (UnityEngine_Object_o *)this->fields.loadPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_72918540(v4, 0);
    this->fields.loadPrefab = 0;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.loadPrefab, 0, v5, v6, v7, v8, v9, v10);
    questBoardList = this->fields.questBoardList;
    if ( !questBoardList )
      sub_1CE6958(v11, v12);
    size = questBoardList->fields._size;
    v15 = questBoardList->fields._version + 1;
    questBoardList->fields._size = 0;
    questBoardList->fields._version = v15;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)questBoardList->fields._items, 0, size, 0);
  }
}


void ServantStatusListViewItemDrawServantQuest__SetItem(
        ServantStatusListViewItemDrawServantQuest_o *this,
        ServantStatusListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x1
  UnityEngine_GameObject_o *svtCoinBase; // x0
  UILabel_o *explanationLabel; // x21
  UILabel_o *explanation2Label; // x21
  struct ServantEntity_o *svtEntity; // x8
  struct UISprite_o *baseSprite; // x8
  UnityEngine_GameObject_o *v13; // x22
  int32_t mHeight; // w28
  float x; // s14
  float y; // s9
  float v17; // s8
  float v18; // s10
  float z; // s15
  float v20; // s13
  float v21; // s11
  int klass; // w29
  const MethodInfo *v23; // x2
  const MethodInfo_3B55234 **v24; // x27
  ServantLimitImageMaster_o *v25; // x21
  MapControl_QuestInfo_o *v26; // x25
  unsigned int v27; // w20
  __int64 v28; // x26
  MapControl_QuestInfo_o *v29; // x24
  const MethodInfo *v30; // x2
  UILabel_o *v31; // x26
  const MethodInfo_3B55234 **v32; // x23
  UnityEngine_GameObject_o *v33; // x27
  Il2CppObject *Component_object; // x26
  UnityEngine_Transform_o *v35; // x27
  ServantStatusListViewItemDrawServantQuest_c *v36; // x8
  int32_t v37; // w29
  UnityEngine_GameObject_o *inputMessageObject; // x27
  ServantStatusQuestBoardManager_o *questBoardManager; // x28
  const MethodInfo *v40; // x6
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  intptr_t m_CachedPtr; // x8
  _QWORD *v48; // x9
  __int64 klass_low; // x10
  int32_t v50; // w28
  intptr_t v51; // x8
  int32_t QuestBoardPitch; // w8
  UnityEngine_GameObject_o *v53; // x23
  UnityEngine_Transform_o *v54; // x24
  Il2CppObject *v55; // x23
  int32_t v56; // w2
  int32_t v57; // w3
  System_String_o *v58; // x4
  int32_t v59; // w5
  int64_t v60; // x6
  System_String_o *v61; // x7
  intptr_t v62; // x8
  _QWORD *v63; // x9
  __int64 v64; // x10
  intptr_t v65; // x8
  int32_t v66; // w8
  const MethodInfo *v67; // x2
  DataMasterBase_TMaster__TEntity__PKType__o *v68; // x27
  MapControl_QuestInfo_o *v69; // x25
  unsigned int i; // w21
  __int64 v71; // x26
  MapControl_QuestInfo_o *v72; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *v73; // x23
  UnityEngine_GameObject_o *v74; // x27
  Il2CppObject *v75; // x26
  UnityEngine_Transform_o *v76; // x27
  ServantStatusListViewItemDrawServantQuest_c *v77; // x8
  int32_t v78; // w29
  UnityEngine_GameObject_o *v79; // x27
  ServantStatusQuestBoardManager_o *v80; // x28
  const MethodInfo *v81; // x6
  int32_t v82; // w2
  int32_t v83; // w3
  System_String_o *v84; // x4
  int32_t v85; // w5
  int64_t v86; // x6
  System_String_o *v87; // x7
  intptr_t v88; // x8
  _QWORD *v89; // x9
  __int64 v90; // x10
  int32_t v91; // w28
  intptr_t v92; // x8
  int32_t v93; // w8
  UnityEngine_GameObject_o *v94; // x24
  UnityEngine_Transform_o *v95; // x25
  Il2CppObject *v96; // x24
  int32_t v97; // w2
  int32_t v98; // w3
  System_String_o *v99; // x4
  int32_t v100; // w5
  int64_t v101; // x6
  System_String_o *v102; // x7
  intptr_t v103; // x8
  _QWORD *v104; // x9
  __int64 v105; // x10
  intptr_t v106; // x8
  int32_t v107; // w8
  UnityEngine_Vector3_o v108; // x2
  const MethodInfo *v109; // x4
  Il2CppObject *Master_object; // x24
  int64_t v111; // x25
  MapControl_QuestInfo_o *v112; // x25
  unsigned int j; // w21
  __int64 v114; // x26
  MapControl_QuestInfo_o *v115; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *v116; // x20
  UnityEngine_GameObject_o *v117; // x27
  Il2CppObject *v118; // x26
  UnityEngine_Transform_o *v119; // x27
  ServantStatusListViewItemDrawServantQuest_c *v120; // x8
  int32_t v121; // w23
  UnityEngine_GameObject_o *v122; // x27
  ServantStatusQuestBoardManager_o *v123; // x28
  const MethodInfo *v124; // x6
  int32_t v125; // w2
  int32_t v126; // w3
  System_String_o *v127; // x4
  int32_t v128; // w5
  int64_t v129; // x6
  System_String_o *v130; // x7
  intptr_t v131; // x8
  _QWORD *v132; // x9
  __int64 v133; // x10
  intptr_t v134; // x8
  int32_t v135; // w8
  UILabel_o *svtCoinExplanationLabel; // x20
  float reinforcementPosition; // [xsp+14h] [xbp-DCh]
  float reinforcementPosition_4; // [xsp+18h] [xbp-D8h]
  UnityEngine_GameObject_o *v139; // [xsp+20h] [xbp-D0h]
  int v140; // [xsp+2Ch] [xbp-C4h]
  ServantStatusListViewItem_o *v141; // [xsp+30h] [xbp-C0h]
  int v142; // [xsp+3Ch] [xbp-B4h]
  int v143; // [xsp+3Ch] [xbp-B4h]
  int v144; // [xsp+3Ch] [xbp-B4h]
  Il2CppObject *v145; // [xsp+40h] [xbp-B0h] BYREF
  Il2CppObject *entity; // [xsp+48h] [xbp-A8h] BYREF
  UnityEngine_Vector2_o v147; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v150; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v151; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v152; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v153; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v154; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v155; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v156; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v157; // 0:s2.4,4:s3.4,8:s4.4
  UnityEngine_Vector3_o v158; // 0:s5.4,4:s6.4,8:s7.4

  if ( (byte_4E0254A & 1) == 0 )
  {
    sub_1CE6700(&BalanceConfig_TypeInfo);
    sub_1CE6700(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1CE6700(&Method_DataManager_GetMaster_QuestExtensionMaster___);
    sub_1CE6700(&Method_DataManager_GetMaster_QuestMaster___);
    sub_1CE6700(&Method_DataManager_GetMaster_UserQuestMaster___);
    sub_1CE6700(&DataManager_TypeInfo);
    sub_1CE6700(&Method_DataMasterBase_QuestExtensionMaster__QuestExtensionEntity__int__TryGetEntity__);
    sub_1CE6700(&Method_UnityEngine_GameObject_GetComponent_ServantStatusQuestBoardDraw___);
    sub_1CE6700(&Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Add__);
    sub_1CE6700(&LocalizationManager_TypeInfo);
    sub_1CE6700(&NetworkManager_TypeInfo);
    sub_1CE6700(&ServantStatusListViewItemDrawServantQuest_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1CE6700(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1CE6700(&StringLiteral_12050/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_INTERLUDE"*/);
    sub_1CE6700(&StringLiteral_12052/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_RAINFORCEMENT"*/);
    sub_1CE6700(&StringLiteral_12053/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_SVT_COIN"*/);
    sub_1CE6700(&StringLiteral_12051/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_LIMIT_LIBERATION"*/);
    byte_4E0254A = 1;
  }
  v145 = 0;
  entity = 0;
  if ( !this->fields.isInit )
  {
    ServantStatusListViewItemDraw__SetItem((ServantStatusListViewItemDraw_o *)this, item, mode, 0);
    if ( item )
    {
      if ( mode )
      {
        svtCoinBase = this->fields.svtCoinBase;
        this->fields.isInit = 1;
        if ( !svtCoinBase )
          goto LABEL_156;
        svtCoinBase = UnityEngine_GameObject__get_gameObject(svtCoinBase, 0);
        if ( !svtCoinBase )
          goto LABEL_156;
        UnityEngine_GameObject__SetActive(svtCoinBase, 0, 0);
        explanationLabel = this->fields.explanationLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        svtCoinBase = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12050/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_INTERLUDE"*/, 0);
        if ( !explanationLabel )
          goto LABEL_156;
        UILabel__set_text(explanationLabel, (System_String_o *)svtCoinBase, 0);
        explanation2Label = this->fields.explanation2Label;
        svtCoinBase = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12052/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_RAINFORCEMENT"*/, 0);
        if ( !explanation2Label )
          goto LABEL_156;
        UILabel__set_text(explanation2Label, (System_String_o *)svtCoinBase, 0);
        if ( item->fields.svtEntity )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          svtCoinBase = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_QuestMaster___);
          svtEntity = item->fields.svtEntity;
          if ( svtEntity )
          {
            if ( svtCoinBase )
            {
              svtCoinBase = (UnityEngine_GameObject_o *)QuestMaster__GetQuestEntityList(
                                                          (QuestMaster_o *)svtCoinBase,
                                                          svtEntity->fields.relateQuestIds,
                                                          0);
              baseSprite = this->fields.baseSprite;
              if ( baseSprite )
              {
                v13 = svtCoinBase;
                svtCoinBase = (UnityEngine_GameObject_o *)this->fields.baseCollider;
                if ( svtCoinBase )
                {
                  mHeight = baseSprite->fields.mHeight;
                  size = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)svtCoinBase, 0);
                  svtCoinBase = this->fields.titleBase;
                  if ( svtCoinBase )
                  {
                    x = size.fields.x;
                    y = size.fields.y;
                    svtCoinBase = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(svtCoinBase, 0);
                    if ( svtCoinBase )
                    {
                      localPosition = UnityEngine_Transform__get_localPosition(
                                        (UnityEngine_Transform_o *)svtCoinBase,
                                        0);
                      svtCoinBase = this->fields.rainforcementBase;
                      if ( svtCoinBase )
                      {
                        v17 = localPosition.fields.x;
                        v18 = localPosition.fields.y;
                        z = localPosition.fields.z;
                        svtCoinBase = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(svtCoinBase, 0);
                        if ( svtCoinBase )
                        {
                          v150 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)svtCoinBase, 0);
                          svtCoinBase = this->fields.svtCoinBase;
                          if ( svtCoinBase )
                          {
                            v20 = v150.fields.y;
                            reinforcementPosition = v150.fields.x;
                            reinforcementPosition_4 = v150.fields.z;
                            svtCoinBase = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                                        svtCoinBase,
                                                                        0);
                            if ( svtCoinBase )
                            {
                              v151 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)svtCoinBase, 0);
                              v21 = v151.fields.y;
                              v141 = item;
                              if ( item->fields.userSvtCollectionEntity )
                              {
                                if ( !v13 )
                                  goto LABEL_156;
                                klass = (int)v13[1].klass;
                              }
                              else
                              {
                                klass = 0;
                              }
                              svtCoinBase = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                              if ( svtCoinBase )
                              {
                                svtCoinBase = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                                            (DataManager_o *)svtCoinBase,
                                                                            (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
                                v140 = klass;
                                if ( klass < 1 )
                                  goto LABEL_59;
                                if ( !v13 )
                                  goto LABEL_156;
                                v142 = 0;
                                v24 = (const MethodInfo_3B55234 **)&Method_SingletonTemplate_QuestTree__get_Instance__;
                                v25 = (ServantLimitImageMaster_o *)svtCoinBase;
                                v26 = 0;
                                v27 = 0;
                                v139 = v13;
                                do
                                {
                                  if ( v27 >= LODWORD(v13[1].klass) )
LABEL_157:
                                    sub_1CE6960(svtCoinBase);
                                  v28 = *((_QWORD *)&v13[1].monitor + (int)v27);
                                  svtCoinBase = (UnityEngine_GameObject_o *)SingletonTemplate_object___get_Instance(*v24);
                                  if ( !v28 || !svtCoinBase )
                                    goto LABEL_156;
                                  svtCoinBase = (UnityEngine_GameObject_o *)QuestTree__GetQuestInfo(
                                                                              (QuestTree_o *)svtCoinBase,
                                                                              *(_DWORD *)(v28 + 16),
                                                                              0);
                                  if ( svtCoinBase
                                    && (v29 = (MapControl_QuestInfo_o *)svtCoinBase,
                                        svtCoinBase = (UnityEngine_GameObject_o *)MapControl_QuestInfo__GetQuestType(
                                                                                    (MapControl_QuestInfo_o *)svtCoinBase,
                                                                                    0),
                                        (_DWORD)svtCoinBase == 3) )
                                  {
                                    if ( !v25 )
                                      goto LABEL_156;
                                    if ( ServantLimitImageMaster__IsLimitCountSealQuest(v25, *(_DWORD *)(v28 + 16), 0) )
                                    {
                                      v31 = this->fields.explanationLabel;
                                      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                      svtCoinBase = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                                  (System_String_o *)StringLiteral_12051/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_LIMIT_LIBERATION"*/,
                                                                                  0);
                                      if ( !v31 )
                                        goto LABEL_156;
                                      UILabel__set_text(v31, (System_String_o *)svtCoinBase, 0);
                                    }
                                    v32 = v24;
                                    svtCoinBase = ServantStatusListViewItemDrawServantQuest__CreateQuestBoardPrefab(
                                                    this,
                                                    this->fields.interludeQuestBase,
                                                    v30);
                                    if ( !svtCoinBase )
                                      goto LABEL_156;
                                    v33 = svtCoinBase;
                                    Component_object = UnityEngine_GameObject__GetComponent_object_(
                                                         svtCoinBase,
                                                         (const MethodInfo_325BE3C *)Method_UnityEngine_GameObject_GetComponent_ServantStatusQuestBoardDraw___);
                                    svtCoinBase = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                                                v33,
                                                                                0);
                                    v35 = (UnityEngine_Transform_o *)svtCoinBase;
                                    v36 = ServantStatusListViewItemDrawServantQuest_TypeInfo;
                                    if ( !ServantStatusListViewItemDrawServantQuest_TypeInfo->_2.cctor_finished )
                                    {
                                      j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawServantQuest_TypeInfo);
                                      v36 = ServantStatusListViewItemDrawServantQuest_TypeInfo;
                                    }
                                    if ( !v35 )
                                      goto LABEL_156;
                                    v152.fields.x = 0.0;
                                    v152.fields.z = 0.0;
                                    v37 = mHeight;
                                    v152.fields.y = (float)-(v36->static_fields->QuestBoardPitch * v142
                                                           + v36->static_fields->QuestBoardSize / 2);
                                    UnityEngine_Transform__set_localPosition(v35, v152, 0);
                                    inputMessageObject = this->fields.inputMessageObject;
                                    questBoardManager = this->fields.questBoardManager;
                                    svtCoinBase = (UnityEngine_GameObject_o *)ServantStatusListViewItem__get_LimitCount(
                                                                                v141,
                                                                                0);
                                    if ( !Component_object )
                                      goto LABEL_156;
                                    ServantStatusQuestBoardDraw__SetItem(
                                      (ServantStatusQuestBoardDraw_o *)Component_object,
                                      v29,
                                      v26,
                                      inputMessageObject,
                                      questBoardManager,
                                      (int32_t)svtCoinBase,
                                      v40);
                                    svtCoinBase = (UnityEngine_GameObject_o *)this->fields.questBoardList;
                                    if ( !svtCoinBase )
                                      goto LABEL_156;
                                    m_CachedPtr = svtCoinBase->fields.m_CachedPtr;
                                    v48 = Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Add__;
                                    ++HIDWORD(svtCoinBase[1].klass);
                                    if ( !m_CachedPtr )
                                      goto LABEL_156;
                                    klass_low = SLODWORD(svtCoinBase[1].klass);
                                    v50 = v37;
                                    klass = v140;
                                    v24 = v32;
                                    if ( (unsigned int)klass_low >= *(_DWORD *)(m_CachedPtr + 24) )
                                    {
                                      System_Collections_Generic_List_object___AddWithResize(
                                        (System_Collections_Generic_List_object__o *)svtCoinBase,
                                        Component_object,
                                        *(const MethodInfo_3905F68 **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
                                    }
                                    else
                                    {
                                      v51 = m_CachedPtr + 8 * klass_low;
                                      LODWORD(svtCoinBase[1].klass) = klass_low + 1;
                                      *(_QWORD *)(v51 + 32) = Component_object;
                                      sub_1CE66A4(
                                        (GrandQuestFolderBoardItem_o *)(v51 + 32),
                                        (int32_t)Component_object,
                                        v41,
                                        v42,
                                        v43,
                                        v44,
                                        v45,
                                        v46);
                                    }
                                    v13 = v139;
                                    QuestBoardPitch = ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardPitch;
                                    mHeight = QuestBoardPitch + v50;
                                    y = y + (float)QuestBoardPitch;
                                    v20 = v20 - (float)QuestBoardPitch;
                                    v21 = v21 - (float)QuestBoardPitch;
                                    v18 = v18 + (float)(QuestBoardPitch / 2);
                                    ++v142;
                                  }
                                  else
                                  {
                                    v29 = v26;
                                  }
                                  ++v27;
                                  v26 = v29;
                                }
                                while ( klass != v27 );
                                if ( !v142 )
                                {
LABEL_59:
                                  svtCoinBase = ServantStatusListViewItemDrawServantQuest__CreateQuestBoardPrefab(
                                                  this,
                                                  this->fields.interludeQuestBase,
                                                  v23);
                                  if ( !svtCoinBase )
                                    goto LABEL_156;
                                  v53 = svtCoinBase;
                                  svtCoinBase = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                                              svtCoinBase,
                                                                              0);
                                  v54 = (UnityEngine_Transform_o *)svtCoinBase;
                                  if ( !ServantStatusListViewItemDrawServantQuest_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawServantQuest_TypeInfo);
                                  if ( !v54 )
                                    goto LABEL_156;
                                  v153.fields.x = 0.0;
                                  v153.fields.z = 0.0;
                                  v153.fields.y = (float)(ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardSize
                                                        / -2);
                                  UnityEngine_Transform__set_localPosition(v54, v153, 0);
                                  svtCoinBase = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                              v53,
                                                                              (const MethodInfo_325BE3C *)Method_UnityEngine_GameObject_GetComponent_ServantStatusQuestBoardDraw___);
                                  if ( !svtCoinBase )
                                    goto LABEL_156;
                                  v55 = (Il2CppObject *)svtCoinBase;
                                  ServantStatusQuestBoardDraw__SetDark((ServantStatusQuestBoardDraw_o *)svtCoinBase, v7);
                                  svtCoinBase = (UnityEngine_GameObject_o *)this->fields.questBoardList;
                                  if ( !svtCoinBase )
                                    goto LABEL_156;
                                  v62 = svtCoinBase->fields.m_CachedPtr;
                                  v63 = Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Add__;
                                  ++HIDWORD(svtCoinBase[1].klass);
                                  if ( !v62 )
                                    goto LABEL_156;
                                  v64 = SLODWORD(svtCoinBase[1].klass);
                                  if ( (unsigned int)v64 >= *(_DWORD *)(v62 + 24) )
                                  {
                                    System_Collections_Generic_List_object___AddWithResize(
                                      (System_Collections_Generic_List_object__o *)svtCoinBase,
                                      v55,
                                      *(const MethodInfo_3905F68 **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
                                  }
                                  else
                                  {
                                    v65 = v62 + 8 * v64;
                                    LODWORD(svtCoinBase[1].klass) = v64 + 1;
                                    *(_QWORD *)(v65 + 32) = v55;
                                    sub_1CE66A4(
                                      (GrandQuestFolderBoardItem_o *)(v65 + 32),
                                      (int32_t)v55,
                                      v56,
                                      v57,
                                      v58,
                                      v59,
                                      v60,
                                      v61);
                                  }
                                  v66 = ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardPitch;
                                  mHeight += v66;
                                  y = y + (float)v66;
                                  v20 = v20 - (float)v66;
                                  v18 = v18 + (float)(v66 / 2);
                                  v21 = v21 - (float)v66;
                                }
                                if ( !DataManager_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                                svtCoinBase = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_QuestExtensionMaster___);
                                v68 = (DataMasterBase_TMaster__TEntity__PKType__o *)svtCoinBase;
                                if ( klass < 1 )
                                  goto LABEL_98;
                                if ( !v13 )
                                  goto LABEL_156;
                                v143 = 0;
                                v69 = 0;
                                for ( i = 0; i != klass; ++i )
                                {
                                  if ( i >= LODWORD(v13[1].klass) )
                                    goto LABEL_157;
                                  v71 = *((_QWORD *)&v13[1].monitor + (int)i);
                                  svtCoinBase = (UnityEngine_GameObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3B55234 *)Method_SingletonTemplate_QuestTree__get_Instance__);
                                  if ( !v71 || !svtCoinBase )
                                    goto LABEL_156;
                                  svtCoinBase = (UnityEngine_GameObject_o *)QuestTree__GetQuestInfo(
                                                                              (QuestTree_o *)svtCoinBase,
                                                                              *(_DWORD *)(v71 + 16),
                                                                              0);
                                  if ( !svtCoinBase )
                                    goto LABEL_80;
                                  v72 = (MapControl_QuestInfo_o *)svtCoinBase;
                                  svtCoinBase = (UnityEngine_GameObject_o *)MapControl_QuestInfo__GetQuestType(
                                                                              (MapControl_QuestInfo_o *)svtCoinBase,
                                                                              0);
                                  if ( (_DWORD)svtCoinBase == 3 )
                                    goto LABEL_80;
                                  if ( !v68 )
                                    goto LABEL_156;
                                  if ( !DataMasterBase_object__object__int___TryGetEntity(
                                          v68,
                                          &entity,
                                          *(_DWORD *)(v71 + 16),
                                          (const MethodInfo_34E92A8 *)Method_DataMasterBase_QuestExtensionMaster__QuestExtensionEntity__int__TryGetEntity__) )
                                    goto LABEL_85;
                                  svtCoinBase = (UnityEngine_GameObject_o *)entity;
                                  if ( !entity )
                                    goto LABEL_156;
                                  svtCoinBase = (UnityEngine_GameObject_o *)QuestExtensionEntity__IsSvtCoinQuest(
                                                                              (QuestExtensionEntity_o *)entity,
                                                                              0);
                                  if ( ((unsigned __int8)svtCoinBase & 1) != 0 )
                                  {
LABEL_80:
                                    v72 = v69;
                                  }
                                  else
                                  {
LABEL_85:
                                    v73 = v68;
                                    svtCoinBase = ServantStatusListViewItemDrawServantQuest__CreateQuestBoardPrefab(
                                                    this,
                                                    this->fields.rainforcementQuestBase,
                                                    v67);
                                    if ( !svtCoinBase )
                                      goto LABEL_156;
                                    v74 = svtCoinBase;
                                    v75 = UnityEngine_GameObject__GetComponent_object_(
                                            svtCoinBase,
                                            (const MethodInfo_325BE3C *)Method_UnityEngine_GameObject_GetComponent_ServantStatusQuestBoardDraw___);
                                    svtCoinBase = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                                                v74,
                                                                                0);
                                    v76 = (UnityEngine_Transform_o *)svtCoinBase;
                                    v77 = ServantStatusListViewItemDrawServantQuest_TypeInfo;
                                    if ( !ServantStatusListViewItemDrawServantQuest_TypeInfo->_2.cctor_finished )
                                    {
                                      j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawServantQuest_TypeInfo);
                                      v77 = ServantStatusListViewItemDrawServantQuest_TypeInfo;
                                    }
                                    if ( !v76 )
                                      goto LABEL_156;
                                    v154.fields.x = 0.0;
                                    v154.fields.z = 0.0;
                                    v78 = mHeight;
                                    v154.fields.y = (float)-(v77->static_fields->QuestBoardPitch * v143
                                                           + v77->static_fields->QuestBoardSize / 2);
                                    UnityEngine_Transform__set_localPosition(v76, v154, 0);
                                    v79 = this->fields.inputMessageObject;
                                    v80 = this->fields.questBoardManager;
                                    svtCoinBase = (UnityEngine_GameObject_o *)ServantStatusListViewItem__get_LimitCount(
                                                                                v141,
                                                                                0);
                                    if ( !v75 )
                                      goto LABEL_156;
                                    ServantStatusQuestBoardDraw__SetItem(
                                      (ServantStatusQuestBoardDraw_o *)v75,
                                      v72,
                                      v69,
                                      v79,
                                      v80,
                                      (int32_t)svtCoinBase,
                                      v81);
                                    svtCoinBase = (UnityEngine_GameObject_o *)this->fields.questBoardList;
                                    if ( !svtCoinBase )
                                      goto LABEL_156;
                                    v88 = svtCoinBase->fields.m_CachedPtr;
                                    v89 = Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Add__;
                                    ++HIDWORD(svtCoinBase[1].klass);
                                    if ( !v88 )
                                      goto LABEL_156;
                                    v90 = SLODWORD(svtCoinBase[1].klass);
                                    v91 = v78;
                                    klass = v140;
                                    v68 = v73;
                                    if ( (unsigned int)v90 >= *(_DWORD *)(v88 + 24) )
                                    {
                                      System_Collections_Generic_List_object___AddWithResize(
                                        (System_Collections_Generic_List_object__o *)svtCoinBase,
                                        v75,
                                        *(const MethodInfo_3905F68 **)(*(_QWORD *)(v89[4] + 192LL) + 112LL));
                                    }
                                    else
                                    {
                                      v92 = v88 + 8 * v90;
                                      LODWORD(svtCoinBase[1].klass) = v90 + 1;
                                      *(_QWORD *)(v92 + 32) = v75;
                                      sub_1CE66A4(
                                        (GrandQuestFolderBoardItem_o *)(v92 + 32),
                                        (int32_t)v75,
                                        v82,
                                        v83,
                                        v84,
                                        v85,
                                        v86,
                                        v87);
                                    }
                                    v93 = ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardPitch;
                                    mHeight = v93 + v91;
                                    y = y + (float)v93;
                                    v21 = v21 - (float)v93;
                                    v18 = v18 + (float)(v93 / 2);
                                    ++v143;
                                  }
                                  v69 = v72;
                                }
                                if ( !v143 )
                                {
LABEL_98:
                                  svtCoinBase = ServantStatusListViewItemDrawServantQuest__CreateQuestBoardPrefab(
                                                  this,
                                                  this->fields.rainforcementQuestBase,
                                                  v67);
                                  if ( !svtCoinBase )
                                    goto LABEL_156;
                                  v94 = svtCoinBase;
                                  svtCoinBase = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                                              svtCoinBase,
                                                                              0);
                                  v95 = (UnityEngine_Transform_o *)svtCoinBase;
                                  if ( !ServantStatusListViewItemDrawServantQuest_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawServantQuest_TypeInfo);
                                  if ( !v95 )
                                    goto LABEL_156;
                                  v155.fields.x = 0.0;
                                  v155.fields.z = 0.0;
                                  v155.fields.y = (float)(ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardSize
                                                        / -2);
                                  UnityEngine_Transform__set_localPosition(v95, v155, 0);
                                  svtCoinBase = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                              v94,
                                                                              (const MethodInfo_325BE3C *)Method_UnityEngine_GameObject_GetComponent_ServantStatusQuestBoardDraw___);
                                  if ( !svtCoinBase )
                                    goto LABEL_156;
                                  v96 = (Il2CppObject *)svtCoinBase;
                                  ServantStatusQuestBoardDraw__SetDark((ServantStatusQuestBoardDraw_o *)svtCoinBase, v7);
                                  svtCoinBase = (UnityEngine_GameObject_o *)this->fields.questBoardList;
                                  if ( !svtCoinBase )
                                    goto LABEL_156;
                                  v103 = svtCoinBase->fields.m_CachedPtr;
                                  v104 = Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Add__;
                                  ++HIDWORD(svtCoinBase[1].klass);
                                  if ( !v103 )
                                    goto LABEL_156;
                                  v105 = SLODWORD(svtCoinBase[1].klass);
                                  if ( (unsigned int)v105 >= *(_DWORD *)(v103 + 24) )
                                  {
                                    System_Collections_Generic_List_object___AddWithResize(
                                      (System_Collections_Generic_List_object__o *)svtCoinBase,
                                      v96,
                                      *(const MethodInfo_3905F68 **)(*(_QWORD *)(v104[4] + 192LL) + 112LL));
                                  }
                                  else
                                  {
                                    v106 = v103 + 8 * v105;
                                    LODWORD(svtCoinBase[1].klass) = v105 + 1;
                                    *(_QWORD *)(v106 + 32) = v96;
                                    sub_1CE66A4(
                                      (GrandQuestFolderBoardItem_o *)(v106 + 32),
                                      (int32_t)v96,
                                      v97,
                                      v98,
                                      v99,
                                      v100,
                                      v101,
                                      v102);
                                  }
                                  v107 = ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardPitch;
                                  mHeight += v107;
                                  y = y + (float)v107;
                                  v18 = v18 + (float)(v107 / 2);
                                }
                                svtCoinBase = (UnityEngine_GameObject_o *)v141->fields.svtEntity;
                                if ( svtCoinBase )
                                {
                                  if ( !ServantEntity__checkIsHeroineSvt((ServantEntity_o *)svtCoinBase, 0) )
                                  {
LABEL_155:
                                    v158.fields.z = reinforcementPosition_4;
                                    v157.fields.x = v17;
                                    v158.fields.x = reinforcementPosition;
                                    v147.fields.x = x;
                                    v147.fields.y = y;
                                    v157.fields.y = v18;
                                    v157.fields.z = z;
                                    v158.fields.y = v20;
                                    ServantStatusListViewItemDrawServantQuest__AdjustLayout(
                                      this,
                                      mHeight,
                                      v147,
                                      v157,
                                      v158,
                                      v108,
                                      v109);
                                    return;
                                  }
                                  if ( !DataManager_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                                  Master_object = DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_UserQuestMaster___);
                                  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                                  if ( !byte_4DFE4CA )
                                  {
                                    sub_1CE6700(&NetworkManager_TypeInfo);
                                    byte_4DFE4CA = 1;
                                  }
                                  svtCoinBase = (UnityEngine_GameObject_o *)NetworkManager_TypeInfo;
                                  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                                    svtCoinBase = (UnityEngine_GameObject_o *)NetworkManager_TypeInfo;
                                  }
                                  v111 = *(_QWORD *)(svtCoinBase[7].fields.m_CachedPtr + 64);
                                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                                  if ( Master_object )
                                  {
                                    svtCoinBase = (UnityEngine_GameObject_o *)UserQuestMaster__getClearCountsFromId(
                                                                                (UserQuestMaster_o *)Master_object,
                                                                                v111,
                                                                                BalanceConfig_TypeInfo->static_fields->SvtCoinQuestOpenQuestId,
                                                                                0);
                                    if ( (int)svtCoinBase < 1 || klass < 1 )
                                      goto LABEL_155;
                                    if ( v13 )
                                    {
                                      v144 = 0;
                                      v112 = 0;
                                      for ( j = 0; j != klass; ++j )
                                      {
                                        if ( j >= LODWORD(v13[1].klass) )
                                          goto LABEL_157;
                                        v114 = *((_QWORD *)&v13[1].monitor + (int)j);
                                        svtCoinBase = (UnityEngine_GameObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3B55234 *)Method_SingletonTemplate_QuestTree__get_Instance__);
                                        if ( !v114 || !svtCoinBase )
                                          goto LABEL_156;
                                        svtCoinBase = (UnityEngine_GameObject_o *)QuestTree__GetQuestInfo(
                                                                                    (QuestTree_o *)svtCoinBase,
                                                                                    *(_DWORD *)(v114 + 16),
                                                                                    0);
                                        if ( !svtCoinBase )
                                          goto LABEL_143;
                                        if ( !v68 )
                                          goto LABEL_156;
                                        v115 = (MapControl_QuestInfo_o *)svtCoinBase;
                                        svtCoinBase = (UnityEngine_GameObject_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                                    v68,
                                                                                    &v145,
                                                                                    *(_DWORD *)(v114 + 16),
                                                                                    (const MethodInfo_34E92A8 *)Method_DataMasterBase_QuestExtensionMaster__QuestExtensionEntity__int__TryGetEntity__);
                                        if ( ((unsigned __int8)svtCoinBase & 1) == 0 )
                                          goto LABEL_143;
                                        svtCoinBase = (UnityEngine_GameObject_o *)v145;
                                        if ( !v145 )
                                          goto LABEL_156;
                                        svtCoinBase = (UnityEngine_GameObject_o *)QuestExtensionEntity__IsSvtCoinQuest(
                                                                                    (QuestExtensionEntity_o *)v145,
                                                                                    0);
                                        if ( ((unsigned __int8)svtCoinBase & 1) != 0 )
                                        {
                                          v116 = v68;
                                          svtCoinBase = ServantStatusListViewItemDrawServantQuest__CreateQuestBoardPrefab(
                                                          this,
                                                          this->fields.svtCoinQuestBase,
                                                          *(const MethodInfo **)&v108.fields.x);
                                          if ( !svtCoinBase )
                                            goto LABEL_156;
                                          v117 = svtCoinBase;
                                          v118 = UnityEngine_GameObject__GetComponent_object_(
                                                   svtCoinBase,
                                                   (const MethodInfo_325BE3C *)Method_UnityEngine_GameObject_GetComponent_ServantStatusQuestBoardDraw___);
                                          svtCoinBase = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                                                      v117,
                                                                                      0);
                                          v119 = (UnityEngine_Transform_o *)svtCoinBase;
                                          v120 = ServantStatusListViewItemDrawServantQuest_TypeInfo;
                                          if ( !ServantStatusListViewItemDrawServantQuest_TypeInfo->_2.cctor_finished )
                                          {
                                            j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawServantQuest_TypeInfo);
                                            v120 = ServantStatusListViewItemDrawServantQuest_TypeInfo;
                                          }
                                          if ( !v119 )
                                            goto LABEL_156;
                                          v156.fields.x = 0.0;
                                          v156.fields.z = 0.0;
                                          v121 = mHeight;
                                          v156.fields.y = (float)-(v120->static_fields->QuestBoardPitch * v144
                                                                 + v120->static_fields->QuestBoardSize / 2);
                                          UnityEngine_Transform__set_localPosition(v119, v156, 0);
                                          v122 = this->fields.inputMessageObject;
                                          v123 = this->fields.questBoardManager;
                                          svtCoinBase = (UnityEngine_GameObject_o *)ServantStatusListViewItem__get_LimitCount(
                                                                                      v141,
                                                                                      0);
                                          if ( !v118 )
                                            goto LABEL_156;
                                          ServantStatusQuestBoardDraw__SetItem(
                                            (ServantStatusQuestBoardDraw_o *)v118,
                                            v115,
                                            v112,
                                            v122,
                                            v123,
                                            (int32_t)svtCoinBase,
                                            v124);
                                          svtCoinBase = (UnityEngine_GameObject_o *)this->fields.questBoardList;
                                          if ( !svtCoinBase )
                                            goto LABEL_156;
                                          v131 = svtCoinBase->fields.m_CachedPtr;
                                          v132 = Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Add__;
                                          ++HIDWORD(svtCoinBase[1].klass);
                                          if ( !v131 )
                                            goto LABEL_156;
                                          v68 = v116;
                                          v133 = SLODWORD(svtCoinBase[1].klass);
                                          if ( (unsigned int)v133 >= *(_DWORD *)(v131 + 24) )
                                          {
                                            System_Collections_Generic_List_object___AddWithResize(
                                              (System_Collections_Generic_List_object__o *)svtCoinBase,
                                              v118,
                                              *(const MethodInfo_3905F68 **)(*(_QWORD *)(v132[4] + 192LL) + 112LL));
                                          }
                                          else
                                          {
                                            v134 = v131 + 8 * v133;
                                            LODWORD(svtCoinBase[1].klass) = v133 + 1;
                                            *(_QWORD *)(v134 + 32) = v118;
                                            sub_1CE66A4(
                                              (GrandQuestFolderBoardItem_o *)(v134 + 32),
                                              (int32_t)v118,
                                              v125,
                                              v126,
                                              v127,
                                              v128,
                                              v129,
                                              v130);
                                          }
                                          v135 = ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardPitch;
                                          mHeight = v135 + v121;
                                          y = y + (float)v135;
                                          v18 = v18 + (float)(v135 / 2);
                                          ++v144;
                                        }
                                        else
                                        {
LABEL_143:
                                          v115 = v112;
                                        }
                                        v112 = v115;
                                      }
                                      if ( v144 < 1 )
                                        goto LABEL_155;
                                      svtCoinBase = this->fields.svtCoinBase;
                                      if ( svtCoinBase )
                                      {
                                        svtCoinBase = UnityEngine_GameObject__get_gameObject(svtCoinBase, 0);
                                        if ( svtCoinBase )
                                        {
                                          UnityEngine_GameObject__SetActive(svtCoinBase, 1, 0);
                                          svtCoinExplanationLabel = this->fields.svtCoinExplanationLabel;
                                          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                          svtCoinBase = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                                      (System_String_o *)StringLiteral_12053/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_SVT_COIN"*/,
                                                                                      0);
                                          if ( svtCoinExplanationLabel )
                                          {
                                            UILabel__set_text(
                                              svtCoinExplanationLabel,
                                              (System_String_o *)svtCoinBase,
                                              0);
                                            mHeight += 38;
                                            y = y + 38.0;
                                            v18 = v18 + 19.0;
                                            goto LABEL_155;
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
          }
LABEL_156:
          sub_1CE6958(svtCoinBase, v7);
        }
      }
    }
  }
}


void ServantStatusListViewItemDrawServantQuest__Update(
        ServantStatusListViewItemDrawServantQuest_o *this,
        const MethodInfo *method)
{
  ServantStatusQuestBoardManager_o *questBoardManager; // x0
  const MethodInfo *v4; // x1
  struct System_Collections_Generic_List_ServantStatusQuestBoardDraw__o *questBoardList; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4E0254C & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__Dispose__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__MoveNext__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__get_Current__);
    sub_1CE6700(&Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__GetEnumerator__);
    byte_4E0254C = 1;
  }
  memset(&v8, 0, sizeof(v8));
  questBoardManager = this->fields.questBoardManager;
  if ( questBoardManager )
  {
    if ( ServantStatusQuestBoardManager__UpdateAlphaAnim(questBoardManager, method) )
      ServantStatusListViewItemDrawServantQuest__OnChangeAlphaAnim(this, v4);
    questBoardList = this->fields.questBoardList;
    if ( !questBoardList )
      sub_1CE6958(0, v4);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v8,
      (System_Collections_Generic_List_object__o *)questBoardList,
      (const MethodInfo_3906A60 *)Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v8,
              (const MethodInfo_36809F0 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__MoveNext__) )
    {
      if ( !v8.fields._current )
        sub_1CE6958(0, v6);
      ServantStatusQuestBoardDraw__UpdateItem(
        (ServantStatusQuestBoardDraw_o *)v8.fields._current,
        this->fields.questBoardManager,
        v7);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v8,
      (const MethodInfo_36809EC *)Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__Dispose__);
  }
}