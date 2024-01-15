void __fastcall QuestBoardListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  QuestBoardListViewManager_c *v2; // x8

  if ( (byte_40F953F & 1) == 0 )
  {
    sub_B16FFC(&QuestBoardListViewManager_TypeInfo, v1);
    byte_40F953F = 1;
  }
  QuestBoardListViewManager_TypeInfo->static_fields->INTO_TIME = 0.5;
  QuestBoardListViewManager_TypeInfo->static_fields->EXIT_TIME = 0.25;
  v2 = QuestBoardListViewManager_TypeInfo;
  QuestBoardListViewManager_TypeInfo->static_fields->MAP_INTO_TIME = 0.15;
  v2->static_fields->MAP_EXIT_TIME = 0.05;
  v2->static_fields->ALPHA_ANIM_SPD_RATE = 0.5;
  v2->static_fields->ALPHA_ANIM_TIME_INTERVAL = 3.0;
  v2->static_fields->DEFAULT_SCROLL_VIEW_DEPTH = 22;
  v2->static_fields->REWARD_ICON_FADE_FRAME_NUM = 7;
  v2->static_fields->ALPHA_ANIM_COUNT_RESET_VAL = 232792560;
}


void __fastcall QuestBoardListViewManager___ctor(QuestBoardListViewManager_o *this, const MethodInfo *method)
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
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x20
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7

  if ( (byte_40F953E & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem___ctor__, method);
    sub_B16FFC(&System_Collections_Generic_List_ListViewItem__TypeInfo, v6);
    byte_40F953E = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                 System_Collections_Generic_List_ListViewItem__TypeInfo,
                                                                                                 method,
                                                                                                 v2,
                                                                                                 v3,
                                                                                                 v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  this->fields.topItemList = (struct System_Collections_Generic_List_ListViewItem__o *)v7;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.topItemList,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ListViewItem__TypeInfo,
                                                                                                  v14,
                                                                                                  v15,
                                                                                                  v16,
                                                                                                  v17);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  this->fields.bottomItemList = (struct System_Collections_Generic_List_ListViewItem__o *)v18;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.bottomItemList,
    (System_Int32_array **)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall QuestBoardListViewManager__Awake(QuestBoardListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  srcLineSprite_o *Component_srcLineSprite; // x0
  UnityEngine_GameObject_o *v6; // x0
  struct UnityEngine_BoxCollider_o *v7; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  UnityEngine_Collider_o *mBoxCollider; // x0
  UnityEngine_Component_o *mNoneLabel; // x0
  UnityEngine_GameObject_o *v16; // x0
  UnityEngine_Component_o *Parent; // x0
  struct UnityEngine_GameObject_o *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  UnityEngine_GameObject_o *mNoneLabelParent; // x0

  if ( (byte_40F9509 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, method);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v3);
    byte_40F9509 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_11;
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              gameObject,
                              (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !Component_srcLineSprite )
    goto LABEL_11;
  this->fields.mBaseClipRange = (float)SHIDWORD(Component_srcLineSprite[1].fields.mFSM);
  v6 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v6 )
    goto LABEL_11;
  v7 = (struct UnityEngine_BoxCollider_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                             v6,
                                             (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  this->fields.mBoxCollider = v7;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.mBoxCollider,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  mBoxCollider = (UnityEngine_Collider_o *)this->fields.mBoxCollider;
  if ( !mBoxCollider )
    goto LABEL_11;
  UnityEngine_Collider__set_enabled(mBoxCollider, 0, 0LL);
  mNoneLabel = (UnityEngine_Component_o *)this->fields.mNoneLabel;
  if ( !mNoneLabel
    || (v16 = UnityEngine_Component__get_gameObject(mNoneLabel, 0LL),
        (Parent = (UnityEngine_Component_o *)GameObjectExtensions__GetParent(v16, 0LL)) == 0LL)
    || (v18 = UnityEngine_Component__get_gameObject(Parent, 0LL),
        this->fields.mNoneLabelParent = v18,
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.mNoneLabelParent,
          (System_Int32_array **)v18,
          v19,
          v20,
          v21,
          v22,
          v23,
          v24),
        (mNoneLabelParent = this->fields.mNoneLabelParent) == 0LL) )
  {
LABEL_11:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(mNoneLabelParent, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestBoardListViewManager__BGChangeEffect(
        QuestBoardListViewManager_o *this,
        int32_t bgID,
        int32_t effectType,
        float time,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  UnityEngine_Component_o *mFolderBg; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x2
  UnityEngine_Component_o *v20; // x0
  UnityEngine_GameObject_o *v21; // x21
  UnityEngine_UI_Dropdown_DropdownItem_o *v22; // x0
  UnityEngine_GameObject_o *v23; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *parent; // x0
  struct ExUITexture_o *Component_srcLineSprite; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  UIWidget_o *mFolderBgTemp; // x0
  struct ExUITexture_o *v34; // x21
  Il2CppObject *v35; // x0
  System_String_o *v36; // x20
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  System_Action_o *v41; // x0
  __int64 *v42; // x8
  float v43; // s0
  Il2CppObject *v44; // x0
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x3
  __int64 v48; // x4
  System_Action_o *v49; // x22
  ExUITexture_o *v50; // x0
  System_String_o *v51; // x1
  System_Action_o *v52; // x2
  UnityEngine_Component_o *v53; // x19
  Il2CppObject *v54; // x0
  System_String_o *v55; // x0
  UnityEngine_GameObject_o *v56; // x0
  int32_t v57; // [xsp+Ch] [xbp-34h] BYREF
  int32_t v58; // [xsp+18h] [xbp-28h] BYREF
  int32_t v59; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_40F9524 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&bgID);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ExUITexture___, v9);
    sub_B16FFC(&int_TypeInfo, v10);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v11);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v12);
    sub_B16FFC(&Method_QuestBoardListViewManager__BGChangeEffect_b__131_0__, v13);
    sub_B16FFC(&Method_QuestBoardListViewManager__BGChangeEffect_b__131_1__, v14);
    sub_B16FFC(&StringLiteral_2643/*"Back/back{0}"*/, v15);
    byte_40F9524 = 1;
  }
  mFolderBg = (UnityEngine_Component_o *)this->fields.mFolderBg;
  if ( !mFolderBg )
    goto LABEL_32;
  gameObject = UnityEngine_Component__get_gameObject(mFolderBg, 0LL);
  if ( !gameObject )
    goto LABEL_32;
  if ( UnityEngine_GameObject__get_activeSelf(gameObject, 0LL) )
  {
    if ( effectType )
    {
      if ( !bgID )
      {
        QuestBoardListViewManager__bgAlphaFade(this, 4, time, v19);
        return;
      }
      QuestBoardListViewManager__RemoveTempBG(this, v18);
      v20 = (UnityEngine_Component_o *)this->fields.mFolderBg;
      if ( v20 )
      {
        v21 = UnityEngine_Component__get_gameObject(v20, 0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v22 = UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                (UnityEngine_UI_Dropdown_DropdownItem_o *)v21,
                (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( this->fields.mFolderBg )
        {
          v23 = (UnityEngine_GameObject_o *)v22;
          transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.mFolderBg, 0LL);
          if ( transform )
          {
            parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(transform, 0LL);
            GameObjectExtensions__SafeSetParent(v23, parent, 0LL);
            if ( v23 )
            {
              Component_srcLineSprite = (struct ExUITexture_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                  v23,
                                                                  (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ExUITexture___);
              this->fields.mFolderBgTemp = Component_srcLineSprite;
              sub_B16F98(
                (BattleServantConfConponent_o *)&this->fields.mFolderBgTemp,
                (System_Int32_array **)Component_srcLineSprite,
                v27,
                v28,
                v29,
                v30,
                v31,
                v32);
              mFolderBgTemp = (UIWidget_o *)this->fields.mFolderBgTemp;
              if ( mFolderBgTemp )
              {
                UIWidget__set_depth(mFolderBgTemp, mFolderBgTemp->fields.mDepth + 1, 0LL);
                this->fields.mCrossFadeTime = time;
                v34 = this->fields.mFolderBg;
                v57 = bgID;
                v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v57);
                v36 = System_String__Format((System_String_o *)StringLiteral_2643/*"Back/back{0}"*/, v35, 0LL);
                v41 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v37, v38, v39, v40);
                v42 = &Method_QuestBoardListViewManager__BGChangeEffect_b__131_1__;
                goto LABEL_21;
              }
            }
          }
        }
      }
    }
    else
    {
      v53 = (UnityEngine_Component_o *)this->fields.mFolderBg;
      if ( bgID )
      {
        v58 = bgID;
        v54 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v58);
        v55 = System_String__Format((System_String_o *)StringLiteral_2643/*"Back/back{0}"*/, v54, 0LL);
        if ( v53 )
        {
          v51 = v55;
          v50 = (ExUITexture_o *)v53;
          v52 = 0LL;
          goto LABEL_23;
        }
      }
      else if ( v53 )
      {
        v56 = UnityEngine_Component__get_gameObject(v53, 0LL);
        if ( v56 )
        {
          UnityEngine_GameObject__SetActive(v56, 0, 0LL);
          return;
        }
      }
    }
LABEL_32:
    sub_B170D4();
  }
  if ( !bgID )
    return;
  v43 = 0.0;
  if ( effectType )
    v43 = time;
  this->fields.mCrossFadeTime = v43;
  v34 = this->fields.mFolderBg;
  v59 = bgID;
  v44 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v59);
  v36 = System_String__Format((System_String_o *)StringLiteral_2643/*"Back/back{0}"*/, v44, 0LL);
  v41 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v45, v46, v47, v48);
  v42 = &Method_QuestBoardListViewManager__BGChangeEffect_b__131_0__;
LABEL_21:
  v49 = v41;
  System_Action___ctor(v41, (Il2CppObject *)this, *v42, 0LL);
  if ( !v34 )
    goto LABEL_32;
  v50 = v34;
  v51 = v36;
  v52 = v49;
LABEL_23:
  ExUITexture__SetAssetImage(v50, v51, v52, 0LL);
}


void __fastcall QuestBoardListViewManager__ClearFadeIn(QuestBoardListViewManager_o *this, const MethodInfo *method)
{
  this->fields.mFaded = 0;
}


System_Collections_IEnumerator_o *__fastcall QuestBoardListViewManager__CoroutineLoadAsset(
        QuestBoardListViewManager_o *this,
        System_Action_o *onCompleteLoad,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x21
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_40F9527 & 1) == 0 )
  {
    sub_B16FFC(&QuestBoardListViewManager__CoroutineLoadAsset_d__135_TypeInfo, onCompleteLoad);
    byte_40F9527 = 1;
  }
  v7 = sub_B170CC(QuestBoardListViewManager__CoroutineLoadAsset_d__135_TypeInfo, onCompleteLoad, method, v3, v4);
  QuestBoardListViewManager__CoroutineLoadAsset_d__135___ctor(
    (QuestBoardListViewManager__CoroutineLoadAsset_d__135_o *)v7,
    0,
    0LL);
  if ( !v7 )
    sub_B170D4();
  *(_QWORD *)(v7 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v7 + 40) = onCompleteLoad;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v7 + 40),
    (System_Int32_array **)onCompleteLoad,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  return (System_Collections_IEnumerator_o *)v7;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestBoardListViewManager__CreateList(
        QuestBoardListViewManager_o *this,
        int32_t info_kind,
        System_Collections_Generic_List_MapControl_QuestInfo__o *qinf_list,
        float pos_itvl_y,
        float clip_w,
        bool isAllDisp,
        System_Collections_Generic_List_ScrTerminalListTop_WarSelectedQuestInfo__o *warSelectedQuestList,
        const MethodInfo *method)
{
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
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UIWidget_o *Component_srcLineSprite; // x24
  UnityEngine_GameObject_o *v30; // x0
  UnityEngine_BoxCollider_o *v31; // x25
  QuestBoardListViewItemDraw_c *v32; // x8
  UnityEngine_Component_o *scrollView; // x0
  int32_t SCRL_OBJ_DUMMY_NUM; // w19
  UnityEngine_GameObject_o *v35; // x0
  srcLineSprite_o *v36; // x0
  struct ListViewItemSeed_o *seed; // x8
  float v38; // s10
  float mBaseClipRange; // s11
  UIPanel_o *v40; // x26
  float v41; // s9
  double v42; // d0
  __int64 v43; // x1
  TerminalSceneComponent_c *v44; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  struct ScrTerminalMap_o *mTerminalMap; // x8
  UnityEngine_GameObject_o *mapButtonGrid; // x0
  bool activeSelf; // w0
  QuestBoardListViewManager_c *v49; // x8
  float *p_MAP_EXIT_TIME; // x8
  float v51; // w8
  UnityEngine_GameObject_o *mNoneLabelParent; // x0
  UILabel_o *mNoneLabel; // x24
  System_String_o *v54; // x0
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x3
  __int64 v58; // x4
  QuestBoardListViewItemDraw_c *v59; // x0
  UnityEngine_GameObject_o *v60; // x0
  char v61; // w1
  int32_t size; // w19
  int v63; // w8
  unsigned __int64 v64; // x21
  signed __int64 v65; // x19
  MapControl_QuestInfo_o *v66; // x24
  MapControl_WarInfo_o *WarInfo_k__BackingField; // x0
  WarEntity_o *Mine; // x0
  QuestBoardListViewItem_o *v69; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v70; // x25
  int32_t v71; // w2
  QuestEntity_o *v72; // x0
  UnityEngine_GameObject_o *blackMarkPrefab; // x26
  UnityEngine_GameObject_o *whiteMarkPrefab; // x27
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  __int64 v76; // x1
  __int64 v77; // x2
  __int64 v78; // x3
  __int64 v79; // x4
  QuestBoardListViewItemDraw_c *v80; // x0
  int32_t v81; // w19
  int v82; // w8
  signed __int64 v83; // x22
  signed __int64 v84; // x27
  struct WarQuestSelectionEntity_o *v85; // x8
  MapControl_QuestInfo_o *v86; // x25
  int32_t shortCutBannerId; // w26
  QuestBoardListViewItem_o *v88; // x0
  QuestBoardListViewItem_o *v89; // x24
  int32_t v90; // w2
  ScrTerminalListTop_WarSelectedQuestInfo_o *v91; // x26
  struct WarQuestSelectionEntity_o *warQuestSelectionEnt; // x8
  MapControl_QuestInfo_o *questInfo; // x0
  int32_t warId; // w23
  QuestEntity_o *v95; // x0
  const MethodInfo *v96; // x1
  __int64 v97; // x2
  __int64 v98; // x3
  __int64 v99; // x4
  QuestEntity_o *v100; // x24
  int64_t *p_flag; // x8
  UnityEngine_GameObject_o *v102; // x23
  UnityEngine_GameObject_o *v103; // x25
  QuestPhaseDetailEntity_o *PhaseDetail; // x0
  __int64 v105; // x1
  __int64 v106; // x2
  __int64 v107; // x3
  __int64 v108; // x4
  struct MapControl_QuestInfo_o *v109; // x8
  MapControl_WarInfo_o *v110; // x0
  WarEntity_o *v111; // x0
  struct WarQuestSelectionEntity_o *v112; // x8
  struct WarQuestSelectionEntity_o *v113; // x8
  struct System_Collections_Generic_List_ListViewItem__o *v114; // x0
  bool v115; // [xsp+8h] [xbp-78h]
  UnityEngine_Vector3_o v117; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector4_o v118; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40F950C & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, *(_QWORD *)&info_kind);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UIPanel___, v14);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__Add__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_ScrTerminalListTop_WarSelectedQuestInfo__get_Count__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_MapControl_QuestInfo__get_Count__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_MapControl_QuestInfo__get_Item__, v19);
    sub_B16FFC(&Method_System_Collections_Generic_List_ScrTerminalListTop_WarSelectedQuestInfo__get_Item__, v20);
    sub_B16FFC(&LocalizationManager_TypeInfo, v21);
    sub_B16FFC(&NetworkManager_TypeInfo, v22);
    sub_B16FFC(&QuestBoardListViewItemDraw_TypeInfo, v23);
    sub_B16FFC(&QuestBoardListViewItem_TypeInfo, v24);
    sub_B16FFC(&QuestBoardListViewManager_TypeInfo, v25);
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, v26);
    sub_B16FFC(&StringLiteral_10926/*"QUEST_NONE"*/, v27);
    byte_40F950C = 1;
  }
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_114;
  Component_srcLineSprite = (UIWidget_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                            gameObject,
                                            (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  v30 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v30 )
    goto LABEL_114;
  v31 = (UnityEngine_BoxCollider_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                       v30,
                                       (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  v32 = QuestBoardListViewItemDraw_TypeInfo;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v32 = QuestBoardListViewItemDraw_TypeInfo;
  }
  scrollView = (UnityEngine_Component_o *)this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_114;
  SCRL_OBJ_DUMMY_NUM = v32->static_fields->SCRL_OBJ_DUMMY_NUM;
  v35 = UnityEngine_Component__get_gameObject(scrollView, 0LL);
  if ( !v35 )
    goto LABEL_114;
  v36 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
          v35,
          (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
  if ( !v36 )
    goto LABEL_114;
  seed = this->fields.seed;
  if ( !seed )
    goto LABEL_114;
  v38 = *(float *)&v36[2].fields.m_CachedPtr;
  mBaseClipRange = this->fields.mBaseClipRange;
  v40 = (UIPanel_o *)v36;
  seed->fields.arrangementPich.fields.y = -pos_itvl_y;
  if ( !Component_srcLineSprite )
    goto LABEL_114;
  v41 = (float)(SCRL_OBJ_DUMMY_NUM + 1) * pos_itvl_y;
  v42 = v41;
  if ( v41 == INFINITY )
    v42 = -v41;
  UIWidget__set_height(Component_srcLineSprite, (int)v42, 0LL);
  if ( !v31 )
    goto LABEL_114;
  LODWORD(v117.fields.x) = (unsigned int)UnityEngine_BoxCollider__get_size(v31, 0LL);
  v117.fields.z = 0.0;
  v117.fields.y = v41;
  UnityEngine_BoxCollider__set_size(v31, v117, 0LL);
  v118.fields.y = (float)(mBaseClipRange - v41) * 0.5;
  v118.fields.z = clip_w;
  v118.fields.w = v41;
  this->fields.clipRange.fields.y = v41 + (float)QuestBoardListViewItemDraw_TypeInfo->static_fields->CLIP_RANGE_MARGIN;
  v118.fields.x = v38;
  UIPanel__set_baseClipRegion(v40, v118, 0LL);
  this->fields.mResetConsumeColor = 0;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  this->fields.mListCreatedTime = NetworkManager__getTime(0LL);
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_40F6042 )
  {
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, v43);
    byte_40F6042 = 1;
  }
  v44 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v44 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v44->static_fields->mInstance;
  if ( !mInstance )
    goto LABEL_114;
  mTerminalMap = mInstance->fields.mTerminalMap;
  if ( !mTerminalMap )
    goto LABEL_114;
  mapButtonGrid = (UnityEngine_GameObject_o *)mTerminalMap->fields.mapButtonGrid;
  if ( !mapButtonGrid )
    goto LABEL_114;
  activeSelf = UnityEngine_GameObject__get_activeSelf(mapButtonGrid, 0LL);
  v49 = QuestBoardListViewManager_TypeInfo;
  if ( activeSelf )
  {
    if ( (WORD1(QuestBoardListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !QuestBoardListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewManager_TypeInfo);
      v49 = QuestBoardListViewManager_TypeInfo;
    }
    this->fields.infoTime = v49->static_fields->MAP_INTO_TIME;
    p_MAP_EXIT_TIME = &v49->static_fields->MAP_EXIT_TIME;
  }
  else
  {
    if ( (WORD1(QuestBoardListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !QuestBoardListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewManager_TypeInfo);
      v49 = QuestBoardListViewManager_TypeInfo;
    }
    this->fields.infoTime = v49->static_fields->INTO_TIME;
    p_MAP_EXIT_TIME = &v49->static_fields->EXIT_TIME;
  }
  v51 = *p_MAP_EXIT_TIME;
  this->fields.mAlphaAnimCnt = 0;
  this->fields.exitTime = v51;
  this->fields._SyncReferenceTime_k__BackingField = UnityEngine_Time__get_time(0LL);
  if ( !qinf_list )
    goto LABEL_114;
  mNoneLabelParent = this->fields.mNoneLabelParent;
  if ( !mNoneLabelParent )
    goto LABEL_114;
  UnityEngine_GameObject__SetActive(mNoneLabelParent, qinf_list->fields._size < 1, 0LL);
  mNoneLabel = this->fields.mNoneLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v54 = LocalizationManager__Get((System_String_o *)StringLiteral_10926/*"QUEST_NONE"*/, 0LL);
  if ( !mNoneLabel )
LABEL_114:
    sub_B170D4();
  UILabel__set_text(mNoneLabel, v54, 0LL);
  v59 = QuestBoardListViewItemDraw_TypeInfo;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v59 = QuestBoardListViewItemDraw_TypeInfo;
  }
  if ( info_kind != 6 )
  {
    size = qinf_list->fields._size;
    v115 = isAllDisp;
    if ( (BYTE3(v59->vtable._0_Equals.methodPtr) & 4) != 0 && !v59->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v59);
      v59 = QuestBoardListViewItemDraw_TypeInfo;
    }
    v63 = v59->static_fields->SCRL_OBJ_DUMMY_NUM + size;
    if ( v63 < 1 )
    {
LABEL_112:
      ListViewManager__SortItem((ListViewManager_o *)this, -1, v115, -1, 0LL);
      return;
    }
    v64 = 0LL;
    v65 = v63;
    while ( (__int64)v64 < qinf_list->fields._size )
    {
      if ( v64 >= (unsigned int)qinf_list->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v66 = qinf_list->fields._items->m_Items[v64];
      if ( info_kind != 2 || !v66 )
        goto LABEL_70;
      WarInfo_k__BackingField = v66->fields._WarInfo_k__BackingField;
      if ( !WarInfo_k__BackingField )
        goto LABEL_114;
      Mine = MapControl_WarInfo__GetMine(WarInfo_k__BackingField, 0LL);
      if ( !Mine )
        goto LABEL_114;
      if ( WarEntity__HasFlag(Mine, 16, 0LL) )
      {
        v69 = (QuestBoardListViewItem_o *)sub_B170CC(QuestBoardListViewItem_TypeInfo, v55, v56, v57, v58);
        v70 = (EventMissionProgressRequest_Argument_ProgressData_o *)v69;
        v71 = 4;
      }
      else
      {
LABEL_70:
        if ( !v66 || !MapControl_QuestInfo__GetMine(v66, 0LL) )
          goto LABEL_73;
        v72 = MapControl_QuestInfo__GetMine(v66, 0LL);
        if ( !v72 )
          goto LABEL_114;
        if ( (v72->fields.type & 0x1F) != 7 )
          goto LABEL_73;
        v69 = (QuestBoardListViewItem_o *)sub_B170CC(QuestBoardListViewItem_TypeInfo, v55, v56, v57, v58);
        v70 = (EventMissionProgressRequest_Argument_ProgressData_o *)v69;
        v71 = 5;
      }
      QuestBoardListViewItem___ctor_29485660(v69, v64, v71, v66, 0LL, 0LL, 0, 0, 0LL);
LABEL_74:
      itemList = this->fields.itemList;
      if ( !itemList )
        goto LABEL_114;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
        v70,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      if ( (__int64)++v64 >= v65 )
        goto LABEL_112;
    }
    v66 = 0LL;
LABEL_73:
    blackMarkPrefab = this->fields.blackMarkPrefab;
    whiteMarkPrefab = this->fields.whiteMarkPrefab;
    v70 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_B170CC(
                                                                   QuestBoardListViewItem_TypeInfo,
                                                                   v55,
                                                                   v56,
                                                                   v57,
                                                                   v58);
    QuestBoardListViewItem___ctor_29485660(
      (QuestBoardListViewItem_o *)v70,
      v64,
      info_kind,
      v66,
      blackMarkPrefab,
      whiteMarkPrefab,
      0,
      0,
      0LL);
    goto LABEL_74;
  }
  v60 = this->fields.mNoneLabelParent;
  if ( warSelectedQuestList )
  {
    v61 = warSelectedQuestList->fields._size < 1;
    if ( !v60 )
      goto LABEL_114;
  }
  else
  {
    v61 = 1;
    if ( !v60 )
      goto LABEL_114;
  }
  UnityEngine_GameObject__SetActive(v60, v61, 0LL);
  if ( warSelectedQuestList )
  {
    v80 = QuestBoardListViewItemDraw_TypeInfo;
    v81 = warSelectedQuestList->fields._size;
    v115 = isAllDisp;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v80 = QuestBoardListViewItemDraw_TypeInfo;
    }
    v82 = v80->static_fields->SCRL_OBJ_DUMMY_NUM + v81;
    if ( v82 >= 1 )
    {
      v83 = 0LL;
      v84 = v82;
      do
      {
        if ( v83 >= warSelectedQuestList->fields._size )
          goto LABEL_95;
        if ( v83 >= (unsigned __int64)(unsigned int)warSelectedQuestList->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v91 = warSelectedQuestList->fields._items->m_Items[v83];
        if ( v91 )
        {
          warQuestSelectionEnt = v91->fields.warQuestSelectionEnt;
          if ( !warQuestSelectionEnt )
            goto LABEL_114;
          questInfo = v91->fields.questInfo;
          if ( !questInfo )
            goto LABEL_114;
          warId = warQuestSelectionEnt->fields.warId;
          v95 = MapControl_QuestInfo__GetMine(questInfo, 0LL);
          if ( !v95 )
            goto LABEL_114;
          v100 = v95;
          if ( v95->fields.mIsPhaseDetailed || (PhaseDetail = QuestEntity__GetPhaseDetail(v95, v96)) == 0LL )
            p_flag = &v100->fields.flag;
          else
            p_flag = &PhaseDetail->fields.flag;
          v86 = v91->fields.questInfo;
          if ( (*((_BYTE *)p_flag + 7) & 8) != 0 )
          {
            v113 = v91->fields.warQuestSelectionEnt;
            if ( !v113 )
              goto LABEL_114;
            shortCutBannerId = v113->fields.shortCutBannerId;
            v88 = (QuestBoardListViewItem_o *)sub_B170CC(QuestBoardListViewItem_TypeInfo, v96, v97, v98, v99);
            v89 = v88;
            v90 = 6;
          }
          else
          {
            if ( !v86 )
              goto LABEL_114;
            if ( MapControl_QuestInfo__GetQuestType(v91->fields.questInfo, 0LL) != 3 )
              goto LABEL_105;
            v109 = v91->fields.questInfo;
            if ( !v109 )
              goto LABEL_114;
            v110 = v109->fields._WarInfo_k__BackingField;
            if ( !v110 )
              goto LABEL_114;
            v111 = MapControl_WarInfo__GetMine(v110, 0LL);
            if ( !v111 )
              goto LABEL_114;
            if ( !WarEntity__HasFlag(v111, 16, 0LL) )
            {
              v85 = v91->fields.warQuestSelectionEnt;
              if ( !v85 )
                goto LABEL_114;
              v86 = v91->fields.questInfo;
              shortCutBannerId = v85->fields.shortCutBannerId;
              v88 = (QuestBoardListViewItem_o *)sub_B170CC(QuestBoardListViewItem_TypeInfo, v105, v106, v107, v108);
              v89 = v88;
              v90 = 2;
            }
            else
            {
LABEL_105:
              v112 = v91->fields.warQuestSelectionEnt;
              if ( !v112 )
                goto LABEL_114;
              v86 = v91->fields.questInfo;
              shortCutBannerId = v112->fields.shortCutBannerId;
              v88 = (QuestBoardListViewItem_o *)sub_B170CC(QuestBoardListViewItem_TypeInfo, v105, v106, v107, v108);
              v89 = v88;
              v90 = 4;
            }
          }
          QuestBoardListViewItem___ctor_29485660(v88, v83, v90, v86, 0LL, 0LL, shortCutBannerId, warId, 0LL);
        }
        else
        {
LABEL_95:
          v102 = this->fields.blackMarkPrefab;
          v103 = this->fields.whiteMarkPrefab;
          v89 = (QuestBoardListViewItem_o *)sub_B170CC(QuestBoardListViewItem_TypeInfo, v76, v77, v78, v79);
          QuestBoardListViewItem___ctor_29485660(v89, v83, 6, 0LL, v102, v103, 0, 0, 0LL);
        }
        v114 = this->fields.itemList;
        if ( !v114 )
          goto LABEL_114;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v114,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v89,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        ++v83;
      }
      while ( v83 < v84 );
    }
    goto LABEL_112;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestBoardListViewManager__DispBoardForTerminalTopEffect(
        QuestBoardListViewManager_o *this,
        bool isBoardDisp,
        int32_t warId,
        bool isBadgeDisp,
        bool isBlackMarkOnly,
        bool isWhiteMarkOnly,
        bool isSpecialClosedBanner,
        const MethodInfo *method)
{
  QuestBoardListViewObject_o *QuestBoardObjForWarId; // x24
  const MethodInfo *v16; // x6

  if ( (byte_40F9510 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, isBoardDisp);
    byte_40F9510 = 1;
  }
  QuestBoardObjForWarId = QuestBoardListViewManager__GetQuestBoardObjForWarId(this, warId, *(const MethodInfo **)&warId);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)QuestBoardObjForWarId, 0LL, 0LL) )
  {
    if ( !QuestBoardObjForWarId )
      sub_B170D4();
    QuestBoardListViewObject__SetupDispAreaForTerminalTopEffect(
      QuestBoardObjForWarId,
      isBoardDisp,
      isBadgeDisp,
      isBlackMarkOnly,
      isWhiteMarkOnly,
      isSpecialClosedBanner,
      v16);
  }
}


