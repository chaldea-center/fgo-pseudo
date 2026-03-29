void ServantStatusListViewItemDrawServantQuest___cctor(const MethodInfo *method)
{
  if ( (byte_4D2DB97 & 1) == 0 )
  {
    sub_1C93AD4(&ServantStatusListViewItemDrawServantQuest_TypeInfo);
    byte_4D2DB97 = 1;
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

  if ( (byte_4D2DB96 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_ServantStatusQuestBoardDraw__TypeInfo);
    byte_4D2DB96 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_ServantStatusQuestBoardDraw__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw___ctor__);
  this->fields.questBoardList = (struct System_Collections_Generic_List_ServantStatusQuestBoardDraw__o *)v3;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.questBoardList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
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
    sub_1C93D2C(baseSprite, *(_QWORD *)&baseHeight);
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

  if ( (byte_4D2DB92 & 1) == 0 )
  {
    sub_1C93AD4(&NGUITools_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_Resources_Load_GameObject___);
    sub_1C93AD4(&ServantStatusQuestBoardManager_TypeInfo);
    byte_4D2DB92 = 1;
  }
  loadPrefab = (UnityEngine_Object_o *)this->fields.loadPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(loadPrefab, 0, 0) )
  {
    v6 = (ServantStatusQuestBoardManager_o *)sub_1C93D20(ServantStatusQuestBoardManager_TypeInfo);
    ServantStatusQuestBoardManager___ctor(v6, 0);
    this->fields.questBoardManager = v6;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.questBoardManager, (int32_t)v6, v7, v8, v9, v10, v11, v12);
    object = UnityEngine_Resources__Load_object_(
               this->fields.questBoardPrefabPath,
               (const MethodInfo_324111C *)Method_UnityEngine_Resources_Load_GameObject___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v14 = UnityEngine_Object__Instantiate_object_(
            object,
            (const MethodInfo_3230E6C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    this->fields.loadPrefab = (struct UnityEngine_GameObject_o *)v14;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.loadPrefab, (int32_t)v14, v15, v16, v17, v18, v19, v20);
    v21 = this->fields.loadPrefab;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    GameObjectExtensions__SetParent_36750884(v21, gameObject, 0);
    v24 = this->fields.loadPrefab;
    if ( !v24 )
LABEL_14:
      sub_1C93D2C(v24, v23);
    UnityEngine_GameObject__SetActive(v24, 0, 0);
  }
  v25 = this->fields.loadPrefab;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  v24 = NGUITools__AddChild_50075848(parent, v25, 0);
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

  if ( (byte_4D2DB94 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__GetEnumerator__);
    byte_4D2DB94 = 1;
  }
  memset(&v5, 0, sizeof(v5));
  questBoardList = this->fields.questBoardList;
  if ( !questBoardList )
    sub_1C93D2C(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v5,
    (System_Collections_Generic_List_object__o *)questBoardList,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v5,
            (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__MoveNext__) )
  {
    if ( !v5.fields._current )
      sub_1C93D2C(0, v4);
    ServantStatusQuestBoardDraw__OnChangeAlphaAnim(
      (ServantStatusQuestBoardDraw_o *)v5.fields._current,
      this->fields.questBoardManager,
      0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v5,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__Dispose__);
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

  if ( (byte_4D2DB91 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Clear__);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2DB91 = 1;
  }
  loadPrefab = (UnityEngine_Object_o *)this->fields.loadPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(loadPrefab, 0, 0) )
  {
    v4 = (UnityEngine_Object_o *)this->fields.loadPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_72119908(v4, 0);
    this->fields.loadPrefab = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.loadPrefab, 0, v5, v6, v7, v8, v9, v10);
    questBoardList = this->fields.questBoardList;
    if ( !questBoardList )
      sub_1C93D2C(v11, v12);
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
  float v14; // s9
  float y; // s10
  float v16; // s13
  float v17; // s11
  int klass; // w29
  const MethodInfo *v19; // x2
  const MethodInfo_3AC57EC **v20; // x27
  ServantLimitImageMaster_o *v21; // x20
  MapControl_QuestInfo_o *v22; // x25
  unsigned int v23; // w21
  __int64 v24; // x26
  MapControl_QuestInfo_o *v25; // x24
  const MethodInfo *v26; // x2
  UILabel_o *v27; // x26
  const MethodInfo_3AC57EC **v28; // x23
  UnityEngine_GameObject_o *v29; // x27
  Il2CppObject *Component_object; // x26
  UnityEngine_Transform_o *v31; // x27
  ServantStatusListViewItemDrawServantQuest_c *v32; // x8
  int32_t v33; // w29
  UnityEngine_GameObject_o *inputMessageObject; // x27
  ServantStatusQuestBoardManager_o *questBoardManager; // x28
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  intptr_t m_CachedPtr; // x8
  _QWORD *v43; // x9
  __int64 klass_low; // x10
  int32_t v45; // w28
  intptr_t v46; // x8
  int32_t QuestBoardPitch; // w8
  UnityEngine_GameObject_o *v48; // x23
  UnityEngine_Transform_o *v49; // x24
  Il2CppObject *v50; // x23
  int32_t v51; // w2
  int32_t v52; // w3
  System_String_o *v53; // x4
  int32_t v54; // w5
  int64_t v55; // x6
  System_String_o *v56; // x7
  intptr_t v57; // x8
  _QWORD *v58; // x9
  __int64 v59; // x10
  intptr_t v60; // x8
  int32_t v61; // w8
  const MethodInfo *v62; // x2
  DataMasterBase_TMaster__TEntity__PKType__o *v63; // x27
  MapControl_QuestInfo_o *v64; // x25
  unsigned int i; // w21
  __int64 v66; // x26
  MapControl_QuestInfo_o *v67; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *v68; // x23
  UnityEngine_GameObject_o *v69; // x27
  Il2CppObject *v70; // x26
  UnityEngine_Transform_o *v71; // x27
  ServantStatusListViewItemDrawServantQuest_c *v72; // x8
  int32_t v73; // w29
  UnityEngine_GameObject_o *v74; // x27
  ServantStatusQuestBoardManager_o *v75; // x28
  int32_t v76; // w2
  int32_t v77; // w3
  System_String_o *v78; // x4
  int32_t v79; // w5
  int64_t v80; // x6
  System_String_o *v81; // x7
  intptr_t v82; // x8
  _QWORD *v83; // x9
  __int64 v84; // x10
  int32_t v85; // w28
  intptr_t v86; // x8
  int32_t v87; // w8
  UnityEngine_GameObject_o *v88; // x24
  UnityEngine_Transform_o *v89; // x25
  Il2CppObject *v90; // x24
  int32_t v91; // w2
  int32_t v92; // w3
  System_String_o *v93; // x4
  int32_t v94; // w5
  int64_t v95; // x6
  System_String_o *v96; // x7
  intptr_t v97; // x8
  _QWORD *v98; // x9
  __int64 v99; // x10
  intptr_t v100; // x8
  int32_t v101; // w8
  const MethodInfo *v103; // x4
  Il2CppObject *Master_object; // x24
  int64_t v105; // x25
  MapControl_QuestInfo_o *v106; // x25
  unsigned int j; // w21
  __int64 v108; // x26
  MapControl_QuestInfo_o *v109; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *v110; // x20
  UnityEngine_GameObject_o *v111; // x27
  Il2CppObject *v112; // x26
  UnityEngine_Transform_o *v113; // x27
  ServantStatusListViewItemDrawServantQuest_c *v114; // x8
  int32_t v115; // w23
  UnityEngine_GameObject_o *v116; // x27
  ServantStatusQuestBoardManager_o *v117; // x28
  int32_t v118; // w2
  int32_t v119; // w3
  System_String_o *v120; // x4
  int32_t v121; // w5
  int64_t v122; // x6
  System_String_o *v123; // x7
  intptr_t v124; // x8
  _QWORD *v125; // x9
  __int64 v126; // x10
  intptr_t v127; // x8
  int32_t v128; // w8
  UILabel_o *svtCoinExplanationLabel; // x20
  unsigned __int64 size; // kr00_8
  UnityEngine_GameObject_o *v131; // [xsp+20h] [xbp-D0h]
  int v132; // [xsp+2Ch] [xbp-C4h]
  ServantStatusListViewItem_o *v133; // [xsp+30h] [xbp-C0h]
  int v134; // [xsp+3Ch] [xbp-B4h]
  int v135; // [xsp+3Ch] [xbp-B4h]
  int v136; // [xsp+3Ch] [xbp-B4h]
  Il2CppObject *v137; // [xsp+40h] [xbp-B0h] BYREF
  Il2CppObject *entity; // [xsp+48h] [xbp-A8h] BYREF
  UnityEngine_Vector3_o v139; // 0:x2.12
  UnityEngine_Vector3_o localPosition; // 0:kr14_12.12
  UnityEngine_Vector3_o v141; // 0:kr20_12.12
  UnityEngine_Vector2_o v142; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v143; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v144; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v145; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v146; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v147; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v148; // 0:s2.4,4:s3.4,8:s4.4
  UnityEngine_Vector3_o v149; // 0:s5.4,4:s6.4,8:s7.4

  if ( (byte_4D2DB93 & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_QuestExtensionMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_QuestMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_UserQuestMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_QuestExtensionMaster__QuestExtensionEntity__int__TryGetEntity__);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_ServantStatusQuestBoardDraw___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Add__);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&ServantStatusListViewItemDrawServantQuest_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C93AD4(&StringLiteral_12015/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_INTERLUDE"*/);
    sub_1C93AD4(&StringLiteral_12017/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_RAINFORCEMENT"*/);
    sub_1C93AD4(&StringLiteral_12018/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_SVT_COIN"*/);
    sub_1C93AD4(&StringLiteral_12016/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_LIMIT_LIBERATION"*/);
    byte_4D2DB93 = 1;
  }
  v137 = 0;
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
        svtCoinBase = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12015/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_INTERLUDE"*/, 0);
        if ( !explanationLabel )
          goto LABEL_156;
        UILabel__set_text(explanationLabel, (System_String_o *)svtCoinBase, 0);
        explanation2Label = this->fields.explanation2Label;
        svtCoinBase = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12017/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_RAINFORCEMENT"*/, 0);
        if ( !explanation2Label )
          goto LABEL_156;
        UILabel__set_text(explanation2Label, (System_String_o *)svtCoinBase, 0);
        if ( item->fields.svtEntity )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          svtCoinBase = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_QuestMaster___);
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
                  size = (unsigned __int64)UnityEngine_BoxCollider__get_size(
                                             (UnityEngine_BoxCollider_o *)svtCoinBase,
                                             0);
                  svtCoinBase = this->fields.titleBase;
                  if ( svtCoinBase )
                  {
                    v14 = *((float *)&size + 1);
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
                          v141 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)svtCoinBase, 0);
                          svtCoinBase = this->fields.svtCoinBase;
                          if ( svtCoinBase )
                          {
                            v16 = v141.fields.y;
                            svtCoinBase = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                                        svtCoinBase,
                                                                        0);
                            if ( svtCoinBase )
                            {
                              v17 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)svtCoinBase, 0).fields.y;
                              v133 = item;
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
                              svtCoinBase = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                              if ( svtCoinBase )
                              {
                                svtCoinBase = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                                            (DataManager_o *)svtCoinBase,
                                                                            (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
                                v132 = klass;
                                if ( klass < 1 )
                                  goto LABEL_59;
                                if ( !v12 )
                                  goto LABEL_156;
                                v134 = 0;
                                v20 = (const MethodInfo_3AC57EC **)&Method_SingletonTemplate_QuestTree__get_Instance__;
                                v21 = (ServantLimitImageMaster_o *)svtCoinBase;
                                v22 = 0;
                                v23 = 0;
                                v131 = v12;
                                do
                                {
                                  if ( v23 >= LODWORD(v12[1].klass) )
LABEL_157:
                                    sub_1C93D34(svtCoinBase);
                                  v24 = *((_QWORD *)&v12[1].monitor + (int)v23);
                                  svtCoinBase = (UnityEngine_GameObject_o *)SingletonTemplate_object___get_Instance(*v20);
                                  if ( !v24 || !svtCoinBase )
                                    goto LABEL_156;
                                  svtCoinBase = (UnityEngine_GameObject_o *)QuestTree__GetQuestInfo(
                                                                              (QuestTree_o *)svtCoinBase,
                                                                              *(_DWORD *)(v24 + 16),
                                                                              0);
                                  if ( svtCoinBase
                                    && (v25 = (MapControl_QuestInfo_o *)svtCoinBase,
                                        svtCoinBase = (UnityEngine_GameObject_o *)MapControl_QuestInfo__GetQuestType(
                                                                                    (MapControl_QuestInfo_o *)svtCoinBase,
                                                                                    0),
                                        (_DWORD)svtCoinBase == 3) )
                                  {
                                    if ( !v21 )
                                      goto LABEL_156;
                                    if ( ServantLimitImageMaster__IsLimitCountSealQuest(v21, *(_DWORD *)(v24 + 16), 0) )
                                    {
                                      v27 = this->fields.explanationLabel;
                                      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                      svtCoinBase = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                                  (System_String_o *)StringLiteral_12016/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_LIMIT_LIBERATION"*/,
                                                                                  0);
                                      if ( !v27 )
                                        goto LABEL_156;
                                      UILabel__set_text(v27, (System_String_o *)svtCoinBase, 0);
                                    }
                                    v28 = v20;
                                    svtCoinBase = ServantStatusListViewItemDrawServantQuest__CreateQuestBoardPrefab(
                                                    this,
                                                    this->fields.interludeQuestBase,
                                                    v26);
                                    if ( !svtCoinBase )
                                      goto LABEL_156;
                                    v29 = svtCoinBase;
                                    Component_object = UnityEngine_GameObject__GetComponent_object_(
                                                         svtCoinBase,
                                                         (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusQuestBoardDraw___);
                                    svtCoinBase = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                                                v29,
                                                                                0);
                                    v31 = (UnityEngine_Transform_o *)svtCoinBase;
                                    v32 = ServantStatusListViewItemDrawServantQuest_TypeInfo;
                                    if ( !ServantStatusListViewItemDrawServantQuest_TypeInfo->_2.cctor_finished )
                                    {
                                      j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawServantQuest_TypeInfo);
                                      v32 = ServantStatusListViewItemDrawServantQuest_TypeInfo;
                                    }
                                    if ( !v31 )
                                      goto LABEL_156;
                                    v143.fields.x = 0.0;
                                    v143.fields.z = 0.0;
                                    v33 = mHeight;
                                    v143.fields.y = (float)-(v32->static_fields->QuestBoardPitch * v134
                                                           + v32->static_fields->QuestBoardSize / 2);
                                    UnityEngine_Transform__set_localPosition(v31, v143, 0);
                                    inputMessageObject = this->fields.inputMessageObject;
                                    questBoardManager = this->fields.questBoardManager;
                                    svtCoinBase = (UnityEngine_GameObject_o *)ServantStatusListViewItem__get_LimitCount(
                                                                                v133,
                                                                                0);
                                    if ( !Component_object )
                                      goto LABEL_156;
                                    ServantStatusQuestBoardDraw__SetItem(
                                      (ServantStatusQuestBoardDraw_o *)Component_object,
                                      v25,
                                      v22,
                                      inputMessageObject,
                                      questBoardManager,
                                      (int32_t)svtCoinBase,
                                      0);
                                    svtCoinBase = (UnityEngine_GameObject_o *)this->fields.questBoardList;
                                    if ( !svtCoinBase )
                                      goto LABEL_156;
                                    m_CachedPtr = svtCoinBase->fields.m_CachedPtr;
                                    v43 = Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Add__;
                                    ++HIDWORD(svtCoinBase[1].klass);
                                    if ( !m_CachedPtr )
                                      goto LABEL_156;
                                    klass_low = SLODWORD(svtCoinBase[1].klass);
                                    v45 = v33;
                                    klass = v132;
                                    v20 = v28;
                                    if ( (unsigned int)klass_low >= *(_DWORD *)(m_CachedPtr + 24) )
                                    {
                                      System_Collections_Generic_List_object___AddWithResize(
                                        (System_Collections_Generic_List_object__o *)svtCoinBase,
                                        Component_object,
                                        *(const MethodInfo_387999C **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
                                    }
                                    else
                                    {
                                      v46 = m_CachedPtr + 8 * klass_low;
                                      LODWORD(svtCoinBase[1].klass) = klass_low + 1;
                                      *(_QWORD *)(v46 + 32) = Component_object;
                                      sub_1C93A78(
                                        (GrandQuestFolderBoardItem_o *)(v46 + 32),
                                        (int32_t)Component_object,
                                        v36,
                                        v37,
                                        v38,
                                        v39,
                                        v40,
                                        v41);
                                    }
                                    v12 = v131;
                                    QuestBoardPitch = ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardPitch;
                                    mHeight = QuestBoardPitch + v45;
                                    v14 = v14 + (float)QuestBoardPitch;
                                    v16 = v16 - (float)QuestBoardPitch;
                                    v17 = v17 - (float)QuestBoardPitch;
                                    y = y + (float)(QuestBoardPitch / 2);
                                    ++v134;
                                  }
                                  else
                                  {
                                    v25 = v22;
                                  }
                                  ++v23;
                                  v22 = v25;
                                }
                                while ( klass != v23 );
                                if ( !v134 )
                                {
LABEL_59:
                                  svtCoinBase = ServantStatusListViewItemDrawServantQuest__CreateQuestBoardPrefab(
                                                  this,
                                                  this->fields.interludeQuestBase,
                                                  v19);
                                  if ( !svtCoinBase )
                                    goto LABEL_156;
                                  v48 = svtCoinBase;
                                  svtCoinBase = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                                              svtCoinBase,
                                                                              0);
                                  v49 = (UnityEngine_Transform_o *)svtCoinBase;
                                  if ( !ServantStatusListViewItemDrawServantQuest_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawServantQuest_TypeInfo);
                                  if ( !v49 )
                                    goto LABEL_156;
                                  v144.fields.x = 0.0;
                                  v144.fields.z = 0.0;
                                  v144.fields.y = (float)(ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardSize
                                                        / -2);
                                  UnityEngine_Transform__set_localPosition(v49, v144, 0);
                                  svtCoinBase = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                              v48,
                                                                              (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusQuestBoardDraw___);
                                  if ( !svtCoinBase )
                                    goto LABEL_156;
                                  v50 = (Il2CppObject *)svtCoinBase;
                                  ServantStatusQuestBoardDraw__SetDark((ServantStatusQuestBoardDraw_o *)svtCoinBase, 0);
                                  svtCoinBase = (UnityEngine_GameObject_o *)this->fields.questBoardList;
                                  if ( !svtCoinBase )
                                    goto LABEL_156;
                                  v57 = svtCoinBase->fields.m_CachedPtr;
                                  v58 = Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Add__;
                                  ++HIDWORD(svtCoinBase[1].klass);
                                  if ( !v57 )
                                    goto LABEL_156;
                                  v59 = SLODWORD(svtCoinBase[1].klass);
                                  if ( (unsigned int)v59 >= *(_DWORD *)(v57 + 24) )
                                  {
                                    System_Collections_Generic_List_object___AddWithResize(
                                      (System_Collections_Generic_List_object__o *)svtCoinBase,
                                      v50,
                                      *(const MethodInfo_387999C **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
                                  }
                                  else
                                  {
                                    v60 = v57 + 8 * v59;
                                    LODWORD(svtCoinBase[1].klass) = v59 + 1;
                                    *(_QWORD *)(v60 + 32) = v50;
                                    sub_1C93A78(
                                      (GrandQuestFolderBoardItem_o *)(v60 + 32),
                                      (int32_t)v50,
                                      v51,
                                      v52,
                                      v53,
                                      v54,
                                      v55,
                                      v56);
                                  }
                                  v61 = ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardPitch;
                                  mHeight += v61;
                                  v14 = v14 + (float)v61;
                                  v16 = v16 - (float)v61;
                                  y = y + (float)(v61 / 2);
                                  v17 = v17 - (float)v61;
                                }
                                if ( !DataManager_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                                svtCoinBase = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_QuestExtensionMaster___);
                                v63 = (DataMasterBase_TMaster__TEntity__PKType__o *)svtCoinBase;
                                if ( klass < 1 )
                                  goto LABEL_98;
                                if ( !v12 )
                                  goto LABEL_156;
                                v135 = 0;
                                v64 = 0;
                                for ( i = 0; i != klass; ++i )
                                {
                                  if ( i >= LODWORD(v12[1].klass) )
                                    goto LABEL_157;
                                  v66 = *((_QWORD *)&v12[1].monitor + (int)i);
                                  svtCoinBase = (UnityEngine_GameObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
                                  if ( !v66 || !svtCoinBase )
                                    goto LABEL_156;
                                  svtCoinBase = (UnityEngine_GameObject_o *)QuestTree__GetQuestInfo(
                                                                              (QuestTree_o *)svtCoinBase,
                                                                              *(_DWORD *)(v66 + 16),
                                                                              0);
                                  if ( !svtCoinBase )
                                    goto LABEL_80;
                                  v67 = (MapControl_QuestInfo_o *)svtCoinBase;
                                  svtCoinBase = (UnityEngine_GameObject_o *)MapControl_QuestInfo__GetQuestType(
                                                                              (MapControl_QuestInfo_o *)svtCoinBase,
                                                                              0);
                                  if ( (_DWORD)svtCoinBase == 3 )
                                    goto LABEL_80;
                                  if ( !v63 )
                                    goto LABEL_156;
                                  if ( !DataMasterBase_object__object__int___TryGetEntity(
                                          v63,
                                          &entity,
                                          *(_DWORD *)(v66 + 16),
                                          (const MethodInfo_34632C0 *)Method_DataMasterBase_QuestExtensionMaster__QuestExtensionEntity__int__TryGetEntity__) )
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
                                    v67 = v64;
                                  }
                                  else
                                  {
LABEL_85:
                                    v68 = v63;
                                    svtCoinBase = ServantStatusListViewItemDrawServantQuest__CreateQuestBoardPrefab(
                                                    this,
                                                    this->fields.rainforcementQuestBase,
                                                    v62);
                                    if ( !svtCoinBase )
                                      goto LABEL_156;
                                    v69 = svtCoinBase;
                                    v70 = UnityEngine_GameObject__GetComponent_object_(
                                            svtCoinBase,
                                            (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusQuestBoardDraw___);
                                    svtCoinBase = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                                                v69,
                                                                                0);
                                    v71 = (UnityEngine_Transform_o *)svtCoinBase;
                                    v72 = ServantStatusListViewItemDrawServantQuest_TypeInfo;
                                    if ( !ServantStatusListViewItemDrawServantQuest_TypeInfo->_2.cctor_finished )
                                    {
                                      j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawServantQuest_TypeInfo);
                                      v72 = ServantStatusListViewItemDrawServantQuest_TypeInfo;
                                    }
                                    if ( !v71 )
                                      goto LABEL_156;
                                    v145.fields.x = 0.0;
                                    v145.fields.z = 0.0;
                                    v73 = mHeight;
                                    v145.fields.y = (float)-(v72->static_fields->QuestBoardPitch * v135
                                                           + v72->static_fields->QuestBoardSize / 2);
                                    UnityEngine_Transform__set_localPosition(v71, v145, 0);
                                    v74 = this->fields.inputMessageObject;
                                    v75 = this->fields.questBoardManager;
                                    svtCoinBase = (UnityEngine_GameObject_o *)ServantStatusListViewItem__get_LimitCount(
                                                                                v133,
                                                                                0);
                                    if ( !v70 )
                                      goto LABEL_156;
                                    ServantStatusQuestBoardDraw__SetItem(
                                      (ServantStatusQuestBoardDraw_o *)v70,
                                      v67,
                                      v64,
                                      v74,
                                      v75,
                                      (int32_t)svtCoinBase,
                                      0);
                                    svtCoinBase = (UnityEngine_GameObject_o *)this->fields.questBoardList;
                                    if ( !svtCoinBase )
                                      goto LABEL_156;
                                    v82 = svtCoinBase->fields.m_CachedPtr;
                                    v83 = Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Add__;
                                    ++HIDWORD(svtCoinBase[1].klass);
                                    if ( !v82 )
                                      goto LABEL_156;
                                    v84 = SLODWORD(svtCoinBase[1].klass);
                                    v85 = v73;
                                    klass = v132;
                                    v63 = v68;
                                    if ( (unsigned int)v84 >= *(_DWORD *)(v82 + 24) )
                                    {
                                      System_Collections_Generic_List_object___AddWithResize(
                                        (System_Collections_Generic_List_object__o *)svtCoinBase,
                                        v70,
                                        *(const MethodInfo_387999C **)(*(_QWORD *)(v83[4] + 192LL) + 112LL));
                                    }
                                    else
                                    {
                                      v86 = v82 + 8 * v84;
                                      LODWORD(svtCoinBase[1].klass) = v84 + 1;
                                      *(_QWORD *)(v86 + 32) = v70;
                                      sub_1C93A78(
                                        (GrandQuestFolderBoardItem_o *)(v86 + 32),
                                        (int32_t)v70,
                                        v76,
                                        v77,
                                        v78,
                                        v79,
                                        v80,
                                        v81);
                                    }
                                    v87 = ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardPitch;
                                    mHeight = v87 + v85;
                                    v14 = v14 + (float)v87;
                                    v17 = v17 - (float)v87;
                                    y = y + (float)(v87 / 2);
                                    ++v135;
                                  }
                                  v64 = v67;
                                }
                                if ( !v135 )
                                {
LABEL_98:
                                  svtCoinBase = ServantStatusListViewItemDrawServantQuest__CreateQuestBoardPrefab(
                                                  this,
                                                  this->fields.rainforcementQuestBase,
                                                  v62);
                                  if ( !svtCoinBase )
                                    goto LABEL_156;
                                  v88 = svtCoinBase;
                                  svtCoinBase = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                                              svtCoinBase,
                                                                              0);
                                  v89 = (UnityEngine_Transform_o *)svtCoinBase;
                                  if ( !ServantStatusListViewItemDrawServantQuest_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawServantQuest_TypeInfo);
                                  if ( !v89 )
                                    goto LABEL_156;
                                  v146.fields.x = 0.0;
                                  v146.fields.z = 0.0;
                                  v146.fields.y = (float)(ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardSize
                                                        / -2);
                                  UnityEngine_Transform__set_localPosition(v89, v146, 0);
                                  svtCoinBase = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                              v88,
                                                                              (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusQuestBoardDraw___);
                                  if ( !svtCoinBase )
                                    goto LABEL_156;
                                  v90 = (Il2CppObject *)svtCoinBase;
                                  ServantStatusQuestBoardDraw__SetDark((ServantStatusQuestBoardDraw_o *)svtCoinBase, 0);
                                  svtCoinBase = (UnityEngine_GameObject_o *)this->fields.questBoardList;
                                  if ( !svtCoinBase )
                                    goto LABEL_156;
                                  v97 = svtCoinBase->fields.m_CachedPtr;
                                  v98 = Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Add__;
                                  ++HIDWORD(svtCoinBase[1].klass);
                                  if ( !v97 )
                                    goto LABEL_156;
                                  v99 = SLODWORD(svtCoinBase[1].klass);
                                  if ( (unsigned int)v99 >= *(_DWORD *)(v97 + 24) )
                                  {
                                    System_Collections_Generic_List_object___AddWithResize(
                                      (System_Collections_Generic_List_object__o *)svtCoinBase,
                                      v90,
                                      *(const MethodInfo_387999C **)(*(_QWORD *)(v98[4] + 192LL) + 112LL));
                                  }
                                  else
                                  {
                                    v100 = v97 + 8 * v99;
                                    LODWORD(svtCoinBase[1].klass) = v99 + 1;
                                    *(_QWORD *)(v100 + 32) = v90;
                                    sub_1C93A78(
                                      (GrandQuestFolderBoardItem_o *)(v100 + 32),
                                      (int32_t)v90,
                                      v91,
                                      v92,
                                      v93,
                                      v94,
                                      v95,
                                      v96);
                                  }
                                  v101 = ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardPitch;
                                  mHeight += v101;
                                  v14 = v14 + (float)v101;
                                  y = y + (float)(v101 / 2);
                                }
                                svtCoinBase = (UnityEngine_GameObject_o *)v133->fields.svtEntity;
                                if ( svtCoinBase )
                                {
                                  if ( !ServantEntity__checkIsHeroineSvt((ServantEntity_o *)svtCoinBase, 0) )
                                  {
LABEL_155:
                                    v149.fields.z = v141.fields.z;
                                    v148.fields.x = localPosition.fields.x;
                                    v149.fields.x = v141.fields.x;
                                    LODWORD(v142.fields.x) = size;
                                    v142.fields.y = v14;
                                    v148.fields.y = y;
                                    v148.fields.z = localPosition.fields.z;
                                    v149.fields.y = v16;
                                    ServantStatusListViewItemDrawServantQuest__AdjustLayout(
                                      this,
                                      mHeight,
                                      v142,
                                      v148,
                                      v149,
                                      v139,
                                      v103);
                                    return;
                                  }
                                  if ( !DataManager_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                                  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_UserQuestMaster___);
                                  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                                  if ( !byte_4D2A55B )
                                  {
                                    sub_1C93AD4(&NetworkManager_TypeInfo);
                                    byte_4D2A55B = 1;
                                  }
                                  svtCoinBase = (UnityEngine_GameObject_o *)NetworkManager_TypeInfo;
                                  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                                    svtCoinBase = (UnityEngine_GameObject_o *)NetworkManager_TypeInfo;
                                  }
                                  v105 = *(_QWORD *)(svtCoinBase[7].fields.m_CachedPtr + 64);
                                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                                  if ( Master_object )
                                  {
                                    svtCoinBase = (UnityEngine_GameObject_o *)UserQuestMaster__getClearCountsFromId(
                                                                                (UserQuestMaster_o *)Master_object,
                                                                                v105,
                                                                                BalanceConfig_TypeInfo->static_fields->SvtCoinQuestOpenQuestId,
                                                                                0);
                                    if ( (int)svtCoinBase < 1 || klass < 1 )
                                      goto LABEL_155;
                                    if ( v12 )
                                    {
                                      v136 = 0;
                                      v106 = 0;
                                      for ( j = 0; j != klass; ++j )
                                      {
                                        if ( j >= LODWORD(v12[1].klass) )
                                          goto LABEL_157;
                                        v108 = *((_QWORD *)&v12[1].monitor + (int)j);
                                        svtCoinBase = (UnityEngine_GameObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
                                        if ( !v108 || !svtCoinBase )
                                          goto LABEL_156;
                                        svtCoinBase = (UnityEngine_GameObject_o *)QuestTree__GetQuestInfo(
                                                                                    (QuestTree_o *)svtCoinBase,
                                                                                    *(_DWORD *)(v108 + 16),
                                                                                    0);
                                        if ( !svtCoinBase )
                                          goto LABEL_143;
                                        if ( !v63 )
                                          goto LABEL_156;
                                        v109 = (MapControl_QuestInfo_o *)svtCoinBase;
                                        svtCoinBase = (UnityEngine_GameObject_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                                    v63,
                                                                                    &v137,
                                                                                    *(_DWORD *)(v108 + 16),
                                                                                    (const MethodInfo_34632C0 *)Method_DataMasterBase_QuestExtensionMaster__QuestExtensionEntity__int__TryGetEntity__);
                                        if ( ((unsigned __int8)svtCoinBase & 1) == 0 )
                                          goto LABEL_143;
                                        svtCoinBase = (UnityEngine_GameObject_o *)v137;
                                        if ( !v137 )
                                          goto LABEL_156;
                                        svtCoinBase = (UnityEngine_GameObject_o *)QuestExtensionEntity__IsSvtCoinQuest(
                                                                                    (QuestExtensionEntity_o *)v137,
                                                                                    0);
                                        if ( ((unsigned __int8)svtCoinBase & 1) != 0 )
                                        {
                                          v110 = v63;
                                          svtCoinBase = ServantStatusListViewItemDrawServantQuest__CreateQuestBoardPrefab(
                                                          this,
                                                          this->fields.svtCoinQuestBase,
                                                          *(const MethodInfo **)&v139.fields.x);
                                          if ( !svtCoinBase )
                                            goto LABEL_156;
                                          v111 = svtCoinBase;
                                          v112 = UnityEngine_GameObject__GetComponent_object_(
                                                   svtCoinBase,
                                                   (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusQuestBoardDraw___);
                                          svtCoinBase = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                                                      v111,
                                                                                      0);
                                          v113 = (UnityEngine_Transform_o *)svtCoinBase;
                                          v114 = ServantStatusListViewItemDrawServantQuest_TypeInfo;
                                          if ( !ServantStatusListViewItemDrawServantQuest_TypeInfo->_2.cctor_finished )
                                          {
                                            j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawServantQuest_TypeInfo);
                                            v114 = ServantStatusListViewItemDrawServantQuest_TypeInfo;
                                          }
                                          if ( !v113 )
                                            goto LABEL_156;
                                          v147.fields.x = 0.0;
                                          v147.fields.z = 0.0;
                                          v115 = mHeight;
                                          v147.fields.y = (float)-(v114->static_fields->QuestBoardPitch * v136
                                                                 + v114->static_fields->QuestBoardSize / 2);
                                          UnityEngine_Transform__set_localPosition(v113, v147, 0);
                                          v116 = this->fields.inputMessageObject;
                                          v117 = this->fields.questBoardManager;
                                          svtCoinBase = (UnityEngine_GameObject_o *)ServantStatusListViewItem__get_LimitCount(
                                                                                      v133,
                                                                                      0);
                                          if ( !v112 )
                                            goto LABEL_156;
                                          ServantStatusQuestBoardDraw__SetItem(
                                            (ServantStatusQuestBoardDraw_o *)v112,
                                            v109,
                                            v106,
                                            v116,
                                            v117,
                                            (int32_t)svtCoinBase,
                                            0);
                                          svtCoinBase = (UnityEngine_GameObject_o *)this->fields.questBoardList;
                                          if ( !svtCoinBase )
                                            goto LABEL_156;
                                          v124 = svtCoinBase->fields.m_CachedPtr;
                                          v125 = Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Add__;
                                          ++HIDWORD(svtCoinBase[1].klass);
                                          if ( !v124 )
                                            goto LABEL_156;
                                          v63 = v110;
                                          v126 = SLODWORD(svtCoinBase[1].klass);
                                          if ( (unsigned int)v126 >= *(_DWORD *)(v124 + 24) )
                                          {
                                            System_Collections_Generic_List_object___AddWithResize(
                                              (System_Collections_Generic_List_object__o *)svtCoinBase,
                                              v112,
                                              *(const MethodInfo_387999C **)(*(_QWORD *)(v125[4] + 192LL) + 112LL));
                                          }
                                          else
                                          {
                                            v127 = v124 + 8 * v126;
                                            LODWORD(svtCoinBase[1].klass) = v126 + 1;
                                            *(_QWORD *)(v127 + 32) = v112;
                                            sub_1C93A78(
                                              (GrandQuestFolderBoardItem_o *)(v127 + 32),
                                              (int32_t)v112,
                                              v118,
                                              v119,
                                              v120,
                                              v121,
                                              v122,
                                              v123);
                                          }
                                          v128 = ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardPitch;
                                          mHeight = v128 + v115;
                                          v14 = v14 + (float)v128;
                                          y = y + (float)(v128 / 2);
                                          ++v136;
                                        }
                                        else
                                        {
LABEL_143:
                                          v109 = v106;
                                        }
                                        v106 = v109;
                                      }
                                      if ( v136 < 1 )
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
                                                                                      (System_String_o *)StringLiteral_12018/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_SVT_COIN"*/,
                                                                                      0);
                                          if ( svtCoinExplanationLabel )
                                          {
                                            UILabel__set_text(
                                              svtCoinExplanationLabel,
                                              (System_String_o *)svtCoinBase,
                                              0);
                                            mHeight += 38;
                                            v14 = v14 + 38.0;
                                            y = y + 19.0;
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
          sub_1C93D2C(svtCoinBase, item);
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

  if ( (byte_4D2DB95 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__GetEnumerator__);
    byte_4D2DB95 = 1;
  }
  memset(&v7, 0, sizeof(v7));
  questBoardManager = this->fields.questBoardManager;
  if ( questBoardManager )
  {
    if ( ServantStatusQuestBoardManager__UpdateAlphaAnim(questBoardManager, 0) )
      ServantStatusListViewItemDrawServantQuest__OnChangeAlphaAnim(this, v4);
    questBoardList = this->fields.questBoardList;
    if ( !questBoardList )
      sub_1C93D2C(0, v4);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v7,
      (System_Collections_Generic_List_object__o *)questBoardList,
      (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v7,
              (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__MoveNext__) )
    {
      if ( !v7.fields._current )
        sub_1C93D2C(0, v6);
      ServantStatusQuestBoardDraw__UpdateItem(
        (ServantStatusQuestBoardDraw_o *)v7.fields._current,
        this->fields.questBoardManager,
        0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v7,
      (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__Dispose__);
  }
}