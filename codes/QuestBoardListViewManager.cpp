void __fastcall QuestBoardListViewManager___cctor(const MethodInfo *method)
{
  QuestBoardListViewManager_c *v1; // x8

  if ( (byte_435248A & 1) == 0 )
  {
    sub_B70694(&QuestBoardListViewManager_TypeInfo);
    byte_435248A = 1;
  }
  QuestBoardListViewManager_TypeInfo->static_fields->INTO_TIME = 0.5;
  QuestBoardListViewManager_TypeInfo->static_fields->EXIT_TIME = 0.25;
  v1 = QuestBoardListViewManager_TypeInfo;
  QuestBoardListViewManager_TypeInfo->static_fields->MAP_INTO_TIME = 0.15;
  v1->static_fields->MAP_EXIT_TIME = 0.05;
  v1->static_fields->ALPHA_ANIM_SPD_RATE = 0.5;
  v1->static_fields->ALPHA_ANIM_TIME_INTERVAL = 3.0;
  v1->static_fields->DEFAULT_SCROLL_VIEW_DEPTH = 22;
  v1->static_fields->REWARD_ICON_FADE_FRAME_NUM = 7;
  v1->static_fields->ALPHA_ANIM_COUNT_RESET_VAL = 232792560;
}


void __fastcall QuestBoardListViewManager___ctor(QuestBoardListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_4352489 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem___ctor__);
    sub_B70694(&System_Collections_Generic_List_ListViewItem__TypeInfo);
    byte_4352489 = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  this->fields.topItemList = (struct System_Collections_Generic_List_ListViewItem__o *)v3;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.topItemList,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  this->fields.bottomItemList = (struct System_Collections_Generic_List_ListViewItem__o *)v10;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.bottomItemList,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall QuestBoardListViewManager__Awake(QuestBoardListViewManager_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  struct UnityEngine_BoxCollider_o *Component_srcLineSprite; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  UnityEngine_GameObject_o *v12; // x0
  struct UnityEngine_GameObject_o *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_4352453 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    byte_4352453 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_11;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                             gameObject,
                                             (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !gameObject )
    goto LABEL_11;
  this->fields.mBaseClipRange = (float)*((int *)&gameObject[6].fields + 1);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_11;
  Component_srcLineSprite = (struct UnityEngine_BoxCollider_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                  gameObject,
                                                                  (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  this->fields.mBoxCollider = Component_srcLineSprite;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.mBoxCollider,
    (System_Int32_array **)Component_srcLineSprite,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  gameObject = (UnityEngine_GameObject_o *)this->fields.mBoxCollider;
  if ( !gameObject )
    goto LABEL_11;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.mNoneLabel;
  if ( !gameObject
    || (v12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(v12, 0LL)) == 0LL)
    || (v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL),
        this->fields.mNoneLabelParent = v13,
        sub_B70630(
          (BattleServantConfConponent_o *)&this->fields.mNoneLabelParent,
          (System_Int32_array **)v13,
          v14,
          v15,
          v16,
          v17,
          v18,
          v19),
        (gameObject = this->fields.mNoneLabelParent) == 0LL) )
  {
LABEL_11:
    sub_B7076C(gameObject, v4);
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
  UnityEngine_Component_o *mFolderBg; // x0
  const MethodInfo *v10; // x2
  UnityEngine_GameObject_o *gameObject; // x21
  UnityEngine_GameObject_o *v12; // x21
  UnityEngine_Component_o *parent; // x0
  struct ExUITexture_o *Component_srcLineSprite; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  struct ExUITexture_o *v21; // x21
  __int64 v22; // x2
  Il2CppObject *v23; // x0
  System_String_o *v24; // x20
  System_Action_o *v25; // x0
  __int64 *v26; // x8
  float v27; // s0
  Il2CppObject *v28; // x0
  System_Action_o *v29; // x22
  ExUITexture_o *v30; // x0
  System_String_o *v31; // x1
  System_Action_o *v32; // x2
  UnityEngine_Component_o *v33; // x19
  Il2CppObject *v34; // x0
  int32_t v35; // [xsp+Ch] [xbp-34h] BYREF
  int32_t v36; // [xsp+18h] [xbp-28h] BYREF
  int32_t v37; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_435246F & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_ExUITexture___);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_QuestBoardListViewManager__BGChangeEffect_b__132_0__);
    sub_B70694(&Method_QuestBoardListViewManager__BGChangeEffect_b__132_1__);
    sub_B70694(&StringLiteral_2716/*"Back/back{0}"*/);
    byte_435246F = 1;
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
        QuestBoardListViewManager__bgAlphaFade(this, 4, time, v10);
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
                                                 (const MethodInfo_1D58764 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( this->fields.mFolderBg )
        {
          v12 = (UnityEngine_GameObject_o *)mFolderBg;
          mFolderBg = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)this->fields.mFolderBg,
                                                   0LL);
          if ( mFolderBg )
          {
            parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(
                                                  (UnityEngine_Transform_o *)mFolderBg,
                                                  0LL);
            GameObjectExtensions__SafeSetParent(v12, parent, 0LL);
            if ( v12 )
            {
              Component_srcLineSprite = (struct ExUITexture_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                  v12,
                                                                  (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_ExUITexture___);
              this->fields.mFolderBgTemp = Component_srcLineSprite;
              sub_B70630(
                (BattleServantConfConponent_o *)&this->fields.mFolderBgTemp,
                (System_Int32_array **)Component_srcLineSprite,
                v15,
                v16,
                v17,
                v18,
                v19,
                v20);
              mFolderBg = (UnityEngine_Component_o *)this->fields.mFolderBgTemp;
              if ( mFolderBg )
              {
                UIWidget__set_depth((UIWidget_o *)mFolderBg, LODWORD(mFolderBg[7].klass) + 1, 0LL);
                this->fields.mCrossFadeTime = time;
                v21 = this->fields.mFolderBg;
                v35 = bgID;
                v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v35, v22);
                v24 = System_String__Format((System_String_o *)StringLiteral_2716/*"Back/back{0}"*/, v23, 0LL);
                v25 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
                v26 = &Method_QuestBoardListViewManager__BGChangeEffect_b__132_1__;
                goto LABEL_21;
              }
            }
          }
        }
      }
    }
    else
    {
      v33 = (UnityEngine_Component_o *)this->fields.mFolderBg;
      if ( bgID )
      {
        v36 = bgID;
        v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v36, v10);
        mFolderBg = (UnityEngine_Component_o *)System_String__Format((System_String_o *)StringLiteral_2716/*"Back/back{0}"*/, v34, 0LL);
        if ( v33 )
        {
          v31 = (System_String_o *)mFolderBg;
          v30 = (ExUITexture_o *)v33;
          v32 = 0LL;
          goto LABEL_23;
        }
      }
      else if ( v33 )
      {
        mFolderBg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(v33, 0LL);
        if ( mFolderBg )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mFolderBg, 0, 0LL);
          return;
        }
      }
    }
LABEL_32:
    sub_B7076C(mFolderBg, *(_QWORD *)&bgID);
  }
  if ( !bgID )
    return;
  v27 = 0.0;
  if ( effectType )
    v27 = time;
  this->fields.mCrossFadeTime = v27;
  v21 = this->fields.mFolderBg;
  v37 = bgID;
  v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v37, v10);
  v24 = System_String__Format((System_String_o *)StringLiteral_2716/*"Back/back{0}"*/, v28, 0LL);
  v25 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  v26 = &Method_QuestBoardListViewManager__BGChangeEffect_b__132_0__;
LABEL_21:
  v29 = v25;
  System_Action___ctor(v25, (Il2CppObject *)this, *v26, 0LL);
  if ( !v21 )
    goto LABEL_32;
  v30 = v21;
  v31 = v24;
  v32 = v29;
LABEL_23:
  ExUITexture__SetAssetImage(v30, v31, v32, 0LL);
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

  if ( (byte_4352472 & 1) == 0 )
  {
    sub_B70694(&QuestBoardListViewManager__CoroutineLoadAsset_d__136_TypeInfo);
    byte_4352472 = 1;
  }
  v5 = sub_B70764(QuestBoardListViewManager__CoroutineLoadAsset_d__136_TypeInfo);
  QuestBoardListViewManager__CoroutineLoadAsset_d__136___ctor(
    (QuestBoardListViewManager__CoroutineLoadAsset_d__136_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_B7076C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 40) = onCompleteLoad;
  sub_B70630(
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
  void *gameObject; // x0
  __int64 v15; // x1
  UIWidget_o *Component_srcLineSprite; // x24
  UnityEngine_BoxCollider_o *v17; // x25
  QuestBoardListViewItemDraw_c *v18; // x8
  int32_t SCRL_OBJ_DUMMY_NUM; // w19
  struct ListViewItemSeed_o *seed; // x8
  float v21; // s10
  float mBaseClipRange; // s11
  UIPanel_o *v23; // x26
  float v24; // s9
  double v25; // d0
  __int64 v26; // x8
  __int64 v27; // x8
  bool activeSelf; // w0
  QuestBoardListViewManager_c *v29; // x8
  float *p_MAP_EXIT_TIME; // x8
  float v31; // w8
  UILabel_o *mNoneLabel; // x24
  QuestBoardListViewItemDraw_c *v33; // x0
  int32_t size; // w19
  int v35; // w8
  unsigned __int64 v36; // x21
  signed __int64 v37; // x19
  MapControl_QuestInfo_o *v38; // x24
  QuestBoardListViewItem_o *v39; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v40; // x25
  int32_t v41; // w2
  UnityEngine_GameObject_o *blackMarkPrefab; // x26
  UnityEngine_GameObject_o *whiteMarkPrefab; // x27
  int32_t v44; // w19
  int v45; // w8
  signed __int64 v46; // x22
  signed __int64 v47; // x27
  ScrTerminalListTop_WarSelectedQuestInfo_o *v48; // x24
  struct WarQuestSelectionEntity_o *warQuestSelectionEnt; // x8
  int32_t warId; // w23
  const MethodInfo *v51; // x2
  MapControl_QuestInfo_o *questInfo; // x25
  struct WarQuestSelectionEntity_o *v53; // x8
  int32_t shortCutBannerId; // w26
  QuestBoardListViewItem_o *v55; // x0
  QuestBoardListViewItem_o *v56; // x24
  int32_t v57; // w2
  UnityEngine_GameObject_o *v58; // x23
  UnityEngine_GameObject_o *v59; // x25
  struct MapControl_QuestInfo_o *v60; // x8
  struct WarQuestSelectionEntity_o *v61; // x8
  struct WarQuestSelectionEntity_o *v62; // x8
  bool v63; // [xsp+8h] [xbp-78h]
  UnityEngine_Vector3_o v65; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector4_o v66; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4352456 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_UIPanel___);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_ScrTerminalListTop_WarSelectedQuestInfo__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_MapControl_QuestInfo__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_MapControl_QuestInfo__get_Item__);
    sub_B70694(&Method_System_Collections_Generic_List_ScrTerminalListTop_WarSelectedQuestInfo__get_Item__);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&QuestBoardListViewItemDraw_TypeInfo);
    sub_B70694(&QuestBoardListViewItem_TypeInfo);
    sub_B70694(&QuestBoardListViewManager_TypeInfo);
    sub_B70694(&TerminalPramsManager_TypeInfo);
    sub_B70694(&TerminalSceneComponent_TypeInfo);
    sub_B70694(&StringLiteral_11113/*"QUEST_NONE"*/);
    byte_4352456 = 1;
  }
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( info_kind == 4 || info_kind == 1 )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    TerminalPramsManager__LoadQuestReleasedFocusState(0LL);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_116;
  Component_srcLineSprite = (UIWidget_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                            (UnityEngine_GameObject_o *)gameObject,
                                            (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_116;
  v17 = (UnityEngine_BoxCollider_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                       (UnityEngine_GameObject_o *)gameObject,
                                       (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  v18 = QuestBoardListViewItemDraw_TypeInfo;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v18 = QuestBoardListViewItemDraw_TypeInfo;
  }
  gameObject = this->fields.scrollView;
  if ( !gameObject )
    goto LABEL_116;
  SCRL_OBJ_DUMMY_NUM = v18->static_fields->SCRL_OBJ_DUMMY_NUM;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_116;
  gameObject = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                 (UnityEngine_GameObject_o *)gameObject,
                 (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
  if ( !gameObject )
    goto LABEL_116;
  seed = this->fields.seed;
  if ( !seed )
    goto LABEL_116;
  v21 = *((float *)gameObject + 72);
  mBaseClipRange = this->fields.mBaseClipRange;
  v23 = (UIPanel_o *)gameObject;
  seed->fields.arrangementPich.fields.y = -pos_itvl_y;
  if ( !Component_srcLineSprite )
    goto LABEL_116;
  v24 = (float)(SCRL_OBJ_DUMMY_NUM + 1) * pos_itvl_y;
  v25 = v24;
  if ( v24 == INFINITY )
    v25 = -v24;
  UIWidget__set_height(Component_srcLineSprite, (int)v25, 0LL);
  if ( !v17 )
    goto LABEL_116;
  LODWORD(v65.fields.x) = (unsigned int)UnityEngine_BoxCollider__get_size(v17, 0LL);
  v65.fields.z = 0.0;
  v65.fields.y = v24;
  UnityEngine_BoxCollider__set_size(v17, v65, 0LL);
  v66.fields.y = (float)(mBaseClipRange - v24) * 0.5;
  v66.fields.z = clip_w;
  v66.fields.w = v24;
  this->fields.clipRange.fields.y = v24 + (float)QuestBoardListViewItemDraw_TypeInfo->static_fields->CLIP_RANGE_MARGIN;
  v66.fields.x = v21;
  UIPanel__set_baseClipRegion(v23, v66, 0LL);
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
  if ( !byte_434DEA1 )
  {
    sub_B70694(&TerminalSceneComponent_TypeInfo);
    byte_434DEA1 = 1;
  }
  gameObject = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    gameObject = TerminalSceneComponent_TypeInfo;
  }
  v26 = **((_QWORD **)gameObject + 23);
  if ( !v26 )
    goto LABEL_116;
  v27 = *(_QWORD *)(v26 + 256);
  if ( !v27 )
    goto LABEL_116;
  gameObject = *(void **)(v27 + 96);
  if ( !gameObject )
    goto LABEL_116;
  activeSelf = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)gameObject, 0LL);
  v29 = QuestBoardListViewManager_TypeInfo;
  if ( activeSelf )
  {
    if ( (WORD1(QuestBoardListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !QuestBoardListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewManager_TypeInfo);
      v29 = QuestBoardListViewManager_TypeInfo;
    }
    this->fields.infoTime = v29->static_fields->MAP_INTO_TIME;
    p_MAP_EXIT_TIME = &v29->static_fields->MAP_EXIT_TIME;
  }
  else
  {
    if ( (WORD1(QuestBoardListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !QuestBoardListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewManager_TypeInfo);
      v29 = QuestBoardListViewManager_TypeInfo;
    }
    this->fields.infoTime = v29->static_fields->INTO_TIME;
    p_MAP_EXIT_TIME = &v29->static_fields->EXIT_TIME;
  }
  v31 = *p_MAP_EXIT_TIME;
  this->fields.mAlphaAnimCnt = 0;
  this->fields.exitTime = v31;
  this->fields._SyncReferenceTime_k__BackingField = UnityEngine_Time__get_time(0LL);
  if ( !qinf_list )
    goto LABEL_116;
  gameObject = this->fields.mNoneLabelParent;
  if ( !gameObject )
    goto LABEL_116;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, qinf_list->fields._size < 1, 0LL);
  mNoneLabel = this->fields.mNoneLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_11113/*"QUEST_NONE"*/, 0LL);
  if ( !mNoneLabel )
LABEL_116:
    sub_B7076C(gameObject, v15);
  UILabel__set_text(mNoneLabel, (System_String_o *)gameObject, 0LL);
  v33 = QuestBoardListViewItemDraw_TypeInfo;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v33 = QuestBoardListViewItemDraw_TypeInfo;
  }
  if ( info_kind != 6 )
  {
    size = qinf_list->fields._size;
    v63 = isAllDisp;
    if ( (BYTE3(v33->vtable._0_Equals.methodPtr) & 4) != 0 && !v33->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v33);
      v33 = QuestBoardListViewItemDraw_TypeInfo;
    }
    v35 = v33->static_fields->SCRL_OBJ_DUMMY_NUM + size;
    if ( v35 < 1 )
    {
LABEL_114:
      ListViewManager__SortItem((ListViewManager_o *)this, -1, v63, -1, 0LL);
      return;
    }
    v36 = 0LL;
    v37 = v35;
    while ( (__int64)v36 < qinf_list->fields._size )
    {
      if ( v36 >= (unsigned int)qinf_list->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
      v38 = qinf_list->fields._items->m_Items[v36];
      if ( info_kind != 2 || !v38 )
        goto LABEL_76;
      gameObject = v38->fields._WarInfo_k__BackingField;
      if ( !gameObject )
        goto LABEL_116;
      gameObject = MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_116;
      if ( WarEntity__HasFlag((WarEntity_o *)gameObject, 16, 0LL) )
      {
        v39 = (QuestBoardListViewItem_o *)sub_B70764(QuestBoardListViewItem_TypeInfo);
        v40 = (EventMissionProgressRequest_Argument_ProgressData_o *)v39;
        v41 = 4;
      }
      else
      {
LABEL_76:
        if ( !v38 || !MapControl_QuestInfo__GetMine(v38, 0LL) )
          goto LABEL_79;
        gameObject = MapControl_QuestInfo__GetMine(v38, 0LL);
        if ( !gameObject )
          goto LABEL_116;
        if ( (*((_DWORD *)gameObject + 10) & 0x1F) != 7 )
          goto LABEL_79;
        v39 = (QuestBoardListViewItem_o *)sub_B70764(QuestBoardListViewItem_TypeInfo);
        v40 = (EventMissionProgressRequest_Argument_ProgressData_o *)v39;
        v41 = 5;
      }
      QuestBoardListViewItem___ctor_27531660(v39, v36, v41, v38, 0LL, 0LL, 0, 0, 0LL);
LABEL_80:
      gameObject = this->fields.itemList;
      if ( !gameObject )
        goto LABEL_116;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)gameObject,
        v40,
        (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      if ( (__int64)++v36 >= v37 )
        goto LABEL_114;
    }
    v38 = 0LL;
LABEL_79:
    blackMarkPrefab = this->fields.blackMarkPrefab;
    whiteMarkPrefab = this->fields.whiteMarkPrefab;
    v40 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_B70764(QuestBoardListViewItem_TypeInfo);
    QuestBoardListViewItem___ctor_27531660(
      (QuestBoardListViewItem_o *)v40,
      v36,
      info_kind,
      v38,
      blackMarkPrefab,
      whiteMarkPrefab,
      0,
      0,
      0LL);
    goto LABEL_80;
  }
  gameObject = this->fields.mNoneLabelParent;
  if ( warSelectedQuestList )
  {
    v15 = warSelectedQuestList->fields._size < 1;
    if ( !gameObject )
      goto LABEL_116;
  }
  else
  {
    v15 = 1LL;
    if ( !gameObject )
      goto LABEL_116;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v15, 0LL);
  if ( warSelectedQuestList )
  {
    gameObject = QuestBoardListViewItemDraw_TypeInfo;
    v44 = warSelectedQuestList->fields._size;
    v63 = isAllDisp;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      gameObject = QuestBoardListViewItemDraw_TypeInfo;
    }
    v45 = *(_DWORD *)(*((_QWORD *)gameObject + 23) + 24LL) + v44;
    if ( v45 >= 1 )
    {
      v46 = 0LL;
      v47 = v45;
      do
      {
        if ( v46 >= warSelectedQuestList->fields._size )
          goto LABEL_100;
        if ( v46 >= (unsigned __int64)(unsigned int)warSelectedQuestList->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
        v48 = warSelectedQuestList->fields._items->m_Items[v46];
        if ( v48 )
        {
          warQuestSelectionEnt = v48->fields.warQuestSelectionEnt;
          if ( !warQuestSelectionEnt )
            goto LABEL_116;
          gameObject = v48->fields.questInfo;
          if ( !gameObject )
            goto LABEL_116;
          warId = warQuestSelectionEnt->fields.warId;
          gameObject = MapControl_QuestInfo__GetMine((MapControl_QuestInfo_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_116;
          gameObject = (void *)QuestEntity__HasFlag((QuestEntity_o *)gameObject, 0x800000000000000LL, v51);
          questInfo = v48->fields.questInfo;
          if ( ((unsigned __int8)gameObject & 1) != 0 )
          {
            v53 = v48->fields.warQuestSelectionEnt;
            if ( !v53 )
              goto LABEL_116;
            shortCutBannerId = v53->fields.shortCutBannerId;
            v55 = (QuestBoardListViewItem_o *)sub_B70764(QuestBoardListViewItem_TypeInfo);
            v56 = v55;
            v57 = 6;
          }
          else
          {
            if ( !questInfo )
              goto LABEL_116;
            gameObject = (void *)MapControl_QuestInfo__GetQuestType(v48->fields.questInfo, 0LL);
            if ( (_DWORD)gameObject != 3 )
              goto LABEL_107;
            v60 = v48->fields.questInfo;
            if ( !v60 )
              goto LABEL_116;
            gameObject = v60->fields._WarInfo_k__BackingField;
            if ( !gameObject )
              goto LABEL_116;
            gameObject = MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)gameObject, 0LL);
            if ( !gameObject )
              goto LABEL_116;
            gameObject = (void *)WarEntity__HasFlag((WarEntity_o *)gameObject, 16, 0LL);
            if ( ((unsigned __int8)gameObject & 1) == 0 )
            {
              v62 = v48->fields.warQuestSelectionEnt;
              if ( !v62 )
                goto LABEL_116;
              questInfo = v48->fields.questInfo;
              shortCutBannerId = v62->fields.shortCutBannerId;
              v55 = (QuestBoardListViewItem_o *)sub_B70764(QuestBoardListViewItem_TypeInfo);
              v56 = v55;
              v57 = 2;
            }
            else
            {
LABEL_107:
              v61 = v48->fields.warQuestSelectionEnt;
              if ( !v61 )
                goto LABEL_116;
              questInfo = v48->fields.questInfo;
              shortCutBannerId = v61->fields.shortCutBannerId;
              v55 = (QuestBoardListViewItem_o *)sub_B70764(QuestBoardListViewItem_TypeInfo);
              v56 = v55;
              v57 = 4;
            }
          }
          QuestBoardListViewItem___ctor_27531660(v55, v46, v57, questInfo, 0LL, 0LL, shortCutBannerId, warId, 0LL);
        }
        else
        {
LABEL_100:
          v58 = this->fields.blackMarkPrefab;
          v59 = this->fields.whiteMarkPrefab;
          v56 = (QuestBoardListViewItem_o *)sub_B70764(QuestBoardListViewItem_TypeInfo);
          QuestBoardListViewItem___ctor_27531660(v56, v46, 6, 0LL, v58, v59, 0, 0, 0LL);
        }
        gameObject = this->fields.itemList;
        if ( !gameObject )
          goto LABEL_116;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)gameObject,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v56,
          (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        ++v46;
      }
      while ( v46 < v47 );
    }
    goto LABEL_114;
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

  if ( (byte_435245A & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_435245A = 1;
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
      sub_B7076C(v16, v17);
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
    sub_B7076C(0LL, end_act);
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
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  const MethodInfo *v14; // x1
  System_Action_o *v15; // x20
  const MethodInfo *v16; // x5

  if ( (byte_4352463 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_QuestBoardListViewManager___c__DisplayClass107_0__EndSlideOut_b__0__);
    sub_B70694(&QuestBoardListViewManager___c__DisplayClass107_0_TypeInfo);
    byte_4352463 = 1;
  }
  v5 = sub_B70764(QuestBoardListViewManager___c__DisplayClass107_0_TypeInfo);
  QuestBoardListViewManager___c__DisplayClass107_0___ctor((QuestBoardListViewManager___c__DisplayClass107_0_o *)v5, 0LL);
  if ( !v5 )
    sub_B7076C(v6, v7);
  *(_QWORD *)(v5 + 16) = end_act;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)end_act, v8, v9, v10, v11, v12, v13);
  this->fields.mIsDoing_Slide = 0;
  QuestBoardListViewManager__ResetBG(this, v14);
  v15 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(
    v15,
    (Il2CppObject *)v5,
    Method_QuestBoardListViewManager___c__DisplayClass107_0__EndSlideOut_b__0__,
    0LL);
  QuestBoardListViewManager__SetMode(this, 0, v15, 0, 0, v16);
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


PartyServantListViewItem_o *__fastcall QuestBoardListViewManager__GetItem(
        QuestBoardListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  ListViewItem_o *v6; // x8
  __int64 v7; // x11

  if ( (byte_435245D & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B70694(&PartyServantListViewItem_TypeInfo);
    byte_435245D = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
  v6 = itemList->fields._items->m_Items[index];
  if ( !v6 )
    return 0LL;
  v7 = *(&PartyServantListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v6->klass->_2.bitflags2 + 1) < (unsigned int)v7 )
    return 0LL;
  if ( (PartyServantListViewItem_c *)v6->klass->_2.typeHierarchy[v7 - 1] == PartyServantListViewItem_TypeInfo )
    return (PartyServantListViewItem_o *)itemList->fields._items->m_Items[index];
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
QuestBoardListViewObject_o *__fastcall QuestBoardListViewManager__GetQuestBoardObjForWarId(
        QuestBoardListViewManager_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  Il2CppObject *current; // x25
  __int64 v7; // x10
  _QWORD *monitor; // x8
  __int64 v9; // x8
  UnityEngine_Object_o *v10; // x20
  void *v11; // x8
  __int64 v12; // x11
  UnityEngine_Object_o *v13; // x20
  int v14; // w19
  System_Collections_Generic_List_Enumerator_T__o v16; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_435245B & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&QuestBoardListViewItem_TypeInfo);
    sub_B70694(&QuestBoardListViewObject_TypeInfo);
    byte_435245B = 1;
  }
  memset(&v17, 0, sizeof(v17));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_B7076C(0LL, *(_QWORD *)&warId);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v16,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v17 = v16;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v17,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
  {
    current = v17.fields.current;
    if ( v17.fields.current )
    {
      v7 = *(&QuestBoardListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v17.fields.current->klass->_2.bitflags2 + 1) >= (unsigned int)v7
        && (QuestBoardListViewItem_c *)v17.fields.current->klass->_2.typeHierarchy[v7 - 1] == QuestBoardListViewItem_TypeInfo )
      {
        monitor = v17.fields.current[7].monitor;
        if ( monitor )
        {
          v9 = monitor[14];
          if ( v9 )
          {
            if ( *(_DWORD *)(v9 + 16) != 1 && *(_DWORD *)(v9 + 20) == warId )
            {
              v10 = (UnityEngine_Object_o *)v17.fields.current[6].monitor;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( UnityEngine_Object__op_Inequality(v10, 0LL, 0LL) )
              {
                v11 = current[6].monitor;
                if ( v11
                  && (v12 = *(&QuestBoardListViewObject_TypeInfo->_2.bitflags2 + 1),
                      *(unsigned __int8 *)(*(_QWORD *)v11 + 300LL) >= (unsigned int)v12) )
                {
                  v13 = *(QuestBoardListViewObject_c **)(*(_QWORD *)(*(_QWORD *)v11 + 200LL) + 8 * v12 - 8) == QuestBoardListViewObject_TypeInfo
                      ? (UnityEngine_Object_o *)current[6].monitor
                      : 0LL;
                }
                else
                {
                  v13 = 0LL;
                }
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                if ( UnityEngine_Object__op_Inequality(v13, 0LL, 0LL) )
                {
                  v14 = 3;
                  goto LABEL_29;
                }
              }
            }
          }
        }
      }
    }
  }
  v13 = 0LL;
  v14 = 1;
LABEL_29:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v17,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  if ( (unsigned int)(v14 + 1) >> 2 )
    return (QuestBoardListViewObject_o *)v13;
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
  System_Collections_Generic_List_QuestBoardListViewObject__o *ObjectList; // x0
  __int64 v6; // x1
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *current; // x20
  const MethodInfo *v10; // x3
  System_Collections_Generic_List_Enumerator_T__o v11; // [xsp+8h] [xbp-38h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_4352460 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_QuestBoardListViewObject__GetEnumerator__);
    byte_4352460 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  ObjectList = QuestBoardListViewManager__get_ObjectList(this, *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B7076C(0LL, v6);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v11,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ObjectList,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_QuestBoardListViewObject__GetEnumerator__);
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v11,
           (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__MoveNext__);
    if ( !v7 )
      break;
    current = v11.fields.current;
    if ( !v11.fields.current )
      sub_B7076C(v7, v8);
    zero = UnityEngine_Vector3__get_zero(0LL);
    QuestBoardListViewObject__Init_26064564(
      (QuestBoardListViewObject_o *)current,
      mode,
      0LL,
      zero.fields.x,
      *(UnityEngine_Vector3_o *)&zero.fields.y,
      v10);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v11,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__Dispose__);
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
  UnityEngine_MonoBehaviour__StartCoroutine_36062060((UnityEngine_MonoBehaviour_o *)this, Asset, 0LL);
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
  __int64 v13; // x20
  MoveObject_o *v14; // x0
  __int64 v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Int32_array **Component_UIWidget; // x0
  MoveObject_o **v29; // x23
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  float v36; // s10
  float x; // s10
  float y; // s11
  float z; // s12
  MoveObject_o *v40; // x21
  float v41; // s13
  float v42; // s15
  float v43; // s14
  System_Action_o *v44; // x22
  System_Action_o *v45; // x23
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v47; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v48; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v49; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_4352488 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_GameObjectExtensions_SafeGetComponent_MoveObject___);
    sub_B70694(&Method_QuestBoardListViewManager___c__DisplayClass159_0__MoveBoard_b__0__);
    sub_B70694(&Method_QuestBoardListViewManager___c__DisplayClass159_0__MoveBoard_b__1__);
    sub_B70694(&QuestBoardListViewManager___c__DisplayClass159_0_TypeInfo);
    byte_4352488 = 1;
  }
  v13 = sub_B70764(QuestBoardListViewManager___c__DisplayClass159_0_TypeInfo);
  QuestBoardListViewManager___c__DisplayClass159_0___ctor(
    (QuestBoardListViewManager___c__DisplayClass159_0_o *)v13,
    0LL);
  if ( !v13 )
    goto LABEL_10;
  *(_QWORD *)(v13 + 40) = this;
  sub_B70630((BattleServantConfConponent_o *)(v13 + 40), (System_Int32_array **)this, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v13 + 16) = obj;
  sub_B70630((BattleServantConfConponent_o *)(v13 + 16), (System_Int32_array **)obj, v22, v23, v24, v25, v26, v27);
  *(float *)(v13 + 32) = GameObjectExtensions__GetLocalPositionY(*(UnityEngine_GameObject_o **)(v13 + 16), 0LL) + moveY;
  Component_UIWidget = (System_Int32_array **)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                *(UnityEngine_GameObject_o **)(v13 + 16),
                                                (const MethodInfo_1D4BBAC *)Method_GameObjectExtensions_SafeGetComponent_MoveObject___);
  v29 = (MoveObject_o **)(v13 + 24);
  *(_QWORD *)(v13 + 24) = Component_UIWidget;
  sub_B70630((BattleServantConfConponent_o *)(v13 + 24), Component_UIWidget, v30, v31, v32, v33, v34, v35);
  if ( is_force
    || (v36 = *(float *)(v13 + 32),
        v36 == GameObjectExtensions__GetLocalPositionY(*(UnityEngine_GameObject_o **)(v13 + 16), 0LL)) )
  {
    v14 = *v29;
    if ( *v29 )
    {
      MoveObject__Stop(v14, 0LL);
      GameObjectExtensions__SetLocalPositionY(*(UnityEngine_GameObject_o **)(v13 + 16), *(float *)(v13 + 32), 0LL);
      --this->fields.waitCount;
      return;
    }
LABEL_10:
    sub_B7076C(v14, v15);
  }
  LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v13 + 16), 0LL);
  x = LocalPosition.fields.x;
  y = LocalPosition.fields.y;
  z = LocalPosition.fields.z;
  v47 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v13 + 16), 0LL);
  v40 = *(MoveObject_o **)(v13 + 24);
  v41 = v47.fields.x;
  v42 = v47.fields.y;
  v43 = v47.fields.z;
  v44 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(
    v44,
    (Il2CppObject *)v13,
    Method_QuestBoardListViewManager___c__DisplayClass159_0__MoveBoard_b__0__,
    0LL);
  v45 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(
    v45,
    (Il2CppObject *)v13,
    Method_QuestBoardListViewManager___c__DisplayClass159_0__MoveBoard_b__1__,
    0LL);
  if ( !v40 )
    goto LABEL_10;
  v49.fields.y = v42 + moveY;
  v48.fields.x = x;
  v48.fields.y = y;
  v48.fields.z = z;
  v49.fields.x = v41;
  v49.fields.z = v43;
  MoveObject__Play(v40, v48, v49, time, v44, v45, 0.0, easeType, 0LL);
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
  struct System_Collections_Generic_List_ListViewItem__o *topItemList; // x0
  UnityEngine_Component_o *monitor; // x24
  __int64 v14; // x1
  QuestBoardListViewItemDraw_c *v15; // x0
  int POS_Y_ITVL_AREA; // w8
  int v17; // w19
  UnityEngine_GameObject_o *gameObject; // x1
  const MethodInfo *v19; // x4
  _BOOL8 v20; // x0
  __int64 v21; // x1
  UnityEngine_Component_o *v22; // x24
  __int64 v23; // x1
  QuestBoardListViewItemDraw_c *v24; // x0
  int v25; // w8
  int v26; // w19
  UnityEngine_GameObject_o *v27; // x1
  const MethodInfo *v28; // x4
  _BOOL8 v29; // x0
  __int64 v30; // x1
  int v31; // w21
  const MethodInfo *v32; // x2
  System_Collections_IEnumerator_o *v33; // x0
  System_Collections_Generic_List_Enumerator_T__o v34; // [xsp+8h] [xbp-A8h] BYREF
  int v35[2]; // [xsp+20h] [xbp-90h]
  int v36; // [xsp+28h] [xbp-88h]
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+30h] [xbp-80h] BYREF
  System_Action_o *endActa; // [xsp+58h] [xbp-58h]

  endActa = endAct;
  if ( (byte_4352458 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&QuestBoardListViewItemDraw_TypeInfo);
    byte_4352458 = 1;
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
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v37 = v34;
  while ( 1 )
  {
    v20 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v37,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v20 )
      break;
    if ( !v37.fields.current )
      sub_B7076C(v20, v21);
    monitor = (UnityEngine_Component_o *)v37.fields.current[6].monitor;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)monitor, 0LL, 0LL) )
    {
      v15 = QuestBoardListViewItemDraw_TypeInfo;
      if ( isClose )
      {
        if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          v15 = QuestBoardListViewItemDraw_TypeInfo;
        }
        POS_Y_ITVL_AREA = -v15->static_fields->POS_Y_ITVL_AREA;
      }
      else
      {
        if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          v15 = QuestBoardListViewItemDraw_TypeInfo;
        }
        POS_Y_ITVL_AREA = v15->static_fields->POS_Y_ITVL_AREA;
      }
      if ( POS_Y_ITVL_AREA >= 0 )
        v17 = POS_Y_ITVL_AREA;
      else
        v17 = POS_Y_ITVL_AREA + 1;
      if ( !monitor )
        sub_B7076C(v15, v14);
      gameObject = UnityEngine_Component__get_gameObject(monitor, 0LL);
      QuestBoardListViewManager__MoveBoard(this, gameObject, (float)(v17 >> 1), moveTime, easeType, isForce, v19);
      ++this->fields.waitCount;
    }
  }
  v35[0] = 124;
  v36 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v37,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  v36 = 0;
  topItemList = this->fields.bottomItemList;
  if ( !topItemList )