void __fastcall QuestBoardListViewManager__EndSlideIn(
        QuestBoardListViewManager_o *this,
        System_Action_o *end_act,
        bool isNotInit,
        const MethodInfo *method)
{
  TerminalSceneComponent_o *mTerminalScene; // x0
  const MethodInfo *v8; // x5
  int32_t v9; // w1

  mTerminalScene = this->fields.mTerminalScene;
  this->fields.mIsDoing_Slide = 0;
  if ( !mTerminalScene )
    sub_B170D4();
  if ( TerminalSceneComponent__get_IsTutorialActive(mTerminalScene, 0LL) )
    v9 = 1;
  else
    v9 = 2;
  QuestBoardListViewManager__SetMode(this, v9, end_act, 0, isNotInit, v8);
}


void __fastcall QuestBoardListViewManager__EndSlideOut(
        QuestBoardListViewManager_o *this,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x21
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  const MethodInfo *v16; // x1
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  System_Action_o *v21; // x20
  const MethodInfo *v22; // x5

  if ( (byte_40F9518 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, end_act);
    sub_B16FFC(&Method_QuestBoardListViewManager___c__DisplayClass106_0__EndSlideOut_b__0__, v7);
    sub_B16FFC(&QuestBoardListViewManager___c__DisplayClass106_0_TypeInfo, v8);
    byte_40F9518 = 1;
  }
  v9 = sub_B170CC(QuestBoardListViewManager___c__DisplayClass106_0_TypeInfo, end_act, method, v3, v4);
  QuestBoardListViewManager___c__DisplayClass106_0___ctor((QuestBoardListViewManager___c__DisplayClass106_0_o *)v9, 0LL);
  if ( !v9 )
    sub_B170D4();
  *(_QWORD *)(v9 + 16) = end_act;
  sub_B16F98((BattleServantConfConponent_o *)(v9 + 16), (System_Int32_array **)end_act, v10, v11, v12, v13, v14, v15);
  this->fields.mIsDoing_Slide = 0;
  QuestBoardListViewManager__ResetBG(this, v16);
  v21 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v17, v18, v19, v20);
  System_Action___ctor(
    v21,
    (Il2CppObject *)v9,
    Method_QuestBoardListViewManager___c__DisplayClass106_0__EndSlideOut_b__0__,
    0LL);
  QuestBoardListViewManager__SetMode(this, 0, v21, 0, 0, v22);
}


int32_t __fastcall QuestBoardListViewManager__GetAlphaAnimCnt(
        QuestBoardListViewManager_o *this,
        int32_t length,
        const MethodInfo *method)
{
  return this->fields.mAlphaAnimCnt % length;
}


UnityEngine_Camera_o *__fastcall QuestBoardListViewManager__GetCamera(
        QuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.mUICamera;
}


int32_t __fastcall QuestBoardListViewManager__GetInitMode(QuestBoardListViewManager_o *this, const MethodInfo *method)
{
  return this->fields.initMode;
}


// local variable allocation has failed, the output may be wrong!
PartyServantListViewItem_o *__fastcall QuestBoardListViewManager__GetItem(
        QuestBoardListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  ListViewItem_o *v7; // x8
  __int64 v8; // x11

  if ( (byte_40F9512 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_B16FFC(&PartyServantListViewItem_TypeInfo, v5);
    byte_40F9512 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v7 = itemList->fields._items->m_Items[index];
  if ( !v7 )
    return 0LL;
  v8 = *(&PartyServantListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v7->klass->_2.bitflags2 + 1) < (unsigned int)v8 )
    return 0LL;
  if ( (PartyServantListViewItem_c *)v7->klass->_2.typeHierarchy[v8 - 1] == PartyServantListViewItem_TypeInfo )
    return (PartyServantListViewItem_o *)itemList->fields._items->m_Items[index];
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
QuestBoardListViewObject_o *__fastcall QuestBoardListViewManager__GetQuestBoardObjForWarId(
        QuestBoardListViewManager_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  Il2CppObject *current; // x25
  __int64 v13; // x10
  _QWORD *monitor; // x8
  __int64 v15; // x8
  UnityEngine_Object_o *v16; // x20
  void *v17; // x8
  __int64 v18; // x11
  UnityEngine_Object_o *v19; // x20
  int v20; // w19
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_40F9511 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, *(_QWORD *)&warId);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    sub_B16FFC(&QuestBoardListViewItem_TypeInfo, v9);
    sub_B16FFC(&QuestBoardListViewObject_TypeInfo, v10);
    byte_40F9511 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v22,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v23 = v22;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v23,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
  {
    current = v23.fields.current;
    if ( v23.fields.current )
    {
      v13 = *(&QuestBoardListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v23.fields.current->klass->_2.bitflags2 + 1) >= (unsigned int)v13
        && (QuestBoardListViewItem_c *)v23.fields.current->klass->_2.typeHierarchy[v13 - 1] == QuestBoardListViewItem_TypeInfo )
      {
        monitor = v23.fields.current[7].monitor;
        if ( monitor )
        {
          v15 = monitor[14];
          if ( v15 )
          {
            if ( *(_DWORD *)(v15 + 16) != 1 && *(_DWORD *)(v15 + 20) == warId )
            {
              v16 = (UnityEngine_Object_o *)v23.fields.current[6].monitor;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( UnityEngine_Object__op_Inequality(v16, 0LL, 0LL) )
              {
                v17 = current[6].monitor;
                if ( v17
                  && (v18 = *(&QuestBoardListViewObject_TypeInfo->_2.bitflags2 + 1),
                      *(unsigned __int8 *)(*(_QWORD *)v17 + 300LL) >= (unsigned int)v18) )
                {
                  v19 = *(QuestBoardListViewObject_c **)(*(_QWORD *)(*(_QWORD *)v17 + 200LL) + 8 * v18 - 8) == QuestBoardListViewObject_TypeInfo
                      ? (UnityEngine_Object_o *)current[6].monitor
                      : 0LL;
                }
                else
                {
                  v19 = 0LL;
                }
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                if ( UnityEngine_Object__op_Inequality(v19, 0LL, 0LL) )
                {
                  v20 = 3;
                  goto LABEL_29;
                }
              }
            }
          }
        }
      }
    }
  }
  v19 = 0LL;
  v20 = 1;
LABEL_29:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v23,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  if ( (unsigned int)(v20 + 1) >> 2 )
    return (QuestBoardListViewObject_o *)v19;
  else
    return 0LL;
}


UIScrollView_o *__fastcall QuestBoardListViewManager__GetScrollView(
        QuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.scrollView;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestBoardListViewManager__InitListObject(
        QuestBoardListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_QuestBoardListViewObject__o *ObjectList; // x0
  Il2CppObject *current; // x20
  const MethodInfo *v10; // x3
  System_Collections_Generic_List_Enumerator_T__o v11; // [xsp+8h] [xbp-38h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_40F9515 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__Dispose__, *(_QWORD *)&mode);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__MoveNext__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__get_Current__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestBoardListViewObject__GetEnumerator__, v7);
    byte_40F9515 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  ObjectList = QuestBoardListViewManager__get_ObjectList(this, *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v11,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ObjectList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_QuestBoardListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v11,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__MoveNext__) )
  {
    current = v11.fields.current;
    if ( !v11.fields.current )
      sub_B170D4();
    zero = UnityEngine_Vector3__get_zero(0LL);
    QuestBoardListViewObject__Init_23910356(
      (QuestBoardListViewObject_o *)current,
      mode,
      0LL,
      zero.fields.x,
      *(UnityEngine_Vector3_o *)&zero.fields.y,
      v10);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v11,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__Dispose__);
}


bool __fastcall QuestBoardListViewManager__IsConsumeColorReset(
        QuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.mResetConsumeColor;
}


bool __fastcall QuestBoardListViewManager__IsFadedForFolderBG(
        QuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.mFaded;
}


bool __fastcall QuestBoardListViewManager__IsSliding(QuestBoardListViewManager_o *this, const MethodInfo *method)
{
  return this->fields.mIsDoing_Slide;
}


void __fastcall QuestBoardListViewManager__LoadAsset(
        QuestBoardListViewManager_o *this,
        System_Action_o *onCompleteLoad,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *Asset; // x1

  Asset = QuestBoardListViewManager__CoroutineLoadAsset(this, onCompleteLoad, method);
  UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, Asset, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestBoardListViewManager__MoveBoard(
        QuestBoardListViewManager_o *this,
        UnityEngine_GameObject_o *obj,
        float moveY,
        float time,
        int32_t easeType,
        bool is_force,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x20
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Int32_array **Component_UIWidget; // x0
  MoveObject_o **v31; // x23
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  float v38; // s10
  float x; // s10
  float y; // s11
  float z; // s12
  MoveObject_o *v42; // x21
  float v43; // s13
  float v44; // s15
  float v45; // s14
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  System_Action_o *v50; // x22
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x3
  __int64 v54; // x4
  System_Action_o *v55; // x23
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v57; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v58; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v59; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_40F953D & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, obj);
    sub_B16FFC(&Method_GameObjectExtensions_SafeGetComponent_MoveObject___, v13);
    sub_B16FFC(&Method_QuestBoardListViewManager___c__DisplayClass158_0__MoveBoard_b__0__, v14);
    sub_B16FFC(&Method_QuestBoardListViewManager___c__DisplayClass158_0__MoveBoard_b__1__, v15);
    sub_B16FFC(&QuestBoardListViewManager___c__DisplayClass158_0_TypeInfo, v16);
    byte_40F953D = 1;
  }
  v17 = sub_B170CC(
          QuestBoardListViewManager___c__DisplayClass158_0_TypeInfo,
          obj,
          *(_QWORD *)&easeType,
          is_force,
          method);
  QuestBoardListViewManager___c__DisplayClass158_0___ctor(
    (QuestBoardListViewManager___c__DisplayClass158_0_o *)v17,
    0LL);
  if ( !v17 )
    goto LABEL_10;
  *(_QWORD *)(v17 + 40) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v17 + 40), (System_Int32_array **)this, v18, v19, v20, v21, v22, v23);
  *(_QWORD *)(v17 + 16) = obj;
  sub_B16F98((BattleServantConfConponent_o *)(v17 + 16), (System_Int32_array **)obj, v24, v25, v26, v27, v28, v29);
  *(float *)(v17 + 32) = GameObjectExtensions__GetLocalPositionY(*(UnityEngine_GameObject_o **)(v17 + 16), 0LL) + moveY;
  Component_UIWidget = (System_Int32_array **)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                *(UnityEngine_GameObject_o **)(v17 + 16),
                                                (const MethodInfo_19D2264 *)Method_GameObjectExtensions_SafeGetComponent_MoveObject___);
  v31 = (MoveObject_o **)(v17 + 24);
  *(_QWORD *)(v17 + 24) = Component_UIWidget;
  sub_B16F98((BattleServantConfConponent_o *)(v17 + 24), Component_UIWidget, v32, v33, v34, v35, v36, v37);
  if ( is_force
    || (v38 = *(float *)(v17 + 32),
        v38 == GameObjectExtensions__GetLocalPositionY(*(UnityEngine_GameObject_o **)(v17 + 16), 0LL)) )
  {
    if ( *v31 )
    {
      MoveObject__Stop(*v31, 0LL);
      GameObjectExtensions__SetLocalPositionY(*(UnityEngine_GameObject_o **)(v17 + 16), *(float *)(v17 + 32), 0LL);
      --this->fields.waitCount;
      return;
    }
LABEL_10:
    sub_B170D4();
  }
  LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v17 + 16), 0LL);
  x = LocalPosition.fields.x;
  y = LocalPosition.fields.y;
  z = LocalPosition.fields.z;
  v57 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v17 + 16), 0LL);
  v42 = *(MoveObject_o **)(v17 + 24);
  v43 = v57.fields.x;
  v44 = v57.fields.y;
  v45 = v57.fields.z;
  v50 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v46, v47, v48, v49);
  System_Action___ctor(
    v50,
    (Il2CppObject *)v17,
    Method_QuestBoardListViewManager___c__DisplayClass158_0__MoveBoard_b__0__,
    0LL);
  v55 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v51, v52, v53, v54);
  System_Action___ctor(
    v55,
    (Il2CppObject *)v17,
    Method_QuestBoardListViewManager___c__DisplayClass158_0__MoveBoard_b__1__,
    0LL);
  if ( !v42 )
    goto LABEL_10;
  v59.fields.y = v44 + moveY;
  v58.fields.x = x;
  v58.fields.y = y;
  v58.fields.z = z;
  v59.fields.x = v43;
  v59.fields.z = v45;
  MoveObject__Play(v42, v58, v59, time, v50, v55, 0.0, easeType, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestBoardListViewManager__MoveBoardForTerminalTopEffect(
        QuestBoardListViewManager_o *this,
        bool isClose,
        bool isForce,
        float moveTime,
        int32_t easeType,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  struct System_Collections_Generic_List_ListViewItem__o *topItemList; // x0
  UnityEngine_Component_o *monitor; // x24
  QuestBoardListViewItemDraw_c *v19; // x0
  int POS_Y_ITVL_AREA; // w8
  int v21; // w19
  UnityEngine_GameObject_o *gameObject; // x1
  const MethodInfo *v23; // x4
  struct System_Collections_Generic_List_ListViewItem__o *bottomItemList; // x0
  UnityEngine_Component_o *v25; // x24
  QuestBoardListViewItemDraw_c *v26; // x0
  int v27; // w8
  int v28; // w19
  UnityEngine_GameObject_o *v29; // x1
  const MethodInfo *v30; // x4
  int v31; // w21
  const MethodInfo *v32; // x2
  System_Collections_IEnumerator_o *v33; // x0
  System_Collections_Generic_List_Enumerator_T__o v34; // [xsp+8h] [xbp-A8h] BYREF
  int v35[2]; // [xsp+20h] [xbp-90h]
  int v36; // [xsp+28h] [xbp-88h]
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+30h] [xbp-80h] BYREF
  System_Action_o *endActa; // [xsp+58h] [xbp-58h]

  endActa = endAct;
  if ( (byte_40F950E & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, isClose);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v14);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v15);
    sub_B16FFC(&QuestBoardListViewItemDraw_TypeInfo, v16);
    byte_40F950E = 1;
  }
  memset(&v37, 0, sizeof(v37));
  v36 = 0;
  topItemList = this->fields.topItemList;
  this->fields.waitCount = 0;
  if ( !topItemList )
    goto LABEL_57;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v34,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)topItemList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v37 = v34;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v37,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
  {
    if ( !v37.fields.current )
      sub_B170D4();
    monitor = (UnityEngine_Component_o *)v37.fields.current[6].monitor;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)monitor, 0LL, 0LL) )
    {
      v19 = QuestBoardListViewItemDraw_TypeInfo;
      if ( isClose )
      {
        if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          v19 = QuestBoardListViewItemDraw_TypeInfo;
        }
        POS_Y_ITVL_AREA = -v19->static_fields->POS_Y_ITVL_AREA;
      }
      else
      {
        if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          v19 = QuestBoardListViewItemDraw_TypeInfo;
        }
        POS_Y_ITVL_AREA = v19->static_fields->POS_Y_ITVL_AREA;
      }
      if ( POS_Y_ITVL_AREA >= 0 )
        v21 = POS_Y_ITVL_AREA;
      else
        v21 = POS_Y_ITVL_AREA + 1;
      if ( !monitor )
        sub_B170D4();
      gameObject = UnityEngine_Component__get_gameObject(monitor, 0LL);
      QuestBoardListViewManager__MoveBoard(this, gameObject, (float)(v21 >> 1), moveTime, easeType, isForce, v23);
      ++this->fields.waitCount;
    }
  }
  v35[0] = 124;
  v36 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v37,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  v36 = 0;
  bottomItemList = this->fields.bottomItemList;
  if ( !bottomItemList )
LABEL_57:
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v34,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)bottomItemList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v37 = v34;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v37,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
  {
    if ( !v37.fields.current )
      sub_B170D4();
    v25 = (UnityEngine_Component_o *)v37.fields.current[6].monitor;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v25, 0LL, 0LL) )
    {
      v26 = QuestBoardListViewItemDraw_TypeInfo;
      if ( isClose )
      {
        if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          v26 = QuestBoardListViewItemDraw_TypeInfo;
        }
        v27 = v26->static_fields->POS_Y_ITVL_AREA;
      }
      else
      {
        if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          v26 = QuestBoardListViewItemDraw_TypeInfo;
        }
        v27 = -v26->static_fields->POS_Y_ITVL_AREA;
      }
      if ( v27 >= 0 )
        v28 = v27;
      else
        v28 = v27 + 1;
      if ( !v25 )
        sub_B170D4();
      v29 = UnityEngine_Component__get_gameObject(v25, 0LL);
      QuestBoardListViewManager__MoveBoard(this, v29, (float)(v28 >> 1), moveTime, easeType, isForce, v30);
      ++this->fields.waitCount;
    }
  }
  v35[0] = 244;
  v31 = ++v36;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v37,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  if ( v31 && v35[v31 - 1] == 244 )
    v36 = v31 - 1;
  if ( endActa )
  {
    v33 = QuestBoardListViewManager__WaitFinish(this, endActa, v32);
    UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, v33, 0LL);
  }
}


void __fastcall QuestBoardListViewManager__OnChangeAlphaAnim(
        QuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_QuestBoardListViewObject__o *ObjectList; // x0
  const MethodInfo *v5; // x1
  int size; // w8
  System_Collections_Generic_List_QuestBoardListViewObject__o *v7; // x20
  unsigned int v8; // w21
  QuestBoardListViewObject_o *v9; // x0

  if ( (byte_40F9520 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestBoardListViewObject__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestBoardListViewObject__get_Item__, v3);
    byte_40F9520 = 1;
  }
  ObjectList = QuestBoardListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    goto LABEL_11;
  size = ObjectList->fields._size;
  v7 = ObjectList;
  if ( size >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( size <= v8 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v9 = v7->fields._items->m_Items[v8];
      if ( !v9 )
        break;
      QuestBoardListViewObject__OnChangeAlphaAnim(v9, v5);
      size = v7->fields._size;
      if ( (int)++v8 >= size )
        goto LABEL_10;
    }
LABEL_11:
    sub_B170D4();
  }
LABEL_10:
  this->fields.mResetConsumeColor = 0;
}


void __fastcall QuestBoardListViewManager__OnClickListView(
        QuestBoardListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
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
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x22
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  ListViewObject_o **v33; // x21
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  __int64 v46; // x24
  __int64 v47; // x10
  MapControl_QuestInfo_o *v48; // x20
  System_Int32_array **AreaBoardInfo_k__BackingField; // x1
  MapControl_AreaBoardInfo_o **v50; // x23
  struct TerminalSceneComponent_o *mTerminalScene; // x9
  int32_t dispType; // w8
  QuestTree_o *v53; // x0
  MapControl_WarInfo_o *WarInfoByWarID; // x0
  MapControl_WarInfo_o *v55; // x23
  WarEntity_o *Mine; // x22
  bool IsClosedWar; // w0
  QuestTree_o *v58; // x0
  MapControl_WarInfo_o *WarInfo_k__BackingField; // x0
  int32_t EventId; // w22
  QuestGroupMaster_o *Master_WarQuestSelectionMaster; // x0
  const MethodInfo *v62; // x3
  int32_t GroupId; // w23
  QuestEntity_o *v64; // x0
  const MethodInfo *v65; // x1
  QuestEntity_o *v66; // x23
  TerminalPramsManager_c *v67; // x0
  int64_t *p_flag; // x8
  __int64 v69; // x1
  int32_t SpotID; // w22
  TerminalPramsManager_c *v71; // x0
  QuestEntity_o *v72; // x0
  __int64 v73; // x1
  int32_t questId; // w22
  TerminalPramsManager_c *v75; // x0
  int32_t v76; // w22
  TerminalPramsManager_c *v77; // x0
  CommonUI_o *Instance; // x0
  __int64 v79; // x1
  __int64 v80; // x2
  __int64 v81; // x3
  __int64 v82; // x4
  EventEntity_o *eventEnt; // x20
  System_Action_o *v84; // x24
  const MethodInfo *v85; // x4
  __int64 v86; // x8
  ScrTerminalListTop_o *mTerminalList; // x19
  MapControl_AreaBoardInfo_o *v88; // x20
  int32_t Index; // w0
  int32_t v90; // w22
  CommonUI_o *v91; // x0
  ScrTerminalListTop_o *v92; // x0
  CommonUI_o *v93; // x0
  __int64 v94; // x1
  TerminalSceneComponent_c *v95; // x0
  TerminalSceneComponent_o *mInstance; // x0
  __int64 v97; // x1
  TerminalSceneComponent_c *v98; // x0
  TerminalSceneComponent_o *v99; // x0
  const MethodInfo *v100; // x1
  ScrTerminalListTop_o *v101; // x19
  int32_t v102; // w0
  QuestPhaseDetailEntity_o *PhaseDetail; // x0
  EventFortificationMaster_o *v104; // x0
  __int64 v105; // x1
  TerminalSceneComponent_c *v106; // x0
  TerminalSceneComponent_o *v107; // x0
  const MethodInfo *v108; // x1
  UnityEngine_GameObject_o *fortificationWarningDialog; // x0
  FortificationWarningDialogComponent_o *Component_srcLineSprite; // x0
  CommonUI_o *v111; // x0
  __int64 v112; // x1
  QuestEntity_o *v113; // x22
  TerminalSceneComponent_c *v114; // x0
  TerminalSceneComponent_o *v115; // x0
  const MethodInfo *v116; // x1
  int32_t v117; // w23
  bool IsDisplayQuestInformation_23891536; // w0
  __int64 v119; // x1
  const MethodInfo *v120; // x2
  TerminalSceneComponent_c *v121; // x0
  TerminalSceneComponent_o *v122; // x0
  const MethodInfo *v123; // x1
  ScrTerminalListTop_o *v124; // x19
  int32_t v125; // w0
  ListViewObject_o *v126; // x0
  __int64 v127; // x9
  System_Collections_Generic_List_Enumerator_T__o v128; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v129; // [xsp+20h] [xbp-60h] BYREF
  System_Collections_Generic_List_EventFortificationEntity__o *entities; // [xsp+38h] [xbp-48h] BYREF

  if ( (byte_40F951B & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, obj);
    sub_B16FFC(&Method_DataManager_GetMaster_EventFortificationMaster___, v7);
    sub_B16FFC(&Method_DataManager_GetMaster_QuestGroupMaster___, v8);
    sub_B16FFC(&DataManager_TypeInfo, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__Dispose__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__MoveNext__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__get_Current__, v12);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_FortificationWarningDialogComponent___, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventFortificationEntity__GetEnumerator__, v14);
    sub_B16FFC(&QuestBoardListViewItem_TypeInfo, v15);
    sub_B16FFC(&QuestBoardListViewObject_TypeInfo, v16);
    sub_B16FFC(&QuestInformationComponent_TypeInfo, v17);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v18);
    sub_B16FFC(&Method_SingletonTemplate_QuestTree__get_Instance__, v19);
    sub_B16FFC(&SingletonTemplate_QuestTree__TypeInfo, v20);
    sub_B16FFC(&SoundManager_TypeInfo, v21);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v22);
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, v23);
    sub_B16FFC(&Method_QuestBoardListViewManager___c__DisplayClass112_0__OnClickListView_b__0__, v24);
    sub_B16FFC(&QuestBoardListViewManager___c__DisplayClass112_0_TypeInfo, v25);
    byte_40F951B = 1;
  }
  entities = 0LL;
  memset(&v129, 0, sizeof(v129));
  v26 = sub_B170CC(QuestBoardListViewManager___c__DisplayClass112_0_TypeInfo, obj, method, v3, v4);
  QuestBoardListViewManager___c__DisplayClass112_0___ctor(
    (QuestBoardListViewManager___c__DisplayClass112_0_o *)v26,
    0LL);
  if ( !v26 )
    goto LABEL_204;
  *(_QWORD *)(v26 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v26 + 16), (System_Int32_array **)this, v27, v28, v29, v30, v31, v32);
  *(_QWORD *)(v26 + 32) = obj;
  v33 = (ListViewObject_o **)(v26 + 32);
  sub_B16F98((BattleServantConfConponent_o *)(v26 + 32), (System_Int32_array **)obj, v34, v35, v36, v37, v38, v39);
  if ( !*(_QWORD *)(v26 + 32) )
    goto LABEL_204;
  v46 = *(_QWORD *)(*(_QWORD *)(v26 + 32) + 48LL);
  if ( !v46 )
    goto LABEL_204;
  v47 = *(&QuestBoardListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(unsigned __int8 *)(*(_QWORD *)v46 + 300LL) < (unsigned int)v47
    || *(QuestBoardListViewItem_c **)(*(_QWORD *)(*(_QWORD *)v46 + 200LL) + 8 * v47 - 8) != QuestBoardListViewItem_TypeInfo )
  {
    goto LABEL_204;
  }
  v48 = *(MapControl_QuestInfo_o **)(v46 + 120);
  if ( !v48 )
    return;
  AreaBoardInfo_k__BackingField = (System_Int32_array **)v48->fields._AreaBoardInfo_k__BackingField;
  *(_QWORD *)(v26 + 24) = AreaBoardInfo_k__BackingField;
  v50 = (MapControl_AreaBoardInfo_o **)(v26 + 24);
  sub_B16F98((BattleServantConfConponent_o *)(v26 + 24), AreaBoardInfo_k__BackingField, v40, v41, v42, v43, v44, v45);
  mTerminalScene = this->fields.mTerminalScene;
  if ( !mTerminalScene )
    goto LABEL_204;
  dispType = v48->fields.dispType;
  mTerminalScene->fields._IsWarStartAnim_k__BackingField = 0;
  switch ( *(_DWORD *)(v46 + 112) )
  {
    case 0:
      if ( dispType == 2 )
        goto LABEL_88;
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !Instance )
        goto LABEL_204;
      CommonUI__CheckChangeOtherConnectMarkFromEventId(Instance, 0, 1, 0LL);
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      if ( !*v50 )
        goto LABEL_204;
      eventEnt = (*v50)->fields.eventEnt;
      v84 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v79, v80, v81, v82);
      System_Action___ctor(
        v84,
        (Il2CppObject *)v26,
        Method_QuestBoardListViewManager___c__DisplayClass112_0__OnClickListView_b__0__,
        0LL);
      v86 = *(_QWORD *)(v26 + 24);
      if ( !v86 )
        goto LABEL_204;
      if ( QuestBoardListViewManager__RequestToRaiseTutorialFlag(this, eventEnt, v84, *(_DWORD *)(v86 + 20), v85) )
        return;
      if ( !*v33 )
        goto LABEL_204;
      mTerminalList = this->fields.mTerminalList;
      v88 = *v50;
      Index = ListViewObject__get_Index(*v33, 0LL);
      if ( !mTerminalList )
        goto LABEL_204;
      ScrTerminalListTop__Click_Area(mTerminalList, v88, Index, 0, 0, 0LL);
      return;
    case 1:
    case 4:
      if ( dispType == 2 )
        goto LABEL_88;
      if ( !*v50 )
        goto LABEL_29;
      if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
      }
      v53 = (QuestTree_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !*v50 || !v53 )
        goto LABEL_204;
      WarInfoByWarID = QuestTree__mfGetWarInfoByWarID(v53, (*v50)->fields.warId, 0LL);
      if ( !WarInfoByWarID )
        goto LABEL_29;
      v55 = WarInfoByWarID;
      Mine = MapControl_WarInfo__GetMine(WarInfoByWarID, 0LL);
      IsClosedWar = MapControl_WarInfo__IsClosedWar(v55, 0LL);
      if ( Mine && IsClosedWar && WarEntity__IsMainInterlude(Mine, 0LL) )
        goto LABEL_88;
      if ( !Mine || !WarEntity__IsSubFolder(Mine, 0LL) )
        goto LABEL_29;
      if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
      }
      v58 = (QuestTree_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !v58 )
        goto LABEL_204;
      if ( !QuestTree__IsWarOpen(v58, Mine->fields.id, 0LL) )
      {
LABEL_88:
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(2, 0LL);
        return;
      }
