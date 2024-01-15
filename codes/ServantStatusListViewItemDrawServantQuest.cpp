void __fastcall ServantStatusListViewItemDrawServantQuest___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40FDEBC & 1) == 0 )
  {
    sub_B16FFC(&ServantStatusListViewItemDrawServantQuest_TypeInfo, v1);
    byte_40FDEBC = 1;
  }
  ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardSize = 122;
  ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardPitch = 132;
}


void __fastcall ServantStatusListViewItemDrawServantQuest___ctor(
        ServantStatusListViewItemDrawServantQuest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_40FDEBB & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw___ctor__, method);
    sub_B16FFC(&System_Collections_Generic_List_ServantStatusQuestBoardDraw__TypeInfo, v6);
    byte_40FDEBB = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                 System_Collections_Generic_List_ServantStatusQuestBoardDraw__TypeInfo,
                                                                                                 method,
                                                                                                 v2,
                                                                                                 v3,
                                                                                                 v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw___ctor__);
  this[1].klass = (ServantStatusListViewItemDrawServantQuest_c *)v7;
  sub_B16F98((BattleServantConfConponent_o *)&this[1], (System_Int32_array **)v7, v8, v9, v10, v11, v12, v13);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
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
  UnityEngine_Object_o *questBoardManager; // x22
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  ServantStatusQuestBoardManager_o *v14; // x22
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  UnityEngine_UI_Dropdown_DropdownItem_o *UIAtlas; // x22
  UnityEngine_UI_Dropdown_DropdownItem_o *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  UnityEngine_GameObject_o *v29; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v31; // x0
  UnityEngine_GameObject_o *v32; // x20
  UnityEngine_GameObject_o *v33; // x0
  UnityEngine_GameObject_o *v34; // x19

  if ( (byte_40FDEB7 & 1) == 0 )
  {
    sub_B16FFC(&NGUITools_TypeInfo, parent);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    sub_B16FFC(&Method_UnityEngine_Resources_Load_GameObject___, v7);
    sub_B16FFC(&ServantStatusQuestBoardManager_TypeInfo, v8);
    byte_40FDEB7 = 1;
  }
  questBoardManager = (UnityEngine_Object_o *)this->fields.questBoardManager;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(questBoardManager, 0LL, 0LL) )
  {
    v14 = (ServantStatusQuestBoardManager_o *)sub_B170CC(ServantStatusQuestBoardManager_TypeInfo, v10, v11, v12, v13);
    ServantStatusQuestBoardManager___ctor(v14, 0LL);
    this->fields.questBoardList = (struct System_Collections_Generic_List_ServantStatusQuestBoardDraw__o *)v14;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.questBoardList,
      (System_Int32_array **)v14,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
    UIAtlas = (UnityEngine_UI_Dropdown_DropdownItem_o *)UnityEngine_Resources__Load_UIAtlas_(
                                                          (System_String_o *)this->fields.inputMessageObject,
                                                          (const MethodInfo_19E149C *)Method_UnityEngine_Resources_Load_GameObject___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v22 = UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
            UIAtlas,
            (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    this->fields.questBoardManager = (struct ServantStatusQuestBoardManager_o *)v22;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.questBoardManager,
      (System_Int32_array **)v22,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
    v29 = (UnityEngine_GameObject_o *)this->fields.questBoardManager;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    GameObjectExtensions__SetParent_27425860(v29, gameObject, 0LL);
    v31 = (UnityEngine_GameObject_o *)this->fields.questBoardManager;
    if ( !v31 )
LABEL_17:
      sub_B170D4();
    UnityEngine_GameObject__SetActive(v31, 0, 0LL);
  }
  v32 = (UnityEngine_GameObject_o *)this->fields.questBoardManager;
  if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  v33 = NGUITools__AddChild_45681684(parent, v32, 0LL);
  if ( !v33 )
    goto LABEL_17;
  v34 = v33;
  UnityEngine_GameObject__SetActive(v33, 1, 0LL);
  return v34;
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
  ServantStatusListViewItemDrawServantQuest_c *klass; // x0
  System_Collections_Generic_List_Enumerator_T__o v7; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40FDEB9 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__MoveNext__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__get_Current__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__GetEnumerator__, v5);
    byte_40FDEB9 = 1;
  }
  memset(&v7, 0, sizeof(v7));
  klass = this[1].klass;
  if ( !klass )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v7,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)klass,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v7,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__MoveNext__) )
  {
    if ( !v7.fields.current )
      sub_B170D4();
    ServantStatusQuestBoardDraw__OnChangeAlphaAnim(
      (ServantStatusQuestBoardDraw_o *)v7.fields.current,
      (ServantStatusQuestBoardManager_o *)this->fields.questBoardList,
      0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v7,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__Dispose__);
}


