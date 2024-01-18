void __fastcall QuestBoardListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  QuestBoardListViewManager_c *v2; // x8

  if ( (byte_4186E31 & 1) == 0 )
  {
    sub_B2C35C(&QuestBoardListViewManager_TypeInfo, v1);
    byte_4186E31 = 1;
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
  __int64 v3; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v4; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_4186E30 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem___ctor__, method);
    sub_B2C35C(&System_Collections_Generic_List_ListViewItem__TypeInfo, v3);
    byte_4186E30 = 1;
  }
  v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v4,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  this->fields.topItemList = (struct System_Collections_Generic_List_ListViewItem__o *)v4;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.topItemList,
    (System_Int32_array **)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  this->fields.bottomItemList = (struct System_Collections_Generic_List_ListViewItem__o *)v11;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.bottomItemList,
    (System_Int32_array **)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall QuestBoardListViewManager__Awake(QuestBoardListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1
  struct UnityEngine_BoxCollider_o *Component_srcLineSprite; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  UnityEngine_GameObject_o *v13; // x0
  struct UnityEngine_GameObject_o *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_4186DFB & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, method);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v3);
    byte_4186DFB = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_11;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                             gameObject,
                                             (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !gameObject )
    goto LABEL_11;
  this->fields.mBaseClipRange = (float)*((int *)&gameObject[6].fields + 1);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_11;
  Component_srcLineSprite = (struct UnityEngine_BoxCollider_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                  gameObject,
                                                                  (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  this->fields.mBoxCollider = Component_srcLineSprite;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.mBoxCollider,
    (System_Int32_array **)Component_srcLineSprite,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  gameObject = (UnityEngine_GameObject_o *)this->fields.mBoxCollider;
  if ( !gameObject )
    goto LABEL_11;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.mNoneLabel;
  if ( !gameObject
    || (v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(v13, 0LL)) == 0LL)
    || (v14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL),
        this->fields.mNoneLabelParent = v14,
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&this->fields.mNoneLabelParent,
          (System_Int32_array **)v14,
          v15,
          v16,
          v17,
          v18,
          v19,
          v20),
        (gameObject = this->fields.mNoneLabelParent) == 0LL) )
  {
LABEL_11:
    sub_B2C434(gameObject, v5);
  }
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
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
  const MethodInfo *v17; // x2
  UnityEngine_GameObject_o *gameObject; // x21
  UnityEngine_GameObject_o *v19; // x21
  UnityEngine_Component_o *parent; // x0
  struct ExUITexture_o *Component_srcLineSprite; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  struct ExUITexture_o *v28; // x21
  Il2CppObject *v29; // x0
  System_String_o *v30; // x20
  System_Action_o *v31; // x0
  __int64 *v32; // x8
  float v33; // s0
  Il2CppObject *v34; // x0
  System_Action_o *v35; // x22
  ExUITexture_o *v36; // x0
  System_String_o *v37; // x1
  System_Action_o *v38; // x2
  UnityEngine_Component_o *v39; // x19
  Il2CppObject *v40; // x0
  int32_t v41; // [xsp+Ch] [xbp-34h] BYREF
  int32_t v42; // [xsp+18h] [xbp-28h] BYREF
  int32_t v43; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_4186E16 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&bgID);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_ExUITexture___, v9);
    sub_B2C35C(&int_TypeInfo, v10);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v11);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v12);
    sub_B2C35C(&Method_QuestBoardListViewManager__BGChangeEffect_b__131_0__, v13);
    sub_B2C35C(&Method_QuestBoardListViewManager__BGChangeEffect_b__131_1__, v14);
    sub_B2C35C(&StringLiteral_2654/*"Back/back{0}"*/, v15);
    byte_4186E16 = 1;
  }
  mFolderBg = (UnityEngine_Component_o *)this->fields.mFolderBg;
  if ( !mFolderBg )
    goto LABEL_32;
  mFolderBg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mFolderBg, 0LL);
  if ( !mFolderBg )
    goto LABEL_32;
  mFolderBg = (UnityEngine_Component_o *)UnityEngine_GameObject__get_activeSelf(
                                           (UnityEngine_GameObject_o *)mFolderBg,
                                           0LL);
  if ( ((unsigned __int8)mFolderBg & 1) != 0 )
  {
    if ( effectType )
    {
      if ( !bgID )
      {
        QuestBoardListViewManager__bgAlphaFade(this, 4, time, v17);
        return;
      }
      QuestBoardListViewManager__RemoveTempBG(this, *(const MethodInfo **)&bgID);
      mFolderBg = (UnityEngine_Component_o *)this->fields.mFolderBg;
      if ( mFolderBg )
      {
        gameObject = UnityEngine_Component__get_gameObject(mFolderBg, 0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        mFolderBg = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                 (UnityEngine_UI_Dropdown_DropdownItem_o *)gameObject,
                                                 (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( this->fields.mFolderBg )
        {
          v19 = (UnityEngine_GameObject_o *)mFolderBg;
          mFolderBg = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)this->fields.mFolderBg,
                                                   0LL);
          if ( mFolderBg )
          {
            parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(
                                                  (UnityEngine_Transform_o *)mFolderBg,
                                                  0LL);
            GameObjectExtensions__SafeSetParent(v19, parent, 0LL);
            if ( v19 )
            {
              Component_srcLineSprite = (struct ExUITexture_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                  v19,
                                                                  (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ExUITexture___);
              this->fields.mFolderBgTemp = Component_srcLineSprite;
              sub_B2C2F8(
                (BattleServantConfConponent_o *)&this->fields.mFolderBgTemp,
                (System_Int32_array **)Component_srcLineSprite,
                v22,
                v23,
                v24,
                v25,
                v26,
                v27);
              mFolderBg = (UnityEngine_Component_o *)this->fields.mFolderBgTemp;
              if ( mFolderBg )
              {
                UIWidget__set_depth((UIWidget_o *)mFolderBg, LODWORD(mFolderBg[7].klass) + 1, 0LL);
                this->fields.mCrossFadeTime = time;
                v28 = this->fields.mFolderBg;
                v41 = bgID;
                v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v41);
                v30 = System_String__Format((System_String_o *)StringLiteral_2654/*"Back/back{0}"*/, v29, 0LL);
                v31 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
                v32 = &Method_QuestBoardListViewManager__BGChangeEffect_b__131_1__;
                goto LABEL_21;
              }
            }
          }
        }
      }
    }
    else
    {
      v39 = (UnityEngine_Component_o *)this->fields.mFolderBg;
      if ( bgID )
      {
        v42 = bgID;
        v40 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v42);
        mFolderBg = (UnityEngine_Component_o *)System_String__Format((System_String_o *)StringLiteral_2654/*"Back/back{0}"*/, v40, 0LL);
        if ( v39 )
        {
          v37 = (System_String_o *)mFolderBg;
          v36 = (ExUITexture_o *)v39;
          v38 = 0LL;
          goto LABEL_23;
        }
      }
      else if ( v39 )
      {
        mFolderBg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(v39, 0LL);
        if ( mFolderBg )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mFolderBg, 0, 0LL);
          return;
        }
      }
    }
LABEL_32:
    sub_B2C434(mFolderBg, *(_QWORD *)&bgID);
  }
  if ( !bgID )
    return;
  v33 = 0.0;
  if ( effectType )
    v33 = time;
  this->fields.mCrossFadeTime = v33;
  v28 = this->fields.mFolderBg;
  v43 = bgID;
  v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v43);
  v30 = System_String__Format((System_String_o *)StringLiteral_2654/*"Back/back{0}"*/, v34, 0LL);
  v31 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  v32 = &Method_QuestBoardListViewManager__BGChangeEffect_b__131_0__;
LABEL_21:
  v35 = v31;
  System_Action___ctor(v31, (Il2CppObject *)this, *v32, 0LL);
  if ( !v28 )
    goto LABEL_32;
  v36 = v28;
  v37 = v30;
  v38 = v35;
LABEL_23:
  ExUITexture__SetAssetImage(v36, v37, v38, 0LL);
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
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
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

  if ( (byte_4186E19 & 1) == 0 )
  {
    sub_B2C35C(&QuestBoardListViewManager__CoroutineLoadAsset_d__135_TypeInfo, onCompleteLoad);
    byte_4186E19 = 1;
  }
  v5 = sub_B2C42C(QuestBoardListViewManager__CoroutineLoadAsset_d__135_TypeInfo);
  QuestBoardListViewManager__CoroutineLoadAsset_d__135___ctor(
    (QuestBoardListViewManager__CoroutineLoadAsset_d__135_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_B2C434(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 40) = onCompleteLoad;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v5 + 40),
    (System_Int32_array **)onCompleteLoad,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  return (System_Collections_IEnumerator_o *)v5;
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
  void *gameObject; // x0
  __int64 v29; // x1
  UIWidget_o *Component_srcLineSprite; // x24
  UnityEngine_BoxCollider_o *v31; // x25
  QuestBoardListViewItemDraw_c *v32; // x8
  int32_t SCRL_OBJ_DUMMY_NUM; // w19
  struct ListViewItemSeed_o *seed; // x8
  float v35; // s10
  float mBaseClipRange; // s11
  UIPanel_o *v37; // x26
  float v38; // s9
  double v39; // d0
  __int64 v40; // x8
  __int64 v41; // x8
  bool activeSelf; // w0
  QuestBoardListViewManager_c *v43; // x8
  float *p_MAP_EXIT_TIME; // x8
  float v45; // w8
  UILabel_o *mNoneLabel; // x24
  QuestBoardListViewItemDraw_c *v47; // x0
  int32_t size; // w19
  int v49; // w8
  unsigned __int64 v50; // x21
  signed __int64 v51; // x19
  MapControl_QuestInfo_o *v52; // x24
  QuestBoardListViewItem_o *v53; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v54; // x25
  int32_t v55; // w2
  UnityEngine_GameObject_o *blackMarkPrefab; // x26
  UnityEngine_GameObject_o *whiteMarkPrefab; // x27
  int32_t v58; // w19
  int v59; // w8
  signed __int64 v60; // x22
  signed __int64 v61; // x27
  struct WarQuestSelectionEntity_o *v62; // x8
  MapControl_QuestInfo_o *questInfo; // x25
  int32_t shortCutBannerId; // w26
  QuestBoardListViewItem_o *v65; // x0
  QuestBoardListViewItem_o *v66; // x24
  int32_t v67; // w2
  ScrTerminalListTop_WarSelectedQuestInfo_o *v68; // x26
  struct WarQuestSelectionEntity_o *warQuestSelectionEnt; // x8
  int32_t warId; // w23
  char *v71; // x24
  char *v72; // x8
  UnityEngine_GameObject_o *v73; // x23
  UnityEngine_GameObject_o *v74; // x25
  struct MapControl_QuestInfo_o *v75; // x8
  struct WarQuestSelectionEntity_o *v76; // x8
  struct WarQuestSelectionEntity_o *v77; // x8
  bool v78; // [xsp+8h] [xbp-78h]
  UnityEngine_Vector3_o v80; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector4_o v81; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4186DFE & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, *(_QWORD *)&info_kind);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UIPanel___, v14);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__Add__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_ScrTerminalListTop_WarSelectedQuestInfo__get_Count__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapControl_QuestInfo__get_Count__, v18);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapControl_QuestInfo__get_Item__, v19);
    sub_B2C35C(&Method_System_Collections_Generic_List_ScrTerminalListTop_WarSelectedQuestInfo__get_Item__, v20);
    sub_B2C35C(&LocalizationManager_TypeInfo, v21);
    sub_B2C35C(&NetworkManager_TypeInfo, v22);
    sub_B2C35C(&QuestBoardListViewItemDraw_TypeInfo, v23);
    sub_B2C35C(&QuestBoardListViewItem_TypeInfo, v24);
    sub_B2C35C(&QuestBoardListViewManager_TypeInfo, v25);
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, v26);
    sub_B2C35C(&StringLiteral_10962/*"QUEST_NONE"*/, v27);
    byte_4186DFE = 1;
  }
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_114;
  Component_srcLineSprite = (UIWidget_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                            (UnityEngine_GameObject_o *)gameObject,
                                            (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_114;
  v31 = (UnityEngine_BoxCollider_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                       (UnityEngine_GameObject_o *)gameObject,
                                       (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  v32 = QuestBoardListViewItemDraw_TypeInfo;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v32 = QuestBoardListViewItemDraw_TypeInfo;
  }
  gameObject = this->fields.scrollView;
  if ( !gameObject )
    goto LABEL_114;
  SCRL_OBJ_DUMMY_NUM = v32->static_fields->SCRL_OBJ_DUMMY_NUM;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_114;
  gameObject = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                 (UnityEngine_GameObject_o *)gameObject,
                 (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
  if ( !gameObject )
    goto LABEL_114;
  seed = this->fields.seed;
  if ( !seed )
    goto LABEL_114;
  v35 = *((float *)gameObject + 72);
  mBaseClipRange = this->fields.mBaseClipRange;
  v37 = (UIPanel_o *)gameObject;
  seed->fields.arrangementPich.fields.y = -pos_itvl_y;
  if ( !Component_srcLineSprite )
    goto LABEL_114;
  v38 = (float)(SCRL_OBJ_DUMMY_NUM + 1) * pos_itvl_y;
  v39 = v38;
  if ( v38 == INFINITY )
    v39 = -v38;
  UIWidget__set_height(Component_srcLineSprite, (int)v39, 0LL);
  if ( !v31 )
    goto LABEL_114;
  LODWORD(v80.fields.x) = (unsigned int)UnityEngine_BoxCollider__get_size(v31, 0LL);
  v80.fields.z = 0.0;
  v80.fields.y = v38;
  UnityEngine_BoxCollider__set_size(v31, v80, 0LL);
  v81.fields.y = (float)(mBaseClipRange - v38) * 0.5;
  v81.fields.z = clip_w;
  v81.fields.w = v38;
  this->fields.clipRange.fields.y = v38 + (float)QuestBoardListViewItemDraw_TypeInfo->static_fields->CLIP_RANGE_MARGIN;
  v81.fields.x = v35;
  UIPanel__set_baseClipRegion(v37, v81, 0LL);
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
  if ( !byte_4183C65 )
  {
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, v29);
    byte_4183C65 = 1;
  }
  gameObject = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    gameObject = TerminalSceneComponent_TypeInfo;
  }
  v40 = **((_QWORD **)gameObject + 23);
  if ( !v40 )
    goto LABEL_114;
  v41 = *(_QWORD *)(v40 + 256);
  if ( !v41 )
    goto LABEL_114;
  gameObject = *(void **)(v41 + 96);
  if ( !gameObject )
    goto LABEL_114;
  activeSelf = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)gameObject, 0LL);
  v43 = QuestBoardListViewManager_TypeInfo;
  if ( activeSelf )
  {
    if ( (WORD1(QuestBoardListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !QuestBoardListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewManager_TypeInfo);
      v43 = QuestBoardListViewManager_TypeInfo;
    }
    this->fields.infoTime = v43->static_fields->MAP_INTO_TIME;
    p_MAP_EXIT_TIME = &v43->static_fields->MAP_EXIT_TIME;
  }
  else
  {
    if ( (WORD1(QuestBoardListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !QuestBoardListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewManager_TypeInfo);
      v43 = QuestBoardListViewManager_TypeInfo;
    }
    this->fields.infoTime = v43->static_fields->INTO_TIME;
    p_MAP_EXIT_TIME = &v43->static_fields->EXIT_TIME;
  }
  v45 = *p_MAP_EXIT_TIME;
  this->fields.mAlphaAnimCnt = 0;
  this->fields.exitTime = v45;
  this->fields._SyncReferenceTime_k__BackingField = UnityEngine_Time__get_time(0LL);
  if ( !qinf_list )
    goto LABEL_114;
  gameObject = this->fields.mNoneLabelParent;
  if ( !gameObject )
    goto LABEL_114;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, qinf_list->fields._size < 1, 0LL);
  mNoneLabel = this->fields.mNoneLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_10962/*"QUEST_NONE"*/, 0LL);
  if ( !mNoneLabel )
LABEL_114:
    sub_B2C434(gameObject, v29);
  UILabel__set_text(mNoneLabel, (System_String_o *)gameObject, 0LL);
  v47 = QuestBoardListViewItemDraw_TypeInfo;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v47 = QuestBoardListViewItemDraw_TypeInfo;
  }
  if ( info_kind != 6 )
  {
    size = qinf_list->fields._size;
    v78 = isAllDisp;
    if ( (BYTE3(v47->vtable._0_Equals.methodPtr) & 4) != 0 && !v47->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v47);
      v47 = QuestBoardListViewItemDraw_TypeInfo;
    }
    v49 = v47->static_fields->SCRL_OBJ_DUMMY_NUM + size;
    if ( v49 < 1 )
    {
LABEL_112:
      ListViewManager__SortItem((ListViewManager_o *)this, -1, v78, -1, 0LL);
      return;
    }
    v50 = 0LL;
    v51 = v49;
    while ( (__int64)v50 < qinf_list->fields._size )
    {
      if ( v50 >= (unsigned int)qinf_list->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v52 = qinf_list->fields._items->m_Items[v50];
      if ( info_kind != 2 || !v52 )
        goto LABEL_70;
      gameObject = v52->fields._WarInfo_k__BackingField;
      if ( !gameObject )
        goto LABEL_114;
      gameObject = MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_114;
      if ( WarEntity__HasFlag((WarEntity_o *)gameObject, 16, 0LL) )
      {
        v53 = (QuestBoardListViewItem_o *)sub_B2C42C(QuestBoardListViewItem_TypeInfo);
        v54 = (EventMissionProgressRequest_Argument_ProgressData_o *)v53;
        v55 = 4;
      }
      else
      {
LABEL_70:
        if ( !v52 || !MapControl_QuestInfo__GetMine(v52, 0LL) )
          goto LABEL_73;
        gameObject = MapControl_QuestInfo__GetMine(v52, 0LL);
        if ( !gameObject )
          goto LABEL_114;
        if ( (*((_DWORD *)gameObject + 10) & 0x1F) != 7 )
          goto LABEL_73;
        v53 = (QuestBoardListViewItem_o *)sub_B2C42C(QuestBoardListViewItem_TypeInfo);
        v54 = (EventMissionProgressRequest_Argument_ProgressData_o *)v53;
        v55 = 5;
      }
      QuestBoardListViewItem___ctor_29608036(v53, v50, v55, v52, 0LL, 0LL, 0, 0, 0LL);
LABEL_74:
      gameObject = this->fields.itemList;
      if ( !gameObject )
        goto LABEL_114;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)gameObject,
        v54,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      if ( (__int64)++v50 >= v51 )
        goto LABEL_112;
    }
    v52 = 0LL;