LABEL_57:
    sub_B7076C(topItemList, isClose);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v34,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)topItemList,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v37 = v34;
  while ( 1 )
  {
    v29 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v37,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v29 )
      break;
    if ( !v37.fields.current )
      sub_B7076C(v29, v30);
    v22 = (UnityEngine_Component_o *)v37.fields.current[6].monitor;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v22, 0LL, 0LL) )
    {
      v24 = QuestBoardListViewItemDraw_TypeInfo;
      if ( isClose )
      {
        if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          v24 = QuestBoardListViewItemDraw_TypeInfo;
        }
        v25 = v24->static_fields->POS_Y_ITVL_AREA;
      }
      else
      {
        if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          v24 = QuestBoardListViewItemDraw_TypeInfo;
        }
        v25 = -v24->static_fields->POS_Y_ITVL_AREA;
      }
      if ( v25 >= 0 )
        v26 = v25;
      else
        v26 = v25 + 1;
      if ( !v22 )
        sub_B7076C(v24, v23);
      v27 = UnityEngine_Component__get_gameObject(v22, 0LL);
      QuestBoardListViewManager__MoveBoard(this, v27, (float)(v26 >> 1), moveTime, easeType, isForce, v28);
      ++this->fields.waitCount;
    }
  }
  v35[0] = 244;
  v31 = ++v36;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v37,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  if ( v31 && v35[v31 - 1] == 244 )
    v36 = v31 - 1;
  if ( endActa )
  {
    v33 = QuestBoardListViewManager__WaitFinish(this, endActa, v32);
    UnityEngine_MonoBehaviour__StartCoroutine_36062060((UnityEngine_MonoBehaviour_o *)this, v33, 0LL);
  }
}


void __fastcall QuestBoardListViewManager__OnChangeAlphaAnim(
        QuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_QuestBoardListViewObject__o *ObjectList; // x0
  const MethodInfo *v4; // x1
  int size; // w8
  System_Collections_Generic_List_QuestBoardListViewObject__o *v6; // x20
  unsigned int v7; // w21

  if ( (byte_435246B & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_QuestBoardListViewObject__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_QuestBoardListViewObject__get_Item__);
    byte_435246B = 1;
  }
  ObjectList = QuestBoardListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    goto LABEL_11;
  size = ObjectList->fields._size;
  v6 = ObjectList;
  if ( size >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( size <= v7 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
      ObjectList = (System_Collections_Generic_List_QuestBoardListViewObject__o *)v6->fields._items->m_Items[v7];
      if ( !ObjectList )
        break;
      QuestBoardListViewObject__OnChangeAlphaAnim((QuestBoardListViewObject_o *)ObjectList, v4);
      size = v6->fields._size;
      if ( (int)++v7 >= size )
        goto LABEL_10;
    }
LABEL_11:
    sub_B7076C(ObjectList, v4);
  }
LABEL_10:
  this->fields.mResetConsumeColor = 0;
}


void __fastcall QuestBoardListViewManager__OnClickListView(
        QuestBoardListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v5; // x22
  CommonUI_o *Instance; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  void **v14; // x21
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
  __int64 v27; // x24
  __int64 v28; // x10
  MapControl_QuestInfo_o *v29; // x20
  System_Int32_array **AreaBoardInfo_k__BackingField; // x1
  MapControl_AreaBoardInfo_o **v31; // x23
  struct TerminalSceneComponent_o *mTerminalScene; // x9
  int32_t dispType; // w8
  MapControl_WarInfo_o *WarInfoByWarID; // x0
  MapControl_WarInfo_o *v35; // x23
  WarEntity_o *Mine; // x22
  bool IsClosedWar; // w0
  MapControl_WarInfo_o *WarInfo_k__BackingField; // x0
  int32_t EventId; // w22
  const MethodInfo *v40; // x3
  int32_t GroupId; // w23
  QuestEntity_o *v42; // x0
  const MethodInfo *v43; // x2
  QuestEntity_o *v44; // x23
  __int64 v45; // x1
  __int64 v46; // x1
  TerminalSceneComponent_c *v47; // x0
  TerminalSceneComponent_o *mInstance; // x0
  const MethodInfo *v49; // x1
  __int64 v50; // x1
  UnityEngine_GameObject_o *fortificationWarningDialog; // x0
  FortificationWarningDialogComponent_o *Component_srcLineSprite; // x0
  __int64 v53; // x1
  int32_t SpotID; // w22
  TerminalPramsManager_c *v55; // x0
  int32_t questId; // w22
  TerminalPramsManager_c *v57; // x0
  int32_t v58; // w22
  TerminalPramsManager_c *v59; // x0
  EventEntity_o *eventEnt; // x20
  System_Action_o *v61; // x24
  const MethodInfo *v62; // x4
  __int64 v63; // x8
  ScrTerminalListTop_o *mTerminalList; // x19
  MapControl_AreaBoardInfo_o *v65; // x20
  int32_t v66; // w22
  TerminalSceneComponent_c *v67; // x0
  TerminalSceneComponent_c *v68; // x0
  const MethodInfo *v69; // x1
  ScrTerminalListTop_o *v70; // x19
  QuestEntity_o *v71; // x22
  TerminalSceneComponent_c *v72; // x0
  const MethodInfo *v73; // x2
  int32_t v74; // w23
  const MethodInfo *v75; // x2
  TerminalSceneComponent_c *v76; // x0
  const MethodInfo *v77; // x1
  ScrTerminalListTop_o *v78; // x19
  __int64 v79; // x9
  System_Collections_Generic_List_Enumerator_T__o v80; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v81; // [xsp+20h] [xbp-60h] BYREF
  System_Collections_Generic_List_EventFortificationEntity__o *entities; // [xsp+38h] [xbp-48h] BYREF

  if ( (byte_4352466 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_DataManager_GetMaster_EventFortificationMaster___);
    sub_B70694(&Method_DataManager_GetMaster_QuestGroupMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__get_Current__);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_FortificationWarningDialogComponent___);
    sub_B70694(&Method_System_Collections_Generic_List_EventFortificationEntity__GetEnumerator__);
    sub_B70694(&QuestBoardListViewItem_TypeInfo);
    sub_B70694(&QuestBoardListViewObject_TypeInfo);
    sub_B70694(&QuestInformationComponent_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_B70694(&SingletonTemplate_QuestTree__TypeInfo);
    sub_B70694(&SoundManager_TypeInfo);
    sub_B70694(&TerminalPramsManager_TypeInfo);
    sub_B70694(&TerminalSceneComponent_TypeInfo);
    sub_B70694(&Method_QuestBoardListViewManager___c__DisplayClass113_0__OnClickListView_b__0__);
    sub_B70694(&QuestBoardListViewManager___c__DisplayClass113_0_TypeInfo);
    byte_4352466 = 1;
  }
  entities = 0LL;
  memset(&v81, 0, sizeof(v81));
  v5 = sub_B70764(QuestBoardListViewManager___c__DisplayClass113_0_TypeInfo);
  QuestBoardListViewManager___c__DisplayClass113_0___ctor((QuestBoardListViewManager___c__DisplayClass113_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_202;
  *(_QWORD *)(v5 + 16) = this;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 32) = obj;
  v14 = (void **)(v5 + 32);
  sub_B70630((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)obj, v15, v16, v17, v18, v19, v20);
  if ( !*(_QWORD *)(v5 + 32) )
    goto LABEL_202;
  v27 = *(_QWORD *)(*(_QWORD *)(v5 + 32) + 48LL);
  if ( !v27 )
    goto LABEL_202;
  v28 = *(&QuestBoardListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(unsigned __int8 *)(*(_QWORD *)v27 + 300LL) < (unsigned int)v28
    || *(QuestBoardListViewItem_c **)(*(_QWORD *)(*(_QWORD *)v27 + 200LL) + 8 * v28 - 8) != QuestBoardListViewItem_TypeInfo )
  {
    goto LABEL_202;
  }
  v29 = *(MapControl_QuestInfo_o **)(v27 + 120);
  if ( !v29 )
    return;
  AreaBoardInfo_k__BackingField = (System_Int32_array **)v29->fields._AreaBoardInfo_k__BackingField;
  *(_QWORD *)(v5 + 24) = AreaBoardInfo_k__BackingField;
  v31 = (MapControl_AreaBoardInfo_o **)(v5 + 24);
  sub_B70630((BattleServantConfConponent_o *)(v5 + 24), AreaBoardInfo_k__BackingField, v21, v22, v23, v24, v25, v26);
  mTerminalScene = this->fields.mTerminalScene;
  if ( !mTerminalScene )
    goto LABEL_202;
  dispType = v29->fields.dispType;
  mTerminalScene->fields._IsWarStartAnim_k__BackingField = 0;
  switch ( *(_DWORD *)(v27 + 112) )
  {
    case 0:
      if ( dispType == 2 )
        goto LABEL_112;
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !Instance )
        goto LABEL_202;
      CommonUI__CheckChangeOtherConnectMarkFromEventId(Instance, 0, 1, 0LL);
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      if ( !*v31 )
        goto LABEL_202;
      eventEnt = (*v31)->fields.eventEnt;
      v61 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
      System_Action___ctor(
        v61,
        (Il2CppObject *)v5,
        Method_QuestBoardListViewManager___c__DisplayClass113_0__OnClickListView_b__0__,
        0LL);
      v63 = *(_QWORD *)(v5 + 24);
      if ( !v63 )
        goto LABEL_202;
      if ( QuestBoardListViewManager__RequestToRaiseTutorialFlag(this, eventEnt, v61, *(_DWORD *)(v63 + 20), v62) )
        return;
      Instance = (CommonUI_o *)*v14;
      if ( !*v14 )
        goto LABEL_202;
      mTerminalList = this->fields.mTerminalList;
      v65 = *v31;
      Instance = (CommonUI_o *)ListViewObject__get_Index((ListViewObject_o *)Instance, 0LL);
      if ( !mTerminalList )
        goto LABEL_202;
      ScrTerminalListTop__Click_Area(mTerminalList, v65, (int32_t)Instance, 0, 0, 0LL);
      return;
    case 1:
    case 4:
      if ( dispType == 2 )
        goto LABEL_112;
      if ( !*v31 )
        goto LABEL_29;
      if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
      }
      Instance = (CommonUI_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !*v31 || !Instance )
        goto LABEL_202;
      WarInfoByWarID = QuestTree__mfGetWarInfoByWarID((QuestTree_o *)Instance, (*v31)->fields.warId, 0LL);
      if ( !WarInfoByWarID )
        goto LABEL_29;
      v35 = WarInfoByWarID;
      Mine = MapControl_WarInfo__GetMine(WarInfoByWarID, 0LL);
      IsClosedWar = MapControl_WarInfo__IsClosedWar(v35, 0LL);
      if ( Mine && IsClosedWar && WarEntity__IsMainInterlude(Mine, 0LL) )
        goto LABEL_112;
      if ( !Mine || !WarEntity__IsSubFolder(Mine, 0LL) )
        goto LABEL_29;
      if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
      }
      Instance = (CommonUI_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !Instance )
        goto LABEL_202;
      if ( !QuestTree__IsWarOpen((QuestTree_o *)Instance, Mine->fields.id, 0LL) )
      {
LABEL_112:
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(2, 0LL);
        return;
      }
