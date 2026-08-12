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
  UnityEngine_Vector3_o v19; // 0:kr00_12.12
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
  v20.fields.z = 0.0;
  v20.fields.x = x;
  v20.fields.y = v16;
  UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)baseSprite, v20, 0);
  baseSprite = (UIWidget_o *)this->fields.titleBase;
  if ( !baseSprite )
    goto LABEL_10;
  baseSprite = (UIWidget_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)baseSprite, 0);
  if ( !baseSprite )
    goto LABEL_10;
  v21.fields.x = v15;
  v21.fields.y = v14;
  v21.fields.z = v13;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)baseSprite, v21, 0);
  baseSprite = (UIWidget_o *)this->fields.rainforcementBase;
  if ( !baseSprite
    || (baseSprite = (UIWidget_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)baseSprite, 0)) == 0
    || (v22.fields.x = v12,
        v22.fields.y = y,
        v22.fields.z = z,
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)baseSprite, v22, 0),
        (baseSprite = (UIWidget_o *)this->fields.svtCoinBase) == 0)
    || (baseSprite = (UIWidget_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)baseSprite, 0)) == 0 )
  {
LABEL_10:
    sub_2213CDC(baseSprite, *(_QWORD *)&baseHeight);
  }
  *(_QWORD *)&v19.fields.x = v17;
  v19.fields.z = v18;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)baseSprite, v19, 0);
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
  float v19; // s9
  float y; // s10
  float v21; // s13
  float v22; // s11
  const MethodInfo *v23; // x2
  ServantLimitImageMaster_o *v24; // x23
  __int64 v25; // x20
  int v26; // w29
  MapControl_QuestInfo_o *v27; // x25
  void **p_monitor; // x21
  _DWORD *v29; // x26
  MapControl_QuestInfo_o *v30; // x24
  __int64 v31; // x1
  const MethodInfo *v32; // x2
  UILabel_o *v33; // x26
  UnityEngine_GameObject_o *v34; // x27
  Il2CppObject *Component_object; // x26
  __int64 v36; // x2
  ServantStatusListViewItemDrawServantQuest_c *v37; // x8
  UnityEngine_Transform_o *v38; // x27
  int32_t v39; // w23
  UnityEngine_GameObject_o *inputMessageObject; // x27
  ServantStatusQuestBoardManager_o *questBoardManager; // x28
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  intptr_t m_CachedPtr; // x8
  _QWORD *v49; // x9
  __int64 klass_low; // x10
  int32_t v51; // w28
  intptr_t v52; // x8
  int32_t QuestBoardPitch; // w8
  float v54; // s0
  int32_t v55; // w9
  UnityEngine_GameObject_o *v56; // x23
  __int64 v57; // x2
  UnityEngine_Transform_o *v58; // x24
  Il2CppObject *v59; // x23
  System_String_o *v60; // x2
  System_String_o *v61; // x3
  int32_t v62; // w4
  int32_t v63; // w5
  bool v64; // w6
  bool v65; // w7
  intptr_t v66; // x8
  _QWORD *v67; // x9
  __int64 v68; // x10
  intptr_t v69; // x8
  int32_t v70; // w8
  float v71; // s0
  int32_t v72; // w9
  const MethodInfo *v73; // x2
  __int64 v74; // x21
  int v75; // w20
  MapControl_QuestInfo_o *v76; // x25
  void **v77; // x29
  _DWORD *v78; // x26
  MapControl_QuestInfo_o *v79; // x24
  UnityEngine_GameObject_o *v80; // x27
  Il2CppObject *v81; // x26
  __int64 v82; // x2
  UnityEngine_Transform_o *v83; // x27
  ServantStatusListViewItemDrawServantQuest_c *v84; // x8
  int32_t v85; // w22
  UnityEngine_GameObject_o *v86; // x27
  ServantStatusQuestBoardManager_o *v87; // x28
  System_String_o *v88; // x2
  System_String_o *v89; // x3
  int32_t v90; // w4
  int32_t v91; // w5
  bool v92; // w6
  bool v93; // w7
  intptr_t v94; // x8
  _QWORD *v95; // x9
  __int64 v96; // x10
  intptr_t v97; // x8
  int32_t v98; // w8
  float v99; // s0
  int32_t v100; // w9
  UnityEngine_GameObject_o *v101; // x24
  __int64 v102; // x2
  UnityEngine_Transform_o *v103; // x25
  Il2CppObject *v104; // x24
  System_String_o *v105; // x2
  System_String_o *v106; // x3
  int32_t v107; // w4
  int32_t v108; // w5
  bool v109; // w6
  bool v110; // w7
  intptr_t v111; // x8
  _QWORD *v112; // x9
  __int64 v113; // x10
  intptr_t v114; // x8
  int32_t v115; // w8
  int32_t v116; // w9
  __int64 v117; // x1
  const MethodInfo *v119; // x4
  __int64 v120; // x2
  Il2CppObject *Master_object; // x24
  int64_t v122; // x25
  __int64 v123; // x21
  MapControl_QuestInfo_o *v124; // x25
  void **v125; // x29
  _DWORD *v126; // x26
  MapControl_QuestInfo_o *v127; // x24
  UnityEngine_GameObject_o *v128; // x27
  Il2CppObject *v129; // x26
  __int64 v130; // x2
  UnityEngine_Transform_o *v131; // x27
  ServantStatusListViewItemDrawServantQuest_c *v132; // x8
  int32_t v133; // w20
  UnityEngine_GameObject_o *v134; // x27
  ServantStatusQuestBoardManager_o *v135; // x28
  System_String_o *v136; // x2
  System_String_o *v137; // x3
  int32_t v138; // w4
  int32_t v139; // w5
  bool v140; // w6
  bool v141; // w7
  intptr_t v142; // x8
  _QWORD *v143; // x9
  __int64 v144; // x10
  intptr_t v145; // x8
  int32_t v146; // w8
  int32_t v147; // w9
  __int64 v148; // x1
  __int64 v149; // x2
  UILabel_o *svtCoinExplanationLabel; // x20
  unsigned __int64 size; // kr00_8
  int v152; // [xsp+20h] [xbp-D0h]
  int klass; // [xsp+24h] [xbp-CCh]
  DataMasterBase_TMaster__TEntity__PKType__o *v154; // [xsp+28h] [xbp-C8h]
  DataMasterBase_TMaster__TEntity__PKType__o *v155; // [xsp+28h] [xbp-C8h]
  UnityEngine_GameObject_o *v156; // [xsp+30h] [xbp-C0h]
  ServantStatusListViewItem_o *v157; // [xsp+38h] [xbp-B8h]
  Il2CppObject *v158; // [xsp+40h] [xbp-B0h] BYREF
  Il2CppObject *entity; // [xsp+48h] [xbp-A8h] BYREF
  UnityEngine_Vector3_o v160; // 0:x2.12
  UnityEngine_Vector3_o localPosition; // 0:kr14_12.12
  UnityEngine_Vector3_o v162; // 0:kr20_12.12
  UnityEngine_Vector2_o v163; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v164; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v165; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v166; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v167; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v168; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v169; // 0:s2.4,4:s3.4,8:s4.4
  UnityEngine_Vector3_o v170; // 0:s5.4,4:s6.4,8:s7.4

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
  v158 = 0;
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
                  size = (unsigned __int64)UnityEngine_BoxCollider__get_size(
                                             (UnityEngine_BoxCollider_o *)svtCoinBase,
                                             0);
                  svtCoinBase = this->fields.titleBase;
                  if ( svtCoinBase )
                  {
                    v19 = *((float *)&size + 1);
                    svtCoinBase = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(svtCoinBase, 0);
                    if ( svtCoinBase )
                    {
                      localPosition = UnityEngine_Transform__get_localPosition(
                                        (UnityEngine_Transform_o *)svtCoinBase,
                                        0);
                      svtCoinBase = this->fields.rainforcementBase;
                      if ( svtCoinBase )
                      {
                        y = localPosition.fields.y;
                        svtCoinBase = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(svtCoinBase, 0);
                        if ( svtCoinBase )
                        {
                          v162 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)svtCoinBase, 0);
                          svtCoinBase = this->fields.svtCoinBase;
                          if ( svtCoinBase )
                          {
                            v21 = v162.fields.y;
                            svtCoinBase = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                                        svtCoinBase,
                                                                        0);
                            if ( svtCoinBase )
                            {
                              v22 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)svtCoinBase, 0).fields.y;
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
                                v156 = v17;
                                v157 = v5;
                                if ( klass < 1 )
                                  goto LABEL_62;
                                if ( !v17 )
                                  goto LABEL_171;
                                v24 = (ServantLimitImageMaster_o *)svtCoinBase;
                                v25 = 0;
                                v26 = 0;
                                v27 = 0;
                                p_monitor = &v17[1].monitor;
                                v154 = (DataMasterBase_TMaster__TEntity__PKType__o *)svtCoinBase;
                                do
                                {
                                  if ( (unsigned int)v25 >= LODWORD(v17[1].klass) )
LABEL_172:
                                    sub_2213CE4(svtCoinBase);
                                  v29 = p_monitor[v25];
                                  svtCoinBase = (UnityEngine_GameObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_QuestTree__get_Instance__);
                                  if ( !v29 || !svtCoinBase )
                                    goto LABEL_171;
                                  svtCoinBase = (UnityEngine_GameObject_o *)QuestTree__GetQuestInfo(
                                                                              (QuestTree_o *)svtCoinBase,
                                                                              v29[4],
                                                                              0);
                                  if ( svtCoinBase
                                    && (v30 = (MapControl_QuestInfo_o *)svtCoinBase,
                                        svtCoinBase = (UnityEngine_GameObject_o *)MapControl_QuestInfo__GetQuestType(
                                                                                    (MapControl_QuestInfo_o *)svtCoinBase,
                                                                                    0),
                                        (_DWORD)svtCoinBase == 3) )
                                  {
                                    if ( !v24 )
                                      goto LABEL_171;
                                    if ( ServantLimitImageMaster__IsLimitCountSealQuest(v24, v29[4], 0) )
                                    {
                                      v33 = this->fields.explanationLabel;
                                      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v31, v32);
                                      svtCoinBase = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                                  (System_String_o *)StringLiteral_12441/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_LIMIT_LIBERATION"*/,
                                                                                  0);
                                      if ( !v33 )
                                        goto LABEL_171;
                                      UILabel__set_text(v33, (System_String_o *)svtCoinBase, 0);
                                    }
                                    svtCoinBase = ServantStatusListViewItemDrawServantQuest__CreateQuestBoardPrefab(
                                                    this,
                                                    this->fields.interludeQuestBase,
                                                    v32);
                                    if ( !svtCoinBase )
                                      goto LABEL_171;
                                    v34 = svtCoinBase;
                                    Component_object = UnityEngine_GameObject__GetComponent_object_(
                                                         svtCoinBase,
                                                         (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusQuestBoardDraw___);
                                    svtCoinBase = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                                                v34,
                                                                                0);
                                    v37 = ServantStatusListViewItemDrawServantQuest_TypeInfo;
                                    v38 = (UnityEngine_Transform_o *)svtCoinBase;
                                    if ( !*(&ServantStatusListViewItemDrawServantQuest_TypeInfo->_2.cctor_finished + 1) )
                                    {
                                      j_il2cpp_runtime_class_init_0(
                                        ServantStatusListViewItemDrawServantQuest_TypeInfo,
                                        item,
                                        v36);
                                      v37 = ServantStatusListViewItemDrawServantQuest_TypeInfo;
                                    }
                                    if ( !v38 )
                                      goto LABEL_171;
                                    v164.fields.x = 0.0;
                                    v164.fields.z = 0.0;
                                    v39 = mHeight;
                                    v164.fields.y = (float)-(v37->static_fields->QuestBoardPitch * v26
                                                           + v37->static_fields->QuestBoardSize / 2);
                                    UnityEngine_Transform__set_localPosition(v38, v164, 0);
                                    inputMessageObject = this->fields.inputMessageObject;
                                    questBoardManager = this->fields.questBoardManager;
                                    svtCoinBase = (UnityEngine_GameObject_o *)ServantStatusListViewItem__get_LimitCount(
                                                                                v5,
                                                                                0);
                                    if ( !Component_object )
                                      goto LABEL_171;
                                    ServantStatusQuestBoardDraw__SetItem(
                                      (ServantStatusQuestBoardDraw_o *)Component_object,
                                      v30,
                                      v27,
                                      inputMessageObject,
                                      questBoardManager,
                                      (int32_t)svtCoinBase,
                                      0);
                                    svtCoinBase = (UnityEngine_GameObject_o *)this->fields.questBoardList;
                                    if ( !svtCoinBase )
                                      goto LABEL_171;
                                    m_CachedPtr = svtCoinBase->fields.m_CachedPtr;
                                    v17 = v156;
                                    v49 = Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Add__;
                                    ++HIDWORD(svtCoinBase[1].klass);
                                    if ( !m_CachedPtr )
                                      goto LABEL_171;
                                    klass_low = SLODWORD(svtCoinBase[1].klass);
                                    v51 = v39;
                                    v24 = (ServantLimitImageMaster_o *)v154;
                                    if ( (unsigned int)klass_low >= *(_DWORD *)(m_CachedPtr + 24) )
                                    {
                                      System_Collections_Generic_List_object___AddWithResize(
                                        (System_Collections_Generic_List_object__o *)svtCoinBase,
                                        Component_object,
                                        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
                                    }
                                    else
                                    {
                                      v52 = m_CachedPtr + 8 * klass_low;
                                      LODWORD(svtCoinBase[1].klass) = klass_low + 1;
                                      *(_QWORD *)(v52 + 32) = Component_object;
                                      sub_2213A04(
                                        (MissionNaviTransitionBoardItem_o *)(v52 + 32),
                                        (int32_t)Component_object,
                                        v42,
                                        v43,
                                        v44,
                                        v45,
                                        v46,
                                        v47);
                                    }
                                    ++v26;
                                    QuestBoardPitch = ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardPitch;
                                    v54 = (float)QuestBoardPitch;
                                    mHeight = QuestBoardPitch + v51;
                                    if ( QuestBoardPitch >= 0 )
                                      v55 = ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardPitch;
                                    else
                                      v55 = QuestBoardPitch + 1;
                                    v19 = v19 + v54;
                                    v21 = v21 - v54;
                                    v22 = v22 - v54;
                                    y = y + (float)(v55 >> 1);
                                  }
                                  else
                                  {
                                    v30 = v27;
                                  }
                                  ++v25;
                                  v27 = v30;
                                }
                                while ( klass != (_DWORD)v25 );
                                if ( !v26 )
                                {
LABEL_62:
                                  svtCoinBase = ServantStatusListViewItemDrawServantQuest__CreateQuestBoardPrefab(
                                                  this,
                                                  this->fields.interludeQuestBase,
                                                  v23);
                                  if ( !svtCoinBase )
                                    goto LABEL_171;
                                  v56 = svtCoinBase;
                                  svtCoinBase = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                                              svtCoinBase,
                                                                              0);
                                  v58 = (UnityEngine_Transform_o *)svtCoinBase;
                                  if ( !*(&ServantStatusListViewItemDrawServantQuest_TypeInfo->_2.cctor_finished + 1) )
                                    j_il2cpp_runtime_class_init_0(
                                      ServantStatusListViewItemDrawServantQuest_TypeInfo,
                                      item,
                                      v57);
                                  if ( !v58 )
                                    goto LABEL_171;
                                  v165.fields.x = 0.0;
                                  v165.fields.z = 0.0;
                                  v165.fields.y = (float)(ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardSize
                                                        / -2);
                                  UnityEngine_Transform__set_localPosition(v58, v165, 0);
                                  svtCoinBase = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                              v56,
                                                                              (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusQuestBoardDraw___);
                                  if ( !svtCoinBase )
                                    goto LABEL_171;
                                  v59 = (Il2CppObject *)svtCoinBase;
                                  ServantStatusQuestBoardDraw__SetDark((ServantStatusQuestBoardDraw_o *)svtCoinBase, 0);
                                  svtCoinBase = (UnityEngine_GameObject_o *)this->fields.questBoardList;
                                  if ( !svtCoinBase )
                                    goto LABEL_171;
                                  v66 = svtCoinBase->fields.m_CachedPtr;
                                  v67 = Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Add__;
                                  ++HIDWORD(svtCoinBase[1].klass);
                                  if ( !v66 )
                                    goto LABEL_171;
                                  v68 = SLODWORD(svtCoinBase[1].klass);
                                  if ( (unsigned int)v68 >= *(_DWORD *)(v66 + 24) )
                                  {
                                    System_Collections_Generic_List_object___AddWithResize(
                                      (System_Collections_Generic_List_object__o *)svtCoinBase,
                                      v59,
                                      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
                                  }
                                  else
                                  {
                                    v69 = v66 + 8 * v68;
                                    LODWORD(svtCoinBase[1].klass) = v68 + 1;
                                    *(_QWORD *)(v69 + 32) = v59;
                                    sub_2213A04(
                                      (MissionNaviTransitionBoardItem_o *)(v69 + 32),
                                      (int32_t)v59,
                                      v60,
                                      v61,
                                      v62,
                                      v63,
                                      v64,
                                      v65);
                                  }
                                  v70 = ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardPitch;
                                  v71 = (float)v70;
                                  mHeight += v70;
                                  if ( v70 >= 0 )
                                    v72 = ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardPitch;
                                  else
                                    v72 = v70 + 1;
                                  v19 = v19 + v71;
                                  v21 = v21 - v71;
                                  v22 = v22 - v71;
                                  y = y + (float)(v72 >> 1);
                                }
                                if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
                                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, item, v23);
                                svtCoinBase = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_QuestExtensionMaster___);
                                v155 = (DataMasterBase_TMaster__TEntity__PKType__o *)svtCoinBase;
                                if ( klass < 1 )
                                  goto LABEL_107;
                                if ( !v17 )
                                  goto LABEL_171;
                                v74 = 0;
                                v75 = 0;
                                v76 = 0;
                                v77 = &v17[1].monitor;
                                do
                                {
                                  if ( (unsigned int)v74 >= LODWORD(v17[1].klass) )
                                    goto LABEL_172;
                                  v78 = v77[v74];
                                  svtCoinBase = (UnityEngine_GameObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_QuestTree__get_Instance__);
                                  if ( !v78 || !svtCoinBase )
                                    goto LABEL_171;
                                  svtCoinBase = (UnityEngine_GameObject_o *)QuestTree__GetQuestInfo(
                                                                              (QuestTree_o *)svtCoinBase,
                                                                              v78[4],
                                                                              0);
                                  if ( !svtCoinBase )
                                    goto LABEL_86;
                                  v79 = (MapControl_QuestInfo_o *)svtCoinBase;
                                  svtCoinBase = (UnityEngine_GameObject_o *)MapControl_QuestInfo__GetQuestType(
                                                                              (MapControl_QuestInfo_o *)svtCoinBase,
                                                                              0);
                                  if ( (_DWORD)svtCoinBase == 3 )
                                    goto LABEL_86;
                                  svtCoinBase = (UnityEngine_GameObject_o *)v155;
                                  if ( !v155 )
                                    goto LABEL_171;
                                  if ( !DataMasterBase_object__object__int___TryGetEntity(
                                          v155,
                                          &entity,
                                          v78[4],
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
                                    v79 = v76;
                                  }
                                  else
                                  {
LABEL_91:
                                    svtCoinBase = ServantStatusListViewItemDrawServantQuest__CreateQuestBoardPrefab(
                                                    this,
                                                    this->fields.rainforcementQuestBase,
                                                    v73);
                                    if ( !svtCoinBase )
                                      goto LABEL_171;
                                    v80 = svtCoinBase;
                                    v81 = UnityEngine_GameObject__GetComponent_object_(
                                            svtCoinBase,
                                            (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusQuestBoardDraw___);
                                    svtCoinBase = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                                                v80,
                                                                                0);
                                    v83 = (UnityEngine_Transform_o *)svtCoinBase;
                                    v84 = ServantStatusListViewItemDrawServantQuest_TypeInfo;
                                    if ( !*(&ServantStatusListViewItemDrawServantQuest_TypeInfo->_2.cctor_finished + 1) )
                                    {
                                      j_il2cpp_runtime_class_init_0(
                                        ServantStatusListViewItemDrawServantQuest_TypeInfo,
                                        item,
                                        v82);
                                      v84 = ServantStatusListViewItemDrawServantQuest_TypeInfo;
                                    }
                                    if ( !v83 )
                                      goto LABEL_171;
                                    v166.fields.x = 0.0;
                                    v166.fields.z = 0.0;
                                    v85 = mHeight;
                                    v166.fields.y = (float)-(v84->static_fields->QuestBoardPitch * v75
                                                           + v84->static_fields->QuestBoardSize / 2);
                                    UnityEngine_Transform__set_localPosition(v83, v166, 0);
                                    v86 = this->fields.inputMessageObject;
                                    v87 = this->fields.questBoardManager;
                                    svtCoinBase = (UnityEngine_GameObject_o *)ServantStatusListViewItem__get_LimitCount(
                                                                                v157,
                                                                                0);
                                    if ( !v81 )
                                      goto LABEL_171;
                                    ServantStatusQuestBoardDraw__SetItem(
                                      (ServantStatusQuestBoardDraw_o *)v81,
                                      v79,
                                      v76,
                                      v86,
                                      v87,
                                      (int32_t)svtCoinBase,
                                      0);
                                    svtCoinBase = (UnityEngine_GameObject_o *)this->fields.questBoardList;
                                    if ( !svtCoinBase )
                                      goto LABEL_171;
                                    v94 = svtCoinBase->fields.m_CachedPtr;
                                    v17 = v156;
                                    v95 = Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Add__;
                                    ++HIDWORD(svtCoinBase[1].klass);
                                    if ( !v94 )
                                      goto LABEL_171;
                                    v96 = SLODWORD(svtCoinBase[1].klass);
                                    if ( (unsigned int)v96 >= *(_DWORD *)(v94 + 24) )
                                    {
                                      System_Collections_Generic_List_object___AddWithResize(
                                        (System_Collections_Generic_List_object__o *)svtCoinBase,
                                        v81,
                                        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v95[4] + 192LL) + 112LL));
                                    }
                                    else
                                    {
                                      v97 = v94 + 8 * v96;
                                      LODWORD(svtCoinBase[1].klass) = v96 + 1;
                                      *(_QWORD *)(v97 + 32) = v81;
                                      sub_2213A04(
                                        (MissionNaviTransitionBoardItem_o *)(v97 + 32),
                                        (int32_t)v81,
                                        v88,
                                        v89,
                                        v90,
                                        v91,
                                        v92,
                                        v93);
                                    }
                                    ++v75;
                                    v98 = ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardPitch;
                                    v99 = (float)v98;
                                    mHeight = v98 + v85;
                                    if ( v98 >= 0 )
                                      v100 = ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardPitch;
                                    else
                                      v100 = v98 + 1;
                                    v19 = v19 + v99;
                                    v22 = v22 - v99;
                                    y = y + (float)(v100 >> 1);
                                  }
                                  ++v74;
                                  v76 = v79;
                                }
                                while ( klass != (_DWORD)v74 );
                                v5 = v157;
                                if ( !v75 )
                                {
LABEL_107:
                                  svtCoinBase = ServantStatusListViewItemDrawServantQuest__CreateQuestBoardPrefab(
                                                  this,
                                                  this->fields.rainforcementQuestBase,
                                                  v73);
                                  if ( !svtCoinBase )
                                    goto LABEL_171;
                                  v101 = svtCoinBase;
                                  svtCoinBase = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                                              svtCoinBase,
                                                                              0);
                                  v103 = (UnityEngine_Transform_o *)svtCoinBase;
                                  if ( !*(&ServantStatusListViewItemDrawServantQuest_TypeInfo->_2.cctor_finished + 1) )
                                    j_il2cpp_runtime_class_init_0(
                                      ServantStatusListViewItemDrawServantQuest_TypeInfo,
                                      item,
                                      v102);
                                  if ( !v103 )
                                    goto LABEL_171;
                                  v167.fields.x = 0.0;
                                  v167.fields.z = 0.0;
                                  v167.fields.y = (float)(ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardSize
                                                        / -2);
                                  UnityEngine_Transform__set_localPosition(v103, v167, 0);
                                  svtCoinBase = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                              v101,
                                                                              (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusQuestBoardDraw___);
                                  if ( !svtCoinBase )
                                    goto LABEL_171;
                                  v104 = (Il2CppObject *)svtCoinBase;
                                  ServantStatusQuestBoardDraw__SetDark((ServantStatusQuestBoardDraw_o *)svtCoinBase, 0);
                                  svtCoinBase = (UnityEngine_GameObject_o *)this->fields.questBoardList;
                                  if ( !svtCoinBase )
                                    goto LABEL_171;
                                  v111 = svtCoinBase->fields.m_CachedPtr;
                                  v112 = Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Add__;
                                  ++HIDWORD(svtCoinBase[1].klass);
                                  if ( !v111 )
                                    goto LABEL_171;
                                  v113 = SLODWORD(svtCoinBase[1].klass);
                                  if ( (unsigned int)v113 >= *(_DWORD *)(v111 + 24) )
                                  {
                                    System_Collections_Generic_List_object___AddWithResize(
                                      (System_Collections_Generic_List_object__o *)svtCoinBase,
                                      v104,
                                      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v112[4] + 192LL) + 112LL));
                                  }
                                  else
                                  {
                                    v114 = v111 + 8 * v113;
                                    LODWORD(svtCoinBase[1].klass) = v113 + 1;
                                    *(_QWORD *)(v114 + 32) = v104;
                                    sub_2213A04(
                                      (MissionNaviTransitionBoardItem_o *)(v114 + 32),
                                      (int32_t)v104,
                                      v105,
                                      v106,
                                      v107,
                                      v108,
                                      v109,
                                      v110);
                                  }
                                  v115 = ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardPitch;
                                  mHeight += v115;
                                  if ( v115 >= 0 )
                                    v116 = ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardPitch;
                                  else
                                    v116 = v115 + 1;
                                  v19 = v19 + (float)v115;
                                  y = y + (float)(v116 >> 1);
                                }
                                svtCoinBase = (UnityEngine_GameObject_o *)v5->fields.svtEntity;
                                if ( svtCoinBase )
                                {
                                  if ( !ServantEntity__checkIsHeroineSvt((ServantEntity_o *)svtCoinBase, 0) )
                                  {
LABEL_170:
                                    LODWORD(v163.fields.x) = size;
                                    v163.fields.y = v19;
                                    v170.fields.z = v162.fields.z;
                                    v169.fields.x = localPosition.fields.x;
                                    v169.fields.y = y;
                                    v170.fields.y = v21;
                                    v170.fields.x = v162.fields.x;
                                    v169.fields.z = localPosition.fields.z;
                                    ServantStatusListViewItemDrawServantQuest__AdjustLayout(
                                      this,
                                      mHeight,
                                      v163,
                                      v169,
                                      v170,
                                      v160,
                                      v119);
                                    return;
                                  }
                                  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
                                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v117, *(_QWORD *)&v160.fields.x);
                                  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserQuestMaster___);
                                  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
                                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, item, v120);
                                  if ( !byte_5969EF2 )
                                  {
                                    sub_2213A60(&NetworkManager_TypeInfo);
                                    byte_5969EF2 = 1;
                                  }
                                  svtCoinBase = (UnityEngine_GameObject_o *)NetworkManager_TypeInfo;
                                  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
                                  {
                                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, item, v120);
                                    svtCoinBase = (UnityEngine_GameObject_o *)NetworkManager_TypeInfo;
                                  }
                                  v122 = *(_QWORD *)(svtCoinBase[7].fields.m_CachedPtr + 64);
                                  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
                                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, item, v120);
                                  if ( Master_object )
                                  {
                                    svtCoinBase = (UnityEngine_GameObject_o *)UserQuestMaster__getClearCountsFromId(
                                                                                (UserQuestMaster_o *)Master_object,
                                                                                v122,
                                                                                BalanceConfig_TypeInfo->static_fields->SvtCoinQuestOpenQuestId,
                                                                                0);
                                    if ( (int)svtCoinBase < 1 || klass < 1 )
                                      goto LABEL_170;
                                    if ( v17 )
                                    {
                                      v152 = 0;
                                      v123 = 0;
                                      v124 = 0;
                                      v125 = &v17[1].monitor;
                                      do
                                      {
                                        if ( (unsigned int)v123 >= LODWORD(v17[1].klass) )
                                          goto LABEL_172;
                                        v126 = v125[v123];
                                        svtCoinBase = (UnityEngine_GameObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_QuestTree__get_Instance__);
                                        if ( !v126 || !svtCoinBase )
                                          goto LABEL_171;
                                        svtCoinBase = (UnityEngine_GameObject_o *)QuestTree__GetQuestInfo(
                                                                                    (QuestTree_o *)svtCoinBase,
                                                                                    v126[4],
                                                                                    0);
                                        if ( !svtCoinBase )
                                          goto LABEL_155;
                                        v127 = (MapControl_QuestInfo_o *)svtCoinBase;
                                        svtCoinBase = (UnityEngine_GameObject_o *)v155;
                                        if ( !v155 )
                                          goto LABEL_171;
                                        svtCoinBase = (UnityEngine_GameObject_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                                    v155,
                                                                                    &v158,
                                                                                    v126[4],
                                                                                    (const MethodInfo_3F10B80 *)Method_DataMasterBase_QuestExtensionMaster__QuestExtensionEntity__int__TryGetEntity__);
                                        if ( ((unsigned __int8)svtCoinBase & 1) == 0 )
                                          goto LABEL_155;
                                        svtCoinBase = (UnityEngine_GameObject_o *)v158;
                                        if ( !v158 )
                                          goto LABEL_171;
                                        svtCoinBase = (UnityEngine_GameObject_o *)QuestExtensionEntity__IsSvtCoinQuest(
                                                                                    (QuestExtensionEntity_o *)v158,
                                                                                    0);
                                        if ( ((unsigned __int8)svtCoinBase & 1) != 0 )
                                        {
                                          svtCoinBase = ServantStatusListViewItemDrawServantQuest__CreateQuestBoardPrefab(
                                                          this,
                                                          this->fields.svtCoinQuestBase,
                                                          *(const MethodInfo **)&v160.fields.x);
                                          if ( !svtCoinBase )
                                            goto LABEL_171;
                                          v128 = svtCoinBase;
                                          v129 = UnityEngine_GameObject__GetComponent_object_(
                                                   svtCoinBase,
                                                   (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusQuestBoardDraw___);
                                          svtCoinBase = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                                                      v128,
                                                                                      0);
                                          v131 = (UnityEngine_Transform_o *)svtCoinBase;
                                          v132 = ServantStatusListViewItemDrawServantQuest_TypeInfo;
                                          if ( !*(&ServantStatusListViewItemDrawServantQuest_TypeInfo->_2.cctor_finished
                                                + 1) )
                                          {
                                            j_il2cpp_runtime_class_init_0(
                                              ServantStatusListViewItemDrawServantQuest_TypeInfo,
                                              item,
                                              v130);
                                            v132 = ServantStatusListViewItemDrawServantQuest_TypeInfo;
                                          }
                                          if ( !v131 )
                                            goto LABEL_171;
                                          v168.fields.x = 0.0;
                                          v168.fields.z = 0.0;
                                          v133 = mHeight;
                                          v168.fields.y = (float)-(v132->static_fields->QuestBoardPitch * v152
                                                                 + v132->static_fields->QuestBoardSize / 2);
                                          UnityEngine_Transform__set_localPosition(v131, v168, 0);
                                          v134 = this->fields.inputMessageObject;
                                          v135 = this->fields.questBoardManager;
                                          svtCoinBase = (UnityEngine_GameObject_o *)ServantStatusListViewItem__get_LimitCount(
                                                                                      v157,
                                                                                      0);
                                          if ( !v129 )
                                            goto LABEL_171;
                                          ServantStatusQuestBoardDraw__SetItem(
                                            (ServantStatusQuestBoardDraw_o *)v129,
                                            v127,
                                            v124,
                                            v134,
                                            v135,
                                            (int32_t)svtCoinBase,
                                            0);
                                          svtCoinBase = (UnityEngine_GameObject_o *)this->fields.questBoardList;
                                          if ( !svtCoinBase )
                                            goto LABEL_171;
                                          v142 = svtCoinBase->fields.m_CachedPtr;
                                          v17 = v156;
                                          v143 = Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Add__;
                                          ++HIDWORD(svtCoinBase[1].klass);
                                          if ( !v142 )
                                            goto LABEL_171;
                                          v144 = SLODWORD(svtCoinBase[1].klass);
                                          if ( (unsigned int)v144 >= *(_DWORD *)(v142 + 24) )
                                          {
                                            System_Collections_Generic_List_object___AddWithResize(
                                              (System_Collections_Generic_List_object__o *)svtCoinBase,
                                              v129,
                                              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v143[4] + 192LL) + 112LL));
                                          }
                                          else
                                          {
                                            v145 = v142 + 8 * v144;
                                            LODWORD(svtCoinBase[1].klass) = v144 + 1;
                                            *(_QWORD *)(v145 + 32) = v129;
                                            sub_2213A04(
                                              (MissionNaviTransitionBoardItem_o *)(v145 + 32),
                                              (int32_t)v129,
                                              v136,
                                              v137,
                                              v138,
                                              v139,
                                              v140,
                                              v141);
                                          }
                                          v146 = ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardPitch;
                                          mHeight = v146 + v133;
                                          if ( v146 >= 0 )
                                            v147 = ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardPitch;
                                          else
                                            v147 = v146 + 1;
                                          v19 = v19 + (float)v146;
                                          ++v152;
                                          y = y + (float)(v147 >> 1);
                                        }
                                        else
                                        {
LABEL_155:
                                          v127 = v124;
                                        }
                                        ++v123;
                                        v124 = v127;
                                      }
                                      while ( klass != (_DWORD)v123 );
                                      if ( v152 < 1 )
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
                                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v148, v149);
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
                                            y = y + 19.0;
                                            v19 = v19 + 38.0;
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