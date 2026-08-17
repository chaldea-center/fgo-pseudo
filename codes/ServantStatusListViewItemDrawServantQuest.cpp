void ServantStatusListViewItemDrawServantQuest___cctor(const MethodInfo *method)
{
  if ( (byte_596D372 & 1) == 0 )
  {
    sub_2213A60(&ServantStatusListViewItemDrawServantQuest_TypeInfo);
    byte_596D372 = 1;
  }
  *ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields = (struct ServantStatusListViewItemDrawServantQuest_StaticFields)0x840000007ALL;
}


void ServantStatusListViewItemDrawServantQuest___ctor(
        ServantStatusListViewItemDrawServantQuest_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_596D371 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw___ctor__);
    sub_2213A60(&System_Collections_Generic_List_ServantStatusQuestBoardDraw__TypeInfo);
    byte_596D371 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ServantStatusQuestBoardDraw__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw___ctor__);
  this->fields.questBoardList = (struct System_Collections_Generic_List_ServantStatusQuestBoardDraw__o *)v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.questBoardList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
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
    sub_2213CDC(baseSprite, *(_QWORD *)&baseHeight);
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
  __int64 v6; // x1
  __int64 v7; // x2
  ServantStatusQuestBoardManager_o *v8; // x22
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  __int64 v15; // x1
  __int64 v16; // x2
  Il2CppObject *object; // x22
  Il2CppObject *v18; // x0
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  UnityEngine_GameObject_o *v25; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v27; // x1
  UnityEngine_GameObject_o *v28; // x0
  UnityEngine_GameObject_o *v29; // x20
  UnityEngine_GameObject_o *v30; // x19

  if ( (byte_596D36D & 1) == 0 )
  {
    sub_2213A60(&NGUITools_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Resources_Load_GameObject___);
    sub_2213A60(&ServantStatusQuestBoardManager_TypeInfo);
    byte_596D36D = 1;
  }
  loadPrefab = (UnityEngine_Object_o *)this->fields.loadPrefab;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, parent, method);
  if ( UnityEngine_Object__op_Equality(loadPrefab, 0, 0) )
  {
    v8 = (ServantStatusQuestBoardManager_o *)sub_2213CCC(ServantStatusQuestBoardManager_TypeInfo);
    ServantStatusQuestBoardManager___ctor(v8, 0);
    this->fields.questBoardManager = v8;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.questBoardManager,
      (int32_t)v8,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
    object = UnityEngine_Resources__Load_object_(
               this->fields.questBoardPrefabPath,
               (const MethodInfo_39787F0 *)Method_UnityEngine_Resources_Load_GameObject___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15, v16);
    v18 = UnityEngine_Object__Instantiate_object_(
            object,
            (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
    this->fields.loadPrefab = (struct UnityEngine_GameObject_o *)v18;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.loadPrefab,
      (int32_t)v18,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
    v25 = this->fields.loadPrefab;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    GameObjectExtensions__SetParent_42897232(v25, gameObject, 0);
    v28 = this->fields.loadPrefab;
    if ( !v28 )
LABEL_14:
      sub_2213CDC(v28, v27);
    UnityEngine_GameObject__SetActive(v28, 0, 0);
  }
  v29 = this->fields.loadPrefab;
  if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v6, v7);
  v28 = NGUITools__AddChild_56415424(parent, v29, 0);
  if ( !v28 )
    goto LABEL_14;
  v30 = v28;
  UnityEngine_GameObject__SetActive(v28, 1, 0);
  return v30;
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
  __int64 v4; // x1
  System_Collections_Generic_List_Enumerator_object__o v5; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_596D36F & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__GetEnumerator__);
    byte_596D36F = 1;
  }
  questBoardList = this->fields.questBoardList;
  memset(&v5, 0, sizeof(v5));
  if ( !questBoardList )
    sub_2213CDC(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v5,
    (System_Collections_Generic_List_object__o *)questBoardList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v5,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__MoveNext__) )
  {
    if ( !v5.fields._current )
      sub_2213CDC(0, v4);
    ServantStatusQuestBoardDraw__OnChangeAlphaAnim(
      (ServantStatusQuestBoardDraw_o *)v5.fields._current,
      this->fields.questBoardManager,
      0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v5,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__Dispose__);
}


