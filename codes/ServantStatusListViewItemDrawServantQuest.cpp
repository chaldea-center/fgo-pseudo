void __fastcall ServantStatusListViewItemDrawServantQuest___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4A4BCEA & 1) == 0 )
  {
    sub_1B863B8(&ServantStatusListViewItemDrawServantQuest_TypeInfo, v1);
    byte_4A4BCEA = 1;
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

  if ( (byte_4A4BCE9 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw___ctor__, method);
    sub_1B863B8(&System_Collections_Generic_List_ServantStatusQuestBoardDraw__TypeInfo, v3);
    byte_4A4BCE9 = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_ServantStatusQuestBoardDraw__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw___ctor__);
  this->fields.questBoardList = (struct System_Collections_Generic_List_ServantStatusQuestBoardDraw__o *)v4;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.questBoardList, (int32_t)v4, v5, v6);
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
    sub_1B86614(baseSprite, *(_QWORD *)&baseHeight);
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

  if ( (byte_4A4BCE5 & 1) == 0 )
  {
    sub_1B863B8(&NGUITools_TypeInfo, parent);
    sub_1B863B8(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v6);
    sub_1B863B8(&Method_UnityEngine_Resources_Load_GameObject___, v7);
    sub_1B863B8(&ServantStatusQuestBoardManager_TypeInfo, v8);
    byte_4A4BCE5 = 1;
  }
  loadPrefab = (UnityEngine_Object_o *)this->fields.loadPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(loadPrefab, 0LL, 0LL) )
  {
    v10 = (ServantStatusQuestBoardManager_o *)sub_1B86604(ServantStatusQuestBoardManager_TypeInfo);
    ServantStatusQuestBoardManager___ctor(v10, 0LL);
    this->fields.questBoardManager = v10;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.questBoardManager, (int32_t)v10, v11, v12);
    object = UnityEngine_Resources__Load_object_(
               this->fields.questBoardPrefabPath,
               (const MethodInfo_30059F0 *)Method_UnityEngine_Resources_Load_GameObject___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v14 = UnityEngine_Object__Instantiate_object_(
            object,
            (const MethodInfo_2FF5DC4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    this->fields.loadPrefab = (struct UnityEngine_GameObject_o *)v14;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.loadPrefab, (int32_t)v14, v15, v16);
    v17 = this->fields.loadPrefab;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    GameObjectExtensions__SetParent_34388108(v17, gameObject, 0LL);
    v20 = this->fields.loadPrefab;
    if ( !v20 )
LABEL_14:
      sub_1B86614(v20, v19);
    UnityEngine_GameObject__SetActive(v20, 0, 0LL);
  }
  v21 = this->fields.loadPrefab;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  v20 = NGUITools__AddChild_47850048(parent, v21, 0LL);
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

  if ( (byte_4A4BCE7 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__Dispose__, method);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__MoveNext__, v3);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__get_Current__, v4);
    sub_1B863B8(&Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__GetEnumerator__, v5);
    byte_4A4BCE7 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  questBoardList = this->fields.questBoardList;
  if ( !questBoardList )
    sub_1B86614(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    (System_Collections_Generic_List_object__o *)questBoardList,
    (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v8,
            (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__MoveNext__) )
  {
    if ( !v8.fields._current )
      sub_1B86614(0LL, v7);
    ServantStatusQuestBoardDraw__OnChangeAlphaAnim(
      (ServantStatusQuestBoardDraw_o *)v8.fields._current,
      this->fields.questBoardManager,
      0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__Dispose__);
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

  if ( (byte_4A4BCE4 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Clear__, method);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v3);
    byte_4A4BCE4 = 1;
  }
  loadPrefab = (UnityEngine_Object_o *)this->fields.loadPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(loadPrefab, 0LL, 0LL) )
  {
    v5 = (UnityEngine_Object_o *)this->fields.loadPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69356292(v5, 0LL);
    this->fields.loadPrefab = 0LL;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.loadPrefab, 0, v6, v7);
    questBoardList = this->fields.questBoardList;
    if ( !questBoardList )
      sub_1B86614(v8, v9);
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
  const MethodInfo *v47; // x2
  const MethodInfo_3839AA0 **v48; // x27
  ServantLimitImageMaster_o *v49; // x20
  MapControl_QuestInfo_o *v50; // x25
  unsigned int v51; // w21
  __int64 v52; // x26
  MapControl_QuestInfo_o *v53; // x24
  const MethodInfo *v54; // x2
  UILabel_o *v55; // x26
  const MethodInfo_3839AA0 **v56; // x23
  UnityEngine_GameObject_o *v57; // x27
  Il2CppObject *Component_object; // x26
  UnityEngine_Transform_o *v59; // x27
  ServantStatusListViewItemDrawServantQuest_c *v60; // x8
  int32_t v61; // w29
  UnityEngine_GameObject_o *inputMessageObject; // x27
  ServantStatusQuestBoardManager_o *questBoardManager; // x28
  int32_t v64; // w2
  const MethodInfo *v65; // x3
  __int64 v66; // x8
  _QWORD *v67; // x9
  __int64 klass_low; // x10
  int32_t v69; // w28
  __int64 v70; // x8
  int32_t QuestBoardPitch; // w8
  UnityEngine_GameObject_o *v72; // x23
  UnityEngine_Transform_o *v73; // x24
  Il2CppObject *v74; // x23
  int32_t v75; // w2
  const MethodInfo *v76; // x3
  __int64 v77; // x8
  _QWORD *v78; // x9
  __int64 v79; // x10
  __int64 v80; // x8
  int32_t v81; // w8
  const MethodInfo *v82; // x2
  DataMasterBase_TMaster__TEntity__PKType__o *v83; // x27
  MapControl_QuestInfo_o *v84; // x25
  unsigned int i; // w21
  __int64 v86; // x26
  MapControl_QuestInfo_o *v87; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *v88; // x23
  UnityEngine_GameObject_o *v89; // x27
  Il2CppObject *v90; // x26
  UnityEngine_Transform_o *v91; // x27
  ServantStatusListViewItemDrawServantQuest_c *v92; // x8
  int32_t v93; // w29
  UnityEngine_GameObject_o *v94; // x27
  ServantStatusQuestBoardManager_o *v95; // x28
  int32_t v96; // w2
  const MethodInfo *v97; // x3
  __int64 v98; // x8
  _QWORD *v99; // x9
  __int64 v100; // x10
  int32_t v101; // w28
  __int64 v102; // x8
  int32_t v103; // w8
  UnityEngine_GameObject_o *v104; // x24
  UnityEngine_Transform_o *v105; // x25
  Il2CppObject *v106; // x24
  int32_t v107; // w2
  const MethodInfo *v108; // x3
  __int64 v109; // x8
  _QWORD *v110; // x9
  __int64 v111; // x10
  __int64 v112; // x8
  int32_t v113; // w8
  const MethodInfo *v114; // x4
  Il2CppObject *Master_object; // x24
  int64_t v116; // x25
  MapControl_QuestInfo_o *v117; // x25
  unsigned int j; // w21
  __int64 v119; // x26
  MapControl_QuestInfo_o *v120; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *v121; // x20
  UnityEngine_GameObject_o *v122; // x27
  Il2CppObject *v123; // x26
  UnityEngine_Transform_o *v124; // x27
  ServantStatusListViewItemDrawServantQuest_c *v125; // x8
  int32_t v126; // w23
  UnityEngine_GameObject_o *v127; // x27
  ServantStatusQuestBoardManager_o *v128; // x28
  int32_t v129; // w2
  const MethodInfo *v130; // x3
  __int64 v131; // x8
  _QWORD *v132; // x9
  __int64 v133; // x10
  __int64 v134; // x8
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
  UnityEngine_Vector3_o v147; // 0:x2.12
  UnityEngine_Vector2_o v148; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v150; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v151; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v152; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v153; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v154; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v155; // 0:s2.4,4:s3.4,8:s4.4
  UnityEngine_Vector3_o v156; // 0:s5.4,4:s6.4,8:s7.4

  if ( (byte_4A4BCE6 & 1) == 0 )
  {
    sub_1B863B8(&BalanceConfig_TypeInfo, item);
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v7);
    sub_1B863B8(&Method_DataManager_GetMaster_QuestExtensionMaster___, v8);
    sub_1B863B8(&Method_DataManager_GetMaster_QuestMaster___, v9);
    sub_1B863B8(&Method_DataManager_GetMaster_UserQuestMaster___, v10);
    sub_1B863B8(&DataManager_TypeInfo, v11);
    sub_1B863B8(&Method_DataMasterBase_QuestExtensionMaster__QuestExtensionEntity__int__TryGetEntity__, v12);
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponent_ServantStatusQuestBoardDraw___, v13);
    sub_1B863B8(&Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Add__, v14);
    sub_1B863B8(&LocalizationManager_TypeInfo, v15);
    sub_1B863B8(&NetworkManager_TypeInfo, v16);
    sub_1B863B8(&ServantStatusListViewItemDrawServantQuest_TypeInfo, v17);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_1B863B8(&Method_SingletonTemplate_QuestTree__get_Instance__, v19);
    sub_1B863B8(&StringLiteral_11722/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_INTERLUDE"*/, v20);
    sub_1B863B8(&StringLiteral_11724/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_RAINFORCEMENT"*/, v21);
    sub_1B863B8(&StringLiteral_11725/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_SVT_COIN"*/, v22);
    sub_1B863B8(&StringLiteral_11723/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_LIMIT_LIBERATION"*/, v23);
    byte_4A4BCE6 = 1;
  }
  v145 = 0LL;
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
        svtCoinBase = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11722/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_INTERLUDE"*/, 0LL);
        if ( !explanationLabel )
          goto LABEL_156;
        UILabel__set_text(explanationLabel, (System_String_o *)svtCoinBase, 0LL);
        explanation2Label = this->fields.explanation2Label;
        svtCoinBase = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11724/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_RAINFORCEMENT"*/, 0LL);
        if ( !explanation2Label )
          goto LABEL_156;
        UILabel__set_text(explanation2Label, (System_String_o *)svtCoinBase, 0LL);
        if ( item->fields.svtEntity )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          svtCoinBase = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_QuestMaster___);
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
                              v141 = item;
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
                              svtCoinBase = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                              if ( svtCoinBase )
                              {
                                svtCoinBase = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                                            (DataManager_o *)svtCoinBase,
                                                                            (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
                                v140 = klass;
                                if ( klass < 1 )
                                  goto LABEL_59;
                                if ( !v29 )
                                  goto LABEL_156;
                                v142 = 0;
                                v48 = (const MethodInfo_3839AA0 **)&Method_SingletonTemplate_QuestTree__get_Instance__;
                                v49 = (ServantLimitImageMaster_o *)svtCoinBase;
                                v50 = 0LL;
                                v51 = 0;
                                v139 = v29;
                                do
                                {
                                  if ( v51 >= LODWORD(v29[1].klass) )
LABEL_157:
                                    sub_1B8661C(svtCoinBase, item);
                                  v52 = *((_QWORD *)&v29[1].monitor + (int)v51);
                                  svtCoinBase = (UnityEngine_GameObject_o *)SingletonTemplate_object___get_Instance(*v48);
                                  if ( !v52 || !svtCoinBase )
                                    goto LABEL_156;
                                  svtCoinBase = (UnityEngine_GameObject_o *)QuestTree__GetQuestInfo(
                                                                              (QuestTree_o *)svtCoinBase,
                                                                              *(_DWORD *)(v52 + 16),
                                                                              0LL);
                                  if ( svtCoinBase
                                    && (v53 = (MapControl_QuestInfo_o *)svtCoinBase,
                                        svtCoinBase = (UnityEngine_GameObject_o *)MapControl_QuestInfo__GetQuestType(
                                                                                    (MapControl_QuestInfo_o *)svtCoinBase,
                                                                                    0LL),
                                        (_DWORD)svtCoinBase == 3) )
                                  {
                                    if ( !v49 )
                                      goto LABEL_156;
                                    if ( ServantLimitImageMaster__IsLimitCountSealQuest(v49, *(_DWORD *)(v52 + 16), 0LL) )
                                    {
                                      v55 = this->fields.explanationLabel;
                                      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                      svtCoinBase = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                                  (System_String_o *)StringLiteral_11723/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_LIMIT_LIBERATION"*/,
                                                                                  0LL);
                                      if ( !v55 )
                                        goto LABEL_156;
                                      UILabel__set_text(v55, (System_String_o *)svtCoinBase, 0LL);
                                    }
                                    v56 = v48;
                                    svtCoinBase = ServantStatusListViewItemDrawServantQuest__CreateQuestBoardPrefab(
                                                    this,
                                                    this->fields.interludeQuestBase,
                                                    v54);
                                    if ( !svtCoinBase )
                                      goto LABEL_156;
                                    v57 = svtCoinBase;
                                    Component_object = UnityEngine_GameObject__GetComponent_object_(
                                                         svtCoinBase,
                                                         (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusQuestBoardDraw___);
                                    svtCoinBase = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                                                v57,
                                                                                0LL);
                                    v59 = (UnityEngine_Transform_o *)svtCoinBase;
                                    v60 = ServantStatusListViewItemDrawServantQuest_TypeInfo;
                                    if ( !ServantStatusListViewItemDrawServantQuest_TypeInfo->_2.cctor_finished )
                                    {
                                      j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawServantQuest_TypeInfo);
                                      v60 = ServantStatusListViewItemDrawServantQuest_TypeInfo;
                                    }
                                    if ( !v59 )
                                      goto LABEL_156;
                                    v150.fields.x = 0.0;
                                    v150.fields.z = 0.0;
                                    v61 = mHeight;
                                    v150.fields.y = (float)-(v60->static_fields->QuestBoardPitch * v142
                                                           + v60->static_fields->QuestBoardSize / 2);
                                    UnityEngine_Transform__set_localPosition(v59, v150, 0LL);
                                    inputMessageObject = this->fields.inputMessageObject;
                                    questBoardManager = this->fields.questBoardManager;
                                    svtCoinBase = (UnityEngine_GameObject_o *)ServantStatusListViewItem__get_LimitCount(
                                                                                v141,
                                                                                0LL);
                                    if ( !Component_object )
                                      goto LABEL_156;
                                    ServantStatusQuestBoardDraw__SetItem(
                                      (ServantStatusQuestBoardDraw_o *)Component_object,
                                      v53,
                                      v50,
                                      inputMessageObject,
                                      questBoardManager,
                                      (int32_t)svtCoinBase,
                                      0LL);
                                    svtCoinBase = (UnityEngine_GameObject_o *)this->fields.questBoardList;
                                    if ( !svtCoinBase )
                                      goto LABEL_156;
                                    v66 = *(_QWORD *)&svtCoinBase->fields.m_CachedPtr;
                                    v67 = Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Add__;
                                    ++HIDWORD(svtCoinBase[1].klass);
                                    if ( !v66 )
                                      goto LABEL_156;
                                    klass_low = SLODWORD(svtCoinBase[1].klass);
                                    v69 = v61;
                                    klass = v140;
                                    v48 = v56;
                                    if ( (unsigned int)klass_low >= *(_DWORD *)(v66 + 24) )
                                    {
                                      System_Collections_Generic_List_object___AddWithResize(
                                        (System_Collections_Generic_List_object__o *)svtCoinBase,
                                        Component_object,
                                        *(const MethodInfo_35FC958 **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
                                    }
                                    else
                                    {
                                      v70 = v66 + 8 * klass_low;
                                      LODWORD(svtCoinBase[1].klass) = klass_low + 1;
                                      *(_QWORD *)(v70 + 32) = Component_object;
                                      sub_1B8635C(
                                        (CGThumbnailListItem_o *)(v70 + 32),
                                        (int32_t)Component_object,
                                        v64,
                                        v65);
                                    }
                                    v29 = v139;
                                    QuestBoardPitch = ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardPitch;
                                    mHeight = QuestBoardPitch + v69;
                                    v34 = v34 + (float)QuestBoardPitch;
                                    v44 = v44 - (float)QuestBoardPitch;
                                    y = y - (float)QuestBoardPitch;
                                    v39 = v39 + (float)(QuestBoardPitch / 2);
                                    ++v142;
                                  }
                                  else
                                  {
                                    v53 = v50;
                                  }
                                  ++v51;
                                  v50 = v53;
                                }
                                while ( klass != v51 );
                                if ( !v142 )
                                {
LABEL_59:
                                  svtCoinBase = ServantStatusListViewItemDrawServantQuest__CreateQuestBoardPrefab(
                                                  this,
                                                  this->fields.interludeQuestBase,
                                                  v47);
                                  if ( !svtCoinBase )
                                    goto LABEL_156;
                                  v72 = svtCoinBase;
                                  svtCoinBase = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                                              svtCoinBase,
                                                                              0LL);
                                  v73 = (UnityEngine_Transform_o *)svtCoinBase;
                                  if ( !ServantStatusListViewItemDrawServantQuest_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawServantQuest_TypeInfo);
                                  if ( !v73 )
                                    goto LABEL_156;
                                  v151.fields.x = 0.0;
                                  v151.fields.z = 0.0;
                                  v151.fields.y = (float)(ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardSize
                                                        / -2);
                                  UnityEngine_Transform__set_localPosition(v73, v151, 0LL);
                                  svtCoinBase = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                              v72,
                                                                              (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusQuestBoardDraw___);
                                  if ( !svtCoinBase )
                                    goto LABEL_156;
                                  v74 = (Il2CppObject *)svtCoinBase;
                                  ServantStatusQuestBoardDraw__SetDark(
                                    (ServantStatusQuestBoardDraw_o *)svtCoinBase,
                                    0LL);
                                  svtCoinBase = (UnityEngine_GameObject_o *)this->fields.questBoardList;
                                  if ( !svtCoinBase )
                                    goto LABEL_156;
                                  v77 = *(_QWORD *)&svtCoinBase->fields.m_CachedPtr;
                                  v78 = Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Add__;
                                  ++HIDWORD(svtCoinBase[1].klass);
                                  if ( !v77 )
                                    goto LABEL_156;
                                  v79 = SLODWORD(svtCoinBase[1].klass);
                                  if ( (unsigned int)v79 >= *(_DWORD *)(v77 + 24) )
                                  {
                                    System_Collections_Generic_List_object___AddWithResize(
                                      (System_Collections_Generic_List_object__o *)svtCoinBase,
                                      v74,
                                      *(const MethodInfo_35FC958 **)(*(_QWORD *)(v78[4] + 192LL) + 112LL));
                                  }
                                  else
                                  {
                                    v80 = v77 + 8 * v79;
                                    LODWORD(svtCoinBase[1].klass) = v79 + 1;
                                    *(_QWORD *)(v80 + 32) = v74;
                                    sub_1B8635C((CGThumbnailListItem_o *)(v80 + 32), (int32_t)v74, v75, v76);
                                  }
                                  v81 = ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardPitch;
                                  mHeight += v81;
                                  v34 = v34 + (float)v81;
                                  v44 = v44 - (float)v81;
                                  v39 = v39 + (float)(v81 / 2);
                                  y = y - (float)v81;
                                }
                                if ( !DataManager_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                                svtCoinBase = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_QuestExtensionMaster___);
                                v83 = (DataMasterBase_TMaster__TEntity__PKType__o *)svtCoinBase;
                                if ( klass < 1 )
                                  goto LABEL_98;
                                if ( !v29 )
                                  goto LABEL_156;
                                v143 = 0;
                                v84 = 0LL;
                                for ( i = 0; i != klass; ++i )
                                {
                                  if ( i >= LODWORD(v29[1].klass) )
                                    goto LABEL_157;
                                  v86 = *((_QWORD *)&v29[1].monitor + (int)i);
                                  svtCoinBase = (UnityEngine_GameObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3839AA0 *)Method_SingletonTemplate_QuestTree__get_Instance__);
                                  if ( !v86 || !svtCoinBase )
                                    goto LABEL_156;
                                  svtCoinBase = (UnityEngine_GameObject_o *)QuestTree__GetQuestInfo(
                                                                              (QuestTree_o *)svtCoinBase,
                                                                              *(_DWORD *)(v86 + 16),
                                                                              0LL);
                                  if ( !svtCoinBase )
                                    goto LABEL_80;
                                  v87 = (MapControl_QuestInfo_o *)svtCoinBase;
                                  svtCoinBase = (UnityEngine_GameObject_o *)MapControl_QuestInfo__GetQuestType(
                                                                              (MapControl_QuestInfo_o *)svtCoinBase,
                                                                              0LL);
                                  if ( (_DWORD)svtCoinBase == 3 )
                                    goto LABEL_80;
                                  if ( !v83 )
                                    goto LABEL_156;
                                  if ( !DataMasterBase_object__object__int___TryGetEntity(
                                          v83,
                                          &entity,
                                          *(_DWORD *)(v86 + 16),
                                          (const MethodInfo_32142CC *)Method_DataMasterBase_QuestExtensionMaster__QuestExtensionEntity__int__TryGetEntity__) )
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
                                    v87 = v84;
                                  }
                                  else
                                  {
LABEL_85:
                                    v88 = v83;
                                    svtCoinBase = ServantStatusListViewItemDrawServantQuest__CreateQuestBoardPrefab(
                                                    this,
                                                    this->fields.rainforcementQuestBase,
                                                    v82);
                                    if ( !svtCoinBase )
                                      goto LABEL_156;
                                    v89 = svtCoinBase;
                                    v90 = UnityEngine_GameObject__GetComponent_object_(
                                            svtCoinBase,
                                            (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusQuestBoardDraw___);
                                    svtCoinBase = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                                                v89,
                                                                                0LL);
                                    v91 = (UnityEngine_Transform_o *)svtCoinBase;
                                    v92 = ServantStatusListViewItemDrawServantQuest_TypeInfo;
                                    if ( !ServantStatusListViewItemDrawServantQuest_TypeInfo->_2.cctor_finished )
                                    {
                                      j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawServantQuest_TypeInfo);
                                      v92 = ServantStatusListViewItemDrawServantQuest_TypeInfo;
                                    }
                                    if ( !v91 )
                                      goto LABEL_156;
                                    v152.fields.x = 0.0;
                                    v152.fields.z = 0.0;
                                    v93 = mHeight;
                                    v152.fields.y = (float)-(v92->static_fields->QuestBoardPitch * v143
                                                           + v92->static_fields->QuestBoardSize / 2);
                                    UnityEngine_Transform__set_localPosition(v91, v152, 0LL);
                                    v94 = this->fields.inputMessageObject;
                                    v95 = this->fields.questBoardManager;
                                    svtCoinBase = (UnityEngine_GameObject_o *)ServantStatusListViewItem__get_LimitCount(
                                                                                v141,
                                                                                0LL);
                                    if ( !v90 )
                                      goto LABEL_156;
                                    ServantStatusQuestBoardDraw__SetItem(
                                      (ServantStatusQuestBoardDraw_o *)v90,
                                      v87,
                                      v84,
                                      v94,
                                      v95,
                                      (int32_t)svtCoinBase,
                                      0LL);
                                    svtCoinBase = (UnityEngine_GameObject_o *)this->fields.questBoardList;
                                    if ( !svtCoinBase )
                                      goto LABEL_156;
                                    v98 = *(_QWORD *)&svtCoinBase->fields.m_CachedPtr;
                                    v99 = Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Add__;
                                    ++HIDWORD(svtCoinBase[1].klass);
                                    if ( !v98 )
                                      goto LABEL_156;
                                    v100 = SLODWORD(svtCoinBase[1].klass);
                                    v101 = v93;
                                    klass = v140;
                                    v83 = v88;
                                    if ( (unsigned int)v100 >= *(_DWORD *)(v98 + 24) )
                                    {
                                      System_Collections_Generic_List_object___AddWithResize(
                                        (System_Collections_Generic_List_object__o *)svtCoinBase,
                                        v90,
                                        *(const MethodInfo_35FC958 **)(*(_QWORD *)(v99[4] + 192LL) + 112LL));
                                    }
                                    else
                                    {
                                      v102 = v98 + 8 * v100;
                                      LODWORD(svtCoinBase[1].klass) = v100 + 1;
                                      *(_QWORD *)(v102 + 32) = v90;
                                      sub_1B8635C((CGThumbnailListItem_o *)(v102 + 32), (int32_t)v90, v96, v97);
                                    }
                                    v103 = ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardPitch;
                                    mHeight = v103 + v101;
                                    v34 = v34 + (float)v103;
                                    y = y - (float)v103;
                                    v39 = v39 + (float)(v103 / 2);
                                    ++v143;
                                  }
                                  v84 = v87;
                                }
                                if ( !v143 )
                                {
LABEL_98:
                                  svtCoinBase = ServantStatusListViewItemDrawServantQuest__CreateQuestBoardPrefab(
                                                  this,
                                                  this->fields.rainforcementQuestBase,
                                                  v82);
                                  if ( !svtCoinBase )
                                    goto LABEL_156;
                                  v104 = svtCoinBase;
                                  svtCoinBase = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                                              svtCoinBase,
                                                                              0LL);
                                  v105 = (UnityEngine_Transform_o *)svtCoinBase;
                                  if ( !ServantStatusListViewItemDrawServantQuest_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawServantQuest_TypeInfo);
                                  if ( !v105 )
                                    goto LABEL_156;
                                  v153.fields.x = 0.0;
                                  v153.fields.z = 0.0;
                                  v153.fields.y = (float)(ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardSize
                                                        / -2);
                                  UnityEngine_Transform__set_localPosition(v105, v153, 0LL);
                                  svtCoinBase = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                              v104,
                                                                              (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusQuestBoardDraw___);
                                  if ( !svtCoinBase )
                                    goto LABEL_156;
                                  v106 = (Il2CppObject *)svtCoinBase;
                                  ServantStatusQuestBoardDraw__SetDark(
                                    (ServantStatusQuestBoardDraw_o *)svtCoinBase,
                                    0LL);
                                  svtCoinBase = (UnityEngine_GameObject_o *)this->fields.questBoardList;
                                  if ( !svtCoinBase )
                                    goto LABEL_156;
                                  v109 = *(_QWORD *)&svtCoinBase->fields.m_CachedPtr;
                                  v110 = Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Add__;
                                  ++HIDWORD(svtCoinBase[1].klass);
                                  if ( !v109 )
                                    goto LABEL_156;
                                  v111 = SLODWORD(svtCoinBase[1].klass);
                                  if ( (unsigned int)v111 >= *(_DWORD *)(v109 + 24) )
                                  {
                                    System_Collections_Generic_List_object___AddWithResize(
                                      (System_Collections_Generic_List_object__o *)svtCoinBase,
                                      v106,
                                      *(const MethodInfo_35FC958 **)(*(_QWORD *)(v110[4] + 192LL) + 112LL));
                                  }
                                  else
                                  {
                                    v112 = v109 + 8 * v111;
                                    LODWORD(svtCoinBase[1].klass) = v111 + 1;
                                    *(_QWORD *)(v112 + 32) = v106;
                                    sub_1B8635C((CGThumbnailListItem_o *)(v112 + 32), (int32_t)v106, v107, v108);
                                  }
                                  v113 = ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardPitch;
                                  mHeight += v113;
                                  v34 = v34 + (float)v113;
                                  v39 = v39 + (float)(v113 / 2);
                                }
                                svtCoinBase = (UnityEngine_GameObject_o *)v141->fields.svtEntity;
                                if ( svtCoinBase )
                                {
                                  if ( !ServantEntity__checkIsHeroineSvt((ServantEntity_o *)svtCoinBase, 0LL) )
                                  {
LABEL_155:
                                    v156.fields.z = reinforcementPosition_4;
                                    v155.fields.x = v38;
                                    v156.fields.x = reinforcementPosition;
                                    v148.fields.x = v33;
                                    v148.fields.y = v34;
                                    v155.fields.y = v39;
                                    v155.fields.z = v40;
                                    v156.fields.y = v44;
                                    ServantStatusListViewItemDrawServantQuest__AdjustLayout(
                                      this,
                                      mHeight,
                                      v148,
                                      v155,
                                      v156,
                                      v147,
                                      v114);
                                    return;
                                  }
                                  if ( !DataManager_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                                  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_UserQuestMaster___);
                                  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                                  if ( !byte_4A48C25 )
                                  {
                                    sub_1B863B8(&NetworkManager_TypeInfo, item);
                                    byte_4A48C25 = 1;
                                  }
                                  svtCoinBase = (UnityEngine_GameObject_o *)NetworkManager_TypeInfo;
                                  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                                    svtCoinBase = (UnityEngine_GameObject_o *)NetworkManager_TypeInfo;
                                  }
                                  v116 = *(_QWORD *)(*(_QWORD *)&svtCoinBase[7].fields.m_CachedPtr + 64LL);
                                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                                  if ( Master_object )
                                  {
                                    svtCoinBase = (UnityEngine_GameObject_o *)UserQuestMaster__getClearCountsFromId(
                                                                                (UserQuestMaster_o *)Master_object,
                                                                                v116,
                                                                                BalanceConfig_TypeInfo->static_fields->SvtCoinQuestOpenQuestId,
                                                                                0LL);
                                    if ( (int)svtCoinBase < 1 || klass < 1 )
                                      goto LABEL_155;
                                    if ( v29 )
                                    {
                                      v144 = 0;
                                      v117 = 0LL;
                                      for ( j = 0; j != klass; ++j )
                                      {
                                        if ( j >= LODWORD(v29[1].klass) )
                                          goto LABEL_157;
                                        v119 = *((_QWORD *)&v29[1].monitor + (int)j);
                                        svtCoinBase = (UnityEngine_GameObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3839AA0 *)Method_SingletonTemplate_QuestTree__get_Instance__);
                                        if ( !v119 || !svtCoinBase )
                                          goto LABEL_156;
                                        svtCoinBase = (UnityEngine_GameObject_o *)QuestTree__GetQuestInfo(
                                                                                    (QuestTree_o *)svtCoinBase,
                                                                                    *(_DWORD *)(v119 + 16),
                                                                                    0LL);
                                        if ( !svtCoinBase )
                                          goto LABEL_143;
                                        if ( !v83 )
                                          goto LABEL_156;
                                        v120 = (MapControl_QuestInfo_o *)svtCoinBase;
                                        svtCoinBase = (UnityEngine_GameObject_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                                    v83,
                                                                                    &v145,
                                                                                    *(_DWORD *)(v119 + 16),
                                                                                    (const MethodInfo_32142CC *)Method_DataMasterBase_QuestExtensionMaster__QuestExtensionEntity__int__TryGetEntity__);
                                        if ( ((unsigned __int8)svtCoinBase & 1) == 0 )
                                          goto LABEL_143;
                                        svtCoinBase = (UnityEngine_GameObject_o *)v145;
                                        if ( !v145 )
                                          goto LABEL_156;
                                        svtCoinBase = (UnityEngine_GameObject_o *)QuestExtensionEntity__IsSvtCoinQuest(
                                                                                    (QuestExtensionEntity_o *)v145,
                                                                                    0LL);
                                        if ( ((unsigned __int8)svtCoinBase & 1) != 0 )
                                        {
                                          v121 = v83;
                                          svtCoinBase = ServantStatusListViewItemDrawServantQuest__CreateQuestBoardPrefab(
                                                          this,
                                                          this->fields.svtCoinQuestBase,
                                                          *(const MethodInfo **)&v147.fields.x);
                                          if ( !svtCoinBase )
                                            goto LABEL_156;
                                          v122 = svtCoinBase;
                                          v123 = UnityEngine_GameObject__GetComponent_object_(
                                                   svtCoinBase,
                                                   (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusQuestBoardDraw___);
                                          svtCoinBase = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                                                      v122,
                                                                                      0LL);
                                          v124 = (UnityEngine_Transform_o *)svtCoinBase;
                                          v125 = ServantStatusListViewItemDrawServantQuest_TypeInfo;
                                          if ( !ServantStatusListViewItemDrawServantQuest_TypeInfo->_2.cctor_finished )
                                          {
                                            j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawServantQuest_TypeInfo);
                                            v125 = ServantStatusListViewItemDrawServantQuest_TypeInfo;
                                          }
                                          if ( !v124 )
                                            goto LABEL_156;
                                          v154.fields.x = 0.0;
                                          v154.fields.z = 0.0;
                                          v126 = mHeight;
                                          v154.fields.y = (float)-(v125->static_fields->QuestBoardPitch * v144
                                                                 + v125->static_fields->QuestBoardSize / 2);
                                          UnityEngine_Transform__set_localPosition(v124, v154, 0LL);
                                          v127 = this->fields.inputMessageObject;
                                          v128 = this->fields.questBoardManager;
                                          svtCoinBase = (UnityEngine_GameObject_o *)ServantStatusListViewItem__get_LimitCount(
                                                                                      v141,
                                                                                      0LL);
                                          if ( !v123 )
                                            goto LABEL_156;
                                          ServantStatusQuestBoardDraw__SetItem(
                                            (ServantStatusQuestBoardDraw_o *)v123,
                                            v120,
                                            v117,
                                            v127,
                                            v128,
                                            (int32_t)svtCoinBase,
                                            0LL);
                                          svtCoinBase = (UnityEngine_GameObject_o *)this->fields.questBoardList;
                                          if ( !svtCoinBase )
                                            goto LABEL_156;
                                          v131 = *(_QWORD *)&svtCoinBase->fields.m_CachedPtr;
                                          v132 = Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Add__;
                                          ++HIDWORD(svtCoinBase[1].klass);
                                          if ( !v131 )
                                            goto LABEL_156;
                                          v83 = v121;
                                          v133 = SLODWORD(svtCoinBase[1].klass);
                                          if ( (unsigned int)v133 >= *(_DWORD *)(v131 + 24) )
                                          {
                                            System_Collections_Generic_List_object___AddWithResize(
                                              (System_Collections_Generic_List_object__o *)svtCoinBase,
                                              v123,
                                              *(const MethodInfo_35FC958 **)(*(_QWORD *)(v132[4] + 192LL) + 112LL));
                                          }
                                          else
                                          {
                                            v134 = v131 + 8 * v133;
                                            LODWORD(svtCoinBase[1].klass) = v133 + 1;
                                            *(_QWORD *)(v134 + 32) = v123;
                                            sub_1B8635C((CGThumbnailListItem_o *)(v134 + 32), (int32_t)v123, v129, v130);
                                          }
                                          v135 = ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardPitch;
                                          mHeight = v135 + v126;
                                          v34 = v34 + (float)v135;
                                          v39 = v39 + (float)(v135 / 2);
                                          ++v144;
                                        }
                                        else
                                        {
LABEL_143:
                                          v120 = v117;
                                        }
                                        v117 = v120;
                                      }
                                      if ( v144 < 1 )
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
                                                                                      (System_String_o *)StringLiteral_11725/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_SVT_COIN"*/,
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
          sub_1B86614(svtCoinBase, item);
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

  if ( (byte_4A4BCE8 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__Dispose__, method);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__MoveNext__, v3);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__get_Current__, v4);
    sub_1B863B8(&Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__GetEnumerator__, v5);
    byte_4A4BCE8 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  questBoardManager = this->fields.questBoardManager;
  if ( questBoardManager )
  {
    if ( ServantStatusQuestBoardManager__UpdateAlphaAnim(questBoardManager, 0LL) )
      ServantStatusListViewItemDrawServantQuest__OnChangeAlphaAnim(this, v7);
    questBoardList = this->fields.questBoardList;
    if ( !questBoardList )
      sub_1B86614(0LL, v7);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v10,
      (System_Collections_Generic_List_object__o *)questBoardList,
      (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v10,
              (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__MoveNext__) )
    {
      if ( !v10.fields._current )
        sub_1B86614(0LL, v9);
      ServantStatusQuestBoardDraw__UpdateItem(
        (ServantStatusQuestBoardDraw_o *)v10.fields._current,
        this->fields.questBoardManager,
        0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v10,
      (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__Dispose__);
  }
}