LABEL_73:
    blackMarkPrefab = this->fields.blackMarkPrefab;
    whiteMarkPrefab = this->fields.whiteMarkPrefab;
    v54 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_B2C42C(QuestBoardListViewItem_TypeInfo);
    QuestBoardListViewItem___ctor_29608036(
      (QuestBoardListViewItem_o *)v54,
      v50,
      info_kind,
      v52,
      blackMarkPrefab,
      whiteMarkPrefab,
      0,
      0,
      0LL);
    goto LABEL_74;
  }
  gameObject = this->fields.mNoneLabelParent;
  if ( warSelectedQuestList )
  {
    v29 = warSelectedQuestList->fields._size < 1;
    if ( !gameObject )
      goto LABEL_114;
  }
  else
  {
    v29 = 1LL;
    if ( !gameObject )
      goto LABEL_114;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v29, 0LL);
  if ( warSelectedQuestList )
  {
    gameObject = QuestBoardListViewItemDraw_TypeInfo;
    v58 = warSelectedQuestList->fields._size;
    v78 = isAllDisp;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      gameObject = QuestBoardListViewItemDraw_TypeInfo;
    }
    v59 = *(_DWORD *)(*((_QWORD *)gameObject + 23) + 24LL) + v58;
    if ( v59 >= 1 )
    {
      v60 = 0LL;
      v61 = v59;
      do
      {
        if ( v60 >= warSelectedQuestList->fields._size )
          goto LABEL_95;
        if ( v60 >= (unsigned __int64)(unsigned int)warSelectedQuestList->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        v68 = warSelectedQuestList->fields._items->m_Items[v60];
        if ( v68 )
        {
          warQuestSelectionEnt = v68->fields.warQuestSelectionEnt;
          if ( !warQuestSelectionEnt )
            goto LABEL_114;
          gameObject = v68->fields.questInfo;
          if ( !gameObject )
            goto LABEL_114;
          warId = warQuestSelectionEnt->fields.warId;
          gameObject = MapControl_QuestInfo__GetMine((MapControl_QuestInfo_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_114;
          v71 = (char *)gameObject;
          if ( *((_BYTE *)gameObject + 172)
            || (gameObject = QuestEntity__GetPhaseDetail((QuestEntity_o *)gameObject, (const MethodInfo *)v29)) == 0LL )
          {
            v72 = v71 + 144;
          }
          else
          {
            v72 = (char *)gameObject + 48;
          }
          questInfo = v68->fields.questInfo;
          if ( (v72[7] & 8) != 0 )
          {
            v77 = v68->fields.warQuestSelectionEnt;
            if ( !v77 )
              goto LABEL_114;
            shortCutBannerId = v77->fields.shortCutBannerId;
            v65 = (QuestBoardListViewItem_o *)sub_B2C42C(QuestBoardListViewItem_TypeInfo);
            v66 = v65;
            v67 = 6;
          }
          else
          {
            if ( !questInfo )
              goto LABEL_114;
            gameObject = (void *)MapControl_QuestInfo__GetQuestType(v68->fields.questInfo, 0LL);
            if ( (_DWORD)gameObject != 3 )
              goto LABEL_105;
            v75 = v68->fields.questInfo;
            if ( !v75 )
              goto LABEL_114;
            gameObject = v75->fields._WarInfo_k__BackingField;
            if ( !gameObject )
              goto LABEL_114;
            gameObject = MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)gameObject, 0LL);
            if ( !gameObject )
              goto LABEL_114;
            gameObject = (void *)WarEntity__HasFlag((WarEntity_o *)gameObject, 16, 0LL);
            if ( ((unsigned __int8)gameObject & 1) == 0 )
            {
              v62 = v68->fields.warQuestSelectionEnt;
              if ( !v62 )
                goto LABEL_114;
              questInfo = v68->fields.questInfo;
              shortCutBannerId = v62->fields.shortCutBannerId;
              v65 = (QuestBoardListViewItem_o *)sub_B2C42C(QuestBoardListViewItem_TypeInfo);
              v66 = v65;
              v67 = 2;
            }
            else
            {
LABEL_105:
              v76 = v68->fields.warQuestSelectionEnt;
              if ( !v76 )
                goto LABEL_114;
              questInfo = v68->fields.questInfo;
              shortCutBannerId = v76->fields.shortCutBannerId;
              v65 = (QuestBoardListViewItem_o *)sub_B2C42C(QuestBoardListViewItem_TypeInfo);
              v66 = v65;
              v67 = 4;
            }
          }
          QuestBoardListViewItem___ctor_29608036(v65, v60, v67, questInfo, 0LL, 0LL, shortCutBannerId, warId, 0LL);
        }
        else
        {
LABEL_95:
          v73 = this->fields.blackMarkPrefab;
          v74 = this->fields.whiteMarkPrefab;
          v66 = (QuestBoardListViewItem_o *)sub_B2C42C(QuestBoardListViewItem_TypeInfo);
          QuestBoardListViewItem___ctor_29608036(v66, v60, 6, 0LL, v73, v74, 0, 0, 0LL);
        }
        gameObject = this->fields.itemList;
        if ( !gameObject )
          goto LABEL_114;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)gameObject,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v66,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        ++v60;
      }
      while ( v60 < v61 );
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
  UnityEngine_Object_o *QuestBoardObjForWarId; // x24
  _BOOL8 v16; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x6

  if ( (byte_4186E02 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, isBoardDisp);
    byte_4186E02 = 1;
  }
  QuestBoardObjForWarId = (UnityEngine_Object_o *)QuestBoardListViewManager__GetQuestBoardObjForWarId(
                                                    this,
                                                    warId,
                                                    *(const MethodInfo **)&warId);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v16 = UnityEngine_Object__op_Equality(QuestBoardObjForWarId, 0LL, 0LL);
  if ( !v16 )
  {
    if ( !QuestBoardObjForWarId )
      sub_B2C434(v16, v17);
    QuestBoardListViewObject__SetupDispAreaForTerminalTopEffect(
      (QuestBoardListViewObject_o *)QuestBoardObjForWarId,
      isBoardDisp,
      isBadgeDisp,
      isBlackMarkOnly,
      isWhiteMarkOnly,
      isSpecialClosedBanner,
      v18);
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
    sub_B2C434(0LL, end_act);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  const MethodInfo *v16; // x1
  System_Action_o *v17; // x20
  const MethodInfo *v18; // x5

  if ( (byte_4186E0A & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, end_act);
    sub_B2C35C(&Method_QuestBoardListViewManager___c__DisplayClass106_0__EndSlideOut_b__0__, v5);
    sub_B2C35C(&QuestBoardListViewManager___c__DisplayClass106_0_TypeInfo, v6);
    byte_4186E0A = 1;
  }
  v7 = sub_B2C42C(QuestBoardListViewManager___c__DisplayClass106_0_TypeInfo);
  QuestBoardListViewManager___c__DisplayClass106_0___ctor((QuestBoardListViewManager___c__DisplayClass106_0_o *)v7, 0LL);
  if ( !v7 )
    sub_B2C434(v8, v9);
  *(_QWORD *)(v7 + 16) = end_act;
  sub_B2C2F8((BattleServantConfConponent_o *)(v7 + 16), (System_Int32_array **)end_act, v10, v11, v12, v13, v14, v15);
  this->fields.mIsDoing_Slide = 0;
  QuestBoardListViewManager__ResetBG(this, v16);
  v17 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v17,
    (Il2CppObject *)v7,
    Method_QuestBoardListViewManager___c__DisplayClass106_0__EndSlideOut_b__0__,
    0LL);
  QuestBoardListViewManager__SetMode(this, 0, v17, 0, 0, v18);
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

  if ( (byte_4186E04 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_B2C35C(&PartyServantListViewItem_TypeInfo, v5);
    byte_4186E04 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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

  if ( (byte_4186E03 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, *(_QWORD *)&warId);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v7);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    sub_B2C35C(&QuestBoardListViewItem_TypeInfo, v9);
    sub_B2C35C(&QuestBoardListViewObject_TypeInfo, v10);
    byte_4186E03 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_B2C434(0LL, *(_QWORD *)&warId);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v22,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v23 = v22;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v23,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
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
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
  __int64 v9; // x1
  _BOOL8 v10; // x0
  __int64 v11; // x1
  Il2CppObject *current; // x20
  const MethodInfo *v13; // x3
  System_Collections_Generic_List_Enumerator_T__o v14; // [xsp+8h] [xbp-38h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_4186E07 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__Dispose__, *(_QWORD *)&mode);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__MoveNext__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__get_Current__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestBoardListViewObject__GetEnumerator__, v7);
    byte_4186E07 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  ObjectList = QuestBoardListViewManager__get_ObjectList(this, *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B2C434(0LL, v9);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v14,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ObjectList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_QuestBoardListViewObject__GetEnumerator__);
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v14,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__MoveNext__);
    if ( !v10 )
      break;
    current = v14.fields.current;
    if ( !v14.fields.current )
      sub_B2C434(v10, v11);
    zero = UnityEngine_Vector3__get_zero(0LL);
    QuestBoardListViewObject__Init_23867596(
      (QuestBoardListViewObject_o *)current,
      mode,
      0LL,
      zero.fields.x,
      *(UnityEngine_Vector3_o *)&zero.fields.y,
      v13);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v14,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__Dispose__);
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
  UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)this, Asset, 0LL);
}


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
  MoveObject_o *v18; // x0
  __int64 v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Int32_array **Component_UIWidget; // x0
  MoveObject_o **v33; // x23
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  float v40; // s10
  float x; // s10
  float y; // s11
  float z; // s12
  MoveObject_o *v44; // x21
  float v45; // s13
  float v46; // s15
  float v47; // s14
  System_Action_o *v48; // x22
  System_Action_o *v49; // x23
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v51; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v52; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v53; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_4186E2F & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, obj);
    sub_B2C35C(&Method_GameObjectExtensions_SafeGetComponent_MoveObject___, v13);
    sub_B2C35C(&Method_QuestBoardListViewManager___c__DisplayClass158_0__MoveBoard_b__0__, v14);
    sub_B2C35C(&Method_QuestBoardListViewManager___c__DisplayClass158_0__MoveBoard_b__1__, v15);
    sub_B2C35C(&QuestBoardListViewManager___c__DisplayClass158_0_TypeInfo, v16);
    byte_4186E2F = 1;
  }
  v17 = sub_B2C42C(QuestBoardListViewManager___c__DisplayClass158_0_TypeInfo);
  QuestBoardListViewManager___c__DisplayClass158_0___ctor(
    (QuestBoardListViewManager___c__DisplayClass158_0_o *)v17,
    0LL);
  if ( !v17 )
    goto LABEL_10;
  *(_QWORD *)(v17 + 40) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v17 + 40), (System_Int32_array **)this, v20, v21, v22, v23, v24, v25);
  *(_QWORD *)(v17 + 16) = obj;
  sub_B2C2F8((BattleServantConfConponent_o *)(v17 + 16), (System_Int32_array **)obj, v26, v27, v28, v29, v30, v31);
  *(float *)(v17 + 32) = GameObjectExtensions__GetLocalPositionY(*(UnityEngine_GameObject_o **)(v17 + 16), 0LL) + moveY;
  Component_UIWidget = (System_Int32_array **)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                *(UnityEngine_GameObject_o **)(v17 + 16),
                                                (const MethodInfo_1AA8660 *)Method_GameObjectExtensions_SafeGetComponent_MoveObject___);
  v33 = (MoveObject_o **)(v17 + 24);
  *(_QWORD *)(v17 + 24) = Component_UIWidget;
  sub_B2C2F8((BattleServantConfConponent_o *)(v17 + 24), Component_UIWidget, v34, v35, v36, v37, v38, v39);
  if ( is_force
    || (v40 = *(float *)(v17 + 32),
        v40 == GameObjectExtensions__GetLocalPositionY(*(UnityEngine_GameObject_o **)(v17 + 16), 0LL)) )
  {
    v18 = *v33;
    if ( *v33 )
    {
      MoveObject__Stop(v18, 0LL);
      GameObjectExtensions__SetLocalPositionY(*(UnityEngine_GameObject_o **)(v17 + 16), *(float *)(v17 + 32), 0LL);
      --this->fields.waitCount;
      return;
    }
LABEL_10:
    sub_B2C434(v18, v19);
  }
  LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v17 + 16), 0LL);
  x = LocalPosition.fields.x;
  y = LocalPosition.fields.y;
  z = LocalPosition.fields.z;
  v51 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v17 + 16), 0LL);
  v44 = *(MoveObject_o **)(v17 + 24);
  v45 = v51.fields.x;
  v46 = v51.fields.y;
  v47 = v51.fields.z;
  v48 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v48,
    (Il2CppObject *)v17,
    Method_QuestBoardListViewManager___c__DisplayClass158_0__MoveBoard_b__0__,
    0LL);
  v49 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v49,
    (Il2CppObject *)v17,
    Method_QuestBoardListViewManager___c__DisplayClass158_0__MoveBoard_b__1__,
    0LL);
  if ( !v44 )
    goto LABEL_10;
  v53.fields.y = v46 + moveY;
  v52.fields.x = x;
  v52.fields.y = y;
  v52.fields.z = z;
  v53.fields.x = v45;
  v53.fields.z = v47;
  MoveObject__Play(v44, v52, v53, time, v48, v49, 0.0, easeType, 0LL);
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
  __int64 v19; // x1
  QuestBoardListViewItemDraw_c *v20; // x0
  int POS_Y_ITVL_AREA; // w8
  int v22; // w19
  UnityEngine_GameObject_o *gameObject; // x1
  const MethodInfo *v24; // x4
  _BOOL8 v25; // x0
  __int64 v26; // x1
  UnityEngine_Component_o *v27; // x24
  __int64 v28; // x1
  QuestBoardListViewItemDraw_c *v29; // x0
  int v30; // w8
  int v31; // w19
  UnityEngine_GameObject_o *v32; // x1
  const MethodInfo *v33; // x4
  _BOOL8 v34; // x0
  __int64 v35; // x1
  int v36; // w21
  const MethodInfo *v37; // x2
  System_Collections_IEnumerator_o *v38; // x0
  System_Collections_Generic_List_Enumerator_T__o v39; // [xsp+8h] [xbp-A8h] BYREF
  int v40[2]; // [xsp+20h] [xbp-90h]
  int v41; // [xsp+28h] [xbp-88h]
  System_Collections_Generic_List_Enumerator_T__o v42; // [xsp+30h] [xbp-80h] BYREF
  System_Action_o *endActa; // [xsp+58h] [xbp-58h]

  endActa = endAct;
  if ( (byte_4186E00 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, isClose);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v14);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v15);
    sub_B2C35C(&QuestBoardListViewItemDraw_TypeInfo, v16);
    byte_4186E00 = 1;
  }
  memset(&v42, 0, sizeof(v42));
  v41 = 0;
  topItemList = this->fields.topItemList;
  this->fields.waitCount = 0;
  if ( !topItemList )
    goto LABEL_57;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v39,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)topItemList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v42 = v39;
  while ( 1 )
  {
    v25 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v42,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v25 )
      break;
    if ( !v42.fields.current )
      sub_B2C434(v25, v26);
    monitor = (UnityEngine_Component_o *)v42.fields.current[6].monitor;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)monitor, 0LL, 0LL) )
    {
      v20 = QuestBoardListViewItemDraw_TypeInfo;
      if ( isClose )
      {
        if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          v20 = QuestBoardListViewItemDraw_TypeInfo;
        }
        POS_Y_ITVL_AREA = -v20->static_fields->POS_Y_ITVL_AREA;
      }
      else
      {
        if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          v20 = QuestBoardListViewItemDraw_TypeInfo;
        }
        POS_Y_ITVL_AREA = v20->static_fields->POS_Y_ITVL_AREA;
      }
      if ( POS_Y_ITVL_AREA >= 0 )
        v22 = POS_Y_ITVL_AREA;
      else
        v22 = POS_Y_ITVL_AREA + 1;
      if ( !monitor )
        sub_B2C434(v20, v19);
      gameObject = UnityEngine_Component__get_gameObject(monitor, 0LL);
      QuestBoardListViewManager__MoveBoard(this, gameObject, (float)(v22 >> 1), moveTime, easeType, isForce, v24);
      ++this->fields.waitCount;
    }
  }
  v40[0] = 124;
  v41 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v42,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  v41 = 0;
  topItemList = this->fields.bottomItemList;
  if ( !topItemList )
LABEL_57:
    sub_B2C434(topItemList, isClose);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v39,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)topItemList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v42 = v39;
  while ( 1 )
  {
    v34 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v42,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v34 )
      break;
    if ( !v42.fields.current )
      sub_B2C434(v34, v35);
    v27 = (UnityEngine_Component_o *)v42.fields.current[6].monitor;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v27, 0LL, 0LL) )
    {
      v29 = QuestBoardListViewItemDraw_TypeInfo;
      if ( isClose )
      {
        if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          v29 = QuestBoardListViewItemDraw_TypeInfo;
        }
        v30 = v29->static_fields->POS_Y_ITVL_AREA;
      }
      else
      {
        if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          v29 = QuestBoardListViewItemDraw_TypeInfo;
        }
        v30 = -v29->static_fields->POS_Y_ITVL_AREA;
      }
      if ( v30 >= 0 )
        v31 = v30;
      else
        v31 = v30 + 1;
      if ( !v27 )
        sub_B2C434(v29, v28);
      v32 = UnityEngine_Component__get_gameObject(v27, 0LL);
      QuestBoardListViewManager__MoveBoard(this, v32, (float)(v31 >> 1), moveTime, easeType, isForce, v33);
      ++this->fields.waitCount;
    }
  }
  v40[0] = 244;
  v36 = ++v41;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v42,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  if ( v36 && v40[v36 - 1] == 244 )
    v41 = v36 - 1;
  if ( endActa )
  {
    v38 = QuestBoardListViewManager__WaitFinish(this, endActa, v37);
    UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)this, v38, 0LL);
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

  if ( (byte_4186E12 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestBoardListViewObject__get_Count__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestBoardListViewObject__get_Item__, v3);
    byte_4186E12 = 1;
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
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      ObjectList = (System_Collections_Generic_List_QuestBoardListViewObject__o *)v7->fields._items->m_Items[v8];
      if ( !ObjectList )
        break;
      QuestBoardListViewObject__OnChangeAlphaAnim((QuestBoardListViewObject_o *)ObjectList, v5);
      size = v7->fields._size;
      if ( (int)++v8 >= size )
        goto LABEL_10;
    }
LABEL_11:
    sub_B2C434(ObjectList, v5);
  }
LABEL_10:
  this->fields.mResetConsumeColor = 0;
}


void __fastcall QuestBoardListViewManager__OnClickListView(
        QuestBoardListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
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
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x22
  CommonUI_o *Instance; // x0
  const MethodInfo *v26; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  void **v33; // x21
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
  MapControl_WarInfo_o *WarInfoByWarID; // x0
  MapControl_WarInfo_o *v54; // x23
  WarEntity_o *Mine; // x22
  bool IsClosedWar; // w0
  MapControl_WarInfo_o *WarInfo_k__BackingField; // x0
  int32_t EventId; // w22
  const MethodInfo *v59; // x3
  int32_t GroupId; // w23
  QuestEntity_o *v61; // x0
  QuestEntity_o *v62; // x23
  int64_t *p_flag; // x8
  __int64 v64; // x1
  int32_t SpotID; // w22
  TerminalPramsManager_c *v66; // x0
  int32_t questId; // w22
  TerminalPramsManager_c *v68; // x0
  int32_t v69; // w22
  TerminalPramsManager_c *v70; // x0
  EventEntity_o *eventEnt; // x20
  System_Action_o *v72; // x24
  const MethodInfo *v73; // x4
  __int64 v74; // x8
  ScrTerminalListTop_o *mTerminalList; // x19
  MapControl_AreaBoardInfo_o *v76; // x20
  int32_t v77; // w22
  TerminalSceneComponent_c *v78; // x0
  TerminalSceneComponent_c *v79; // x0
  const MethodInfo *v80; // x1
  ScrTerminalListTop_o *v81; // x19
  QuestPhaseDetailEntity_o *PhaseDetail; // x0
  __int64 v83; // x1
  Il2CppObject *current; // x0
  __int64 v85; // x1
  TerminalSceneComponent_c *v86; // x0
  TerminalSceneComponent_o *mInstance; // x0
  const MethodInfo *v88; // x1
  __int64 v89; // x1
  UnityEngine_GameObject_o *fortificationWarningDialog; // x0
  FortificationWarningDialogComponent_o *Component_srcLineSprite; // x0
  __int64 v92; // x1
  QuestEntity_o *v93; // x22
  TerminalSceneComponent_c *v94; // x0
  const MethodInfo *v95; // x1
  int32_t v96; // w23
  bool IsDisplayQuestInformation_23848776; // w0
  const MethodInfo *v98; // x2
  TerminalSceneComponent_c *v99; // x0
  const MethodInfo *v100; // x1
  ScrTerminalListTop_o *v101; // x19
  __int64 v102; // x9
  System_Collections_Generic_List_Enumerator_T__o v103; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v104; // [xsp+20h] [xbp-60h] BYREF
  System_Collections_Generic_List_EventFortificationEntity__o *entities; // [xsp+38h] [xbp-48h] BYREF

  if ( (byte_4186E0D & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, obj);
    sub_B2C35C(&Method_DataManager_GetMaster_EventFortificationMaster___, v5);
    sub_B2C35C(&Method_DataManager_GetMaster_QuestGroupMaster___, v6);
    sub_B2C35C(&DataManager_TypeInfo, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__Dispose__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__MoveNext__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__get_Current__, v10);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_FortificationWarningDialogComponent___, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventFortificationEntity__GetEnumerator__, v12);
    sub_B2C35C(&QuestBoardListViewItem_TypeInfo, v13);
    sub_B2C35C(&QuestBoardListViewObject_TypeInfo, v14);
    sub_B2C35C(&QuestInformationComponent_TypeInfo, v15);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v16);
    sub_B2C35C(&Method_SingletonTemplate_QuestTree__get_Instance__, v17);
    sub_B2C35C(&SingletonTemplate_QuestTree__TypeInfo, v18);
    sub_B2C35C(&SoundManager_TypeInfo, v19);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v20);
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, v21);
    sub_B2C35C(&Method_QuestBoardListViewManager___c__DisplayClass112_0__OnClickListView_b__0__, v22);
    sub_B2C35C(&QuestBoardListViewManager___c__DisplayClass112_0_TypeInfo, v23);
    byte_4186E0D = 1;
  }
  entities = 0LL;
  memset(&v104, 0, sizeof(v104));
  v24 = sub_B2C42C(QuestBoardListViewManager___c__DisplayClass112_0_TypeInfo);
  QuestBoardListViewManager___c__DisplayClass112_0___ctor(
    (QuestBoardListViewManager___c__DisplayClass112_0_o *)v24,
    0LL);
  if ( !v24 )
    goto LABEL_204;
  *(_QWORD *)(v24 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v24 + 16), (System_Int32_array **)this, v27, v28, v29, v30, v31, v32);
  *(_QWORD *)(v24 + 32) = obj;
  v33 = (void **)(v24 + 32);
  sub_B2C2F8((BattleServantConfConponent_o *)(v24 + 32), (System_Int32_array **)obj, v34, v35, v36, v37, v38, v39);
  if ( !*(_QWORD *)(v24 + 32) )
    goto LABEL_204;
  v46 = *(_QWORD *)(*(_QWORD *)(v24 + 32) + 48LL);
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
  *(_QWORD *)(v24 + 24) = AreaBoardInfo_k__BackingField;
  v50 = (MapControl_AreaBoardInfo_o **)(v24 + 24);
  sub_B2C2F8((BattleServantConfConponent_o *)(v24 + 24), AreaBoardInfo_k__BackingField, v40, v41, v42, v43, v44, v45);
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
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
      v72 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(
        v72,
        (Il2CppObject *)v24,
        Method_QuestBoardListViewManager___c__DisplayClass112_0__OnClickListView_b__0__,
        0LL);
      v74 = *(_QWORD *)(v24 + 24);
      if ( !v74 )
        goto LABEL_204;
      if ( QuestBoardListViewManager__RequestToRaiseTutorialFlag(this, eventEnt, v72, *(_DWORD *)(v74 + 20), v73) )
        return;
      Instance = (CommonUI_o *)*v33;
      if ( !*v33 )
        goto LABEL_204;
      mTerminalList = this->fields.mTerminalList;
      v76 = *v50;
      Instance = (CommonUI_o *)ListViewObject__get_Index((ListViewObject_o *)Instance, 0LL);
      if ( !mTerminalList )
        goto LABEL_204;
      ScrTerminalListTop__Click_Area(mTerminalList, v76, (int32_t)Instance, 0, 0, 0LL);
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
      Instance = (CommonUI_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !*v50 || !Instance )
        goto LABEL_204;
      WarInfoByWarID = QuestTree__mfGetWarInfoByWarID((QuestTree_o *)Instance, (*v50)->fields.warId, 0LL);
      if ( !WarInfoByWarID )
        goto LABEL_29;
      v54 = WarInfoByWarID;
      Mine = MapControl_WarInfo__GetMine(WarInfoByWarID, 0LL);
      IsClosedWar = MapControl_WarInfo__IsClosedWar(v54, 0LL);
      if ( Mine && IsClosedWar && WarEntity__IsMainInterlude(Mine, 0LL) )
        goto LABEL_88;
      if ( !Mine || !WarEntity__IsSubFolder(Mine, 0LL) )
        goto LABEL_29;
      if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
      }
      Instance = (CommonUI_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !Instance )
        goto LABEL_204;
      if ( !QuestTree__IsWarOpen((QuestTree_o *)Instance, Mine->fields.id, 0LL) )
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
      Instance = (CommonUI_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_QuestGroupMaster___);
      if ( !Instance )
        goto LABEL_204;
      GroupId = QuestGroupMaster__GetGroupId((QuestGroupMaster_o *)Instance, v48->fields.questId, 18, v59);
      v61 = MapControl_QuestInfo__GetMine(v48, 0LL);
      if ( EventId != GroupId )
        goto LABEL_169;
      v62 = v61;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_4186F60 )
      {
        sub_B2C35C(&TerminalPramsManager_TypeInfo, v26);
        byte_4186F60 = 1;
      }
      Instance = (CommonUI_o *)TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        Instance = (CommonUI_o *)TerminalPramsManager_TypeInfo;
      }
      if ( BYTE1(Instance->fields.errorDialog[2].fields.basePanelList) )
        goto LABEL_169;
      if ( !v62 )
        goto LABEL_204;
      if ( v62->fields.mIsPhaseDetailed || (PhaseDetail = QuestEntity__GetPhaseDetail(v62, v26)) == 0LL )
        p_flag = &v62->fields.flag;
      else
        p_flag = &PhaseDetail->fields.flag;
      if ( (*(_BYTE *)p_flag & 2) != 0 )
        goto LABEL_169;
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Instance = (CommonUI_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EventFortificationMaster___);
      if ( !Instance )
        goto LABEL_204;
      if ( !EventFortificationMaster__TryGetEntityList((EventFortificationMaster_o *)Instance, &entities, EventId, 0LL) )
        goto LABEL_169;
      Instance = (CommonUI_o *)entities;
      if ( !entities )
        goto LABEL_204;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v103,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)entities,
        (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_EventFortificationEntity__GetEnumerator__);
      v104 = v103;
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
      if ( !byte_4183C9C )
      {
        sub_B2C35C(&TerminalPramsManager_TypeInfo, v64);
        byte_4183C9C = 1;
      }
      v66 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v66 = TerminalPramsManager_TypeInfo;
      }
      v66->static_fields->_SpotId_k__BackingField = SpotID;
      Instance = (CommonUI_o *)MapControl_QuestInfo__GetMine(v48, 0LL);
      if ( !Instance )
        goto LABEL_204;
      if ( LODWORD(Instance->fields.leftImg) == 3 )
      {
        questId = v48->fields.questId;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        }
        if ( !byte_4183C6D )
        {
          sub_B2C35C(&TerminalPramsManager_TypeInfo, v26);
          byte_4183C6D = 1;
        }
        v68 = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v68 = TerminalPramsManager_TypeInfo;
        }
        v68->static_fields->_SelectedStoryQuestId_k__BackingField = questId;
      }
      v69 = *(_DWORD *)(v46 + 148);
      if ( v69 )
      {
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        }
        if ( !byte_4183C6E )
        {
          sub_B2C35C(&TerminalPramsManager_TypeInfo, v26);
          byte_4183C6E = 1;
        }
        v70 = TerminalPramsManager_TypeInfo;