LABEL_29:
      WarInfo_k__BackingField = v48->fields._WarInfo_k__BackingField;
      if ( !WarInfo_k__BackingField )
        goto LABEL_169;
      EventId = MapControl_WarInfo__GetEventId(WarInfo_k__BackingField, 0LL);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (QuestGroupMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_QuestGroupMaster___);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_204;
      GroupId = QuestGroupMaster__GetGroupId(Master_WarQuestSelectionMaster, v48->fields.questId, 18, v62);
      v64 = MapControl_QuestInfo__GetMine(v48, 0LL);
      if ( EventId != GroupId )
        goto LABEL_169;
      v66 = v64;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_40F966A )
      {
        sub_B16FFC(&TerminalPramsManager_TypeInfo, v65);
        byte_40F966A = 1;
      }
      v67 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v67 = TerminalPramsManager_TypeInfo;
      }
      if ( v67->static_fields->_isFortificationCheck_k__BackingField )
        goto LABEL_169;
      if ( !v66 )
        goto LABEL_204;
      if ( v66->fields.mIsPhaseDetailed || (PhaseDetail = QuestEntity__GetPhaseDetail(v66, v65)) == 0LL )
        p_flag = &v66->fields.flag;
      else
        p_flag = &PhaseDetail->fields.flag;
      if ( (*(_BYTE *)p_flag & 2) != 0 )
        goto LABEL_169;
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      v104 = (EventFortificationMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventFortificationMaster___);
      if ( !v104 )
        goto LABEL_204;
      if ( !EventFortificationMaster__TryGetEntityList(v104, &entities, EventId, 0LL) )
        goto LABEL_169;
      if ( !entities )
        goto LABEL_204;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v128,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)entities,
        (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EventFortificationEntity__GetEnumerator__);
      v129 = v128;
      break;
    case 2:
    case 3:
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      SpotID = MapControl_QuestInfo__GetSpotID(v48, 0LL);
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_40F6079 )
      {
        sub_B16FFC(&TerminalPramsManager_TypeInfo, v69);
        byte_40F6079 = 1;
      }
      v71 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v71 = TerminalPramsManager_TypeInfo;
      }
      v71->static_fields->_SpotId_k__BackingField = SpotID;
      v72 = MapControl_QuestInfo__GetMine(v48, 0LL);
      if ( !v72 )
        goto LABEL_204;
      if ( v72->fields.type == 3 )
      {
        questId = v48->fields.questId;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        }
        if ( !byte_40F604A )
        {
          sub_B16FFC(&TerminalPramsManager_TypeInfo, v73);
          byte_40F604A = 1;
        }
        v75 = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v75 = TerminalPramsManager_TypeInfo;
        }
        v75->static_fields->_SelectedStoryQuestId_k__BackingField = questId;
      }
      v76 = *(_DWORD *)(v46 + 148);
      if ( v76 )
      {
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        }
        if ( !byte_40F604B )
        {
          sub_B16FFC(&TerminalPramsManager_TypeInfo, v73);
          byte_40F604B = 1;
        }
        v77 = TerminalPramsManager_TypeInfo;
LABEL_105:
        if ( (BYTE3(v77->vtable._0_Equals.methodPtr) & 4) != 0 && !v77->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v77);
          v77 = TerminalPramsManager_TypeInfo;
        }
        v77->static_fields->_SelectedRecollectionWarId_k__BackingField = v76;
        if ( !byte_40F6E0F )
        {
          sub_B16FFC(&TerminalPramsManager_TypeInfo, v73);
          v77 = TerminalPramsManager_TypeInfo;
          byte_40F6E0F = 1;
        }
        if ( (BYTE3(v77->vtable._0_Equals.methodPtr) & 4) != 0 && !v77->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v77);
          v77 = TerminalPramsManager_TypeInfo;
        }
        v77->static_fields->_IsFromRecollectionBoard_k__BackingField = 1;
      }
      v91 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !v91 )
        goto LABEL_204;
      CommonUI__CheckChangeOtherConnectMarkFromEventId(v91, 0, 1, 0LL);
      v92 = this->fields.mTerminalList;
      if ( !v92 )
        goto LABEL_204;
      ScrTerminalListTop__Click_Shortcut(v92, v48->fields.warId, v48->fields.questId, 0LL);
      return;
    case 5:
      if ( dispType == 2 )
        goto LABEL_88;
      v93 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !v93 )
        goto LABEL_204;
      CommonUI__CheckChangeOtherConnectMarkFromEventId(v93, 0, 1, 0LL);
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      MapControl_QuestInfo__GetMine(v48, 0LL);
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      }
      if ( !byte_40F6042 )
      {
        sub_B16FFC(&TerminalSceneComponent_TypeInfo, v94);
        byte_40F6042 = 1;
      }
      v95 = TerminalSceneComponent_TypeInfo;
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v95 = TerminalSceneComponent_TypeInfo;
      }
      mInstance = v95->static_fields->mInstance;
      if ( !mInstance )
        goto LABEL_204;
      TerminalSceneComponent__QuestInfoShowing(mInstance, 0LL);
      if ( !byte_40F6042 )
      {
        sub_B16FFC(&TerminalSceneComponent_TypeInfo, v97);
        byte_40F6042 = 1;
      }
      v98 = TerminalSceneComponent_TypeInfo;
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v98 = TerminalSceneComponent_TypeInfo;
      }
      v99 = v98->static_fields->mInstance;
      if ( !v99 )
        goto LABEL_204;
      TerminalSceneComponent__CallQuestInformationClose(v99, 0LL);
      QuestBoardListViewManager__SetShowingInfoAllOff(this, v100);
      if ( !*v33 )
        goto LABEL_204;
      v101 = this->fields.mTerminalList;
      v102 = ListViewObject__get_Index(*v33, 0LL);
      if ( !v101 )
        goto LABEL_204;
      ScrTerminalListTop__Click_WarBoard(v101, v48, v102, 0LL);
      return;
    case 6:
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      v90 = MapControl_QuestInfo__GetSpotID(v48, 0LL);
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_40F6079 )
      {
        sub_B16FFC(&TerminalPramsManager_TypeInfo, v73);
        byte_40F6079 = 1;
      }
      v77 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v77 = TerminalPramsManager_TypeInfo;
      }
      v77->static_fields->_SpotId_k__BackingField = v90;
      v76 = *(_DWORD *)(v46 + 148);
      if ( !byte_40F604B )
      {
        sub_B16FFC(&TerminalPramsManager_TypeInfo, v73);
        v77 = TerminalPramsManager_TypeInfo;
        byte_40F604B = 1;
      }
      goto LABEL_105;
    default:
      return;
  }
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v129,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__MoveNext__) )
  {
    if ( !v129.fields.current )
      goto LABEL_206;
    if ( EventFortificationEntity__IsOpenFortificationWarningDialog(
           (EventFortificationEntity_o *)v129.fields.current,
           0LL) )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      }
      if ( !byte_40F6042 )
      {
        sub_B16FFC(&TerminalSceneComponent_TypeInfo, v105);
        byte_40F6042 = 1;
      }
      v106 = TerminalSceneComponent_TypeInfo;
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v106 = TerminalSceneComponent_TypeInfo;
      }
      v107 = v106->static_fields->mInstance;
      if ( !v107 )
        sub_B170D4();
      TerminalSceneComponent__CallQuestInformationClose(v107, 0LL);
      QuestBoardListViewManager__SetShowingInfoAllOff(this, v108);
      fortificationWarningDialog = this->fields.fortificationWarningDialog;
      if ( !fortificationWarningDialog )
        sub_B170D4();
      Component_srcLineSprite = (FortificationWarningDialogComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                           fortificationWarningDialog,
                                                                           (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_FortificationWarningDialogComponent___);
      if ( !Component_srcLineSprite )
        sub_B170D4();
      FortificationWarningDialogComponent__Open(Component_srcLineSprite, 0LL);
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v129,
        (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__Dispose__);
      return;
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v129,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__Dispose__);
LABEL_169:
  v111 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !v111 )
    goto LABEL_204;
  CommonUI__CheckChangeOtherConnectMarkFromEventId(v111, 0, 1, 0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  v113 = MapControl_QuestInfo__GetMine(v48, 0LL);
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_40F6042 )
  {
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, v112);
    byte_40F6042 = 1;
  }
  v114 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v114 = TerminalSceneComponent_TypeInfo;
  }
  v115 = v114->static_fields->mInstance;
  if ( !v115 )
LABEL_204:
    sub_B170D4();
  v117 = TerminalSceneComponent__QuestInfoShowing(v115, 0LL);
  if ( (BYTE3(QuestInformationComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestInformationComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestInformationComponent_TypeInfo);
  }
  IsDisplayQuestInformation_23891536 = QuestInformationComponent__IsDisplayQuestInformation_23891536(v113, v116);
  if ( v117 < 1 || !IsDisplayQuestInformation_23891536 || v117 == v48->fields.questId )
  {
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    }
    if ( !byte_40F6042 )
    {
      sub_B16FFC(&TerminalSceneComponent_TypeInfo, v119);
      byte_40F6042 = 1;
    }
    v121 = TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v121 = TerminalSceneComponent_TypeInfo;
    }
    v122 = v121->static_fields->mInstance;
    if ( v122 )
    {
      TerminalSceneComponent__CallQuestInformationClose(v122, 0LL);
      QuestBoardListViewManager__SetShowingInfoAllOff(this, v123);
      if ( *v33 )
      {
        v124 = this->fields.mTerminalList;
        v125 = ListViewObject__get_Index(*v33, 0LL);
        if ( v124 )
        {
          ScrTerminalListTop__Click_Quest(v124, v48, v125, 0LL);
          return;
        }
      }
    }
    goto LABEL_204;
  }
  v126 = *v33;
  if ( !*v33 )
    goto LABEL_204;
  v127 = *(&QuestBoardListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v126->klass->_2.bitflags2 + 1) < (unsigned int)v127
    || (QuestBoardListViewObject_c *)v126->klass->_2.typeHierarchy[v127 - 1] != QuestBoardListViewObject_TypeInfo )
  {
    sub_B173C8(v126);
LABEL_206:
    sub_B170D4();
  }
  QuestBoardListViewObject__OnClickInfoBtn((QuestBoardListViewObject_o *)v126, 1, v120);
}


void __fastcall QuestBoardListViewManager__OnCompleteAssetData(
        QuestBoardListViewManager_o *this,
        AssetData_o *loadedAssetData,
        System_Action_o *onCompleteLoad,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x1

  this->fields.effectAssetData = loadedAssetData;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.effectAssetData,
    (System_Int32_array **)loadedAssetData,
    (System_String_array **)onCompleteLoad,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  QuestBoardListViewManager__SetupBlackMark(this, v10);
  QuestBoardListViewManager__SetupBoardAppearAndDisappearEffect(this, v11);
  QuestBoardListViewManager__SetupWhiteMark(this, v12);
  ActionExtensions__Call(onCompleteLoad, 0LL);
}


void __fastcall QuestBoardListViewManager__PlayBoardAppearEffect(
        QuestBoardListViewManager_o *this,
        System_Action_o *playingCallback1,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  UnityEngine_Object_o *effectAppearComponent; // x22
  _BOOL8 v8; // x0
  const MethodInfo *v9; // x4

  if ( (byte_40F952E & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, playingCallback1);
    byte_40F952E = 1;
  }
  effectAppearComponent = (UnityEngine_Object_o *)this->fields.effectAppearComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v8 = UnityEngine_Object__op_Equality(effectAppearComponent, 0LL, 0LL);
  if ( v8 )
  {
    ActionExtensions__Call(playingCallback1, 0LL);
    ActionExtensions__Call(endAct, 0LL);
  }
  else
  {
    QuestBoardListViewManager__PlayBoardEffect(
      (QuestBoardListViewManager_o *)v8,
      (QuestBoardListEffectComponent_o *)this->fields.effectAppearComponent,
      playingCallback1,
      endAct,
      v9);
  }
}


void __fastcall QuestBoardListViewManager__PlayBoardAppearEffectNt2(
        QuestBoardListViewManager_o *this,
        System_Action_o *playingCallback1,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  UnityEngine_Object_o *effectAppearComponent; // x22
  UnityEngine_Component_o *v8; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v10; // x22
  UnityEngine_GameObject_o *v11; // x0
  float LocalPositionY; // s0
  UnityEngine_Component_o *v13; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v15; // x22
  UnityEngine_Transform_o *v16; // x0
  QuestBoardListViewManager_o *v17; // x0
  const MethodInfo *v18; // x4

  if ( (byte_40F952F & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, playingCallback1);
    byte_40F952F = 1;
  }
  effectAppearComponent = (UnityEngine_Object_o *)this->fields.effectAppearComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(effectAppearComponent, 0LL, 0LL) )
  {
    ActionExtensions__Call(playingCallback1, 0LL);
    ActionExtensions__Call(endAct, 0LL);
  }
  else
  {
    v8 = (UnityEngine_Component_o *)this->fields.effectAppearComponent;
    if ( !v8 )
      goto LABEL_14;
    gameObject = UnityEngine_Component__get_gameObject(v8, 0LL);
    if ( !this->fields.effectAppearComponent )
      goto LABEL_14;
    v10 = gameObject;
    v11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.effectAppearComponent, 0LL);
    LocalPositionY = GameObjectExtensions__GetLocalPositionY(v11, 0LL);
    GameObjectExtensions__SetLocalPositionY(v10, LocalPositionY, 0LL);
    v13 = (UnityEngine_Component_o *)this->fields.effectAppearComponent;
    if ( !v13
      || (transform = UnityEngine_Component__get_transform(v13, 0LL), !this->fields.onEffectPanel)
      || (v15 = transform,
          v16 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.onEffectPanel, 0LL),
          !v15) )
    {
LABEL_14:
      sub_B170D4();
    }
    UnityEngine_Transform__SetParent_34930292(v15, v16, 1, 0LL);
    QuestBoardListViewManager__PlayBoardEffect(
      v17,
      (QuestBoardListEffectComponent_o *)this->fields.effectAppearComponent,
      playingCallback1,
      endAct,
      v18);
  }
}


void __fastcall QuestBoardListViewManager__PlayBoardAppearFadeEffect(
        QuestBoardListViewManager_o *this,
        System_Action_o *playingCallback1,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  UnityEngine_Object_o *effectAppearFadeComponent; // x22
  _BOOL8 v8; // x0
  const MethodInfo *v9; // x4

  if ( (byte_40F9530 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, playingCallback1);
    byte_40F9530 = 1;
  }
  effectAppearFadeComponent = (UnityEngine_Object_o *)this->fields.effectAppearFadeComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v8 = UnityEngine_Object__op_Equality(effectAppearFadeComponent, 0LL, 0LL);
  if ( v8 )
  {
    ActionExtensions__Call(playingCallback1, 0LL);
    ActionExtensions__Call(endAct, 0LL);
  }
  else
  {
    QuestBoardListViewManager__PlayBoardEffect(
      (QuestBoardListViewManager_o *)v8,
      this->fields.effectAppearFadeComponent,
      playingCallback1,
      endAct,
      v9);
  }
}


void __fastcall QuestBoardListViewManager__PlayBoardBbBoardOpenEffect(
        QuestBoardListViewManager_o *this,
        System_Action_o *playingCallback,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  UnityEngine_Object_o *effectDisappear2Component; // x22
  UnityEngine_Object_o *effectDisappear2BbComponent; // x22
  UnityEngine_Object_o *v9; // x22
  UnityEngine_Component_o *v10; // x0
  UnityEngine_GameObject_o *v11; // x0
  UnityEngine_GameObject_o *v12; // x22
  UnityEngine_GameObject_o *v13; // x0
  float v14; // s0
  UnityEngine_Component_o *v15; // x0
  UnityEngine_Transform_o *v16; // x0
  UnityEngine_Transform_o *v17; // x22
  UnityEngine_Transform_o *v18; // x0
  QuestBoardListViewManager_o *v19; // x0
  const MethodInfo *v20; // x4
  QuestBoardListEffectComponent_o *v21; // x1
  UnityEngine_Component_o *v22; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v24; // x22
  UnityEngine_GameObject_o *v25; // x0
  float LocalPositionY; // s0
  UnityEngine_Component_o *v27; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v29; // x22
  UnityEngine_Transform_o *v30; // x0

  if ( (byte_40F953A & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, playingCallback);
    byte_40F953A = 1;
  }
  effectDisappear2Component = (UnityEngine_Object_o *)this->fields.effectDisappear2Component;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(effectDisappear2Component, 0LL, 0LL) )
  {
    effectDisappear2BbComponent = (UnityEngine_Object_o *)this->fields.effectDisappear2BbComponent;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality(effectDisappear2BbComponent, 0LL, 0LL) )
    {
      ActionExtensions__Call(playingCallback, 0LL);
      ActionExtensions__Call(endAct, 0LL);
      return;
    }
  }
  v9 = (UnityEngine_Object_o *)this->fields.effectDisappear2Component;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(v9, 0LL, 0LL) )
  {
    v22 = (UnityEngine_Component_o *)this->fields.effectDisappear2BbComponent;
    if ( v22 )
    {
      gameObject = UnityEngine_Component__get_gameObject(v22, 0LL);
      if ( this->fields.effectDisappear2BbComponent )
      {
        v24 = gameObject;
        v25 = UnityEngine_Component__get_gameObject(
                (UnityEngine_Component_o *)this->fields.effectDisappear2BbComponent,
                0LL);
        LocalPositionY = GameObjectExtensions__GetLocalPositionY(v25, 0LL);
        GameObjectExtensions__SetLocalPositionY(v24, LocalPositionY, 0LL);
        v27 = (UnityEngine_Component_o *)this->fields.effectDisappear2BbComponent;
        if ( v27 )
        {
          transform = UnityEngine_Component__get_transform(v27, 0LL);
          if ( this->fields.onEffectPanel )
          {
            v29 = transform;
            v30 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.onEffectPanel, 0LL);
            if ( v29 )
            {
              UnityEngine_Transform__SetParent_34930292(v29, v30, 1, 0LL);
              v21 = (QuestBoardListEffectComponent_o *)this->fields.effectDisappear2BbComponent;
              goto LABEL_28;
            }
          }
        }
      }
    }
LABEL_29:
    sub_B170D4();
  }
  v10 = (UnityEngine_Component_o *)this->fields.effectDisappear2Component;
  if ( !v10 )
    goto LABEL_29;
  v11 = UnityEngine_Component__get_gameObject(v10, 0LL);
  if ( !this->fields.effectDisappear2Component )
    goto LABEL_29;
  v12 = v11;
  v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.effectDisappear2Component, 0LL);
  v14 = GameObjectExtensions__GetLocalPositionY(v13, 0LL);
  GameObjectExtensions__SetLocalPositionY(v12, v14, 0LL);
  v15 = (UnityEngine_Component_o *)this->fields.effectDisappear2Component;
  if ( !v15 )
    goto LABEL_29;
  v16 = UnityEngine_Component__get_transform(v15, 0LL);
  if ( !this->fields.onEffectPanel )
    goto LABEL_29;
  v17 = v16;
  v18 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.onEffectPanel, 0LL);
  if ( !v17 )
    goto LABEL_29;
  UnityEngine_Transform__SetParent_34930292(v17, v18, 1, 0LL);
  v21 = this->fields.effectDisappear2Component;
LABEL_28:
  QuestBoardListViewManager__PlayBoardEffect(v19, v21, playingCallback, endAct, v20);
}


void __fastcall QuestBoardListViewManager__PlayBoardDisappear2Effect(
        QuestBoardListViewManager_o *this,
        System_Action_o *playingCallback1,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  __int64 v7; // x1
  UnityEngine_Object_o *effectDisappear2Component; // x22
  UnityEngine_Object_o *effectDisappear2BbComponent; // x22
  UnityEngine_Object_o *v10; // x22
  UnityEngine_Component_o *v11; // x0
  UnityEngine_GameObject_o *v12; // x0
  UnityEngine_GameObject_o *v13; // x22
  UnityEngine_GameObject_o *v14; // x0
  float v15; // s8
  QuestBoardListViewItemDraw_c *v16; // x0
  int v17; // w8
  int v18; // w8
  UnityEngine_Component_o *v19; // x0
  UnityEngine_Transform_o *v20; // x0
  UnityEngine_Transform_o *v21; // x22
  UnityEngine_Transform_o *v22; // x0
  QuestBoardListViewManager_o *v23; // x0
  const MethodInfo *v24; // x4
  QuestBoardListEffectComponent_o *v25; // x1
  UnityEngine_Component_o *v26; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v28; // x22
  UnityEngine_GameObject_o *v29; // x0
  float LocalPositionY; // s8
  QuestBoardListViewItemDraw_c *v31; // x0
  int POS_Y_ITVL_AREA; // w8
  int v33; // w8
  UnityEngine_Component_o *v34; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v36; // x22
  UnityEngine_Transform_o *v37; // x0

  if ( (byte_40F9539 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, playingCallback1);
    sub_B16FFC(&QuestBoardListViewItemDraw_TypeInfo, v7);
    byte_40F9539 = 1;
  }
  effectDisappear2Component = (UnityEngine_Object_o *)this->fields.effectDisappear2Component;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(effectDisappear2Component, 0LL, 0LL) )
  {
    effectDisappear2BbComponent = (UnityEngine_Object_o *)this->fields.effectDisappear2BbComponent;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality(effectDisappear2BbComponent, 0LL, 0LL) )
    {
      ActionExtensions__Call(playingCallback1, 0LL);
      ActionExtensions__Call(endAct, 0LL);
      return;
    }
  }
  v10 = (UnityEngine_Object_o *)this->fields.effectDisappear2Component;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(v10, 0LL, 0LL) )
  {
    v26 = (UnityEngine_Component_o *)this->fields.effectDisappear2BbComponent;
    if ( v26 )
    {
      gameObject = UnityEngine_Component__get_gameObject(v26, 0LL);
      if ( this->fields.effectDisappear2BbComponent )
      {
        v28 = gameObject;
        v29 = UnityEngine_Component__get_gameObject(
                (UnityEngine_Component_o *)this->fields.effectDisappear2BbComponent,
                0LL);
        LocalPositionY = GameObjectExtensions__GetLocalPositionY(v29, 0LL);
        v31 = QuestBoardListViewItemDraw_TypeInfo;
        if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          v31 = QuestBoardListViewItemDraw_TypeInfo;
        }
        POS_Y_ITVL_AREA = v31->static_fields->POS_Y_ITVL_AREA;
        v33 = POS_Y_ITVL_AREA <= 0 ? -POS_Y_ITVL_AREA : 1 - POS_Y_ITVL_AREA;
        GameObjectExtensions__SetLocalPositionY(v28, LocalPositionY + (float)(v33 >> 1), 0LL);
        v34 = (UnityEngine_Component_o *)this->fields.effectDisappear2BbComponent;
        if ( v34 )
        {
          transform = UnityEngine_Component__get_transform(v34, 0LL);
          if ( this->fields.onEffectPanel )
          {
            v36 = transform;
            v37 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.onEffectPanel, 0LL);
            if ( v36 )
            {
              UnityEngine_Transform__SetParent_34930292(v36, v37, 1, 0LL);
              v25 = (QuestBoardListEffectComponent_o *)this->fields.effectDisappear2BbComponent;
              goto LABEL_40;
            }
          }
        }
      }
    }
LABEL_41:
    sub_B170D4();
  }
  v11 = (UnityEngine_Component_o *)this->fields.effectDisappear2Component;
  if ( !v11 )
    goto LABEL_41;
  v12 = UnityEngine_Component__get_gameObject(v11, 0LL);
  if ( !this->fields.effectDisappear2Component )
    goto LABEL_41;
  v13 = v12;
  v14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.effectDisappear2Component, 0LL);
  v15 = GameObjectExtensions__GetLocalPositionY(v14, 0LL);
  v16 = QuestBoardListViewItemDraw_TypeInfo;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v16 = QuestBoardListViewItemDraw_TypeInfo;
  }
  v17 = v16->static_fields->POS_Y_ITVL_AREA;
  v18 = v17 <= 0 ? -v17 : 1 - v17;
  GameObjectExtensions__SetLocalPositionY(v13, v15 + (float)(v18 >> 1), 0LL);
  v19 = (UnityEngine_Component_o *)this->fields.effectDisappear2Component;
  if ( !v19 )
    goto LABEL_41;
  v20 = UnityEngine_Component__get_transform(v19, 0LL);
  if ( !this->fields.onEffectPanel )
    goto LABEL_41;
  v21 = v20;
  v22 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.onEffectPanel, 0LL);
  if ( !v21 )
    goto LABEL_41;
  UnityEngine_Transform__SetParent_34930292(v21, v22, 1, 0LL);
  v25 = this->fields.effectDisappear2Component;
LABEL_40:
  QuestBoardListViewManager__PlayBoardEffect(v23, v25, playingCallback1, endAct, v24);
}


void __fastcall QuestBoardListViewManager__PlayBoardDisappearEffect(
        QuestBoardListViewManager_o *this,
        System_Action_o *playingCallback1,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  UnityEngine_Object_o *effectDisappearComponent; // x22
  _BOOL8 v8; // x0
  const MethodInfo *v9; // x4

  if ( (byte_40F9538 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, playingCallback1);
    byte_40F9538 = 1;
  }
  effectDisappearComponent = (UnityEngine_Object_o *)this->fields.effectDisappearComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v8 = UnityEngine_Object__op_Equality(effectDisappearComponent, 0LL, 0LL);
  if ( v8 )
  {
    ActionExtensions__Call(playingCallback1, 0LL);
    ActionExtensions__Call(endAct, 0LL);
  }
  else
  {
    QuestBoardListViewManager__PlayBoardEffect(
      (QuestBoardListViewManager_o *)v8,
      (QuestBoardListEffectComponent_o *)this->fields.effectDisappearComponent,
      playingCallback1,
      endAct,
      v9);
  }
}


void __fastcall QuestBoardListViewManager__PlayBoardDisappearFadeEffect(
        QuestBoardListViewManager_o *this,
        System_Action_o *playingCallback1,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  UnityEngine_Object_o *effectDisappearFadeComponent; // x22
  _BOOL8 v8; // x0
  const MethodInfo *v9; // x4

  if ( (byte_40F9537 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, playingCallback1);
    byte_40F9537 = 1;
  }
  effectDisappearFadeComponent = (UnityEngine_Object_o *)this->fields.effectDisappearFadeComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v8 = UnityEngine_Object__op_Equality(effectDisappearFadeComponent, 0LL, 0LL);
  if ( v8 )
  {
    ActionExtensions__Call(playingCallback1, 0LL);
    ActionExtensions__Call(endAct, 0LL);
  }
  else
  {
    QuestBoardListViewManager__PlayBoardEffect(
      (QuestBoardListViewManager_o *)v8,
      this->fields.effectDisappearFadeComponent,
      playingCallback1,
      endAct,
      v9);
  }
}


void __fastcall QuestBoardListViewManager__PlayBoardEffect(
        QuestBoardListViewManager_o *this,
        QuestBoardListEffectComponent_o *effectComponent,
        System_Action_o *playingCallback1,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x19
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Action_o **v19; // x23
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Action_o **v26; // x21
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  UnityEngine_Object_o *v33; // x20
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  QuestBoardListEffectComponent_o *v38; // x20
  System_Action_o *v39; // x21
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  System_Action_o *v44; // x22

  if ( (byte_40F953B & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, effectComponent);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    sub_B16FFC(&Method_QuestBoardListViewManager___c__DisplayClass156_0__PlayBoardEffect_b__0__, v9);
    sub_B16FFC(&Method_QuestBoardListViewManager___c__DisplayClass156_0__PlayBoardEffect_b__1__, v10);
    sub_B16FFC(&QuestBoardListViewManager___c__DisplayClass156_0_TypeInfo, v11);
    byte_40F953B = 1;
  }
  v12 = sub_B170CC(
          QuestBoardListViewManager___c__DisplayClass156_0_TypeInfo,
          effectComponent,
          playingCallback1,
          endAct,
          method);
  QuestBoardListViewManager___c__DisplayClass156_0___ctor(
    (QuestBoardListViewManager___c__DisplayClass156_0_o *)v12,
    0LL);
  if ( !v12 )
    goto LABEL_15;
  *(_QWORD *)(v12 + 16) = playingCallback1;
  v19 = (System_Action_o **)(v12 + 16);
  sub_B16F98(
    (BattleServantConfConponent_o *)(v12 + 16),
    (System_Int32_array **)playingCallback1,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  *(_QWORD *)(v12 + 24) = effectComponent;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v12 + 24),
    (System_Int32_array **)effectComponent,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  *(_QWORD *)(v12 + 32) = endAct;
  v26 = (System_Action_o **)(v12 + 32);
  sub_B16F98((BattleServantConfConponent_o *)(v12 + 32), (System_Int32_array **)endAct, v27, v28, v29, v30, v31, v32);
  v33 = *(UnityEngine_Object_o **)(v12 + 24);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(v33, 0LL, 0LL) )
  {
    v38 = *(QuestBoardListEffectComponent_o **)(v12 + 24);
    v39 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v34, v35, v36, v37);
    System_Action___ctor(
      v39,
      (Il2CppObject *)v12,
      Method_QuestBoardListViewManager___c__DisplayClass156_0__PlayBoardEffect_b__0__,
      0LL);
    v44 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v40, v41, v42, v43);
    System_Action___ctor(
      v44,
      (Il2CppObject *)v12,
      Method_QuestBoardListViewManager___c__DisplayClass156_0__PlayBoardEffect_b__1__,
      0LL);
    if ( v38 )
    {
      QuestBoardListEffectComponent__Play(v38, v39, v44, 0LL);
      return;
    }
