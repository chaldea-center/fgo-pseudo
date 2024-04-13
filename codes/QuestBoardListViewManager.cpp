void __fastcall QuestBoardListViewManager___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  QuestBoardListViewManager_c *v4; // x8

  if ( (byte_42E8A75 & 1) == 0 )
  {
    sub_B5D5C4(&QuestBoardListViewManager_TypeInfo, v1, v2, v3);
    byte_42E8A75 = 1;
  }
  QuestBoardListViewManager_TypeInfo->static_fields->INTO_TIME = 0.5;
  QuestBoardListViewManager_TypeInfo->static_fields->EXIT_TIME = 0.25;
  v4 = QuestBoardListViewManager_TypeInfo;
  QuestBoardListViewManager_TypeInfo->static_fields->MAP_INTO_TIME = 0.15;
  v4->static_fields->MAP_EXIT_TIME = 0.05;
  v4->static_fields->ALPHA_ANIM_SPD_RATE = 0.5;
  v4->static_fields->ALPHA_ANIM_TIME_INTERVAL = 3.0;
  v4->static_fields->DEFAULT_SCROLL_VIEW_DEPTH = 22;
  v4->static_fields->REWARD_ICON_FADE_FRAME_NUM = 7;
  v4->static_fields->ALPHA_ANIM_COUNT_RESET_VAL = 232792560;
}


void __fastcall QuestBoardListViewManager___ctor(QuestBoardListViewManager_o *this, const MethodInfo *method)
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x20
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_42E8A74 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Collections_Generic_List_ListViewItem__TypeInfo, v5, v6, v7);
    byte_42E8A74 = 1;
  }
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  this->fields.topItemList = (struct System_Collections_Generic_List_ListViewItem__o *)v8;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.topItemList,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  this->fields.bottomItemList = (struct System_Collections_Generic_List_ListViewItem__o *)v15;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.bottomItemList,
    (System_Int32_array **)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall QuestBoardListViewManager__Awake(QuestBoardListViewManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v9; // x1
  struct UnityEngine_BoxCollider_o *Component_srcLineSprite; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  UnityEngine_GameObject_o *v17; // x0
  struct UnityEngine_GameObject_o *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7

  if ( (byte_42E8A3E & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v5, v6, v7);
    byte_42E8A3E = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_11;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                             gameObject,
                                             (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !gameObject )
    goto LABEL_11;
  this->fields.mBaseClipRange = (float)*((int *)&gameObject[6].fields + 1);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_11;
  Component_srcLineSprite = (struct UnityEngine_BoxCollider_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                  gameObject,
                                                                  (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  this->fields.mBoxCollider = Component_srcLineSprite;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.mBoxCollider,
    (System_Int32_array **)Component_srcLineSprite,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  gameObject = (UnityEngine_GameObject_o *)this->fields.mBoxCollider;
  if ( !gameObject )
    goto LABEL_11;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.mNoneLabel;
  if ( !gameObject
    || (v17 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(v17, 0LL)) == 0LL)
    || (v18 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL),
        this->fields.mNoneLabelParent = v18,
        sub_B5D560(
          (BattleServantConfConponent_o *)&this->fields.mNoneLabelParent,
          (System_Int32_array **)v18,
          v19,
          v20,
          v21,
          v22,
          v23,
          v24),
        (gameObject = this->fields.mNoneLabelParent) == 0LL) )
  {
LABEL_11:
    sub_B5D69C(gameObject, v9);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  UnityEngine_Component_o *mFolderBg; // x0
  const MethodInfo *v31; // x2
  UnityEngine_GameObject_o *gameObject; // x21
  UnityEngine_GameObject_o *v33; // x21
  UnityEngine_Component_o *parent; // x0
  struct ExUITexture_o *Component_srcLineSprite; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  struct ExUITexture_o *v42; // x21
  Il2CppObject *v43; // x0
  System_String_o *v44; // x20
  System_Action_o *v45; // x0
  __int64 *v46; // x8
  float v47; // s0
  Il2CppObject *v48; // x0
  System_Action_o *v49; // x22
  ExUITexture_o *v50; // x0
  System_String_o *v51; // x1
  System_Action_o *v52; // x2
  UnityEngine_Component_o *v53; // x19
  Il2CppObject *v54; // x0
  int32_t v55; // [xsp+Ch] [xbp-34h] BYREF
  int32_t v56; // [xsp+18h] [xbp-28h] BYREF
  int32_t v57; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_42E8A5A & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, bgID, effectType, method);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_ExUITexture___, v9, v10, v11);
    sub_B5D5C4(&int_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v15, v16, v17);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_QuestBoardListViewManager__BGChangeEffect_b__132_0__, v21, v22, v23);
    sub_B5D5C4(&Method_QuestBoardListViewManager__BGChangeEffect_b__132_1__, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_2708/*"Back/back{0}"*/, v27, v28, v29);
    byte_42E8A5A = 1;
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
        QuestBoardListViewManager__bgAlphaFade(this, 4, time, v31);
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
                                                 (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( this->fields.mFolderBg )
        {
          v33 = (UnityEngine_GameObject_o *)mFolderBg;
          mFolderBg = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)this->fields.mFolderBg,
                                                   0LL);
          if ( mFolderBg )
          {
            parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(
                                                  (UnityEngine_Transform_o *)mFolderBg,
                                                  0LL);
            GameObjectExtensions__SafeSetParent(v33, parent, 0LL);
            if ( v33 )
            {
              Component_srcLineSprite = (struct ExUITexture_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                  v33,
                                                                  (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ExUITexture___);
              this->fields.mFolderBgTemp = Component_srcLineSprite;
              sub_B5D560(
                (BattleServantConfConponent_o *)&this->fields.mFolderBgTemp,
                (System_Int32_array **)Component_srcLineSprite,
                v36,
                v37,
                v38,
                v39,
                v40,
                v41);
              mFolderBg = (UnityEngine_Component_o *)this->fields.mFolderBgTemp;
              if ( mFolderBg )
              {
                UIWidget__set_depth((UIWidget_o *)mFolderBg, LODWORD(mFolderBg[7].klass) + 1, 0LL);
                this->fields.mCrossFadeTime = time;
                v42 = this->fields.mFolderBg;
                v55 = bgID;
                v43 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v55);
                v44 = System_String__Format((System_String_o *)StringLiteral_2708/*"Back/back{0}"*/, v43, 0LL);
                v45 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
                v46 = &Method_QuestBoardListViewManager__BGChangeEffect_b__132_1__;
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
        v56 = bgID;
        v54 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v56);
        mFolderBg = (UnityEngine_Component_o *)System_String__Format((System_String_o *)StringLiteral_2708/*"Back/back{0}"*/, v54, 0LL);
        if ( v53 )
        {
          v51 = (System_String_o *)mFolderBg;
          v50 = (ExUITexture_o *)v53;
          v52 = 0LL;
          goto LABEL_23;
        }
      }
      else if ( v53 )
      {
        mFolderBg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(v53, 0LL);
        if ( mFolderBg )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mFolderBg, 0, 0LL);
          return;
        }
      }
    }
LABEL_32:
    sub_B5D69C(mFolderBg, *(_QWORD *)&bgID);
  }
  if ( !bgID )
    return;
  v47 = 0.0;
  if ( effectType )
    v47 = time;
  this->fields.mCrossFadeTime = v47;
  v42 = this->fields.mFolderBg;
  v57 = bgID;
  v48 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v57);
  v44 = System_String__Format((System_String_o *)StringLiteral_2708/*"Back/back{0}"*/, v48, 0LL);
  v45 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  v46 = &Method_QuestBoardListViewManager__BGChangeEffect_b__132_0__;
LABEL_21:
  v49 = v45;
  System_Action___ctor(v45, (Il2CppObject *)this, *v46, 0LL);
  if ( !v42 )
    goto LABEL_32;
  v50 = v42;
  v51 = v44;
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

  if ( (byte_42E8A5D & 1) == 0 )
  {
    sub_B5D5C4(
      &QuestBoardListViewManager__CoroutineLoadAsset_d__136_TypeInfo,
      (_DWORD)onCompleteLoad,
      (_DWORD)method,
      v3);
    byte_42E8A5D = 1;
  }
  v6 = sub_B5D694(QuestBoardListViewManager__CoroutineLoadAsset_d__136_TypeInfo);
  QuestBoardListViewManager__CoroutineLoadAsset_d__136___ctor(
    (QuestBoardListViewManager__CoroutineLoadAsset_d__136_o *)v6,
    0,
    0LL);
  if ( !v6 )
    sub_B5D69C(v7, v8);
  *(_QWORD *)(v6 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14);
  *(_QWORD *)(v6 + 40) = onCompleteLoad;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v6 + 40),
    (System_Int32_array **)onCompleteLoad,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  return (System_Collections_IEnumerator_o *)v6;
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
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  void *gameObject; // x0
  __int64 v60; // x1
  UIWidget_o *Component_srcLineSprite; // x24
  UnityEngine_BoxCollider_o *v62; // x25
  QuestBoardListViewItemDraw_c *v63; // x8
  int32_t SCRL_OBJ_DUMMY_NUM; // w19
  struct ListViewItemSeed_o *seed; // x8
  float v66; // s10
  float mBaseClipRange; // s11
  UIPanel_o *v68; // x26
  float v69; // s9
  double v70; // d0
  int v71; // w2
  __int64 v72; // x3
  __int64 v73; // x8
  __int64 v74; // x8
  bool activeSelf; // w0
  QuestBoardListViewManager_c *v76; // x8
  float *p_MAP_EXIT_TIME; // x8
  float v78; // w8
  UILabel_o *mNoneLabel; // x24
  QuestBoardListViewItemDraw_c *v80; // x0
  int32_t size; // w19
  int v82; // w8
  unsigned __int64 v83; // x21
  signed __int64 v84; // x19
  MapControl_QuestInfo_o *v85; // x24
  QuestBoardListViewItem_o *v86; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v87; // x25
  int32_t v88; // w2
  UnityEngine_GameObject_o *blackMarkPrefab; // x26
  UnityEngine_GameObject_o *whiteMarkPrefab; // x27
  int32_t v91; // w19
  int v92; // w8
  signed __int64 v93; // x22
  signed __int64 v94; // x27
  ScrTerminalListTop_WarSelectedQuestInfo_o *v95; // x24
  struct WarQuestSelectionEntity_o *warQuestSelectionEnt; // x8
  int32_t warId; // w23
  const MethodInfo *v98; // x2
  MapControl_QuestInfo_o *questInfo; // x25
  struct WarQuestSelectionEntity_o *v100; // x8
  int32_t shortCutBannerId; // w26
  QuestBoardListViewItem_o *v102; // x0
  QuestBoardListViewItem_o *v103; // x24
  int32_t v104; // w2
  UnityEngine_GameObject_o *v105; // x23
  UnityEngine_GameObject_o *v106; // x25
  struct MapControl_QuestInfo_o *v107; // x8
  struct WarQuestSelectionEntity_o *v108; // x8
  struct WarQuestSelectionEntity_o *v109; // x8
  bool v110; // [xsp+8h] [xbp-78h]
  UnityEngine_Vector3_o v112; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector4_o v113; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42E8A41 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, info_kind, (_DWORD)qinf_list, isAllDisp);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UIPanel___, v14, v15, v16);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v20, v21, v22);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ScrTerminalListTop_WarSelectedQuestInfo__get_Count__,
      v23,
      v24,
      v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MapControl_QuestInfo__get_Count__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MapControl_QuestInfo__get_Item__, v29, v30, v31);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ScrTerminalListTop_WarSelectedQuestInfo__get_Item__,
      v32,
      v33,
      v34);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v35, v36, v37);
    sub_B5D5C4(&NetworkManager_TypeInfo, v38, v39, v40);
    sub_B5D5C4(&QuestBoardListViewItemDraw_TypeInfo, v41, v42, v43);
    sub_B5D5C4(&QuestBoardListViewItem_TypeInfo, v44, v45, v46);
    sub_B5D5C4(&QuestBoardListViewManager_TypeInfo, v47, v48, v49);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v50, v51, v52);
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v53, v54, v55);
    sub_B5D5C4(&StringLiteral_11092/*"QUEST_NONE"*/, v56, v57, v58);
    byte_42E8A41 = 1;
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
                                            (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_116;
  v62 = (UnityEngine_BoxCollider_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                       (UnityEngine_GameObject_o *)gameObject,
                                       (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  v63 = QuestBoardListViewItemDraw_TypeInfo;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v63 = QuestBoardListViewItemDraw_TypeInfo;
  }
  gameObject = this->fields.scrollView;
  if ( !gameObject )
    goto LABEL_116;
  SCRL_OBJ_DUMMY_NUM = v63->static_fields->SCRL_OBJ_DUMMY_NUM;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_116;
  gameObject = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                 (UnityEngine_GameObject_o *)gameObject,
                 (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
  if ( !gameObject )
    goto LABEL_116;
  seed = this->fields.seed;
  if ( !seed )
    goto LABEL_116;
  v66 = *((float *)gameObject + 72);
  mBaseClipRange = this->fields.mBaseClipRange;
  v68 = (UIPanel_o *)gameObject;
  seed->fields.arrangementPich.fields.y = -pos_itvl_y;
  if ( !Component_srcLineSprite )
    goto LABEL_116;
  v69 = (float)(SCRL_OBJ_DUMMY_NUM + 1) * pos_itvl_y;
  v70 = v69;
  if ( v69 == INFINITY )
    v70 = -v69;
  UIWidget__set_height(Component_srcLineSprite, (int)v70, 0LL);
  if ( !v62 )
    goto LABEL_116;
  LODWORD(v112.fields.x) = (unsigned int)UnityEngine_BoxCollider__get_size(v62, 0LL);
  v112.fields.z = 0.0;
  v112.fields.y = v69;
  UnityEngine_BoxCollider__set_size(v62, v112, 0LL);
  v113.fields.y = (float)(mBaseClipRange - v69) * 0.5;
  v113.fields.z = clip_w;
  v113.fields.w = v69;
  this->fields.clipRange.fields.y = v69 + (float)QuestBoardListViewItemDraw_TypeInfo->static_fields->CLIP_RANGE_MARGIN;
  v113.fields.x = v66;
  UIPanel__set_baseClipRegion(v68, v113, 0LL);
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
  if ( !byte_42E4B1E )
  {
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v60, v71, v72);
    byte_42E4B1E = 1;
  }
  gameObject = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    gameObject = TerminalSceneComponent_TypeInfo;
  }
  v73 = **((_QWORD **)gameObject + 23);
  if ( !v73 )
    goto LABEL_116;
  v74 = *(_QWORD *)(v73 + 256);
  if ( !v74 )
    goto LABEL_116;
  gameObject = *(void **)(v74 + 96);
  if ( !gameObject )
    goto LABEL_116;
  activeSelf = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)gameObject, 0LL);
  v76 = QuestBoardListViewManager_TypeInfo;
  if ( activeSelf )
  {
    if ( (WORD1(QuestBoardListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !QuestBoardListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewManager_TypeInfo);
      v76 = QuestBoardListViewManager_TypeInfo;
    }
    this->fields.infoTime = v76->static_fields->MAP_INTO_TIME;
    p_MAP_EXIT_TIME = &v76->static_fields->MAP_EXIT_TIME;
  }
  else
  {
    if ( (WORD1(QuestBoardListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !QuestBoardListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewManager_TypeInfo);
      v76 = QuestBoardListViewManager_TypeInfo;
    }
    this->fields.infoTime = v76->static_fields->INTO_TIME;
    p_MAP_EXIT_TIME = &v76->static_fields->EXIT_TIME;
  }
  v78 = *p_MAP_EXIT_TIME;
  this->fields.mAlphaAnimCnt = 0;
  this->fields.exitTime = v78;
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
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_11092/*"QUEST_NONE"*/, 0LL);
  if ( !mNoneLabel )
LABEL_116:
    sub_B5D69C(gameObject, v60);
  UILabel__set_text(mNoneLabel, (System_String_o *)gameObject, 0LL);
  v80 = QuestBoardListViewItemDraw_TypeInfo;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v80 = QuestBoardListViewItemDraw_TypeInfo;
  }
  if ( info_kind != 6 )
  {
    size = qinf_list->fields._size;
    v110 = isAllDisp;
    if ( (BYTE3(v80->vtable._0_Equals.methodPtr) & 4) != 0 && !v80->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v80);
      v80 = QuestBoardListViewItemDraw_TypeInfo;
    }
    v82 = v80->static_fields->SCRL_OBJ_DUMMY_NUM + size;
    if ( v82 < 1 )
    {
LABEL_114:
      ListViewManager__SortItem((ListViewManager_o *)this, -1, v110, -1, 0LL);
      return;
    }
    v83 = 0LL;
    v84 = v82;
    while ( (__int64)v83 < qinf_list->fields._size )
    {
      if ( v83 >= (unsigned int)qinf_list->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v85 = qinf_list->fields._items->m_Items[v83];
      if ( info_kind != 2 || !v85 )
        goto LABEL_76;
      gameObject = v85->fields._WarInfo_k__BackingField;
      if ( !gameObject )
        goto LABEL_116;
      gameObject = MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_116;
      if ( WarEntity__HasFlag((WarEntity_o *)gameObject, 16, 0LL) )
      {
        v86 = (QuestBoardListViewItem_o *)sub_B5D694(QuestBoardListViewItem_TypeInfo);
        v87 = (EventMissionProgressRequest_Argument_ProgressData_o *)v86;
        v88 = 4;
      }
      else
      {
LABEL_76:
        if ( !v85 || !MapControl_QuestInfo__GetMine(v85, 0LL) )
          goto LABEL_79;
        gameObject = MapControl_QuestInfo__GetMine(v85, 0LL);
        if ( !gameObject )
          goto LABEL_116;
        if ( (*((_DWORD *)gameObject + 10) & 0x1F) != 7 )
          goto LABEL_79;
        v86 = (QuestBoardListViewItem_o *)sub_B5D694(QuestBoardListViewItem_TypeInfo);
        v87 = (EventMissionProgressRequest_Argument_ProgressData_o *)v86;
        v88 = 5;
      }
      QuestBoardListViewItem___ctor_27888028(v86, v83, v88, v85, 0LL, 0LL, 0, 0, 0LL);
LABEL_80:
      gameObject = this->fields.itemList;
      if ( !gameObject )
        goto LABEL_116;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)gameObject,
        v87,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      if ( (__int64)++v83 >= v84 )
        goto LABEL_114;
    }
    v85 = 0LL;
