void __fastcall ServantStatusListViewItemDrawServantQuest___cctor(const MethodInfo *method)
{
  if ( (byte_438F2EF & 1) == 0 )
  {
    sub_B775C4(&ServantStatusListViewItemDrawServantQuest_TypeInfo);
    byte_438F2EF = 1;
  }
  ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardSize = 122;
  ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardPitch = 132;
}


void __fastcall ServantStatusListViewItemDrawServantQuest___ctor(
        ServantStatusListViewItemDrawServantQuest_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_438F2EE & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw___ctor__);
    sub_B775C4(&System_Collections_Generic_List_ServantStatusQuestBoardDraw__TypeInfo);
    byte_438F2EE = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_ServantStatusQuestBoardDraw__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw___ctor__);
  this[1].klass = (ServantStatusListViewItemDrawServantQuest_c *)v3;
  sub_B77560((BattleServantConfConponent_o *)&this[1], (System_Int32_array **)v3, v4, v5, v6, v7, v8, v9);
  ServantStatusListViewItemDraw___ctor((ServantStatusListViewItemDraw_o *)this, 0LL);
}


UnityEngine_GameObject_o *__fastcall ServantStatusListViewItemDrawServantQuest__CreateQuestBoardPrefab(
        ServantStatusListViewItemDrawServantQuest_o *this,
        UnityEngine_GameObject_o *parent,
        const MethodInfo *method)
{
  UnityEngine_Object_o *questBoardManager; // x22
  ServantStatusQuestBoardManager_o *v6; // x22
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  UnityEngine_UI_Dropdown_DropdownItem_o *UIAtlas; // x22
  UnityEngine_UI_Dropdown_DropdownItem_o *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  UnityEngine_GameObject_o *v21; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v23; // x1
  UnityEngine_GameObject_o *v24; // x0
  UnityEngine_GameObject_o *v25; // x20
  UnityEngine_GameObject_o *v26; // x19

  if ( (byte_438F2EA & 1) == 0 )
  {
    sub_B775C4(&NGUITools_TypeInfo);
    sub_B775C4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_UnityEngine_Resources_Load_GameObject___);
    sub_B775C4(&ServantStatusQuestBoardManager_TypeInfo);
    byte_438F2EA = 1;
  }
  questBoardManager = (UnityEngine_Object_o *)this->fields.questBoardManager;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(questBoardManager, 0LL, 0LL) )
  {
    v6 = (ServantStatusQuestBoardManager_o *)sub_B77694(ServantStatusQuestBoardManager_TypeInfo);
    ServantStatusQuestBoardManager___ctor(v6, 0LL);
    this->fields.questBoardList = (struct System_Collections_Generic_List_ServantStatusQuestBoardDraw__o *)v6;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.questBoardList,
      (System_Int32_array **)v6,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
    UIAtlas = (UnityEngine_UI_Dropdown_DropdownItem_o *)UnityEngine_Resources__Load_UIAtlas_(
                                                          (System_String_o *)this->fields.inputMessageObject,
                                                          (const MethodInfo_1DFCC74 *)Method_UnityEngine_Resources_Load_GameObject___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v14 = UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
            UIAtlas,
            (const MethodInfo_1DF9900 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    this->fields.questBoardManager = (struct ServantStatusQuestBoardManager_o *)v14;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.questBoardManager,
      (System_Int32_array **)v14,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
    v21 = (UnityEngine_GameObject_o *)this->fields.questBoardManager;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    GameObjectExtensions__SetParent_32813552(v21, gameObject, 0LL);
    v24 = (UnityEngine_GameObject_o *)this->fields.questBoardManager;
    if ( !v24 )
LABEL_17:
      sub_B7769C(v24, v23);
    UnityEngine_GameObject__SetActive(v24, 0, 0LL);
  }
  v25 = (UnityEngine_GameObject_o *)this->fields.questBoardManager;
  if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  v24 = NGUITools__AddChild_39774560(parent, v25, 0LL);
  if ( !v24 )
    goto LABEL_17;
  v26 = v24;
  UnityEngine_GameObject__SetActive(v24, 1, 0LL);
  return v26;
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
  ServantStatusListViewItemDrawServantQuest_c *klass; // x0
  __int64 v4; // x1
  System_Collections_Generic_List_Enumerator_T__o v5; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_438F2EC & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__GetEnumerator__);
    byte_438F2EC = 1;
  }
  memset(&v5, 0, sizeof(v5));
  klass = this[1].klass;
  if ( !klass )
    sub_B7769C(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v5,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)klass,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v5,
            (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__MoveNext__) )
  {
    if ( !v5.fields.current )
      sub_B7769C(0LL, v4);
    ServantStatusQuestBoardDraw__OnChangeAlphaAnim(
      (ServantStatusQuestBoardDraw_o *)v5.fields.current,
      (ServantStatusQuestBoardManager_o *)this->fields.questBoardList,
      0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v5,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__Dispose__);
}