LABEL_15:
    sub_B170D4();
  }
  if ( *v19 )
    ActionExtensions__Call(*v19, 0LL);
  if ( *v26 )
    ActionExtensions__Call(*v26, 0LL);
}


void __fastcall QuestBoardListViewManager__ReleaseAsset(QuestBoardListViewManager_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  AssetData_o *effectAssetData; // x20
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  AssetData_o *fortificationAssetData; // x20
  BattleServantConfConponent_o *p_fortificationAssetData; // x19
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7

  if ( (byte_40F953C & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, method);
    byte_40F953C = 1;
  }
  this->fields.blackMarkPrefab = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.blackMarkPrefab, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.whiteMarkPrefab = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.whiteMarkPrefab, 0LL, v9, v10, v11, v12, v13, v14);
  this->fields.fortificationWarningDialog = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.fortificationWarningDialog,
    0LL,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  this->fields.boardAppearEffectPrefab = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.boardAppearEffectPrefab, 0LL, v21, v22, v23, v24, v25, v26);
  this->fields.boardAppearEffectFadePrefab = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.boardAppearEffectFadePrefab,
    0LL,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  this->fields.boardDisappearEffectPrefab = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.boardDisappearEffectPrefab,
    0LL,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  this->fields.boardDisappear2EffectPrefab = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.boardDisappear2EffectPrefab,
    0LL,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  this->fields.boardDisappearEffectFadePrefab = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.boardDisappearEffectFadePrefab,
    0LL,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50);
  effectAssetData = this->fields.effectAssetData;
  if ( effectAssetData )
  {
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAsset_29947376(effectAssetData, 0LL);
    this->fields.effectAssetData = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.effectAssetData, 0LL, v52, v53, v54, v55, v56, v57);
  }
  fortificationAssetData = this->fields.fortificationAssetData;
  p_fortificationAssetData = (BattleServantConfConponent_o *)&this->fields.fortificationAssetData;
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAsset_29947376(fortificationAssetData, 0LL);
  p_fortificationAssetData->klass = 0LL;
  sub_B16F98(p_fortificationAssetData, 0LL, v60, v61, v62, v63, v64, v65);
}


void __fastcall QuestBoardListViewManager__RemoveTempBG(QuestBoardListViewManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mFolderBgTemp; // x20
  UnityEngine_Component_o **p_mFolderBgTemp; // x19
  UnityEngine_Object_o *gameObject; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_40F9525 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F9525 = 1;
  }
  mFolderBgTemp = (UnityEngine_Object_o *)this->fields.mFolderBgTemp;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(mFolderBgTemp, 0LL, 0LL) )
  {
    p_mFolderBgTemp = (UnityEngine_Component_o **)&this->fields.mFolderBgTemp;
    if ( !*p_mFolderBgTemp )
      sub_B170D4();
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_mFolderBgTemp, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34809464(gameObject, 0LL);
    *p_mFolderBgTemp = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)p_mFolderBgTemp, 0LL, v6, v7, v8, v9, v10, v11);
  }
}


void __fastcall QuestBoardListViewManager__RequestChangeBG(
        QuestBoardListViewManager_o *this,
        int32_t req,
        const MethodInfo *method)
{
  this->fields.mRequestedBGid = req;
}


void __fastcall QuestBoardListViewManager__RequestConsumeColorReset(
        QuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  this->fields.mResetConsumeColor = 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestBoardListViewManager__RequestListObject(
        QuestBoardListViewManager_o *this,
        int32_t mode,
        System_Action_o *end_act,
        bool isWhiteFade,
        bool isNotInit,
        const MethodInfo *method)
{
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
  __int64 v21; // x20
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  const MethodInfo *v34; // x2
  CommonUI_o *Instance; // x0
  __int64 v36; // x1
  const MethodInfo *v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  System_Action_o *v40; // x0
  __int64 *v41; // x8
  System_Action_o *v42; // x21
  const MethodInfo *v43; // x2
  __int64 v44; // x22
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  __int64 v51; // x23
  const MethodInfo *v52; // x2
  float exitTime; // s0
  int32_t initMode; // w1
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x3
  __int64 v58; // x4
  System_Action_o *v59; // x21
  const MethodInfo *v60; // x5
  const MethodInfo *v61; // x2
  __int64 v62; // x1
  __int64 v63; // x2
  __int64 v64; // x3
  __int64 v65; // x4
  WebViewManager_o *v66; // x21
  AvalonSceneManager_c *v67; // x8
  float v68; // s8
  System_Action_o *v69; // x22
  CommonUI_o *v70; // x0
  float v71; // s0
  System_Action_o *v72; // x2
  __int64 v73; // x1
  __int64 v74; // x2
  __int64 v75; // x3
  __int64 v76; // x4
  WebViewManager_o *v77; // x20
  AvalonSceneManager_c *v78; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v80; // x21
  UnityEngine_GameObject_o *mNoneLabelParent; // x0

  if ( (byte_40F9516 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B16FFC(&AvalonSceneManager_TypeInfo, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v13);
    sub_B16FFC(&Method_QuestBoardListViewManager___c__DisplayClass103_0__RequestListObject_b__0__, v14);
    sub_B16FFC(&Method_QuestBoardListViewManager___c__DisplayClass103_0__RequestListObject_b__1__, v15);
    sub_B16FFC(&Method_QuestBoardListViewManager___c__DisplayClass103_0__RequestListObject_b__8__, v16);
    sub_B16FFC(&Method_QuestBoardListViewManager___c__DisplayClass103_0__RequestListObject_b__9__, v17);
    sub_B16FFC(&QuestBoardListViewManager___c__DisplayClass103_0_TypeInfo, v18);
    sub_B16FFC(&Method_QuestBoardListViewManager___c__DisplayClass103_2__RequestListObject_b__7__, v19);
    sub_B16FFC(&QuestBoardListViewManager___c__DisplayClass103_2_TypeInfo, v20);
    byte_40F9516 = 1;
  }
  v21 = sub_B170CC(
          QuestBoardListViewManager___c__DisplayClass103_0_TypeInfo,
          *(_QWORD *)&mode,
          end_act,
          isWhiteFade,
          isNotInit);
  QuestBoardListViewManager___c__DisplayClass103_0___ctor(
    (QuestBoardListViewManager___c__DisplayClass103_0_o *)v21,
    0LL);
  if ( !v21 )
    goto LABEL_45;
  *(_QWORD *)(v21 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v21 + 16), (System_Int32_array **)this, v22, v23, v24, v25, v26, v27);
  *(_QWORD *)(v21 + 32) = end_act;
  sub_B16F98((BattleServantConfConponent_o *)(v21 + 32), (System_Int32_array **)end_act, v28, v29, v30, v31, v32, v33);
  *(_BYTE *)(v21 + 40) = isNotInit;
  if ( !isNotInit )
    QuestBoardListViewManager__InitListObject(this, mode, v34);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_45;
  *(_BYTE *)(v21 + 24) = CommonUI__maskFadeIsOnTop(Instance, 0LL);
  switch ( this->fields.initMode )
  {
    case 3:
      this->fields.mIsDoing_Slide = 1;
      v40 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v36, v37, v38, v39);
      v41 = &Method_QuestBoardListViewManager___c__DisplayClass103_0__RequestListObject_b__0__;
      goto LABEL_10;
    case 4:
      v44 = sub_B170CC(QuestBoardListViewManager___c__DisplayClass103_2_TypeInfo, v36, v37, v38, v39);
      QuestBoardListViewManager___c__DisplayClass103_2___ctor(
        (QuestBoardListViewManager___c__DisplayClass103_2_o *)v44,
        0LL);
      if ( !v44 )
        goto LABEL_45;
      *(_QWORD *)(v44 + 24) = v21;
      v51 = v44 + 24;
      sub_B16F98((BattleServantConfConponent_o *)(v44 + 24), (System_Int32_array **)v21, v45, v46, v47, v48, v49, v50);
      this->fields.mIsDoing_Slide = 1;
      *(_DWORD *)(v44 + 16) = 0;
      if ( !isWhiteFade )
        goto LABEL_48;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( TerminalPramsManager__IsAuto(0LL) )
      {
LABEL_48:
        if ( *(_QWORD *)v51 )
        {
          if ( *(_BYTE *)(*(_QWORD *)v51 + 24LL) )
          {
            exitTime = *(float *)(v44 + 16);
          }
          else
          {
            exitTime = this->fields.exitTime;
            *(float *)(v44 + 16) = exitTime;
          }
          QuestBoardListViewManager__bgAlphaFade(this, this->fields.initMode, exitTime, v52);
          if ( *(_QWORD *)v51 )
          {
            QuestBoardListViewManager__SetSlideOut(
              this,
              *(float *)(v44 + 16),
              *(System_Action_o **)(*(_QWORD *)v51 + 32LL),
              v61);
            goto LABEL_43;
          }
        }
LABEL_45:
        sub_B170D4();
      }
      this->fields.mFaded = 1;
      v77 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v78 = AvalonSceneManager_TypeInfo;
      if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v78 = AvalonSceneManager_TypeInfo;
      }
      DEFAULT_FADE_TIME = v78->static_fields->DEFAULT_FADE_TIME;
      v80 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v73, v74, v75, v76);
      System_Action___ctor(
        v80,
        (Il2CppObject *)v44,
        Method_QuestBoardListViewManager___c__DisplayClass103_2__RequestListObject_b__7__,
        0LL);
      if ( !v77 )
        goto LABEL_45;
      v70 = (CommonUI_o *)v77;
      v71 = DEFAULT_FADE_TIME;
      v72 = v80;
      goto LABEL_42;
    case 5:
      this->fields.mIsDoing_Slide = 0;
      v40 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v36, v37, v38, v39);
      v41 = &Method_QuestBoardListViewManager___c__DisplayClass103_0__RequestListObject_b__1__;
LABEL_10:
      v42 = v40;
      System_Action___ctor(v40, (Il2CppObject *)v21, *v41, 0LL);
      QuestBoardListViewManager__changeBG(this, v42, v43);
      return;
    case 6:
      this->fields.mIsDoing_Slide = 0;
      if ( !isWhiteFade )
      {
        initMode = 6;
        goto LABEL_28;
      }
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( TerminalPramsManager__IsAuto(0LL) )
      {
        initMode = this->fields.initMode;
LABEL_28:
        QuestBoardListViewManager__bgAlphaFade(this, initMode, 0.0, v37);
        v59 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v55, v56, v57, v58);
        System_Action___ctor(
          v59,
          (Il2CppObject *)v21,
          Method_QuestBoardListViewManager___c__DisplayClass103_0__RequestListObject_b__9__,
          0LL);
        QuestBoardListViewManager__SetMode(this, 2, v59, 0, 0, v60);
        goto LABEL_43;
      }
      this->fields.mFaded = 1;
      v66 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v67 = AvalonSceneManager_TypeInfo;
      if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v67 = AvalonSceneManager_TypeInfo;
      }
      v68 = v67->static_fields->DEFAULT_FADE_TIME;
      v69 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v62, v63, v64, v65);
      System_Action___ctor(
        v69,
        (Il2CppObject *)v21,
        Method_QuestBoardListViewManager___c__DisplayClass103_0__RequestListObject_b__8__,
        0LL);
      if ( !v66 )
        goto LABEL_45;
      v70 = (CommonUI_o *)v66;
      v71 = v68;
      v72 = v69;
LABEL_42:
      CommonUI__maskFadeout(v70, 2, v71, v72, 0LL);
LABEL_43:
      mNoneLabelParent = this->fields.mNoneLabelParent;
      if ( !mNoneLabelParent )
        goto LABEL_45;
      UnityEngine_GameObject__SetActive(mNoneLabelParent, 0, 0LL);
      return;
    default:
      ActionExtensions__Call(*(System_Action_o **)(v21 + 32), 0LL);
      return;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestBoardListViewManager__RequestToRaiseTutorialFlag(
        QuestBoardListViewManager_o *this,
        EventEntity_o *eventEntity,
        System_Action_o *clickAreaFunc,
        int32_t warId,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x21
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  QuestBoardListViewManager_o *v22; // x0
  const MethodInfo *v23; // x3
  int32_t id; // w20
  int32_t v25; // w22
  QuestTree_o *v26; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  NetworkManager_ResultCallbackFunc_o *v31; // x19
  TutorialEventSetRequest_o *Request_WarBoardWallAttackRequest; // x0
  int32_t flagType; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40F951F & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, eventEntity);
    sub_B16FFC(&Method_NetworkManager_getRequest_TutorialEventSetRequest___, v8);
    sub_B16FFC(&NetworkManager_TypeInfo, v9);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v10);
    sub_B16FFC(&Method_SingletonTemplate_QuestTree__get_Instance__, v11);
    sub_B16FFC(&SingletonTemplate_QuestTree__TypeInfo, v12);
    sub_B16FFC(&Method_QuestBoardListViewManager___c__DisplayClass116_0__RequestToRaiseTutorialFlag_b__0__, v13);
    sub_B16FFC(&QuestBoardListViewManager___c__DisplayClass116_0_TypeInfo, v14);
    byte_40F951F = 1;
  }
  flagType = 0;
  v15 = sub_B170CC(
          QuestBoardListViewManager___c__DisplayClass116_0_TypeInfo,
          eventEntity,
          clickAreaFunc,
          *(_QWORD *)&warId,
          method);
  QuestBoardListViewManager___c__DisplayClass116_0___ctor(
    (QuestBoardListViewManager___c__DisplayClass116_0_o *)v15,
    0LL);
  if ( !v15 )
    goto LABEL_22;
  *(_QWORD *)(v15 + 16) = clickAreaFunc;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v15 + 16),
    (System_Int32_array **)clickAreaFunc,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  if ( QuestBoardListViewManager__TryGetFlagFromOnEventStart(v22, &flagType, eventEntity, v23) )
  {
    if ( !eventEntity )
      goto LABEL_22;
    id = eventEntity->fields.id;
    v25 = flagType;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( !CondType__IsEventTutorialFlagOn(id, v25, 0LL) )
    {
      if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
      }
      v26 = (QuestTree_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !v26 )
        goto LABEL_22;
      if ( QuestTree__IsWarOpen(v26, warId, 0LL) )
      {
        v31 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                       NetworkManager_ResultCallbackFunc_TypeInfo,
                                                       v27,
                                                       v28,
                                                       v29,
                                                       v30);
        NetworkManager_ResultCallbackFunc___ctor(
          v31,
          (Il2CppObject *)v15,
          Method_QuestBoardListViewManager___c__DisplayClass116_0__RequestToRaiseTutorialFlag_b__0__,
          0LL);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        Request_WarBoardWallAttackRequest = (TutorialEventSetRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                           v31,
                                                                           (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_TutorialEventSetRequest___);
        if ( Request_WarBoardWallAttackRequest )
        {
          TutorialEventSetRequest__beginRequest(Request_WarBoardWallAttackRequest, v25, id, 0LL);
          return 1;
        }
LABEL_22:
        sub_B170D4();
      }
    }
  }
  return 0;
}