LABEL_29:
      WarInfo_k__BackingField = v29->fields._WarInfo_k__BackingField;
      if ( !WarInfo_k__BackingField )
        goto LABEL_164;
      EventId = MapControl_WarInfo__GetEventId(WarInfo_k__BackingField, 0LL);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Instance = (CommonUI_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_QuestGroupMaster___);
      if ( !Instance )
        goto LABEL_202;
      GroupId = QuestGroupMaster__GetGroupId((QuestGroupMaster_o *)Instance, v29->fields.questId, 18, v40);
      v42 = MapControl_QuestInfo__GetMine(v29, 0LL);
      if ( EventId != GroupId )
        goto LABEL_164;
      v44 = v42;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_4352545 )
      {
        sub_B70694(&TerminalPramsManager_TypeInfo);
        byte_4352545 = 1;
      }
      Instance = (CommonUI_o *)TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        Instance = (CommonUI_o *)TerminalPramsManager_TypeInfo;
      }
      if ( BYTE1(Instance->fields.errorDialog[2].fields.basePanelList) )
        goto LABEL_164;
      if ( !v44 )
        goto LABEL_202;
      if ( QuestEntity__HasFlag(v44, 2LL, v43) )
        goto LABEL_164;
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Instance = (CommonUI_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_EventFortificationMaster___);
      if ( !Instance )
        goto LABEL_202;
      if ( !EventFortificationMaster__TryGetEntityList((EventFortificationMaster_o *)Instance, &entities, EventId, 0LL) )
        goto LABEL_164;
      Instance = (CommonUI_o *)entities;
      if ( !entities )
        goto LABEL_202;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v80,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)entities,
        (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_EventFortificationEntity__GetEnumerator__);
      v81 = v80;
      break;
    case 2:
    case 3:
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      SpotID = MapControl_QuestInfo__GetSpotID(v29, 0LL);
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_434DED8 )
      {
        sub_B70694(&TerminalPramsManager_TypeInfo);
        byte_434DED8 = 1;
      }
      v55 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v55 = TerminalPramsManager_TypeInfo;
      }
      v55->static_fields->_SpotId_k__BackingField = SpotID;
      Instance = (CommonUI_o *)MapControl_QuestInfo__GetMine(v29, 0LL);
      if ( !Instance )
        goto LABEL_202;
      if ( LODWORD(Instance->fields.leftImg) == 3 )
      {
        questId = v29->fields.questId;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        }
        if ( !byte_434DEA9 )
        {
          sub_B70694(&TerminalPramsManager_TypeInfo);
          byte_434DEA9 = 1;
        }
        v57 = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v57 = TerminalPramsManager_TypeInfo;
        }
        v57->static_fields->_SelectedStoryQuestId_k__BackingField = questId;
      }
      v58 = *(_DWORD *)(v27 + 148);
      if ( v58 )
      {
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        }
        if ( !byte_434DEAA )
        {
          sub_B70694(&TerminalPramsManager_TypeInfo);
          byte_434DEAA = 1;
        }
        v59 = TerminalPramsManager_TypeInfo;
LABEL_129:
        if ( (BYTE3(v59->vtable._0_Equals.methodPtr) & 4) != 0 && !v59->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v59);
          v59 = TerminalPramsManager_TypeInfo;
        }
        v59->static_fields->_SelectedRecollectionWarId_k__BackingField = v58;
        if ( !byte_434EF9A )
        {
          sub_B70694(&TerminalPramsManager_TypeInfo);
          v59 = TerminalPramsManager_TypeInfo;
          byte_434EF9A = 1;
        }
        if ( (BYTE3(v59->vtable._0_Equals.methodPtr) & 4) != 0 && !v59->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v59);
          v59 = TerminalPramsManager_TypeInfo;
        }
        v59->static_fields->_IsFromRecollectionBoard_k__BackingField = 1;
      }
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !Instance )
        goto LABEL_202;
      CommonUI__CheckChangeOtherConnectMarkFromEventId(Instance, 0, 1, 0LL);
      Instance = (CommonUI_o *)this->fields.mTerminalList;
      if ( !Instance )
        goto LABEL_202;
      ScrTerminalListTop__Click_Shortcut((ScrTerminalListTop_o *)Instance, v29->fields.warId, v29->fields.questId, 0LL);
      return;
    case 5:
      if ( dispType == 2 )
        goto LABEL_112;
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !Instance )
        goto LABEL_202;
      CommonUI__CheckChangeOtherConnectMarkFromEventId(Instance, 0, 1, 0LL);
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      MapControl_QuestInfo__GetMine(v29, 0LL);
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      }
      if ( !byte_434DEA1 )
      {
        sub_B70694(&TerminalSceneComponent_TypeInfo);
        byte_434DEA1 = 1;
      }
      v67 = TerminalSceneComponent_TypeInfo;
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v67 = TerminalSceneComponent_TypeInfo;
      }
      Instance = (CommonUI_o *)v67->static_fields->mInstance;
      if ( !Instance )
        goto LABEL_202;
      TerminalSceneComponent__QuestInfoShowing((TerminalSceneComponent_o *)Instance, 0LL);
      if ( !byte_434DEA1 )
      {
        sub_B70694(&TerminalSceneComponent_TypeInfo);
        byte_434DEA1 = 1;
      }
      v68 = TerminalSceneComponent_TypeInfo;
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v68 = TerminalSceneComponent_TypeInfo;
      }
      Instance = (CommonUI_o *)v68->static_fields->mInstance;
      if ( !Instance )
        goto LABEL_202;
      TerminalSceneComponent__CallQuestInformationClose((TerminalSceneComponent_o *)Instance, 0LL);
      QuestBoardListViewManager__SetShowingInfoAllOff(this, v69);
      Instance = (CommonUI_o *)*v14;
      if ( !*v14 )
        goto LABEL_202;
      v70 = this->fields.mTerminalList;
      Instance = (CommonUI_o *)ListViewObject__get_Index((ListViewObject_o *)Instance, 0LL);
      if ( !v70 )
        goto LABEL_202;
      ScrTerminalListTop__Click_WarBoard(v70, v29, (int32_t)Instance, 0LL);
      return;
    case 6:
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      v66 = MapControl_QuestInfo__GetSpotID(v29, 0LL);
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_434DED8 )
      {
        sub_B70694(&TerminalPramsManager_TypeInfo);
        byte_434DED8 = 1;
      }
      v59 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v59 = TerminalPramsManager_TypeInfo;
      }
      v59->static_fields->_SpotId_k__BackingField = v66;
      v58 = *(_DWORD *)(v27 + 148);
      if ( !byte_434DEAA )
      {
        sub_B70694(&TerminalPramsManager_TypeInfo);
        v59 = TerminalPramsManager_TypeInfo;
        byte_434DEAA = 1;
      }
      goto LABEL_129;
    default:
      return;
  }
  do
  {
    if ( !System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v81,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__MoveNext__) )
    {
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v81,
        (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__Dispose__);
LABEL_164:
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Instance )
      {
        CommonUI__CheckChangeOtherConnectMarkFromEventId(Instance, 0, 1, 0LL);
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(0, 0LL);
        v71 = MapControl_QuestInfo__GetMine(v29, 0LL);
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        }
        if ( !byte_434DEA1 )
        {
          sub_B70694(&TerminalSceneComponent_TypeInfo);
          byte_434DEA1 = 1;
        }
        v72 = TerminalSceneComponent_TypeInfo;
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          v72 = TerminalSceneComponent_TypeInfo;
        }
        Instance = (CommonUI_o *)v72->static_fields->mInstance;
        if ( Instance )
        {
          v74 = TerminalSceneComponent__QuestInfoShowing((TerminalSceneComponent_o *)Instance, 0LL);
          if ( (BYTE3(QuestInformationComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !QuestInformationComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(QuestInformationComponent_TypeInfo);
          }
          if ( !v71
            || QuestEntity__HasFlag(v71, 2LL, v73)
            || v74 < 1
            || v71->fields.afterClear == 1
            || v74 == v29->fields.questId )
          {
            if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            }
            if ( !byte_434DEA1 )
            {
              sub_B70694(&TerminalSceneComponent_TypeInfo);
              byte_434DEA1 = 1;
            }
            v76 = TerminalSceneComponent_TypeInfo;
            if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              v76 = TerminalSceneComponent_TypeInfo;
            }
            Instance = (CommonUI_o *)v76->static_fields->mInstance;
            if ( Instance )
            {
              TerminalSceneComponent__CallQuestInformationClose((TerminalSceneComponent_o *)Instance, 0LL);
              QuestBoardListViewManager__SetShowingInfoAllOff(this, v77);
              Instance = (CommonUI_o *)*v14;
              if ( *v14 )
              {
                v78 = this->fields.mTerminalList;
                Instance = (CommonUI_o *)ListViewObject__get_Index((ListViewObject_o *)Instance, 0LL);
                if ( v78 )
                {
                  ScrTerminalListTop__Click_Quest(v78, v29, (int32_t)Instance, 0LL);
                  return;
                }
              }
            }
          }
          else
          {
            Instance = (CommonUI_o *)*v14;
            if ( *v14 )
            {
              v79 = *(&QuestBoardListViewObject_TypeInfo->_2.bitflags2 + 1);
              if ( *(&Instance->klass->_2.bitflags2 + 1) >= (unsigned int)v79
                && (QuestBoardListViewObject_c *)Instance->klass->_2.typeHierarchy[v79 - 1] == QuestBoardListViewObject_TypeInfo )
              {
                QuestBoardListViewObject__OnClickInfoBtn((QuestBoardListViewObject_o *)Instance, 1, v75);
                return;
              }
              mInstance = (TerminalSceneComponent_o *)sub_B70A60(Instance);
LABEL_205:
              sub_B7076C(mInstance, v46);
            }
          }
        }
      }
LABEL_202:
      sub_B7076C(Instance, v7);
    }
    if ( !v81.fields.current )
      sub_B7076C(0LL, v45);
  }
  while ( !EventFortificationEntity__IsOpenFortificationWarningDialog(
             (EventFortificationEntity_o *)v81.fields.current,
             0LL) );
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_434DEA1 )
  {
    sub_B70694(&TerminalSceneComponent_TypeInfo);
    byte_434DEA1 = 1;
  }
  v47 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v47 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v47->static_fields->mInstance;
  if ( !mInstance )
    goto LABEL_205;
  TerminalSceneComponent__CallQuestInformationClose(mInstance, 0LL);
  QuestBoardListViewManager__SetShowingInfoAllOff(this, v49);
  fortificationWarningDialog = this->fields.fortificationWarningDialog;
  if ( !fortificationWarningDialog )
    sub_B7076C(0LL, v50);
  Component_srcLineSprite = (FortificationWarningDialogComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                       fortificationWarningDialog,
                                                                       (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_FortificationWarningDialogComponent___);
  if ( !Component_srcLineSprite )
    sub_B7076C(0LL, v53);
  FortificationWarningDialogComponent__Open(Component_srcLineSprite, 0LL);
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v81,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__Dispose__);
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
  sub_B70630(
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

  if ( (byte_4352479 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4352479 = 1;
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

  if ( (byte_435247A & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_435247A = 1;
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
      sub_B7076C(gameObject, v8);
    }
    UnityEngine_Transform__SetParent_36188248(v13, (UnityEngine_Transform_o *)gameObject, 1, 0LL);
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

  if ( (byte_435247B & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_435247B = 1;
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

  if ( (byte_4352485 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4352485 = 1;
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
              UnityEngine_Transform__SetParent_36188248(v22, (UnityEngine_Transform_o *)gameObject, 1, 0LL);
              v18 = (QuestBoardListEffectComponent_o *)this->fields.effectDisappear2BbComponent;
              goto LABEL_28;
            }
          }
        }
      }
    }
LABEL_29:
    sub_B7076C(gameObject, v10);
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
  UnityEngine_Transform__SetParent_36188248(v15, (UnityEngine_Transform_o *)gameObject, 1, 0LL);
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
  UnityEngine_Object_o *effectDisappear2Component; // x22
  UnityEngine_Object_o *effectDisappear2BbComponent; // x22
  UnityEngine_Object_o *v9; // x22
  __int64 v10; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_GameObject_o *v12; // x22
  UnityEngine_GameObject_o *v13; // x0
  float v14; // s8
  QuestBoardListViewItemDraw_c *v15; // x0
  int v16; // w8
  int v17; // w8
  UnityEngine_Transform_o *v18; // x22
  QuestBoardListViewManager_o *v19; // x0
  const MethodInfo *v20; // x4
  QuestBoardListEffectComponent_o *v21; // x1
  UnityEngine_GameObject_o *v22; // x22
  UnityEngine_GameObject_o *v23; // x0
  float LocalPositionY; // s8
  QuestBoardListViewItemDraw_c *v25; // x0
  int POS_Y_ITVL_AREA; // w8
  int v27; // w8
  UnityEngine_Transform_o *v28; // x22

  if ( (byte_4352484 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&QuestBoardListViewItemDraw_TypeInfo);
    byte_4352484 = 1;
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
        v22 = (UnityEngine_GameObject_o *)gameObject;
        v23 = UnityEngine_Component__get_gameObject(
                (UnityEngine_Component_o *)this->fields.effectDisappear2BbComponent,
                0LL);
        LocalPositionY = GameObjectExtensions__GetLocalPositionY(v23, 0LL);
        v25 = QuestBoardListViewItemDraw_TypeInfo;
        if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          v25 = QuestBoardListViewItemDraw_TypeInfo;
        }
        POS_Y_ITVL_AREA = v25->static_fields->POS_Y_ITVL_AREA;
        v27 = POS_Y_ITVL_AREA <= 0 ? -POS_Y_ITVL_AREA : 1 - POS_Y_ITVL_AREA;
        GameObjectExtensions__SetLocalPositionY(v22, LocalPositionY + (float)(v27 >> 1), 0LL);
        gameObject = (UnityEngine_Component_o *)this->fields.effectDisappear2BbComponent;
        if ( gameObject )
        {
          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
          if ( this->fields.onEffectPanel )
          {
            v28 = (UnityEngine_Transform_o *)gameObject;
            gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                      (UnityEngine_Component_o *)this->fields.onEffectPanel,
                                                      0LL);
            if ( v28 )
            {
              UnityEngine_Transform__SetParent_36188248(v28, (UnityEngine_Transform_o *)gameObject, 1, 0LL);
              v21 = (QuestBoardListEffectComponent_o *)this->fields.effectDisappear2BbComponent;
              goto LABEL_40;
            }
          }
        }
      }
    }
LABEL_41:
    sub_B7076C(gameObject, v10);
  }
  gameObject = (UnityEngine_Component_o *)this->fields.effectDisappear2Component;
  if ( !gameObject )
    goto LABEL_41;
  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
  if ( !this->fields.effectDisappear2Component )
    goto LABEL_41;
  v12 = (UnityEngine_GameObject_o *)gameObject;
  v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.effectDisappear2Component, 0LL);
  v14 = GameObjectExtensions__GetLocalPositionY(v13, 0LL);
  v15 = QuestBoardListViewItemDraw_TypeInfo;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v15 = QuestBoardListViewItemDraw_TypeInfo;
  }
  v16 = v15->static_fields->POS_Y_ITVL_AREA;
  v17 = v16 <= 0 ? -v16 : 1 - v16;
  GameObjectExtensions__SetLocalPositionY(v12, v14 + (float)(v17 >> 1), 0LL);
  gameObject = (UnityEngine_Component_o *)this->fields.effectDisappear2Component;
  if ( !gameObject )
    goto LABEL_41;
  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
  if ( !this->fields.onEffectPanel )
    goto LABEL_41;
  v18 = (UnityEngine_Transform_o *)gameObject;
  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                            (UnityEngine_Component_o *)this->fields.onEffectPanel,
                                            0LL);
  if ( !v18 )
    goto LABEL_41;
  UnityEngine_Transform__SetParent_36188248(v18, (UnityEngine_Transform_o *)gameObject, 1, 0LL);
  v21 = this->fields.effectDisappear2Component;