LABEL_105:
        if ( (BYTE3(v70->vtable._0_Equals.methodPtr) & 4) != 0 && !v70->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v70);
          v70 = TerminalPramsManager_TypeInfo;
        }
        v70->static_fields->_SelectedRecollectionWarId_k__BackingField = v69;
        if ( !byte_41846FE )
        {
          sub_B2C35C(&TerminalPramsManager_TypeInfo, v26);
          v70 = TerminalPramsManager_TypeInfo;
          byte_41846FE = 1;
        }
        if ( (BYTE3(v70->vtable._0_Equals.methodPtr) & 4) != 0 && !v70->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v70);
          v70 = TerminalPramsManager_TypeInfo;
        }
        v70->static_fields->_IsFromRecollectionBoard_k__BackingField = 1;
      }
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !Instance )
        goto LABEL_204;
      CommonUI__CheckChangeOtherConnectMarkFromEventId(Instance, 0, 1, 0LL);
      Instance = (CommonUI_o *)this->fields.mTerminalList;
      if ( !Instance )
        goto LABEL_204;
      ScrTerminalListTop__Click_Shortcut((ScrTerminalListTop_o *)Instance, v48->fields.warId, v48->fields.questId, 0LL);
      return;
    case 5:
      if ( dispType == 2 )
        goto LABEL_88;
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !Instance )
        goto LABEL_204;
      CommonUI__CheckChangeOtherConnectMarkFromEventId(Instance, 0, 1, 0LL);
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
      if ( !byte_4183C65 )
      {
        sub_B2C35C(&TerminalSceneComponent_TypeInfo, v26);
        byte_4183C65 = 1;
      }
      v78 = TerminalSceneComponent_TypeInfo;
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v78 = TerminalSceneComponent_TypeInfo;
      }
      Instance = (CommonUI_o *)v78->static_fields->mInstance;
      if ( !Instance )
        goto LABEL_204;
      TerminalSceneComponent__QuestInfoShowing((TerminalSceneComponent_o *)Instance, 0LL);
      if ( !byte_4183C65 )
      {
        sub_B2C35C(&TerminalSceneComponent_TypeInfo, v26);
        byte_4183C65 = 1;
      }
      v79 = TerminalSceneComponent_TypeInfo;
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v79 = TerminalSceneComponent_TypeInfo;
      }
      Instance = (CommonUI_o *)v79->static_fields->mInstance;
      if ( !Instance )
        goto LABEL_204;
      TerminalSceneComponent__CallQuestInformationClose((TerminalSceneComponent_o *)Instance, 0LL);
      QuestBoardListViewManager__SetShowingInfoAllOff(this, v80);
      Instance = (CommonUI_o *)*v33;
      if ( !*v33 )
        goto LABEL_204;
      v81 = this->fields.mTerminalList;
      Instance = (CommonUI_o *)ListViewObject__get_Index((ListViewObject_o *)Instance, 0LL);
      if ( !v81 )
        goto LABEL_204;
      ScrTerminalListTop__Click_WarBoard(v81, v48, (int32_t)Instance, 0LL);
      return;
    case 6:
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      v77 = MapControl_QuestInfo__GetSpotID(v48, 0LL);
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_4183C9C )
      {
        sub_B2C35C(&TerminalPramsManager_TypeInfo, v26);
        byte_4183C9C = 1;
      }
      v70 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v70 = TerminalPramsManager_TypeInfo;
      }
      v70->static_fields->_SpotId_k__BackingField = v77;
      v69 = *(_DWORD *)(v46 + 148);
      if ( !byte_4183C6E )
      {
        sub_B2C35C(&TerminalPramsManager_TypeInfo, v26);
        v70 = TerminalPramsManager_TypeInfo;
        byte_4183C6E = 1;
      }
      goto LABEL_105;
    default:
      return;
  }
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v104,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__MoveNext__) )
  {
    current = v104.fields.current;
    if ( !v104.fields.current )
      goto LABEL_206;
    if ( EventFortificationEntity__IsOpenFortificationWarningDialog(
           (EventFortificationEntity_o *)v104.fields.current,
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
      if ( !byte_4183C65 )
      {
        sub_B2C35C(&TerminalSceneComponent_TypeInfo, v85);
        byte_4183C65 = 1;
      }
      v86 = TerminalSceneComponent_TypeInfo;
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v86 = TerminalSceneComponent_TypeInfo;
      }
      mInstance = v86->static_fields->mInstance;
      if ( !mInstance )
        sub_B2C434(0LL, v85);
      TerminalSceneComponent__CallQuestInformationClose(mInstance, 0LL);
      QuestBoardListViewManager__SetShowingInfoAllOff(this, v88);
      fortificationWarningDialog = this->fields.fortificationWarningDialog;
      if ( !fortificationWarningDialog )
        sub_B2C434(0LL, v89);
      Component_srcLineSprite = (FortificationWarningDialogComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                           fortificationWarningDialog,
                                                                           (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_FortificationWarningDialogComponent___);
      if ( !Component_srcLineSprite )
        sub_B2C434(0LL, v92);
      FortificationWarningDialogComponent__Open(Component_srcLineSprite, 0LL);
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v104,
        (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__Dispose__);
      return;
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v104,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__Dispose__);
LABEL_169:
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_204;
  CommonUI__CheckChangeOtherConnectMarkFromEventId(Instance, 0, 1, 0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  v93 = MapControl_QuestInfo__GetMine(v48, 0LL);
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_4183C65 )
  {
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, v26);
    byte_4183C65 = 1;
  }
  v94 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v94 = TerminalSceneComponent_TypeInfo;
  }
  Instance = (CommonUI_o *)v94->static_fields->mInstance;
  if ( !Instance )
LABEL_204:
    sub_B2C434(Instance, v26);
  v96 = TerminalSceneComponent__QuestInfoShowing((TerminalSceneComponent_o *)Instance, 0LL);
  if ( (BYTE3(QuestInformationComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestInformationComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestInformationComponent_TypeInfo);
  }
  IsDisplayQuestInformation_23848776 = QuestInformationComponent__IsDisplayQuestInformation_23848776(v93, v95);
  if ( v96 < 1 || !IsDisplayQuestInformation_23848776 || v96 == v48->fields.questId )
  {
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    }
    if ( !byte_4183C65 )
    {
      sub_B2C35C(&TerminalSceneComponent_TypeInfo, v26);
      byte_4183C65 = 1;
    }
    v99 = TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v99 = TerminalSceneComponent_TypeInfo;
    }
    Instance = (CommonUI_o *)v99->static_fields->mInstance;
    if ( Instance )
    {
      TerminalSceneComponent__CallQuestInformationClose((TerminalSceneComponent_o *)Instance, 0LL);
      QuestBoardListViewManager__SetShowingInfoAllOff(this, v100);
      Instance = (CommonUI_o *)*v33;
      if ( *v33 )
      {
        v101 = this->fields.mTerminalList;
        Instance = (CommonUI_o *)ListViewObject__get_Index((ListViewObject_o *)Instance, 0LL);
        if ( v101 )
        {
          ScrTerminalListTop__Click_Quest(v101, v48, (int32_t)Instance, 0LL);
          return;
        }
      }
    }
    goto LABEL_204;
  }
  Instance = (CommonUI_o *)*v33;
  if ( !*v33 )
    goto LABEL_204;
  v102 = *(&QuestBoardListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&Instance->klass->_2.bitflags2 + 1) < (unsigned int)v102
    || (QuestBoardListViewObject_c *)Instance->klass->_2.typeHierarchy[v102 - 1] != QuestBoardListViewObject_TypeInfo )
  {
    current = (Il2CppObject *)sub_B2C728(Instance);
LABEL_206:
    sub_B2C434(current, v83);
  }
  QuestBoardListViewObject__OnClickInfoBtn((QuestBoardListViewObject_o *)Instance, 1, v98);
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
  sub_B2C2F8(
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

  if ( (byte_4186E20 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, playingCallback1);
    byte_4186E20 = 1;
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
  __int64 v8; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_GameObject_o *v10; // x22
  UnityEngine_GameObject_o *v11; // x0
  float LocalPositionY; // s0
  UnityEngine_Transform_o *v13; // x22
  QuestBoardListViewManager_o *v14; // x0
  const MethodInfo *v15; // x4

  if ( (byte_4186E21 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, playingCallback1);
    byte_4186E21 = 1;
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
    gameObject = (UnityEngine_Component_o *)this->fields.effectAppearComponent;
    if ( !gameObject )
      goto LABEL_14;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !this->fields.effectAppearComponent )
      goto LABEL_14;
    v10 = (UnityEngine_GameObject_o *)gameObject;
    v11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.effectAppearComponent, 0LL);
    LocalPositionY = GameObjectExtensions__GetLocalPositionY(v11, 0LL);
    GameObjectExtensions__SetLocalPositionY(v10, LocalPositionY, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.effectAppearComponent;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL),
          !this->fields.onEffectPanel)
      || (v13 = (UnityEngine_Transform_o *)gameObject,
          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this->fields.onEffectPanel,
                                                    0LL),
          !v13) )
    {
LABEL_14:
      sub_B2C434(gameObject, v8);
    }
    UnityEngine_Transform__SetParent_35435768(v13, (UnityEngine_Transform_o *)gameObject, 1, 0LL);
    QuestBoardListViewManager__PlayBoardEffect(
      v14,
      (QuestBoardListEffectComponent_o *)this->fields.effectAppearComponent,
      playingCallback1,
      endAct,
      v15);
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

  if ( (byte_4186E22 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, playingCallback1);
    byte_4186E22 = 1;
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
  __int64 v10; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_GameObject_o *v12; // x22
  UnityEngine_GameObject_o *v13; // x0
  float v14; // s0
  UnityEngine_Transform_o *v15; // x22
  QuestBoardListViewManager_o *v16; // x0
  const MethodInfo *v17; // x4
  QuestBoardListEffectComponent_o *v18; // x1
  UnityEngine_GameObject_o *v19; // x22
  UnityEngine_GameObject_o *v20; // x0
  float LocalPositionY; // s0
  UnityEngine_Transform_o *v22; // x22

  if ( (byte_4186E2C & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, playingCallback);
    byte_4186E2C = 1;
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
    gameObject = (UnityEngine_Component_o *)this->fields.effectDisappear2BbComponent;
    if ( gameObject )
    {
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
      if ( this->fields.effectDisappear2BbComponent )
      {
        v19 = (UnityEngine_GameObject_o *)gameObject;
        v20 = UnityEngine_Component__get_gameObject(
                (UnityEngine_Component_o *)this->fields.effectDisappear2BbComponent,
                0LL);
        LocalPositionY = GameObjectExtensions__GetLocalPositionY(v20, 0LL);
        GameObjectExtensions__SetLocalPositionY(v19, LocalPositionY, 0LL);
        gameObject = (UnityEngine_Component_o *)this->fields.effectDisappear2BbComponent;
        if ( gameObject )
        {
          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
          if ( this->fields.onEffectPanel )
          {
            v22 = (UnityEngine_Transform_o *)gameObject;
            gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                      (UnityEngine_Component_o *)this->fields.onEffectPanel,
                                                      0LL);
            if ( v22 )
            {
              UnityEngine_Transform__SetParent_35435768(v22, (UnityEngine_Transform_o *)gameObject, 1, 0LL);
              v18 = (QuestBoardListEffectComponent_o *)this->fields.effectDisappear2BbComponent;
              goto LABEL_28;
            }
          }
        }
      }
    }
LABEL_29:
    sub_B2C434(gameObject, v10);
  }
  gameObject = (UnityEngine_Component_o *)this->fields.effectDisappear2Component;
  if ( !gameObject )
    goto LABEL_29;
  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
  if ( !this->fields.effectDisappear2Component )
    goto LABEL_29;
  v12 = (UnityEngine_GameObject_o *)gameObject;
  v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.effectDisappear2Component, 0LL);
  v14 = GameObjectExtensions__GetLocalPositionY(v13, 0LL);
  GameObjectExtensions__SetLocalPositionY(v12, v14, 0LL);
  gameObject = (UnityEngine_Component_o *)this->fields.effectDisappear2Component;
  if ( !gameObject )
    goto LABEL_29;
  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
  if ( !this->fields.onEffectPanel )
    goto LABEL_29;
  v15 = (UnityEngine_Transform_o *)gameObject;
  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                            (UnityEngine_Component_o *)this->fields.onEffectPanel,
                                            0LL);
  if ( !v15 )
    goto LABEL_29;
  UnityEngine_Transform__SetParent_35435768(v15, (UnityEngine_Transform_o *)gameObject, 1, 0LL);
  v18 = this->fields.effectDisappear2Component;
LABEL_28:
  QuestBoardListViewManager__PlayBoardEffect(v16, v18, playingCallback, endAct, v17);
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
  __int64 v11; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_GameObject_o *v13; // x22
  UnityEngine_GameObject_o *v14; // x0
  float v15; // s8
  QuestBoardListViewItemDraw_c *v16; // x0
  int v17; // w8
  int v18; // w8
  UnityEngine_Transform_o *v19; // x22
  QuestBoardListViewManager_o *v20; // x0
  const MethodInfo *v21; // x4
  QuestBoardListEffectComponent_o *v22; // x1
  UnityEngine_GameObject_o *v23; // x22
  UnityEngine_GameObject_o *v24; // x0
  float LocalPositionY; // s8
  QuestBoardListViewItemDraw_c *v26; // x0
  int POS_Y_ITVL_AREA; // w8
  int v28; // w8
  UnityEngine_Transform_o *v29; // x22

  if ( (byte_4186E2B & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, playingCallback1);
    sub_B2C35C(&QuestBoardListViewItemDraw_TypeInfo, v7);
    byte_4186E2B = 1;
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
    gameObject = (UnityEngine_Component_o *)this->fields.effectDisappear2BbComponent;
    if ( gameObject )
    {
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
      if ( this->fields.effectDisappear2BbComponent )
      {
        v23 = (UnityEngine_GameObject_o *)gameObject;
        v24 = UnityEngine_Component__get_gameObject(
                (UnityEngine_Component_o *)this->fields.effectDisappear2BbComponent,
                0LL);
        LocalPositionY = GameObjectExtensions__GetLocalPositionY(v24, 0LL);
        v26 = QuestBoardListViewItemDraw_TypeInfo;
        if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          v26 = QuestBoardListViewItemDraw_TypeInfo;
        }
        POS_Y_ITVL_AREA = v26->static_fields->POS_Y_ITVL_AREA;
        v28 = POS_Y_ITVL_AREA <= 0 ? -POS_Y_ITVL_AREA : 1 - POS_Y_ITVL_AREA;
        GameObjectExtensions__SetLocalPositionY(v23, LocalPositionY + (float)(v28 >> 1), 0LL);
        gameObject = (UnityEngine_Component_o *)this->fields.effectDisappear2BbComponent;
        if ( gameObject )
        {
          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
          if ( this->fields.onEffectPanel )
          {
            v29 = (UnityEngine_Transform_o *)gameObject;
            gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                      (UnityEngine_Component_o *)this->fields.onEffectPanel,
                                                      0LL);
            if ( v29 )
            {
              UnityEngine_Transform__SetParent_35435768(v29, (UnityEngine_Transform_o *)gameObject, 1, 0LL);
              v22 = (QuestBoardListEffectComponent_o *)this->fields.effectDisappear2BbComponent;
              goto LABEL_40;
            }
          }
        }
      }
    }
LABEL_41:
    sub_B2C434(gameObject, v11);
  }
  gameObject = (UnityEngine_Component_o *)this->fields.effectDisappear2Component;
  if ( !gameObject )
    goto LABEL_41;
  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
  if ( !this->fields.effectDisappear2Component )
    goto LABEL_41;
  v13 = (UnityEngine_GameObject_o *)gameObject;
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
  gameObject = (UnityEngine_Component_o *)this->fields.effectDisappear2Component;
  if ( !gameObject )
    goto LABEL_41;
  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
  if ( !this->fields.onEffectPanel )
    goto LABEL_41;
  v19 = (UnityEngine_Transform_o *)gameObject;
  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                            (UnityEngine_Component_o *)this->fields.onEffectPanel,
                                            0LL);
  if ( !v19 )
    goto LABEL_41;
  UnityEngine_Transform__SetParent_35435768(v19, (UnityEngine_Transform_o *)gameObject, 1, 0LL);
  v22 = this->fields.effectDisappear2Component;
LABEL_40:
  QuestBoardListViewManager__PlayBoardEffect(v20, v22, playingCallback1, endAct, v21);
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

  if ( (byte_4186E2A & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, playingCallback1);
    byte_4186E2A = 1;
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

  if ( (byte_4186E29 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, playingCallback1);
    byte_4186E29 = 1;
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
  __int64 v13; // x0
  __int64 v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Action_o **v21; // x23
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Action_o **v28; // x21
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  UnityEngine_Object_o *v35; // x20
  QuestBoardListEffectComponent_o *v36; // x20
  System_Action_o *v37; // x21
  System_Action_o *v38; // x22

  if ( (byte_4186E2D & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, effectComponent);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    sub_B2C35C(&Method_QuestBoardListViewManager___c__DisplayClass156_0__PlayBoardEffect_b__0__, v9);
    sub_B2C35C(&Method_QuestBoardListViewManager___c__DisplayClass156_0__PlayBoardEffect_b__1__, v10);
    sub_B2C35C(&QuestBoardListViewManager___c__DisplayClass156_0_TypeInfo, v11);
    byte_4186E2D = 1;
  }
  v12 = sub_B2C42C(QuestBoardListViewManager___c__DisplayClass156_0_TypeInfo);
  QuestBoardListViewManager___c__DisplayClass156_0___ctor(
    (QuestBoardListViewManager___c__DisplayClass156_0_o *)v12,
    0LL);
  if ( !v12 )
    goto LABEL_15;
  *(_QWORD *)(v12 + 16) = playingCallback1;
  v21 = (System_Action_o **)(v12 + 16);
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v12 + 16),
    (System_Int32_array **)playingCallback1,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  *(_QWORD *)(v12 + 24) = effectComponent;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v12 + 24),
    (System_Int32_array **)effectComponent,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  *(_QWORD *)(v12 + 32) = endAct;
  v28 = (System_Action_o **)(v12 + 32);
  sub_B2C2F8((BattleServantConfConponent_o *)(v12 + 32), (System_Int32_array **)endAct, v29, v30, v31, v32, v33, v34);
  v35 = *(UnityEngine_Object_o **)(v12 + 24);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(v35, 0LL, 0LL) )
  {
    v36 = *(QuestBoardListEffectComponent_o **)(v12 + 24);
    v37 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      v37,
      (Il2CppObject *)v12,
      Method_QuestBoardListViewManager___c__DisplayClass156_0__PlayBoardEffect_b__0__,
      0LL);
    v38 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      v38,
      (Il2CppObject *)v12,
      Method_QuestBoardListViewManager___c__DisplayClass156_0__PlayBoardEffect_b__1__,
      0LL);
    if ( v36 )
    {
      QuestBoardListEffectComponent__Play(v36, v37, v38, 0LL);
      return;
    }
LABEL_15:
    sub_B2C434(v13, v14);
  }
  if ( *v21 )
    ActionExtensions__Call(*v21, 0LL);
  if ( *v28 )
    ActionExtensions__Call(*v28, 0LL);
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

  if ( (byte_4186E2E & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, method);
    byte_4186E2E = 1;
  }
  this->fields.blackMarkPrefab = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.blackMarkPrefab, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.whiteMarkPrefab = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.whiteMarkPrefab, 0LL, v9, v10, v11, v12, v13, v14);
  this->fields.fortificationWarningDialog = 0LL;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.fortificationWarningDialog,
    0LL,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  this->fields.boardAppearEffectPrefab = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.boardAppearEffectPrefab, 0LL, v21, v22, v23, v24, v25, v26);
  this->fields.boardAppearEffectFadePrefab = 0LL;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.boardAppearEffectFadePrefab,
    0LL,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  this->fields.boardDisappearEffectPrefab = 0LL;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.boardDisappearEffectPrefab,
    0LL,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  this->fields.boardDisappear2EffectPrefab = 0LL;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.boardDisappear2EffectPrefab,
    0LL,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  this->fields.boardDisappearEffectFadePrefab = 0LL;
  sub_B2C2F8(
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
    AssetManager__releaseAsset_30152684(effectAssetData, 0LL);
    this->fields.effectAssetData = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.effectAssetData, 0LL, v52, v53, v54, v55, v56, v57);
  }
  fortificationAssetData = this->fields.fortificationAssetData;
  p_fortificationAssetData = (BattleServantConfConponent_o *)&this->fields.fortificationAssetData;
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAsset_30152684(fortificationAssetData, 0LL);
  p_fortificationAssetData->klass = 0LL;
  sub_B2C2F8(p_fortificationAssetData, 0LL, v60, v61, v62, v63, v64, v65);
}