void __fastcall QuestBoardListViewManager__ResetAlphaAnimTime(
        QuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  QuestBoardListViewManager_c *v4; // x0
  float v5; // s8
  System_Func_float__float__float__float__o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  AlphaTransitionCalculator_o *v11; // x21
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  AlphaTransitionCalculator_o *rewardIconAlphaCalculator; // x0

  if ( (byte_40F951D & 1) == 0 )
  {
    sub_B16FFC(&AlphaTransitionCalculator_TypeInfo, method);
    sub_B16FFC(&QuestBoardListViewManager_TypeInfo, v3);
    byte_40F951D = 1;
  }
  this->fields.mAlphaAnimNow = 1.0;
  this->fields.mAlphaAnimTimeOld = UnityEngine_Time__get_realtimeSinceStartup(0LL);
  v4 = QuestBoardListViewManager_TypeInfo;
  if ( (BYTE3(QuestBoardListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewManager_TypeInfo);
    v4 = QuestBoardListViewManager_TypeInfo;
  }
  v5 = ChangedFPSUtil__CovertFrameNumToSecond(v4->static_fields->REWARD_ICON_FADE_FRAME_NUM, 0LL);
  v6 = ExtraEasing__AsymptoticSeriesFloat(
         QuestBoardListViewManager_TypeInfo->static_fields->ALPHA_ANIM_SPD_RATE,
         (float)QuestBoardListViewManager_TypeInfo->static_fields->REWARD_ICON_FADE_FRAME_NUM,
         0LL);
  v11 = (AlphaTransitionCalculator_o *)sub_B170CC(AlphaTransitionCalculator_TypeInfo, v7, v8, v9, v10);
  AlphaTransitionCalculator___ctor(v11, v5, v6, 0LL);
  this->fields.rewardIconAlphaCalculator = v11;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.rewardIconAlphaCalculator,
    (System_Int32_array **)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  rewardIconAlphaCalculator = this->fields.rewardIconAlphaCalculator;
  if ( !rewardIconAlphaCalculator )
    sub_B170D4();
  AlphaTransitionCalculator__MakeFadeInFinished(rewardIconAlphaCalculator, 0LL);
}


void __fastcall QuestBoardListViewManager__ResetBG(QuestBoardListViewManager_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *mFolderBg; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  ExUITexture_o *v5; // x0

  mFolderBg = (UnityEngine_Component_o *)this->fields.mFolderBg;
  this->fields.mRequestedBGid = 0;
  if ( !mFolderBg
    || (gameObject = UnityEngine_Component__get_gameObject(mFolderBg, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL), (v5 = this->fields.mFolderBg) == 0LL) )
  {
    sub_B170D4();
  }
  ExUITexture__ClearImage(v5, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestBoardListViewManager__SetCenterItem(
        QuestBoardListViewManager_o *this,
        int32_t item_index,
        bool isAnimation,
        float forceShiftY,
        const MethodInfo *method)
{
  UnityEngine_Object_o *effectAppearComponent; // x22
  struct QuestBoardListEffectAppearComponent_o *v10; // x8

  if ( (byte_40F951A & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, *(_QWORD *)&item_index);
    byte_40F951A = 1;
  }
  effectAppearComponent = (UnityEngine_Object_o *)this->fields.effectAppearComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(effectAppearComponent, 0LL, 0LL) )
  {
    v10 = this->fields.effectAppearComponent;
    if ( !v10 )
      sub_B170D4();
    forceShiftY = v10->fields.targetBoardForceShiftPosY;
  }
  ListViewManager__MoveCenterItem((ListViewManager_o *)this, item_index, isAnimation, 0, forceShiftY, 0LL);
}


void __fastcall QuestBoardListViewManager__SetFocusItem(
        QuestBoardListViewManager_o *this,
        int32_t item_index,
        bool isAnimation,
        const MethodInfo *method)
{
  ListViewManager__MoveTopItem((ListViewManager_o *)this, item_index, isAnimation, 0LL);
}


bool __fastcall QuestBoardListViewManager__SetMode(
        QuestBoardListViewManager_o *this,
        int32_t mode,
        System_Action_o *end_act,
        bool isFade,
        bool isNotInit,
        const MethodInfo *method)
{
  int32_t mIsDoing_Slide; // w8
  UnityEngine_Collider_o *mBoxCollider; // x0
  const MethodInfo *v13; // x5
  bool v14; // w3
  bool v15; // w4
  int32_t v16; // w1
  QuestBoardListViewManager_o *v17; // x0
  System_Action_o *v18; // x2

  mIsDoing_Slide = this->fields.mIsDoing_Slide;
  if ( mode == 4 )
  {
    if ( this->fields.mIsDoing_Slide || this->fields.initMode != 2 )
      goto LABEL_12;
  }
  else
  {
    if ( mode == 3 )
    {
      if ( this->fields.mIsDoing_Slide )
      {
LABEL_12:
        ActionExtensions__Call(end_act, 0LL);
        return 0;
      }
      mIsDoing_Slide = this->fields.initMode;
    }
    if ( mIsDoing_Slide )
      goto LABEL_12;
  }
  this->fields.initMode = mode;
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0LL);
  mBoxCollider = (UnityEngine_Collider_o *)this->fields.mBoxCollider;
  if ( !mBoxCollider )
    sub_B170D4();
  UnityEngine_Collider__set_enabled(mBoxCollider, this->fields.isInput, 0LL);
  if ( (unsigned int)(mode - 3) < 4 )
    goto LABEL_11;
  if ( mode == 2 )
  {
    v15 = isNotInit;
    v16 = 3;
    v17 = this;
    goto LABEL_17;
  }
  if ( mode != 1 )
  {
    v15 = isNotInit;
    v17 = this;
    v16 = 0;
LABEL_17:
    v18 = end_act;
    v14 = 0;
    goto LABEL_18;
  }
LABEL_11:
  v14 = isFade;
  v15 = isNotInit;
  v16 = 2;
  v17 = this;
  v18 = end_act;
LABEL_18:
  QuestBoardListViewManager__RequestListObject(v17, v16, v18, v14, v15, v13);
  return 1;
}


void __fastcall QuestBoardListViewManager__SetNoneLabelActive(
        QuestBoardListViewManager_o *this,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *mNoneLabelParent; // x0

  mNoneLabelParent = this->fields.mNoneLabelParent;
  if ( !mNoneLabelParent )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(mNoneLabelParent, isActive, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestBoardListViewManager__SetObjectItem(
        QuestBoardListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v6; // x10
  int32_t initMode; // w20
  const MethodInfo *v8; // x3
  float v9; // s0
  int v10; // s1
  int32_t v13; // w1

  if ( (byte_40F9513 & 1) == 0 )
  {
    sub_B16FFC(&QuestBoardListViewObject_TypeInfo, obj);
    byte_40F9513 = 1;
  }
  if ( !obj
    || (v6 = *(&QuestBoardListViewObject_TypeInfo->_2.bitflags2 + 1), *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (QuestBoardListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != QuestBoardListViewObject_TypeInfo )
  {
    sub_B170D4();
  }
  initMode = this->fields.initMode;
  *(UnityEngine_Vector3_o *)&v9 = UnityEngine_Vector3__get_zero(0LL);
  if ( initMode == 2 )
    v13 = 3;
  else
    v13 = 2;
  QuestBoardListViewObject__Init_23910356(
    (QuestBoardListViewObject_o *)obj,
    v13,
    0LL,
    v9,
    *(UnityEngine_Vector3_o *)&v10,
    v8);
}


void __fastcall QuestBoardListViewManager__SetOutPosition(QuestBoardListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UIWidget_o *Component_UIWidget; // x0
  SlideFadeObject_o *v6; // x19
  float v7; // s8
  float v8; // s10
  float v9; // s9
  QuestBoardListViewManager_c *v10; // x0
  float OUT_POS_OFS_X; // s0
  UnityEngine_Vector3_o v12; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40F9519 & 1) == 0 )
  {
    sub_B16FFC(&Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___, method);
    sub_B16FFC(&QuestBoardListViewManager_TypeInfo, v3);
    byte_40F9519 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_UIWidget = GameObjectExtensions__SafeGetComponent_UIWidget_(
                         gameObject,
                         (const MethodInfo_19D2264 *)Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
  if ( !Component_UIWidget )
    sub_B170D4();
  v6 = (SlideFadeObject_o *)Component_UIWidget;
  v8 = *(float *)&Component_UIWidget->fields.updateAnchors;
  v7 = *((float *)&Component_UIWidget->fields.updateAnchors + 1);
  v9 = *(float *)&Component_UIWidget->fields.mGo;
  v10 = QuestBoardListViewManager_TypeInfo;
  if ( (BYTE3(QuestBoardListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewManager_TypeInfo);
  }
  OUT_POS_OFS_X = QuestBoardListViewManager__get_OUT_POS_OFS_X((const MethodInfo *)v10);
  v12.fields.y = v7;
  v12.fields.z = v9;
  v12.fields.x = v8 + OUT_POS_OFS_X;
  SlideFadeObject__SetPosition(v6, v12, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestBoardListViewManager__SetScrollBarEnable(
        QuestBoardListViewManager_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *blockMask; // x21
  BattleServantConfConponent_o *p_blockMask; // x19
  UnityEngine_Object_o *klass; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  UnityEngine_Object_o *blockMaskPrefab; // x21
  struct UnityEngine_GameObject_o *v16; // x21
  struct UnityEngine_GameObject_o *v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  UnityEngine_GameObject_o *v24; // x19
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40F950A & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, isEnable);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40F950A = 1;
  }
  blockMask = (UnityEngine_Object_o *)this->fields.blockMask;
  p_blockMask = (BattleServantConfConponent_o *)&this->fields.blockMask;
  if ( isEnable )
  {
    if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(blockMask, 0LL, 0LL) )
    {
      klass = (UnityEngine_Object_o *)p_blockMask->klass;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DestroyImmediate_34809676(klass, 0LL);
      p_blockMask->klass = 0LL;
      sub_B16F98(p_blockMask, 0LL, v9, v10, v11, v12, v13, v14);
    }
  }
  else
  {
    if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality(blockMask, 0LL, 0LL) )
    {
      blockMaskPrefab = (UnityEngine_Object_o *)this->fields.blockMaskPrefab;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(blockMaskPrefab, 0LL, 0LL) )
      {
        v16 = this->fields.blockMaskPrefab;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v17 = (struct UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                   (UnityEngine_UI_Dropdown_DropdownItem_o *)v16,
                                                   (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
        this->fields.blockMask = v17;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.blockMask,
          (System_Int32_array **)v17,
          v18,
          v19,
          v20,
          v21,
          v22,
          v23);
        GameObjectExtensions__SafeSetParent(
          this->fields.blockMask,
          (UnityEngine_Component_o *)this->fields.onEffectPanel,
          0LL);
        v24 = this->fields.blockMask;
        zero = UnityEngine_Vector3__get_zero(0LL);
        GameObjectExtensions__SetLocalPosition(v24, zero, 0LL);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestBoardListViewManager__SetScrollViewPanelDepth(
        QuestBoardListViewManager_o *this,
        int32_t depth,
        bool isDefault,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Component_o *scrollView; // x0
  UnityEngine_Object_o *Component_WebViewObject; // x21
  UIPanel_o *v11; // x0
  int32_t DEFAULT_SCROLL_VIEW_DEPTH; // w1

  if ( (byte_40F9526 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIPanel___, *(_QWORD *)&depth);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    sub_B16FFC(&QuestBoardListViewManager_TypeInfo, v8);
    byte_40F9526 = 1;
  }
  scrollView = (UnityEngine_Component_o *)this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_17;
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      scrollView,
                                                      (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(Component_WebViewObject, 0LL, 0LL) )
  {
    if ( isDefault )
    {
      if ( (BYTE3(QuestBoardListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestBoardListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewManager_TypeInfo);
      }
      if ( Component_WebViewObject )
      {
        v11 = (UIPanel_o *)Component_WebViewObject;
        DEFAULT_SCROLL_VIEW_DEPTH = QuestBoardListViewManager_TypeInfo->static_fields->DEFAULT_SCROLL_VIEW_DEPTH;
LABEL_16:
        UIPanel__set_depth(v11, DEFAULT_SCROLL_VIEW_DEPTH, 0LL);
        return;
      }
    }
    else if ( Component_WebViewObject )
    {
      v11 = (UIPanel_o *)Component_WebViewObject;
      DEFAULT_SCROLL_VIEW_DEPTH = depth;
      goto LABEL_16;
    }
LABEL_17:
    sub_B170D4();
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestBoardListViewManager__SetShowingInfo(
        QuestBoardListViewManager_o *this,
        int32_t idx,
        bool onOff,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  ListViewItem_o *v10; // x8
  UnityEngine_Object_o *viewObject; // x20
  __int64 v12; // x9
  QuestBoardListViewItemDraw_o *klass; // x0
  QuestBoardListViewManager_o *v14; // x0
  const MethodInfo *v15; // x1

  if ( (byte_40F9522 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&idx);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    sub_B16FFC(&QuestBoardListViewObject_TypeInfo, v8);
    byte_40F9522 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_17;
  if ( itemList->fields._size <= (unsigned int)idx )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v10 = itemList->fields._items->m_Items[idx];
  if ( !v10 )
    goto LABEL_17;
  viewObject = (UnityEngine_Object_o *)v10->fields.viewObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
  {
    if ( !viewObject )
      goto LABEL_17;
    v12 = *(&QuestBoardListViewObject_TypeInfo->_2.bitflags2 + 1);
    if ( *(&viewObject->klass->_2.bitflags2 + 1) >= (unsigned int)v12
      && (QuestBoardListViewObject_c *)viewObject->klass->_2.typeHierarchy[v12 - 1] == QuestBoardListViewObject_TypeInfo )
    {
      klass = (QuestBoardListViewItemDraw_o *)viewObject[5].klass;
      if ( klass )
      {
        QuestBoardListViewItemDraw__setInfoShowing(klass, onOff, 0LL);
        return;
      }
LABEL_17:
      sub_B170D4();
    }
    v14 = (QuestBoardListViewManager_o *)sub_B173C8(viewObject);
    QuestBoardListViewManager__RequestConsumeColorReset(v14, v15);
  }
}


void __fastcall QuestBoardListViewManager__SetShowingInfoAllOff(
        QuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_QuestBoardListViewObject__o *ObjectList; // x0
  int size; // w8
  System_Collections_Generic_List_QuestBoardListViewObject__o *v6; // x19
  unsigned int v7; // w20
  QuestBoardListViewObject_o *v8; // x8
  QuestBoardListViewItemDraw_o *itemDraw; // x0

  if ( (byte_40F9521 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestBoardListViewObject__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestBoardListViewObject__get_Item__, v3);
    byte_40F9521 = 1;
  }
  ObjectList = QuestBoardListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    goto LABEL_12;
  size = ObjectList->fields._size;
  v6 = ObjectList;
  if ( size >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( size <= v7 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v8 = v6->fields._items->m_Items[v7];
      if ( !v8 )
        break;
      itemDraw = v8->fields.itemDraw;
      if ( !itemDraw )
        break;
      QuestBoardListViewItemDraw__setInfoShowing(itemDraw, 0, 0LL);
      size = v6->fields._size;
      if ( (int)++v7 >= size )
        return;
    }
LABEL_12:
    sub_B170D4();
  }
}


void __fastcall QuestBoardListViewManager__SetSlideOut(
        QuestBoardListViewManager_o *this,
        float time,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  __int64 v4; // x3
  __int64 v5; // x4
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x19
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v27; // x0
  UIWidget_o *Component_UIWidget; // x0
  SlideFadeObject_o *v29; // x20
  float OUT_POS_OFS_X; // s9
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  System_Action_o *v35; // x21

  if ( (byte_40F9517 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, end_act);
    sub_B16FFC(&Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___, v9);
    sub_B16FFC(&QuestBoardListViewManager_TypeInfo, v10);
    sub_B16FFC(&Method_QuestBoardListViewManager___c__DisplayClass104_0__SetSlideOut_b__0__, v11);
    sub_B16FFC(&QuestBoardListViewManager___c__DisplayClass104_0_TypeInfo, v12);
    byte_40F9517 = 1;
  }
  v13 = sub_B170CC(QuestBoardListViewManager___c__DisplayClass104_0_TypeInfo, end_act, method, v4, v5);
  QuestBoardListViewManager___c__DisplayClass104_0___ctor(
    (QuestBoardListViewManager___c__DisplayClass104_0_o *)v13,
    0LL);
  if ( !v13 )
    goto LABEL_10;
  *(_QWORD *)(v13 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v13 + 16), (System_Int32_array **)this, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v13 + 24) = end_act;
  sub_B16F98((BattleServantConfConponent_o *)(v13 + 24), (System_Int32_array **)end_act, v20, v21, v22, v23, v24, v25);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_10;
  v27 = UnityEngine_GameObject__get_gameObject(gameObject, 0LL);
  Component_UIWidget = GameObjectExtensions__SafeGetComponent_UIWidget_(
                         v27,
                         (const MethodInfo_19D2264 *)Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
  v29 = (SlideFadeObject_o *)Component_UIWidget;
  if ( (BYTE3(QuestBoardListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewManager_TypeInfo);
  }
  OUT_POS_OFS_X = QuestBoardListViewManager__get_OUT_POS_OFS_X((const MethodInfo *)Component_UIWidget);
  v35 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v31, v32, v33, v34);
  System_Action___ctor(
    v35,
    (Il2CppObject *)v13,
    Method_QuestBoardListViewManager___c__DisplayClass104_0__SetSlideOut_b__0__,
    0LL);
  if ( !v29 )
LABEL_10:
    sub_B170D4();
  SlideFadeObject__SlideOut_24820408(v29, OUT_POS_OFS_X, time, 0.0, v35, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestBoardListViewManager__SetTerminalTopEffectPlay(
        QuestBoardListViewManager_o *this,
        int32_t targetWarId,
        bool isClose,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct System_Collections_Generic_List_ListViewItem__o *topItemList; // x0
  struct System_Collections_Generic_List_ListViewItem__o *bottomItemList; // x0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  char v16; // w25
  __int64 v17; // x10
  struct System_Collections_Generic_List_ListViewItem__o *v18; // x0
  struct System_Collections_Generic_List_ListViewItem__o *v19; // x0
  _QWORD *monitor; // x8
  __int64 v21; // x8
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_40F950D & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, *(_QWORD *)&targetWarId);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__Clear__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v11);
    sub_B16FFC(&QuestBoardListViewItem_TypeInfo, v12);
    byte_40F950D = 1;
  }
  memset(&v23, 0, sizeof(v23));
  if ( targetWarId )
  {
    topItemList = this->fields.topItemList;
    if ( !topItemList
      || (System_Collections_Generic_List_XWeaponTrail_Element___Clear(
            (System_Collections_Generic_List_XWeaponTrail_Element__o *)topItemList,
            (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_ListViewItem__Clear__),
          (bottomItemList = this->fields.bottomItemList) == 0LL)
      || (System_Collections_Generic_List_XWeaponTrail_Element___Clear(
            (System_Collections_Generic_List_XWeaponTrail_Element__o *)bottomItemList,
            (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_ListViewItem__Clear__),
          (itemList = this->fields.itemList) == 0LL) )
    {
      sub_B170D4();
    }
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v22,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v23 = v22;
    v16 = 1;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( !System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v23,
                (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
        {
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
            &v23,
            (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          return;
        }
        if ( v23.fields.current )
        {
          v17 = *(&QuestBoardListViewItem_TypeInfo->_2.bitflags2 + 1);
          if ( *(&v23.fields.current->klass->_2.bitflags2 + 1) >= (unsigned int)v17
            && (QuestBoardListViewItem_c *)v23.fields.current->klass->_2.typeHierarchy[v17 - 1] == QuestBoardListViewItem_TypeInfo )
          {
            monitor = v23.fields.current[7].monitor;
            if ( monitor )
            {
              v21 = monitor[14];
              if ( v21 )
              {
                if ( *(_DWORD *)(v21 + 16) != 1 && *(_DWORD *)(v21 + 20) == targetWarId )
                  break;
              }
            }
          }
        }
        if ( (v16 & 1) != 0 )
        {
          v18 = this->fields.topItemList;
          if ( !v18 )
            sub_B170D4();
          v16 = 1;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v18,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v23.fields.current,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        }
        else
        {
          v19 = this->fields.bottomItemList;
          if ( !v19 )
            sub_B170D4();
LABEL_16:
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v19,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v23.fields.current,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
          v16 = 0;
        }
      }
      v16 = 0;
      if ( isClose )
      {
        v19 = this->fields.bottomItemList;
        if ( !v19 )
          sub_B170D4();
        goto LABEL_16;
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestBoardListViewManager__SetUpBoardAppearEffect(
        QuestBoardListViewManager_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Component_o *QuestBoardObjForWarId; // x21
  UnityEngine_Object_o *boardAppearEffectPrefab; // x20
  struct UnityEngine_GameObject_o *v9; // x20
  UnityEngine_GameObject_o *v10; // x0
  UnityEngine_GameObject_o *v11; // x20
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v13; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *v15; // x0
  UnityEngine_Transform_o *v16; // x21
  int v17; // s0
  UnityEngine_Transform_o *v20; // x21
  int v21; // s0
  UnityEngine_Transform_o *v25; // x21
  int v26; // s0
  struct QuestBoardListEffectAppearComponent_o *Component_srcLineSprite; // x0
  QuestBoardListEffectComponent_o **p_effectAppearComponent; // x20
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7

  if ( (byte_40F952C & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectAppearComponent___, *(_QWORD *)&warId);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    byte_40F952C = 1;
  }
  QuestBoardObjForWarId = (UnityEngine_Component_o *)QuestBoardListViewManager__GetQuestBoardObjForWarId(
                                                       this,
                                                       warId,
                                                       method);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)QuestBoardObjForWarId, 0LL, 0LL) )
  {
    boardAppearEffectPrefab = (UnityEngine_Object_o *)this->fields.boardAppearEffectPrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality(boardAppearEffectPrefab, 0LL, 0LL) )
    {
      v9 = this->fields.boardAppearEffectPrefab;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v10 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                          (UnityEngine_UI_Dropdown_DropdownItem_o *)v9,
                                          (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( v10 )
      {
        v11 = v10;
        transform = UnityEngine_GameObject__get_transform(v10, 0LL);
        if ( QuestBoardObjForWarId )
        {
          v13 = transform;
          gameObject = UnityEngine_Component__get_gameObject(QuestBoardObjForWarId, 0LL);
          if ( gameObject )
          {
            v15 = UnityEngine_GameObject__get_transform(gameObject, 0LL);
            if ( v13 )
            {
              UnityEngine_Transform__set_parent(v13, v15, 0LL);
              v16 = UnityEngine_GameObject__get_transform(v11, 0LL);
              *(UnityEngine_Vector3_o *)&v17 = UnityEngine_Vector3__get_zero(0LL);
              if ( v16 )
              {
                UnityEngine_Transform__set_localPosition(v16, *(UnityEngine_Vector3_o *)&v17, 0LL);
                v20 = UnityEngine_GameObject__get_transform(v11, 0LL);
                *(UnityEngine_Quaternion_o *)&v21 = UnityEngine_Quaternion__get_identity(0LL);
                if ( v20 )
                {
                  UnityEngine_Transform__set_localRotation(v20, *(UnityEngine_Quaternion_o *)&v21, 0LL);
                  v25 = UnityEngine_GameObject__get_transform(v11, 0LL);
                  *(UnityEngine_Vector3_o *)&v26 = UnityEngine_Vector3__get_one(0LL);
                  if ( v25 )
                  {
                    UnityEngine_Transform__set_localScale(v25, *(UnityEngine_Vector3_o *)&v26, 0LL);
                    Component_srcLineSprite = (struct QuestBoardListEffectAppearComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                                v11,
                                                                                                (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectAppearComponent___);
                    p_effectAppearComponent = (QuestBoardListEffectComponent_o **)&this->fields.effectAppearComponent;
                    this->fields.effectAppearComponent = Component_srcLineSprite;
                    sub_B16F98(
                      (BattleServantConfConponent_o *)&this->fields.effectAppearComponent,
                      (System_Int32_array **)Component_srcLineSprite,
                      v31,
                      v32,
                      v33,
                      v34,
                      v35,
                      v36);
                    if ( UnityEngine_Object__op_Equality(
                           (UnityEngine_Object_o *)this->fields.effectAppearComponent,
                           0LL,
                           0LL) )
                    {
                      return;
                    }
                    if ( *p_effectAppearComponent )
                    {
                      QuestBoardListEffectComponent__Init(*p_effectAppearComponent, 0, 0.0, 0.0, 0LL);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
      sub_B170D4();
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestBoardListViewManager__SetUpBoardAppearEffectNT2(
        QuestBoardListViewManager_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Component_o *QuestBoardObjForWarId; // x20
  UnityEngine_Object_o *nt2BoardAppearEffectPrefab; // x21
  struct UnityEngine_GameObject_o *v9; // x21
  UnityEngine_GameObject_o *v10; // x0
  UnityEngine_GameObject_o *v11; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v13; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *v15; // x0
  struct QuestBoardListEffectAppearComponent_o *Component_srcLineSprite; // x0
  QuestBoardListEffectComponent_o **p_effectAppearComponent; // x20
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_40F9534 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectAppearComponent___, *(_QWORD *)&warId);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    byte_40F9534 = 1;
  }
  QuestBoardObjForWarId = (UnityEngine_Component_o *)QuestBoardListViewManager__GetQuestBoardObjForWarId(
                                                       this,
                                                       warId,
                                                       method);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)QuestBoardObjForWarId, 0LL, 0LL) )
  {
    nt2BoardAppearEffectPrefab = (UnityEngine_Object_o *)this->fields.nt2BoardAppearEffectPrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality(nt2BoardAppearEffectPrefab, 0LL, 0LL) )
    {
      v9 = this->fields.nt2BoardAppearEffectPrefab;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v10 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                          (UnityEngine_UI_Dropdown_DropdownItem_o *)v9,
                                          (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( v10 )
      {
        v11 = v10;
        transform = UnityEngine_GameObject__get_transform(v10, 0LL);
        if ( QuestBoardObjForWarId )
        {
          v13 = transform;
          gameObject = UnityEngine_Component__get_gameObject(QuestBoardObjForWarId, 0LL);
          if ( gameObject )
          {
            v15 = UnityEngine_GameObject__get_transform(gameObject, 0LL);
            if ( v13 )
            {
              UnityEngine_Transform__set_parent(v13, v15, 0LL);
              GameObjectExtensions__ResetTransform(v11, 0LL);
              Component_srcLineSprite = (struct QuestBoardListEffectAppearComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                          v11,
                                                                                          (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectAppearComponent___);
              p_effectAppearComponent = (QuestBoardListEffectComponent_o **)&this->fields.effectAppearComponent;
              this->fields.effectAppearComponent = Component_srcLineSprite;
              sub_B16F98(
                (BattleServantConfConponent_o *)&this->fields.effectAppearComponent,
                (System_Int32_array **)Component_srcLineSprite,
                v18,
                v19,
                v20,
                v21,
                v22,
                v23);
              if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)this->fields.effectAppearComponent, 0LL, 0LL) )
                return;
              if ( *p_effectAppearComponent )
              {
                QuestBoardListEffectComponent__Init(*p_effectAppearComponent, 0, 0.0, 0.0, 0LL);
                return;
              }
            }
          }
        }
      }
      sub_B170D4();
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestBoardListViewManager__SetUpBoardAppearFadeEffect(
        QuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *boardAppearEffectFadePrefab; // x20
  struct UnityEngine_GameObject_o *v6; // x20
  UnityEngine_GameObject_o *v7; // x0
  UnityEngine_GameObject_o *v8; // x20
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v10; // x21
  UnityEngine_Transform_o *v11; // x0
  UnityEngine_Transform_o *v12; // x21
  int v13; // s0
  UnityEngine_Transform_o *v16; // x21
  int v17; // s0
  UnityEngine_Transform_o *v21; // x21
  int v22; // s0
  struct QuestBoardListEffectComponent_o *Component_srcLineSprite; // x0
  QuestBoardListEffectComponent_o **p_effectAppearFadeComponent; // x20
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7

  if ( (byte_40F952D & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectComponent___, method);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    byte_40F952D = 1;
  }
  boardAppearEffectFadePrefab = (UnityEngine_Object_o *)this->fields.boardAppearEffectFadePrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(boardAppearEffectFadePrefab, 0LL, 0LL) )
  {
    v6 = this->fields.boardAppearEffectFadePrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v7 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                       (UnityEngine_UI_Dropdown_DropdownItem_o *)v6,
                                       (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( v7 )
    {
      v8 = v7;
      transform = UnityEngine_GameObject__get_transform(v7, 0LL);
      if ( this->fields.fadePanel )
      {
        v10 = transform;
        v11 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.fadePanel, 0LL);
        if ( v10 )
        {
          UnityEngine_Transform__set_parent(v10, v11, 0LL);
          v12 = UnityEngine_GameObject__get_transform(v8, 0LL);
          *(UnityEngine_Vector3_o *)&v13 = UnityEngine_Vector3__get_zero(0LL);
          if ( v12 )
          {
            UnityEngine_Transform__set_localPosition(v12, *(UnityEngine_Vector3_o *)&v13, 0LL);
            v16 = UnityEngine_GameObject__get_transform(v8, 0LL);
            *(UnityEngine_Quaternion_o *)&v17 = UnityEngine_Quaternion__get_identity(0LL);
            if ( v16 )
            {
              UnityEngine_Transform__set_localRotation(v16, *(UnityEngine_Quaternion_o *)&v17, 0LL);
              v21 = UnityEngine_GameObject__get_transform(v8, 0LL);
              *(UnityEngine_Vector3_o *)&v22 = UnityEngine_Vector3__get_one(0LL);
              if ( v21 )
              {
                UnityEngine_Transform__set_localScale(v21, *(UnityEngine_Vector3_o *)&v22, 0LL);
                Component_srcLineSprite = (struct QuestBoardListEffectComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                      v8,
                                                                                      (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectComponent___);
                p_effectAppearFadeComponent = &this->fields.effectAppearFadeComponent;
                this->fields.effectAppearFadeComponent = Component_srcLineSprite;
                sub_B16F98(
                  (BattleServantConfConponent_o *)&this->fields.effectAppearFadeComponent,
                  (System_Int32_array **)Component_srcLineSprite,
                  v27,
                  v28,
                  v29,
                  v30,
                  v31,
                  v32);
                if ( UnityEngine_Object__op_Equality(
                       (UnityEngine_Object_o *)this->fields.effectAppearFadeComponent,
                       0LL,
                       0LL) )
                {
                  return;
                }
                if ( *p_effectAppearFadeComponent )
                {
                  QuestBoardListEffectComponent__Init(*p_effectAppearFadeComponent, 0, 0.0, 0.0, 0LL);
                  return;
                }
              }
            }
          }
        }
      }
    }
    sub_B170D4();
  }
}


void __fastcall QuestBoardListViewManager__SetUpBoardAppearFadeEffectNT2(
        QuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *nt2BoardAppearEffectFadePrefab; // x20
  struct UnityEngine_GameObject_o *v6; // x20
  UnityEngine_GameObject_o *v7; // x0
  UnityEngine_GameObject_o *v8; // x20
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v10; // x21
  UnityEngine_Transform_o *v11; // x0
  struct QuestBoardListEffectComponent_o *Component_srcLineSprite; // x0
  QuestBoardListEffectComponent_o **p_effectAppearFadeComponent; // x20
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_40F9535 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectComponent___, method);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    byte_40F9535 = 1;
  }
  nt2BoardAppearEffectFadePrefab = (UnityEngine_Object_o *)this->fields.nt2BoardAppearEffectFadePrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(nt2BoardAppearEffectFadePrefab, 0LL, 0LL) )
  {
    v6 = this->fields.nt2BoardAppearEffectFadePrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v7 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                       (UnityEngine_UI_Dropdown_DropdownItem_o *)v6,
                                       (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( v7 )
    {
      v8 = v7;
      transform = UnityEngine_GameObject__get_transform(v7, 0LL);
      if ( this->fields.fadePanel )
      {
        v10 = transform;
        v11 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.fadePanel, 0LL);
        if ( v10 )
        {
          UnityEngine_Transform__set_parent(v10, v11, 0LL);
          GameObjectExtensions__ResetTransform(v8, 0LL);
          Component_srcLineSprite = (struct QuestBoardListEffectComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                v8,
                                                                                (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectComponent___);
          p_effectAppearFadeComponent = &this->fields.effectAppearFadeComponent;
          this->fields.effectAppearFadeComponent = Component_srcLineSprite;
          sub_B16F98(
            (BattleServantConfConponent_o *)&this->fields.effectAppearFadeComponent,
            (System_Int32_array **)Component_srcLineSprite,
            v14,
            v15,
            v16,
            v17,
            v18,
            v19);
          if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)this->fields.effectAppearFadeComponent, 0LL, 0LL) )
            return;
          if ( *p_effectAppearFadeComponent )
          {
            QuestBoardListEffectComponent__Init(*p_effectAppearFadeComponent, 0, 0.0, 0.0, 0LL);
            return;
          }
        }
      }
    }
    sub_B170D4();
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestBoardListViewManager__SetUpBoardDisappearEffect(
        QuestBoardListViewManager_o *this,
        int32_t warId,
        bool isNextBoardReleased,
        float endTime,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  UnityEngine_Component_o *QuestBoardObjForWarId; // x22
  UnityEngine_Object_o *boardDisappearEffectPrefab; // x21
  struct UnityEngine_GameObject_o *v13; // x21
  UnityEngine_GameObject_o *v14; // x0
  UnityEngine_GameObject_o *v15; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v17; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *v19; // x0
  UnityEngine_Transform_o *v20; // x22
  int v21; // s0
  UnityEngine_Transform_o *v24; // x22
  int v25; // s0
  UnityEngine_Transform_o *v29; // x22
  int v30; // s0
  struct QuestBoardListEffectDisappearComponent_o *Component_srcLineSprite; // x0
  QuestBoardListEffectComponent_o **p_effectDisappearComponent; // x22
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  float v41; // s1

  if ( (byte_40F9531 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectDisappearComponent___, *(_QWORD *)&warId);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v9);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v10);
    byte_40F9531 = 1;
  }
  QuestBoardObjForWarId = (UnityEngine_Component_o *)QuestBoardListViewManager__GetQuestBoardObjForWarId(
                                                       this,
                                                       warId,
                                                       (const MethodInfo *)isNextBoardReleased);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)QuestBoardObjForWarId, 0LL, 0LL) )
  {
    boardDisappearEffectPrefab = (UnityEngine_Object_o *)this->fields.boardDisappearEffectPrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality(boardDisappearEffectPrefab, 0LL, 0LL) )
    {
      v13 = this->fields.boardDisappearEffectPrefab;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v14 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                          (UnityEngine_UI_Dropdown_DropdownItem_o *)v13,
                                          (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( !v14 )
        goto LABEL_29;
      v15 = v14;
      transform = UnityEngine_GameObject__get_transform(v14, 0LL);
      if ( !QuestBoardObjForWarId )
        goto LABEL_29;
      v17 = transform;
      gameObject = UnityEngine_Component__get_gameObject(QuestBoardObjForWarId, 0LL);
      if ( !gameObject )
        goto LABEL_29;
      v19 = UnityEngine_GameObject__get_transform(gameObject, 0LL);
      if ( !v17 )
        goto LABEL_29;
      UnityEngine_Transform__set_parent(v17, v19, 0LL);
      v20 = UnityEngine_GameObject__get_transform(v15, 0LL);
      *(UnityEngine_Vector3_o *)&v21 = UnityEngine_Vector3__get_zero(0LL);
      if ( !v20 )
        goto LABEL_29;
      UnityEngine_Transform__set_localPosition(v20, *(UnityEngine_Vector3_o *)&v21, 0LL);
      v24 = UnityEngine_GameObject__get_transform(v15, 0LL);
      *(UnityEngine_Quaternion_o *)&v25 = UnityEngine_Quaternion__get_identity(0LL);
      if ( !v24 )
        goto LABEL_29;
      UnityEngine_Transform__set_localRotation(v24, *(UnityEngine_Quaternion_o *)&v25, 0LL);
      v29 = UnityEngine_GameObject__get_transform(v15, 0LL);
      *(UnityEngine_Vector3_o *)&v30 = UnityEngine_Vector3__get_one(0LL);
      if ( !v29 )
        goto LABEL_29;
      UnityEngine_Transform__set_localScale(v29, *(UnityEngine_Vector3_o *)&v30, 0LL);
      Component_srcLineSprite = (struct QuestBoardListEffectDisappearComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                     v15,
                                                                                     (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectDisappearComponent___);
      p_effectDisappearComponent = (QuestBoardListEffectComponent_o **)&this->fields.effectDisappearComponent;
      this->fields.effectDisappearComponent = Component_srcLineSprite;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.effectDisappearComponent,
        (System_Int32_array **)Component_srcLineSprite,
        v35,
        v36,
        v37,
        v38,
        v39,
        v40);
      if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)this->fields.effectDisappearComponent, 0LL, 0LL) )
        return;
      if ( !*p_effectDisappearComponent
        || (GameObjectExtensions__SetLocalPositionY(v15, *((float *)&(*p_effectDisappearComponent)[1].monitor + 1), 0LL),
            !*p_effectDisappearComponent) )
      {
LABEL_29:
        sub_B170D4();
      }
      if ( isNextBoardReleased )
        v41 = endTime;
      else
        v41 = 0.0;
      QuestBoardListEffectComponent__Init(*p_effectDisappearComponent, 1, 0.0, v41, 0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestBoardListViewManager__SetUpBoardDisppear2Effect(
        QuestBoardListViewManager_o *this,
        int32_t warId,
        bool isOnlyBoardOpen,
        float startTime,
        float endTime,
        float actStartTime,
        bool isNTBoard,
        const MethodInfo *method)
{
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  UnityEngine_Component_o *QuestBoardObjForWarId; // x23
  UnityEngine_Object_o *ntBoardAppearEffectPrefab; // x22
  struct UnityEngine_GameObject_o **p_ntBoardAppearEffectPrefab; // x24
  UnityEngine_UI_Dropdown_DropdownItem_o *v21; // x22
  UnityEngine_GameObject_o *v22; // x0
  UnityEngine_GameObject_o *v23; // x22
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v25; // x24
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *v27; // x0
  UnityEngine_Transform_o *v28; // x23
  int v29; // s0
  UnityEngine_Transform_o *v32; // x23
  int v33; // s0
  UnityEngine_Transform_o *v37; // x23
  int v38; // s0
  struct QuestBoardListEffectBoardOpenComponent_o *Component_srcLineSprite; // x0
  struct QuestBoardListEffectBoardOpenComponent_o **p_effectDisappear2BbComponent; // x21
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  UnityEngine_Object_o *effectDisappear2BbComponent; // x19
  struct QuestBoardListEffectBoardOpenComponent_o *v50; // x0
  struct QuestBoardListEffectComponent_o *v51; // x0
  QuestBoardListEffectComponent_o **p_effectDisappear2Component; // x20
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  UnityEngine_Object_o *effectDisappear2Component; // x21
  UnityEngine_Object_o *effectDisappearComponent; // x21
  struct QuestBoardListEffectDisappearComponent_o *v61; // x8
  struct QuestBoardListEffectDisappearComponent_o *v62; // x8

  if ( (byte_40F9532 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectBoardOpenComponent___, *(_QWORD *)&warId);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectComponent___, v15);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v16);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v17);
    byte_40F9532 = 1;
  }
  QuestBoardObjForWarId = (UnityEngine_Component_o *)QuestBoardListViewManager__GetQuestBoardObjForWarId(
                                                       this,
                                                       warId,
                                                       (const MethodInfo *)isOnlyBoardOpen);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)QuestBoardObjForWarId, 0LL, 0LL) )
  {
    if ( isNTBoard )
    {
      ntBoardAppearEffectPrefab = (UnityEngine_Object_o *)this->fields.ntBoardAppearEffectPrefab;
      p_ntBoardAppearEffectPrefab = &this->fields.ntBoardAppearEffectPrefab;
    }
    else
    {
      ntBoardAppearEffectPrefab = (UnityEngine_Object_o *)this->fields.boardDisappear2EffectPrefab;
      p_ntBoardAppearEffectPrefab = &this->fields.boardDisappear2EffectPrefab;
    }
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality(ntBoardAppearEffectPrefab, 0LL, 0LL) )
    {
      v21 = (UnityEngine_UI_Dropdown_DropdownItem_o *)*p_ntBoardAppearEffectPrefab;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v22 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                          v21,
                                          (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( v22 )
      {
        v23 = v22;
        transform = UnityEngine_GameObject__get_transform(v22, 0LL);
        if ( QuestBoardObjForWarId )
        {
          v25 = transform;
          gameObject = UnityEngine_Component__get_gameObject(QuestBoardObjForWarId, 0LL);
          if ( gameObject )
          {
            v27 = UnityEngine_GameObject__get_transform(gameObject, 0LL);
            if ( v25 )
            {
              UnityEngine_Transform__set_parent(v25, v27, 0LL);
              v28 = UnityEngine_GameObject__get_transform(v23, 0LL);
              *(UnityEngine_Vector3_o *)&v29 = UnityEngine_Vector3__get_zero(0LL);
              if ( v28 )
              {
                UnityEngine_Transform__set_localPosition(v28, *(UnityEngine_Vector3_o *)&v29, 0LL);
                v32 = UnityEngine_GameObject__get_transform(v23, 0LL);
                *(UnityEngine_Quaternion_o *)&v33 = UnityEngine_Quaternion__get_identity(0LL);
                if ( v32 )
                {
                  UnityEngine_Transform__set_localRotation(v32, *(UnityEngine_Quaternion_o *)&v33, 0LL);
                  v37 = UnityEngine_GameObject__get_transform(v23, 0LL);
                  *(UnityEngine_Vector3_o *)&v38 = UnityEngine_Vector3__get_one(0LL);
                  if ( v37 )
                  {
                    UnityEngine_Transform__set_localScale(v37, *(UnityEngine_Vector3_o *)&v38, 0LL);
                    if ( isOnlyBoardOpen )
                    {
                      Component_srcLineSprite = (struct QuestBoardListEffectBoardOpenComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                                     v23,
                                                                                                     (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectBoardOpenComponent___);
                      p_effectDisappear2BbComponent = &this->fields.effectDisappear2BbComponent;
                      this->fields.effectDisappear2BbComponent = Component_srcLineSprite;
                      sub_B16F98(
                        (BattleServantConfConponent_o *)&this->fields.effectDisappear2BbComponent,
                        (System_Int32_array **)Component_srcLineSprite,
                        v43,
                        v44,
                        v45,
                        v46,
                        v47,
                        v48);
                      effectDisappear2BbComponent = (UnityEngine_Object_o *)this->fields.effectDisappear2BbComponent;
                      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      }
                      if ( UnityEngine_Object__op_Equality(effectDisappear2BbComponent, 0LL, 0LL) )
                        return;
                      v50 = *p_effectDisappear2BbComponent;
                      if ( isNTBoard )
                      {
                        if ( !v50 )
                          goto LABEL_49;
                        startTime = v50->fields.openStartTime;
                        endTime = v50->fields.openEndTime;
                        actStartTime = v50->fields.openActStartTime;
                      }
                      else if ( !v50 )
                      {
                        goto LABEL_49;
                      }
                      QuestBoardListEffectComponent__Init(
                        (QuestBoardListEffectComponent_o *)v50,
                        0,
                        startTime,
                        endTime,
                        0LL);
                      if ( *p_effectDisappear2BbComponent )
                      {
                        (*p_effectDisappear2BbComponent)->fields.playingActStartTime = actStartTime;
                        return;
                      }
                    }
                    else
                    {
                      v51 = (struct QuestBoardListEffectComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                        v23,
                                                                        (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectComponent___);
                      p_effectDisappear2Component = &this->fields.effectDisappear2Component;
                      this->fields.effectDisappear2Component = v51;
                      sub_B16F98(
                        (BattleServantConfConponent_o *)&this->fields.effectDisappear2Component,
                        (System_Int32_array **)v51,
                        v53,
                        v54,
                        v55,
                        v56,
                        v57,
                        v58);
                      effectDisappear2Component = (UnityEngine_Object_o *)this->fields.effectDisappear2Component;
                      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      }
                      if ( UnityEngine_Object__op_Equality(effectDisappear2Component, 0LL, 0LL) )
                        return;
                      effectDisappearComponent = (UnityEngine_Object_o *)this->fields.effectDisappearComponent;
                      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      }
                      if ( UnityEngine_Object__op_Inequality(effectDisappearComponent, 0LL, 0LL) )
                      {
                        v61 = this->fields.effectDisappearComponent;
                        if ( !v61 )
                          goto LABEL_49;
                        GameObjectExtensions__SetLocalPositionX(v23, v61->fields.disappearEffect2ShiftPosX, 0LL);
                        v62 = this->fields.effectDisappearComponent;
                        if ( !v62 )
                          goto LABEL_49;
                        GameObjectExtensions__SetLocalPositionY(v23, v62->fields.disappearEffect2ShiftPosY, 0LL);
                      }
                      if ( *p_effectDisappear2Component )
                      {
                        QuestBoardListEffectComponent__Init(*p_effectDisappear2Component, 0, 0.0, 0.0, 0LL);
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
LABEL_49:
      sub_B170D4();
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestBoardListViewManager__SetUpBoardDisppearFadeEffect(
        QuestBoardListViewManager_o *this,
        bool isPlayingAct,
        float actTime,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Object_o *boardDisappearEffectFadePrefab; // x21
  struct UnityEngine_GameObject_o *v10; // x21
  UnityEngine_GameObject_o *v11; // x0
  UnityEngine_GameObject_o *v12; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v14; // x22
  UnityEngine_Transform_o *v15; // x0
  UnityEngine_Transform_o *v16; // x22
  int v17; // s0
  UnityEngine_Transform_o *v20; // x22
  int v21; // s0
  UnityEngine_Transform_o *v25; // x22
  int v26; // s0
  struct QuestBoardListEffectComponent_o *Component_srcLineSprite; // x0
  QuestBoardListEffectComponent_o **p_effectDisappearFadeComponent; // x21
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7

  if ( (byte_40F9533 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectComponent___, isPlayingAct);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    byte_40F9533 = 1;
  }
  boardDisappearEffectFadePrefab = (UnityEngine_Object_o *)this->fields.boardDisappearEffectFadePrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(boardDisappearEffectFadePrefab, 0LL, 0LL) )
  {
    v10 = this->fields.boardDisappearEffectFadePrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v11 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        (UnityEngine_UI_Dropdown_DropdownItem_o *)v10,
                                        (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v11 )
      goto LABEL_22;
    v12 = v11;
    transform = UnityEngine_GameObject__get_transform(v11, 0LL);
    if ( !this->fields.fadePanel )
      goto LABEL_22;
    v14 = transform;
    v15 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.fadePanel, 0LL);
    if ( !v14 )
      goto LABEL_22;
    UnityEngine_Transform__set_parent(v14, v15, 0LL);
    v16 = UnityEngine_GameObject__get_transform(v12, 0LL);
    *(UnityEngine_Vector3_o *)&v17 = UnityEngine_Vector3__get_zero(0LL);
    if ( !v16 )
      goto LABEL_22;
    UnityEngine_Transform__set_localPosition(v16, *(UnityEngine_Vector3_o *)&v17, 0LL);
    v20 = UnityEngine_GameObject__get_transform(v12, 0LL);
    *(UnityEngine_Quaternion_o *)&v21 = UnityEngine_Quaternion__get_identity(0LL);
    if ( !v20 )
      goto LABEL_22;
    UnityEngine_Transform__set_localRotation(v20, *(UnityEngine_Quaternion_o *)&v21, 0LL);
    v25 = UnityEngine_GameObject__get_transform(v12, 0LL);
    *(UnityEngine_Vector3_o *)&v26 = UnityEngine_Vector3__get_one(0LL);
    if ( !v25 )
      goto LABEL_22;
    UnityEngine_Transform__set_localScale(v25, *(UnityEngine_Vector3_o *)&v26, 0LL);
    Component_srcLineSprite = (struct QuestBoardListEffectComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                          v12,
                                                                          (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectComponent___);
    p_effectDisappearFadeComponent = &this->fields.effectDisappearFadeComponent;
    this->fields.effectDisappearFadeComponent = Component_srcLineSprite;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.effectDisappearFadeComponent,
      (System_Int32_array **)Component_srcLineSprite,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36);
    if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)this->fields.effectDisappearFadeComponent, 0LL, 0LL) )
      return;
    if ( !*p_effectDisappearFadeComponent )
      goto LABEL_22;
    QuestBoardListEffectComponent__Init(*p_effectDisappearFadeComponent, 0, 0.0, 0.0, 0LL);
    if ( !isPlayingAct )
      return;
    if ( !*p_effectDisappearFadeComponent )
LABEL_22:
      sub_B170D4();
    (*p_effectDisappearFadeComponent)->fields.playingActStartTime = actTime;
  }
}


void __fastcall QuestBoardListViewManager__SetupBlackMark(QuestBoardListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  UnityEngine_Object_o *blackMarkPrefab; // x20
  WebViewManager_o *Instance; // x0
  DataMasterBase_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  WarQuestSelectionEntity_array *Entitys_WarQuestSelectionEntity; // x20
  QuestBoardListViewManager___c_c *v21; // x8
  struct QuestBoardListViewManager___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__137_0; // x21
  Il2CppObject *v24; // x22
  struct QuestBoardListViewManager___c_StaticFields *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  _BOOL4 v32; // w0
  int v33; // w20
  int32_t v34; // w0
  struct ScrTerminalListTop_o *mTerminalList; // x8
  AssetData_o *effectAssetData; // x0
  BattleServantConfConponent_o *p_blackMarkPrefab; // x19
  System_Int32_array **Object_WarBoardWaitTimeSetting; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7

  if ( (byte_40F9528 & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObject_GameObject____66802784, method);
    sub_B16FFC(&Method_BasicHelper_Any_WarEntity___, v3);
    sub_B16FFC(&Method_DataManager_GetMasterData_WarMaster___, v4);
    sub_B16FFC(&Method_DataMasterBase_getEntitys_WarEntity___, v5);
    sub_B16FFC(&Method_System_Func_WarEntity__bool___ctor__, v6);
    sub_B16FFC(&System_Func_WarEntity__bool__TypeInfo, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B16FFC(&Method_QuestBoardListViewManager___c__SetupBlackMark_b__137_0__, v10);
    sub_B16FFC(&QuestBoardListViewManager___c_TypeInfo, v11);
    sub_B16FFC(&StringLiteral_18093/*"ef_blackpoint"*/, v12);
    byte_40F9528 = 1;
  }
  blackMarkPrefab = (UnityEngine_Object_o *)this->fields.blackMarkPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(blackMarkPrefab, 0LL, 0LL) )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_23;
    MasterData_WarQuestSelectionMaster = (DataMasterBase_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)Instance,
                                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_WarMaster___);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_23;
    Entitys_WarQuestSelectionEntity = DataMasterBase__getEntitys_WarQuestSelectionEntity_(
                                        MasterData_WarQuestSelectionMaster,
                                        (const MethodInfo_18C3B58 *)Method_DataMasterBase_getEntitys_WarEntity___);
    v21 = QuestBoardListViewManager___c_TypeInfo;
    if ( (BYTE3(QuestBoardListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewManager___c_TypeInfo);
      v21 = QuestBoardListViewManager___c_TypeInfo;
    }
    static_fields = v21->static_fields;
    _9__137_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__137_0;
    if ( !_9__137_0 )
    {
      if ( (BYTE3(v21->vtable._0_Equals.methodPtr) & 4) != 0 && !v21->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v21);
        static_fields = QuestBoardListViewManager___c_TypeInfo->static_fields;
      }
      v24 = (Il2CppObject *)static_fields->__9;
      _9__137_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                       System_Func_WarEntity__bool__TypeInfo,
                                                                                       v16,
                                                                                       v17,
                                                                                       v18,
                                                                                       v19);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__137_0,
        v24,
        Method_QuestBoardListViewManager___c__SetupBlackMark_b__137_0__,
        (const MethodInfo_2B6AB40 *)Method_System_Func_WarEntity__bool___ctor__);
      v25 = QuestBoardListViewManager___c_TypeInfo->static_fields;
      v25->__9__137_0 = (struct System_Func_WarEntity__bool__o *)_9__137_0;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v25->__9__137_0,
        (System_Int32_array **)_9__137_0,
        v26,
        v27,
        v28,
        v29,
        v30,
        v31);
    }
    v32 = BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
            (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)Entitys_WarQuestSelectionEntity,
            (System_Func_T__bool__o *)_9__137_0,
            (const MethodInfo_18B6074 *)Method_BasicHelper_Any_WarEntity___);
    if ( !this->fields.mTerminalList
      || (v33 = v32,
          v34 = ScrTerminalListTop__CheckTerminalTopEffect(this->fields.mTerminalList, 0LL),
          (mTerminalList = this->fields.mTerminalList) == 0LL) )
    {
LABEL_23:
      sub_B170D4();
    }
    if ( ((v34 != mTerminalList->fields.TERMINAL_EFFECT_APPEAR_EFFECT_ID) & ~v33) == 0 )
    {
      effectAssetData = this->fields.effectAssetData;
      if ( effectAssetData )
      {
        p_blackMarkPrefab = (BattleServantConfConponent_o *)&this->fields.blackMarkPrefab;
        Object_WarBoardWaitTimeSetting = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                  effectAssetData,
                                                                  (System_String_o *)StringLiteral_18093/*"ef_blackpoint"*/,
                                                                  (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
        p_blackMarkPrefab->klass = (BattleServantConfConponent_c *)Object_WarBoardWaitTimeSetting;
        sub_B16F98(p_blackMarkPrefab, Object_WarBoardWaitTimeSetting, v39, v40, v41, v42, v43, v44);
      }
    }
  }
}


void __fastcall QuestBoardListViewManager__SetupBoardAppearAndDisappearEffect(
        QuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  ScrTerminalListTop_o *mTerminalList; // x0
  int32_t v17; // w0
  struct ScrTerminalListTop_o *v18; // x8
  UnityEngine_Object_o *boardAppearEffectPrefab; // x20
  AssetData_o *effectAssetData; // x0
  struct UnityEngine_GameObject_o *Object_WarBoardWaitTimeSetting; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  UnityEngine_Object_o *boardAppearEffectFadePrefab; // x20
  AssetData_o *v29; // x0
  struct UnityEngine_GameObject_o *v30; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  UnityEngine_Object_o *v37; // x20
  AssetData_o *v38; // x0
  __int64 *v39; // x8
  BattleServantConfConponent_o *p_boardDisappear2EffectPrefab; // x20
  UnityEngine_Object_o *v41; // x20
  AssetData_o *v42; // x0
  struct UnityEngine_GameObject_o *v43; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  UnityEngine_Object_o *v50; // x20
  AssetData_o *v51; // x0
  struct UnityEngine_GameObject_o *v52; // x0
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  UnityEngine_Object_o *ntBoardAppearEffectPrefab; // x20
  System_Int32_array **v60; // x0
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  UnityEngine_Object_o *boardDisappearEffectFadePrefab; // x20
  AssetData_o *v68; // x0
  __int64 *v69; // x8
  BattleServantConfConponent_o *p_nt2BoardAppearEffectFadePrefab; // x19
  System_Int32_array **v71; // x0
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  UnityEngine_Object_o *boardDisappearEffectPrefab; // x20
  AssetData_o *v79; // x0
  struct UnityEngine_GameObject_o *v80; // x0
  System_String_array **v81; // x2
  System_String_array **v82; // x3
  System_Boolean_array **v83; // x4
  System_Int32_array **v84; // x5
  System_Int32_array *v85; // x6
  System_Int32_array *v86; // x7
  UnityEngine_Object_o *boardDisappear2EffectPrefab; // x20
  AssetData_o *v88; // x0
  __int64 *v89; // x8
  UnityEngine_Object_o *v90; // x20
  AssetData_o *v91; // x0
  struct UnityEngine_GameObject_o *v92; // x0
  System_String_array **v93; // x2
  System_String_array **v94; // x3
  System_Boolean_array **v95; // x4
  System_Int32_array **v96; // x5
  System_Int32_array *v97; // x6
  System_Int32_array *v98; // x7
  UnityEngine_Object_o *v99; // x20
  struct UnityEngine_GameObject_o *v100; // x0
  System_String_array **v101; // x2
  System_String_array **v102; // x3
  System_Boolean_array **v103; // x4
  System_Int32_array **v104; // x5
  System_Int32_array *v105; // x6
  System_Int32_array *v106; // x7
  UnityEngine_Object_o *v107; // x20
  AssetData_o *v108; // x0
  struct UnityEngine_GameObject_o *v109; // x0
  System_String_array **v110; // x2
  System_String_array **v111; // x3
  System_Boolean_array **v112; // x4
  System_Int32_array **v113; // x5
  System_Int32_array *v114; // x6
  System_Int32_array *v115; // x7
  UnityEngine_Object_o *v116; // x20
  UnityEngine_Object_o *nt2BoardAppearEffectPrefab; // x20
  AssetData_o *v118; // x0
  struct UnityEngine_GameObject_o *v119; // x0
  System_String_array **v120; // x2
  System_String_array **v121; // x3
  System_Boolean_array **v122; // x4
  System_Int32_array **v123; // x5
  System_Int32_array *v124; // x6
  System_Int32_array *v125; // x7
  UnityEngine_Object_o *nt2BoardAppearEffectFadePrefab; // x20

  if ( (byte_40F952B & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObject_GameObject____66802784, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_16666/*"bit_board_appear2"*/, v4);
    sub_B16FFC(&StringLiteral_16672/*"bit_board_disappear5"*/, v5);
    sub_B16FFC(&StringLiteral_16699/*"bit_fade_black2"*/, v6);
    sub_B16FFC(&StringLiteral_16671/*"bit_board_disappear4"*/, v7);
    sub_B16FFC(&StringLiteral_16668/*"bit_board_disappear"*/, v8);
    sub_B16FFC(&StringLiteral_16698/*"bit_fade_black"*/, v9);
    sub_B16FFC(&StringLiteral_16665/*"bit_board_appear"*/, v10);
    sub_B16FFC(&StringLiteral_16701/*"bit_fade_black4"*/, v11);
    sub_B16FFC(&StringLiteral_16700/*"bit_fade_black3"*/, v12);
    sub_B16FFC(&StringLiteral_16667/*"bit_board_appear3"*/, v13);
    sub_B16FFC(&StringLiteral_16669/*"bit_board_disappear2"*/, v14);
    sub_B16FFC(&StringLiteral_16670/*"bit_board_disappear3"*/, v15);
    byte_40F952B = 1;
  }
  mTerminalList = this->fields.mTerminalList;
  if ( !mTerminalList )
    goto LABEL_115;
  v17 = ScrTerminalListTop__CheckTerminalTopEffect(mTerminalList, 0LL);
  v18 = this->fields.mTerminalList;
  if ( !v18 )
    goto LABEL_115;
  if ( v17 == v18->fields.TERMINAL_EFFECT_APPEAR_EFFECT_ID )
  {
    if ( !this->fields.effectAssetData )
      return;
    boardAppearEffectPrefab = (UnityEngine_Object_o *)this->fields.boardAppearEffectPrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality(boardAppearEffectPrefab, 0LL, 0LL) )
    {
      effectAssetData = this->fields.effectAssetData;
      if ( !effectAssetData )
        goto LABEL_115;
      Object_WarBoardWaitTimeSetting = (struct UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                            effectAssetData,
                                                                            (System_String_o *)StringLiteral_16665/*"bit_board_appear"*/,
                                                                            (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
      this->fields.boardAppearEffectPrefab = Object_WarBoardWaitTimeSetting;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.boardAppearEffectPrefab,
        (System_Int32_array **)Object_WarBoardWaitTimeSetting,
        v22,
        v23,
        v24,
        v25,
        v26,
        v27);
    }
    boardAppearEffectFadePrefab = (UnityEngine_Object_o *)this->fields.boardAppearEffectFadePrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality(boardAppearEffectFadePrefab, 0LL, 0LL) )
    {
      v29 = this->fields.effectAssetData;
      if ( !v29 )
        goto LABEL_115;
      v30 = (struct UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                 v29,
                                                 (System_String_o *)StringLiteral_16698/*"bit_fade_black"*/,
                                                 (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
      this->fields.boardAppearEffectFadePrefab = v30;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.boardAppearEffectFadePrefab,
        (System_Int32_array **)v30,
        v31,
        v32,
        v33,
        v34,
        v35,
        v36);
    }
    goto LABEL_19;
  }
  if ( v17 == v18->fields.TERMINAL_WHITE_MARK_EFFECT_APPEAR_EFFECT_ID )
  {
    if ( !this->fields.effectAssetData )
      return;
    v41 = (UnityEngine_Object_o *)this->fields.boardAppearEffectPrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality(v41, 0LL, 0LL) )
    {
      v42 = this->fields.effectAssetData;
      if ( !v42 )
        goto LABEL_115;
      v43 = (struct UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                 v42,
                                                 (System_String_o *)StringLiteral_16666/*"bit_board_appear2"*/,
                                                 (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
      this->fields.boardAppearEffectPrefab = v43;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.boardAppearEffectPrefab,
        (System_Int32_array **)v43,
        v44,
        v45,
        v46,
        v47,
        v48,
        v49);
    }
    v50 = (UnityEngine_Object_o *)this->fields.boardAppearEffectFadePrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality(v50, 0LL, 0LL) )
    {
      v51 = this->fields.effectAssetData;
      if ( !v51 )
        goto LABEL_115;
      v52 = (struct UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                 v51,
                                                 (System_String_o *)StringLiteral_16700/*"bit_fade_black3"*/,
                                                 (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
      this->fields.boardAppearEffectFadePrefab = v52;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.boardAppearEffectFadePrefab,
        (System_Int32_array **)v52,
        v53,
        v54,
        v55,
        v56,
        v57,
        v58);
    }
    goto LABEL_39;
  }
  if ( v17 == v18->fields.TERMINAL_EFFECT_BOARD_DISAPPEAR_EFFECT_ID )
  {
    if ( !this->fields.effectAssetData )
      return;
    boardDisappearEffectPrefab = (UnityEngine_Object_o *)this->fields.boardDisappearEffectPrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality(boardDisappearEffectPrefab, 0LL, 0LL) )
    {
      v79 = this->fields.effectAssetData;
      if ( !v79 )
        goto LABEL_115;
      v80 = (struct UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                 v79,
                                                 (System_String_o *)StringLiteral_16668/*"bit_board_disappear"*/,
                                                 (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
      this->fields.boardDisappearEffectPrefab = v80;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.boardDisappearEffectPrefab,
        (System_Int32_array **)v80,
        v81,
        v82,
        v83,
        v84,
        v85,
        v86);
    }
    boardDisappear2EffectPrefab = (UnityEngine_Object_o *)this->fields.boardDisappear2EffectPrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality(boardDisappear2EffectPrefab, 0LL, 0LL) )
      goto LABEL_82;
    v88 = this->fields.effectAssetData;
    if ( !v88 )
      goto LABEL_115;
    v89 = &StringLiteral_16669/*"bit_board_disappear2"*/;
    goto LABEL_81;
  }
  if ( v17 != v18->fields.TERMINAL_WHITE_MARK_EFFECT_BOARD_DISAPPEAR_EFFECT_ID )
  {
    if ( v17 == v18->fields.TERMINAL_EFFECT_BB_BOARD_EFFECT_ID )
    {
      if ( !this->fields.effectAssetData )
        return;
LABEL_19:
      v37 = (UnityEngine_Object_o *)this->fields.boardDisappear2EffectPrefab;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Equality(v37, 0LL, 0LL) )
      {
        v38 = this->fields.effectAssetData;
        if ( !v38 )
          goto LABEL_115;
        v39 = &StringLiteral_16669/*"bit_board_disappear2"*/;
        p_boardDisappear2EffectPrefab = (BattleServantConfConponent_o *)&this->fields.boardDisappear2EffectPrefab;
LABEL_45:
        v60 = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                       v38,
                                       (System_String_o *)*v39,
                                       (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
        p_boardDisappear2EffectPrefab->klass = (BattleServantConfConponent_c *)v60;
        sub_B16F98(p_boardDisappear2EffectPrefab, v60, v61, v62, v63, v64, v65, v66);
        goto LABEL_46;
      }
      goto LABEL_46;
    }
    if ( v17 != v18->fields.TERMINAL_EFFECT_NT_BOARD_EFFECT_ID )
    {
      if ( v17 == v18->fields.TERMINAL_EFFECT_NT2_BOARD_COMPLETE_EFFECT_ID && this->fields.effectAssetData )
      {
        nt2BoardAppearEffectPrefab = (UnityEngine_Object_o *)this->fields.nt2BoardAppearEffectPrefab;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Equality(nt2BoardAppearEffectPrefab, 0LL, 0LL) )
        {
          v118 = this->fields.effectAssetData;
          if ( !v118 )
            goto LABEL_115;
          v119 = (struct UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                      v118,
                                                      (System_String_o *)StringLiteral_16667/*"bit_board_appear3"*/,
                                                      (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
          this->fields.nt2BoardAppearEffectPrefab = v119;
          sub_B16F98(
            (BattleServantConfConponent_o *)&this->fields.nt2BoardAppearEffectPrefab,
            (System_Int32_array **)v119,
            v120,
            v121,
            v122,
            v123,
            v124,
            v125);
        }
        nt2BoardAppearEffectFadePrefab = (UnityEngine_Object_o *)this->fields.nt2BoardAppearEffectFadePrefab;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Equality(nt2BoardAppearEffectFadePrefab, 0LL, 0LL) )
        {
          v68 = this->fields.effectAssetData;
          if ( v68 )
          {
            v69 = &StringLiteral_16701/*"bit_fade_black4"*/;
            p_nt2BoardAppearEffectFadePrefab = (BattleServantConfConponent_o *)&this->fields.nt2BoardAppearEffectFadePrefab;
            goto LABEL_52;
          }
          goto LABEL_115;
        }
      }
      return;
    }
    if ( !this->fields.effectAssetData )
      return;
LABEL_39:
    ntBoardAppearEffectPrefab = (UnityEngine_Object_o *)this->fields.ntBoardAppearEffectPrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality(ntBoardAppearEffectPrefab, 0LL, 0LL) )
    {
      v38 = this->fields.effectAssetData;
      if ( !v38 )
        goto LABEL_115;
      v39 = &StringLiteral_16672/*"bit_board_disappear5"*/;
      p_boardDisappear2EffectPrefab = (BattleServantConfConponent_o *)&this->fields.ntBoardAppearEffectPrefab;
      goto LABEL_45;
    }
LABEL_46:
    boardDisappearEffectFadePrefab = (UnityEngine_Object_o *)this->fields.boardDisappearEffectFadePrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality(boardDisappearEffectFadePrefab, 0LL, 0LL) )
    {
      v68 = this->fields.effectAssetData;
      if ( v68 )
      {
        v69 = &StringLiteral_16699/*"bit_fade_black2"*/;
        p_nt2BoardAppearEffectFadePrefab = (BattleServantConfConponent_o *)&this->fields.boardDisappearEffectFadePrefab;
LABEL_52:
        v71 = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                       v68,
                                       (System_String_o *)*v69,
                                       (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
        p_nt2BoardAppearEffectFadePrefab->klass = (BattleServantConfConponent_c *)v71;
        sub_B16F98(p_nt2BoardAppearEffectFadePrefab, v71, v72, v73, v74, v75, v76, v77);
        return;
      }
      goto LABEL_115;
    }
    return;
  }
  if ( !this->fields.effectAssetData )
    return;
  v90 = (UnityEngine_Object_o *)this->fields.boardDisappearEffectPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(v90, 0LL, 0LL) )
  {
    v91 = this->fields.effectAssetData;
    if ( !v91 )
      goto LABEL_115;
    v92 = (struct UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                               v91,
                                               (System_String_o *)StringLiteral_16670/*"bit_board_disappear3"*/,
                                               (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
    this->fields.boardDisappearEffectPrefab = v92;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.boardDisappearEffectPrefab,
      (System_Int32_array **)v92,
      v93,
      v94,
      v95,
      v96,
      v97,
      v98);
  }
  v99 = (UnityEngine_Object_o *)this->fields.boardDisappear2EffectPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(v99, 0LL, 0LL) )
  {
    v88 = this->fields.effectAssetData;
    if ( !v88 )
      goto LABEL_115;
    v89 = &StringLiteral_16671/*"bit_board_disappear4"*/;
LABEL_81:
    v100 = (struct UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                v88,
                                                (System_String_o *)*v89,
                                                (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
    this->fields.boardDisappear2EffectPrefab = v100;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.boardDisappear2EffectPrefab,
      (System_Int32_array **)v100,
      v101,
      v102,
      v103,
      v104,
      v105,
      v106);
  }
LABEL_82:
  v107 = (UnityEngine_Object_o *)this->fields.boardDisappearEffectFadePrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(v107, 0LL, 0LL) )
  {
    v108 = this->fields.effectAssetData;
    if ( !v108 )
      goto LABEL_115;
    v109 = (struct UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                v108,
                                                (System_String_o *)StringLiteral_16699/*"bit_fade_black2"*/,
                                                (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
    this->fields.boardDisappearEffectFadePrefab = v109;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.boardDisappearEffectFadePrefab,
      (System_Int32_array **)v109,
      v110,
      v111,
      v112,
      v113,
      v114,
      v115);
  }
  v116 = (UnityEngine_Object_o *)this->fields.ntBoardAppearEffectPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(v116, 0LL, 0LL) )
  {
    v68 = this->fields.effectAssetData;
    if ( v68 )
    {
      v69 = &StringLiteral_16672/*"bit_board_disappear5"*/;
      p_nt2BoardAppearEffectFadePrefab = (BattleServantConfConponent_o *)&this->fields.ntBoardAppearEffectPrefab;
      goto LABEL_52;
    }
LABEL_115:
    sub_B170D4();
  }
}


void __fastcall QuestBoardListViewManager__SetupDisp(QuestBoardListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_QuestBoardListViewObject__o *ObjectList; // x0
  const MethodInfo *v5; // x1
  int size; // w8
  System_Collections_Generic_List_QuestBoardListViewObject__o *v7; // x19
  unsigned int v8; // w20
  QuestBoardListViewObject_o *v9; // x0

  if ( (byte_40F9514 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestBoardListViewObject__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestBoardListViewObject__get_Item__, v3);
    byte_40F9514 = 1;
  }
  ObjectList = QuestBoardListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    goto LABEL_11;
  size = ObjectList->fields._size;
  v7 = ObjectList;
  if ( size >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( size <= v8 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v9 = v7->fields._items->m_Items[v8];
      if ( !v9 )
        break;
      QuestBoardListViewObject__SetupDisp(v9, v5);
      size = v7->fields._size;
      if ( (int)++v8 >= size )
        return;
    }
LABEL_11:
    sub_B170D4();
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestBoardListViewManager__SetupFortificationWarningDialog(
        QuestBoardListViewManager_o *this,
        int32_t eventId,
        System_Action_o *func,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x21
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_String_o *v24; // x0
  System_String_o *v25; // x20
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  AssetLoader_LoadEndDataHandler_o *v30; // x22
  int32_t v31; // [xsp+Ch] [xbp-24h] BYREF

  v31 = eventId;
  if ( (byte_40F952A & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, *(_QWORD *)&eventId);
    sub_B16FFC(&AssetLoader_LoadEndDataHandler_TypeInfo, v7);
    sub_B16FFC(&Method_QuestBoardListViewManager___c__DisplayClass139_0__SetupFortificationWarningDialog_b__0__, v8);
    sub_B16FFC(&QuestBoardListViewManager___c__DisplayClass139_0_TypeInfo, v9);
    sub_B16FFC(&StringLiteral_6184/*"EventUI/Prefabs/"*/, v10);
    byte_40F952A = 1;
  }
  v11 = sub_B170CC(QuestBoardListViewManager___c__DisplayClass139_0_TypeInfo, *(_QWORD *)&eventId, func, method, v4);
  QuestBoardListViewManager___c__DisplayClass139_0___ctor(
    (QuestBoardListViewManager___c__DisplayClass139_0_o *)v11,
    0LL);
  if ( !v11 )
    sub_B170D4();
  *(_QWORD *)(v11 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v11 + 16), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v11 + 24) = func;
  sub_B16F98((BattleServantConfConponent_o *)(v11 + 24), (System_Int32_array **)func, v18, v19, v20, v21, v22, v23);
  v24 = System_Int32__ToString((int32_t)&v31, 0LL);
  v25 = System_String__Concat_43743732((System_String_o *)StringLiteral_6184/*"EventUI/Prefabs/"*/, v24, 0LL);
  v30 = (AssetLoader_LoadEndDataHandler_o *)sub_B170CC(AssetLoader_LoadEndDataHandler_TypeInfo, v26, v27, v28, v29);
  AssetLoader_LoadEndDataHandler___ctor(
    v30,
    (Il2CppObject *)v11,
    Method_QuestBoardListViewManager___c__DisplayClass139_0__SetupFortificationWarningDialog_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(v25, v30, 1, 0LL) )
    ActionExtensions__Call(*(System_Action_o **)(v11 + 24), 0LL);
}


void __fastcall QuestBoardListViewManager__SetupWhiteMark(QuestBoardListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  UnityEngine_Object_o *whiteMarkPrefab; // x20
  WebViewManager_o *Instance; // x0
  DataMasterBase_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  WarQuestSelectionEntity_array *Entitys_WarQuestSelectionEntity; // x20
  QuestBoardListViewManager___c_c *v21; // x8
  struct QuestBoardListViewManager___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__138_0; // x21
  Il2CppObject *v24; // x22
  struct QuestBoardListViewManager___c_StaticFields *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  _BOOL4 v32; // w0
  int v33; // w20
  int32_t v34; // w0
  struct ScrTerminalListTop_o *mTerminalList; // x8
  AssetData_o *effectAssetData; // x0
  BattleServantConfConponent_o *p_whiteMarkPrefab; // x19
  System_Int32_array **Object_WarBoardWaitTimeSetting; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7

  if ( (byte_40F9529 & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObject_GameObject____66802784, method);
    sub_B16FFC(&Method_BasicHelper_Any_WarEntity___, v3);
    sub_B16FFC(&Method_DataManager_GetMasterData_WarMaster___, v4);
    sub_B16FFC(&Method_DataMasterBase_getEntitys_WarEntity___, v5);
    sub_B16FFC(&Method_System_Func_WarEntity__bool___ctor__, v6);
    sub_B16FFC(&System_Func_WarEntity__bool__TypeInfo, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B16FFC(&Method_QuestBoardListViewManager___c__SetupWhiteMark_b__138_0__, v10);
    sub_B16FFC(&QuestBoardListViewManager___c_TypeInfo, v11);
    sub_B16FFC(&StringLiteral_18152/*"ef_whitepoint"*/, v12);
    byte_40F9529 = 1;
  }
  whiteMarkPrefab = (UnityEngine_Object_o *)this->fields.whiteMarkPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(whiteMarkPrefab, 0LL, 0LL) )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_23;
    MasterData_WarQuestSelectionMaster = (DataMasterBase_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)Instance,
                                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_WarMaster___);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_23;
    Entitys_WarQuestSelectionEntity = DataMasterBase__getEntitys_WarQuestSelectionEntity_(
                                        MasterData_WarQuestSelectionMaster,
                                        (const MethodInfo_18C3B58 *)Method_DataMasterBase_getEntitys_WarEntity___);
    v21 = QuestBoardListViewManager___c_TypeInfo;
    if ( (BYTE3(QuestBoardListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewManager___c_TypeInfo);
      v21 = QuestBoardListViewManager___c_TypeInfo;
    }
    static_fields = v21->static_fields;
    _9__138_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__138_0;
    if ( !_9__138_0 )
    {
      if ( (BYTE3(v21->vtable._0_Equals.methodPtr) & 4) != 0 && !v21->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v21);
        static_fields = QuestBoardListViewManager___c_TypeInfo->static_fields;
      }
      v24 = (Il2CppObject *)static_fields->__9;
      _9__138_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                       System_Func_WarEntity__bool__TypeInfo,
                                                                                       v16,
                                                                                       v17,
                                                                                       v18,
                                                                                       v19);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__138_0,
        v24,
        Method_QuestBoardListViewManager___c__SetupWhiteMark_b__138_0__,
        (const MethodInfo_2B6AB40 *)Method_System_Func_WarEntity__bool___ctor__);
      v25 = QuestBoardListViewManager___c_TypeInfo->static_fields;
      v25->__9__138_0 = (struct System_Func_WarEntity__bool__o *)_9__138_0;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v25->__9__138_0,
        (System_Int32_array **)_9__138_0,
        v26,
        v27,
        v28,
        v29,
        v30,
        v31);
    }
    v32 = BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
            (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)Entitys_WarQuestSelectionEntity,
            (System_Func_T__bool__o *)_9__138_0,
            (const MethodInfo_18B6074 *)Method_BasicHelper_Any_WarEntity___);
    if ( !this->fields.mTerminalList
      || (v33 = v32,
          v34 = ScrTerminalListTop__CheckTerminalTopEffect(this->fields.mTerminalList, 0LL),
          (mTerminalList = this->fields.mTerminalList) == 0LL) )
    {
LABEL_23:
      sub_B170D4();
    }
    if ( ((v34 != mTerminalList->fields.TERMINAL_WHITE_MARK_EFFECT_APPEAR_EFFECT_ID) & ~v33) == 0 )
    {
      effectAssetData = this->fields.effectAssetData;
      if ( effectAssetData )
      {
        p_whiteMarkPrefab = (BattleServantConfConponent_o *)&this->fields.whiteMarkPrefab;
        Object_WarBoardWaitTimeSetting = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                  effectAssetData,
                                                                  (System_String_o *)StringLiteral_18152/*"ef_whitepoint"*/,
                                                                  (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
        p_whiteMarkPrefab->klass = (BattleServantConfConponent_c *)Object_WarBoardWaitTimeSetting;
        sub_B16F98(p_whiteMarkPrefab, Object_WarBoardWaitTimeSetting, v39, v40, v41, v42, v43, v44);
      }
    }
  }
}


void __fastcall QuestBoardListViewManager__SkipDisapprarFadeEffect(
        QuestBoardListViewManager_o *this,
        float skipTime,
        const MethodInfo *method)
{
  UnityEngine_Object_o *effectDisappearFadeComponent; // x20
  QuestBoardListEffectComponent_o *v6; // x0

  if ( (byte_40F9536 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F9536 = 1;
  }
  effectDisappearFadeComponent = (UnityEngine_Object_o *)this->fields.effectDisappearFadeComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(effectDisappearFadeComponent, 0LL, 0LL) )
  {
    v6 = this->fields.effectDisappearFadeComponent;
    if ( !v6 )
      sub_B170D4();
    QuestBoardListEffectComponent__Skip(v6, skipTime, 0LL);
  }
}


bool __fastcall QuestBoardListViewManager__TryGetFlagFromOnEventStart(
        QuestBoardListViewManager_o *this,
        int32_t *flagType,
        EventEntity_o *eventEntity,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_EventTutorialEntity__o *EventTutorialEntity; // x0
  EventTutorialEntity_o *v9; // x8
  bool result; // w0

  if ( (byte_40F951E & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__, flagType);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__, v6);
    sub_B16FFC(&StringLiteral_1/*""*/, v7);
    byte_40F951E = 1;
  }
  *flagType = -1;
  if ( eventEntity )
  {
    EventTutorialEntity = EventTutorialMaster__GetEventTutorialEntity(
                            eventEntity->fields.id,
                            79,
                            (System_String_o *)StringLiteral_1/*""*/,
                            0LL);
    if ( !EventTutorialEntity )
      goto LABEL_9;
    if ( EventTutorialEntity->fields._size )
    {
      v9 = EventTutorialEntity->fields._items->m_Items[0];
      if ( v9 )
      {
        result = 1;
        *flagType = v9->fields.flagType;
        return result;
      }
LABEL_9:
      sub_B170D4();
    }
  }
  return 0;
}


void __fastcall QuestBoardListViewManager__Update(QuestBoardListViewManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  ListViewManager__Update((ListViewManager_o *)this, 0LL);
  QuestBoardListViewManager__UpdateAlphaAnim(this, v3);
}


void __fastcall QuestBoardListViewManager__UpdateAlphaAnim(QuestBoardListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  TransitionCalculator_float__o *rewardIconAlphaCalculator; // x0
  float v5; // s0
  AlphaTransitionCalculator_o *v6; // x0
  float realtimeSinceStartup; // s0
  float mAlphaAnimTimeOld; // s9
  float v9; // s8
  QuestBoardListViewManager_c *v10; // x0
  AlphaTransitionCalculator_o *v11; // x0
  AlphaTransitionCalculator_o *v12; // x0
  AlphaTransitionCalculator_o *v13; // x0
  const MethodInfo *v14; // x1
  float v15; // s0
  int32_t mAlphaAnimCnt; // w8
  int32_t v17; // w21
  QuestBoardListViewManager_c *v18; // x0
  int32_t ALPHA_ANIM_COUNT_RESET_VAL; // w8
  int32_t v20; // w21

  if ( (byte_40F951C & 1) == 0 )
  {
    sub_B16FFC(&QuestBoardListViewManager_TypeInfo, method);
    sub_B16FFC(&Method_TransitionCalculator_float__Update__, v3);
    byte_40F951C = 1;
  }
  rewardIconAlphaCalculator = (TransitionCalculator_float__o *)this->fields.rewardIconAlphaCalculator;
  if ( rewardIconAlphaCalculator )
  {
    v5 = TransitionCalculator_float___Update(
           rewardIconAlphaCalculator,
           (const MethodInfo_2532FA0 *)Method_TransitionCalculator_float__Update__);
    v6 = this->fields.rewardIconAlphaCalculator;
    this->fields.mAlphaAnimNow = v5;
    if ( !v6 )
      goto LABEL_25;
    if ( AlphaTransitionCalculator__IsFadeInFinished(v6, 0LL) )
    {
      realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0LL);
      mAlphaAnimTimeOld = this->fields.mAlphaAnimTimeOld;
      v9 = realtimeSinceStartup;
      v10 = QuestBoardListViewManager_TypeInfo;
      if ( (BYTE3(QuestBoardListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestBoardListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewManager_TypeInfo);
        v10 = QuestBoardListViewManager_TypeInfo;
      }
      if ( (float)(v9 - mAlphaAnimTimeOld) >= v10->static_fields->ALPHA_ANIM_TIME_INTERVAL )
      {
        v11 = this->fields.rewardIconAlphaCalculator;
        if ( v11 )
        {
          AlphaTransitionCalculator__StartFadeOut(v11, 0LL);
          return;
        }
LABEL_25:
        sub_B170D4();
      }
    }
    else
    {
      v12 = this->fields.rewardIconAlphaCalculator;
      if ( !v12 )
        goto LABEL_25;
      if ( AlphaTransitionCalculator__IsFadeOutFinished(v12, 0LL) )
      {
        v13 = this->fields.rewardIconAlphaCalculator;
        if ( !v13 )
          goto LABEL_25;
        AlphaTransitionCalculator__StartFadeIn(v13, 0LL);
        v15 = UnityEngine_Time__get_realtimeSinceStartup(0LL);
        mAlphaAnimCnt = this->fields.mAlphaAnimCnt;
        this->fields.mAlphaAnimTimeOld = v15;
        v17 = mAlphaAnimCnt + 1;
        this->fields.mAlphaAnimCnt = mAlphaAnimCnt + 1;
        v18 = QuestBoardListViewManager_TypeInfo;
        if ( (BYTE3(QuestBoardListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !QuestBoardListViewManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewManager_TypeInfo);
          v18 = QuestBoardListViewManager_TypeInfo;
        }
        ALPHA_ANIM_COUNT_RESET_VAL = v18->static_fields->ALPHA_ANIM_COUNT_RESET_VAL;
        if ( v17 >= ALPHA_ANIM_COUNT_RESET_VAL )
        {
          v20 = this->fields.mAlphaAnimCnt;
          if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v18);
            ALPHA_ANIM_COUNT_RESET_VAL = QuestBoardListViewManager_TypeInfo->static_fields->ALPHA_ANIM_COUNT_RESET_VAL;
          }
          this->fields.mAlphaAnimCnt = v20 - ALPHA_ANIM_COUNT_RESET_VAL;
        }
        QuestBoardListViewManager__OnChangeAlphaAnim(this, v14);
      }
    }
  }
}


System_Collections_IEnumerator_o *__fastcall QuestBoardListViewManager__WaitFinish(
        QuestBoardListViewManager_o *this,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x21
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_40F950F & 1) == 0 )
  {
    sub_B16FFC(&QuestBoardListViewManager__WaitFinish_d__95_TypeInfo, endAct);
    byte_40F950F = 1;
  }
  v7 = sub_B170CC(QuestBoardListViewManager__WaitFinish_d__95_TypeInfo, endAct, method, v3, v4);
  QuestBoardListViewManager__WaitFinish_d__95___ctor((QuestBoardListViewManager__WaitFinish_d__95_o *)v7, 0, 0LL);
  if ( !v7 )
    sub_B170D4();
  *(_QWORD *)(v7 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v7 + 40) = endAct;
  sub_B16F98((BattleServantConfConponent_o *)(v7 + 40), (System_Int32_array **)endAct, v14, v15, v16, v17, v18, v19);
  return (System_Collections_IEnumerator_o *)v7;
}


