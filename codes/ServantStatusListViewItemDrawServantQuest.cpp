void __fastcall ServantStatusListViewItemDrawServantQuest___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42ECB79 & 1) == 0 )
  {
    sub_B5D5C4(&ServantStatusListViewItemDrawServantQuest_TypeInfo, v1, v2, v3);
    byte_42ECB79 = 1;
  }
  ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardSize = 122;
  ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardPitch = 132;
}


void __fastcall ServantStatusListViewItemDrawServantQuest___ctor(
        ServantStatusListViewItemDrawServantQuest_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42ECB78 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Collections_Generic_List_ServantStatusQuestBoardDraw__TypeInfo, v5, v6, v7);
    byte_42ECB78 = 1;
  }
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ServantStatusQuestBoardDraw__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw___ctor__);
  this[1].klass = (ServantStatusListViewItemDrawServantQuest_c *)v8;
  sub_B5D560((BattleServantConfConponent_o *)&this[1], (System_Int32_array **)v8, v9, v10, v11, v12, v13, v14);
  ServantStatusListViewItemDraw___ctor((ServantStatusListViewItemDraw_o *)this, 0LL);
}


UnityEngine_GameObject_o *__fastcall ServantStatusListViewItemDrawServantQuest__CreateQuestBoardPrefab(
        ServantStatusListViewItemDrawServantQuest_o *this,
        UnityEngine_GameObject_o *parent,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  UnityEngine_Object_o *questBoardManager; // x22
  ServantStatusQuestBoardManager_o *v19; // x22
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  UnityEngine_UI_Dropdown_DropdownItem_o *UIAtlas; // x22
  UnityEngine_UI_Dropdown_DropdownItem_o *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  UnityEngine_GameObject_o *v34; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v36; // x1
  UnityEngine_GameObject_o *v37; // x0
  UnityEngine_GameObject_o *v38; // x20
  UnityEngine_GameObject_o *v39; // x19

  if ( (byte_42ECB74 & 1) == 0 )
  {
    sub_B5D5C4(&NGUITools_TypeInfo, (_DWORD)parent, (_DWORD)method, v3);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v6, v7, v8);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_UnityEngine_Resources_Load_GameObject___, v12, v13, v14);
    sub_B5D5C4(&ServantStatusQuestBoardManager_TypeInfo, v15, v16, v17);
    byte_42ECB74 = 1;
  }
  questBoardManager = (UnityEngine_Object_o *)this->fields.questBoardManager;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(questBoardManager, 0LL, 0LL) )
  {
    v19 = (ServantStatusQuestBoardManager_o *)sub_B5D694(ServantStatusQuestBoardManager_TypeInfo);
    ServantStatusQuestBoardManager___ctor(v19, 0LL);
    this->fields.questBoardList = (struct System_Collections_Generic_List_ServantStatusQuestBoardDraw__o *)v19;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.questBoardList,
      (System_Int32_array **)v19,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
    UIAtlas = (UnityEngine_UI_Dropdown_DropdownItem_o *)UnityEngine_Resources__Load_UIAtlas_(
                                                          (System_String_o *)this->fields.inputMessageObject,
                                                          (const MethodInfo_1E6964C *)Method_UnityEngine_Resources_Load_GameObject___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v27 = UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
            UIAtlas,
            (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    this->fields.questBoardManager = (struct ServantStatusQuestBoardManager_o *)v27;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.questBoardManager,
      (System_Int32_array **)v27,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
    v34 = (UnityEngine_GameObject_o *)this->fields.questBoardManager;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    GameObjectExtensions__SetParent_32436388(v34, gameObject, 0LL);
    v37 = (UnityEngine_GameObject_o *)this->fields.questBoardManager;
    if ( !v37 )
LABEL_17:
      sub_B5D69C(v37, v36);
    UnityEngine_GameObject__SetActive(v37, 0, 0LL);
  }
  v38 = (UnityEngine_GameObject_o *)this->fields.questBoardManager;
  if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  v37 = NGUITools__AddChild_46200776(parent, v38, 0LL);
  if ( !v37 )
    goto LABEL_17;
  v39 = v37;
  UnityEngine_GameObject__SetActive(v37, 1, 0LL);
  return v39;
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  ServantStatusListViewItemDrawServantQuest_c *klass; // x0
  __int64 v15; // x1
  System_Collections_Generic_List_Enumerator_T__o v16; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42ECB76 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__Dispose__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__MoveNext__, v5, v6, v7);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__get_Current__,
      v8,
      v9,
      v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__GetEnumerator__, v11, v12, v13);
    byte_42ECB76 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  klass = this[1].klass;
  if ( !klass )
    sub_B5D69C(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v16,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)klass,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v16,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__MoveNext__) )
  {
    if ( !v16.fields.current )
      sub_B5D69C(0LL, v15);
    ServantStatusQuestBoardDraw__OnChangeAlphaAnim(
      (ServantStatusQuestBoardDraw_o *)v16.fields.current,
      (ServantStatusQuestBoardManager_o *)this->fields.questBoardList,
      0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v16,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__Dispose__);
}


