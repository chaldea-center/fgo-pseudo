void __fastcall ServantStatusListViewItemDrawServantQuest___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B41C49 & 1) == 0 )
  {
    sub_1BDB878(&ServantStatusListViewItemDrawServantQuest_TypeInfo, v1);
    byte_4B41C49 = 1;
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
  const MethodInfo *v6; // x3

  if ( (byte_4B41C48 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw___ctor__, method);
    sub_1BDB878(&System_Collections_Generic_List_ServantStatusQuestBoardDraw__TypeInfo, v3);
    byte_4B41C48 = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_ServantStatusQuestBoardDraw__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw___ctor__);
  this->fields.questBoardList = (struct System_Collections_Generic_List_ServantStatusQuestBoardDraw__o *)v4;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.questBoardList, (int32_t)v4, v5, v6);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewItemDrawServantQuest__AdjustLayout(
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
  UIWidget__set_height(baseSprite, baseHeight, 0LL);
  baseSprite = (UIWidget_o *)this->fields.baseCollider;
  if ( !baseSprite )
    goto LABEL_10;
  v19.fields.z = 0.0;
  v19.fields.x = x;
  v19.fields.y = v16;
  UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)baseSprite, v19, 0LL);
  baseSprite = (UIWidget_o *)this->fields.titleBase;
  if ( !baseSprite )
    goto LABEL_10;
  baseSprite = (UIWidget_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)baseSprite, 0LL);
  if ( !baseSprite )
    goto LABEL_10;
  v20.fields.x = v15;
  v20.fields.y = v14;
  v20.fields.z = v13;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)baseSprite, v20, 0LL);
  baseSprite = (UIWidget_o *)this->fields.rainforcementBase;
  if ( !baseSprite
    || (baseSprite = (UIWidget_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)baseSprite, 0LL)) == 0LL
    || (v21.fields.x = v12,
        v21.fields.y = y,
        v21.fields.z = z,
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)baseSprite, v21, 0LL),
        (baseSprite = (UIWidget_o *)this->fields.svtCoinBase) == 0LL)
    || (baseSprite = (UIWidget_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)baseSprite, 0LL)) == 0LL )
  {
LABEL_10:
    sub_1BDBAD4(baseSprite, *(_QWORD *)&baseHeight);
  }
  *(_QWORD *)&v22.fields.x = v17;
  v22.fields.z = v18;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)baseSprite, v22, 0LL);
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
  const MethodInfo *v12; // x3
  Il2CppObject *object; // x22
  Il2CppObject *v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  UnityEngine_GameObject_o *v17; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v19; // x1
  UnityEngine_GameObject_o *v20; // x0
  UnityEngine_GameObject_o *v21; // x20
  UnityEngine_GameObject_o *v22; // x19

  if ( (byte_4B41C44 & 1) == 0 )
  {
    sub_1BDB878(&NGUITools_TypeInfo, parent);
    sub_1BDB878(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v6);
    sub_1BDB878(&Method_UnityEngine_Resources_Load_GameObject___, v7);
    sub_1BDB878(&ServantStatusQuestBoardManager_TypeInfo, v8);
    byte_4B41C44 = 1;
  }
  loadPrefab = (UnityEngine_Object_o *)this->fields.loadPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(loadPrefab, 0LL, 0LL) )
  {
    v10 = (ServantStatusQuestBoardManager_o *)sub_1BDBAC4(ServantStatusQuestBoardManager_TypeInfo);
    ServantStatusQuestBoardManager___ctor(v10, 0LL);
    this->fields.questBoardManager = v10;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.questBoardManager, (int32_t)v10, v11, v12);
    object = UnityEngine_Resources__Load_object_(
               this->fields.questBoardPrefabPath,
               (const MethodInfo_30CD6D0 *)Method_UnityEngine_Resources_Load_GameObject___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v14 = UnityEngine_Object__Instantiate_object_(
            object,
            (const MethodInfo_30BDAA4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    this->fields.loadPrefab = (struct UnityEngine_GameObject_o *)v14;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.loadPrefab, (int32_t)v14, v15, v16);
    v17 = this->fields.loadPrefab;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    GameObjectExtensions__SetParent_35216820(v17, gameObject, 0LL);
    v20 = this->fields.loadPrefab;
    if ( !v20 )
LABEL_14:
      sub_1BDBAD4(v20, v19);
    UnityEngine_GameObject__SetActive(v20, 0, 0LL);
  }
  v21 = this->fields.loadPrefab;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  v20 = NGUITools__AddChild_48644132(parent, v21, 0LL);
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

  if ( (byte_4B41C46 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__Dispose__, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__MoveNext__, v3);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__get_Current__, v4);
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__GetEnumerator__, v5);
    byte_4B41C46 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  questBoardList = this->fields.questBoardList;
  if ( !questBoardList )
    sub_1BDBAD4(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    (System_Collections_Generic_List_object__o *)questBoardList,
    (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v8,
            (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__MoveNext__) )
  {
    if ( !v8.fields._current )
      sub_1BDBAD4(0LL, v7);
    ServantStatusQuestBoardDraw__OnChangeAlphaAnim(
      (ServantStatusQuestBoardDraw_o *)v8.fields._current,
      this->fields.questBoardManager,
      0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__Dispose__);
}


void __fastcall ServantStatusListViewItemDrawServantQuest__OnDestroy(
        ServantStatusListViewItemDrawServantQuest_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *loadPrefab; // x21
  UnityEngine_Object_o *v5; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  __int64 v8; // x0
  __int64 v9; // x1
  struct System_Collections_Generic_List_ServantStatusQuestBoardDraw__o *questBoardList; // x8
  int32_t size; // w2
  int v12; // w9

  if ( (byte_4B41C43 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Clear__, method);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v3);
    byte_4B41C43 = 1;
  }
  loadPrefab = (UnityEngine_Object_o *)this->fields.loadPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(loadPrefab, 0LL, 0LL) )
  {
    v5 = (UnityEngine_Object_o *)this->fields.loadPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70284200(v5, 0LL);
    this->fields.loadPrefab = 0LL;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.loadPrefab, 0, v6, v7);
    questBoardList = this->fields.questBoardList;
    if ( !questBoardList )
      sub_1BDBAD4(v8, v9);
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
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  UnityEngine_GameObject_o *svtCoinBase; // x0
  UILabel_o *explanationLabel; // x21
  UILabel_o *explanation2Label; // x21
  struct ServantEntity_o *svtEntity; // x8
  struct UISprite_o *baseSprite; // x8
  UnityEngine_GameObject_o *v29; // x22
  int32_t mHeight; // w28
  float v31; // s0
  float v32; // s1
  float v33; // s14
  float v34; // s9
  float v35; // s0
  float v36; // s1
  float v37; // s2
  float v38; // s8
  float v39; // s10
  float v40; // s15
  float v41; // s0
  float v42; // s1
  float v43; // s2
  float v44; // s13
  float y; // s11
  int klass; // w29
  const MethodInfo_39166A8 **v47; // x27
  ServantLimitImageMaster_o *v48; // x20
  MapControl_QuestInfo_o *v49; // x25
  unsigned int v50; // w21
  __int64 v51; // x26
  MapControl_QuestInfo_o *v52; // x24
  const MethodInfo *v53; // x2
  UILabel_o *v54; // x26
  const MethodInfo_39166A8 **v55; // x23
  UnityEngine_GameObject_o *v56; // x27
  Il2CppObject *Component_object; // x26
  UnityEngine_Transform_o *v58; // x27
  ServantStatusListViewItemDrawServantQuest_c *v59; // x8
  int32_t v60; // w29
  UnityEngine_GameObject_o *inputMessageObject; // x27
  ServantStatusQuestBoardManager_o *questBoardManager; // x28
  int32_t v63; // w2
  const MethodInfo *v64; // x3
  __int64 v65; // x8
  _QWORD *v66; // x9
  __int64 klass_low; // x10
  int32_t v68; // w28
  __int64 v69; // x8
  int32_t QuestBoardPitch; // w8
  UnityEngine_GameObject_o *v71; // x23
  UnityEngine_Transform_o *v72; // x24
  Il2CppObject *v73; // x23
  int32_t v74; // w2
  const MethodInfo *v75; // x3
  __int64 v76; // x8
  _QWORD *v77; // x9
  __int64 v78; // x10
  __int64 v79; // x8
  int32_t v80; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v81; // x27
  MapControl_QuestInfo_o *v82; // x25
  unsigned int i; // w21
  __int64 v84; // x26
  MapControl_QuestInfo_o *v85; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *v86; // x23
  UnityEngine_GameObject_o *v87; // x27
  Il2CppObject *v88; // x26
  UnityEngine_Transform_o *v89; // x27
  ServantStatusListViewItemDrawServantQuest_c *v90; // x8
  int32_t v91; // w29
  UnityEngine_GameObject_o *v92; // x27
  ServantStatusQuestBoardManager_o *v93; // x28
  int32_t v94; // w2
  const MethodInfo *v95; // x3
  __int64 v96; // x8
  _QWORD *v97; // x9
  __int64 v98; // x10
  int32_t v99; // w28
  __int64 v100; // x8
  int32_t v101; // w8
  UnityEngine_GameObject_o *v102; // x24
  UnityEngine_Transform_o *v103; // x25
  Il2CppObject *v104; // x24
  int32_t v105; // w2
  const MethodInfo *v106; // x3
  __int64 v107; // x8
  _QWORD *v108; // x9
  __int64 v109; // x10
  __int64 v110; // x8
  int32_t v111; // w8
  const MethodInfo *v112; // x4
  Il2CppObject *Master_object; // x24
  int64_t v114; // x25
  MapControl_QuestInfo_o *v115; // x25
  unsigned int j; // w21
  __int64 v117; // x26
  MapControl_QuestInfo_o *v118; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *v119; // x20
  UnityEngine_GameObject_o *v120; // x27
  Il2CppObject *v121; // x26
  UnityEngine_Transform_o *v122; // x27
  ServantStatusListViewItemDrawServantQuest_c *v123; // x8
  int32_t v124; // w23
  UnityEngine_GameObject_o *v125; // x27
  ServantStatusQuestBoardManager_o *v126; // x28
  int32_t v127; // w2
  const MethodInfo *v128; // x3
  __int64 v129; // x8
  _QWORD *v130; // x9
  __int64 v131; // x10
  __int64 v132; // x8
  int32_t v133; // w8
  UILabel_o *svtCoinExplanationLabel; // x20
  float reinforcementPosition; // [xsp+14h] [xbp-DCh]
  float reinforcementPosition_4; // [xsp+18h] [xbp-D8h]
  UnityEngine_GameObject_o *v137; // [xsp+20h] [xbp-D0h]
  int v138; // [xsp+2Ch] [xbp-C4h]
  ServantStatusListViewItem_o *v139; // [xsp+30h] [xbp-C0h]
  int v140; // [xsp+3Ch] [xbp-B4h]
  int v141; // [xsp+3Ch] [xbp-B4h]
  int v142; // [xsp+3Ch] [xbp-B4h]
  Il2CppObject *v143; // [xsp+40h] [xbp-B0h] BYREF
  Il2CppObject *entity; // [xsp+48h] [xbp-A8h] BYREF
  UnityEngine_Vector3_o v145; // 0:x2.12
  UnityEngine_Vector2_o v146; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v148; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v149; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v150; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v151; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v152; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v153; // 0:s2.4,4:s3.4,8:s4.4
  UnityEngine_Vector3_o v154; // 0:s5.4,4:s6.4,8:s7.4

  if ( (byte_4B41C45 & 1) == 0 )
  {
    sub_1BDB878(&BalanceConfig_TypeInfo, item);
    sub_1BDB878(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v7);
    sub_1BDB878(&Method_DataManager_GetMaster_QuestExtensionMaster___, v8);
    sub_1BDB878(&Method_DataManager_GetMaster_QuestMaster___, v9);
    sub_1BDB878(&Method_DataManager_GetMaster_UserQuestMaster___, v10);
    sub_1BDB878(&DataManager_TypeInfo, v11);
    sub_1BDB878(&Method_DataMasterBase_QuestExtensionMaster__QuestExtensionEntity__int__TryGetEntity__, v12);
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponent_ServantStatusQuestBoardDraw___, v13);
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Add__, v14);
    sub_1BDB878(&LocalizationManager_TypeInfo, v15);
    sub_1BDB878(&NetworkManager_TypeInfo, v16);
    sub_1BDB878(&ServantStatusListViewItemDrawServantQuest_TypeInfo, v17);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_1BDB878(&Method_SingletonTemplate_QuestTree__get_Instance__, v19);
    sub_1BDB878(&StringLiteral_11896/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_INTERLUDE"*/, v20);
    sub_1BDB878(&StringLiteral_11898/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_RAINFORCEMENT"*/, v21);
    sub_1BDB878(&StringLiteral_11899/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_SVT_COIN"*/, v22);
    sub_1BDB878(&StringLiteral_11897/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_LIMIT_LIBERATION"*/, v23);
    byte_4B41C45 = 1;
  }
  v143 = 0LL;
  entity = 0LL;
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
        svtCoinBase = UnityEngine_GameObject__get_gameObject(svtCoinBase, 0LL);
        if ( !svtCoinBase )
          goto LABEL_156;
        UnityEngine_GameObject__SetActive(svtCoinBase, 0, 0LL);
        explanationLabel = this->fields.explanationLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        svtCoinBase = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11896/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_INTERLUDE"*/, 0LL);
        if ( !explanationLabel )
          goto LABEL_156;
        UILabel__set_text(explanationLabel, (System_String_o *)svtCoinBase, 0LL);
        explanation2Label = this->fields.explanation2Label;
        svtCoinBase = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11898/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_RAINFORCEMENT"*/, 0LL);
        if ( !explanation2Label )
          goto LABEL_156;
        UILabel__set_text(explanation2Label, (System_String_o *)svtCoinBase, 0LL);
        if ( item->fields.svtEntity )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          svtCoinBase = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_QuestMaster___);
          svtEntity = item->fields.svtEntity;
          if ( svtEntity )
          {
            if ( svtCoinBase )
            {
              svtCoinBase = (UnityEngine_GameObject_o *)QuestMaster__GetQuestEntityList(
                                                          (QuestMaster_o *)svtCoinBase,
                                                          svtEntity->fields.relateQuestIds,
                                                          0LL);
              baseSprite = this->fields.baseSprite;
              if ( baseSprite )
              {
                v29 = svtCoinBase;
                svtCoinBase = (UnityEngine_GameObject_o *)this->fields.baseCollider;
                if ( svtCoinBase )
                {
                  mHeight = baseSprite->fields.mHeight;
                  *(UnityEngine_Vector3_o *)&v31 = UnityEngine_BoxCollider__get_size(
                                                     (UnityEngine_BoxCollider_o *)svtCoinBase,
                                                     0LL);
                  svtCoinBase = this->fields.titleBase;
                  if ( svtCoinBase )
                  {
                    v33 = v31;
                    v34 = v32;
                    svtCoinBase = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(svtCoinBase, 0LL);
                    if ( svtCoinBase )
                    {
                      *(UnityEngine_Vector3_o *)&v35 = UnityEngine_Transform__get_localPosition(
                                                         (UnityEngine_Transform_o *)svtCoinBase,
                                                         0LL);
                      svtCoinBase = this->fields.rainforcementBase;
                      if ( svtCoinBase )
                      {
                        v38 = v35;
                        v39 = v36;
                        v40 = v37;
                        svtCoinBase = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                                    svtCoinBase,
                                                                    0LL);
                        if ( svtCoinBase )
                        {
                          *(UnityEngine_Vector3_o *)&v41 = UnityEngine_Transform__get_localPosition(
                                                             (UnityEngine_Transform_o *)svtCoinBase,
                                                             0LL);
                          svtCoinBase = this->fields.svtCoinBase;
                          if ( svtCoinBase )
                          {
                            v44 = v42;
                            reinforcementPosition = v41;
                            reinforcementPosition_4 = v43;
                            svtCoinBase = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                                        svtCoinBase,
                                                                        0LL);
                            if ( svtCoinBase )
                            {
                              localPosition = UnityEngine_Transform__get_localPosition(
                                                (UnityEngine_Transform_o *)svtCoinBase,
                                                0LL);
                              y = localPosition.fields.y;
                              v139 = item;
                              if ( item->fields.userSvtCollectionEntity )
                              {
                                if ( !v29 )
                                  goto LABEL_156;
                                klass = (int)v29[1].klass;
                              }
                              else
                              {
                                klass = 0;
                              }
                              svtCoinBase = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                              if ( svtCoinBase )
                              {
                                svtCoinBase = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                                            (DataManager_o *)svtCoinBase,
                                                                            (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
                                v138 = klass;
                                if ( klass < 1 )
                                  goto LABEL_59;
                                if ( !v29 )
                                  goto LABEL_156;
                                v140 = 0;
                                v47 = (const MethodInfo_39166A8 **)&Method_SingletonTemplate_QuestTree__get_Instance__;
                                v48 = (ServantLimitImageMaster_o *)svtCoinBase;
                                v49 = 0LL;
                                v50 = 0;
                                v137 = v29;
                                do
                                {
                                  if ( v50 >= LODWORD(v29[1].klass) )
LABEL_157:
                                    sub_1BDBADC(svtCoinBase, item, *(_QWORD *)&v145.fields.x);
                                  v51 = *((_QWORD *)&v29[1].monitor + (int)v50);
                                  svtCoinBase = (UnityEngine_GameObject_o *)SingletonTemplate_object___get_Instance(*v47);
                                  if ( !v51 || !svtCoinBase )
                                    goto LABEL_156;
                                  svtCoinBase = (UnityEngine_GameObject_o *)QuestTree__GetQuestInfo(
                                                                              (QuestTree_o *)svtCoinBase,
                                                                              *(_DWORD *)(v51 + 16),
                                                                              0LL);
                                  if ( svtCoinBase
                                    && (v52 = (MapControl_QuestInfo_o *)svtCoinBase,
                                        svtCoinBase = (UnityEngine_GameObject_o *)MapControl_QuestInfo__GetQuestType(
                                                                                    (MapControl_QuestInfo_o *)svtCoinBase,
                                                                                    0LL),
                                        (_DWORD)svtCoinBase == 3) )
                                  {
                                    if ( !v48 )
                                      goto LABEL_156;
                                    if ( ServantLimitImageMaster__IsLimitCountSealQuest(v48, *(_DWORD *)(v51 + 16), 0LL) )
                                    {
                                      v54 = this->fields.explanationLabel;
                                      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                      svtCoinBase = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                                  (System_String_o *)StringLiteral_11897/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_LIMIT_LIBERATION"*/,
                                                                                  0LL);
                                      if ( !v54 )
                                        goto LABEL_156;
                                      UILabel__set_text(v54, (System_String_o *)svtCoinBase, 0LL);
                                    }
                                    v55 = v47;
                                    svtCoinBase = ServantStatusListViewItemDrawServantQuest__CreateQuestBoardPrefab(
                                                    this,
                                                    this->fields.interludeQuestBase,
                                                    v53);
                                    if ( !svtCoinBase )
                                      goto LABEL_156;
                                    v56 = svtCoinBase;
                                    Component_object = UnityEngine_GameObject__GetComponent_object_(
                                                         svtCoinBase,
                                                         (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusQuestBoardDraw___);
                                    svtCoinBase = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                                                v56,
                                                                                0LL);
                                    v58 = (UnityEngine_Transform_o *)svtCoinBase;
                                    v59 = ServantStatusListViewItemDrawServantQuest_TypeInfo;
                                    if ( !ServantStatusListViewItemDrawServantQuest_TypeInfo->_2.cctor_finished )
                                    {
                                      j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawServantQuest_TypeInfo);
                                      v59 = ServantStatusListViewItemDrawServantQuest_TypeInfo;
                                    }
                                    if ( !v58 )
                                      goto LABEL_156;
                                    v148.fields.x = 0.0;
                                    v148.fields.z = 0.0;
                                    v60 = mHeight;
                                    v148.fields.y = (float)-(v59->static_fields->QuestBoardPitch * v140
                                                           + v59->static_fields->QuestBoardSize / 2);
                                    UnityEngine_Transform__set_localPosition(v58, v148, 0LL);
                                    inputMessageObject = this->fields.inputMessageObject;
                                    questBoardManager = this->fields.questBoardManager;
                                    svtCoinBase = (UnityEngine_GameObject_o *)ServantStatusListViewItem__get_LimitCount(
                                                                                v139,
                                                                                0LL);
                                    if ( !Component_object )
                                      goto LABEL_156;
                                    ServantStatusQuestBoardDraw__SetItem(
                                      (ServantStatusQuestBoardDraw_o *)Component_object,
                                      v52,
                                      v49,
                                      inputMessageObject,
                                      questBoardManager,
                                      (int32_t)svtCoinBase,
                                      0LL);
                                    svtCoinBase = (UnityEngine_GameObject_o *)this->fields.questBoardList;
                                    if ( !svtCoinBase )
                                      goto LABEL_156;
                                    v65 = *(_QWORD *)&svtCoinBase->fields.m_CachedPtr;
                                    v66 = Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Add__;
                                    ++HIDWORD(svtCoinBase[1].klass);
                                    if ( !v65 )
                                      goto LABEL_156;
                                    klass_low = SLODWORD(svtCoinBase[1].klass);
                                    v68 = v60;
                                    klass = v138;
                                    v47 = v55;
                                    if ( (unsigned int)klass_low >= *(_DWORD *)(v65 + 24) )
                                    {
                                      System_Collections_Generic_List_object___AddWithResize(
                                        (System_Collections_Generic_List_object__o *)svtCoinBase,
                                        Component_object,
                                        *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v66[4] + 192LL) + 112LL));
                                    }
                                    else
                                    {
                                      v69 = v65 + 8 * klass_low;
                                      LODWORD(svtCoinBase[1].klass) = klass_low + 1;
                                      *(_QWORD *)(v69 + 32) = Component_object;
                                      sub_1BDB81C(
                                        (CGThumbnailListItem_o *)(v69 + 32),
                                        (int32_t)Component_object,
                                        v63,
                                        v64);
                                    }
                                    v29 = v137;
                                    QuestBoardPitch = ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardPitch;
                                    mHeight = QuestBoardPitch + v68;
                                    v34 = v34 + (float)QuestBoardPitch;
                                    v44 = v44 - (float)QuestBoardPitch;
                                    y = y - (float)QuestBoardPitch;
                                    v39 = v39 + (float)(QuestBoardPitch / 2);
                                    ++v140;
                                  }
                                  else
                                  {
                                    v52 = v49;
                                  }
                                  ++v50;
                                  v49 = v52;
                                }
                                while ( klass != v50 );
                                if ( !v140 )
                                {
LABEL_59:
                                  svtCoinBase = ServantStatusListViewItemDrawServantQuest__CreateQuestBoardPrefab(
                                                  this,
                                                  this->fields.interludeQuestBase,
                                                  *(const MethodInfo **)&v145.fields.x);
                                  if ( !svtCoinBase )
                                    goto LABEL_156;
                                  v71 = svtCoinBase;
                                  svtCoinBase = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                                              svtCoinBase,
                                                                              0LL);
                                  v72 = (UnityEngine_Transform_o *)svtCoinBase;
                                  if ( !ServantStatusListViewItemDrawServantQuest_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawServantQuest_TypeInfo);
                                  if ( !v72 )
                                    goto LABEL_156;
                                  v149.fields.x = 0.0;
                                  v149.fields.z = 0.0;
                                  v149.fields.y = (float)(ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardSize
                                                        / -2);
                                  UnityEngine_Transform__set_localPosition(v72, v149, 0LL);
                                  svtCoinBase = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                              v71,
                                                                              (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusQuestBoardDraw___);
                                  if ( !svtCoinBase )
                                    goto LABEL_156;
                                  v73 = (Il2CppObject *)svtCoinBase;
                                  ServantStatusQuestBoardDraw__SetDark(
                                    (ServantStatusQuestBoardDraw_o *)svtCoinBase,
                                    0LL);
                                  svtCoinBase = (UnityEngine_GameObject_o *)this->fields.questBoardList;
                                  if ( !svtCoinBase )
                                    goto LABEL_156;
                                  v76 = *(_QWORD *)&svtCoinBase->fields.m_CachedPtr;
                                  v77 = Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Add__;
                                  ++HIDWORD(svtCoinBase[1].klass);
                                  if ( !v76 )
                                    goto LABEL_156;
                                  v78 = SLODWORD(svtCoinBase[1].klass);
                                  if ( (unsigned int)v78 >= *(_DWORD *)(v76 + 24) )
                                  {
                                    System_Collections_Generic_List_object___AddWithResize(
                                      (System_Collections_Generic_List_object__o *)svtCoinBase,
                                      v73,
                                      *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v77[4] + 192LL) + 112LL));
                                  }
                                  else
                                  {
                                    v79 = v76 + 8 * v78;
                                    LODWORD(svtCoinBase[1].klass) = v78 + 1;
                                    *(_QWORD *)(v79 + 32) = v73;
                                    sub_1BDB81C((CGThumbnailListItem_o *)(v79 + 32), (int32_t)v73, v74, v75);
                                  }
                                  v80 = ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardPitch;
                                  mHeight += v80;
                                  v34 = v34 + (float)v80;
                                  v44 = v44 - (float)v80;
                                  v39 = v39 + (float)(v80 / 2);
                                  y = y - (float)v80;
                                }
                                if ( !DataManager_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                                svtCoinBase = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_QuestExtensionMaster___);
                                v81 = (DataMasterBase_TMaster__TEntity__PKType__o *)svtCoinBase;
                                if ( klass < 1 )
                                  goto LABEL_98;
                                if ( !v29 )
                                  goto LABEL_156;
                                v141 = 0;
                                v82 = 0LL;
                                for ( i = 0; i != klass; ++i )
                                {
                                  if ( i >= LODWORD(v29[1].klass) )
                                    goto LABEL_157;
                                  v84 = *((_QWORD *)&v29[1].monitor + (int)i);
                                  svtCoinBase = (UnityEngine_GameObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
                                  if ( !v84 || !svtCoinBase )
                                    goto LABEL_156;
                                  svtCoinBase = (UnityEngine_GameObject_o *)QuestTree__GetQuestInfo(
                                                                              (QuestTree_o *)svtCoinBase,
                                                                              *(_DWORD *)(v84 + 16),
                                                                              0LL);
                                  if ( !svtCoinBase )
                                    goto LABEL_80;
                                  v85 = (MapControl_QuestInfo_o *)svtCoinBase;
                                  svtCoinBase = (UnityEngine_GameObject_o *)MapControl_QuestInfo__GetQuestType(
                                                                              (MapControl_QuestInfo_o *)svtCoinBase,
                                                                              0LL);
                                  if ( (_DWORD)svtCoinBase == 3 )
                                    goto LABEL_80;
                                  if ( !v81 )
                                    goto LABEL_156;
                                  if ( !DataMasterBase_object__object__int___TryGetEntity(
                                          v81,
                                          &entity,
                                          *(_DWORD *)(v84 + 16),
                                          (const MethodInfo_32E1E88 *)Method_DataMasterBase_QuestExtensionMaster__QuestExtensionEntity__int__TryGetEntity__) )
                                    goto LABEL_85;
                                  svtCoinBase = (UnityEngine_GameObject_o *)entity;
                                  if ( !entity )
                                    goto LABEL_156;
                                  svtCoinBase = (UnityEngine_GameObject_o *)QuestExtensionEntity__IsSvtCoinQuest(
                                                                              (QuestExtensionEntity_o *)entity,
                                                                              0LL);
                                  if ( ((unsigned __int8)svtCoinBase & 1) != 0 )
                                  {
LABEL_80:
                                    v85 = v82;
                                  }
                                  else
                                  {
LABEL_85:
                                    v86 = v81;
                                    svtCoinBase = ServantStatusListViewItemDrawServantQuest__CreateQuestBoardPrefab(
                                                    this,
                                                    this->fields.rainforcementQuestBase,
                                                    *(const MethodInfo **)&v145.fields.x);
                                    if ( !svtCoinBase )
                                      goto LABEL_156;
                                    v87 = svtCoinBase;
                                    v88 = UnityEngine_GameObject__GetComponent_object_(
                                            svtCoinBase,
                                            (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusQuestBoardDraw___);
                                    svtCoinBase = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                                                v87,
                                                                                0LL);
                                    v89 = (UnityEngine_Transform_o *)svtCoinBase;
                                    v90 = ServantStatusListViewItemDrawServantQuest_TypeInfo;
                                    if ( !ServantStatusListViewItemDrawServantQuest_TypeInfo->_2.cctor_finished )
                                    {
                                      j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawServantQuest_TypeInfo);
                                      v90 = ServantStatusListViewItemDrawServantQuest_TypeInfo;
                                    }
                                    if ( !v89 )
                                      goto LABEL_156;
                                    v150.fields.x = 0.0;
                                    v150.fields.z = 0.0;
                                    v91 = mHeight;
                                    v150.fields.y = (float)-(v90->static_fields->QuestBoardPitch * v141
                                                           + v90->static_fields->QuestBoardSize / 2);
                                    UnityEngine_Transform__set_localPosition(v89, v150, 0LL);
                                    v92 = this->fields.inputMessageObject;
                                    v93 = this->fields.questBoardManager;
                                    svtCoinBase = (UnityEngine_GameObject_o *)ServantStatusListViewItem__get_LimitCount(
                                                                                v139,
                                                                                0LL);
                                    if ( !v88 )
                                      goto LABEL_156;
                                    ServantStatusQuestBoardDraw__SetItem(
                                      (ServantStatusQuestBoardDraw_o *)v88,
                                      v85,
                                      v82,
                                      v92,
                                      v93,
                                      (int32_t)svtCoinBase,
                                      0LL);
                                    svtCoinBase = (UnityEngine_GameObject_o *)this->fields.questBoardList;
                                    if ( !svtCoinBase )
                                      goto LABEL_156;
                                    v96 = *(_QWORD *)&svtCoinBase->fields.m_CachedPtr;
                                    v97 = Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Add__;
                                    ++HIDWORD(svtCoinBase[1].klass);
                                    if ( !v96 )
                                      goto LABEL_156;
                                    v98 = SLODWORD(svtCoinBase[1].klass);
                                    v99 = v91;
                                    klass = v138;
                                    v81 = v86;
                                    if ( (unsigned int)v98 >= *(_DWORD *)(v96 + 24) )
                                    {
                                      System_Collections_Generic_List_object___AddWithResize(
                                        (System_Collections_Generic_List_object__o *)svtCoinBase,
                                        v88,
                                        *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v97[4] + 192LL) + 112LL));
                                    }
                                    else
                                    {
                                      v100 = v96 + 8 * v98;
                                      LODWORD(svtCoinBase[1].klass) = v98 + 1;
                                      *(_QWORD *)(v100 + 32) = v88;
                                      sub_1BDB81C((CGThumbnailListItem_o *)(v100 + 32), (int32_t)v88, v94, v95);
                                    }
                                    v101 = ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardPitch;
                                    mHeight = v101 + v99;
                                    v34 = v34 + (float)v101;
                                    y = y - (float)v101;
                                    v39 = v39 + (float)(v101 / 2);
                                    ++v141;
                                  }
                                  v82 = v85;
                                }
                                if ( !v141 )
                                {
LABEL_98:
                                  svtCoinBase = ServantStatusListViewItemDrawServantQuest__CreateQuestBoardPrefab(
                                                  this,
                                                  this->fields.rainforcementQuestBase,
                                                  *(const MethodInfo **)&v145.fields.x);
                                  if ( !svtCoinBase )
                                    goto LABEL_156;
                                  v102 = svtCoinBase;
                                  svtCoinBase = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                                              svtCoinBase,
                                                                              0LL);
                                  v103 = (UnityEngine_Transform_o *)svtCoinBase;
                                  if ( !ServantStatusListViewItemDrawServantQuest_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawServantQuest_TypeInfo);
                                  if ( !v103 )
                                    goto LABEL_156;
                                  v151.fields.x = 0.0;
                                  v151.fields.z = 0.0;
                                  v151.fields.y = (float)(ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardSize
                                                        / -2);
                                  UnityEngine_Transform__set_localPosition(v103, v151, 0LL);
                                  svtCoinBase = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                              v102,
                                                                              (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusQuestBoardDraw___);
                                  if ( !svtCoinBase )
                                    goto LABEL_156;
                                  v104 = (Il2CppObject *)svtCoinBase;
                                  ServantStatusQuestBoardDraw__SetDark(
                                    (ServantStatusQuestBoardDraw_o *)svtCoinBase,
                                    0LL);
                                  svtCoinBase = (UnityEngine_GameObject_o *)this->fields.questBoardList;
                                  if ( !svtCoinBase )
                                    goto LABEL_156;
                                  v107 = *(_QWORD *)&svtCoinBase->fields.m_CachedPtr;
                                  v108 = Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Add__;
                                  ++HIDWORD(svtCoinBase[1].klass);
                                  if ( !v107 )
                                    goto LABEL_156;
                                  v109 = SLODWORD(svtCoinBase[1].klass);
                                  if ( (unsigned int)v109 >= *(_DWORD *)(v107 + 24) )
                                  {
                                    System_Collections_Generic_List_object___AddWithResize(
                                      (System_Collections_Generic_List_object__o *)svtCoinBase,
                                      v104,
                                      *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v108[4] + 192LL) + 112LL));
                                  }
                                  else
                                  {
                                    v110 = v107 + 8 * v109;
                                    LODWORD(svtCoinBase[1].klass) = v109 + 1;
                                    *(_QWORD *)(v110 + 32) = v104;
                                    sub_1BDB81C((CGThumbnailListItem_o *)(v110 + 32), (int32_t)v104, v105, v106);
                                  }
                                  v111 = ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardPitch;
                                  mHeight += v111;
                                  v34 = v34 + (float)v111;
                                  v39 = v39 + (float)(v111 / 2);
                                }
                                svtCoinBase = (UnityEngine_GameObject_o *)v139->fields.svtEntity;
                                if ( svtCoinBase )
                                {
                                  if ( !ServantEntity__checkIsHeroineSvt((ServantEntity_o *)svtCoinBase, 0LL) )
                                  {
LABEL_155:
                                    v154.fields.z = reinforcementPosition_4;
                                    v153.fields.x = v38;
                                    v154.fields.x = reinforcementPosition;
                                    v146.fields.x = v33;
                                    v146.fields.y = v34;
                                    v153.fields.y = v39;
                                    v153.fields.z = v40;
                                    v154.fields.y = v44;
                                    ServantStatusListViewItemDrawServantQuest__AdjustLayout(
                                      this,
                                      mHeight,
                                      v146,
                                      v153,
                                      v154,
                                      v145,
                                      v112);
                                    return;
                                  }
                                  if ( !DataManager_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                                  Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_UserQuestMaster___);
                                  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                                  if ( !byte_4B3ED56 )
                                  {
                                    sub_1BDB878(&NetworkManager_TypeInfo, item);
                                    byte_4B3ED56 = 1;
                                  }
                                  svtCoinBase = (UnityEngine_GameObject_o *)NetworkManager_TypeInfo;
                                  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                                    svtCoinBase = (UnityEngine_GameObject_o *)NetworkManager_TypeInfo;
                                  }
                                  v114 = *(_QWORD *)(*(_QWORD *)&svtCoinBase[7].fields.m_CachedPtr + 64LL);
                                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                                  if ( Master_object )
                                  {
                                    svtCoinBase = (UnityEngine_GameObject_o *)UserQuestMaster__getClearCountsFromId(
                                                                                (UserQuestMaster_o *)Master_object,
                                                                                v114,
                                                                                BalanceConfig_TypeInfo->static_fields->SvtCoinQuestOpenQuestId,
                                                                                0LL);
                                    if ( (int)svtCoinBase < 1 || klass < 1 )
                                      goto LABEL_155;
                                    if ( v29 )
                                    {
                                      v142 = 0;
                                      v115 = 0LL;
                                      for ( j = 0; j != klass; ++j )
                                      {
                                        if ( j >= LODWORD(v29[1].klass) )
                                          goto LABEL_157;
                                        v117 = *((_QWORD *)&v29[1].monitor + (int)j);
                                        svtCoinBase = (UnityEngine_GameObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
                                        if ( !v117 || !svtCoinBase )
                                          goto LABEL_156;
                                        svtCoinBase = (UnityEngine_GameObject_o *)QuestTree__GetQuestInfo(
                                                                                    (QuestTree_o *)svtCoinBase,
                                                                                    *(_DWORD *)(v117 + 16),
                                                                                    0LL);
                                        if ( !svtCoinBase )
                                          goto LABEL_143;
                                        if ( !v81 )
                                          goto LABEL_156;
                                        v118 = (MapControl_QuestInfo_o *)svtCoinBase;
                                        svtCoinBase = (UnityEngine_GameObject_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                                    v81,
                                                                                    &v143,
                                                                                    *(_DWORD *)(v117 + 16),
                                                                                    (const MethodInfo_32E1E88 *)Method_DataMasterBase_QuestExtensionMaster__QuestExtensionEntity__int__TryGetEntity__);
                                        if ( ((unsigned __int8)svtCoinBase & 1) == 0 )
                                          goto LABEL_143;
                                        svtCoinBase = (UnityEngine_GameObject_o *)v143;
                                        if ( !v143 )
                                          goto LABEL_156;
                                        svtCoinBase = (UnityEngine_GameObject_o *)QuestExtensionEntity__IsSvtCoinQuest(
                                                                                    (QuestExtensionEntity_o *)v143,
                                                                                    0LL);
                                        if ( ((unsigned __int8)svtCoinBase & 1) != 0 )
                                        {
                                          v119 = v81;
                                          svtCoinBase = ServantStatusListViewItemDrawServantQuest__CreateQuestBoardPrefab(
                                                          this,
                                                          this->fields.svtCoinQuestBase,
                                                          *(const MethodInfo **)&v145.fields.x);
                                          if ( !svtCoinBase )
                                            goto LABEL_156;
                                          v120 = svtCoinBase;
                                          v121 = UnityEngine_GameObject__GetComponent_object_(
                                                   svtCoinBase,
                                                   (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusQuestBoardDraw___);
                                          svtCoinBase = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                                                      v120,
                                                                                      0LL);
                                          v122 = (UnityEngine_Transform_o *)svtCoinBase;
                                          v123 = ServantStatusListViewItemDrawServantQuest_TypeInfo;
                                          if ( !ServantStatusListViewItemDrawServantQuest_TypeInfo->_2.cctor_finished )
                                          {
                                            j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawServantQuest_TypeInfo);
                                            v123 = ServantStatusListViewItemDrawServantQuest_TypeInfo;
                                          }
                                          if ( !v122 )
                                            goto LABEL_156;
                                          v152.fields.x = 0.0;
                                          v152.fields.z = 0.0;
                                          v124 = mHeight;
                                          v152.fields.y = (float)-(v123->static_fields->QuestBoardPitch * v142
                                                                 + v123->static_fields->QuestBoardSize / 2);
                                          UnityEngine_Transform__set_localPosition(v122, v152, 0LL);
                                          v125 = this->fields.inputMessageObject;
                                          v126 = this->fields.questBoardManager;
                                          svtCoinBase = (UnityEngine_GameObject_o *)ServantStatusListViewItem__get_LimitCount(
                                                                                      v139,
                                                                                      0LL);
                                          if ( !v121 )
                                            goto LABEL_156;
                                          ServantStatusQuestBoardDraw__SetItem(
                                            (ServantStatusQuestBoardDraw_o *)v121,
                                            v118,
                                            v115,
                                            v125,
                                            v126,
                                            (int32_t)svtCoinBase,
                                            0LL);
                                          svtCoinBase = (UnityEngine_GameObject_o *)this->fields.questBoardList;
                                          if ( !svtCoinBase )
                                            goto LABEL_156;
                                          v129 = *(_QWORD *)&svtCoinBase->fields.m_CachedPtr;
                                          v130 = Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Add__;
                                          ++HIDWORD(svtCoinBase[1].klass);
                                          if ( !v129 )
                                            goto LABEL_156;
                                          v81 = v119;
                                          v131 = SLODWORD(svtCoinBase[1].klass);
                                          if ( (unsigned int)v131 >= *(_DWORD *)(v129 + 24) )
                                          {
                                            System_Collections_Generic_List_object___AddWithResize(
                                              (System_Collections_Generic_List_object__o *)svtCoinBase,
                                              v121,
                                              *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v130[4] + 192LL) + 112LL));
                                          }
                                          else
                                          {
                                            v132 = v129 + 8 * v131;
                                            LODWORD(svtCoinBase[1].klass) = v131 + 1;
                                            *(_QWORD *)(v132 + 32) = v121;
                                            sub_1BDB81C((CGThumbnailListItem_o *)(v132 + 32), (int32_t)v121, v127, v128);
                                          }
                                          v133 = ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardPitch;
                                          mHeight = v133 + v124;
                                          v34 = v34 + (float)v133;
                                          v39 = v39 + (float)(v133 / 2);
                                          ++v142;
                                        }
                                        else
                                        {
LABEL_143:
                                          v118 = v115;
                                        }
                                        v115 = v118;
                                      }
                                      if ( v142 < 1 )
                                        goto LABEL_155;
                                      svtCoinBase = this->fields.svtCoinBase;
                                      if ( svtCoinBase )
                                      {
                                        svtCoinBase = UnityEngine_GameObject__get_gameObject(svtCoinBase, 0LL);
                                        if ( svtCoinBase )
                                        {
                                          UnityEngine_GameObject__SetActive(svtCoinBase, 1, 0LL);
                                          svtCoinExplanationLabel = this->fields.svtCoinExplanationLabel;
                                          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                          svtCoinBase = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                                      (System_String_o *)StringLiteral_11899/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_SVT_COIN"*/,
                                                                                      0LL);
                                          if ( svtCoinExplanationLabel )
                                          {
                                            UILabel__set_text(
                                              svtCoinExplanationLabel,
                                              (System_String_o *)svtCoinBase,
                                              0LL);
                                            mHeight += 38;
                                            v34 = v34 + 38.0;
                                            v39 = v39 + 19.0;
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
          sub_1BDBAD4(svtCoinBase, item);
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

  if ( (byte_4B41C47 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__Dispose__, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__MoveNext__, v3);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__get_Current__, v4);
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__GetEnumerator__, v5);
    byte_4B41C47 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  questBoardManager = this->fields.questBoardManager;
  if ( questBoardManager )
  {
    if ( ServantStatusQuestBoardManager__UpdateAlphaAnim(questBoardManager, 0LL) )
      ServantStatusListViewItemDrawServantQuest__OnChangeAlphaAnim(this, v7);
    questBoardList = this->fields.questBoardList;
    if ( !questBoardList )
      sub_1BDBAD4(0LL, v7);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v10,
      (System_Collections_Generic_List_object__o *)questBoardList,
      (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v10,
              (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__MoveNext__) )
    {
      if ( !v10.fields._current )
        sub_1BDBAD4(0LL, v9);
      ServantStatusQuestBoardDraw__UpdateItem(
        (ServantStatusQuestBoardDraw_o *)v10.fields._current,
        this->fields.questBoardManager,
        0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v10,
      (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__Dispose__);
  }
}