LABEL_40:
  QuestBoardListViewManager__PlayBoardEffect(v19, v21, playingCallback1, endAct, v20);
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

  if ( (byte_4352483 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4352483 = 1;
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

  if ( (byte_4352482 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4352482 = 1;
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
  __int64 v8; // x19
  __int64 v9; // x0
  __int64 v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Action_o **v17; // x23
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Action_o **v24; // x21
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  UnityEngine_Object_o *v31; // x20
  QuestBoardListEffectComponent_o *v32; // x20
  System_Action_o *v33; // x21
  System_Action_o *v34; // x22

  if ( (byte_4352486 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_QuestBoardListViewManager___c__DisplayClass157_0__PlayBoardEffect_b__0__);
    sub_B70694(&Method_QuestBoardListViewManager___c__DisplayClass157_0__PlayBoardEffect_b__1__);
    sub_B70694(&QuestBoardListViewManager___c__DisplayClass157_0_TypeInfo);
    byte_4352486 = 1;
  }
  v8 = sub_B70764(QuestBoardListViewManager___c__DisplayClass157_0_TypeInfo);
  QuestBoardListViewManager___c__DisplayClass157_0___ctor((QuestBoardListViewManager___c__DisplayClass157_0_o *)v8, 0LL);
  if ( !v8 )
    goto LABEL_15;
  *(_QWORD *)(v8 + 16) = playingCallback1;
  v17 = (System_Action_o **)(v8 + 16);
  sub_B70630(
    (BattleServantConfConponent_o *)(v8 + 16),
    (System_Int32_array **)playingCallback1,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  *(_QWORD *)(v8 + 24) = effectComponent;
  sub_B70630(
    (BattleServantConfConponent_o *)(v8 + 24),
    (System_Int32_array **)effectComponent,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  *(_QWORD *)(v8 + 32) = endAct;
  v24 = (System_Action_o **)(v8 + 32);
  sub_B70630((BattleServantConfConponent_o *)(v8 + 32), (System_Int32_array **)endAct, v25, v26, v27, v28, v29, v30);
  v31 = *(UnityEngine_Object_o **)(v8 + 24);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(v31, 0LL, 0LL) )
  {
    v32 = *(QuestBoardListEffectComponent_o **)(v8 + 24);
    v33 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(
      v33,
      (Il2CppObject *)v8,
      Method_QuestBoardListViewManager___c__DisplayClass157_0__PlayBoardEffect_b__0__,
      0LL);
    v34 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(
      v34,
      (Il2CppObject *)v8,
      Method_QuestBoardListViewManager___c__DisplayClass157_0__PlayBoardEffect_b__1__,
      0LL);
    if ( v32 )
    {
      QuestBoardListEffectComponent__Play(v32, v33, v34, 0LL);
      return;
    }
LABEL_15:
    sub_B7076C(v9, v10);
  }
  if ( *v17 )
    ActionExtensions__Call(*v17, 0LL);
  if ( *v24 )
    ActionExtensions__Call(*v24, 0LL);
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

  if ( (byte_4352487 & 1) == 0 )
  {
    sub_B70694(&AssetManager_TypeInfo);
    byte_4352487 = 1;
  }
  this->fields.blackMarkPrefab = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.blackMarkPrefab, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.whiteMarkPrefab = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.whiteMarkPrefab, 0LL, v9, v10, v11, v12, v13, v14);
  this->fields.fortificationWarningDialog = 0LL;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.fortificationWarningDialog,
    0LL,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  this->fields.boardAppearEffectPrefab = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.boardAppearEffectPrefab, 0LL, v21, v22, v23, v24, v25, v26);
  this->fields.boardAppearEffectFadePrefab = 0LL;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.boardAppearEffectFadePrefab,
    0LL,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  this->fields.boardDisappearEffectPrefab = 0LL;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.boardDisappearEffectPrefab,
    0LL,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  this->fields.boardDisappear2EffectPrefab = 0LL;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.boardDisappear2EffectPrefab,
    0LL,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  this->fields.boardDisappearEffectFadePrefab = 0LL;
  sub_B70630(
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
    AssetManager__releaseAsset_31197044(effectAssetData, 0LL);
    this->fields.effectAssetData = 0LL;
    sub_B70630((BattleServantConfConponent_o *)&this->fields.effectAssetData, 0LL, v52, v53, v54, v55, v56, v57);
  }
  fortificationAssetData = this->fields.fortificationAssetData;
  p_fortificationAssetData = (BattleServantConfConponent_o *)&this->fields.fortificationAssetData;
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAsset_31197044(fortificationAssetData, 0LL);
  p_fortificationAssetData->klass = 0LL;
  sub_B70630(p_fortificationAssetData, 0LL, v60, v61, v62, v63, v64, v65);
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

  if ( (byte_4352470 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4352470 = 1;
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
      sub_B7076C(0LL, v4);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_mFolderBgTemp, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_36067208(gameObject, 0LL);
    *p_mFolderBgTemp = 0LL;
    sub_B70630((BattleServantConfConponent_o *)p_mFolderBgTemp, 0LL, v7, v8, v9, v10, v11, v12);
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


void __fastcall QuestBoardListViewManager__RequestListObject(
        QuestBoardListViewManager_o *this,
        int32_t mode,
        System_Action_o *end_act,
        bool isWhiteFade,
        bool isNotInit,
        const MethodInfo *method)
{
  __int64 v11; // x20
  CommonUI_o *Instance; // x0
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
  const MethodInfo *v26; // x2
  const MethodInfo *v27; // x2
  System_Action_o *v28; // x0
  __int64 *v29; // x8
  System_Action_o *v30; // x21
  const MethodInfo *v31; // x2
  __int64 v32; // x22
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  __int64 v39; // x23
  const MethodInfo *v40; // x2
  float exitTime; // s0
  int32_t initMode; // w1
  System_Action_o *v43; // x21
  const MethodInfo *v44; // x5
  const MethodInfo *v45; // x2
  WebViewManager_o *v46; // x21
  AvalonSceneManager_c *v47; // x8
  float v48; // s8
  System_Action_o *v49; // x22
  CommonUI_o *v50; // x0
  float v51; // s0
  System_Action_o *v52; // x2
  WebViewManager_o *v53; // x20
  AvalonSceneManager_c *v54; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v56; // x21

  if ( (byte_4352461 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&AvalonSceneManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&TerminalPramsManager_TypeInfo);
    sub_B70694(&Method_QuestBoardListViewManager___c__DisplayClass104_0__RequestListObject_b__0__);
    sub_B70694(&Method_QuestBoardListViewManager___c__DisplayClass104_0__RequestListObject_b__1__);
    sub_B70694(&Method_QuestBoardListViewManager___c__DisplayClass104_0__RequestListObject_b__8__);
    sub_B70694(&Method_QuestBoardListViewManager___c__DisplayClass104_0__RequestListObject_b__9__);
    sub_B70694(&QuestBoardListViewManager___c__DisplayClass104_0_TypeInfo);
    sub_B70694(&Method_QuestBoardListViewManager___c__DisplayClass104_2__RequestListObject_b__7__);
    sub_B70694(&QuestBoardListViewManager___c__DisplayClass104_2_TypeInfo);
    byte_4352461 = 1;
  }
  v11 = sub_B70764(QuestBoardListViewManager___c__DisplayClass104_0_TypeInfo);
  QuestBoardListViewManager___c__DisplayClass104_0___ctor(
    (QuestBoardListViewManager___c__DisplayClass104_0_o *)v11,
    0LL);
  if ( !v11 )
    goto LABEL_45;
  *(_QWORD *)(v11 + 16) = this;
  sub_B70630((BattleServantConfConponent_o *)(v11 + 16), (System_Int32_array **)this, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v11 + 32) = end_act;
  sub_B70630((BattleServantConfConponent_o *)(v11 + 32), (System_Int32_array **)end_act, v20, v21, v22, v23, v24, v25);
  *(_BYTE *)(v11 + 40) = isNotInit;
  if ( !isNotInit )
    QuestBoardListViewManager__InitListObject(this, mode, v26);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_45;
  *(_BYTE *)(v11 + 24) = CommonUI__maskFadeIsOnTop(Instance, 0LL);
  switch ( this->fields.initMode )
  {
    case 3:
      this->fields.mIsDoing_Slide = 1;
      v28 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
      v29 = &Method_QuestBoardListViewManager___c__DisplayClass104_0__RequestListObject_b__0__;
      goto LABEL_10;
    case 4:
      v32 = sub_B70764(QuestBoardListViewManager___c__DisplayClass104_2_TypeInfo);
      QuestBoardListViewManager___c__DisplayClass104_2___ctor(
        (QuestBoardListViewManager___c__DisplayClass104_2_o *)v32,
        0LL);
      if ( !v32 )
        goto LABEL_45;
      *(_QWORD *)(v32 + 24) = v11;
      v39 = v32 + 24;
      sub_B70630((BattleServantConfConponent_o *)(v32 + 24), (System_Int32_array **)v11, v33, v34, v35, v36, v37, v38);
      this->fields.mIsDoing_Slide = 1;
      *(_DWORD *)(v32 + 16) = 0;
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
        if ( *(_QWORD *)v39 )
        {
          if ( *(_BYTE *)(*(_QWORD *)v39 + 24LL) )
          {
            exitTime = *(float *)(v32 + 16);
          }
          else
          {
            exitTime = this->fields.exitTime;
            *(float *)(v32 + 16) = exitTime;
          }
          QuestBoardListViewManager__bgAlphaFade(this, this->fields.initMode, exitTime, v40);
          if ( *(_QWORD *)v39 )
          {
            QuestBoardListViewManager__SetSlideOut(
              this,
              *(float *)(v32 + 16),
              *(System_Action_o **)(*(_QWORD *)v39 + 32LL),
              v45);
            goto LABEL_43;
          }
        }
LABEL_45:
        sub_B7076C(Instance, v13);
      }
      this->fields.mFaded = 1;
      v53 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v54 = AvalonSceneManager_TypeInfo;
      if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v54 = AvalonSceneManager_TypeInfo;
      }
      DEFAULT_FADE_TIME = v54->static_fields->DEFAULT_FADE_TIME;
      v56 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
      System_Action___ctor(
        v56,
        (Il2CppObject *)v32,
        Method_QuestBoardListViewManager___c__DisplayClass104_2__RequestListObject_b__7__,
        0LL);
      if ( !v53 )
        goto LABEL_45;
      v50 = (CommonUI_o *)v53;
      v51 = DEFAULT_FADE_TIME;
      v52 = v56;
      goto LABEL_42;
    case 5:
      this->fields.mIsDoing_Slide = 0;
      v28 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
      v29 = &Method_QuestBoardListViewManager___c__DisplayClass104_0__RequestListObject_b__1__;
LABEL_10:
      v30 = v28;
      System_Action___ctor(v28, (Il2CppObject *)v11, *v29, 0LL);
      QuestBoardListViewManager__changeBG(this, v30, v31);
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
        QuestBoardListViewManager__bgAlphaFade(this, initMode, 0.0, v27);
        v43 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
        System_Action___ctor(
          v43,
          (Il2CppObject *)v11,
          Method_QuestBoardListViewManager___c__DisplayClass104_0__RequestListObject_b__9__,
          0LL);
        QuestBoardListViewManager__SetMode(this, 2, v43, 0, 0, v44);
        goto LABEL_43;
      }
      this->fields.mFaded = 1;
      v46 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v47 = AvalonSceneManager_TypeInfo;
      if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v47 = AvalonSceneManager_TypeInfo;
      }
      v48 = v47->static_fields->DEFAULT_FADE_TIME;
      v49 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
      System_Action___ctor(
        v49,
        (Il2CppObject *)v11,
        Method_QuestBoardListViewManager___c__DisplayClass104_0__RequestListObject_b__8__,
        0LL);
      if ( !v46 )
        goto LABEL_45;
      v50 = (CommonUI_o *)v46;
      v51 = v48;
      v52 = v49;
LABEL_42:
      CommonUI__maskFadeout(v50, 2, v51, v52, 0LL);
LABEL_43:
      Instance = (CommonUI_o *)this->fields.mNoneLabelParent;
      if ( !Instance )
        goto LABEL_45;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
      return;
    default:
      ActionExtensions__Call(*(System_Action_o **)(v11 + 32), 0LL);
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
  __int64 v8; // x21
  TutorialEventSetRequest_o *FlagFromOnEventStart; // x0
  __int64 v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  QuestBoardListViewManager_o *v17; // x0
  const MethodInfo *v18; // x3
  int32_t id; // w20
  int32_t v20; // w22
  NetworkManager_ResultCallbackFunc_o *v21; // x19
  int32_t flagType; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_435246A & 1) == 0 )
  {
    sub_B70694(&CondType_TypeInfo);
    sub_B70694(&Method_NetworkManager_getRequest_TutorialEventSetRequest___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_B70694(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_B70694(&SingletonTemplate_QuestTree__TypeInfo);
    sub_B70694(&Method_QuestBoardListViewManager___c__DisplayClass117_0__RequestToRaiseTutorialFlag_b__0__);
    sub_B70694(&QuestBoardListViewManager___c__DisplayClass117_0_TypeInfo);
    byte_435246A = 1;
  }
  flagType = 0;
  v8 = sub_B70764(QuestBoardListViewManager___c__DisplayClass117_0_TypeInfo);
  QuestBoardListViewManager___c__DisplayClass117_0___ctor((QuestBoardListViewManager___c__DisplayClass117_0_o *)v8, 0LL);
  if ( !v8 )
    goto LABEL_22;
  *(_QWORD *)(v8 + 16) = clickAreaFunc;
  sub_B70630(
    (BattleServantConfConponent_o *)(v8 + 16),
    (System_Int32_array **)clickAreaFunc,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  FlagFromOnEventStart = (TutorialEventSetRequest_o *)QuestBoardListViewManager__TryGetFlagFromOnEventStart(
                                                        v17,
                                                        &flagType,
                                                        eventEntity,
                                                        v18);
  if ( ((unsigned __int8)FlagFromOnEventStart & 1) != 0 )
  {
    if ( !eventEntity )
      goto LABEL_22;
    id = eventEntity->fields.id;
    v20 = flagType;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( !CondType__IsEventTutorialFlagOn(id, v20, 0LL) )
    {
      if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
      }
      FlagFromOnEventStart = (TutorialEventSetRequest_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !FlagFromOnEventStart )
        goto LABEL_22;
      if ( QuestTree__IsWarOpen((QuestTree_o *)FlagFromOnEventStart, warId, 0LL) )
      {
        v21 = (NetworkManager_ResultCallbackFunc_o *)sub_B70764(NetworkManager_ResultCallbackFunc_TypeInfo);
        NetworkManager_ResultCallbackFunc___ctor(
          v21,
          (Il2CppObject *)v8,
          Method_QuestBoardListViewManager___c__DisplayClass117_0__RequestToRaiseTutorialFlag_b__0__,
          0LL);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        FlagFromOnEventStart = (TutorialEventSetRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                              v21,
                                                              (const MethodInfo_1D57A4C *)Method_NetworkManager_getRequest_TutorialEventSetRequest___);
        if ( FlagFromOnEventStart )
        {
          TutorialEventSetRequest__beginRequest(FlagFromOnEventStart, v20, id, 0LL);
          return 1;
        }
LABEL_22:
        sub_B7076C(FlagFromOnEventStart, v10);
      }
    }
  }
  return 0;
}


void __fastcall QuestBoardListViewManager__ResetAlphaAnimTime(
        QuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  QuestBoardListViewManager_c *v3; // x0
  float v4; // s8
  System_Func_float__float__float__float__o *v5; // x20
  AlphaTransitionCalculator_o *v6; // x21
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  __int64 v13; // x1
  AlphaTransitionCalculator_o *rewardIconAlphaCalculator; // x0

  if ( (byte_4352468 & 1) == 0 )
  {
    sub_B70694(&AlphaTransitionCalculator_TypeInfo);
    sub_B70694(&QuestBoardListViewManager_TypeInfo);
    byte_4352468 = 1;
  }
  this->fields.mAlphaAnimNow = 1.0;
  this->fields.mAlphaAnimTimeOld = UnityEngine_Time__get_realtimeSinceStartup(0LL);
  v3 = QuestBoardListViewManager_TypeInfo;
  if ( (BYTE3(QuestBoardListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewManager_TypeInfo);
    v3 = QuestBoardListViewManager_TypeInfo;
  }
  v4 = ChangedFPSUtil__CovertFrameNumToSecond(v3->static_fields->REWARD_ICON_FADE_FRAME_NUM, 0LL);
  v5 = ExtraEasing__AsymptoticSeriesFloat(
         QuestBoardListViewManager_TypeInfo->static_fields->ALPHA_ANIM_SPD_RATE,
         (float)QuestBoardListViewManager_TypeInfo->static_fields->REWARD_ICON_FADE_FRAME_NUM,
         0LL);
  v6 = (AlphaTransitionCalculator_o *)sub_B70764(AlphaTransitionCalculator_TypeInfo);
  AlphaTransitionCalculator___ctor(v6, v4, v5, 0LL);
  this->fields.rewardIconAlphaCalculator = v6;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.rewardIconAlphaCalculator,
    (System_Int32_array **)v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  rewardIconAlphaCalculator = this->fields.rewardIconAlphaCalculator;
  if ( !rewardIconAlphaCalculator )
    sub_B7076C(0LL, v13);
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
    sub_B7076C(mFolderBg, method);
  }
  ExUITexture__ClearImage((ExUITexture_o *)mFolderBg, 0LL);
}


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

  if ( (byte_4352465 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4352465 = 1;
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
      sub_B7076C(v10, v11);
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
    sub_B7076C(0LL, v12);
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
    sub_B7076C(0LL, isActive);
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
  if ( (byte_435245E & 1) == 0 )
  {
    this = (QuestBoardListViewManager_o *)sub_B70694(&QuestBoardListViewObject_TypeInfo);
    byte_435245E = 1;
  }
  if ( !obj
    || (v6 = *(&QuestBoardListViewObject_TypeInfo->_2.bitflags2 + 1), *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (QuestBoardListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != QuestBoardListViewObject_TypeInfo )
  {
    sub_B7076C(this, obj);
  }
  initMode = v5->fields.initMode;
  *(UnityEngine_Vector3_o *)&v9 = UnityEngine_Vector3__get_zero(0LL);
  if ( initMode == 2 )
    v13 = 3;
  else
    v13 = 2;
  QuestBoardListViewObject__Init_26064564(
    (QuestBoardListViewObject_o *)obj,
    v13,
    0LL,
    v9,
    *(UnityEngine_Vector3_o *)&v10,
    v8);
}


void __fastcall QuestBoardListViewManager__SetOutPosition(QuestBoardListViewManager_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  UIWidget_o *Component_UIWidget; // x0
  __int64 v5; // x1
  SlideFadeObject_o *v6; // x19
  float v7; // s8
  float v8; // s10
  float v9; // s9
  QuestBoardListViewManager_c *v10; // x0
  float OUT_POS_OFS_X; // s0
  UnityEngine_Vector3_o v12; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4352464 & 1) == 0 )
  {
    sub_B70694(&Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
    sub_B70694(&QuestBoardListViewManager_TypeInfo);
    byte_4352464 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_UIWidget = GameObjectExtensions__SafeGetComponent_UIWidget_(
                         gameObject,
                         (const MethodInfo_1D4BBAC *)Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
  if ( !Component_UIWidget )
    sub_B7076C(0LL, v5);
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


void __fastcall QuestBoardListViewManager__SetScrollBarEnable(
        QuestBoardListViewManager_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_Object_o *blockMask; // x21
  BattleServantConfConponent_o *p_blockMask; // x19
  UnityEngine_Object_o *klass; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  UnityEngine_Object_o *blockMaskPrefab; // x21
  struct UnityEngine_GameObject_o *v15; // x21
  struct UnityEngine_GameObject_o *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  UnityEngine_GameObject_o *v23; // x19
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4352454 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4352454 = 1;
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
      UnityEngine_Object__DestroyImmediate_36067420(klass, 0LL);
      p_blockMask->klass = 0LL;
      sub_B70630(p_blockMask, 0LL, v8, v9, v10, v11, v12, v13);
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
        v15 = this->fields.blockMaskPrefab;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v16 = (struct UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                   (UnityEngine_UI_Dropdown_DropdownItem_o *)v15,
                                                   (const MethodInfo_1D58764 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        this->fields.blockMask = v16;
        sub_B70630(
          (BattleServantConfConponent_o *)&this->fields.blockMask,
          (System_Int32_array **)v16,
          v17,
          v18,
          v19,
          v20,
          v21,
          v22);
        GameObjectExtensions__SafeSetParent(
          this->fields.blockMask,
          (UnityEngine_Component_o *)this->fields.onEffectPanel,
          0LL);
        v23 = this->fields.blockMask;
        zero = UnityEngine_Vector3__get_zero(0LL);
        GameObjectExtensions__SetLocalPosition(v23, zero, 0LL);
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
  UnityEngine_Component_o *scrollView; // x0
  UnityEngine_Object_o *Component_WebViewObject; // x21
  UIPanel_o *v9; // x0
  int32_t DEFAULT_SCROLL_VIEW_DEPTH; // w1

  if ( (byte_4352471 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&QuestBoardListViewManager_TypeInfo);
    byte_4352471 = 1;
  }
  scrollView = (UnityEngine_Component_o *)this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_17;
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      scrollView,
                                                      (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
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
        v9 = (UIPanel_o *)Component_WebViewObject;
        DEFAULT_SCROLL_VIEW_DEPTH = QuestBoardListViewManager_TypeInfo->static_fields->DEFAULT_SCROLL_VIEW_DEPTH;
LABEL_16:
        UIPanel__set_depth(v9, DEFAULT_SCROLL_VIEW_DEPTH, 0LL);
        return;
      }
    }
    else if ( Component_WebViewObject )
    {
      v9 = (UIPanel_o *)Component_WebViewObject;
      DEFAULT_SCROLL_VIEW_DEPTH = depth;
      goto LABEL_16;
    }
LABEL_17:
    sub_B7076C(scrollView, *(_QWORD *)&depth);
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
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  ListViewItem_o *v8; // x8
  struct ListViewObject_o *viewObject; // x20
  __int64 v10; // x9
  QuestBoardListViewManager_o *v11; // x0
  const MethodInfo *v12; // x1

  v5 = idx;
  v6 = this;
  if ( (byte_435246D & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    this = (QuestBoardListViewManager_o *)sub_B70694(&QuestBoardListViewObject_TypeInfo);
    byte_435246D = 1;
  }
  itemList = v6->fields.itemList;
  if ( !itemList )
    goto LABEL_17;
  if ( itemList->fields._size <= (unsigned int)v5 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
  v8 = itemList->fields._items->m_Items[v5];
  if ( !v8 )
    goto LABEL_17;
  viewObject = v8->fields.viewObject;
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
    v10 = *(&QuestBoardListViewObject_TypeInfo->_2.bitflags2 + 1);
    if ( *(&viewObject->klass->_2.bitflags2 + 1) >= (unsigned int)v10
      && (QuestBoardListViewObject_c *)viewObject->klass->_2.typeHierarchy[v10 - 1] == QuestBoardListViewObject_TypeInfo )
    {
      this = (QuestBoardListViewManager_o *)viewObject[1].monitor;
      if ( this )
      {
        QuestBoardListViewItemDraw__setInfoShowing((QuestBoardListViewItemDraw_o *)this, onOff, 0LL);
        return;
      }
LABEL_17:
      sub_B7076C(this, *(_QWORD *)&idx);
    }
    v11 = (QuestBoardListViewManager_o *)sub_B70A60(viewObject);
    QuestBoardListViewManager__RequestConsumeColorReset(v11, v12);
  }
}


void __fastcall QuestBoardListViewManager__SetShowingInfoAllOff(
        QuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_QuestBoardListViewObject__o *ObjectList; // x0
  __int64 v4; // x1
  int size; // w8
  System_Collections_Generic_List_QuestBoardListViewObject__o *v6; // x19
  unsigned int v7; // w20
  QuestBoardListViewObject_o *v8; // x8

  if ( (byte_435246C & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_QuestBoardListViewObject__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_QuestBoardListViewObject__get_Item__);
    byte_435246C = 1;
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
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
      v8 = v6->fields._items->m_Items[v7];
      if ( !v8 )
        break;
      ObjectList = (System_Collections_Generic_List_QuestBoardListViewObject__o *)v8->fields.itemDraw;
      if ( !ObjectList )
        break;
      QuestBoardListViewItemDraw__setInfoShowing((QuestBoardListViewItemDraw_o *)ObjectList, 0, 0LL);
      size = v6->fields._size;
      if ( (int)++v7 >= size )
        return;
    }
LABEL_12:
    sub_B7076C(ObjectList, v4);
  }
}


void __fastcall QuestBoardListViewManager__SetSlideOut(
        QuestBoardListViewManager_o *this,
        float time,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  __int64 v7; // x19
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  UnityEngine_GameObject_o *v22; // x0
  UIWidget_o *Component_UIWidget; // x0
  SlideFadeObject_o *v24; // x20
  float OUT_POS_OFS_X; // s9
  System_Action_o *v26; // x21

  if ( (byte_4352462 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
    sub_B70694(&QuestBoardListViewManager_TypeInfo);
    sub_B70694(&Method_QuestBoardListViewManager___c__DisplayClass105_0__SetSlideOut_b__0__);
    sub_B70694(&QuestBoardListViewManager___c__DisplayClass105_0_TypeInfo);
    byte_4352462 = 1;
  }
  v7 = sub_B70764(QuestBoardListViewManager___c__DisplayClass105_0_TypeInfo);
  QuestBoardListViewManager___c__DisplayClass105_0___ctor((QuestBoardListViewManager___c__DisplayClass105_0_o *)v7, 0LL);
  if ( !v7 )
    goto LABEL_10;
  *(_QWORD *)(v7 + 16) = this;
  sub_B70630((BattleServantConfConponent_o *)(v7 + 16), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = end_act;
  sub_B70630((BattleServantConfConponent_o *)(v7 + 24), (System_Int32_array **)end_act, v16, v17, v18, v19, v20, v21);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_10;
  v22 = UnityEngine_GameObject__get_gameObject(gameObject, 0LL);
  Component_UIWidget = GameObjectExtensions__SafeGetComponent_UIWidget_(
                         v22,
                         (const MethodInfo_1D4BBAC *)Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
  v24 = (SlideFadeObject_o *)Component_UIWidget;
  if ( (BYTE3(QuestBoardListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewManager_TypeInfo);
  }
  OUT_POS_OFS_X = QuestBoardListViewManager__get_OUT_POS_OFS_X((const MethodInfo *)Component_UIWidget);
  v26 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(
    v26,
    (Il2CppObject *)v7,
    Method_QuestBoardListViewManager___c__DisplayClass105_0__SetSlideOut_b__0__,
    0LL);
  if ( !v24 )
LABEL_10:
    sub_B7076C(gameObject, v9);
  SlideFadeObject__SlideOut_23179636(v24, OUT_POS_OFS_X, time, 0.0, v26, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestBoardListViewManager__SetTerminalTopEffectPlay(
        QuestBoardListViewManager_o *this,
        int32_t targetWarId,
        bool isClose,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *topItemList; // x0
  char v8; // w25
  __int64 v9; // x10
  struct System_Collections_Generic_List_ListViewItem__o *v10; // x0
  struct System_Collections_Generic_List_ListViewItem__o *bottomItemList; // x0
  _QWORD *monitor; // x8
  __int64 v13; // x8
  System_Collections_Generic_List_Enumerator_T__o v14; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v15; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4352457 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem__Clear__);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_B70694(&QuestBoardListViewItem_TypeInfo);
    byte_4352457 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  if ( targetWarId )
  {
    topItemList = this->fields.topItemList;
    if ( !topItemList
      || (System_Collections_Generic_List_XWeaponTrail_Element___Clear(
            (System_Collections_Generic_List_XWeaponTrail_Element__o *)topItemList,
            (const MethodInfo_3025A90 *)Method_System_Collections_Generic_List_ListViewItem__Clear__),
          (topItemList = this->fields.bottomItemList) == 0LL)
      || (System_Collections_Generic_List_XWeaponTrail_Element___Clear(
            (System_Collections_Generic_List_XWeaponTrail_Element__o *)topItemList,
            (const MethodInfo_3025A90 *)Method_System_Collections_Generic_List_ListViewItem__Clear__),
          (topItemList = this->fields.itemList) == 0LL) )
    {
      sub_B7076C(topItemList, *(_QWORD *)&targetWarId);
    }
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v14,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)topItemList,
      (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v15 = v14;
    v8 = 1;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( !System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v15,
                (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
        {
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
            &v15,
            (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          return;
        }
        if ( v15.fields.current )
        {
          v9 = *(&QuestBoardListViewItem_TypeInfo->_2.bitflags2 + 1);
          if ( *(&v15.fields.current->klass->_2.bitflags2 + 1) >= (unsigned int)v9
            && (QuestBoardListViewItem_c *)v15.fields.current->klass->_2.typeHierarchy[v9 - 1] == QuestBoardListViewItem_TypeInfo )
          {
            monitor = v15.fields.current[7].monitor;
            if ( monitor )
            {
              v13 = monitor[14];
              if ( v13 )
              {
                if ( *(_DWORD *)(v13 + 16) != 1 && *(_DWORD *)(v13 + 20) == targetWarId )
                  break;
              }
            }
          }
        }
        if ( (v8 & 1) != 0 )
        {
          v10 = this->fields.topItemList;
          if ( !v10 )
            sub_B7076C(0LL, v15.fields.current);
          v8 = 1;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v10,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v15.fields.current,
            (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        }
        else
        {
          bottomItemList = this->fields.bottomItemList;
          if ( !bottomItemList )
            sub_B7076C(0LL, v15.fields.current);
LABEL_16:
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)bottomItemList,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v15.fields.current,
            (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
          v8 = 0;
        }
      }
      v8 = 0;
      if ( isClose )
      {
        bottomItemList = this->fields.bottomItemList;
        if ( !bottomItemList )
          sub_B7076C(0LL, v15.fields.current);
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
  UnityEngine_Component_o *QuestBoardObjForWarId; // x21
  UnityEngine_Object_o *boardAppearEffectPrefab; // x20
  struct UnityEngine_GameObject_o *v7; // x20
  UnityEngine_GameObject_o *transform; // x0
  __int64 v9; // x1
  UnityEngine_GameObject_o *v10; // x20
  UnityEngine_Transform_o *v11; // x22
  UnityEngine_Transform_o *v12; // x21
  int v13; // s0
  UnityEngine_Transform_o *v16; // x21
  int v17; // s0
  UnityEngine_Transform_o *v21; // x21
  int v22; // s0
  struct QuestBoardListEffectAppearComponent_o *Component_srcLineSprite; // x0
  struct QuestBoardListEffectAppearComponent_o **p_effectAppearComponent; // x20
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7

  if ( (byte_4352477 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectAppearComponent___);
    sub_B70694(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4352477 = 1;
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
      v7 = this->fields.boardAppearEffectPrefab;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                (UnityEngine_UI_Dropdown_DropdownItem_o *)v7,
                                                (const MethodInfo_1D58764 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( transform )
      {
        v10 = transform;
        transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
        if ( QuestBoardObjForWarId )
        {
          v11 = (UnityEngine_Transform_o *)transform;
          transform = UnityEngine_Component__get_gameObject(QuestBoardObjForWarId, 0LL);
          if ( transform )
          {
            transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
            if ( v11 )
            {
              UnityEngine_Transform__set_parent(v11, (UnityEngine_Transform_o *)transform, 0LL);
              v12 = UnityEngine_GameObject__get_transform(v10, 0LL);
              *(UnityEngine_Vector3_o *)&v13 = UnityEngine_Vector3__get_zero(0LL);
              if ( v12 )
              {
                UnityEngine_Transform__set_localPosition(v12, *(UnityEngine_Vector3_o *)&v13, 0LL);
                v16 = UnityEngine_GameObject__get_transform(v10, 0LL);
                *(UnityEngine_Quaternion_o *)&v17 = UnityEngine_Quaternion__get_identity(0LL);
                if ( v16 )
                {
                  UnityEngine_Transform__set_localRotation(v16, *(UnityEngine_Quaternion_o *)&v17, 0LL);
                  v21 = UnityEngine_GameObject__get_transform(v10, 0LL);
                  *(UnityEngine_Vector3_o *)&v22 = UnityEngine_Vector3__get_one(0LL);
                  if ( v21 )
                  {
                    UnityEngine_Transform__set_localScale(v21, *(UnityEngine_Vector3_o *)&v22, 0LL);
                    Component_srcLineSprite = (struct QuestBoardListEffectAppearComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                                v10,
                                                                                                (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectAppearComponent___);
                    p_effectAppearComponent = &this->fields.effectAppearComponent;
                    this->fields.effectAppearComponent = Component_srcLineSprite;
                    sub_B70630(
                      (BattleServantConfConponent_o *)&this->fields.effectAppearComponent,
                      (System_Int32_array **)Component_srcLineSprite,
                      v27,
                      v28,
                      v29,
                      v30,
                      v31,
                      v32);
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
      sub_B7076C(transform, v9);
    }
  }
}


void __fastcall QuestBoardListViewManager__SetUpBoardAppearEffectNT2(
        QuestBoardListViewManager_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  UnityEngine_Component_o *QuestBoardObjForWarId; // x20
  UnityEngine_Object_o *nt2BoardAppearEffectPrefab; // x21
  struct UnityEngine_GameObject_o *v7; // x21
  UnityEngine_GameObject_o *transform; // x0
  __int64 v9; // x1
  UnityEngine_GameObject_o *v10; // x21
  UnityEngine_Transform_o *v11; // x22
  struct QuestBoardListEffectAppearComponent_o *Component_srcLineSprite; // x0
  struct QuestBoardListEffectAppearComponent_o **p_effectAppearComponent; // x20
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_435247F & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectAppearComponent___);
    sub_B70694(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_435247F = 1;
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
      v7 = this->fields.nt2BoardAppearEffectPrefab;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                (UnityEngine_UI_Dropdown_DropdownItem_o *)v7,
                                                (const MethodInfo_1D58764 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( transform )
      {
        v10 = transform;
        transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
        if ( QuestBoardObjForWarId )
        {
          v11 = (UnityEngine_Transform_o *)transform;
          transform = UnityEngine_Component__get_gameObject(QuestBoardObjForWarId, 0LL);
          if ( transform )
          {
            transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
            if ( v11 )
            {
              UnityEngine_Transform__set_parent(v11, (UnityEngine_Transform_o *)transform, 0LL);
              GameObjectExtensions__ResetTransform(v10, 0LL);
              Component_srcLineSprite = (struct QuestBoardListEffectAppearComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                          v10,
                                                                                          (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectAppearComponent___);
              p_effectAppearComponent = &this->fields.effectAppearComponent;
              this->fields.effectAppearComponent = Component_srcLineSprite;
              sub_B70630(
                (BattleServantConfConponent_o *)&this->fields.effectAppearComponent,
                (System_Int32_array **)Component_srcLineSprite,
                v14,
                v15,
                v16,
                v17,
                v18,
                v19);
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
      sub_B7076C(transform, v9);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestBoardListViewManager__SetUpBoardAppearFadeEffect(
        QuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *boardAppearEffectFadePrefab; // x20
  struct UnityEngine_GameObject_o *v4; // x20
  UnityEngine_GameObject_o *transform; // x0
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x20
  UnityEngine_Transform_o *v8; // x21
  UnityEngine_Transform_o *v9; // x21
  int v10; // s0
  UnityEngine_Transform_o *v13; // x21
  int v14; // s0
  UnityEngine_Transform_o *v18; // x21
  int v19; // s0
  struct QuestBoardListEffectComponent_o *Component_srcLineSprite; // x0
  struct QuestBoardListEffectComponent_o **p_effectAppearFadeComponent; // x20
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7

  if ( (byte_4352478 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectComponent___);
    sub_B70694(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4352478 = 1;
  }
  boardAppearEffectFadePrefab = (UnityEngine_Object_o *)this->fields.boardAppearEffectFadePrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(boardAppearEffectFadePrefab, 0LL, 0LL) )
  {
    v4 = this->fields.boardAppearEffectFadePrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                              (UnityEngine_UI_Dropdown_DropdownItem_o *)v4,
                                              (const MethodInfo_1D58764 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( transform )
    {
      v7 = transform;
      transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
      if ( this->fields.fadePanel )
      {
        v8 = (UnityEngine_Transform_o *)transform;
        transform = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)this->fields.fadePanel,
                                                  0LL);
        if ( v8 )
        {
          UnityEngine_Transform__set_parent(v8, (UnityEngine_Transform_o *)transform, 0LL);
          v9 = UnityEngine_GameObject__get_transform(v7, 0LL);
          *(UnityEngine_Vector3_o *)&v10 = UnityEngine_Vector3__get_zero(0LL);
          if ( v9 )
          {
            UnityEngine_Transform__set_localPosition(v9, *(UnityEngine_Vector3_o *)&v10, 0LL);
            v13 = UnityEngine_GameObject__get_transform(v7, 0LL);
            *(UnityEngine_Quaternion_o *)&v14 = UnityEngine_Quaternion__get_identity(0LL);
            if ( v13 )
            {
              UnityEngine_Transform__set_localRotation(v13, *(UnityEngine_Quaternion_o *)&v14, 0LL);
              v18 = UnityEngine_GameObject__get_transform(v7, 0LL);
              *(UnityEngine_Vector3_o *)&v19 = UnityEngine_Vector3__get_one(0LL);
              if ( v18 )
              {
                UnityEngine_Transform__set_localScale(v18, *(UnityEngine_Vector3_o *)&v19, 0LL);
                Component_srcLineSprite = (struct QuestBoardListEffectComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                      v7,
                                                                                      (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectComponent___);
                p_effectAppearFadeComponent = &this->fields.effectAppearFadeComponent;
                this->fields.effectAppearFadeComponent = Component_srcLineSprite;
                sub_B70630(
                  (BattleServantConfConponent_o *)&this->fields.effectAppearFadeComponent,
                  (System_Int32_array **)Component_srcLineSprite,
                  v24,
                  v25,
                  v26,
                  v27,
                  v28,
                  v29);
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
    sub_B7076C(transform, v6);
  }
}


void __fastcall QuestBoardListViewManager__SetUpBoardAppearFadeEffectNT2(
        QuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *nt2BoardAppearEffectFadePrefab; // x20
  struct UnityEngine_GameObject_o *v4; // x20
  UnityEngine_GameObject_o *transform; // x0
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x20
  UnityEngine_Transform_o *v8; // x21
  struct QuestBoardListEffectComponent_o *Component_srcLineSprite; // x0
  struct QuestBoardListEffectComponent_o **p_effectAppearFadeComponent; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_4352480 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectComponent___);
    sub_B70694(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4352480 = 1;
  }
  nt2BoardAppearEffectFadePrefab = (UnityEngine_Object_o *)this->fields.nt2BoardAppearEffectFadePrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(nt2BoardAppearEffectFadePrefab, 0LL, 0LL) )
  {
    v4 = this->fields.nt2BoardAppearEffectFadePrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                              (UnityEngine_UI_Dropdown_DropdownItem_o *)v4,
                                              (const MethodInfo_1D58764 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( transform )
    {
      v7 = transform;
      transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
      if ( this->fields.fadePanel )
      {
        v8 = (UnityEngine_Transform_o *)transform;
        transform = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)this->fields.fadePanel,
                                                  0LL);
        if ( v8 )
        {
          UnityEngine_Transform__set_parent(v8, (UnityEngine_Transform_o *)transform, 0LL);
          GameObjectExtensions__ResetTransform(v7, 0LL);
          Component_srcLineSprite = (struct QuestBoardListEffectComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                v7,
                                                                                (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectComponent___);
          p_effectAppearFadeComponent = &this->fields.effectAppearFadeComponent;
          this->fields.effectAppearFadeComponent = Component_srcLineSprite;
          sub_B70630(
            (BattleServantConfConponent_o *)&this->fields.effectAppearFadeComponent,
            (System_Int32_array **)Component_srcLineSprite,
            v11,
            v12,
            v13,
            v14,
            v15,
            v16);
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
    sub_B7076C(transform, v6);
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
  UnityEngine_Component_o *QuestBoardObjForWarId; // x22
  UnityEngine_Object_o *boardDisappearEffectPrefab; // x21
  struct UnityEngine_GameObject_o *v11; // x21
  UnityEngine_GameObject_o *transform; // x0
  __int64 v13; // x1
  UnityEngine_GameObject_o *v14; // x21
  UnityEngine_Transform_o *v15; // x23
  UnityEngine_Transform_o *v16; // x22
  int v17; // s0
  UnityEngine_Transform_o *v20; // x22
  int v21; // s0
  UnityEngine_Transform_o *v25; // x22
  int v26; // s0
  struct QuestBoardListEffectDisappearComponent_o *Component_srcLineSprite; // x0
  struct QuestBoardListEffectDisappearComponent_o **p_effectDisappearComponent; // x22
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  float v37; // s1

  if ( (byte_435247C & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectDisappearComponent___);
    sub_B70694(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_435247C = 1;
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
      v11 = this->fields.boardDisappearEffectPrefab;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                (UnityEngine_UI_Dropdown_DropdownItem_o *)v11,
                                                (const MethodInfo_1D58764 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( !transform )
        goto LABEL_29;
      v14 = transform;
      transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
      if ( !QuestBoardObjForWarId )
        goto LABEL_29;
      v15 = (UnityEngine_Transform_o *)transform;
      transform = UnityEngine_Component__get_gameObject(QuestBoardObjForWarId, 0LL);
      if ( !transform )
        goto LABEL_29;
      transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
      if ( !v15 )
        goto LABEL_29;
      UnityEngine_Transform__set_parent(v15, (UnityEngine_Transform_o *)transform, 0LL);
      v16 = UnityEngine_GameObject__get_transform(v14, 0LL);
      *(UnityEngine_Vector3_o *)&v17 = UnityEngine_Vector3__get_zero(0LL);
      if ( !v16 )
        goto LABEL_29;
      UnityEngine_Transform__set_localPosition(v16, *(UnityEngine_Vector3_o *)&v17, 0LL);
      v20 = UnityEngine_GameObject__get_transform(v14, 0LL);
      *(UnityEngine_Quaternion_o *)&v21 = UnityEngine_Quaternion__get_identity(0LL);
      if ( !v20 )
        goto LABEL_29;
      UnityEngine_Transform__set_localRotation(v20, *(UnityEngine_Quaternion_o *)&v21, 0LL);
      v25 = UnityEngine_GameObject__get_transform(v14, 0LL);
      *(UnityEngine_Vector3_o *)&v26 = UnityEngine_Vector3__get_one(0LL);
      if ( !v25 )
        goto LABEL_29;
      UnityEngine_Transform__set_localScale(v25, *(UnityEngine_Vector3_o *)&v26, 0LL);
      Component_srcLineSprite = (struct QuestBoardListEffectDisappearComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                     v14,
                                                                                     (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectDisappearComponent___);
      p_effectDisappearComponent = &this->fields.effectDisappearComponent;
      this->fields.effectDisappearComponent = Component_srcLineSprite;
      sub_B70630(
        (BattleServantConfConponent_o *)&this->fields.effectDisappearComponent,
        (System_Int32_array **)Component_srcLineSprite,
        v31,
        v32,
        v33,
        v34,
        v35,
        v36);
      transform = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(
                                                (UnityEngine_Object_o *)this->fields.effectDisappearComponent,
                                                0LL,
                                                0LL);
      if ( ((unsigned __int8)transform & 1) != 0 )
        return;
      if ( !*p_effectDisappearComponent
        || (GameObjectExtensions__SetLocalPositionY(
              v14,
              (*p_effectDisappearComponent)->fields.disappearEffectShiftPosY,
              0LL),
            (transform = (UnityEngine_GameObject_o *)*p_effectDisappearComponent) == 0LL) )
      {
LABEL_29:
        sub_B7076C(transform, v13);
      }
      if ( isNextBoardReleased )
        v37 = endTime;
      else
        v37 = 0.0;
      QuestBoardListEffectComponent__Init((QuestBoardListEffectComponent_o *)transform, 1, 0.0, v37, 0LL);
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
  UnityEngine_Component_o *QuestBoardObjForWarId; // x23
  UnityEngine_Object_o *ntBoardAppearEffectPrefab; // x22
  struct UnityEngine_GameObject_o **p_ntBoardAppearEffectPrefab; // x24
  UnityEngine_UI_Dropdown_DropdownItem_o *v18; // x22
  void *transform; // x0
  __int64 v20; // x1
  UnityEngine_GameObject_o *v21; // x22
  UnityEngine_Transform_o *v22; // x24
  UnityEngine_Transform_o *v23; // x23
  int v24; // s0
  UnityEngine_Transform_o *v27; // x23
  int v28; // s0
  UnityEngine_Transform_o *v32; // x23
  int v33; // s0
  struct QuestBoardListEffectBoardOpenComponent_o *Component_srcLineSprite; // x0
  struct QuestBoardListEffectBoardOpenComponent_o **p_effectDisappear2BbComponent; // x21
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  UnityEngine_Object_o *effectDisappear2BbComponent; // x19
  struct QuestBoardListEffectComponent_o *v45; // x0
  struct QuestBoardListEffectComponent_o **p_effectDisappear2Component; // x20
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  UnityEngine_Object_o *effectDisappear2Component; // x21
  UnityEngine_Object_o *effectDisappearComponent; // x21
  struct QuestBoardListEffectDisappearComponent_o *v55; // x8
  struct QuestBoardListEffectDisappearComponent_o *v56; // x8

  if ( (byte_435247D & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectBoardOpenComponent___);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectComponent___);
    sub_B70694(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_435247D = 1;
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
      v18 = (UnityEngine_UI_Dropdown_DropdownItem_o *)*p_ntBoardAppearEffectPrefab;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      transform = UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                    v18,
                    (const MethodInfo_1D58764 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( transform )
      {
        v21 = (UnityEngine_GameObject_o *)transform;
        transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
        if ( QuestBoardObjForWarId )
        {
          v22 = (UnityEngine_Transform_o *)transform;
          transform = UnityEngine_Component__get_gameObject(QuestBoardObjForWarId, 0LL);
          if ( transform )
          {
            transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
            if ( v22 )
            {
              UnityEngine_Transform__set_parent(v22, (UnityEngine_Transform_o *)transform, 0LL);
              v23 = UnityEngine_GameObject__get_transform(v21, 0LL);
              *(UnityEngine_Vector3_o *)&v24 = UnityEngine_Vector3__get_zero(0LL);
              if ( v23 )
              {
                UnityEngine_Transform__set_localPosition(v23, *(UnityEngine_Vector3_o *)&v24, 0LL);
                v27 = UnityEngine_GameObject__get_transform(v21, 0LL);
                *(UnityEngine_Quaternion_o *)&v28 = UnityEngine_Quaternion__get_identity(0LL);
                if ( v27 )
                {
                  UnityEngine_Transform__set_localRotation(v27, *(UnityEngine_Quaternion_o *)&v28, 0LL);
                  v32 = UnityEngine_GameObject__get_transform(v21, 0LL);
                  *(UnityEngine_Vector3_o *)&v33 = UnityEngine_Vector3__get_one(0LL);
                  if ( v32 )
                  {
                    UnityEngine_Transform__set_localScale(v32, *(UnityEngine_Vector3_o *)&v33, 0LL);
                    if ( isOnlyBoardOpen )
                    {
                      Component_srcLineSprite = (struct QuestBoardListEffectBoardOpenComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                                     v21,
                                                                                                     (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectBoardOpenComponent___);
                      p_effectDisappear2BbComponent = &this->fields.effectDisappear2BbComponent;
                      this->fields.effectDisappear2BbComponent = Component_srcLineSprite;
                      sub_B70630(
                        (BattleServantConfConponent_o *)&this->fields.effectDisappear2BbComponent,
                        (System_Int32_array **)Component_srcLineSprite,
                        v38,
                        v39,
                        v40,
                        v41,
                        v42,
                        v43);
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
                      v45 = (struct QuestBoardListEffectComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                        v21,
                                                                        (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectComponent___);
                      p_effectDisappear2Component = &this->fields.effectDisappear2Component;
                      this->fields.effectDisappear2Component = v45;
                      sub_B70630(
                        (BattleServantConfConponent_o *)&this->fields.effectDisappear2Component,
                        (System_Int32_array **)v45,
                        v47,
                        v48,
                        v49,
                        v50,
                        v51,
                        v52);
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
                        v55 = this->fields.effectDisappearComponent;
                        if ( !v55 )
                          goto LABEL_49;
                        GameObjectExtensions__SetLocalPositionX(v21, v55->fields.disappearEffect2ShiftPosX, 0LL);
                        v56 = this->fields.effectDisappearComponent;
                        if ( !v56 )
                          goto LABEL_49;
                        GameObjectExtensions__SetLocalPositionY(v21, v56->fields.disappearEffect2ShiftPosY, 0LL);
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
      sub_B7076C(transform, v20);
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
  UnityEngine_Object_o *boardDisappearEffectFadePrefab; // x21
  struct UnityEngine_GameObject_o *v8; // x21
  UnityEngine_GameObject_o *transform; // x0
  __int64 v10; // x1
  UnityEngine_GameObject_o *v11; // x21
  UnityEngine_Transform_o *v12; // x22
  UnityEngine_Transform_o *v13; // x22
  int v14; // s0
  UnityEngine_Transform_o *v17; // x22
  int v18; // s0
  UnityEngine_Transform_o *v22; // x22
  int v23; // s0
  struct QuestBoardListEffectComponent_o *Component_srcLineSprite; // x0
  struct QuestBoardListEffectComponent_o **p_effectDisappearFadeComponent; // x21
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7

  if ( (byte_435247E & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectComponent___);
    sub_B70694(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_435247E = 1;
  }
  boardDisappearEffectFadePrefab = (UnityEngine_Object_o *)this->fields.boardDisappearEffectFadePrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(boardDisappearEffectFadePrefab, 0LL, 0LL) )
  {
    v8 = this->fields.boardDisappearEffectFadePrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                              (UnityEngine_UI_Dropdown_DropdownItem_o *)v8,
                                              (const MethodInfo_1D58764 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_22;
    v11 = transform;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
    if ( !this->fields.fadePanel )
      goto LABEL_22;
    v12 = (UnityEngine_Transform_o *)transform;
    transform = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                              (UnityEngine_Component_o *)this->fields.fadePanel,
                                              0LL);
    if ( !v12 )
      goto LABEL_22;
    UnityEngine_Transform__set_parent(v12, (UnityEngine_Transform_o *)transform, 0LL);
    v13 = UnityEngine_GameObject__get_transform(v11, 0LL);
    *(UnityEngine_Vector3_o *)&v14 = UnityEngine_Vector3__get_zero(0LL);
    if ( !v13 )
      goto LABEL_22;
    UnityEngine_Transform__set_localPosition(v13, *(UnityEngine_Vector3_o *)&v14, 0LL);
    v17 = UnityEngine_GameObject__get_transform(v11, 0LL);
    *(UnityEngine_Quaternion_o *)&v18 = UnityEngine_Quaternion__get_identity(0LL);
    if ( !v17 )
      goto LABEL_22;
    UnityEngine_Transform__set_localRotation(v17, *(UnityEngine_Quaternion_o *)&v18, 0LL);
    v22 = UnityEngine_GameObject__get_transform(v11, 0LL);
    *(UnityEngine_Vector3_o *)&v23 = UnityEngine_Vector3__get_one(0LL);
    if ( !v22 )
      goto LABEL_22;
    UnityEngine_Transform__set_localScale(v22, *(UnityEngine_Vector3_o *)&v23, 0LL);
    Component_srcLineSprite = (struct QuestBoardListEffectComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                          v11,
                                                                          (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectComponent___);
    p_effectDisappearFadeComponent = &this->fields.effectDisappearFadeComponent;
    this->fields.effectDisappearFadeComponent = Component_srcLineSprite;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.effectDisappearFadeComponent,
      (System_Int32_array **)Component_srcLineSprite,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
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
      sub_B7076C(transform, v10);
    (*p_effectDisappearFadeComponent)->fields.playingActStartTime = actTime;
  }
}


void __fastcall QuestBoardListViewManager__SetupBlackMark(QuestBoardListViewManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *blackMarkPrefab; // x20
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  WarQuestSelectionEntity_array *Entitys_WarQuestSelectionEntity; // x20
  QuestBoardListViewManager___c_c *v7; // x8
  struct QuestBoardListViewManager___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__138_0; // x21
  Il2CppObject *v10; // x22
  struct QuestBoardListViewManager___c_StaticFields *v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  int v18; // w20
  struct ScrTerminalListTop_o *mTerminalList; // x8
  AssetData_o *effectAssetData; // x0
  BattleServantConfConponent_o *p_blackMarkPrefab; // x19
  System_Int32_array **Object_WarBoardWaitTimeSetting; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  if ( (byte_4352473 & 1) == 0 )
  {
    sub_B70694(&Method_AssetData_GetObject_GameObject____69232720);
    sub_B70694(&Method_BasicHelper_Any_WarEntity___);
    sub_B70694(&Method_DataManager_GetMasterData_WarMaster___);
    sub_B70694(&Method_DataMasterBase_getEntitys_WarEntity___);
    sub_B70694(&Method_System_Func_WarEntity__bool___ctor__);
    sub_B70694(&System_Func_WarEntity__bool__TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Method_QuestBoardListViewManager___c__SetupBlackMark_b__138_0__);
    sub_B70694(&QuestBoardListViewManager___c_TypeInfo);
    sub_B70694(&StringLiteral_18438/*"ef_blackpoint"*/);
    byte_4352473 = 1;
  }
  blackMarkPrefab = (UnityEngine_Object_o *)this->fields.blackMarkPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(blackMarkPrefab, 0LL, 0LL) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_23;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_WarMaster___);
    if ( !Instance )
      goto LABEL_23;
    Entitys_WarQuestSelectionEntity = DataMasterBase__getEntitys_WarQuestSelectionEntity_(
                                        (DataMasterBase_o *)Instance,
                                        (const MethodInfo_1CA3E74 *)Method_DataMasterBase_getEntitys_WarEntity___);
    v7 = QuestBoardListViewManager___c_TypeInfo;
    if ( (BYTE3(QuestBoardListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewManager___c_TypeInfo);
      v7 = QuestBoardListViewManager___c_TypeInfo;
    }
    static_fields = v7->static_fields;
    _9__138_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__138_0;
    if ( !_9__138_0 )
    {
      if ( (BYTE3(v7->vtable._0_Equals.methodPtr) & 4) != 0 && !v7->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v7);
        static_fields = QuestBoardListViewManager___c_TypeInfo->static_fields;
      }
      v10 = (Il2CppObject *)static_fields->__9;
      _9__138_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_WarEntity__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__138_0,
        v10,
        Method_QuestBoardListViewManager___c__SetupBlackMark_b__138_0__,
        (const MethodInfo_29AC578 *)Method_System_Func_WarEntity__bool___ctor__);
      v11 = QuestBoardListViewManager___c_TypeInfo->static_fields;
      v11->__9__138_0 = (struct System_Func_WarEntity__bool__o *)_9__138_0;
      sub_B70630(
        (BattleServantConfConponent_o *)&v11->__9__138_0,
        (System_Int32_array **)_9__138_0,
        v12,
        v13,
        v14,
        v15,
        v16,
        v17);
    }
    Instance = (DataManager_o *)BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
                                  (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)Entitys_WarQuestSelectionEntity,
                                  (System_Func_T__bool__o *)_9__138_0,
                                  (const MethodInfo_1BDCB34 *)Method_BasicHelper_Any_WarEntity___);
    if ( !this->fields.mTerminalList
      || (v18 = (int)Instance,
          Instance = (DataManager_o *)ScrTerminalListTop__CheckTerminalTopEffect(this->fields.mTerminalList, 0LL),
          (mTerminalList = this->fields.mTerminalList) == 0LL) )
    {
LABEL_23:
      sub_B7076C(Instance, v5);
    }
    if ( (((_DWORD)Instance != mTerminalList->fields.TERMINAL_EFFECT_APPEAR_EFFECT_ID) & ~v18) == 0 )
    {
      effectAssetData = this->fields.effectAssetData;
      if ( effectAssetData )
      {
        p_blackMarkPrefab = (BattleServantConfConponent_o *)&this->fields.blackMarkPrefab;
        Object_WarBoardWaitTimeSetting = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                  effectAssetData,
                                                                  (System_String_o *)StringLiteral_18438/*"ef_blackpoint"*/,
                                                                  (const MethodInfo_1BD6720 *)Method_AssetData_GetObject_GameObject____69232720);
        p_blackMarkPrefab->klass = (BattleServantConfConponent_c *)Object_WarBoardWaitTimeSetting;
        sub_B70630(p_blackMarkPrefab, Object_WarBoardWaitTimeSetting, v23, v24, v25, v26, v27, v28);
      }
    }
  }
}


void __fastcall QuestBoardListViewManager__SetupBoardAppearAndDisappearEffect(
        QuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  ScrTerminalListTop_o *mTerminalList; // x0
  struct ScrTerminalListTop_o *v4; // x8
  UnityEngine_Object_o *boardAppearEffectPrefab; // x20
  struct UnityEngine_GameObject_o *Object_WarBoardWaitTimeSetting; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  UnityEngine_Object_o *boardAppearEffectFadePrefab; // x20
  struct UnityEngine_GameObject_o *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  UnityEngine_Object_o *v21; // x20
  __int64 *v22; // x8
  BattleServantConfConponent_o *p_boardDisappear2EffectPrefab; // x20
  UnityEngine_Object_o *v24; // x20
  struct UnityEngine_GameObject_o *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  UnityEngine_Object_o *v32; // x20
  struct UnityEngine_GameObject_o *v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  UnityEngine_Object_o *ntBoardAppearEffectPrefab; // x20
  System_Int32_array **v41; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  UnityEngine_Object_o *boardDisappearEffectFadePrefab; // x20
  __int64 *v49; // x8
  BattleServantConfConponent_o *p_nt2BoardAppearEffectFadePrefab; // x19
  System_Int32_array **v51; // x0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  UnityEngine_Object_o *boardDisappearEffectPrefab; // x20
  struct UnityEngine_GameObject_o *v59; // x0
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  UnityEngine_Object_o *boardDisappear2EffectPrefab; // x20
  __int64 *v67; // x8
  UnityEngine_Object_o *v68; // x20
  struct UnityEngine_GameObject_o *v69; // x0
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  UnityEngine_Object_o *v76; // x20
  struct UnityEngine_GameObject_o *v77; // x0
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  UnityEngine_Object_o *v84; // x20
  struct UnityEngine_GameObject_o *v85; // x0
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  UnityEngine_Object_o *v92; // x20
  UnityEngine_Object_o *nt2BoardAppearEffectPrefab; // x20
  struct UnityEngine_GameObject_o *v94; // x0
  System_String_array **v95; // x2
  System_String_array **v96; // x3
  System_Boolean_array **v97; // x4
  System_Int32_array **v98; // x5
  System_Int32_array *v99; // x6
  System_Int32_array *v100; // x7
  UnityEngine_Object_o *nt2BoardAppearEffectFadePrefab; // x20

  if ( (byte_4352476 & 1) == 0 )
  {
    sub_B70694(&Method_AssetData_GetObject_GameObject____69232720);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_16980/*"bit_board_appear2"*/);
    sub_B70694(&StringLiteral_16986/*"bit_board_disappear5"*/);
    sub_B70694(&StringLiteral_17013/*"bit_fade_black2"*/);
    sub_B70694(&StringLiteral_16985/*"bit_board_disappear4"*/);
    sub_B70694(&StringLiteral_16982/*"bit_board_disappear"*/);
    sub_B70694(&StringLiteral_17012/*"bit_fade_black"*/);
    sub_B70694(&StringLiteral_16979/*"bit_board_appear"*/);
    sub_B70694(&StringLiteral_17015/*"bit_fade_black4"*/);
    sub_B70694(&StringLiteral_17014/*"bit_fade_black3"*/);
    sub_B70694(&StringLiteral_16981/*"bit_board_appear3"*/);
    sub_B70694(&StringLiteral_16983/*"bit_board_disappear2"*/);
    sub_B70694(&StringLiteral_16984/*"bit_board_disappear3"*/);
    byte_4352476 = 1;
  }
  mTerminalList = this->fields.mTerminalList;
  if ( !mTerminalList )
    goto LABEL_115;
  mTerminalList = (ScrTerminalListTop_o *)ScrTerminalListTop__CheckTerminalTopEffect(mTerminalList, 0LL);
  v4 = this->fields.mTerminalList;
  if ( !v4 )
    goto LABEL_115;
  if ( (_DWORD)mTerminalList == v4->fields.TERMINAL_EFFECT_APPEAR_EFFECT_ID )
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
                                                                            (System_String_o *)StringLiteral_16979/*"bit_board_appear"*/,
                                                                            (const MethodInfo_1BD6720 *)Method_AssetData_GetObject_GameObject____69232720);
      this->fields.boardAppearEffectPrefab = Object_WarBoardWaitTimeSetting;
      sub_B70630(
        (BattleServantConfConponent_o *)&this->fields.boardAppearEffectPrefab,
        (System_Int32_array **)Object_WarBoardWaitTimeSetting,
        v7,
        v8,
        v9,
        v10,
        v11,
        v12);
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
      v14 = (struct UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                 (AssetData_o *)mTerminalList,
                                                 (System_String_o *)StringLiteral_17012/*"bit_fade_black"*/,
                                                 (const MethodInfo_1BD6720 *)Method_AssetData_GetObject_GameObject____69232720);
      this->fields.boardAppearEffectFadePrefab = v14;
      sub_B70630(
        (BattleServantConfConponent_o *)&this->fields.boardAppearEffectFadePrefab,
        (System_Int32_array **)v14,
        v15,
        v16,
        v17,
        v18,
        v19,
        v20);
    }
    goto LABEL_19;
  }
  if ( (_DWORD)mTerminalList == v4->fields.TERMINAL_WHITE_MARK_EFFECT_APPEAR_EFFECT_ID )
  {
    if ( !this->fields.effectAssetData )
      return;
    v24 = (UnityEngine_Object_o *)this->fields.boardAppearEffectPrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality(v24, 0LL, 0LL) )
    {
      mTerminalList = (ScrTerminalListTop_o *)this->fields.effectAssetData;
      if ( !mTerminalList )
        goto LABEL_115;
      v25 = (struct UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                 (AssetData_o *)mTerminalList,
                                                 (System_String_o *)StringLiteral_16980/*"bit_board_appear2"*/,
                                                 (const MethodInfo_1BD6720 *)Method_AssetData_GetObject_GameObject____69232720);
      this->fields.boardAppearEffectPrefab = v25;
      sub_B70630(
        (BattleServantConfConponent_o *)&this->fields.boardAppearEffectPrefab,
        (System_Int32_array **)v25,
        v26,
        v27,
        v28,
        v29,
        v30,
        v31);
    }
    v32 = (UnityEngine_Object_o *)this->fields.boardAppearEffectFadePrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality(v32, 0LL, 0LL) )
    {
      mTerminalList = (ScrTerminalListTop_o *)this->fields.effectAssetData;
      if ( !mTerminalList )
        goto LABEL_115;
      v33 = (struct UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                 (AssetData_o *)mTerminalList,
                                                 (System_String_o *)StringLiteral_17014/*"bit_fade_black3"*/,
                                                 (const MethodInfo_1BD6720 *)Method_AssetData_GetObject_GameObject____69232720);
      this->fields.boardAppearEffectFadePrefab = v33;
      sub_B70630(
        (BattleServantConfConponent_o *)&this->fields.boardAppearEffectFadePrefab,
        (System_Int32_array **)v33,
        v34,
        v35,
        v36,
        v37,
        v38,
        v39);
    }
    goto LABEL_39;
  }
  if ( (_DWORD)mTerminalList == v4->fields.TERMINAL_EFFECT_BOARD_DISAPPEAR_EFFECT_ID )
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
      v59 = (struct UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                 (AssetData_o *)mTerminalList,
                                                 (System_String_o *)StringLiteral_16982/*"bit_board_disappear"*/,
                                                 (const MethodInfo_1BD6720 *)Method_AssetData_GetObject_GameObject____69232720);
      this->fields.boardDisappearEffectPrefab = v59;
      sub_B70630(
        (BattleServantConfConponent_o *)&this->fields.boardDisappearEffectPrefab,
        (System_Int32_array **)v59,
        v60,
        v61,
        v62,
        v63,
        v64,
        v65);
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
    v67 = &StringLiteral_16983/*"bit_board_disappear2"*/;
    goto LABEL_81;
  }
  if ( (_DWORD)mTerminalList != v4->fields.TERMINAL_WHITE_MARK_EFFECT_BOARD_DISAPPEAR_EFFECT_ID )
  {
    if ( (_DWORD)mTerminalList == v4->fields.TERMINAL_EFFECT_BB_BOARD_EFFECT_ID )
    {
      if ( !this->fields.effectAssetData )
        return;
LABEL_19:
      v21 = (UnityEngine_Object_o *)this->fields.boardDisappear2EffectPrefab;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Equality(v21, 0LL, 0LL) )
      {
        mTerminalList = (ScrTerminalListTop_o *)this->fields.effectAssetData;
        if ( !mTerminalList )
          goto LABEL_115;
        v22 = &StringLiteral_16983/*"bit_board_disappear2"*/;
        p_boardDisappear2EffectPrefab = (BattleServantConfConponent_o *)&this->fields.boardDisappear2EffectPrefab;
LABEL_45:
        v41 = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                       (AssetData_o *)mTerminalList,
                                       (System_String_o *)*v22,
                                       (const MethodInfo_1BD6720 *)Method_AssetData_GetObject_GameObject____69232720);
        p_boardDisappear2EffectPrefab->klass = (BattleServantConfConponent_c *)v41;
        sub_B70630(p_boardDisappear2EffectPrefab, v41, v42, v43, v44, v45, v46, v47);
        goto LABEL_46;
      }
      goto LABEL_46;
    }
    if ( (_DWORD)mTerminalList != v4->fields.TERMINAL_EFFECT_NT_BOARD_EFFECT_ID )
    {
      if ( (_DWORD)mTerminalList == v4->fields.TERMINAL_EFFECT_NT2_BOARD_COMPLETE_EFFECT_ID
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
          v94 = (struct UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                     (AssetData_o *)mTerminalList,
                                                     (System_String_o *)StringLiteral_16981/*"bit_board_appear3"*/,
                                                     (const MethodInfo_1BD6720 *)Method_AssetData_GetObject_GameObject____69232720);
          this->fields.nt2BoardAppearEffectPrefab = v94;
          sub_B70630(
            (BattleServantConfConponent_o *)&this->fields.nt2BoardAppearEffectPrefab,
            (System_Int32_array **)v94,
            v95,
            v96,
            v97,
            v98,
            v99,
            v100);
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
            v49 = &StringLiteral_17015/*"bit_fade_black4"*/;
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
      v22 = &StringLiteral_16986/*"bit_board_disappear5"*/;
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
        v49 = &StringLiteral_17013/*"bit_fade_black2"*/;
        p_nt2BoardAppearEffectFadePrefab = (BattleServantConfConponent_o *)&this->fields.boardDisappearEffectFadePrefab;
LABEL_52:
        v51 = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                       (AssetData_o *)mTerminalList,
                                       (System_String_o *)*v49,
                                       (const MethodInfo_1BD6720 *)Method_AssetData_GetObject_GameObject____69232720);
        p_nt2BoardAppearEffectFadePrefab->klass = (BattleServantConfConponent_c *)v51;
        sub_B70630(p_nt2BoardAppearEffectFadePrefab, v51, v52, v53, v54, v55, v56, v57);
        return;
      }
      goto LABEL_115;
    }
    return;
  }
  if ( !this->fields.effectAssetData )
    return;
  v68 = (UnityEngine_Object_o *)this->fields.boardDisappearEffectPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(v68, 0LL, 0LL) )
  {
    mTerminalList = (ScrTerminalListTop_o *)this->fields.effectAssetData;
    if ( !mTerminalList )
      goto LABEL_115;
    v69 = (struct UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                               (AssetData_o *)mTerminalList,
                                               (System_String_o *)StringLiteral_16984/*"bit_board_disappear3"*/,
                                               (const MethodInfo_1BD6720 *)Method_AssetData_GetObject_GameObject____69232720);
    this->fields.boardDisappearEffectPrefab = v69;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.boardDisappearEffectPrefab,
      (System_Int32_array **)v69,
      v70,
      v71,
      v72,
      v73,
      v74,
      v75);
  }
  v76 = (UnityEngine_Object_o *)this->fields.boardDisappear2EffectPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(v76, 0LL, 0LL) )
  {
    mTerminalList = (ScrTerminalListTop_o *)this->fields.effectAssetData;
    if ( !mTerminalList )
      goto LABEL_115;
    v67 = &StringLiteral_16985/*"bit_board_disappear4"*/;
LABEL_81:
    v77 = (struct UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                               (AssetData_o *)mTerminalList,
                                               (System_String_o *)*v67,
                                               (const MethodInfo_1BD6720 *)Method_AssetData_GetObject_GameObject____69232720);
    this->fields.boardDisappear2EffectPrefab = v77;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.boardDisappear2EffectPrefab,
      (System_Int32_array **)v77,
      v78,
      v79,
      v80,
      v81,
      v82,
      v83);
  }
LABEL_82:
  v84 = (UnityEngine_Object_o *)this->fields.boardDisappearEffectFadePrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(v84, 0LL, 0LL) )
  {
    mTerminalList = (ScrTerminalListTop_o *)this->fields.effectAssetData;
    if ( !mTerminalList )
      goto LABEL_115;
    v85 = (struct UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                               (AssetData_o *)mTerminalList,
                                               (System_String_o *)StringLiteral_17013/*"bit_fade_black2"*/,
                                               (const MethodInfo_1BD6720 *)Method_AssetData_GetObject_GameObject____69232720);
    this->fields.boardDisappearEffectFadePrefab = v85;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.boardDisappearEffectFadePrefab,
      (System_Int32_array **)v85,
      v86,
      v87,
      v88,
      v89,
      v90,
      v91);
  }
  v92 = (UnityEngine_Object_o *)this->fields.ntBoardAppearEffectPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(v92, 0LL, 0LL) )
  {
    mTerminalList = (ScrTerminalListTop_o *)this->fields.effectAssetData;
    if ( mTerminalList )
    {
      v49 = &StringLiteral_16986/*"bit_board_disappear5"*/;
      p_nt2BoardAppearEffectFadePrefab = (BattleServantConfConponent_o *)&this->fields.ntBoardAppearEffectPrefab;
      goto LABEL_52;
    }
LABEL_115:
    sub_B7076C(mTerminalList, method);
  }
}


void __fastcall QuestBoardListViewManager__SetupDisp(QuestBoardListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_QuestBoardListViewObject__o *ObjectList; // x0
  const MethodInfo *v4; // x1
  int size; // w8
  System_Collections_Generic_List_QuestBoardListViewObject__o *v6; // x19
  unsigned int v7; // w20

  if ( (byte_435245F & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_QuestBoardListViewObject__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_QuestBoardListViewObject__get_Item__);
    byte_435245F = 1;
  }
  ObjectList = QuestBoardListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    goto LABEL_11;
  size = ObjectList->fields._size;
  v6 = ObjectList;
  if ( size >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( size <= v7 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
      ObjectList = (System_Collections_Generic_List_QuestBoardListViewObject__o *)v6->fields._items->m_Items[v7];
      if ( !ObjectList )
        break;
      QuestBoardListViewObject__SetupDisp((QuestBoardListViewObject_o *)ObjectList, v4);
      size = v6->fields._size;
      if ( (int)++v7 >= size )
        return;
    }
LABEL_11:
    sub_B7076C(ObjectList, v4);
  }
}


void __fastcall QuestBoardListViewManager__SetupFortificationWarningDialog(
        QuestBoardListViewManager_o *this,
        int32_t eventId,
        System_Action_o *func,
        const MethodInfo *method)
{
  __int64 v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
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
  System_String_o *v21; // x0
  System_String_o *v22; // x20
  AssetLoader_LoadEndDataHandler_o *v23; // x22
  int32_t v24; // [xsp+Ch] [xbp-24h] BYREF

  v24 = eventId;
  if ( (byte_4352475 & 1) == 0 )
  {
    sub_B70694(&AssetManager_TypeInfo);
    sub_B70694(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_B70694(&Method_QuestBoardListViewManager___c__DisplayClass140_0__SetupFortificationWarningDialog_b__0__);
    sub_B70694(&QuestBoardListViewManager___c__DisplayClass140_0_TypeInfo);
    sub_B70694(&StringLiteral_6294/*"EventUI/Prefabs/"*/);
    byte_4352475 = 1;
  }
  v6 = sub_B70764(QuestBoardListViewManager___c__DisplayClass140_0_TypeInfo);
  QuestBoardListViewManager___c__DisplayClass140_0___ctor((QuestBoardListViewManager___c__DisplayClass140_0_o *)v6, 0LL);
  if ( !v6 )
    sub_B7076C(v7, v8);
  *(_QWORD *)(v6 + 16) = this;
  sub_B70630((BattleServantConfConponent_o *)(v6 + 16), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14);
  *(_QWORD *)(v6 + 24) = func;
  sub_B70630((BattleServantConfConponent_o *)(v6 + 24), (System_Int32_array **)func, v15, v16, v17, v18, v19, v20);
  v21 = System_Int32__ToString((int32_t)&v24, 0LL);
  v22 = System_String__Concat_44758168((System_String_o *)StringLiteral_6294/*"EventUI/Prefabs/"*/, v21, 0LL);
  v23 = (AssetLoader_LoadEndDataHandler_o *)sub_B70764(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v23,
    (Il2CppObject *)v6,
    Method_QuestBoardListViewManager___c__DisplayClass140_0__SetupFortificationWarningDialog_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(v22, v23, 1, 0LL) )
    ActionExtensions__Call(*(System_Action_o **)(v6 + 24), 0LL);
}


void __fastcall QuestBoardListViewManager__SetupWhiteMark(QuestBoardListViewManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *whiteMarkPrefab; // x20
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  WarQuestSelectionEntity_array *Entitys_WarQuestSelectionEntity; // x20
  QuestBoardListViewManager___c_c *v7; // x8
  struct QuestBoardListViewManager___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__139_0; // x21
  Il2CppObject *v10; // x22
  struct QuestBoardListViewManager___c_StaticFields *v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  int v18; // w20
  struct ScrTerminalListTop_o *mTerminalList; // x8
  AssetData_o *effectAssetData; // x0
  BattleServantConfConponent_o *p_whiteMarkPrefab; // x19
  System_Int32_array **Object_WarBoardWaitTimeSetting; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  if ( (byte_4352474 & 1) == 0 )
  {
    sub_B70694(&Method_AssetData_GetObject_GameObject____69232720);
    sub_B70694(&Method_BasicHelper_Any_WarEntity___);
    sub_B70694(&Method_DataManager_GetMasterData_WarMaster___);
    sub_B70694(&Method_DataMasterBase_getEntitys_WarEntity___);
    sub_B70694(&Method_System_Func_WarEntity__bool___ctor__);
    sub_B70694(&System_Func_WarEntity__bool__TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Method_QuestBoardListViewManager___c__SetupWhiteMark_b__139_0__);
    sub_B70694(&QuestBoardListViewManager___c_TypeInfo);
    sub_B70694(&StringLiteral_18498/*"ef_whitepoint"*/);
    byte_4352474 = 1;
  }
  whiteMarkPrefab = (UnityEngine_Object_o *)this->fields.whiteMarkPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(whiteMarkPrefab, 0LL, 0LL) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_23;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_WarMaster___);
    if ( !Instance )
      goto LABEL_23;
    Entitys_WarQuestSelectionEntity = DataMasterBase__getEntitys_WarQuestSelectionEntity_(
                                        (DataMasterBase_o *)Instance,
                                        (const MethodInfo_1CA3E74 *)Method_DataMasterBase_getEntitys_WarEntity___);
    v7 = QuestBoardListViewManager___c_TypeInfo;
    if ( (BYTE3(QuestBoardListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewManager___c_TypeInfo);
      v7 = QuestBoardListViewManager___c_TypeInfo;
    }
    static_fields = v7->static_fields;
    _9__139_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__139_0;
    if ( !_9__139_0 )
    {
      if ( (BYTE3(v7->vtable._0_Equals.methodPtr) & 4) != 0 && !v7->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v7);
        static_fields = QuestBoardListViewManager___c_TypeInfo->static_fields;
      }
      v10 = (Il2CppObject *)static_fields->__9;
      _9__139_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_WarEntity__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__139_0,
        v10,
        Method_QuestBoardListViewManager___c__SetupWhiteMark_b__139_0__,
        (const MethodInfo_29AC578 *)Method_System_Func_WarEntity__bool___ctor__);
      v11 = QuestBoardListViewManager___c_TypeInfo->static_fields;
      v11->__9__139_0 = (struct System_Func_WarEntity__bool__o *)_9__139_0;
      sub_B70630(
        (BattleServantConfConponent_o *)&v11->__9__139_0,
        (System_Int32_array **)_9__139_0,
        v12,
        v13,
        v14,
        v15,
        v16,
        v17);
    }
    Instance = (DataManager_o *)BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
                                  (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)Entitys_WarQuestSelectionEntity,
                                  (System_Func_T__bool__o *)_9__139_0,
                                  (const MethodInfo_1BDCB34 *)Method_BasicHelper_Any_WarEntity___);
    if ( !this->fields.mTerminalList
      || (v18 = (int)Instance,
          Instance = (DataManager_o *)ScrTerminalListTop__CheckTerminalTopEffect(this->fields.mTerminalList, 0LL),
          (mTerminalList = this->fields.mTerminalList) == 0LL) )
    {
LABEL_23:
      sub_B7076C(Instance, v5);
    }
    if ( (((_DWORD)Instance != mTerminalList->fields.TERMINAL_WHITE_MARK_EFFECT_APPEAR_EFFECT_ID) & ~v18) == 0 )
    {
      effectAssetData = this->fields.effectAssetData;
      if ( effectAssetData )
      {
        p_whiteMarkPrefab = (BattleServantConfConponent_o *)&this->fields.whiteMarkPrefab;
        Object_WarBoardWaitTimeSetting = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                  effectAssetData,
                                                                  (System_String_o *)StringLiteral_18498/*"ef_whitepoint"*/,
                                                                  (const MethodInfo_1BD6720 *)Method_AssetData_GetObject_GameObject____69232720);
        p_whiteMarkPrefab->klass = (BattleServantConfConponent_c *)Object_WarBoardWaitTimeSetting;
        sub_B70630(p_whiteMarkPrefab, Object_WarBoardWaitTimeSetting, v23, v24, v25, v26, v27, v28);
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

  if ( (byte_4352481 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4352481 = 1;
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
      sub_B7076C(0LL, v6);
    QuestBoardListEffectComponent__Skip(v7, skipTime, 0LL);
  }
}


bool __fastcall QuestBoardListViewManager__TryGetFlagFromOnEventStart(
        QuestBoardListViewManager_o *this,
        int32_t *flagType,
        EventEntity_o *eventEntity,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventTutorialEntity__o *EventTutorialEntity; // x0
  __int64 v7; // x1
  EventTutorialEntity_o *v8; // x8
  bool result; // w0

  if ( (byte_4352469 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4352469 = 1;
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
      v8 = EventTutorialEntity->fields._items->m_Items[0];
      if ( v8 )
      {
        result = 1;
        *flagType = v8->fields.flagType;
        return result;
      }
LABEL_9:
      sub_B7076C(EventTutorialEntity, v7);
    }
  }
  return 0;
}


bool __fastcall QuestBoardListViewManager__TryGetReleasedFocusQuestId(
        QuestBoardListViewManager_o *this,
        int32_t *questId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  Il2CppObject *current; // x20
  __int64 v8; // x9
  MapControl_QuestInfo_o *monitor; // x0
  __int64 IsReleaseFocusQuestBoard; // x0
  __int64 v11; // x1
  _DWORD *v12; // x8
  int32_t v13; // w21
  __int64 QuestReleasedFocusState; // x0
  __int64 v15; // x1
  _DWORD *v16; // x8
  char v17; // w20
  int v18; // w19
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_435245C & 1) == 0 )
  {
    sub_B70694(&Method_System_Linq_Enumerable_Any_ListViewItem___);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_B70694(&QuestBoardListViewItem_TypeInfo);
    sub_B70694(&TerminalPramsManager_TypeInfo);
    byte_435245C = 1;
  }
  memset(&v21, 0, sizeof(v21));
  if ( !System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.itemList,
          (const MethodInfo_1CA8B10 *)Method_System_Linq_Enumerable_Any_ListViewItem___) )
    return 0;
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_B7076C(0LL, v5);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v20,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v21 = v20;
  while ( 1 )
  {
    if ( !System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v21,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
    {
      v18 = 0;
      v17 = 0;
      goto LABEL_21;
    }
    current = v21.fields.current;
    if ( v21.fields.current )
    {
      v8 = *(&QuestBoardListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v21.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v8
        || (QuestBoardListViewItem_c *)v21.fields.current->klass->_2.typeHierarchy[v8 - 1] != QuestBoardListViewItem_TypeInfo )
      {
        IsReleaseFocusQuestBoard = sub_B70A60(v21.fields.current);
LABEL_23:
        sub_B7076C(IsReleaseFocusQuestBoard, v11);
      }
      monitor = (MapControl_QuestInfo_o *)v21.fields.current[7].monitor;
      if ( monitor )
      {
        if ( monitor->fields.dispType == 1 )
        {
          IsReleaseFocusQuestBoard = MapControl_QuestInfo__IsReleaseFocusQuestBoard(monitor, 0LL);
          if ( (IsReleaseFocusQuestBoard & 1) != 0 )
          {
            v12 = current[7].monitor;
            if ( !v12 )
              goto LABEL_23;
            v13 = v12[4];
            if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            }
            QuestReleasedFocusState = TerminalPramsManager__GetQuestReleasedFocusState(v13, 0LL);
            if ( !(_DWORD)QuestReleasedFocusState )
              break;
          }
        }
      }
    }
  }
  v16 = current[7].monitor;
  if ( !v16 )
    sub_B7076C(QuestReleasedFocusState, v15);
  v17 = 1;
  *questId = v16[4];
  v18 = 2;
LABEL_21:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v21,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  return (v18 == 2) & v17;
}


void __fastcall QuestBoardListViewManager__Update(QuestBoardListViewManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  ListViewManager__Update((ListViewManager_o *)this, 0LL);
  QuestBoardListViewManager__UpdateAlphaAnim(this, v3);
}


void __fastcall QuestBoardListViewManager__UpdateAlphaAnim(QuestBoardListViewManager_o *this, const MethodInfo *method)
{
  TransitionCalculator_float__o *rewardIconAlphaCalculator; // x0
  __int64 v4; // x1
  float v5; // s0
  AlphaTransitionCalculator_o *v6; // x0
  float realtimeSinceStartup; // s0
  float mAlphaAnimTimeOld; // s9
  float v9; // s8
  QuestBoardListViewManager_c *v10; // x0
  const MethodInfo *v11; // x1
  float v12; // s0
  int32_t mAlphaAnimCnt; // w8
  int32_t v14; // w21
  QuestBoardListViewManager_c *v15; // x0
  int32_t ALPHA_ANIM_COUNT_RESET_VAL; // w8
  int32_t v17; // w21

  if ( (byte_4352467 & 1) == 0 )
  {
    sub_B70694(&QuestBoardListViewManager_TypeInfo);
    sub_B70694(&Method_TransitionCalculator_float__Update__);
    byte_4352467 = 1;
  }
  rewardIconAlphaCalculator = (TransitionCalculator_float__o *)this->fields.rewardIconAlphaCalculator;
  if ( rewardIconAlphaCalculator )
  {
    v5 = TransitionCalculator_float___Update(
           rewardIconAlphaCalculator,
           (const MethodInfo_29DDB90 *)Method_TransitionCalculator_float__Update__);
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
        v6 = this->fields.rewardIconAlphaCalculator;
        if ( v6 )
        {
          AlphaTransitionCalculator__StartFadeOut(v6, 0LL);
          return;
        }
LABEL_25:
        sub_B7076C(v6, v4);
      }
    }
    else
    {
      v6 = this->fields.rewardIconAlphaCalculator;
      if ( !v6 )
        goto LABEL_25;
      if ( AlphaTransitionCalculator__IsFadeOutFinished(v6, 0LL) )
      {
        v6 = this->fields.rewardIconAlphaCalculator;
        if ( !v6 )
          goto LABEL_25;
        AlphaTransitionCalculator__StartFadeIn(v6, 0LL);
        v12 = UnityEngine_Time__get_realtimeSinceStartup(0LL);
        mAlphaAnimCnt = this->fields.mAlphaAnimCnt;
        this->fields.mAlphaAnimTimeOld = v12;
        v14 = mAlphaAnimCnt + 1;
        this->fields.mAlphaAnimCnt = mAlphaAnimCnt + 1;
        v15 = QuestBoardListViewManager_TypeInfo;
        if ( (BYTE3(QuestBoardListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !QuestBoardListViewManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewManager_TypeInfo);
          v15 = QuestBoardListViewManager_TypeInfo;
        }
        ALPHA_ANIM_COUNT_RESET_VAL = v15->static_fields->ALPHA_ANIM_COUNT_RESET_VAL;
        if ( v14 >= ALPHA_ANIM_COUNT_RESET_VAL )
        {
          v17 = this->fields.mAlphaAnimCnt;
          if ( (BYTE3(v15->vtable._0_Equals.methodPtr) & 4) != 0 && !v15->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v15);
            ALPHA_ANIM_COUNT_RESET_VAL = QuestBoardListViewManager_TypeInfo->static_fields->ALPHA_ANIM_COUNT_RESET_VAL;
          }
          this->fields.mAlphaAnimCnt = v17 - ALPHA_ANIM_COUNT_RESET_VAL;
        }
        QuestBoardListViewManager__OnChangeAlphaAnim(this, v11);
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

  if ( (byte_4352459 & 1) == 0 )
  {
    sub_B70694(&QuestBoardListViewManager__WaitFinish_d__95_TypeInfo);
    byte_4352459 = 1;
  }
  v5 = sub_B70764(QuestBoardListViewManager__WaitFinish_d__95_TypeInfo);
  QuestBoardListViewManager__WaitFinish_d__95___ctor((QuestBoardListViewManager__WaitFinish_d__95_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_B7076C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 40) = endAct;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 40), (System_Int32_array **)endAct, v14, v15, v16, v17, v18, v19);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall QuestBoardListViewManager___BGChangeEffect_b__132_0(
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
    sub_B7076C(mFolderBg, method);
  }
  LODWORD(mFolderBg[1].klass) = 1;
}


void __fastcall QuestBoardListViewManager___BGChangeEffect_b__132_1(
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

  if ( (byte_435248B & 1) == 0 )
  {
    sub_B70694(&StringLiteral_11558/*"RemoveTempBG"*/);
    byte_435248B = 1;
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
    sub_B7076C(mFolderBgTemp, method);
  }
  *((_DWORD *)mFolderBgTemp + 6) = 0;
  v11 = (System_Int32_array **)StringLiteral_11558/*"RemoveTempBG"*/;
  *((_QWORD *)mFolderBgTemp + 10) = StringLiteral_11558/*"RemoveTempBG"*/;
  sub_B70630((BattleServantConfConponent_o *)(mFolderBgTemp + 80), v11, v5, v6, v7, v8, v9, v10);
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
    sub_B7076C(mFolderBg, *(_QWORD *)&inOut);
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
  UnityEngine_Component_o *mFolderBg; // x0
  int32_t mRequestedBGid; // w21
  ExUITexture_o *v7; // x21
  __int64 v8; // x2
  Il2CppObject *v9; // x0
  ExUITexture_o *v10; // x20
  System_String_o *v11; // x21
  const MethodInfo *v12; // x1
  int32_t v13; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_435246E & 1) == 0 )
  {
    sub_B70694(&FSUtility_TypeInfo);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&StringLiteral_2716/*"Back/back{0}"*/);
    byte_435246E = 1;
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
  v7 = this->fields.mFolderBg;
  v13 = this->fields.mRequestedBGid;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v13, v8);
  mFolderBg = (UnityEngine_Component_o *)System_String__Format((System_String_o *)StringLiteral_2716/*"Back/back{0}"*/, v9, 0LL);
  if ( !v7 )
LABEL_15:
    sub_B7076C(mFolderBg, callback);
  ExUITexture__SetAssetImage(v7, (System_String_o *)mFolderBg, callback, 0LL);
  v10 = this->fields.mFolderBg;
  v11 = System_Int32__ToString((int)this + 560, 0LL);
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  FSUtility__SetUpBackTextureSize(v10, v11, 0LL);
LABEL_12:
  if ( this->fields.mFaded )
    QuestBoardListViewManager__RemoveTempBG(this, v12);
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
    sub_B7076C(0LL, method);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  System_Collections_Generic_List_Enumerator_T__o v11; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4352455 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_QuestBoardListViewObject___);
    sub_B70694(&Method_System_Collections_Generic_List_QuestBoardListViewObject__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_QuestBoardListViewObject___ctor__);
    sub_B70694(&System_Collections_Generic_List_QuestBoardListViewObject__TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4352455 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_QuestBoardListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_QuestBoardListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B7076C(0LL, v4);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v11,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v12 = v11;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v12,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v12.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_B7076C(v7, v8);
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_QuestBoardListViewObject___);
      if ( !v3 )
        sub_B7076C(Component_srcLineSprite, Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v3,
        Component_srcLineSprite,
        (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_QuestBoardListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v12,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_QuestBoardListViewObject__o *)v3;
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
    sub_B7076C(mFolderBg, method);
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


void __fastcall QuestBoardListViewManager__CoroutineLoadAsset_d__136___ctor(
        QuestBoardListViewManager__CoroutineLoadAsset_d__136_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall QuestBoardListViewManager__CoroutineLoadAsset_d__136__MoveNext(
        QuestBoardListViewManager__CoroutineLoadAsset_d__136_o *this,
        const MethodInfo *method)
{
  QuestBoardListViewManager__CoroutineLoadAsset_d__136_o *v2; // x19
  int32_t _1__state; // w8
  struct QuestBoardListViewManager_o *_4__this; // x20
  Il2CppObject *v5; // x22
  struct QuestBoardListViewManager___c__DisplayClass136_0_o **p__8__1; // x21
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  Il2CppObject *v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  struct QuestBoardListViewManager_o *onCompleteLoad; // x1
  EventEntity_array *EnableEntityList; // x22
  int max_length; // w8
  EventRewardSceneMaster_o *v29; // x23
  unsigned int v30; // w24
  EventEntity_o *v31; // x25
  struct QuestBoardListViewManager___c__DisplayClass136_0_o *_8__1; // x21
  AssetLoader_LoadEndDataHandler_o *v33; // x20
  struct QuestBoardListViewManager___c__DisplayClass136_0_o *v34; // x8
  bool result; // w0
  struct QuestBoardListViewManager___c__DisplayClass136_0_o *v36; // x22
  int32_t id; // w21
  System_Action_o *_9__2; // x23
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  Il2CppObject *v45; // x20
  System_Func_bool__o *v46; // x21
  UnityEngine_WaitUntil_o *v47; // x20
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  __int64 v54; // x0

  v2 = this;
  if ( (byte_4351AF5 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&AssetManager_TypeInfo);
    sub_B70694(&Method_DataManager_GetMaster_EventMaster___);
    sub_B70694(&Method_DataManager_GetMaster_EventRewardSceneMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_System_Func_bool___ctor__);
    sub_B70694(&System_Func_bool__TypeInfo);
    sub_B70694(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_B70694(&Method_QuestBoardListViewManager___c__DisplayClass136_0__CoroutineLoadAsset_b__0__);
    sub_B70694(&Method_QuestBoardListViewManager___c__DisplayClass136_0__CoroutineLoadAsset_b__1__);
    sub_B70694(&Method_QuestBoardListViewManager___c__DisplayClass136_0__CoroutineLoadAsset_b__2__);
    sub_B70694(&QuestBoardListViewManager___c__DisplayClass136_0_TypeInfo);
    sub_B70694(&UnityEngine_WaitUntil_TypeInfo);
    this = (QuestBoardListViewManager__CoroutineLoadAsset_d__136_o *)sub_B70694(&StringLiteral_13786/*"Terminal/Effect"*/);
    byte_4351AF5 = 1;
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
      v33 = (AssetLoader_LoadEndDataHandler_o *)sub_B70764(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v33,
        (Il2CppObject *)_8__1,
        Method_QuestBoardListViewManager___c__DisplayClass136_0__CoroutineLoadAsset_b__1__,
        0LL);
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      this = (QuestBoardListViewManager__CoroutineLoadAsset_d__136_o *)AssetManager__loadAssetStorage(
                                                                         (System_String_o *)StringLiteral_13786/*"Terminal/Effect"*/,
                                                                         v33,
                                                                         1,
                                                                         0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        v34 = v2->fields.__8__1;
        if ( !v34 )
          goto LABEL_39;
        ActionExtensions__Call(v34->fields.onCompleteLoad, 0LL);
      }
    }
    return 0;
  }
  if ( _1__state )
    return 0;
  v2->fields.__1__state = -1;
  v5 = (Il2CppObject *)sub_B70764(QuestBoardListViewManager___c__DisplayClass136_0_TypeInfo);
  System_Object___ctor(v5, 0LL);
  p__8__1 = &v2->fields.__8__1;
  v2->fields.__8__1 = (struct QuestBoardListViewManager___c__DisplayClass136_0_o *)v5;
  sub_B70630((BattleServantConfConponent_o *)&v2->fields.__8__1, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
  this = (QuestBoardListViewManager__CoroutineLoadAsset_d__136_o *)v2->fields.__8__1;
  if ( !this )
    goto LABEL_39;
  v19 = (Il2CppObject *)v2->fields.__4__this;
  this->fields.__2__current = v19;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.__2__current,
    (System_Int32_array **)v19,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  this = (QuestBoardListViewManager__CoroutineLoadAsset_d__136_o *)v2->fields.__8__1;
  if ( !this )
    goto LABEL_39;
  onCompleteLoad = (struct QuestBoardListViewManager_o *)v2->fields.onCompleteLoad;
  this->fields.__4__this = onCompleteLoad;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.__4__this,
    (System_Int32_array **)onCompleteLoad,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (QuestBoardListViewManager__CoroutineLoadAsset_d__136_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !this )
    goto LABEL_39;
  EnableEntityList = EventMaster__GetEnableEntityList((EventMaster_o *)this, 12, 1, 0LL);
  this = (QuestBoardListViewManager__CoroutineLoadAsset_d__136_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_EventRewardSceneMaster___);
  if ( !*p__8__1 )
    goto LABEL_39;
  (*p__8__1)->fields.flag = 1;
  if ( !EnableEntityList )
    goto LABEL_39;
  max_length = EnableEntityList->max_length;
  if ( max_length >= 1 )
  {
    v29 = (EventRewardSceneMaster_o *)this;
    v30 = 0;
    while ( 1 )
    {
      if ( v30 >= max_length )
      {
        v54 = sub_B70798(this);
        sub_B70738(v54, 0LL);
      }
      v31 = EnableEntityList->m_Items[v30];
      if ( !v31 || !v29 )
        goto LABEL_39;
      this = (QuestBoardListViewManager__CoroutineLoadAsset_d__136_o *)EventRewardSceneMaster__getEntityFromIdAndEventType(
                                                                         v29,
                                                                         v31->fields.id,
                                                                         15,
                                                                         0LL);
      if ( this )
        break;
      max_length = EnableEntityList->max_length;
      if ( (int)++v30 >= max_length )
        goto LABEL_38;
    }
    if ( *p__8__1 )
    {
      (*p__8__1)->fields.flag = 0;
      v36 = *p__8__1;
      if ( *p__8__1 )
      {
        id = v31->fields.id;
        _9__2 = v36->fields.__9__2;
        if ( !_9__2 )
        {
          _9__2 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
          System_Action___ctor(
            _9__2,
            (Il2CppObject *)v36,
            Method_QuestBoardListViewManager___c__DisplayClass136_0__CoroutineLoadAsset_b__2__,
            0LL);
          v36->fields.__9__2 = _9__2;
          sub_B70630(
            (BattleServantConfConponent_o *)&v36->fields.__9__2,
            (System_Int32_array **)_9__2,
            v39,
            v40,
            v41,
            v42,
            v43,
            v44);
        }
        if ( _4__this )
        {
          QuestBoardListViewManager__SetupFortificationWarningDialog(_4__this, id, _9__2, 0LL);
          goto LABEL_38;
        }
      }
    }
LABEL_39:
    sub_B7076C(this, method);
  }
LABEL_38:
  v45 = (Il2CppObject *)v2->fields.__8__1;
  v46 = (System_Func_bool__o *)sub_B70764(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v46,
    v45,
    Method_QuestBoardListViewManager___c__DisplayClass136_0__CoroutineLoadAsset_b__0__,
    (const MethodInfo_299432C *)Method_System_Func_bool___ctor__);
  v47 = (UnityEngine_WaitUntil_o *)sub_B70764(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v47, v46, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v47;
  sub_B70630(
    (BattleServantConfConponent_o *)&v2->fields.__2__current,
    (System_Int32_array **)v47,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  result = 1;
  v2->fields.__1__state = 1;
  return result;
}


Il2CppObject *__fastcall QuestBoardListViewManager__CoroutineLoadAsset_d__136__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        QuestBoardListViewManager__CoroutineLoadAsset_d__136_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn QuestBoardListViewManager__CoroutineLoadAsset_d__136__System_Collections_IEnumerator_Reset(
        QuestBoardListViewManager__CoroutineLoadAsset_d__136_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B70698(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B70764(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B70698(&Method_QuestBoardListViewManager__CoroutineLoadAsset_d__136_System_Collections_IEnumerator_Reset__);
  sub_B70738(v3, v4);
}


Il2CppObject *__fastcall QuestBoardListViewManager__CoroutineLoadAsset_d__136__System_Collections_IEnumerator_get_Current(
        QuestBoardListViewManager__CoroutineLoadAsset_d__136_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall QuestBoardListViewManager__CoroutineLoadAsset_d__136__System_IDisposable_Dispose(
        QuestBoardListViewManager__CoroutineLoadAsset_d__136_o *this,
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
      sub_B7076C(this, method);
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
    sub_B70630((BattleServantConfConponent_o *)&this->fields.__2__current, 0LL, v2, v3, v4, v5, v6, v7);
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

  v2 = sub_B70698(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B70764(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B70698(&Method_QuestBoardListViewManager__WaitFinish_d__95_System_Collections_IEnumerator_Reset__);
  sub_B70738(v3, v4);
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
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_4351AEB & 1) == 0 )
  {
    sub_B70694(&QuestBoardListViewManager___c_TypeInfo);
    byte_4351AEB = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(QuestBoardListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)QuestBoardListViewManager___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B70630(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
}


void __fastcall QuestBoardListViewManager___c___ctor(QuestBoardListViewManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestBoardListViewManager___c___SetupBlackMark_b__138_0(
        QuestBoardListViewManager___c_o *this,
        WarEntity_o *entity,
        const MethodInfo *method)
{
  int32_t lastQuestId; // w19

  if ( (byte_4351AEC & 1) == 0 )
  {
    this = (QuestBoardListViewManager___c_o *)sub_B70694(&CondType_TypeInfo);
    byte_4351AEC = 1;
  }
  if ( !entity )
    sub_B7076C(this, entity);
  if ( !WarEntity__IsBlackMarkWithClear(entity, 0LL) )
    return 0;
  lastQuestId = entity->fields.lastQuestId;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestClear_24296868(lastQuestId, -1, 0, 0LL);
}


bool __fastcall QuestBoardListViewManager___c___SetupWhiteMark_b__139_0(
        QuestBoardListViewManager___c_o *this,
        WarEntity_o *entity,
        const MethodInfo *method)
{
  int32_t lastQuestId; // w20

  if ( (byte_4351AED & 1) == 0 )
  {
    this = (QuestBoardListViewManager___c_o *)sub_B70694(&CondType_TypeInfo);
    byte_4351AED = 1;
  }
  if ( !entity )
    sub_B7076C(this, entity);
  if ( !WarEntity__IsWhiteMarkWithClear(entity, 0LL) )
    return WarEntity__IsDispWhiteMarkUnderBoard(entity, 0LL);
  lastQuestId = entity->fields.lastQuestId;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestClear_24296868(lastQuestId, -1, 0, 0LL) || WarEntity__IsDispWhiteMarkUnderBoard(entity, 0LL);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass104_0___ctor(
        QuestBoardListViewManager___c__DisplayClass104_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass104_0___RequestListObject_b__0(
        QuestBoardListViewManager___c__DisplayClass104_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  struct QuestBoardListViewManager_o *_4__this; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  System_Int32_array **Component_UIWidget; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  float infoTime; // s8
  SlideFadeObject_o *v21; // x21
  float OUT_POS_OFS_X; // s9
  System_Action_o *v23; // x22

  if ( (byte_4351AEE & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
    sub_B70694(&QuestBoardListViewManager_TypeInfo);
    sub_B70694(&Method_QuestBoardListViewManager___c__DisplayClass104_1__RequestListObject_b__2__);
    sub_B70694(&QuestBoardListViewManager___c__DisplayClass104_1_TypeInfo);
    byte_4351AEE = 1;
  }
  v3 = sub_B70764(QuestBoardListViewManager___c__DisplayClass104_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  if ( !v3 )
    goto LABEL_14;
  *(_QWORD *)(v3 + 24) = this;
  sub_B70630((BattleServantConfConponent_o *)(v3 + 24), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)_4__this, 0LL);
  Component_UIWidget = (System_Int32_array **)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                gameObject,
                                                (const MethodInfo_1D4BBAC *)Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
  *(_QWORD *)(v3 + 16) = Component_UIWidget;
  sub_B70630((BattleServantConfConponent_o *)(v3 + 16), Component_UIWidget, v14, v15, v16, v17, v18, v19);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  infoTime = 0.0;
  if ( !this->fields.isFadeOnTop && !_4__this->fields.mFaded )
    infoTime = _4__this->fields.infoTime;
  QuestBoardListViewManager__bgAlphaFade(_4__this, _4__this->fields.initMode, infoTime, 0LL);
  v21 = *(SlideFadeObject_o **)(v3 + 16);
  if ( (BYTE3(QuestBoardListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewManager_TypeInfo);
  }
  OUT_POS_OFS_X = QuestBoardListViewManager__get_OUT_POS_OFS_X(0LL);
  v23 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(
    v23,
    (Il2CppObject *)v3,
    Method_QuestBoardListViewManager___c__DisplayClass104_1__RequestListObject_b__2__,
    0LL);
  if ( !v21
    || (SlideFadeObject__SlideIn_23178696(v21, OUT_POS_OFS_X, infoTime, 0.0, v23, 0LL),
        (_4__this = this->fields.__4__this) == 0LL) )
  {
LABEL_14:
    sub_B7076C(_4__this, v5);
  }
  QuestBoardListViewManager__ResetAlphaAnimTime(_4__this, 0LL);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass104_0___RequestListObject_b__1(
        QuestBoardListViewManager___c__DisplayClass104_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *_4__this; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  struct QuestBoardListViewManager_o *v5; // x8
  SlideFadeObject_o *v6; // x20
  struct QuestBoardListViewManager_o *v7; // x20
  CommonUI_o *v8; // x20
  AvalonSceneManager_c *v9; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *_9__4; // x21
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Action_o *_9__5; // x21
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7

  if ( (byte_4351AEF & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&AvalonSceneManager_TypeInfo);
    sub_B70694(&Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&Method_QuestBoardListViewManager___c__DisplayClass104_0__RequestListObject_b__4__);
    sub_B70694(&Method_QuestBoardListViewManager___c__DisplayClass104_0__RequestListObject_b__5__);
    byte_4351AEF = 1;
  }
  _4__this = (UnityEngine_Component_o *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_20;
  gameObject = UnityEngine_Component__get_gameObject(_4__this, 0LL);
  _4__this = (UnityEngine_Component_o *)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                          gameObject,
                                          (const MethodInfo_1D4BBAC *)Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
  v5 = this->fields.__4__this;
  if ( !v5 )
    goto LABEL_20;
  v6 = (SlideFadeObject_o *)_4__this;
  QuestBoardListViewManager__bgAlphaFade(this->fields.__4__this, v5->fields.initMode, 0.0, 0LL);
  if ( !v6 )
    goto LABEL_20;
  SlideFadeObject__ResetPosition(v6, 0LL);
  v7 = this->fields.__4__this;
  if ( !v7 )
    goto LABEL_20;
  if ( v7->fields.mFaded )
  {
    v7->fields.mFaded = 0;
    _4__this = (UnityEngine_Component_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v8 = (CommonUI_o *)_4__this;
    v9 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v9 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v9->static_fields->DEFAULT_FADE_TIME;
    _9__4 = this->fields.__9__4;
    if ( !_9__4 )
    {
      _9__4 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
      System_Action___ctor(
        _9__4,
        (Il2CppObject *)this,
        Method_QuestBoardListViewManager___c__DisplayClass104_0__RequestListObject_b__4__,
        0LL);
      this->fields.__9__4 = _9__4;
      sub_B70630(
        (BattleServantConfConponent_o *)&this->fields.__9__4,
        (System_Int32_array **)_9__4,
        v12,
        v13,
        v14,
        v15,
        v16,
        v17);
    }
    if ( v8 )
    {
      CommonUI__maskFadein(v8, DEFAULT_FADE_TIME, _9__4, 0LL);
      goto LABEL_18;
    }
LABEL_20:
    sub_B7076C(_4__this, method);
  }
  _9__5 = this->fields.__9__5;
  if ( !_9__5 )
  {
    _9__5 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(
      _9__5,
      (Il2CppObject *)this,
      Method_QuestBoardListViewManager___c__DisplayClass104_0__RequestListObject_b__5__,
      0LL);
    this->fields.__9__5 = _9__5;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.__9__5,
      (System_Int32_array **)_9__5,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
  }
  QuestBoardListViewManager__SetMode(v7, 2, _9__5, 0, 0, 0LL);
LABEL_18:
  _4__this = (UnityEngine_Component_o *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_20;
  QuestBoardListViewManager__ResetAlphaAnimTime((QuestBoardListViewManager_o *)_4__this, 0LL);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass104_0___RequestListObject_b__10(
        QuestBoardListViewManager___c__DisplayClass104_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.end_act, 0LL);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass104_0___RequestListObject_b__3(
        QuestBoardListViewManager___c__DisplayClass104_0_o *this,
        const MethodInfo *method)
{
  QuestBoardListViewManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B7076C(0LL, method);
  QuestBoardListViewManager__EndSlideIn(_4__this, this->fields.end_act, this->fields.isNotInit, 0LL);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass104_0___RequestListObject_b__4(
        QuestBoardListViewManager___c__DisplayClass104_0_o *this,
        const MethodInfo *method)
{
  QuestBoardListViewManager___c__DisplayClass104_0_o *v2; // x19
  System_Action_o *_9__6; // x21
  QuestBoardListViewManager_o *_4__this; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  v2 = this;
  if ( (byte_4351AF0 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    this = (QuestBoardListViewManager___c__DisplayClass104_0_o *)sub_B70694(&Method_QuestBoardListViewManager___c__DisplayClass104_0__RequestListObject_b__6__);
    byte_4351AF0 = 1;
  }
  _9__6 = v2->fields.__9__6;
  _4__this = v2->fields.__4__this;
  if ( !_9__6 )
  {
    _9__6 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(
      _9__6,
      (Il2CppObject *)v2,
      Method_QuestBoardListViewManager___c__DisplayClass104_0__RequestListObject_b__6__,
      0LL);
    v2->fields.__9__6 = _9__6;
    sub_B70630(
      (BattleServantConfConponent_o *)&v2->fields.__9__6,
      (System_Int32_array **)_9__6,
      v5,
      v6,
      v7,
      v8,
      v9,
      v10);
  }
  if ( !_4__this )
    sub_B7076C(this, method);
  QuestBoardListViewManager__SetMode(_4__this, 2, _9__6, 0, 0, 0LL);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass104_0___RequestListObject_b__5(
        QuestBoardListViewManager___c__DisplayClass104_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.end_act, 0LL);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass104_0___RequestListObject_b__6(
        QuestBoardListViewManager___c__DisplayClass104_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.end_act, 0LL);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass104_0___RequestListObject_b__8(
        QuestBoardListViewManager___c__DisplayClass104_0_o *this,
        const MethodInfo *method)
{
  QuestBoardListViewManager___c__DisplayClass104_0_o *v2; // x19
  System_Action_o *_9__10; // x21
  QuestBoardListViewManager_o *_4__this; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  v2 = this;
  if ( (byte_4351AF1 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    this = (QuestBoardListViewManager___c__DisplayClass104_0_o *)sub_B70694(&Method_QuestBoardListViewManager___c__DisplayClass104_0__RequestListObject_b__10__);
    byte_4351AF1 = 1;
  }
  _9__10 = v2->fields.__9__10;
  _4__this = v2->fields.__4__this;
  if ( !_9__10 )
  {
    _9__10 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(
      _9__10,
      (Il2CppObject *)v2,
      Method_QuestBoardListViewManager___c__DisplayClass104_0__RequestListObject_b__10__,
      0LL);
    v2->fields.__9__10 = _9__10;
    sub_B70630(
      (BattleServantConfConponent_o *)&v2->fields.__9__10,
      (System_Int32_array **)_9__10,
      v5,
      v6,
      v7,
      v8,
      v9,
      v10);
  }
  if ( !_4__this )
    sub_B7076C(this, method);
  QuestBoardListViewManager__SetMode(_4__this, 2, _9__10, 0, 0, 0LL);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass104_0___RequestListObject_b__9(
        QuestBoardListViewManager___c__DisplayClass104_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.end_act, 0LL);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass104_1___ctor(
        QuestBoardListViewManager___c__DisplayClass104_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass104_1___RequestListObject_b__2(
        QuestBoardListViewManager___c__DisplayClass104_1_o *this,
        const MethodInfo *method)
{
  SlideFadeObject_o *sfo; // x0
  struct QuestBoardListViewManager___c__DisplayClass104_0_o *CS___8__locals1; // x8
  CommonUI_o *v5; // x20
  AvalonSceneManager_c *v6; // x8
  struct QuestBoardListViewManager___c__DisplayClass104_0_o *v7; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *_9__3; // x21
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_4351AF2 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&AvalonSceneManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&Method_QuestBoardListViewManager___c__DisplayClass104_0__RequestListObject_b__3__);
    byte_4351AF2 = 1;
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
    sfo = (SlideFadeObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v5 = (CommonUI_o *)sfo;
    v6 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v6 = AvalonSceneManager_TypeInfo;
    }
    v7 = this->fields.CS___8__locals1;
    if ( v7 )
    {
      DEFAULT_FADE_TIME = v6->static_fields->DEFAULT_FADE_TIME;
      _9__3 = v7->fields.__9__3;
      if ( !_9__3 )
      {
        _9__3 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
        System_Action___ctor(
          _9__3,
          (Il2CppObject *)v7,
          Method_QuestBoardListViewManager___c__DisplayClass104_0__RequestListObject_b__3__,
          0LL);
        v7->fields.__9__3 = _9__3;
        sub_B70630(
          (BattleServantConfConponent_o *)&v7->fields.__9__3,
          (System_Int32_array **)_9__3,
          v10,
          v11,
          v12,
          v13,
          v14,
          v15);
      }
      if ( v5 )
      {
        CommonUI__maskFadein(v5, DEFAULT_FADE_TIME, _9__3, 0LL);
        return;
      }
    }
LABEL_16:
    sub_B7076C(sfo, method);
  }
  QuestBoardListViewManager__EndSlideIn(
    (QuestBoardListViewManager_o *)sfo,
    CS___8__locals1->fields.end_act,
    CS___8__locals1->fields.isNotInit,
    0LL);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass104_2___ctor(
        QuestBoardListViewManager___c__DisplayClass104_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass104_2___RequestListObject_b__7(
        QuestBoardListViewManager___c__DisplayClass104_2_o *this,
        const MethodInfo *method)
{
  struct QuestBoardListViewManager___c__DisplayClass104_0_o *CS___8__locals2; // x9

  CS___8__locals2 = this->fields.CS___8__locals2;
  if ( !CS___8__locals2 || !CS___8__locals2->fields.__4__this )
    sub_B7076C(this, method);
  QuestBoardListViewManager__SetSlideOut(
    CS___8__locals2->fields.__4__this,
    this->fields.time,
    CS___8__locals2->fields.end_act,
    0LL);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass105_0___ctor(
        QuestBoardListViewManager___c__DisplayClass105_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass105_0___SetSlideOut_b__0(
        QuestBoardListViewManager___c__DisplayClass105_0_o *this,
        const MethodInfo *method)
{
  QuestBoardListViewManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B7076C(0LL, method);
  QuestBoardListViewManager__EndSlideOut(_4__this, this->fields.end_act, 0LL);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass107_0___ctor(
        QuestBoardListViewManager___c__DisplayClass107_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass107_0___EndSlideOut_b__0(
        QuestBoardListViewManager___c__DisplayClass107_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.end_act, 0LL);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass113_0___ctor(
        QuestBoardListViewManager___c__DisplayClass113_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass113_0___OnClickListView_b__0(
        QuestBoardListViewManager___c__DisplayClass113_0_o *this,
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
        this = (QuestBoardListViewManager___c__DisplayClass113_0_o *)ListViewObject__get_Index(this->fields.obj, 0LL),
        !mTerminalList) )
  {
    sub_B7076C(this, method);
  }
  ScrTerminalListTop__Click_Area(mTerminalList, areaBoardInfo, (int32_t)this, 0, 0, 0LL);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass117_0___ctor(
        QuestBoardListViewManager___c__DisplayClass117_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass117_0___RequestToRaiseTutorialFlag_b__0(
        QuestBoardListViewManager___c__DisplayClass117_0_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  System_Action_o *clickAreaFunc; // x0

  clickAreaFunc = this->fields.clickAreaFunc;
  if ( !clickAreaFunc )
    sub_B7076C(0LL, result);
  System_Action__Invoke(clickAreaFunc, 0LL);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass136_0___ctor(
        QuestBoardListViewManager___c__DisplayClass136_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestBoardListViewManager___c__DisplayClass136_0___CoroutineLoadAsset_b__0(
        QuestBoardListViewManager___c__DisplayClass136_0_o *this,
        const MethodInfo *method)
{
  return this->fields.flag;
}


void __fastcall QuestBoardListViewManager___c__DisplayClass136_0___CoroutineLoadAsset_b__1(
        QuestBoardListViewManager___c__DisplayClass136_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  QuestBoardListViewManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B7076C(0LL, data);
  QuestBoardListViewManager__OnCompleteAssetData(_4__this, data, this->fields.onCompleteLoad, 0LL);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass136_0___CoroutineLoadAsset_b__2(
        QuestBoardListViewManager___c__DisplayClass136_0_o *this,
        const MethodInfo *method)
{
  this->fields.flag = 1;
}


void __fastcall QuestBoardListViewManager___c__DisplayClass140_0___ctor(
        QuestBoardListViewManager___c__DisplayClass140_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass140_0___SetupFortificationWarningDialog_b__0(
        QuestBoardListViewManager___c__DisplayClass140_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  QuestBoardListViewManager___c__DisplayClass140_0_o *v4; // x19
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  struct QuestBoardListViewManager_o *_4__this; // x8
  UILabel_o *v12; // x21
  struct QuestBoardListViewManager_o *v13; // x20
  UnityEngine_Transform_o *transform; // x22
  System_Int32_array **v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  struct QuestBoardListViewManager_o *v22; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct QuestBoardListViewManager_o *v24; // x8
  UnityEngine_GameObject_o *v25; // x0
  struct QuestBoardListViewManager_o *v26; // x8

  v4 = this;
  if ( (byte_4351AF3 & 1) == 0 )
  {
    sub_B70694(&Method_AssetData_GetObject_GameObject____69232720);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_FortificationWarningDialogComponent___);
    sub_B70694(&Method_UnityEngine_Object_Instantiate_GameObject____69308712);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    this = (QuestBoardListViewManager___c__DisplayClass140_0_o *)sub_B70694(&StringLiteral_6862/*"FortificationWarningDialog"*/);
    byte_4351AF3 = 1;
  }
  if ( !assetData )
    goto LABEL_18;
  this = (QuestBoardListViewManager___c__DisplayClass140_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                 assetData,
                                                                 (System_String_o *)StringLiteral_6862/*"FortificationWarningDialog"*/,
                                                                 (const MethodInfo_1BD6720 *)Method_AssetData_GetObject_GameObject____69232720);
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_18;
  v12 = (UILabel_o *)this;
  _4__this->fields.fortificationAssetData = assetData;
  sub_B70630(
    (BattleServantConfConponent_o *)&_4__this->fields.fortificationAssetData,
    (System_Int32_array **)assetData,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  v13 = v4->fields.__4__this;
  if ( !v13 )
    goto LABEL_18;
  this = (QuestBoardListViewManager___c__DisplayClass140_0_o *)UnityEngine_Component__get_gameObject(
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
  v15 = (System_Int32_array **)UnityEngine_Object__Instantiate_UILabel_(
                                 v12,
                                 transform,
                                 (const MethodInfo_1D588A0 *)Method_UnityEngine_Object_Instantiate_GameObject____69308712);
  v13->fields.fortificationWarningDialog = (struct UnityEngine_GameObject_o *)v15;
  sub_B70630((BattleServantConfConponent_o *)&v13->fields.fortificationWarningDialog, v15, v16, v17, v18, v19, v20, v21);
  v22 = v4->fields.__4__this;
  if ( !v22 )
    goto LABEL_18;
  this = (QuestBoardListViewManager___c__DisplayClass140_0_o *)v22->fields.fortificationWarningDialog;
  if ( !this )
    goto LABEL_18;
  gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)this, 0LL);
  GameObjectExtensions__ResetPosition(gameObject, 0LL);
  v24 = v4->fields.__4__this;
  if ( !v24
    || (this = (QuestBoardListViewManager___c__DisplayClass140_0_o *)v24->fields.fortificationWarningDialog) == 0LL
    || (v25 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)this, 0LL),
        GameObjectExtensions__ResetLocalScale(v25, 0LL),
        (v26 = v4->fields.__4__this) == 0LL)
    || (this = (QuestBoardListViewManager___c__DisplayClass140_0_o *)v26->fields.fortificationWarningDialog) == 0LL
    || (this = (QuestBoardListViewManager___c__DisplayClass140_0_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                       (UnityEngine_GameObject_o *)this,
                                                                       (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_FortificationWarningDialogComponent___)) == 0LL )
  {
LABEL_18:
    sub_B7076C(this, assetData);
  }
  FortificationWarningDialogComponent__Init((FortificationWarningDialogComponent_o *)this, 0LL);
  ActionExtensions__Call(v4->fields.func, 0LL);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass157_0___ctor(
        QuestBoardListViewManager___c__DisplayClass157_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass157_0___PlayBoardEffect_b__0(
        QuestBoardListViewManager___c__DisplayClass157_0_o *this,
        const MethodInfo *method)
{
  System_Action_o *playingCallback1; // x0

  playingCallback1 = this->fields.playingCallback1;
  if ( playingCallback1 )
    ActionExtensions__Call(playingCallback1, 0LL);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass157_0___PlayBoardEffect_b__1(
        QuestBoardListViewManager___c__DisplayClass157_0_o *this,
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

  if ( (byte_4351AF4 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4351AF4 = 1;
  }
  effectComponent = (UnityEngine_Component_o *)this->fields.effectComponent;
  if ( !effectComponent )
    sub_B7076C(0LL, method);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(effectComponent, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_36067208(gameObject, 0LL);
  this->fields.effectComponent = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.effectComponent, 0LL, v5, v6, v7, v8, v9, v10);
  endAct = this->fields.endAct;
  if ( endAct )
    ActionExtensions__Call(endAct, 0LL);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass159_0___ctor(
        QuestBoardListViewManager___c__DisplayClass159_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass159_0___MoveBoard_b__0(
        QuestBoardListViewManager___c__DisplayClass159_0_o *this,
        const MethodInfo *method)
{
  struct MoveObject_o *mo; // x8

  mo = this->fields.mo;
  if ( !mo )
    sub_B7076C(this, method);
  GameObjectExtensions__SetLocalPositionY(this->fields.tgtObj, mo->fields.mNow.fields.z, 0LL);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass159_0___MoveBoard_b__1(
        QuestBoardListViewManager___c__DisplayClass159_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  struct QuestBoardListViewManager_o *_4__this; // x8

  GameObjectExtensions__SetLocalPositionY(this->fields.tgtObj, this->fields.tgtY, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B7076C(v3, v4);
  --_4__this->fields.waitCount;
}