void __fastcall ServantStatusListViewItemDrawServantQuest___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_418A7E4 & 1) == 0 )
  {
    sub_B2C35C(&ServantStatusListViewItemDrawServantQuest_TypeInfo, v1);
    byte_418A7E4 = 1;
  }
  ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardSize = 122;
  ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardPitch = 132;
}


void __fastcall ServantStatusListViewItemDrawServantQuest___ctor(
        ServantStatusListViewItemDrawServantQuest_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v4; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_418A7E3 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw___ctor__, method);
    sub_B2C35C(&System_Collections_Generic_List_ServantStatusQuestBoardDraw__TypeInfo, v3);
    byte_418A7E3 = 1;
  }
  v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ServantStatusQuestBoardDraw__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v4,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw___ctor__);
  this[1].klass = (ServantStatusListViewItemDrawServantQuest_c *)v4;
  sub_B2C2F8((BattleServantConfConponent_o *)&this[1], (System_Int32_array **)v4, v5, v6, v7, v8, v9, v10);
  ServantStatusListViewItemDraw___ctor((ServantStatusListViewItemDraw_o *)this, 0LL);
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
  ServantStatusQuestBoardManager_o *v10; // x22
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  UnityEngine_UI_Dropdown_DropdownItem_o *UIAtlas; // x22
  UnityEngine_UI_Dropdown_DropdownItem_o *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  UnityEngine_GameObject_o *v25; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v27; // x1
  UnityEngine_GameObject_o *v28; // x0
  UnityEngine_GameObject_o *v29; // x20
  UnityEngine_GameObject_o *v30; // x19

  if ( (byte_418A7DF & 1) == 0 )
  {
    sub_B2C35C(&NGUITools_TypeInfo, parent);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    sub_B2C35C(&Method_UnityEngine_Resources_Load_GameObject___, v7);
    sub_B2C35C(&ServantStatusQuestBoardManager_TypeInfo, v8);
    byte_418A7DF = 1;
  }
  questBoardManager = (UnityEngine_Object_o *)this->fields.questBoardManager;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(questBoardManager, 0LL, 0LL) )
  {
    v10 = (ServantStatusQuestBoardManager_o *)sub_B2C42C(ServantStatusQuestBoardManager_TypeInfo);
    ServantStatusQuestBoardManager___ctor(v10, 0LL);
    this->fields.questBoardList = (struct System_Collections_Generic_List_ServantStatusQuestBoardDraw__o *)v10;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.questBoardList,
      (System_Int32_array **)v10,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
    UIAtlas = (UnityEngine_UI_Dropdown_DropdownItem_o *)UnityEngine_Resources__Load_UIAtlas_(
                                                          (System_String_o *)this->fields.inputMessageObject,
                                                          (const MethodInfo_20990C8 *)Method_UnityEngine_Resources_Load_GameObject___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v18 = UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
            UIAtlas,
            (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    this->fields.questBoardManager = (struct ServantStatusQuestBoardManager_o *)v18;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.questBoardManager,
      (System_Int32_array **)v18,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
    v25 = (UnityEngine_GameObject_o *)this->fields.questBoardManager;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    GameObjectExtensions__SetParent_31331816(v25, gameObject, 0LL);
    v28 = (UnityEngine_GameObject_o *)this->fields.questBoardManager;
    if ( !v28 )
LABEL_17:
      sub_B2C434(v28, v27);
    UnityEngine_GameObject__SetActive(v28, 0, 0LL);
  }
  v29 = (UnityEngine_GameObject_o *)this->fields.questBoardManager;
  if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  v28 = NGUITools__AddChild_45768520(parent, v29, 0LL);
  if ( !v28 )
    goto LABEL_17;
  v30 = v28;
  UnityEngine_GameObject__SetActive(v28, 1, 0LL);
  return v30;
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
  _BOOL8 v7; // x0
  MapControl_QuestInfo_o *v8; // x1
  const MethodInfo *v9; // x3
  Il2CppObject *current; // x20
  ServantStatusQuestBoardManager_o *questBoardList; // x21
  const MethodInfo *v12; // x2
  System_Collections_Generic_List_Enumerator_T__o v13; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_418A7E1 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__get_Current__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__GetEnumerator__, v5);
    byte_418A7E1 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  klass = this[1].klass;
  if ( !klass )
    sub_B2C434(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v13,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)klass,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__GetEnumerator__);
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v13,
           (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__MoveNext__);
    if ( !v7 )
      break;
    current = v13.fields.current;
    if ( !v13.fields.current )
      sub_B2C434(v7, v8);
    questBoardList = (ServantStatusQuestBoardManager_o *)this->fields.questBoardList;
    ServantStatusQuestBoardDraw__ChangeNextInfoText(
      (ServantStatusQuestBoardDraw_o *)v13.fields.current,
      v8,
      questBoardList,
      v9);
    ServantStatusQuestBoardDraw__ChangeNextRewardIcon((ServantStatusQuestBoardDraw_o *)current, questBoardList, v12);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v13,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__Dispose__);
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
  __int64 v12; // x1
  ServantStatusListViewItemDrawServantQuest_c *klass; // x0

  if ( (byte_418A7DE & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Clear__, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    byte_418A7DE = 1;
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
    UnityEngine_Object__Destroy_35314896(v5, 0LL);
    this->fields.questBoardManager = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.questBoardManager, 0LL, v6, v7, v8, v9, v10, v11);
    klass = this[1].klass;
    if ( !klass )
      sub_B2C434(0LL, v12);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)klass,
      (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Clear__);
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
  System_String_o *Instance; // x0
  const MethodInfo *v20; // x1
  struct UnityEngine_GameObject_o *titleBase; // x21
  struct ServantEntity_o *svtEntity; // x8
  struct UISprite_o *titleSprite; // x8
  System_String_o *v24; // x20
  int32_t mHeight; // w27
  float v26; // s0
  float v27; // s1
  float v28; // s10
  float v29; // s15
  float v30; // s0
  float v31; // s1
  float v32; // s2
  float v33; // s11
  float v34; // s8
  float v35; // s13
  float x; // s12
  float y; // s9
  float z; // s14
  const MethodInfo *v39; // x2
  ServantLimitImageMaster_o *v40; // x28
  __int64 v41; // x23
  MapControl_QuestInfo_o *v42; // x24
  void **p_monitor; // x22
  _DWORD *v44; // x26
  MapControl_QuestInfo_o *v45; // x25
  const MethodInfo *v46; // x2
  UILabel_o *v47; // x26
  int32_t v48; // w20
  UnityEngine_GameObject_o *v49; // x27
  ServantStatusQuestBoardDraw_o *Component_srcLineSprite; // x26
  UnityEngine_Transform_o *v51; // x27
  ServantStatusListViewItemDrawServantQuest_c *v52; // x8
  ServantLimitImageMaster_o *v53; // x21
  UnityEngine_GameObject_o *v54; // x27
  ServantStatusQuestBoardManager_o *questBoardList; // x28
  const MethodInfo *v56; // x6
  int32_t QuestBoardPitch; // w8
  UnityEngine_GameObject_o *v58; // x23
  UnityEngine_Transform_o *v59; // x24
  EventMissionProgressRequest_Argument_ProgressData_o *v60; // x23
  int32_t v61; // w8
  __int64 v62; // x22
  MapControl_QuestInfo_o *v63; // x23
  void **v64; // x19
  _DWORD *v65; // x24
  MapControl_QuestInfo_o *v66; // x24
  UnityEngine_GameObject_o *v67; // x26
  ServantStatusQuestBoardDraw_o *v68; // x28
  ServantStatusListViewItemDrawServantQuest_c *v69; // x8
  UnityEngine_Transform_o *v70; // x26
  int32_t v71; // w20
  UnityEngine_GameObject_o *v72; // x26
  ServantStatusQuestBoardManager_o *v73; // x27
  const MethodInfo *v74; // x6
  int32_t v75; // w8
  UnityEngine_GameObject_o *v76; // x20
  UnityEngine_Transform_o *v77; // x22
  EventMissionProgressRequest_Argument_ProgressData_o *v78; // x20
  int32_t v79; // w8
  __int64 v80; // x0
  void **v81; // [xsp+8h] [xbp-B8h]
  System_String_o *v82; // [xsp+10h] [xbp-B0h]
  ServantStatusListViewItem_o *v83; // [xsp+18h] [xbp-A8h]
  ServantStatusListViewItemDrawServantQuest_o *v84; // [xsp+20h] [xbp-A0h]
  int v85; // [xsp+28h] [xbp-98h]
  int v86; // [xsp+28h] [xbp-98h]
  int klass; // [xsp+2Ch] [xbp-94h]
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v89; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v90; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v91; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v92; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v93; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v94; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v95; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_418A7E0 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestMaster___, item);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v7);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_ServantStatusQuestBoardDraw___, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Add__, v9);
    sub_B2C35C(&LocalizationManager_TypeInfo, v10);
    sub_B2C35C(&ServantStatusListViewItemDrawServantQuest_TypeInfo, v11);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_B2C35C(&Method_SingletonTemplate_QuestTree__get_Instance__, v13);
    sub_B2C35C(&SingletonTemplate_QuestTree__TypeInfo, v14);
    sub_B2C35C(&StringLiteral_11977/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_INTERLUDE"*/, v15);
    sub_B2C35C(&StringLiteral_11979/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_RAINFORCEMENT"*/, v16);
    sub_B2C35C(&StringLiteral_11978/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_LIMIT_LIBERATION"*/, v17);
    byte_418A7E0 = 1;
  }
  if ( !LOBYTE(this->fields.loadPrefab) )
  {
    ServantStatusListViewItemDraw__SetItem((ServantStatusListViewItemDraw_o *)this, item, mode, 0LL);
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
        Instance = LocalizationManager__Get((System_String_o *)StringLiteral_11977/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_INTERLUDE"*/, 0LL);
        if ( !explanation2Label )
          goto LABEL_101;
        UILabel__set_text(explanation2Label, Instance, 0LL);
        titleBase = this->fields.titleBase;
        Instance = LocalizationManager__Get((System_String_o *)StringLiteral_11979/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_RAINFORCEMENT"*/, 0LL);
        if ( !titleBase )
          goto LABEL_101;
        UILabel__set_text((UILabel_o *)titleBase, Instance, 0LL);
        if ( item->fields.svtEntity )
        {
          Instance = (System_String_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( Instance )
          {
            Instance = (System_String_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                            (DataManager_o *)Instance,
                                            (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestMaster___);
            svtEntity = item->fields.svtEntity;
            if ( svtEntity )
            {
              if ( Instance )
              {
                Instance = (System_String_o *)QuestMaster__GetQuestEntityList(
                                                (QuestMaster_o *)Instance,
                                                svtEntity->fields.relateQuestIds,
                                                0LL);
                titleSprite = this->fields.titleSprite;
                if ( titleSprite )
                {
                  v24 = Instance;
                  Instance = (System_String_o *)this->fields.baseSprite;
                  if ( Instance )
                  {
                    mHeight = titleSprite->fields.mHeight;
                    *(UnityEngine_Vector3_o *)&v26 = UnityEngine_BoxCollider__get_size(
                                                       (UnityEngine_BoxCollider_o *)Instance,
                                                       0LL);
                    Instance = (System_String_o *)this->fields.interludeBase;
                    if ( Instance )
                    {
                      v28 = v26;
                      v29 = v27;
                      Instance = (System_String_o *)UnityEngine_GameObject__get_transform(
                                                      (UnityEngine_GameObject_o *)Instance,
                                                      0LL);
                      if ( Instance )
                      {
                        *(UnityEngine_Vector3_o *)&v30 = UnityEngine_Transform__get_localPosition(
                                                           (UnityEngine_Transform_o *)Instance,
                                                           0LL);
                        Instance = (System_String_o *)this->fields.interludeQuestBase;
                        if ( Instance )
                        {
                          v33 = v30;
                          v34 = v31;
                          v35 = v32;
                          Instance = (System_String_o *)UnityEngine_GameObject__get_transform(
                                                          (UnityEngine_GameObject_o *)Instance,
                                                          0LL);
                          if ( Instance )
                          {
                            localPosition = UnityEngine_Transform__get_localPosition(
                                              (UnityEngine_Transform_o *)Instance,
                                              0LL);
                            x = localPosition.fields.x;
                            y = localPosition.fields.y;
                            z = localPosition.fields.z;
                            if ( item->fields.userSvtCollectionEntity )
                            {
                              if ( !v24 )
                                goto LABEL_101;
                              klass = (int)v24[1].klass;
                            }
                            else
                            {
                              klass = 0;
                            }
                            Instance = (System_String_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                            if ( Instance )
                            {
                              Instance = (System_String_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)Instance,
                                                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
                              v82 = v24;
                              v83 = item;
                              if ( klass < 1 )
                                goto LABEL_56;
                              if ( !v24 )
                                goto LABEL_101;
                              v85 = 0;
                              v40 = (ServantLimitImageMaster_o *)Instance;
                              v41 = 0LL;
                              v42 = 0LL;
                              p_monitor = &v24[1].monitor;
                              do
                              {
                                if ( (unsigned int)v41 >= LODWORD(v24[1].klass) )
                                {
LABEL_102:
                                  v80 = sub_B2C460(Instance);
                                  sub_B2C400(v80, 0LL);
                                }
                                v44 = p_monitor[v41];
                                if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
                                }
                                Instance = (System_String_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
                                if ( !v44 || !Instance )
                                  goto LABEL_101;
                                Instance = (System_String_o *)QuestTree__GetQuestInfo(
                                                                (QuestTree_o *)Instance,
                                                                v44[4],
                                                                0LL);
                                if ( Instance
                                  && (v45 = (MapControl_QuestInfo_o *)Instance,
                                      Instance = (System_String_o *)MapControl_QuestInfo__GetQuestType(
                                                                      (MapControl_QuestInfo_o *)Instance,
                                                                      0LL),
                                      (_DWORD)Instance == 3) )
                                {
                                  if ( !v40 )
                                    goto LABEL_101;
                                  if ( ServantLimitImageMaster__IsLimitCountSealQuest(v40, v44[4], 0LL) )
                                  {
                                    v47 = this->fields.explanation2Label;
                                    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                      && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                    {
                                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                    }
                                    Instance = LocalizationManager__Get((System_String_o *)StringLiteral_11978/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_LIMIT_LIBERATION"*/, 0LL);
                                    if ( !v47 )
                                      goto LABEL_101;
                                    UILabel__set_text(v47, Instance, 0LL);
                                  }
                                  v48 = mHeight;
                                  Instance = (System_String_o *)ServantStatusListViewItemDrawServantQuest__CreateQuestBoardPrefab(
                                                                  this,
                                                                  this->fields.rainforcementQuestBase,
                                                                  v46);
                                  if ( !Instance )
                                    goto LABEL_101;
                                  v49 = (UnityEngine_GameObject_o *)Instance;
                                  Component_srcLineSprite = (ServantStatusQuestBoardDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                               (UnityEngine_GameObject_o *)Instance,
                                                                                               (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ServantStatusQuestBoardDraw___);
                                  Instance = (System_String_o *)UnityEngine_GameObject__get_transform(v49, 0LL);
                                  v51 = (UnityEngine_Transform_o *)Instance;
                                  v52 = ServantStatusListViewItemDrawServantQuest_TypeInfo;
                                  if ( (BYTE3(ServantStatusListViewItemDrawServantQuest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                    && !ServantStatusListViewItemDrawServantQuest_TypeInfo->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawServantQuest_TypeInfo);
                                    v52 = ServantStatusListViewItemDrawServantQuest_TypeInfo;
                                  }
                                  if ( !v51 )
                                    goto LABEL_101;
                                  v89.fields.x = 0.0;
                                  v89.fields.z = 0.0;
                                  v89.fields.y = (float)-(v52->static_fields->QuestBoardPitch * v85
                                                        + v52->static_fields->QuestBoardSize / 2);
                                  v53 = v40;
                                  UnityEngine_Transform__set_localPosition(v51, v89, 0LL);
                                  v54 = *(UnityEngine_GameObject_o **)&this->fields.isInit;
                                  questBoardList = (ServantStatusQuestBoardManager_o *)this->fields.questBoardList;
                                  Instance = (System_String_o *)ServantStatusListViewItem__get_LimitCount(v83, 0LL);
                                  if ( !Component_srcLineSprite )
                                    goto LABEL_101;
                                  ServantStatusQuestBoardDraw__SetItem(
                                    Component_srcLineSprite,
                                    v45,
                                    v42,
                                    v54,
                                    questBoardList,
                                    (int32_t)Instance,
                                    v56);
                                  Instance = (System_String_o *)this[1].klass;
                                  if ( !Instance )
                                    goto LABEL_101;
                                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
                                    (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite,
                                    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Add__);
                                  v40 = v53;
                                  QuestBoardPitch = ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardPitch;
                                  mHeight = QuestBoardPitch + v48;
                                  v29 = v29 + (float)QuestBoardPitch;
                                  y = y - (float)QuestBoardPitch;
                                  v24 = v82;
                                  v34 = v34 + (float)(QuestBoardPitch / 2);
                                  ++v85;
                                }
                                else
                                {
                                  v45 = v42;
                                }
                                ++v41;
                                v42 = v45;
                              }
                              while ( (int)v41 < klass );
                              if ( !v85 )
                              {
LABEL_56:
                                Instance = (System_String_o *)ServantStatusListViewItemDrawServantQuest__CreateQuestBoardPrefab(
                                                                this,
                                                                this->fields.rainforcementQuestBase,
                                                                v39);
                                if ( !Instance )
                                  goto LABEL_101;
                                v58 = (UnityEngine_GameObject_o *)Instance;
                                Instance = (System_String_o *)UnityEngine_GameObject__get_transform(
                                                                (UnityEngine_GameObject_o *)Instance,
                                                                0LL);
                                v59 = (UnityEngine_Transform_o *)Instance;
                                if ( (BYTE3(ServantStatusListViewItemDrawServantQuest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !ServantStatusListViewItemDrawServantQuest_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawServantQuest_TypeInfo);
                                }
                                if ( !v59 )
                                  goto LABEL_101;
                                v90.fields.x = 0.0;
                                v90.fields.z = 0.0;
                                v90.fields.y = (float)(ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardSize
                                                     / -2);
                                UnityEngine_Transform__set_localPosition(v59, v90, 0LL);
                                Instance = (System_String_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                v58,
                                                                (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ServantStatusQuestBoardDraw___);
                                if ( !Instance )
                                  goto LABEL_101;
                                v60 = (EventMissionProgressRequest_Argument_ProgressData_o *)Instance;
                                ServantStatusQuestBoardDraw__SetDark((ServantStatusQuestBoardDraw_o *)Instance, v20);
                                Instance = (System_String_o *)this[1].klass;
                                if ( !Instance )
                                  goto LABEL_101;
                                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                  (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
                                  v60,
                                  (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Add__);
                                v61 = ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardPitch;
                                mHeight += v61;
                                v29 = v29 + (float)v61;
                                v34 = v34 + (float)(v61 / 2);
                                y = y - (float)v61;
                              }
                              if ( klass < 1 )
                                goto LABEL_86;
                              v84 = this;
                              if ( !v24 )
                                goto LABEL_101;
                              v86 = 0;
                              v62 = 0LL;
                              v63 = 0LL;
                              v64 = &v24[1].monitor;
                              v81 = &v24[1].monitor;
                              do
                              {
                                if ( (unsigned int)v62 >= LODWORD(v24[1].klass) )
                                  goto LABEL_102;
                                v65 = v64[v62];
                                if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
                                }
                                Instance = (System_String_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
                                if ( !v65 || !Instance )
                                  goto LABEL_101;
                                Instance = (System_String_o *)QuestTree__GetQuestInfo(
                                                                (QuestTree_o *)Instance,
                                                                v65[4],
                                                                0LL);
                                if ( Instance
                                  && (v66 = (MapControl_QuestInfo_o *)Instance,
                                      Instance = (System_String_o *)MapControl_QuestInfo__GetQuestType(
                                                                      (MapControl_QuestInfo_o *)Instance,
                                                                      0LL),
                                      (_DWORD)Instance != 3) )
                                {
                                  Instance = (System_String_o *)ServantStatusListViewItemDrawServantQuest__CreateQuestBoardPrefab(
                                                                  v84,
                                                                  (UnityEngine_GameObject_o *)v84->fields.questBoardPrefabPath,
                                                                  v39);
                                  if ( !Instance )
                                    goto LABEL_101;
                                  v67 = (UnityEngine_GameObject_o *)Instance;
                                  v68 = (ServantStatusQuestBoardDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                           (UnityEngine_GameObject_o *)Instance,
                                                                           (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ServantStatusQuestBoardDraw___);
                                  Instance = (System_String_o *)UnityEngine_GameObject__get_transform(v67, 0LL);
                                  v69 = ServantStatusListViewItemDrawServantQuest_TypeInfo;
                                  v70 = (UnityEngine_Transform_o *)Instance;
                                  if ( (BYTE3(ServantStatusListViewItemDrawServantQuest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                    && !ServantStatusListViewItemDrawServantQuest_TypeInfo->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawServantQuest_TypeInfo);
                                    v69 = ServantStatusListViewItemDrawServantQuest_TypeInfo;
                                  }
                                  if ( !v70 )
                                    goto LABEL_101;
                                  v91.fields.x = 0.0;
                                  v91.fields.z = 0.0;
                                  v91.fields.y = (float)-(v69->static_fields->QuestBoardPitch * v86
                                                        + v69->static_fields->QuestBoardSize / 2);
                                  v71 = mHeight;
                                  UnityEngine_Transform__set_localPosition(v70, v91, 0LL);
                                  v72 = *(UnityEngine_GameObject_o **)&v84->fields.isInit;
                                  v73 = (ServantStatusQuestBoardManager_o *)v84->fields.questBoardList;
                                  Instance = (System_String_o *)ServantStatusListViewItem__get_LimitCount(v83, 0LL);
                                  if ( !v68 )
                                    goto LABEL_101;
                                  ServantStatusQuestBoardDraw__SetItem(v68, v66, v63, v72, v73, (int32_t)Instance, v74);
                                  Instance = (System_String_o *)v84[1].klass;
                                  if ( !Instance )
                                    goto LABEL_101;
                                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
                                    (EventMissionProgressRequest_Argument_ProgressData_o *)v68,
                                    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Add__);
                                  v75 = ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardPitch;
                                  mHeight = v75 + v71;
                                  v29 = v29 + (float)v75;
                                  v64 = v81;
                                  v24 = v82;
                                  v34 = v34 + (float)(v75 / 2);
                                  ++v86;
                                }
                                else
                                {
                                  v66 = v63;
                                }
                                ++v62;
                                v63 = v66;
                              }
                              while ( (int)v62 < klass );
                              this = v84;
                              if ( !v86 )
                              {
LABEL_86:
                                Instance = (System_String_o *)ServantStatusListViewItemDrawServantQuest__CreateQuestBoardPrefab(
                                                                this,
                                                                (UnityEngine_GameObject_o *)this->fields.questBoardPrefabPath,
                                                                v39);
                                if ( !Instance )
                                  goto LABEL_101;
                                v76 = (UnityEngine_GameObject_o *)Instance;
                                Instance = (System_String_o *)UnityEngine_GameObject__get_transform(
                                                                (UnityEngine_GameObject_o *)Instance,
                                                                0LL);
                                v77 = (UnityEngine_Transform_o *)Instance;
                                if ( (BYTE3(ServantStatusListViewItemDrawServantQuest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !ServantStatusListViewItemDrawServantQuest_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawServantQuest_TypeInfo);
                                }
                                if ( !v77 )
                                  goto LABEL_101;
                                v92.fields.x = 0.0;
                                v92.fields.z = 0.0;
                                v92.fields.y = (float)(ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardSize
                                                     / -2);
                                UnityEngine_Transform__set_localPosition(v77, v92, 0LL);
                                Instance = (System_String_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                v76,
                                                                (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ServantStatusQuestBoardDraw___);
                                if ( !Instance )
                                  goto LABEL_101;
                                v78 = (EventMissionProgressRequest_Argument_ProgressData_o *)Instance;
                                ServantStatusQuestBoardDraw__SetDark((ServantStatusQuestBoardDraw_o *)Instance, v20);
                                Instance = (System_String_o *)this[1].klass;
                                if ( !Instance )
                                  goto LABEL_101;
                                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                  (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
                                  v78,
                                  (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Add__);
                                v79 = ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardPitch;
                                mHeight += v79;
                                v29 = v29 + (float)v79;
                                v34 = v34 + (float)(v79 / 2);
                              }
                              Instance = (System_String_o *)this->fields.titleSprite;
                              if ( Instance )
                              {
                                UIWidget__set_height((UIWidget_o *)Instance, mHeight, 0LL);
                                Instance = (System_String_o *)this->fields.baseSprite;
                                if ( Instance )
                                {
                                  v93.fields.z = 0.0;
                                  v93.fields.x = v28;
                                  v93.fields.y = v29;
                                  UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)Instance, v93, 0LL);
                                  Instance = (System_String_o *)this->fields.interludeBase;
                                  if ( Instance )
                                  {
                                    Instance = (System_String_o *)UnityEngine_GameObject__get_transform(
                                                                    (UnityEngine_GameObject_o *)Instance,
                                                                    0LL);
                                    if ( Instance )
                                    {
                                      v94.fields.x = v33;
                                      v94.fields.y = v34;
                                      v94.fields.z = v35;
                                      UnityEngine_Transform__set_localPosition(
                                        (UnityEngine_Transform_o *)Instance,
                                        v94,
                                        0LL);
                                      Instance = (System_String_o *)this->fields.interludeQuestBase;
                                      if ( Instance )
                                      {
                                        Instance = (System_String_o *)UnityEngine_GameObject__get_transform(
                                                                        (UnityEngine_GameObject_o *)Instance,
                                                                        0LL);
                                        if ( Instance )
                                        {
                                          v95.fields.x = x;
                                          v95.fields.y = y;
                                          v95.fields.z = z;
                                          UnityEngine_Transform__set_localPosition(
                                            (UnityEngine_Transform_o *)Instance,
                                            v95,
                                            0LL);
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
          sub_B2C434(Instance, v20);
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
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  System_Collections_Generic_List_Enumerator_T__o v11; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_418A7E2 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__get_Current__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__GetEnumerator__, v5);
    byte_418A7E2 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  questBoardList = (ServantStatusQuestBoardManager_o *)this->fields.questBoardList;
  if ( questBoardList )
  {
    if ( ServantStatusQuestBoardManager__UpdateAlphaAnim(questBoardList, 0LL) )
      ServantStatusListViewItemDrawServantQuest__OnChangeAlphaAnim(this, v7);
    klass = this[1].klass;
    if ( !klass )
      sub_B2C434(0LL, v7);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v11,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)klass,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v11,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__MoveNext__) )
    {
      if ( !v11.fields.current )
        sub_B2C434(0LL, v9);
      ServantStatusQuestBoardDraw__UpdateItem(
        (ServantStatusQuestBoardDraw_o *)v11.fields.current,
        (ServantStatusQuestBoardManager_o *)this->fields.questBoardList,
        v10);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v11,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__Dispose__);
  }
}