void __fastcall QuestBoardListViewManager__RemoveTempBG(QuestBoardListViewManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mFolderBgTemp; // x20
  __int64 v4; // x1
  UnityEngine_Component_o **p_mFolderBgTemp; // x19
  UnityEngine_Object_o *gameObject; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_4186E17 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4186E17 = 1;
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
      sub_B2C434(0LL, v4);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_mFolderBgTemp, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35314896(gameObject, 0LL);
    *p_mFolderBgTemp = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)p_mFolderBgTemp, 0LL, v7, v8, v9, v10, v11, v12);
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
  CommonUI_o *Instance; // x0
  __int64 v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  const MethodInfo *v36; // x2
  const MethodInfo *v37; // x2
  System_Action_o *v38; // x0
  __int64 *v39; // x8
  System_Action_o *v40; // x21
  const MethodInfo *v41; // x2
  __int64 v42; // x22
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  __int64 v49; // x23
  const MethodInfo *v50; // x2
  float exitTime; // s0
  int32_t initMode; // w1
  System_Action_o *v53; // x21
  const MethodInfo *v54; // x5
  const MethodInfo *v55; // x2
  WebViewManager_o *v56; // x21
  AvalonSceneManager_c *v57; // x8
  float v58; // s8
  System_Action_o *v59; // x22
  CommonUI_o *v60; // x0
  float v61; // s0
  System_Action_o *v62; // x2
  WebViewManager_o *v63; // x20
  AvalonSceneManager_c *v64; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v66; // x21

  if ( (byte_4186E08 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B2C35C(&AvalonSceneManager_TypeInfo, v11);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v13);
    sub_B2C35C(&Method_QuestBoardListViewManager___c__DisplayClass103_0__RequestListObject_b__0__, v14);
    sub_B2C35C(&Method_QuestBoardListViewManager___c__DisplayClass103_0__RequestListObject_b__1__, v15);
    sub_B2C35C(&Method_QuestBoardListViewManager___c__DisplayClass103_0__RequestListObject_b__8__, v16);
    sub_B2C35C(&Method_QuestBoardListViewManager___c__DisplayClass103_0__RequestListObject_b__9__, v17);
    sub_B2C35C(&QuestBoardListViewManager___c__DisplayClass103_0_TypeInfo, v18);
    sub_B2C35C(&Method_QuestBoardListViewManager___c__DisplayClass103_2__RequestListObject_b__7__, v19);
    sub_B2C35C(&QuestBoardListViewManager___c__DisplayClass103_2_TypeInfo, v20);
    byte_4186E08 = 1;
  }
  v21 = sub_B2C42C(QuestBoardListViewManager___c__DisplayClass103_0_TypeInfo);
  QuestBoardListViewManager___c__DisplayClass103_0___ctor(
    (QuestBoardListViewManager___c__DisplayClass103_0_o *)v21,
    0LL);
  if ( !v21 )
    goto LABEL_45;
  *(_QWORD *)(v21 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v21 + 16), (System_Int32_array **)this, v24, v25, v26, v27, v28, v29);
  *(_QWORD *)(v21 + 32) = end_act;
  sub_B2C2F8((BattleServantConfConponent_o *)(v21 + 32), (System_Int32_array **)end_act, v30, v31, v32, v33, v34, v35);
  *(_BYTE *)(v21 + 40) = isNotInit;
  if ( !isNotInit )
    QuestBoardListViewManager__InitListObject(this, mode, v36);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_45;
  *(_BYTE *)(v21 + 24) = CommonUI__maskFadeIsOnTop(Instance, 0LL);
  switch ( this->fields.initMode )
  {
    case 3:
      this->fields.mIsDoing_Slide = 1;
      v38 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      v39 = &Method_QuestBoardListViewManager___c__DisplayClass103_0__RequestListObject_b__0__;
      goto LABEL_10;
    case 4:
      v42 = sub_B2C42C(QuestBoardListViewManager___c__DisplayClass103_2_TypeInfo);
      QuestBoardListViewManager___c__DisplayClass103_2___ctor(
        (QuestBoardListViewManager___c__DisplayClass103_2_o *)v42,
        0LL);
      if ( !v42 )
        goto LABEL_45;
      *(_QWORD *)(v42 + 24) = v21;
      v49 = v42 + 24;
      sub_B2C2F8((BattleServantConfConponent_o *)(v42 + 24), (System_Int32_array **)v21, v43, v44, v45, v46, v47, v48);
      this->fields.mIsDoing_Slide = 1;
      *(_DWORD *)(v42 + 16) = 0;
      if ( !isWhiteFade )
        goto LABEL_48;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      Instance = (CommonUI_o *)TerminalPramsManager__IsAuto(0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
LABEL_48:
        if ( *(_QWORD *)v49 )
        {
          if ( *(_BYTE *)(*(_QWORD *)v49 + 24LL) )
          {
            exitTime = *(float *)(v42 + 16);
          }
          else
          {
            exitTime = this->fields.exitTime;
            *(float *)(v42 + 16) = exitTime;
          }
          QuestBoardListViewManager__bgAlphaFade(this, this->fields.initMode, exitTime, v50);
          if ( *(_QWORD *)v49 )
          {
            QuestBoardListViewManager__SetSlideOut(
              this,
              *(float *)(v42 + 16),
              *(System_Action_o **)(*(_QWORD *)v49 + 32LL),
              v55);
            goto LABEL_43;
          }
        }
LABEL_45:
        sub_B2C434(Instance, v23);
      }
      this->fields.mFaded = 1;
      v63 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v64 = AvalonSceneManager_TypeInfo;
      if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v64 = AvalonSceneManager_TypeInfo;
      }
      DEFAULT_FADE_TIME = v64->static_fields->DEFAULT_FADE_TIME;
      v66 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(
        v66,
        (Il2CppObject *)v42,
        Method_QuestBoardListViewManager___c__DisplayClass103_2__RequestListObject_b__7__,
        0LL);
      if ( !v63 )
        goto LABEL_45;
      v60 = (CommonUI_o *)v63;
      v61 = DEFAULT_FADE_TIME;
      v62 = v66;
      goto LABEL_42;
    case 5:
      this->fields.mIsDoing_Slide = 0;
      v38 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      v39 = &Method_QuestBoardListViewManager___c__DisplayClass103_0__RequestListObject_b__1__;
LABEL_10:
      v40 = v38;
      System_Action___ctor(v38, (Il2CppObject *)v21, *v39, 0LL);
      QuestBoardListViewManager__changeBG(this, v40, v41);
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
        v53 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
        System_Action___ctor(
          v53,
          (Il2CppObject *)v21,
          Method_QuestBoardListViewManager___c__DisplayClass103_0__RequestListObject_b__9__,
          0LL);
        QuestBoardListViewManager__SetMode(this, 2, v53, 0, 0, v54);
        goto LABEL_43;
      }
      this->fields.mFaded = 1;
      v56 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v57 = AvalonSceneManager_TypeInfo;
      if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v57 = AvalonSceneManager_TypeInfo;
      }
      v58 = v57->static_fields->DEFAULT_FADE_TIME;
      v59 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(
        v59,
        (Il2CppObject *)v21,
        Method_QuestBoardListViewManager___c__DisplayClass103_0__RequestListObject_b__8__,
        0LL);
      if ( !v56 )
        goto LABEL_45;
      v60 = (CommonUI_o *)v56;
      v61 = v58;
      v62 = v59;
LABEL_42:
      CommonUI__maskFadeout(v60, 2, v61, v62, 0LL);