void __fastcall QuestBoardListViewManager___BGChangeEffect_b__131_0(
        QuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  struct ExUITexture_o *mFolderBg; // x0
  UnityEngine_Component_o *v4; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v6; // x0
  UnityEngine_GameObject_o *v7; // x0
  TweenAlpha_o *v8; // x0

  mFolderBg = this->fields.mFolderBg;
  if ( !mFolderBg
    || (((void (__fastcall *)(struct ExUITexture_o *, Il2CppMethodPointer, float))mFolderBg->klass->vtable._8_set_alpha.method)(
          mFolderBg,
          mFolderBg->klass->vtable._9_CalculateFinalAlpha.methodPtr,
          0.0),
        (v4 = (UnityEngine_Component_o *)this->fields.mFolderBg) == 0LL)
    || (gameObject = UnityEngine_Component__get_gameObject(v4, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        (v6 = (UnityEngine_Component_o *)this->fields.mFolderBg) == 0LL)
    || (v7 = UnityEngine_Component__get_gameObject(v6, 0LL),
        (v8 = TweenAlpha__Begin(v7, this->fields.mCrossFadeTime, 1.0, 0LL)) == 0LL) )
  {
    sub_B170D4();
  }
  v8->fields.style = 1;
}


void __fastcall QuestBoardListViewManager___BGChangeEffect_b__131_1(
        QuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  struct ExUITexture_o *mFolderBgTemp; // x0
  UnityEngine_Component_o *v4; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  TweenAlpha_o *v6; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_Int32_array **v13; // x1

  if ( (byte_40F9540 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_11368/*"RemoveTempBG"*/, method);
    byte_40F9540 = 1;
  }
  mFolderBgTemp = this->fields.mFolderBgTemp;
  if ( !mFolderBgTemp
    || (((void (__fastcall *)(struct ExUITexture_o *, Il2CppMethodPointer, float))mFolderBgTemp->klass->vtable._8_set_alpha.method)(
          mFolderBgTemp,
          mFolderBgTemp->klass->vtable._9_CalculateFinalAlpha.methodPtr,
          1.0),
        (v4 = (UnityEngine_Component_o *)this->fields.mFolderBgTemp) == 0LL)
    || (gameObject = UnityEngine_Component__get_gameObject(v4, 0LL),
        (v6 = TweenAlpha__Begin(gameObject, this->fields.mCrossFadeTime, 0.0, 0LL)) == 0LL) )
  {
    sub_B170D4();
  }
  v6->fields.style = 0;
  v13 = (System_Int32_array **)StringLiteral_11368/*"RemoveTempBG"*/;
  v6->fields.callWhenFinished = (struct System_String_o *)StringLiteral_11368/*"RemoveTempBG"*/;
  sub_B16F98((BattleServantConfConponent_o *)&v6->fields.callWhenFinished, v13, v7, v8, v9, v10, v11, v12);
}


void __fastcall QuestBoardListViewManager__bgAlphaFade(
        QuestBoardListViewManager_o *this,
        int32_t inOut,
        float time,
        const MethodInfo *method)
{
  UnityEngine_Component_o *mFolderBg; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v9; // x0
  UnityEngine_GameObject_o *v10; // x0
  TweenAlpha_o *v11; // x0
  int v12; // w8
  UnityEngine_Component_o *v13; // x0
  UnityEngine_GameObject_o *v14; // x0

  mFolderBg = (UnityEngine_Component_o *)this->fields.mFolderBg;
  if ( !mFolderBg || (gameObject = UnityEngine_Component__get_gameObject(mFolderBg, 0LL)) == 0LL )
LABEL_13:
    sub_B170D4();
  if ( UnityEngine_GameObject__get_activeSelf(gameObject, 0LL) )
  {
    switch ( inOut )
    {
      case 3:
      case 5:
        v9 = (UnityEngine_Component_o *)this->fields.mFolderBg;
        if ( !v9 )
          goto LABEL_13;
        v10 = UnityEngine_Component__get_gameObject(v9, 0LL);
        v11 = TweenAlpha__Begin(v10, time, 1.0, 0LL);
        if ( !v11 )
          goto LABEL_13;
        v12 = 1;
        break;
      case 4:
      case 6:
        v13 = (UnityEngine_Component_o *)this->fields.mFolderBg;
        if ( !v13 )
          goto LABEL_13;
        v14 = UnityEngine_Component__get_gameObject(v13, 0LL);
        v11 = TweenAlpha__Begin(v14, time, 0.0, 0LL);
        if ( !v11 )
          goto LABEL_13;
        v12 = 2;
        break;
      default:
        return;
    }
    v11->fields.style = v12;
  }
}


void __fastcall QuestBoardListViewManager__changeBG(
        QuestBoardListViewManager_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Component_o *mFolderBg; // x0
  int32_t mRequestedBGid; // w21
  UnityEngine_GameObject_o *gameObject; // x0
  ExUITexture_o *v10; // x21
  Il2CppObject *v11; // x0
  System_String_o *v12; // x0
  ExUITexture_o *v13; // x20
  System_String_o *v14; // x21
  const MethodInfo *v15; // x1
  int32_t v16; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40F9523 & 1) == 0 )
  {
    sub_B16FFC(&FSUtility_TypeInfo, callback);
    sub_B16FFC(&int_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_2643/*"Back/back{0}"*/, v6);
    byte_40F9523 = 1;
  }
  mFolderBg = (UnityEngine_Component_o *)this->fields.mFolderBg;
  if ( !mFolderBg )
    goto LABEL_15;
  mRequestedBGid = this->fields.mRequestedBGid;
  gameObject = UnityEngine_Component__get_gameObject(mFolderBg, 0LL);
  if ( !gameObject )
    goto LABEL_15;
  if ( mRequestedBGid < 1 )
  {
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
    ActionExtensions__Call(callback, 0LL);
    goto LABEL_12;
  }
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  v10 = this->fields.mFolderBg;
  v16 = this->fields.mRequestedBGid;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16);
  v12 = System_String__Format((System_String_o *)StringLiteral_2643/*"Back/back{0}"*/, v11, 0LL);
  if ( !v10 )
