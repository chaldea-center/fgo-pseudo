void ServantStatusListViewItemDrawServantQuest___cctor(const MethodInfo *method)
{
  if ( (byte_4CEBBF1 & 1) == 0 )
  {
    sub_1C7BAE8(&ServantStatusListViewItemDrawServantQuest_TypeInfo);
    byte_4CEBBF1 = 1;
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

  if ( (byte_4CEBBF0 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_ServantStatusQuestBoardDraw__TypeInfo);
    byte_4CEBBF0 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_ServantStatusQuestBoardDraw__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw___ctor__);
  this->fields.questBoardList = (struct System_Collections_Generic_List_ServantStatusQuestBoardDraw__o *)v3;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.questBoardList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
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
    sub_1C7BD40(baseSprite, *(_QWORD *)&baseHeight);
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
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  Il2CppObject *object; // x22
  Il2CppObject *v14; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  UnityEngine_GameObject_o *v21; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v23; // x1
  UnityEngine_GameObject_o *v24; // x0
  UnityEngine_GameObject_o *v25; // x20
  UnityEngine_GameObject_o *v26; // x19

  if ( (byte_4CEBBEC & 1) == 0 )
  {
    sub_1C7BAE8(&NGUITools_TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_Resources_Load_GameObject___);
    sub_1C7BAE8(&ServantStatusQuestBoardManager_TypeInfo);
    byte_4CEBBEC = 1;
  }
  loadPrefab = (UnityEngine_Object_o *)this->fields.loadPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(loadPrefab, 0, 0) )
  {
    v6 = (ServantStatusQuestBoardManager_o *)sub_1C7BD34(ServantStatusQuestBoardManager_TypeInfo);
    ServantStatusQuestBoardManager___ctor(v6, 0);
    this->fields.questBoardManager = v6;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.questBoardManager, (int32_t)v6, v7, v8, v9, v10, v11, v12);
    object = UnityEngine_Resources__Load_object_(
               this->fields.questBoardPrefabPath,
               (const MethodInfo_320C160 *)Method_UnityEngine_Resources_Load_GameObject___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v14 = UnityEngine_Object__Instantiate_object_(
            object,
            (const MethodInfo_31FBEB0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    this->fields.loadPrefab = (struct UnityEngine_GameObject_o *)v14;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.loadPrefab, (int32_t)v14, v15, v16, v17, v18, v19, v20);
    v21 = this->fields.loadPrefab;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    GameObjectExtensions__SetParent_36529040(v21, gameObject, 0);
    v24 = this->fields.loadPrefab;
    if ( !v24 )
LABEL_14:
      sub_1C7BD40(v24, v23);
    UnityEngine_GameObject__SetActive(v24, 0, 0);
  }
  v25 = this->fields.loadPrefab;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  v24 = NGUITools__AddChild_49871496(parent, v25, 0);
  if ( !v24 )
    goto LABEL_14;
  v26 = v24;
  UnityEngine_GameObject__SetActive(v24, 1, 0);
  return v26;
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
  System_Collections_Generic_List_Enumerator_object__o v5; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4CEBBEE & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__GetEnumerator__);
    byte_4CEBBEE = 1;
  }
  memset(&v5, 0, sizeof(v5));
  questBoardList = this->fields.questBoardList;
  if ( !questBoardList )
    sub_1C7BD40(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v5,
    (System_Collections_Generic_List_object__o *)questBoardList,
    (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v5,
            (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__MoveNext__) )
  {
    if ( !v5.fields._current )
      sub_1C7BD40(0, v4);
    ServantStatusQuestBoardDraw__OnChangeAlphaAnim(
      (ServantStatusQuestBoardDraw_o *)v5.fields._current,
      this->fields.questBoardManager,
      0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v5,
    (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__Dispose__);
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

  if ( (byte_4CEBBEB & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Clear__);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEBBEB = 1;
  }
  loadPrefab = (UnityEngine_Object_o *)this->fields.loadPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(loadPrefab, 0, 0) )
  {
    v4 = (UnityEngine_Object_o *)this->fields.loadPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71870148(v4, 0);
    this->fields.loadPrefab = 0;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.loadPrefab, 0, v5, v6, v7, v8, v9, v10);
    questBoardList = this->fields.questBoardList;
    if ( !questBoardList )
      sub_1C7BD40(v11, v12);
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
  UnityEngine_GameObject_o *svtCoinBase; // x0
  UILabel_o *explanationLabel; // x21
  UILabel_o *explanation2Label; // x21
  struct ServantEntity_o *svtEntity; // x8
  struct UISprite_o *baseSprite; // x8
  UnityEngine_GameObject_o *v12; // x22
  int32_t mHeight; // w28
  float x; // s14
  float y; // s9
  float v16; // s8
  float v17; // s10
  float z; // s15
  float v19; // s13
  float v20; // s11
  int klass; // w29
  const MethodInfo *v22; // x2
  const MethodInfo_3A8CA98 **v23; // x27
  ServantLimitImageMaster_o *v24; // x20
  MapControl_QuestInfo_o *v25; // x25
  unsigned int v26; // w21
  __int64 v27; // x26
  MapControl_QuestInfo_o *v28; // x24
  const MethodInfo *v29; // x2
  UILabel_o *v30; // x26
  const MethodInfo_3A8CA98 **v31; // x23
  UnityEngine_GameObject_o *v32; // x27
  Il2CppObject *Component_object; // x26
  UnityEngine_Transform_o *v34; // x27
  ServantStatusListViewItemDrawServantQuest_c *v35; // x8
  int32_t v36; // w29
  UnityEngine_GameObject_o *inputMessageObject; // x27
  ServantStatusQuestBoardManager_o *questBoardManager; // x28
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  intptr_t m_CachedPtr; // x8
  _QWORD *v46; // x9
  __int64 klass_low; // x10
  int32_t v48; // w28
  intptr_t v49; // x8
  int32_t QuestBoardPitch; // w8
  UnityEngine_GameObject_o *v51; // x23
  UnityEngine_Transform_o *v52; // x24
  Il2CppObject *v53; // x23
  int32_t v54; // w2
  int32_t v55; // w3
  System_String_o *v56; // x4
  int32_t v57; // w5
  int64_t v58; // x6
  System_String_o *v59; // x7
  intptr_t v60; // x8
  _QWORD *v61; // x9
  __int64 v62; // x10
  intptr_t v63; // x8
  int32_t v64; // w8
  const MethodInfo *v65; // x2
  DataMasterBase_TMaster__TEntity__PKType__o *v66; // x27
  MapControl_QuestInfo_o *v67; // x25
  unsigned int i; // w21
  __int64 v69; // x26
  MapControl_QuestInfo_o *v70; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *v71; // x23
  UnityEngine_GameObject_o *v72; // x27
  Il2CppObject *v73; // x26
  UnityEngine_Transform_o *v74; // x27
  ServantStatusListViewItemDrawServantQuest_c *v75; // x8
  int32_t v76; // w29
  UnityEngine_GameObject_o *v77; // x27
  ServantStatusQuestBoardManager_o *v78; // x28
  int32_t v79; // w2
  int32_t v80; // w3
  System_String_o *v81; // x4
  int32_t v82; // w5
  int64_t v83; // x6
  System_String_o *v84; // x7
  intptr_t v85; // x8
  _QWORD *v86; // x9
  __int64 v87; // x10
  int32_t v88; // w28
  intptr_t v89; // x8
  int32_t v90; // w8
  UnityEngine_GameObject_o *v91; // x24
  UnityEngine_Transform_o *v92; // x25
  Il2CppObject *v93; // x24
  int32_t v94; // w2
  int32_t v95; // w3
  System_String_o *v96; // x4
  int32_t v97; // w5
  int64_t v98; // x6
  System_String_o *v99; // x7
  intptr_t v100; // x8
  _QWORD *v101; // x9
  __int64 v102; // x10
  intptr_t v103; // x8
  int32_t v104; // w8
  UnityEngine_Vector3_o v105; // x2
  const MethodInfo *v106; // x4
  Il2CppObject *Master_object; // x24
  int64_t v108; // x25
  MapControl_QuestInfo_o *v109; // x25
  unsigned int j; // w21
  __int64 v111; // x26
  MapControl_QuestInfo_o *v112; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *v113; // x20
  UnityEngine_GameObject_o *v114; // x27
  Il2CppObject *v115; // x26
  UnityEngine_Transform_o *v116; // x27
  ServantStatusListViewItemDrawServantQuest_c *v117; // x8
  int32_t v118; // w23
  UnityEngine_GameObject_o *v119; // x27
  ServantStatusQuestBoardManager_o *v120; // x28
  int32_t v121; // w2
  int32_t v122; // w3
  System_String_o *v123; // x4
  int32_t v124; // w5
  int64_t v125; // x6
  System_String_o *v126; // x7
  intptr_t v127; // x8
  _QWORD *v128; // x9
  __int64 v129; // x10
  intptr_t v130; // x8
  int32_t v131; // w8
  UILabel_o *svtCoinExplanationLabel; // x20
  float reinforcementPosition; // [xsp+14h] [xbp-DCh]
  float reinforcementPosition_4; // [xsp+18h] [xbp-D8h]
  UnityEngine_GameObject_o *v135; // [xsp+20h] [xbp-D0h]
  int v136; // [xsp+2Ch] [xbp-C4h]
  ServantStatusListViewItem_o *v137; // [xsp+30h] [xbp-C0h]
  int v138; // [xsp+3Ch] [xbp-B4h]
  int v139; // [xsp+3Ch] [xbp-B4h]
  int v140; // [xsp+3Ch] [xbp-B4h]
  Il2CppObject *v141; // [xsp+40h] [xbp-B0h] BYREF
  Il2CppObject *entity; // [xsp+48h] [xbp-A8h] BYREF
  UnityEngine_Vector2_o v143; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v146; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v147; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v148; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v149; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v150; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v151; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v152; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v153; // 0:s2.4,4:s3.4,8:s4.4
  UnityEngine_Vector3_o v154; // 0:s5.4,4:s6.4,8:s7.4

  if ( (byte_4CEBBED & 1) == 0 )
  {
    sub_1C7BAE8(&BalanceConfig_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_QuestExtensionMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_QuestMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_UserQuestMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_DataMasterBase_QuestExtensionMaster__QuestExtensionEntity__int__TryGetEntity__);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_ServantStatusQuestBoardDraw___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Add__);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&ServantStatusListViewItemDrawServantQuest_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C7BAE8(&StringLiteral_11978/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_INTERLUDE"*/);
    sub_1C7BAE8(&StringLiteral_11980/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_RAINFORCEMENT"*/);
    sub_1C7BAE8(&StringLiteral_11981/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_SVT_COIN"*/);
    sub_1C7BAE8(&StringLiteral_11979/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_LIMIT_LIBERATION"*/);
    byte_4CEBBED = 1;
  }
  v141 = 0;
  entity = 0;
  if ( !this->fields.isInit )
  {
    this->fields.dispMode = mode;
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
        svtCoinBase = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11978/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_INTERLUDE"*/, 0);
        if ( !explanationLabel )
          goto LABEL_156;
        UILabel__set_text(explanationLabel, (System_String_o *)svtCoinBase, 0);
        explanation2Label = this->fields.explanation2Label;
        svtCoinBase = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11980/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_RAINFORCEMENT"*/, 0);
        if ( !explanation2Label )
          goto LABEL_156;
        UILabel__set_text(explanation2Label, (System_String_o *)svtCoinBase, 0);
        if ( item->fields.svtEntity )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          svtCoinBase = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_QuestMaster___);
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
                v12 = svtCoinBase;
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
                        v16 = localPosition.fields.x;
                        v17 = localPosition.fields.y;
                        z = localPosition.fields.z;
                        svtCoinBase = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(svtCoinBase, 0);
                        if ( svtCoinBase )
                        {
                          v146 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)svtCoinBase, 0);
                          svtCoinBase = this->fields.svtCoinBase;
                          if ( svtCoinBase )
                          {
                            v19 = v146.fields.y;
                            reinforcementPosition = v146.fields.x;
                            reinforcementPosition_4 = v146.fields.z;
                            svtCoinBase = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                                        svtCoinBase,
                                                                        0);
                            if ( svtCoinBase )
                            {
                              v147 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)svtCoinBase, 0);
                              v20 = v147.fields.y;
                              v137 = item;
                              if ( item->fields.userSvtCollectionEntity )
                              {
                                if ( !v12 )
                                  goto LABEL_156;
                                klass = (int)v12[1].klass;
                              }
                              else
                              {
                                klass = 0;
                              }
                              svtCoinBase = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                              if ( svtCoinBase )
                              {
                                svtCoinBase = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                                            (DataManager_o *)svtCoinBase,
                                                                            (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
                                v136 = klass;
                                if ( klass < 1 )
                                  goto LABEL_59;
                                if ( !v12 )
                                  goto LABEL_156;
                                v138 = 0;
                                v23 = (const MethodInfo_3A8CA98 **)&Method_SingletonTemplate_QuestTree__get_Instance__;
                                v24 = (ServantLimitImageMaster_o *)svtCoinBase;
                                v25 = 0;
                                v26 = 0;
                                v135 = v12;
                                do
                                {
                                  if ( v26 >= LODWORD(v12[1].klass) )
LABEL_157:
                                    sub_1C7BD48(svtCoinBase);
                                  v27 = *((_QWORD *)&v12[1].monitor + (int)v26);
                                  svtCoinBase = (UnityEngine_GameObject_o *)SingletonTemplate_object___get_Instance(*v23);
                                  if ( !v27 || !svtCoinBase )
                                    goto LABEL_156;
                                  svtCoinBase = (UnityEngine_GameObject_o *)QuestTree__GetQuestInfo(
                                                                              (QuestTree_o *)svtCoinBase,
                                                                              *(_DWORD *)(v27 + 16),
                                                                              0);
                                  if ( svtCoinBase
                                    && (v28 = (MapControl_QuestInfo_o *)svtCoinBase,
                                        svtCoinBase = (UnityEngine_GameObject_o *)MapControl_QuestInfo__GetQuestType(
                                                                                    (MapControl_QuestInfo_o *)svtCoinBase,
                                                                                    0),
                                        (_DWORD)svtCoinBase == 3) )
                                  {
                                    if ( !v24 )
                                      goto LABEL_156;
                                    if ( ServantLimitImageMaster__IsLimitCountSealQuest(v24, *(_DWORD *)(v27 + 16), 0) )
                                    {
                                      v30 = this->fields.explanationLabel;
                                      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                      svtCoinBase = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                                  (System_String_o *)StringLiteral_11979/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_LIMIT_LIBERATION"*/,
                                                                                  0);
                                      if ( !v30 )
                                        goto LABEL_156;
                                      UILabel__set_text(v30, (System_String_o *)svtCoinBase, 0);
                                    }
                                    v31 = v23;
                                    svtCoinBase = ServantStatusListViewItemDrawServantQuest__CreateQuestBoardPrefab(
                                                    this,
                                                    this->fields.interludeQuestBase,
                                                    v29);
                                    if ( !svtCoinBase )
                                      goto LABEL_156;
                                    v32 = svtCoinBase;
                                    Component_object = UnityEngine_GameObject__GetComponent_object_(
                                                         svtCoinBase,
                                                         (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusQuestBoardDraw___);
                                    svtCoinBase = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                                                v32,
                                                                                0);
                                    v34 = (UnityEngine_Transform_o *)svtCoinBase;
                                    v35 = ServantStatusListViewItemDrawServantQuest_TypeInfo;
                                    if ( !ServantStatusListViewItemDrawServantQuest_TypeInfo->_2.cctor_finished )
                                    {
                                      j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawServantQuest_TypeInfo);
                                      v35 = ServantStatusListViewItemDrawServantQuest_TypeInfo;
                                    }
                                    if ( !v34 )
                                      goto LABEL_156;
                                    v148.fields.x = 0.0;
                                    v148.fields.z = 0.0;
                                    v36 = mHeight;
                                    v148.fields.y = (float)-(v35->static_fields->QuestBoardPitch * v138
                                                           + v35->static_fields->QuestBoardSize / 2);
                                    UnityEngine_Transform__set_localPosition(v34, v148, 0);
                                    inputMessageObject = this->fields.inputMessageObject;
                                    questBoardManager = this->fields.questBoardManager;
                                    svtCoinBase = (UnityEngine_GameObject_o *)ServantStatusListViewItem__get_LimitCount(
                                                                                v137,
                                                                                0);
                                    if ( !Component_object )
                                      goto LABEL_156;
                                    ServantStatusQuestBoardDraw__SetItem(
                                      (ServantStatusQuestBoardDraw_o *)Component_object,
                                      v28,
                                      v25,
                                      inputMessageObject,
                                      questBoardManager,
                                      (int32_t)svtCoinBase,
                                      0);
                                    svtCoinBase = (UnityEngine_GameObject_o *)this->fields.questBoardList;
                                    if ( !svtCoinBase )
                                      goto LABEL_156;
                                    m_CachedPtr = svtCoinBase->fields.m_CachedPtr;
                                    v46 = Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Add__;
                                    ++HIDWORD(svtCoinBase[1].klass);
                                    if ( !m_CachedPtr )
                                      goto LABEL_156;
                                    klass_low = SLODWORD(svtCoinBase[1].klass);
                                    v48 = v36;
                                    klass = v136;
                                    v23 = v31;
                                    if ( (unsigned int)klass_low >= *(_DWORD *)(m_CachedPtr + 24) )
                                    {
                                      System_Collections_Generic_List_object___AddWithResize(
                                        (System_Collections_Generic_List_object__o *)svtCoinBase,
                                        Component_object,
                                        *(const MethodInfo_383EDFC **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
                                    }
                                    else
                                    {
                                      v49 = m_CachedPtr + 8 * klass_low;
                                      LODWORD(svtCoinBase[1].klass) = klass_low + 1;
                                      *(_QWORD *)(v49 + 32) = Component_object;
                                      sub_1C7BA8C(
                                        (GrandQuestFolderBoardItem_o *)(v49 + 32),
                                        (int32_t)Component_object,
                                        v39,
                                        v40,
                                        v41,
                                        v42,
                                        v43,
                                        v44);
                                    }
                                    v12 = v135;
                                    QuestBoardPitch = ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardPitch;
                                    mHeight = QuestBoardPitch + v48;
                                    y = y + (float)QuestBoardPitch;
                                    v19 = v19 - (float)QuestBoardPitch;
                                    v20 = v20 - (float)QuestBoardPitch;
                                    v17 = v17 + (float)(QuestBoardPitch / 2);
                                    ++v138;
                                  }
                                  else
                                  {
                                    v28 = v25;
                                  }
                                  ++v26;
                                  v25 = v28;
                                }
                                while ( klass != v26 );
                                if ( !v138 )
                                {
LABEL_59:
                                  svtCoinBase = ServantStatusListViewItemDrawServantQuest__CreateQuestBoardPrefab(
                                                  this,
                                                  this->fields.interludeQuestBase,
                                                  v22);
                                  if ( !svtCoinBase )
                                    goto LABEL_156;
                                  v51 = svtCoinBase;
                                  svtCoinBase = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                                              svtCoinBase,
                                                                              0);
                                  v52 = (UnityEngine_Transform_o *)svtCoinBase;
                                  if ( !ServantStatusListViewItemDrawServantQuest_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawServantQuest_TypeInfo);
                                  if ( !v52 )
                                    goto LABEL_156;
                                  v149.fields.x = 0.0;
                                  v149.fields.z = 0.0;
                                  v149.fields.y = (float)(ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardSize
                                                        / -2);
                                  UnityEngine_Transform__set_localPosition(v52, v149, 0);
                                  svtCoinBase = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                              v51,
                                                                              (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusQuestBoardDraw___);
                                  if ( !svtCoinBase )
                                    goto LABEL_156;
                                  v53 = (Il2CppObject *)svtCoinBase;
                                  ServantStatusQuestBoardDraw__SetDark((ServantStatusQuestBoardDraw_o *)svtCoinBase, 0);
                                  svtCoinBase = (UnityEngine_GameObject_o *)this->fields.questBoardList;
                                  if ( !svtCoinBase )
                                    goto LABEL_156;
                                  v60 = svtCoinBase->fields.m_CachedPtr;
                                  v61 = Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Add__;
                                  ++HIDWORD(svtCoinBase[1].klass);
                                  if ( !v60 )
                                    goto LABEL_156;
                                  v62 = SLODWORD(svtCoinBase[1].klass);
                                  if ( (unsigned int)v62 >= *(_DWORD *)(v60 + 24) )
                                  {
                                    System_Collections_Generic_List_object___AddWithResize(
                                      (System_Collections_Generic_List_object__o *)svtCoinBase,
                                      v53,
                                      *(const MethodInfo_383EDFC **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
                                  }
                                  else
                                  {
                                    v63 = v60 + 8 * v62;
                                    LODWORD(svtCoinBase[1].klass) = v62 + 1;
                                    *(_QWORD *)(v63 + 32) = v53;
                                    sub_1C7BA8C(
                                      (GrandQuestFolderBoardItem_o *)(v63 + 32),
                                      (int32_t)v53,
                                      v54,
                                      v55,
                                      v56,
                                      v57,
                                      v58,
                                      v59);
                                  }
                                  v64 = ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardPitch;
                                  mHeight += v64;
                                  y = y + (float)v64;
                                  v19 = v19 - (float)v64;
                                  v17 = v17 + (float)(v64 / 2);
                                  v20 = v20 - (float)v64;
                                }
                                if ( !DataManager_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                                svtCoinBase = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_QuestExtensionMaster___);
                                v66 = (DataMasterBase_TMaster__TEntity__PKType__o *)svtCoinBase;
                                if ( klass < 1 )
                                  goto LABEL_98;
                                if ( !v12 )
                                  goto LABEL_156;
                                v139 = 0;
                                v67 = 0;
                                for ( i = 0; i != klass; ++i )
                                {
                                  if ( i >= LODWORD(v12[1].klass) )
                                    goto LABEL_157;
                                  v69 = *((_QWORD *)&v12[1].monitor + (int)i);
                                  svtCoinBase = (UnityEngine_GameObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3A8CA98 *)Method_SingletonTemplate_QuestTree__get_Instance__);
                                  if ( !v69 || !svtCoinBase )
                                    goto LABEL_156;
                                  svtCoinBase = (UnityEngine_GameObject_o *)QuestTree__GetQuestInfo(
                                                                              (QuestTree_o *)svtCoinBase,
                                                                              *(_DWORD *)(v69 + 16),
                                                                              0);
                                  if ( !svtCoinBase )
                                    goto LABEL_80;
                                  v70 = (MapControl_QuestInfo_o *)svtCoinBase;
                                  svtCoinBase = (UnityEngine_GameObject_o *)MapControl_QuestInfo__GetQuestType(
                                                                              (MapControl_QuestInfo_o *)svtCoinBase,
                                                                              0);
                                  if ( (_DWORD)svtCoinBase == 3 )
                                    goto LABEL_80;
                                  if ( !v66 )
                                    goto LABEL_156;
                                  if ( !DataMasterBase_object__object__int___TryGetEntity(
                                          v66,
                                          &entity,
                                          *(_DWORD *)(v69 + 16),
                                          (const MethodInfo_342E348 *)Method_DataMasterBase_QuestExtensionMaster__QuestExtensionEntity__int__TryGetEntity__) )
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
                                    v70 = v67;
                                  }
                                  else
                                  {
LABEL_85:
                                    v71 = v66;
                                    svtCoinBase = ServantStatusListViewItemDrawServantQuest__CreateQuestBoardPrefab(
                                                    this,
                                                    this->fields.rainforcementQuestBase,
                                                    v65);
                                    if ( !svtCoinBase )
                                      goto LABEL_156;
                                    v72 = svtCoinBase;
                                    v73 = UnityEngine_GameObject__GetComponent_object_(
                                            svtCoinBase,
                                            (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusQuestBoardDraw___);
                                    svtCoinBase = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                                                v72,
                                                                                0);
                                    v74 = (UnityEngine_Transform_o *)svtCoinBase;
                                    v75 = ServantStatusListViewItemDrawServantQuest_TypeInfo;
                                    if ( !ServantStatusListViewItemDrawServantQuest_TypeInfo->_2.cctor_finished )
                                    {
                                      j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawServantQuest_TypeInfo);
                                      v75 = ServantStatusListViewItemDrawServantQuest_TypeInfo;
                                    }
                                    if ( !v74 )
                                      goto LABEL_156;
                                    v150.fields.x = 0.0;
                                    v150.fields.z = 0.0;
                                    v76 = mHeight;
                                    v150.fields.y = (float)-(v75->static_fields->QuestBoardPitch * v139
                                                           + v75->static_fields->QuestBoardSize / 2);
                                    UnityEngine_Transform__set_localPosition(v74, v150, 0);
                                    v77 = this->fields.inputMessageObject;
                                    v78 = this->fields.questBoardManager;
                                    svtCoinBase = (UnityEngine_GameObject_o *)ServantStatusListViewItem__get_LimitCount(
                                                                                v137,
                                                                                0);
                                    if ( !v73 )
                                      goto LABEL_156;
                                    ServantStatusQuestBoardDraw__SetItem(
                                      (ServantStatusQuestBoardDraw_o *)v73,
                                      v70,
                                      v67,
                                      v77,
                                      v78,
                                      (int32_t)svtCoinBase,
                                      0);
                                    svtCoinBase = (UnityEngine_GameObject_o *)this->fields.questBoardList;
                                    if ( !svtCoinBase )
                                      goto LABEL_156;
                                    v85 = svtCoinBase->fields.m_CachedPtr;
                                    v86 = Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Add__;
                                    ++HIDWORD(svtCoinBase[1].klass);
                                    if ( !v85 )
                                      goto LABEL_156;
                                    v87 = SLODWORD(svtCoinBase[1].klass);
                                    v88 = v76;
                                    klass = v136;
                                    v66 = v71;
                                    if ( (unsigned int)v87 >= *(_DWORD *)(v85 + 24) )
                                    {
                                      System_Collections_Generic_List_object___AddWithResize(
                                        (System_Collections_Generic_List_object__o *)svtCoinBase,
                                        v73,
                                        *(const MethodInfo_383EDFC **)(*(_QWORD *)(v86[4] + 192LL) + 112LL));
                                    }
                                    else
                                    {
                                      v89 = v85 + 8 * v87;
                                      LODWORD(svtCoinBase[1].klass) = v87 + 1;
                                      *(_QWORD *)(v89 + 32) = v73;
                                      sub_1C7BA8C(
                                        (GrandQuestFolderBoardItem_o *)(v89 + 32),
                                        (int32_t)v73,
                                        v79,
                                        v80,
                                        v81,
                                        v82,
                                        v83,
                                        v84);
                                    }
                                    v90 = ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardPitch;
                                    mHeight = v90 + v88;
                                    y = y + (float)v90;
                                    v20 = v20 - (float)v90;
                                    v17 = v17 + (float)(v90 / 2);
                                    ++v139;
                                  }
                                  v67 = v70;
                                }
                                if ( !v139 )
                                {
LABEL_98:
                                  svtCoinBase = ServantStatusListViewItemDrawServantQuest__CreateQuestBoardPrefab(
                                                  this,
                                                  this->fields.rainforcementQuestBase,
                                                  v65);
                                  if ( !svtCoinBase )
                                    goto LABEL_156;
                                  v91 = svtCoinBase;
                                  svtCoinBase = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                                              svtCoinBase,
                                                                              0);
                                  v92 = (UnityEngine_Transform_o *)svtCoinBase;
                                  if ( !ServantStatusListViewItemDrawServantQuest_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawServantQuest_TypeInfo);
                                  if ( !v92 )
                                    goto LABEL_156;
                                  v151.fields.x = 0.0;
                                  v151.fields.z = 0.0;
                                  v151.fields.y = (float)(ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardSize
                                                        / -2);
                                  UnityEngine_Transform__set_localPosition(v92, v151, 0);
                                  svtCoinBase = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                              v91,
                                                                              (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusQuestBoardDraw___);
                                  if ( !svtCoinBase )
                                    goto LABEL_156;
                                  v93 = (Il2CppObject *)svtCoinBase;
                                  ServantStatusQuestBoardDraw__SetDark((ServantStatusQuestBoardDraw_o *)svtCoinBase, 0);
                                  svtCoinBase = (UnityEngine_GameObject_o *)this->fields.questBoardList;
                                  if ( !svtCoinBase )
                                    goto LABEL_156;
                                  v100 = svtCoinBase->fields.m_CachedPtr;
                                  v101 = Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Add__;
                                  ++HIDWORD(svtCoinBase[1].klass);
                                  if ( !v100 )
                                    goto LABEL_156;
                                  v102 = SLODWORD(svtCoinBase[1].klass);
                                  if ( (unsigned int)v102 >= *(_DWORD *)(v100 + 24) )
                                  {
                                    System_Collections_Generic_List_object___AddWithResize(
                                      (System_Collections_Generic_List_object__o *)svtCoinBase,
                                      v93,
                                      *(const MethodInfo_383EDFC **)(*(_QWORD *)(v101[4] + 192LL) + 112LL));
                                  }
                                  else
                                  {
                                    v103 = v100 + 8 * v102;
                                    LODWORD(svtCoinBase[1].klass) = v102 + 1;
                                    *(_QWORD *)(v103 + 32) = v93;
                                    sub_1C7BA8C(
                                      (GrandQuestFolderBoardItem_o *)(v103 + 32),
                                      (int32_t)v93,
                                      v94,
                                      v95,
                                      v96,
                                      v97,
                                      v98,
                                      v99);
                                  }
                                  v104 = ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardPitch;
                                  mHeight += v104;
                                  y = y + (float)v104;
                                  v17 = v17 + (float)(v104 / 2);
                                }
                                svtCoinBase = (UnityEngine_GameObject_o *)v137->fields.svtEntity;
                                if ( svtCoinBase )
                                {
                                  if ( !ServantEntity__checkIsHeroineSvt((ServantEntity_o *)svtCoinBase, 0) )
                                  {
LABEL_155:
                                    v154.fields.z = reinforcementPosition_4;
                                    v153.fields.x = v16;
                                    v154.fields.x = reinforcementPosition;
                                    v143.fields.x = x;
                                    v143.fields.y = y;
                                    v153.fields.y = v17;
                                    v153.fields.z = z;
                                    v154.fields.y = v19;
                                    ServantStatusListViewItemDrawServantQuest__AdjustLayout(
                                      this,
                                      mHeight,
                                      v143,
                                      v153,
                                      v154,
                                      v105,
                                      v106);
                                    return;
                                  }
                                  if ( !DataManager_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                                  Master_object = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_UserQuestMaster___);
                                  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                                  if ( !byte_4CE827C )
                                  {
                                    sub_1C7BAE8(&NetworkManager_TypeInfo);
                                    byte_4CE827C = 1;
                                  }
                                  svtCoinBase = (UnityEngine_GameObject_o *)NetworkManager_TypeInfo;
                                  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                                    svtCoinBase = (UnityEngine_GameObject_o *)NetworkManager_TypeInfo;
                                  }
                                  v108 = *(_QWORD *)(svtCoinBase[7].fields.m_CachedPtr + 64);
                                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                                  if ( Master_object )
                                  {
                                    svtCoinBase = (UnityEngine_GameObject_o *)UserQuestMaster__getClearCountsFromId(
                                                                                (UserQuestMaster_o *)Master_object,
                                                                                v108,
                                                                                BalanceConfig_TypeInfo->static_fields->SvtCoinQuestOpenQuestId,
                                                                                0);
                                    if ( (int)svtCoinBase < 1 || klass < 1 )
                                      goto LABEL_155;
                                    if ( v12 )
                                    {
                                      v140 = 0;
                                      v109 = 0;
                                      for ( j = 0; j != klass; ++j )
                                      {
                                        if ( j >= LODWORD(v12[1].klass) )
                                          goto LABEL_157;
                                        v111 = *((_QWORD *)&v12[1].monitor + (int)j);
                                        svtCoinBase = (UnityEngine_GameObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3A8CA98 *)Method_SingletonTemplate_QuestTree__get_Instance__);
                                        if ( !v111 || !svtCoinBase )
                                          goto LABEL_156;
                                        svtCoinBase = (UnityEngine_GameObject_o *)QuestTree__GetQuestInfo(
                                                                                    (QuestTree_o *)svtCoinBase,
                                                                                    *(_DWORD *)(v111 + 16),
                                                                                    0);
                                        if ( !svtCoinBase )
                                          goto LABEL_143;
                                        if ( !v66 )
                                          goto LABEL_156;
                                        v112 = (MapControl_QuestInfo_o *)svtCoinBase;
                                        svtCoinBase = (UnityEngine_GameObject_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                                    v66,
                                                                                    &v141,
                                                                                    *(_DWORD *)(v111 + 16),
                                                                                    (const MethodInfo_342E348 *)Method_DataMasterBase_QuestExtensionMaster__QuestExtensionEntity__int__TryGetEntity__);
                                        if ( ((unsigned __int8)svtCoinBase & 1) == 0 )
                                          goto LABEL_143;
                                        svtCoinBase = (UnityEngine_GameObject_o *)v141;
                                        if ( !v141 )
                                          goto LABEL_156;
                                        svtCoinBase = (UnityEngine_GameObject_o *)QuestExtensionEntity__IsSvtCoinQuest(
                                                                                    (QuestExtensionEntity_o *)v141,
                                                                                    0);
                                        if ( ((unsigned __int8)svtCoinBase & 1) != 0 )
                                        {
                                          v113 = v66;
                                          svtCoinBase = ServantStatusListViewItemDrawServantQuest__CreateQuestBoardPrefab(
                                                          this,
                                                          this->fields.svtCoinQuestBase,
                                                          *(const MethodInfo **)&v105.fields.x);
                                          if ( !svtCoinBase )
                                            goto LABEL_156;
                                          v114 = svtCoinBase;
                                          v115 = UnityEngine_GameObject__GetComponent_object_(
                                                   svtCoinBase,
                                                   (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusQuestBoardDraw___);
                                          svtCoinBase = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                                                      v114,
                                                                                      0);
                                          v116 = (UnityEngine_Transform_o *)svtCoinBase;
                                          v117 = ServantStatusListViewItemDrawServantQuest_TypeInfo;
                                          if ( !ServantStatusListViewItemDrawServantQuest_TypeInfo->_2.cctor_finished )
                                          {
                                            j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawServantQuest_TypeInfo);
                                            v117 = ServantStatusListViewItemDrawServantQuest_TypeInfo;
                                          }
                                          if ( !v116 )
                                            goto LABEL_156;
                                          v152.fields.x = 0.0;
                                          v152.fields.z = 0.0;
                                          v118 = mHeight;
                                          v152.fields.y = (float)-(v117->static_fields->QuestBoardPitch * v140
                                                                 + v117->static_fields->QuestBoardSize / 2);
                                          UnityEngine_Transform__set_localPosition(v116, v152, 0);
                                          v119 = this->fields.inputMessageObject;
                                          v120 = this->fields.questBoardManager;
                                          svtCoinBase = (UnityEngine_GameObject_o *)ServantStatusListViewItem__get_LimitCount(
                                                                                      v137,
                                                                                      0);
                                          if ( !v115 )
                                            goto LABEL_156;
                                          ServantStatusQuestBoardDraw__SetItem(
                                            (ServantStatusQuestBoardDraw_o *)v115,
                                            v112,
                                            v109,
                                            v119,
                                            v120,
                                            (int32_t)svtCoinBase,
                                            0);
                                          svtCoinBase = (UnityEngine_GameObject_o *)this->fields.questBoardList;
                                          if ( !svtCoinBase )
                                            goto LABEL_156;
                                          v127 = svtCoinBase->fields.m_CachedPtr;
                                          v128 = Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Add__;
                                          ++HIDWORD(svtCoinBase[1].klass);
                                          if ( !v127 )
                                            goto LABEL_156;
                                          v66 = v113;
                                          v129 = SLODWORD(svtCoinBase[1].klass);
                                          if ( (unsigned int)v129 >= *(_DWORD *)(v127 + 24) )
                                          {
                                            System_Collections_Generic_List_object___AddWithResize(
                                              (System_Collections_Generic_List_object__o *)svtCoinBase,
                                              v115,
                                              *(const MethodInfo_383EDFC **)(*(_QWORD *)(v128[4] + 192LL) + 112LL));
                                          }
                                          else
                                          {
                                            v130 = v127 + 8 * v129;
                                            LODWORD(svtCoinBase[1].klass) = v129 + 1;
                                            *(_QWORD *)(v130 + 32) = v115;
                                            sub_1C7BA8C(
                                              (GrandQuestFolderBoardItem_o *)(v130 + 32),
                                              (int32_t)v115,
                                              v121,
                                              v122,
                                              v123,
                                              v124,
                                              v125,
                                              v126);
                                          }
                                          v131 = ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardPitch;
                                          mHeight = v131 + v118;
                                          y = y + (float)v131;
                                          v17 = v17 + (float)(v131 / 2);
                                          ++v140;
                                        }
                                        else
                                        {
LABEL_143:
                                          v112 = v109;
                                        }
                                        v109 = v112;
                                      }
                                      if ( v140 < 1 )
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
                                                                                      (System_String_o *)StringLiteral_11981/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_SVT_COIN"*/,
                                                                                      0);
                                          if ( svtCoinExplanationLabel )
                                          {
                                            UILabel__set_text(
                                              svtCoinExplanationLabel,
                                              (System_String_o *)svtCoinBase,
                                              0);
                                            mHeight += 38;
                                            y = y + 38.0;
                                            v17 = v17 + 19.0;
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
          sub_1C7BD40(svtCoinBase, item);
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
  System_Collections_Generic_List_Enumerator_object__o v7; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4CEBBEF & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__GetEnumerator__);
    byte_4CEBBEF = 1;
  }
  memset(&v7, 0, sizeof(v7));
  questBoardManager = this->fields.questBoardManager;
  if ( questBoardManager )
  {
    if ( ServantStatusQuestBoardManager__UpdateAlphaAnim(questBoardManager, 0) )
      ServantStatusListViewItemDrawServantQuest__OnChangeAlphaAnim(this, v4);
    questBoardList = this->fields.questBoardList;
    if ( !questBoardList )
      sub_1C7BD40(0, v4);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v7,
      (System_Collections_Generic_List_object__o *)questBoardList,
      (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v7,
              (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__MoveNext__) )
    {
      if ( !v7.fields._current )
        sub_1C7BD40(0, v6);
      ServantStatusQuestBoardDraw__UpdateItem(
        (ServantStatusQuestBoardDraw_o *)v7.fields._current,
        this->fields.questBoardManager,
        0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v7,
      (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__Dispose__);
  }
}