void __fastcall ServantStatusListViewItemDrawServantQuest__OnDestroy(
        ServantStatusListViewItemDrawServantQuest_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Object_o *questBoardManager; // x21
  UnityEngine_Object_o *v9; // x21
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  __int64 v16; // x1
  ServantStatusListViewItemDrawServantQuest_c *klass; // x0

  if ( (byte_42ECB73 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Clear__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42ECB73 = 1;
  }
  questBoardManager = (UnityEngine_Object_o *)this->fields.questBoardManager;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(questBoardManager, 0LL, 0LL) )
  {
    v9 = (UnityEngine_Object_o *)this->fields.questBoardManager;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(v9, 0LL);
    this->fields.questBoardManager = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.questBoardManager, 0LL, v10, v11, v12, v13, v14, v15);
    klass = this[1].klass;
    if ( !klass )
      sub_B5D69C(0LL, v16);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)klass,
      (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Clear__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewItemDrawServantQuest__SetItem(
        ServantStatusListViewItemDrawServantQuest_o *this,
        ServantStatusListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  UILabel_o *explanation2Label; // x21
  System_String_o *Instance; // x0
  __int64 v42; // x1
  struct UnityEngine_GameObject_o *titleBase; // x21
  struct ServantEntity_o *svtEntity; // x8
  struct UISprite_o *titleSprite; // x8
  System_String_o *v46; // x20
  int32_t mHeight; // w27
  float v48; // s0
  float v49; // s1
  float v50; // s10
  float v51; // s15
  float v52; // s0
  float v53; // s1
  float v54; // s2
  float v55; // s11
  float v56; // s8
  float v57; // s13
  float x; // s12
  float y; // s9
  float z; // s14
  const MethodInfo *v61; // x2
  ServantLimitImageMaster_o *v62; // x28
  __int64 v63; // x23
  MapControl_QuestInfo_o *v64; // x24
  void **p_monitor; // x22
  _DWORD *v66; // x26
  MapControl_QuestInfo_o *v67; // x25
  const MethodInfo *v68; // x2
  UILabel_o *v69; // x26
  int32_t v70; // w20
  UnityEngine_GameObject_o *v71; // x27
  ServantStatusQuestBoardDraw_o *Component_srcLineSprite; // x26
  UnityEngine_Transform_o *v73; // x27
  ServantStatusListViewItemDrawServantQuest_c *v74; // x8
  ServantLimitImageMaster_o *v75; // x21
  UnityEngine_GameObject_o *v76; // x27
  ServantStatusQuestBoardManager_o *questBoardList; // x28
  int32_t QuestBoardPitch; // w8
  UnityEngine_GameObject_o *v79; // x23
  UnityEngine_Transform_o *v80; // x24
  EventMissionProgressRequest_Argument_ProgressData_o *v81; // x23
  int32_t v82; // w8
  __int64 v83; // x22
  MapControl_QuestInfo_o *v84; // x23
  void **v85; // x19
  _DWORD *v86; // x24
  MapControl_QuestInfo_o *v87; // x24
  UnityEngine_GameObject_o *v88; // x26
  ServantStatusQuestBoardDraw_o *v89; // x28
  ServantStatusListViewItemDrawServantQuest_c *v90; // x8
  UnityEngine_Transform_o *v91; // x26
  int32_t v92; // w20
  UnityEngine_GameObject_o *v93; // x26
  ServantStatusQuestBoardManager_o *v94; // x27
  int32_t v95; // w8
  UnityEngine_GameObject_o *v96; // x20
  UnityEngine_Transform_o *v97; // x22
  EventMissionProgressRequest_Argument_ProgressData_o *v98; // x20
  int32_t v99; // w8
  __int64 v100; // x0
  void **v101; // [xsp+8h] [xbp-B8h]
  System_String_o *v102; // [xsp+10h] [xbp-B0h]
  ServantStatusListViewItem_o *v103; // [xsp+18h] [xbp-A8h]
  ServantStatusListViewItemDrawServantQuest_o *v104; // [xsp+20h] [xbp-A0h]
  int v105; // [xsp+28h] [xbp-98h]
  int v106; // [xsp+28h] [xbp-98h]
  int klass; // [xsp+2Ch] [xbp-94h]
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v109; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v110; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v111; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v112; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v113; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v114; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v115; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42ECB75 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestMaster___, (_DWORD)item, mode, method);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v7, v8, v9);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_ServantStatusQuestBoardDraw___, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Add__, v13, v14, v15);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&ServantStatusListViewItemDrawServantQuest_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22, v23, v24);
    sub_B5D5C4(&Method_SingletonTemplate_QuestTree__get_Instance__, v25, v26, v27);
    sub_B5D5C4(&SingletonTemplate_QuestTree__TypeInfo, v28, v29, v30);
    sub_B5D5C4(&StringLiteral_12126/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_INTERLUDE"*/, v31, v32, v33);
    sub_B5D5C4(&StringLiteral_12128/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_RAINFORCEMENT"*/, v34, v35, v36);
    sub_B5D5C4(&StringLiteral_12127/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_LIMIT_LIBERATION"*/, v37, v38, v39);
    byte_42ECB75 = 1;
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
        Instance = LocalizationManager__Get((System_String_o *)StringLiteral_12126/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_INTERLUDE"*/, 0LL);
        if ( !explanation2Label )
          goto LABEL_101;
        UILabel__set_text(explanation2Label, Instance, 0LL);
        titleBase = this->fields.titleBase;
        Instance = LocalizationManager__Get((System_String_o *)StringLiteral_12128/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_RAINFORCEMENT"*/, 0LL);
        if ( !titleBase )
          goto LABEL_101;
        UILabel__set_text((UILabel_o *)titleBase, Instance, 0LL);
        if ( item->fields.svtEntity )
        {
          Instance = (System_String_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( Instance )
          {
            Instance = (System_String_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                            (DataManager_o *)Instance,
                                            (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestMaster___);
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
                  v46 = Instance;
                  Instance = (System_String_o *)this->fields.baseSprite;
                  if ( Instance )
                  {
                    mHeight = titleSprite->fields.mHeight;
                    *(UnityEngine_Vector3_o *)&v48 = UnityEngine_BoxCollider__get_size(
                                                       (UnityEngine_BoxCollider_o *)Instance,
                                                       0LL);
                    Instance = (System_String_o *)this->fields.interludeBase;
                    if ( Instance )
                    {
                      v50 = v48;
                      v51 = v49;
                      Instance = (System_String_o *)UnityEngine_GameObject__get_transform(
                                                      (UnityEngine_GameObject_o *)Instance,
                                                      0LL);
                      if ( Instance )
                      {
                        *(UnityEngine_Vector3_o *)&v52 = UnityEngine_Transform__get_localPosition(
                                                           (UnityEngine_Transform_o *)Instance,
                                                           0LL);
                        Instance = (System_String_o *)this->fields.interludeQuestBase;
                        if ( Instance )
                        {
                          v55 = v52;
                          v56 = v53;
                          v57 = v54;
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
                              if ( !v46 )
                                goto LABEL_101;
                              klass = (int)v46[1].klass;
                            }
                            else
                            {
                              klass = 0;
                            }
                            Instance = (System_String_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                            if ( Instance )
                            {
                              Instance = (System_String_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)Instance,
                                                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
                              v102 = v46;
                              v103 = item;
                              if ( klass < 1 )
                                goto LABEL_56;
                              if ( !v46 )
                                goto LABEL_101;
                              v105 = 0;
                              v62 = (ServantLimitImageMaster_o *)Instance;
                              v63 = 0LL;
                              v64 = 0LL;
                              p_monitor = &v46[1].monitor;
                              do
                              {
                                if ( (unsigned int)v63 >= LODWORD(v46[1].klass) )
                                {
LABEL_102:
                                  v100 = sub_B5D6C8(Instance);
                                  sub_B5D668(v100, 0LL);
                                }
                                v66 = p_monitor[v63];
                                if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
                                }
                                Instance = (System_String_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_QuestTree__get_Instance__);
                                if ( !v66 || !Instance )
                                  goto LABEL_101;
                                Instance = (System_String_o *)QuestTree__GetQuestInfo(
                                                                (QuestTree_o *)Instance,
                                                                v66[4],
                                                                0LL);
                                if ( Instance
                                  && (v67 = (MapControl_QuestInfo_o *)Instance,
                                      Instance = (System_String_o *)MapControl_QuestInfo__GetQuestType(
                                                                      (MapControl_QuestInfo_o *)Instance,
                                                                      0LL),
                                      (_DWORD)Instance == 3) )
                                {
                                  if ( !v62 )
                                    goto LABEL_101;
                                  if ( ServantLimitImageMaster__IsLimitCountSealQuest(v62, v66[4], 0LL) )
                                  {
                                    v69 = this->fields.explanation2Label;
                                    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                      && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                    {
                                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                    }
                                    Instance = LocalizationManager__Get((System_String_o *)StringLiteral_12127/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_LIMIT_LIBERATION"*/, 0LL);
                                    if ( !v69 )
                                      goto LABEL_101;
                                    UILabel__set_text(v69, Instance, 0LL);
                                  }
                                  v70 = mHeight;
                                  Instance = (System_String_o *)ServantStatusListViewItemDrawServantQuest__CreateQuestBoardPrefab(
                                                                  this,
                                                                  this->fields.rainforcementQuestBase,
                                                                  v68);
                                  if ( !Instance )
                                    goto LABEL_101;
                                  v71 = (UnityEngine_GameObject_o *)Instance;
                                  Component_srcLineSprite = (ServantStatusQuestBoardDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                               (UnityEngine_GameObject_o *)Instance,
                                                                                               (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ServantStatusQuestBoardDraw___);
                                  Instance = (System_String_o *)UnityEngine_GameObject__get_transform(v71, 0LL);
                                  v73 = (UnityEngine_Transform_o *)Instance;
                                  v74 = ServantStatusListViewItemDrawServantQuest_TypeInfo;
                                  if ( (BYTE3(ServantStatusListViewItemDrawServantQuest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                    && !ServantStatusListViewItemDrawServantQuest_TypeInfo->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawServantQuest_TypeInfo);
                                    v74 = ServantStatusListViewItemDrawServantQuest_TypeInfo;
                                  }
                                  if ( !v73 )
                                    goto LABEL_101;
                                  v109.fields.x = 0.0;
                                  v109.fields.z = 0.0;
                                  v109.fields.y = (float)-(v74->static_fields->QuestBoardPitch * v105
                                                         + v74->static_fields->QuestBoardSize / 2);
                                  v75 = v62;
                                  UnityEngine_Transform__set_localPosition(v73, v109, 0LL);
                                  v76 = *(UnityEngine_GameObject_o **)&this->fields.isInit;
                                  questBoardList = (ServantStatusQuestBoardManager_o *)this->fields.questBoardList;
                                  Instance = (System_String_o *)ServantStatusListViewItem__get_LimitCount(v103, 0LL);
                                  if ( !Component_srcLineSprite )
                                    goto LABEL_101;
                                  ServantStatusQuestBoardDraw__SetItem(
                                    Component_srcLineSprite,
                                    v67,
                                    v64,
                                    v76,
                                    questBoardList,
                                    (int32_t)Instance,
                                    0LL);
                                  Instance = (System_String_o *)this[1].klass;
                                  if ( !Instance )
                                    goto LABEL_101;
                                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
                                    (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite,
                                    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Add__);
                                  v62 = v75;
                                  QuestBoardPitch = ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardPitch;
                                  mHeight = QuestBoardPitch + v70;
                                  v51 = v51 + (float)QuestBoardPitch;
                                  y = y - (float)QuestBoardPitch;
                                  v46 = v102;
                                  v56 = v56 + (float)(QuestBoardPitch / 2);
                                  ++v105;
                                }
                                else
                                {
                                  v67 = v64;
                                }
                                ++v63;
                                v64 = v67;
                              }
                              while ( (int)v63 < klass );
                              if ( !v105 )
                              {
LABEL_56:
                                Instance = (System_String_o *)ServantStatusListViewItemDrawServantQuest__CreateQuestBoardPrefab(
                                                                this,
                                                                this->fields.rainforcementQuestBase,
                                                                v61);
                                if ( !Instance )
                                  goto LABEL_101;
                                v79 = (UnityEngine_GameObject_o *)Instance;
                                Instance = (System_String_o *)UnityEngine_GameObject__get_transform(
                                                                (UnityEngine_GameObject_o *)Instance,
                                                                0LL);
                                v80 = (UnityEngine_Transform_o *)Instance;
                                if ( (BYTE3(ServantStatusListViewItemDrawServantQuest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !ServantStatusListViewItemDrawServantQuest_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawServantQuest_TypeInfo);
                                }
                                if ( !v80 )
                                  goto LABEL_101;
                                v110.fields.x = 0.0;
                                v110.fields.z = 0.0;
                                v110.fields.y = (float)(ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardSize
                                                      / -2);
                                UnityEngine_Transform__set_localPosition(v80, v110, 0LL);
                                Instance = (System_String_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                v79,
                                                                (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ServantStatusQuestBoardDraw___);
                                if ( !Instance )
                                  goto LABEL_101;
                                v81 = (EventMissionProgressRequest_Argument_ProgressData_o *)Instance;
                                ServantStatusQuestBoardDraw__SetDark((ServantStatusQuestBoardDraw_o *)Instance, 0LL);
                                Instance = (System_String_o *)this[1].klass;
                                if ( !Instance )
                                  goto LABEL_101;
                                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                  (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
                                  v81,
                                  (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Add__);
                                v82 = ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardPitch;
                                mHeight += v82;
                                v51 = v51 + (float)v82;
                                v56 = v56 + (float)(v82 / 2);
                                y = y - (float)v82;
                              }
                              if ( klass < 1 )
                                goto LABEL_86;
                              v104 = this;
                              if ( !v46 )
                                goto LABEL_101;
                              v106 = 0;
                              v83 = 0LL;
                              v84 = 0LL;
                              v85 = &v46[1].monitor;
                              v101 = &v46[1].monitor;
                              do
                              {
                                if ( (unsigned int)v83 >= LODWORD(v46[1].klass) )
                                  goto LABEL_102;
                                v86 = v85[v83];
                                if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
                                }
                                Instance = (System_String_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_QuestTree__get_Instance__);
                                if ( !v86 || !Instance )
                                  goto LABEL_101;
                                Instance = (System_String_o *)QuestTree__GetQuestInfo(
                                                                (QuestTree_o *)Instance,
                                                                v86[4],
                                                                0LL);
                                if ( Instance
                                  && (v87 = (MapControl_QuestInfo_o *)Instance,
                                      Instance = (System_String_o *)MapControl_QuestInfo__GetQuestType(
                                                                      (MapControl_QuestInfo_o *)Instance,
                                                                      0LL),
                                      (_DWORD)Instance != 3) )
                                {
                                  Instance = (System_String_o *)ServantStatusListViewItemDrawServantQuest__CreateQuestBoardPrefab(
                                                                  v104,
                                                                  (UnityEngine_GameObject_o *)v104->fields.questBoardPrefabPath,
                                                                  v61);
                                  if ( !Instance )
                                    goto LABEL_101;
                                  v88 = (UnityEngine_GameObject_o *)Instance;
                                  v89 = (ServantStatusQuestBoardDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                           (UnityEngine_GameObject_o *)Instance,
                                                                           (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ServantStatusQuestBoardDraw___);
                                  Instance = (System_String_o *)UnityEngine_GameObject__get_transform(v88, 0LL);
                                  v90 = ServantStatusListViewItemDrawServantQuest_TypeInfo;
                                  v91 = (UnityEngine_Transform_o *)Instance;
                                  if ( (BYTE3(ServantStatusListViewItemDrawServantQuest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                    && !ServantStatusListViewItemDrawServantQuest_TypeInfo->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawServantQuest_TypeInfo);
                                    v90 = ServantStatusListViewItemDrawServantQuest_TypeInfo;
                                  }
                                  if ( !v91 )
                                    goto LABEL_101;
                                  v111.fields.x = 0.0;
                                  v111.fields.z = 0.0;
                                  v111.fields.y = (float)-(v90->static_fields->QuestBoardPitch * v106
                                                         + v90->static_fields->QuestBoardSize / 2);
                                  v92 = mHeight;
                                  UnityEngine_Transform__set_localPosition(v91, v111, 0LL);
                                  v93 = *(UnityEngine_GameObject_o **)&v104->fields.isInit;
                                  v94 = (ServantStatusQuestBoardManager_o *)v104->fields.questBoardList;
                                  Instance = (System_String_o *)ServantStatusListViewItem__get_LimitCount(v103, 0LL);
                                  if ( !v89 )
                                    goto LABEL_101;
                                  ServantStatusQuestBoardDraw__SetItem(v89, v87, v84, v93, v94, (int32_t)Instance, 0LL);
                                  Instance = (System_String_o *)v104[1].klass;
                                  if ( !Instance )
                                    goto LABEL_101;
                                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
                                    (EventMissionProgressRequest_Argument_ProgressData_o *)v89,
                                    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Add__);
                                  v95 = ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardPitch;
                                  mHeight = v95 + v92;
                                  v51 = v51 + (float)v95;
                                  v85 = v101;
                                  v46 = v102;
                                  v56 = v56 + (float)(v95 / 2);
                                  ++v106;
                                }
                                else
                                {
                                  v87 = v84;
                                }
                                ++v83;
                                v84 = v87;
                              }
                              while ( (int)v83 < klass );
                              this = v104;
                              if ( !v106 )
                              {
LABEL_86:
                                Instance = (System_String_o *)ServantStatusListViewItemDrawServantQuest__CreateQuestBoardPrefab(
                                                                this,
                                                                (UnityEngine_GameObject_o *)this->fields.questBoardPrefabPath,
                                                                v61);
                                if ( !Instance )
                                  goto LABEL_101;
                                v96 = (UnityEngine_GameObject_o *)Instance;
                                Instance = (System_String_o *)UnityEngine_GameObject__get_transform(
                                                                (UnityEngine_GameObject_o *)Instance,
                                                                0LL);
                                v97 = (UnityEngine_Transform_o *)Instance;
                                if ( (BYTE3(ServantStatusListViewItemDrawServantQuest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !ServantStatusListViewItemDrawServantQuest_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawServantQuest_TypeInfo);
                                }
                                if ( !v97 )
                                  goto LABEL_101;
                                v112.fields.x = 0.0;
                                v112.fields.z = 0.0;
                                v112.fields.y = (float)(ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardSize
                                                      / -2);
                                UnityEngine_Transform__set_localPosition(v97, v112, 0LL);
                                Instance = (System_String_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                v96,
                                                                (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ServantStatusQuestBoardDraw___);
                                if ( !Instance )
                                  goto LABEL_101;
                                v98 = (EventMissionProgressRequest_Argument_ProgressData_o *)Instance;
                                ServantStatusQuestBoardDraw__SetDark((ServantStatusQuestBoardDraw_o *)Instance, 0LL);
                                Instance = (System_String_o *)this[1].klass;
                                if ( !Instance )
                                  goto LABEL_101;
                                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                  (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
                                  v98,
                                  (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Add__);
                                v99 = ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardPitch;
                                mHeight += v99;
                                v51 = v51 + (float)v99;
                                v56 = v56 + (float)(v99 / 2);
                              }
                              Instance = (System_String_o *)this->fields.titleSprite;
                              if ( Instance )
                              {
                                UIWidget__set_height((UIWidget_o *)Instance, mHeight, 0LL);
                                Instance = (System_String_o *)this->fields.baseSprite;
                                if ( Instance )
                                {
                                  v113.fields.z = 0.0;
                                  v113.fields.x = v50;
                                  v113.fields.y = v51;
                                  UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)Instance, v113, 0LL);
                                  Instance = (System_String_o *)this->fields.interludeBase;
                                  if ( Instance )
                                  {
                                    Instance = (System_String_o *)UnityEngine_GameObject__get_transform(
                                                                    (UnityEngine_GameObject_o *)Instance,
                                                                    0LL);
                                    if ( Instance )
                                    {
                                      v114.fields.x = v55;
                                      v114.fields.y = v56;
                                      v114.fields.z = v57;
                                      UnityEngine_Transform__set_localPosition(
                                        (UnityEngine_Transform_o *)Instance,
                                        v114,
                                        0LL);
                                      Instance = (System_String_o *)this->fields.interludeQuestBase;
                                      if ( Instance )
                                      {
                                        Instance = (System_String_o *)UnityEngine_GameObject__get_transform(
                                                                        (UnityEngine_GameObject_o *)Instance,
                                                                        0LL);
                                        if ( Instance )
                                        {
                                          v115.fields.x = x;
                                          v115.fields.y = y;
                                          v115.fields.z = z;
                                          UnityEngine_Transform__set_localPosition(
                                            (UnityEngine_Transform_o *)Instance,
                                            v115,
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
          sub_B5D69C(Instance, v42);
        }
      }
    }
  }
}


void __fastcall ServantStatusListViewItemDrawServantQuest__Update(
        ServantStatusListViewItemDrawServantQuest_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  ServantStatusQuestBoardManager_o *questBoardList; // x0
  const MethodInfo *v15; // x1
  ServantStatusListViewItemDrawServantQuest_c *klass; // x0
  __int64 v17; // x1
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42ECB77 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__Dispose__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__MoveNext__, v5, v6, v7);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__get_Current__,
      v8,
      v9,
      v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__GetEnumerator__, v11, v12, v13);
    byte_42ECB77 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  questBoardList = (ServantStatusQuestBoardManager_o *)this->fields.questBoardList;
  if ( questBoardList )
  {
    if ( ServantStatusQuestBoardManager__UpdateAlphaAnim(questBoardList, 0LL) )
      ServantStatusListViewItemDrawServantQuest__OnChangeAlphaAnim(this, v15);
    klass = this[1].klass;
    if ( !klass )
      sub_B5D69C(0LL, v15);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v18,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)klass,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v18,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__MoveNext__) )
    {
      if ( !v18.fields.current )
        sub_B5D69C(0LL, v17);
      ServantStatusQuestBoardDraw__UpdateItem(
        (ServantStatusQuestBoardDraw_o *)v18.fields.current,
        (ServantStatusQuestBoardManager_o *)this->fields.questBoardList,
        0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v18,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__Dispose__);
  }
}