void __fastcall ServantStatusListViewItemDrawServantQuest__OnDestroy(
        ServantStatusListViewItemDrawServantQuest_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *questBoardManager; // x21
  UnityEngine_Object_o *v5; // x21
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  ServantStatusListViewItemDrawServantQuest_c *klass; // x0

  if ( (byte_40FDEB6 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Clear__, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40FDEB6 = 1;
  }
  questBoardManager = (UnityEngine_Object_o *)this->fields.questBoardManager;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(questBoardManager, 0LL, 0LL) )
  {
    v5 = (UnityEngine_Object_o *)this->fields.questBoardManager;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34809464(v5, 0LL);
    this->fields.questBoardManager = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.questBoardManager, 0LL, v6, v7, v8, v9, v10, v11);
    klass = this[1].klass;
    if ( !klass )
      sub_B170D4();
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)klass,
      (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Clear__);
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
  UILabel_o *explanation2Label; // x21
  System_String_o *v19; // x0
  struct UnityEngine_GameObject_o *titleBase; // x21
  System_String_o *v21; // x0
  WebViewManager_o *Instance; // x0
  QuestMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct ServantEntity_o *svtEntity; // x8
  QuestEntity_array *QuestEntityList; // x0
  struct UISprite_o *titleSprite; // x8
  QuestEntity_array *v27; // x20
  UnityEngine_BoxCollider_o *baseSprite; // x0
  int32_t mHeight; // w27
  float v30; // s0
  float v31; // s1
  UnityEngine_GameObject_o *interludeBase; // x0
  float v33; // s10
  float v34; // s15
  UnityEngine_Transform_o *transform; // x0
  float v36; // s0
  float v37; // s1
  float v38; // s2
  UnityEngine_GameObject_o *interludeQuestBase; // x0
  float v40; // s11
  float v41; // s8
  float v42; // s13
  UnityEngine_Transform_o *v43; // x0
  float x; // s12
  float y; // s9
  float z; // s14
  WebViewManager_o *v47; // x0
  ServantLimitImageMaster_o *QuestInfo; // x0
  __int64 v49; // x1
  const MethodInfo *v50; // x2
  ServantLimitImageMaster_o *v51; // x28
  __int64 v52; // x23
  MapControl_QuestInfo_o *v53; // x24
  QuestEntity_o **m_Items; // x22
  QuestEntity_o *v55; // x26
  QuestTree_o *v56; // x0
  MapControl_QuestInfo_o *v57; // x25
  const MethodInfo *v58; // x2
  UILabel_o *v59; // x26
  System_String_o *v60; // x0
  int32_t v61; // w20
  UnityEngine_GameObject_o *QuestBoardPrefab; // x0
  UnityEngine_GameObject_o *v63; // x27
  ServantStatusQuestBoardDraw_o *Component_srcLineSprite; // x26
  UnityEngine_Transform_o *v65; // x27
  ServantStatusListViewItemDrawServantQuest_c *v66; // x8
  ServantLimitImageMaster_o *v67; // x21
  UnityEngine_GameObject_o *v68; // x27
  ServantStatusQuestBoardManager_o *questBoardList; // x28
  int32_t LimitCount; // w0
  ServantStatusListViewItemDrawServantQuest_c *klass; // x0
  int32_t QuestBoardPitch; // w8
  UnityEngine_GameObject_o *v73; // x0
  UnityEngine_GameObject_o *v74; // x23
  UnityEngine_Transform_o *v75; // x24
  ServantStatusQuestBoardDraw_o *v76; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v77; // x23
  ServantStatusListViewItemDrawServantQuest_c *v78; // x0
  int32_t v79; // w8
  __int64 v80; // x22
  MapControl_QuestInfo_o *v81; // x23
  QuestEntity_o **v82; // x19
  QuestEntity_o *v83; // x24
  QuestTree_o *v84; // x0
  MapControl_QuestInfo_o *v85; // x24
  UnityEngine_GameObject_o *v86; // x0
  UnityEngine_GameObject_o *v87; // x26
  ServantStatusQuestBoardDraw_o *v88; // x28
  UnityEngine_Transform_o *v89; // x0
  ServantStatusListViewItemDrawServantQuest_c *v90; // x8
  UnityEngine_Transform_o *v91; // x26
  int32_t v92; // w20
  UnityEngine_GameObject_o *v93; // x26
  ServantStatusQuestBoardManager_o *v94; // x27
  int32_t v95; // w0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v96; // x0
  int32_t v97; // w8
  UnityEngine_GameObject_o *v98; // x0
  UnityEngine_GameObject_o *v99; // x20
  UnityEngine_Transform_o *v100; // x22
  ServantStatusQuestBoardDraw_o *v101; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v102; // x20
  ServantStatusListViewItemDrawServantQuest_c *v103; // x0
  int32_t v104; // w8
  UIWidget_o *v105; // x0
  UnityEngine_BoxCollider_o *v106; // x0
  UnityEngine_GameObject_o *v107; // x0
  UnityEngine_Transform_o *v108; // x0
  UnityEngine_GameObject_o *v109; // x0
  UnityEngine_Transform_o *v110; // x0
  QuestEntity_o **v111; // [xsp+8h] [xbp-B8h]
  QuestEntity_array *v112; // [xsp+10h] [xbp-B0h]
  ServantStatusListViewItem_o *v113; // [xsp+18h] [xbp-A8h]
  ServantStatusListViewItemDrawServantQuest_o *v114; // [xsp+20h] [xbp-A0h]
  int v115; // [xsp+28h] [xbp-98h]
  int v116; // [xsp+28h] [xbp-98h]
  int max_length; // [xsp+2Ch] [xbp-94h]
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v119; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v120; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v121; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v122; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v123; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v124; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v125; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FDEB8 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestMaster___, item);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v7);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ServantStatusQuestBoardDraw___, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Add__, v9);
    sub_B16FFC(&LocalizationManager_TypeInfo, v10);
    sub_B16FFC(&ServantStatusListViewItemDrawServantQuest_TypeInfo, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_B16FFC(&Method_SingletonTemplate_QuestTree__get_Instance__, v13);
    sub_B16FFC(&SingletonTemplate_QuestTree__TypeInfo, v14);
    sub_B16FFC(&StringLiteral_11927/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_INTERLUDE"*/, v15);
    sub_B16FFC(&StringLiteral_11929/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_RAINFORCEMENT"*/, v16);
    sub_B16FFC(&StringLiteral_11928/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_LIMIT_LIBERATION"*/, v17);
    byte_40FDEB8 = 1;
  }
  if ( !LOBYTE(this->fields.loadPrefab) )
  {
    LODWORD(this->fields.baseCollider) = mode;
    if ( item )
    {
      if ( mode )
      {
        LOBYTE(this->fields.loadPrefab) = 1;
        explanation2Label = this->fields.explanation2Label;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v19 = LocalizationManager__Get((System_String_o *)StringLiteral_11927/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_INTERLUDE"*/, 0LL);
        if ( !explanation2Label )
          goto LABEL_101;
        UILabel__set_text(explanation2Label, v19, 0LL);
        titleBase = this->fields.titleBase;
        v21 = LocalizationManager__Get((System_String_o *)StringLiteral_11929/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_RAINFORCEMENT"*/, 0LL);
        if ( !titleBase )
          goto LABEL_101;
        UILabel__set_text((UILabel_o *)titleBase, v21, 0LL);
        if ( item->fields.svtEntity )
        {
          Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( Instance )
          {
            MasterData_WarQuestSelectionMaster = (QuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                    (DataManager_o *)Instance,
                                                                    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestMaster___);
            svtEntity = item->fields.svtEntity;
            if ( svtEntity )
            {
              if ( MasterData_WarQuestSelectionMaster )
              {
                QuestEntityList = QuestMaster__GetQuestEntityList(
                                    MasterData_WarQuestSelectionMaster,
                                    svtEntity->fields.relateQuestIds,
                                    0LL);
                titleSprite = this->fields.titleSprite;
                if ( titleSprite )
                {
                  v27 = QuestEntityList;
                  baseSprite = (UnityEngine_BoxCollider_o *)this->fields.baseSprite;
                  if ( baseSprite )
                  {
                    mHeight = titleSprite->fields.mHeight;
                    *(UnityEngine_Vector3_o *)&v30 = UnityEngine_BoxCollider__get_size(baseSprite, 0LL);
                    interludeBase = this->fields.interludeBase;
                    if ( interludeBase )
                    {
                      v33 = v30;
                      v34 = v31;
                      transform = UnityEngine_GameObject__get_transform(interludeBase, 0LL);
                      if ( transform )
                      {
                        *(UnityEngine_Vector3_o *)&v36 = UnityEngine_Transform__get_localPosition(transform, 0LL);
                        interludeQuestBase = this->fields.interludeQuestBase;
                        if ( interludeQuestBase )
                        {
                          v40 = v36;
                          v41 = v37;
                          v42 = v38;
                          v43 = UnityEngine_GameObject__get_transform(interludeQuestBase, 0LL);
                          if ( v43 )
                          {
                            localPosition = UnityEngine_Transform__get_localPosition(v43, 0LL);
                            x = localPosition.fields.x;
                            y = localPosition.fields.y;
                            z = localPosition.fields.z;
                            if ( item->fields.userSvtCollectionEntity )
                            {
                              if ( !v27 )
                                goto LABEL_101;
                              max_length = v27->max_length;
                            }
                            else
                            {
                              max_length = 0;
                            }
                            v47 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                            if ( v47 )
                            {
                              QuestInfo = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                         (DataManager_o *)v47,
                                                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
                              v112 = v27;
                              v113 = item;
                              if ( max_length < 1 )
                                goto LABEL_56;
                              if ( !v27 )
                                goto LABEL_101;
                              v115 = 0;
                              v51 = QuestInfo;
                              v52 = 0LL;
                              v53 = 0LL;
                              m_Items = v27->m_Items;
                              do
                              {
                                if ( (unsigned int)v52 >= v27->max_length )
                                {
LABEL_102:
                                  sub_B17100(QuestInfo, v49, v50);
                                  sub_B170A0();
                                }
                                v55 = m_Items[v52];
                                if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
                                }
                                v56 = (QuestTree_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_QuestTree__get_Instance__);
                                if ( !v55 || !v56 )
                                  goto LABEL_101;
                                QuestInfo = (ServantLimitImageMaster_o *)QuestTree__GetQuestInfo(
                                                                           v56,
                                                                           v55->fields.id,
                                                                           0LL);
                                if ( QuestInfo
                                  && (v57 = (MapControl_QuestInfo_o *)QuestInfo,
                                      QuestInfo = (ServantLimitImageMaster_o *)MapControl_QuestInfo__GetQuestType(
                                                                                 (MapControl_QuestInfo_o *)QuestInfo,
                                                                                 0LL),
                                      (_DWORD)QuestInfo == 3) )
                                {
                                  if ( !v51 )
                                    goto LABEL_101;
                                  if ( ServantLimitImageMaster__IsLimitCountSealQuest(v51, v55->fields.id, 0LL) )
                                  {
                                    v59 = this->fields.explanation2Label;
                                    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                      && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                    {
                                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                    }
                                    v60 = LocalizationManager__Get((System_String_o *)StringLiteral_11928/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_LIMIT_LIBERATION"*/, 0LL);
                                    if ( !v59 )
                                      goto LABEL_101;
                                    UILabel__set_text(v59, v60, 0LL);
                                  }
                                  v61 = mHeight;
                                  QuestBoardPrefab = ServantStatusListViewItemDrawServantQuest__CreateQuestBoardPrefab(
                                                       this,
                                                       this->fields.rainforcementQuestBase,
                                                       v58);
                                  if ( !QuestBoardPrefab )
                                    goto LABEL_101;
                                  v63 = QuestBoardPrefab;
                                  Component_srcLineSprite = (ServantStatusQuestBoardDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                               QuestBoardPrefab,
                                                                                               (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusQuestBoardDraw___);
                                  v65 = UnityEngine_GameObject__get_transform(v63, 0LL);
                                  v66 = ServantStatusListViewItemDrawServantQuest_TypeInfo;
                                  if ( (BYTE3(ServantStatusListViewItemDrawServantQuest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                    && !ServantStatusListViewItemDrawServantQuest_TypeInfo->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawServantQuest_TypeInfo);
                                    v66 = ServantStatusListViewItemDrawServantQuest_TypeInfo;
                                  }
                                  if ( !v65 )
                                    goto LABEL_101;
                                  v119.fields.x = 0.0;
                                  v119.fields.z = 0.0;
                                  v119.fields.y = (float)-(v66->static_fields->QuestBoardPitch * v115
                                                         + v66->static_fields->QuestBoardSize / 2);
                                  v67 = v51;
                                  UnityEngine_Transform__set_localPosition(v65, v119, 0LL);
                                  v68 = *(UnityEngine_GameObject_o **)&this->fields.isInit;
                                  questBoardList = (ServantStatusQuestBoardManager_o *)this->fields.questBoardList;
                                  LimitCount = ServantStatusListViewItem__get_LimitCount(v113, 0LL);
                                  if ( !Component_srcLineSprite )
                                    goto LABEL_101;
                                  ServantStatusQuestBoardDraw__SetItem(
                                    Component_srcLineSprite,
                                    v57,
                                    v53,
                                    v68,
                                    questBoardList,
                                    LimitCount,
                                    0LL);
                                  klass = this[1].klass;
                                  if ( !klass )
                                    goto LABEL_101;
                                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)klass,
                                    (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite,
                                    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Add__);
                                  v51 = v67;
                                  QuestBoardPitch = ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardPitch;
                                  mHeight = QuestBoardPitch + v61;
                                  v34 = v34 + (float)QuestBoardPitch;
                                  y = y - (float)QuestBoardPitch;
                                  v27 = v112;
                                  v41 = v41 + (float)(QuestBoardPitch / 2);
                                  ++v115;
                                }
                                else
                                {
                                  v57 = v53;
                                }
                                ++v52;
                                v53 = v57;
                              }
                              while ( (int)v52 < max_length );
                              if ( !v115 )
                              {
LABEL_56:
                                v73 = ServantStatusListViewItemDrawServantQuest__CreateQuestBoardPrefab(
                                        this,
                                        this->fields.rainforcementQuestBase,
                                        v50);
                                if ( !v73 )
                                  goto LABEL_101;
                                v74 = v73;
                                v75 = UnityEngine_GameObject__get_transform(v73, 0LL);
                                if ( (BYTE3(ServantStatusListViewItemDrawServantQuest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !ServantStatusListViewItemDrawServantQuest_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawServantQuest_TypeInfo);
                                }
                                if ( !v75 )
                                  goto LABEL_101;
                                v120.fields.x = 0.0;
                                v120.fields.z = 0.0;
                                v120.fields.y = (float)(ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardSize
                                                      / -2);
                                UnityEngine_Transform__set_localPosition(v75, v120, 0LL);
                                v76 = (ServantStatusQuestBoardDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                         v74,
                                                                         (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusQuestBoardDraw___);
                                if ( !v76 )
                                  goto LABEL_101;
                                v77 = (EventMissionProgressRequest_Argument_ProgressData_o *)v76;
                                ServantStatusQuestBoardDraw__SetDark(v76, 0LL);
                                v78 = this[1].klass;
                                if ( !v78 )
                                  goto LABEL_101;
                                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                  (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v78,
                                  v77,
                                  (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Add__);
                                v79 = ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardPitch;
                                mHeight += v79;
                                v34 = v34 + (float)v79;
                                v41 = v41 + (float)(v79 / 2);
                                y = y - (float)v79;
                              }
                              if ( max_length < 1 )
                                goto LABEL_86;
                              v114 = this;
                              if ( !v27 )
                                goto LABEL_101;
                              v116 = 0;
                              v80 = 0LL;
                              v81 = 0LL;
                              v82 = v27->m_Items;
                              v111 = v27->m_Items;
                              do
                              {
                                if ( (unsigned int)v80 >= v27->max_length )
                                  goto LABEL_102;
                                v83 = v82[v80];
                                if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
                                }
                                v84 = (QuestTree_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_QuestTree__get_Instance__);
                                if ( !v83 || !v84 )
                                  goto LABEL_101;
                                QuestInfo = (ServantLimitImageMaster_o *)QuestTree__GetQuestInfo(
                                                                           v84,
                                                                           v83->fields.id,
                                                                           0LL);
                                if ( QuestInfo
                                  && (v85 = (MapControl_QuestInfo_o *)QuestInfo,
                                      QuestInfo = (ServantLimitImageMaster_o *)MapControl_QuestInfo__GetQuestType(
                                                                                 (MapControl_QuestInfo_o *)QuestInfo,
                                                                                 0LL),
                                      (_DWORD)QuestInfo != 3) )
                                {
                                  v86 = ServantStatusListViewItemDrawServantQuest__CreateQuestBoardPrefab(
                                          v114,
                                          (UnityEngine_GameObject_o *)v114->fields.questBoardPrefabPath,
                                          v50);
                                  if ( !v86 )
                                    goto LABEL_101;
                                  v87 = v86;
                                  v88 = (ServantStatusQuestBoardDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                           v86,
                                                                           (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusQuestBoardDraw___);
                                  v89 = UnityEngine_GameObject__get_transform(v87, 0LL);
                                  v90 = ServantStatusListViewItemDrawServantQuest_TypeInfo;
                                  v91 = v89;
                                  if ( (BYTE3(ServantStatusListViewItemDrawServantQuest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                    && !ServantStatusListViewItemDrawServantQuest_TypeInfo->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawServantQuest_TypeInfo);
                                    v90 = ServantStatusListViewItemDrawServantQuest_TypeInfo;
                                  }
                                  if ( !v91 )
                                    goto LABEL_101;
                                  v121.fields.x = 0.0;
                                  v121.fields.z = 0.0;
                                  v121.fields.y = (float)-(v90->static_fields->QuestBoardPitch * v116
                                                         + v90->static_fields->QuestBoardSize / 2);
                                  v92 = mHeight;
                                  UnityEngine_Transform__set_localPosition(v91, v121, 0LL);
                                  v93 = *(UnityEngine_GameObject_o **)&v114->fields.isInit;
                                  v94 = (ServantStatusQuestBoardManager_o *)v114->fields.questBoardList;
                                  v95 = ServantStatusListViewItem__get_LimitCount(v113, 0LL);
                                  if ( !v88 )
                                    goto LABEL_101;
                                  ServantStatusQuestBoardDraw__SetItem(v88, v85, v81, v93, v94, v95, 0LL);
                                  v96 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v114[1].klass;
                                  if ( !v96 )
                                    goto LABEL_101;
                                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                    v96,
                                    (EventMissionProgressRequest_Argument_ProgressData_o *)v88,
                                    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Add__);
                                  v97 = ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardPitch;
                                  mHeight = v97 + v92;
                                  v34 = v34 + (float)v97;
                                  v82 = v111;
                                  v27 = v112;
                                  v41 = v41 + (float)(v97 / 2);
                                  ++v116;
                                }
                                else
                                {
                                  v85 = v81;
                                }
                                ++v80;
                                v81 = v85;
                              }
                              while ( (int)v80 < max_length );
                              this = v114;
                              if ( !v116 )
                              {
LABEL_86:
                                v98 = ServantStatusListViewItemDrawServantQuest__CreateQuestBoardPrefab(
                                        this,
                                        (UnityEngine_GameObject_o *)this->fields.questBoardPrefabPath,
                                        v50);
                                if ( !v98 )
                                  goto LABEL_101;
                                v99 = v98;
                                v100 = UnityEngine_GameObject__get_transform(v98, 0LL);
                                if ( (BYTE3(ServantStatusListViewItemDrawServantQuest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !ServantStatusListViewItemDrawServantQuest_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawServantQuest_TypeInfo);
                                }
                                if ( !v100 )
                                  goto LABEL_101;
                                v122.fields.x = 0.0;
                                v122.fields.z = 0.0;
                                v122.fields.y = (float)(ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardSize
                                                      / -2);
                                UnityEngine_Transform__set_localPosition(v100, v122, 0LL);
                                v101 = (ServantStatusQuestBoardDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                          v99,
                                                                          (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusQuestBoardDraw___);
                                if ( !v101 )
                                  goto LABEL_101;
                                v102 = (EventMissionProgressRequest_Argument_ProgressData_o *)v101;
                                ServantStatusQuestBoardDraw__SetDark(v101, 0LL);
                                v103 = this[1].klass;
                                if ( !v103 )
                                  goto LABEL_101;
                                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                  (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v103,
                                  v102,
                                  (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Add__);
                                v104 = ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardPitch;
                                mHeight += v104;
                                v34 = v34 + (float)v104;
                                v41 = v41 + (float)(v104 / 2);
                              }
                              v105 = (UIWidget_o *)this->fields.titleSprite;
                              if ( v105 )
                              {
                                UIWidget__set_height(v105, mHeight, 0LL);
                                v106 = (UnityEngine_BoxCollider_o *)this->fields.baseSprite;
                                if ( v106 )
                                {
                                  v123.fields.z = 0.0;
                                  v123.fields.x = v33;
                                  v123.fields.y = v34;
                                  UnityEngine_BoxCollider__set_size(v106, v123, 0LL);
                                  v107 = this->fields.interludeBase;
                                  if ( v107 )
                                  {
                                    v108 = UnityEngine_GameObject__get_transform(v107, 0LL);
                                    if ( v108 )
                                    {
                                      v124.fields.x = v40;
                                      v124.fields.y = v41;
                                      v124.fields.z = v42;
                                      UnityEngine_Transform__set_localPosition(v108, v124, 0LL);
                                      v109 = this->fields.interludeQuestBase;
                                      if ( v109 )
                                      {
                                        v110 = UnityEngine_GameObject__get_transform(v109, 0LL);
                                        if ( v110 )
                                        {
                                          v125.fields.x = x;
                                          v125.fields.y = y;
                                          v125.fields.z = z;
                                          UnityEngine_Transform__set_localPosition(v110, v125, 0LL);
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
LABEL_101:
          sub_B170D4();
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
  ServantStatusQuestBoardManager_o *questBoardList; // x0
  const MethodInfo *v7; // x1
  ServantStatusListViewItemDrawServantQuest_c *klass; // x0
  System_Collections_Generic_List_Enumerator_T__o v9; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40FDEBA & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__MoveNext__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__get_Current__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__GetEnumerator__, v5);
    byte_40FDEBA = 1;
  }
  memset(&v9, 0, sizeof(v9));
  questBoardList = (ServantStatusQuestBoardManager_o *)this->fields.questBoardList;
  if ( questBoardList )
  {
    if ( ServantStatusQuestBoardManager__UpdateAlphaAnim(questBoardList, 0LL) )
      ServantStatusListViewItemDrawServantQuest__OnChangeAlphaAnim(this, v7);
    klass = this[1].klass;
    if ( !klass )
      sub_B170D4();
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v9,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)klass,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v9,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__MoveNext__) )
    {
      if ( !v9.fields.current )
        sub_B170D4();
      ServantStatusQuestBoardDraw__UpdateItem(
        (ServantStatusQuestBoardDraw_o *)v9.fields.current,
        (ServantStatusQuestBoardManager_o *)this->fields.questBoardList,
        0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v9,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__Dispose__);
  }
}