LABEL_15:
    sub_B170D4();
  ExUITexture__SetAssetImage(v10, v12, callback, 0LL);
  v13 = this->fields.mFolderBg;
  v14 = System_Int32__ToString((int)this + 560, 0LL);
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  FSUtility__SetUpBackTextureSize(v13, v14, 0LL);
LABEL_12:
  if ( this->fields.mFaded )
    QuestBoardListViewManager__RemoveTempBG(this, v15);
}


float __fastcall QuestBoardListViewManager__get_AlphaAnimNow(
        QuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.mAlphaAnimNow;
}


System_String_o *__fastcall QuestBoardListViewManager__get_FolderBgTextureName(
        QuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  ExUITexture_o *mFolderBg; // x0

  mFolderBg = this->fields.mFolderBg;
  if ( !mFolderBg )
    sub_B170D4();
  return ExUITexture__get_TextureName(mFolderBg, 0LL);
}


int64_t __fastcall QuestBoardListViewManager__get_ListCreatedTime(
        QuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.mListCreatedTime;
}


float __fastcall QuestBoardListViewManager__get_OUT_POS_OFS_X(const MethodInfo *method)
{
  int32_t width; // w19
  float v2; // s0

  width = UnityEngine_Screen__get_width(0LL);
  v2 = (float)width / (float)UnityEngine_Screen__get_height(0LL);
  if ( v2 >= 1.7778 )
    return (float)((float)(v2 * 576.0) + -1024.0) + 532.0;
  else
    return 532.0;
}


System_Collections_Generic_List_QuestBoardListViewObject__o *__fastcall QuestBoardListViewManager__get_ObjectList(
        QuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x1
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_40F950B & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_QuestBoardListViewObject___, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestBoardListViewObject__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestBoardListViewObject___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_QuestBoardListViewObject__TypeInfo, v12);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v13);
    byte_40F950B = 1;
  }
  memset(&v20, 0, sizeof(v20));
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_QuestBoardListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_QuestBoardListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v20 = v19;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v20,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v20.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
    {
      if ( !current )
        sub_B170D4();
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_QuestBoardListViewObject___);
      if ( !v14 )
        sub_B170D4();
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v14,
        Component_srcLineSprite,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_QuestBoardListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_QuestBoardListViewObject__o *)v14;
}


float __fastcall QuestBoardListViewManager__get_SyncReferenceTime(
        QuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields._SyncReferenceTime_k__BackingField;
}


bool __fastcall QuestBoardListViewManager__isBgActive(QuestBoardListViewManager_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *mFolderBg; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  mFolderBg = (UnityEngine_Component_o *)this->fields.mFolderBg;
  if ( !mFolderBg || (gameObject = UnityEngine_Component__get_gameObject(mFolderBg, 0LL)) == 0LL )
    sub_B170D4();
  return UnityEngine_GameObject__get_activeSelf(gameObject, 0LL);
}


void __fastcall QuestBoardListViewManager__set_SyncReferenceTime(
        QuestBoardListViewManager_o *this,
        float value,
        const MethodInfo *method)
{
  this->fields._SyncReferenceTime_k__BackingField = value;
}