LABEL_79:
    blackMarkPrefab = this->fields.blackMarkPrefab;
    whiteMarkPrefab = this->fields.whiteMarkPrefab;
    v87 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_B5D694(QuestBoardListViewItem_TypeInfo);
    QuestBoardListViewItem___ctor_27888028(
      (QuestBoardListViewItem_o *)v87,
      v83,
      info_kind,
      v85,
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
    v60 = warSelectedQuestList->fields._size < 1;
    if ( !gameObject )
      goto LABEL_116;
  }
  else
  {
    v60 = 1LL;
    if ( !gameObject )
      goto LABEL_116;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v60, 0LL);
  if ( warSelectedQuestList )
  {
    gameObject = QuestBoardListViewItemDraw_TypeInfo;
    v91 = warSelectedQuestList->fields._size;
    v110 = isAllDisp;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      gameObject = QuestBoardListViewItemDraw_TypeInfo;
    }
    v92 = *(_DWORD *)(*((_QWORD *)gameObject + 23) + 24LL) + v91;
    if ( v92 >= 1 )
    {
      v93 = 0LL;
      v94 = v92;
      do
      {
        if ( v93 >= warSelectedQuestList->fields._size )
          goto LABEL_100;
        if ( v93 >= (unsigned __int64)(unsigned int)warSelectedQuestList->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v95 = warSelectedQuestList->fields._items->m_Items[v93];
        if ( v95 )
        {
          warQuestSelectionEnt = v95->fields.warQuestSelectionEnt;
          if ( !warQuestSelectionEnt )
            goto LABEL_116;
          gameObject = v95->fields.questInfo;
          if ( !gameObject )
            goto LABEL_116;
          warId = warQuestSelectionEnt->fields.warId;
          gameObject = MapControl_QuestInfo__GetMine((MapControl_QuestInfo_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_116;
          gameObject = (void *)QuestEntity__HasFlag((QuestEntity_o *)gameObject, 0x800000000000000LL, v98);
          questInfo = v95->fields.questInfo;
          if ( ((unsigned __int8)gameObject & 1) != 0 )
          {
            v100 = v95->fields.warQuestSelectionEnt;
            if ( !v100 )
              goto LABEL_116;
            shortCutBannerId = v100->fields.shortCutBannerId;
            v102 = (QuestBoardListViewItem_o *)sub_B5D694(QuestBoardListViewItem_TypeInfo);
            v103 = v102;
            v104 = 6;
          }
          else
          {
            if ( !questInfo )
              goto LABEL_116;
            gameObject = (void *)MapControl_QuestInfo__GetQuestType(v95->fields.questInfo, 0LL);
            if ( (_DWORD)gameObject != 3 )
              goto LABEL_107;
            v107 = v95->fields.questInfo;
            if ( !v107 )
              goto LABEL_116;
            gameObject = v107->fields._WarInfo_k__BackingField;
            if ( !gameObject )
              goto LABEL_116;
            gameObject = MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)gameObject, 0LL);
            if ( !gameObject )
              goto LABEL_116;
            gameObject = (void *)WarEntity__HasFlag((WarEntity_o *)gameObject, 16, 0LL);
            if ( ((unsigned __int8)gameObject & 1) == 0 )
            {
              v109 = v95->fields.warQuestSelectionEnt;
              if ( !v109 )
                goto LABEL_116;
              questInfo = v95->fields.questInfo;
              shortCutBannerId = v109->fields.shortCutBannerId;
              v102 = (QuestBoardListViewItem_o *)sub_B5D694(QuestBoardListViewItem_TypeInfo);
              v103 = v102;
              v104 = 2;
            }
            else
            {
LABEL_107:
              v108 = v95->fields.warQuestSelectionEnt;
              if ( !v108 )
                goto LABEL_116;
              questInfo = v95->fields.questInfo;
              shortCutBannerId = v108->fields.shortCutBannerId;
              v102 = (QuestBoardListViewItem_o *)sub_B5D694(QuestBoardListViewItem_TypeInfo);
              v103 = v102;
              v104 = 4;
            }
          }
          QuestBoardListViewItem___ctor_27888028(v102, v93, v104, questInfo, 0LL, 0LL, shortCutBannerId, warId, 0LL);
        }
        else
        {
LABEL_100:
          v105 = this->fields.blackMarkPrefab;
          v106 = this->fields.whiteMarkPrefab;
          v103 = (QuestBoardListViewItem_o *)sub_B5D694(QuestBoardListViewItem_TypeInfo);
          QuestBoardListViewItem___ctor_27888028(v103, v93, 6, 0LL, v105, v106, 0, 0, 0LL);
        }
        gameObject = this->fields.itemList;
        if ( !gameObject )
          goto LABEL_116;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)gameObject,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v103,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        ++v93;
      }
      while ( v93 < v94 );
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

  if ( (byte_42E8A45 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, isBoardDisp, warId, isBadgeDisp);
    byte_42E8A45 = 1;
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
      sub_B5D69C(v16, v17);
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
    sub_B5D69C(0LL, end_act);
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
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  __int64 v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  const MethodInfo *v21; // x1
  System_Action_o *v22; // x20
  const MethodInfo *v23; // x5

  if ( (byte_42E8A4E & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)end_act, (_DWORD)method, v3);
    sub_B5D5C4(&Method_QuestBoardListViewManager___c__DisplayClass107_0__EndSlideOut_b__0__, v6, v7, v8);
    sub_B5D5C4(&QuestBoardListViewManager___c__DisplayClass107_0_TypeInfo, v9, v10, v11);
    byte_42E8A4E = 1;
  }
  v12 = sub_B5D694(QuestBoardListViewManager___c__DisplayClass107_0_TypeInfo);
  QuestBoardListViewManager___c__DisplayClass107_0___ctor(
    (QuestBoardListViewManager___c__DisplayClass107_0_o *)v12,
    0LL);
  if ( !v12 )
    sub_B5D69C(v13, v14);
  *(_QWORD *)(v12 + 16) = end_act;
  sub_B5D560((BattleServantConfConponent_o *)(v12 + 16), (System_Int32_array **)end_act, v15, v16, v17, v18, v19, v20);
  this->fields.mIsDoing_Slide = 0;
  QuestBoardListViewManager__ResetBG(this, v21);
  v22 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v22,
    (Il2CppObject *)v12,
    Method_QuestBoardListViewManager___c__DisplayClass107_0__EndSlideOut_b__0__,
    0LL);
  QuestBoardListViewManager__SetMode(this, 0, v22, 0, 0, v23);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  ListViewItem_o *v10; // x8
  __int64 v11; // x11

  if ( (byte_42E8A48 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, index, (_DWORD)method, v3);
    sub_B5D5C4(&PartyServantListViewItem_TypeInfo, v6, v7, v8);
    byte_42E8A48 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v10 = itemList->fields._items->m_Items[index];
  if ( !v10 )
    return 0LL;
  v11 = *(&PartyServantListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v10->klass->_2.bitflags2 + 1) < (unsigned int)v11 )
    return 0LL;
  if ( (PartyServantListViewItem_c *)v10->klass->_2.typeHierarchy[v11 - 1] == PartyServantListViewItem_TypeInfo )
    return (PartyServantListViewItem_o *)itemList->fields._items->m_Items[index];
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
QuestBoardListViewObject_o *__fastcall QuestBoardListViewManager__GetQuestBoardObjForWarId(
        QuestBoardListViewManager_o *this,
        int32_t warId,
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
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  Il2CppObject *current; // x25
  __int64 v26; // x10
  _QWORD *monitor; // x8
  __int64 v28; // x8
  UnityEngine_Object_o *v29; // x20
  void *v30; // x8
  __int64 v31; // x11
  UnityEngine_Object_o *v32; // x20
  int v33; // w19
  System_Collections_Generic_List_Enumerator_T__o v35; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v36; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_42E8A46 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, warId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v12, v13, v14);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&QuestBoardListViewItem_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&QuestBoardListViewObject_TypeInfo, v21, v22, v23);
    byte_42E8A46 = 1;
  }
  memset(&v36, 0, sizeof(v36));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_B5D69C(0LL, *(_QWORD *)&warId);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v35,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v36 = v35;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v36,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
  {
    current = v36.fields.current;
    if ( v36.fields.current )
    {
      v26 = *(&QuestBoardListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v36.fields.current->klass->_2.bitflags2 + 1) >= (unsigned int)v26
        && (QuestBoardListViewItem_c *)v36.fields.current->klass->_2.typeHierarchy[v26 - 1] == QuestBoardListViewItem_TypeInfo )
      {
        monitor = v36.fields.current[7].monitor;
        if ( monitor )
        {
          v28 = monitor[14];
          if ( v28 )
          {
            if ( *(_DWORD *)(v28 + 16) != 1 && *(_DWORD *)(v28 + 20) == warId )
            {
              v29 = (UnityEngine_Object_o *)v36.fields.current[6].monitor;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( UnityEngine_Object__op_Inequality(v29, 0LL, 0LL) )
              {
                v30 = current[6].monitor;
                if ( v30
                  && (v31 = *(&QuestBoardListViewObject_TypeInfo->_2.bitflags2 + 1),
                      *(unsigned __int8 *)(*(_QWORD *)v30 + 300LL) >= (unsigned int)v31) )
                {
                  v32 = *(QuestBoardListViewObject_c **)(*(_QWORD *)(*(_QWORD *)v30 + 200LL) + 8 * v31 - 8) == QuestBoardListViewObject_TypeInfo
                      ? (UnityEngine_Object_o *)current[6].monitor
                      : 0LL;
                }
                else
                {
                  v32 = 0LL;
                }
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                if ( UnityEngine_Object__op_Inequality(v32, 0LL, 0LL) )
                {
                  v33 = 3;
                  goto LABEL_29;
                }
              }
            }
          }
        }
      }
    }
  }
  v32 = 0LL;
  v33 = 1;
LABEL_29:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v36,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  if ( (unsigned int)(v33 + 1) >> 2 )
    return (QuestBoardListViewObject_o *)v32;
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
  System_Collections_Generic_List_QuestBoardListViewObject__o *ObjectList; // x0
  __int64 v16; // x1
  _BOOL8 v17; // x0
  __int64 v18; // x1
  Il2CppObject *current; // x20
  const MethodInfo *v20; // x3
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+8h] [xbp-38h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_42E8A4B & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__Dispose__,
      mode,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__MoveNext__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__get_Current__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestBoardListViewObject__GetEnumerator__, v12, v13, v14);
    byte_42E8A4B = 1;
  }
  memset(&v21, 0, sizeof(v21));
  ObjectList = QuestBoardListViewManager__get_ObjectList(this, *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B5D69C(0LL, v16);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v21,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ObjectList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_QuestBoardListViewObject__GetEnumerator__);
  while ( 1 )
  {
    v17 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v21,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__MoveNext__);
    if ( !v17 )
      break;
    current = v21.fields.current;
    if ( !v21.fields.current )
      sub_B5D69C(v17, v18);
    zero = UnityEngine_Vector3__get_zero(0LL);
    QuestBoardListViewObject__Init_25394508(
      (QuestBoardListViewObject_o *)current,
      mode,
      0LL,
      zero.fields.x,
      *(UnityEngine_Vector3_o *)&zero.fields.y,
      v20);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v21,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__Dispose__);
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
  UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, Asset, 0LL);
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
  __int64 v25; // x20
  MoveObject_o *v26; // x0
  __int64 v27; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Int32_array **Component_UIWidget; // x0
  MoveObject_o **v41; // x23
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  float v48; // s10
  float x; // s10
  float y; // s11
  float z; // s12
  MoveObject_o *v52; // x21
  float v53; // s13
  float v54; // s15
  float v55; // s14
  System_Action_o *v56; // x22
  System_Action_o *v57; // x23
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v59; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v60; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v61; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_42E8A73 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)obj, easeType, is_force);
    sub_B5D5C4(&Method_GameObjectExtensions_SafeGetComponent_MoveObject___, v13, v14, v15);
    sub_B5D5C4(&Method_QuestBoardListViewManager___c__DisplayClass159_0__MoveBoard_b__0__, v16, v17, v18);
    sub_B5D5C4(&Method_QuestBoardListViewManager___c__DisplayClass159_0__MoveBoard_b__1__, v19, v20, v21);
    sub_B5D5C4(&QuestBoardListViewManager___c__DisplayClass159_0_TypeInfo, v22, v23, v24);
    byte_42E8A73 = 1;
  }
  v25 = sub_B5D694(QuestBoardListViewManager___c__DisplayClass159_0_TypeInfo);
  QuestBoardListViewManager___c__DisplayClass159_0___ctor(
    (QuestBoardListViewManager___c__DisplayClass159_0_o *)v25,
    0LL);
  if ( !v25 )
    goto LABEL_10;
  *(_QWORD *)(v25 + 40) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v25 + 40), (System_Int32_array **)this, v28, v29, v30, v31, v32, v33);
  *(_QWORD *)(v25 + 16) = obj;
  sub_B5D560((BattleServantConfConponent_o *)(v25 + 16), (System_Int32_array **)obj, v34, v35, v36, v37, v38, v39);
  *(float *)(v25 + 32) = GameObjectExtensions__GetLocalPositionY(*(UnityEngine_GameObject_o **)(v25 + 16), 0LL) + moveY;
  Component_UIWidget = (System_Int32_array **)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                *(UnityEngine_GameObject_o **)(v25 + 16),
                                                (const MethodInfo_1E5984C *)Method_GameObjectExtensions_SafeGetComponent_MoveObject___);
  v41 = (MoveObject_o **)(v25 + 24);
  *(_QWORD *)(v25 + 24) = Component_UIWidget;
  sub_B5D560((BattleServantConfConponent_o *)(v25 + 24), Component_UIWidget, v42, v43, v44, v45, v46, v47);
  if ( is_force
    || (v48 = *(float *)(v25 + 32),
        v48 == GameObjectExtensions__GetLocalPositionY(*(UnityEngine_GameObject_o **)(v25 + 16), 0LL)) )
  {
    v26 = *v41;
    if ( *v41 )
    {
      MoveObject__Stop(v26, 0LL);
      GameObjectExtensions__SetLocalPositionY(*(UnityEngine_GameObject_o **)(v25 + 16), *(float *)(v25 + 32), 0LL);
      --this->fields.waitCount;
      return;
    }
LABEL_10:
    sub_B5D69C(v26, v27);
  }
  LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v25 + 16), 0LL);
  x = LocalPosition.fields.x;
  y = LocalPosition.fields.y;
  z = LocalPosition.fields.z;
  v59 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v25 + 16), 0LL);
  v52 = *(MoveObject_o **)(v25 + 24);
  v53 = v59.fields.x;
  v54 = v59.fields.y;
  v55 = v59.fields.z;
  v56 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v56,
    (Il2CppObject *)v25,
    Method_QuestBoardListViewManager___c__DisplayClass159_0__MoveBoard_b__0__,
    0LL);
  v57 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v57,
    (Il2CppObject *)v25,
    Method_QuestBoardListViewManager___c__DisplayClass159_0__MoveBoard_b__1__,
    0LL);
  if ( !v52 )
    goto LABEL_10;
  v61.fields.y = v54 + moveY;
  v60.fields.x = x;
  v60.fields.y = y;
  v60.fields.z = z;
  v61.fields.x = v53;
  v61.fields.z = v55;
  MoveObject__Play(v52, v60, v61, time, v56, v57, 0.0, easeType, 0LL);
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
  int v12; // w1
  char v13; // w2
  __int64 v14; // x3
  int v15; // w1
  char v16; // w2
  __int64 v17; // x3
  int v18; // w1
  char v19; // w2
  __int64 v20; // x3
  int v21; // w1
  char v22; // w2
  __int64 v23; // x3
  int v24; // w1
  char v25; // w2
  __int64 v26; // x3
  struct System_Collections_Generic_List_ListViewItem__o *topItemList; // x0
  UnityEngine_Component_o *monitor; // x24
  __int64 v29; // x1
  QuestBoardListViewItemDraw_c *v30; // x0
  int POS_Y_ITVL_AREA; // w8
  int v32; // w19
  UnityEngine_GameObject_o *gameObject; // x1
  const MethodInfo *v34; // x4
  _BOOL8 v35; // x0
  __int64 v36; // x1
  UnityEngine_Component_o *v37; // x24
  __int64 v38; // x1
  QuestBoardListViewItemDraw_c *v39; // x0
  int v40; // w8
  int v41; // w19
  UnityEngine_GameObject_o *v42; // x1
  const MethodInfo *v43; // x4
  _BOOL8 v44; // x0
  __int64 v45; // x1
  int v46; // w21
  const MethodInfo *v47; // x2
  System_Collections_IEnumerator_o *v48; // x0
  System_Collections_Generic_List_Enumerator_T__o v49; // [xsp+8h] [xbp-A8h] BYREF
  int v50[2]; // [xsp+20h] [xbp-90h]
  int v51; // [xsp+28h] [xbp-88h]
  System_Collections_Generic_List_Enumerator_T__o v52; // [xsp+30h] [xbp-80h] BYREF
  System_Action_o *endActa; // [xsp+58h] [xbp-58h]

  endActa = endAct;
  if ( (byte_42E8A43 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__,
      isClose,
      isForce,
      *(_QWORD *)&easeType);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v18, v19, v20);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&QuestBoardListViewItemDraw_TypeInfo, v24, v25, v26);
    byte_42E8A43 = 1;
  }
  memset(&v52, 0, sizeof(v52));
  v51 = 0;
  topItemList = this->fields.topItemList;
  this->fields.waitCount = 0;
  if ( !topItemList )
    goto LABEL_57;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v49,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)topItemList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v52 = v49;
  while ( 1 )
  {
    v35 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v52,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v35 )
      break;
    if ( !v52.fields.current )
      sub_B5D69C(v35, v36);
    monitor = (UnityEngine_Component_o *)v52.fields.current[6].monitor;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)monitor, 0LL, 0LL) )
    {
      v30 = QuestBoardListViewItemDraw_TypeInfo;
      if ( isClose )
      {
        if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          v30 = QuestBoardListViewItemDraw_TypeInfo;
        }
        POS_Y_ITVL_AREA = -v30->static_fields->POS_Y_ITVL_AREA;
      }
      else
      {
        if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          v30 = QuestBoardListViewItemDraw_TypeInfo;
        }
        POS_Y_ITVL_AREA = v30->static_fields->POS_Y_ITVL_AREA;
      }
      if ( POS_Y_ITVL_AREA >= 0 )
        v32 = POS_Y_ITVL_AREA;
      else
        v32 = POS_Y_ITVL_AREA + 1;
      if ( !monitor )
        sub_B5D69C(v30, v29);
      gameObject = UnityEngine_Component__get_gameObject(monitor, 0LL);
      QuestBoardListViewManager__MoveBoard(this, gameObject, (float)(v32 >> 1), moveTime, easeType, isForce, v34);
      ++this->fields.waitCount;
    }
  }
  v50[0] = 124;
  v51 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v52,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  v51 = 0;
  topItemList = this->fields.bottomItemList;
  if ( !topItemList )
LABEL_57:
    sub_B5D69C(topItemList, isClose);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v49,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)topItemList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v52 = v49;
  while ( 1 )
  {
    v44 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v52,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v44 )
      break;
    if ( !v52.fields.current )
      sub_B5D69C(v44, v45);
    v37 = (UnityEngine_Component_o *)v52.fields.current[6].monitor;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v37, 0LL, 0LL) )
    {
      v39 = QuestBoardListViewItemDraw_TypeInfo;
      if ( isClose )
      {
        if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          v39 = QuestBoardListViewItemDraw_TypeInfo;
        }
        v40 = v39->static_fields->POS_Y_ITVL_AREA;
      }
      else
      {
        if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          v39 = QuestBoardListViewItemDraw_TypeInfo;
        }
        v40 = -v39->static_fields->POS_Y_ITVL_AREA;
      }
      if ( v40 >= 0 )
        v41 = v40;
      else
        v41 = v40 + 1;
      if ( !v37 )
        sub_B5D69C(v39, v38);
      v42 = UnityEngine_Component__get_gameObject(v37, 0LL);
      QuestBoardListViewManager__MoveBoard(this, v42, (float)(v41 >> 1), moveTime, easeType, isForce, v43);
      ++this->fields.waitCount;
    }
  }
  v50[0] = 244;
  v46 = ++v51;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v52,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  if ( v46 && v50[v46 - 1] == 244 )
    v51 = v46 - 1;
  if ( endActa )
  {
    v48 = QuestBoardListViewManager__WaitFinish(this, endActa, v47);
    UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, v48, 0LL);
  }
}


void __fastcall QuestBoardListViewManager__OnChangeAlphaAnim(
        QuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_List_QuestBoardListViewObject__o *ObjectList; // x0
  const MethodInfo *v9; // x1
  int size; // w8
  System_Collections_Generic_List_QuestBoardListViewObject__o *v11; // x20
  unsigned int v12; // w21

  if ( (byte_42E8A56 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestBoardListViewObject__get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestBoardListViewObject__get_Item__, v5, v6, v7);
    byte_42E8A56 = 1;
  }
  ObjectList = QuestBoardListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    goto LABEL_11;
  size = ObjectList->fields._size;
  v11 = ObjectList;
  if ( size >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      if ( size <= v12 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      ObjectList = (System_Collections_Generic_List_QuestBoardListViewObject__o *)v11->fields._items->m_Items[v12];
      if ( !ObjectList )
        break;
      QuestBoardListViewObject__OnChangeAlphaAnim((QuestBoardListViewObject_o *)ObjectList, v9);
      size = v11->fields._size;
      if ( (int)++v12 >= size )
        goto LABEL_10;
    }
LABEL_11:
    sub_B5D69C(ObjectList, v9);
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
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  int v60; // w1
  int v61; // w2
  __int64 v62; // x3
  __int64 v63; // x22
  CommonUI_o *Instance; // x0
  __int64 v65; // x1
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  void **v72; // x21
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  __int64 v85; // x24
  __int64 v86; // x10
  MapControl_QuestInfo_o *v87; // x20
  System_Int32_array **AreaBoardInfo_k__BackingField; // x1
  MapControl_AreaBoardInfo_o **v89; // x23
  struct TerminalSceneComponent_o *mTerminalScene; // x9
  int32_t dispType; // w8
  MapControl_WarInfo_o *WarInfoByWarID; // x0
  MapControl_WarInfo_o *v93; // x23
  WarEntity_o *Mine; // x22
  bool IsClosedWar; // w0
  MapControl_WarInfo_o *WarInfo_k__BackingField; // x0
  int32_t EventId; // w22
  const MethodInfo *v98; // x3
  int32_t GroupId; // w23
  QuestEntity_o *v100; // x0
  const MethodInfo *v101; // x2
  __int64 v102; // x3
  QuestEntity_o *v103; // x23
  __int64 v104; // x1
  __int64 v105; // x1
  int v106; // w2
  __int64 v107; // x3
  TerminalSceneComponent_c *v108; // x0
  TerminalSceneComponent_o *mInstance; // x0
  const MethodInfo *v110; // x1
  __int64 v111; // x1
  UnityEngine_GameObject_o *fortificationWarningDialog; // x0
  FortificationWarningDialogComponent_o *Component_srcLineSprite; // x0
  __int64 v114; // x1
  int v115; // w1
  int v116; // w2
  __int64 v117; // x3
  int32_t SpotID; // w22
  TerminalPramsManager_c *v119; // x0
  int v120; // w2
  __int64 v121; // x3
  int32_t questId; // w22
  TerminalPramsManager_c *v123; // x0
  int32_t v124; // w22
  TerminalPramsManager_c *v125; // x0
  EventEntity_o *eventEnt; // x20
  System_Action_o *v127; // x24
  const MethodInfo *v128; // x4
  __int64 v129; // x8
  ScrTerminalListTop_o *mTerminalList; // x19
  MapControl_AreaBoardInfo_o *v131; // x20
  int32_t v132; // w22
  int v133; // w2
  __int64 v134; // x3
  TerminalSceneComponent_c *v135; // x0
  int v136; // w2
  __int64 v137; // x3
  TerminalSceneComponent_c *v138; // x0
  const MethodInfo *v139; // x1
  ScrTerminalListTop_o *v140; // x19
  int v141; // w2
  __int64 v142; // x3
  QuestEntity_o *v143; // x22
  TerminalSceneComponent_c *v144; // x0
  const MethodInfo *v145; // x2
  __int64 v146; // x3
  int32_t v147; // w23
  TerminalSceneComponent_c *v148; // x0
  const MethodInfo *v149; // x1
  ScrTerminalListTop_o *v150; // x19
  __int64 v151; // x9
  System_Collections_Generic_List_Enumerator_T__o v152; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v153; // [xsp+20h] [xbp-60h] BYREF
  System_Collections_Generic_List_EventFortificationEntity__o *entities; // [xsp+38h] [xbp-48h] BYREF

  if ( (byte_42E8A51 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)obj, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_EventFortificationMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMaster_QuestGroupMaster___, v9, v10, v11);
    sub_B5D5C4(&DataManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__Dispose__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__MoveNext__, v18, v19, v20);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__get_Current__,
      v21,
      v22,
      v23);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_FortificationWarningDialogComponent___, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventFortificationEntity__GetEnumerator__, v27, v28, v29);
    sub_B5D5C4(&QuestBoardListViewItem_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&QuestBoardListViewObject_TypeInfo, v33, v34, v35);
    sub_B5D5C4(&QuestInformationComponent_TypeInfo, v36, v37, v38);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v39, v40, v41);
    sub_B5D5C4(&Method_SingletonTemplate_QuestTree__get_Instance__, v42, v43, v44);
    sub_B5D5C4(&SingletonTemplate_QuestTree__TypeInfo, v45, v46, v47);
    sub_B5D5C4(&SoundManager_TypeInfo, v48, v49, v50);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v51, v52, v53);
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v54, v55, v56);
    sub_B5D5C4(&Method_QuestBoardListViewManager___c__DisplayClass113_0__OnClickListView_b__0__, v57, v58, v59);
    sub_B5D5C4(&QuestBoardListViewManager___c__DisplayClass113_0_TypeInfo, v60, v61, v62);
    byte_42E8A51 = 1;
  }
  entities = 0LL;
  memset(&v153, 0, sizeof(v153));
  v63 = sub_B5D694(QuestBoardListViewManager___c__DisplayClass113_0_TypeInfo);
  QuestBoardListViewManager___c__DisplayClass113_0___ctor(
    (QuestBoardListViewManager___c__DisplayClass113_0_o *)v63,
    0LL);
  if ( !v63 )
    goto LABEL_202;
  *(_QWORD *)(v63 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v63 + 16), (System_Int32_array **)this, v66, v67, v68, v69, v70, v71);
  *(_QWORD *)(v63 + 32) = obj;
  v72 = (void **)(v63 + 32);
  sub_B5D560((BattleServantConfConponent_o *)(v63 + 32), (System_Int32_array **)obj, v73, v74, v75, v76, v77, v78);
  if ( !*(_QWORD *)(v63 + 32) )
    goto LABEL_202;
  v85 = *(_QWORD *)(*(_QWORD *)(v63 + 32) + 48LL);
  if ( !v85 )
    goto LABEL_202;
  v86 = *(&QuestBoardListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(unsigned __int8 *)(*(_QWORD *)v85 + 300LL) < (unsigned int)v86
    || *(QuestBoardListViewItem_c **)(*(_QWORD *)(*(_QWORD *)v85 + 200LL) + 8 * v86 - 8) != QuestBoardListViewItem_TypeInfo )
  {
    goto LABEL_202;
  }
  v87 = *(MapControl_QuestInfo_o **)(v85 + 120);
  if ( !v87 )
    return;
  AreaBoardInfo_k__BackingField = (System_Int32_array **)v87->fields._AreaBoardInfo_k__BackingField;
  *(_QWORD *)(v63 + 24) = AreaBoardInfo_k__BackingField;
  v89 = (MapControl_AreaBoardInfo_o **)(v63 + 24);
  sub_B5D560((BattleServantConfConponent_o *)(v63 + 24), AreaBoardInfo_k__BackingField, v79, v80, v81, v82, v83, v84);
  mTerminalScene = this->fields.mTerminalScene;
  if ( !mTerminalScene )
    goto LABEL_202;
  dispType = v87->fields.dispType;
  mTerminalScene->fields._IsWarStartAnim_k__BackingField = 0;
  switch ( *(_DWORD *)(v85 + 112) )
  {
    case 0:
      if ( dispType == 2 )
        goto LABEL_112;
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !Instance )
        goto LABEL_202;
      CommonUI__CheckChangeOtherConnectMarkFromEventId(Instance, 0, 1, 0LL);
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      if ( !*v89 )
        goto LABEL_202;
      eventEnt = (*v89)->fields.eventEnt;
      v127 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(
        v127,
        (Il2CppObject *)v63,
        Method_QuestBoardListViewManager___c__DisplayClass113_0__OnClickListView_b__0__,
        0LL);
      v129 = *(_QWORD *)(v63 + 24);
      if ( !v129 )
        goto LABEL_202;
      if ( QuestBoardListViewManager__RequestToRaiseTutorialFlag(this, eventEnt, v127, *(_DWORD *)(v129 + 20), v128) )
        return;
      Instance = (CommonUI_o *)*v72;
      if ( !*v72 )
        goto LABEL_202;
      mTerminalList = this->fields.mTerminalList;
      v131 = *v89;
      Instance = (CommonUI_o *)ListViewObject__get_Index((ListViewObject_o *)Instance, 0LL);
      if ( !mTerminalList )
        goto LABEL_202;
      ScrTerminalListTop__Click_Area(mTerminalList, v131, (int32_t)Instance, 0, 0, 0LL);
      return;
    case 1:
    case 4:
      if ( dispType == 2 )
        goto LABEL_112;
      if ( !*v89 )
        goto LABEL_29;
      if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
      }
      Instance = (CommonUI_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !*v89 || !Instance )
        goto LABEL_202;
      WarInfoByWarID = QuestTree__mfGetWarInfoByWarID((QuestTree_o *)Instance, (*v89)->fields.warId, 0LL);
      if ( !WarInfoByWarID )
        goto LABEL_29;
      v93 = WarInfoByWarID;
      Mine = MapControl_WarInfo__GetMine(WarInfoByWarID, 0LL);
      IsClosedWar = MapControl_WarInfo__IsClosedWar(v93, 0LL);
      if ( Mine && IsClosedWar && WarEntity__IsMainInterlude(Mine, 0LL) )
        goto LABEL_112;
      if ( !Mine || !WarEntity__IsSubFolder(Mine, 0LL) )
        goto LABEL_29;
      if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
      }
      Instance = (CommonUI_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_QuestTree__get_Instance__);
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
      WarInfo_k__BackingField = v87->fields._WarInfo_k__BackingField;
      if ( !WarInfo_k__BackingField )
        goto LABEL_164;
      EventId = MapControl_WarInfo__GetEventId(WarInfo_k__BackingField, 0LL);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Instance = (CommonUI_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_QuestGroupMaster___);
      if ( !Instance )
        goto LABEL_202;
      GroupId = QuestGroupMaster__GetGroupId((QuestGroupMaster_o *)Instance, v87->fields.questId, 18, v98);
      v100 = MapControl_QuestInfo__GetMine(v87, 0LL);
      if ( EventId != GroupId )
        goto LABEL_164;
      v103 = v100;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_42E8B30 )
      {
        sub_B5D5C4(&TerminalPramsManager_TypeInfo, v65, (_DWORD)v101, v102);
        byte_42E8B30 = 1;
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
      if ( !v103 )
        goto LABEL_202;
      if ( QuestEntity__HasFlag(v103, 2LL, v101) )
        goto LABEL_164;
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Instance = (CommonUI_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventFortificationMaster___);
      if ( !Instance )
        goto LABEL_202;
      if ( !EventFortificationMaster__TryGetEntityList((EventFortificationMaster_o *)Instance, &entities, EventId, 0LL) )
        goto LABEL_164;
      Instance = (CommonUI_o *)entities;
      if ( !entities )
        goto LABEL_202;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v152,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)entities,
        (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventFortificationEntity__GetEnumerator__);
      v153 = v152;
      break;
    case 2:
    case 3:
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      SpotID = MapControl_QuestInfo__GetSpotID(v87, 0LL);
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_42E4B55 )
      {
        sub_B5D5C4(&TerminalPramsManager_TypeInfo, v115, v116, v117);
        byte_42E4B55 = 1;
      }
      v119 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v119 = TerminalPramsManager_TypeInfo;
      }
      v119->static_fields->_SpotId_k__BackingField = SpotID;
      Instance = (CommonUI_o *)MapControl_QuestInfo__GetMine(v87, 0LL);
      if ( !Instance )
        goto LABEL_202;
      if ( LODWORD(Instance->fields.leftImg) == 3 )
      {
        questId = v87->fields.questId;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        }
        if ( !byte_42E4B26 )
        {
          sub_B5D5C4(&TerminalPramsManager_TypeInfo, v65, v120, v121);
          byte_42E4B26 = 1;
        }
        v123 = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v123 = TerminalPramsManager_TypeInfo;
        }
        v123->static_fields->_SelectedStoryQuestId_k__BackingField = questId;
      }
      v124 = *(_DWORD *)(v85 + 148);
      if ( v124 )
      {
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        }
        if ( !byte_42E4B27 )
        {
          sub_B5D5C4(&TerminalPramsManager_TypeInfo, v65, v120, v121);
          byte_42E4B27 = 1;
        }
        v125 = TerminalPramsManager_TypeInfo;
