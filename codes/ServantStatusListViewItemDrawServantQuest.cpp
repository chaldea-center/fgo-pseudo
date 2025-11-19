void ServantStatusListViewItemDrawServantQuest___cctor(const MethodInfo *method)
{
  if ( (byte_4CB2E8C & 1) == 0 )
  {
    sub_1C6BA08(&ServantStatusListViewItemDrawServantQuest_TypeInfo);
    byte_4CB2E8C = 1;
  }
  *ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields = (struct ServantStatusListViewItemDrawServantQuest_StaticFields)0x840000007ALL;
}


void ServantStatusListViewItemDrawServantQuest___ctor(
        ServantStatusListViewItemDrawServantQuest_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4CB2E8B & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_ServantStatusQuestBoardDraw__TypeInfo);
    byte_4CB2E8B = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_ServantStatusQuestBoardDraw__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw___ctor__);
  this->fields.questBoardList = (struct System_Collections_Generic_List_ServantStatusQuestBoardDraw__o *)v3;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.questBoardList, (int32_t)v3, v4, v5);
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
    sub_1C6BC60(baseSprite, *(_QWORD *)&baseHeight);
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
  const MethodInfo *v8; // x3
  Il2CppObject *object; // x22
  Il2CppObject *v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  UnityEngine_GameObject_o *v13; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v15; // x1
  UnityEngine_GameObject_o *v16; // x0
  UnityEngine_GameObject_o *v17; // x20
  UnityEngine_GameObject_o *v18; // x19

  if ( (byte_4CB2E87 & 1) == 0 )
  {
    sub_1C6BA08(&NGUITools_TypeInfo);
    sub_1C6BA08(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_UnityEngine_Resources_Load_GameObject___);
    sub_1C6BA08(&ServantStatusQuestBoardManager_TypeInfo);
    byte_4CB2E87 = 1;
  }
  loadPrefab = (UnityEngine_Object_o *)this->fields.loadPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(loadPrefab, 0, 0) )
  {
    v6 = (ServantStatusQuestBoardManager_o *)sub_1C6BC54(ServantStatusQuestBoardManager_TypeInfo);
    ServantStatusQuestBoardManager___ctor(v6, 0);
    this->fields.questBoardManager = v6;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.questBoardManager, (int32_t)v6, v7, v8);
    object = UnityEngine_Resources__Load_object_(
               this->fields.questBoardPrefabPath,
               (const MethodInfo_31D81C4 *)Method_UnityEngine_Resources_Load_GameObject___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v10 = UnityEngine_Object__Instantiate_object_(
            object,
            (const MethodInfo_31C7F14 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    this->fields.loadPrefab = (struct UnityEngine_GameObject_o *)v10;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.loadPrefab, (int32_t)v10, v11, v12);
    v13 = this->fields.loadPrefab;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    GameObjectExtensions__SetParent_36361856(v13, gameObject, 0);
    v16 = this->fields.loadPrefab;
    if ( !v16 )
LABEL_14:
      sub_1C6BC60(v16, v15);
    UnityEngine_GameObject__SetActive(v16, 0, 0);
  }
  v17 = this->fields.loadPrefab;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  v16 = NGUITools__AddChild_49651652(parent, v17, 0);
  if ( !v16 )
    goto LABEL_14;
  v18 = v16;
  UnityEngine_GameObject__SetActive(v16, 1, 0);
  return v18;
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

  if ( (byte_4CB2E89 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__GetEnumerator__);
    byte_4CB2E89 = 1;
  }
  memset(&v5, 0, sizeof(v5));
  questBoardList = this->fields.questBoardList;
  if ( !questBoardList )
    sub_1C6BC60(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v5,
    (System_Collections_Generic_List_object__o *)questBoardList,
    (const MethodInfo_380146C *)Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v5,
            (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__MoveNext__) )
  {
    if ( !v5.fields._current )
      sub_1C6BC60(0, v4);
    ServantStatusQuestBoardDraw__OnChangeAlphaAnim(
      (ServantStatusQuestBoardDraw_o *)v5.fields._current,
      this->fields.questBoardManager,
      0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v5,
    (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__Dispose__);
}


void ServantStatusListViewItemDrawServantQuest__OnDestroy(
        ServantStatusListViewItemDrawServantQuest_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *loadPrefab; // x21
  UnityEngine_Object_o *v4; // x21
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  __int64 v7; // x0
  __int64 v8; // x1
  struct System_Collections_Generic_List_ServantStatusQuestBoardDraw__o *questBoardList; // x8
  int32_t size; // w2
  int v11; // w9

  if ( (byte_4CB2E86 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Clear__);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB2E86 = 1;
  }
  loadPrefab = (UnityEngine_Object_o *)this->fields.loadPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(loadPrefab, 0, 0) )
  {
    v4 = (UnityEngine_Object_o *)this->fields.loadPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71659676(v4, 0);
    this->fields.loadPrefab = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.loadPrefab, 0, v5, v6);
    questBoardList = this->fields.questBoardList;
    if ( !questBoardList )
      sub_1C6BC60(v7, v8);
    size = questBoardList->fields._size;
    v11 = questBoardList->fields._version + 1;
    questBoardList->fields._size = 0;
    questBoardList->fields._version = v11;
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
  const MethodInfo_3A4F8A4 **v23; // x27
  ServantLimitImageMaster_o *v24; // x20
  MapControl_QuestInfo_o *v25; // x25
  unsigned int v26; // w21
  __int64 v27; // x26
  MapControl_QuestInfo_o *v28; // x24
  const MethodInfo *v29; // x2
  UILabel_o *v30; // x26
  const MethodInfo_3A4F8A4 **v31; // x23
  UnityEngine_GameObject_o *v32; // x27
  Il2CppObject *Component_object; // x26
  UnityEngine_Transform_o *v34; // x27
  ServantStatusListViewItemDrawServantQuest_c *v35; // x8
  int32_t v36; // w29
  UnityEngine_GameObject_o *inputMessageObject; // x27
  ServantStatusQuestBoardManager_o *questBoardManager; // x28
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  intptr_t m_CachedPtr; // x8
  _QWORD *v42; // x9
  __int64 klass_low; // x10
  int32_t v44; // w28
  intptr_t v45; // x8
  int32_t QuestBoardPitch; // w8
  UnityEngine_GameObject_o *v47; // x23
  UnityEngine_Transform_o *v48; // x24
  Il2CppObject *v49; // x23
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  intptr_t v52; // x8
  _QWORD *v53; // x9
  __int64 v54; // x10
  intptr_t v55; // x8
  int32_t v56; // w8
  const MethodInfo *v57; // x2
  DataMasterBase_TMaster__TEntity__PKType__o *v58; // x27
  MapControl_QuestInfo_o *v59; // x25
  unsigned int i; // w21
  __int64 v61; // x26
  MapControl_QuestInfo_o *v62; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *v63; // x23
  UnityEngine_GameObject_o *v64; // x27
  Il2CppObject *v65; // x26
  UnityEngine_Transform_o *v66; // x27
  ServantStatusListViewItemDrawServantQuest_c *v67; // x8
  int32_t v68; // w29
  UnityEngine_GameObject_o *v69; // x27
  ServantStatusQuestBoardManager_o *v70; // x28
  int32_t v71; // w2
  const MethodInfo *v72; // x3
  intptr_t v73; // x8
  _QWORD *v74; // x9
  __int64 v75; // x10
  int32_t v76; // w28
  intptr_t v77; // x8
  int32_t v78; // w8
  UnityEngine_GameObject_o *v79; // x24
  UnityEngine_Transform_o *v80; // x25
  Il2CppObject *v81; // x24
  int32_t v82; // w2
  const MethodInfo *v83; // x3
  intptr_t v84; // x8
  _QWORD *v85; // x9
  __int64 v86; // x10
  intptr_t v87; // x8
  int32_t v88; // w8
  UnityEngine_Vector3_o v89; // x2
  const MethodInfo *v90; // x4
  Il2CppObject *Master_object; // x24
  int64_t v92; // x25
  MapControl_QuestInfo_o *v93; // x25
  unsigned int j; // w21
  __int64 v95; // x26
  MapControl_QuestInfo_o *v96; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *v97; // x20
  UnityEngine_GameObject_o *v98; // x27
  Il2CppObject *v99; // x26
  UnityEngine_Transform_o *v100; // x27
  ServantStatusListViewItemDrawServantQuest_c *v101; // x8
  int32_t v102; // w23
  UnityEngine_GameObject_o *v103; // x27
  ServantStatusQuestBoardManager_o *v104; // x28
  int32_t v105; // w2
  const MethodInfo *v106; // x3
  intptr_t v107; // x8
  _QWORD *v108; // x9
  __int64 v109; // x10
  intptr_t v110; // x8
  int32_t v111; // w8
  UILabel_o *svtCoinExplanationLabel; // x20
  float reinforcementPosition; // [xsp+14h] [xbp-DCh]
  float reinforcementPosition_4; // [xsp+18h] [xbp-D8h]
  UnityEngine_GameObject_o *v115; // [xsp+20h] [xbp-D0h]
  int v116; // [xsp+2Ch] [xbp-C4h]
  ServantStatusListViewItem_o *v117; // [xsp+30h] [xbp-C0h]
  int v118; // [xsp+3Ch] [xbp-B4h]
  int v119; // [xsp+3Ch] [xbp-B4h]
  int v120; // [xsp+3Ch] [xbp-B4h]
  Il2CppObject *v121; // [xsp+40h] [xbp-B0h] BYREF
  Il2CppObject *entity; // [xsp+48h] [xbp-A8h] BYREF
  UnityEngine_Vector2_o v123; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v126; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v127; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v128; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v129; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v130; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v131; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v132; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v133; // 0:s2.4,4:s3.4,8:s4.4
  UnityEngine_Vector3_o v134; // 0:s5.4,4:s6.4,8:s7.4

  if ( (byte_4CB2E88 & 1) == 0 )
  {
    sub_1C6BA08(&BalanceConfig_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_QuestExtensionMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_QuestMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_UserQuestMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_DataMasterBase_QuestExtensionMaster__QuestExtensionEntity__int__TryGetEntity__);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_ServantStatusQuestBoardDraw___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Add__);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&ServantStatusListViewItemDrawServantQuest_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C6BA08(&StringLiteral_11927/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_INTERLUDE"*/);
    sub_1C6BA08(&StringLiteral_11929/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_RAINFORCEMENT"*/);
    sub_1C6BA08(&StringLiteral_11930/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_SVT_COIN"*/);
    sub_1C6BA08(&StringLiteral_11928/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_LIMIT_LIBERATION"*/);
    byte_4CB2E88 = 1;
  }
  v121 = 0;
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
        svtCoinBase = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11927/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_INTERLUDE"*/, 0);
        if ( !explanationLabel )
          goto LABEL_156;
        UILabel__set_text(explanationLabel, (System_String_o *)svtCoinBase, 0);
        explanation2Label = this->fields.explanation2Label;
        svtCoinBase = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11929/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_RAINFORCEMENT"*/, 0);
        if ( !explanation2Label )
          goto LABEL_156;
        UILabel__set_text(explanation2Label, (System_String_o *)svtCoinBase, 0);
        if ( item->fields.svtEntity )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          svtCoinBase = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_QuestMaster___);
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
                          v126 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)svtCoinBase, 0);
                          svtCoinBase = this->fields.svtCoinBase;
                          if ( svtCoinBase )
                          {
                            v19 = v126.fields.y;
                            reinforcementPosition = v126.fields.x;
                            reinforcementPosition_4 = v126.fields.z;
                            svtCoinBase = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                                        svtCoinBase,
                                                                        0);
                            if ( svtCoinBase )
                            {
                              v127 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)svtCoinBase, 0);
                              v20 = v127.fields.y;
                              v117 = item;
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
                              svtCoinBase = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                              if ( svtCoinBase )
                              {
                                svtCoinBase = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                                            (DataManager_o *)svtCoinBase,
                                                                            (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
                                v116 = klass;
                                if ( klass < 1 )
                                  goto LABEL_59;
                                if ( !v12 )
                                  goto LABEL_156;
                                v118 = 0;
                                v23 = (const MethodInfo_3A4F8A4 **)&Method_SingletonTemplate_QuestTree__get_Instance__;
                                v24 = (ServantLimitImageMaster_o *)svtCoinBase;
                                v25 = 0;
                                v26 = 0;
                                v115 = v12;
                                do
                                {
                                  if ( v26 >= LODWORD(v12[1].klass) )
LABEL_157:
                                    sub_1C6BC68(svtCoinBase);
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
                                                                                  (System_String_o *)StringLiteral_11928/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_LIMIT_LIBERATION"*/,
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
                                                         (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_ServantStatusQuestBoardDraw___);
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
                                    v128.fields.x = 0.0;
                                    v128.fields.z = 0.0;
                                    v36 = mHeight;
                                    v128.fields.y = (float)-(v35->static_fields->QuestBoardPitch * v118
                                                           + v35->static_fields->QuestBoardSize / 2);
                                    UnityEngine_Transform__set_localPosition(v34, v128, 0);
                                    inputMessageObject = this->fields.inputMessageObject;
                                    questBoardManager = this->fields.questBoardManager;
                                    svtCoinBase = (UnityEngine_GameObject_o *)ServantStatusListViewItem__get_LimitCount(
                                                                                v117,
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
                                    v42 = Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Add__;
                                    ++HIDWORD(svtCoinBase[1].klass);
                                    if ( !m_CachedPtr )
                                      goto LABEL_156;
                                    klass_low = SLODWORD(svtCoinBase[1].klass);
                                    v44 = v36;
                                    klass = v116;
                                    v23 = v31;
                                    if ( (unsigned int)klass_low >= *(_DWORD *)(m_CachedPtr + 24) )
                                    {
                                      System_Collections_Generic_List_object___AddWithResize(
                                        (System_Collections_Generic_List_object__o *)svtCoinBase,
                                        Component_object,
                                        *(const MethodInfo_3800974 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
                                    }
                                    else
                                    {
                                      v45 = m_CachedPtr + 8 * klass_low;
                                      LODWORD(svtCoinBase[1].klass) = klass_low + 1;
                                      *(_QWORD *)(v45 + 32) = Component_object;
                                      sub_1C6B9AC(
                                        (CGThumbnailListItem_o *)(v45 + 32),
                                        (int32_t)Component_object,
                                        v39,
                                        v40);
                                    }
                                    v12 = v115;
                                    QuestBoardPitch = ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardPitch;
                                    mHeight = QuestBoardPitch + v44;
                                    y = y + (float)QuestBoardPitch;
                                    v19 = v19 - (float)QuestBoardPitch;
                                    v20 = v20 - (float)QuestBoardPitch;
                                    v17 = v17 + (float)(QuestBoardPitch / 2);
                                    ++v118;
                                  }
                                  else
                                  {
                                    v28 = v25;
                                  }
                                  ++v26;
                                  v25 = v28;
                                }
                                while ( klass != v26 );
                                if ( !v118 )
                                {
LABEL_59:
                                  svtCoinBase = ServantStatusListViewItemDrawServantQuest__CreateQuestBoardPrefab(
                                                  this,
                                                  this->fields.interludeQuestBase,
                                                  v22);
                                  if ( !svtCoinBase )
                                    goto LABEL_156;
                                  v47 = svtCoinBase;
                                  svtCoinBase = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                                              svtCoinBase,
                                                                              0);
                                  v48 = (UnityEngine_Transform_o *)svtCoinBase;
                                  if ( !ServantStatusListViewItemDrawServantQuest_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawServantQuest_TypeInfo);
                                  if ( !v48 )
                                    goto LABEL_156;
                                  v129.fields.x = 0.0;
                                  v129.fields.z = 0.0;
                                  v129.fields.y = (float)(ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardSize
                                                        / -2);
                                  UnityEngine_Transform__set_localPosition(v48, v129, 0);
                                  svtCoinBase = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                              v47,
                                                                              (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_ServantStatusQuestBoardDraw___);
                                  if ( !svtCoinBase )
                                    goto LABEL_156;
                                  v49 = (Il2CppObject *)svtCoinBase;
                                  ServantStatusQuestBoardDraw__SetDark((ServantStatusQuestBoardDraw_o *)svtCoinBase, 0);
                                  svtCoinBase = (UnityEngine_GameObject_o *)this->fields.questBoardList;
                                  if ( !svtCoinBase )
                                    goto LABEL_156;
                                  v52 = svtCoinBase->fields.m_CachedPtr;
                                  v53 = Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Add__;
                                  ++HIDWORD(svtCoinBase[1].klass);
                                  if ( !v52 )
                                    goto LABEL_156;
                                  v54 = SLODWORD(svtCoinBase[1].klass);
                                  if ( (unsigned int)v54 >= *(_DWORD *)(v52 + 24) )
                                  {
                                    System_Collections_Generic_List_object___AddWithResize(
                                      (System_Collections_Generic_List_object__o *)svtCoinBase,
                                      v49,
                                      *(const MethodInfo_3800974 **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
                                  }
                                  else
                                  {
                                    v55 = v52 + 8 * v54;
                                    LODWORD(svtCoinBase[1].klass) = v54 + 1;
                                    *(_QWORD *)(v55 + 32) = v49;
                                    sub_1C6B9AC((CGThumbnailListItem_o *)(v55 + 32), (int32_t)v49, v50, v51);
                                  }
                                  v56 = ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardPitch;
                                  mHeight += v56;
                                  y = y + (float)v56;
                                  v19 = v19 - (float)v56;
                                  v17 = v17 + (float)(v56 / 2);
                                  v20 = v20 - (float)v56;
                                }
                                if ( !DataManager_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                                svtCoinBase = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_QuestExtensionMaster___);
                                v58 = (DataMasterBase_TMaster__TEntity__PKType__o *)svtCoinBase;
                                if ( klass < 1 )
                                  goto LABEL_98;
                                if ( !v12 )
                                  goto LABEL_156;
                                v119 = 0;
                                v59 = 0;
                                for ( i = 0; i != klass; ++i )
                                {
                                  if ( i >= LODWORD(v12[1].klass) )
                                    goto LABEL_157;
                                  v61 = *((_QWORD *)&v12[1].monitor + (int)i);
                                  svtCoinBase = (UnityEngine_GameObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3A4F8A4 *)Method_SingletonTemplate_QuestTree__get_Instance__);
                                  if ( !v61 || !svtCoinBase )
                                    goto LABEL_156;
                                  svtCoinBase = (UnityEngine_GameObject_o *)QuestTree__GetQuestInfo(
                                                                              (QuestTree_o *)svtCoinBase,
                                                                              *(_DWORD *)(v61 + 16),
                                                                              0);
                                  if ( !svtCoinBase )
                                    goto LABEL_80;
                                  v62 = (MapControl_QuestInfo_o *)svtCoinBase;
                                  svtCoinBase = (UnityEngine_GameObject_o *)MapControl_QuestInfo__GetQuestType(
                                                                              (MapControl_QuestInfo_o *)svtCoinBase,
                                                                              0);
                                  if ( (_DWORD)svtCoinBase == 3 )
                                    goto LABEL_80;
                                  if ( !v58 )
                                    goto LABEL_156;
                                  if ( !DataMasterBase_object__object__int___TryGetEntity(
                                          v58,
                                          &entity,
                                          *(_DWORD *)(v61 + 16),
                                          (const MethodInfo_33F9128 *)Method_DataMasterBase_QuestExtensionMaster__QuestExtensionEntity__int__TryGetEntity__) )
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
                                    v62 = v59;
                                  }
                                  else
                                  {
LABEL_85:
                                    v63 = v58;
                                    svtCoinBase = ServantStatusListViewItemDrawServantQuest__CreateQuestBoardPrefab(
                                                    this,
                                                    this->fields.rainforcementQuestBase,
                                                    v57);
                                    if ( !svtCoinBase )
                                      goto LABEL_156;
                                    v64 = svtCoinBase;
                                    v65 = UnityEngine_GameObject__GetComponent_object_(
                                            svtCoinBase,
                                            (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_ServantStatusQuestBoardDraw___);
                                    svtCoinBase = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                                                v64,
                                                                                0);
                                    v66 = (UnityEngine_Transform_o *)svtCoinBase;
                                    v67 = ServantStatusListViewItemDrawServantQuest_TypeInfo;
                                    if ( !ServantStatusListViewItemDrawServantQuest_TypeInfo->_2.cctor_finished )
                                    {
                                      j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawServantQuest_TypeInfo);
                                      v67 = ServantStatusListViewItemDrawServantQuest_TypeInfo;
                                    }
                                    if ( !v66 )
                                      goto LABEL_156;
                                    v130.fields.x = 0.0;
                                    v130.fields.z = 0.0;
                                    v68 = mHeight;
                                    v130.fields.y = (float)-(v67->static_fields->QuestBoardPitch * v119
                                                           + v67->static_fields->QuestBoardSize / 2);
                                    UnityEngine_Transform__set_localPosition(v66, v130, 0);
                                    v69 = this->fields.inputMessageObject;
                                    v70 = this->fields.questBoardManager;
                                    svtCoinBase = (UnityEngine_GameObject_o *)ServantStatusListViewItem__get_LimitCount(
                                                                                v117,
                                                                                0);
                                    if ( !v65 )
                                      goto LABEL_156;
                                    ServantStatusQuestBoardDraw__SetItem(
                                      (ServantStatusQuestBoardDraw_o *)v65,
                                      v62,
                                      v59,
                                      v69,
                                      v70,
                                      (int32_t)svtCoinBase,
                                      0);
                                    svtCoinBase = (UnityEngine_GameObject_o *)this->fields.questBoardList;
                                    if ( !svtCoinBase )
                                      goto LABEL_156;
                                    v73 = svtCoinBase->fields.m_CachedPtr;
                                    v74 = Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Add__;
                                    ++HIDWORD(svtCoinBase[1].klass);
                                    if ( !v73 )
                                      goto LABEL_156;
                                    v75 = SLODWORD(svtCoinBase[1].klass);
                                    v76 = v68;
                                    klass = v116;
                                    v58 = v63;
                                    if ( (unsigned int)v75 >= *(_DWORD *)(v73 + 24) )
                                    {
                                      System_Collections_Generic_List_object___AddWithResize(
                                        (System_Collections_Generic_List_object__o *)svtCoinBase,
                                        v65,
                                        *(const MethodInfo_3800974 **)(*(_QWORD *)(v74[4] + 192LL) + 112LL));
                                    }
                                    else
                                    {
                                      v77 = v73 + 8 * v75;
                                      LODWORD(svtCoinBase[1].klass) = v75 + 1;
                                      *(_QWORD *)(v77 + 32) = v65;
                                      sub_1C6B9AC((CGThumbnailListItem_o *)(v77 + 32), (int32_t)v65, v71, v72);
                                    }
                                    v78 = ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardPitch;
                                    mHeight = v78 + v76;
                                    y = y + (float)v78;
                                    v20 = v20 - (float)v78;
                                    v17 = v17 + (float)(v78 / 2);
                                    ++v119;
                                  }
                                  v59 = v62;
                                }
                                if ( !v119 )
                                {
LABEL_98:
                                  svtCoinBase = ServantStatusListViewItemDrawServantQuest__CreateQuestBoardPrefab(
                                                  this,
                                                  this->fields.rainforcementQuestBase,
                                                  v57);
                                  if ( !svtCoinBase )
                                    goto LABEL_156;
                                  v79 = svtCoinBase;
                                  svtCoinBase = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                                              svtCoinBase,
                                                                              0);
                                  v80 = (UnityEngine_Transform_o *)svtCoinBase;
                                  if ( !ServantStatusListViewItemDrawServantQuest_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawServantQuest_TypeInfo);
                                  if ( !v80 )
                                    goto LABEL_156;
                                  v131.fields.x = 0.0;
                                  v131.fields.z = 0.0;
                                  v131.fields.y = (float)(ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardSize
                                                        / -2);
                                  UnityEngine_Transform__set_localPosition(v80, v131, 0);
                                  svtCoinBase = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                              v79,
                                                                              (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_ServantStatusQuestBoardDraw___);
                                  if ( !svtCoinBase )
                                    goto LABEL_156;
                                  v81 = (Il2CppObject *)svtCoinBase;
                                  ServantStatusQuestBoardDraw__SetDark((ServantStatusQuestBoardDraw_o *)svtCoinBase, 0);
                                  svtCoinBase = (UnityEngine_GameObject_o *)this->fields.questBoardList;
                                  if ( !svtCoinBase )
                                    goto LABEL_156;
                                  v84 = svtCoinBase->fields.m_CachedPtr;
                                  v85 = Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Add__;
                                  ++HIDWORD(svtCoinBase[1].klass);
                                  if ( !v84 )
                                    goto LABEL_156;
                                  v86 = SLODWORD(svtCoinBase[1].klass);
                                  if ( (unsigned int)v86 >= *(_DWORD *)(v84 + 24) )
                                  {
                                    System_Collections_Generic_List_object___AddWithResize(
                                      (System_Collections_Generic_List_object__o *)svtCoinBase,
                                      v81,
                                      *(const MethodInfo_3800974 **)(*(_QWORD *)(v85[4] + 192LL) + 112LL));
                                  }
                                  else
                                  {
                                    v87 = v84 + 8 * v86;
                                    LODWORD(svtCoinBase[1].klass) = v86 + 1;
                                    *(_QWORD *)(v87 + 32) = v81;
                                    sub_1C6B9AC((CGThumbnailListItem_o *)(v87 + 32), (int32_t)v81, v82, v83);
                                  }
                                  v88 = ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardPitch;
                                  mHeight += v88;
                                  y = y + (float)v88;
                                  v17 = v17 + (float)(v88 / 2);
                                }
                                svtCoinBase = (UnityEngine_GameObject_o *)v117->fields.svtEntity;
                                if ( svtCoinBase )
                                {
                                  if ( !ServantEntity__checkIsHeroineSvt((ServantEntity_o *)svtCoinBase, 0) )
                                  {
LABEL_155:
                                    v134.fields.z = reinforcementPosition_4;
                                    v133.fields.x = v16;
                                    v134.fields.x = reinforcementPosition;
                                    v123.fields.x = x;
                                    v123.fields.y = y;
                                    v133.fields.y = v17;
                                    v133.fields.z = z;
                                    v134.fields.y = v19;
                                    ServantStatusListViewItemDrawServantQuest__AdjustLayout(
                                      this,
                                      mHeight,
                                      v123,
                                      v133,
                                      v134,
                                      v89,
                                      v90);
                                    return;
                                  }
                                  if ( !DataManager_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                                  Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_UserQuestMaster___);
                                  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                                  if ( !byte_4CB002A )
                                  {
                                    sub_1C6BA08(&NetworkManager_TypeInfo);
                                    byte_4CB002A = 1;
                                  }
                                  svtCoinBase = (UnityEngine_GameObject_o *)NetworkManager_TypeInfo;
                                  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                                    svtCoinBase = (UnityEngine_GameObject_o *)NetworkManager_TypeInfo;
                                  }
                                  v92 = *(_QWORD *)(svtCoinBase[7].fields.m_CachedPtr + 64);
                                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                                  if ( Master_object )
                                  {
                                    svtCoinBase = (UnityEngine_GameObject_o *)UserQuestMaster__getClearCountsFromId(
                                                                                (UserQuestMaster_o *)Master_object,
                                                                                v92,
                                                                                BalanceConfig_TypeInfo->static_fields->SvtCoinQuestOpenQuestId,
                                                                                0);
                                    if ( (int)svtCoinBase < 1 || klass < 1 )
                                      goto LABEL_155;
                                    if ( v12 )
                                    {
                                      v120 = 0;
                                      v93 = 0;
                                      for ( j = 0; j != klass; ++j )
                                      {
                                        if ( j >= LODWORD(v12[1].klass) )
                                          goto LABEL_157;
                                        v95 = *((_QWORD *)&v12[1].monitor + (int)j);
                                        svtCoinBase = (UnityEngine_GameObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3A4F8A4 *)Method_SingletonTemplate_QuestTree__get_Instance__);
                                        if ( !v95 || !svtCoinBase )
                                          goto LABEL_156;
                                        svtCoinBase = (UnityEngine_GameObject_o *)QuestTree__GetQuestInfo(
                                                                                    (QuestTree_o *)svtCoinBase,
                                                                                    *(_DWORD *)(v95 + 16),
                                                                                    0);
                                        if ( !svtCoinBase )
                                          goto LABEL_143;
                                        if ( !v58 )
                                          goto LABEL_156;
                                        v96 = (MapControl_QuestInfo_o *)svtCoinBase;
                                        svtCoinBase = (UnityEngine_GameObject_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                                    v58,
                                                                                    &v121,
                                                                                    *(_DWORD *)(v95 + 16),
                                                                                    (const MethodInfo_33F9128 *)Method_DataMasterBase_QuestExtensionMaster__QuestExtensionEntity__int__TryGetEntity__);
                                        if ( ((unsigned __int8)svtCoinBase & 1) == 0 )
                                          goto LABEL_143;
                                        svtCoinBase = (UnityEngine_GameObject_o *)v121;
                                        if ( !v121 )
                                          goto LABEL_156;
                                        svtCoinBase = (UnityEngine_GameObject_o *)QuestExtensionEntity__IsSvtCoinQuest(
                                                                                    (QuestExtensionEntity_o *)v121,
                                                                                    0);
                                        if ( ((unsigned __int8)svtCoinBase & 1) != 0 )
                                        {
                                          v97 = v58;
                                          svtCoinBase = ServantStatusListViewItemDrawServantQuest__CreateQuestBoardPrefab(
                                                          this,
                                                          this->fields.svtCoinQuestBase,
                                                          *(const MethodInfo **)&v89.fields.x);
                                          if ( !svtCoinBase )
                                            goto LABEL_156;
                                          v98 = svtCoinBase;
                                          v99 = UnityEngine_GameObject__GetComponent_object_(
                                                  svtCoinBase,
                                                  (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_ServantStatusQuestBoardDraw___);
                                          svtCoinBase = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                                                      v98,
                                                                                      0);
                                          v100 = (UnityEngine_Transform_o *)svtCoinBase;
                                          v101 = ServantStatusListViewItemDrawServantQuest_TypeInfo;
                                          if ( !ServantStatusListViewItemDrawServantQuest_TypeInfo->_2.cctor_finished )
                                          {
                                            j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawServantQuest_TypeInfo);
                                            v101 = ServantStatusListViewItemDrawServantQuest_TypeInfo;
                                          }
                                          if ( !v100 )
                                            goto LABEL_156;
                                          v132.fields.x = 0.0;
                                          v132.fields.z = 0.0;
                                          v102 = mHeight;
                                          v132.fields.y = (float)-(v101->static_fields->QuestBoardPitch * v120
                                                                 + v101->static_fields->QuestBoardSize / 2);
                                          UnityEngine_Transform__set_localPosition(v100, v132, 0);
                                          v103 = this->fields.inputMessageObject;
                                          v104 = this->fields.questBoardManager;
                                          svtCoinBase = (UnityEngine_GameObject_o *)ServantStatusListViewItem__get_LimitCount(
                                                                                      v117,
                                                                                      0);
                                          if ( !v99 )
                                            goto LABEL_156;
                                          ServantStatusQuestBoardDraw__SetItem(
                                            (ServantStatusQuestBoardDraw_o *)v99,
                                            v96,
                                            v93,
                                            v103,
                                            v104,
                                            (int32_t)svtCoinBase,
                                            0);
                                          svtCoinBase = (UnityEngine_GameObject_o *)this->fields.questBoardList;
                                          if ( !svtCoinBase )
                                            goto LABEL_156;
                                          v107 = svtCoinBase->fields.m_CachedPtr;
                                          v108 = Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Add__;
                                          ++HIDWORD(svtCoinBase[1].klass);
                                          if ( !v107 )
                                            goto LABEL_156;
                                          v58 = v97;
                                          v109 = SLODWORD(svtCoinBase[1].klass);
                                          if ( (unsigned int)v109 >= *(_DWORD *)(v107 + 24) )
                                          {
                                            System_Collections_Generic_List_object___AddWithResize(
                                              (System_Collections_Generic_List_object__o *)svtCoinBase,
                                              v99,
                                              *(const MethodInfo_3800974 **)(*(_QWORD *)(v108[4] + 192LL) + 112LL));
                                          }
                                          else
                                          {
                                            v110 = v107 + 8 * v109;
                                            LODWORD(svtCoinBase[1].klass) = v109 + 1;
                                            *(_QWORD *)(v110 + 32) = v99;
                                            sub_1C6B9AC((CGThumbnailListItem_o *)(v110 + 32), (int32_t)v99, v105, v106);
                                          }
                                          v111 = ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardPitch;
                                          mHeight = v111 + v102;
                                          y = y + (float)v111;
                                          v17 = v17 + (float)(v111 / 2);
                                          ++v120;
                                        }
                                        else
                                        {
LABEL_143:
                                          v96 = v93;
                                        }
                                        v93 = v96;
                                      }
                                      if ( v120 < 1 )
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
                                                                                      (System_String_o *)StringLiteral_11930/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_SVT_COIN"*/,
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
          sub_1C6BC60(svtCoinBase, item);
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

  if ( (byte_4CB2E8A & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__GetEnumerator__);
    byte_4CB2E8A = 1;
  }
  memset(&v7, 0, sizeof(v7));
  questBoardManager = this->fields.questBoardManager;
  if ( questBoardManager )
  {
    if ( ServantStatusQuestBoardManager__UpdateAlphaAnim(questBoardManager, 0) )
      ServantStatusListViewItemDrawServantQuest__OnChangeAlphaAnim(this, v4);
    questBoardList = this->fields.questBoardList;
    if ( !questBoardList )
      sub_1C6BC60(0, v4);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v7,
      (System_Collections_Generic_List_object__o *)questBoardList,
      (const MethodInfo_380146C *)Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v7,
              (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__MoveNext__) )
    {
      if ( !v7.fields._current )
        sub_1C6BC60(0, v6);
      ServantStatusQuestBoardDraw__UpdateItem(
        (ServantStatusQuestBoardDraw_o *)v7.fields._current,
        this->fields.questBoardManager,
        0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v7,
      (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__Dispose__);
  }
}