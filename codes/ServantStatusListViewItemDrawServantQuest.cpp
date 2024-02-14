void __fastcall ServantStatusListViewItemDrawServantQuest___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_42186CD & 1) == 0 )
  {
    sub_B0D8A4(&ServantStatusListViewItemDrawServantQuest_TypeInfo, v1);
    byte_42186CD = 1;
  }
  ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardSize = 122;
  ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardPitch = 132;
}


void __fastcall ServantStatusListViewItemDrawServantQuest___ctor(
        ServantStatusListViewItemDrawServantQuest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42186CC & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw___ctor__, method);
    sub_B0D8A4(&System_Collections_Generic_List_ServantStatusQuestBoardDraw__TypeInfo, v4);
    byte_42186CC = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_ServantStatusQuestBoardDraw__TypeInfo,
                                                                                                 method,
                                                                                                 v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw___ctor__);
  this[1].klass = (ServantStatusListViewItemDrawServantQuest_c *)v5;
  sub_B0D840((BattleServantConfConponent_o *)&this[1], (System_Int32_array **)v5, v6, v7, v8, v9, v10, v11);
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
  __int64 v10; // x1
  __int64 v11; // x2
  ServantStatusQuestBoardManager_o *v12; // x22
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  UnityEngine_UI_Dropdown_DropdownItem_o *UIAtlas; // x22
  UnityEngine_UI_Dropdown_DropdownItem_o *v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  UnityEngine_GameObject_o *v27; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v29; // x0
  UnityEngine_GameObject_o *v30; // x20
  UnityEngine_GameObject_o *v31; // x19

  if ( (byte_42186C8 & 1) == 0 )
  {
    sub_B0D8A4(&NGUITools_TypeInfo, parent);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v6);
    sub_B0D8A4(&Method_UnityEngine_Resources_Load_GameObject___, v7);
    sub_B0D8A4(&ServantStatusQuestBoardManager_TypeInfo, v8);
    byte_42186C8 = 1;
  }
  questBoardManager = (UnityEngine_Object_o *)this->fields.questBoardManager;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(questBoardManager, 0LL, 0LL) )
  {
    v12 = (ServantStatusQuestBoardManager_o *)sub_B0D974(ServantStatusQuestBoardManager_TypeInfo, v10, v11);
    ServantStatusQuestBoardManager___ctor(v12, 0LL);
    this->fields.questBoardList = (struct System_Collections_Generic_List_ServantStatusQuestBoardDraw__o *)v12;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.questBoardList,
      (System_Int32_array **)v12,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    UIAtlas = (UnityEngine_UI_Dropdown_DropdownItem_o *)UnityEngine_Resources__Load_UIAtlas_(
                                                          (System_String_o *)this->fields.inputMessageObject,
                                                          (const MethodInfo_204DCF8 *)Method_UnityEngine_Resources_Load_GameObject___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v20 = UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
            UIAtlas,
            (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    this->fields.questBoardManager = (struct ServantStatusQuestBoardManager_o *)v20;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.questBoardManager,
      (System_Int32_array **)v20,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
    v27 = (UnityEngine_GameObject_o *)this->fields.questBoardManager;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    GameObjectExtensions__SetParent_31184580(v27, gameObject, 0LL);
    v29 = (UnityEngine_GameObject_o *)this->fields.questBoardManager;
    if ( !v29 )
LABEL_17:
      sub_B0D97C(v29);
    UnityEngine_GameObject__SetActive(v29, 0, 0LL);
  }
  v30 = (UnityEngine_GameObject_o *)this->fields.questBoardManager;
  if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  v29 = NGUITools__AddChild_45603180(parent, v30, 0LL);
  if ( !v29 )
    goto LABEL_17;
  v31 = v29;
  UnityEngine_GameObject__SetActive(v29, 1, 0LL);
  return v31;
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

  if ( (byte_42186CA & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__MoveNext__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__get_Current__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__GetEnumerator__, v5);
    byte_42186CA = 1;
  }
  memset(&v7, 0, sizeof(v7));
  klass = this[1].klass;
  if ( !klass )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v7,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)klass,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v7,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__MoveNext__) )
  {
    if ( !v7.fields.current )
      sub_B0D97C(0LL);
    ServantStatusQuestBoardDraw__OnChangeAlphaAnim(
      (ServantStatusQuestBoardDraw_o *)v7.fields.current,
      (ServantStatusQuestBoardManager_o *)this->fields.questBoardList,
      0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v7,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__Dispose__);
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

  if ( (byte_42186C7 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Clear__, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v3);
    byte_42186C7 = 1;
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
    UnityEngine_Object__Destroy_34935276(v5, 0LL);
    this->fields.questBoardManager = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.questBoardManager, 0LL, v6, v7, v8, v9, v10, v11);
    klass = this[1].klass;
    if ( !klass )
      sub_B0D97C(0LL);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)klass,
      (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Clear__);
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
  struct UnityEngine_GameObject_o *titleBase; // x21
  struct ServantEntity_o *svtEntity; // x8
  struct UISprite_o *titleSprite; // x8
  System_String_o *v23; // x20
  int32_t mHeight; // w27
  float v25; // s0
  float v26; // s1
  float v27; // s10
  float v28; // s15
  float v29; // s0
  float v30; // s1
  float v31; // s2
  float v32; // s11
  float v33; // s8
  float v34; // s13
  float x; // s12
  float y; // s9
  float z; // s14
  const MethodInfo *v38; // x2
  ServantLimitImageMaster_o *v39; // x28
  __int64 v40; // x23
  MapControl_QuestInfo_o *v41; // x24
  void **p_monitor; // x22
  _DWORD *v43; // x26
  MapControl_QuestInfo_o *v44; // x25
  const MethodInfo *v45; // x2
  UILabel_o *v46; // x26
  int32_t v47; // w20
  UnityEngine_GameObject_o *v48; // x27
  ServantStatusQuestBoardDraw_o *Component_srcLineSprite; // x26
  UnityEngine_Transform_o *v50; // x27
  ServantStatusListViewItemDrawServantQuest_c *v51; // x8
  ServantLimitImageMaster_o *v52; // x21
  UnityEngine_GameObject_o *v53; // x27
  ServantStatusQuestBoardManager_o *questBoardList; // x28
  int32_t QuestBoardPitch; // w8
  UnityEngine_GameObject_o *v56; // x23
  UnityEngine_Transform_o *v57; // x24
  EventMissionProgressRequest_Argument_ProgressData_o *v58; // x23
  int32_t v59; // w8
  __int64 v60; // x22
  MapControl_QuestInfo_o *v61; // x23
  void **v62; // x19
  _DWORD *v63; // x24
  MapControl_QuestInfo_o *v64; // x24
  UnityEngine_GameObject_o *v65; // x26
  ServantStatusQuestBoardDraw_o *v66; // x28
  ServantStatusListViewItemDrawServantQuest_c *v67; // x8
  UnityEngine_Transform_o *v68; // x26
  int32_t v69; // w20
  UnityEngine_GameObject_o *v70; // x26
  ServantStatusQuestBoardManager_o *v71; // x27
  int32_t v72; // w8
  UnityEngine_GameObject_o *v73; // x20
  UnityEngine_Transform_o *v74; // x22
  EventMissionProgressRequest_Argument_ProgressData_o *v75; // x20
  int32_t v76; // w8
  __int64 v77; // x0
  void **v78; // [xsp+8h] [xbp-B8h]
  System_String_o *v79; // [xsp+10h] [xbp-B0h]
  ServantStatusListViewItem_o *v80; // [xsp+18h] [xbp-A8h]
  ServantStatusListViewItemDrawServantQuest_o *v81; // [xsp+20h] [xbp-A0h]
  int v82; // [xsp+28h] [xbp-98h]
  int v83; // [xsp+28h] [xbp-98h]
  int klass; // [xsp+2Ch] [xbp-94h]
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v86; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v87; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v88; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v89; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v90; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v91; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v92; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42186C9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestMaster___, item);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v7);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_ServantStatusQuestBoardDraw___, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Add__, v9);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v10);
    sub_B0D8A4(&ServantStatusListViewItemDrawServantQuest_TypeInfo, v11);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_B0D8A4(&Method_SingletonTemplate_QuestTree__get_Instance__, v13);
    sub_B0D8A4(&SingletonTemplate_QuestTree__TypeInfo, v14);
    sub_B0D8A4(&StringLiteral_12014/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_INTERLUDE"*/, v15);
    sub_B0D8A4(&StringLiteral_12016/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_RAINFORCEMENT"*/, v16);
    sub_B0D8A4(&StringLiteral_12015/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_LIMIT_LIBERATION"*/, v17);
    byte_42186C9 = 1;
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
        Instance = LocalizationManager__Get((System_String_o *)StringLiteral_12014/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_INTERLUDE"*/, 0LL);
        if ( !explanation2Label )
          goto LABEL_101;
        UILabel__set_text(explanation2Label, Instance, 0LL);
        titleBase = this->fields.titleBase;
        Instance = LocalizationManager__Get((System_String_o *)StringLiteral_12016/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_RAINFORCEMENT"*/, 0LL);
        if ( !titleBase )
          goto LABEL_101;
        UILabel__set_text((UILabel_o *)titleBase, Instance, 0LL);
        if ( item->fields.svtEntity )
        {
          Instance = (System_String_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( Instance )
          {
            Instance = (System_String_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                            (DataManager_o *)Instance,
                                            (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestMaster___);
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
                  v23 = Instance;
                  Instance = (System_String_o *)this->fields.baseSprite;
                  if ( Instance )
                  {
                    mHeight = titleSprite->fields.mHeight;
                    *(UnityEngine_Vector3_o *)&v25 = UnityEngine_BoxCollider__get_size(
                                                       (UnityEngine_BoxCollider_o *)Instance,
                                                       0LL);
                    Instance = (System_String_o *)this->fields.interludeBase;
                    if ( Instance )
                    {
                      v27 = v25;
                      v28 = v26;
                      Instance = (System_String_o *)UnityEngine_GameObject__get_transform(
                                                      (UnityEngine_GameObject_o *)Instance,
                                                      0LL);
                      if ( Instance )
                      {
                        *(UnityEngine_Vector3_o *)&v29 = UnityEngine_Transform__get_localPosition(
                                                           (UnityEngine_Transform_o *)Instance,
                                                           0LL);
                        Instance = (System_String_o *)this->fields.interludeQuestBase;
                        if ( Instance )
                        {
                          v32 = v29;
                          v33 = v30;
                          v34 = v31;
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
                              if ( !v23 )
                                goto LABEL_101;
                              klass = (int)v23[1].klass;
                            }
                            else
                            {
                              klass = 0;
                            }
                            Instance = (System_String_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                            if ( Instance )
                            {
                              Instance = (System_String_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)Instance,
                                                              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
                              v79 = v23;
                              v80 = item;
                              if ( klass < 1 )
                                goto LABEL_56;
                              if ( !v23 )
                                goto LABEL_101;
                              v82 = 0;
                              v39 = (ServantLimitImageMaster_o *)Instance;
                              v40 = 0LL;
                              v41 = 0LL;
                              p_monitor = &v23[1].monitor;
                              do
                              {
                                if ( (unsigned int)v40 >= LODWORD(v23[1].klass) )
                                {
LABEL_102:
                                  v77 = sub_B0D9A8(Instance);
                                  sub_B0D948(v77, 0LL);
                                }
                                v43 = p_monitor[v40];
                                if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
                                }
                                Instance = (System_String_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
                                if ( !v43 || !Instance )
                                  goto LABEL_101;
                                Instance = (System_String_o *)QuestTree__GetQuestInfo(
                                                                (QuestTree_o *)Instance,
                                                                v43[4],
                                                                0LL);
                                if ( Instance
                                  && (v44 = (MapControl_QuestInfo_o *)Instance,
                                      Instance = (System_String_o *)MapControl_QuestInfo__GetQuestType(
                                                                      (MapControl_QuestInfo_o *)Instance,
                                                                      0LL),
                                      (_DWORD)Instance == 3) )
                                {
                                  if ( !v39 )
                                    goto LABEL_101;
                                  if ( ServantLimitImageMaster__IsLimitCountSealQuest(v39, v43[4], 0LL) )
                                  {
                                    v46 = this->fields.explanation2Label;
                                    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                      && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                    {
                                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                    }
                                    Instance = LocalizationManager__Get((System_String_o *)StringLiteral_12015/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_LIMIT_LIBERATION"*/, 0LL);
                                    if ( !v46 )
                                      goto LABEL_101;
                                    UILabel__set_text(v46, Instance, 0LL);
                                  }
                                  v47 = mHeight;
                                  Instance = (System_String_o *)ServantStatusListViewItemDrawServantQuest__CreateQuestBoardPrefab(
                                                                  this,
                                                                  this->fields.rainforcementQuestBase,
                                                                  v45);
                                  if ( !Instance )
                                    goto LABEL_101;
                                  v48 = (UnityEngine_GameObject_o *)Instance;
                                  Component_srcLineSprite = (ServantStatusQuestBoardDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                               (UnityEngine_GameObject_o *)Instance,
                                                                                               (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusQuestBoardDraw___);
                                  Instance = (System_String_o *)UnityEngine_GameObject__get_transform(v48, 0LL);
                                  v50 = (UnityEngine_Transform_o *)Instance;
                                  v51 = ServantStatusListViewItemDrawServantQuest_TypeInfo;
                                  if ( (BYTE3(ServantStatusListViewItemDrawServantQuest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                    && !ServantStatusListViewItemDrawServantQuest_TypeInfo->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawServantQuest_TypeInfo);
                                    v51 = ServantStatusListViewItemDrawServantQuest_TypeInfo;
                                  }
                                  if ( !v50 )
                                    goto LABEL_101;
                                  v86.fields.x = 0.0;
                                  v86.fields.z = 0.0;
                                  v86.fields.y = (float)-(v51->static_fields->QuestBoardPitch * v82
                                                        + v51->static_fields->QuestBoardSize / 2);
                                  v52 = v39;
                                  UnityEngine_Transform__set_localPosition(v50, v86, 0LL);
                                  v53 = *(UnityEngine_GameObject_o **)&this->fields.isInit;
                                  questBoardList = (ServantStatusQuestBoardManager_o *)this->fields.questBoardList;
                                  Instance = (System_String_o *)ServantStatusListViewItem__get_LimitCount(v80, 0LL);
                                  if ( !Component_srcLineSprite )
                                    goto LABEL_101;
                                  ServantStatusQuestBoardDraw__SetItem(
                                    Component_srcLineSprite,
                                    v44,
                                    v41,
                                    v53,
                                    questBoardList,
                                    (int32_t)Instance,
                                    0LL);
                                  Instance = (System_String_o *)this[1].klass;
                                  if ( !Instance )
                                    goto LABEL_101;
                                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
                                    (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite,
                                    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Add__);
                                  v39 = v52;
                                  QuestBoardPitch = ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardPitch;
                                  mHeight = QuestBoardPitch + v47;
                                  v28 = v28 + (float)QuestBoardPitch;
                                  y = y - (float)QuestBoardPitch;
                                  v23 = v79;
                                  v33 = v33 + (float)(QuestBoardPitch / 2);
                                  ++v82;
                                }
                                else
                                {
                                  v44 = v41;
                                }
                                ++v40;
                                v41 = v44;
                              }
                              while ( (int)v40 < klass );
                              if ( !v82 )
                              {
LABEL_56:
                                Instance = (System_String_o *)ServantStatusListViewItemDrawServantQuest__CreateQuestBoardPrefab(
                                                                this,
                                                                this->fields.rainforcementQuestBase,
                                                                v38);
                                if ( !Instance )
                                  goto LABEL_101;
                                v56 = (UnityEngine_GameObject_o *)Instance;
                                Instance = (System_String_o *)UnityEngine_GameObject__get_transform(
                                                                (UnityEngine_GameObject_o *)Instance,
                                                                0LL);
                                v57 = (UnityEngine_Transform_o *)Instance;
                                if ( (BYTE3(ServantStatusListViewItemDrawServantQuest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !ServantStatusListViewItemDrawServantQuest_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawServantQuest_TypeInfo);
                                }
                                if ( !v57 )
                                  goto LABEL_101;
                                v87.fields.x = 0.0;
                                v87.fields.z = 0.0;
                                v87.fields.y = (float)(ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardSize
                                                     / -2);
                                UnityEngine_Transform__set_localPosition(v57, v87, 0LL);
                                Instance = (System_String_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                v56,
                                                                (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusQuestBoardDraw___);
                                if ( !Instance )
                                  goto LABEL_101;
                                v58 = (EventMissionProgressRequest_Argument_ProgressData_o *)Instance;
                                ServantStatusQuestBoardDraw__SetDark((ServantStatusQuestBoardDraw_o *)Instance, 0LL);
                                Instance = (System_String_o *)this[1].klass;
                                if ( !Instance )
                                  goto LABEL_101;
                                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                  (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
                                  v58,
                                  (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Add__);
                                v59 = ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardPitch;
                                mHeight += v59;
                                v28 = v28 + (float)v59;
                                v33 = v33 + (float)(v59 / 2);
                                y = y - (float)v59;
                              }
                              if ( klass < 1 )
                                goto LABEL_86;
                              v81 = this;
                              if ( !v23 )
                                goto LABEL_101;
                              v83 = 0;
                              v60 = 0LL;
                              v61 = 0LL;
                              v62 = &v23[1].monitor;
                              v78 = &v23[1].monitor;
                              do
                              {
                                if ( (unsigned int)v60 >= LODWORD(v23[1].klass) )
                                  goto LABEL_102;
                                v63 = v62[v60];
                                if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
                                }
                                Instance = (System_String_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
                                if ( !v63 || !Instance )
                                  goto LABEL_101;
                                Instance = (System_String_o *)QuestTree__GetQuestInfo(
                                                                (QuestTree_o *)Instance,
                                                                v63[4],
                                                                0LL);
                                if ( Instance
                                  && (v64 = (MapControl_QuestInfo_o *)Instance,
                                      Instance = (System_String_o *)MapControl_QuestInfo__GetQuestType(
                                                                      (MapControl_QuestInfo_o *)Instance,
                                                                      0LL),
                                      (_DWORD)Instance != 3) )
                                {
                                  Instance = (System_String_o *)ServantStatusListViewItemDrawServantQuest__CreateQuestBoardPrefab(
                                                                  v81,
                                                                  (UnityEngine_GameObject_o *)v81->fields.questBoardPrefabPath,
                                                                  v38);
                                  if ( !Instance )
                                    goto LABEL_101;
                                  v65 = (UnityEngine_GameObject_o *)Instance;
                                  v66 = (ServantStatusQuestBoardDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                           (UnityEngine_GameObject_o *)Instance,
                                                                           (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusQuestBoardDraw___);
                                  Instance = (System_String_o *)UnityEngine_GameObject__get_transform(v65, 0LL);
                                  v67 = ServantStatusListViewItemDrawServantQuest_TypeInfo;
                                  v68 = (UnityEngine_Transform_o *)Instance;
                                  if ( (BYTE3(ServantStatusListViewItemDrawServantQuest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                    && !ServantStatusListViewItemDrawServantQuest_TypeInfo->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawServantQuest_TypeInfo);
                                    v67 = ServantStatusListViewItemDrawServantQuest_TypeInfo;
                                  }
                                  if ( !v68 )
                                    goto LABEL_101;
                                  v88.fields.x = 0.0;
                                  v88.fields.z = 0.0;
                                  v88.fields.y = (float)-(v67->static_fields->QuestBoardPitch * v83
                                                        + v67->static_fields->QuestBoardSize / 2);
                                  v69 = mHeight;
                                  UnityEngine_Transform__set_localPosition(v68, v88, 0LL);
                                  v70 = *(UnityEngine_GameObject_o **)&v81->fields.isInit;
                                  v71 = (ServantStatusQuestBoardManager_o *)v81->fields.questBoardList;
                                  Instance = (System_String_o *)ServantStatusListViewItem__get_LimitCount(v80, 0LL);
                                  if ( !v66 )
                                    goto LABEL_101;
                                  ServantStatusQuestBoardDraw__SetItem(v66, v64, v61, v70, v71, (int32_t)Instance, 0LL);
                                  Instance = (System_String_o *)v81[1].klass;
                                  if ( !Instance )
                                    goto LABEL_101;
                                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
                                    (EventMissionProgressRequest_Argument_ProgressData_o *)v66,
                                    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Add__);
                                  v72 = ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardPitch;
                                  mHeight = v72 + v69;
                                  v28 = v28 + (float)v72;
                                  v62 = v78;
                                  v23 = v79;
                                  v33 = v33 + (float)(v72 / 2);
                                  ++v83;
                                }
                                else
                                {
                                  v64 = v61;
                                }
                                ++v60;
                                v61 = v64;
                              }
                              while ( (int)v60 < klass );
                              this = v81;
                              if ( !v83 )
                              {
LABEL_86:
                                Instance = (System_String_o *)ServantStatusListViewItemDrawServantQuest__CreateQuestBoardPrefab(
                                                                this,
                                                                (UnityEngine_GameObject_o *)this->fields.questBoardPrefabPath,
                                                                v38);
                                if ( !Instance )
                                  goto LABEL_101;
                                v73 = (UnityEngine_GameObject_o *)Instance;
                                Instance = (System_String_o *)UnityEngine_GameObject__get_transform(
                                                                (UnityEngine_GameObject_o *)Instance,
                                                                0LL);
                                v74 = (UnityEngine_Transform_o *)Instance;
                                if ( (BYTE3(ServantStatusListViewItemDrawServantQuest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !ServantStatusListViewItemDrawServantQuest_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawServantQuest_TypeInfo);
                                }
                                if ( !v74 )
                                  goto LABEL_101;
                                v89.fields.x = 0.0;
                                v89.fields.z = 0.0;
                                v89.fields.y = (float)(ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardSize
                                                     / -2);
                                UnityEngine_Transform__set_localPosition(v74, v89, 0LL);
                                Instance = (System_String_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                v73,
                                                                (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusQuestBoardDraw___);
                                if ( !Instance )
                                  goto LABEL_101;
                                v75 = (EventMissionProgressRequest_Argument_ProgressData_o *)Instance;
                                ServantStatusQuestBoardDraw__SetDark((ServantStatusQuestBoardDraw_o *)Instance, 0LL);
                                Instance = (System_String_o *)this[1].klass;
                                if ( !Instance )
                                  goto LABEL_101;
                                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                  (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
                                  v75,
                                  (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__Add__);
                                v76 = ServantStatusListViewItemDrawServantQuest_TypeInfo->static_fields->QuestBoardPitch;
                                mHeight += v76;
                                v28 = v28 + (float)v76;
                                v33 = v33 + (float)(v76 / 2);
                              }
                              Instance = (System_String_o *)this->fields.titleSprite;
                              if ( Instance )
                              {
                                UIWidget__set_height((UIWidget_o *)Instance, mHeight, 0LL);
                                Instance = (System_String_o *)this->fields.baseSprite;
                                if ( Instance )
                                {
                                  v90.fields.z = 0.0;
                                  v90.fields.x = v27;
                                  v90.fields.y = v28;
                                  UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)Instance, v90, 0LL);
                                  Instance = (System_String_o *)this->fields.interludeBase;
                                  if ( Instance )
                                  {
                                    Instance = (System_String_o *)UnityEngine_GameObject__get_transform(
                                                                    (UnityEngine_GameObject_o *)Instance,
                                                                    0LL);
                                    if ( Instance )
                                    {
                                      v91.fields.x = v32;
                                      v91.fields.y = v33;
                                      v91.fields.z = v34;
                                      UnityEngine_Transform__set_localPosition(
                                        (UnityEngine_Transform_o *)Instance,
                                        v91,
                                        0LL);
                                      Instance = (System_String_o *)this->fields.interludeQuestBase;
                                      if ( Instance )
                                      {
                                        Instance = (System_String_o *)UnityEngine_GameObject__get_transform(
                                                                        (UnityEngine_GameObject_o *)Instance,
                                                                        0LL);
                                        if ( Instance )
                                        {
                                          v92.fields.x = x;
                                          v92.fields.y = y;
                                          v92.fields.z = z;
                                          UnityEngine_Transform__set_localPosition(
                                            (UnityEngine_Transform_o *)Instance,
                                            v92,
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
          sub_B0D97C(Instance);
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

  if ( (byte_42186CB & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__MoveNext__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__get_Current__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__GetEnumerator__, v5);
    byte_42186CB = 1;
  }
  memset(&v9, 0, sizeof(v9));
  questBoardList = (ServantStatusQuestBoardManager_o *)this->fields.questBoardList;
  if ( questBoardList )
  {
    if ( ServantStatusQuestBoardManager__UpdateAlphaAnim(questBoardList, 0LL) )
      ServantStatusListViewItemDrawServantQuest__OnChangeAlphaAnim(this, v7);
    klass = this[1].klass;
    if ( !klass )
      sub_B0D97C(0LL);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v9,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)klass,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ServantStatusQuestBoardDraw__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v9,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__MoveNext__) )
    {
      if ( !v9.fields.current )
        sub_B0D97C(0LL);
      ServantStatusQuestBoardDraw__UpdateItem(
        (ServantStatusQuestBoardDraw_o *)v9.fields.current,
        (ServantStatusQuestBoardManager_o *)this->fields.questBoardList,
        0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v9,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ServantStatusQuestBoardDraw__Dispose__);
  }
}