LABEL_129:
        if ( (BYTE3(v125->vtable._0_Equals.methodPtr) & 4) != 0 && !v125->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v125);
          v125 = TerminalPramsManager_TypeInfo;
        }
        v125->static_fields->_SelectedRecollectionWarId_k__BackingField = v124;
        if ( !byte_42E5CB2 )
        {
          sub_B5D5C4(&TerminalPramsManager_TypeInfo, v65, v120, v121);
          v125 = TerminalPramsManager_TypeInfo;
          byte_42E5CB2 = 1;
        }
        if ( (BYTE3(v125->vtable._0_Equals.methodPtr) & 4) != 0 && !v125->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v125);
          v125 = TerminalPramsManager_TypeInfo;
        }
        v125->static_fields->_IsFromRecollectionBoard_k__BackingField = 1;
      }
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !Instance )
        goto LABEL_202;
      CommonUI__CheckChangeOtherConnectMarkFromEventId(Instance, 0, 1, 0LL);
      Instance = (CommonUI_o *)this->fields.mTerminalList;
      if ( !Instance )
        goto LABEL_202;
      ScrTerminalListTop__Click_Shortcut((ScrTerminalListTop_o *)Instance, v87->fields.warId, v87->fields.questId, 0LL);
      return;
    case 5:
      if ( dispType == 2 )
        goto LABEL_112;
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !Instance )
        goto LABEL_202;
      CommonUI__CheckChangeOtherConnectMarkFromEventId(Instance, 0, 1, 0LL);
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      MapControl_QuestInfo__GetMine(v87, 0LL);
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      }
      if ( !byte_42E4B1E )
      {
        sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v65, v133, v134);
        byte_42E4B1E = 1;
      }
      v135 = TerminalSceneComponent_TypeInfo;
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v135 = TerminalSceneComponent_TypeInfo;
      }
      Instance = (CommonUI_o *)v135->static_fields->mInstance;
      if ( !Instance )
        goto LABEL_202;
      TerminalSceneComponent__QuestInfoShowing((TerminalSceneComponent_o *)Instance, 0LL);
      if ( !byte_42E4B1E )
      {
        sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v65, v136, v137);
        byte_42E4B1E = 1;
      }
      v138 = TerminalSceneComponent_TypeInfo;
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v138 = TerminalSceneComponent_TypeInfo;
      }
      Instance = (CommonUI_o *)v138->static_fields->mInstance;
      if ( !Instance )
        goto LABEL_202;
      TerminalSceneComponent__CallQuestInformationClose((TerminalSceneComponent_o *)Instance, 0LL);
      QuestBoardListViewManager__SetShowingInfoAllOff(this, v139);
      Instance = (CommonUI_o *)*v72;
      if ( !*v72 )
        goto LABEL_202;
      v140 = this->fields.mTerminalList;
      Instance = (CommonUI_o *)ListViewObject__get_Index((ListViewObject_o *)Instance, 0LL);
      if ( !v140 )
        goto LABEL_202;
      ScrTerminalListTop__Click_WarBoard(v140, v87, (int32_t)Instance, 0LL);
      return;
    case 6:
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      v132 = MapControl_QuestInfo__GetSpotID(v87, 0LL);
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_42E4B55 )
      {
        sub_B5D5C4(&TerminalPramsManager_TypeInfo, v65, v120, v121);
        byte_42E4B55 = 1;
      }
      v125 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v125 = TerminalPramsManager_TypeInfo;
      }
      v125->static_fields->_SpotId_k__BackingField = v132;
      v124 = *(_DWORD *)(v85 + 148);
      if ( !byte_42E4B27 )
      {
        sub_B5D5C4(&TerminalPramsManager_TypeInfo, v65, v120, v121);
        v125 = TerminalPramsManager_TypeInfo;
        byte_42E4B27 = 1;
      }
      goto LABEL_129;
    default:
      return;
  }
  do
  {
    if ( !System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v153,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__MoveNext__) )
    {
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v153,
        (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__Dispose__);
LABEL_164:
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Instance )
      {
        CommonUI__CheckChangeOtherConnectMarkFromEventId(Instance, 0, 1, 0LL);
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(0, 0LL);
        v143 = MapControl_QuestInfo__GetMine(v87, 0LL);
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        }
        if ( !byte_42E4B1E )
        {
          sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v65, v141, v142);
          byte_42E4B1E = 1;
        }
        v144 = TerminalSceneComponent_TypeInfo;
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          v144 = TerminalSceneComponent_TypeInfo;
        }
        Instance = (CommonUI_o *)v144->static_fields->mInstance;
        if ( Instance )
        {
          v147 = TerminalSceneComponent__QuestInfoShowing((TerminalSceneComponent_o *)Instance, 0LL);
          if ( (BYTE3(QuestInformationComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !QuestInformationComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(QuestInformationComponent_TypeInfo);
          }
          if ( !v143
            || QuestEntity__HasFlag(v143, 2LL, v145)
            || v147 < 1
            || v143->fields.afterClear == 1
            || v147 == v87->fields.questId )
          {
            if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            }
            if ( !byte_42E4B1E )
            {
              sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v65, (_DWORD)v145, v146);
              byte_42E4B1E = 1;
            }
            v148 = TerminalSceneComponent_TypeInfo;
            if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              v148 = TerminalSceneComponent_TypeInfo;
            }
            Instance = (CommonUI_o *)v148->static_fields->mInstance;
            if ( Instance )
            {
              TerminalSceneComponent__CallQuestInformationClose((TerminalSceneComponent_o *)Instance, 0LL);
              QuestBoardListViewManager__SetShowingInfoAllOff(this, v149);
              Instance = (CommonUI_o *)*v72;
              if ( *v72 )
              {
                v150 = this->fields.mTerminalList;
                Instance = (CommonUI_o *)ListViewObject__get_Index((ListViewObject_o *)Instance, 0LL);
                if ( v150 )
                {
                  ScrTerminalListTop__Click_Quest(v150, v87, (int32_t)Instance, 0LL);
                  return;
                }
              }
            }
          }
          else
          {
            Instance = (CommonUI_o *)*v72;
            if ( *v72 )
            {
              v151 = *(&QuestBoardListViewObject_TypeInfo->_2.bitflags2 + 1);
              if ( *(&Instance->klass->_2.bitflags2 + 1) >= (unsigned int)v151
                && (QuestBoardListViewObject_c *)Instance->klass->_2.typeHierarchy[v151 - 1] == QuestBoardListViewObject_TypeInfo )
              {
                QuestBoardListViewObject__OnClickInfoBtn((QuestBoardListViewObject_o *)Instance, 1, v145);
                return;
              }
              mInstance = (TerminalSceneComponent_o *)sub_B5D990(Instance);
LABEL_205:
              sub_B5D69C(mInstance, v105);
            }
          }
        }
      }
LABEL_202:
      sub_B5D69C(Instance, v65);
    }
    if ( !v153.fields.current )
      sub_B5D69C(0LL, v104);
  }
  while ( !EventFortificationEntity__IsOpenFortificationWarningDialog(
             (EventFortificationEntity_o *)v153.fields.current,
             0LL) );
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_42E4B1E )
  {
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v105, v106, v107);
    byte_42E4B1E = 1;
  }
  v108 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v108 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v108->static_fields->mInstance;
  if ( !mInstance )
    goto LABEL_205;
  TerminalSceneComponent__CallQuestInformationClose(mInstance, 0LL);
  QuestBoardListViewManager__SetShowingInfoAllOff(this, v110);
  fortificationWarningDialog = this->fields.fortificationWarningDialog;
  if ( !fortificationWarningDialog )
    sub_B5D69C(0LL, v111);
  Component_srcLineSprite = (FortificationWarningDialogComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                       fortificationWarningDialog,
                                                                       (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_FortificationWarningDialogComponent___);
  if ( !Component_srcLineSprite )
    sub_B5D69C(0LL, v114);
  FortificationWarningDialogComponent__Open(Component_srcLineSprite, 0LL);
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v153,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__Dispose__);
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
  sub_B5D560(
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

  if ( (byte_42E8A64 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)playingCallback1, (_DWORD)endAct, method);
    byte_42E8A64 = 1;
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

  if ( (byte_42E8A65 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)playingCallback1, (_DWORD)endAct, method);
    byte_42E8A65 = 1;
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
      sub_B5D69C(gameObject, v8);
    }
    UnityEngine_Transform__SetParent_35741212(v13, (UnityEngine_Transform_o *)gameObject, 1, 0LL);
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

  if ( (byte_42E8A66 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)playingCallback1, (_DWORD)endAct, method);
    byte_42E8A66 = 1;
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

  if ( (byte_42E8A70 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)playingCallback, (_DWORD)endAct, method);
    byte_42E8A70 = 1;
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
              UnityEngine_Transform__SetParent_35741212(v22, (UnityEngine_Transform_o *)gameObject, 1, 0LL);
              v18 = (QuestBoardListEffectComponent_o *)this->fields.effectDisappear2BbComponent;
              goto LABEL_28;
            }
          }
        }
      }
    }
LABEL_29:
    sub_B5D69C(gameObject, v10);
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
  UnityEngine_Transform__SetParent_35741212(v15, (UnityEngine_Transform_o *)gameObject, 1, 0LL);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  UnityEngine_Object_o *effectDisappear2Component; // x22
  UnityEngine_Object_o *effectDisappear2BbComponent; // x22
  UnityEngine_Object_o *v12; // x22
  __int64 v13; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_GameObject_o *v15; // x22
  UnityEngine_GameObject_o *v16; // x0
  float v17; // s8
  QuestBoardListViewItemDraw_c *v18; // x0
  int v19; // w8
  int v20; // w8
  UnityEngine_Transform_o *v21; // x22
  QuestBoardListViewManager_o *v22; // x0
  const MethodInfo *v23; // x4
  QuestBoardListEffectComponent_o *v24; // x1
  UnityEngine_GameObject_o *v25; // x22
  UnityEngine_GameObject_o *v26; // x0
  float LocalPositionY; // s8
  QuestBoardListViewItemDraw_c *v28; // x0
  int POS_Y_ITVL_AREA; // w8
  int v30; // w8
  UnityEngine_Transform_o *v31; // x22

  if ( (byte_42E8A6F & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)playingCallback1, (_DWORD)endAct, method);
    sub_B5D5C4(&QuestBoardListViewItemDraw_TypeInfo, v7, v8, v9);
    byte_42E8A6F = 1;
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
  v12 = (UnityEngine_Object_o *)this->fields.effectDisappear2Component;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(v12, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.effectDisappear2BbComponent;
    if ( gameObject )
    {
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
      if ( this->fields.effectDisappear2BbComponent )
      {
        v25 = (UnityEngine_GameObject_o *)gameObject;
        v26 = UnityEngine_Component__get_gameObject(
                (UnityEngine_Component_o *)this->fields.effectDisappear2BbComponent,
                0LL);
        LocalPositionY = GameObjectExtensions__GetLocalPositionY(v26, 0LL);
        v28 = QuestBoardListViewItemDraw_TypeInfo;
        if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          v28 = QuestBoardListViewItemDraw_TypeInfo;
        }
        POS_Y_ITVL_AREA = v28->static_fields->POS_Y_ITVL_AREA;
        v30 = POS_Y_ITVL_AREA <= 0 ? -POS_Y_ITVL_AREA : 1 - POS_Y_ITVL_AREA;
        GameObjectExtensions__SetLocalPositionY(v25, LocalPositionY + (float)(v30 >> 1), 0LL);
        gameObject = (UnityEngine_Component_o *)this->fields.effectDisappear2BbComponent;
        if ( gameObject )
        {
          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
          if ( this->fields.onEffectPanel )
          {
            v31 = (UnityEngine_Transform_o *)gameObject;
            gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                      (UnityEngine_Component_o *)this->fields.onEffectPanel,
                                                      0LL);
            if ( v31 )
            {
              UnityEngine_Transform__SetParent_35741212(v31, (UnityEngine_Transform_o *)gameObject, 1, 0LL);
              v24 = (QuestBoardListEffectComponent_o *)this->fields.effectDisappear2BbComponent;
              goto LABEL_40;
            }
          }
        }
      }
    }
LABEL_41:
    sub_B5D69C(gameObject, v13);
  }
  gameObject = (UnityEngine_Component_o *)this->fields.effectDisappear2Component;
  if ( !gameObject )
    goto LABEL_41;
  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
  if ( !this->fields.effectDisappear2Component )
    goto LABEL_41;
  v15 = (UnityEngine_GameObject_o *)gameObject;
  v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.effectDisappear2Component, 0LL);
  v17 = GameObjectExtensions__GetLocalPositionY(v16, 0LL);
  v18 = QuestBoardListViewItemDraw_TypeInfo;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v18 = QuestBoardListViewItemDraw_TypeInfo;
  }
  v19 = v18->static_fields->POS_Y_ITVL_AREA;
  v20 = v19 <= 0 ? -v19 : 1 - v19;
  GameObjectExtensions__SetLocalPositionY(v15, v17 + (float)(v20 >> 1), 0LL);
  gameObject = (UnityEngine_Component_o *)this->fields.effectDisappear2Component;
  if ( !gameObject )
    goto LABEL_41;
  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
  if ( !this->fields.onEffectPanel )
    goto LABEL_41;
  v21 = (UnityEngine_Transform_o *)gameObject;
  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                            (UnityEngine_Component_o *)this->fields.onEffectPanel,
                                            0LL);
  if ( !v21 )
    goto LABEL_41;
  UnityEngine_Transform__SetParent_35741212(v21, (UnityEngine_Transform_o *)gameObject, 1, 0LL);
  v24 = this->fields.effectDisappear2Component;
LABEL_40:
  QuestBoardListViewManager__PlayBoardEffect(v22, v24, playingCallback1, endAct, v23);
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

  if ( (byte_42E8A6E & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)playingCallback1, (_DWORD)endAct, method);
    byte_42E8A6E = 1;
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

  if ( (byte_42E8A6D & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)playingCallback1, (_DWORD)endAct, method);
    byte_42E8A6D = 1;
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
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  __int64 v20; // x19
  __int64 v21; // x0
  __int64 v22; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Action_o **v29; // x23
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Action_o **v36; // x21
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  UnityEngine_Object_o *v43; // x20
  QuestBoardListEffectComponent_o *v44; // x20
  System_Action_o *v45; // x21
  System_Action_o *v46; // x22

  if ( (byte_42E8A71 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)effectComponent, (_DWORD)playingCallback1, endAct);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_QuestBoardListViewManager___c__DisplayClass157_0__PlayBoardEffect_b__0__, v11, v12, v13);
    sub_B5D5C4(&Method_QuestBoardListViewManager___c__DisplayClass157_0__PlayBoardEffect_b__1__, v14, v15, v16);
    sub_B5D5C4(&QuestBoardListViewManager___c__DisplayClass157_0_TypeInfo, v17, v18, v19);
    byte_42E8A71 = 1;
  }
  v20 = sub_B5D694(QuestBoardListViewManager___c__DisplayClass157_0_TypeInfo);
  QuestBoardListViewManager___c__DisplayClass157_0___ctor(
    (QuestBoardListViewManager___c__DisplayClass157_0_o *)v20,
    0LL);
  if ( !v20 )
    goto LABEL_15;
  *(_QWORD *)(v20 + 16) = playingCallback1;
  v29 = (System_Action_o **)(v20 + 16);
  sub_B5D560(
    (BattleServantConfConponent_o *)(v20 + 16),
    (System_Int32_array **)playingCallback1,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  *(_QWORD *)(v20 + 24) = effectComponent;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v20 + 24),
    (System_Int32_array **)effectComponent,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  *(_QWORD *)(v20 + 32) = endAct;
  v36 = (System_Action_o **)(v20 + 32);
  sub_B5D560((BattleServantConfConponent_o *)(v20 + 32), (System_Int32_array **)endAct, v37, v38, v39, v40, v41, v42);
  v43 = *(UnityEngine_Object_o **)(v20 + 24);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(v43, 0LL, 0LL) )
  {
    v44 = *(QuestBoardListEffectComponent_o **)(v20 + 24);
    v45 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      v45,
      (Il2CppObject *)v20,
      Method_QuestBoardListViewManager___c__DisplayClass157_0__PlayBoardEffect_b__0__,
      0LL);
    v46 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      v46,
      (Il2CppObject *)v20,
      Method_QuestBoardListViewManager___c__DisplayClass157_0__PlayBoardEffect_b__1__,
      0LL);
    if ( v44 )
    {
      QuestBoardListEffectComponent__Play(v44, v45, v46, 0LL);
      return;
    }