void __fastcall QuestBoardListViewManager__CoroutineLoadAsset_d__135___ctor(
        QuestBoardListViewManager__CoroutineLoadAsset_d__135_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall QuestBoardListViewManager__CoroutineLoadAsset_d__135__MoveNext(
        QuestBoardListViewManager__CoroutineLoadAsset_d__135_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
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
  int32_t _1__state; // w8
  struct QuestBoardListViewManager_o *_4__this; // x20
  Il2CppObject *v21; // x22
  struct QuestBoardListViewManager___c__DisplayClass135_0_o **p__8__1; // x21
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  struct QuestBoardListViewManager___c__DisplayClass135_0_o *v35; // x0
  System_Int32_array **v36; // x1
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  struct QuestBoardListViewManager___c__DisplayClass135_0_o *v43; // x0
  System_Int32_array **onCompleteLoad; // x1
  EventMaster_o *Master_WarQuestSelectionMaster; // x0
  EventEntity_array *EnableEntityList; // x22
  EventRewardSceneMaster_o *EntityFromIdAndEventType; // x0
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 v51; // x4
  int max_length; // w8
  EventRewardSceneMaster_o *v53; // x23
  unsigned int v54; // w24
  EventEntity_o *v55; // x25
  AssetData_o *effectAssetData; // x1
  struct QuestBoardListViewManager___c__DisplayClass135_0_o *_8__1; // x21
  AssetLoader_LoadEndDataHandler_o *v58; // x20
  struct QuestBoardListViewManager___c__DisplayClass135_0_o *v59; // x8
  bool result; // w0
  struct QuestBoardListViewManager___c__DisplayClass135_0_o *v61; // x22
  int32_t id; // w21
  System_Action_o *_9__2; // x23
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  Il2CppObject *v70; // x20
  System_Func_bool__o *v71; // x21
  __int64 v72; // x1
  __int64 v73; // x2
  __int64 v74; // x3
  __int64 v75; // x4
  UnityEngine_WaitUntil_o *v76; // x20
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7

  if ( (byte_40FA2FC & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&AssetManager_TypeInfo, v6);
    sub_B16FFC(&Method_DataManager_GetMaster_EventMaster___, v7);
    sub_B16FFC(&Method_DataManager_GetMaster_EventRewardSceneMaster___, v8);
    sub_B16FFC(&DataManager_TypeInfo, v9);
    sub_B16FFC(&Method_System_Func_bool___ctor__, v10);
    sub_B16FFC(&System_Func_bool__TypeInfo, v11);
    sub_B16FFC(&AssetLoader_LoadEndDataHandler_TypeInfo, v12);
    sub_B16FFC(&Method_QuestBoardListViewManager___c__DisplayClass135_0__CoroutineLoadAsset_b__0__, v13);
    sub_B16FFC(&Method_QuestBoardListViewManager___c__DisplayClass135_0__CoroutineLoadAsset_b__1__, v14);
    sub_B16FFC(&Method_QuestBoardListViewManager___c__DisplayClass135_0__CoroutineLoadAsset_b__2__, v15);
    sub_B16FFC(&QuestBoardListViewManager___c__DisplayClass135_0_TypeInfo, v16);
    sub_B16FFC(&UnityEngine_WaitUntil_TypeInfo, v17);
    sub_B16FFC(&StringLiteral_13546/*"Terminal/Effect"*/, v18);
    byte_40FA2FC = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_39;
    effectAssetData = _4__this->fields.effectAssetData;
    _8__1 = this->fields.__8__1;
    if ( effectAssetData )
    {
      if ( !_8__1 )
        goto LABEL_39;
      QuestBoardListViewManager__OnCompleteAssetData(_4__this, effectAssetData, _8__1->fields.onCompleteLoad, 0LL);
    }
    else
    {
      v58 = (AssetLoader_LoadEndDataHandler_o *)sub_B170CC(AssetLoader_LoadEndDataHandler_TypeInfo, 0LL, v2, v3, v4);
      AssetLoader_LoadEndDataHandler___ctor(
        v58,
        (Il2CppObject *)_8__1,
        Method_QuestBoardListViewManager___c__DisplayClass135_0__CoroutineLoadAsset_b__1__,
        0LL);
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      if ( !AssetManager__loadAssetStorage((System_String_o *)StringLiteral_13546/*"Terminal/Effect"*/, v58, 1, 0LL) )
      {
        v59 = this->fields.__8__1;
        if ( !v59 )
          goto LABEL_39;
        ActionExtensions__Call(v59->fields.onCompleteLoad, 0LL);
      }
    }
    return 0;
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  v21 = (Il2CppObject *)sub_B170CC(QuestBoardListViewManager___c__DisplayClass135_0_TypeInfo, method, v2, v3, v4);
  System_Object___ctor(v21, 0LL);
  p__8__1 = &this->fields.__8__1;
  this->fields.__8__1 = (struct QuestBoardListViewManager___c__DisplayClass135_0_o *)v21;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.__8__1,
    (System_Int32_array **)v21,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  v35 = this->fields.__8__1;
  if ( !v35 )
    goto LABEL_39;
  v36 = (System_Int32_array **)this->fields.__4__this;
  v35->fields.__4__this = (struct QuestBoardListViewManager_o *)v36;
  sub_B16F98((BattleServantConfConponent_o *)&v35->fields.__4__this, v36, v29, v30, v31, v32, v33, v34);
  v43 = this->fields.__8__1;
  if ( !v43 )
    goto LABEL_39;
  onCompleteLoad = (System_Int32_array **)this->fields.onCompleteLoad;
  v43->fields.onCompleteLoad = (struct System_Action_o *)onCompleteLoad;
  sub_B16F98((BattleServantConfConponent_o *)&v43->fields.onCompleteLoad, onCompleteLoad, v37, v38, v39, v40, v41, v42);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (EventMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_39;
  EnableEntityList = EventMaster__GetEnableEntityList(Master_WarQuestSelectionMaster, 12, 1, 0LL);
  EntityFromIdAndEventType = (EventRewardSceneMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventRewardSceneMaster___);
  if ( !*p__8__1 )
    goto LABEL_39;
  (*p__8__1)->fields.flag = 1;
  if ( !EnableEntityList )
    goto LABEL_39;
  max_length = EnableEntityList->max_length;
  if ( max_length >= 1 )
  {
    v53 = EntityFromIdAndEventType;
    v54 = 0;
    while ( 1 )
    {
      if ( v54 >= max_length )
      {
        sub_B17100(EntityFromIdAndEventType, v48, v49);
        sub_B170A0();
      }
      v55 = EnableEntityList->m_Items[v54];
      if ( !v55 || !v53 )
        goto LABEL_39;
      EntityFromIdAndEventType = (EventRewardSceneMaster_o *)EventRewardSceneMaster__getEntityFromIdAndEventType(
                                                               v53,
                                                               v55->fields.id,
                                                               15,
                                                               0LL);
      if ( EntityFromIdAndEventType )
        break;
      max_length = EnableEntityList->max_length;
      if ( (int)++v54 >= max_length )
        goto LABEL_38;
    }
    if ( *p__8__1 )
    {
      (*p__8__1)->fields.flag = 0;
      v61 = *p__8__1;
      if ( *p__8__1 )
      {
        id = v55->fields.id;
        _9__2 = v61->fields.__9__2;
        if ( !_9__2 )
        {
          _9__2 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v48, v49, v50, v51);
          System_Action___ctor(
            _9__2,
            (Il2CppObject *)v61,
            Method_QuestBoardListViewManager___c__DisplayClass135_0__CoroutineLoadAsset_b__2__,
            0LL);
          v61->fields.__9__2 = _9__2;
          sub_B16F98(
            (BattleServantConfConponent_o *)&v61->fields.__9__2,
            (System_Int32_array **)_9__2,
            v64,
            v65,
            v66,
            v67,
            v68,
            v69);
        }
        if ( _4__this )
        {
          QuestBoardListViewManager__SetupFortificationWarningDialog(_4__this, id, _9__2, 0LL);
          goto LABEL_38;
        }
      }
    }
LABEL_39:
    sub_B170D4();
  }
LABEL_38:
  v70 = (Il2CppObject *)this->fields.__8__1;
  v71 = (System_Func_bool__o *)sub_B170CC(System_Func_bool__TypeInfo, v48, v49, v50, v51);
  System_Func_bool____ctor(
    v71,
    v70,
    Method_QuestBoardListViewManager___c__DisplayClass135_0__CoroutineLoadAsset_b__0__,
    (const MethodInfo_284E7D0 *)Method_System_Func_bool___ctor__);
  v76 = (UnityEngine_WaitUntil_o *)sub_B170CC(UnityEngine_WaitUntil_TypeInfo, v72, v73, v74, v75);
  UnityEngine_WaitUntil___ctor(v76, v71, 0LL);
  this->fields.__2__current = (Il2CppObject *)v76;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.__2__current,
    (System_Int32_array **)v76,
    v77,
    v78,
    v79,
    v80,
    v81,
    v82);
  result = 1;
  this->fields.__1__state = 1;
  return result;
}


Il2CppObject *__fastcall QuestBoardListViewManager__CoroutineLoadAsset_d__135__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        QuestBoardListViewManager__CoroutineLoadAsset_d__135_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn QuestBoardListViewManager__CoroutineLoadAsset_d__135__System_Collections_IEnumerator_Reset(
        QuestBoardListViewManager__CoroutineLoadAsset_d__135_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_QuestBoardListViewManager__CoroutineLoadAsset_d__135_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
}


Il2CppObject *__fastcall QuestBoardListViewManager__CoroutineLoadAsset_d__135__System_Collections_IEnumerator_get_Current(
        QuestBoardListViewManager__CoroutineLoadAsset_d__135_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall QuestBoardListViewManager__CoroutineLoadAsset_d__135__System_IDisposable_Dispose(
        QuestBoardListViewManager__CoroutineLoadAsset_d__135_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestBoardListViewManager__WaitFinish_d__95___ctor(
        QuestBoardListViewManager__WaitFinish_d__95_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall QuestBoardListViewManager__WaitFinish_d__95__MoveNext(
        QuestBoardListViewManager__WaitFinish_d__95_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int32_t _1__state; // w8
  struct QuestBoardListViewManager_o *_4__this; // x8
  Il2CppObject **p__2__current; // x19
  bool result; // w0

  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    _4__this = this->fields.__4__this;
    this->fields.__1__state = -1;
    if ( !_4__this )
      sub_B170D4();
    if ( _4__this->fields.waitCount > 0 )
      goto LABEL_6;
    _4__this->fields.waitCount = 0;
    ActionExtensions__Call(this->fields.endAct, 0LL);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
LABEL_6:
    this->fields.__2__current = 0LL;
    p__2__current = &this->fields.__2__current;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.__2__current, 0LL, v2, v3, v4, v5, v6, v7);
    result = 1;
    *((_DWORD *)p__2__current - 2) = 1;
    return result;
  }
  return 0;
}


Il2CppObject *__fastcall QuestBoardListViewManager__WaitFinish_d__95__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        QuestBoardListViewManager__WaitFinish_d__95_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn QuestBoardListViewManager__WaitFinish_d__95__System_Collections_IEnumerator_Reset(
        QuestBoardListViewManager__WaitFinish_d__95_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_QuestBoardListViewManager__WaitFinish_d__95_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
}


Il2CppObject *__fastcall QuestBoardListViewManager__WaitFinish_d__95__System_Collections_IEnumerator_get_Current(
        QuestBoardListViewManager__WaitFinish_d__95_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall QuestBoardListViewManager__WaitFinish_d__95__System_IDisposable_Dispose(
        QuestBoardListViewManager__WaitFinish_d__95_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestBoardListViewManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40FA2F2 & 1) == 0 )
  {
    sub_B16FFC(&QuestBoardListViewManager___c_TypeInfo, v1);
    byte_40FA2F2 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(QuestBoardListViewManager___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)QuestBoardListViewManager___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
}


void __fastcall QuestBoardListViewManager___c___ctor(QuestBoardListViewManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestBoardListViewManager___c___SetupBlackMark_b__137_0(
        QuestBoardListViewManager___c_o *this,
        WarEntity_o *entity,
        const MethodInfo *method)
{
  int32_t lastQuestId; // w19

  if ( (byte_40FA2F3 & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, entity);
    byte_40FA2F3 = 1;
  }
  if ( !entity )
    sub_B170D4();
  if ( !WarEntity__IsBlackMarkWithClear(entity, 0LL) )
    return 0;
  lastQuestId = entity->fields.lastQuestId;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestClear_25438860(lastQuestId, -1, 0, 0LL);
}


bool __fastcall QuestBoardListViewManager___c___SetupWhiteMark_b__138_0(
        QuestBoardListViewManager___c_o *this,
        WarEntity_o *entity,
        const MethodInfo *method)
{
  int32_t lastQuestId; // w20

  if ( (byte_40FA2F4 & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, entity);
    byte_40FA2F4 = 1;
  }
  if ( !entity )
    sub_B170D4();
  if ( !WarEntity__IsWhiteMarkWithClear(entity, 0LL) )
    return WarEntity__IsDispWhiteMarkUnderBoard(entity, 0LL);
  lastQuestId = entity->fields.lastQuestId;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestClear_25438860(lastQuestId, -1, 0, 0LL) || WarEntity__IsDispWhiteMarkUnderBoard(entity, 0LL);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass103_0___ctor(
        QuestBoardListViewManager___c__DisplayClass103_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass103_0___RequestListObject_b__0(
        QuestBoardListViewManager___c__DisplayClass103_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  UnityEngine_Component_o *_4__this; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  System_Int32_array **Component_UIWidget; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  struct QuestBoardListViewManager_o *v26; // x0
  float infoTime; // s8
  SlideFadeObject_o *v28; // x21
  float OUT_POS_OFS_X; // s9
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  System_Action_o *v34; // x22
  QuestBoardListViewManager_o *v35; // x0

  if ( (byte_40FA2F5 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___, v6);
    sub_B16FFC(&QuestBoardListViewManager_TypeInfo, v7);
    sub_B16FFC(&Method_QuestBoardListViewManager___c__DisplayClass103_1__RequestListObject_b__2__, v8);
    sub_B16FFC(&QuestBoardListViewManager___c__DisplayClass103_1_TypeInfo, v9);
    byte_40FA2F5 = 1;
  }
  v10 = sub_B170CC(QuestBoardListViewManager___c__DisplayClass103_1_TypeInfo, method, v2, v3, v4);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    goto LABEL_14;
  *(_QWORD *)(v10 + 24) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v10 + 24), (System_Int32_array **)this, v11, v12, v13, v14, v15, v16);
  _4__this = (UnityEngine_Component_o *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  gameObject = UnityEngine_Component__get_gameObject(_4__this, 0LL);
  Component_UIWidget = (System_Int32_array **)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                gameObject,
                                                (const MethodInfo_19D2264 *)Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
  *(_QWORD *)(v10 + 16) = Component_UIWidget;
  sub_B16F98((BattleServantConfConponent_o *)(v10 + 16), Component_UIWidget, v20, v21, v22, v23, v24, v25);
  v26 = this->fields.__4__this;
  if ( !v26 )
    goto LABEL_14;
  infoTime = 0.0;
  if ( !this->fields.isFadeOnTop && !v26->fields.mFaded )
    infoTime = v26->fields.infoTime;
  QuestBoardListViewManager__bgAlphaFade(v26, v26->fields.initMode, infoTime, 0LL);
  v28 = *(SlideFadeObject_o **)(v10 + 16);
  if ( (BYTE3(QuestBoardListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewManager_TypeInfo);
  }
  OUT_POS_OFS_X = QuestBoardListViewManager__get_OUT_POS_OFS_X(0LL);
  v34 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v30, v31, v32, v33);
  System_Action___ctor(
    v34,
    (Il2CppObject *)v10,
    Method_QuestBoardListViewManager___c__DisplayClass103_1__RequestListObject_b__2__,
    0LL);
  if ( !v28
    || (SlideFadeObject__SlideIn_24819468(v28, OUT_POS_OFS_X, infoTime, 0.0, v34, 0LL),
        (v35 = this->fields.__4__this) == 0LL) )
  {
LABEL_14:
    sub_B170D4();
  }
  QuestBoardListViewManager__ResetAlphaAnimTime(v35, 0LL);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass103_0___RequestListObject_b__1(
        QuestBoardListViewManager___c__DisplayClass103_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Component_o *_4__this; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UIWidget_o *Component_UIWidget; // x0
  struct QuestBoardListViewManager_o *v11; // x8
  SlideFadeObject_o *v12; // x20
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  struct QuestBoardListViewManager_o *v17; // x20
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v23; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *_9__4; // x21
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Action_o *_9__5; // x21
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  QuestBoardListViewManager_o *v39; // x0

  if ( (byte_40FA2F6 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&AvalonSceneManager_TypeInfo, v3);
    sub_B16FFC(&Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B16FFC(&Method_QuestBoardListViewManager___c__DisplayClass103_0__RequestListObject_b__4__, v6);
    sub_B16FFC(&Method_QuestBoardListViewManager___c__DisplayClass103_0__RequestListObject_b__5__, v7);
    byte_40FA2F6 = 1;
  }
  _4__this = (UnityEngine_Component_o *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_20;
  gameObject = UnityEngine_Component__get_gameObject(_4__this, 0LL);
  Component_UIWidget = GameObjectExtensions__SafeGetComponent_UIWidget_(
                         gameObject,
                         (const MethodInfo_19D2264 *)Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
  v11 = this->fields.__4__this;
  if ( !v11 )
    goto LABEL_20;
  v12 = (SlideFadeObject_o *)Component_UIWidget;
  QuestBoardListViewManager__bgAlphaFade(this->fields.__4__this, v11->fields.initMode, 0.0, 0LL);
  if ( !v12 )
    goto LABEL_20;
  SlideFadeObject__ResetPosition(v12, 0LL);
  v17 = this->fields.__4__this;
  if ( !v17 )
    goto LABEL_20;
  if ( v17->fields.mFaded )
  {
    v17->fields.mFaded = 0;
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v23 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v23 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v23->static_fields->DEFAULT_FADE_TIME;
    _9__4 = this->fields.__9__4;
    if ( !_9__4 )
    {
      _9__4 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v18, v19, v20, v21);
      System_Action___ctor(
        _9__4,
        (Il2CppObject *)this,
        Method_QuestBoardListViewManager___c__DisplayClass103_0__RequestListObject_b__4__,
        0LL);
      this->fields.__9__4 = _9__4;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.__9__4,
        (System_Int32_array **)_9__4,
        v26,
        v27,
        v28,
        v29,
        v30,
        v31);
    }
    if ( Instance )
    {
      CommonUI__maskFadein(Instance, DEFAULT_FADE_TIME, _9__4, 0LL);
      goto LABEL_18;
    }
LABEL_20:
    sub_B170D4();
  }
  _9__5 = this->fields.__9__5;
  if ( !_9__5 )
  {
    _9__5 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v13, v14, v15, v16);
    System_Action___ctor(
      _9__5,
      (Il2CppObject *)this,
      Method_QuestBoardListViewManager___c__DisplayClass103_0__RequestListObject_b__5__,
      0LL);
    this->fields.__9__5 = _9__5;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__9__5,
      (System_Int32_array **)_9__5,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38);
  }
  QuestBoardListViewManager__SetMode(v17, 2, _9__5, 0, 0, 0LL);
LABEL_18:
  v39 = this->fields.__4__this;
  if ( !v39 )
    goto LABEL_20;
  QuestBoardListViewManager__ResetAlphaAnimTime(v39, 0LL);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass103_0___RequestListObject_b__10(
        QuestBoardListViewManager___c__DisplayClass103_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.end_act, 0LL);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass103_0___RequestListObject_b__3(
        QuestBoardListViewManager___c__DisplayClass103_0_o *this,
        const MethodInfo *method)
{
  QuestBoardListViewManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B170D4();
  QuestBoardListViewManager__EndSlideIn(_4__this, this->fields.end_act, this->fields.isNotInit, 0LL);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass103_0___RequestListObject_b__4(
        QuestBoardListViewManager___c__DisplayClass103_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Action_o *_9__6; // x21
  QuestBoardListViewManager_o *_4__this; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_40FA2F7 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_QuestBoardListViewManager___c__DisplayClass103_0__RequestListObject_b__6__, v6);
    byte_40FA2F7 = 1;
  }
  _9__6 = this->fields.__9__6;
  _4__this = this->fields.__4__this;
  if ( !_9__6 )
  {
    _9__6 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
    System_Action___ctor(
      _9__6,
      (Il2CppObject *)this,
      Method_QuestBoardListViewManager___c__DisplayClass103_0__RequestListObject_b__6__,
      0LL);
    this->fields.__9__6 = _9__6;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__9__6,
      (System_Int32_array **)_9__6,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  if ( !_4__this )
    sub_B170D4();
  QuestBoardListViewManager__SetMode(_4__this, 2, _9__6, 0, 0, 0LL);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass103_0___RequestListObject_b__5(
        QuestBoardListViewManager___c__DisplayClass103_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.end_act, 0LL);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass103_0___RequestListObject_b__6(
        QuestBoardListViewManager___c__DisplayClass103_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.end_act, 0LL);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass103_0___RequestListObject_b__8(
        QuestBoardListViewManager___c__DisplayClass103_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Action_o *_9__10; // x21
  QuestBoardListViewManager_o *_4__this; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_40FA2F8 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_QuestBoardListViewManager___c__DisplayClass103_0__RequestListObject_b__10__, v6);
    byte_40FA2F8 = 1;
  }
  _9__10 = this->fields.__9__10;
  _4__this = this->fields.__4__this;
  if ( !_9__10 )
  {
    _9__10 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
    System_Action___ctor(
      _9__10,
      (Il2CppObject *)this,
      Method_QuestBoardListViewManager___c__DisplayClass103_0__RequestListObject_b__10__,
      0LL);
    this->fields.__9__10 = _9__10;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__9__10,
      (System_Int32_array **)_9__10,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  if ( !_4__this )
    sub_B170D4();
  QuestBoardListViewManager__SetMode(_4__this, 2, _9__10, 0, 0, 0LL);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass103_0___RequestListObject_b__9(
        QuestBoardListViewManager___c__DisplayClass103_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.end_act, 0LL);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass103_1___ctor(
        QuestBoardListViewManager___c__DisplayClass103_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass103_1___RequestListObject_b__2(
        QuestBoardListViewManager___c__DisplayClass103_1_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  SlideFadeObject_o *sfo; // x0
  struct QuestBoardListViewManager___c__DisplayClass103_0_o *CS___8__locals1; // x8
  QuestBoardListViewManager_o *_4__this; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v14; // x8
  struct QuestBoardListViewManager___c__DisplayClass103_0_o *v15; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *_9__3; // x21
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_40FA2F9 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&AvalonSceneManager_TypeInfo, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B16FFC(&Method_QuestBoardListViewManager___c__DisplayClass103_0__RequestListObject_b__3__, v5);
    byte_40FA2F9 = 1;
  }
  sfo = this->fields.sfo;
  if ( !sfo )
    goto LABEL_16;
  SlideFadeObject__ResetPosition(sfo, 0LL);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_16;
  _4__this = CS___8__locals1->fields.__4__this;
  if ( !_4__this )
    goto LABEL_16;
  if ( _4__this->fields.mFaded )
  {
    _4__this->fields.mFaded = 0;
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v14 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v14 = AvalonSceneManager_TypeInfo;
    }
    v15 = this->fields.CS___8__locals1;
    if ( v15 )
    {
      DEFAULT_FADE_TIME = v14->static_fields->DEFAULT_FADE_TIME;
      _9__3 = v15->fields.__9__3;
      if ( !_9__3 )
      {
        _9__3 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v9, v10, v11, v12);
        System_Action___ctor(
          _9__3,
          (Il2CppObject *)v15,
          Method_QuestBoardListViewManager___c__DisplayClass103_0__RequestListObject_b__3__,
          0LL);
        v15->fields.__9__3 = _9__3;
        sub_B16F98(
          (BattleServantConfConponent_o *)&v15->fields.__9__3,
          (System_Int32_array **)_9__3,
          v18,
          v19,
          v20,
          v21,
          v22,
          v23);
      }
      if ( Instance )
      {
        CommonUI__maskFadein(Instance, DEFAULT_FADE_TIME, _9__3, 0LL);
        return;
      }
    }
LABEL_16:
    sub_B170D4();
  }
  QuestBoardListViewManager__EndSlideIn(
    _4__this,
    CS___8__locals1->fields.end_act,
    CS___8__locals1->fields.isNotInit,
    0LL);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass103_2___ctor(
        QuestBoardListViewManager___c__DisplayClass103_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass103_2___RequestListObject_b__7(
        QuestBoardListViewManager___c__DisplayClass103_2_o *this,
        const MethodInfo *method)
{
  struct QuestBoardListViewManager___c__DisplayClass103_0_o *CS___8__locals2; // x9

  CS___8__locals2 = this->fields.CS___8__locals2;
  if ( !CS___8__locals2 || !CS___8__locals2->fields.__4__this )
    sub_B170D4();
  QuestBoardListViewManager__SetSlideOut(
    CS___8__locals2->fields.__4__this,
    this->fields.time,
    CS___8__locals2->fields.end_act,
    0LL);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass104_0___ctor(
        QuestBoardListViewManager___c__DisplayClass104_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass104_0___SetSlideOut_b__0(
        QuestBoardListViewManager___c__DisplayClass104_0_o *this,
        const MethodInfo *method)
{
  QuestBoardListViewManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B170D4();
  QuestBoardListViewManager__EndSlideOut(_4__this, this->fields.end_act, 0LL);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass106_0___ctor(
        QuestBoardListViewManager___c__DisplayClass106_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass106_0___EndSlideOut_b__0(
        QuestBoardListViewManager___c__DisplayClass106_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.end_act, 0LL);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass112_0___ctor(
        QuestBoardListViewManager___c__DisplayClass112_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass112_0___OnClickListView_b__0(
        QuestBoardListViewManager___c__DisplayClass112_0_o *this,
        const MethodInfo *method)
{
  struct QuestBoardListViewManager_o *_4__this; // x9
  ScrTerminalListTop_o *mTerminalList; // x19
  MapControl_AreaBoardInfo_o *areaBoardInfo; // x20
  int32_t Index; // w0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || !this->fields.obj
    || (mTerminalList = _4__this->fields.mTerminalList,
        areaBoardInfo = this->fields.areaBoardInfo,
        Index = ListViewObject__get_Index(this->fields.obj, 0LL),
        !mTerminalList) )
  {
    sub_B170D4();
  }
  ScrTerminalListTop__Click_Area(mTerminalList, areaBoardInfo, Index, 0, 0, 0LL);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass116_0___ctor(
        QuestBoardListViewManager___c__DisplayClass116_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass116_0___RequestToRaiseTutorialFlag_b__0(
        QuestBoardListViewManager___c__DisplayClass116_0_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  System_Action_o *clickAreaFunc; // x0

  clickAreaFunc = this->fields.clickAreaFunc;
  if ( !clickAreaFunc )
    sub_B170D4();
  System_Action__Invoke(clickAreaFunc, 0LL);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass135_0___ctor(
        QuestBoardListViewManager___c__DisplayClass135_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestBoardListViewManager___c__DisplayClass135_0___CoroutineLoadAsset_b__0(
        QuestBoardListViewManager___c__DisplayClass135_0_o *this,
        const MethodInfo *method)
{
  return this->fields.flag;
}


void __fastcall QuestBoardListViewManager___c__DisplayClass135_0___CoroutineLoadAsset_b__1(
        QuestBoardListViewManager___c__DisplayClass135_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  QuestBoardListViewManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B170D4();
  QuestBoardListViewManager__OnCompleteAssetData(_4__this, data, this->fields.onCompleteLoad, 0LL);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass135_0___CoroutineLoadAsset_b__2(
        QuestBoardListViewManager___c__DisplayClass135_0_o *this,
        const MethodInfo *method)
{
  this->fields.flag = 1;
}


void __fastcall QuestBoardListViewManager___c__DisplayClass139_0___ctor(
        QuestBoardListViewManager___c__DisplayClass139_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass139_0___SetupFortificationWarningDialog_b__0(
        QuestBoardListViewManager___c__DisplayClass139_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  WarBoardWaitTimeSetting_o *Object_WarBoardWaitTimeSetting; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct QuestBoardListViewManager_o *_4__this; // x8
  UILabel_o *v17; // x21
  struct QuestBoardListViewManager_o *v18; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *transform; // x22
  System_Int32_array **v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  struct QuestBoardListViewManager_o *v28; // x8
  UnityEngine_GameObject_o *fortificationWarningDialog; // x0
  UnityEngine_GameObject_o *v30; // x0
  struct QuestBoardListViewManager_o *v31; // x8
  UnityEngine_GameObject_o *v32; // x0
  UnityEngine_GameObject_o *v33; // x0
  struct QuestBoardListViewManager_o *v34; // x8
  UnityEngine_GameObject_o *v35; // x0
  FortificationWarningDialogComponent_o *Component_srcLineSprite; // x0

  if ( (byte_40FA2FA & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObject_GameObject____66802784, assetData);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_FortificationWarningDialogComponent___, v5);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject____66874888, v6);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_6743/*"FortificationWarningDialog"*/, v8);
    byte_40FA2FA = 1;
  }
  if ( !assetData )
    goto LABEL_18;
  Object_WarBoardWaitTimeSetting = AssetData__GetObject_WarBoardWaitTimeSetting_(
                                     assetData,
                                     (System_String_o *)StringLiteral_6743/*"FortificationWarningDialog"*/,
                                     (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_18;
  v17 = (UILabel_o *)Object_WarBoardWaitTimeSetting;
  _4__this->fields.fortificationAssetData = assetData;
  sub_B16F98(
    (BattleServantConfConponent_o *)&_4__this->fields.fortificationAssetData,
    (System_Int32_array **)assetData,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v18 = this->fields.__4__this;
  if ( !v18 )
    goto LABEL_18;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.__4__this, 0LL);
  if ( !gameObject )
    goto LABEL_18;
  transform = UnityEngine_GameObject__get_transform(gameObject, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v21 = (System_Int32_array **)UnityEngine_Object__Instantiate_UILabel_(
                                 v17,
                                 transform,
                                 (const MethodInfo_19DE348 *)Method_UnityEngine_Object_Instantiate_GameObject____66874888);
  v18->fields.fortificationWarningDialog = (struct UnityEngine_GameObject_o *)v21;
  sub_B16F98((BattleServantConfConponent_o *)&v18->fields.fortificationWarningDialog, v21, v22, v23, v24, v25, v26, v27);
  v28 = this->fields.__4__this;
  if ( !v28 )
    goto LABEL_18;
  fortificationWarningDialog = v28->fields.fortificationWarningDialog;
  if ( !fortificationWarningDialog )
    goto LABEL_18;
  v30 = UnityEngine_GameObject__get_gameObject(fortificationWarningDialog, 0LL);
  GameObjectExtensions__ResetPosition(v30, 0LL);
  v31 = this->fields.__4__this;
  if ( !v31
    || (v32 = v31->fields.fortificationWarningDialog) == 0LL
    || (v33 = UnityEngine_GameObject__get_gameObject(v32, 0LL),
        GameObjectExtensions__ResetLocalScale(v33, 0LL),
        (v34 = this->fields.__4__this) == 0LL)
    || (v35 = v34->fields.fortificationWarningDialog) == 0LL
    || (Component_srcLineSprite = (FortificationWarningDialogComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                             v35,
                                                                             (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_FortificationWarningDialogComponent___)) == 0LL )
  {
LABEL_18:
    sub_B170D4();
  }
  FortificationWarningDialogComponent__Init(Component_srcLineSprite, 0LL);
  ActionExtensions__Call(this->fields.func, 0LL);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass156_0___ctor(
        QuestBoardListViewManager___c__DisplayClass156_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass156_0___PlayBoardEffect_b__0(
        QuestBoardListViewManager___c__DisplayClass156_0_o *this,
        const MethodInfo *method)
{
  System_Action_o *playingCallback1; // x0

  playingCallback1 = this->fields.playingCallback1;
  if ( playingCallback1 )
    ActionExtensions__Call(playingCallback1, 0LL);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass156_0___PlayBoardEffect_b__1(
        QuestBoardListViewManager___c__DisplayClass156_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *effectComponent; // x0
  UnityEngine_Object_o *gameObject; // x21
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  System_Action_o *endAct; // x0

  if ( (byte_40FA2FB & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FA2FB = 1;
  }
  effectComponent = (UnityEngine_Component_o *)this->fields.effectComponent;
  if ( !effectComponent )
    sub_B170D4();
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(effectComponent, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_34809464(gameObject, 0LL);
  this->fields.effectComponent = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.effectComponent, 0LL, v5, v6, v7, v8, v9, v10);
  endAct = this->fields.endAct;
  if ( endAct )
    ActionExtensions__Call(endAct, 0LL);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass158_0___ctor(
        QuestBoardListViewManager___c__DisplayClass158_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass158_0___MoveBoard_b__0(
        QuestBoardListViewManager___c__DisplayClass158_0_o *this,
        const MethodInfo *method)
{
  struct MoveObject_o *mo; // x8

  mo = this->fields.mo;
  if ( !mo )
    sub_B170D4();
  GameObjectExtensions__SetLocalPositionY(this->fields.tgtObj, mo->fields.mNow.fields.z, 0LL);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass158_0___MoveBoard_b__1(
        QuestBoardListViewManager___c__DisplayClass158_0_o *this,
        const MethodInfo *method)
{
  struct QuestBoardListViewManager_o *_4__this; // x8

  GameObjectExtensions__SetLocalPositionY(this->fields.tgtObj, this->fields.tgtY, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B170D4();
  --_4__this->fields.waitCount;
}