LABEL_43:
      Instance = (CommonUI_o *)this->fields.mNoneLabelParent;
      if ( !Instance )
        goto LABEL_45;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
      return;
    default:
      ActionExtensions__Call(*(System_Action_o **)(v21 + 32), 0LL);
      return;
  }
}


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
  TutorialEventSetRequest_o *FlagFromOnEventStart; // x0
  __int64 v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  QuestBoardListViewManager_o *v24; // x0
  const MethodInfo *v25; // x3
  int32_t id; // w20
  int32_t v27; // w22
  NetworkManager_ResultCallbackFunc_o *v28; // x19
  int32_t flagType; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4186E11 & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, eventEntity);
    sub_B2C35C(&Method_NetworkManager_getRequest_TutorialEventSetRequest___, v8);
    sub_B2C35C(&NetworkManager_TypeInfo, v9);
    sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, v10);
    sub_B2C35C(&Method_SingletonTemplate_QuestTree__get_Instance__, v11);
    sub_B2C35C(&SingletonTemplate_QuestTree__TypeInfo, v12);
    sub_B2C35C(&Method_QuestBoardListViewManager___c__DisplayClass116_0__RequestToRaiseTutorialFlag_b__0__, v13);
    sub_B2C35C(&QuestBoardListViewManager___c__DisplayClass116_0_TypeInfo, v14);
    byte_4186E11 = 1;
  }
  flagType = 0;
  v15 = sub_B2C42C(QuestBoardListViewManager___c__DisplayClass116_0_TypeInfo);
  QuestBoardListViewManager___c__DisplayClass116_0___ctor(
    (QuestBoardListViewManager___c__DisplayClass116_0_o *)v15,
    0LL);
  if ( !v15 )
    goto LABEL_22;
  *(_QWORD *)(v15 + 16) = clickAreaFunc;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v15 + 16),
    (System_Int32_array **)clickAreaFunc,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  FlagFromOnEventStart = (TutorialEventSetRequest_o *)QuestBoardListViewManager__TryGetFlagFromOnEventStart(
                                                        v24,
                                                        &flagType,
                                                        eventEntity,
                                                        v25);
  if ( ((unsigned __int8)FlagFromOnEventStart & 1) != 0 )
  {
    if ( !eventEntity )
      goto LABEL_22;
    id = eventEntity->fields.id;
    v27 = flagType;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( !CondType__IsEventTutorialFlagOn(id, v27, 0LL) )
    {
      if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
      }
      FlagFromOnEventStart = (TutorialEventSetRequest_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !FlagFromOnEventStart )
        goto LABEL_22;
      if ( QuestTree__IsWarOpen((QuestTree_o *)FlagFromOnEventStart, warId, 0LL) )
      {
        v28 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
        NetworkManager_ResultCallbackFunc___ctor(
          v28,
          (Il2CppObject *)v15,
          Method_QuestBoardListViewManager___c__DisplayClass116_0__RequestToRaiseTutorialFlag_b__0__,
          0LL);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        FlagFromOnEventStart = (TutorialEventSetRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                              v28,
                                                              (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_TutorialEventSetRequest___);
        if ( FlagFromOnEventStart )
        {
          TutorialEventSetRequest__beginRequest(FlagFromOnEventStart, v27, id, 0LL);
          return 1;
        }
LABEL_22:
        sub_B2C434(FlagFromOnEventStart, v17);
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
  AlphaTransitionCalculator_o *v7; // x21
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  __int64 v14; // x1
  AlphaTransitionCalculator_o *rewardIconAlphaCalculator; // x0

  if ( (byte_4186E0F & 1) == 0 )
  {
    sub_B2C35C(&AlphaTransitionCalculator_TypeInfo, method);
    sub_B2C35C(&QuestBoardListViewManager_TypeInfo, v3);
    byte_4186E0F = 1;
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
  v7 = (AlphaTransitionCalculator_o *)sub_B2C42C(AlphaTransitionCalculator_TypeInfo);
  AlphaTransitionCalculator___ctor(v7, v5, v6, 0LL);
  this->fields.rewardIconAlphaCalculator = v7;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.rewardIconAlphaCalculator,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  rewardIconAlphaCalculator = this->fields.rewardIconAlphaCalculator;
  if ( !rewardIconAlphaCalculator )
    sub_B2C434(0LL, v14);
  AlphaTransitionCalculator__MakeFadeInFinished(rewardIconAlphaCalculator, 0LL);
}


void __fastcall QuestBoardListViewManager__ResetBG(QuestBoardListViewManager_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *mFolderBg; // x0

  mFolderBg = (UnityEngine_Component_o *)this->fields.mFolderBg;
  this->fields.mRequestedBGid = 0;
  if ( !mFolderBg
    || (mFolderBg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mFolderBg, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mFolderBg, 0, 0LL),
        (mFolderBg = (UnityEngine_Component_o *)this->fields.mFolderBg) == 0LL) )
  {
    sub_B2C434(mFolderBg, method);
  }
  ExUITexture__ClearImage((ExUITexture_o *)mFolderBg, 0LL);
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
  _BOOL8 v10; // x0
  __int64 v11; // x1
  struct QuestBoardListEffectAppearComponent_o *v12; // x8

  if ( (byte_4186E0C & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, *(_QWORD *)&item_index);
    byte_4186E0C = 1;
  }
  effectAppearComponent = (UnityEngine_Object_o *)this->fields.effectAppearComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v10 = UnityEngine_Object__op_Inequality(effectAppearComponent, 0LL, 0LL);
  if ( v10 )
  {
    v12 = this->fields.effectAppearComponent;
    if ( !v12 )
      sub_B2C434(v10, v11);
    forceShiftY = v12->fields.targetBoardForceShiftPosY;
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
  __int64 v12; // x1
  UnityEngine_Collider_o *mBoxCollider; // x0
  const MethodInfo *v14; // x5
  bool v15; // w3
  bool v16; // w4
  int32_t v17; // w1
  QuestBoardListViewManager_o *v18; // x0
  System_Action_o *v19; // x2

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
    sub_B2C434(0LL, v12);
  UnityEngine_Collider__set_enabled(mBoxCollider, this->fields.isInput, 0LL);
  if ( (unsigned int)(mode - 3) < 4 )
    goto LABEL_11;
  if ( mode == 2 )
  {
    v16 = isNotInit;
    v17 = 3;
    v18 = this;
    goto LABEL_17;
  }
  if ( mode != 1 )
  {
    v16 = isNotInit;
    v18 = this;
    v17 = 0;
LABEL_17:
    v19 = end_act;
    v15 = 0;
    goto LABEL_18;
  }
LABEL_11:
  v15 = isFade;
  v16 = isNotInit;
  v17 = 2;
  v18 = this;
  v19 = end_act;
LABEL_18:
  QuestBoardListViewManager__RequestListObject(v18, v17, v19, v15, v16, v14);
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
    sub_B2C434(0LL, isActive);
  UnityEngine_GameObject__SetActive(mNoneLabelParent, isActive, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestBoardListViewManager__SetObjectItem(
        QuestBoardListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  QuestBoardListViewManager_o *v5; // x20
  __int64 v6; // x10
  int32_t initMode; // w20
  const MethodInfo *v8; // x3
  float v9; // s0
  int v10; // s1
  int32_t v13; // w1

  v5 = this;
  if ( (byte_4186E05 & 1) == 0 )
  {
    this = (QuestBoardListViewManager_o *)sub_B2C35C(&QuestBoardListViewObject_TypeInfo, obj);
    byte_4186E05 = 1;
  }
  if ( !obj
    || (v6 = *(&QuestBoardListViewObject_TypeInfo->_2.bitflags2 + 1), *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (QuestBoardListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != QuestBoardListViewObject_TypeInfo )
  {
    sub_B2C434(this, obj);
  }
  initMode = v5->fields.initMode;
  *(UnityEngine_Vector3_o *)&v9 = UnityEngine_Vector3__get_zero(0LL);
  if ( initMode == 2 )
    v13 = 3;
  else
    v13 = 2;
  QuestBoardListViewObject__Init_23867596(
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
  __int64 v6; // x1
  SlideFadeObject_o *v7; // x19
  float v8; // s8
  float v9; // s10
  float v10; // s9
  QuestBoardListViewManager_c *v11; // x0
  float OUT_POS_OFS_X; // s0
  UnityEngine_Vector3_o v13; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4186E0B & 1) == 0 )
  {
    sub_B2C35C(&Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___, method);
    sub_B2C35C(&QuestBoardListViewManager_TypeInfo, v3);
    byte_4186E0B = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_UIWidget = GameObjectExtensions__SafeGetComponent_UIWidget_(
                         gameObject,
                         (const MethodInfo_1AA8660 *)Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
  if ( !Component_UIWidget )
    sub_B2C434(0LL, v6);
  v7 = (SlideFadeObject_o *)Component_UIWidget;
  v9 = *(float *)&Component_UIWidget->fields.updateAnchors;
  v8 = *((float *)&Component_UIWidget->fields.updateAnchors + 1);
  v10 = *(float *)&Component_UIWidget->fields.mGo;
  v11 = QuestBoardListViewManager_TypeInfo;
  if ( (BYTE3(QuestBoardListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewManager_TypeInfo);
  }
  OUT_POS_OFS_X = QuestBoardListViewManager__get_OUT_POS_OFS_X((const MethodInfo *)v11);
  v13.fields.y = v8;
  v13.fields.z = v10;
  v13.fields.x = v9 + OUT_POS_OFS_X;
  SlideFadeObject__SetPosition(v7, v13, 0LL);
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

  if ( (byte_4186DFC & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, isEnable);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    byte_4186DFC = 1;
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
      UnityEngine_Object__DestroyImmediate_35315108(klass, 0LL);
      p_blockMask->klass = 0LL;
      sub_B2C2F8(p_blockMask, 0LL, v9, v10, v11, v12, v13, v14);
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
                                                   (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        this->fields.blockMask = v17;
        sub_B2C2F8(
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

  if ( (byte_4186E18 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UIPanel___, *(_QWORD *)&depth);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    sub_B2C35C(&QuestBoardListViewManager_TypeInfo, v8);
    byte_4186E18 = 1;
  }
  scrollView = (UnityEngine_Component_o *)this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_17;
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      scrollView,
                                                      (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  scrollView = (UnityEngine_Component_o *)UnityEngine_Object__op_Equality(Component_WebViewObject, 0LL, 0LL);
  if ( ((unsigned __int8)scrollView & 1) == 0 )
  {
    if ( isDefault )
    {
      scrollView = (UnityEngine_Component_o *)QuestBoardListViewManager_TypeInfo;
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
    sub_B2C434(scrollView, *(_QWORD *)&depth);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestBoardListViewManager__SetShowingInfo(
        QuestBoardListViewManager_o *this,
        int32_t idx,
        bool onOff,
        const MethodInfo *method)
{
  int32_t v5; // w20
  QuestBoardListViewManager_o *v6; // x21
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  ListViewItem_o *v10; // x8
  struct ListViewObject_o *viewObject; // x20
  __int64 v12; // x9
  QuestBoardListViewManager_o *v13; // x0
  const MethodInfo *v14; // x1

  v5 = idx;
  v6 = this;
  if ( (byte_4186E14 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&idx);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    this = (QuestBoardListViewManager_o *)sub_B2C35C(&QuestBoardListViewObject_TypeInfo, v8);
    byte_4186E14 = 1;
  }
  itemList = v6->fields.itemList;
  if ( !itemList )
    goto LABEL_17;
  if ( itemList->fields._size <= (unsigned int)v5 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  v10 = itemList->fields._items->m_Items[v5];
  if ( !v10 )
    goto LABEL_17;
  viewObject = v10->fields.viewObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (QuestBoardListViewManager_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)viewObject, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !viewObject )
      goto LABEL_17;
    *(_QWORD *)&idx = QuestBoardListViewObject_TypeInfo;
    v12 = *(&QuestBoardListViewObject_TypeInfo->_2.bitflags2 + 1);
    if ( *(&viewObject->klass->_2.bitflags2 + 1) >= (unsigned int)v12
      && (QuestBoardListViewObject_c *)viewObject->klass->_2.typeHierarchy[v12 - 1] == QuestBoardListViewObject_TypeInfo )
    {
      this = (QuestBoardListViewManager_o *)viewObject[1].monitor;
      if ( this )
      {
        QuestBoardListViewItemDraw__setInfoShowing((QuestBoardListViewItemDraw_o *)this, onOff, 0LL);
        return;
      }
LABEL_17:
      sub_B2C434(this, *(_QWORD *)&idx);
    }
    v13 = (QuestBoardListViewManager_o *)sub_B2C728(viewObject);
    QuestBoardListViewManager__RequestConsumeColorReset(v13, v14);
  }
}


void __fastcall QuestBoardListViewManager__SetShowingInfoAllOff(
        QuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_QuestBoardListViewObject__o *ObjectList; // x0
  __int64 v5; // x1
  int size; // w8
  System_Collections_Generic_List_QuestBoardListViewObject__o *v7; // x19
  unsigned int v8; // w20
  QuestBoardListViewObject_o *v9; // x8

  if ( (byte_4186E13 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestBoardListViewObject__get_Count__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestBoardListViewObject__get_Item__, v3);
    byte_4186E13 = 1;
  }
  ObjectList = QuestBoardListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    goto LABEL_12;
  size = ObjectList->fields._size;
  v7 = ObjectList;
  if ( size >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( size <= v8 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v9 = v7->fields._items->m_Items[v8];
      if ( !v9 )
        break;
      ObjectList = (System_Collections_Generic_List_QuestBoardListViewObject__o *)v9->fields.itemDraw;
      if ( !ObjectList )
        break;
      QuestBoardListViewItemDraw__setInfoShowing((QuestBoardListViewItemDraw_o *)ObjectList, 0, 0LL);
      size = v7->fields._size;
      if ( (int)++v8 >= size )
        return;
    }
LABEL_12:
    sub_B2C434(ObjectList, v5);
  }
}


void __fastcall QuestBoardListViewManager__SetSlideOut(
        QuestBoardListViewManager_o *this,
        float time,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x19
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v13; // x1
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
  UnityEngine_GameObject_o *v26; // x0
  UIWidget_o *Component_UIWidget; // x0
  SlideFadeObject_o *v28; // x20
  float OUT_POS_OFS_X; // s9
  System_Action_o *v30; // x21

  if ( (byte_4186E09 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, end_act);
    sub_B2C35C(&Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___, v7);
    sub_B2C35C(&QuestBoardListViewManager_TypeInfo, v8);
    sub_B2C35C(&Method_QuestBoardListViewManager___c__DisplayClass104_0__SetSlideOut_b__0__, v9);
    sub_B2C35C(&QuestBoardListViewManager___c__DisplayClass104_0_TypeInfo, v10);
    byte_4186E09 = 1;
  }
  v11 = sub_B2C42C(QuestBoardListViewManager___c__DisplayClass104_0_TypeInfo);
  QuestBoardListViewManager___c__DisplayClass104_0___ctor(
    (QuestBoardListViewManager___c__DisplayClass104_0_o *)v11,
    0LL);
  if ( !v11 )
    goto LABEL_10;
  *(_QWORD *)(v11 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v11 + 16), (System_Int32_array **)this, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v11 + 24) = end_act;
  sub_B2C2F8((BattleServantConfConponent_o *)(v11 + 24), (System_Int32_array **)end_act, v20, v21, v22, v23, v24, v25);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_10;
  v26 = UnityEngine_GameObject__get_gameObject(gameObject, 0LL);
  Component_UIWidget = GameObjectExtensions__SafeGetComponent_UIWidget_(
                         v26,
                         (const MethodInfo_1AA8660 *)Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
  v28 = (SlideFadeObject_o *)Component_UIWidget;
  if ( (BYTE3(QuestBoardListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewManager_TypeInfo);
  }
  OUT_POS_OFS_X = QuestBoardListViewManager__get_OUT_POS_OFS_X((const MethodInfo *)Component_UIWidget);
  v30 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v30,
    (Il2CppObject *)v11,
    Method_QuestBoardListViewManager___c__DisplayClass104_0__SetSlideOut_b__0__,
    0LL);
  if ( !v28 )
LABEL_10:
    sub_B2C434(gameObject, v13);
  SlideFadeObject__SlideOut_24783204(v28, OUT_POS_OFS_X, time, 0.0, v30, 0LL);
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
  char v14; // w25
  __int64 v15; // x10
  struct System_Collections_Generic_List_ListViewItem__o *v16; // x0
  struct System_Collections_Generic_List_ListViewItem__o *bottomItemList; // x0
  _QWORD *monitor; // x8
  __int64 v19; // x8
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4186DFF & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, *(_QWORD *)&targetWarId);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__Add__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__Clear__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v11);
    sub_B2C35C(&QuestBoardListViewItem_TypeInfo, v12);
    byte_4186DFF = 1;
  }
  memset(&v21, 0, sizeof(v21));
  if ( targetWarId )
  {
    topItemList = this->fields.topItemList;
    if ( !topItemList
      || (System_Collections_Generic_List_XWeaponTrail_Element___Clear(
            (System_Collections_Generic_List_XWeaponTrail_Element__o *)topItemList,
            (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_ListViewItem__Clear__),
          (topItemList = this->fields.bottomItemList) == 0LL)
      || (System_Collections_Generic_List_XWeaponTrail_Element___Clear(
            (System_Collections_Generic_List_XWeaponTrail_Element__o *)topItemList,
            (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_ListViewItem__Clear__),
          (topItemList = this->fields.itemList) == 0LL) )
    {
      sub_B2C434(topItemList, *(_QWORD *)&targetWarId);
    }
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v20,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)topItemList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v21 = v20;
    v14 = 1;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( !System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v21,
                (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
        {
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
            &v21,
            (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          return;
        }
        if ( v21.fields.current )
        {
          v15 = *(&QuestBoardListViewItem_TypeInfo->_2.bitflags2 + 1);
          if ( *(&v21.fields.current->klass->_2.bitflags2 + 1) >= (unsigned int)v15
            && (QuestBoardListViewItem_c *)v21.fields.current->klass->_2.typeHierarchy[v15 - 1] == QuestBoardListViewItem_TypeInfo )
          {
            monitor = v21.fields.current[7].monitor;
            if ( monitor )
            {
              v19 = monitor[14];
              if ( v19 )
              {
                if ( *(_DWORD *)(v19 + 16) != 1 && *(_DWORD *)(v19 + 20) == targetWarId )
                  break;
              }
            }
          }
        }
        if ( (v14 & 1) != 0 )
        {
          v16 = this->fields.topItemList;
          if ( !v16 )
            sub_B2C434(0LL, v21.fields.current);
          v14 = 1;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v16,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v21.fields.current,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        }
        else
        {
          bottomItemList = this->fields.bottomItemList;
          if ( !bottomItemList )
            sub_B2C434(0LL, v21.fields.current);
LABEL_16:
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)bottomItemList,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v21.fields.current,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
          v14 = 0;
        }
      }
      v14 = 0;
      if ( isClose )
      {
        bottomItemList = this->fields.bottomItemList;
        if ( !bottomItemList )
          sub_B2C434(0LL, v21.fields.current);
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
  UnityEngine_GameObject_o *transform; // x0
  __int64 v11; // x1
  UnityEngine_GameObject_o *v12; // x20
  UnityEngine_Transform_o *v13; // x22
  UnityEngine_Transform_o *v14; // x21
  int v15; // s0
  UnityEngine_Transform_o *v18; // x21
  int v19; // s0
  UnityEngine_Transform_o *v23; // x21
  int v24; // s0
  struct QuestBoardListEffectAppearComponent_o *Component_srcLineSprite; // x0
  struct QuestBoardListEffectAppearComponent_o **p_effectAppearComponent; // x20
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7

  if ( (byte_4186E1E & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectAppearComponent___, *(_QWORD *)&warId);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    byte_4186E1E = 1;
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
      transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                (UnityEngine_UI_Dropdown_DropdownItem_o *)v9,
                                                (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( transform )
      {
        v12 = transform;
        transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
        if ( QuestBoardObjForWarId )
        {
          v13 = (UnityEngine_Transform_o *)transform;
          transform = UnityEngine_Component__get_gameObject(QuestBoardObjForWarId, 0LL);
          if ( transform )
          {
            transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
            if ( v13 )
            {
              UnityEngine_Transform__set_parent(v13, (UnityEngine_Transform_o *)transform, 0LL);
              v14 = UnityEngine_GameObject__get_transform(v12, 0LL);
              *(UnityEngine_Vector3_o *)&v15 = UnityEngine_Vector3__get_zero(0LL);
              if ( v14 )
              {
                UnityEngine_Transform__set_localPosition(v14, *(UnityEngine_Vector3_o *)&v15, 0LL);
                v18 = UnityEngine_GameObject__get_transform(v12, 0LL);
                *(UnityEngine_Quaternion_o *)&v19 = UnityEngine_Quaternion__get_identity(0LL);
                if ( v18 )
                {
                  UnityEngine_Transform__set_localRotation(v18, *(UnityEngine_Quaternion_o *)&v19, 0LL);
                  v23 = UnityEngine_GameObject__get_transform(v12, 0LL);
                  *(UnityEngine_Vector3_o *)&v24 = UnityEngine_Vector3__get_one(0LL);
                  if ( v23 )
                  {
                    UnityEngine_Transform__set_localScale(v23, *(UnityEngine_Vector3_o *)&v24, 0LL);
                    Component_srcLineSprite = (struct QuestBoardListEffectAppearComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                                v12,
                                                                                                (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectAppearComponent___);
                    p_effectAppearComponent = &this->fields.effectAppearComponent;
                    this->fields.effectAppearComponent = Component_srcLineSprite;
                    sub_B2C2F8(
                      (BattleServantConfConponent_o *)&this->fields.effectAppearComponent,
                      (System_Int32_array **)Component_srcLineSprite,
                      v29,
                      v30,
                      v31,
                      v32,
                      v33,
                      v34);
                    if ( UnityEngine_Object__op_Equality(
                           (UnityEngine_Object_o *)this->fields.effectAppearComponent,
                           0LL,
                           0LL) )
                    {
                      return;
                    }
                    transform = (UnityEngine_GameObject_o *)*p_effectAppearComponent;
                    if ( *p_effectAppearComponent )
                    {
                      QuestBoardListEffectComponent__Init(
                        (QuestBoardListEffectComponent_o *)transform,
                        0,
                        0.0,
                        0.0,
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
      sub_B2C434(transform, v11);
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
  UnityEngine_GameObject_o *transform; // x0
  __int64 v11; // x1
  UnityEngine_GameObject_o *v12; // x21
  UnityEngine_Transform_o *v13; // x22
  struct QuestBoardListEffectAppearComponent_o *Component_srcLineSprite; // x0
  struct QuestBoardListEffectAppearComponent_o **p_effectAppearComponent; // x20
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_4186E26 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectAppearComponent___, *(_QWORD *)&warId);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    byte_4186E26 = 1;
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
      transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                (UnityEngine_UI_Dropdown_DropdownItem_o *)v9,
                                                (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( transform )
      {
        v12 = transform;
        transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
        if ( QuestBoardObjForWarId )
        {
          v13 = (UnityEngine_Transform_o *)transform;
          transform = UnityEngine_Component__get_gameObject(QuestBoardObjForWarId, 0LL);
          if ( transform )
          {
            transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
            if ( v13 )
            {
              UnityEngine_Transform__set_parent(v13, (UnityEngine_Transform_o *)transform, 0LL);
              GameObjectExtensions__ResetTransform(v12, 0LL);
              Component_srcLineSprite = (struct QuestBoardListEffectAppearComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                          v12,
                                                                                          (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectAppearComponent___);
              p_effectAppearComponent = &this->fields.effectAppearComponent;
              this->fields.effectAppearComponent = Component_srcLineSprite;
              sub_B2C2F8(
                (BattleServantConfConponent_o *)&this->fields.effectAppearComponent,
                (System_Int32_array **)Component_srcLineSprite,
                v16,
                v17,
                v18,
                v19,
                v20,
                v21);
              if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)this->fields.effectAppearComponent, 0LL, 0LL) )
                return;
              transform = (UnityEngine_GameObject_o *)*p_effectAppearComponent;
              if ( *p_effectAppearComponent )
              {
                QuestBoardListEffectComponent__Init((QuestBoardListEffectComponent_o *)transform, 0, 0.0, 0.0, 0LL);
                return;
              }
            }
          }
        }
      }
      sub_B2C434(transform, v11);
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
  UnityEngine_GameObject_o *transform; // x0
  __int64 v8; // x1
  UnityEngine_GameObject_o *v9; // x20
  UnityEngine_Transform_o *v10; // x21
  UnityEngine_Transform_o *v11; // x21
  int v12; // s0
  UnityEngine_Transform_o *v15; // x21
  int v16; // s0
  UnityEngine_Transform_o *v20; // x21
  int v21; // s0
  struct QuestBoardListEffectComponent_o *Component_srcLineSprite; // x0
  struct QuestBoardListEffectComponent_o **p_effectAppearFadeComponent; // x20
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7

  if ( (byte_4186E1F & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectComponent___, method);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v3);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v4);
    byte_4186E1F = 1;
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
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                              (UnityEngine_UI_Dropdown_DropdownItem_o *)v6,
                                              (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( transform )
    {
      v9 = transform;
      transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
      if ( this->fields.fadePanel )
      {
        v10 = (UnityEngine_Transform_o *)transform;
        transform = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)this->fields.fadePanel,
                                                  0LL);
        if ( v10 )
        {
          UnityEngine_Transform__set_parent(v10, (UnityEngine_Transform_o *)transform, 0LL);
          v11 = UnityEngine_GameObject__get_transform(v9, 0LL);
          *(UnityEngine_Vector3_o *)&v12 = UnityEngine_Vector3__get_zero(0LL);
          if ( v11 )
          {
            UnityEngine_Transform__set_localPosition(v11, *(UnityEngine_Vector3_o *)&v12, 0LL);
            v15 = UnityEngine_GameObject__get_transform(v9, 0LL);
            *(UnityEngine_Quaternion_o *)&v16 = UnityEngine_Quaternion__get_identity(0LL);
            if ( v15 )
            {
              UnityEngine_Transform__set_localRotation(v15, *(UnityEngine_Quaternion_o *)&v16, 0LL);
              v20 = UnityEngine_GameObject__get_transform(v9, 0LL);
              *(UnityEngine_Vector3_o *)&v21 = UnityEngine_Vector3__get_one(0LL);
              if ( v20 )
              {
                UnityEngine_Transform__set_localScale(v20, *(UnityEngine_Vector3_o *)&v21, 0LL);
                Component_srcLineSprite = (struct QuestBoardListEffectComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                      v9,
                                                                                      (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectComponent___);
                p_effectAppearFadeComponent = &this->fields.effectAppearFadeComponent;
                this->fields.effectAppearFadeComponent = Component_srcLineSprite;
                sub_B2C2F8(
                  (BattleServantConfConponent_o *)&this->fields.effectAppearFadeComponent,
                  (System_Int32_array **)Component_srcLineSprite,
                  v26,
                  v27,
                  v28,
                  v29,
                  v30,
                  v31);
                if ( UnityEngine_Object__op_Equality(
                       (UnityEngine_Object_o *)this->fields.effectAppearFadeComponent,
                       0LL,
                       0LL) )
                {
                  return;
                }
                transform = (UnityEngine_GameObject_o *)*p_effectAppearFadeComponent;
                if ( *p_effectAppearFadeComponent )
                {
                  QuestBoardListEffectComponent__Init((QuestBoardListEffectComponent_o *)transform, 0, 0.0, 0.0, 0LL);
                  return;
                }
              }
            }
          }
        }
      }
    }
    sub_B2C434(transform, v8);
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
  UnityEngine_GameObject_o *transform; // x0
  __int64 v8; // x1
  UnityEngine_GameObject_o *v9; // x20
  UnityEngine_Transform_o *v10; // x21
  struct QuestBoardListEffectComponent_o *Component_srcLineSprite; // x0
  struct QuestBoardListEffectComponent_o **p_effectAppearFadeComponent; // x20
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_4186E27 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectComponent___, method);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v3);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v4);
    byte_4186E27 = 1;
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
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                              (UnityEngine_UI_Dropdown_DropdownItem_o *)v6,
                                              (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( transform )
    {
      v9 = transform;
      transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
      if ( this->fields.fadePanel )
      {
        v10 = (UnityEngine_Transform_o *)transform;
        transform = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)this->fields.fadePanel,
                                                  0LL);
        if ( v10 )
        {
          UnityEngine_Transform__set_parent(v10, (UnityEngine_Transform_o *)transform, 0LL);
          GameObjectExtensions__ResetTransform(v9, 0LL);
          Component_srcLineSprite = (struct QuestBoardListEffectComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                v9,
                                                                                (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectComponent___);
          p_effectAppearFadeComponent = &this->fields.effectAppearFadeComponent;
          this->fields.effectAppearFadeComponent = Component_srcLineSprite;
          sub_B2C2F8(
            (BattleServantConfConponent_o *)&this->fields.effectAppearFadeComponent,
            (System_Int32_array **)Component_srcLineSprite,
            v13,
            v14,
            v15,
            v16,
            v17,
            v18);
          if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)this->fields.effectAppearFadeComponent, 0LL, 0LL) )
            return;
          transform = (UnityEngine_GameObject_o *)*p_effectAppearFadeComponent;
          if ( *p_effectAppearFadeComponent )
          {
            QuestBoardListEffectComponent__Init((QuestBoardListEffectComponent_o *)transform, 0, 0.0, 0.0, 0LL);
            return;
          }
        }
      }
    }
    sub_B2C434(transform, v8);
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
  UnityEngine_GameObject_o *transform; // x0
  __int64 v15; // x1
  UnityEngine_GameObject_o *v16; // x21
  UnityEngine_Transform_o *v17; // x23
  UnityEngine_Transform_o *v18; // x22
  int v19; // s0
  UnityEngine_Transform_o *v22; // x22
  int v23; // s0
  UnityEngine_Transform_o *v27; // x22
  int v28; // s0
  struct QuestBoardListEffectDisappearComponent_o *Component_srcLineSprite; // x0
  struct QuestBoardListEffectDisappearComponent_o **p_effectDisappearComponent; // x22
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  float v39; // s1

  if ( (byte_4186E23 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectDisappearComponent___, *(_QWORD *)&warId);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    byte_4186E23 = 1;
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
      transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                (UnityEngine_UI_Dropdown_DropdownItem_o *)v13,
                                                (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( !transform )
        goto LABEL_29;
      v16 = transform;
      transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
      if ( !QuestBoardObjForWarId )
        goto LABEL_29;
      v17 = (UnityEngine_Transform_o *)transform;
      transform = UnityEngine_Component__get_gameObject(QuestBoardObjForWarId, 0LL);
      if ( !transform )
        goto LABEL_29;
      transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
      if ( !v17 )
        goto LABEL_29;
      UnityEngine_Transform__set_parent(v17, (UnityEngine_Transform_o *)transform, 0LL);
      v18 = UnityEngine_GameObject__get_transform(v16, 0LL);
      *(UnityEngine_Vector3_o *)&v19 = UnityEngine_Vector3__get_zero(0LL);
      if ( !v18 )
        goto LABEL_29;
      UnityEngine_Transform__set_localPosition(v18, *(UnityEngine_Vector3_o *)&v19, 0LL);
      v22 = UnityEngine_GameObject__get_transform(v16, 0LL);
      *(UnityEngine_Quaternion_o *)&v23 = UnityEngine_Quaternion__get_identity(0LL);
      if ( !v22 )
        goto LABEL_29;
      UnityEngine_Transform__set_localRotation(v22, *(UnityEngine_Quaternion_o *)&v23, 0LL);
      v27 = UnityEngine_GameObject__get_transform(v16, 0LL);
      *(UnityEngine_Vector3_o *)&v28 = UnityEngine_Vector3__get_one(0LL);
      if ( !v27 )
        goto LABEL_29;
      UnityEngine_Transform__set_localScale(v27, *(UnityEngine_Vector3_o *)&v28, 0LL);
      Component_srcLineSprite = (struct QuestBoardListEffectDisappearComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                     v16,
                                                                                     (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectDisappearComponent___);
      p_effectDisappearComponent = &this->fields.effectDisappearComponent;
      this->fields.effectDisappearComponent = Component_srcLineSprite;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.effectDisappearComponent,
        (System_Int32_array **)Component_srcLineSprite,
        v33,
        v34,
        v35,
        v36,
        v37,
        v38);
      transform = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(
                                                (UnityEngine_Object_o *)this->fields.effectDisappearComponent,
                                                0LL,
                                                0LL);
      if ( ((unsigned __int8)transform & 1) != 0 )
        return;
      if ( !*p_effectDisappearComponent
        || (GameObjectExtensions__SetLocalPositionY(
              v16,
              (*p_effectDisappearComponent)->fields.disappearEffectShiftPosY,
              0LL),
            (transform = (UnityEngine_GameObject_o *)*p_effectDisappearComponent) == 0LL) )
      {
LABEL_29:
        sub_B2C434(transform, v15);
      }
      if ( isNextBoardReleased )
        v39 = endTime;
      else
        v39 = 0.0;
      QuestBoardListEffectComponent__Init((QuestBoardListEffectComponent_o *)transform, 1, 0.0, v39, 0LL);
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
  void *transform; // x0
  __int64 v23; // x1
  UnityEngine_GameObject_o *v24; // x22
  UnityEngine_Transform_o *v25; // x24
  UnityEngine_Transform_o *v26; // x23
  int v27; // s0
  UnityEngine_Transform_o *v30; // x23
  int v31; // s0
  UnityEngine_Transform_o *v35; // x23
  int v36; // s0
  struct QuestBoardListEffectBoardOpenComponent_o *Component_srcLineSprite; // x0
  struct QuestBoardListEffectBoardOpenComponent_o **p_effectDisappear2BbComponent; // x21
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  UnityEngine_Object_o *effectDisappear2BbComponent; // x19
  struct QuestBoardListEffectComponent_o *v48; // x0
  struct QuestBoardListEffectComponent_o **p_effectDisappear2Component; // x20
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  UnityEngine_Object_o *effectDisappear2Component; // x21
  UnityEngine_Object_o *effectDisappearComponent; // x21
  struct QuestBoardListEffectDisappearComponent_o *v58; // x8
  struct QuestBoardListEffectDisappearComponent_o *v59; // x8

  if ( (byte_4186E24 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectBoardOpenComponent___, *(_QWORD *)&warId);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectComponent___, v15);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v16);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v17);
    byte_4186E24 = 1;
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
      transform = UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                    v21,
                    (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( transform )
      {
        v24 = (UnityEngine_GameObject_o *)transform;
        transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
        if ( QuestBoardObjForWarId )
        {
          v25 = (UnityEngine_Transform_o *)transform;
          transform = UnityEngine_Component__get_gameObject(QuestBoardObjForWarId, 0LL);
          if ( transform )
          {
            transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
            if ( v25 )
            {
              UnityEngine_Transform__set_parent(v25, (UnityEngine_Transform_o *)transform, 0LL);
              v26 = UnityEngine_GameObject__get_transform(v24, 0LL);
              *(UnityEngine_Vector3_o *)&v27 = UnityEngine_Vector3__get_zero(0LL);
              if ( v26 )
              {
                UnityEngine_Transform__set_localPosition(v26, *(UnityEngine_Vector3_o *)&v27, 0LL);
                v30 = UnityEngine_GameObject__get_transform(v24, 0LL);
                *(UnityEngine_Quaternion_o *)&v31 = UnityEngine_Quaternion__get_identity(0LL);
                if ( v30 )
                {
                  UnityEngine_Transform__set_localRotation(v30, *(UnityEngine_Quaternion_o *)&v31, 0LL);
                  v35 = UnityEngine_GameObject__get_transform(v24, 0LL);
                  *(UnityEngine_Vector3_o *)&v36 = UnityEngine_Vector3__get_one(0LL);
                  if ( v35 )
                  {
                    UnityEngine_Transform__set_localScale(v35, *(UnityEngine_Vector3_o *)&v36, 0LL);
                    if ( isOnlyBoardOpen )
                    {
                      Component_srcLineSprite = (struct QuestBoardListEffectBoardOpenComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                                     v24,
                                                                                                     (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectBoardOpenComponent___);
                      p_effectDisappear2BbComponent = &this->fields.effectDisappear2BbComponent;
                      this->fields.effectDisappear2BbComponent = Component_srcLineSprite;
                      sub_B2C2F8(
                        (BattleServantConfConponent_o *)&this->fields.effectDisappear2BbComponent,
                        (System_Int32_array **)Component_srcLineSprite,
                        v41,
                        v42,
                        v43,
                        v44,
                        v45,
                        v46);
                      effectDisappear2BbComponent = (UnityEngine_Object_o *)this->fields.effectDisappear2BbComponent;
                      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      }
                      if ( UnityEngine_Object__op_Equality(effectDisappear2BbComponent, 0LL, 0LL) )
                        return;
                      transform = *p_effectDisappear2BbComponent;
                      if ( isNTBoard )
                      {
                        if ( !transform )
                          goto LABEL_49;
                        startTime = *((float *)transform + 27);
                        endTime = *((float *)transform + 28);
                        actStartTime = *((float *)transform + 29);
                      }
                      else if ( !transform )
                      {
                        goto LABEL_49;
                      }
                      QuestBoardListEffectComponent__Init(
                        (QuestBoardListEffectComponent_o *)transform,
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
                      v48 = (struct QuestBoardListEffectComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                        v24,
                                                                        (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectComponent___);
                      p_effectDisappear2Component = &this->fields.effectDisappear2Component;
                      this->fields.effectDisappear2Component = v48;
                      sub_B2C2F8(
                        (BattleServantConfConponent_o *)&this->fields.effectDisappear2Component,
                        (System_Int32_array **)v48,
                        v50,
                        v51,
                        v52,
                        v53,
                        v54,
                        v55);
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
                      transform = (void *)UnityEngine_Object__op_Inequality(effectDisappearComponent, 0LL, 0LL);
                      if ( ((unsigned __int8)transform & 1) != 0 )
                      {
                        v58 = this->fields.effectDisappearComponent;
                        if ( !v58 )
                          goto LABEL_49;
                        GameObjectExtensions__SetLocalPositionX(v24, v58->fields.disappearEffect2ShiftPosX, 0LL);
                        v59 = this->fields.effectDisappearComponent;
                        if ( !v59 )
                          goto LABEL_49;
                        GameObjectExtensions__SetLocalPositionY(v24, v59->fields.disappearEffect2ShiftPosY, 0LL);
                      }
                      transform = *p_effectDisappear2Component;
                      if ( *p_effectDisappear2Component )
                      {
                        QuestBoardListEffectComponent__Init(
                          (QuestBoardListEffectComponent_o *)transform,
                          0,
                          0.0,
                          0.0,
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
LABEL_49:
      sub_B2C434(transform, v23);
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
  UnityEngine_GameObject_o *transform; // x0
  __int64 v12; // x1
  UnityEngine_GameObject_o *v13; // x21
  UnityEngine_Transform_o *v14; // x22
  UnityEngine_Transform_o *v15; // x22
  int v16; // s0
  UnityEngine_Transform_o *v19; // x22
  int v20; // s0
  UnityEngine_Transform_o *v24; // x22
  int v25; // s0
  struct QuestBoardListEffectComponent_o *Component_srcLineSprite; // x0
  struct QuestBoardListEffectComponent_o **p_effectDisappearFadeComponent; // x21
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7

  if ( (byte_4186E25 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectComponent___, isPlayingAct);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v7);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    byte_4186E25 = 1;
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
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                              (UnityEngine_UI_Dropdown_DropdownItem_o *)v10,
                                              (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_22;
    v13 = transform;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
    if ( !this->fields.fadePanel )
      goto LABEL_22;
    v14 = (UnityEngine_Transform_o *)transform;
    transform = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                              (UnityEngine_Component_o *)this->fields.fadePanel,
                                              0LL);
    if ( !v14 )
      goto LABEL_22;
    UnityEngine_Transform__set_parent(v14, (UnityEngine_Transform_o *)transform, 0LL);
    v15 = UnityEngine_GameObject__get_transform(v13, 0LL);
    *(UnityEngine_Vector3_o *)&v16 = UnityEngine_Vector3__get_zero(0LL);
    if ( !v15 )
      goto LABEL_22;
    UnityEngine_Transform__set_localPosition(v15, *(UnityEngine_Vector3_o *)&v16, 0LL);
    v19 = UnityEngine_GameObject__get_transform(v13, 0LL);
    *(UnityEngine_Quaternion_o *)&v20 = UnityEngine_Quaternion__get_identity(0LL);
    if ( !v19 )
      goto LABEL_22;
    UnityEngine_Transform__set_localRotation(v19, *(UnityEngine_Quaternion_o *)&v20, 0LL);
    v24 = UnityEngine_GameObject__get_transform(v13, 0LL);
    *(UnityEngine_Vector3_o *)&v25 = UnityEngine_Vector3__get_one(0LL);
    if ( !v24 )
      goto LABEL_22;
    UnityEngine_Transform__set_localScale(v24, *(UnityEngine_Vector3_o *)&v25, 0LL);
    Component_srcLineSprite = (struct QuestBoardListEffectComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                          v13,
                                                                          (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectComponent___);
    p_effectDisappearFadeComponent = &this->fields.effectDisappearFadeComponent;
    this->fields.effectDisappearFadeComponent = Component_srcLineSprite;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.effectDisappearFadeComponent,
      (System_Int32_array **)Component_srcLineSprite,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
    if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)this->fields.effectDisappearFadeComponent, 0LL, 0LL) )
      return;
    transform = (UnityEngine_GameObject_o *)*p_effectDisappearFadeComponent;
    if ( !*p_effectDisappearFadeComponent )
      goto LABEL_22;
    QuestBoardListEffectComponent__Init((QuestBoardListEffectComponent_o *)transform, 0, 0.0, 0.0, 0LL);
    if ( !isPlayingAct )
      return;
    if ( !*p_effectDisappearFadeComponent )
LABEL_22:
      sub_B2C434(transform, v12);
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
  DataManager_o *Instance; // x0
  __int64 v15; // x1
  WarQuestSelectionEntity_array *Entitys_WarQuestSelectionEntity; // x20
  QuestBoardListViewManager___c_c *v17; // x8
  struct QuestBoardListViewManager___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__137_0; // x21
  Il2CppObject *v20; // x22
  struct QuestBoardListViewManager___c_StaticFields *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  int v28; // w20
  struct ScrTerminalListTop_o *mTerminalList; // x8
  AssetData_o *effectAssetData; // x0
  BattleServantConfConponent_o *p_blackMarkPrefab; // x19
  System_Int32_array **Object_WarBoardWaitTimeSetting; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7

  if ( (byte_4186E1A & 1) == 0 )
  {
    sub_B2C35C(&Method_AssetData_GetObject_GameObject____67377624, method);
    sub_B2C35C(&Method_BasicHelper_Any_WarEntity___, v3);
    sub_B2C35C(&Method_DataManager_GetMasterData_WarMaster___, v4);
    sub_B2C35C(&Method_DataMasterBase_getEntitys_WarEntity___, v5);
    sub_B2C35C(&Method_System_Func_WarEntity__bool___ctor__, v6);
    sub_B2C35C(&System_Func_WarEntity__bool__TypeInfo, v7);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B2C35C(&Method_QuestBoardListViewManager___c__SetupBlackMark_b__137_0__, v10);
    sub_B2C35C(&QuestBoardListViewManager___c_TypeInfo, v11);
    sub_B2C35C(&StringLiteral_18161/*"ef_blackpoint"*/, v12);
    byte_4186E1A = 1;
  }
  blackMarkPrefab = (UnityEngine_Object_o *)this->fields.blackMarkPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(blackMarkPrefab, 0LL, 0LL) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_23;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_WarMaster___);
    if ( !Instance )
      goto LABEL_23;
    Entitys_WarQuestSelectionEntity = DataMasterBase__getEntitys_WarQuestSelectionEntity_(
                                        (DataMasterBase_o *)Instance,
                                        (const MethodInfo_17342C0 *)Method_DataMasterBase_getEntitys_WarEntity___);
    v17 = QuestBoardListViewManager___c_TypeInfo;
    if ( (BYTE3(QuestBoardListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewManager___c_TypeInfo);
      v17 = QuestBoardListViewManager___c_TypeInfo;
    }
    static_fields = v17->static_fields;
    _9__137_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__137_0;
    if ( !_9__137_0 )
    {
      if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v17);
        static_fields = QuestBoardListViewManager___c_TypeInfo->static_fields;
      }
      v20 = (Il2CppObject *)static_fields->__9;
      _9__137_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_WarEntity__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__137_0,
        v20,
        Method_QuestBoardListViewManager___c__SetupBlackMark_b__137_0__,
        (const MethodInfo_2711C04 *)Method_System_Func_WarEntity__bool___ctor__);
      v21 = QuestBoardListViewManager___c_TypeInfo->static_fields;
      v21->__9__137_0 = (struct System_Func_WarEntity__bool__o *)_9__137_0;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v21->__9__137_0,
        (System_Int32_array **)_9__137_0,
        v22,
        v23,
        v24,
        v25,
        v26,
        v27);
    }
    Instance = (DataManager_o *)BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
                                  (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)Entitys_WarQuestSelectionEntity,
                                  (System_Func_T__bool__o *)_9__137_0,
                                  (const MethodInfo_1726758 *)Method_BasicHelper_Any_WarEntity___);
    if ( !this->fields.mTerminalList
      || (v28 = (int)Instance,
          Instance = (DataManager_o *)ScrTerminalListTop__CheckTerminalTopEffect(this->fields.mTerminalList, 0LL),
          (mTerminalList = this->fields.mTerminalList) == 0LL) )
    {
LABEL_23:
      sub_B2C434(Instance, v15);
    }
    if ( (((_DWORD)Instance != mTerminalList->fields.TERMINAL_EFFECT_APPEAR_EFFECT_ID) & ~v28) == 0 )
    {
      effectAssetData = this->fields.effectAssetData;
      if ( effectAssetData )
      {
        p_blackMarkPrefab = (BattleServantConfConponent_o *)&this->fields.blackMarkPrefab;
        Object_WarBoardWaitTimeSetting = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                  effectAssetData,
                                                                  (System_String_o *)StringLiteral_18161/*"ef_blackpoint"*/,
                                                                  (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
        p_blackMarkPrefab->klass = (BattleServantConfConponent_c *)Object_WarBoardWaitTimeSetting;
        sub_B2C2F8(p_blackMarkPrefab, Object_WarBoardWaitTimeSetting, v33, v34, v35, v36, v37, v38);
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
  struct ScrTerminalListTop_o *v17; // x8
  UnityEngine_Object_o *boardAppearEffectPrefab; // x20
  struct UnityEngine_GameObject_o *Object_WarBoardWaitTimeSetting; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  UnityEngine_Object_o *boardAppearEffectFadePrefab; // x20
  struct UnityEngine_GameObject_o *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  UnityEngine_Object_o *v34; // x20
  __int64 *v35; // x8
  BattleServantConfConponent_o *p_boardDisappear2EffectPrefab; // x20
  UnityEngine_Object_o *v37; // x20
  struct UnityEngine_GameObject_o *v38; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  UnityEngine_Object_o *v45; // x20
  struct UnityEngine_GameObject_o *v46; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  UnityEngine_Object_o *ntBoardAppearEffectPrefab; // x20
  System_Int32_array **v54; // x0
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  UnityEngine_Object_o *boardDisappearEffectFadePrefab; // x20
  __int64 *v62; // x8
  BattleServantConfConponent_o *p_nt2BoardAppearEffectFadePrefab; // x19
  System_Int32_array **v64; // x0
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  UnityEngine_Object_o *boardDisappearEffectPrefab; // x20
  struct UnityEngine_GameObject_o *v72; // x0
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  UnityEngine_Object_o *boardDisappear2EffectPrefab; // x20
  __int64 *v80; // x8
  UnityEngine_Object_o *v81; // x20
  struct UnityEngine_GameObject_o *v82; // x0
  System_String_array **v83; // x2
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  UnityEngine_Object_o *v89; // x20
  struct UnityEngine_GameObject_o *v90; // x0
  System_String_array **v91; // x2
  System_String_array **v92; // x3
  System_Boolean_array **v93; // x4
  System_Int32_array **v94; // x5
  System_Int32_array *v95; // x6
  System_Int32_array *v96; // x7
  UnityEngine_Object_o *v97; // x20
  struct UnityEngine_GameObject_o *v98; // x0
  System_String_array **v99; // x2
  System_String_array **v100; // x3
  System_Boolean_array **v101; // x4
  System_Int32_array **v102; // x5
  System_Int32_array *v103; // x6
  System_Int32_array *v104; // x7
  UnityEngine_Object_o *v105; // x20
  UnityEngine_Object_o *nt2BoardAppearEffectPrefab; // x20
  struct UnityEngine_GameObject_o *v107; // x0
  System_String_array **v108; // x2
  System_String_array **v109; // x3
  System_Boolean_array **v110; // x4
  System_Int32_array **v111; // x5
  System_Int32_array *v112; // x6
  System_Int32_array *v113; // x7
  UnityEngine_Object_o *nt2BoardAppearEffectFadePrefab; // x20

  if ( (byte_4186E1D & 1) == 0 )
  {
    sub_B2C35C(&Method_AssetData_GetObject_GameObject____67377624, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    sub_B2C35C(&StringLiteral_16730/*"bit_board_appear2"*/, v4);
    sub_B2C35C(&StringLiteral_16736/*"bit_board_disappear5"*/, v5);
    sub_B2C35C(&StringLiteral_16763/*"bit_fade_black2"*/, v6);
    sub_B2C35C(&StringLiteral_16735/*"bit_board_disappear4"*/, v7);
    sub_B2C35C(&StringLiteral_16732/*"bit_board_disappear"*/, v8);
    sub_B2C35C(&StringLiteral_16762/*"bit_fade_black"*/, v9);
    sub_B2C35C(&StringLiteral_16729/*"bit_board_appear"*/, v10);
    sub_B2C35C(&StringLiteral_16765/*"bit_fade_black4"*/, v11);
    sub_B2C35C(&StringLiteral_16764/*"bit_fade_black3"*/, v12);
    sub_B2C35C(&StringLiteral_16731/*"bit_board_appear3"*/, v13);
    sub_B2C35C(&StringLiteral_16733/*"bit_board_disappear2"*/, v14);
    sub_B2C35C(&StringLiteral_16734/*"bit_board_disappear3"*/, v15);
    byte_4186E1D = 1;
  }
  mTerminalList = this->fields.mTerminalList;
  if ( !mTerminalList )
    goto LABEL_115;
  mTerminalList = (ScrTerminalListTop_o *)ScrTerminalListTop__CheckTerminalTopEffect(mTerminalList, 0LL);
  v17 = this->fields.mTerminalList;
  if ( !v17 )
    goto LABEL_115;
  if ( (_DWORD)mTerminalList == v17->fields.TERMINAL_EFFECT_APPEAR_EFFECT_ID )
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
      mTerminalList = (ScrTerminalListTop_o *)this->fields.effectAssetData;
      if ( !mTerminalList )
        goto LABEL_115;
      Object_WarBoardWaitTimeSetting = (struct UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                            (AssetData_o *)mTerminalList,
                                                                            (System_String_o *)StringLiteral_16729/*"bit_board_appear"*/,
                                                                            (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
      this->fields.boardAppearEffectPrefab = Object_WarBoardWaitTimeSetting;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.boardAppearEffectPrefab,
        (System_Int32_array **)Object_WarBoardWaitTimeSetting,
        v20,
        v21,
        v22,
        v23,
        v24,
        v25);
    }
    boardAppearEffectFadePrefab = (UnityEngine_Object_o *)this->fields.boardAppearEffectFadePrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality(boardAppearEffectFadePrefab, 0LL, 0LL) )
    {
      mTerminalList = (ScrTerminalListTop_o *)this->fields.effectAssetData;
      if ( !mTerminalList )
        goto LABEL_115;
      v27 = (struct UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                 (AssetData_o *)mTerminalList,
                                                 (System_String_o *)StringLiteral_16762/*"bit_fade_black"*/,
                                                 (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
      this->fields.boardAppearEffectFadePrefab = v27;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.boardAppearEffectFadePrefab,
        (System_Int32_array **)v27,
        v28,
        v29,
        v30,
        v31,
        v32,
        v33);
    }
    goto LABEL_19;
  }
  if ( (_DWORD)mTerminalList == v17->fields.TERMINAL_WHITE_MARK_EFFECT_APPEAR_EFFECT_ID )
  {
    if ( !this->fields.effectAssetData )
      return;
    v37 = (UnityEngine_Object_o *)this->fields.boardAppearEffectPrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality(v37, 0LL, 0LL) )
    {
      mTerminalList = (ScrTerminalListTop_o *)this->fields.effectAssetData;
      if ( !mTerminalList )
        goto LABEL_115;
      v38 = (struct UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                 (AssetData_o *)mTerminalList,
                                                 (System_String_o *)StringLiteral_16730/*"bit_board_appear2"*/,
                                                 (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
      this->fields.boardAppearEffectPrefab = v38;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.boardAppearEffectPrefab,
        (System_Int32_array **)v38,
        v39,
        v40,
        v41,
        v42,
        v43,
        v44);
    }
    v45 = (UnityEngine_Object_o *)this->fields.boardAppearEffectFadePrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality(v45, 0LL, 0LL) )
    {
      mTerminalList = (ScrTerminalListTop_o *)this->fields.effectAssetData;
      if ( !mTerminalList )
        goto LABEL_115;
      v46 = (struct UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                 (AssetData_o *)mTerminalList,
                                                 (System_String_o *)StringLiteral_16764/*"bit_fade_black3"*/,
                                                 (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
      this->fields.boardAppearEffectFadePrefab = v46;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.boardAppearEffectFadePrefab,
        (System_Int32_array **)v46,
        v47,
        v48,
        v49,
        v50,
        v51,
        v52);
    }
    goto LABEL_39;
  }
  if ( (_DWORD)mTerminalList == v17->fields.TERMINAL_EFFECT_BOARD_DISAPPEAR_EFFECT_ID )
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
      mTerminalList = (ScrTerminalListTop_o *)this->fields.effectAssetData;
      if ( !mTerminalList )
        goto LABEL_115;
      v72 = (struct UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                 (AssetData_o *)mTerminalList,
                                                 (System_String_o *)StringLiteral_16732/*"bit_board_disappear"*/,
                                                 (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
      this->fields.boardDisappearEffectPrefab = v72;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.boardDisappearEffectPrefab,
        (System_Int32_array **)v72,
        v73,
        v74,
        v75,
        v76,
        v77,
        v78);
    }
    boardDisappear2EffectPrefab = (UnityEngine_Object_o *)this->fields.boardDisappear2EffectPrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality(boardDisappear2EffectPrefab, 0LL, 0LL) )
      goto LABEL_82;
    mTerminalList = (ScrTerminalListTop_o *)this->fields.effectAssetData;
    if ( !mTerminalList )
      goto LABEL_115;
    v80 = &StringLiteral_16733/*"bit_board_disappear2"*/;
    goto LABEL_81;
  }
  if ( (_DWORD)mTerminalList != v17->fields.TERMINAL_WHITE_MARK_EFFECT_BOARD_DISAPPEAR_EFFECT_ID )
  {
    if ( (_DWORD)mTerminalList == v17->fields.TERMINAL_EFFECT_BB_BOARD_EFFECT_ID )
    {
      if ( !this->fields.effectAssetData )
        return;
LABEL_19:
      v34 = (UnityEngine_Object_o *)this->fields.boardDisappear2EffectPrefab;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Equality(v34, 0LL, 0LL) )
      {
        mTerminalList = (ScrTerminalListTop_o *)this->fields.effectAssetData;
        if ( !mTerminalList )
          goto LABEL_115;
        v35 = &StringLiteral_16733/*"bit_board_disappear2"*/;
        p_boardDisappear2EffectPrefab = (BattleServantConfConponent_o *)&this->fields.boardDisappear2EffectPrefab;
LABEL_45:
        v54 = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                       (AssetData_o *)mTerminalList,
                                       (System_String_o *)*v35,
                                       (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
        p_boardDisappear2EffectPrefab->klass = (BattleServantConfConponent_c *)v54;
        sub_B2C2F8(p_boardDisappear2EffectPrefab, v54, v55, v56, v57, v58, v59, v60);
        goto LABEL_46;
      }
      goto LABEL_46;
    }
    if ( (_DWORD)mTerminalList != v17->fields.TERMINAL_EFFECT_NT_BOARD_EFFECT_ID )
    {
      if ( (_DWORD)mTerminalList == v17->fields.TERMINAL_EFFECT_NT2_BOARD_COMPLETE_EFFECT_ID
        && this->fields.effectAssetData )
      {
        nt2BoardAppearEffectPrefab = (UnityEngine_Object_o *)this->fields.nt2BoardAppearEffectPrefab;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Equality(nt2BoardAppearEffectPrefab, 0LL, 0LL) )
        {
          mTerminalList = (ScrTerminalListTop_o *)this->fields.effectAssetData;
          if ( !mTerminalList )
            goto LABEL_115;
          v107 = (struct UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                      (AssetData_o *)mTerminalList,
                                                      (System_String_o *)StringLiteral_16731/*"bit_board_appear3"*/,
                                                      (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
          this->fields.nt2BoardAppearEffectPrefab = v107;
          sub_B2C2F8(
            (BattleServantConfConponent_o *)&this->fields.nt2BoardAppearEffectPrefab,
            (System_Int32_array **)v107,
            v108,
            v109,
            v110,
            v111,
            v112,
            v113);
        }
        nt2BoardAppearEffectFadePrefab = (UnityEngine_Object_o *)this->fields.nt2BoardAppearEffectFadePrefab;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Equality(nt2BoardAppearEffectFadePrefab, 0LL, 0LL) )
        {
          mTerminalList = (ScrTerminalListTop_o *)this->fields.effectAssetData;
          if ( mTerminalList )
          {
            v62 = &StringLiteral_16765/*"bit_fade_black4"*/;
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
      mTerminalList = (ScrTerminalListTop_o *)this->fields.effectAssetData;
      if ( !mTerminalList )
        goto LABEL_115;
      v35 = &StringLiteral_16736/*"bit_board_disappear5"*/;
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
      mTerminalList = (ScrTerminalListTop_o *)this->fields.effectAssetData;
      if ( mTerminalList )
      {
        v62 = &StringLiteral_16763/*"bit_fade_black2"*/;
        p_nt2BoardAppearEffectFadePrefab = (BattleServantConfConponent_o *)&this->fields.boardDisappearEffectFadePrefab;
LABEL_52:
        v64 = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                       (AssetData_o *)mTerminalList,
                                       (System_String_o *)*v62,
                                       (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
        p_nt2BoardAppearEffectFadePrefab->klass = (BattleServantConfConponent_c *)v64;
        sub_B2C2F8(p_nt2BoardAppearEffectFadePrefab, v64, v65, v66, v67, v68, v69, v70);
        return;
      }
      goto LABEL_115;
    }
    return;
  }
  if ( !this->fields.effectAssetData )
    return;
  v81 = (UnityEngine_Object_o *)this->fields.boardDisappearEffectPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(v81, 0LL, 0LL) )
  {
    mTerminalList = (ScrTerminalListTop_o *)this->fields.effectAssetData;
    if ( !mTerminalList )
      goto LABEL_115;
    v82 = (struct UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                               (AssetData_o *)mTerminalList,
                                               (System_String_o *)StringLiteral_16734/*"bit_board_disappear3"*/,
                                               (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
    this->fields.boardDisappearEffectPrefab = v82;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.boardDisappearEffectPrefab,
      (System_Int32_array **)v82,
      v83,
      v84,
      v85,
      v86,
      v87,
      v88);
  }
  v89 = (UnityEngine_Object_o *)this->fields.boardDisappear2EffectPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(v89, 0LL, 0LL) )
  {
    mTerminalList = (ScrTerminalListTop_o *)this->fields.effectAssetData;
    if ( !mTerminalList )
      goto LABEL_115;
    v80 = &StringLiteral_16735/*"bit_board_disappear4"*/;
LABEL_81:
    v90 = (struct UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                               (AssetData_o *)mTerminalList,
                                               (System_String_o *)*v80,
                                               (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
    this->fields.boardDisappear2EffectPrefab = v90;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.boardDisappear2EffectPrefab,
      (System_Int32_array **)v90,
      v91,
      v92,
      v93,
      v94,
      v95,
      v96);
  }
LABEL_82:
  v97 = (UnityEngine_Object_o *)this->fields.boardDisappearEffectFadePrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(v97, 0LL, 0LL) )
  {
    mTerminalList = (ScrTerminalListTop_o *)this->fields.effectAssetData;
    if ( !mTerminalList )
      goto LABEL_115;
    v98 = (struct UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                               (AssetData_o *)mTerminalList,
                                               (System_String_o *)StringLiteral_16763/*"bit_fade_black2"*/,
                                               (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
    this->fields.boardDisappearEffectFadePrefab = v98;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.boardDisappearEffectFadePrefab,
      (System_Int32_array **)v98,
      v99,
      v100,
      v101,
      v102,
      v103,
      v104);
  }
  v105 = (UnityEngine_Object_o *)this->fields.ntBoardAppearEffectPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(v105, 0LL, 0LL) )
  {
    mTerminalList = (ScrTerminalListTop_o *)this->fields.effectAssetData;
    if ( mTerminalList )
    {
      v62 = &StringLiteral_16736/*"bit_board_disappear5"*/;
      p_nt2BoardAppearEffectFadePrefab = (BattleServantConfConponent_o *)&this->fields.ntBoardAppearEffectPrefab;
      goto LABEL_52;
    }
LABEL_115:
    sub_B2C434(mTerminalList, method);
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

  if ( (byte_4186E06 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestBoardListViewObject__get_Count__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestBoardListViewObject__get_Item__, v3);
    byte_4186E06 = 1;
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
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      ObjectList = (System_Collections_Generic_List_QuestBoardListViewObject__o *)v7->fields._items->m_Items[v8];
      if ( !ObjectList )
        break;
      QuestBoardListViewObject__SetupDisp((QuestBoardListViewObject_o *)ObjectList, v5);
      size = v7->fields._size;
      if ( (int)++v8 >= size )
        return;
    }
LABEL_11:
    sub_B2C434(ObjectList, v5);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestBoardListViewManager__SetupFortificationWarningDialog(
        QuestBoardListViewManager_o *this,
        int32_t eventId,
        System_Action_o *func,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_String_o *v25; // x0
  System_String_o *v26; // x20
  AssetLoader_LoadEndDataHandler_o *v27; // x22
  int32_t v28; // [xsp+Ch] [xbp-24h] BYREF

  v28 = eventId;
  if ( (byte_4186E1C & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, *(_QWORD *)&eventId);
    sub_B2C35C(&AssetLoader_LoadEndDataHandler_TypeInfo, v6);
    sub_B2C35C(&Method_QuestBoardListViewManager___c__DisplayClass139_0__SetupFortificationWarningDialog_b__0__, v7);
    sub_B2C35C(&QuestBoardListViewManager___c__DisplayClass139_0_TypeInfo, v8);
    sub_B2C35C(&StringLiteral_6202/*"EventUI/Prefabs/"*/, v9);
    byte_4186E1C = 1;
  }
  v10 = sub_B2C42C(QuestBoardListViewManager___c__DisplayClass139_0_TypeInfo);
  QuestBoardListViewManager___c__DisplayClass139_0___ctor(
    (QuestBoardListViewManager___c__DisplayClass139_0_o *)v10,
    0LL);
  if ( !v10 )
    sub_B2C434(v11, v12);
  *(_QWORD *)(v10 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v10 + 16), (System_Int32_array **)this, v13, v14, v15, v16, v17, v18);
  *(_QWORD *)(v10 + 24) = func;
  sub_B2C2F8((BattleServantConfConponent_o *)(v10 + 24), (System_Int32_array **)func, v19, v20, v21, v22, v23, v24);
  v25 = System_Int32__ToString((int32_t)&v28, 0LL);
  v26 = System_String__Concat_44305532((System_String_o *)StringLiteral_6202/*"EventUI/Prefabs/"*/, v25, 0LL);
  v27 = (AssetLoader_LoadEndDataHandler_o *)sub_B2C42C(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v27,
    (Il2CppObject *)v10,
    Method_QuestBoardListViewManager___c__DisplayClass139_0__SetupFortificationWarningDialog_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(v26, v27, 1, 0LL) )
    ActionExtensions__Call(*(System_Action_o **)(v10 + 24), 0LL);
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
  DataManager_o *Instance; // x0
  __int64 v15; // x1
  WarQuestSelectionEntity_array *Entitys_WarQuestSelectionEntity; // x20
  QuestBoardListViewManager___c_c *v17; // x8
  struct QuestBoardListViewManager___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__138_0; // x21
  Il2CppObject *v20; // x22
  struct QuestBoardListViewManager___c_StaticFields *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  int v28; // w20
  struct ScrTerminalListTop_o *mTerminalList; // x8
  AssetData_o *effectAssetData; // x0
  BattleServantConfConponent_o *p_whiteMarkPrefab; // x19
  System_Int32_array **Object_WarBoardWaitTimeSetting; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7

  if ( (byte_4186E1B & 1) == 0 )
  {
    sub_B2C35C(&Method_AssetData_GetObject_GameObject____67377624, method);
    sub_B2C35C(&Method_BasicHelper_Any_WarEntity___, v3);
    sub_B2C35C(&Method_DataManager_GetMasterData_WarMaster___, v4);
    sub_B2C35C(&Method_DataMasterBase_getEntitys_WarEntity___, v5);
    sub_B2C35C(&Method_System_Func_WarEntity__bool___ctor__, v6);
    sub_B2C35C(&System_Func_WarEntity__bool__TypeInfo, v7);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B2C35C(&Method_QuestBoardListViewManager___c__SetupWhiteMark_b__138_0__, v10);
    sub_B2C35C(&QuestBoardListViewManager___c_TypeInfo, v11);
    sub_B2C35C(&StringLiteral_18220/*"ef_whitepoint"*/, v12);
    byte_4186E1B = 1;
  }
  whiteMarkPrefab = (UnityEngine_Object_o *)this->fields.whiteMarkPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(whiteMarkPrefab, 0LL, 0LL) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_23;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_WarMaster___);
    if ( !Instance )
      goto LABEL_23;
    Entitys_WarQuestSelectionEntity = DataMasterBase__getEntitys_WarQuestSelectionEntity_(
                                        (DataMasterBase_o *)Instance,
                                        (const MethodInfo_17342C0 *)Method_DataMasterBase_getEntitys_WarEntity___);
    v17 = QuestBoardListViewManager___c_TypeInfo;
    if ( (BYTE3(QuestBoardListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewManager___c_TypeInfo);
      v17 = QuestBoardListViewManager___c_TypeInfo;
    }
    static_fields = v17->static_fields;
    _9__138_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__138_0;
    if ( !_9__138_0 )
    {
      if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v17);
        static_fields = QuestBoardListViewManager___c_TypeInfo->static_fields;
      }
      v20 = (Il2CppObject *)static_fields->__9;
      _9__138_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_WarEntity__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__138_0,
        v20,
        Method_QuestBoardListViewManager___c__SetupWhiteMark_b__138_0__,
        (const MethodInfo_2711C04 *)Method_System_Func_WarEntity__bool___ctor__);
      v21 = QuestBoardListViewManager___c_TypeInfo->static_fields;
      v21->__9__138_0 = (struct System_Func_WarEntity__bool__o *)_9__138_0;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v21->__9__138_0,
        (System_Int32_array **)_9__138_0,
        v22,
        v23,
        v24,
        v25,
        v26,
        v27);
    }
    Instance = (DataManager_o *)BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
                                  (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)Entitys_WarQuestSelectionEntity,
                                  (System_Func_T__bool__o *)_9__138_0,
                                  (const MethodInfo_1726758 *)Method_BasicHelper_Any_WarEntity___);
    if ( !this->fields.mTerminalList
      || (v28 = (int)Instance,
          Instance = (DataManager_o *)ScrTerminalListTop__CheckTerminalTopEffect(this->fields.mTerminalList, 0LL),
          (mTerminalList = this->fields.mTerminalList) == 0LL) )
    {
LABEL_23:
      sub_B2C434(Instance, v15);
    }
    if ( (((_DWORD)Instance != mTerminalList->fields.TERMINAL_WHITE_MARK_EFFECT_APPEAR_EFFECT_ID) & ~v28) == 0 )
    {
      effectAssetData = this->fields.effectAssetData;
      if ( effectAssetData )
      {
        p_whiteMarkPrefab = (BattleServantConfConponent_o *)&this->fields.whiteMarkPrefab;
        Object_WarBoardWaitTimeSetting = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                  effectAssetData,
                                                                  (System_String_o *)StringLiteral_18220/*"ef_whitepoint"*/,
                                                                  (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
        p_whiteMarkPrefab->klass = (BattleServantConfConponent_c *)Object_WarBoardWaitTimeSetting;
        sub_B2C2F8(p_whiteMarkPrefab, Object_WarBoardWaitTimeSetting, v33, v34, v35, v36, v37, v38);
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
  __int64 v6; // x1
  QuestBoardListEffectComponent_o *v7; // x0

  if ( (byte_4186E28 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4186E28 = 1;
  }
  effectDisappearFadeComponent = (UnityEngine_Object_o *)this->fields.effectDisappearFadeComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(effectDisappearFadeComponent, 0LL, 0LL) )
  {
    v7 = this->fields.effectDisappearFadeComponent;
    if ( !v7 )
      sub_B2C434(0LL, v6);
    QuestBoardListEffectComponent__Skip(v7, skipTime, 0LL);
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
  __int64 v9; // x1
  EventTutorialEntity_o *v10; // x8
  bool result; // w0

  if ( (byte_4186E10 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__, flagType);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__, v6);
    sub_B2C35C(&StringLiteral_1/*""*/, v7);
    byte_4186E10 = 1;
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
      v10 = EventTutorialEntity->fields._items->m_Items[0];
      if ( v10 )
      {
        result = 1;
        *flagType = v10->fields.flagType;
        return result;
      }
LABEL_9:
      sub_B2C434(EventTutorialEntity, v9);
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
  __int64 v5; // x1
  float v6; // s0
  AlphaTransitionCalculator_o *v7; // x0
  float realtimeSinceStartup; // s0
  float mAlphaAnimTimeOld; // s9
  float v10; // s8
  QuestBoardListViewManager_c *v11; // x0
  const MethodInfo *v12; // x1
  float v13; // s0
  int32_t mAlphaAnimCnt; // w8
  int32_t v15; // w21
  QuestBoardListViewManager_c *v16; // x0
  int32_t ALPHA_ANIM_COUNT_RESET_VAL; // w8
  int32_t v18; // w21

  if ( (byte_4186E0E & 1) == 0 )
  {
    sub_B2C35C(&QuestBoardListViewManager_TypeInfo, method);
    sub_B2C35C(&Method_TransitionCalculator_float__Update__, v3);
    byte_4186E0E = 1;
  }
  rewardIconAlphaCalculator = (TransitionCalculator_float__o *)this->fields.rewardIconAlphaCalculator;
  if ( rewardIconAlphaCalculator )
  {
    v6 = TransitionCalculator_float___Update(
           rewardIconAlphaCalculator,
           (const MethodInfo_26488C4 *)Method_TransitionCalculator_float__Update__);
    v7 = this->fields.rewardIconAlphaCalculator;
    this->fields.mAlphaAnimNow = v6;
    if ( !v7 )
      goto LABEL_25;
    if ( AlphaTransitionCalculator__IsFadeInFinished(v7, 0LL) )
    {
      realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0LL);
      mAlphaAnimTimeOld = this->fields.mAlphaAnimTimeOld;
      v10 = realtimeSinceStartup;
      v11 = QuestBoardListViewManager_TypeInfo;
      if ( (BYTE3(QuestBoardListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestBoardListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewManager_TypeInfo);
        v11 = QuestBoardListViewManager_TypeInfo;
      }
      if ( (float)(v10 - mAlphaAnimTimeOld) >= v11->static_fields->ALPHA_ANIM_TIME_INTERVAL )
      {
        v7 = this->fields.rewardIconAlphaCalculator;
        if ( v7 )
        {
          AlphaTransitionCalculator__StartFadeOut(v7, 0LL);
          return;
        }
LABEL_25:
        sub_B2C434(v7, v5);
      }
    }
    else
    {
      v7 = this->fields.rewardIconAlphaCalculator;
      if ( !v7 )
        goto LABEL_25;
      if ( AlphaTransitionCalculator__IsFadeOutFinished(v7, 0LL) )
      {
        v7 = this->fields.rewardIconAlphaCalculator;
        if ( !v7 )
          goto LABEL_25;
        AlphaTransitionCalculator__StartFadeIn(v7, 0LL);
        v13 = UnityEngine_Time__get_realtimeSinceStartup(0LL);
        mAlphaAnimCnt = this->fields.mAlphaAnimCnt;
        this->fields.mAlphaAnimTimeOld = v13;
        v15 = mAlphaAnimCnt + 1;
        this->fields.mAlphaAnimCnt = mAlphaAnimCnt + 1;
        v16 = QuestBoardListViewManager_TypeInfo;
        if ( (BYTE3(QuestBoardListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !QuestBoardListViewManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewManager_TypeInfo);
          v16 = QuestBoardListViewManager_TypeInfo;
        }
        ALPHA_ANIM_COUNT_RESET_VAL = v16->static_fields->ALPHA_ANIM_COUNT_RESET_VAL;
        if ( v15 >= ALPHA_ANIM_COUNT_RESET_VAL )
        {
          v18 = this->fields.mAlphaAnimCnt;
          if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v16);
            ALPHA_ANIM_COUNT_RESET_VAL = QuestBoardListViewManager_TypeInfo->static_fields->ALPHA_ANIM_COUNT_RESET_VAL;
          }
          this->fields.mAlphaAnimCnt = v18 - ALPHA_ANIM_COUNT_RESET_VAL;
        }
        QuestBoardListViewManager__OnChangeAlphaAnim(this, v12);
      }
    }
  }
}


System_Collections_IEnumerator_o *__fastcall QuestBoardListViewManager__WaitFinish(
        QuestBoardListViewManager_o *this,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
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

  if ( (byte_4186E01 & 1) == 0 )
  {
    sub_B2C35C(&QuestBoardListViewManager__WaitFinish_d__95_TypeInfo, endAct);
    byte_4186E01 = 1;
  }
  v5 = sub_B2C42C(QuestBoardListViewManager__WaitFinish_d__95_TypeInfo);
  QuestBoardListViewManager__WaitFinish_d__95___ctor((QuestBoardListViewManager__WaitFinish_d__95_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_B2C434(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 40) = endAct;
  sub_B2C2F8((BattleServantConfConponent_o *)(v5 + 40), (System_Int32_array **)endAct, v14, v15, v16, v17, v18, v19);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall QuestBoardListViewManager___BGChangeEffect_b__131_0(
        QuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *mFolderBg; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  mFolderBg = (UnityEngine_Component_o *)this->fields.mFolderBg;
  if ( !mFolderBg
    || (((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *, float))mFolderBg->klass[1]._1.castClass)(
          mFolderBg,
          mFolderBg->klass[1]._1.declaringType,
          0.0),
        (mFolderBg = (UnityEngine_Component_o *)this->fields.mFolderBg) == 0LL)
    || (mFolderBg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mFolderBg, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mFolderBg, 1, 0LL),
        (mFolderBg = (UnityEngine_Component_o *)this->fields.mFolderBg) == 0LL)
    || (gameObject = UnityEngine_Component__get_gameObject(mFolderBg, 0LL),
        (mFolderBg = (UnityEngine_Component_o *)TweenAlpha__Begin(gameObject, this->fields.mCrossFadeTime, 1.0, 0LL)) == 0LL) )
  {
    sub_B2C434(mFolderBg, method);
  }
  LODWORD(mFolderBg[1].klass) = 1;
}


void __fastcall QuestBoardListViewManager___BGChangeEffect_b__131_1(
        QuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  char *mFolderBgTemp; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  System_Int32_array **v11; // x1

  if ( (byte_4186E32 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_11404/*"RemoveTempBG"*/, method);
    byte_4186E32 = 1;
  }
  mFolderBgTemp = (char *)this->fields.mFolderBgTemp;
  if ( !mFolderBgTemp
    || ((*(void (__fastcall **)(char *, _QWORD, float))(*(_QWORD *)mFolderBgTemp + 440LL))(
          mFolderBgTemp,
          *(_QWORD *)(*(_QWORD *)mFolderBgTemp + 448LL),
          1.0),
        (mFolderBgTemp = (char *)this->fields.mFolderBgTemp) == 0LL)
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mFolderBgTemp, 0LL),
        (mFolderBgTemp = (char *)TweenAlpha__Begin(gameObject, this->fields.mCrossFadeTime, 0.0, 0LL)) == 0LL) )
  {
    sub_B2C434(mFolderBgTemp, method);
  }
  *((_DWORD *)mFolderBgTemp + 6) = 0;
  v11 = (System_Int32_array **)StringLiteral_11404/*"RemoveTempBG"*/;
  *((_QWORD *)mFolderBgTemp + 10) = StringLiteral_11404/*"RemoveTempBG"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)(mFolderBgTemp + 80), v11, v5, v6, v7, v8, v9, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestBoardListViewManager__bgAlphaFade(
        QuestBoardListViewManager_o *this,
        int32_t inOut,
        float time,
        const MethodInfo *method)
{
  UnityEngine_Component_o *mFolderBg; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  int v9; // w8
  UnityEngine_GameObject_o *v10; // x0

  mFolderBg = (UnityEngine_Component_o *)this->fields.mFolderBg;
  if ( !mFolderBg
    || (mFolderBg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mFolderBg, 0LL)) == 0LL )
  {
LABEL_13:
    sub_B2C434(mFolderBg, *(_QWORD *)&inOut);
  }
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)mFolderBg, 0LL) )
  {
    switch ( inOut )
    {
      case 3:
      case 5:
        mFolderBg = (UnityEngine_Component_o *)this->fields.mFolderBg;
        if ( !mFolderBg )
          goto LABEL_13;
        gameObject = UnityEngine_Component__get_gameObject(mFolderBg, 0LL);
        mFolderBg = (UnityEngine_Component_o *)TweenAlpha__Begin(gameObject, time, 1.0, 0LL);
        if ( !mFolderBg )
          goto LABEL_13;
        v9 = 1;
        break;
      case 4:
      case 6:
        mFolderBg = (UnityEngine_Component_o *)this->fields.mFolderBg;
        if ( !mFolderBg )
          goto LABEL_13;
        v10 = UnityEngine_Component__get_gameObject(mFolderBg, 0LL);
        mFolderBg = (UnityEngine_Component_o *)TweenAlpha__Begin(v10, time, 0.0, 0LL);
        if ( !mFolderBg )
          goto LABEL_13;
        v9 = 2;
        break;
      default:
        return;
    }
    LODWORD(mFolderBg[1].klass) = v9;
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
  ExUITexture_o *v9; // x21
  Il2CppObject *v10; // x0
  ExUITexture_o *v11; // x20
  System_String_o *v12; // x21
  const MethodInfo *v13; // x1
  int32_t v14; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4186E15 & 1) == 0 )
  {
    sub_B2C35C(&FSUtility_TypeInfo, callback);
    sub_B2C35C(&int_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_2654/*"Back/back{0}"*/, v6);
    byte_4186E15 = 1;
  }
  mFolderBg = (UnityEngine_Component_o *)this->fields.mFolderBg;
  if ( !mFolderBg )
    goto LABEL_15;
  mRequestedBGid = this->fields.mRequestedBGid;
  mFolderBg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mFolderBg, 0LL);
  if ( !mFolderBg )
    goto LABEL_15;
  if ( mRequestedBGid < 1 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mFolderBg, 0, 0LL);
    ActionExtensions__Call(callback, 0LL);
    goto LABEL_12;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mFolderBg, 1, 0LL);
  v9 = this->fields.mFolderBg;
  v14 = this->fields.mRequestedBGid;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14);
  mFolderBg = (UnityEngine_Component_o *)System_String__Format((System_String_o *)StringLiteral_2654/*"Back/back{0}"*/, v10, 0LL);
  if ( !v9 )
LABEL_15:
    sub_B2C434(mFolderBg, callback);
  ExUITexture__SetAssetImage(v9, (System_String_o *)mFolderBg, callback, 0LL);
  v11 = this->fields.mFolderBg;
  v12 = System_Int32__ToString((int)this + 560, 0LL);
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  FSUtility__SetUpBackTextureSize(v11, v12, 0LL);
LABEL_12:
  if ( this->fields.mFaded )
    QuestBoardListViewManager__RemoveTempBG(this, v13);
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
    sub_B2C434(0LL, method);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v15; // x0
  __int64 v16; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4186DFD & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_QuestBoardListViewObject___, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestBoardListViewObject__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestBoardListViewObject___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_QuestBoardListViewObject__TypeInfo, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    byte_4186DFD = 1;
  }
  memset(&v20, 0, sizeof(v20));
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_QuestBoardListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_QuestBoardListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B2C434(0LL, v12);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v20 = v19;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v20,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v20.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_B2C434(v15, v16);
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_QuestBoardListViewObject___);
      if ( !v11 )
        sub_B2C434(Component_srcLineSprite, Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v11,
        Component_srcLineSprite,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_QuestBoardListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_QuestBoardListViewObject__o *)v11;
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

  mFolderBg = (UnityEngine_Component_o *)this->fields.mFolderBg;
  if ( !mFolderBg
    || (mFolderBg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mFolderBg, 0LL)) == 0LL )
  {
    sub_B2C434(mFolderBg, method);
  }
  return UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)mFolderBg, 0LL);
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
  QuestBoardListViewManager__CoroutineLoadAsset_d__135_o *v2; // x19
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
  int32_t _1__state; // w8
  struct QuestBoardListViewManager_o *_4__this; // x20
  Il2CppObject *v18; // x22
  Il2CppObject **p__8__1; // x21
  Il2CppObject *v20; // x1
  struct QuestBoardListViewManager_o *onCompleteLoad; // x1
  EventEntity_array *EnableEntityList; // x22
  int max_length; // w8
  EventRewardSceneMaster_o *v24; // x23
  unsigned int v25; // w24
  EventEntity_o *v26; // x25
  struct QuestBoardListViewManager___c__DisplayClass135_0_o *_8__1; // x21
  AssetLoader_LoadEndDataHandler_o *v28; // x20
  struct QuestBoardListViewManager___c__DisplayClass135_0_o *v29; // x8
  bool result; // w0
  Il2CppObject *v31; // x22
  int32_t id; // w21
  System_Action_o *monitor; // x23
  Il2CppObject *v34; // x20
  System_Func_bool__o *v35; // x21
  UnityEngine_WaitUntil_o *v36; // x20
  __int64 v37; // x0

  v2 = this;
  if ( (byte_41852F5 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&AssetManager_TypeInfo, v3);
    sub_B2C35C(&Method_DataManager_GetMaster_EventMaster___, v4);
    sub_B2C35C(&Method_DataManager_GetMaster_EventRewardSceneMaster___, v5);
    sub_B2C35C(&DataManager_TypeInfo, v6);
    sub_B2C35C(&Method_System_Func_bool___ctor__, v7);
    sub_B2C35C(&System_Func_bool__TypeInfo, v8);
    sub_B2C35C(&AssetLoader_LoadEndDataHandler_TypeInfo, v9);
    sub_B2C35C(&Method_QuestBoardListViewManager___c__DisplayClass135_0__CoroutineLoadAsset_b__0__, v10);
    sub_B2C35C(&Method_QuestBoardListViewManager___c__DisplayClass135_0__CoroutineLoadAsset_b__1__, v11);
    sub_B2C35C(&Method_QuestBoardListViewManager___c__DisplayClass135_0__CoroutineLoadAsset_b__2__, v12);
    sub_B2C35C(&QuestBoardListViewManager___c__DisplayClass135_0_TypeInfo, v13);
    sub_B2C35C(&UnityEngine_WaitUntil_TypeInfo, v14);
    this = (QuestBoardListViewManager__CoroutineLoadAsset_d__135_o *)sub_B2C35C(&StringLiteral_13602/*"Terminal/Effect"*/, v15);
    byte_41852F5 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_39;
    method = (const MethodInfo *)_4__this->fields.effectAssetData;
    _8__1 = v2->fields.__8__1;
    if ( method )
    {
      if ( !_8__1 )
        goto LABEL_39;
      QuestBoardListViewManager__OnCompleteAssetData(_4__this, (AssetData_o *)method, _8__1->fields.onCompleteLoad, 0LL);
    }
    else
    {
      v28 = (AssetLoader_LoadEndDataHandler_o *)sub_B2C42C(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v28,
        (Il2CppObject *)_8__1,
        Method_QuestBoardListViewManager___c__DisplayClass135_0__CoroutineLoadAsset_b__1__,
        0LL);
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      this = (QuestBoardListViewManager__CoroutineLoadAsset_d__135_o *)AssetManager__loadAssetStorage(
                                                                         (System_String_o *)StringLiteral_13602/*"Terminal/Effect"*/,
                                                                         v28,
                                                                         1,
                                                                         0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        v29 = v2->fields.__8__1;
        if ( !v29 )
          goto LABEL_39;
        ActionExtensions__Call(v29->fields.onCompleteLoad, 0LL);
      }
    }
    return 0;
  }
  if ( _1__state )
    return 0;
  v2->fields.__1__state = -1;
  v18 = (Il2CppObject *)sub_B2C42C(QuestBoardListViewManager___c__DisplayClass135_0_TypeInfo);
  System_Object___ctor(v18, 0LL);
  p__8__1 = (Il2CppObject **)&v2->fields.__8__1;
  v2->fields.__8__1 = (struct QuestBoardListViewManager___c__DisplayClass135_0_o *)v18;
  sub_B2C2F8(&v2->fields.__8__1, v18);
  this = (QuestBoardListViewManager__CoroutineLoadAsset_d__135_o *)v2->fields.__8__1;
  if ( !this )
    goto LABEL_39;
  v20 = (Il2CppObject *)v2->fields.__4__this;
  this->fields.__2__current = v20;
  sub_B2C2F8(&this->fields.__2__current, v20);
  this = (QuestBoardListViewManager__CoroutineLoadAsset_d__135_o *)v2->fields.__8__1;
  if ( !this )
    goto LABEL_39;
  onCompleteLoad = (struct QuestBoardListViewManager_o *)v2->fields.onCompleteLoad;
  this->fields.__4__this = onCompleteLoad;
  sub_B2C2F8(&this->fields.__4__this, onCompleteLoad);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (QuestBoardListViewManager__CoroutineLoadAsset_d__135_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EventMaster___);
  if ( !this )
    goto LABEL_39;
  EnableEntityList = EventMaster__GetEnableEntityList((EventMaster_o *)this, 12, 1, 0LL);
  this = (QuestBoardListViewManager__CoroutineLoadAsset_d__135_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EventRewardSceneMaster___);
  if ( !*p__8__1 )
    goto LABEL_39;
  LOBYTE((*p__8__1)[1].klass) = 1;
  if ( !EnableEntityList )
    goto LABEL_39;
  max_length = EnableEntityList->max_length;
  if ( max_length >= 1 )
  {
    v24 = (EventRewardSceneMaster_o *)this;
    v25 = 0;
    while ( 1 )
    {
      if ( v25 >= max_length )
      {
        v37 = sub_B2C460(this);
        sub_B2C400(v37, 0LL);
      }
      v26 = EnableEntityList->m_Items[v25];
      if ( !v26 || !v24 )
        goto LABEL_39;
      this = (QuestBoardListViewManager__CoroutineLoadAsset_d__135_o *)EventRewardSceneMaster__getEntityFromIdAndEventType(
                                                                         v24,
                                                                         v26->fields.id,
                                                                         15,
                                                                         0LL);
      if ( this )
        break;
      max_length = EnableEntityList->max_length;
      if ( (int)++v25 >= max_length )
        goto LABEL_38;
    }
    if ( *p__8__1 )
    {
      LOBYTE((*p__8__1)[1].klass) = 0;
      v31 = *p__8__1;
      if ( *p__8__1 )
      {
        id = v26->fields.id;
        monitor = (System_Action_o *)v31[2].monitor;
        if ( !monitor )
        {
          monitor = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
          System_Action___ctor(
            monitor,
            v31,
            Method_QuestBoardListViewManager___c__DisplayClass135_0__CoroutineLoadAsset_b__2__,
            0LL);
          v31[2].monitor = monitor;
          sub_B2C2F8(&v31[2].monitor, monitor);
        }
        if ( _4__this )
        {
          QuestBoardListViewManager__SetupFortificationWarningDialog(_4__this, id, monitor, 0LL);
          goto LABEL_38;
        }
      }
    }
LABEL_39:
    sub_B2C434(this, method);
  }
LABEL_38:
  v34 = (Il2CppObject *)v2->fields.__8__1;
  v35 = (System_Func_bool__o *)sub_B2C42C(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v35,
    v34,
    Method_QuestBoardListViewManager___c__DisplayClass135_0__CoroutineLoadAsset_b__0__,
    (const MethodInfo_26FE8F8 *)Method_System_Func_bool___ctor__);
  v36 = (UnityEngine_WaitUntil_o *)sub_B2C42C(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v36, v35, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v36;
  sub_B2C2F8(&v2->fields.__2__current, v36);
  result = 1;
  v2->fields.__1__state = 1;
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_QuestBoardListViewManager__CoroutineLoadAsset_d__135_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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
      sub_B2C434(this, method);
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
    sub_B2C2F8(&this->fields.__2__current, 0LL);
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_QuestBoardListViewManager__WaitFinish_d__95_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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
  Il2CppObject *v2; // x19
  struct QuestBoardListViewManager___c_StaticFields *static_fields; // x0

  if ( (byte_41852EB & 1) == 0 )
  {
    sub_B2C35C(&QuestBoardListViewManager___c_TypeInfo, v1);
    byte_41852EB = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(QuestBoardListViewManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = QuestBoardListViewManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct QuestBoardListViewManager___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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

  if ( (byte_41852EC & 1) == 0 )
  {
    this = (QuestBoardListViewManager___c_o *)sub_B2C35C(&CondType_TypeInfo, entity);
    byte_41852EC = 1;
  }
  if ( !entity )
    sub_B2C434(this, entity);
  if ( !WarEntity__IsBlackMarkWithClear(entity, 0LL) )
    return 0;
  lastQuestId = entity->fields.lastQuestId;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestClear_25746984(lastQuestId, -1, 0, 0LL);
}


bool __fastcall QuestBoardListViewManager___c___SetupWhiteMark_b__138_0(
        QuestBoardListViewManager___c_o *this,
        WarEntity_o *entity,
        const MethodInfo *method)
{
  int32_t lastQuestId; // w20

  if ( (byte_41852ED & 1) == 0 )
  {
    this = (QuestBoardListViewManager___c_o *)sub_B2C35C(&CondType_TypeInfo, entity);
    byte_41852ED = 1;
  }
  if ( !entity )
    sub_B2C434(this, entity);
  if ( !WarEntity__IsWhiteMarkWithClear(entity, 0LL) )
    return WarEntity__IsDispWhiteMarkUnderBoard(entity, 0LL);
  lastQuestId = entity->fields.lastQuestId;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestClear_25746984(lastQuestId, -1, 0, 0LL) || WarEntity__IsDispWhiteMarkUnderBoard(entity, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *v7; // x20
  struct QuestBoardListViewManager_o *_4__this; // x0
  __int64 v9; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UIWidget_o *Component_UIWidget; // x0
  float infoTime; // s8
  SlideFadeObject_o *klass; // x21
  float OUT_POS_OFS_X; // s9
  System_Action_o *v15; // x22

  if ( (byte_41852EE & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___, v3);
    sub_B2C35C(&QuestBoardListViewManager_TypeInfo, v4);
    sub_B2C35C(&Method_QuestBoardListViewManager___c__DisplayClass103_1__RequestListObject_b__2__, v5);
    sub_B2C35C(&QuestBoardListViewManager___c__DisplayClass103_1_TypeInfo, v6);
    byte_41852EE = 1;
  }
  v7 = (Il2CppObject *)sub_B2C42C(QuestBoardListViewManager___c__DisplayClass103_1_TypeInfo);
  System_Object___ctor(v7, 0LL);
  if ( !v7 )
    goto LABEL_14;
  v7[1].monitor = this;
  sub_B2C2F8(&v7[1].monitor, this);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)_4__this, 0LL);
  Component_UIWidget = GameObjectExtensions__SafeGetComponent_UIWidget_(
                         gameObject,
                         (const MethodInfo_1AA8660 *)Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
  v7[1].klass = (Il2CppClass *)Component_UIWidget;
  sub_B2C2F8(&v7[1], Component_UIWidget);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  infoTime = 0.0;
  if ( !this->fields.isFadeOnTop && !_4__this->fields.mFaded )
    infoTime = _4__this->fields.infoTime;
  QuestBoardListViewManager__bgAlphaFade(_4__this, _4__this->fields.initMode, infoTime, 0LL);
  klass = (SlideFadeObject_o *)v7[1].klass;
  if ( (BYTE3(QuestBoardListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewManager_TypeInfo);
  }
  OUT_POS_OFS_X = QuestBoardListViewManager__get_OUT_POS_OFS_X(0LL);
  v15 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v15, v7, Method_QuestBoardListViewManager___c__DisplayClass103_1__RequestListObject_b__2__, 0LL);
  if ( !klass
    || (SlideFadeObject__SlideIn_24782264(klass, OUT_POS_OFS_X, infoTime, 0.0, v15, 0LL),
        (_4__this = this->fields.__4__this) == 0LL) )
  {
LABEL_14:
    sub_B2C434(_4__this, v9);
  }
  QuestBoardListViewManager__ResetAlphaAnimTime(_4__this, 0LL);
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
  struct QuestBoardListViewManager_o *v10; // x8
  SlideFadeObject_o *v11; // x20
  struct QuestBoardListViewManager_o *v12; // x20
  CommonUI_o *v13; // x20
  AvalonSceneManager_c *v14; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *_9__4; // x21
  System_Action_o *_9__5; // x21

  if ( (byte_41852EF & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&AvalonSceneManager_TypeInfo, v3);
    sub_B2C35C(&Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B2C35C(&Method_QuestBoardListViewManager___c__DisplayClass103_0__RequestListObject_b__4__, v6);
    sub_B2C35C(&Method_QuestBoardListViewManager___c__DisplayClass103_0__RequestListObject_b__5__, v7);
    byte_41852EF = 1;
  }
  _4__this = (UnityEngine_Component_o *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_20;
  gameObject = UnityEngine_Component__get_gameObject(_4__this, 0LL);
  _4__this = (UnityEngine_Component_o *)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                          gameObject,
                                          (const MethodInfo_1AA8660 *)Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
  v10 = this->fields.__4__this;
  if ( !v10 )
    goto LABEL_20;
  v11 = (SlideFadeObject_o *)_4__this;
  QuestBoardListViewManager__bgAlphaFade(this->fields.__4__this, v10->fields.initMode, 0.0, 0LL);
  if ( !v11 )
    goto LABEL_20;
  SlideFadeObject__ResetPosition(v11, 0LL);
  v12 = this->fields.__4__this;
  if ( !v12 )
    goto LABEL_20;
  if ( v12->fields.mFaded )
  {
    v12->fields.mFaded = 0;
    _4__this = (UnityEngine_Component_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v13 = (CommonUI_o *)_4__this;
    v14 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v14 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v14->static_fields->DEFAULT_FADE_TIME;
    _9__4 = this->fields.__9__4;
    if ( !_9__4 )
    {
      _9__4 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(
        _9__4,
        (Il2CppObject *)this,
        Method_QuestBoardListViewManager___c__DisplayClass103_0__RequestListObject_b__4__,
        0LL);
      this->fields.__9__4 = _9__4;
      sub_B2C2F8(&this->fields.__9__4, _9__4);
    }
    if ( v13 )
    {
      CommonUI__maskFadein(v13, DEFAULT_FADE_TIME, _9__4, 0LL);
      goto LABEL_18;
    }
LABEL_20:
    sub_B2C434(_4__this, method);
  }
  _9__5 = this->fields.__9__5;
  if ( !_9__5 )
  {
    _9__5 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__5,
      (Il2CppObject *)this,
      Method_QuestBoardListViewManager___c__DisplayClass103_0__RequestListObject_b__5__,
      0LL);
    this->fields.__9__5 = _9__5;
    sub_B2C2F8(&this->fields.__9__5, _9__5);
  }
  QuestBoardListViewManager__SetMode(v12, 2, _9__5, 0, 0, 0LL);
LABEL_18:
  _4__this = (UnityEngine_Component_o *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_20;
  QuestBoardListViewManager__ResetAlphaAnimTime((QuestBoardListViewManager_o *)_4__this, 0LL);
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
    sub_B2C434(0LL, method);
  QuestBoardListViewManager__EndSlideIn(_4__this, this->fields.end_act, this->fields.isNotInit, 0LL);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass103_0___RequestListObject_b__4(
        QuestBoardListViewManager___c__DisplayClass103_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  __int64 v3; // x1
  System_Action_o *monitor; // x21
  QuestBoardListViewManager_o *klass; // x20

  v2 = (Il2CppObject *)this;
  if ( (byte_41852F0 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    this = (QuestBoardListViewManager___c__DisplayClass103_0_o *)sub_B2C35C(
                                                                   &Method_QuestBoardListViewManager___c__DisplayClass103_0__RequestListObject_b__6__,
                                                                   v3);
    byte_41852F0 = 1;
  }
  monitor = (System_Action_o *)v2[3].monitor;
  klass = (QuestBoardListViewManager_o *)v2[1].klass;
  if ( !monitor )
  {
    monitor = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      monitor,
      v2,
      Method_QuestBoardListViewManager___c__DisplayClass103_0__RequestListObject_b__6__,
      0LL);
    v2[3].monitor = monitor;
    sub_B2C2F8(&v2[3].monitor, monitor);
  }
  if ( !klass )
    sub_B2C434(this, method);
  QuestBoardListViewManager__SetMode(klass, 2, monitor, 0, 0, 0LL);
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
  Il2CppObject *v2; // x19
  __int64 v3; // x1
  System_Action_o *klass; // x21
  QuestBoardListViewManager_o *v5; // x20

  v2 = (Il2CppObject *)this;
  if ( (byte_41852F1 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    this = (QuestBoardListViewManager___c__DisplayClass103_0_o *)sub_B2C35C(
                                                                   &Method_QuestBoardListViewManager___c__DisplayClass103_0__RequestListObject_b__10__,
                                                                   v3);
    byte_41852F1 = 1;
  }
  klass = (System_Action_o *)v2[5].klass;
  v5 = (QuestBoardListViewManager_o *)v2[1].klass;
  if ( !klass )
  {
    klass = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      klass,
      v2,
      Method_QuestBoardListViewManager___c__DisplayClass103_0__RequestListObject_b__10__,
      0LL);
    v2[5].klass = (Il2CppClass *)klass;
    sub_B2C2F8(&v2[5], klass);
  }
  if ( !v5 )
    sub_B2C434(this, method);
  QuestBoardListViewManager__SetMode(v5, 2, klass, 0, 0, 0LL);
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
  CommonUI_o *v8; // x20
  AvalonSceneManager_c *v9; // x8
  Il2CppObject *v10; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *klass; // x21

  if ( (byte_41852F2 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&AvalonSceneManager_TypeInfo, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B2C35C(&Method_QuestBoardListViewManager___c__DisplayClass103_0__RequestListObject_b__3__, v5);
    byte_41852F2 = 1;
  }
  sfo = this->fields.sfo;
  if ( !sfo )
    goto LABEL_16;
  SlideFadeObject__ResetPosition(sfo, 0LL);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_16;
  sfo = (SlideFadeObject_o *)CS___8__locals1->fields.__4__this;
  if ( !sfo )
    goto LABEL_16;
  if ( LOBYTE(sfo[4].fields.mLeftPos.fields.y) )
  {
    LOBYTE(sfo[4].fields.mLeftPos.fields.y) = 0;
    sfo = (SlideFadeObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v8 = (CommonUI_o *)sfo;
    v9 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v9 = AvalonSceneManager_TypeInfo;
    }
    v10 = (Il2CppObject *)this->fields.CS___8__locals1;
    if ( v10 )
    {
      DEFAULT_FADE_TIME = v9->static_fields->DEFAULT_FADE_TIME;
      klass = (System_Action_o *)v10[3].klass;
      if ( !klass )
      {
        klass = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
        System_Action___ctor(
          klass,
          v10,
          Method_QuestBoardListViewManager___c__DisplayClass103_0__RequestListObject_b__3__,
          0LL);
        v10[3].klass = (Il2CppClass *)klass;
        sub_B2C2F8(&v10[3], klass);
      }
      if ( v8 )
      {
        CommonUI__maskFadein(v8, DEFAULT_FADE_TIME, klass, 0LL);
        return;
      }
    }
LABEL_16:
    sub_B2C434(sfo, method);
  }
  QuestBoardListViewManager__EndSlideIn(
    (QuestBoardListViewManager_o *)sfo,
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
    sub_B2C434(this, method);
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
    sub_B2C434(0LL, method);
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

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || !this->fields.obj
    || (mTerminalList = _4__this->fields.mTerminalList,
        areaBoardInfo = this->fields.areaBoardInfo,
        this = (QuestBoardListViewManager___c__DisplayClass112_0_o *)ListViewObject__get_Index(this->fields.obj, 0LL),
        !mTerminalList) )
  {
    sub_B2C434(this, method);
  }
  ScrTerminalListTop__Click_Area(mTerminalList, areaBoardInfo, (int32_t)this, 0, 0, 0LL);
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
    sub_B2C434(0LL, result);
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
    sub_B2C434(0LL, data);
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
  QuestBoardListViewManager___c__DisplayClass139_0_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct QuestBoardListViewManager_o *_4__this; // x8
  UILabel_o *v10; // x21
  struct QuestBoardListViewManager_o *v11; // x20
  UnityEngine_Transform_o *transform; // x22
  UILabel_o *v13; // x0
  struct QuestBoardListViewManager_o *v14; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct QuestBoardListViewManager_o *v16; // x8
  UnityEngine_GameObject_o *v17; // x0
  struct QuestBoardListViewManager_o *v18; // x8

  v4 = this;
  if ( (byte_41852F3 & 1) == 0 )
  {
    sub_B2C35C(&Method_AssetData_GetObject_GameObject____67377624, assetData);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_FortificationWarningDialogComponent___, v5);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject____67450600, v6);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    this = (QuestBoardListViewManager___c__DisplayClass139_0_o *)sub_B2C35C(&StringLiteral_6767/*"FortificationWarningDialog"*/, v8);
    byte_41852F3 = 1;
  }
  if ( !assetData )
    goto LABEL_18;
  this = (QuestBoardListViewManager___c__DisplayClass139_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                 assetData,
                                                                 (System_String_o *)StringLiteral_6767/*"FortificationWarningDialog"*/,
                                                                 (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_18;
  v10 = (UILabel_o *)this;
  _4__this->fields.fortificationAssetData = assetData;
  sub_B2C2F8(&_4__this->fields.fortificationAssetData, assetData);
  v11 = v4->fields.__4__this;
  if ( !v11 )
    goto LABEL_18;
  this = (QuestBoardListViewManager___c__DisplayClass139_0_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)v4->fields.__4__this,
                                                                 0LL);
  if ( !this )
    goto LABEL_18;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v13 = UnityEngine_Object__Instantiate_UILabel_(
          v10,
          transform,
          (const MethodInfo_2095F74 *)Method_UnityEngine_Object_Instantiate_GameObject____67450600);
  v11->fields.fortificationWarningDialog = (struct UnityEngine_GameObject_o *)v13;
  sub_B2C2F8(&v11->fields.fortificationWarningDialog, v13);
  v14 = v4->fields.__4__this;
  if ( !v14 )
    goto LABEL_18;
  this = (QuestBoardListViewManager___c__DisplayClass139_0_o *)v14->fields.fortificationWarningDialog;
  if ( !this )
    goto LABEL_18;
  gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)this, 0LL);
  GameObjectExtensions__ResetPosition(gameObject, 0LL);
  v16 = v4->fields.__4__this;
  if ( !v16
    || (this = (QuestBoardListViewManager___c__DisplayClass139_0_o *)v16->fields.fortificationWarningDialog) == 0LL
    || (v17 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)this, 0LL),
        GameObjectExtensions__ResetLocalScale(v17, 0LL),
        (v18 = v4->fields.__4__this) == 0LL)
    || (this = (QuestBoardListViewManager___c__DisplayClass139_0_o *)v18->fields.fortificationWarningDialog) == 0LL
    || (this = (QuestBoardListViewManager___c__DisplayClass139_0_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                       (UnityEngine_GameObject_o *)this,
                                                                       (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_FortificationWarningDialogComponent___)) == 0LL )
  {
LABEL_18:
    sub_B2C434(this, assetData);
  }
  FortificationWarningDialogComponent__Init((FortificationWarningDialogComponent_o *)this, 0LL);
  ActionExtensions__Call(v4->fields.func, 0LL);
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
  System_Action_o *endAct; // x0

  if ( (byte_41852F4 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_41852F4 = 1;
  }
  effectComponent = (UnityEngine_Component_o *)this->fields.effectComponent;
  if ( !effectComponent )
    sub_B2C434(0LL, method);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(effectComponent, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_35314896(gameObject, 0LL);
  this->fields.effectComponent = 0LL;
  sub_B2C2F8(&this->fields.effectComponent, 0LL);
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
    sub_B2C434(this, method);
  GameObjectExtensions__SetLocalPositionY(this->fields.tgtObj, mo->fields.mNow.fields.z, 0LL);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass158_0___MoveBoard_b__1(
        QuestBoardListViewManager___c__DisplayClass158_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  struct QuestBoardListViewManager_o *_4__this; // x8

  GameObjectExtensions__SetLocalPositionY(this->fields.tgtObj, this->fields.tgtY, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B2C434(v3, v4);
  --_4__this->fields.waitCount;
}