LABEL_15:
    sub_B5D69C(v21, v22);
  }
  if ( *v29 )
    ActionExtensions__Call(*v29, 0LL);
  if ( *v36 )
    ActionExtensions__Call(*v36, 0LL);
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

  if ( (byte_42E8A72 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    byte_42E8A72 = 1;
  }
  this->fields.blackMarkPrefab = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.blackMarkPrefab, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.whiteMarkPrefab = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.whiteMarkPrefab, 0LL, v9, v10, v11, v12, v13, v14);
  this->fields.fortificationWarningDialog = 0LL;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.fortificationWarningDialog,
    0LL,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  this->fields.boardAppearEffectPrefab = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.boardAppearEffectPrefab, 0LL, v21, v22, v23, v24, v25, v26);
  this->fields.boardAppearEffectFadePrefab = 0LL;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.boardAppearEffectFadePrefab,
    0LL,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  this->fields.boardDisappearEffectPrefab = 0LL;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.boardDisappearEffectPrefab,
    0LL,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  this->fields.boardDisappear2EffectPrefab = 0LL;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.boardDisappear2EffectPrefab,
    0LL,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  this->fields.boardDisappearEffectFadePrefab = 0LL;
  sub_B5D560(
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
    AssetManager__releaseAsset_30657564(effectAssetData, 0LL);
    this->fields.effectAssetData = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.effectAssetData, 0LL, v52, v53, v54, v55, v56, v57);
  }
  fortificationAssetData = this->fields.fortificationAssetData;
  p_fortificationAssetData = (BattleServantConfConponent_o *)&this->fields.fortificationAssetData;
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAsset_30657564(fortificationAssetData, 0LL);
  p_fortificationAssetData->klass = 0LL;
  sub_B5D560(p_fortificationAssetData, 0LL, v60, v61, v62, v63, v64, v65);
}


void __fastcall QuestBoardListViewManager__RemoveTempBG(QuestBoardListViewManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *mFolderBgTemp; // x20
  __int64 v6; // x1
  UnityEngine_Component_o **p_mFolderBgTemp; // x19
  UnityEngine_Object_o *gameObject; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42E8A5B & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8A5B = 1;
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
      sub_B5D69C(0LL, v6);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_mFolderBgTemp, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
    *p_mFolderBgTemp = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)p_mFolderBgTemp, 0LL, v9, v10, v11, v12, v13, v14);
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  __int64 v41; // x20
  CommonUI_o *Instance; // x0
  __int64 v43; // x1
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  const MethodInfo *v56; // x2
  const MethodInfo *v57; // x2
  System_Action_o *v58; // x0
  __int64 *v59; // x8
  System_Action_o *v60; // x21
  const MethodInfo *v61; // x2
  __int64 v62; // x22
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  __int64 v69; // x23
  const MethodInfo *v70; // x2
  float exitTime; // s0
  int32_t initMode; // w1
  System_Action_o *v73; // x21
  const MethodInfo *v74; // x5
  const MethodInfo *v75; // x2
  WebViewManager_o *v76; // x21
  AvalonSceneManager_c *v77; // x8
  float v78; // s8
  System_Action_o *v79; // x22
  CommonUI_o *v80; // x0
  float v81; // s0
  System_Action_o *v82; // x2
  WebViewManager_o *v83; // x20
  AvalonSceneManager_c *v84; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v86; // x21

  if ( (byte_42E8A4C & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, mode, (_DWORD)end_act, isWhiteFade);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14, v15, v16);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_QuestBoardListViewManager___c__DisplayClass104_0__RequestListObject_b__0__, v20, v21, v22);
    sub_B5D5C4(&Method_QuestBoardListViewManager___c__DisplayClass104_0__RequestListObject_b__1__, v23, v24, v25);
    sub_B5D5C4(&Method_QuestBoardListViewManager___c__DisplayClass104_0__RequestListObject_b__8__, v26, v27, v28);
    sub_B5D5C4(&Method_QuestBoardListViewManager___c__DisplayClass104_0__RequestListObject_b__9__, v29, v30, v31);
    sub_B5D5C4(&QuestBoardListViewManager___c__DisplayClass104_0_TypeInfo, v32, v33, v34);
    sub_B5D5C4(&Method_QuestBoardListViewManager___c__DisplayClass104_2__RequestListObject_b__7__, v35, v36, v37);
    sub_B5D5C4(&QuestBoardListViewManager___c__DisplayClass104_2_TypeInfo, v38, v39, v40);
    byte_42E8A4C = 1;
  }
  v41 = sub_B5D694(QuestBoardListViewManager___c__DisplayClass104_0_TypeInfo);
  QuestBoardListViewManager___c__DisplayClass104_0___ctor(
    (QuestBoardListViewManager___c__DisplayClass104_0_o *)v41,
    0LL);
  if ( !v41 )
    goto LABEL_45;
  *(_QWORD *)(v41 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v41 + 16), (System_Int32_array **)this, v44, v45, v46, v47, v48, v49);
  *(_QWORD *)(v41 + 32) = end_act;
  sub_B5D560((BattleServantConfConponent_o *)(v41 + 32), (System_Int32_array **)end_act, v50, v51, v52, v53, v54, v55);
  *(_BYTE *)(v41 + 40) = isNotInit;
  if ( !isNotInit )
    QuestBoardListViewManager__InitListObject(this, mode, v56);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_45;
  *(_BYTE *)(v41 + 24) = CommonUI__maskFadeIsOnTop(Instance, 0LL);
  switch ( this->fields.initMode )
  {
    case 3:
      this->fields.mIsDoing_Slide = 1;
      v58 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      v59 = &Method_QuestBoardListViewManager___c__DisplayClass104_0__RequestListObject_b__0__;
      goto LABEL_10;
    case 4:
      v62 = sub_B5D694(QuestBoardListViewManager___c__DisplayClass104_2_TypeInfo);
      QuestBoardListViewManager___c__DisplayClass104_2___ctor(
        (QuestBoardListViewManager___c__DisplayClass104_2_o *)v62,
        0LL);
      if ( !v62 )
        goto LABEL_45;
      *(_QWORD *)(v62 + 24) = v41;
      v69 = v62 + 24;
      sub_B5D560((BattleServantConfConponent_o *)(v62 + 24), (System_Int32_array **)v41, v63, v64, v65, v66, v67, v68);
      this->fields.mIsDoing_Slide = 1;
      *(_DWORD *)(v62 + 16) = 0;
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
        if ( *(_QWORD *)v69 )
        {
          if ( *(_BYTE *)(*(_QWORD *)v69 + 24LL) )
          {
            exitTime = *(float *)(v62 + 16);
          }
          else
          {
            exitTime = this->fields.exitTime;
            *(float *)(v62 + 16) = exitTime;
          }
          QuestBoardListViewManager__bgAlphaFade(this, this->fields.initMode, exitTime, v70);
          if ( *(_QWORD *)v69 )
          {
            QuestBoardListViewManager__SetSlideOut(
              this,
              *(float *)(v62 + 16),
              *(System_Action_o **)(*(_QWORD *)v69 + 32LL),
              v75);
            goto LABEL_43;
          }
        }
LABEL_45:
        sub_B5D69C(Instance, v43);
      }
      this->fields.mFaded = 1;
      v83 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v84 = AvalonSceneManager_TypeInfo;
      if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v84 = AvalonSceneManager_TypeInfo;
      }
      DEFAULT_FADE_TIME = v84->static_fields->DEFAULT_FADE_TIME;
      v86 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(
        v86,
        (Il2CppObject *)v62,
        Method_QuestBoardListViewManager___c__DisplayClass104_2__RequestListObject_b__7__,
        0LL);
      if ( !v83 )
        goto LABEL_45;
      v80 = (CommonUI_o *)v83;
      v81 = DEFAULT_FADE_TIME;
      v82 = v86;
      goto LABEL_42;
    case 5:
      this->fields.mIsDoing_Slide = 0;
      v58 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      v59 = &Method_QuestBoardListViewManager___c__DisplayClass104_0__RequestListObject_b__1__;
LABEL_10:
      v60 = v58;
      System_Action___ctor(v58, (Il2CppObject *)v41, *v59, 0LL);
      QuestBoardListViewManager__changeBG(this, v60, v61);
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
        QuestBoardListViewManager__bgAlphaFade(this, initMode, 0.0, v57);
        v73 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
        System_Action___ctor(
          v73,
          (Il2CppObject *)v41,
          Method_QuestBoardListViewManager___c__DisplayClass104_0__RequestListObject_b__9__,
          0LL);
        QuestBoardListViewManager__SetMode(this, 2, v73, 0, 0, v74);
        goto LABEL_43;
      }
      this->fields.mFaded = 1;
      v76 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v77 = AvalonSceneManager_TypeInfo;
      if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v77 = AvalonSceneManager_TypeInfo;
      }
      v78 = v77->static_fields->DEFAULT_FADE_TIME;
      v79 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(
        v79,
        (Il2CppObject *)v41,
        Method_QuestBoardListViewManager___c__DisplayClass104_0__RequestListObject_b__8__,
        0LL);
      if ( !v76 )
        goto LABEL_45;
      v80 = (CommonUI_o *)v76;
      v81 = v78;
      v82 = v79;
LABEL_42:
      CommonUI__maskFadeout(v80, 2, v81, v82, 0LL);
LABEL_43:
      Instance = (CommonUI_o *)this->fields.mNoneLabelParent;
      if ( !Instance )
        goto LABEL_45;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
      return;
    default:
      ActionExtensions__Call(*(System_Action_o **)(v41 + 32), 0LL);
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
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  __int64 v29; // x21
  TutorialEventSetRequest_o *FlagFromOnEventStart; // x0
  __int64 v31; // x1
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  QuestBoardListViewManager_o *v38; // x0
  const MethodInfo *v39; // x3
  int32_t id; // w20
  int32_t v41; // w22
  NetworkManager_ResultCallbackFunc_o *v42; // x19
  int32_t flagType; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42E8A55 & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, (_DWORD)eventEntity, (_DWORD)clickAreaFunc, *(_QWORD *)&warId);
    sub_B5D5C4(&Method_NetworkManager_getRequest_TutorialEventSetRequest___, v8, v9, v10);
    sub_B5D5C4(&NetworkManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonTemplate_QuestTree__get_Instance__, v17, v18, v19);
    sub_B5D5C4(&SingletonTemplate_QuestTree__TypeInfo, v20, v21, v22);
    sub_B5D5C4(
      &Method_QuestBoardListViewManager___c__DisplayClass117_0__RequestToRaiseTutorialFlag_b__0__,
      v23,
      v24,
      v25);
    sub_B5D5C4(&QuestBoardListViewManager___c__DisplayClass117_0_TypeInfo, v26, v27, v28);
    byte_42E8A55 = 1;
  }
  flagType = 0;
  v29 = sub_B5D694(QuestBoardListViewManager___c__DisplayClass117_0_TypeInfo);
  QuestBoardListViewManager___c__DisplayClass117_0___ctor(
    (QuestBoardListViewManager___c__DisplayClass117_0_o *)v29,
    0LL);
  if ( !v29 )
    goto LABEL_22;
  *(_QWORD *)(v29 + 16) = clickAreaFunc;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v29 + 16),
    (System_Int32_array **)clickAreaFunc,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  FlagFromOnEventStart = (TutorialEventSetRequest_o *)QuestBoardListViewManager__TryGetFlagFromOnEventStart(
                                                        v38,
                                                        &flagType,
                                                        eventEntity,
                                                        v39);
  if ( ((unsigned __int8)FlagFromOnEventStart & 1) != 0 )
  {
    if ( !eventEntity )
      goto LABEL_22;
    id = eventEntity->fields.id;
    v41 = flagType;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( !CondType__IsEventTutorialFlagOn(id, v41, 0LL) )
    {
      if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
      }
      FlagFromOnEventStart = (TutorialEventSetRequest_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !FlagFromOnEventStart )
        goto LABEL_22;
      if ( QuestTree__IsWarOpen((QuestTree_o *)FlagFromOnEventStart, warId, 0LL) )
      {
        v42 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
        NetworkManager_ResultCallbackFunc___ctor(
          v42,
          (Il2CppObject *)v29,
          Method_QuestBoardListViewManager___c__DisplayClass117_0__RequestToRaiseTutorialFlag_b__0__,
          0LL);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        FlagFromOnEventStart = (TutorialEventSetRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                              v42,
                                                              (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_TutorialEventSetRequest___);
        if ( FlagFromOnEventStart )
        {
          TutorialEventSetRequest__beginRequest(FlagFromOnEventStart, v41, id, 0LL);
          return 1;
        }
LABEL_22:
        sub_B5D69C(FlagFromOnEventStart, v31);
      }
    }
  }
  return 0;
}


