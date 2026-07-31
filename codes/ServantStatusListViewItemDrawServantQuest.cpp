void ServantStatusListViewItemDrawServantQuest___cctor(const MethodInfo *method)
{
  if ( (byte_5935D01 & 1) == 0 )
  {
    sub_21FFC50(&ServantStatusListViewItemDrawServantQuest_TypeInfo);
    byte_5935D01 = 1;
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

  if ( (byte_5935D00 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_ServantStatusQuestBoardDraw__TypeInfo);
    byte_5935D00 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ServantStatusQuestBoardDraw__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw___ctor__);
  this->fields.questBoardList = (struct System_Collections_Generic_List_ServantStatusQuestBoardDraw__o *)v3;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.questBoardList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
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
    sub_21FFECC(baseSprite, *(_QWORD *)&baseHeight);
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
  const MethodInfo *v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  __int64 v16; // x1
  __int64 v17; // x2
  Il2CppObject *object; // x22
  Il2CppObject *v19; // x0
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  UnityEngine_GameObject_o *v26; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v28; // x1
  UnityEngine_GameObject_o *v29; // x0
  UnityEngine_GameObject_o *v30; // x20
  UnityEngine_GameObject_o *v31; // x19

  if ( (byte_5935CFC & 1) == 0 )
  {
    sub_21FFC50(&NGUITools_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Resources_Load_GameObject___);
    sub_21FFC50(&ServantStatusQuestBoardManager_TypeInfo);
    byte_5935CFC = 1;
  }
  loadPrefab = (UnityEngine_Object_o *)this->fields.loadPrefab;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, parent, method);
  if ( UnityEngine_Object__op_Equality(loadPrefab, 0, 0) )
  {
    v8 = (ServantStatusQuestBoardManager_o *)sub_21FFEBC(ServantStatusQuestBoardManager_TypeInfo);
    ServantStatusQuestBoardManager___ctor(v8, v9);
    this->fields.questBoardManager = v8;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.questBoardManager,
      (int32_t)v8,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
    object = UnityEngine_Resources__Load_object_(
               this->fields.questBoardPrefabPath,
               (const MethodInfo_3945260 *)Method_UnityEngine_Resources_Load_GameObject___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16, v17);
    v19 = UnityEngine_Object__Instantiate_object_(
            object,
            (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    this->fields.loadPrefab = (struct UnityEngine_GameObject_o *)v19;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.loadPrefab,
      (int32_t)v19,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
    v26 = this->fields.loadPrefab;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    GameObjectExtensions__SetParent_42881836(v26, gameObject, 0);
    v29 = this->fields.loadPrefab;
    if ( !v29 )
LABEL_14:
      sub_21FFECC(v29, v28);
    UnityEngine_GameObject__SetActive(v29, 0, 0);
  }
  v30 = this->fields.loadPrefab;
  if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v6, v7);
  v29 = NGUITools__AddChild_56210768(parent, v30, 0);
  if ( !v29 )
    goto LABEL_14;
  v31 = v29;
  UnityEngine_GameObject__SetActive(v29, 1, 0);
  return v31;
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
  __int64 v10; // [xsp+8h] [xbp-58h]
  System_Collections_Generic_List_Enumerator_object__o *v11; // [xsp+10h] [xbp-50h]
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_5935CFE & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__GetEnumerator__);
    byte_5935CFE = 1;
  }
  questBoardList = this->fields.questBoardList;
  memset(&v12, 0, sizeof(v12));
  if ( !questBoardList )
    sub_21FFECC(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    (System_Collections_Generic_List_object__o *)questBoardList,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__GetEnumerator__);
  v10 = 0;
  v11 = &v12;
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v12,
           (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__MoveNext__);
    if ( !v4 )
      break;
    current = v12.fields._current;
    if ( !v12.fields._current )
      sub_21FFECC(v4, v5);
    questBoardManager = this->fields.questBoardManager;
    ServantStatusQuestBoardDraw__ChangeNextInfoText(
      (ServantStatusQuestBoardDraw_o *)v12.fields._current,
      v5,
      questBoardManager,
      v6);
    ServantStatusQuestBoardDraw__ChangeNextRewardIcon((ServantStatusQuestBoardDraw_o *)current, questBoardManager, v9);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v12,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__Dispose__);
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

  if ( (byte_5935CFB & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Clear__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5935CFB = 1;
  }
  loadPrefab = (UnityEngine_Object_o *)this->fields.loadPrefab;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(loadPrefab, 0, 0) )
  {
    v7 = (UnityEngine_Object_o *)this->fields.loadPrefab;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
    UnityEngine_Object__Destroy_83246496(v7, 0);
    this->fields.loadPrefab = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.loadPrefab, 0, v8, v9, v10, v11, v12, v13);
    questBoardList = this->fields.questBoardList;
    if ( !questBoardList )
      sub_21FFECC(v14, v15);
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
  _BOOL4 isInit; // w8
  const MethodInfo *v8; // x1
  UnityEngine_GameObject_o *svtCoinBase; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  UILabel_o *explanationLabel; // x21
  UILabel_o *explanation2Label; // x21
  __int64 v14; // x1
  __int64 v15; // x2
  struct ServantEntity_o *svtEntity; // x8
  struct UISprite_o *baseSprite; // x8
  UnityEngine_GameObject_o *v18; // x27
  int32_t mHeight; // w28
  float x; // s14
  float y; // s9
  float v22; // s15
  float v23; // s10
  float z; // s8
  float v25; // s13
  float v26; // s11
  const MethodInfo *v27; // x2
  ServantLimitImageMaster_o *v28; // x23
  __int64 v29; // x21
  int v30; // w29
  MapControl_QuestInfo_o *v31; // x25
  void **p_monitor; // x20
  _DWORD *v33; // x26
  MapControl_QuestInfo_o *v34; // x24
  __int64 v35; // x1
  const MethodInfo *v36; // x2
  UILabel_o *v37; // x26
  UnityEngine_GameObject_o *v38; // x27
  Il2CppObject *Component_object; // x26
  __int64 v40; // x2
  ServantStatusListViewItemDrawServantQuest_c *v41; // x8
  UnityEngine_Transform_o *v42; // x27
  int32_t v43; // w23
  UnityEngine_GameObject_o *inputMessageObject; // x27
  ServantStatusQuestBoardManager_o *questBoardManager; // x28
  const MethodInfo *v46; // x6
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  intptr_t m_CachedPtr; // x8
  _QWORD *v54; // x9
  __int64 klass_low; // x10
  int32_t v56; // w28
  intptr_t v57; // x8
  int32_t QuestBoardPitch; // w8
  float v59; // s0
  int32_t v60; // w9
  UnityEngine_GameObject_o *v61; // x23
  __int64 v62; // x2
  UnityEngine_Transform_o *v63; // x24
  Il2CppObject *v64; // x23
  System_String_o *v65; // x2
  System_String_o *v66; // x3
  int32_t v67; // w4
  int32_t v68; // w5
  bool v69; // w6
  bool v70; // w7
  intptr_t v71; // x8
  _QWORD *v72; // x9
  __int64 v73; // x10
  intptr_t v74; // x8
  int32_t v75; // w8
  float v76; // s0
  int32_t v77; // w9
  const MethodInfo *v78; // x2
  __int64 v79; // x20
  int v80; // w21
  MapControl_QuestInfo_o *v81; // x25
  void **v82; // x29
  _DWORD *v83; // x26
  MapControl_QuestInfo_o *v84; // x24
  UnityEngine_GameObject_o *v85; // x27
  Il2CppObject *v86; // x26
  __int64 v87; // x2
  UnityEngine_Transform_o *v88; // x27
  ServantStatusListViewItemDrawServantQuest_c *v89; // x8
  int32_t v90; // w22
  UnityEngine_GameObject_o *v91; // x27
  ServantStatusQuestBoardManager_o *v92; // x28
  const MethodInfo *v93; // x6
  System_String_o *v94; // x2
  System_String_o *v95; // x3
  int32_t v96; // w4
  int32_t v97; // w5
  bool v98; // w6
  bool v99; // w7
  intptr_t v100; // x8
  _QWORD *v101; // x9
  __int64 v102; // x10
  intptr_t v103; // x8
  int32_t v104; // w8
  float v105; // s0
  int32_t v106; // w9
  UnityEngine_GameObject_o *v107; // x24
  __int64 v108; // x2
  UnityEngine_Transform_o *v109; // x25
  Il2CppObject *v110; // x24
  System_String_o *v111; // x2
  System_String_o *v112; // x3
  int32_t v113; // w4
  int32_t v114; // w5
  bool v115; // w6
  bool v116; // w7
  intptr_t v117; // x8
  _QWORD *v118; // x9
  __int64 v119; // x10
  intptr_t v120; // x8
  int32_t v121; // w8
  int32_t v122; // w9
  __int64 v123; // x1
  UnityEngine_Vector3_o v124; // x2
  const MethodInfo *v125; // x4
  __int64 v126; // x2
  Il2CppObject *Master_object; // x24
  int64_t v128; // x25
  __int64 v129; // x21
  MapControl_QuestInfo_o *v130; // x25
  void **v131; // x29
  _DWORD *v132; // x26
  MapControl_QuestInfo_o *v133; // x24
  UnityEngine_GameObject_o *v134; // x27
  Il2CppObject *v135; // x26
  __int64 v136; // x2
  UnityEngine_Transform_o *v137; // x27
  ServantStatusListViewItemDrawServantQuest_c *v138; // x8
  int32_t v139; // w20
  UnityEngine_GameObject_o *v140; // x27
  ServantStatusQuestBoardManager_o *v141; // x28
  const MethodInfo *v142; // x6
  System_String_o *v143; // x2
  System_String_o *v144; // x3
  int32_t v145; // w4
  int32_t v146; // w5
  bool v147; // w6
  bool v148; // w7
  intptr_t v149; // x8
  _QWORD *v150; // x9
  __int64 v151; // x10
  intptr_t v152; // x8
  int32_t v153; // w8
  int32_t v154; // w9
  __int64 v155; // x1
  __int64 v156; // x2
  UILabel_o *svtCoinExplanationLabel; // x20
  float reinforcementPosition; // [xsp+14h] [xbp-DCh]
  float v159; // [xsp+18h] [xbp-D8h]
  int v160; // [xsp+20h] [xbp-D0h]
  int klass; // [xsp+24h] [xbp-CCh]
  DataMasterBase_TMaster__TEntity__PKType__o *v162; // [xsp+28h] [xbp-C8h]
  DataMasterBase_TMaster__TEntity__PKType__o *v163; // [xsp+28h] [xbp-C8h]
  UnityEngine_GameObject_o *v164; // [xsp+30h] [xbp-C0h]
  ServantStatusListViewItem_o *v165; // [xsp+38h] [xbp-B8h]
  Il2CppObject *v166; // [xsp+40h] [xbp-B0h] BYREF
  Il2CppObject *entity; // [xsp+48h] [xbp-A8h] BYREF
  UnityEngine_Vector2_o v168; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v171; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v172; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v173; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v174; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v175; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v176; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v177; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v178; // 0:s2.4,4:s3.4,8:s4.4
  UnityEngine_Vector3_o v179; // 0:s5.4,4:s6.4,8:s7.4

  if ( (byte_5935CFD & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_QuestExtensionMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_QuestMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_UserQuestMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_QuestExtensionMaster__QuestExtensionEntity__int__TryGetEntity__);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_ServantStatusQuestBoardDraw___);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Add__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&ServantStatusListViewItemDrawServantQuest_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_21FFC50(&StringLiteral_12417/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_INTERLUDE"*/);
    sub_21FFC50(&StringLiteral_12419/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_RAINFORCEMENT"*/);
    sub_21FFC50(&StringLiteral_12420/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_SVT_COIN"*/);
    sub_21FFC50(&StringLiteral_12418/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_LIMIT_LIBERATION"*/);
    byte_5935CFD = 1;
  }
  isInit = this->fields.isInit;
  v166 = 0;
  entity = 0;
  if ( !isInit )
  {
    ServantStatusListViewItemDraw__SetItem((ServantStatusListViewItemDraw_o *)this, item, mode, 0);
    if ( item )
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
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v10, v11);
        svtCoinBase = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12417/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_INTERLUDE"*/, 0);
        if ( !explanationLabel )
          goto LABEL_171;
        UILabel__set_text(explanationLabel, (System_String_o *)svtCoinBase, 0);
        explanation2Label = this->fields.explanation2Label;
        svtCoinBase = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12419/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_RAINFORCEMENT"*/, 0);
        if ( !explanation2Label )
          goto LABEL_171;
        UILabel__set_text(explanation2Label, (System_String_o *)svtCoinBase, 0);
        if ( item->fields.svtEntity )
        {
          if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v14, v15);
          svtCoinBase = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_QuestMaster___);
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
                v18 = svtCoinBase;
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
                        v22 = localPosition.fields.x;
                        v23 = localPosition.fields.y;
                        z = localPosition.fields.z;
                        svtCoinBase = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(svtCoinBase, 0);
                        if ( svtCoinBase )
                        {
                          v171 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)svtCoinBase, 0);
                          svtCoinBase = this->fields.svtCoinBase;
                          if ( svtCoinBase )
                          {
                            v25 = v171.fields.y;
                            reinforcementPosition = v171.fields.z;
                            v159 = v171.fields.x;
                            svtCoinBase = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                                        svtCoinBase,
                                                                        0);
                            if ( svtCoinBase )
                            {
                              v172 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)svtCoinBase, 0);
                              v26 = v172.fields.y;
                              if ( item->fields.userSvtCollectionEntity )
                              {
                                if ( !v18 )
                                  goto LABEL_171;
                                klass = (int)v18[1].klass;
                              }
                              else
                              {
                                klass = 0;
                              }
                              svtCoinBase = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                              if ( svtCoinBase )
                              {
                                svtCoinBase = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                                            (DataManager_o *)svtCoinBase,
                                                                            (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
                                v164 = v18;
                                v165 = item;
                                if ( klass < 1 )
                                  goto LABEL_62;
                                if ( !v18 )
                                  goto LABEL_171;
                                v28 = (ServantLimitImageMaster_o *)svtCoinBase;
                                v29 = 0;
                                v30 = 0;
                                v31 = 0;
                                p_monitor = &v18[1].monitor;
                                v162 = (DataMasterBase_TMaster__TEntity__PKType__o *)svtCoinBase;
                                do
                                {
                                  if ( (unsigned int)v29 >= LODWORD(v18[1].klass) )
LABEL_172:
                                    sub_21FFED4(svtCoinBase);
                                  v33 = p_monitor[v29];
                                  svtCoinBase = (UnityEngine_GameObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
                                  if ( !v33 || !svtCoinBase )
                                    goto LABEL_171;
                                  svtCoinBase = (UnityEngine_GameObject_o *)QuestTree__GetQuestInfo(
                                                                              (QuestTree_o *)svtCoinBase,
                                                                              v33[4],
                                                                              0);
                                  if ( svtCoinBase
                                    && (v34 = (MapControl_QuestInfo_o *)svtCoinBase,
                                        svtCoinBase = (UnityEngine_GameObject_o *)MapControl_QuestInfo__GetQuestType(
                                                                                    (MapControl_QuestInfo_o *)svtCoinBase,
                                                                                    0),
                                        (_DWORD)svtCoinBase == 3) )
                                  {
                                    if ( !v28 )
                                      goto LABEL_171;
                                    if ( ServantLimitImageMaster__IsLimitCountSealQuest(v28, v33[4], 0) )
                                    {
                                      v37 = this->fields.explanationLabel;
                                      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v35, v36);
                                      svtCoinBase = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                                  (System_String_o *)StringLiteral_12418/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_LIMIT_LIBERATION"*/,
                                                                                  0);
                                      if ( !v37 )
                                        goto LABEL_171;
                                      UILabel__set_text(v37, (System_String_o *)svtCoinBase, 0);
                                    }
                                    svtCoinBase = ServantStatusListViewItemDrawServantQuest__CreateQuestBoardPrefab(
                                                    this,
                                                    this->fields.interludeQuestBase,
                                                    v36);
                                    if ( !svtCoinBase )
                                      goto LABEL_171;
                                    v38 = svtCoinBase;
                                    Component_object = UnityEngine_GameObject__GetComponent_object_(
                                                         svtCoinBase,
                                                         (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusQuestBoardDraw___);
                                    svtCoinBase = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                                                v38,
                                                                                0);
                                    v41 = ServantStatusListViewItemDrawServantQuest_TypeInfo;
                                    v42 = (UnityEngine_Transform_o *)svtCoinBase;
                                    if ( !*(&ServantStatusListViewItemDrawServantQuest_TypeInfo->_2.cctor_finished + 1) )
                                    {
                                      j_il2cpp_runtime_class_init_0(
                                        ServantStatusListViewItemDrawServantQuest_TypeInfo,
                                        v8,
                                        v40);
                                      v41 = ServantStatusListViewItemDrawServantQuest_TypeInfo;
                                    }
                                    if ( !v42 )
                                      goto LABEL_171;
                                    v173.fields.x = 0.0;
                                    v173.fields.z = 0.0;
                                    v43 = mHeight;
                                    v173.fields.y = (float)-(v41->static_fields->QuestBoardPitch * v30
                                                           + v41->static_fields->QuestBoardSize / 2);
                                    UnityEngine_Transform__set_localPosition(v42, v173, 0);
                                    inputMessageObject = this->fields.inputMessageObject;
                                    questBoardManager = this->fields.questBoardManager;
                                    svtCoinBase = (UnityEngine_GameObject_o *)ServantStatusListViewItem__get_LimitCount(
                                                                                item,
                                                                                0);
                                    if ( !Component_object )
                                      goto LABEL_171;
                                    ServantStatusQuestBoardDraw__SetItem(
                                      (ServantStatusQuestBoardDraw_o *)Component_object,
                                      v34,
                                      v31,
                                      inputMessageObject,
                                      questBoardManager,
                                      (int32_t)svtCoinBase,
                                      v46);
                                    svtCoinBase = (UnityEngine_GameObject_o *)this->fields.questBoardList;
                                    if ( !svtCoinBase )
                                      goto LABEL_171;
                                    m_CachedPtr = svtCoinBase->fields.m_CachedPtr;
                                    v18 = v164;
                                    v54 = Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Add__;
                                    ++HIDWORD(svtCoinBase[1].klass);
                                    if ( !m_CachedPtr )
                                      goto LABEL_171;
                                    klass_low = SLODWORD(svtCoinBase[1].klass);
                                    v56 = v43;
                                    v28 = (ServantLimitImageMaster_o *)v162;
                                    if ( (unsigned int)klass_low >= *(_DWORD *)(m_CachedPtr + 24) )
                                    {
                                      System_Collections_Generic_List_object___AddWithResize(
                                        (System_Collections_Generic_List_object__o *)svtCoinBase,
                                        Component_object,
                                        *(const MethodInfo_444FB2C **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
                                    }
                                    else
                                    {
                                      v57 = m_CachedPtr + 8 * klass_low;
                                      LODWORD(svtCoinBase[1].klass) = klass_low + 1;
                                      *(_QWORD *)(v57 + 32) = Component_object;
                                      sub_21FFBF4(
                                        (MissionNaviTransitionBoardItem_o *)(v57 + 32),
                                        (int32_t)Component_object,
                                        v47,
                                        v48,
                                        v49,
                                        v50,
                                        v51,
                                        v52);
                                    }
                                    ++v30;
                                    QuestBoardPitch = ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardPitch;
                                    v59 = (float)QuestBoardPitch;
                                    mHeight = QuestBoardPitch + v56;
                                    if ( QuestBoardPitch >= 0 )
                                      v60 = ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardPitch;
                                    else
                                      v60 = QuestBoardPitch + 1;
                                    y = y + v59;
                                    v25 = v25 - v59;
                                    v26 = v26 - v59;
                                    v23 = v23 + (float)(v60 >> 1);
                                  }
                                  else
                                  {
                                    v34 = v31;
                                  }
                                  ++v29;
                                  v31 = v34;
                                }
                                while ( klass != (_DWORD)v29 );
                                if ( !v30 )
                                {
LABEL_62:
                                  svtCoinBase = ServantStatusListViewItemDrawServantQuest__CreateQuestBoardPrefab(
                                                  this,
                                                  this->fields.interludeQuestBase,
                                                  v27);
                                  if ( !svtCoinBase )
                                    goto LABEL_171;
                                  v61 = svtCoinBase;
                                  svtCoinBase = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                                              svtCoinBase,
                                                                              0);
                                  v63 = (UnityEngine_Transform_o *)svtCoinBase;
                                  if ( !*(&ServantStatusListViewItemDrawServantQuest_TypeInfo->_2.cctor_finished + 1) )
                                    j_il2cpp_runtime_class_init_0(
                                      ServantStatusListViewItemDrawServantQuest_TypeInfo,
                                      v8,
                                      v62);
                                  if ( !v63 )
                                    goto LABEL_171;
                                  v174.fields.x = 0.0;
                                  v174.fields.z = 0.0;
                                  v174.fields.y = (float)(ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardSize
                                                        / -2);
                                  UnityEngine_Transform__set_localPosition(v63, v174, 0);
                                  svtCoinBase = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                              v61,
                                                                              (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusQuestBoardDraw___);
                                  if ( !svtCoinBase )
                                    goto LABEL_171;
                                  v64 = (Il2CppObject *)svtCoinBase;
                                  ServantStatusQuestBoardDraw__SetDark((ServantStatusQuestBoardDraw_o *)svtCoinBase, v8);
                                  svtCoinBase = (UnityEngine_GameObject_o *)this->fields.questBoardList;
                                  if ( !svtCoinBase )
                                    goto LABEL_171;
                                  v71 = svtCoinBase->fields.m_CachedPtr;
                                  v72 = Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Add__;
                                  ++HIDWORD(svtCoinBase[1].klass);
                                  if ( !v71 )
                                    goto LABEL_171;
                                  v73 = SLODWORD(svtCoinBase[1].klass);
                                  if ( (unsigned int)v73 >= *(_DWORD *)(v71 + 24) )
                                  {
                                    System_Collections_Generic_List_object___AddWithResize(
                                      (System_Collections_Generic_List_object__o *)svtCoinBase,
                                      v64,
                                      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v72[4] + 192LL) + 112LL));
                                  }
                                  else
                                  {
                                    v74 = v71 + 8 * v73;
                                    LODWORD(svtCoinBase[1].klass) = v73 + 1;
                                    *(_QWORD *)(v74 + 32) = v64;
                                    sub_21FFBF4(
                                      (MissionNaviTransitionBoardItem_o *)(v74 + 32),
                                      (int32_t)v64,
                                      v65,
                                      v66,
                                      v67,
                                      v68,
                                      v69,
                                      v70);
                                  }
                                  v75 = ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardPitch;
                                  v76 = (float)v75;
                                  mHeight += v75;
                                  if ( v75 >= 0 )
                                    v77 = ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardPitch;
                                  else
                                    v77 = v75 + 1;
                                  y = y + v76;
                                  v25 = v25 - v76;
                                  v26 = v26 - v76;
                                  v23 = v23 + (float)(v77 >> 1);
                                }
                                if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
                                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v8, v27);
                                svtCoinBase = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_QuestExtensionMaster___);
                                v163 = (DataMasterBase_TMaster__TEntity__PKType__o *)svtCoinBase;
                                if ( klass < 1 )
                                  goto LABEL_107;
                                if ( !v18 )
                                  goto LABEL_171;
                                v79 = 0;
                                v80 = 0;
                                v81 = 0;
                                v82 = &v18[1].monitor;
                                do
                                {
                                  if ( (unsigned int)v79 >= LODWORD(v18[1].klass) )
                                    goto LABEL_172;
                                  v83 = v82[v79];
                                  svtCoinBase = (UnityEngine_GameObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
                                  if ( !v83 || !svtCoinBase )
                                    goto LABEL_171;
                                  svtCoinBase = (UnityEngine_GameObject_o *)QuestTree__GetQuestInfo(
                                                                              (QuestTree_o *)svtCoinBase,
                                                                              v83[4],
                                                                              0);
                                  if ( !svtCoinBase )
                                    goto LABEL_86;
                                  v84 = (MapControl_QuestInfo_o *)svtCoinBase;
                                  svtCoinBase = (UnityEngine_GameObject_o *)MapControl_QuestInfo__GetQuestType(
                                                                              (MapControl_QuestInfo_o *)svtCoinBase,
                                                                              0);
                                  if ( (_DWORD)svtCoinBase == 3 )
                                    goto LABEL_86;
                                  svtCoinBase = (UnityEngine_GameObject_o *)v163;
                                  if ( !v163 )
                                    goto LABEL_171;
                                  if ( !DataMasterBase_object__object__int___TryGetEntity(
                                          v163,
                                          &entity,
                                          v83[4],
                                          (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_QuestExtensionMaster__QuestExtensionEntity__int__TryGetEntity__) )
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
                                    v84 = v81;
                                  }
                                  else
                                  {
LABEL_91:
                                    svtCoinBase = ServantStatusListViewItemDrawServantQuest__CreateQuestBoardPrefab(
                                                    this,
                                                    this->fields.rainforcementQuestBase,
                                                    v78);
                                    if ( !svtCoinBase )
                                      goto LABEL_171;
                                    v85 = svtCoinBase;
                                    v86 = UnityEngine_GameObject__GetComponent_object_(
                                            svtCoinBase,
                                            (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusQuestBoardDraw___);
                                    svtCoinBase = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                                                v85,
                                                                                0);
                                    v88 = (UnityEngine_Transform_o *)svtCoinBase;
                                    v89 = ServantStatusListViewItemDrawServantQuest_TypeInfo;
                                    if ( !*(&ServantStatusListViewItemDrawServantQuest_TypeInfo->_2.cctor_finished + 1) )
                                    {
                                      j_il2cpp_runtime_class_init_0(
                                        ServantStatusListViewItemDrawServantQuest_TypeInfo,
                                        v8,
                                        v87);
                                      v89 = ServantStatusListViewItemDrawServantQuest_TypeInfo;
                                    }
                                    if ( !v88 )
                                      goto LABEL_171;
                                    v175.fields.x = 0.0;
                                    v175.fields.z = 0.0;
                                    v90 = mHeight;
                                    v175.fields.y = (float)-(v89->static_fields->QuestBoardPitch * v80
                                                           + v89->static_fields->QuestBoardSize / 2);
                                    UnityEngine_Transform__set_localPosition(v88, v175, 0);
                                    v91 = this->fields.inputMessageObject;
                                    v92 = this->fields.questBoardManager;
                                    svtCoinBase = (UnityEngine_GameObject_o *)ServantStatusListViewItem__get_LimitCount(
                                                                                v165,
                                                                                0);
                                    if ( !v86 )
                                      goto LABEL_171;
                                    ServantStatusQuestBoardDraw__SetItem(
                                      (ServantStatusQuestBoardDraw_o *)v86,
                                      v84,
                                      v81,
                                      v91,
                                      v92,
                                      (int32_t)svtCoinBase,
                                      v93);
                                    svtCoinBase = (UnityEngine_GameObject_o *)this->fields.questBoardList;
                                    if ( !svtCoinBase )
                                      goto LABEL_171;
                                    v100 = svtCoinBase->fields.m_CachedPtr;
                                    v18 = v164;
                                    v101 = Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Add__;
                                    ++HIDWORD(svtCoinBase[1].klass);
                                    if ( !v100 )
                                      goto LABEL_171;
                                    v102 = SLODWORD(svtCoinBase[1].klass);
                                    if ( (unsigned int)v102 >= *(_DWORD *)(v100 + 24) )
                                    {
                                      System_Collections_Generic_List_object___AddWithResize(
                                        (System_Collections_Generic_List_object__o *)svtCoinBase,
                                        v86,
                                        *(const MethodInfo_444FB2C **)(*(_QWORD *)(v101[4] + 192LL) + 112LL));
                                    }
                                    else
                                    {
                                      v103 = v100 + 8 * v102;
                                      LODWORD(svtCoinBase[1].klass) = v102 + 1;
                                      *(_QWORD *)(v103 + 32) = v86;
                                      sub_21FFBF4(
                                        (MissionNaviTransitionBoardItem_o *)(v103 + 32),
                                        (int32_t)v86,
                                        v94,
                                        v95,
                                        v96,
                                        v97,
                                        v98,
                                        v99);
                                    }
                                    ++v80;
                                    v104 = ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardPitch;
                                    v105 = (float)v104;
                                    mHeight = v104 + v90;
                                    if ( v104 >= 0 )
                                      v106 = ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardPitch;
                                    else
                                      v106 = v104 + 1;
                                    y = y + v105;
                                    v26 = v26 - v105;
                                    v23 = v23 + (float)(v106 >> 1);
                                  }
                                  ++v79;
                                  v81 = v84;
                                }
                                while ( klass != (_DWORD)v79 );
                                item = v165;
                                if ( !v80 )
                                {
LABEL_107:
                                  svtCoinBase = ServantStatusListViewItemDrawServantQuest__CreateQuestBoardPrefab(
                                                  this,
                                                  this->fields.rainforcementQuestBase,
                                                  v78);
                                  if ( !svtCoinBase )
                                    goto LABEL_171;
                                  v107 = svtCoinBase;
                                  svtCoinBase = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                                              svtCoinBase,
                                                                              0);
                                  v109 = (UnityEngine_Transform_o *)svtCoinBase;
                                  if ( !*(&ServantStatusListViewItemDrawServantQuest_TypeInfo->_2.cctor_finished + 1) )
                                    j_il2cpp_runtime_class_init_0(
                                      ServantStatusListViewItemDrawServantQuest_TypeInfo,
                                      v8,
                                      v108);
                                  if ( !v109 )
                                    goto LABEL_171;
                                  v176.fields.x = 0.0;
                                  v176.fields.z = 0.0;
                                  v176.fields.y = (float)(ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardSize
                                                        / -2);
                                  UnityEngine_Transform__set_localPosition(v109, v176, 0);
                                  svtCoinBase = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                              v107,
                                                                              (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusQuestBoardDraw___);
                                  if ( !svtCoinBase )
                                    goto LABEL_171;
                                  v110 = (Il2CppObject *)svtCoinBase;
                                  ServantStatusQuestBoardDraw__SetDark((ServantStatusQuestBoardDraw_o *)svtCoinBase, v8);
                                  svtCoinBase = (UnityEngine_GameObject_o *)this->fields.questBoardList;
                                  if ( !svtCoinBase )
                                    goto LABEL_171;
                                  v117 = svtCoinBase->fields.m_CachedPtr;
                                  v118 = Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Add__;
                                  ++HIDWORD(svtCoinBase[1].klass);
                                  if ( !v117 )
                                    goto LABEL_171;
                                  v119 = SLODWORD(svtCoinBase[1].klass);
                                  if ( (unsigned int)v119 >= *(_DWORD *)(v117 + 24) )
                                  {
                                    System_Collections_Generic_List_object___AddWithResize(
                                      (System_Collections_Generic_List_object__o *)svtCoinBase,
                                      v110,
                                      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v118[4] + 192LL) + 112LL));
                                  }
                                  else
                                  {
                                    v120 = v117 + 8 * v119;
                                    LODWORD(svtCoinBase[1].klass) = v119 + 1;
                                    *(_QWORD *)(v120 + 32) = v110;
                                    sub_21FFBF4(
                                      (MissionNaviTransitionBoardItem_o *)(v120 + 32),
                                      (int32_t)v110,
                                      v111,
                                      v112,
                                      v113,
                                      v114,
                                      v115,
                                      v116);
                                  }
                                  v121 = ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardPitch;
                                  mHeight += v121;
                                  if ( v121 >= 0 )
                                    v122 = ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardPitch;
                                  else
                                    v122 = v121 + 1;
                                  y = y + (float)v121;
                                  v23 = v23 + (float)(v122 >> 1);
                                }
                                svtCoinBase = (UnityEngine_GameObject_o *)item->fields.svtEntity;
                                if ( svtCoinBase )
                                {
                                  if ( !ServantEntity__checkIsHeroineSvt((ServantEntity_o *)svtCoinBase, 0) )
                                  {
LABEL_170:
                                    v168.fields.x = x;
                                    v168.fields.y = y;
                                    v179.fields.z = reinforcementPosition;
                                    v178.fields.x = v22;
                                    v178.fields.y = v23;
                                    v179.fields.y = v25;
                                    v179.fields.x = v159;
                                    v178.fields.z = z;
                                    ServantStatusListViewItemDrawServantQuest__AdjustLayout(
                                      this,
                                      mHeight,
                                      v168,
                                      v178,
                                      v179,
                                      v124,
                                      v125);
                                    return;
                                  }
                                  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
                                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v123, *(_QWORD *)&v124.fields.x);
                                  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserQuestMaster___);
                                  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
                                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v8, v126);
                                  if ( !byte_5931D52 )
                                  {
                                    sub_21FFC50(&NetworkManager_TypeInfo);
                                    byte_5931D52 = 1;
                                  }
                                  svtCoinBase = (UnityEngine_GameObject_o *)NetworkManager_TypeInfo;
                                  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
                                  {
                                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v8, v126);
                                    svtCoinBase = (UnityEngine_GameObject_o *)NetworkManager_TypeInfo;
                                  }
                                  v128 = *(_QWORD *)(svtCoinBase[7].fields.m_CachedPtr + 64);
                                  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
                                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v8, v126);
                                  if ( Master_object )
                                  {
                                    svtCoinBase = (UnityEngine_GameObject_o *)UserQuestMaster__getClearCountsFromId(
                                                                                (UserQuestMaster_o *)Master_object,
                                                                                v128,
                                                                                BalanceConfig_TypeInfo->static_fields->SvtCoinQuestOpenQuestId,
                                                                                0);
                                    if ( (int)svtCoinBase < 1 || klass < 1 )
                                      goto LABEL_170;
                                    if ( v18 )
                                    {
                                      v160 = 0;
                                      v129 = 0;
                                      v130 = 0;
                                      v131 = &v18[1].monitor;
                                      do
                                      {
                                        if ( (unsigned int)v129 >= LODWORD(v18[1].klass) )
                                          goto LABEL_172;
                                        v132 = v131[v129];
                                        svtCoinBase = (UnityEngine_GameObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
                                        if ( !v132 || !svtCoinBase )
                                          goto LABEL_171;
                                        svtCoinBase = (UnityEngine_GameObject_o *)QuestTree__GetQuestInfo(
                                                                                    (QuestTree_o *)svtCoinBase,
                                                                                    v132[4],
                                                                                    0);
                                        if ( !svtCoinBase )
                                          goto LABEL_155;
                                        v133 = (MapControl_QuestInfo_o *)svtCoinBase;
                                        svtCoinBase = (UnityEngine_GameObject_o *)v163;
                                        if ( !v163 )
                                          goto LABEL_171;
                                        svtCoinBase = (UnityEngine_GameObject_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                                    v163,
                                                                                    &v166,
                                                                                    v132[4],
                                                                                    (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_QuestExtensionMaster__QuestExtensionEntity__int__TryGetEntity__);
                                        if ( ((unsigned __int8)svtCoinBase & 1) == 0 )
                                          goto LABEL_155;
                                        svtCoinBase = (UnityEngine_GameObject_o *)v166;
                                        if ( !v166 )
                                          goto LABEL_171;
                                        svtCoinBase = (UnityEngine_GameObject_o *)QuestExtensionEntity__IsSvtCoinQuest(
                                                                                    (QuestExtensionEntity_o *)v166,
                                                                                    0);
                                        if ( ((unsigned __int8)svtCoinBase & 1) != 0 )
                                        {
                                          svtCoinBase = ServantStatusListViewItemDrawServantQuest__CreateQuestBoardPrefab(
                                                          this,
                                                          this->fields.svtCoinQuestBase,
                                                          *(const MethodInfo **)&v124.fields.x);
                                          if ( !svtCoinBase )
                                            goto LABEL_171;
                                          v134 = svtCoinBase;
                                          v135 = UnityEngine_GameObject__GetComponent_object_(
                                                   svtCoinBase,
                                                   (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusQuestBoardDraw___);
                                          svtCoinBase = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                                                      v134,
                                                                                      0);
                                          v137 = (UnityEngine_Transform_o *)svtCoinBase;
                                          v138 = ServantStatusListViewItemDrawServantQuest_TypeInfo;
                                          if ( !*(&ServantStatusListViewItemDrawServantQuest_TypeInfo->_2.cctor_finished
                                                + 1) )
                                          {
                                            j_il2cpp_runtime_class_init_0(
                                              ServantStatusListViewItemDrawServantQuest_TypeInfo,
                                              v8,
                                              v136);
                                            v138 = ServantStatusListViewItemDrawServantQuest_TypeInfo;
                                          }
                                          if ( !v137 )
                                            goto LABEL_171;
                                          v177.fields.x = 0.0;
                                          v177.fields.z = 0.0;
                                          v139 = mHeight;
                                          v177.fields.y = (float)-(v138->static_fields->QuestBoardPitch * v160
                                                                 + v138->static_fields->QuestBoardSize / 2);
                                          UnityEngine_Transform__set_localPosition(v137, v177, 0);
                                          v140 = this->fields.inputMessageObject;
                                          v141 = this->fields.questBoardManager;
                                          svtCoinBase = (UnityEngine_GameObject_o *)ServantStatusListViewItem__get_LimitCount(
                                                                                      v165,
                                                                                      0);
                                          if ( !v135 )
                                            goto LABEL_171;
                                          ServantStatusQuestBoardDraw__SetItem(
                                            (ServantStatusQuestBoardDraw_o *)v135,
                                            v133,
                                            v130,
                                            v140,
                                            v141,
                                            (int32_t)svtCoinBase,
                                            v142);
                                          svtCoinBase = (UnityEngine_GameObject_o *)this->fields.questBoardList;
                                          if ( !svtCoinBase )
                                            goto LABEL_171;
                                          v149 = svtCoinBase->fields.m_CachedPtr;
                                          v18 = v164;
                                          v150 = Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Add__;
                                          ++HIDWORD(svtCoinBase[1].klass);
                                          if ( !v149 )
                                            goto LABEL_171;
                                          v151 = SLODWORD(svtCoinBase[1].klass);
                                          if ( (unsigned int)v151 >= *(_DWORD *)(v149 + 24) )
                                          {
                                            System_Collections_Generic_List_object___AddWithResize(
                                              (System_Collections_Generic_List_object__o *)svtCoinBase,
                                              v135,
                                              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v150[4] + 192LL) + 112LL));
                                          }
                                          else
                                          {
                                            v152 = v149 + 8 * v151;
                                            LODWORD(svtCoinBase[1].klass) = v151 + 1;
                                            *(_QWORD *)(v152 + 32) = v135;
                                            sub_21FFBF4(
                                              (MissionNaviTransitionBoardItem_o *)(v152 + 32),
                                              (int32_t)v135,
                                              v143,
                                              v144,
                                              v145,
                                              v146,
                                              v147,
                                              v148);
                                          }
                                          v153 = ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardPitch;
                                          mHeight = v153 + v139;
                                          if ( v153 >= 0 )
                                            v154 = ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardPitch;
                                          else
                                            v154 = v153 + 1;
                                          y = y + (float)v153;
                                          ++v160;
                                          v23 = v23 + (float)(v154 >> 1);
                                        }
                                        else
                                        {
LABEL_155:
                                          v133 = v130;
                                        }
                                        ++v129;
                                        v130 = v133;
                                      }
                                      while ( klass != (_DWORD)v129 );
                                      if ( v160 < 1 )
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
                                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v155, v156);
                                          svtCoinBase = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                                      (System_String_o *)StringLiteral_12420/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_SVT_COIN"*/,
                                                                                      0);
                                          if ( svtCoinExplanationLabel )
                                          {
                                            UILabel__set_text(
                                              svtCoinExplanationLabel,
                                              (System_String_o *)svtCoinBase,
                                              0);
                                            mHeight += 38;
                                            v23 = v23 + 19.0;
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
          sub_21FFECC(svtCoinBase, v8);
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
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_5935CFF & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__GetEnumerator__);
    byte_5935CFF = 1;
  }
  questBoardManager = this->fields.questBoardManager;
  memset(&v8, 0, sizeof(v8));
  if ( questBoardManager )
  {
    if ( ServantStatusQuestBoardManager__UpdateAlphaAnim(questBoardManager, method) )
      ServantStatusListViewItemDrawServantQuest__OnChangeAlphaAnim(this, v4);
    questBoardList = this->fields.questBoardList;
    if ( !questBoardList )
      sub_21FFECC(0, v4);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v8,
      (System_Collections_Generic_List_object__o *)questBoardList,
      (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v8,
              (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__MoveNext__) )
    {
      if ( !v8.fields._current )
        sub_21FFECC(0, v6);
      ServantStatusQuestBoardDraw__UpdateItem(
        (ServantStatusQuestBoardDraw_o *)v8.fields._current,
        this->fields.questBoardManager,
        v7);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v8,
      (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__Dispose__);
  }
}