void __fastcall ServantStatusListViewItemDrawServantQuest__OnDestroy(
        ServantStatusListViewItemDrawServantQuest_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *questBoardManager; // x21
  UnityEngine_Object_o *v4; // x21
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  __int64 v11; // x1
  ServantStatusListViewItemDrawServantQuest_c *klass; // x0

  if ( (byte_438F2E9 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Clear__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438F2E9 = 1;
  }
  questBoardManager = (UnityEngine_Object_o *)this->fields.questBoardManager;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(questBoardManager, 0LL, 0LL) )
  {
    v4 = (UnityEngine_Object_o *)this->fields.questBoardManager;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_36309980(v4, 0LL);
    this->fields.questBoardManager = 0LL;
    sub_B77560((BattleServantConfConponent_o *)&this->fields.questBoardManager, 0LL, v5, v6, v7, v8, v9, v10);
    klass = this[1].klass;
    if ( !klass )
      sub_B7769C(0LL, v11);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)klass,
      (const MethodInfo_30536A0 *)Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Clear__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewItemDrawServantQuest__SetItem(
        ServantStatusListViewItemDrawServantQuest_o *this,
        ServantStatusListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  UILabel_o *explanation2Label; // x21
  System_String_o *Instance; // x0
  __int64 v9; // x1
  struct UnityEngine_GameObject_o *titleBase; // x21
  struct ServantEntity_o *svtEntity; // x8
  struct UISprite_o *titleSprite; // x8
  System_String_o *v13; // x20
  int32_t mHeight; // w27
  float v15; // s0
  float v16; // s1
  float v17; // s10
  float v18; // s15
  float v19; // s0
  float v20; // s1
  float v21; // s2
  float v22; // s11
  float v23; // s8
  float v24; // s13
  float x; // s12
  float y; // s9
  float z; // s14
  const MethodInfo *v28; // x2
  ServantLimitImageMaster_o *v29; // x28
  __int64 v30; // x23
  MapControl_QuestInfo_o *v31; // x24
  void **p_monitor; // x22
  _DWORD *v33; // x26
  MapControl_QuestInfo_o *v34; // x25
  const MethodInfo *v35; // x2
  UILabel_o *v36; // x26
  int32_t v37; // w20
  UnityEngine_GameObject_o *v38; // x27
  ServantStatusQuestBoardDraw_o *Component_srcLineSprite; // x26
  UnityEngine_Transform_o *v40; // x27
  ServantStatusListViewItemDrawServantQuest_c *v41; // x8
  ServantLimitImageMaster_o *v42; // x21
  UnityEngine_GameObject_o *v43; // x27
  ServantStatusQuestBoardManager_o *questBoardList; // x28
  int32_t QuestBoardPitch; // w8
  UnityEngine_GameObject_o *v46; // x23
  UnityEngine_Transform_o *v47; // x24
  EventMissionProgressRequest_Argument_ProgressData_o *v48; // x23
  int32_t v49; // w8
  __int64 v50; // x22
  MapControl_QuestInfo_o *v51; // x23
  void **v52; // x19
  _DWORD *v53; // x24
  MapControl_QuestInfo_o *v54; // x24
  UnityEngine_GameObject_o *v55; // x26
  ServantStatusQuestBoardDraw_o *v56; // x28
  ServantStatusListViewItemDrawServantQuest_c *v57; // x8
  UnityEngine_Transform_o *v58; // x26
  int32_t v59; // w20
  UnityEngine_GameObject_o *v60; // x26
  ServantStatusQuestBoardManager_o *v61; // x27
  int32_t v62; // w8
  UnityEngine_GameObject_o *v63; // x20
  UnityEngine_Transform_o *v64; // x22
  EventMissionProgressRequest_Argument_ProgressData_o *v65; // x20
  int32_t v66; // w8
  __int64 v67; // x0
  void **v68; // [xsp+8h] [xbp-B8h]
  System_String_o *v69; // [xsp+10h] [xbp-B0h]
  ServantStatusListViewItem_o *v70; // [xsp+18h] [xbp-A8h]
  ServantStatusListViewItemDrawServantQuest_o *v71; // [xsp+20h] [xbp-A0h]
  int v72; // [xsp+28h] [xbp-98h]
  int v73; // [xsp+28h] [xbp-98h]
  int klass; // [xsp+2Ch] [xbp-94h]
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v76; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v77; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v78; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v79; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v80; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v81; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v82; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_438F2EB & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_ServantStatusQuestBoardDraw___);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Add__);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&ServantStatusListViewItemDrawServantQuest_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_B775C4(&SingletonTemplate_QuestTree__TypeInfo);
    sub_B775C4(&StringLiteral_12211/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_INTERLUDE"*/);
    sub_B775C4(&StringLiteral_12213/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_RAINFORCEMENT"*/);
    sub_B775C4(&StringLiteral_12212/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_LIMIT_LIBERATION"*/);
    byte_438F2EB = 1;
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
        Instance = LocalizationManager__Get((System_String_o *)StringLiteral_12211/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_INTERLUDE"*/, 0LL);
        if ( !explanation2Label )
          goto LABEL_101;
        UILabel__set_text(explanation2Label, Instance, 0LL);
        titleBase = this->fields.titleBase;
        Instance = LocalizationManager__Get((System_String_o *)StringLiteral_12213/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_RAINFORCEMENT"*/, 0LL);
        if ( !titleBase )
          goto LABEL_101;
        UILabel__set_text((UILabel_o *)titleBase, Instance, 0LL);
        if ( item->fields.svtEntity )
        {
          Instance = (System_String_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( Instance )
          {
            Instance = (System_String_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                            (DataManager_o *)Instance,
                                            (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_QuestMaster___);
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
                  v13 = Instance;
                  Instance = (System_String_o *)this->fields.baseSprite;
                  if ( Instance )
                  {
                    mHeight = titleSprite->fields.mHeight;
                    *(UnityEngine_Vector3_o *)&v15 = UnityEngine_BoxCollider__get_size(
                                                       (UnityEngine_BoxCollider_o *)Instance,
                                                       0LL);
                    Instance = (System_String_o *)this->fields.interludeBase;
                    if ( Instance )
                    {
                      v17 = v15;
                      v18 = v16;
                      Instance = (System_String_o *)UnityEngine_GameObject__get_transform(
                                                      (UnityEngine_GameObject_o *)Instance,
                                                      0LL);
                      if ( Instance )
                      {
                        *(UnityEngine_Vector3_o *)&v19 = UnityEngine_Transform__get_localPosition(
                                                           (UnityEngine_Transform_o *)Instance,
                                                           0LL);
                        Instance = (System_String_o *)this->fields.interludeQuestBase;
                        if ( Instance )
                        {
                          v22 = v19;
                          v23 = v20;
                          v24 = v21;
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
                              if ( !v13 )
                                goto LABEL_101;
                              klass = (int)v13[1].klass;
                            }
                            else
                            {
                              klass = 0;
                            }
                            Instance = (System_String_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                            if ( Instance )
                            {
                              Instance = (System_String_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)Instance,
                                                              (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
                              v69 = v13;
                              v70 = item;
                              if ( klass < 1 )
                                goto LABEL_56;
                              if ( !v13 )
                                goto LABEL_101;
                              v72 = 0;
                              v29 = (ServantLimitImageMaster_o *)Instance;
                              v30 = 0LL;
                              v31 = 0LL;
                              p_monitor = &v13[1].monitor;
                              do
                              {
                                if ( (unsigned int)v30 >= LODWORD(v13[1].klass) )
                                {
LABEL_102:
                                  v67 = sub_B776C8(Instance);
                                  sub_B77668(v67, 0LL);
                                }
                                v33 = p_monitor[v30];
                                if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
                                }
                                Instance = (System_String_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2D168C0 *)Method_SingletonTemplate_QuestTree__get_Instance__);
                                if ( !v33 || !Instance )
                                  goto LABEL_101;
                                Instance = (System_String_o *)QuestTree__GetQuestInfo(
                                                                (QuestTree_o *)Instance,
                                                                v33[4],
                                                                0LL);
                                if ( Instance
                                  && (v34 = (MapControl_QuestInfo_o *)Instance,
                                      Instance = (System_String_o *)MapControl_QuestInfo__GetQuestType(
                                                                      (MapControl_QuestInfo_o *)Instance,
                                                                      0LL),
                                      (_DWORD)Instance == 3) )
                                {
                                  if ( !v29 )
                                    goto LABEL_101;
                                  if ( ServantLimitImageMaster__IsLimitCountSealQuest(v29, v33[4], 0LL) )
                                  {
                                    v36 = this->fields.explanation2Label;
                                    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                      && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                    {
                                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                    }
                                    Instance = LocalizationManager__Get((System_String_o *)StringLiteral_12212/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_LIMIT_LIBERATION"*/, 0LL);
                                    if ( !v36 )
                                      goto LABEL_101;
                                    UILabel__set_text(v36, Instance, 0LL);
                                  }
                                  v37 = mHeight;
                                  Instance = (System_String_o *)ServantStatusListViewItemDrawServantQuest__CreateQuestBoardPrefab(
                                                                  this,
                                                                  this->fields.rainforcementQuestBase,
                                                                  v35);
                                  if ( !Instance )
                                    goto LABEL_101;
                                  v38 = (UnityEngine_GameObject_o *)Instance;
                                  Component_srcLineSprite = (ServantStatusQuestBoardDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                               (UnityEngine_GameObject_o *)Instance,
                                                                                               (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusQuestBoardDraw___);
                                  Instance = (System_String_o *)UnityEngine_GameObject__get_transform(v38, 0LL);
                                  v40 = (UnityEngine_Transform_o *)Instance;
                                  v41 = ServantStatusListViewItemDrawServantQuest_TypeInfo;
                                  if ( (BYTE3(ServantStatusListViewItemDrawServantQuest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                    && !ServantStatusListViewItemDrawServantQuest_TypeInfo->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawServantQuest_TypeInfo);
                                    v41 = ServantStatusListViewItemDrawServantQuest_TypeInfo;
                                  }
                                  if ( !v40 )
                                    goto LABEL_101;
                                  v76.fields.x = 0.0;
                                  v76.fields.z = 0.0;
                                  v76.fields.y = (float)-(v41->static_fields->QuestBoardPitch * v72
                                                        + v41->static_fields->QuestBoardSize / 2);
                                  v42 = v29;
                                  UnityEngine_Transform__set_localPosition(v40, v76, 0LL);
                                  v43 = *(UnityEngine_GameObject_o **)&this->fields.isInit;
                                  questBoardList = (ServantStatusQuestBoardManager_o *)this->fields.questBoardList;
                                  Instance = (System_String_o *)ServantStatusListViewItem__get_LimitCount(v70, 0LL);
                                  if ( !Component_srcLineSprite )
                                    goto LABEL_101;
                                  ServantStatusQuestBoardDraw__SetItem(
                                    Component_srcLineSprite,
                                    v34,
                                    v31,
                                    v43,
                                    questBoardList,
                                    (int32_t)Instance,
                                    0LL);
                                  Instance = (System_String_o *)this[1].klass;
                                  if ( !Instance )
                                    goto LABEL_101;
                                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
                                    (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite,
                                    (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Add__);
                                  v29 = v42;
                                  QuestBoardPitch = ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardPitch;
                                  mHeight = QuestBoardPitch + v37;
                                  v18 = v18 + (float)QuestBoardPitch;
                                  y = y - (float)QuestBoardPitch;
                                  v13 = v69;
                                  v23 = v23 + (float)(QuestBoardPitch / 2);
                                  ++v72;
                                }
                                else
                                {
                                  v34 = v31;
                                }
                                ++v30;
                                v31 = v34;
                              }
                              while ( (int)v30 < klass );
                              if ( !v72 )
                              {
LABEL_56:
                                Instance = (System_String_o *)ServantStatusListViewItemDrawServantQuest__CreateQuestBoardPrefab(
                                                                this,
                                                                this->fields.rainforcementQuestBase,
                                                                v28);
                                if ( !Instance )
                                  goto LABEL_101;
                                v46 = (UnityEngine_GameObject_o *)Instance;
                                Instance = (System_String_o *)UnityEngine_GameObject__get_transform(
                                                                (UnityEngine_GameObject_o *)Instance,
                                                                0LL);
                                v47 = (UnityEngine_Transform_o *)Instance;
                                if ( (BYTE3(ServantStatusListViewItemDrawServantQuest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !ServantStatusListViewItemDrawServantQuest_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawServantQuest_TypeInfo);
                                }
                                if ( !v47 )
                                  goto LABEL_101;
                                v77.fields.x = 0.0;
                                v77.fields.z = 0.0;
                                v77.fields.y = (float)(ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardSize
                                                     / -2);
                                UnityEngine_Transform__set_localPosition(v47, v77, 0LL);
                                Instance = (System_String_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                v46,
                                                                (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusQuestBoardDraw___);
                                if ( !Instance )
                                  goto LABEL_101;
                                v48 = (EventMissionProgressRequest_Argument_ProgressData_o *)Instance;
                                ServantStatusQuestBoardDraw__SetDark((ServantStatusQuestBoardDraw_o *)Instance, 0LL);
                                Instance = (System_String_o *)this[1].klass;
                                if ( !Instance )
                                  goto LABEL_101;
                                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                  (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
                                  v48,
                                  (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Add__);
                                v49 = ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardPitch;
                                mHeight += v49;
                                v18 = v18 + (float)v49;
                                v23 = v23 + (float)(v49 / 2);
                                y = y - (float)v49;
                              }
                              if ( klass < 1 )
                                goto LABEL_86;
                              v71 = this;
                              if ( !v13 )
                                goto LABEL_101;
                              v73 = 0;
                              v50 = 0LL;
                              v51 = 0LL;
                              v52 = &v13[1].monitor;
                              v68 = &v13[1].monitor;
                              do
                              {
                                if ( (unsigned int)v50 >= LODWORD(v13[1].klass) )
                                  goto LABEL_102;
                                v53 = v52[v50];
                                if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
                                }
                                Instance = (System_String_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2D168C0 *)Method_SingletonTemplate_QuestTree__get_Instance__);
                                if ( !v53 || !Instance )
                                  goto LABEL_101;
                                Instance = (System_String_o *)QuestTree__GetQuestInfo(
                                                                (QuestTree_o *)Instance,
                                                                v53[4],
                                                                0LL);
                                if ( Instance
                                  && (v54 = (MapControl_QuestInfo_o *)Instance,
                                      Instance = (System_String_o *)MapControl_QuestInfo__GetQuestType(
                                                                      (MapControl_QuestInfo_o *)Instance,
                                                                      0LL),
                                      (_DWORD)Instance != 3) )
                                {
                                  Instance = (System_String_o *)ServantStatusListViewItemDrawServantQuest__CreateQuestBoardPrefab(
                                                                  v71,
                                                                  (UnityEngine_GameObject_o *)v71->fields.questBoardPrefabPath,
                                                                  v28);
                                  if ( !Instance )
                                    goto LABEL_101;
                                  v55 = (UnityEngine_GameObject_o *)Instance;
                                  v56 = (ServantStatusQuestBoardDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                           (UnityEngine_GameObject_o *)Instance,
                                                                           (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusQuestBoardDraw___);
                                  Instance = (System_String_o *)UnityEngine_GameObject__get_transform(v55, 0LL);
                                  v57 = ServantStatusListViewItemDrawServantQuest_TypeInfo;
                                  v58 = (UnityEngine_Transform_o *)Instance;
                                  if ( (BYTE3(ServantStatusListViewItemDrawServantQuest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                    && !ServantStatusListViewItemDrawServantQuest_TypeInfo->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawServantQuest_TypeInfo);
                                    v57 = ServantStatusListViewItemDrawServantQuest_TypeInfo;
                                  }
                                  if ( !v58 )
                                    goto LABEL_101;
                                  v78.fields.x = 0.0;
                                  v78.fields.z = 0.0;
                                  v78.fields.y = (float)-(v57->static_fields->QuestBoardPitch * v73
                                                        + v57->static_fields->QuestBoardSize / 2);
                                  v59 = mHeight;
                                  UnityEngine_Transform__set_localPosition(v58, v78, 0LL);
                                  v60 = *(UnityEngine_GameObject_o **)&v71->fields.isInit;
                                  v61 = (ServantStatusQuestBoardManager_o *)v71->fields.questBoardList;
                                  Instance = (System_String_o *)ServantStatusListViewItem__get_LimitCount(v70, 0LL);
                                  if ( !v56 )
                                    goto LABEL_101;
                                  ServantStatusQuestBoardDraw__SetItem(v56, v54, v51, v60, v61, (int32_t)Instance, 0LL);
                                  Instance = (System_String_o *)v71[1].klass;
                                  if ( !Instance )
                                    goto LABEL_101;
                                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
                                    (EventMissionProgressRequest_Argument_ProgressData_o *)v56,
                                    (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Add__);
                                  v62 = ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardPitch;
                                  mHeight = v62 + v59;
                                  v18 = v18 + (float)v62;
                                  v52 = v68;
                                  v13 = v69;
                                  v23 = v23 + (float)(v62 / 2);
                                  ++v73;
                                }
                                else
                                {
                                  v54 = v51;
                                }
                                ++v50;
                                v51 = v54;
                              }
                              while ( (int)v50 < klass );
                              this = v71;
                              if ( !v73 )
                              {
LABEL_86:
                                Instance = (System_String_o *)ServantStatusListViewItemDrawServantQuest__CreateQuestBoardPrefab(
                                                                this,
                                                                (UnityEngine_GameObject_o *)this->fields.questBoardPrefabPath,
                                                                v28);
                                if ( !Instance )
                                  goto LABEL_101;
                                v63 = (UnityEngine_GameObject_o *)Instance;
                                Instance = (System_String_o *)UnityEngine_GameObject__get_transform(
                                                                (UnityEngine_GameObject_o *)Instance,
                                                                0LL);
                                v64 = (UnityEngine_Transform_o *)Instance;
                                if ( (BYTE3(ServantStatusListViewItemDrawServantQuest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !ServantStatusListViewItemDrawServantQuest_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawServantQuest_TypeInfo);
                                }
                                if ( !v64 )
                                  goto LABEL_101;
                                v79.fields.x = 0.0;
                                v79.fields.z = 0.0;
                                v79.fields.y = (float)(ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardSize
                                                     / -2);
                                UnityEngine_Transform__set_localPosition(v64, v79, 0LL);
                                Instance = (System_String_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                v63,
                                                                (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusQuestBoardDraw___);
                                if ( !Instance )
                                  goto LABEL_101;
                                v65 = (EventMissionProgressRequest_Argument_ProgressData_o *)Instance;
                                ServantStatusQuestBoardDraw__SetDark((ServantStatusQuestBoardDraw_o *)Instance, 0LL);
                                Instance = (System_String_o *)this[1].klass;
                                if ( !Instance )
                                  goto LABEL_101;
                                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                  (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
                                  v65,
                                  (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Add__);
                                v66 = ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardPitch;
                                mHeight += v66;
                                v18 = v18 + (float)v66;
                                v23 = v23 + (float)(v66 / 2);
                              }
                              Instance = (System_String_o *)this->fields.titleSprite;
                              if ( Instance )
                              {
                                UIWidget__set_height((UIWidget_o *)Instance, mHeight, 0LL);
                                Instance = (System_String_o *)this->fields.baseSprite;
                                if ( Instance )
                                {
                                  v80.fields.z = 0.0;
                                  v80.fields.x = v17;
                                  v80.fields.y = v18;
                                  UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)Instance, v80, 0LL);
                                  Instance = (System_String_o *)this->fields.interludeBase;
                                  if ( Instance )
                                  {
                                    Instance = (System_String_o *)UnityEngine_GameObject__get_transform(
                                                                    (UnityEngine_GameObject_o *)Instance,
                                                                    0LL);
                                    if ( Instance )
                                    {
                                      v81.fields.x = v22;
                                      v81.fields.y = v23;
                                      v81.fields.z = v24;
                                      UnityEngine_Transform__set_localPosition(
                                        (UnityEngine_Transform_o *)Instance,
                                        v81,
                                        0LL);
                                      Instance = (System_String_o *)this->fields.interludeQuestBase;
                                      if ( Instance )
                                      {
                                        Instance = (System_String_o *)UnityEngine_GameObject__get_transform(
                                                                        (UnityEngine_GameObject_o *)Instance,
                                                                        0LL);
                                        if ( Instance )
                                        {
                                          v82.fields.x = x;
                                          v82.fields.y = y;
                                          v82.fields.z = z;
                                          UnityEngine_Transform__set_localPosition(
                                            (UnityEngine_Transform_o *)Instance,
                                            v82,
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
          sub_B7769C(Instance, v9);
        }
      }
    }
  }
}


void __fastcall ServantStatusListViewItemDrawServantQuest__Update(
        ServantStatusListViewItemDrawServantQuest_o *this,
        const MethodInfo *method)
{
  ServantStatusQuestBoardManager_o *questBoardList; // x0
  const MethodInfo *v4; // x1
  ServantStatusListViewItemDrawServantQuest_c *klass; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_Enumerator_T__o v7; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_438F2ED & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__GetEnumerator__);
    byte_438F2ED = 1;
  }
  memset(&v7, 0, sizeof(v7));
  questBoardList = (ServantStatusQuestBoardManager_o *)this->fields.questBoardList;
  if ( questBoardList )
  {
    if ( ServantStatusQuestBoardManager__UpdateAlphaAnim(questBoardList, 0LL) )
      ServantStatusListViewItemDrawServantQuest__OnChangeAlphaAnim(this, v4);
    klass = this[1].klass;
    if ( !klass )
      sub_B7769C(0LL, v4);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v7,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)klass,
      (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v7,
              (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__MoveNext__) )
    {
      if ( !v7.fields.current )
        sub_B7769C(0LL, v6);
      ServantStatusQuestBoardDraw__UpdateItem(
        (ServantStatusQuestBoardDraw_o *)v7.fields.current,
        (ServantStatusQuestBoardManager_o *)this->fields.questBoardList,
        0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v7,
      (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__Dispose__);
  }
}