void __fastcall QuestBoardListViewManager__ResetAlphaAnimTime(
        QuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  QuestBoardListViewManager_c *v8; // x0
  float v9; // s8
  System_Func_float__float__float__float__o *v10; // x20
  AlphaTransitionCalculator_o *v11; // x21
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  __int64 v18; // x1
  AlphaTransitionCalculator_o *rewardIconAlphaCalculator; // x0

  if ( (byte_42E8A53 & 1) == 0 )
  {
    sub_B5D5C4(&AlphaTransitionCalculator_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&QuestBoardListViewManager_TypeInfo, v5, v6, v7);
    byte_42E8A53 = 1;
  }
  this->fields.mAlphaAnimNow = 1.0;
  this->fields.mAlphaAnimTimeOld = UnityEngine_Time__get_realtimeSinceStartup(0LL);
  v8 = QuestBoardListViewManager_TypeInfo;
  if ( (BYTE3(QuestBoardListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewManager_TypeInfo);
    v8 = QuestBoardListViewManager_TypeInfo;
  }
  v9 = ChangedFPSUtil__CovertFrameNumToSecond(v8->static_fields->REWARD_ICON_FADE_FRAME_NUM, 0LL);
  v10 = ExtraEasing__AsymptoticSeriesFloat(
          QuestBoardListViewManager_TypeInfo->static_fields->ALPHA_ANIM_SPD_RATE,
          (float)QuestBoardListViewManager_TypeInfo->static_fields->REWARD_ICON_FADE_FRAME_NUM,
          0LL);
  v11 = (AlphaTransitionCalculator_o *)sub_B5D694(AlphaTransitionCalculator_TypeInfo);
  AlphaTransitionCalculator___ctor(v11, v9, v10, 0LL);
  this->fields.rewardIconAlphaCalculator = v11;
  sub_B5D560(
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
    sub_B5D69C(0LL, v18);
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
    sub_B5D69C(mFolderBg, method);
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

  if ( (byte_42E8A50 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, item_index, isAnimation, method);
    byte_42E8A50 = 1;
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
      sub_B5D69C(v10, v11);
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
    sub_B5D69C(0LL, v12);
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
    sub_B5D69C(0LL, isActive);
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
  if ( (byte_42E8A49 & 1) == 0 )
  {
    this = (QuestBoardListViewManager_o *)sub_B5D5C4(
                                            &QuestBoardListViewObject_TypeInfo,
                                            (_DWORD)obj,
                                            (_DWORD)item,
                                            method);
    byte_42E8A49 = 1;
  }
  if ( !obj
    || (v6 = *(&QuestBoardListViewObject_TypeInfo->_2.bitflags2 + 1), *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (QuestBoardListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != QuestBoardListViewObject_TypeInfo )
  {
    sub_B5D69C(this, obj);
  }
  initMode = v5->fields.initMode;
  *(UnityEngine_Vector3_o *)&v9 = UnityEngine_Vector3__get_zero(0LL);
  if ( initMode == 2 )
    v13 = 3;
  else
    v13 = 2;
  QuestBoardListViewObject__Init_25394508(
    (QuestBoardListViewObject_o *)obj,
    v13,
    0LL,
    v9,
    *(UnityEngine_Vector3_o *)&v10,
    v8);
}


void __fastcall QuestBoardListViewManager__SetOutPosition(QuestBoardListViewManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  UIWidget_o *Component_UIWidget; // x0
  __int64 v10; // x1
  SlideFadeObject_o *v11; // x19
  float v12; // s8
  float v13; // s10
  float v14; // s9
  QuestBoardListViewManager_c *v15; // x0
  float OUT_POS_OFS_X; // s0
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E8A4F & 1) == 0 )
  {
    sub_B5D5C4(&Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&QuestBoardListViewManager_TypeInfo, v5, v6, v7);
    byte_42E8A4F = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_UIWidget = GameObjectExtensions__SafeGetComponent_UIWidget_(
                         gameObject,
                         (const MethodInfo_1E5984C *)Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
  if ( !Component_UIWidget )
    sub_B5D69C(0LL, v10);
  v11 = (SlideFadeObject_o *)Component_UIWidget;
  v13 = *(float *)&Component_UIWidget->fields.updateAnchors;
  v12 = *((float *)&Component_UIWidget->fields.updateAnchors + 1);
  v14 = *(float *)&Component_UIWidget->fields.mGo;
  v15 = QuestBoardListViewManager_TypeInfo;
  if ( (BYTE3(QuestBoardListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewManager_TypeInfo);
  }
  OUT_POS_OFS_X = QuestBoardListViewManager__get_OUT_POS_OFS_X((const MethodInfo *)v15);
  v17.fields.y = v12;
  v17.fields.z = v14;
  v17.fields.x = v13 + OUT_POS_OFS_X;
  SlideFadeObject__SetPosition(v11, v17, 0LL);
}


void __fastcall QuestBoardListViewManager__SetScrollBarEnable(
        QuestBoardListViewManager_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UnityEngine_Object_o *blockMask; // x21
  BattleServantConfConponent_o *p_blockMask; // x19
  UnityEngine_Object_o *klass; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  UnityEngine_Object_o *blockMaskPrefab; // x21
  struct UnityEngine_GameObject_o *v19; // x21
  struct UnityEngine_GameObject_o *v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  UnityEngine_GameObject_o *v27; // x19
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E8A3F & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, isEnable, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    byte_42E8A3F = 1;
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
      UnityEngine_Object__DestroyImmediate_35620448(klass, 0LL);
      p_blockMask->klass = 0LL;
      sub_B5D560(p_blockMask, 0LL, v12, v13, v14, v15, v16, v17);
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
        v19 = this->fields.blockMaskPrefab;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v20 = (struct UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                   (UnityEngine_UI_Dropdown_DropdownItem_o *)v19,
                                                   (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        this->fields.blockMask = v20;
        sub_B5D560(
          (BattleServantConfConponent_o *)&this->fields.blockMask,
          (System_Int32_array **)v20,
          v21,
          v22,
          v23,
          v24,
          v25,
          v26);
        GameObjectExtensions__SafeSetParent(
          this->fields.blockMask,
          (UnityEngine_Component_o *)this->fields.onEffectPanel,
          0LL);
        v27 = this->fields.blockMask;
        zero = UnityEngine_Vector3__get_zero(0LL);
        GameObjectExtensions__SetLocalPosition(v27, zero, 0LL);
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
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  UnityEngine_Component_o *scrollView; // x0
  UnityEngine_Object_o *Component_WebViewObject; // x21
  UIPanel_o *v15; // x0
  int32_t DEFAULT_SCROLL_VIEW_DEPTH; // w1

  if ( (byte_42E8A5C & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UIPanel___, depth, isDefault, method);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&QuestBoardListViewManager_TypeInfo, v10, v11, v12);
    byte_42E8A5C = 1;
  }
  scrollView = (UnityEngine_Component_o *)this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_17;
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      scrollView,
                                                      (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
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
        v15 = (UIPanel_o *)Component_WebViewObject;
        DEFAULT_SCROLL_VIEW_DEPTH = QuestBoardListViewManager_TypeInfo->static_fields->DEFAULT_SCROLL_VIEW_DEPTH;
LABEL_16:
        UIPanel__set_depth(v15, DEFAULT_SCROLL_VIEW_DEPTH, 0LL);
        return;
      }
    }
    else if ( Component_WebViewObject )
    {
      v15 = (UIPanel_o *)Component_WebViewObject;
      DEFAULT_SCROLL_VIEW_DEPTH = depth;
      goto LABEL_16;
    }
LABEL_17:
    sub_B5D69C(scrollView, *(_QWORD *)&depth);
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
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  ListViewItem_o *v14; // x8
  struct ListViewObject_o *viewObject; // x20
  __int64 v16; // x9
  QuestBoardListViewManager_o *v17; // x0
  const MethodInfo *v18; // x1

  v5 = idx;
  v6 = this;
  if ( (byte_42E8A58 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, idx, onOff, method);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v7, v8, v9);
    this = (QuestBoardListViewManager_o *)sub_B5D5C4(&QuestBoardListViewObject_TypeInfo, v10, v11, v12);
    byte_42E8A58 = 1;
  }
  itemList = v6->fields.itemList;
  if ( !itemList )
    goto LABEL_17;
  if ( itemList->fields._size <= (unsigned int)v5 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v14 = itemList->fields._items->m_Items[v5];
  if ( !v14 )
    goto LABEL_17;
  viewObject = v14->fields.viewObject;
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
    v16 = *(&QuestBoardListViewObject_TypeInfo->_2.bitflags2 + 1);
    if ( *(&viewObject->klass->_2.bitflags2 + 1) >= (unsigned int)v16
      && (QuestBoardListViewObject_c *)viewObject->klass->_2.typeHierarchy[v16 - 1] == QuestBoardListViewObject_TypeInfo )
    {
      this = (QuestBoardListViewManager_o *)viewObject[1].monitor;
      if ( this )
      {
        QuestBoardListViewItemDraw__setInfoShowing((QuestBoardListViewItemDraw_o *)this, onOff, 0LL);
        return;
      }
LABEL_17:
      sub_B5D69C(this, *(_QWORD *)&idx);
    }
    v17 = (QuestBoardListViewManager_o *)sub_B5D990(viewObject);
    QuestBoardListViewManager__RequestConsumeColorReset(v17, v18);
  }
}


void __fastcall QuestBoardListViewManager__SetShowingInfoAllOff(
        QuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_List_QuestBoardListViewObject__o *ObjectList; // x0
  __int64 v9; // x1
  int size; // w8
  System_Collections_Generic_List_QuestBoardListViewObject__o *v11; // x19
  unsigned int v12; // w20
  QuestBoardListViewObject_o *v13; // x8

  if ( (byte_42E8A57 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestBoardListViewObject__get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestBoardListViewObject__get_Item__, v5, v6, v7);
    byte_42E8A57 = 1;
  }
  ObjectList = QuestBoardListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    goto LABEL_12;
  size = ObjectList->fields._size;
  v11 = ObjectList;
  if ( size >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      if ( size <= v12 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v13 = v11->fields._items->m_Items[v12];
      if ( !v13 )
        break;
      ObjectList = (System_Collections_Generic_List_QuestBoardListViewObject__o *)v13->fields.itemDraw;
      if ( !ObjectList )
        break;
      QuestBoardListViewItemDraw__setInfoShowing((QuestBoardListViewItemDraw_o *)ObjectList, 0, 0LL);
      size = v11->fields._size;
      if ( (int)++v12 >= size )
        return;
    }
LABEL_12:
    sub_B5D69C(ObjectList, v9);
  }
}


void __fastcall QuestBoardListViewManager__SetSlideOut(
        QuestBoardListViewManager_o *this,
        float time,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  __int64 v4; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  __int64 v20; // x19
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v22; // x1
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
  UnityEngine_GameObject_o *v35; // x0
  UIWidget_o *Component_UIWidget; // x0
  SlideFadeObject_o *v37; // x20
  float OUT_POS_OFS_X; // s9
  System_Action_o *v39; // x21

  if ( (byte_42E8A4D & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)end_act, (_DWORD)method, v4);
    sub_B5D5C4(&Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___, v8, v9, v10);
    sub_B5D5C4(&QuestBoardListViewManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_QuestBoardListViewManager___c__DisplayClass105_0__SetSlideOut_b__0__, v14, v15, v16);
    sub_B5D5C4(&QuestBoardListViewManager___c__DisplayClass105_0_TypeInfo, v17, v18, v19);
    byte_42E8A4D = 1;
  }
  v20 = sub_B5D694(QuestBoardListViewManager___c__DisplayClass105_0_TypeInfo);
  QuestBoardListViewManager___c__DisplayClass105_0___ctor(
    (QuestBoardListViewManager___c__DisplayClass105_0_o *)v20,
    0LL);
  if ( !v20 )
    goto LABEL_10;
  *(_QWORD *)(v20 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v20 + 16), (System_Int32_array **)this, v23, v24, v25, v26, v27, v28);
  *(_QWORD *)(v20 + 24) = end_act;
  sub_B5D560((BattleServantConfConponent_o *)(v20 + 24), (System_Int32_array **)end_act, v29, v30, v31, v32, v33, v34);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_10;
  v35 = UnityEngine_GameObject__get_gameObject(gameObject, 0LL);
  Component_UIWidget = GameObjectExtensions__SafeGetComponent_UIWidget_(
                         v35,
                         (const MethodInfo_1E5984C *)Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
  v37 = (SlideFadeObject_o *)Component_UIWidget;
  if ( (BYTE3(QuestBoardListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewManager_TypeInfo);
  }
  OUT_POS_OFS_X = QuestBoardListViewManager__get_OUT_POS_OFS_X((const MethodInfo *)Component_UIWidget);
  v39 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v39,
    (Il2CppObject *)v20,
    Method_QuestBoardListViewManager___c__DisplayClass105_0__SetSlideOut_b__0__,
    0LL);
  if ( !v37 )
LABEL_10:
    sub_B5D69C(gameObject, v22);
  SlideFadeObject__SlideOut_23387732(v37, OUT_POS_OFS_X, time, 0.0, v39, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestBoardListViewManager__SetTerminalTopEffectPlay(
        QuestBoardListViewManager_o *this,
        int32_t targetWarId,
        bool isClose,
        const MethodInfo *method)
{
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  int v13; // w1
  char v14; // w2
  __int64 v15; // x3
  int v16; // w1
  char v17; // w2
  __int64 v18; // x3
  int v19; // w1
  char v20; // w2
  __int64 v21; // x3
  int v22; // w1
  char v23; // w2
  __int64 v24; // x3
  struct System_Collections_Generic_List_ListViewItem__o *topItemList; // x0
  char v26; // w25
  __int64 v27; // x10
  struct System_Collections_Generic_List_ListViewItem__o *v28; // x0
  struct System_Collections_Generic_List_ListViewItem__o *bottomItemList; // x0
  _QWORD *monitor; // x8
  __int64 v31; // x8
  System_Collections_Generic_List_Enumerator_T__o v32; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v33; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_42E8A42 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, targetWarId, isClose, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__Clear__, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v19, v20, v21);
    sub_B5D5C4(&QuestBoardListViewItem_TypeInfo, v22, v23, v24);
    byte_42E8A42 = 1;
  }
  memset(&v33, 0, sizeof(v33));
  if ( targetWarId )
  {
    topItemList = this->fields.topItemList;
    if ( !topItemList
      || (System_Collections_Generic_List_XWeaponTrail_Element___Clear(
            (System_Collections_Generic_List_XWeaponTrail_Element__o *)topItemList,
            (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_ListViewItem__Clear__),
          (topItemList = this->fields.bottomItemList) == 0LL)
      || (System_Collections_Generic_List_XWeaponTrail_Element___Clear(
            (System_Collections_Generic_List_XWeaponTrail_Element__o *)topItemList,
            (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_ListViewItem__Clear__),
          (topItemList = this->fields.itemList) == 0LL) )
    {
      sub_B5D69C(topItemList, *(_QWORD *)&targetWarId);
    }
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v32,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)topItemList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v33 = v32;
    v26 = 1;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( !System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v33,
                (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
        {
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
            &v33,
            (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          return;
        }
        if ( v33.fields.current )
        {
          v27 = *(&QuestBoardListViewItem_TypeInfo->_2.bitflags2 + 1);
          if ( *(&v33.fields.current->klass->_2.bitflags2 + 1) >= (unsigned int)v27
            && (QuestBoardListViewItem_c *)v33.fields.current->klass->_2.typeHierarchy[v27 - 1] == QuestBoardListViewItem_TypeInfo )
          {
            monitor = v33.fields.current[7].monitor;
            if ( monitor )
            {
              v31 = monitor[14];
              if ( v31 )
              {
                if ( *(_DWORD *)(v31 + 16) != 1 && *(_DWORD *)(v31 + 20) == targetWarId )
                  break;
              }
            }
          }
        }
        if ( (v26 & 1) != 0 )
        {
          v28 = this->fields.topItemList;
          if ( !v28 )
            sub_B5D69C(0LL, v33.fields.current);
          v26 = 1;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v28,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v33.fields.current,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        }
        else
        {
          bottomItemList = this->fields.bottomItemList;
          if ( !bottomItemList )
            sub_B5D69C(0LL, v33.fields.current);
LABEL_16:
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)bottomItemList,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v33.fields.current,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
          v26 = 0;
        }
      }
      v26 = 0;
      if ( isClose )
      {
        bottomItemList = this->fields.bottomItemList;
        if ( !bottomItemList )
          sub_B5D69C(0LL, v33.fields.current);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  UnityEngine_Component_o *QuestBoardObjForWarId; // x21
  UnityEngine_Object_o *boardAppearEffectPrefab; // x20
  struct UnityEngine_GameObject_o *v14; // x20
  UnityEngine_GameObject_o *transform; // x0
  __int64 v16; // x1
  UnityEngine_GameObject_o *v17; // x20
  UnityEngine_Transform_o *v18; // x22
  UnityEngine_Transform_o *v19; // x21
  int v20; // s0
  UnityEngine_Transform_o *v23; // x21
  int v24; // s0
  UnityEngine_Transform_o *v28; // x21
  int v29; // s0
  struct QuestBoardListEffectAppearComponent_o *Component_srcLineSprite; // x0
  struct QuestBoardListEffectAppearComponent_o **p_effectAppearComponent; // x20
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7

  if ( (byte_42E8A62 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectAppearComponent___,
      warId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v6, v7, v8);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v9, v10, v11);
    byte_42E8A62 = 1;
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
      v14 = this->fields.boardAppearEffectPrefab;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                (UnityEngine_UI_Dropdown_DropdownItem_o *)v14,
                                                (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( transform )
      {
        v17 = transform;
        transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
        if ( QuestBoardObjForWarId )
        {
          v18 = (UnityEngine_Transform_o *)transform;
          transform = UnityEngine_Component__get_gameObject(QuestBoardObjForWarId, 0LL);
          if ( transform )
          {
            transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
            if ( v18 )
            {
              UnityEngine_Transform__set_parent(v18, (UnityEngine_Transform_o *)transform, 0LL);
              v19 = UnityEngine_GameObject__get_transform(v17, 0LL);
              *(UnityEngine_Vector3_o *)&v20 = UnityEngine_Vector3__get_zero(0LL);
              if ( v19 )
              {
                UnityEngine_Transform__set_localPosition(v19, *(UnityEngine_Vector3_o *)&v20, 0LL);
                v23 = UnityEngine_GameObject__get_transform(v17, 0LL);
                *(UnityEngine_Quaternion_o *)&v24 = UnityEngine_Quaternion__get_identity(0LL);
                if ( v23 )
                {
                  UnityEngine_Transform__set_localRotation(v23, *(UnityEngine_Quaternion_o *)&v24, 0LL);
                  v28 = UnityEngine_GameObject__get_transform(v17, 0LL);
                  *(UnityEngine_Vector3_o *)&v29 = UnityEngine_Vector3__get_one(0LL);
                  if ( v28 )
                  {
                    UnityEngine_Transform__set_localScale(v28, *(UnityEngine_Vector3_o *)&v29, 0LL);
                    Component_srcLineSprite = (struct QuestBoardListEffectAppearComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                                v17,
                                                                                                (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectAppearComponent___);
                    p_effectAppearComponent = &this->fields.effectAppearComponent;
                    this->fields.effectAppearComponent = Component_srcLineSprite;
                    sub_B5D560(
                      (BattleServantConfConponent_o *)&this->fields.effectAppearComponent,
                      (System_Int32_array **)Component_srcLineSprite,
                      v34,
                      v35,
                      v36,
                      v37,
                      v38,
                      v39);
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
      sub_B5D69C(transform, v16);
    }
  }
}


void __fastcall QuestBoardListViewManager__SetUpBoardAppearEffectNT2(
        QuestBoardListViewManager_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  UnityEngine_Component_o *QuestBoardObjForWarId; // x20
  UnityEngine_Object_o *nt2BoardAppearEffectPrefab; // x21
  struct UnityEngine_GameObject_o *v14; // x21
  UnityEngine_GameObject_o *transform; // x0
  __int64 v16; // x1
  UnityEngine_GameObject_o *v17; // x21
  UnityEngine_Transform_o *v18; // x22
  struct QuestBoardListEffectAppearComponent_o *Component_srcLineSprite; // x0
  struct QuestBoardListEffectAppearComponent_o **p_effectAppearComponent; // x20
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7

  if ( (byte_42E8A6A & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectAppearComponent___,
      warId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v6, v7, v8);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v9, v10, v11);
    byte_42E8A6A = 1;
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
      v14 = this->fields.nt2BoardAppearEffectPrefab;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                (UnityEngine_UI_Dropdown_DropdownItem_o *)v14,
                                                (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( transform )
      {
        v17 = transform;
        transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
        if ( QuestBoardObjForWarId )
        {
          v18 = (UnityEngine_Transform_o *)transform;
          transform = UnityEngine_Component__get_gameObject(QuestBoardObjForWarId, 0LL);
          if ( transform )
          {
            transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
            if ( v18 )
            {
              UnityEngine_Transform__set_parent(v18, (UnityEngine_Transform_o *)transform, 0LL);
              GameObjectExtensions__ResetTransform(v17, 0LL);
              Component_srcLineSprite = (struct QuestBoardListEffectAppearComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                          v17,
                                                                                          (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectAppearComponent___);
              p_effectAppearComponent = &this->fields.effectAppearComponent;
              this->fields.effectAppearComponent = Component_srcLineSprite;
              sub_B5D560(
                (BattleServantConfConponent_o *)&this->fields.effectAppearComponent,
                (System_Int32_array **)Component_srcLineSprite,
                v21,
                v22,
                v23,
                v24,
                v25,
                v26);
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
      sub_B5D69C(transform, v16);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestBoardListViewManager__SetUpBoardAppearFadeEffect(
        QuestBoardListViewManager_o *this,
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
  UnityEngine_Object_o *boardAppearEffectFadePrefab; // x20
  struct UnityEngine_GameObject_o *v12; // x20
  UnityEngine_GameObject_o *transform; // x0
  __int64 v14; // x1
  UnityEngine_GameObject_o *v15; // x20
  UnityEngine_Transform_o *v16; // x21
  UnityEngine_Transform_o *v17; // x21
  int v18; // s0
  UnityEngine_Transform_o *v21; // x21
  int v22; // s0
  UnityEngine_Transform_o *v26; // x21
  int v27; // s0
  struct QuestBoardListEffectComponent_o *Component_srcLineSprite; // x0
  struct QuestBoardListEffectComponent_o **p_effectAppearFadeComponent; // x20
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7

  if ( (byte_42E8A63 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectComponent___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    byte_42E8A63 = 1;
  }
  boardAppearEffectFadePrefab = (UnityEngine_Object_o *)this->fields.boardAppearEffectFadePrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(boardAppearEffectFadePrefab, 0LL, 0LL) )
  {
    v12 = this->fields.boardAppearEffectFadePrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                              (UnityEngine_UI_Dropdown_DropdownItem_o *)v12,
                                              (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( transform )
    {
      v15 = transform;
      transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
      if ( this->fields.fadePanel )
      {
        v16 = (UnityEngine_Transform_o *)transform;
        transform = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)this->fields.fadePanel,
                                                  0LL);
        if ( v16 )
        {
          UnityEngine_Transform__set_parent(v16, (UnityEngine_Transform_o *)transform, 0LL);
          v17 = UnityEngine_GameObject__get_transform(v15, 0LL);
          *(UnityEngine_Vector3_o *)&v18 = UnityEngine_Vector3__get_zero(0LL);
          if ( v17 )
          {
            UnityEngine_Transform__set_localPosition(v17, *(UnityEngine_Vector3_o *)&v18, 0LL);
            v21 = UnityEngine_GameObject__get_transform(v15, 0LL);
            *(UnityEngine_Quaternion_o *)&v22 = UnityEngine_Quaternion__get_identity(0LL);
            if ( v21 )
            {
              UnityEngine_Transform__set_localRotation(v21, *(UnityEngine_Quaternion_o *)&v22, 0LL);
              v26 = UnityEngine_GameObject__get_transform(v15, 0LL);
              *(UnityEngine_Vector3_o *)&v27 = UnityEngine_Vector3__get_one(0LL);
              if ( v26 )
              {
                UnityEngine_Transform__set_localScale(v26, *(UnityEngine_Vector3_o *)&v27, 0LL);
                Component_srcLineSprite = (struct QuestBoardListEffectComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                      v15,
                                                                                      (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectComponent___);
                p_effectAppearFadeComponent = &this->fields.effectAppearFadeComponent;
                this->fields.effectAppearFadeComponent = Component_srcLineSprite;
                sub_B5D560(
                  (BattleServantConfConponent_o *)&this->fields.effectAppearFadeComponent,
                  (System_Int32_array **)Component_srcLineSprite,
                  v32,
                  v33,
                  v34,
                  v35,
                  v36,
                  v37);
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
    sub_B5D69C(transform, v14);
  }
}


void __fastcall QuestBoardListViewManager__SetUpBoardAppearFadeEffectNT2(
        QuestBoardListViewManager_o *this,
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
  UnityEngine_Object_o *nt2BoardAppearEffectFadePrefab; // x20
  struct UnityEngine_GameObject_o *v12; // x20
  UnityEngine_GameObject_o *transform; // x0
  __int64 v14; // x1
  UnityEngine_GameObject_o *v15; // x20
  UnityEngine_Transform_o *v16; // x21
  struct QuestBoardListEffectComponent_o *Component_srcLineSprite; // x0
  struct QuestBoardListEffectComponent_o **p_effectAppearFadeComponent; // x20
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7

  if ( (byte_42E8A6B & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectComponent___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    byte_42E8A6B = 1;
  }
  nt2BoardAppearEffectFadePrefab = (UnityEngine_Object_o *)this->fields.nt2BoardAppearEffectFadePrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(nt2BoardAppearEffectFadePrefab, 0LL, 0LL) )
  {
    v12 = this->fields.nt2BoardAppearEffectFadePrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                              (UnityEngine_UI_Dropdown_DropdownItem_o *)v12,
                                              (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( transform )
    {
      v15 = transform;
      transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
      if ( this->fields.fadePanel )
      {
        v16 = (UnityEngine_Transform_o *)transform;
        transform = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)this->fields.fadePanel,
                                                  0LL);
        if ( v16 )
        {
          UnityEngine_Transform__set_parent(v16, (UnityEngine_Transform_o *)transform, 0LL);
          GameObjectExtensions__ResetTransform(v15, 0LL);
          Component_srcLineSprite = (struct QuestBoardListEffectComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                v15,
                                                                                (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectComponent___);
          p_effectAppearFadeComponent = &this->fields.effectAppearFadeComponent;
          this->fields.effectAppearFadeComponent = Component_srcLineSprite;
          sub_B5D560(
            (BattleServantConfConponent_o *)&this->fields.effectAppearFadeComponent,
            (System_Int32_array **)Component_srcLineSprite,
            v19,
            v20,
            v21,
            v22,
            v23,
            v24);
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
    sub_B5D69C(transform, v14);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  UnityEngine_Component_o *QuestBoardObjForWarId; // x22
  UnityEngine_Object_o *boardDisappearEffectPrefab; // x21
  struct UnityEngine_GameObject_o *v17; // x21
  UnityEngine_GameObject_o *transform; // x0
  __int64 v19; // x1
  UnityEngine_GameObject_o *v20; // x21
  UnityEngine_Transform_o *v21; // x23
  UnityEngine_Transform_o *v22; // x22
  int v23; // s0
  UnityEngine_Transform_o *v26; // x22
  int v27; // s0
  UnityEngine_Transform_o *v31; // x22
  int v32; // s0
  struct QuestBoardListEffectDisappearComponent_o *Component_srcLineSprite; // x0
  struct QuestBoardListEffectDisappearComponent_o **p_effectDisappearComponent; // x22
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  float v43; // s1

  if ( (byte_42E8A67 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectDisappearComponent___,
      warId,
      isNextBoardReleased,
      method);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v9, v10, v11);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v12, v13, v14);
    byte_42E8A67 = 1;
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
      v17 = this->fields.boardDisappearEffectPrefab;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                (UnityEngine_UI_Dropdown_DropdownItem_o *)v17,
                                                (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( !transform )
        goto LABEL_29;
      v20 = transform;
      transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
      if ( !QuestBoardObjForWarId )
        goto LABEL_29;
      v21 = (UnityEngine_Transform_o *)transform;
      transform = UnityEngine_Component__get_gameObject(QuestBoardObjForWarId, 0LL);
      if ( !transform )
        goto LABEL_29;
      transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
      if ( !v21 )
        goto LABEL_29;
      UnityEngine_Transform__set_parent(v21, (UnityEngine_Transform_o *)transform, 0LL);
      v22 = UnityEngine_GameObject__get_transform(v20, 0LL);
      *(UnityEngine_Vector3_o *)&v23 = UnityEngine_Vector3__get_zero(0LL);
      if ( !v22 )
        goto LABEL_29;
      UnityEngine_Transform__set_localPosition(v22, *(UnityEngine_Vector3_o *)&v23, 0LL);
      v26 = UnityEngine_GameObject__get_transform(v20, 0LL);
      *(UnityEngine_Quaternion_o *)&v27 = UnityEngine_Quaternion__get_identity(0LL);
      if ( !v26 )
        goto LABEL_29;
      UnityEngine_Transform__set_localRotation(v26, *(UnityEngine_Quaternion_o *)&v27, 0LL);
      v31 = UnityEngine_GameObject__get_transform(v20, 0LL);
      *(UnityEngine_Vector3_o *)&v32 = UnityEngine_Vector3__get_one(0LL);
      if ( !v31 )
        goto LABEL_29;
      UnityEngine_Transform__set_localScale(v31, *(UnityEngine_Vector3_o *)&v32, 0LL);
      Component_srcLineSprite = (struct QuestBoardListEffectDisappearComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                     v20,
                                                                                     (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectDisappearComponent___);
      p_effectDisappearComponent = &this->fields.effectDisappearComponent;
      this->fields.effectDisappearComponent = Component_srcLineSprite;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.effectDisappearComponent,
        (System_Int32_array **)Component_srcLineSprite,
        v37,
        v38,
        v39,
        v40,
        v41,
        v42);
      transform = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(
                                                (UnityEngine_Object_o *)this->fields.effectDisappearComponent,
                                                0LL,
                                                0LL);
      if ( ((unsigned __int8)transform & 1) != 0 )
        return;
      if ( !*p_effectDisappearComponent
        || (GameObjectExtensions__SetLocalPositionY(
              v20,
              (*p_effectDisappearComponent)->fields.disappearEffectShiftPosY,
              0LL),
            (transform = (UnityEngine_GameObject_o *)*p_effectDisappearComponent) == 0LL) )
      {
LABEL_29:
        sub_B5D69C(transform, v19);
      }
      if ( isNextBoardReleased )
        v43 = endTime;
      else
        v43 = 0.0;
      QuestBoardListEffectComponent__Init((QuestBoardListEffectComponent_o *)transform, 1, 0.0, v43, 0LL);
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
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  UnityEngine_Component_o *QuestBoardObjForWarId; // x23
  UnityEngine_Object_o *ntBoardAppearEffectPrefab; // x22
  struct UnityEngine_GameObject_o **p_ntBoardAppearEffectPrefab; // x24
  UnityEngine_UI_Dropdown_DropdownItem_o *v27; // x22
  void *transform; // x0
  __int64 v29; // x1
  UnityEngine_GameObject_o *v30; // x22
  UnityEngine_Transform_o *v31; // x24
  UnityEngine_Transform_o *v32; // x23
  int v33; // s0
  UnityEngine_Transform_o *v36; // x23
  int v37; // s0
  UnityEngine_Transform_o *v41; // x23
  int v42; // s0
  struct QuestBoardListEffectBoardOpenComponent_o *Component_srcLineSprite; // x0
  struct QuestBoardListEffectBoardOpenComponent_o **p_effectDisappear2BbComponent; // x21
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  UnityEngine_Object_o *effectDisappear2BbComponent; // x19
  struct QuestBoardListEffectComponent_o *v54; // x0
  struct QuestBoardListEffectComponent_o **p_effectDisappear2Component; // x20
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  UnityEngine_Object_o *effectDisappear2Component; // x21
  UnityEngine_Object_o *effectDisappearComponent; // x21
  struct QuestBoardListEffectDisappearComponent_o *v64; // x8
  struct QuestBoardListEffectDisappearComponent_o *v65; // x8

  if ( (byte_42E8A68 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectBoardOpenComponent___,
      warId,
      isOnlyBoardOpen,
      isNTBoard);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectComponent___, v15, v16, v17);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v18, v19, v20);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v21, v22, v23);
    byte_42E8A68 = 1;
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
      v27 = (UnityEngine_UI_Dropdown_DropdownItem_o *)*p_ntBoardAppearEffectPrefab;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      transform = UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                    v27,
                    (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( transform )
      {
        v30 = (UnityEngine_GameObject_o *)transform;
        transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
        if ( QuestBoardObjForWarId )
        {
          v31 = (UnityEngine_Transform_o *)transform;
          transform = UnityEngine_Component__get_gameObject(QuestBoardObjForWarId, 0LL);
          if ( transform )
          {
            transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
            if ( v31 )
            {
              UnityEngine_Transform__set_parent(v31, (UnityEngine_Transform_o *)transform, 0LL);
              v32 = UnityEngine_GameObject__get_transform(v30, 0LL);
              *(UnityEngine_Vector3_o *)&v33 = UnityEngine_Vector3__get_zero(0LL);
              if ( v32 )
              {
                UnityEngine_Transform__set_localPosition(v32, *(UnityEngine_Vector3_o *)&v33, 0LL);
                v36 = UnityEngine_GameObject__get_transform(v30, 0LL);
                *(UnityEngine_Quaternion_o *)&v37 = UnityEngine_Quaternion__get_identity(0LL);
                if ( v36 )
                {
                  UnityEngine_Transform__set_localRotation(v36, *(UnityEngine_Quaternion_o *)&v37, 0LL);
                  v41 = UnityEngine_GameObject__get_transform(v30, 0LL);
                  *(UnityEngine_Vector3_o *)&v42 = UnityEngine_Vector3__get_one(0LL);
                  if ( v41 )
                  {
                    UnityEngine_Transform__set_localScale(v41, *(UnityEngine_Vector3_o *)&v42, 0LL);
                    if ( isOnlyBoardOpen )
                    {
                      Component_srcLineSprite = (struct QuestBoardListEffectBoardOpenComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                                     v30,
                                                                                                     (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectBoardOpenComponent___);
                      p_effectDisappear2BbComponent = &this->fields.effectDisappear2BbComponent;
                      this->fields.effectDisappear2BbComponent = Component_srcLineSprite;
                      sub_B5D560(
                        (BattleServantConfConponent_o *)&this->fields.effectDisappear2BbComponent,
                        (System_Int32_array **)Component_srcLineSprite,
                        v47,
                        v48,
                        v49,
                        v50,
                        v51,
                        v52);
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
                      v54 = (struct QuestBoardListEffectComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                        v30,
                                                                        (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectComponent___);
                      p_effectDisappear2Component = &this->fields.effectDisappear2Component;
                      this->fields.effectDisappear2Component = v54;
                      sub_B5D560(
                        (BattleServantConfConponent_o *)&this->fields.effectDisappear2Component,
                        (System_Int32_array **)v54,
                        v56,
                        v57,
                        v58,
                        v59,
                        v60,
                        v61);
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
                        v64 = this->fields.effectDisappearComponent;
                        if ( !v64 )
                          goto LABEL_49;
                        GameObjectExtensions__SetLocalPositionX(v30, v64->fields.disappearEffect2ShiftPosX, 0LL);
                        v65 = this->fields.effectDisappearComponent;
                        if ( !v65 )
                          goto LABEL_49;
                        GameObjectExtensions__SetLocalPositionY(v30, v65->fields.disappearEffect2ShiftPosY, 0LL);
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
      sub_B5D69C(transform, v29);
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
  __int64 v4; // x3
  char v8; // w1
  int v9; // w2
  __int64 v10; // x3
  char v11; // w1
  int v12; // w2
  __int64 v13; // x3
  UnityEngine_Object_o *boardDisappearEffectFadePrefab; // x21
  struct UnityEngine_GameObject_o *v15; // x21
  UnityEngine_GameObject_o *transform; // x0
  __int64 v17; // x1
  UnityEngine_GameObject_o *v18; // x21
  UnityEngine_Transform_o *v19; // x22
  UnityEngine_Transform_o *v20; // x22
  int v21; // s0
  UnityEngine_Transform_o *v24; // x22
  int v25; // s0
  UnityEngine_Transform_o *v29; // x22
  int v30; // s0
  struct QuestBoardListEffectComponent_o *Component_srcLineSprite; // x0
  struct QuestBoardListEffectComponent_o **p_effectDisappearFadeComponent; // x21
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7

  if ( (byte_42E8A69 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectComponent___,
      isPlayingAct,
      (_DWORD)method,
      v4);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v8, v9, v10);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v11, v12, v13);
    byte_42E8A69 = 1;
  }
  boardDisappearEffectFadePrefab = (UnityEngine_Object_o *)this->fields.boardDisappearEffectFadePrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(boardDisappearEffectFadePrefab, 0LL, 0LL) )
  {
    v15 = this->fields.boardDisappearEffectFadePrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                              (UnityEngine_UI_Dropdown_DropdownItem_o *)v15,
                                              (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_22;
    v18 = transform;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
    if ( !this->fields.fadePanel )
      goto LABEL_22;
    v19 = (UnityEngine_Transform_o *)transform;
    transform = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                              (UnityEngine_Component_o *)this->fields.fadePanel,
                                              0LL);
    if ( !v19 )
      goto LABEL_22;
    UnityEngine_Transform__set_parent(v19, (UnityEngine_Transform_o *)transform, 0LL);
    v20 = UnityEngine_GameObject__get_transform(v18, 0LL);
    *(UnityEngine_Vector3_o *)&v21 = UnityEngine_Vector3__get_zero(0LL);
    if ( !v20 )
      goto LABEL_22;
    UnityEngine_Transform__set_localPosition(v20, *(UnityEngine_Vector3_o *)&v21, 0LL);
    v24 = UnityEngine_GameObject__get_transform(v18, 0LL);
    *(UnityEngine_Quaternion_o *)&v25 = UnityEngine_Quaternion__get_identity(0LL);
    if ( !v24 )
      goto LABEL_22;
    UnityEngine_Transform__set_localRotation(v24, *(UnityEngine_Quaternion_o *)&v25, 0LL);
    v29 = UnityEngine_GameObject__get_transform(v18, 0LL);
    *(UnityEngine_Vector3_o *)&v30 = UnityEngine_Vector3__get_one(0LL);
    if ( !v29 )
      goto LABEL_22;
    UnityEngine_Transform__set_localScale(v29, *(UnityEngine_Vector3_o *)&v30, 0LL);
    Component_srcLineSprite = (struct QuestBoardListEffectComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                          v18,
                                                                          (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectComponent___);
    p_effectDisappearFadeComponent = &this->fields.effectDisappearFadeComponent;
    this->fields.effectDisappearFadeComponent = Component_srcLineSprite;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.effectDisappearFadeComponent,
      (System_Int32_array **)Component_srcLineSprite,
      v35,
      v36,
      v37,
      v38,
      v39,
      v40);
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
      sub_B5D69C(transform, v17);
    (*p_effectDisappearFadeComponent)->fields.playingActStartTime = actTime;
  }
}


void __fastcall QuestBoardListViewManager__SetupBlackMark(QuestBoardListViewManager_o *this, const MethodInfo *method)
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
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  UnityEngine_Object_o *blackMarkPrefab; // x20
  DataManager_o *Instance; // x0
  __int64 v37; // x1
  WarQuestSelectionEntity_array *Entitys_WarQuestSelectionEntity; // x20
  QuestBoardListViewManager___c_c *v39; // x8
  struct QuestBoardListViewManager___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__138_0; // x21
  Il2CppObject *v42; // x22
  struct QuestBoardListViewManager___c_StaticFields *v43; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  int v50; // w20
  struct ScrTerminalListTop_o *mTerminalList; // x8
  AssetData_o *effectAssetData; // x0
  BattleServantConfConponent_o *p_blackMarkPrefab; // x19
  System_Int32_array **Object_WarBoardWaitTimeSetting; // x0
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7

  if ( (byte_42E8A5E & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_GameObject____68807504, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_BasicHelper_Any_WarEntity___, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_WarMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataMasterBase_getEntitys_WarEntity___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Func_WarEntity__bool___ctor__, v14, v15, v16);
    sub_B5D5C4(&System_Func_WarEntity__bool__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23, v24, v25);
    sub_B5D5C4(&Method_QuestBoardListViewManager___c__SetupBlackMark_b__138_0__, v26, v27, v28);
    sub_B5D5C4(&QuestBoardListViewManager___c_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_18389/*"ef_blackpoint"*/, v32, v33, v34);
    byte_42E8A5E = 1;
  }
  blackMarkPrefab = (UnityEngine_Object_o *)this->fields.blackMarkPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(blackMarkPrefab, 0LL, 0LL) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_23;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_WarMaster___);
    if ( !Instance )
      goto LABEL_23;
    Entitys_WarQuestSelectionEntity = DataMasterBase__getEntitys_WarQuestSelectionEntity_(
                                        (DataMasterBase_o *)Instance,
                                        (const MethodInfo_1AE4B20 *)Method_DataMasterBase_getEntitys_WarEntity___);
    v39 = QuestBoardListViewManager___c_TypeInfo;
    if ( (BYTE3(QuestBoardListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewManager___c_TypeInfo);
      v39 = QuestBoardListViewManager___c_TypeInfo;
    }
    static_fields = v39->static_fields;
    _9__138_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__138_0;
    if ( !_9__138_0 )
    {
      if ( (BYTE3(v39->vtable._0_Equals.methodPtr) & 4) != 0 && !v39->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v39);
        static_fields = QuestBoardListViewManager___c_TypeInfo->static_fields;
      }
      v42 = (Il2CppObject *)static_fields->__9;
      _9__138_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_WarEntity__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__138_0,
        v42,
        Method_QuestBoardListViewManager___c__SetupBlackMark_b__138_0__,
        (const MethodInfo_2C2ECD0 *)Method_System_Func_WarEntity__bool___ctor__);
      v43 = QuestBoardListViewManager___c_TypeInfo->static_fields;
      v43->__9__138_0 = (struct System_Func_WarEntity__bool__o *)_9__138_0;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v43->__9__138_0,
        (System_Int32_array **)_9__138_0,
        v44,
        v45,
        v46,
        v47,
        v48,
        v49);
    }
    Instance = (DataManager_o *)BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
                                  (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)Entitys_WarQuestSelectionEntity,
                                  (System_Func_T__bool__o *)_9__138_0,
                                  (const MethodInfo_1AD6DE0 *)Method_BasicHelper_Any_WarEntity___);
    if ( !this->fields.mTerminalList
      || (v50 = (int)Instance,
          Instance = (DataManager_o *)ScrTerminalListTop__CheckTerminalTopEffect(this->fields.mTerminalList, 0LL),
          (mTerminalList = this->fields.mTerminalList) == 0LL) )
    {
LABEL_23:
      sub_B5D69C(Instance, v37);
    }
    if ( (((_DWORD)Instance != mTerminalList->fields.TERMINAL_EFFECT_APPEAR_EFFECT_ID) & ~v50) == 0 )
    {
      effectAssetData = this->fields.effectAssetData;
      if ( effectAssetData )
      {
        p_blackMarkPrefab = (BattleServantConfConponent_o *)&this->fields.blackMarkPrefab;
        Object_WarBoardWaitTimeSetting = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                  effectAssetData,
                                                                  (System_String_o *)StringLiteral_18389/*"ef_blackpoint"*/,
                                                                  (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
        p_blackMarkPrefab->klass = (BattleServantConfConponent_c *)Object_WarBoardWaitTimeSetting;
        sub_B5D560(p_blackMarkPrefab, Object_WarBoardWaitTimeSetting, v55, v56, v57, v58, v59, v60);
      }
    }
  }
}


void __fastcall QuestBoardListViewManager__SetupBoardAppearAndDisappearEffect(
        QuestBoardListViewManager_o *this,
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
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  ScrTerminalListTop_o *mTerminalList; // x0
  struct ScrTerminalListTop_o *v45; // x8
  UnityEngine_Object_o *boardAppearEffectPrefab; // x20
  struct UnityEngine_GameObject_o *Object_WarBoardWaitTimeSetting; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  UnityEngine_Object_o *boardAppearEffectFadePrefab; // x20
  struct UnityEngine_GameObject_o *v55; // x0
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  UnityEngine_Object_o *v62; // x20
  __int64 *v63; // x8
  BattleServantConfConponent_o *p_boardDisappear2EffectPrefab; // x20
  UnityEngine_Object_o *v65; // x20
  struct UnityEngine_GameObject_o *v66; // x0
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  UnityEngine_Object_o *v73; // x20
  struct UnityEngine_GameObject_o *v74; // x0
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  UnityEngine_Object_o *ntBoardAppearEffectPrefab; // x20
  System_Int32_array **v82; // x0
  System_String_array **v83; // x2
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  UnityEngine_Object_o *boardDisappearEffectFadePrefab; // x20
  __int64 *v90; // x8
  BattleServantConfConponent_o *p_nt2BoardAppearEffectFadePrefab; // x19
  System_Int32_array **v92; // x0
  System_String_array **v93; // x2
  System_String_array **v94; // x3
  System_Boolean_array **v95; // x4
  System_Int32_array **v96; // x5
  System_Int32_array *v97; // x6
  System_Int32_array *v98; // x7
  UnityEngine_Object_o *boardDisappearEffectPrefab; // x20
  struct UnityEngine_GameObject_o *v100; // x0
  System_String_array **v101; // x2
  System_String_array **v102; // x3
  System_Boolean_array **v103; // x4
  System_Int32_array **v104; // x5
  System_Int32_array *v105; // x6
  System_Int32_array *v106; // x7
  UnityEngine_Object_o *boardDisappear2EffectPrefab; // x20
  __int64 *v108; // x8
  UnityEngine_Object_o *v109; // x20
  struct UnityEngine_GameObject_o *v110; // x0
  System_String_array **v111; // x2
  System_String_array **v112; // x3
  System_Boolean_array **v113; // x4
  System_Int32_array **v114; // x5
  System_Int32_array *v115; // x6
  System_Int32_array *v116; // x7
  UnityEngine_Object_o *v117; // x20
  struct UnityEngine_GameObject_o *v118; // x0
  System_String_array **v119; // x2
  System_String_array **v120; // x3
  System_Boolean_array **v121; // x4
  System_Int32_array **v122; // x5
  System_Int32_array *v123; // x6
  System_Int32_array *v124; // x7
  UnityEngine_Object_o *v125; // x20
  struct UnityEngine_GameObject_o *v126; // x0
  System_String_array **v127; // x2
  System_String_array **v128; // x3
  System_Boolean_array **v129; // x4
  System_Int32_array **v130; // x5
  System_Int32_array *v131; // x6
  System_Int32_array *v132; // x7
  UnityEngine_Object_o *v133; // x20
  UnityEngine_Object_o *nt2BoardAppearEffectPrefab; // x20
  struct UnityEngine_GameObject_o *v135; // x0
  System_String_array **v136; // x2
  System_String_array **v137; // x3
  System_Boolean_array **v138; // x4
  System_Int32_array **v139; // x5
  System_Int32_array *v140; // x6
  System_Int32_array *v141; // x7
  UnityEngine_Object_o *nt2BoardAppearEffectFadePrefab; // x20

  if ( (byte_42E8A61 & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_GameObject____68807504, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_16936/*"bit_board_appear2"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_16942/*"bit_board_disappear5"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_16969/*"bit_fade_black2"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_16941/*"bit_board_disappear4"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_16938/*"bit_board_disappear"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_16968/*"bit_fade_black"*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_16935/*"bit_board_appear"*/, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_16971/*"bit_fade_black4"*/, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_16970/*"bit_fade_black3"*/, v32, v33, v34);
    sub_B5D5C4(&StringLiteral_16937/*"bit_board_appear3"*/, v35, v36, v37);
    sub_B5D5C4(&StringLiteral_16939/*"bit_board_disappear2"*/, v38, v39, v40);
    sub_B5D5C4(&StringLiteral_16940/*"bit_board_disappear3"*/, v41, v42, v43);
    byte_42E8A61 = 1;
  }
  mTerminalList = this->fields.mTerminalList;
  if ( !mTerminalList )
    goto LABEL_115;
  mTerminalList = (ScrTerminalListTop_o *)ScrTerminalListTop__CheckTerminalTopEffect(mTerminalList, 0LL);
  v45 = this->fields.mTerminalList;
  if ( !v45 )
    goto LABEL_115;
  if ( (_DWORD)mTerminalList == v45->fields.TERMINAL_EFFECT_APPEAR_EFFECT_ID )
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
                                                                            (System_String_o *)StringLiteral_16935/*"bit_board_appear"*/,
                                                                            (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
      this->fields.boardAppearEffectPrefab = Object_WarBoardWaitTimeSetting;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.boardAppearEffectPrefab,
        (System_Int32_array **)Object_WarBoardWaitTimeSetting,
        v48,
        v49,
        v50,
        v51,
        v52,
        v53);
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
      v55 = (struct UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                 (AssetData_o *)mTerminalList,
                                                 (System_String_o *)StringLiteral_16968/*"bit_fade_black"*/,
                                                 (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
      this->fields.boardAppearEffectFadePrefab = v55;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.boardAppearEffectFadePrefab,
        (System_Int32_array **)v55,
        v56,
        v57,
        v58,
        v59,
        v60,
        v61);
    }
    goto LABEL_19;
  }
  if ( (_DWORD)mTerminalList == v45->fields.TERMINAL_WHITE_MARK_EFFECT_APPEAR_EFFECT_ID )
  {
    if ( !this->fields.effectAssetData )
      return;
    v65 = (UnityEngine_Object_o *)this->fields.boardAppearEffectPrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality(v65, 0LL, 0LL) )
    {
      mTerminalList = (ScrTerminalListTop_o *)this->fields.effectAssetData;
      if ( !mTerminalList )
        goto LABEL_115;
      v66 = (struct UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                 (AssetData_o *)mTerminalList,
                                                 (System_String_o *)StringLiteral_16936/*"bit_board_appear2"*/,
                                                 (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
      this->fields.boardAppearEffectPrefab = v66;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.boardAppearEffectPrefab,
        (System_Int32_array **)v66,
        v67,
        v68,
        v69,
        v70,
        v71,
        v72);
    }
    v73 = (UnityEngine_Object_o *)this->fields.boardAppearEffectFadePrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality(v73, 0LL, 0LL) )
    {
      mTerminalList = (ScrTerminalListTop_o *)this->fields.effectAssetData;
      if ( !mTerminalList )
        goto LABEL_115;
      v74 = (struct UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                 (AssetData_o *)mTerminalList,
                                                 (System_String_o *)StringLiteral_16970/*"bit_fade_black3"*/,
                                                 (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
      this->fields.boardAppearEffectFadePrefab = v74;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.boardAppearEffectFadePrefab,
        (System_Int32_array **)v74,
        v75,
        v76,
        v77,
        v78,
        v79,
        v80);
    }
    goto LABEL_39;
  }
  if ( (_DWORD)mTerminalList == v45->fields.TERMINAL_EFFECT_BOARD_DISAPPEAR_EFFECT_ID )
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
      v100 = (struct UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                  (AssetData_o *)mTerminalList,
                                                  (System_String_o *)StringLiteral_16938/*"bit_board_disappear"*/,
                                                  (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
      this->fields.boardDisappearEffectPrefab = v100;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.boardDisappearEffectPrefab,
        (System_Int32_array **)v100,
        v101,
        v102,
        v103,
        v104,
        v105,
        v106);
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
    v108 = &StringLiteral_16939/*"bit_board_disappear2"*/;
    goto LABEL_81;
  }
  if ( (_DWORD)mTerminalList != v45->fields.TERMINAL_WHITE_MARK_EFFECT_BOARD_DISAPPEAR_EFFECT_ID )
  {
    if ( (_DWORD)mTerminalList == v45->fields.TERMINAL_EFFECT_BB_BOARD_EFFECT_ID )
    {
      if ( !this->fields.effectAssetData )
        return;
LABEL_19:
      v62 = (UnityEngine_Object_o *)this->fields.boardDisappear2EffectPrefab;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Equality(v62, 0LL, 0LL) )
      {
        mTerminalList = (ScrTerminalListTop_o *)this->fields.effectAssetData;
        if ( !mTerminalList )
          goto LABEL_115;
        v63 = &StringLiteral_16939/*"bit_board_disappear2"*/;
        p_boardDisappear2EffectPrefab = (BattleServantConfConponent_o *)&this->fields.boardDisappear2EffectPrefab;
LABEL_45:
        v82 = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                       (AssetData_o *)mTerminalList,
                                       (System_String_o *)*v63,
                                       (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
        p_boardDisappear2EffectPrefab->klass = (BattleServantConfConponent_c *)v82;
        sub_B5D560(p_boardDisappear2EffectPrefab, v82, v83, v84, v85, v86, v87, v88);
        goto LABEL_46;
      }
      goto LABEL_46;
    }
    if ( (_DWORD)mTerminalList != v45->fields.TERMINAL_EFFECT_NT_BOARD_EFFECT_ID )
    {
      if ( (_DWORD)mTerminalList == v45->fields.TERMINAL_EFFECT_NT2_BOARD_COMPLETE_EFFECT_ID
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
          v135 = (struct UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                      (AssetData_o *)mTerminalList,
                                                      (System_String_o *)StringLiteral_16937/*"bit_board_appear3"*/,
                                                      (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
          this->fields.nt2BoardAppearEffectPrefab = v135;
          sub_B5D560(
            (BattleServantConfConponent_o *)&this->fields.nt2BoardAppearEffectPrefab,
            (System_Int32_array **)v135,
            v136,
            v137,
            v138,
            v139,
            v140,
            v141);
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
            v90 = &StringLiteral_16971/*"bit_fade_black4"*/;
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
      v63 = &StringLiteral_16942/*"bit_board_disappear5"*/;
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
        v90 = &StringLiteral_16969/*"bit_fade_black2"*/;
        p_nt2BoardAppearEffectFadePrefab = (BattleServantConfConponent_o *)&this->fields.boardDisappearEffectFadePrefab;
LABEL_52:
        v92 = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                       (AssetData_o *)mTerminalList,
                                       (System_String_o *)*v90,
                                       (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
        p_nt2BoardAppearEffectFadePrefab->klass = (BattleServantConfConponent_c *)v92;
        sub_B5D560(p_nt2BoardAppearEffectFadePrefab, v92, v93, v94, v95, v96, v97, v98);
        return;
      }
      goto LABEL_115;
    }
    return;
  }
  if ( !this->fields.effectAssetData )
    return;
  v109 = (UnityEngine_Object_o *)this->fields.boardDisappearEffectPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(v109, 0LL, 0LL) )
  {
    mTerminalList = (ScrTerminalListTop_o *)this->fields.effectAssetData;
    if ( !mTerminalList )
      goto LABEL_115;
    v110 = (struct UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                (AssetData_o *)mTerminalList,
                                                (System_String_o *)StringLiteral_16940/*"bit_board_disappear3"*/,
                                                (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
    this->fields.boardDisappearEffectPrefab = v110;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.boardDisappearEffectPrefab,
      (System_Int32_array **)v110,
      v111,
      v112,
      v113,
      v114,
      v115,
      v116);
  }
  v117 = (UnityEngine_Object_o *)this->fields.boardDisappear2EffectPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(v117, 0LL, 0LL) )
  {
    mTerminalList = (ScrTerminalListTop_o *)this->fields.effectAssetData;
    if ( !mTerminalList )
      goto LABEL_115;
    v108 = &StringLiteral_16941/*"bit_board_disappear4"*/;
LABEL_81:
    v118 = (struct UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                (AssetData_o *)mTerminalList,
                                                (System_String_o *)*v108,
                                                (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
    this->fields.boardDisappear2EffectPrefab = v118;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.boardDisappear2EffectPrefab,
      (System_Int32_array **)v118,
      v119,
      v120,
      v121,
      v122,
      v123,
      v124);
  }
LABEL_82:
  v125 = (UnityEngine_Object_o *)this->fields.boardDisappearEffectFadePrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(v125, 0LL, 0LL) )
  {
    mTerminalList = (ScrTerminalListTop_o *)this->fields.effectAssetData;
    if ( !mTerminalList )
      goto LABEL_115;
    v126 = (struct UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                (AssetData_o *)mTerminalList,
                                                (System_String_o *)StringLiteral_16969/*"bit_fade_black2"*/,
                                                (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
    this->fields.boardDisappearEffectFadePrefab = v126;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.boardDisappearEffectFadePrefab,
      (System_Int32_array **)v126,
      v127,
      v128,
      v129,
      v130,
      v131,
      v132);
  }
  v133 = (UnityEngine_Object_o *)this->fields.ntBoardAppearEffectPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(v133, 0LL, 0LL) )
  {
    mTerminalList = (ScrTerminalListTop_o *)this->fields.effectAssetData;
    if ( mTerminalList )
    {
      v90 = &StringLiteral_16942/*"bit_board_disappear5"*/;
      p_nt2BoardAppearEffectFadePrefab = (BattleServantConfConponent_o *)&this->fields.ntBoardAppearEffectPrefab;
      goto LABEL_52;
    }
LABEL_115:
    sub_B5D69C(mTerminalList, method);
  }
}


void __fastcall QuestBoardListViewManager__SetupDisp(QuestBoardListViewManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_List_QuestBoardListViewObject__o *ObjectList; // x0
  const MethodInfo *v9; // x1
  int size; // w8
  System_Collections_Generic_List_QuestBoardListViewObject__o *v11; // x19
  unsigned int v12; // w20

  if ( (byte_42E8A4A & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestBoardListViewObject__get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestBoardListViewObject__get_Item__, v5, v6, v7);
    byte_42E8A4A = 1;
  }
  ObjectList = QuestBoardListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    goto LABEL_11;
  size = ObjectList->fields._size;
  v11 = ObjectList;
  if ( size >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      if ( size <= v12 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      ObjectList = (System_Collections_Generic_List_QuestBoardListViewObject__o *)v11->fields._items->m_Items[v12];
      if ( !ObjectList )
        break;
      QuestBoardListViewObject__SetupDisp((QuestBoardListViewObject_o *)ObjectList, v9);
      size = v11->fields._size;
      if ( (int)++v12 >= size )
        return;
    }
LABEL_11:
    sub_B5D69C(ObjectList, v9);
  }
}


void __fastcall QuestBoardListViewManager__SetupFortificationWarningDialog(
        QuestBoardListViewManager_o *this,
        int32_t eventId,
        System_Action_o *func,
        const MethodInfo *method)
{
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
  __int64 v18; // x21
  __int64 v19; // x0
  __int64 v20; // x1
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
  System_String_o *v33; // x0
  System_String_o *v34; // x20
  AssetLoader_LoadEndDataHandler_o *v35; // x22
  int32_t v36; // [xsp+Ch] [xbp-24h] BYREF

  v36 = eventId;
  if ( (byte_42E8A60 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, eventId, (_DWORD)func, method);
    sub_B5D5C4(&AssetLoader_LoadEndDataHandler_TypeInfo, v6, v7, v8);
    sub_B5D5C4(
      &Method_QuestBoardListViewManager___c__DisplayClass140_0__SetupFortificationWarningDialog_b__0__,
      v9,
      v10,
      v11);
    sub_B5D5C4(&QuestBoardListViewManager___c__DisplayClass140_0_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_6281/*"EventUI/Prefabs/"*/, v15, v16, v17);
    byte_42E8A60 = 1;
  }
  v18 = sub_B5D694(QuestBoardListViewManager___c__DisplayClass140_0_TypeInfo);
  QuestBoardListViewManager___c__DisplayClass140_0___ctor(
    (QuestBoardListViewManager___c__DisplayClass140_0_o *)v18,
    0LL);
  if ( !v18 )
    sub_B5D69C(v19, v20);
  *(_QWORD *)(v18 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v18 + 16), (System_Int32_array **)this, v21, v22, v23, v24, v25, v26);
  *(_QWORD *)(v18 + 24) = func;
  sub_B5D560((BattleServantConfConponent_o *)(v18 + 24), (System_Int32_array **)func, v27, v28, v29, v30, v31, v32);
  v33 = System_Int32__ToString((int32_t)&v36, 0LL);
  v34 = System_String__Concat_44577788((System_String_o *)StringLiteral_6281/*"EventUI/Prefabs/"*/, v33, 0LL);
  v35 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v35,
    (Il2CppObject *)v18,
    Method_QuestBoardListViewManager___c__DisplayClass140_0__SetupFortificationWarningDialog_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(v34, v35, 1, 0LL) )
    ActionExtensions__Call(*(System_Action_o **)(v18 + 24), 0LL);
}


void __fastcall QuestBoardListViewManager__SetupWhiteMark(QuestBoardListViewManager_o *this, const MethodInfo *method)
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
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  UnityEngine_Object_o *whiteMarkPrefab; // x20
  DataManager_o *Instance; // x0
  __int64 v37; // x1
  WarQuestSelectionEntity_array *Entitys_WarQuestSelectionEntity; // x20
  QuestBoardListViewManager___c_c *v39; // x8
  struct QuestBoardListViewManager___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__139_0; // x21
  Il2CppObject *v42; // x22
  struct QuestBoardListViewManager___c_StaticFields *v43; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  int v50; // w20
  struct ScrTerminalListTop_o *mTerminalList; // x8
  AssetData_o *effectAssetData; // x0
  BattleServantConfConponent_o *p_whiteMarkPrefab; // x19
  System_Int32_array **Object_WarBoardWaitTimeSetting; // x0
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7

  if ( (byte_42E8A5F & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_GameObject____68807504, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_BasicHelper_Any_WarEntity___, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_WarMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataMasterBase_getEntitys_WarEntity___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Func_WarEntity__bool___ctor__, v14, v15, v16);
    sub_B5D5C4(&System_Func_WarEntity__bool__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23, v24, v25);
    sub_B5D5C4(&Method_QuestBoardListViewManager___c__SetupWhiteMark_b__139_0__, v26, v27, v28);
    sub_B5D5C4(&QuestBoardListViewManager___c_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_18449/*"ef_whitepoint"*/, v32, v33, v34);
    byte_42E8A5F = 1;
  }
  whiteMarkPrefab = (UnityEngine_Object_o *)this->fields.whiteMarkPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(whiteMarkPrefab, 0LL, 0LL) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_23;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_WarMaster___);
    if ( !Instance )
      goto LABEL_23;
    Entitys_WarQuestSelectionEntity = DataMasterBase__getEntitys_WarQuestSelectionEntity_(
                                        (DataMasterBase_o *)Instance,
                                        (const MethodInfo_1AE4B20 *)Method_DataMasterBase_getEntitys_WarEntity___);
    v39 = QuestBoardListViewManager___c_TypeInfo;
    if ( (BYTE3(QuestBoardListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewManager___c_TypeInfo);
      v39 = QuestBoardListViewManager___c_TypeInfo;
    }
    static_fields = v39->static_fields;
    _9__139_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__139_0;
    if ( !_9__139_0 )
    {
      if ( (BYTE3(v39->vtable._0_Equals.methodPtr) & 4) != 0 && !v39->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v39);
        static_fields = QuestBoardListViewManager___c_TypeInfo->static_fields;
      }
      v42 = (Il2CppObject *)static_fields->__9;
      _9__139_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_WarEntity__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__139_0,
        v42,
        Method_QuestBoardListViewManager___c__SetupWhiteMark_b__139_0__,
        (const MethodInfo_2C2ECD0 *)Method_System_Func_WarEntity__bool___ctor__);
      v43 = QuestBoardListViewManager___c_TypeInfo->static_fields;
      v43->__9__139_0 = (struct System_Func_WarEntity__bool__o *)_9__139_0;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v43->__9__139_0,
        (System_Int32_array **)_9__139_0,
        v44,
        v45,
        v46,
        v47,
        v48,
        v49);
    }
    Instance = (DataManager_o *)BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
                                  (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)Entitys_WarQuestSelectionEntity,
                                  (System_Func_T__bool__o *)_9__139_0,
                                  (const MethodInfo_1AD6DE0 *)Method_BasicHelper_Any_WarEntity___);
    if ( !this->fields.mTerminalList
      || (v50 = (int)Instance,
          Instance = (DataManager_o *)ScrTerminalListTop__CheckTerminalTopEffect(this->fields.mTerminalList, 0LL),
          (mTerminalList = this->fields.mTerminalList) == 0LL) )
    {
LABEL_23:
      sub_B5D69C(Instance, v37);
    }
    if ( (((_DWORD)Instance != mTerminalList->fields.TERMINAL_WHITE_MARK_EFFECT_APPEAR_EFFECT_ID) & ~v50) == 0 )
    {
      effectAssetData = this->fields.effectAssetData;
      if ( effectAssetData )
      {
        p_whiteMarkPrefab = (BattleServantConfConponent_o *)&this->fields.whiteMarkPrefab;
        Object_WarBoardWaitTimeSetting = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                  effectAssetData,
                                                                  (System_String_o *)StringLiteral_18449/*"ef_whitepoint"*/,
                                                                  (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
        p_whiteMarkPrefab->klass = (BattleServantConfConponent_c *)Object_WarBoardWaitTimeSetting;
        sub_B5D560(p_whiteMarkPrefab, Object_WarBoardWaitTimeSetting, v55, v56, v57, v58, v59, v60);
      }
    }
  }
}


void __fastcall QuestBoardListViewManager__SkipDisapprarFadeEffect(
        QuestBoardListViewManager_o *this,
        float skipTime,
        const MethodInfo *method)
{
  int v3; // w2
  __int64 v4; // x3
  UnityEngine_Object_o *effectDisappearFadeComponent; // x20
  __int64 v8; // x1
  QuestBoardListEffectComponent_o *v9; // x0

  if ( (byte_42E8A6C & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v3, v4);
    byte_42E8A6C = 1;
  }
  effectDisappearFadeComponent = (UnityEngine_Object_o *)this->fields.effectDisappearFadeComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(effectDisappearFadeComponent, 0LL, 0LL) )
  {
    v9 = this->fields.effectDisappearFadeComponent;
    if ( !v9 )
      sub_B5D69C(0LL, v8);
    QuestBoardListEffectComponent__Skip(v9, skipTime, 0LL);
  }
}


bool __fastcall QuestBoardListViewManager__TryGetFlagFromOnEventStart(
        QuestBoardListViewManager_o *this,
        int32_t *flagType,
        EventEntity_o *eventEntity,
        const MethodInfo *method)
{
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  System_Collections_Generic_List_EventTutorialEntity__o *EventTutorialEntity; // x0
  __int64 v13; // x1
  EventTutorialEntity_o *v14; // x8
  bool result; // w0

  if ( (byte_42E8A54 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__,
      (_DWORD)flagType,
      (_DWORD)eventEntity,
      method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_1/*""*/, v9, v10, v11);
    byte_42E8A54 = 1;
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
      v14 = EventTutorialEntity->fields._items->m_Items[0];
      if ( v14 )
      {
        result = 1;
        *flagType = v14->fields.flagType;
        return result;
      }
LABEL_9:
      sub_B5D69C(EventTutorialEntity, v13);
    }
  }
  return 0;
}


bool __fastcall QuestBoardListViewManager__TryGetReleasedFocusQuestId(
        QuestBoardListViewManager_o *this,
        int32_t *questId,
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
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  __int64 v24; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  Il2CppObject *current; // x20
  __int64 v27; // x9
  MapControl_QuestInfo_o *monitor; // x0
  __int64 IsReleaseFocusQuestBoard; // x0
  __int64 v30; // x1
  _DWORD *v31; // x8
  int32_t v32; // w21
  __int64 QuestReleasedFocusState; // x0
  __int64 v34; // x1
  _DWORD *v35; // x8
  char v36; // w20
  int v37; // w19
  System_Collections_Generic_List_Enumerator_T__o v39; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v40; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_42E8A47 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_Any_ListViewItem___, (_DWORD)questId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v15, v16, v17);
    sub_B5D5C4(&QuestBoardListViewItem_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v21, v22, v23);
    byte_42E8A47 = 1;
  }
  memset(&v40, 0, sizeof(v40));
  if ( !System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.itemList,
          (const MethodInfo_1C98BF4 *)Method_System_Linq_Enumerable_Any_ListViewItem___) )
    return 0;
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_B5D69C(0LL, v24);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v39,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v40 = v39;
  while ( 1 )
  {
    if ( !System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v40,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
    {
      v37 = 0;
      v36 = 0;
      goto LABEL_21;
    }
    current = v40.fields.current;
    if ( v40.fields.current )
    {
      v27 = *(&QuestBoardListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v40.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v27
        || (QuestBoardListViewItem_c *)v40.fields.current->klass->_2.typeHierarchy[v27 - 1] != QuestBoardListViewItem_TypeInfo )
      {
        IsReleaseFocusQuestBoard = sub_B5D990(v40.fields.current);
LABEL_23:
        sub_B5D69C(IsReleaseFocusQuestBoard, v30);
      }
      monitor = (MapControl_QuestInfo_o *)v40.fields.current[7].monitor;
      if ( monitor )
      {
        if ( monitor->fields.dispType == 1 )
        {
          IsReleaseFocusQuestBoard = MapControl_QuestInfo__IsReleaseFocusQuestBoard(monitor, 0LL);
          if ( (IsReleaseFocusQuestBoard & 1) != 0 )
          {
            v31 = current[7].monitor;
            if ( !v31 )
              goto LABEL_23;
            v32 = v31[4];
            if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            }
            QuestReleasedFocusState = TerminalPramsManager__GetQuestReleasedFocusState(v32, 0LL);
            if ( !(_DWORD)QuestReleasedFocusState )
              break;
          }
        }
      }
    }
  }
  v35 = current[7].monitor;
  if ( !v35 )
    sub_B5D69C(QuestReleasedFocusState, v34);
  v36 = 1;
  *questId = v35[4];
  v37 = 2;
LABEL_21:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v40,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  return (v37 == 2) & v36;
}


void __fastcall QuestBoardListViewManager__Update(QuestBoardListViewManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  ListViewManager__Update((ListViewManager_o *)this, 0LL);
  QuestBoardListViewManager__UpdateAlphaAnim(this, v3);
}


void __fastcall QuestBoardListViewManager__UpdateAlphaAnim(QuestBoardListViewManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  TransitionCalculator_float__o *rewardIconAlphaCalculator; // x0
  __int64 v9; // x1
  float v10; // s0
  AlphaTransitionCalculator_o *v11; // x0
  float realtimeSinceStartup; // s0
  float mAlphaAnimTimeOld; // s9
  float v14; // s8
  QuestBoardListViewManager_c *v15; // x0
  const MethodInfo *v16; // x1
  float v17; // s0
  int32_t mAlphaAnimCnt; // w8
  int32_t v19; // w21
  QuestBoardListViewManager_c *v20; // x0
  int32_t ALPHA_ANIM_COUNT_RESET_VAL; // w8
  int32_t v22; // w21

  if ( (byte_42E8A52 & 1) == 0 )
  {
    sub_B5D5C4(&QuestBoardListViewManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_TransitionCalculator_float__Update__, v5, v6, v7);
    byte_42E8A52 = 1;
  }
  rewardIconAlphaCalculator = (TransitionCalculator_float__o *)this->fields.rewardIconAlphaCalculator;
  if ( rewardIconAlphaCalculator )
  {
    v10 = TransitionCalculator_float___Update(
            rewardIconAlphaCalculator,
            (const MethodInfo_264E3D0 *)Method_TransitionCalculator_float__Update__);
    v11 = this->fields.rewardIconAlphaCalculator;
    this->fields.mAlphaAnimNow = v10;
    if ( !v11 )
      goto LABEL_25;
    if ( AlphaTransitionCalculator__IsFadeInFinished(v11, 0LL) )
    {
      realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0LL);
      mAlphaAnimTimeOld = this->fields.mAlphaAnimTimeOld;
      v14 = realtimeSinceStartup;
      v15 = QuestBoardListViewManager_TypeInfo;
      if ( (BYTE3(QuestBoardListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestBoardListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewManager_TypeInfo);
        v15 = QuestBoardListViewManager_TypeInfo;
      }
      if ( (float)(v14 - mAlphaAnimTimeOld) >= v15->static_fields->ALPHA_ANIM_TIME_INTERVAL )
      {
        v11 = this->fields.rewardIconAlphaCalculator;
        if ( v11 )
        {
          AlphaTransitionCalculator__StartFadeOut(v11, 0LL);
          return;
        }
LABEL_25:
        sub_B5D69C(v11, v9);
      }
    }
    else
    {
      v11 = this->fields.rewardIconAlphaCalculator;
      if ( !v11 )
        goto LABEL_25;
      if ( AlphaTransitionCalculator__IsFadeOutFinished(v11, 0LL) )
      {
        v11 = this->fields.rewardIconAlphaCalculator;
        if ( !v11 )
          goto LABEL_25;
        AlphaTransitionCalculator__StartFadeIn(v11, 0LL);
        v17 = UnityEngine_Time__get_realtimeSinceStartup(0LL);
        mAlphaAnimCnt = this->fields.mAlphaAnimCnt;
        this->fields.mAlphaAnimTimeOld = v17;
        v19 = mAlphaAnimCnt + 1;
        this->fields.mAlphaAnimCnt = mAlphaAnimCnt + 1;
        v20 = QuestBoardListViewManager_TypeInfo;
        if ( (BYTE3(QuestBoardListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !QuestBoardListViewManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewManager_TypeInfo);
          v20 = QuestBoardListViewManager_TypeInfo;
        }
        ALPHA_ANIM_COUNT_RESET_VAL = v20->static_fields->ALPHA_ANIM_COUNT_RESET_VAL;
        if ( v19 >= ALPHA_ANIM_COUNT_RESET_VAL )
        {
          v22 = this->fields.mAlphaAnimCnt;
          if ( (BYTE3(v20->vtable._0_Equals.methodPtr) & 4) != 0 && !v20->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v20);
            ALPHA_ANIM_COUNT_RESET_VAL = QuestBoardListViewManager_TypeInfo->static_fields->ALPHA_ANIM_COUNT_RESET_VAL;
          }
          this->fields.mAlphaAnimCnt = v22 - ALPHA_ANIM_COUNT_RESET_VAL;
        }
        QuestBoardListViewManager__OnChangeAlphaAnim(this, v16);
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

  if ( (byte_42E8A44 & 1) == 0 )
  {
    sub_B5D5C4(&QuestBoardListViewManager__WaitFinish_d__95_TypeInfo, (_DWORD)endAct, (_DWORD)method, v3);
    byte_42E8A44 = 1;
  }
  v6 = sub_B5D694(QuestBoardListViewManager__WaitFinish_d__95_TypeInfo);
  QuestBoardListViewManager__WaitFinish_d__95___ctor((QuestBoardListViewManager__WaitFinish_d__95_o *)v6, 0, 0LL);
  if ( !v6 )
    sub_B5D69C(v7, v8);
  *(_QWORD *)(v6 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14);
  *(_QWORD *)(v6 + 40) = endAct;
  sub_B5D560((BattleServantConfConponent_o *)(v6 + 40), (System_Int32_array **)endAct, v15, v16, v17, v18, v19, v20);
  return (System_Collections_IEnumerator_o *)v6;
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
    sub_B5D69C(mFolderBg, method);
  }
  LODWORD(mFolderBg[1].klass) = 1;
}


void __fastcall QuestBoardListViewManager___BGChangeEffect_b__132_1(
        QuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  char *mFolderBgTemp; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_Int32_array **v13; // x1

  if ( (byte_42E8A76 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_11537/*"RemoveTempBG"*/, (_DWORD)method, v2, v3);
    byte_42E8A76 = 1;
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
    sub_B5D69C(mFolderBgTemp, method);
  }
  *((_DWORD *)mFolderBgTemp + 6) = 0;
  v13 = (System_Int32_array **)StringLiteral_11537/*"RemoveTempBG"*/;
  *((_QWORD *)mFolderBgTemp + 10) = StringLiteral_11537/*"RemoveTempBG"*/;
  sub_B5D560((BattleServantConfConponent_o *)(mFolderBgTemp + 80), v13, v7, v8, v9, v10, v11, v12);
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
    sub_B5D69C(mFolderBg, *(_QWORD *)&inOut);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  UnityEngine_Component_o *mFolderBg; // x0
  int32_t mRequestedBGid; // w21
  ExUITexture_o *v14; // x21
  Il2CppObject *v15; // x0
  ExUITexture_o *v16; // x20
  System_String_o *v17; // x21
  const MethodInfo *v18; // x1
  int32_t v19; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42E8A59 & 1) == 0 )
  {
    sub_B5D5C4(&FSUtility_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&int_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_2708/*"Back/back{0}"*/, v9, v10, v11);
    byte_42E8A59 = 1;
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
  v14 = this->fields.mFolderBg;
  v19 = this->fields.mRequestedBGid;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19);
  mFolderBg = (UnityEngine_Component_o *)System_String__Format((System_String_o *)StringLiteral_2708/*"Back/back{0}"*/, v15, 0LL);
  if ( !v14 )
LABEL_15:
    sub_B5D69C(mFolderBg, callback);
  ExUITexture__SetAssetImage(v14, (System_String_o *)mFolderBg, callback, 0LL);
  v16 = this->fields.mFolderBg;
  v17 = System_Int32__ToString((int)this + 560, 0LL);
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  FSUtility__SetUpBackTextureSize(v16, v17, 0LL);
LABEL_12:
  if ( this->fields.mFaded )
    QuestBoardListViewManager__RemoveTempBG(this, v18);
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
    sub_B5D69C(0LL, method);
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
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v29; // x19
  __int64 v30; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v33; // x0
  __int64 v34; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v38; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_42E8A40 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_QuestBoardListViewObject___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestBoardListViewObject__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestBoardListViewObject___ctor__, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_QuestBoardListViewObject__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v26, v27, v28);
    byte_42E8A40 = 1;
  }
  memset(&v38, 0, sizeof(v38));
  v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_QuestBoardListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v29,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_QuestBoardListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B5D69C(0LL, v30);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v37,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v38 = v37;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v38,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v38.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v33 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v33 )
    {
      if ( !current )
        sub_B5D69C(v33, v34);
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_QuestBoardListViewObject___);
      if ( !v29 )
        sub_B5D69C(Component_srcLineSprite, Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v29,
        Component_srcLineSprite,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_QuestBoardListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v38,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_QuestBoardListViewObject__o *)v29;
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
    sub_B5D69C(mFolderBg, method);
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
  int v2; // w2
  __int64 v3; // x3
  QuestBoardListViewManager__CoroutineLoadAsset_d__136_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int32_t _1__state; // w8
  struct QuestBoardListViewManager_o *_4__this; // x20
  Il2CppObject *v46; // x22
  struct QuestBoardListViewManager___c__DisplayClass136_0_o **p__8__1; // x21
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  Il2CppObject *v60; // x1
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  struct QuestBoardListViewManager_o *onCompleteLoad; // x1
  EventEntity_array *EnableEntityList; // x22
  int max_length; // w8
  EventRewardSceneMaster_o *v70; // x23
  unsigned int v71; // w24
  EventEntity_o *v72; // x25
  struct QuestBoardListViewManager___c__DisplayClass136_0_o *_8__1; // x21
  AssetLoader_LoadEndDataHandler_o *v74; // x20
  struct QuestBoardListViewManager___c__DisplayClass136_0_o *v75; // x8
  bool result; // w0
  struct QuestBoardListViewManager___c__DisplayClass136_0_o *v77; // x22
  int32_t id; // w21
  System_Action_o *_9__2; // x23
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  Il2CppObject *v86; // x20
  System_Func_bool__o *v87; // x21
  UnityEngine_WaitUntil_o *v88; // x20
  System_String_array **v89; // x2
  System_String_array **v90; // x3
  System_Boolean_array **v91; // x4
  System_Int32_array **v92; // x5
  System_Int32_array *v93; // x6
  System_Int32_array *v94; // x7
  __int64 v95; // x0

  v4 = this;
  if ( (byte_42E7EEB & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&AssetManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMaster_EventMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataManager_GetMaster_EventRewardSceneMaster___, v11, v12, v13);
    sub_B5D5C4(&DataManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_System_Func_bool___ctor__, v17, v18, v19);
    sub_B5D5C4(&System_Func_bool__TypeInfo, v20, v21, v22);
    sub_B5D5C4(&AssetLoader_LoadEndDataHandler_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&Method_QuestBoardListViewManager___c__DisplayClass136_0__CoroutineLoadAsset_b__0__, v26, v27, v28);
    sub_B5D5C4(&Method_QuestBoardListViewManager___c__DisplayClass136_0__CoroutineLoadAsset_b__1__, v29, v30, v31);
    sub_B5D5C4(&Method_QuestBoardListViewManager___c__DisplayClass136_0__CoroutineLoadAsset_b__2__, v32, v33, v34);
    sub_B5D5C4(&QuestBoardListViewManager___c__DisplayClass136_0_TypeInfo, v35, v36, v37);
    sub_B5D5C4(&UnityEngine_WaitUntil_TypeInfo, v38, v39, v40);
    this = (QuestBoardListViewManager__CoroutineLoadAsset_d__136_o *)sub_B5D5C4(&StringLiteral_13758/*"Terminal/Effect"*/, v41, v42, v43);
    byte_42E7EEB = 1;
  }
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state == 1 )
  {
    v4->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_39;
    method = (const MethodInfo *)_4__this->fields.effectAssetData;
    _8__1 = v4->fields.__8__1;
    if ( method )
    {
      if ( !_8__1 )
        goto LABEL_39;
      QuestBoardListViewManager__OnCompleteAssetData(_4__this, (AssetData_o *)method, _8__1->fields.onCompleteLoad, 0LL);
    }
    else
    {
      v74 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v74,
        (Il2CppObject *)_8__1,
        Method_QuestBoardListViewManager___c__DisplayClass136_0__CoroutineLoadAsset_b__1__,
        0LL);
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      this = (QuestBoardListViewManager__CoroutineLoadAsset_d__136_o *)AssetManager__loadAssetStorage(
                                                                         (System_String_o *)StringLiteral_13758/*"Terminal/Effect"*/,
                                                                         v74,
                                                                         1,
                                                                         0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        v75 = v4->fields.__8__1;
        if ( !v75 )
          goto LABEL_39;
        ActionExtensions__Call(v75->fields.onCompleteLoad, 0LL);
      }
    }
    return 0;
  }
  if ( _1__state )
    return 0;
  v4->fields.__1__state = -1;
  v46 = (Il2CppObject *)sub_B5D694(QuestBoardListViewManager___c__DisplayClass136_0_TypeInfo);
  System_Object___ctor(v46, 0LL);
  p__8__1 = &v4->fields.__8__1;
  v4->fields.__8__1 = (struct QuestBoardListViewManager___c__DisplayClass136_0_o *)v46;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v4->fields.__8__1,
    (System_Int32_array **)v46,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  this = (QuestBoardListViewManager__CoroutineLoadAsset_d__136_o *)v4->fields.__8__1;
  if ( !this )
    goto LABEL_39;
  v60 = (Il2CppObject *)v4->fields.__4__this;
  this->fields.__2__current = v60;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.__2__current,
    (System_Int32_array **)v60,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
  this = (QuestBoardListViewManager__CoroutineLoadAsset_d__136_o *)v4->fields.__8__1;
  if ( !this )
    goto LABEL_39;
  onCompleteLoad = (struct QuestBoardListViewManager_o *)v4->fields.onCompleteLoad;
  this->fields.__4__this = onCompleteLoad;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.__4__this,
    (System_Int32_array **)onCompleteLoad,
    v61,
    v62,
    v63,
    v64,
    v65,
    v66);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (QuestBoardListViewManager__CoroutineLoadAsset_d__136_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventMaster___);
  if ( !this )
    goto LABEL_39;
  EnableEntityList = EventMaster__GetEnableEntityList((EventMaster_o *)this, 12, 1, 0LL);
  this = (QuestBoardListViewManager__CoroutineLoadAsset_d__136_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventRewardSceneMaster___);
  if ( !*p__8__1 )
    goto LABEL_39;
  (*p__8__1)->fields.flag = 1;
  if ( !EnableEntityList )
    goto LABEL_39;
  max_length = EnableEntityList->max_length;
  if ( max_length >= 1 )
  {
    v70 = (EventRewardSceneMaster_o *)this;
    v71 = 0;
    while ( 1 )
    {
      if ( v71 >= max_length )
      {
        v95 = sub_B5D6C8(this);
        sub_B5D668(v95, 0LL);
      }
      v72 = EnableEntityList->m_Items[v71];
      if ( !v72 || !v70 )
        goto LABEL_39;
      this = (QuestBoardListViewManager__CoroutineLoadAsset_d__136_o *)EventRewardSceneMaster__getEntityFromIdAndEventType(
                                                                         v70,
                                                                         v72->fields.id,
                                                                         15,
                                                                         0LL);
      if ( this )
        break;
      max_length = EnableEntityList->max_length;
      if ( (int)++v71 >= max_length )
        goto LABEL_38;
    }
    if ( *p__8__1 )
    {
      (*p__8__1)->fields.flag = 0;
      v77 = *p__8__1;
      if ( *p__8__1 )
      {
        id = v72->fields.id;
        _9__2 = v77->fields.__9__2;
        if ( !_9__2 )
        {
          _9__2 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
          System_Action___ctor(
            _9__2,
            (Il2CppObject *)v77,
            Method_QuestBoardListViewManager___c__DisplayClass136_0__CoroutineLoadAsset_b__2__,
            0LL);
          v77->fields.__9__2 = _9__2;
          sub_B5D560(
            (BattleServantConfConponent_o *)&v77->fields.__9__2,
            (System_Int32_array **)_9__2,
            v80,
            v81,
            v82,
            v83,
            v84,
            v85);
        }
        if ( _4__this )
        {
          QuestBoardListViewManager__SetupFortificationWarningDialog(_4__this, id, _9__2, 0LL);
          goto LABEL_38;
        }
      }
    }
LABEL_39:
    sub_B5D69C(this, method);
  }
LABEL_38:
  v86 = (Il2CppObject *)v4->fields.__8__1;
  v87 = (System_Func_bool__o *)sub_B5D694(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v87,
    v86,
    Method_QuestBoardListViewManager___c__DisplayClass136_0__CoroutineLoadAsset_b__0__,
    (const MethodInfo_278D9C4 *)Method_System_Func_bool___ctor__);
  v88 = (UnityEngine_WaitUntil_o *)sub_B5D694(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v88, v87, 0LL);
  v4->fields.__2__current = (Il2CppObject *)v88;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v4->fields.__2__current,
    (System_Int32_array **)v88,
    v89,
    v90,
    v91,
    v92,
    v93,
    v94);
  result = 1;
  v4->fields.__1__state = 1;
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_QuestBoardListViewManager__CoroutineLoadAsset_d__136_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
      sub_B5D69C(this, method);
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
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.__2__current, 0LL, v2, v3, v4, v5, v6, v7);
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_QuestBoardListViewManager__WaitFinish_d__95_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42E7EE1 & 1) == 0 )
  {
    sub_B5D5C4(&QuestBoardListViewManager___c_TypeInfo, v1, v2, v3);
    byte_42E7EE1 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(QuestBoardListViewManager___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = (BattleServantConfConponent_o *)QuestBoardListViewManager___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B5D560(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
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
  __int64 v3; // x3
  int32_t lastQuestId; // w19

  if ( (byte_42E7EE2 & 1) == 0 )
  {
    this = (QuestBoardListViewManager___c_o *)sub_B5D5C4(&CondType_TypeInfo, (_DWORD)entity, (_DWORD)method, v3);
    byte_42E7EE2 = 1;
  }
  if ( !entity )
    sub_B5D69C(this, entity);
  if ( !WarEntity__IsBlackMarkWithClear(entity, 0LL) )
    return 0;
  lastQuestId = entity->fields.lastQuestId;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestClear_25877652(lastQuestId, -1, 0, 0LL);
}


bool __fastcall QuestBoardListViewManager___c___SetupWhiteMark_b__139_0(
        QuestBoardListViewManager___c_o *this,
        WarEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int32_t lastQuestId; // w20

  if ( (byte_42E7EE3 & 1) == 0 )
  {
    this = (QuestBoardListViewManager___c_o *)sub_B5D5C4(&CondType_TypeInfo, (_DWORD)entity, (_DWORD)method, v3);
    byte_42E7EE3 = 1;
  }
  if ( !entity )
    sub_B5D69C(this, entity);
  if ( !WarEntity__IsWhiteMarkWithClear(entity, 0LL) )
    return WarEntity__IsDispWhiteMarkUnderBoard(entity, 0LL);
  lastQuestId = entity->fields.lastQuestId;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestClear_25877652(lastQuestId, -1, 0, 0LL) || WarEntity__IsDispWhiteMarkUnderBoard(entity, 0LL);
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
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  __int64 v17; // x20
  struct QuestBoardListViewManager_o *_4__this; // x0
  __int64 v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  System_Int32_array **Component_UIWidget; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  float infoTime; // s8
  SlideFadeObject_o *v35; // x21
  float OUT_POS_OFS_X; // s9
  System_Action_o *v37; // x22

  if ( (byte_42E7EE4 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___, v5, v6, v7);
    sub_B5D5C4(&QuestBoardListViewManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_QuestBoardListViewManager___c__DisplayClass104_1__RequestListObject_b__2__, v11, v12, v13);
    sub_B5D5C4(&QuestBoardListViewManager___c__DisplayClass104_1_TypeInfo, v14, v15, v16);
    byte_42E7EE4 = 1;
  }
  v17 = sub_B5D694(QuestBoardListViewManager___c__DisplayClass104_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  if ( !v17 )
    goto LABEL_14;
  *(_QWORD *)(v17 + 24) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v17 + 24), (System_Int32_array **)this, v20, v21, v22, v23, v24, v25);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)_4__this, 0LL);
  Component_UIWidget = (System_Int32_array **)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                gameObject,
                                                (const MethodInfo_1E5984C *)Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
  *(_QWORD *)(v17 + 16) = Component_UIWidget;
  sub_B5D560((BattleServantConfConponent_o *)(v17 + 16), Component_UIWidget, v28, v29, v30, v31, v32, v33);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  infoTime = 0.0;
  if ( !this->fields.isFadeOnTop && !_4__this->fields.mFaded )
    infoTime = _4__this->fields.infoTime;
  QuestBoardListViewManager__bgAlphaFade(_4__this, _4__this->fields.initMode, infoTime, 0LL);
  v35 = *(SlideFadeObject_o **)(v17 + 16);
  if ( (BYTE3(QuestBoardListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewManager_TypeInfo);
  }
  OUT_POS_OFS_X = QuestBoardListViewManager__get_OUT_POS_OFS_X(0LL);
  v37 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v37,
    (Il2CppObject *)v17,
    Method_QuestBoardListViewManager___c__DisplayClass104_1__RequestListObject_b__2__,
    0LL);
  if ( !v35
    || (SlideFadeObject__SlideIn_23386792(v35, OUT_POS_OFS_X, infoTime, 0.0, v37, 0LL),
        (_4__this = this->fields.__4__this) == 0LL) )
  {
LABEL_14:
    sub_B5D69C(_4__this, v19);
  }
  QuestBoardListViewManager__ResetAlphaAnimTime(_4__this, 0LL);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass104_0___RequestListObject_b__1(
        QuestBoardListViewManager___c__DisplayClass104_0_o *this,
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
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  UnityEngine_Component_o *_4__this; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  struct QuestBoardListViewManager_o *v22; // x8
  SlideFadeObject_o *v23; // x20
  struct QuestBoardListViewManager_o *v24; // x20
  CommonUI_o *v25; // x20
  AvalonSceneManager_c *v26; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *_9__4; // x21
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Action_o *_9__5; // x21
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7

  if ( (byte_42E7EE5 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11, v12, v13);
    sub_B5D5C4(&Method_QuestBoardListViewManager___c__DisplayClass104_0__RequestListObject_b__4__, v14, v15, v16);
    sub_B5D5C4(&Method_QuestBoardListViewManager___c__DisplayClass104_0__RequestListObject_b__5__, v17, v18, v19);
    byte_42E7EE5 = 1;
  }
  _4__this = (UnityEngine_Component_o *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_20;
  gameObject = UnityEngine_Component__get_gameObject(_4__this, 0LL);
  _4__this = (UnityEngine_Component_o *)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                          gameObject,
                                          (const MethodInfo_1E5984C *)Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
  v22 = this->fields.__4__this;
  if ( !v22 )
    goto LABEL_20;
  v23 = (SlideFadeObject_o *)_4__this;
  QuestBoardListViewManager__bgAlphaFade(this->fields.__4__this, v22->fields.initMode, 0.0, 0LL);
  if ( !v23 )
    goto LABEL_20;
  SlideFadeObject__ResetPosition(v23, 0LL);
  v24 = this->fields.__4__this;
  if ( !v24 )
    goto LABEL_20;
  if ( v24->fields.mFaded )
  {
    v24->fields.mFaded = 0;
    _4__this = (UnityEngine_Component_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v25 = (CommonUI_o *)_4__this;
    v26 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v26 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v26->static_fields->DEFAULT_FADE_TIME;
    _9__4 = this->fields.__9__4;
    if ( !_9__4 )
    {
      _9__4 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(
        _9__4,
        (Il2CppObject *)this,
        Method_QuestBoardListViewManager___c__DisplayClass104_0__RequestListObject_b__4__,
        0LL);
      this->fields.__9__4 = _9__4;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.__9__4,
        (System_Int32_array **)_9__4,
        v29,
        v30,
        v31,
        v32,
        v33,
        v34);
    }
    if ( v25 )
    {
      CommonUI__maskFadein(v25, DEFAULT_FADE_TIME, _9__4, 0LL);
      goto LABEL_18;
    }
LABEL_20:
    sub_B5D69C(_4__this, method);
  }
  _9__5 = this->fields.__9__5;
  if ( !_9__5 )
  {
    _9__5 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      _9__5,
      (Il2CppObject *)this,
      Method_QuestBoardListViewManager___c__DisplayClass104_0__RequestListObject_b__5__,
      0LL);
    this->fields.__9__5 = _9__5;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.__9__5,
      (System_Int32_array **)_9__5,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41);
  }
  QuestBoardListViewManager__SetMode(v24, 2, _9__5, 0, 0, 0LL);
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
    sub_B5D69C(0LL, method);
  QuestBoardListViewManager__EndSlideIn(_4__this, this->fields.end_act, this->fields.isNotInit, 0LL);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass104_0___RequestListObject_b__4(
        QuestBoardListViewManager___c__DisplayClass104_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  QuestBoardListViewManager___c__DisplayClass104_0_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Action_o *_9__6; // x21
  QuestBoardListViewManager_o *_4__this; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  v4 = this;
  if ( (byte_42E7EE6 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    this = (QuestBoardListViewManager___c__DisplayClass104_0_o *)sub_B5D5C4(
                                                                   &Method_QuestBoardListViewManager___c__DisplayClass104_0__RequestListObject_b__6__,
                                                                   v5,
                                                                   v6,
                                                                   v7);
    byte_42E7EE6 = 1;
  }
  _9__6 = v4->fields.__9__6;
  _4__this = v4->fields.__4__this;
  if ( !_9__6 )
  {
    _9__6 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      _9__6,
      (Il2CppObject *)v4,
      Method_QuestBoardListViewManager___c__DisplayClass104_0__RequestListObject_b__6__,
      0LL);
    v4->fields.__9__6 = _9__6;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v4->fields.__9__6,
      (System_Int32_array **)_9__6,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  if ( !_4__this )
    sub_B5D69C(this, method);
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
  int v2; // w2
  __int64 v3; // x3
  QuestBoardListViewManager___c__DisplayClass104_0_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Action_o *_9__10; // x21
  QuestBoardListViewManager_o *_4__this; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  v4 = this;
  if ( (byte_42E7EE7 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    this = (QuestBoardListViewManager___c__DisplayClass104_0_o *)sub_B5D5C4(
                                                                   &Method_QuestBoardListViewManager___c__DisplayClass104_0__RequestListObject_b__10__,
                                                                   v5,
                                                                   v6,
                                                                   v7);
    byte_42E7EE7 = 1;
  }
  _9__10 = v4->fields.__9__10;
  _4__this = v4->fields.__4__this;
  if ( !_9__10 )
  {
    _9__10 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      _9__10,
      (Il2CppObject *)v4,
      Method_QuestBoardListViewManager___c__DisplayClass104_0__RequestListObject_b__10__,
      0LL);
    v4->fields.__9__10 = _9__10;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v4->fields.__9__10,
      (System_Int32_array **)_9__10,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  if ( !_4__this )
    sub_B5D69C(this, method);
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
  SlideFadeObject_o *sfo; // x0
  struct QuestBoardListViewManager___c__DisplayClass104_0_o *CS___8__locals1; // x8
  CommonUI_o *v16; // x20
  AvalonSceneManager_c *v17; // x8
  struct QuestBoardListViewManager___c__DisplayClass104_0_o *v18; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *_9__3; // x21
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7

  if ( (byte_42E7EE8 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&Method_QuestBoardListViewManager___c__DisplayClass104_0__RequestListObject_b__3__, v11, v12, v13);
    byte_42E7EE8 = 1;
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
    sfo = (SlideFadeObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v16 = (CommonUI_o *)sfo;
    v17 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v17 = AvalonSceneManager_TypeInfo;
    }
    v18 = this->fields.CS___8__locals1;
    if ( v18 )
    {
      DEFAULT_FADE_TIME = v17->static_fields->DEFAULT_FADE_TIME;
      _9__3 = v18->fields.__9__3;
      if ( !_9__3 )
      {
        _9__3 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
        System_Action___ctor(
          _9__3,
          (Il2CppObject *)v18,
          Method_QuestBoardListViewManager___c__DisplayClass104_0__RequestListObject_b__3__,
          0LL);
        v18->fields.__9__3 = _9__3;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v18->fields.__9__3,
          (System_Int32_array **)_9__3,
          v21,
          v22,
          v23,
          v24,
          v25,
          v26);
      }
      if ( v16 )
      {
        CommonUI__maskFadein(v16, DEFAULT_FADE_TIME, _9__3, 0LL);
        return;
      }
    }
LABEL_16:
    sub_B5D69C(sfo, method);
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
    sub_B5D69C(this, method);
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
    sub_B5D69C(0LL, method);
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
    sub_B5D69C(this, method);
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
    sub_B5D69C(0LL, result);
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
    sub_B5D69C(0LL, data);
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
  __int64 v3; // x3
  QuestBoardListViewManager___c__DisplayClass140_0_o *v5; // x19
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
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  struct QuestBoardListViewManager_o *_4__this; // x8
  UILabel_o *v25; // x21
  struct QuestBoardListViewManager_o *v26; // x20
  UnityEngine_Transform_o *transform; // x22
  System_Int32_array **v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  struct QuestBoardListViewManager_o *v35; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct QuestBoardListViewManager_o *v37; // x8
  UnityEngine_GameObject_o *v38; // x0
  struct QuestBoardListViewManager_o *v39; // x8

  v5 = this;
  if ( (byte_42E7EE9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_GameObject____68807504, (_DWORD)assetData, (_DWORD)method, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_FortificationWarningDialogComponent___, v6, v7, v8);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject____68882800, v9, v10, v11);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v12, v13, v14);
    this = (QuestBoardListViewManager___c__DisplayClass140_0_o *)sub_B5D5C4(&StringLiteral_6849/*"FortificationWarningDialog"*/, v15, v16, v17);
    byte_42E7EE9 = 1;
  }
  if ( !assetData )
    goto LABEL_18;
  this = (QuestBoardListViewManager___c__DisplayClass140_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                 assetData,
                                                                 (System_String_o *)StringLiteral_6849/*"FortificationWarningDialog"*/,
                                                                 (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
  _4__this = v5->fields.__4__this;
  if ( !_4__this )
    goto LABEL_18;
  v25 = (UILabel_o *)this;
  _4__this->fields.fortificationAssetData = assetData;
  sub_B5D560(
    (BattleServantConfConponent_o *)&_4__this->fields.fortificationAssetData,
    (System_Int32_array **)assetData,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v26 = v5->fields.__4__this;
  if ( !v26 )
    goto LABEL_18;
  this = (QuestBoardListViewManager___c__DisplayClass140_0_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)v5->fields.__4__this,
                                                                 0LL);
  if ( !this )
    goto LABEL_18;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v28 = (System_Int32_array **)UnityEngine_Object__Instantiate_UILabel_(
                                 v25,
                                 transform,
                                 (const MethodInfo_1E66414 *)Method_UnityEngine_Object_Instantiate_GameObject____68882800);
  v26->fields.fortificationWarningDialog = (struct UnityEngine_GameObject_o *)v28;
  sub_B5D560((BattleServantConfConponent_o *)&v26->fields.fortificationWarningDialog, v28, v29, v30, v31, v32, v33, v34);
  v35 = v5->fields.__4__this;
  if ( !v35 )
    goto LABEL_18;
  this = (QuestBoardListViewManager___c__DisplayClass140_0_o *)v35->fields.fortificationWarningDialog;
  if ( !this )
    goto LABEL_18;
  gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)this, 0LL);
  GameObjectExtensions__ResetPosition(gameObject, 0LL);
  v37 = v5->fields.__4__this;
  if ( !v37
    || (this = (QuestBoardListViewManager___c__DisplayClass140_0_o *)v37->fields.fortificationWarningDialog) == 0LL
    || (v38 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)this, 0LL),
        GameObjectExtensions__ResetLocalScale(v38, 0LL),
        (v39 = v5->fields.__4__this) == 0LL)
    || (this = (QuestBoardListViewManager___c__DisplayClass140_0_o *)v39->fields.fortificationWarningDialog) == 0LL
    || (this = (QuestBoardListViewManager___c__DisplayClass140_0_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                       (UnityEngine_GameObject_o *)this,
                                                                       (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_FortificationWarningDialogComponent___)) == 0LL )
  {
LABEL_18:
    sub_B5D69C(this, assetData);
  }
  FortificationWarningDialogComponent__Init((FortificationWarningDialogComponent_o *)this, 0LL);
  ActionExtensions__Call(v5->fields.func, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Component_o *effectComponent; // x0
  UnityEngine_Object_o *gameObject; // x21
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_Action_o *endAct; // x0

  if ( (byte_42E7EEA & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7EEA = 1;
  }
  effectComponent = (UnityEngine_Component_o *)this->fields.effectComponent;
  if ( !effectComponent )
    sub_B5D69C(0LL, method);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(effectComponent, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
  this->fields.effectComponent = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.effectComponent, 0LL, v7, v8, v9, v10, v11, v12);
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
    sub_B5D69C(this, method);
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
    sub_B5D69C(v3, v4);
  --_4__this->fields.waitCount;
}