void ServantStatusListViewItemDrawServantQuest__OnDestroy(
        ServantStatusListViewItemDrawServantQuest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *loadPrefab; // x21
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *v7; // x21
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  __int64 v14; // x0
  __int64 v15; // x1
  struct System_Collections_Generic_List_ServantStatusQuestBoardDraw__o *questBoardList; // x8
  int32_t size; // w2
  int v18; // w9

  if ( (byte_596D36C & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Clear__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596D36C = 1;
  }
  loadPrefab = (UnityEngine_Object_o *)this->fields.loadPrefab;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(loadPrefab, 0, 0) )
  {
    v7 = (UnityEngine_Object_o *)this->fields.loadPrefab;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
    UnityEngine_Object__Destroy_83459800(v7, 0);
    this->fields.loadPrefab = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.loadPrefab, 0, v8, v9, v10, v11, v12, v13);
    questBoardList = this->fields.questBoardList;
    if ( !questBoardList )
      sub_2213CDC(v14, v15);
    size = questBoardList->fields._size;
    v18 = questBoardList->fields._version + 1;
    questBoardList->fields._size = 0;
    questBoardList->fields._version = v18;
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
  ServantStatusListViewItem_o *v5; // x22
  _BOOL4 isInit; // w8
  UnityEngine_GameObject_o *svtCoinBase; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  UILabel_o *explanationLabel; // x21
  UILabel_o *explanation2Label; // x21
  __int64 v13; // x1
  __int64 v14; // x2
  struct ServantEntity_o *svtEntity; // x8
  struct UISprite_o *baseSprite; // x8
  UnityEngine_GameObject_o *v17; // x27
  int32_t mHeight; // w28
  float x; // s14
  float y; // s9
  float v21; // s15
  float v22; // s10
  float z; // s8
  float v24; // s13
  float v25; // s11
  const MethodInfo *v26; // x2
  ServantLimitImageMaster_o *v27; // x23
  __int64 v28; // x20
  int v29; // w29
  MapControl_QuestInfo_o *v30; // x25
  void **p_monitor; // x21
  _DWORD *v32; // x26
  MapControl_QuestInfo_o *v33; // x24
  __int64 v34; // x1
  const MethodInfo *v35; // x2
  UILabel_o *v36; // x26
  UnityEngine_GameObject_o *v37; // x27
  Il2CppObject *Component_object; // x26
  __int64 v39; // x2
  ServantStatusListViewItemDrawServantQuest_c *v40; // x8
  UnityEngine_Transform_o *v41; // x27
  int32_t v42; // w23
  UnityEngine_GameObject_o *inputMessageObject; // x27
  ServantStatusQuestBoardManager_o *questBoardManager; // x28
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7
  intptr_t m_CachedPtr; // x8
  _QWORD *v52; // x9
  __int64 klass_low; // x10
  int32_t v54; // w28
  intptr_t v55; // x8
  int32_t QuestBoardPitch; // w8
  float v57; // s0
  int32_t v58; // w9
  UnityEngine_GameObject_o *v59; // x23
  __int64 v60; // x2
  UnityEngine_Transform_o *v61; // x24
  Il2CppObject *v62; // x23
  System_String_o *v63; // x2
  System_String_o *v64; // x3
  int32_t v65; // w4
  int32_t v66; // w5
  bool v67; // w6
  bool v68; // w7
  intptr_t v69; // x8
  _QWORD *v70; // x9
  __int64 v71; // x10
  intptr_t v72; // x8
  int32_t v73; // w8
  float v74; // s0
  int32_t v75; // w9
  const MethodInfo *v76; // x2
  __int64 v77; // x21
  int v78; // w20
  MapControl_QuestInfo_o *v79; // x25
  void **v80; // x29
  _DWORD *v81; // x26
  MapControl_QuestInfo_o *v82; // x24
  UnityEngine_GameObject_o *v83; // x27
  Il2CppObject *v84; // x26
  __int64 v85; // x2
  UnityEngine_Transform_o *v86; // x27
  ServantStatusListViewItemDrawServantQuest_c *v87; // x8
  int32_t v88; // w22
  UnityEngine_GameObject_o *v89; // x27
  ServantStatusQuestBoardManager_o *v90; // x28
  System_String_o *v91; // x2
  System_String_o *v92; // x3
  int32_t v93; // w4
  int32_t v94; // w5
  bool v95; // w6
  bool v96; // w7
  intptr_t v97; // x8
  _QWORD *v98; // x9
  __int64 v99; // x10
  intptr_t v100; // x8
  int32_t v101; // w8
  float v102; // s0
  int32_t v103; // w9
  UnityEngine_GameObject_o *v104; // x24
  __int64 v105; // x2
  UnityEngine_Transform_o *v106; // x25
  Il2CppObject *v107; // x24
  System_String_o *v108; // x2
  System_String_o *v109; // x3
  int32_t v110; // w4
  int32_t v111; // w5
  bool v112; // w6
  bool v113; // w7
  intptr_t v114; // x8
  _QWORD *v115; // x9
  __int64 v116; // x10
  intptr_t v117; // x8
  int32_t v118; // w8
  int32_t v119; // w9
  __int64 v120; // x1
  UnityEngine_Vector3_o v121; // x2
  const MethodInfo *v122; // x4
  __int64 v123; // x2
  Il2CppObject *Master_object; // x24
  int64_t v125; // x25
  __int64 v126; // x21
  MapControl_QuestInfo_o *v127; // x25
  void **v128; // x29
  _DWORD *v129; // x26
  MapControl_QuestInfo_o *v130; // x24
  UnityEngine_GameObject_o *v131; // x27
  Il2CppObject *v132; // x26
  __int64 v133; // x2
  UnityEngine_Transform_o *v134; // x27
  ServantStatusListViewItemDrawServantQuest_c *v135; // x8
  int32_t v136; // w20
  UnityEngine_GameObject_o *v137; // x27
  ServantStatusQuestBoardManager_o *v138; // x28
  System_String_o *v139; // x2
  System_String_o *v140; // x3
  int32_t v141; // w4
  int32_t v142; // w5
  bool v143; // w6
  bool v144; // w7
  intptr_t v145; // x8
  _QWORD *v146; // x9
  __int64 v147; // x10
  intptr_t v148; // x8
  int32_t v149; // w8
  int32_t v150; // w9
  __int64 v151; // x1
  __int64 v152; // x2
  UILabel_o *svtCoinExplanationLabel; // x20
  float reinforcementPosition; // [xsp+14h] [xbp-DCh]
  float v155; // [xsp+18h] [xbp-D8h]
  int v156; // [xsp+20h] [xbp-D0h]
  int klass; // [xsp+24h] [xbp-CCh]
  DataMasterBase_TMaster__TEntity__PKType__o *v158; // [xsp+28h] [xbp-C8h]
  DataMasterBase_TMaster__TEntity__PKType__o *v159; // [xsp+28h] [xbp-C8h]
  UnityEngine_GameObject_o *v160; // [xsp+30h] [xbp-C0h]
  ServantStatusListViewItem_o *v161; // [xsp+38h] [xbp-B8h]
  Il2CppObject *v162; // [xsp+40h] [xbp-B0h] BYREF
  Il2CppObject *entity; // [xsp+48h] [xbp-A8h] BYREF
  UnityEngine_Vector2_o v164; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v167; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v168; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v169; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v170; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v171; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v172; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v173; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v174; // 0:s2.4,4:s3.4,8:s4.4
  UnityEngine_Vector3_o v175; // 0:s5.4,4:s6.4,8:s7.4

  v5 = item;
  if ( (byte_596D36E & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_QuestExtensionMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_QuestMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserQuestMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_QuestExtensionMaster__QuestExtensionEntity__int__TryGetEntity__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_ServantStatusQuestBoardDraw___);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Add__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&ServantStatusListViewItemDrawServantQuest_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_2213A60(&StringLiteral_12440/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_INTERLUDE"*/);
    sub_2213A60(&StringLiteral_12442/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_RAINFORCEMENT"*/);
    sub_2213A60(&StringLiteral_12443/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_SVT_COIN"*/);
    sub_2213A60(&StringLiteral_12441/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_LIMIT_LIBERATION"*/);
    byte_596D36E = 1;
  }
  isInit = this->fields.isInit;
  v162 = 0;
  entity = 0;
  if ( !isInit )
  {
    this->fields.dispMode = mode;
    if ( v5 )
    {
      if ( mode )
      {
        svtCoinBase = this->fields.svtCoinBase;
        this->fields.isInit = 1;
        if ( !svtCoinBase )
          goto LABEL_171;
        svtCoinBase = UnityEngine_GameObject__get_gameObject(svtCoinBase, 0);
        if ( !svtCoinBase )
          goto LABEL_171;
        UnityEngine_GameObject__SetActive(svtCoinBase, 0, 0);
        explanationLabel = this->fields.explanationLabel;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9, v10);
        svtCoinBase = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12440/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_INTERLUDE"*/, 0);
        if ( !explanationLabel )
          goto LABEL_171;
        UILabel__set_text(explanationLabel, (System_String_o *)svtCoinBase, 0);
        explanation2Label = this->fields.explanation2Label;
        svtCoinBase = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12442/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_RAINFORCEMENT"*/, 0);
        if ( !explanation2Label )
          goto LABEL_171;
        UILabel__set_text(explanation2Label, (System_String_o *)svtCoinBase, 0);
        if ( v5->fields.svtEntity )
        {
          if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v13, v14);
          svtCoinBase = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_QuestMaster___);
          svtEntity = v5->fields.svtEntity;
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
                v17 = svtCoinBase;
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
                        v21 = localPosition.fields.x;
                        v22 = localPosition.fields.y;
                        z = localPosition.fields.z;
                        svtCoinBase = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(svtCoinBase, 0);
                        if ( svtCoinBase )
                        {
                          v167 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)svtCoinBase, 0);
                          svtCoinBase = this->fields.svtCoinBase;
                          if ( svtCoinBase )
                          {
                            v24 = v167.fields.y;
                            reinforcementPosition = v167.fields.z;
                            v155 = v167.fields.x;
                            svtCoinBase = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                                        svtCoinBase,
                                                                        0);
                            if ( svtCoinBase )
                            {
                              v168 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)svtCoinBase, 0);
                              v25 = v168.fields.y;
                              if ( v5->fields.userSvtCollectionEntity )
                              {
                                if ( !v17 )
                                  goto LABEL_171;
                                klass = (int)v17[1].klass;
                              }
                              else
                              {
                                klass = 0;
                              }
                              svtCoinBase = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                              if ( svtCoinBase )
                              {
                                svtCoinBase = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                                            (DataManager_o *)svtCoinBase,
                                                                            (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
                                v160 = v17;
                                v161 = v5;
                                if ( klass < 1 )
                                  goto LABEL_62;
                                if ( !v17 )
                                  goto LABEL_171;
                                v27 = (ServantLimitImageMaster_o *)svtCoinBase;
                                v28 = 0;
                                v29 = 0;
                                v30 = 0;
                                p_monitor = &v17[1].monitor;
                                v158 = (DataMasterBase_TMaster__TEntity__PKType__o *)svtCoinBase;
                                do
                                {
                                  if ( (unsigned int)v28 >= LODWORD(v17[1].klass) )
LABEL_172:
                                    sub_2213CE4(svtCoinBase);
                                  v32 = p_monitor[v28];
                                  svtCoinBase = (UnityEngine_GameObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_QuestTree__get_Instance__);
                                  if ( !v32 || !svtCoinBase )
                                    goto LABEL_171;
                                  svtCoinBase = (UnityEngine_GameObject_o *)QuestTree__GetQuestInfo(
                                                                              (QuestTree_o *)svtCoinBase,
                                                                              v32[4],
                                                                              0);
                                  if ( svtCoinBase
                                    && (v33 = (MapControl_QuestInfo_o *)svtCoinBase,
                                        svtCoinBase = (UnityEngine_GameObject_o *)MapControl_QuestInfo__GetQuestType(
                                                                                    (MapControl_QuestInfo_o *)svtCoinBase,
                                                                                    0),
                                        (_DWORD)svtCoinBase == 3) )
                                  {
                                    if ( !v27 )
                                      goto LABEL_171;
                                    if ( ServantLimitImageMaster__IsLimitCountSealQuest(v27, v32[4], 0) )
                                    {
                                      v36 = this->fields.explanationLabel;
                                      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v34, v35);
                                      svtCoinBase = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                                  (System_String_o *)StringLiteral_12441/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_LIMIT_LIBERATION"*/,
                                                                                  0);
                                      if ( !v36 )
                                        goto LABEL_171;
                                      UILabel__set_text(v36, (System_String_o *)svtCoinBase, 0);
                                    }
                                    svtCoinBase = ServantStatusListViewItemDrawServantQuest__CreateQuestBoardPrefab(
                                                    this,
                                                    this->fields.interludeQuestBase,
                                                    v35);
                                    if ( !svtCoinBase )
                                      goto LABEL_171;
                                    v37 = svtCoinBase;
                                    Component_object = UnityEngine_GameObject__GetComponent_object_(
                                                         svtCoinBase,
                                                         (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusQuestBoardDraw___);
                                    svtCoinBase = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                                                v37,
                                                                                0);
                                    v40 = ServantStatusListViewItemDrawServantQuest_TypeInfo;
                                    v41 = (UnityEngine_Transform_o *)svtCoinBase;
                                    if ( !*(&ServantStatusListViewItemDrawServantQuest_TypeInfo->_2.cctor_finished + 1) )
                                    {
                                      j_il2cpp_runtime_class_init_0(
                                        ServantStatusListViewItemDrawServantQuest_TypeInfo,
                                        item,
                                        v39);
                                      v40 = ServantStatusListViewItemDrawServantQuest_TypeInfo;
                                    }
                                    if ( !v41 )
                                      goto LABEL_171;
                                    v169.fields.x = 0.0;
                                    v169.fields.z = 0.0;
                                    v42 = mHeight;
                                    v169.fields.y = (float)-(v40->static_fields->QuestBoardPitch * v29
                                                           + v40->static_fields->QuestBoardSize / 2);
                                    UnityEngine_Transform__set_localPosition(v41, v169, 0);
                                    inputMessageObject = this->fields.inputMessageObject;
                                    questBoardManager = this->fields.questBoardManager;
                                    svtCoinBase = (UnityEngine_GameObject_o *)ServantStatusListViewItem__get_LimitCount(
                                                                                v5,
                                                                                0);
                                    if ( !Component_object )
                                      goto LABEL_171;
                                    ServantStatusQuestBoardDraw__SetItem(
                                      (ServantStatusQuestBoardDraw_o *)Component_object,
                                      v33,
                                      v30,
                                      inputMessageObject,
                                      questBoardManager,
                                      (int32_t)svtCoinBase,
                                      0);
                                    svtCoinBase = (UnityEngine_GameObject_o *)this->fields.questBoardList;
                                    if ( !svtCoinBase )
                                      goto LABEL_171;
                                    m_CachedPtr = svtCoinBase->fields.m_CachedPtr;
                                    v17 = v160;
                                    v52 = Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Add__;
                                    ++HIDWORD(svtCoinBase[1].klass);
                                    if ( !m_CachedPtr )
                                      goto LABEL_171;
                                    klass_low = SLODWORD(svtCoinBase[1].klass);
                                    v54 = v42;
                                    v27 = (ServantLimitImageMaster_o *)v158;
                                    if ( (unsigned int)klass_low >= *(_DWORD *)(m_CachedPtr + 24) )
                                    {
                                      System_Collections_Generic_List_object___AddWithResize(
                                        (System_Collections_Generic_List_object__o *)svtCoinBase,
                                        Component_object,
                                        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
                                    }
                                    else
                                    {
                                      v55 = m_CachedPtr + 8 * klass_low;
                                      LODWORD(svtCoinBase[1].klass) = klass_low + 1;
                                      *(_QWORD *)(v55 + 32) = Component_object;
                                      sub_2213A04(
                                        (MissionNaviTransitionBoardItem_o *)(v55 + 32),
                                        (int32_t)Component_object,
                                        v45,
                                        v46,
                                        v47,
                                        v48,
                                        v49,
                                        v50);
                                    }
                                    ++v29;
                                    QuestBoardPitch = ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardPitch;
                                    v57 = (float)QuestBoardPitch;
                                    mHeight = QuestBoardPitch + v54;
                                    if ( QuestBoardPitch >= 0 )
                                      v58 = ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardPitch;
                                    else
                                      v58 = QuestBoardPitch + 1;
                                    y = y + v57;
                                    v24 = v24 - v57;
                                    v25 = v25 - v57;
                                    v22 = v22 + (float)(v58 >> 1);
                                  }
                                  else
                                  {
                                    v33 = v30;
                                  }
                                  ++v28;
                                  v30 = v33;
                                }
                                while ( klass != (_DWORD)v28 );
                                if ( !v29 )
                                {
LABEL_62:
                                  svtCoinBase = ServantStatusListViewItemDrawServantQuest__CreateQuestBoardPrefab(
                                                  this,
                                                  this->fields.interludeQuestBase,
                                                  v26);
                                  if ( !svtCoinBase )
                                    goto LABEL_171;
                                  v59 = svtCoinBase;
                                  svtCoinBase = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                                              svtCoinBase,
                                                                              0);
                                  v61 = (UnityEngine_Transform_o *)svtCoinBase;
                                  if ( !*(&ServantStatusListViewItemDrawServantQuest_TypeInfo->_2.cctor_finished + 1) )
                                    j_il2cpp_runtime_class_init_0(
                                      ServantStatusListViewItemDrawServantQuest_TypeInfo,
                                      item,
                                      v60);
                                  if ( !v61 )
                                    goto LABEL_171;
                                  v170.fields.x = 0.0;
                                  v170.fields.z = 0.0;
                                  v170.fields.y = (float)(ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardSize
                                                        / -2);
                                  UnityEngine_Transform__set_localPosition(v61, v170, 0);
                                  svtCoinBase = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                              v59,
                                                                              (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusQuestBoardDraw___);
                                  if ( !svtCoinBase )
                                    goto LABEL_171;
                                  v62 = (Il2CppObject *)svtCoinBase;
                                  ServantStatusQuestBoardDraw__SetDark((ServantStatusQuestBoardDraw_o *)svtCoinBase, 0);
                                  svtCoinBase = (UnityEngine_GameObject_o *)this->fields.questBoardList;
                                  if ( !svtCoinBase )
                                    goto LABEL_171;
                                  v69 = svtCoinBase->fields.m_CachedPtr;
                                  v70 = Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Add__;
                                  ++HIDWORD(svtCoinBase[1].klass);
                                  if ( !v69 )
                                    goto LABEL_171;
                                  v71 = SLODWORD(svtCoinBase[1].klass);
                                  if ( (unsigned int)v71 >= *(_DWORD *)(v69 + 24) )
                                  {
                                    System_Collections_Generic_List_object___AddWithResize(
                                      (System_Collections_Generic_List_object__o *)svtCoinBase,
                                      v62,
                                      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v70[4] + 192LL) + 112LL));
                                  }
                                  else
                                  {
                                    v72 = v69 + 8 * v71;
                                    LODWORD(svtCoinBase[1].klass) = v71 + 1;
                                    *(_QWORD *)(v72 + 32) = v62;
                                    sub_2213A04(
                                      (MissionNaviTransitionBoardItem_o *)(v72 + 32),
                                      (int32_t)v62,
                                      v63,
                                      v64,
                                      v65,
                                      v66,
                                      v67,
                                      v68);
                                  }
                                  v73 = ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardPitch;
                                  v74 = (float)v73;
                                  mHeight += v73;
                                  if ( v73 >= 0 )
                                    v75 = ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardPitch;
                                  else
                                    v75 = v73 + 1;
                                  y = y + v74;
                                  v24 = v24 - v74;
                                  v25 = v25 - v74;
                                  v22 = v22 + (float)(v75 >> 1);
                                }
                                if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
                                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, item, v26);
                                svtCoinBase = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_QuestExtensionMaster___);
                                v159 = (DataMasterBase_TMaster__TEntity__PKType__o *)svtCoinBase;
                                if ( klass < 1 )
                                  goto LABEL_107;
                                if ( !v17 )
                                  goto LABEL_171;
                                v77 = 0;
                                v78 = 0;
                                v79 = 0;
                                v80 = &v17[1].monitor;
                                do
                                {
                                  if ( (unsigned int)v77 >= LODWORD(v17[1].klass) )
                                    goto LABEL_172;
                                  v81 = v80[v77];
                                  svtCoinBase = (UnityEngine_GameObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_QuestTree__get_Instance__);
                                  if ( !v81 || !svtCoinBase )
                                    goto LABEL_171;
                                  svtCoinBase = (UnityEngine_GameObject_o *)QuestTree__GetQuestInfo(
                                                                              (QuestTree_o *)svtCoinBase,
                                                                              v81[4],
                                                                              0);
                                  if ( !svtCoinBase )
                                    goto LABEL_86;
                                  v82 = (MapControl_QuestInfo_o *)svtCoinBase;
                                  svtCoinBase = (UnityEngine_GameObject_o *)MapControl_QuestInfo__GetQuestType(
                                                                              (MapControl_QuestInfo_o *)svtCoinBase,
                                                                              0);
                                  if ( (_DWORD)svtCoinBase == 3 )
                                    goto LABEL_86;
                                  svtCoinBase = (UnityEngine_GameObject_o *)v159;
                                  if ( !v159 )
                                    goto LABEL_171;
                                  if ( !DataMasterBase_object__object__int___TryGetEntity(
                                          v159,
                                          &entity,
                                          v81[4],
                                          (const MethodInfo_3F10B80 *)Method_DataMasterBase_QuestExtensionMaster__QuestExtensionEntity__int__TryGetEntity__) )
                                    goto LABEL_91;
                                  svtCoinBase = (UnityEngine_GameObject_o *)entity;
                                  if ( !entity )
                                    goto LABEL_171;
                                  svtCoinBase = (UnityEngine_GameObject_o *)QuestExtensionEntity__IsSvtCoinQuest(
                                                                              (QuestExtensionEntity_o *)entity,
                                                                              0);
                                  if ( ((unsigned __int8)svtCoinBase & 1) != 0 )
                                  {
LABEL_86:
                                    v82 = v79;
                                  }
                                  else
                                  {
LABEL_91:
                                    svtCoinBase = ServantStatusListViewItemDrawServantQuest__CreateQuestBoardPrefab(
                                                    this,
                                                    this->fields.rainforcementQuestBase,
                                                    v76);
                                    if ( !svtCoinBase )
                                      goto LABEL_171;
                                    v83 = svtCoinBase;
                                    v84 = UnityEngine_GameObject__GetComponent_object_(
                                            svtCoinBase,
                                            (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusQuestBoardDraw___);
                                    svtCoinBase = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                                                v83,
                                                                                0);
                                    v86 = (UnityEngine_Transform_o *)svtCoinBase;
                                    v87 = ServantStatusListViewItemDrawServantQuest_TypeInfo;
                                    if ( !*(&ServantStatusListViewItemDrawServantQuest_TypeInfo->_2.cctor_finished + 1) )
                                    {
                                      j_il2cpp_runtime_class_init_0(
                                        ServantStatusListViewItemDrawServantQuest_TypeInfo,
                                        item,
                                        v85);
                                      v87 = ServantStatusListViewItemDrawServantQuest_TypeInfo;
                                    }
                                    if ( !v86 )
                                      goto LABEL_171;
                                    v171.fields.x = 0.0;
                                    v171.fields.z = 0.0;
                                    v88 = mHeight;
                                    v171.fields.y = (float)-(v87->static_fields->QuestBoardPitch * v78
                                                           + v87->static_fields->QuestBoardSize / 2);
                                    UnityEngine_Transform__set_localPosition(v86, v171, 0);
                                    v89 = this->fields.inputMessageObject;
                                    v90 = this->fields.questBoardManager;
                                    svtCoinBase = (UnityEngine_GameObject_o *)ServantStatusListViewItem__get_LimitCount(
                                                                                v161,
                                                                                0);
                                    if ( !v84 )
                                      goto LABEL_171;
                                    ServantStatusQuestBoardDraw__SetItem(
                                      (ServantStatusQuestBoardDraw_o *)v84,
                                      v82,
                                      v79,
                                      v89,
                                      v90,
                                      (int32_t)svtCoinBase,
                                      0);
                                    svtCoinBase = (UnityEngine_GameObject_o *)this->fields.questBoardList;
                                    if ( !svtCoinBase )
                                      goto LABEL_171;
                                    v97 = svtCoinBase->fields.m_CachedPtr;
                                    v17 = v160;
                                    v98 = Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Add__;
                                    ++HIDWORD(svtCoinBase[1].klass);
                                    if ( !v97 )
                                      goto LABEL_171;
                                    v99 = SLODWORD(svtCoinBase[1].klass);
                                    if ( (unsigned int)v99 >= *(_DWORD *)(v97 + 24) )
                                    {
                                      System_Collections_Generic_List_object___AddWithResize(
                                        (System_Collections_Generic_List_object__o *)svtCoinBase,
                                        v84,
                                        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v98[4] + 192LL) + 112LL));
                                    }
                                    else
                                    {
                                      v100 = v97 + 8 * v99;
                                      LODWORD(svtCoinBase[1].klass) = v99 + 1;
                                      *(_QWORD *)(v100 + 32) = v84;
                                      sub_2213A04(
                                        (MissionNaviTransitionBoardItem_o *)(v100 + 32),
                                        (int32_t)v84,
                                        v91,
                                        v92,
                                        v93,
                                        v94,
                                        v95,
                                        v96);
                                    }
                                    ++v78;
                                    v101 = ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardPitch;
                                    v102 = (float)v101;
                                    mHeight = v101 + v88;
                                    if ( v101 >= 0 )
                                      v103 = ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardPitch;
                                    else
                                      v103 = v101 + 1;
                                    y = y + v102;
                                    v25 = v25 - v102;
                                    v22 = v22 + (float)(v103 >> 1);
                                  }
                                  ++v77;
                                  v79 = v82;
                                }
                                while ( klass != (_DWORD)v77 );
                                v5 = v161;
                                if ( !v78 )
                                {
LABEL_107:
                                  svtCoinBase = ServantStatusListViewItemDrawServantQuest__CreateQuestBoardPrefab(
                                                  this,
                                                  this->fields.rainforcementQuestBase,
                                                  v76);
                                  if ( !svtCoinBase )
                                    goto LABEL_171;
                                  v104 = svtCoinBase;
                                  svtCoinBase = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                                              svtCoinBase,
                                                                              0);
                                  v106 = (UnityEngine_Transform_o *)svtCoinBase;
                                  if ( !*(&ServantStatusListViewItemDrawServantQuest_TypeInfo->_2.cctor_finished + 1) )
                                    j_il2cpp_runtime_class_init_0(
                                      ServantStatusListViewItemDrawServantQuest_TypeInfo,
                                      item,
                                      v105);
                                  if ( !v106 )
                                    goto LABEL_171;
                                  v172.fields.x = 0.0;
                                  v172.fields.z = 0.0;
                                  v172.fields.y = (float)(ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardSize
                                                        / -2);
                                  UnityEngine_Transform__set_localPosition(v106, v172, 0);
                                  svtCoinBase = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                              v104,
                                                                              (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusQuestBoardDraw___);
                                  if ( !svtCoinBase )
                                    goto LABEL_171;
                                  v107 = (Il2CppObject *)svtCoinBase;
                                  ServantStatusQuestBoardDraw__SetDark((ServantStatusQuestBoardDraw_o *)svtCoinBase, 0);
                                  svtCoinBase = (UnityEngine_GameObject_o *)this->fields.questBoardList;
                                  if ( !svtCoinBase )
                                    goto LABEL_171;
                                  v114 = svtCoinBase->fields.m_CachedPtr;
                                  v115 = Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Add__;
                                  ++HIDWORD(svtCoinBase[1].klass);
                                  if ( !v114 )
                                    goto LABEL_171;
                                  v116 = SLODWORD(svtCoinBase[1].klass);
                                  if ( (unsigned int)v116 >= *(_DWORD *)(v114 + 24) )
                                  {
                                    System_Collections_Generic_List_object___AddWithResize(
                                      (System_Collections_Generic_List_object__o *)svtCoinBase,
                                      v107,
                                      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v115[4] + 192LL) + 112LL));
                                  }
                                  else
                                  {
                                    v117 = v114 + 8 * v116;
                                    LODWORD(svtCoinBase[1].klass) = v116 + 1;
                                    *(_QWORD *)(v117 + 32) = v107;
                                    sub_2213A04(
                                      (MissionNaviTransitionBoardItem_o *)(v117 + 32),
                                      (int32_t)v107,
                                      v108,
                                      v109,
                                      v110,
                                      v111,
                                      v112,
                                      v113);
                                  }
                                  v118 = ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardPitch;
                                  mHeight += v118;
                                  if ( v118 >= 0 )
                                    v119 = ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardPitch;
                                  else
                                    v119 = v118 + 1;
                                  y = y + (float)v118;
                                  v22 = v22 + (float)(v119 >> 1);
                                }
                                svtCoinBase = (UnityEngine_GameObject_o *)v5->fields.svtEntity;
                                if ( svtCoinBase )
                                {
                                  if ( !ServantEntity__checkIsHeroineSvt((ServantEntity_o *)svtCoinBase, 0) )
                                  {
LABEL_170:
                                    v164.fields.x = x;
                                    v164.fields.y = y;
                                    v175.fields.z = reinforcementPosition;
                                    v174.fields.x = v21;
                                    v174.fields.y = v22;
                                    v175.fields.y = v24;
                                    v175.fields.x = v155;
                                    v174.fields.z = z;
                                    ServantStatusListViewItemDrawServantQuest__AdjustLayout(
                                      this,
                                      mHeight,
                                      v164,
                                      v174,
                                      v175,
                                      v121,
                                      v122);
                                    return;
                                  }
                                  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
                                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v120, *(_QWORD *)&v121.fields.x);
                                  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserQuestMaster___);
                                  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
                                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, item, v123);
                                  if ( !byte_5969EF2 )
                                  {
                                    sub_2213A60(&NetworkManager_TypeInfo);
                                    byte_5969EF2 = 1;
                                  }
                                  svtCoinBase = (UnityEngine_GameObject_o *)NetworkManager_TypeInfo;
                                  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
                                  {
                                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, item, v123);
                                    svtCoinBase = (UnityEngine_GameObject_o *)NetworkManager_TypeInfo;
                                  }
                                  v125 = *(_QWORD *)(svtCoinBase[7].fields.m_CachedPtr + 64);
                                  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
                                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, item, v123);
                                  if ( Master_object )
                                  {
                                    svtCoinBase = (UnityEngine_GameObject_o *)UserQuestMaster__getClearCountsFromId(
                                                                                (UserQuestMaster_o *)Master_object,
                                                                                v125,
                                                                                BalanceConfig_TypeInfo->static_fields->SvtCoinQuestOpenQuestId,
                                                                                0);
                                    if ( (int)svtCoinBase < 1 || klass < 1 )
                                      goto LABEL_170;
                                    if ( v17 )
                                    {
                                      v156 = 0;
                                      v126 = 0;
                                      v127 = 0;
                                      v128 = &v17[1].monitor;
                                      do
                                      {
                                        if ( (unsigned int)v126 >= LODWORD(v17[1].klass) )
                                          goto LABEL_172;
                                        v129 = v128[v126];
                                        svtCoinBase = (UnityEngine_GameObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_QuestTree__get_Instance__);
                                        if ( !v129 || !svtCoinBase )
                                          goto LABEL_171;
                                        svtCoinBase = (UnityEngine_GameObject_o *)QuestTree__GetQuestInfo(
                                                                                    (QuestTree_o *)svtCoinBase,
                                                                                    v129[4],
                                                                                    0);
                                        if ( !svtCoinBase )
                                          goto LABEL_155;
                                        v130 = (MapControl_QuestInfo_o *)svtCoinBase;
                                        svtCoinBase = (UnityEngine_GameObject_o *)v159;
                                        if ( !v159 )
                                          goto LABEL_171;
                                        svtCoinBase = (UnityEngine_GameObject_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                                    v159,
                                                                                    &v162,
                                                                                    v129[4],
                                                                                    (const MethodInfo_3F10B80 *)Method_DataMasterBase_QuestExtensionMaster__QuestExtensionEntity__int__TryGetEntity__);
                                        if ( ((unsigned __int8)svtCoinBase & 1) == 0 )
                                          goto LABEL_155;
                                        svtCoinBase = (UnityEngine_GameObject_o *)v162;
                                        if ( !v162 )
                                          goto LABEL_171;
                                        svtCoinBase = (UnityEngine_GameObject_o *)QuestExtensionEntity__IsSvtCoinQuest(
                                                                                    (QuestExtensionEntity_o *)v162,
                                                                                    0);
                                        if ( ((unsigned __int8)svtCoinBase & 1) != 0 )
                                        {
                                          svtCoinBase = ServantStatusListViewItemDrawServantQuest__CreateQuestBoardPrefab(
                                                          this,
                                                          this->fields.svtCoinQuestBase,
                                                          *(const MethodInfo **)&v121.fields.x);
                                          if ( !svtCoinBase )
                                            goto LABEL_171;
                                          v131 = svtCoinBase;
                                          v132 = UnityEngine_GameObject__GetComponent_object_(
                                                   svtCoinBase,
                                                   (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusQuestBoardDraw___);
                                          svtCoinBase = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                                                      v131,
                                                                                      0);
                                          v134 = (UnityEngine_Transform_o *)svtCoinBase;
                                          v135 = ServantStatusListViewItemDrawServantQuest_TypeInfo;
                                          if ( !*(&ServantStatusListViewItemDrawServantQuest_TypeInfo->_2.cctor_finished
                                                + 1) )
                                          {
                                            j_il2cpp_runtime_class_init_0(
                                              ServantStatusListViewItemDrawServantQuest_TypeInfo,
                                              item,
                                              v133);
                                            v135 = ServantStatusListViewItemDrawServantQuest_TypeInfo;
                                          }
                                          if ( !v134 )
                                            goto LABEL_171;
                                          v173.fields.x = 0.0;
                                          v173.fields.z = 0.0;
                                          v136 = mHeight;
                                          v173.fields.y = (float)-(v135->static_fields->QuestBoardPitch * v156
                                                                 + v135->static_fields->QuestBoardSize / 2);
                                          UnityEngine_Transform__set_localPosition(v134, v173, 0);
                                          v137 = this->fields.inputMessageObject;
                                          v138 = this->fields.questBoardManager;
                                          svtCoinBase = (UnityEngine_GameObject_o *)ServantStatusListViewItem__get_LimitCount(
                                                                                      v161,
                                                                                      0);
                                          if ( !v132 )
                                            goto LABEL_171;
                                          ServantStatusQuestBoardDraw__SetItem(
                                            (ServantStatusQuestBoardDraw_o *)v132,
                                            v130,
                                            v127,
                                            v137,
                                            v138,
                                            (int32_t)svtCoinBase,
                                            0);
                                          svtCoinBase = (UnityEngine_GameObject_o *)this->fields.questBoardList;
                                          if ( !svtCoinBase )
                                            goto LABEL_171;
                                          v145 = svtCoinBase->fields.m_CachedPtr;
                                          v17 = v160;
                                          v146 = Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Add__;
                                          ++HIDWORD(svtCoinBase[1].klass);
                                          if ( !v145 )
                                            goto LABEL_171;
                                          v147 = SLODWORD(svtCoinBase[1].klass);
                                          if ( (unsigned int)v147 >= *(_DWORD *)(v145 + 24) )
                                          {
                                            System_Collections_Generic_List_object___AddWithResize(
                                              (System_Collections_Generic_List_object__o *)svtCoinBase,
                                              v132,
                                              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v146[4] + 192LL) + 112LL));
                                          }
                                          else
                                          {
                                            v148 = v145 + 8 * v147;
                                            LODWORD(svtCoinBase[1].klass) = v147 + 1;
                                            *(_QWORD *)(v148 + 32) = v132;
                                            sub_2213A04(
                                              (MissionNaviTransitionBoardItem_o *)(v148 + 32),
                                              (int32_t)v132,
                                              v139,
                                              v140,
                                              v141,
                                              v142,
                                              v143,
                                              v144);
                                          }
                                          v149 = ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardPitch;
                                          mHeight = v149 + v136;
                                          if ( v149 >= 0 )
                                            v150 = ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardPitch;
                                          else
                                            v150 = v149 + 1;
                                          y = y + (float)v149;
                                          ++v156;
                                          v22 = v22 + (float)(v150 >> 1);
                                        }
                                        else
                                        {
LABEL_155:
                                          v130 = v127;
                                        }
                                        ++v126;
                                        v127 = v130;
                                      }
                                      while ( klass != (_DWORD)v126 );
                                      if ( v156 < 1 )
                                        goto LABEL_170;
                                      svtCoinBase = this->fields.svtCoinBase;
                                      if ( svtCoinBase )
                                      {
                                        svtCoinBase = UnityEngine_GameObject__get_gameObject(svtCoinBase, 0);
                                        if ( svtCoinBase )
                                        {
                                          UnityEngine_GameObject__SetActive(svtCoinBase, 1, 0);
                                          svtCoinExplanationLabel = this->fields.svtCoinExplanationLabel;
                                          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v151, v152);
                                          svtCoinBase = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                                      (System_String_o *)StringLiteral_12443/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_SVT_COIN"*/,
                                                                                      0);
                                          if ( svtCoinExplanationLabel )
                                          {
                                            UILabel__set_text(
                                              svtCoinExplanationLabel,
                                              (System_String_o *)svtCoinBase,
                                              0);
                                            mHeight += 38;
                                            v22 = v22 + 19.0;
                                            y = y + 38.0;
                                            goto LABEL_170;
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
LABEL_171:
          sub_2213CDC(svtCoinBase, item);
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
  System_Collections_Generic_List_Enumerator_object__o v7; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_596D370 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__GetEnumerator__);
    byte_596D370 = 1;
  }
  questBoardManager = this->fields.questBoardManager;
  memset(&v7, 0, sizeof(v7));
  if ( questBoardManager )
  {
    if ( ServantStatusQuestBoardManager__UpdateAlphaAnim(questBoardManager, 0) )
      ServantStatusListViewItemDrawServantQuest__OnChangeAlphaAnim(this, v4);
    questBoardList = this->fields.questBoardList;
    if ( !questBoardList )
      sub_2213CDC(0, v4);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v7,
      (System_Collections_Generic_List_object__o *)questBoardList,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v7,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__MoveNext__) )
    {
      if ( !v7.fields._current )
        sub_2213CDC(0, v6);
      ServantStatusQuestBoardDraw__UpdateItem(
        (ServantStatusQuestBoardDraw_o *)v7.fields._current,
        this->fields.questBoardManager,
        0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v7,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__Dispose__);
  }
}