void QuestBoardListViewManager___cctor(const MethodInfo *method)
{
  struct QuestBoardListViewManager_StaticFields *static_fields; // x8

  if ( (byte_596D2C8 & 1) == 0 )
  {
    sub_2213A60(&QuestBoardListViewManager_TypeInfo);
    byte_596D2C8 = 1;
  }
  static_fields = QuestBoardListViewManager_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->INTO_TIME = xmmword_E9CC00;
  *(_QWORD *)&static_fields->ALPHA_ANIM_SPD_RATE = 0x404000003F000000LL;
  *(_QWORD *)&static_fields->DEFAULT_SCROLL_VIEW_DEPTH = 0x700000016LL;
  static_fields->ALPHA_ANIM_COUNT_RESET_VAL = 232792560;
}


void QuestBoardListViewManager___ctor(QuestBoardListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_ListViewItem__c *v3; // x0
  System_Collections_Generic_List_object__o *v4; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  System_Collections_Generic_List_object__o *v11; // x20
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_596D2C7 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem___ctor__);
    sub_2213A60(&System_Collections_Generic_List_ListViewItem__TypeInfo);
    byte_596D2C7 = 1;
  }
  v3 = System_Collections_Generic_List_ListViewItem__TypeInfo;
  this->fields.currentObjectId = -1;
  v4 = (System_Collections_Generic_List_object__o *)sub_2213CCC(v3);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  this->fields.topItemList = (struct System_Collections_Generic_List_ListViewItem__o *)v4;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.topItemList, (int32_t)v4, v5, v6, v7, v8, v9, v10);
  v11 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  this->fields.bottomItemList = (struct System_Collections_Generic_List_ListViewItem__o *)v11;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.bottomItemList,
    (int32_t)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void QuestBoardListViewManager__Awake(QuestBoardListViewManager_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  Il2CppObject *Component_object; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  UnityEngine_GameObject_o *v12; // x0
  struct UnityEngine_GameObject_o *v13; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7

  if ( (byte_596D281 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    byte_596D281 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_11;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                             gameObject,
                                             (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !gameObject )
    goto LABEL_11;
  this->fields.mBaseClipRange = (float)SHIDWORD(gameObject[7].klass);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_11;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  this->fields.mBoxCollider = (struct UnityEngine_BoxCollider_o *)Component_object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mBoxCollider,
    (int32_t)Component_object,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  gameObject = (UnityEngine_GameObject_o *)this->fields.mBoxCollider;
  if ( !gameObject )
    goto LABEL_11;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.mNoneLabel;
  if ( !gameObject
    || (v12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0),
        (gameObject = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(v12, 0)) == 0)
    || (v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0),
        this->fields.mNoneLabelParent = v13,
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.mNoneLabelParent,
          (int32_t)v13,
          v14,
          v15,
          v16,
          v17,
          v18,
          v19),
        (gameObject = this->fields.mNoneLabelParent) == 0) )
  {
LABEL_11:
    sub_2213CDC(gameObject, v4);
  }
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void QuestBoardListViewManager__BGChangeEffect(
        QuestBoardListViewManager_o *this,
        int32_t bgID,
        int32_t effectType,
        float time,
        const MethodInfo *method)
{
  UnityEngine_Component_o *mFolderBg; // x0
  const MethodInfo *v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  Il2CppObject *gameObject; // x21
  UnityEngine_GameObject_o *v14; // x21
  UnityEngine_Component_o *parent; // x0
  Il2CppObject *Component_object; // x0
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  struct ExUITexture_o *v23; // x21
  Il2CppObject *v24; // x0
  System_String_o *v25; // x20
  System_Action_o *v26; // x0
  intptr_t *v27; // x8
  float v28; // s0
  bool v29; // zf
  __int64 v30; // x0
  Il2CppObject *v31; // x0
  System_Action_o *v32; // x22
  ExUITexture_o *v33; // x0
  System_String_o *v34; // x1
  System_Action_o *v35; // x2
  UnityEngine_Component_o *v36; // x19
  Il2CppObject *v37; // x0
  int32_t v38; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t v39; // [xsp+8h] [xbp-38h] BYREF
  int32_t v40; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_596D2A7 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_ExUITexture___);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_QuestBoardListViewManager__BGChangeEffect_b__166_0__);
    sub_2213A60(&Method_QuestBoardListViewManager__BGChangeEffect_b__166_1__);
    sub_2213A60(&StringLiteral_3154/*"Back/back{0}"*/);
    byte_596D2A7 = 1;
  }
  mFolderBg = (UnityEngine_Component_o *)this->fields.mFolderBg;
  if ( !mFolderBg )
    goto LABEL_31;
  mFolderBg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mFolderBg, 0);
  if ( !mFolderBg )
    goto LABEL_31;
  mFolderBg = (UnityEngine_Component_o *)UnityEngine_GameObject__get_activeSelf(
                                           (UnityEngine_GameObject_o *)mFolderBg,
                                           0);
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
        gameObject = (Il2CppObject *)UnityEngine_Component__get_gameObject(mFolderBg, 0);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11, v12);
        mFolderBg = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_object_(
                                                 gameObject,
                                                 (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( this->fields.mFolderBg )
        {
          v14 = (UnityEngine_GameObject_o *)mFolderBg;
          mFolderBg = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)this->fields.mFolderBg,
                                                   0);
          if ( mFolderBg )
          {
            parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(
                                                  (UnityEngine_Transform_o *)mFolderBg,
                                                  0);
            GameObjectExtensions__SafeSetParent(v14, parent, 0);
            if ( v14 )
            {
              Component_object = UnityEngine_GameObject__GetComponent_object_(
                                   v14,
                                   (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ExUITexture___);
              this->fields.mFolderBgTemp = (struct ExUITexture_o *)Component_object;
              sub_2213A04(
                (MissionNaviTransitionBoardItem_o *)&this->fields.mFolderBgTemp,
                (int32_t)Component_object,
                v17,
                v18,
                v19,
                v20,
                v21,
                v22);
              mFolderBg = (UnityEngine_Component_o *)this->fields.mFolderBgTemp;
              if ( mFolderBg )
              {
                UIWidget__set_depth((UIWidget_o *)mFolderBg, LODWORD(mFolderBg[7].monitor) + 1, 0);
                v23 = this->fields.mFolderBg;
                this->fields.mCrossFadeTime = time;
                v38 = bgID;
                v24 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v38);
                v25 = System_String__Format((System_String_o *)StringLiteral_3154/*"Back/back{0}"*/, v24, 0);
                v26 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
                v27 = &Method_QuestBoardListViewManager__BGChangeEffect_b__166_1__;
                goto LABEL_20;
              }
            }
          }
        }
      }
    }
    else
    {
      v36 = (UnityEngine_Component_o *)this->fields.mFolderBg;
      if ( bgID )
      {
        v39 = bgID;
        v37 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v39);
        mFolderBg = (UnityEngine_Component_o *)System_String__Format((System_String_o *)StringLiteral_3154/*"Back/back{0}"*/, v37, 0);
        if ( v36 )
        {
          v34 = (System_String_o *)mFolderBg;
          v33 = (ExUITexture_o *)v36;
          v35 = 0;
          goto LABEL_22;
        }
      }
      else if ( v36 )
      {
        mFolderBg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(v36, 0);
        if ( mFolderBg )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mFolderBg, 0, 0);
          return;
        }
      }
    }
LABEL_31:
    sub_2213CDC(mFolderBg, *(_QWORD *)&bgID);
  }
  if ( !bgID )
    return;
  v28 = 0.0;
  v29 = effectType == 0;
  v23 = this->fields.mFolderBg;
  v40 = bgID;
  v30 = qword_5984348;
  if ( !v29 )
    v28 = time;
  this->fields.mCrossFadeTime = v28;
  v31 = (Il2CppObject *)j_il2cpp_value_box_0(v30, &v40);
  v25 = System_String__Format((System_String_o *)StringLiteral_3154/*"Back/back{0}"*/, v31, 0);
  v26 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  v27 = &Method_QuestBoardListViewManager__BGChangeEffect_b__166_0__;
LABEL_20:
  v32 = v26;
  System_Action___ctor(v26, (Il2CppObject *)this, *v27, 0);
  if ( !v23 )
    goto LABEL_31;
  v33 = v23;
  v34 = v25;
  v35 = v32;
LABEL_22:
  ExUITexture__SetAssetImage(v33, v34, v35, 0);
}


bool QuestBoardListViewManager__CheckNeedDisplayRoadmapButton(
        QuestBoardListViewManager_o *this,
        int32_t infoKind,
        const MethodInfo *method)
{
  _BOOL4 v3; // w0

  if ( infoKind )
    LOBYTE(v3) = 0;
  else
    return (unsigned int)this->fields._IndexFirstDisplayableRoadmapButton_k__BackingField >> 31;
  return v3;
}


void QuestBoardListViewManager__ClearFadeIn(QuestBoardListViewManager_o *this, const MethodInfo *method)
{
  this->fields.mFaded = 0;
}


System_Collections_IEnumerator_o *QuestBoardListViewManager__CoroutineLoadAsset(
        QuestBoardListViewManager_o *this,
        System_Action_o *onCompleteLoad,
        const MethodInfo *method)
{
  __int64 v5; // x21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_596D2AA & 1) == 0 )
  {
    sub_2213A60(&QuestBoardListViewManager__CoroutineLoadAsset_d__170_TypeInfo);
    byte_596D2AA = 1;
  }
  v5 = sub_2213CCC(QuestBoardListViewManager__CoroutineLoadAsset_d__170_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 40) = onCompleteLoad;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 40), (int32_t)onCompleteLoad, v12, v13, v14, v15, v16, v17);
  return (System_Collections_IEnumerator_o *)v5;
}


void QuestBoardListViewManager__CreateList(
        QuestBoardListViewManager_o *this,
        int32_t info_kind,
        System_Collections_Generic_List_MapControl_QuestInfo__o *qinf_list,
        float pos_itvl_y,
        float clip_w,
        bool isAllDisp,
        System_Collections_Generic_List_ScrTerminalListTop_WarSelectedQuestInfo__o *warSelectedQuestList,
        const MethodInfo *method)
{
  __int64 v15; // x1
  __int64 v16; // x2
  void *gameObject; // x0
  __int64 v18; // x1
  Il2CppObject *Component_object; // x25
  Il2CppObject *v20; // x0
  __int64 v21; // x2
  QuestBoardListViewItemDraw_c *v22; // x8
  UnityEngine_BoxCollider_o *v23; // x24
  int32_t SCRL_OBJ_DUMMY_NUM; // w21
  struct ListViewItemSeed_o *seed; // x8
  float v26; // s10
  float mBaseClipRange; // s11
  UIPanel_o *v28; // x26
  float v29; // s9
  int32_t v30; // w1
  __int64 v31; // x1
  __int64 v32; // x2
  NetworkManager_c *v33; // x0
  int64_t Time; // x0
  __int64 v35; // x2
  TerminalSceneComponent_c *v36; // x8
  __int64 v37; // x8
  __int64 v38; // x8
  __int64 v39; // x1
  __int64 v40; // x2
  bool activeSelf; // w8
  QuestBoardListViewManager_c *v42; // x0
  int v43; // w9
  struct QuestBoardListViewManager_StaticFields *static_fields; // x8
  float MAP_INTO_TIME; // s0
  float *p_MAP_EXIT_TIME; // x8
  float *p_INTO_TIME; // x8
  float v48; // t1
  float v49; // s0
  __int64 v50; // x1
  __int64 v51; // x2
  UILabel_o *mNoneLabel; // x24
  __int64 v53; // x2
  QuestBoardListViewItemDraw_c *v54; // x0
  __int64 v55; // x2
  QuestBoardListViewItemDraw_c *v56; // x0
  int32_t v57; // w21
  int v58; // w28
  int32_t i; // w23
  __int64 v60; // x8
  void *v61; // x25
  int32_t v62; // w24
  __int64 v63; // x8
  MapControl_QuestInfo_o *v64; // x26
  int32_t v65; // w27
  QuestBoardListViewItem_o *v66; // x0
  Il2CppObject *v67; // x25
  int32_t v68; // w1
  int32_t v69; // w2
  struct UnityEngine_GameObject_o *v70; // x24
  struct UnityEngine_GameObject_o *v71; // x26
  MapControl_QuestInfo_o *v72; // x3
  UnityEngine_GameObject_o *v73; // x4
  UnityEngine_GameObject_o *v74; // x5
  int32_t v75; // w6
  int32_t v76; // w7
  __int64 v77; // x8
  __int64 v78; // x8
  __int64 v79; // x8
  System_String_o *v80; // x2
  System_String_o *v81; // x3
  int32_t v82; // w4
  int32_t v83; // w5
  bool v84; // w6
  bool v85; // w7
  __int64 v86; // x8
  _QWORD *v87; // x9
  __int64 v88; // x10
  __int64 v89; // x8
  int32_t size; // w21
  int v91; // w21
  int32_t v92; // w22
  Il2CppObject *Item; // x0
  MapControl_QuestInfo_o *v94; // x24
  QuestBoardListViewItem_o *v95; // x0
  Il2CppObject *v96; // x25
  int32_t v97; // w1
  int32_t v98; // w2
  struct UnityEngine_GameObject_o *blackMarkPrefab; // x26
  struct UnityEngine_GameObject_o *whiteMarkPrefab; // x27
  MapControl_QuestInfo_o *v101; // x3
  UnityEngine_GameObject_o *v102; // x4
  UnityEngine_GameObject_o *v103; // x5
  System_String_o *v104; // x2
  System_String_o *v105; // x3
  int32_t v106; // w4
  int32_t v107; // w5
  bool v108; // w6
  bool v109; // w7
  __int64 v110; // x8
  _QWORD *v111; // x9
  __int64 v112; // x10
  __int64 v113; // x8
  System_Collections_Generic_IEnumerable_TResult__o *v114; // x0
  __int64 v115; // x1
  __int64 v116; // x2
  QuestBoardListViewManager___c_c *v117; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v118; // x21
  struct QuestBoardListViewManager___c_StaticFields *v119; // x9
  System_Func_object__bool__o *_9__113_0; // x22
  Il2CppObject *v121; // x23
  struct QuestBoardListViewManager___c_StaticFields *v122; // x0
  System_String_o *v123; // x2
  System_String_o *v124; // x3
  int32_t v125; // w4
  int32_t v126; // w5
  bool v127; // w6
  bool v128; // w7
  Il2CppObject *v129; // x0
  const MethodInfo *v130; // x1
  int32_t klass_high; // w8
  const MethodInfo *v132; // [xsp+0h] [xbp-90h]
  bool v133; // [xsp+Ch] [xbp-84h]
  UnityEngine_Vector3_o v134; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector4_o v135; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_596D284 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Cast_QuestBoardListViewItem___);
    sub_2213A60(&Method_System_Linq_Enumerable_FirstOrDefault_QuestBoardListViewItem___);
    sub_2213A60(&System_Func_QuestBoardListViewItem__bool__TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UIPanel___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ScrTerminalListTop_WarSelectedQuestInfo__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_QuestInfo__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ScrTerminalListTop_WarSelectedQuestInfo__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_QuestInfo__get_Item__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&QuestBoardListViewItemDraw_TypeInfo);
    sub_2213A60(&QuestBoardListViewItem_TypeInfo);
    sub_2213A60(&QuestBoardListViewManager_TypeInfo);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    sub_2213A60(&Method_QuestBoardListViewManager___c__CreateList_b__113_0__);
    sub_2213A60(&QuestBoardListViewManager___c_TypeInfo);
    sub_2213A60(&StringLiteral_11374/*"QUEST_NONE"*/);
    byte_596D284 = 1;
  }
  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  this->fields._IndexFirstDisplayableRoadmapButton_k__BackingField = -1;
  if ( info_kind == 4 || info_kind == 1 )
  {
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v15, v16);
    TerminalPramsManager__LoadQuestReleasedFocusState(0);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_122;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)gameObject,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_122;
  v20 = UnityEngine_GameObject__GetComponent_object_(
          (UnityEngine_GameObject_o *)gameObject,
          (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  v22 = QuestBoardListViewItemDraw_TypeInfo;
  v23 = (UnityEngine_BoxCollider_o *)v20;
  if ( !*(&QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo, v18, v21);
    v22 = QuestBoardListViewItemDraw_TypeInfo;
  }
  gameObject = this->fields.scrollView;
  if ( !gameObject )
    goto LABEL_122;
  SCRL_OBJ_DUMMY_NUM = v22->static_fields->SCRL_OBJ_DUMMY_NUM;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_122;
  gameObject = UnityEngine_GameObject__GetComponent_object_(
                 (UnityEngine_GameObject_o *)gameObject,
                 (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
  if ( !gameObject )
    goto LABEL_122;
  seed = this->fields.seed;
  if ( !seed )
    goto LABEL_122;
  v26 = *((float *)gameObject + 74);
  mBaseClipRange = this->fields.mBaseClipRange;
  v28 = (UIPanel_o *)gameObject;
  seed->fields.arrangementPich.fields.y = -pos_itvl_y;
  if ( !Component_object )
    goto LABEL_122;
  v29 = (float)(SCRL_OBJ_DUMMY_NUM + 1) * pos_itvl_y;
  v30 = v29 == INFINITY ? 0x80000000 : (int)v29;
  UIWidget__set_height((UIWidget_o *)Component_object, v30, 0);
  if ( !v23 )
    goto LABEL_122;
  LODWORD(v134.fields.x) = (unsigned int)UnityEngine_BoxCollider__get_size(v23, 0);
  v134.fields.z = 0.0;
  v134.fields.y = v29;
  UnityEngine_BoxCollider__set_size(v23, v134, 0);
  v135.fields.z = clip_w;
  v135.fields.w = v29;
  v135.fields.y = (float)(mBaseClipRange - v29) * 0.5;
  this->fields.clipRange.fields.y = v29 + (float)QuestBoardListViewItemDraw_TypeInfo->static_fields->CLIP_RANGE_MARGIN;
  v135.fields.x = v26;
  UIPanel__set_baseClipRegion(v28, v135, 0);
  v33 = NetworkManager_TypeInfo;
  this->fields.mResetConsumeColor = 0;
  if ( !*(&v33->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v33, v31, v32);
  Time = NetworkManager__getTime(0);
  v36 = TerminalSceneComponent_TypeInfo;
  this->fields.mListCreatedTime = Time;
  if ( !*(&v36->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v36, v18, v35);
  if ( !byte_596A090 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596A090 = 1;
  }
  gameObject = TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v18, v35);
    gameObject = TerminalSceneComponent_TypeInfo;
  }
  v37 = **((_QWORD **)gameObject + 23);
  if ( !v37 )
    goto LABEL_122;
  v38 = *(_QWORD *)(v37 + 264);
  if ( !v38 )
    goto LABEL_122;
  gameObject = *(void **)(v38 + 104);
  if ( !gameObject )
    goto LABEL_122;
  activeSelf = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)gameObject, 0);
  v42 = QuestBoardListViewManager_TypeInfo;
  v43 = *(&QuestBoardListViewManager_TypeInfo->_2.cctor_finished + 1);
  if ( activeSelf )
  {
    if ( !v43 )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewManager_TypeInfo, v39, v40);
      v42 = QuestBoardListViewManager_TypeInfo;
    }
    static_fields = v42->static_fields;
    MAP_INTO_TIME = static_fields->MAP_INTO_TIME;
    p_MAP_EXIT_TIME = &static_fields->MAP_EXIT_TIME;
  }
  else
  {
    if ( !v43 )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewManager_TypeInfo, v39, v40);
      v42 = QuestBoardListViewManager_TypeInfo;
    }
    p_INTO_TIME = &v42->static_fields->INTO_TIME;
    v48 = *p_INTO_TIME;
    p_MAP_EXIT_TIME = p_INTO_TIME + 1;
    MAP_INTO_TIME = v48;
  }
  this->fields.infoTime = MAP_INTO_TIME;
  v49 = *p_MAP_EXIT_TIME;
  this->fields.mAlphaAnimCnt = 0;
  this->fields.exitTime = v49;
  this->fields._SyncReferenceTime_k__BackingField = UnityEngine_Time__get_time(0);
  if ( !qinf_list )
    goto LABEL_122;
  gameObject = this->fields.mNoneLabelParent;
  if ( !gameObject )
    goto LABEL_122;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, qinf_list->fields._size < 1, 0);
  mNoneLabel = this->fields.mNoneLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v50, v51);
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_11374/*"QUEST_NONE"*/, 0);
  if ( !mNoneLabel )
    goto LABEL_122;
  UILabel__set_text(mNoneLabel, (System_String_o *)gameObject, 0);
  v54 = QuestBoardListViewItemDraw_TypeInfo;
  if ( !*(&QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo, v18, v53);
    v54 = QuestBoardListViewItemDraw_TypeInfo;
  }
  if ( info_kind != 6 )
  {
    size = qinf_list->fields._size;
    v133 = isAllDisp;
    if ( !*(&v54->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v54, v18, v53);
      v54 = QuestBoardListViewItemDraw_TypeInfo;
    }
    v91 = v54->static_fields->SCRL_OBJ_DUMMY_NUM + size;
    if ( v91 < 1 )
      goto LABEL_105;
    v92 = 0;
    while ( 1 )
    {
      if ( v92 >= qinf_list->fields._size )
      {
        v94 = 0;
LABEL_92:
        blackMarkPrefab = this->fields.blackMarkPrefab;
        whiteMarkPrefab = this->fields.whiteMarkPrefab;
        v95 = (QuestBoardListViewItem_o *)sub_2213CCC(QuestBoardListViewItem_TypeInfo);
        v96 = (Il2CppObject *)v95;
        v97 = v92;
        v98 = info_kind;
        v101 = v94;
        v102 = blackMarkPrefab;
        v103 = whiteMarkPrefab;
        goto LABEL_99;
      }
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)qinf_list,
               v92,
               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__get_Item__);
      v94 = (MapControl_QuestInfo_o *)Item;
      if ( info_kind == 2 && Item )
      {
        gameObject = Item[6].monitor;
        if ( !gameObject )
          goto LABEL_122;
        gameObject = MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_122;
        if ( WarEntity__HasFlag((WarEntity_o *)gameObject, 16, 0) )
        {
          v95 = (QuestBoardListViewItem_o *)sub_2213CCC(QuestBoardListViewItem_TypeInfo);
          v96 = (Il2CppObject *)v95;
          v97 = v92;
          v98 = 4;
          goto LABEL_98;
        }
      }
      else if ( !Item )
      {
        goto LABEL_92;
      }
      if ( !MapControl_QuestInfo__GetMine(v94, 0) )
        goto LABEL_92;
      gameObject = MapControl_QuestInfo__GetMine(v94, 0);
      if ( !gameObject )
        goto LABEL_122;
      if ( QuestEntity__GetTypeFlag((QuestEntity_o *)gameObject, 0) != 128 )
        goto LABEL_92;
      v95 = (QuestBoardListViewItem_o *)sub_2213CCC(QuestBoardListViewItem_TypeInfo);
      v96 = (Il2CppObject *)v95;
      v97 = v92;
      v98 = 5;
LABEL_98:
      v101 = v94;
      v102 = 0;
      v103 = 0;
LABEL_99:
      QuestBoardListViewItem___ctor_43210004(v95, v97, v98, v101, v102, v103, 0, 0, v132);
      gameObject = this->fields.itemList;
      if ( !gameObject )
        goto LABEL_122;
      v110 = *((_QWORD *)gameObject + 2);
      v111 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*((_DWORD *)gameObject + 7);
      if ( !v110 )
        goto LABEL_122;
      v112 = *((int *)gameObject + 6);
      if ( (unsigned int)v112 >= *(_DWORD *)(v110 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)gameObject,
          v96,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v111[4] + 192LL) + 112LL));
      }
      else
      {
        v113 = v110 + 8 * v112;
        *((_DWORD *)gameObject + 6) = v112 + 1;
        *(_QWORD *)(v113 + 32) = v96;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v113 + 32), (int32_t)v96, v104, v105, v106, v107, v108, v109);
      }
      if ( v91 == ++v92 )
        goto LABEL_105;
    }
  }
  gameObject = this->fields.mNoneLabelParent;
  if ( !warSelectedQuestList )
  {
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
      return;
    }
LABEL_122:
    sub_2213CDC(gameObject, v18);
  }
  if ( !gameObject )
    goto LABEL_122;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, warSelectedQuestList->fields._size < 1, 0);
  v56 = QuestBoardListViewItemDraw_TypeInfo;
  v57 = warSelectedQuestList->fields._size;
  v133 = isAllDisp;
  if ( !*(&QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo, v18, v55);
    v56 = QuestBoardListViewItemDraw_TypeInfo;
  }
  v58 = v56->static_fields->SCRL_OBJ_DUMMY_NUM + v57;
  if ( v58 >= 1 )
  {
    for ( i = 0; i != v58; ++i )
    {
      if ( i < warSelectedQuestList->fields._size
        && (gameObject = System_Collections_Generic_List_object___get_Item(
                           (System_Collections_Generic_List_object__o *)warSelectedQuestList,
                           i,
                           (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ScrTerminalListTop_WarSelectedQuestInfo__get_Item__)) != 0 )
      {
        v60 = *((_QWORD *)gameObject + 2);
        v61 = gameObject;
        if ( !v60 )
          goto LABEL_122;
        gameObject = (void *)*((_QWORD *)gameObject + 3);
        if ( !gameObject )
          goto LABEL_122;
        v62 = *(_DWORD *)(v60 + 16);
        gameObject = MapControl_QuestInfo__GetMine((MapControl_QuestInfo_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_122;
        gameObject = (void *)QuestEntity__HasFlag((QuestEntity_o *)gameObject, 0x800000000000000LL, 0);
        if ( ((unsigned __int8)gameObject & 1) != 0 )
        {
          v63 = *((_QWORD *)v61 + 2);
          if ( !v63 )
            goto LABEL_122;
          v64 = (MapControl_QuestInfo_o *)*((_QWORD *)v61 + 3);
          v65 = *(_DWORD *)(v63 + 24);
          v66 = (QuestBoardListViewItem_o *)sub_2213CCC(QuestBoardListViewItem_TypeInfo);
          v67 = (Il2CppObject *)v66;
          v68 = i;
          v69 = 6;
        }
        else
        {
          gameObject = (void *)*((_QWORD *)v61 + 3);
          if ( !gameObject )
            goto LABEL_122;
          gameObject = (void *)MapControl_QuestInfo__GetQuestType((MapControl_QuestInfo_o *)gameObject, 0);
          if ( (_DWORD)gameObject != 3 )
            goto LABEL_68;
          v77 = *((_QWORD *)v61 + 3);
          if ( !v77 )
            goto LABEL_122;
          gameObject = *(void **)(v77 + 104);
          if ( !gameObject )
            goto LABEL_122;
          gameObject = MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_122;
          gameObject = (void *)WarEntity__HasFlag((WarEntity_o *)gameObject, 16, 0);
          if ( ((unsigned __int8)gameObject & 1) == 0 )
          {
            v79 = *((_QWORD *)v61 + 2);
            if ( !v79 )
              goto LABEL_122;
            v64 = (MapControl_QuestInfo_o *)*((_QWORD *)v61 + 3);
            v65 = *(_DWORD *)(v79 + 24);
            v66 = (QuestBoardListViewItem_o *)sub_2213CCC(QuestBoardListViewItem_TypeInfo);
            v67 = (Il2CppObject *)v66;
            v68 = i;
            v69 = 2;
          }
          else
          {
LABEL_68:
            v78 = *((_QWORD *)v61 + 2);
            if ( !v78 )
              goto LABEL_122;
            v64 = (MapControl_QuestInfo_o *)*((_QWORD *)v61 + 3);
            v65 = *(_DWORD *)(v78 + 24);
            v66 = (QuestBoardListViewItem_o *)sub_2213CCC(QuestBoardListViewItem_TypeInfo);
            v67 = (Il2CppObject *)v66;
            v68 = i;
            v69 = 4;
          }
        }
        v72 = v64;
        v73 = 0;
        v74 = 0;
        v75 = v65;
        v76 = v62;
      }
      else
      {
        v70 = this->fields.blackMarkPrefab;
        v71 = this->fields.whiteMarkPrefab;
        v66 = (QuestBoardListViewItem_o *)sub_2213CCC(QuestBoardListViewItem_TypeInfo);
        v67 = (Il2CppObject *)v66;
        v68 = i;
        v69 = 6;
        v72 = 0;
        v73 = v70;
        v74 = v71;
        v75 = 0;
        v76 = 0;
      }
      QuestBoardListViewItem___ctor_43210004(v66, v68, v69, v72, v73, v74, v75, v76, v132);
      gameObject = this->fields.itemList;
      if ( !gameObject )
        goto LABEL_122;
      v86 = *((_QWORD *)gameObject + 2);
      v87 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*((_DWORD *)gameObject + 7);
      if ( !v86 )
        goto LABEL_122;
      v88 = *((int *)gameObject + 6);
      if ( (unsigned int)v88 >= *(_DWORD *)(v86 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)gameObject,
          v67,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v87[4] + 192LL) + 112LL));
      }
      else
      {
        v89 = v86 + 8 * v88;
        *((_DWORD *)gameObject + 6) = v88 + 1;
        *(_QWORD *)(v89 + 32) = v67;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v89 + 32), (int32_t)v67, v80, v81, v82, v83, v84, v85);
      }
    }
  }
LABEL_105:
  gameObject = this->fields.mNoneLabel;
  if ( !gameObject )
    goto LABEL_122;
  if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)gameObject, 0) )
    this->fields._IsShowingInfo_k__BackingField = 0;
  ListViewManager__SortItem((ListViewManager_o *)this, -1, v133, -1, 0);
  v114 = System_Linq_Enumerable__Cast_object_(
           (System_Collections_IEnumerable_o *)this->fields.itemList,
           (const MethodInfo_3868AB0 *)Method_System_Linq_Enumerable_Cast_QuestBoardListViewItem___);
  v117 = QuestBoardListViewManager___c_TypeInfo;
  v118 = (System_Collections_Generic_IEnumerable_TSource__o *)v114;
  if ( !*(&QuestBoardListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewManager___c_TypeInfo, v115, v116);
    v117 = QuestBoardListViewManager___c_TypeInfo;
  }
  v119 = v117->static_fields;
  _9__113_0 = (System_Func_object__bool__o *)v119->__9__113_0;
  if ( !_9__113_0 )
  {
    if ( !*(&v117->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v117, v115, v116);
      v119 = QuestBoardListViewManager___c_TypeInfo->static_fields;
    }
    v121 = (Il2CppObject *)v119->__9;
    _9__113_0 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_QuestBoardListViewItem__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__113_0, v121, Method_QuestBoardListViewManager___c__CreateList_b__113_0__, 0);
    v122 = QuestBoardListViewManager___c_TypeInfo->static_fields;
    v122->__9__113_0 = (struct System_Func_QuestBoardListViewItem__bool__o *)_9__113_0;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v122->__9__113_0,
      (int32_t)_9__113_0,
      v123,
      v124,
      v125,
      v126,
      v127,
      v128);
  }
  v129 = System_Linq_Enumerable__FirstOrDefault_object__59254852(
           v118,
           (System_Func_TSource__bool__o *)_9__113_0,
           (const MethodInfo_3882844 *)Method_System_Linq_Enumerable_FirstOrDefault_QuestBoardListViewItem___);
  if ( v129 )
  {
    klass_high = HIDWORD(v129[1].klass);
    this->fields._IndexFirstDisplayableRoadmapButton_k__BackingField = klass_high;
    if ( !info_kind && klass_high < 0 )
      goto LABEL_117;
  }
  else
  {
    this->fields._IndexFirstDisplayableRoadmapButton_k__BackingField = -1;
    if ( !info_kind )
LABEL_117:
      QuestBoardListViewManager__DisplayRoadmapButtonToTopWarBoard(this, v130);
  }
}


void QuestBoardListViewManager__DispBoardForQuestBoardEffect(
        QuestBoardListViewManager_o *this,
        int32_t warId,
        QuestBoardListViewItemDraw_QuestBoardDispOptions_o *questBoardDispOptions,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Object_o *QuestBoardObjForWarId; // x20
  QuestBoardListViewItem_o *Item; // x0
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x2
  struct MapControl_QuestInfo_o *quest_info_k__BackingField; // x8
  struct MapControl_AreaBoardInfo_o *AreaBoardInfo_k__BackingField; // x8
  unsigned int questBoardType; // w8

  if ( (byte_596D28B & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596D28B = 1;
  }
  QuestBoardObjForWarId = (UnityEngine_Object_o *)QuestBoardListViewManager__GetQuestBoardObjForWarId(
                                                    this,
                                                    warId,
                                                    (const MethodInfo *)questBoardDispOptions);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
  Item = (QuestBoardListViewItem_o *)UnityEngine_Object__op_Equality(QuestBoardObjForWarId, 0, 0);
  if ( ((unsigned __int8)Item & 1) == 0 )
  {
    if ( !QuestBoardObjForWarId
      || (Item = QuestBoardListViewObject__GetItem((QuestBoardListViewObject_o *)QuestBoardObjForWarId, v11)) == 0
      || (quest_info_k__BackingField = Item->fields._quest_info_k__BackingField) == 0 )
    {
      sub_2213CDC(Item, v11);
    }
    AreaBoardInfo_k__BackingField = quest_info_k__BackingField->fields._AreaBoardInfo_k__BackingField;
    if ( AreaBoardInfo_k__BackingField )
    {
      questBoardType = AreaBoardInfo_k__BackingField->fields.questBoardType;
      if ( questBoardType <= 8 && ((1 << questBoardType) & 0x118) != 0 )
        QuestBoardListViewObject__SetupDispFolderForQuestBoardEffect(
          (QuestBoardListViewObject_o *)QuestBoardObjForWarId,
          questBoardDispOptions,
          v12);
      else
        QuestBoardListViewObject__SetupDispAreaForTerminalTopEffect(
          (QuestBoardListViewObject_o *)QuestBoardObjForWarId,
          questBoardDispOptions,
          v12);
    }
  }
}


void QuestBoardListViewManager__DispBoardForTerminalTopEffect(
        QuestBoardListViewManager_o *this,
        int32_t warId,
        QuestBoardListViewItemDraw_QuestBoardDispOptions_o *questBoardDispOptions,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Object_o *QuestBoardObjForWarId; // x20
  _BOOL8 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_596D28A & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596D28A = 1;
  }
  QuestBoardObjForWarId = (UnityEngine_Object_o *)QuestBoardListViewManager__GetQuestBoardObjForWarId(
                                                    this,
                                                    warId,
                                                    (const MethodInfo *)questBoardDispOptions);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
  v10 = UnityEngine_Object__op_Equality(QuestBoardObjForWarId, 0, 0);
  if ( !v10 )
  {
    if ( !QuestBoardObjForWarId )
      sub_2213CDC(v10, v11);
    QuestBoardListViewObject__SetupDispAreaForTerminalTopEffect(
      (QuestBoardListViewObject_o *)QuestBoardObjForWarId,
      questBoardDispOptions,
      v12);
  }
}


void QuestBoardListViewManager__DisplayRoadmapButtonToTopWarBoard(
        QuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  System_Collections_Generic_IEnumerable_TSource__o *itemList; // x20
  QuestBoardListViewManager___c_c *v5; // x0
  struct QuestBoardListViewManager___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__115_0; // x21
  Il2CppObject *v8; // x22
  struct QuestBoardListViewManager___c_StaticFields *v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  Il2CppObject *v16; // x0
  __int64 v17; // x2
  __int64 v18; // x3
  void *v19; // x1
  __int64 naturalAligment; // x9
  __int64 v21; // x9
  RoadmapButtonPrefab_o *name; // x0
  __int64 v23; // x1
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__c *v25; // x8
  QuestBoardListViewManager_o *v26; // x0
  bool v27; // w1
  bool v28; // w2
  const MethodInfo *v29; // x3

  if ( (byte_596D285 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_FirstOrDefault_ListViewItem___);
    sub_2213A60(&System_Func_ListViewItem__bool__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&QuestBoardListViewItem_TypeInfo);
    sub_2213A60(&QuestBoardListViewObject_TypeInfo);
    sub_2213A60(&Method_QuestBoardListViewManager___c__DisplayRoadmapButtonToTopWarBoard_b__115_0__);
    sub_2213A60(&QuestBoardListViewManager___c_TypeInfo);
    byte_596D285 = 1;
  }
  if ( (this->fields._IndexFirstDisplayableRoadmapButton_k__BackingField & 0x80000000) == 0 )
    return;
  itemList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.itemList;
  v5 = QuestBoardListViewManager___c_TypeInfo;
  if ( !*(&QuestBoardListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewManager___c_TypeInfo, method, v2);
    v5 = QuestBoardListViewManager___c_TypeInfo;
  }
  static_fields = v5->static_fields;
  _9__115_0 = (System_Func_object__bool__o *)static_fields->__9__115_0;
  if ( !_9__115_0 )
  {
    if ( !*(&v5->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v5, method, v2);
      static_fields = QuestBoardListViewManager___c_TypeInfo->static_fields;
    }
    v8 = (Il2CppObject *)static_fields->__9;
    _9__115_0 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_ListViewItem__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__115_0,
      v8,
      Method_QuestBoardListViewManager___c__DisplayRoadmapButtonToTopWarBoard_b__115_0__,
      0);
    v9 = QuestBoardListViewManager___c_TypeInfo->static_fields;
    v9->__9__115_0 = (struct System_Func_ListViewItem__bool__o *)_9__115_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v9->__9__115_0, (int32_t)_9__115_0, v10, v11, v12, v13, v14, v15);
  }
  v16 = System_Linq_Enumerable__FirstOrDefault_object__59254852(
          itemList,
          (System_Func_TSource__bool__o *)_9__115_0,
          (const MethodInfo_3882844 *)Method_System_Linq_Enumerable_FirstOrDefault_ListViewItem___);
  if ( !v16 )
    return;
  v19 = QuestBoardListViewItem_TypeInfo;
  naturalAligment = QuestBoardListViewItem_TypeInfo->_2.naturalAligment;
  if ( v16->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (QuestBoardListViewItem_c *)v16->klass->_2.typeHierarchy[naturalAligment - 1] != QuestBoardListViewItem_TypeInfo )
  {
    sub_221405C(v16, QuestBoardListViewItem_TypeInfo, v17, v18);
LABEL_30:
    sub_221405C(itemList, v19, v17, v18);
    QuestBoardListViewManager__ModifyAllRoadmapButtons(v26, v27, v28, v29);
    return;
  }
  itemList = (System_Collections_Generic_IEnumerable_TSource__o *)v16[7].klass;
  this->fields._IndexFirstDisplayableRoadmapButton_k__BackingField = HIDWORD(v16[1].klass);
  if ( itemList )
  {
    v19 = QuestBoardListViewObject_TypeInfo;
    v21 = QuestBoardListViewObject_TypeInfo->_2.naturalAligment;
    if ( itemList->klass->_2.naturalAligment < (unsigned int)v21
      || (QuestBoardListViewObject_c *)itemList->klass->_2.typeHierarchy[v21 - 1] != QuestBoardListViewObject_TypeInfo )
    {
      goto LABEL_30;
    }
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19, v17);
  name = (RoadmapButtonPrefab_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)itemList, 0, 0);
  if ( ((unsigned __int8)name & 1) == 0 )
  {
    if ( !itemList )
      goto LABEL_28;
    klass = itemList[8].klass;
    if ( !klass )
      goto LABEL_28;
    name = (RoadmapButtonPrefab_o *)klass[1]._1.name;
    if ( !name )
      goto LABEL_28;
    RoadmapButtonPrefab__Initialize(name, 0);
    if ( !this->fields.initMode || this->fields.mFaded )
    {
      v25 = itemList[8].klass;
      if ( v25 )
      {
        name = (RoadmapButtonPrefab_o *)v25[1]._1.name;
        if ( name )
        {
          RoadmapButtonPrefab__ModifyRoadmapButton(name, 0, 1, 0);
          return;
        }
      }
LABEL_28:
      sub_2213CDC(name, v23);
    }
  }
}


void QuestBoardListViewManager__EndSlideIn(
        QuestBoardListViewManager_o *this,
        System_Action_o *end_act,
        bool isNotInit,
        const MethodInfo *method)
{
  TerminalSceneComponent_o *mTerminalScene; // x0
  const MethodInfo *v8; // x6
  int32_t v9; // w1

  mTerminalScene = this->fields.mTerminalScene;
  this->fields.mIsDoing_Slide = 0;
  if ( !mTerminalScene )
    sub_2213CDC(0, end_act);
  if ( TerminalSceneComponent__get_IsTutorialActive(mTerminalScene, 0) )
    v9 = 1;
  else
    v9 = 2;
  QuestBoardListViewManager__SetMode(this, v9, end_act, 0, isNotInit, 0, v8);
}


void QuestBoardListViewManager__EndSlideOut(
        QuestBoardListViewManager_o *this,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  const MethodInfo *v14; // x1
  System_Action_o *v15; // x20
  const MethodInfo *v16; // x6

  if ( (byte_596D296 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_QuestBoardListViewManager___c__DisplayClass136_0__EndSlideOut_b__0__);
    sub_2213A60(&QuestBoardListViewManager___c__DisplayClass136_0_TypeInfo);
    byte_596D296 = 1;
  }
  v5 = sub_2213CCC(QuestBoardListViewManager___c__DisplayClass136_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_2213CDC(v6, v7);
  *(_QWORD *)(v5 + 16) = end_act;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)end_act, v8, v9, v10, v11, v12, v13);
  this->fields.mIsDoing_Slide = 0;
  QuestBoardListViewManager__ResetBG(this, v14);
  v15 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v15,
    (Il2CppObject *)v5,
    Method_QuestBoardListViewManager___c__DisplayClass136_0__EndSlideOut_b__0__,
    0);
  QuestBoardListViewManager__SetMode(this, 0, v15, 0, 0, 0, v16);
}


int32_t QuestBoardListViewManager__FindAreaBoardIndexByWarId(
        QuestBoardListViewManager_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  int32_t ItemSum; // w0
  __int64 v6; // x1
  int32_t v7; // w22
  int32_t v8; // w21
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  Il2CppObject *Item; // x0
  __int64 naturalAligment; // x10
  Il2CppClass *klass; // x8
  _DWORD *interopData; // x8

  if ( (byte_596D28E & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_2213A60(&QuestBoardListViewItem_TypeInfo);
    byte_596D28E = 1;
  }
  ItemSum = ListViewManager__get_ItemSum((ListViewManager_o *)this, 0);
  if ( ItemSum < 1 )
    return -1;
  v7 = ItemSum;
  v8 = 0;
  while ( 1 )
  {
    itemList = this->fields.itemList;
    if ( !itemList )
      sub_2213CDC(0, v6);
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)itemList,
             v8,
             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( Item )
    {
      naturalAligment = QuestBoardListViewItem_TypeInfo->_2.naturalAligment;
      if ( Item->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (QuestBoardListViewItem_c *)Item->klass->_2.typeHierarchy[naturalAligment - 1] == QuestBoardListViewItem_TypeInfo )
      {
        klass = Item[8].klass;
        if ( klass )
        {
          interopData = klass->_1.interopData;
          if ( interopData )
          {
            if ( interopData[4] != 1 && interopData[5] == warId )
              break;
          }
        }
      }
    }
    if ( v7 == ++v8 )
      return -1;
  }
  return v8;
}


void QuestBoardListViewManager__FolderBgObjectSetup(
        QuestBoardListViewManager_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  ScrTerminalListTop_o *Master_object; // x0
  const MethodInfo *v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  __int64 v20; // x1
  __int64 v21; // x2
  UnityEngine_Object_o *mTerminalList; // x22
  __int64 v23; // x1
  __int64 v24; // x2
  UnityEngine_Object_o *mFolderBgObject; // x22
  __int64 v26; // x1
  __int64 v27; // x2
  int32_t ShowingFolderWarId; // w22
  int32_t BgObjectId; // w0
  bool v30; // w1
  __int64 v31; // x1
  __int64 v32; // x2
  DataManager_c *v33; // x0
  int v34; // w9
  System_String_o *v35; // x0
  System_String_o *v36; // x22
  AssetLoader_LoadEndDataHandler_o *v37; // x23
  __int64 v38; // x1
  __int64 v39; // x2
  const MethodInfo *v40; // x1

  if ( (byte_596D2A6 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_WarAddMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_WarMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
    sub_2213A60(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_QuestBoardListViewManager___c__DisplayClass164_0__FolderBgObjectSetup_b__0__);
    sub_2213A60(&QuestBoardListViewManager___c__DisplayClass164_0_TypeInfo);
    sub_2213A60(&StringLiteral_6532/*"EventUI/Prefabs/"*/);
    byte_596D2A6 = 1;
  }
  v5 = sub_2213CCC(QuestBoardListViewManager___c__DisplayClass164_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_30;
  *(_QWORD *)(v5 + 24) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 32) = callback;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)callback, v14, v15, v16, v17, v18, v19);
  mTerminalList = (UnityEngine_Object_o *)this->fields.mTerminalList;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20, v21);
  if ( UnityEngine_Object__op_Equality(mTerminalList, 0, 0) )
    goto LABEL_21;
  mFolderBgObject = (UnityEngine_Object_o *)this->fields.mFolderBgObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23, v24);
  if ( UnityEngine_Object__op_Equality(mFolderBgObject, 0, 0) )
    goto LABEL_21;
  Master_object = this->fields.mTerminalList;
  if ( !Master_object )
    goto LABEL_30;
  ShowingFolderWarId = ScrTerminalListTop__GetShowingFolderWarId(Master_object, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v26, v27);
  Master_object = (ScrTerminalListTop_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_WarAddMaster___);
  if ( !Master_object )
    goto LABEL_30;
  BgObjectId = WarAddMaster__GetBgObjectId((WarAddMaster_o *)Master_object, ShowingFolderWarId, 0);
  this->fields.mRequestedBgObjectId = BgObjectId;
  if ( BgObjectId < 0 )
  {
    Master_object = (ScrTerminalListTop_o *)this->fields.mFolderBgObject;
    if ( Master_object )
    {
      v30 = 0;
      goto LABEL_20;
    }
LABEL_30:
    sub_2213CDC(Master_object, v7);
  }
  if ( this->fields.currentObjectId == BgObjectId )
  {
    Master_object = (ScrTerminalListTop_o *)this->fields.mFolderBgObject;
    if ( Master_object )
    {
      v30 = 1;
LABEL_20:
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v30, 0);
LABEL_21:
      ActionExtensions__Call(*(System_Action_o **)(v5 + 32), 0);
      return;
    }
    goto LABEL_30;
  }
  QuestBoardListViewManager__ResetBgObject(this, v7);
  v33 = DataManager_TypeInfo;
  v34 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  this->fields.currentObjectId = this->fields.mRequestedBgObjectId;
  if ( !v34 )
    j_il2cpp_runtime_class_init_0(v33, v31, v32);
  Master_object = (ScrTerminalListTop_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_WarMaster___);
  if ( !Master_object )
    goto LABEL_30;
  Master_object = (ScrTerminalListTop_o *)DataMasterBase_object__object__int___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                            ShowingFolderWarId,
                                            (const MethodInfo_3F10B30 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
  *(_DWORD *)(v5 + 16) = this->fields.mRequestedBgObjectId;
  if ( !Master_object )
    goto LABEL_30;
  v35 = System_Int32__ToString((int)Master_object + 96, 0);
  v36 = System_String__Concat_75651716((System_String_o *)StringLiteral_6532/*"EventUI/Prefabs/"*/, v35, 0);
  v37 = (AssetLoader_LoadEndDataHandler_o *)sub_2213CCC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v37,
    (Il2CppObject *)v5,
    Method_QuestBoardListViewManager___c__DisplayClass164_0__FolderBgObjectSetup_b__0__,
    0);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v38, v39);
  if ( !AssetManager__loadAssetStorage(v36, v37, 1, 0, 0) )
  {
    QuestBoardListViewManager__ResetBgObject(this, v40);
    goto LABEL_21;
  }
}


// local variable allocation has failed, the output may be wrong!
void QuestBoardListViewManager__ForceChangeQuestBoardDisp(
        QuestBoardListViewManager_o *this,
        int32_t questId,
        bool isClose,
        bool forceUnknownQuestName,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v10; // x1
  _BOOL8 v11; // x0
  const MethodInfo *v12; // x1
  QuestBoardListViewObject_o *current; // x21
  QuestBoardListViewItem_o *Item; // x0
  const MethodInfo *v15; // x1
  QuestBoardListViewItem_o *v16; // x0
  const MethodInfo *v17; // x1
  struct MapControl_QuestInfo_o *quest_info_k__BackingField; // x8
  UIScrollView_o *scrollView; // x0
  const MethodInfo *v20; // x1
  QuestBoardListViewItem_o *v21; // x0
  const MethodInfo *v22; // x1
  struct MapControl_QuestInfo_o *v23; // x8
  QuestBoardListViewItem_o *v24; // x0
  const MethodInfo *v25; // x1
  struct MapControl_QuestInfo_o *v26; // x8
  int v27; // w9
  QuestBoardListViewItem_o *v28; // x0
  const MethodInfo *v29; // x1
  struct MapControl_QuestInfo_o *v30; // x8
  QuestBoardListViewItem_o *v31; // x0
  QuestBoardListViewItemDraw_o *itemDraw; // x22
  QuestBoardListViewItem_o *v33; // x0
  __int64 v34; // x1
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_596D2C6 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestBoardListViewObject__GetEnumerator__);
    byte_596D2C6 = 1;
  }
  memset(&v36, 0, sizeof(v36));
  ObjectList = (System_Collections_Generic_List_object__o *)QuestBoardListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&questId);
  if ( !ObjectList )
    sub_2213CDC(0, v10);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v35,
    ObjectList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_QuestBoardListViewObject__GetEnumerator__);
  v36 = v35;
  v35.fields._list = 0;
  *(_QWORD *)&v35.fields._index = &v36;
  while ( 1 )
  {
    v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v36,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__MoveNext__);
    if ( !v11 )
      break;
    current = (QuestBoardListViewObject_o *)v36.fields._current;
    if ( !v36.fields._current )
      sub_2213CDC(v11, v12);
    Item = QuestBoardListViewObject__GetItem((QuestBoardListViewObject_o *)v36.fields._current, v12);
    if ( !Item )
      sub_2213CDC(0, v15);
    if ( Item->fields._quest_info_k__BackingField )
    {
      v16 = QuestBoardListViewObject__GetItem(current, v15);
      if ( !v16 )
        sub_2213CDC(0, v17);
      quest_info_k__BackingField = v16->fields._quest_info_k__BackingField;
      if ( !quest_info_k__BackingField )
        sub_2213CDC(v16, v17);
      if ( quest_info_k__BackingField->fields.questId == questId )
      {
        if ( isClose )
        {
          scrollView = this->fields.scrollView;
          if ( !scrollView )
            sub_2213CDC(0, v17);
          UIScrollView__ResetPosition(scrollView, 0);
          v21 = QuestBoardListViewObject__GetItem(current, v20);
          if ( !v21 )
            sub_2213CDC(0, v22);
          v23 = v21->fields._quest_info_k__BackingField;
          if ( !v23 )
            sub_2213CDC(v21, v22);
          v23->fields.dispType = 2;
          v24 = QuestBoardListViewObject__GetItem(current, v22);
          if ( !v24 )
            sub_2213CDC(0, v25);
          v26 = v24->fields._quest_info_k__BackingField;
          if ( !v26 )
            sub_2213CDC(v24, v25);
          v27 = 0;
        }
        else
        {
          v28 = QuestBoardListViewObject__GetItem(current, v17);
          if ( !v28 )
            sub_2213CDC(0, v29);
          v30 = v28->fields._quest_info_k__BackingField;
          if ( !v30 )
            sub_2213CDC(v28, v29);
          v30->fields.dispType = 1;
          v31 = QuestBoardListViewObject__GetItem(current, v29);
          if ( !v31 )
            sub_2213CDC(0, v25);
          v26 = v31->fields._quest_info_k__BackingField;
          if ( !v26 )
            sub_2213CDC(v31, v25);
          v27 = 1;
        }
        v26->fields.touchType = v27;
        itemDraw = current->fields.itemDraw;
        v33 = QuestBoardListViewObject__GetItem(current, v25);
        if ( !v33 )
          sub_2213CDC(0, v34);
        if ( !itemDraw )
          sub_2213CDC(v33, v34);
        QuestBoardListViewItemDraw__ForceChangeQuestBoardDisp(
          itemDraw,
          v33->fields._quest_info_k__BackingField,
          isClose,
          forceUnknownQuestName,
          0);
        break;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v36,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__Dispose__);
}


int32_t QuestBoardListViewManager__GetAlphaAnimCnt(
        QuestBoardListViewManager_o *this,
        int32_t length,
        const MethodInfo *method)
{
  return this->fields.mAlphaAnimCnt % length;
}


UnityEngine_Camera_o *QuestBoardListViewManager__GetCamera(QuestBoardListViewManager_o *this, const MethodInfo *method)
{
  return this->fields.mUICamera;
}


UIPanel_o *QuestBoardListViewManager__GetFadePanel(QuestBoardListViewManager_o *this, const MethodInfo *method)
{
  return this->fields.fadePanel;
}


int32_t QuestBoardListViewManager__GetInitMode(QuestBoardListViewManager_o *this, const MethodInfo *method)
{
  return this->fields.initMode;
}


PartyServantListViewItem_o *QuestBoardListViewManager__GetItem(
        QuestBoardListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  PartyServantListViewItem_o *result; // x0
  __int64 naturalAligment; // x10

  if ( (byte_596D290 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_2213A60(&PartyServantListViewItem_TypeInfo);
    byte_596D290 = 1;
  }
  result = (PartyServantListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (PartyServantListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                             (System_Collections_Generic_List_object__o *)result,
                                             index,
                                             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      naturalAligment = PartyServantListViewItem_TypeInfo->_2.naturalAligment;
      if ( result->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
      {
        if ( (PartyServantListViewItem_c *)result->klass->_2.typeHierarchy[naturalAligment - 1] != PartyServantListViewItem_TypeInfo )
          return 0;
      }
      else
      {
        return 0;
      }
    }
  }
  return result;
}


int32_t QuestBoardListViewManager__GetNextAlphaAnimCnt(
        QuestBoardListViewManager_o *this,
        int32_t length,
        const MethodInfo *method)
{
  return (this->fields.mAlphaAnimCnt + 1) % length;
}


// local variable allocation has failed, the output may be wrong!
QuestBoardListViewObject_o *QuestBoardListViewManager__GetQuestBoardObjForWarId(
        QuestBoardListViewManager_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *current; // x26
  __int64 naturalAligment; // x10
  Il2CppClass *klass; // x8
  _DWORD *interopData; // x8
  Il2CppClass *v12; // x20
  __int64 v13; // x1
  __int64 v14; // x2
  Il2CppClass *v15; // x8
  __int64 v16; // x11
  UnityEngine_Object_o *v17; // x20
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_596D28C & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&QuestBoardListViewItem_TypeInfo);
    sub_2213A60(&QuestBoardListViewObject_TypeInfo);
    byte_596D28C = 1;
  }
  itemList = this->fields.itemList;
  memset(&v20, 0, sizeof(v20));
  if ( !itemList )
    sub_2213CDC(0, *(_QWORD *)&warId);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v19,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v20 = v19;
  v19.fields._list = 0;
  *(_QWORD *)&v19.fields._index = &v20;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v20,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
  {
    current = v20.fields._current;
    if ( v20.fields._current )
    {
      naturalAligment = QuestBoardListViewItem_TypeInfo->_2.naturalAligment;
      if ( v20.fields._current->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (QuestBoardListViewItem_c *)v20.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] == QuestBoardListViewItem_TypeInfo )
      {
        klass = v20.fields._current[8].klass;
        if ( klass )
        {
          interopData = klass->_1.interopData;
          if ( interopData )
          {
            if ( interopData[4] != 1 && interopData[5] == warId )
            {
              v12 = v20.fields._current[7].klass;
              if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
              if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v12, 0, 0) )
              {
                v15 = current[7].klass;
                if ( v15
                  && (v16 = QuestBoardListViewObject_TypeInfo->_2.naturalAligment,
                      *((unsigned __int8 *)v15->_1.image + 304) >= (unsigned int)v16) )
                {
                  v17 = *(QuestBoardListViewObject_c **)(*((_QWORD *)v15->_1.image + 25) + 8 * v16 - 8) == QuestBoardListViewObject_TypeInfo
                      ? (UnityEngine_Object_o *)current[7].klass
                      : 0LL;
                }
                else
                {
                  v17 = 0;
                }
                if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13, v14);
                if ( UnityEngine_Object__op_Inequality(v17, 0, 0) )
                  goto LABEL_27;
              }
            }
          }
        }
      }
    }
  }
  v17 = 0;
LABEL_27:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v20,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  return (QuestBoardListViewObject_o *)v17;
}


QuestBoardListViewObject_o *QuestBoardListViewManager__GetQuestBoardObjOnFolder(
        QuestBoardListViewManager_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  unsigned int AreaBoardIndexByWarId; // w0
  __int64 v6; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  QuestBoardListViewObject_o *result; // x0
  __int64 naturalAligment; // x10
  __int64 v10; // x8
  __int64 v11; // x11

  if ( (byte_596D28D & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_2213A60(&QuestBoardListViewItem_TypeInfo);
    sub_2213A60(&QuestBoardListViewObject_TypeInfo);
    byte_596D28D = 1;
  }
  AreaBoardIndexByWarId = QuestBoardListViewManager__FindAreaBoardIndexByWarId(this, warId, method);
  if ( (AreaBoardIndexByWarId & 0x80000000) != 0 )
    return 0;
  v6 = AreaBoardIndexByWarId;
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_2213CDC(0, v6);
  result = (QuestBoardListViewObject_o *)System_Collections_Generic_List_object___get_Item(
                                           (System_Collections_Generic_List_object__o *)itemList,
                                           v6,
                                           (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
  if ( result )
  {
    naturalAligment = QuestBoardListViewItem_TypeInfo->_2.naturalAligment;
    if ( result->klass->_2.naturalAligment >= (unsigned int)naturalAligment
      && (QuestBoardListViewItem_c *)result->klass->_2.typeHierarchy[naturalAligment - 1] == QuestBoardListViewItem_TypeInfo )
    {
      v10 = *(_QWORD *)&result->fields.isBusy;
      if ( v10 )
      {
        v11 = QuestBoardListViewObject_TypeInfo->_2.naturalAligment;
        if ( *(unsigned __int8 *)(*(_QWORD *)v10 + 304LL) >= (unsigned int)v11 )
        {
          if ( *(QuestBoardListViewObject_c **)(*(_QWORD *)(*(_QWORD *)v10 + 200LL) + 8 * v11 - 8) == QuestBoardListViewObject_TypeInfo )
            return *(QuestBoardListViewObject_o **)&result->fields.isBusy;
          else
            return 0;
        }
      }
    }
    return 0;
  }
  return result;
}


UIScrollBar_o *QuestBoardListViewManager__GetScrollBar(QuestBoardListViewManager_o *this, const MethodInfo *method)
{
  return this->fields.scrollBar;
}


UIScrollView_o *QuestBoardListViewManager__GetScrollView(QuestBoardListViewManager_o *this, const MethodInfo *method)
{
  return this->fields.scrollView;
}


bool QuestBoardListViewManager__HasBanner(QuestBoardListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_QuestBoardListViewObject__o *ObjectList; // x0
  const MethodInfo *v4; // x1
  System_Collections_Generic_List_object__o *Item; // x0
  const MethodInfo *v6; // x1
  QuestBoardListViewItem_o *v7; // x0
  const MethodInfo *v8; // x1
  struct MapControl_QuestInfo_o *quest_info_k__BackingField; // x8
  _QWORD *monitor; // x8
  __int64 v11; // x8

  if ( (byte_596D298 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Any_QuestBoardListViewObject___);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestBoardListViewObject__get_Item__);
    byte_596D298 = 1;
  }
  ObjectList = QuestBoardListViewManager__get_ObjectList(this, method);
  if ( !System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)ObjectList,
          (const MethodInfo_38660DC *)Method_System_Linq_Enumerable_Any_QuestBoardListViewObject___) )
    goto LABEL_15;
  Item = (System_Collections_Generic_List_object__o *)QuestBoardListViewManager__get_ObjectList(this, v4);
  if ( !Item
    || (Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              Item,
                                                              0,
                                                              (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_QuestBoardListViewObject__get_Item__)) == 0 )
  {
LABEL_17:
    sub_2213CDC(Item, v6);
  }
  v7 = QuestBoardListViewObject__GetItem((QuestBoardListViewObject_o *)Item, v6);
  if ( !v7 )
    return (char)v7;
  quest_info_k__BackingField = v7->fields._quest_info_k__BackingField;
  if ( !quest_info_k__BackingField || !quest_info_k__BackingField->fields._AreaBoardInfo_k__BackingField )
  {
LABEL_15:
    LOBYTE(v7) = 0;
    return (char)v7;
  }
  Item = (System_Collections_Generic_List_object__o *)QuestBoardListViewManager__get_ObjectList(this, v8);
  if ( !Item )
    goto LABEL_17;
  Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                        Item,
                                                        0,
                                                        (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_QuestBoardListViewObject__get_Item__);
  if ( !Item )
    goto LABEL_17;
  Item = (System_Collections_Generic_List_object__o *)QuestBoardListViewObject__GetItem(
                                                        (QuestBoardListViewObject_o *)Item,
                                                        v6);
  if ( !Item )
    goto LABEL_17;
  monitor = Item[3].monitor;
  if ( !monitor )
    goto LABEL_17;
  v11 = monitor[14];
  if ( !v11 )
    goto LABEL_17;
  LOBYTE(v7) = *(_DWORD *)(v11 + 16) == 1;
  return (char)v7;
}


// local variable allocation has failed, the output may be wrong!
void QuestBoardListViewManager__InitListObject(
        QuestBoardListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v6; // x1
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_596D293 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestBoardListViewObject__GetEnumerator__);
    byte_596D293 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  ObjectList = (System_Collections_Generic_List_object__o *)QuestBoardListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_2213CDC(0, v6);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    ObjectList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_QuestBoardListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v9,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__MoveNext__) )
  {
    if ( !v9.fields._current )
      sub_2213CDC(0, v7);
    QuestBoardListViewObject__Init_43262556((QuestBoardListViewObject_o *)v9.fields._current, mode, 0, v8);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__Dispose__);
}


bool QuestBoardListViewManager__IsConsumeColorReset(QuestBoardListViewManager_o *this, const MethodInfo *method)
{
  return this->fields.mResetConsumeColor;
}


bool QuestBoardListViewManager__IsFadedForFolderBG(QuestBoardListViewManager_o *this, const MethodInfo *method)
{
  return this->fields.mFaded;
}


bool QuestBoardListViewManager__IsSliding(QuestBoardListViewManager_o *this, const MethodInfo *method)
{
  return this->fields.mIsDoing_Slide;
}


void QuestBoardListViewManager__LoadAsset(
        QuestBoardListViewManager_o *this,
        System_Action_o *onCompleteLoad,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *Asset; // x1

  Asset = QuestBoardListViewManager__CoroutineLoadAsset(this, onCompleteLoad, method);
  UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)this, Asset, 0);
}


// local variable allocation has failed, the output may be wrong!
void QuestBoardListViewManager__ModifyAllRoadmapButtons(
        QuestBoardListViewManager_o *this,
        bool isEnable,
        bool isImmediate,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v8; // x1
  _BOOL8 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x8
  RoadmapButtonPrefab_o *v12; // x0
  __int64 v13; // [xsp+8h] [xbp-58h]
  System_Collections_Generic_List_Enumerator_object__o *v14; // [xsp+10h] [xbp-50h]
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_596D286 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestBoardListViewObject__GetEnumerator__);
    byte_596D286 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = (System_Collections_Generic_List_object__o *)QuestBoardListViewManager__get_ObjectList(
                                                              this,
                                                              (const MethodInfo *)isEnable);
  if ( !ObjectList )
    sub_2213CDC(0, v8);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    ObjectList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_QuestBoardListViewObject__GetEnumerator__);
  v13 = 0;
  v14 = &v15;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v15,
           (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__MoveNext__);
    if ( !v9 )
      break;
    if ( !v15.fields._current )
      sub_2213CDC(v9, v10);
    v11 = *(__int64 *)((char *)&v15.fields._current->klass + (unsigned __int64)&qword_80);
    if ( !v11 )
      sub_2213CDC(v9, v10);
    v12 = *(RoadmapButtonPrefab_o **)((char *)&stru_348.st_name + v11);
    if ( !v12 )
      sub_2213CDC(0, v10);
    RoadmapButtonPrefab__ModifyRoadmapButton(v12, isEnable, isImmediate, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v15,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__Dispose__);
}


void QuestBoardListViewManager__MoveBoard(
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
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  float LocalPositionY; // s0
  UnityEngine_GameObject_o *v29; // x0
  const MethodInfo_38B8770 *v30; // x1
  Il2CppObject *Component_object; // x0
  MoveObject_o **v32; // x23
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  float v39; // s10
  MoveObject_o *v40; // x21
  System_Action_o *v41; // x22
  System_Action_o *v42; // x23
  UnityEngine_Vector3_o LocalPosition; // 0:kr00_12.12
  UnityEngine_Vector3_o v44; // 0:kr14_12.12
  UnityEngine_Vector3_o v45; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_596D2C4 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_GameObjectExtensions_SafeGetComponent_MoveObject___);
    sub_2213A60(&Method_QuestBoardListViewManager___c__DisplayClass198_0__MoveBoard_b__0__);
    sub_2213A60(&Method_QuestBoardListViewManager___c__DisplayClass198_0__MoveBoard_b__1__);
    sub_2213A60(&QuestBoardListViewManager___c__DisplayClass198_0_TypeInfo);
    byte_596D2C4 = 1;
  }
  v13 = sub_2213CCC(QuestBoardListViewManager___c__DisplayClass198_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0);
  if ( !v13 )
    goto LABEL_10;
  *(_QWORD *)(v13 + 40) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v13 + 40), (int32_t)this, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v13 + 16) = obj;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v13 + 16), (int32_t)obj, v22, v23, v24, v25, v26, v27);
  LocalPositionY = GameObjectExtensions__GetLocalPositionY(*(UnityEngine_GameObject_o **)(v13 + 16), 0);
  v29 = *(UnityEngine_GameObject_o **)(v13 + 16);
  v30 = (const MethodInfo_38B8770 *)Method_GameObjectExtensions_SafeGetComponent_MoveObject___;
  *(float *)(v13 + 32) = LocalPositionY + moveY;
  Component_object = GameObjectExtensions__SafeGetComponent_object_(v29, v30);
  *(_QWORD *)(v13 + 24) = Component_object;
  v32 = (MoveObject_o **)(v13 + 24);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v13 + 24), (int32_t)Component_object, v33, v34, v35, v36, v37, v38);
  if ( is_force
    || (v39 = *(float *)(v13 + 32),
        v39 == GameObjectExtensions__GetLocalPositionY(*(UnityEngine_GameObject_o **)(v13 + 16), 0)) )
  {
    v14 = *v32;
    if ( *v32 )
    {
      MoveObject__Stop(v14, 0);
      GameObjectExtensions__SetLocalPositionY(*(UnityEngine_GameObject_o **)(v13 + 16), *(float *)(v13 + 32), 0);
      --this->fields.waitCount;
      return;
    }
LABEL_10:
    sub_2213CDC(v14, v15);
  }
  LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v13 + 16), 0);
  v44 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v13 + 16), 0);
  v40 = *(MoveObject_o **)(v13 + 24);
  v41 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v41,
    (Il2CppObject *)v13,
    Method_QuestBoardListViewManager___c__DisplayClass198_0__MoveBoard_b__0__,
    0);
  v42 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v42,
    (Il2CppObject *)v13,
    Method_QuestBoardListViewManager___c__DisplayClass198_0__MoveBoard_b__1__,
    0);
  if ( !v40 )
    goto LABEL_10;
  v45.fields.y = v44.fields.y + moveY;
  v45.fields.x = v44.fields.x;
  v45.fields.z = v44.fields.z;
  MoveObject__Play(v40, LocalPosition, v45, time, v41, v42, 0.0, easeType, 0);
}


// local variable allocation has failed, the output may be wrong!
void QuestBoardListViewManager__MoveBoardForTerminalTopEffect(
        QuestBoardListViewManager_o *this,
        bool isClose,
        bool isForce,
        float moveTime,
        int32_t easeType,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *topItemList; // x0
  _BOOL8 v14; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  Il2CppClass *klass; // x24
  __int64 v18; // x1
  __int64 v19; // x2
  QuestBoardListViewItemDraw_c *v20; // x0
  int v21; // w8
  int POS_Y_ITVL_AREA; // w8
  int v23; // w25
  UnityEngine_GameObject_o *gameObject; // x1
  const MethodInfo *v25; // x4
  _BOOL8 v26; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  Il2CppClass *v29; // x24
  __int64 v30; // x1
  __int64 v31; // x2
  QuestBoardListViewItemDraw_c *v32; // x0
  int v33; // w8
  int v34; // w8
  int v35; // w25
  UnityEngine_GameObject_o *v36; // x1
  const MethodInfo *v37; // x4
  const MethodInfo *v38; // x2
  System_Collections_IEnumerator_o *v39; // x0
  System_Collections_Generic_List_Enumerator_object__o v40; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+20h] [xbp-90h] BYREF

  if ( (byte_596D288 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&QuestBoardListViewItemDraw_TypeInfo);
    byte_596D288 = 1;
  }
  topItemList = this->fields.topItemList;
  memset(&v41, 0, sizeof(v41));
  this->fields.waitCount = 0;
  if ( !topItemList )
    goto LABEL_48;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v40,
    (System_Collections_Generic_List_object__o *)topItemList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v41 = v40;
  v40.fields._list = 0;
  *(_QWORD *)&v40.fields._index = &v41;
  while ( 1 )
  {
    v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v41,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v14 )
      break;
    if ( !v41.fields._current )
      sub_2213CDC(v14, v15);
    klass = v41.fields._current[7].klass;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15, v16);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)klass, 0, 0) )
    {
      v20 = QuestBoardListViewItemDraw_TypeInfo;
      v21 = *(&QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished + 1);
      if ( isClose )
      {
        if ( !v21 )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo, v18, v19);
          v20 = QuestBoardListViewItemDraw_TypeInfo;
        }
        POS_Y_ITVL_AREA = -v20->static_fields->POS_Y_ITVL_AREA;
      }
      else
      {
        if ( !v21 )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo, v18, v19);
          v20 = QuestBoardListViewItemDraw_TypeInfo;
        }
        POS_Y_ITVL_AREA = v20->static_fields->POS_Y_ITVL_AREA;
      }
      if ( POS_Y_ITVL_AREA >= 0 )
        v23 = POS_Y_ITVL_AREA;
      else
        v23 = POS_Y_ITVL_AREA + 1;
      if ( !klass )
        sub_2213CDC(v20, v18);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)klass, 0);
      QuestBoardListViewManager__MoveBoard(this, gameObject, (float)(v23 >> 1), moveTime, easeType, isForce, v25);
      ++this->fields.waitCount;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v41,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  topItemList = this->fields.bottomItemList;
  if ( !topItemList )
LABEL_48:
    sub_2213CDC(topItemList, isClose);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v40,
    (System_Collections_Generic_List_object__o *)topItemList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v41 = v40;
  v40.fields._list = 0;
  *(_QWORD *)&v40.fields._index = &v41;
  while ( 1 )
  {
    v26 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v41,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v26 )
      break;
    if ( !v41.fields._current )
      sub_2213CDC(v26, v27);
    v29 = v41.fields._current[7].klass;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27, v28);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v29, 0, 0) )
    {
      v32 = QuestBoardListViewItemDraw_TypeInfo;
      v33 = *(&QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished + 1);
      if ( isClose )
      {
        if ( !v33 )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo, v30, v31);
          v32 = QuestBoardListViewItemDraw_TypeInfo;
        }
        v34 = v32->static_fields->POS_Y_ITVL_AREA;
      }
      else
      {
        if ( !v33 )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo, v30, v31);
          v32 = QuestBoardListViewItemDraw_TypeInfo;
        }
        v34 = -v32->static_fields->POS_Y_ITVL_AREA;
      }
      if ( v34 >= 0 )
        v35 = v34;
      else
        v35 = v34 + 1;
      if ( !v29 )
        sub_2213CDC(v32, v30);
      v36 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v29, 0);
      QuestBoardListViewManager__MoveBoard(this, v36, (float)(v35 >> 1), moveTime, easeType, isForce, v37);
      ++this->fields.waitCount;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v41,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  if ( endAct )
  {
    v39 = QuestBoardListViewManager__WaitFinish(this, endAct, v38);
    UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)this, v39, 0);
  }
}


void QuestBoardListViewManager__OnChangeAlphaAnim(QuestBoardListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  const MethodInfo *v4; // x1
  System_Collections_Generic_List_object__o *v5; // x20
  int32_t v6; // w21

  if ( (byte_596D29F & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_QuestBoardListViewObject__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestBoardListViewObject__get_Item__);
    byte_596D29F = 1;
  }
  ObjectList = (System_Collections_Generic_List_object__o *)QuestBoardListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    goto LABEL_9;
  v5 = ObjectList;
  if ( ObjectList->fields._size >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      ObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  v5,
                                                                  v6,
                                                                  (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_QuestBoardListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      QuestBoardListViewObject__OnChangeAlphaAnim((QuestBoardListViewObject_o *)ObjectList, v4);
      if ( ++v6 >= v5->fields._size )
        goto LABEL_8;
    }
LABEL_9:
    sub_2213CDC(ObjectList, v4);
  }
LABEL_8:
  this->fields.mResetConsumeColor = 0;
}


void QuestBoardListViewManager__OnClickListView(
        QuestBoardListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v5; // x23
  __int64 Instance; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  __int64 *v14; // x21
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  __int64 v27; // x24
  __int64 naturalAligment; // x10
  MapControl_QuestInfo_o *v29; // x20
  struct MapControl_AreaBoardInfo_o *AreaBoardInfo_k__BackingField; // x1
  MapControl_AreaBoardInfo_o **v31; // x22
  struct TerminalSceneComponent_o *mTerminalScene; // x9
  int32_t dispType; // w8
  int v34; // w9
  _QWORD *v35; // x0
  System_Reflection_MethodBase_o *v36; // x0
  __int64 v37; // x1
  __int64 v38; // x2
  int32_t SpotID; // w22
  TerminalPramsManager_c *v40; // x0
  int32_t v41; // w22
  int v42; // w9
  struct TerminalPramsManager_StaticFields *static_fields; // x9
  const MethodInfo_47A29F8 *v44; // x0
  System_Reflection_MethodBase_o *v45; // x0
  _QWORD *v46; // x0
  System_Reflection_MethodBase_o *v47; // x0
  __int64 v48; // x1
  __int64 v49; // x2
  int32_t v50; // w22
  TerminalPramsManager_c *v51; // x0
  __int64 v52; // x2
  int32_t questId; // w22
  TerminalPramsManager_c *v54; // x0
  int32_t v55; // w22
  TerminalPramsManager_c *v56; // x0
  int v57; // w9
  _QWORD *v58; // x0
  System_Reflection_MethodBase_o *v59; // x0
  __int64 v60; // x2
  int32_t warId; // w20
  __int64 v62; // x2
  TerminalSceneComponent_o *v63; // x20
  EventEntity_o *eventEnt; // x20
  System_Action_o *v65; // x24
  const MethodInfo *v66; // x4
  __int64 v67; // x8
  ScrTerminalListTop_o *v68; // x19
  MapControl_AreaBoardInfo_o *v69; // x20
  _QWORD *v70; // x0
  System_Reflection_MethodBase_o *v71; // x0
  _QWORD *v72; // x0
  System_Reflection_MethodBase_o *v73; // x0
  __int64 v74; // x2
  TerminalSceneComponent_c *v75; // x0
  __int64 v76; // x2
  TerminalSceneComponent_c *v77; // x0
  const MethodInfo *v78; // x1
  ScrTerminalListTop_o *mTerminalList; // x19
  MapControl_WarInfo_o *WarInfoByWarID; // x0
  MapControl_WarInfo_o *v81; // x23
  WarEntity_o *Mine; // x22
  MapControl_WarInfo_o *WarInfo_k__BackingField; // x0
  __int64 v84; // x1
  __int64 v85; // x2
  int32_t EventId; // w22
  int32_t GroupId; // w23
  QuestEntity_o *v88; // x0
  __int64 v89; // x1
  __int64 v90; // x2
  long double v91; // q0
  QuestEntity_o *v92; // x23
  __int64 v93; // x1
  __int64 v94; // x2
  __int64 v95; // x1
  System_Reflection_MethodBase_o *v96; // x0
  __int64 v97; // x1
  __int64 v98; // x2
  long double v99; // q0
  TerminalSceneComponent_o *v100; // x0
  __int64 v101; // x1
  const MethodInfo *v102; // x1
  __int64 v103; // x1
  UnityEngine_GameObject_o *fortificationWarningDialog; // x0
  Il2CppObject *Component_object; // x0
  __int64 v106; // x1
  ScrTerminalListTop_o *v107; // x19
  _QWORD *v108; // x0
  System_Reflection_MethodBase_o *v109; // x0
  __int64 v110; // x2
  QuestEntity_o *v111; // x22
  TerminalSceneComponent_c *v112; // x0
  __int64 v113; // x1
  __int64 v114; // x2
  int32_t v115; // w23
  __int64 v116; // x1
  __int64 v117; // x2
  long double v118; // q0
  const MethodInfo *v119; // x1
  ScrTerminalListTop_o *v120; // x19
  __int64 v121; // x19
  QuestBoardListViewObject_o *v122; // x0
  const MethodInfo *v123; // x2
  System_Collections_Generic_List_Enumerator_object__o v124; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v125; // [xsp+20h] [xbp-60h] BYREF
  System_Collections_Generic_List_EventFortificationEntity__o *entities; // [xsp+48h] [xbp-38h] BYREF

  if ( (byte_596D29A & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_EventFortificationMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_QuestGroupMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__get_Current__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_FortificationWarningDialogComponent___);
    sub_2213A60(&Method_System_Collections_Generic_List_EventFortificationEntity__GetEnumerator__);
    sub_2213A60(&QuestBoardListViewItem_TypeInfo);
    sub_2213A60(&Method_QuestBoardListViewManager_OnClickListView__);
    sub_2213A60(&QuestBoardListViewObject_TypeInfo);
    sub_2213A60(&QuestInformationComponent_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    sub_2213A60(&Method_QuestBoardListViewManager___c__DisplayClass143_0__OnClickListView_b__0__);
    sub_2213A60(&QuestBoardListViewManager___c__DisplayClass143_0_TypeInfo);
    byte_596D29A = 1;
  }
  entities = 0;
  memset(&v125, 0, sizeof(v125));
  v5 = sub_2213CCC(QuestBoardListViewManager___c__DisplayClass143_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_189;
  *(_QWORD *)(v5 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 32) = obj;
  v14 = (__int64 *)(v5 + 32);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)obj, v15, v16, v17, v18, v19, v20);
  if ( !*(_QWORD *)(v5 + 32) )
    goto LABEL_189;
  v27 = *(_QWORD *)(*(_QWORD *)(v5 + 32) + 56LL);
  if ( !v27 )
    goto LABEL_189;
  naturalAligment = QuestBoardListViewItem_TypeInfo->_2.naturalAligment;
  if ( *(unsigned __int8 *)(*(_QWORD *)v27 + 304LL) < (unsigned int)naturalAligment
    || *(QuestBoardListViewItem_c **)(*(_QWORD *)(*(_QWORD *)v27 + 200LL) + 8 * naturalAligment - 8) != QuestBoardListViewItem_TypeInfo )
  {
    goto LABEL_189;
  }
  v29 = *(MapControl_QuestInfo_o **)(v27 + 128);
  if ( !v29 )
    return;
  AreaBoardInfo_k__BackingField = v29->fields._AreaBoardInfo_k__BackingField;
  *(_QWORD *)(v5 + 24) = AreaBoardInfo_k__BackingField;
  v31 = (MapControl_AreaBoardInfo_o **)(v5 + 24);
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)(v5 + 24),
    (int32_t)AreaBoardInfo_k__BackingField,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  mTerminalScene = this->fields.mTerminalScene;
  if ( !mTerminalScene )
    goto LABEL_189;
  dispType = v29->fields.dispType;
  mTerminalScene->fields._IsWarStartAnim_k__BackingField = 0;
  v34 = *(_DWORD *)(v27 + 120);
  if ( v34 > 3 )
  {
    if ( v34 == 4 )
      goto LABEL_35;
    if ( v34 == 5 )
    {
      if ( dispType != 2 )
      {
        Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( Instance )
        {
          CommonUI__CheckChangeOtherConnectMarkFromEventId((CommonUI_o *)Instance, 0, 1, 0);
          v72 = Method_QuestBoardListViewManager_OnClickListView__;
          if ( (*((_BYTE *)Method_QuestBoardListViewManager_OnClickListView__ + 83) & 2) != 0 )
            v72 = (_QWORD *)sub_2213A78(Method_QuestBoardListViewManager_OnClickListView__);
          v73 = (System_Reflection_MethodBase_o *)sub_2213A44(v72, v72[4]);
          OverwriteAssetSoundName__PlaySystemSe(v73, 0, 0, 0);
          MapControl_QuestInfo__GetMine(v29, 0);
          if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v7, v74);
          if ( !byte_596A090 )
          {
            sub_2213A60(&TerminalSceneComponent_TypeInfo);
            byte_596A090 = 1;
          }
          v75 = TerminalSceneComponent_TypeInfo;
          if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v7, v74);
            v75 = TerminalSceneComponent_TypeInfo;
          }
          Instance = (__int64)v75->static_fields->mInstance;
          if ( Instance )
          {
            TerminalSceneComponent__QuestInfoShowing((TerminalSceneComponent_o *)Instance, 0);
            if ( !byte_596A090 )
            {
              sub_2213A60(&TerminalSceneComponent_TypeInfo);
              byte_596A090 = 1;
            }
            v77 = TerminalSceneComponent_TypeInfo;
            if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v7, v76);
              v77 = TerminalSceneComponent_TypeInfo;
            }
            Instance = (__int64)v77->static_fields->mInstance;
            if ( Instance )
            {
              TerminalSceneComponent__CallQuestInformationClose((TerminalSceneComponent_o *)Instance, 0);
              QuestBoardListViewManager__SetShowingInfoAllOff(this, v78);
              Instance = *v14;
              if ( *v14 )
              {
                mTerminalList = this->fields.mTerminalList;
                Instance = ListViewObject__get_Index((ListViewObject_o *)Instance, 0);
                if ( mTerminalList )
                {
                  ScrTerminalListTop__Click_WarBoard(mTerminalList, v29, Instance, 0);
                  return;
                }
              }
            }
          }
        }
        goto LABEL_189;
      }
      goto LABEL_101;
    }
    if ( v34 != 6 )
      return;
    v35 = Method_QuestBoardListViewManager_OnClickListView__;
    if ( (*((_BYTE *)Method_QuestBoardListViewManager_OnClickListView__ + 83) & 2) != 0 )
      v35 = (_QWORD *)sub_2213A78(Method_QuestBoardListViewManager_OnClickListView__);
    v36 = (System_Reflection_MethodBase_o *)sub_2213A44(v35, v35[4]);
    OverwriteAssetSoundName__PlaySystemSe(v36, 0, 0, 0);
    SpotID = MapControl_QuestInfo__GetSpotID(v29, 0);
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v37, v38);
    if ( !byte_596A15A )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596A15A = 1;
    }
    v40 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v37, v38);
      v40 = TerminalPramsManager_TypeInfo;
    }
    v40->static_fields->_SpotId_k__BackingField = SpotID;
    v41 = *(_DWORD *)(v27 + 156);
    if ( !byte_596C384 )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      v40 = TerminalPramsManager_TypeInfo;
      byte_596C384 = 1;
    }
    if ( !*(&v40->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v40, v37, v38);
      v40 = TerminalPramsManager_TypeInfo;
    }
    v42 = (unsigned __int8)byte_596D31E;
    v40->static_fields->_SelectedRecollectionWarId_k__BackingField = v41;
    if ( !v42 )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      v40 = TerminalPramsManager_TypeInfo;
      byte_596D31E = 1;
    }
    if ( !*(&v40->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v40, v37, v38);
      v40 = TerminalPramsManager_TypeInfo;
    }
    static_fields = v40->static_fields;
    v44 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
    static_fields->_IsFromRecollectionBoard_k__BackingField = 1;
LABEL_71:
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance(v44);
    if ( Instance )
    {
      CommonUI__CheckChangeOtherConnectMarkFromEventId((CommonUI_o *)Instance, 0, 1, 0);
      Instance = (__int64)this->fields.mTerminalList;
      if ( Instance )
      {
        ScrTerminalListTop__Click_Shortcut((ScrTerminalListTop_o *)Instance, v29->fields.warId, v29->fields.questId, 0);
        return;
      }
    }
    goto LABEL_189;
  }
  if ( (unsigned int)(v34 - 2) < 2 )
  {
    v46 = Method_QuestBoardListViewManager_OnClickListView__;
    if ( (*((_BYTE *)Method_QuestBoardListViewManager_OnClickListView__ + 83) & 2) != 0 )
      v46 = (_QWORD *)sub_2213A78(Method_QuestBoardListViewManager_OnClickListView__);
    v47 = (System_Reflection_MethodBase_o *)sub_2213A44(v46, v46[4]);
    OverwriteAssetSoundName__PlaySystemSe(v47, 0, 0, 0);
    v50 = MapControl_QuestInfo__GetSpotID(v29, 0);
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v48, v49);
    if ( !byte_596A15A )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596A15A = 1;
    }
    v51 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v48, v49);
      v51 = TerminalPramsManager_TypeInfo;
    }
    v51->static_fields->_SpotId_k__BackingField = v50;
    Instance = (__int64)MapControl_QuestInfo__GetMine(v29, 0);
    if ( !Instance )
      goto LABEL_189;
    if ( *(_DWORD *)(Instance + 40) == 3 )
    {
      questId = v29->fields.questId;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v7, v52);
      if ( !byte_596D31D )
      {
        sub_2213A60(&TerminalPramsManager_TypeInfo);
        byte_596D31D = 1;
      }
      v54 = TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v7, v52);
        v54 = TerminalPramsManager_TypeInfo;
      }
      v54->static_fields->_SelectedStoryQuestId_k__BackingField = questId;
    }
    v55 = *(_DWORD *)(v27 + 156);
    if ( v55 )
    {
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v7, v52);
      if ( !byte_596C384 )
      {
        sub_2213A60(&TerminalPramsManager_TypeInfo);
        byte_596C384 = 1;
      }
      v56 = TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v7, v52);
        v56 = TerminalPramsManager_TypeInfo;
      }
      v57 = (unsigned __int8)byte_596D31E;
      v56->static_fields->_SelectedRecollectionWarId_k__BackingField = v55;
      if ( !v57 )
      {
        sub_2213A60(&TerminalPramsManager_TypeInfo);
        v56 = TerminalPramsManager_TypeInfo;
        byte_596D31E = 1;
      }
      if ( !*(&v56->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v56, v7, v52);
        v56 = TerminalPramsManager_TypeInfo;
      }
      v56->static_fields->_IsFromRecollectionBoard_k__BackingField = 1;
    }
    v44 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
    goto LABEL_71;
  }
  if ( !v34 )
  {
    if ( dispType != 2 )
    {
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Instance )
      {
        CommonUI__CheckChangeOtherConnectMarkFromEventId((CommonUI_o *)Instance, 0, 1, 0);
        v58 = Method_QuestBoardListViewManager_OnClickListView__;
        if ( (*((_BYTE *)Method_QuestBoardListViewManager_OnClickListView__ + 83) & 2) != 0 )
          v58 = (_QWORD *)sub_2213A78(Method_QuestBoardListViewManager_OnClickListView__);
        v59 = (System_Reflection_MethodBase_o *)sub_2213A44(v58, v58[4]);
        OverwriteAssetSoundName__PlaySystemSe(v59, 0, 0, 0);
        if ( *v31 )
        {
          Instance = (__int64)this->fields.mTerminalList;
          if ( Instance )
          {
            Instance = ScrTerminalListTop__TryTransitionAreaForShortcutAreaBoard(
                         (ScrTerminalListTop_o *)Instance,
                         (*v31)->fields.warId,
                         0);
            if ( (Instance & 1) != 0 )
              return;
            if ( *v31 )
            {
              warId = (*v31)->fields.warId;
              Instance = (__int64)BalanceConfig_TypeInfo;
              if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v7, v60);
                Instance = (__int64)BalanceConfig_TypeInfo;
              }
              if ( warId != *(_DWORD *)(*(_QWORD *)(Instance + 184) + 860LL) )
                goto LABEL_196;
              if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v7, v60);
              Instance = TerminalPramsManager__ExistBlankEarthTutorial(0);
              if ( (Instance & 1) == 0 )
                goto LABEL_196;
              if ( !*v31 )
                goto LABEL_189;
              if ( (*v31)->fields.status != 1 )
                goto LABEL_160;
              Instance = (__int64)BalanceConfig_TypeInfo;
              v63 = this->fields.mTerminalScene;
              if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v7, v62);
              if ( !v63 )
                goto LABEL_189;
              Instance = TerminalSceneComponent__CheckPlayChapterStart(
                           v63,
                           BalanceConfig_TypeInfo->static_fields->OrdealCallWarId,
                           0);
              if ( (Instance & 1) == 0 )
              {
LABEL_160:
                Instance = (__int64)BalanceConfig_TypeInfo;
                v107 = this->fields.mTerminalList;
                if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v7, v62);
                if ( v107 )
                {
                  ScrTerminalListTop__ShortcutMoveToWar(v107, BalanceConfig_TypeInfo->static_fields->OrdealCallWarId, 0);
                  return;
                }
              }
              else
              {
LABEL_196:
                if ( *v31 )
                {
                  eventEnt = (*v31)->fields.eventEnt;
                  v65 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
                  System_Action___ctor(
                    v65,
                    (Il2CppObject *)v5,
                    Method_QuestBoardListViewManager___c__DisplayClass143_0__OnClickListView_b__0__,
                    0);
                  v67 = *(_QWORD *)(v5 + 24);
                  if ( v67 )
                  {
                    if ( QuestBoardListViewManager__RequestToRaiseTutorialFlag(
                           this,
                           eventEnt,
                           v65,
                           *(_DWORD *)(v67 + 20),
                           v66) )
                    {
                      return;
                    }
                    Instance = *v14;
                    if ( *v14 )
                    {
                      v68 = this->fields.mTerminalList;
                      v69 = *v31;
                      Instance = ListViewObject__get_Index((ListViewObject_o *)Instance, 0);
                      if ( v68 )
                      {
                        ScrTerminalListTop__Click_Area(v68, v69, Instance, 0, 0, 0);
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
LABEL_189:
      sub_2213CDC(Instance, v7);
    }
LABEL_101:
    v70 = Method_QuestBoardListViewManager_OnClickListView__;
    if ( (*((_BYTE *)Method_QuestBoardListViewManager_OnClickListView__ + 83) & 2) != 0 )
      v70 = (_QWORD *)sub_2213A78(Method_QuestBoardListViewManager_OnClickListView__);
    v71 = (System_Reflection_MethodBase_o *)sub_2213A44(v70, v70[4]);
    goto LABEL_104;
  }
  if ( v34 != 1 )
    return;
LABEL_35:
  if ( dispType == 2 )
    goto LABEL_101;
  if ( *v31 )
  {
    Instance = (__int64)this->fields.mTerminalList;
    if ( !Instance )
      goto LABEL_189;
    if ( ScrTerminalListTop__TryTransitionAreaForShortcutAreaBoard(
           (ScrTerminalListTop_o *)Instance,
           (*v31)->fields.warId,
           0) )
    {
      v45 = (System_Reflection_MethodBase_o *)sub_1FFEFAC(Method_QuestBoardListViewManager_OnClickListView__);
      OverwriteAssetSoundName__PlaySystemSe(v45, 0, 0, 0);
      Instance = *v14;
      if ( *v14 )
      {
        this->fields._ResumeCaldeaFolderScrollIndex_k__BackingField = ListViewObject__get_Index(
                                                                        (ListViewObject_o *)Instance,
                                                                        0);
        return;
      }
      goto LABEL_189;
    }
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( !*v31 || !Instance )
      goto LABEL_189;
    WarInfoByWarID = QuestTree__mfGetWarInfoByWarID((QuestTree_o *)Instance, (*v31)->fields.warId, 0);
    if ( WarInfoByWarID )
    {
      v81 = WarInfoByWarID;
      Mine = MapControl_WarInfo__GetMine(WarInfoByWarID, 0);
      if ( MapControl_WarInfo__IsClosedWar(v81, 0) && Mine )
      {
        if ( WarEntity__IsMainInterlude(Mine, 0) )
        {
LABEL_159:
          v71 = (System_Reflection_MethodBase_o *)sub_1FFEFAC(Method_QuestBoardListViewManager_OnClickListView__);
LABEL_104:
          OverwriteAssetSoundName__PlaySystemSe(v71, 2, 0, 0);
          return;
        }
        goto LABEL_131;
      }
      if ( Mine )
      {
LABEL_131:
        if ( WarEntity__IsSubFolder(Mine, 0) )
        {
          Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_QuestTree__get_Instance__);
          if ( !Instance )
            goto LABEL_189;
          if ( !QuestTree__IsWarOpen((QuestTree_o *)Instance, Mine->fields.id, 0) )
            goto LABEL_159;
        }
      }
    }
  }
  WarInfo_k__BackingField = v29->fields._WarInfo_k__BackingField;
  if ( !WarInfo_k__BackingField )
    goto LABEL_165;
  EventId = MapControl_WarInfo__GetEventId(WarInfo_k__BackingField, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v84, v85);
  Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_QuestGroupMaster___);
  if ( !Instance )
    goto LABEL_189;
  GroupId = QuestGroupMaster__GetGroupId((QuestGroupMaster_o *)Instance, v29->fields.questId, 18, 0);
  v88 = MapControl_QuestInfo__GetMine(v29, 0);
  if ( EventId != GroupId )
    goto LABEL_165;
  v92 = v88;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    *(__n128 *)&v91 = j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v89, v90);
  Instance = sub_2947D48(0, v91);
  if ( (Instance & 1) != 0 )
    goto LABEL_165;
  if ( !v92 )
    goto LABEL_189;
  if ( QuestEntity__HasFlag(v92, 2, 0) )
    goto LABEL_165;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v93, v94);
  Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventFortificationMaster___);
  if ( !Instance )
    goto LABEL_189;
  if ( !EventFortificationMaster__TryGetEntityList((EventFortificationMaster_o *)Instance, &entities, EventId, 0) )
    goto LABEL_165;
  Instance = (__int64)entities;
  if ( !entities )
    goto LABEL_189;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v124,
    (System_Collections_Generic_List_object__o *)entities,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_EventFortificationEntity__GetEnumerator__);
  v125 = v124;
  v124.fields._list = 0;
  *(_QWORD *)&v124.fields._index = &v125;
  do
  {
    if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v125,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__MoveNext__) )
    {
      sub_1FFF768(&v124);
LABEL_165:
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Instance )
      {
        CommonUI__CheckChangeOtherConnectMarkFromEventId((CommonUI_o *)Instance, 0, 1, 0);
        v108 = Method_QuestBoardListViewManager_OnClickListView__;
        if ( (*((_BYTE *)Method_QuestBoardListViewManager_OnClickListView__ + 83) & 2) != 0 )
          v108 = (_QWORD *)sub_2213A78(Method_QuestBoardListViewManager_OnClickListView__);
        v109 = (System_Reflection_MethodBase_o *)sub_2213A44(v108, v108[4]);
        OverwriteAssetSoundName__PlaySystemSe(v109, 0, 0, 0);
        v111 = MapControl_QuestInfo__GetMine(v29, 0);
        if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v7, v110);
        if ( !byte_596A090 )
        {
          sub_2213A60(&TerminalSceneComponent_TypeInfo);
          byte_596A090 = 1;
        }
        v112 = TerminalSceneComponent_TypeInfo;
        if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v7, v110);
          v112 = TerminalSceneComponent_TypeInfo;
        }
        Instance = (__int64)v112->static_fields->mInstance;
        if ( Instance )
        {
          v115 = TerminalSceneComponent__QuestInfoShowing((TerminalSceneComponent_o *)Instance, 0);
          if ( !*(&QuestInformationComponent_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(QuestInformationComponent_TypeInfo, v113, v114);
          if ( QuestInformationComponent__IsDisplayQuestInformation_43361992(v111, 0)
            && v115 >= 1
            && v115 != v29->fields.questId )
          {
            v121 = *v14;
            Instance = sub_1FFEA10(*v14, QuestBoardListViewObject_TypeInfo);
            if ( Instance )
            {
              v122 = (QuestBoardListViewObject_o *)sub_1FFEA10(v121, QuestBoardListViewObject_TypeInfo);
              QuestBoardListViewObject__OnClickInfoBtn(v122, 1, v123);
              return;
            }
          }
          else
          {
            if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
              *(__n128 *)&v118 = j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v116, v117);
            Instance = sub_291C204(0, v118);
            if ( Instance )
            {
              TerminalSceneComponent__CallQuestInformationClose((TerminalSceneComponent_o *)Instance, 0);
              QuestBoardListViewManager__SetShowingInfoAllOff(this, v119);
              Instance = *v14;
              if ( *v14 )
              {
                v120 = this->fields.mTerminalList;
                Instance = ListViewObject__get_Index((ListViewObject_o *)Instance, 0);
                if ( v120 )
                {
                  ScrTerminalListTop__Click_Quest(v120, v29, Instance, 0);
                  return;
                }
              }
            }
          }
        }
      }
      goto LABEL_189;
    }
    if ( !v125.fields._current )
      sub_2213CDC(0, v95);
  }
  while ( !EventFortificationEntity__IsOpenFortificationWarningDialog(
             (EventFortificationEntity_o *)v125.fields._current,
             0) );
  v96 = (System_Reflection_MethodBase_o *)sub_1FFEFAC(Method_QuestBoardListViewManager_OnClickListView__);
  OverwriteAssetSoundName__PlaySystemSe(v96, 0, 0, 0);
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    *(__n128 *)&v99 = j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v97, v98);
  v100 = (TerminalSceneComponent_o *)sub_291C204(0, v99);
  if ( !v100 )
    sub_2213CDC(0, v101);
  TerminalSceneComponent__CallQuestInformationClose(v100, 0);
  QuestBoardListViewManager__SetShowingInfoAllOff(this, v102);
  fortificationWarningDialog = this->fields.fortificationWarningDialog;
  if ( !fortificationWarningDialog )
    sub_2213CDC(0, v103);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       fortificationWarningDialog,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_FortificationWarningDialogComponent___);
  if ( !Component_object )
    sub_2213CDC(0, v106);
  FortificationWarningDialogComponent__Open((FortificationWarningDialogComponent_o *)Component_object, 0);
  sub_1FFF768(&v124);
}


void QuestBoardListViewManager__OnCompleteAssetData(
        QuestBoardListViewManager_o *this,
        AssetData_o *loadedAssetData,
        System_Action_o *onCompleteLoad,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x1

  this->fields.effectAssetData = loadedAssetData;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.effectAssetData,
    (int32_t)loadedAssetData,
    (System_String_o *)onCompleteLoad,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  QuestBoardListViewManager__SetupBlackMark(this, v10);
  QuestBoardListViewManager__SetupBoardAppearAndDisappearEffect(this, v11);
  QuestBoardListViewManager__SetupWhiteMark(this, v12);
  QuestBoardListViewManager__SetupQuestBoardEffectController(this, v13);
  ActionExtensions__Call(onCompleteLoad, 0);
}


void QuestBoardListViewManager__OnStartFadeOutAlphaAnim(QuestBoardListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v4; // x1
  QuestBoardListViewItemDraw_o *v5; // x0
  __int64 v6; // x1
  __int64 v7; // [xsp+8h] [xbp-48h]
  System_Collections_Generic_List_Enumerator_object__o *v8; // [xsp+10h] [xbp-40h]
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_596D2A0 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestBoardListViewObject__GetEnumerator__);
    byte_596D2A0 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  ObjectList = (System_Collections_Generic_List_object__o *)QuestBoardListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    sub_2213CDC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    ObjectList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_QuestBoardListViewObject__GetEnumerator__);
  v7 = 0;
  v8 = &v9;
  while ( 1 )
  {
    v5 = (QuestBoardListViewItemDraw_o *)System_Collections_Generic_List_Enumerator_object___MoveNext(
                                           &v9,
                                           (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__MoveNext__);
    if ( ((unsigned __int8)v5 & 1) == 0 )
      break;
    if ( !v9.fields._current
      || (v5 = *(QuestBoardListViewItemDraw_o **)((char *)&v9.fields._current->klass + (unsigned __int64)&qword_80)) == 0 )
    {
      sub_2213CDC(v5, v6);
    }
    QuestBoardListViewItemDraw__OnStartFadeOutAlphaAnim(v5, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__Dispose__);
}


void QuestBoardListViewManager__PlayBoardAppearEffect(
        QuestBoardListViewManager_o *this,
        System_Action_o *playingCallback1,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  UnityEngine_Object_o *effectAppearComponent; // x22
  _BOOL8 v8; // x0
  const MethodInfo *v9; // x4

  if ( (byte_596D2B3 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596D2B3 = 1;
  }
  effectAppearComponent = (UnityEngine_Object_o *)this->fields.effectAppearComponent;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, playingCallback1, endAct);
  v8 = UnityEngine_Object__op_Equality(effectAppearComponent, 0, 0);
  if ( v8 )
  {
    ActionExtensions__Call(playingCallback1, 0);
    ActionExtensions__Call(endAct, 0);
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


void QuestBoardListViewManager__PlayBoardAppearEffectNt2(
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

  if ( (byte_596D2B4 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596D2B4 = 1;
  }
  effectAppearComponent = (UnityEngine_Object_o *)this->fields.effectAppearComponent;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, playingCallback1, endAct);
  if ( UnityEngine_Object__op_Equality(effectAppearComponent, 0, 0) )
  {
    ActionExtensions__Call(playingCallback1, 0);
    ActionExtensions__Call(endAct, 0);
  }
  else
  {
    gameObject = (UnityEngine_Component_o *)this->fields.effectAppearComponent;
    if ( !gameObject )
      goto LABEL_13;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !this->fields.effectAppearComponent )
      goto LABEL_13;
    v10 = (UnityEngine_GameObject_o *)gameObject;
    v11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.effectAppearComponent, 0);
    LocalPositionY = GameObjectExtensions__GetLocalPositionY(v11, 0);
    GameObjectExtensions__SetLocalPositionY(v10, LocalPositionY, 0);
    gameObject = (UnityEngine_Component_o *)this->fields.effectAppearComponent;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0),
          !this->fields.onEffectPanel)
      || (v13 = (UnityEngine_Transform_o *)gameObject,
          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this->fields.onEffectPanel,
                                                    0),
          !v13) )
    {
LABEL_13:
      sub_2213CDC(gameObject, v8);
    }
    UnityEngine_Transform__SetParent_83492444(v13, (UnityEngine_Transform_o *)gameObject, 1, 0);
    QuestBoardListViewManager__PlayBoardEffect(
      v14,
      (QuestBoardListEffectComponent_o *)this->fields.effectAppearComponent,
      playingCallback1,
      endAct,
      v15);
  }
}


void QuestBoardListViewManager__PlayBoardAppearFadeEffect(
        QuestBoardListViewManager_o *this,
        System_Action_o *playingCallback1,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  UnityEngine_Object_o *effectAppearFadeComponent; // x22
  _BOOL8 v8; // x0
  const MethodInfo *v9; // x4

  if ( (byte_596D2B5 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596D2B5 = 1;
  }
  effectAppearFadeComponent = (UnityEngine_Object_o *)this->fields.effectAppearFadeComponent;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, playingCallback1, endAct);
  v8 = UnityEngine_Object__op_Equality(effectAppearFadeComponent, 0, 0);
  if ( v8 )
  {
    ActionExtensions__Call(playingCallback1, 0);
    ActionExtensions__Call(endAct, 0);
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


void QuestBoardListViewManager__PlayBoardBbBoardOpenEffect(
        QuestBoardListViewManager_o *this,
        System_Action_o *playingCallback,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  UnityEngine_Object_o *effectDisappear2Component; // x22
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Object_o *effectDisappear2BbComponent; // x22
  UnityEngine_Object_o *v11; // x22
  __int64 v12; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_GameObject_o *v14; // x22
  UnityEngine_GameObject_o *v15; // x0
  float v16; // s0
  UnityEngine_Transform_o *v17; // x22
  QuestBoardListViewManager_o *v18; // x0
  const MethodInfo *v19; // x4
  QuestBoardListEffectComponent_o *v20; // x1
  UnityEngine_GameObject_o *v21; // x22
  UnityEngine_GameObject_o *v22; // x0
  float LocalPositionY; // s0
  UnityEngine_Transform_o *v24; // x22

  if ( (byte_596D2C0 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596D2C0 = 1;
  }
  effectDisappear2Component = (UnityEngine_Object_o *)this->fields.effectDisappear2Component;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, playingCallback, endAct);
  if ( UnityEngine_Object__op_Equality(effectDisappear2Component, 0, 0) )
  {
    effectDisappear2BbComponent = (UnityEngine_Object_o *)this->fields.effectDisappear2BbComponent;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
    if ( UnityEngine_Object__op_Equality(effectDisappear2BbComponent, 0, 0) )
    {
      ActionExtensions__Call(playingCallback, 0);
      ActionExtensions__Call(endAct, 0);
      return;
    }
  }
  v11 = (UnityEngine_Object_o *)this->fields.effectDisappear2Component;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
  if ( !UnityEngine_Object__op_Inequality(v11, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.effectDisappear2BbComponent;
    if ( gameObject )
    {
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
      if ( this->fields.effectDisappear2BbComponent )
      {
        v21 = (UnityEngine_GameObject_o *)gameObject;
        v22 = UnityEngine_Component__get_gameObject(
                (UnityEngine_Component_o *)this->fields.effectDisappear2BbComponent,
                0);
        LocalPositionY = GameObjectExtensions__GetLocalPositionY(v22, 0);
        GameObjectExtensions__SetLocalPositionY(v21, LocalPositionY, 0);
        gameObject = (UnityEngine_Component_o *)this->fields.effectDisappear2BbComponent;
        if ( gameObject )
        {
          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0);
          if ( this->fields.onEffectPanel )
          {
            v24 = (UnityEngine_Transform_o *)gameObject;
            gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                      (UnityEngine_Component_o *)this->fields.onEffectPanel,
                                                      0);
            if ( v24 )
            {
              UnityEngine_Transform__SetParent_83492444(v24, (UnityEngine_Transform_o *)gameObject, 1, 0);
              v20 = (QuestBoardListEffectComponent_o *)this->fields.effectDisappear2BbComponent;
              goto LABEL_25;
            }
          }
        }
      }
    }
LABEL_26:
    sub_2213CDC(gameObject, v12);
  }
  gameObject = (UnityEngine_Component_o *)this->fields.effectDisappear2Component;
  if ( !gameObject )
    goto LABEL_26;
  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
  if ( !this->fields.effectDisappear2Component )
    goto LABEL_26;
  v14 = (UnityEngine_GameObject_o *)gameObject;
  v15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.effectDisappear2Component, 0);
  v16 = GameObjectExtensions__GetLocalPositionY(v15, 0);
  GameObjectExtensions__SetLocalPositionY(v14, v16, 0);
  gameObject = (UnityEngine_Component_o *)this->fields.effectDisappear2Component;
  if ( !gameObject )
    goto LABEL_26;
  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0);
  if ( !this->fields.onEffectPanel )
    goto LABEL_26;
  v17 = (UnityEngine_Transform_o *)gameObject;
  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                            (UnityEngine_Component_o *)this->fields.onEffectPanel,
                                            0);
  if ( !v17 )
    goto LABEL_26;
  UnityEngine_Transform__SetParent_83492444(v17, (UnityEngine_Transform_o *)gameObject, 1, 0);
  v20 = this->fields.effectDisappear2Component;
LABEL_25:
  QuestBoardListViewManager__PlayBoardEffect(v18, v20, playingCallback, endAct, v19);
}


void QuestBoardListViewManager__PlayBoardDisappear2Effect(
        QuestBoardListViewManager_o *this,
        System_Action_o *playingCallback1,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  UnityEngine_Object_o *effectDisappear2Component; // x22
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Object_o *effectDisappear2BbComponent; // x22
  UnityEngine_Object_o *v11; // x22
  __int64 v12; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_GameObject_o *v14; // x22
  UnityEngine_GameObject_o *v15; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  float v18; // s8
  QuestBoardListViewItemDraw_c *v19; // x0
  int v20; // w8
  int v21; // w8
  UnityEngine_Transform_o *v22; // x22
  QuestBoardListViewManager_o *v23; // x0
  const MethodInfo *v24; // x4
  QuestBoardListEffectComponent_o *v25; // x1
  UnityEngine_GameObject_o *v26; // x22
  UnityEngine_GameObject_o *v27; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  float LocalPositionY; // s8
  QuestBoardListViewItemDraw_c *v31; // x0
  int POS_Y_ITVL_AREA; // w8
  int v33; // w8
  UnityEngine_Transform_o *v34; // x22

  if ( (byte_596D2BF & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&QuestBoardListViewItemDraw_TypeInfo);
    byte_596D2BF = 1;
  }
  effectDisappear2Component = (UnityEngine_Object_o *)this->fields.effectDisappear2Component;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, playingCallback1, endAct);
  if ( UnityEngine_Object__op_Equality(effectDisappear2Component, 0, 0) )
  {
    effectDisappear2BbComponent = (UnityEngine_Object_o *)this->fields.effectDisappear2BbComponent;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
    if ( UnityEngine_Object__op_Equality(effectDisappear2BbComponent, 0, 0) )
    {
      ActionExtensions__Call(playingCallback1, 0);
      ActionExtensions__Call(endAct, 0);
      return;
    }
  }
  v11 = (UnityEngine_Object_o *)this->fields.effectDisappear2Component;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
  if ( !UnityEngine_Object__op_Inequality(v11, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.effectDisappear2BbComponent;
    if ( gameObject )
    {
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
      if ( this->fields.effectDisappear2BbComponent )
      {
        v26 = (UnityEngine_GameObject_o *)gameObject;
        v27 = UnityEngine_Component__get_gameObject(
                (UnityEngine_Component_o *)this->fields.effectDisappear2BbComponent,
                0);
        LocalPositionY = GameObjectExtensions__GetLocalPositionY(v27, 0);
        v31 = QuestBoardListViewItemDraw_TypeInfo;
        if ( !*(&QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo, v28, v29);
          v31 = QuestBoardListViewItemDraw_TypeInfo;
        }
        POS_Y_ITVL_AREA = v31->static_fields->POS_Y_ITVL_AREA;
        v33 = POS_Y_ITVL_AREA <= 0 ? -POS_Y_ITVL_AREA : 1 - POS_Y_ITVL_AREA;
        GameObjectExtensions__SetLocalPositionY(v26, LocalPositionY + (float)(v33 >> 1), 0);
        gameObject = (UnityEngine_Component_o *)this->fields.effectDisappear2BbComponent;
        if ( gameObject )
        {
          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0);
          if ( this->fields.onEffectPanel )
          {
            v34 = (UnityEngine_Transform_o *)gameObject;
            gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                      (UnityEngine_Component_o *)this->fields.onEffectPanel,
                                                      0);
            if ( v34 )
            {
              UnityEngine_Transform__SetParent_83492444(v34, (UnityEngine_Transform_o *)gameObject, 1, 0);
              v25 = (QuestBoardListEffectComponent_o *)this->fields.effectDisappear2BbComponent;
              goto LABEL_35;
            }
          }
        }
      }
    }
LABEL_36:
    sub_2213CDC(gameObject, v12);
  }
  gameObject = (UnityEngine_Component_o *)this->fields.effectDisappear2Component;
  if ( !gameObject )
    goto LABEL_36;
  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
  if ( !this->fields.effectDisappear2Component )
    goto LABEL_36;
  v14 = (UnityEngine_GameObject_o *)gameObject;
  v15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.effectDisappear2Component, 0);
  v18 = GameObjectExtensions__GetLocalPositionY(v15, 0);
  v19 = QuestBoardListViewItemDraw_TypeInfo;
  if ( !*(&QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo, v16, v17);
    v19 = QuestBoardListViewItemDraw_TypeInfo;
  }
  v20 = v19->static_fields->POS_Y_ITVL_AREA;
  v21 = v20 <= 0 ? -v20 : 1 - v20;
  GameObjectExtensions__SetLocalPositionY(v14, v18 + (float)(v21 >> 1), 0);
  gameObject = (UnityEngine_Component_o *)this->fields.effectDisappear2Component;
  if ( !gameObject )
    goto LABEL_36;
  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0);
  if ( !this->fields.onEffectPanel )
    goto LABEL_36;
  v22 = (UnityEngine_Transform_o *)gameObject;
  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                            (UnityEngine_Component_o *)this->fields.onEffectPanel,
                                            0);
  if ( !v22 )
    goto LABEL_36;
  UnityEngine_Transform__SetParent_83492444(v22, (UnityEngine_Transform_o *)gameObject, 1, 0);
  v25 = this->fields.effectDisappear2Component;
LABEL_35:
  QuestBoardListViewManager__PlayBoardEffect(v23, v25, playingCallback1, endAct, v24);
}


void QuestBoardListViewManager__PlayBoardDisappearEffect(
        QuestBoardListViewManager_o *this,
        System_Action_o *playingCallback1,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  UnityEngine_Object_o *effectDisappearComponent; // x22
  _BOOL8 v8; // x0
  const MethodInfo *v9; // x4

  if ( (byte_596D2BE & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596D2BE = 1;
  }
  effectDisappearComponent = (UnityEngine_Object_o *)this->fields.effectDisappearComponent;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, playingCallback1, endAct);
  v8 = UnityEngine_Object__op_Equality(effectDisappearComponent, 0, 0);
  if ( v8 )
  {
    ActionExtensions__Call(playingCallback1, 0);
    ActionExtensions__Call(endAct, 0);
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


void QuestBoardListViewManager__PlayBoardDisappearFadeEffect(
        QuestBoardListViewManager_o *this,
        System_Action_o *playingCallback1,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  UnityEngine_Object_o *effectDisappearFadeComponent; // x22
  _BOOL8 v8; // x0
  const MethodInfo *v9; // x4

  if ( (byte_596D2BD & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596D2BD = 1;
  }
  effectDisappearFadeComponent = (UnityEngine_Object_o *)this->fields.effectDisappearFadeComponent;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, playingCallback1, endAct);
  v8 = UnityEngine_Object__op_Equality(effectDisappearFadeComponent, 0, 0);
  if ( v8 )
  {
    ActionExtensions__Call(playingCallback1, 0);
    ActionExtensions__Call(endAct, 0);
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


void QuestBoardListViewManager__PlayBoardEffect(
        QuestBoardListViewManager_o *this,
        QuestBoardListEffectComponent_o *effectComponent,
        System_Action_o *playingCallback1,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  __int64 v8; // x19
  __int64 v9; // x0
  __int64 v10; // x1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_Action_o **v17; // x23
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  System_Action_o **v24; // x21
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  __int64 v31; // x1
  __int64 v32; // x2
  UnityEngine_Object_o *v33; // x20
  QuestBoardListEffectComponent_o *v34; // x20
  System_Action_o *v35; // x21
  System_Action_o *v36; // x22
  const MethodInfo *v37; // x3

  if ( (byte_596D2C1 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_QuestBoardListViewManager___c__DisplayClass195_0__PlayBoardEffect_b__0__);
    sub_2213A60(&Method_QuestBoardListViewManager___c__DisplayClass195_0__PlayBoardEffect_b__1__);
    sub_2213A60(&QuestBoardListViewManager___c__DisplayClass195_0_TypeInfo);
    byte_596D2C1 = 1;
  }
  v8 = sub_2213CCC(QuestBoardListViewManager___c__DisplayClass195_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0);
  if ( !v8 )
    goto LABEL_14;
  *(_QWORD *)(v8 + 16) = playingCallback1;
  v17 = (System_Action_o **)(v8 + 16);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v8 + 16), (int32_t)playingCallback1, v11, v12, v13, v14, v15, v16);
  *(_QWORD *)(v8 + 24) = effectComponent;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v8 + 24), (int32_t)effectComponent, v18, v19, v20, v21, v22, v23);
  *(_QWORD *)(v8 + 32) = endAct;
  v24 = (System_Action_o **)(v8 + 32);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v8 + 32), (int32_t)endAct, v25, v26, v27, v28, v29, v30);
  v33 = *(UnityEngine_Object_o **)(v8 + 24);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v31, v32);
  if ( !UnityEngine_Object__op_Equality(v33, 0, 0) )
  {
    v34 = *(QuestBoardListEffectComponent_o **)(v8 + 24);
    v35 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      v35,
      (Il2CppObject *)v8,
      Method_QuestBoardListViewManager___c__DisplayClass195_0__PlayBoardEffect_b__0__,
      0);
    v36 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      v36,
      (Il2CppObject *)v8,
      Method_QuestBoardListViewManager___c__DisplayClass195_0__PlayBoardEffect_b__1__,
      0);
    if ( v34 )
    {
      QuestBoardListEffectComponent__Play(v34, v35, v36, v37);
      return;
    }
LABEL_14:
    sub_2213CDC(v9, v10);
  }
  if ( *v17 )
    ActionExtensions__Call(*v17, 0);
  if ( *v24 )
    ActionExtensions__Call(*v24, 0);
}


void QuestBoardListViewManager__ReleaseAsset(QuestBoardListViewManager_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7
  __int64 v51; // x1
  __int64 v52; // x2
  AssetData_o *fortificationAssetData; // x20
  System_String_o *v54; // x2
  System_String_o *v55; // x3
  int32_t v56; // w4
  int32_t v57; // w5
  bool v58; // w6
  bool v59; // w7
  System_String_o *v60; // x2
  System_String_o *v61; // x3
  int32_t v62; // w4
  int32_t v63; // w5
  bool v64; // w6
  bool v65; // w7

  if ( (byte_596D2C2 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    byte_596D2C2 = 1;
  }
  this->fields.blackMarkPrefab = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.blackMarkPrefab, 0, v2, v3, v4, v5, v6, v7);
  this->fields.whiteMarkPrefab = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.whiteMarkPrefab, 0, v9, v10, v11, v12, v13, v14);
  this->fields.fortificationWarningDialog = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.fortificationWarningDialog,
    0,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  this->fields.boardAppearEffectPrefab = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.boardAppearEffectPrefab,
    0,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  this->fields.boardAppearEffectFadePrefab = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.boardAppearEffectFadePrefab,
    0,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  this->fields.boardDisappearEffectPrefab = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.boardDisappearEffectPrefab,
    0,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  this->fields.boardDisappear2EffectPrefab = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.boardDisappear2EffectPrefab,
    0,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  this->fields.boardDisappearEffectFadePrefab = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.boardDisappearEffectFadePrefab,
    0,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50);
  fortificationAssetData = this->fields.fortificationAssetData;
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v51, v52);
  AssetManager__releaseAsset_47496972(fortificationAssetData, 0);
  this->fields.fortificationAssetData = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.fortificationAssetData, 0, v54, v55, v56, v57, v58, v59);
  AssetManager__releaseAsset_47496972(this->fields.bgObjectAssetData, 0);
  this->fields.bgObjectAssetData = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.bgObjectAssetData, 0, v60, v61, v62, v63, v64, v65);
}


void QuestBoardListViewManager__ReleaseTerminalAsset(QuestBoardListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  AssetData_o *effectAssetData; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  if ( (byte_596D2C3 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    byte_596D2C3 = 1;
  }
  effectAssetData = this->fields.effectAssetData;
  if ( effectAssetData )
  {
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method, v2);
    AssetManager__releaseAsset_47496972(effectAssetData, 0);
    this->fields.effectAssetData = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.effectAssetData, 0, v5, v6, v7, v8, v9, v10);
  }
}


void QuestBoardListViewManager__RemoveTempBG(QuestBoardListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *mFolderBgTemp; // x20
  __int64 v5; // x1
  UnityEngine_Component_o **p_mFolderBgTemp; // x19
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Object_o *gameObject; // x20
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_596D2A8 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596D2A8 = 1;
  }
  mFolderBgTemp = (UnityEngine_Object_o *)this->fields.mFolderBgTemp;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(mFolderBgTemp, 0, 0) )
  {
    p_mFolderBgTemp = (UnityEngine_Component_o **)&this->fields.mFolderBgTemp;
    if ( !*p_mFolderBgTemp )
      sub_2213CDC(0, v5);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_mFolderBgTemp, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
    UnityEngine_Object__Destroy_83459800(gameObject, 0);
    *p_mFolderBgTemp = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)p_mFolderBgTemp, 0, v10, v11, v12, v13, v14, v15);
  }
}


void QuestBoardListViewManager__RequestChangeBG(
        QuestBoardListViewManager_o *this,
        int32_t req,
        const MethodInfo *method)
{
  this->fields.mRequestedBGid = req;
}


void QuestBoardListViewManager__RequestConsumeColorReset(QuestBoardListViewManager_o *this, const MethodInfo *method)
{
  this->fields.mResetConsumeColor = 1;
}


void QuestBoardListViewManager__RequestListObject(
        QuestBoardListViewManager_o *this,
        int32_t mode,
        System_Action_o *end_act,
        bool isFade,
        bool isNotInit,
        bool isBlackFade,
        const MethodInfo *method)
{
  __int64 v13; // x21
  CommonUI_o *Instance; // x0
  __int64 v15; // x1
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  const MethodInfo *v28; // x2
  bool v29; // w0
  const MethodInfo *v30; // x3
  int32_t initMode; // w8
  __int64 v32; // x23
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  __int64 v39; // x24
  const MethodInfo *v40; // x3
  const MethodInfo *v41; // x2
  float exitTime; // s0
  __int64 v43; // x1
  const MethodInfo *v44; // x2
  System_Action_o *v45; // x20
  const MethodInfo *v46; // x6
  System_Action_o *v47; // x0
  intptr_t *v48; // x8
  System_Action_o *v49; // x20
  const MethodInfo *v50; // x2
  const MethodInfo *v51; // x2
  const MethodInfo_47A29F8 *v52; // x0
  int v53; // w20
  __int64 v54; // x1
  __int64 v55; // x2
  Il2CppObject *v56; // x22
  AvalonSceneManager_c *v57; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v59; // x23
  CommonUI_o *v60; // x0
  int32_t v61; // w1
  float v62; // s0
  System_Action_o *v63; // x2
  const MethodInfo_47A29F8 *v64; // x0
  int v65; // w20
  __int64 v66; // x1
  __int64 v67; // x2
  Il2CppObject *v68; // x21
  AvalonSceneManager_c *v69; // x8
  float v70; // s8
  System_Action_o *v71; // x22

  if ( (byte_596D294 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&Method_QuestBoardListViewManager___c__DisplayClass133_0__RequestListObject_b__0__);
    sub_2213A60(&Method_QuestBoardListViewManager___c__DisplayClass133_0__RequestListObject_b__1__);
    sub_2213A60(&Method_QuestBoardListViewManager___c__DisplayClass133_0__RequestListObject_b__8__);
    sub_2213A60(&Method_QuestBoardListViewManager___c__DisplayClass133_0__RequestListObject_b__9__);
    sub_2213A60(&QuestBoardListViewManager___c__DisplayClass133_0_TypeInfo);
    sub_2213A60(&Method_QuestBoardListViewManager___c__DisplayClass133_2__RequestListObject_b__7__);
    sub_2213A60(&QuestBoardListViewManager___c__DisplayClass133_2_TypeInfo);
    byte_596D294 = 1;
  }
  v13 = sub_2213CCC(QuestBoardListViewManager___c__DisplayClass133_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0);
  if ( !v13 )
    goto LABEL_49;
  *(_QWORD *)(v13 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v13 + 16), (int32_t)this, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v13 + 32) = end_act;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v13 + 32), (int32_t)end_act, v22, v23, v24, v25, v26, v27);
  *(_BYTE *)(v13 + 40) = isNotInit;
  if ( !isNotInit )
    QuestBoardListViewManager__InitListObject(this, mode, v28);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_49;
  v29 = CommonUI__maskFadeIsOnTop(Instance, 0);
  initMode = this->fields.initMode;
  *(_BYTE *)(v13 + 24) = v29;
  if ( initMode > 4 )
  {
    if ( initMode != 5 )
    {
      if ( initMode == 6 )
      {
        this->fields.mIsDoing_Slide = 0;
        QuestBoardListViewManager__ModifyAllRoadmapButtons(this, 0, 1, v30);
        if ( !isFade )
          goto LABEL_24;
        if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v43, v44);
        if ( TerminalPramsManager__IsAuto(0) )
        {
LABEL_24:
          QuestBoardListViewManager__bgAlphaFade(this, this->fields.initMode, 0.0, v44);
          v45 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
          System_Action___ctor(
            v45,
            (Il2CppObject *)v13,
            Method_QuestBoardListViewManager___c__DisplayClass133_0__RequestListObject_b__8__,
            0);
          QuestBoardListViewManager__SetMode(this, 2, v45, 0, 0, 0, v46);
          goto LABEL_47;
        }
        v52 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
        this->fields.mFaded = 1;
        if ( isBlackFade )
          v53 = 1;
        else
          v53 = 2;
        v56 = SingletonMonoBehaviour_object___get_Instance(v52);
        v57 = AvalonSceneManager_TypeInfo;
        if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v54, v55);
          v57 = AvalonSceneManager_TypeInfo;
        }
        DEFAULT_FADE_TIME = v57->static_fields->DEFAULT_FADE_TIME;
        v59 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
        System_Action___ctor(
          v59,
          (Il2CppObject *)v13,
          Method_QuestBoardListViewManager___c__DisplayClass133_0__RequestListObject_b__9__,
          0);
        if ( !v56 )
          goto LABEL_49;
        v60 = (CommonUI_o *)v56;
        v61 = v53;
        v62 = DEFAULT_FADE_TIME;
        v63 = v59;
        goto LABEL_46;
      }
LABEL_25:
      ActionExtensions__Call(*(System_Action_o **)(v13 + 32), 0);
      return;
    }
    this->fields.mIsDoing_Slide = 0;
    QuestBoardListViewManager__ModifyAllRoadmapButtons(this, 1, 1, v30);
    v47 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    v48 = &Method_QuestBoardListViewManager___c__DisplayClass133_0__RequestListObject_b__1__;
LABEL_28:
    v49 = v47;
    System_Action___ctor(v47, (Il2CppObject *)v13, *v48, 0);
    QuestBoardListViewManager__changeBG(this, v49, v50);
    return;
  }
  if ( initMode == 3 )
  {
    this->fields.mIsDoing_Slide = 1;
    v47 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    v48 = &Method_QuestBoardListViewManager___c__DisplayClass133_0__RequestListObject_b__0__;
    goto LABEL_28;
  }
  if ( initMode != 4 )
    goto LABEL_25;
  v32 = sub_2213CCC(QuestBoardListViewManager___c__DisplayClass133_2_TypeInfo);
  System_Object___ctor((Il2CppObject *)v32, 0);
  if ( !v32 )
    goto LABEL_49;
  *(_QWORD *)(v32 + 24) = v13;
  v39 = v32 + 24;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v32 + 24), v13, v33, v34, v35, v36, v37, v38);
  this->fields.mIsDoing_Slide = 1;
  *(_DWORD *)(v32 + 16) = 0;
  QuestBoardListViewManager__ModifyAllRoadmapButtons(this, 0, 1, v40);
  if ( !isFade )
    goto LABEL_52;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v15, v41);
  Instance = (CommonUI_o *)TerminalPramsManager__IsAuto(0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
LABEL_52:
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
      QuestBoardListViewManager__bgAlphaFade(this, this->fields.initMode, exitTime, v41);
      if ( *(_QWORD *)v39 )
      {
        QuestBoardListViewManager__SetSlideOut(
          this,
          *(float *)(v32 + 16),
          *(System_Action_o **)(*(_QWORD *)v39 + 32LL),
          v51);
        goto LABEL_47;
      }
    }
LABEL_49:
    sub_2213CDC(Instance, v15);
  }
  v64 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
  this->fields.mFaded = 1;
  if ( isBlackFade )
    v65 = 1;
  else
    v65 = 2;
  v68 = SingletonMonoBehaviour_object___get_Instance(v64);
  v69 = AvalonSceneManager_TypeInfo;
  if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v66, v67);
    v69 = AvalonSceneManager_TypeInfo;
  }
  v70 = v69->static_fields->DEFAULT_FADE_TIME;
  v71 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v71,
    (Il2CppObject *)v32,
    Method_QuestBoardListViewManager___c__DisplayClass133_2__RequestListObject_b__7__,
    0);
  if ( !v68 )
    goto LABEL_49;
  v62 = v70;
  v60 = (CommonUI_o *)v68;
  v61 = v65;
  v63 = v71;
LABEL_46:
  CommonUI__maskFadeout(v60, v61, v62, v63, 0);
LABEL_47:
  Instance = (CommonUI_o *)this->fields.mNoneLabelParent;
  if ( !Instance )
    goto LABEL_49;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
}


bool QuestBoardListViewManager__RequestToRaiseTutorialFlag(
        QuestBoardListViewManager_o *this,
        EventEntity_o *eventEntity,
        System_Action_o *clickAreaFunc,
        int32_t warId,
        const MethodInfo *method)
{
  __int64 v8; // x20
  Il2CppObject *FlagFromOnEventStart; // x0
  __int64 v10; // x1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  QuestBoardListViewManager_o *v17; // x0
  const MethodInfo *v18; // x3
  __int64 v19; // x2
  int32_t id; // w21
  int32_t v21; // w22
  NetworkManager_ResultCallbackFunc_o *v22; // x19
  __int64 v23; // x1
  __int64 v24; // x2
  int32_t flagType; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_596D29E & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&Method_NetworkManager_getRequest_TutorialEventSetRequest___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_2213A60(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_2213A60(&Method_QuestBoardListViewManager___c__DisplayClass147_0__RequestToRaiseTutorialFlag_b__0__);
    sub_2213A60(&QuestBoardListViewManager___c__DisplayClass147_0_TypeInfo);
    byte_596D29E = 1;
  }
  flagType = 0;
  v8 = sub_2213CCC(QuestBoardListViewManager___c__DisplayClass147_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0);
  if ( !v8 )
    goto LABEL_17;
  *(_QWORD *)(v8 + 16) = clickAreaFunc;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v8 + 16), (int32_t)clickAreaFunc, v11, v12, v13, v14, v15, v16);
  FlagFromOnEventStart = (Il2CppObject *)QuestBoardListViewManager__TryGetFlagFromOnEventStart(
                                           v17,
                                           &flagType,
                                           eventEntity,
                                           v18);
  if ( ((unsigned __int8)FlagFromOnEventStart & 1) != 0 )
  {
    if ( !eventEntity )
      goto LABEL_17;
    id = eventEntity->fields.id;
    v21 = flagType;
    if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v10, v19);
    if ( !CondType__IsEventTutorialFlagOn(id, v21, 0) )
    {
      FlagFromOnEventStart = SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !FlagFromOnEventStart )
        goto LABEL_17;
      if ( QuestTree__IsWarOpen((QuestTree_o *)FlagFromOnEventStart, warId, 0) )
      {
        v22 = (NetworkManager_ResultCallbackFunc_o *)sub_2213CCC(NetworkManager_ResultCallbackFunc_TypeInfo);
        NetworkManager_ResultCallbackFunc___ctor(
          v22,
          (Il2CppObject *)v8,
          Method_QuestBoardListViewManager___c__DisplayClass147_0__RequestToRaiseTutorialFlag_b__0__,
          0);
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v23, v24);
        FlagFromOnEventStart = NetworkManager__getRequest_object_(
                                 v22,
                                 (const MethodInfo_38F1B78 *)Method_NetworkManager_getRequest_TutorialEventSetRequest___);
        if ( FlagFromOnEventStart )
        {
          TutorialEventSetRequest__beginRequest((TutorialEventSetRequest_o *)FlagFromOnEventStart, v21, id, 0);
          return 1;
        }
LABEL_17:
        sub_2213CDC(FlagFromOnEventStart, v10);
      }
    }
  }
  return 0;
}


void QuestBoardListViewManager__ResetAlphaAnimTime(QuestBoardListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  float realtimeSinceStartup; // s0
  QuestBoardListViewManager_c *v6; // x0
  float v7; // s8
  System_Func_float__float__float__float__o *v8; // x20
  AlphaTransitionCalculator_o *v9; // x21
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  __int64 v16; // x1
  AlphaTransitionCalculator_o *rewardIconAlphaCalculator; // x0

  if ( (byte_596D29C & 1) == 0 )
  {
    sub_2213A60(&AlphaTransitionCalculator_TypeInfo);
    sub_2213A60(&QuestBoardListViewManager_TypeInfo);
    byte_596D29C = 1;
  }
  this->fields.mAlphaAnimNow = 1.0;
  realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0);
  v6 = QuestBoardListViewManager_TypeInfo;
  this->fields.mAlphaAnimTimeOld = realtimeSinceStartup;
  if ( !*(&v6->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v6, v3, v4);
    v6 = QuestBoardListViewManager_TypeInfo;
  }
  v7 = ChangedFPSUtil__CovertFrameNumToSecond(v6->static_fields->REWARD_ICON_FADE_FRAME_NUM, 0);
  v8 = ExtraEasing__AsymptoticSeriesFloat(
         QuestBoardListViewManager_TypeInfo->static_fields->ALPHA_ANIM_SPD_RATE,
         (float)QuestBoardListViewManager_TypeInfo->static_fields->REWARD_ICON_FADE_FRAME_NUM,
         0);
  v9 = (AlphaTransitionCalculator_o *)sub_2213CCC(AlphaTransitionCalculator_TypeInfo);
  AlphaTransitionCalculator___ctor(v9, v7, v8, 0);
  this->fields.rewardIconAlphaCalculator = v9;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.rewardIconAlphaCalculator,
    (int32_t)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  rewardIconAlphaCalculator = this->fields.rewardIconAlphaCalculator;
  if ( !rewardIconAlphaCalculator )
    sub_2213CDC(0, v16);
  AlphaTransitionCalculator__MakeFadeInFinished(rewardIconAlphaCalculator, 0);
}


void QuestBoardListViewManager__ResetBG(QuestBoardListViewManager_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *mFolderBg; // x0
  const MethodInfo *v4; // x1

  mFolderBg = (UnityEngine_Component_o *)this->fields.mFolderBg;
  this->fields.mRequestedBGid = 0;
  if ( !mFolderBg
    || (mFolderBg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mFolderBg, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mFolderBg, 0, 0),
        (mFolderBg = (UnityEngine_Component_o *)this->fields.mFolderBg) == 0) )
  {
    sub_2213CDC(mFolderBg, method);
  }
  ExUITexture__ClearImage((ExUITexture_o *)mFolderBg, 0);
  QuestBoardListViewManager__ResetBgObject(this, v4);
}


void QuestBoardListViewManager__ResetBgObject(QuestBoardListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *mFolderBgObject; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *bgObject; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Object_o *v10; // x21
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  UnityEngine_GameObject_o *v17; // x0
  AssetData_o *bgObjectAssetData; // x20
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7

  if ( (byte_596D2A5 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596D2A5 = 1;
  }
  mFolderBgObject = (UnityEngine_Object_o *)this->fields.mFolderBgObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(mFolderBgObject, 0, 0) )
  {
    bgObject = (UnityEngine_Object_o *)this->fields.bgObject;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
    if ( UnityEngine_Object__op_Inequality(bgObject, 0, 0) )
    {
      v10 = (UnityEngine_Object_o *)this->fields.bgObject;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
      UnityEngine_Object__Destroy_83459800(v10, 0);
      this->fields.bgObject = 0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.bgObject, 0, v11, v12, v13, v14, v15, v16);
    }
    v17 = this->fields.mFolderBgObject;
    if ( !v17 )
      sub_2213CDC(0, v8);
    UnityEngine_GameObject__SetActive(v17, 0, 0);
  }
  bgObjectAssetData = this->fields.bgObjectAssetData;
  if ( bgObjectAssetData )
  {
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v5, v6);
    AssetManager__releaseAsset_47496972(bgObjectAssetData, 0);
    this->fields.bgObjectAssetData = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.bgObjectAssetData, 0, v19, v20, v21, v22, v23, v24);
  }
  this->fields.currentObjectId = -1;
}


// local variable allocation has failed, the output may be wrong!
void QuestBoardListViewManager__SetBackMaskActive(
        QuestBoardListViewManager_o *this,
        bool isActive,
        bool isForcedActive,
        const MethodInfo *method)
{
  QuestBoardListViewManager_o *v6; // x20
  struct TerminalSceneComponent_o *mTerminalScene; // x8
  struct ScrTerminalMap_o *mTerminalMap; // x8
  const MethodInfo *v9; // x1
  __int64 v10; // x1
  __int64 v11; // x2
  Il2CppObject *current; // x21
  _BOOL8 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x2
  Il2CppObject *Component_object; // x22
  _BOOL8 v18; // x0
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x2
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+20h] [xbp-70h] BYREF

  v6 = this;
  if ( (byte_596D2C5 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UITouchPress___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestBoardListViewObject__GetEnumerator__);
    this = (QuestBoardListViewManager_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596D2C5 = 1;
  }
  mTerminalScene = v6->fields.mTerminalScene;
  memset(&v22, 0, sizeof(v22));
  if ( !mTerminalScene )
    goto LABEL_31;
  mTerminalMap = mTerminalScene->fields.mTerminalMap;
  if ( !mTerminalMap )
    goto LABEL_31;
  this = (QuestBoardListViewManager_o *)mTerminalMap->fields.dispRoot;
  if ( !this )
    goto LABEL_31;
  if ( !UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0) )
  {
    this = (QuestBoardListViewManager_o *)v6->fields.mTerminalList;
    if ( !this )
      goto LABEL_31;
    if ( !ScrTerminalListTop__get_IsActiveAnyEarth((ScrTerminalListTop_o *)this, 0) && !isForcedActive )
      return;
  }
  this = (QuestBoardListViewManager_o *)v6->fields.backMaskBg;
  if ( !this
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, isActive, 0),
        (this = (QuestBoardListViewManager_o *)v6->fields.spriteFadeMaskCollider) == 0)
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, !isActive, 0),
        (this = (QuestBoardListViewManager_o *)QuestBoardListViewManager__get_ObjectList(v6, v9)) == 0) )
  {
LABEL_31:
    sub_2213CDC(this, isActive);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v21,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_QuestBoardListViewObject__GetEnumerator__);
  v22 = v21;
  v21.fields._list = 0;
  *(_QWORD *)&v21.fields._index = &v22;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v22,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__MoveNext__) )
  {
    current = v22.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v11);
    v13 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v13 )
    {
      if ( !current )
        sub_2213CDC(v13, v14);
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)current,
                           (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UITouchPress___);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15, v16);
      v18 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
      if ( v18 )
      {
        if ( !Component_object )
          sub_2213CDC(v18, v19);
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, isActive, 0);
      }
      if ( isActive && QuestBoardListViewObject__IsDummy((QuestBoardListViewObject_o *)current, v19) )
        QuestBoardListViewObject__SetBackPanel((QuestBoardListViewObject_o *)current, v6->fields.mTerminalList, v20);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v22,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void QuestBoardListViewManager__SetCenterItem(
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

  if ( (byte_596D299 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596D299 = 1;
  }
  effectAppearComponent = (UnityEngine_Object_o *)this->fields.effectAppearComponent;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&item_index, isAnimation);
  v10 = UnityEngine_Object__op_Inequality(effectAppearComponent, 0, 0);
  if ( v10 )
  {
    v12 = this->fields.effectAppearComponent;
    if ( !v12 )
      sub_2213CDC(v10, v11);
    forceShiftY = v12->fields.targetBoardForceShiftPosY;
  }
  ListViewManager__MoveCenterItem((ListViewManager_o *)this, item_index, isAnimation, 0, forceShiftY, 0, 0);
}


void QuestBoardListViewManager__SetFocusItem(
        QuestBoardListViewManager_o *this,
        int32_t itemIndex,
        bool isAnimation,
        const MethodInfo *method)
{
  ListViewManager__MoveTopItem((ListViewManager_o *)this, itemIndex, isAnimation, 0.0, 0);
}


bool QuestBoardListViewManager__SetMode(
        QuestBoardListViewManager_o *this,
        int32_t mode,
        System_Action_o *end_act,
        bool isFade,
        bool isNotInit,
        bool isBlackFade,
        const MethodInfo *method)
{
  int32_t mIsDoing_Slide; // w8
  __int64 v14; // x1
  UnityEngine_Collider_o *mBoxCollider; // x0
  const MethodInfo *v16; // x6
  bool v17; // w3
  bool v18; // w4
  bool v19; // w5
  QuestBoardListViewManager_o *v20; // x0
  int32_t v21; // w1
  System_Action_o *v22; // x2

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
        ActionExtensions__Call(end_act, 0);
        return 0;
      }
      mIsDoing_Slide = this->fields.initMode;
    }
    if ( mIsDoing_Slide )
      goto LABEL_12;
  }
  this->fields.initMode = mode;
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0);
  mBoxCollider = (UnityEngine_Collider_o *)this->fields.mBoxCollider;
  if ( !mBoxCollider )
    sub_2213CDC(0, v14);
  UnityEngine_Collider__set_enabled(mBoxCollider, this->fields.isInput, 0);
  if ( (unsigned int)(mode - 3) < 4 )
    goto LABEL_11;
  if ( mode == 2 )
  {
    v18 = isNotInit;
    v20 = this;
    v21 = 3;
    goto LABEL_17;
  }
  if ( mode != 1 )
  {
    v18 = isNotInit;
    v20 = this;
    v21 = 0;
LABEL_17:
    v22 = end_act;
    v17 = 0;
    v19 = 0;
    goto LABEL_18;
  }
LABEL_11:
  v17 = isFade;
  v18 = isNotInit;
  v19 = isBlackFade;
  v20 = this;
  v21 = 2;
  v22 = end_act;
LABEL_18:
  QuestBoardListViewManager__RequestListObject(v20, v21, v22, v17, v18, v19, v16);
  return 1;
}


// local variable allocation has failed, the output may be wrong!
void QuestBoardListViewManager__SetNoneLabelActive(
        QuestBoardListViewManager_o *this,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *mNoneLabelParent; // x0

  mNoneLabelParent = this->fields.mNoneLabelParent;
  if ( !mNoneLabelParent )
    sub_2213CDC(0, isActive);
  UnityEngine_GameObject__SetActive(mNoneLabelParent, isActive, 0);
}


void QuestBoardListViewManager__SetObjectItem(
        QuestBoardListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewObject_o *v4; // x20
  QuestBoardListViewManager_o *v5; // x19
  __int64 naturalAligment; // x10
  __int64 v7; // x2
  ListViewSort_c *klass; // x8
  __int64 v9; // x21
  QuestBoardListViewManager_o *v10; // x23
  __int64 v11; // x2
  System_String_o *ActiveStateName; // x22
  const MethodInfo *v13; // x2

  v4 = obj;
  v5 = this;
  if ( (byte_596D291 & 1) == 0 )
  {
    sub_2213A60(&QuestBoardListViewObject_TypeInfo);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    sub_2213A60(&StringLiteral_9260/*"Map Touch Disable"*/);
    this = (QuestBoardListViewManager_o *)sub_2213A60(&StringLiteral_3429/*"CAPTER INIT"*/);
    byte_596D291 = 1;
  }
  if ( v4 )
  {
    naturalAligment = QuestBoardListViewObject_TypeInfo->_2.naturalAligment;
    if ( v4->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
    {
      if ( (QuestBoardListViewObject_c *)v4->klass->_2.typeHierarchy[naturalAligment - 1] != QuestBoardListViewObject_TypeInfo )
        v4 = 0;
    }
    else
    {
      v4 = 0;
    }
  }
  if ( v5->fields.initMode != 2 )
  {
    if ( v4 )
    {
      QuestBoardListViewObject__Init_43262556((QuestBoardListViewObject_o *)v4, 2, 0, method);
      return;
    }
    goto LABEL_45;
  }
  if ( !v4 )
    goto LABEL_45;
  QuestBoardListViewObject__Init_43262556((QuestBoardListViewObject_o *)v4, 3, 0, method);
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, obj, v7);
  if ( !byte_596A090 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596A090 = 1;
  }
  this = (QuestBoardListViewManager_o *)TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, obj, v7);
    this = (QuestBoardListViewManager_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = this->fields.sort->klass;
  if ( !klass )
    goto LABEL_45;
  this = (QuestBoardListViewManager_o *)v5->fields.mTerminalList;
  if ( !this )
    goto LABEL_45;
  v9 = *(_QWORD *)&klass->_2.static_fields_size;
  this = (QuestBoardListViewManager_o *)ScrTerminalListTop__mfGetMyFsmP((ScrTerminalListTop_o *)this, 0);
  if ( !this )
    goto LABEL_45;
  this = (QuestBoardListViewManager_o *)PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)this, 0);
  if ( !v9 )
    goto LABEL_45;
  v10 = this;
  this = (QuestBoardListViewManager_o *)ScrTerminalMap__mfGetMyFsmP((ScrTerminalMap_o *)v9, 0);
  if ( !this )
    goto LABEL_45;
  ActiveStateName = PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)this, 0);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, obj, v11);
  if ( !byte_596D31C )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D31C = 1;
  }
  this = (QuestBoardListViewManager_o *)TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, obj, v11);
    this = (QuestBoardListViewManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !BYTE1(this->fields.sort[4].monitor) )
  {
    if ( v10 )
    {
      if ( (System_String__IndexOf_75715196((System_String_o *)v10, (System_String_o *)StringLiteral_3429/*"CAPTER INIT"*/, 0)
          & 0x80000000) == 0 )
        return;
      this = *(QuestBoardListViewManager_o **)(v9 + 104);
      if ( this )
      {
        this = (QuestBoardListViewManager_o *)UnityEngine_GameObject__get_activeSelf(
                                                (UnityEngine_GameObject_o *)this,
                                                0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !ActiveStateName )
            goto LABEL_45;
          if ( System_String__IndexOf_75715196(ActiveStateName, (System_String_o *)StringLiteral_9260/*"Map Touch Disable"*/, 0) < 0 )
            return;
        }
        this = *(QuestBoardListViewManager_o **)(v9 + 104);
        if ( this )
        {
          if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0) )
          {
LABEL_41:
            if ( v5->fields._IsShowingInfo_k__BackingField
              || !QuestBoardListViewObject__IsDummy((QuestBoardListViewObject_o *)v4, (const MethodInfo *)obj) )
            {
              QuestBoardListViewObject__DisableBackPanel((QuestBoardListViewObject_o *)v4, (const MethodInfo *)obj);
            }
            else
            {
              QuestBoardListViewObject__SetBackPanel((QuestBoardListViewObject_o *)v4, v5->fields.mTerminalList, v13);
            }
            return;
          }
          this = (QuestBoardListViewManager_o *)v5->fields.mTerminalList;
          if ( this )
          {
            if ( !ScrTerminalListTop__get_IsActiveBlankEarth((ScrTerminalListTop_o *)this, 0) )
              return;
            goto LABEL_41;
          }
        }
      }
    }
LABEL_45:
    sub_2213CDC(this, obj);
  }
}


void QuestBoardListViewManager__SetOutPosition(QuestBoardListViewManager_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  SlideFadeObject_o *v7; // x19
  float v8; // s8
  float v9; // s10
  float v10; // s9
  QuestBoardListViewManager_c *v11; // x0
  float OUT_POS_OFS_X; // s0
  UnityEngine_Vector3_o v13; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596D297 & 1) == 0 )
  {
    sub_2213A60(&Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
    sub_2213A60(&QuestBoardListViewManager_TypeInfo);
    byte_596D297 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_38B8770 *)Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
  if ( !Component_object )
    sub_2213CDC(0, v5);
  v7 = (SlideFadeObject_o *)Component_object;
  v9 = *(float *)&Component_object[4].klass;
  v8 = *((float *)&Component_object[4].klass + 1);
  v10 = *(float *)&Component_object[4].monitor;
  v11 = QuestBoardListViewManager_TypeInfo;
  if ( !*(&QuestBoardListViewManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(QuestBoardListViewManager_TypeInfo, v5, v6);
  OUT_POS_OFS_X = QuestBoardListViewManager__get_OUT_POS_OFS_X((const MethodInfo *)v11);
  v13.fields.y = v8;
  v13.fields.z = v10;
  v13.fields.x = v9 + OUT_POS_OFS_X;
  SlideFadeObject__SetPosition(v7, v13, 0);
}


// local variable allocation has failed, the output may be wrong!
void QuestBoardListViewManager__SetScrollBarEnable(
        QuestBoardListViewManager_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_Object_o *blockMask; // x22
  MissionNaviTransitionBoardItem_o *p_blockMask; // x19
  int v7; // w8
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Object_o *klass; // x20
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  __int64 v17; // x1
  __int64 v18; // x2
  UnityEngine_Object_o *blockMaskPrefab; // x21
  __int64 v20; // x1
  __int64 v21; // x2
  Il2CppObject *v22; // x21
  Il2CppObject *v23; // x0
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  UnityEngine_GameObject_o *v30; // x19

  if ( (byte_596D282 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596D282 = 1;
  }
  blockMask = (UnityEngine_Object_o *)this->fields.blockMask;
  p_blockMask = (MissionNaviTransitionBoardItem_o *)&this->fields.blockMask;
  v7 = *(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1);
  if ( isEnable )
  {
    if ( !v7 )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isEnable, method);
    if ( UnityEngine_Object__op_Inequality(blockMask, 0, 0) )
    {
      klass = (UnityEngine_Object_o *)p_blockMask->klass;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
      UnityEngine_Object__DestroyImmediate_83460132(klass, 0);
      p_blockMask->klass = 0;
      sub_2213A04(p_blockMask, 0, v11, v12, v13, v14, v15, v16);
    }
  }
  else
  {
    if ( !v7 )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isEnable, method);
    if ( UnityEngine_Object__op_Equality(blockMask, 0, 0) )
    {
      blockMaskPrefab = (UnityEngine_Object_o *)this->fields.blockMaskPrefab;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17, v18);
      if ( UnityEngine_Object__op_Inequality(blockMaskPrefab, 0, 0) )
      {
        v22 = (Il2CppObject *)this->fields.blockMaskPrefab;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20, v21);
        v23 = UnityEngine_Object__Instantiate_object_(
                v22,
                (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
        this->fields.blockMask = (struct UnityEngine_GameObject_o *)v23;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.blockMask,
          (int32_t)v23,
          v24,
          v25,
          v26,
          v27,
          v28,
          v29);
        GameObjectExtensions__SafeSetParent(
          this->fields.blockMask,
          (UnityEngine_Component_o *)this->fields.onEffectPanel,
          0);
        v30 = this->fields.blockMask;
        if ( !byte_5969AE0 )
        {
          sub_2213A60(&UnityEngine_Vector3_TypeInfo);
          byte_5969AE0 = 1;
        }
        GameObjectExtensions__SetLocalPosition(v30, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void QuestBoardListViewManager__SetScrollViewPanelDepth(
        QuestBoardListViewManager_o *this,
        int32_t depth,
        bool isDefault,
        const MethodInfo *method)
{
  int32_t DEFAULT_SCROLL_VIEW_DEPTH; // w19
  UnityEngine_Component_o *scrollView; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *Component_object; // x21
  __int64 v11; // x2

  DEFAULT_SCROLL_VIEW_DEPTH = depth;
  if ( (byte_596D2A9 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&QuestBoardListViewManager_TypeInfo);
    byte_596D2A9 = 1;
  }
  scrollView = (UnityEngine_Component_o *)this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_14;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       scrollView,
                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
  scrollView = (UnityEngine_Component_o *)UnityEngine_Object__op_Equality(
                                            (UnityEngine_Object_o *)Component_object,
                                            0,
                                            0);
  if ( ((unsigned __int8)scrollView & 1) == 0 )
  {
    if ( isDefault )
    {
      scrollView = (UnityEngine_Component_o *)QuestBoardListViewManager_TypeInfo;
      if ( !*(&QuestBoardListViewManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(QuestBoardListViewManager_TypeInfo, *(_QWORD *)&depth, v11);
      if ( Component_object )
      {
        DEFAULT_SCROLL_VIEW_DEPTH = QuestBoardListViewManager_TypeInfo->static_fields->DEFAULT_SCROLL_VIEW_DEPTH;
LABEL_13:
        UIPanel__set_depth((UIPanel_o *)Component_object, DEFAULT_SCROLL_VIEW_DEPTH, 0);
        return;
      }
    }
    else if ( Component_object )
    {
      goto LABEL_13;
    }
LABEL_14:
    sub_2213CDC(scrollView, *(_QWORD *)&depth);
  }
}


// local variable allocation has failed, the output may be wrong!
void QuestBoardListViewManager__SetShowingInfo(
        QuestBoardListViewManager_o *this,
        int32_t idx,
        bool onOff,
        const MethodInfo *method)
{
  int32_t v5; // w21
  System_Collections_Generic_List_object__o *itemList; // x0
  __int64 v8; // x2
  UnityEngine_Object_o *syncRoot; // x21
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 naturalAligment; // x9
  QuestBoardListViewManager_o *v13; // x0
  const MethodInfo *v14; // x1

  v5 = idx;
  if ( (byte_596D2A2 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&QuestBoardListViewObject_TypeInfo);
    byte_596D2A2 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_14;
  itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                            itemList,
                                                            v5,
                                                            (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
  if ( !itemList )
    goto LABEL_14;
  syncRoot = (UnityEngine_Object_o *)itemList[2].fields._syncRoot;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&idx, v8);
  itemList = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Inequality(syncRoot, 0, 0);
  if ( ((unsigned __int8)itemList & 1) == 0 )
    goto LABEL_13;
  if ( !syncRoot )
LABEL_14:
    sub_2213CDC(itemList, *(_QWORD *)&idx);
  *(_QWORD *)&idx = QuestBoardListViewObject_TypeInfo;
  naturalAligment = QuestBoardListViewObject_TypeInfo->_2.naturalAligment;
  if ( syncRoot->klass->_2.naturalAligment >= (unsigned int)naturalAligment
    && (QuestBoardListViewObject_c *)syncRoot->klass->_2.typeHierarchy[naturalAligment - 1] == QuestBoardListViewObject_TypeInfo )
  {
    itemList = (System_Collections_Generic_List_object__o *)syncRoot[5].monitor;
    if ( itemList )
    {
      QuestBoardListViewItemDraw__setInfoShowing((QuestBoardListViewItemDraw_o *)itemList, onOff, 0);
LABEL_13:
      this->fields._IsShowingInfo_k__BackingField = onOff;
      return;
    }
    goto LABEL_14;
  }
  sub_221405C(syncRoot, QuestBoardListViewObject_TypeInfo, v10, v11);
  QuestBoardListViewManager__RequestConsumeColorReset(v13, v14);
}


void QuestBoardListViewManager__SetShowingInfoAllOff(QuestBoardListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *v5; // x20
  int32_t v6; // w21

  if ( (byte_596D2A1 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_QuestBoardListViewObject__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestBoardListViewObject__get_Item__);
    byte_596D2A1 = 1;
  }
  ObjectList = (System_Collections_Generic_List_object__o *)QuestBoardListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    goto LABEL_10;
  v5 = ObjectList;
  if ( ObjectList->fields._size >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      ObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  v5,
                                                                  v6,
                                                                  (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_QuestBoardListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      ObjectList = (System_Collections_Generic_List_object__o *)ObjectList[3].monitor;
      if ( !ObjectList )
        break;
      QuestBoardListViewItemDraw__setInfoShowing((QuestBoardListViewItemDraw_o *)ObjectList, 0, 0);
      if ( ++v6 >= v5->fields._size )
        goto LABEL_9;
    }
LABEL_10:
    sub_2213CDC(ObjectList, v4);
  }
LABEL_9:
  this->fields._IsShowingInfo_k__BackingField = 0;
}


void QuestBoardListViewManager__SetSlideOut(
        QuestBoardListViewManager_o *this,
        float time,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  __int64 v7; // x19
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  UnityEngine_GameObject_o *v22; // x0
  Il2CppObject *Component_object; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  SlideFadeObject_o *v26; // x20
  float OUT_POS_OFS_X; // s9
  System_Action_o *v28; // x21

  if ( (byte_596D295 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
    sub_2213A60(&QuestBoardListViewManager_TypeInfo);
    sub_2213A60(&Method_QuestBoardListViewManager___c__DisplayClass134_0__SetSlideOut_b__0__);
    sub_2213A60(&QuestBoardListViewManager___c__DisplayClass134_0_TypeInfo);
    byte_596D295 = 1;
  }
  v7 = sub_2213CCC(QuestBoardListViewManager___c__DisplayClass134_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_9;
  *(_QWORD *)(v7 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = end_act;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 24), (int32_t)end_act, v16, v17, v18, v19, v20, v21);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_9;
  v22 = UnityEngine_GameObject__get_gameObject(gameObject, 0);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       v22,
                       (const MethodInfo_38B8770 *)Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
  v26 = (SlideFadeObject_o *)Component_object;
  if ( !*(&QuestBoardListViewManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(QuestBoardListViewManager_TypeInfo, v24, v25);
  OUT_POS_OFS_X = QuestBoardListViewManager__get_OUT_POS_OFS_X((const MethodInfo *)Component_object);
  v28 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v28,
    (Il2CppObject *)v7,
    Method_QuestBoardListViewManager___c__DisplayClass134_0__SetSlideOut_b__0__,
    0);
  if ( !v26 )
LABEL_9:
    sub_2213CDC(gameObject, v9);
  SlideFadeObject__SlideOut_42907896(v26, OUT_POS_OFS_X, time, 0.0, v28, 0);
}


// local variable allocation has failed, the output may be wrong!
void QuestBoardListViewManager__SetTerminalTopEffectPlay(
        QuestBoardListViewManager_o *this,
        int32_t targetWarId,
        bool isClose,
        const MethodInfo *method)
{
  QuestBoardListViewManager_o *v6; // x21
  struct System_Collections_Generic_List_ListViewItem__o *topItemList; // x8
  int32_t size; // w2
  int v9; // w9
  struct System_Collections_Generic_List_ListViewItem__o *bottomItemList; // x8
  int32_t v11; // w2
  int v12; // w9
  char v13; // w26
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  Il2CppObject *current; // x1
  __int64 naturalAligment; // x10
  System_Collections_Generic_List_object__o *v22; // x0
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  Il2CppClass **v26; // x8
  System_Collections_Generic_List_object__o *v27; // x0
  struct System_Object_array *v28; // x8
  _QWORD *v29; // x9
  __int64 v30; // x10
  Il2CppClass **v31; // x8
  Il2CppClass *klass; // x8
  _DWORD *interopData; // x8
  System_Collections_Generic_List_Enumerator_object__o v34; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+20h] [xbp-70h] BYREF

  v6 = this;
  if ( (byte_596D287 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    this = (QuestBoardListViewManager_o *)sub_2213A60(&QuestBoardListViewItem_TypeInfo);
    byte_596D287 = 1;
  }
  memset(&v35, 0, sizeof(v35));
  if ( targetWarId )
  {
    topItemList = v6->fields.topItemList;
    if ( !topItemList )
      goto LABEL_40;
    size = topItemList->fields._size;
    v9 = topItemList->fields._version + 1;
    topItemList->fields._size = 0;
    topItemList->fields._version = v9;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)topItemList->fields._items, 0, size, 0);
    bottomItemList = v6->fields.bottomItemList;
    if ( !bottomItemList )
      goto LABEL_40;
    v11 = bottomItemList->fields._size;
    v12 = bottomItemList->fields._version + 1;
    bottomItemList->fields._size = 0;
    bottomItemList->fields._version = v12;
    if ( v11 >= 1 )
      System_Array__Clear((System_Array_o *)bottomItemList->fields._items, 0, v11, 0);
    this = (QuestBoardListViewManager_o *)v6->fields.itemList;
    if ( !this )
LABEL_40:
      sub_2213CDC(this, *(_QWORD *)&targetWarId);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v34,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v13 = 1;
    v35 = v34;
    v34.fields._list = 0;
    *(_QWORD *)&v34.fields._index = &v35;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v35,
                (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v35,
            (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          return;
        }
        current = v35.fields._current;
        if ( v35.fields._current )
        {
          naturalAligment = QuestBoardListViewItem_TypeInfo->_2.naturalAligment;
          if ( v35.fields._current->klass->_2.naturalAligment >= (unsigned int)naturalAligment
            && (QuestBoardListViewItem_c *)v35.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] == QuestBoardListViewItem_TypeInfo )
          {
            klass = v35.fields._current[8].klass;
            if ( klass )
            {
              interopData = klass->_1.interopData;
              if ( interopData )
              {
                if ( interopData[4] != 1 && interopData[5] == targetWarId )
                  break;
              }
            }
          }
        }
        if ( (v13 & 1) != 0 )
        {
          v22 = (System_Collections_Generic_List_object__o *)v6->fields.topItemList;
          if ( !v22
            || (items = v22->fields._items,
                v24 = Method_System_Collections_Generic_List_ListViewItem__Add__,
                ++v22->fields._version,
                !items) )
          {
            sub_2213CDC(v22, current);
          }
          v25 = v22->fields._size;
          if ( (unsigned int)v25 >= LODWORD(items->max_length) )
          {
            v13 = 1;
            System_Collections_Generic_List_object___AddWithResize(
              v22,
              current,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
          }
          else
          {
            v26 = &items->obj.klass + v25;
            v13 = 1;
            v22->fields._size = v25 + 1;
            v26[4] = (Il2CppClass *)current;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v26 + 4), (int32_t)current, v14, v15, v16, v17, v18, v19);
          }
        }
        else
        {
          v27 = (System_Collections_Generic_List_object__o *)v6->fields.bottomItemList;
          if ( !v27
            || (v28 = v27->fields._items,
                v29 = Method_System_Collections_Generic_List_ListViewItem__Add__,
                ++v27->fields._version,
                !v28) )
          {
            sub_2213CDC(v27, current);
          }
          v30 = v27->fields._size;
          if ( (unsigned int)v30 < LODWORD(v28->max_length) )
            goto LABEL_24;
LABEL_35:
          System_Collections_Generic_List_object___AddWithResize(
            v27,
            current,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
          v13 = 0;
        }
      }
      v13 = 0;
      if ( isClose )
      {
        v27 = (System_Collections_Generic_List_object__o *)v6->fields.bottomItemList;
        if ( !v27
          || (v28 = v27->fields._items,
              v29 = Method_System_Collections_Generic_List_ListViewItem__Add__,
              ++v27->fields._version,
              !v28) )
        {
          sub_2213CDC(v27, current);
        }
        v30 = v27->fields._size;
        if ( (unsigned int)v30 >= LODWORD(v28->max_length) )
          goto LABEL_35;
LABEL_24:
        v31 = &v28->obj.klass + v30;
        v27->fields._size = v30 + 1;
        v31[4] = (Il2CppClass *)current;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v31 + 4), (int32_t)current, v14, v15, v16, v17, v18, v19);
        v13 = 0;
      }
    }
  }
}


void QuestBoardListViewManager__SetUpBoardAppearEffect(
        QuestBoardListViewManager_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Component_o *QuestBoardObjForWarId; // x21
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Object_o *boardAppearEffectPrefab; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  Il2CppObject *v13; // x20
  UnityEngine_GameObject_o *transform; // x0
  __int64 v15; // x1
  UnityEngine_GameObject_o *v16; // x20
  UnityEngine_Transform_o *v17; // x22
  UnityEngine_Transform_o *v18; // x21
  UnityEngine_Transform_o *v19; // x21
  UnityEngine_Transform_o *v20; // x21
  Il2CppObject *Component_object; // x0
  struct QuestBoardListEffectAppearComponent_o **p_effectAppearComponent; // x20
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  const MethodInfo *v29; // x2

  if ( (byte_596D2B1 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectAppearComponent___);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596D2B1 = 1;
  }
  QuestBoardObjForWarId = (UnityEngine_Component_o *)QuestBoardListViewManager__GetQuestBoardObjForWarId(
                                                       this,
                                                       warId,
                                                       method);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)QuestBoardObjForWarId, 0, 0) )
  {
    boardAppearEffectPrefab = (UnityEngine_Object_o *)this->fields.boardAppearEffectPrefab;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
    if ( !UnityEngine_Object__op_Equality(boardAppearEffectPrefab, 0, 0) )
    {
      v13 = (Il2CppObject *)this->fields.boardAppearEffectPrefab;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11, v12);
      transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                v13,
                                                (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( transform )
      {
        v16 = transform;
        transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
        if ( QuestBoardObjForWarId )
        {
          v17 = (UnityEngine_Transform_o *)transform;
          transform = UnityEngine_Component__get_gameObject(QuestBoardObjForWarId, 0);
          if ( transform )
          {
            transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
            if ( v17 )
            {
              UnityEngine_Transform__set_parent(v17, (UnityEngine_Transform_o *)transform, 0);
              transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v16, 0);
              v18 = (UnityEngine_Transform_o *)transform;
              if ( !byte_5969AE0 )
              {
                transform = (UnityEngine_GameObject_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
                byte_5969AE0 = 1;
              }
              if ( v18 )
              {
                UnityEngine_Transform__set_localPosition(
                  v18,
                  UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
                  0);
                transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v16, 0);
                v19 = (UnityEngine_Transform_o *)transform;
                if ( !byte_5969AE6 )
                {
                  transform = (UnityEngine_GameObject_o *)sub_2213A60(&UnityEngine_Quaternion_TypeInfo);
                  byte_5969AE6 = 1;
                }
                if ( v19 )
                {
                  UnityEngine_Transform__set_localRotation(
                    v19,
                    UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
                    0);
                  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v16, 0);
                  v20 = (UnityEngine_Transform_o *)transform;
                  if ( !byte_5969AE5 )
                  {
                    transform = (UnityEngine_GameObject_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
                    byte_5969AE5 = 1;
                  }
                  if ( v20 )
                  {
                    UnityEngine_Transform__set_localScale(
                      v20,
                      UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
                      0);
                    Component_object = UnityEngine_GameObject__GetComponent_object_(
                                         v16,
                                         (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectAppearComponent___);
                    p_effectAppearComponent = &this->fields.effectAppearComponent;
                    this->fields.effectAppearComponent = (struct QuestBoardListEffectAppearComponent_o *)Component_object;
                    sub_2213A04(
                      (MissionNaviTransitionBoardItem_o *)&this->fields.effectAppearComponent,
                      (int32_t)Component_object,
                      v23,
                      v24,
                      v25,
                      v26,
                      v27,
                      v28);
                    if ( UnityEngine_Object__op_Equality(
                           (UnityEngine_Object_o *)this->fields.effectAppearComponent,
                           0,
                           0) )
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
                        v29);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
      sub_2213CDC(transform, v15);
    }
  }
}


void QuestBoardListViewManager__SetUpBoardAppearEffectNT2(
        QuestBoardListViewManager_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Component_o *QuestBoardObjForWarId; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Object_o *nt2BoardAppearEffectPrefab; // x21
  __int64 v11; // x1
  __int64 v12; // x2
  Il2CppObject *v13; // x21
  UnityEngine_GameObject_o *transform; // x0
  __int64 v15; // x1
  UnityEngine_GameObject_o *v16; // x21
  UnityEngine_Transform_o *v17; // x22
  Il2CppObject *Component_object; // x0
  struct QuestBoardListEffectAppearComponent_o **p_effectAppearComponent; // x20
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  const MethodInfo *v26; // x2

  if ( (byte_596D2BA & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectAppearComponent___);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596D2BA = 1;
  }
  QuestBoardObjForWarId = (UnityEngine_Component_o *)QuestBoardListViewManager__GetQuestBoardObjForWarId(
                                                       this,
                                                       warId,
                                                       method);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)QuestBoardObjForWarId, 0, 0) )
  {
    nt2BoardAppearEffectPrefab = (UnityEngine_Object_o *)this->fields.nt2BoardAppearEffectPrefab;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
    if ( !UnityEngine_Object__op_Equality(nt2BoardAppearEffectPrefab, 0, 0) )
    {
      v13 = (Il2CppObject *)this->fields.nt2BoardAppearEffectPrefab;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11, v12);
      transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                v13,
                                                (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( transform )
      {
        v16 = transform;
        transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
        if ( QuestBoardObjForWarId )
        {
          v17 = (UnityEngine_Transform_o *)transform;
          transform = UnityEngine_Component__get_gameObject(QuestBoardObjForWarId, 0);
          if ( transform )
          {
            transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
            if ( v17 )
            {
              UnityEngine_Transform__set_parent(v17, (UnityEngine_Transform_o *)transform, 0);
              GameObjectExtensions__ResetTransform(v16, 0);
              Component_object = UnityEngine_GameObject__GetComponent_object_(
                                   v16,
                                   (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectAppearComponent___);
              p_effectAppearComponent = &this->fields.effectAppearComponent;
              this->fields.effectAppearComponent = (struct QuestBoardListEffectAppearComponent_o *)Component_object;
              sub_2213A04(
                (MissionNaviTransitionBoardItem_o *)&this->fields.effectAppearComponent,
                (int32_t)Component_object,
                v20,
                v21,
                v22,
                v23,
                v24,
                v25);
              if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)this->fields.effectAppearComponent, 0, 0) )
                return;
              transform = (UnityEngine_GameObject_o *)*p_effectAppearComponent;
              if ( *p_effectAppearComponent )
              {
                QuestBoardListEffectComponent__Init((QuestBoardListEffectComponent_o *)transform, 0, 0.0, 0.0, v26);
                return;
              }
            }
          }
        }
      }
      sub_2213CDC(transform, v15);
    }
  }
}


void QuestBoardListViewManager__SetUpBoardAppearFadeEffect(QuestBoardListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *boardAppearEffectFadePrefab; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *v7; // x20
  UnityEngine_GameObject_o *transform; // x0
  __int64 v9; // x1
  UnityEngine_GameObject_o *v10; // x20
  UnityEngine_Transform_o *v11; // x21
  UnityEngine_Transform_o *v12; // x21
  UnityEngine_Transform_o *v13; // x21
  UnityEngine_Transform_o *v14; // x21
  Il2CppObject *Component_object; // x0
  struct QuestBoardListEffectComponent_o **p_effectAppearFadeComponent; // x20
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  const MethodInfo *v23; // x2

  if ( (byte_596D2B2 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectComponent___);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596D2B2 = 1;
  }
  boardAppearEffectFadePrefab = (UnityEngine_Object_o *)this->fields.boardAppearEffectFadePrefab;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( !UnityEngine_Object__op_Equality(boardAppearEffectFadePrefab, 0, 0) )
  {
    v7 = (Il2CppObject *)this->fields.boardAppearEffectFadePrefab;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                              v7,
                                              (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( transform )
    {
      v10 = transform;
      transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
      if ( this->fields.fadePanel )
      {
        v11 = (UnityEngine_Transform_o *)transform;
        transform = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)this->fields.fadePanel,
                                                  0);
        if ( v11 )
        {
          UnityEngine_Transform__set_parent(v11, (UnityEngine_Transform_o *)transform, 0);
          transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v10, 0);
          v12 = (UnityEngine_Transform_o *)transform;
          if ( !byte_5969AE0 )
          {
            transform = (UnityEngine_GameObject_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
            byte_5969AE0 = 1;
          }
          if ( v12 )
          {
            UnityEngine_Transform__set_localPosition(v12, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
            transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v10, 0);
            v13 = (UnityEngine_Transform_o *)transform;
            if ( !byte_5969AE6 )
            {
              transform = (UnityEngine_GameObject_o *)sub_2213A60(&UnityEngine_Quaternion_TypeInfo);
              byte_5969AE6 = 1;
            }
            if ( v13 )
            {
              UnityEngine_Transform__set_localRotation(
                v13,
                UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
                0);
              transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v10, 0);
              v14 = (UnityEngine_Transform_o *)transform;
              if ( !byte_5969AE5 )
              {
                transform = (UnityEngine_GameObject_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
                byte_5969AE5 = 1;
              }
              if ( v14 )
              {
                UnityEngine_Transform__set_localScale(v14, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
                Component_object = UnityEngine_GameObject__GetComponent_object_(
                                     v10,
                                     (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectComponent___);
                p_effectAppearFadeComponent = &this->fields.effectAppearFadeComponent;
                this->fields.effectAppearFadeComponent = (struct QuestBoardListEffectComponent_o *)Component_object;
                sub_2213A04(
                  (MissionNaviTransitionBoardItem_o *)&this->fields.effectAppearFadeComponent,
                  (int32_t)Component_object,
                  v17,
                  v18,
                  v19,
                  v20,
                  v21,
                  v22);
                if ( UnityEngine_Object__op_Equality(
                       (UnityEngine_Object_o *)this->fields.effectAppearFadeComponent,
                       0,
                       0) )
                {
                  return;
                }
                transform = (UnityEngine_GameObject_o *)*p_effectAppearFadeComponent;
                if ( *p_effectAppearFadeComponent )
                {
                  QuestBoardListEffectComponent__Init((QuestBoardListEffectComponent_o *)transform, 0, 0.0, 0.0, v23);
                  return;
                }
              }
            }
          }
        }
      }
    }
    sub_2213CDC(transform, v9);
  }
}


void QuestBoardListViewManager__SetUpBoardAppearFadeEffectNT2(
        QuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *nt2BoardAppearEffectFadePrefab; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *v7; // x20
  UnityEngine_GameObject_o *transform; // x0
  __int64 v9; // x1
  UnityEngine_GameObject_o *v10; // x20
  UnityEngine_Transform_o *v11; // x21
  Il2CppObject *Component_object; // x0
  struct QuestBoardListEffectComponent_o **p_effectAppearFadeComponent; // x20
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  const MethodInfo *v20; // x2

  if ( (byte_596D2BB & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectComponent___);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596D2BB = 1;
  }
  nt2BoardAppearEffectFadePrefab = (UnityEngine_Object_o *)this->fields.nt2BoardAppearEffectFadePrefab;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( !UnityEngine_Object__op_Equality(nt2BoardAppearEffectFadePrefab, 0, 0) )
  {
    v7 = (Il2CppObject *)this->fields.nt2BoardAppearEffectFadePrefab;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                              v7,
                                              (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( transform )
    {
      v10 = transform;
      transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
      if ( this->fields.fadePanel )
      {
        v11 = (UnityEngine_Transform_o *)transform;
        transform = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)this->fields.fadePanel,
                                                  0);
        if ( v11 )
        {
          UnityEngine_Transform__set_parent(v11, (UnityEngine_Transform_o *)transform, 0);
          GameObjectExtensions__ResetTransform(v10, 0);
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               v10,
                               (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectComponent___);
          p_effectAppearFadeComponent = &this->fields.effectAppearFadeComponent;
          this->fields.effectAppearFadeComponent = (struct QuestBoardListEffectComponent_o *)Component_object;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&this->fields.effectAppearFadeComponent,
            (int32_t)Component_object,
            v14,
            v15,
            v16,
            v17,
            v18,
            v19);
          if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)this->fields.effectAppearFadeComponent, 0, 0) )
            return;
          transform = (UnityEngine_GameObject_o *)*p_effectAppearFadeComponent;
          if ( *p_effectAppearFadeComponent )
          {
            QuestBoardListEffectComponent__Init((QuestBoardListEffectComponent_o *)transform, 0, 0.0, 0.0, v20);
            return;
          }
        }
      }
    }
    sub_2213CDC(transform, v9);
  }
}


// local variable allocation has failed, the output may be wrong!
void QuestBoardListViewManager__SetUpBoardDisappearEffect(
        QuestBoardListViewManager_o *this,
        int32_t warId,
        bool isNextBoardReleased,
        float endTime,
        const MethodInfo *method)
{
  UnityEngine_Object_o *boardDisappearEffectPrefab; // x22
  const MethodInfo *v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  UnityEngine_Component_o *QuestBoardObjForWarId; // x22
  __int64 v14; // x1
  __int64 v15; // x2
  Il2CppObject *v16; // x21
  __int64 transform; // x0
  __int64 v18; // x1
  UnityEngine_GameObject_o *v19; // x21
  UnityEngine_Transform_o *v20; // x23
  UnityEngine_Transform_o *v21; // x22
  UnityEngine_Transform_o *v22; // x22
  UnityEngine_Transform_o *v23; // x22
  Il2CppObject *Component_object; // x0
  struct QuestBoardListEffectDisappearComponent_o **p_effectDisappearComponent; // x22
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  const MethodInfo *v32; // x2

  if ( (byte_596D2B6 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectDisappearComponent___);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596D2B6 = 1;
  }
  boardDisappearEffectPrefab = (UnityEngine_Object_o *)this->fields.boardDisappearEffectPrefab;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&warId, isNextBoardReleased);
  if ( !UnityEngine_Object__op_Equality(boardDisappearEffectPrefab, 0, 0) )
  {
    QuestBoardObjForWarId = (UnityEngine_Component_o *)QuestBoardListViewManager__GetQuestBoardObjForWarId(
                                                         this,
                                                         warId,
                                                         v10);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11, v12);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)QuestBoardObjForWarId, 0, 0) )
    {
      v16 = (Il2CppObject *)this->fields.boardDisappearEffectPrefab;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14, v15);
      transform = (__int64)UnityEngine_Object__Instantiate_object_(
                             v16,
                             (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( transform )
      {
        v19 = (UnityEngine_GameObject_o *)transform;
        transform = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0);
        if ( QuestBoardObjForWarId )
        {
          v20 = (UnityEngine_Transform_o *)transform;
          transform = (__int64)UnityEngine_Component__get_gameObject(QuestBoardObjForWarId, 0);
          if ( transform )
          {
            transform = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0);
            if ( v20 )
            {
              UnityEngine_Transform__set_parent(v20, (UnityEngine_Transform_o *)transform, 0);
              transform = (__int64)UnityEngine_GameObject__get_transform(v19, 0);
              v21 = (UnityEngine_Transform_o *)transform;
              if ( !byte_5969AE0 )
              {
                transform = sub_2213A60(&UnityEngine_Vector3_TypeInfo);
                byte_5969AE0 = 1;
              }
              if ( v21 )
              {
                UnityEngine_Transform__set_localPosition(
                  v21,
                  UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
                  0);
                transform = (__int64)UnityEngine_GameObject__get_transform(v19, 0);
                v22 = (UnityEngine_Transform_o *)transform;
                if ( !byte_5969AE6 )
                {
                  transform = sub_2213A60(&UnityEngine_Quaternion_TypeInfo);
                  byte_5969AE6 = 1;
                }
                if ( v22 )
                {
                  UnityEngine_Transform__set_localRotation(
                    v22,
                    UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
                    0);
                  transform = (__int64)UnityEngine_GameObject__get_transform(v19, 0);
                  v23 = (UnityEngine_Transform_o *)transform;
                  if ( !byte_5969AE5 )
                  {
                    transform = sub_2213A60(&UnityEngine_Vector3_TypeInfo);
                    byte_5969AE5 = 1;
                  }
                  if ( v23 )
                  {
                    UnityEngine_Transform__set_localScale(
                      v23,
                      UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
                      0);
                    Component_object = UnityEngine_GameObject__GetComponent_object_(
                                         v19,
                                         (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectDisappearComponent___);
                    p_effectDisappearComponent = &this->fields.effectDisappearComponent;
                    this->fields.effectDisappearComponent = (struct QuestBoardListEffectDisappearComponent_o *)Component_object;
                    sub_2213A04(
                      (MissionNaviTransitionBoardItem_o *)&this->fields.effectDisappearComponent,
                      (int32_t)Component_object,
                      v26,
                      v27,
                      v28,
                      v29,
                      v30,
                      v31);
                    transform = UnityEngine_Object__op_Equality(
                                  (UnityEngine_Object_o *)this->fields.effectDisappearComponent,
                                  0,
                                  0);
                    if ( (transform & 1) != 0 )
                      return;
                    if ( *p_effectDisappearComponent )
                    {
                      GameObjectExtensions__SetLocalPositionY(
                        v19,
                        (*p_effectDisappearComponent)->fields.disappearEffectShiftPosY,
                        0);
                      transform = (__int64)*p_effectDisappearComponent;
                      if ( isNextBoardReleased )
                      {
                        if ( transform )
                        {
LABEL_29:
                          QuestBoardListEffectComponent__Init(
                            (QuestBoardListEffectComponent_o *)transform,
                            1,
                            0.0,
                            endTime,
                            v32);
                          return;
                        }
                      }
                      else
                      {
                        endTime = 0.0;
                        if ( transform )
                          goto LABEL_29;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      sub_2213CDC(transform, v18);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void QuestBoardListViewManager__SetUpBoardDisappearEffectOnCaldeaGate(
        QuestBoardListViewManager_o *this,
        int32_t warId,
        bool isNextBoardReleased,
        float endTime,
        const MethodInfo *method)
{
  UnityEngine_Object_o *boardDisappearEffectPrefab; // x22
  const MethodInfo *v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  UnityEngine_Component_o *QuestBoardObjOnFolder; // x22
  __int64 v14; // x1
  __int64 v15; // x2
  Il2CppObject *v16; // x21
  UnityEngine_GameObject_o *transform; // x0
  __int64 v18; // x1
  UnityEngine_GameObject_o *v19; // x21
  UnityEngine_Transform_o *v20; // x23
  Il2CppObject *Component_object; // x0
  struct QuestBoardListEffectDisappearComponent_o **p_effectDisappearComponent; // x22
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  const MethodInfo *v29; // x2

  if ( (byte_596D2B7 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectDisappearComponent___);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596D2B7 = 1;
  }
  boardDisappearEffectPrefab = (UnityEngine_Object_o *)this->fields.boardDisappearEffectPrefab;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&warId, isNextBoardReleased);
  if ( !UnityEngine_Object__op_Equality(boardDisappearEffectPrefab, 0, 0) )
  {
    QuestBoardObjOnFolder = (UnityEngine_Component_o *)QuestBoardListViewManager__GetQuestBoardObjOnFolder(
                                                         this,
                                                         warId,
                                                         v10);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11, v12);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)QuestBoardObjOnFolder, 0, 0) )
    {
      v16 = (Il2CppObject *)this->fields.boardDisappearEffectPrefab;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14, v15);
      transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                v16,
                                                (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( transform )
      {
        v19 = transform;
        transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
        if ( QuestBoardObjOnFolder )
        {
          v20 = (UnityEngine_Transform_o *)transform;
          transform = UnityEngine_Component__get_gameObject(QuestBoardObjOnFolder, 0);
          if ( transform )
          {
            transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
            if ( v20 )
            {
              UnityEngine_Transform__set_parent(v20, (UnityEngine_Transform_o *)transform, 0);
              GameObjectExtensions__ResetTransform(v19, 0);
              Component_object = UnityEngine_GameObject__GetComponent_object_(
                                   v19,
                                   (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectDisappearComponent___);
              p_effectDisappearComponent = &this->fields.effectDisappearComponent;
              this->fields.effectDisappearComponent = (struct QuestBoardListEffectDisappearComponent_o *)Component_object;
              sub_2213A04(
                (MissionNaviTransitionBoardItem_o *)&this->fields.effectDisappearComponent,
                (int32_t)Component_object,
                v23,
                v24,
                v25,
                v26,
                v27,
                v28);
              transform = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(
                                                        (UnityEngine_Object_o *)this->fields.effectDisappearComponent,
                                                        0,
                                                        0);
              if ( ((unsigned __int8)transform & 1) != 0 )
                return;
              if ( *p_effectDisappearComponent )
              {
                GameObjectExtensions__SetLocalPositionY(
                  v19,
                  (*p_effectDisappearComponent)->fields.disappearEffectShiftPosY,
                  0);
                transform = (UnityEngine_GameObject_o *)*p_effectDisappearComponent;
                if ( isNextBoardReleased )
                {
                  if ( transform )
                  {
LABEL_20:
                    QuestBoardListEffectComponent__Init(
                      (QuestBoardListEffectComponent_o *)transform,
                      1,
                      0.0,
                      endTime,
                      v29);
                    return;
                  }
                }
                else
                {
                  endTime = 0.0;
                  if ( transform )
                    goto LABEL_20;
                }
              }
            }
          }
        }
      }
      sub_2213CDC(transform, v18);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void QuestBoardListViewManager__SetUpBoardDisppear2Effect(
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
  __int64 v16; // x2
  UnityEngine_Object_o *QuestBoardObjForWarId; // x23
  __int64 v18; // x1
  __int64 v19; // x2
  int v20; // w8
  UnityEngine_Object_o *ntBoardAppearEffectPrefab; // x22
  struct UnityEngine_GameObject_o **p_ntBoardAppearEffectPrefab; // x24
  __int64 v23; // x1
  __int64 v24; // x2
  Il2CppObject *v25; // x22
  __int64 transform; // x0
  __int64 v27; // x1
  UnityEngine_GameObject_o *v28; // x22
  UnityEngine_Transform_o *v29; // x24
  UnityEngine_Transform_o *v30; // x23
  UnityEngine_Transform_o *v31; // x23
  UnityEngine_Transform_o *v32; // x23
  Il2CppObject *Component_object; // x0
  struct QuestBoardListEffectBoardOpenComponent_o **p_effectDisappear2BbComponent; // x21
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  __int64 v41; // x1
  __int64 v42; // x2
  UnityEngine_Object_o *effectDisappear2BbComponent; // x19
  const MethodInfo *v44; // x2
  Il2CppObject *v45; // x0
  struct QuestBoardListEffectComponent_o **p_effectDisappear2Component; // x20
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  __int64 v53; // x1
  __int64 v54; // x2
  UnityEngine_Object_o *effectDisappear2Component; // x21
  __int64 v56; // x1
  __int64 v57; // x2
  UnityEngine_Object_o *effectDisappearComponent; // x21
  const MethodInfo *v59; // x2
  struct QuestBoardListEffectDisappearComponent_o *v60; // x8
  struct QuestBoardListEffectDisappearComponent_o *v61; // x8

  if ( (byte_596D2B8 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectBoardOpenComponent___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectComponent___);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596D2B8 = 1;
  }
  QuestBoardObjForWarId = (UnityEngine_Object_o *)QuestBoardListViewManager__GetQuestBoardObjForWarId(
                                                    this,
                                                    warId,
                                                    (const MethodInfo *)isOnlyBoardOpen);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15, v16);
  if ( UnityEngine_Object__op_Equality(QuestBoardObjForWarId, 0, 0) )
    return;
  v20 = *(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1);
  if ( isNTBoard )
  {
    ntBoardAppearEffectPrefab = (UnityEngine_Object_o *)this->fields.ntBoardAppearEffectPrefab;
    p_ntBoardAppearEffectPrefab = &this->fields.ntBoardAppearEffectPrefab;
    if ( v20 )
      goto LABEL_9;
    goto LABEL_8;
  }
  ntBoardAppearEffectPrefab = (UnityEngine_Object_o *)this->fields.boardDisappear2EffectPrefab;
  p_ntBoardAppearEffectPrefab = &this->fields.boardDisappear2EffectPrefab;
  if ( !v20 )
LABEL_8:
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18, v19);
LABEL_9:
  if ( UnityEngine_Object__op_Equality(ntBoardAppearEffectPrefab, 0, 0) )
    return;
  v25 = (Il2CppObject *)*p_ntBoardAppearEffectPrefab;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23, v24);
  transform = (__int64)UnityEngine_Object__Instantiate_object_(
                         v25,
                         (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !transform )
    goto LABEL_49;
  v28 = (UnityEngine_GameObject_o *)transform;
  transform = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0);
  if ( !QuestBoardObjForWarId )
    goto LABEL_49;
  v29 = (UnityEngine_Transform_o *)transform;
  transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)QuestBoardObjForWarId, 0);
  if ( !transform )
    goto LABEL_49;
  transform = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0);
  if ( !v29 )
    goto LABEL_49;
  UnityEngine_Transform__set_parent(v29, (UnityEngine_Transform_o *)transform, 0);
  transform = (__int64)UnityEngine_GameObject__get_transform(v28, 0);
  v30 = (UnityEngine_Transform_o *)transform;
  if ( !byte_5969AE0 )
  {
    transform = sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  if ( !v30 )
    goto LABEL_49;
  UnityEngine_Transform__set_localPosition(v30, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  transform = (__int64)UnityEngine_GameObject__get_transform(v28, 0);
  v31 = (UnityEngine_Transform_o *)transform;
  if ( !byte_5969AE6 )
  {
    transform = sub_2213A60(&UnityEngine_Quaternion_TypeInfo);
    byte_5969AE6 = 1;
  }
  if ( !v31 )
    goto LABEL_49;
  UnityEngine_Transform__set_localRotation(v31, UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion, 0);
  transform = (__int64)UnityEngine_GameObject__get_transform(v28, 0);
  v32 = (UnityEngine_Transform_o *)transform;
  if ( !byte_5969AE5 )
  {
    transform = sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE5 = 1;
  }
  if ( !v32 )
    goto LABEL_49;
  UnityEngine_Transform__set_localScale(v32, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  if ( isOnlyBoardOpen )
  {
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         v28,
                         (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectBoardOpenComponent___);
    p_effectDisappear2BbComponent = &this->fields.effectDisappear2BbComponent;
    this->fields.effectDisappear2BbComponent = (struct QuestBoardListEffectBoardOpenComponent_o *)Component_object;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.effectDisappear2BbComponent,
      (int32_t)Component_object,
      v35,
      v36,
      v37,
      v38,
      v39,
      v40);
    effectDisappear2BbComponent = (UnityEngine_Object_o *)this->fields.effectDisappear2BbComponent;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v41, v42);
    if ( !UnityEngine_Object__op_Equality(effectDisappear2BbComponent, 0, 0) )
    {
      transform = (__int64)*p_effectDisappear2BbComponent;
      if ( isNTBoard )
      {
        if ( !transform )
          goto LABEL_49;
        startTime = *(float *)(transform + 136);
        endTime = *(float *)(transform + 140);
        actStartTime = *(float *)(transform + 144);
      }
      else if ( !transform )
      {
        goto LABEL_49;
      }
      QuestBoardListEffectComponent__Init((QuestBoardListEffectComponent_o *)transform, 0, startTime, endTime, v44);
      if ( *p_effectDisappear2BbComponent )
      {
        (*p_effectDisappear2BbComponent)->fields.playingActStartTime = actStartTime;
        return;
      }
      goto LABEL_49;
    }
  }
  else
  {
    v45 = UnityEngine_GameObject__GetComponent_object_(
            v28,
            (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectComponent___);
    p_effectDisappear2Component = &this->fields.effectDisappear2Component;
    this->fields.effectDisappear2Component = (struct QuestBoardListEffectComponent_o *)v45;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.effectDisappear2Component,
      (int32_t)v45,
      v47,
      v48,
      v49,
      v50,
      v51,
      v52);
    effectDisappear2Component = (UnityEngine_Object_o *)this->fields.effectDisappear2Component;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v53, v54);
    if ( !UnityEngine_Object__op_Equality(effectDisappear2Component, 0, 0) )
    {
      effectDisappearComponent = (UnityEngine_Object_o *)this->fields.effectDisappearComponent;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v56, v57);
      transform = UnityEngine_Object__op_Inequality(effectDisappearComponent, 0, 0);
      if ( (transform & 1) != 0 )
      {
        v60 = this->fields.effectDisappearComponent;
        if ( !v60 )
          goto LABEL_49;
        GameObjectExtensions__SetLocalPositionX(v28, v60->fields.disappearEffect2ShiftPosX, 0);
        v61 = this->fields.effectDisappearComponent;
        if ( !v61 )
          goto LABEL_49;
        GameObjectExtensions__SetLocalPositionY(v28, v61->fields.disappearEffect2ShiftPosY, 0);
      }
      transform = (__int64)*p_effectDisappear2Component;
      if ( *p_effectDisappear2Component )
      {
        QuestBoardListEffectComponent__Init((QuestBoardListEffectComponent_o *)transform, 0, 0.0, 0.0, v59);
        return;
      }
LABEL_49:
      sub_2213CDC(transform, v27);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void QuestBoardListViewManager__SetUpBoardDisppearFadeEffect(
        QuestBoardListViewManager_o *this,
        bool isPlayingAct,
        float actTime,
        const MethodInfo *method)
{
  UnityEngine_Object_o *boardDisappearEffectFadePrefab; // x21
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *v10; // x21
  UnityEngine_GameObject_o *transform; // x0
  __int64 v12; // x1
  UnityEngine_GameObject_o *v13; // x21
  UnityEngine_Transform_o *v14; // x22
  UnityEngine_Transform_o *v15; // x22
  UnityEngine_Transform_o *v16; // x22
  UnityEngine_Transform_o *v17; // x22
  Il2CppObject *Component_object; // x0
  struct QuestBoardListEffectComponent_o **p_effectDisappearFadeComponent; // x21
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  const MethodInfo *v26; // x2

  if ( (byte_596D2B9 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectComponent___);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596D2B9 = 1;
  }
  boardDisappearEffectFadePrefab = (UnityEngine_Object_o *)this->fields.boardDisappearEffectFadePrefab;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isPlayingAct, method);
  if ( !UnityEngine_Object__op_Equality(boardDisappearEffectFadePrefab, 0, 0) )
  {
    v10 = (Il2CppObject *)this->fields.boardDisappearEffectFadePrefab;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                              v10,
                                              (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_26;
    v13 = transform;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
    if ( !this->fields.fadePanel )
      goto LABEL_26;
    v14 = (UnityEngine_Transform_o *)transform;
    transform = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                              (UnityEngine_Component_o *)this->fields.fadePanel,
                                              0);
    if ( !v14 )
      goto LABEL_26;
    UnityEngine_Transform__set_parent(v14, (UnityEngine_Transform_o *)transform, 0);
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v13, 0);
    v15 = (UnityEngine_Transform_o *)transform;
    if ( !byte_5969AE0 )
    {
      transform = (UnityEngine_GameObject_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
      byte_5969AE0 = 1;
    }
    if ( !v15 )
      goto LABEL_26;
    UnityEngine_Transform__set_localPosition(v15, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v13, 0);
    v16 = (UnityEngine_Transform_o *)transform;
    if ( !byte_5969AE6 )
    {
      transform = (UnityEngine_GameObject_o *)sub_2213A60(&UnityEngine_Quaternion_TypeInfo);
      byte_5969AE6 = 1;
    }
    if ( !v16 )
      goto LABEL_26;
    UnityEngine_Transform__set_localRotation(v16, UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion, 0);
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v13, 0);
    v17 = (UnityEngine_Transform_o *)transform;
    if ( !byte_5969AE5 )
    {
      transform = (UnityEngine_GameObject_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
      byte_5969AE5 = 1;
    }
    if ( !v17 )
      goto LABEL_26;
    UnityEngine_Transform__set_localScale(v17, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         v13,
                         (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectComponent___);
    p_effectDisappearFadeComponent = &this->fields.effectDisappearFadeComponent;
    this->fields.effectDisappearFadeComponent = (struct QuestBoardListEffectComponent_o *)Component_object;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.effectDisappearFadeComponent,
      (int32_t)Component_object,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
    if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)this->fields.effectDisappearFadeComponent, 0, 0) )
      return;
    transform = (UnityEngine_GameObject_o *)*p_effectDisappearFadeComponent;
    if ( !*p_effectDisappearFadeComponent )
      goto LABEL_26;
    QuestBoardListEffectComponent__Init((QuestBoardListEffectComponent_o *)transform, 0, 0.0, 0.0, v26);
    if ( !isPlayingAct )
      return;
    if ( !*p_effectDisappearFadeComponent )
LABEL_26:
      sub_2213CDC(transform, v12);
    (*p_effectDisappearFadeComponent)->fields.playingActStartTime = actTime;
  }
}


void QuestBoardListViewManager__SetVisibleAll(
        QuestBoardListViewManager_o *this,
        bool isVisible,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  const MethodInfo *v7; // x1
  System_Collections_Generic_List_object__o *ObjectList; // x19
  System_Action_object__o *v9; // x20

  if ( (byte_596D2B0 & 1) == 0 )
  {
    sub_2213A60(&System_Action_QuestBoardListViewObject__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestBoardListViewObject__ForEach__);
    sub_2213A60(&Method_QuestBoardListViewManager___c__DisplayClass177_0__SetVisibleAll_b__0__);
    sub_2213A60(&QuestBoardListViewManager___c__DisplayClass177_0_TypeInfo);
    byte_596D2B0 = 1;
  }
  v5 = sub_2213CCC(QuestBoardListViewManager___c__DisplayClass177_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_BYTE *)(v5 + 16) = isVisible,
        ObjectList = (System_Collections_Generic_List_object__o *)QuestBoardListViewManager__get_ObjectList(this, v7),
        v9 = (System_Action_object__o *)sub_2213CCC(System_Action_QuestBoardListViewObject__TypeInfo),
        System_Action_object____ctor(
          v9,
          (Il2CppObject *)v5,
          Method_QuestBoardListViewManager___c__DisplayClass177_0__SetVisibleAll_b__0__,
          0),
        !ObjectList) )
  {
    sub_2213CDC(v6, v7);
  }
  System_Collections_Generic_List_object___ForEach(
    ObjectList,
    (System_Action_T__o *)v9,
    (const MethodInfo_4484684 *)Method_System_Collections_Generic_List_QuestBoardListViewObject__ForEach__);
}


void QuestBoardListViewManager__SetupBlackMark(QuestBoardListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *blackMarkPrefab; // x20
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x2
  System_Object_array *Entitys; // x20
  QuestBoardListViewManager___c_c *v10; // x8
  struct QuestBoardListViewManager___c_StaticFields *static_fields; // x9
  System_Func_object__bool__o *_9__172_0; // x21
  Il2CppObject *v13; // x22
  struct QuestBoardListViewManager___c_StaticFields *v14; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  int v21; // w20
  struct ScrTerminalListTop_o *mTerminalList; // x8
  AssetData_o *effectAssetData; // x0
  Il2CppObject *Object_object__58532980; // x1
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7

  if ( (byte_596D2AB & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_GameObject____91708320);
    sub_2213A60(&Method_BasicHelper_Any_WarEntity___);
    sub_2213A60(&Method_DataManager_GetMasterData_WarMaster___);
    sub_2213A60(&Method_DataMasterBase_WarMaster__WarEntity__int__getEntitys__);
    sub_2213A60(&System_Func_WarEntity__bool__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_QuestBoardListViewManager___c__SetupBlackMark_b__172_0__);
    sub_2213A60(&QuestBoardListViewManager___c_TypeInfo);
    sub_2213A60(&StringLiteral_19668/*"ef_blackpoint"*/);
    byte_596D2AB = 1;
  }
  blackMarkPrefab = (UnityEngine_Object_o *)this->fields.blackMarkPrefab;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( !UnityEngine_Object__op_Inequality(blackMarkPrefab, 0, 0) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_20;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_385636C *)Method_DataManager_GetMasterData_WarMaster___);
    if ( !Instance )
      goto LABEL_20;
    Entitys = DataMasterBase_object__object__int___getEntitys(
                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                (const MethodInfo_3F0FEAC *)Method_DataMasterBase_WarMaster__WarEntity__int__getEntitys__);
    v10 = QuestBoardListViewManager___c_TypeInfo;
    if ( !*(&QuestBoardListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewManager___c_TypeInfo, v7, v8);
      v10 = QuestBoardListViewManager___c_TypeInfo;
    }
    static_fields = v10->static_fields;
    _9__172_0 = (System_Func_object__bool__o *)static_fields->__9__172_0;
    if ( !_9__172_0 )
    {
      if ( !*(&v10->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v10, v7, v8);
        static_fields = QuestBoardListViewManager___c_TypeInfo->static_fields;
      }
      v13 = (Il2CppObject *)static_fields->__9;
      _9__172_0 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_WarEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__172_0,
        v13,
        Method_QuestBoardListViewManager___c__SetupBlackMark_b__172_0__,
        0);
      v14 = QuestBoardListViewManager___c_TypeInfo->static_fields;
      v14->__9__172_0 = (struct System_Func_WarEntity__bool__o *)_9__172_0;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v14->__9__172_0,
        (int32_t)_9__172_0,
        v15,
        v16,
        v17,
        v18,
        v19,
        v20);
    }
    Instance = (DataManager_o *)BasicHelper__Any_object__58785420(
                                  Entitys,
                                  (System_Func_T__bool__o *)_9__172_0,
                                  (const MethodInfo_380FE8C *)Method_BasicHelper_Any_WarEntity___);
    if ( !this->fields.mTerminalList
      || (v21 = (int)Instance,
          Instance = (DataManager_o *)ScrTerminalListTop__CheckTerminalTopEffect(this->fields.mTerminalList, 0),
          (mTerminalList = this->fields.mTerminalList) == 0) )
    {
LABEL_20:
      sub_2213CDC(Instance, v6);
    }
    if ( ((v21
         | System_String__op_Equality(
             (System_String_o *)Instance,
             mTerminalList->fields.TERMINAL_EFFECT_APPEAR_EFFECT_ID,
             0))
        & 1) != 0 )
    {
      effectAssetData = this->fields.effectAssetData;
      if ( effectAssetData )
      {
        Object_object__58532980 = AssetData__GetObject_object__58532980(
                                    effectAssetData,
                                    (System_String_o *)StringLiteral_19668/*"ef_blackpoint"*/,
                                    (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
        this->fields.blackMarkPrefab = (struct UnityEngine_GameObject_o *)Object_object__58532980;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.blackMarkPrefab,
          (int32_t)Object_object__58532980,
          v25,
          v26,
          v27,
          v28,
          v29,
          v30);
      }
    }
  }
}


void QuestBoardListViewManager__SetupBoardAppearAndDisappearEffect(
        QuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  ScrTerminalListTop_o *mTerminalList; // x0
  struct ScrTerminalListTop_o *v4; // x8
  System_String_o *v5; // x20
  __int64 v6; // x2
  UnityEngine_Object_o *boardAppearEffectPrefab; // x20
  __int64 v8; // x2
  Il2CppObject *Object_object__58532980; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  UnityEngine_Object_o *boardAppearEffectFadePrefab; // x20
  __int64 v17; // x2
  Il2CppObject *v18; // x0
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  UnityEngine_Object_o *v25; // x20
  __int64 v26; // x2
  Il2CppObject *v27; // x0
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  int32_t v34; // w1
  struct UnityEngine_GameObject_o **p_boardDisappear2EffectPrefab; // x0
  struct ScrTerminalListTop_o *v36; // x8
  __int64 v37; // x2
  UnityEngine_Object_o *v38; // x20
  __int64 v39; // x2
  Il2CppObject *v40; // x0
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  UnityEngine_Object_o *v47; // x20
  __int64 v48; // x2
  Il2CppObject *v49; // x0
  System_String_o *v50; // x2
  System_String_o *v51; // x3
  int32_t v52; // w4
  int32_t v53; // w5
  bool v54; // w6
  bool v55; // w7
  UnityEngine_Object_o *ntBoardAppearEffectPrefab; // x20
  Il2CppObject *v57; // x0
  UnityEngine_Object_o *boardDisappearEffectFadePrefab; // x20
  Il2CppObject *v59; // x1
  System_String_o *v60; // x2
  System_String_o *v61; // x3
  int32_t v62; // w4
  int32_t v63; // w5
  bool v64; // w6
  bool v65; // w7
  struct UnityEngine_GameObject_o **p_nt2BoardAppearEffectFadePrefab; // x0
  struct ScrTerminalListTop_o *v67; // x8
  __int64 v68; // x2
  UnityEngine_Object_o *boardDisappearEffectPrefab; // x20
  __int64 v70; // x2
  Il2CppObject *v71; // x0
  System_String_o *v72; // x2
  System_String_o *v73; // x3
  int32_t v74; // w4
  int32_t v75; // w5
  bool v76; // w6
  bool v77; // w7
  UnityEngine_Object_o *boardDisappear2EffectPrefab; // x20
  __int64 v79; // x2
  __int64 *v80; // x8
  struct ScrTerminalListTop_o *v81; // x8
  __int64 v82; // x2
  UnityEngine_Object_o *v83; // x20
  __int64 v84; // x2
  Il2CppObject *v85; // x0
  System_String_o *v86; // x2
  System_String_o *v87; // x3
  int32_t v88; // w4
  int32_t v89; // w5
  bool v90; // w6
  bool v91; // w7
  UnityEngine_Object_o *v92; // x20
  Il2CppObject *v93; // x0
  System_String_o *v94; // x2
  System_String_o *v95; // x3
  int32_t v96; // w4
  int32_t v97; // w5
  bool v98; // w6
  bool v99; // w7
  UnityEngine_Object_o *v100; // x20
  __int64 v101; // x2
  Il2CppObject *v102; // x0
  System_String_o *v103; // x2
  System_String_o *v104; // x3
  int32_t v105; // w4
  int32_t v106; // w5
  bool v107; // w6
  bool v108; // w7
  UnityEngine_Object_o *v109; // x20
  struct ScrTerminalListTop_o *v110; // x8
  struct ScrTerminalListTop_o *v111; // x8
  struct ScrTerminalListTop_o *v112; // x8
  __int64 v113; // x1
  __int64 v114; // x2
  UnityEngine_Object_o *nt2BoardAppearEffectPrefab; // x20
  __int64 v116; // x2
  Il2CppObject *v117; // x0
  System_String_o *v118; // x2
  System_String_o *v119; // x3
  int32_t v120; // w4
  int32_t v121; // w5
  bool v122; // w6
  bool v123; // w7
  UnityEngine_Object_o *nt2BoardAppearEffectFadePrefab; // x20

  if ( (byte_596D2AE & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_GameObject____91708320);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_17911/*"bit_board_appear2"*/);
    sub_2213A60(&StringLiteral_17917/*"bit_board_disappear5"*/);
    sub_2213A60(&StringLiteral_17945/*"bit_fade_black2"*/);
    sub_2213A60(&StringLiteral_17916/*"bit_board_disappear4"*/);
    sub_2213A60(&StringLiteral_17913/*"bit_board_disappear"*/);
    sub_2213A60(&StringLiteral_17944/*"bit_fade_black"*/);
    sub_2213A60(&StringLiteral_17910/*"bit_board_appear"*/);
    sub_2213A60(&StringLiteral_17947/*"bit_fade_black4"*/);
    sub_2213A60(&StringLiteral_17946/*"bit_fade_black3"*/);
    sub_2213A60(&StringLiteral_17912/*"bit_board_appear3"*/);
    sub_2213A60(&StringLiteral_17914/*"bit_board_disappear2"*/);
    sub_2213A60(&StringLiteral_17915/*"bit_board_disappear3"*/);
    byte_596D2AE = 1;
  }
  mTerminalList = this->fields.mTerminalList;
  if ( !mTerminalList )
    goto LABEL_106;
  mTerminalList = (ScrTerminalListTop_o *)ScrTerminalListTop__CheckTerminalTopEffect(mTerminalList, 0);
  v4 = this->fields.mTerminalList;
  if ( !v4 )
    goto LABEL_106;
  v5 = (System_String_o *)mTerminalList;
  mTerminalList = (ScrTerminalListTop_o *)System_String__op_Equality(
                                            (System_String_o *)mTerminalList,
                                            v4->fields.TERMINAL_EFFECT_APPEAR_EFFECT_ID,
                                            0);
  if ( ((unsigned __int8)mTerminalList & 1) != 0 )
  {
    if ( !this->fields.effectAssetData )
      return;
    boardAppearEffectPrefab = (UnityEngine_Object_o *)this->fields.boardAppearEffectPrefab;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v6);
    if ( UnityEngine_Object__op_Equality(boardAppearEffectPrefab, 0, 0) )
    {
      mTerminalList = (ScrTerminalListTop_o *)this->fields.effectAssetData;
      if ( !mTerminalList )
        goto LABEL_106;
      Object_object__58532980 = AssetData__GetObject_object__58532980(
                                  (AssetData_o *)mTerminalList,
                                  (System_String_o *)StringLiteral_17910/*"bit_board_appear"*/,
                                  (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
      this->fields.boardAppearEffectPrefab = (struct UnityEngine_GameObject_o *)Object_object__58532980;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.boardAppearEffectPrefab,
        (int32_t)Object_object__58532980,
        v10,
        v11,
        v12,
        v13,
        v14,
        v15);
    }
    boardAppearEffectFadePrefab = (UnityEngine_Object_o *)this->fields.boardAppearEffectFadePrefab;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v8);
    if ( UnityEngine_Object__op_Equality(boardAppearEffectFadePrefab, 0, 0) )
    {
      mTerminalList = (ScrTerminalListTop_o *)this->fields.effectAssetData;
      if ( !mTerminalList )
        goto LABEL_106;
      v18 = AssetData__GetObject_object__58532980(
              (AssetData_o *)mTerminalList,
              (System_String_o *)StringLiteral_17944/*"bit_fade_black"*/,
              (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
      this->fields.boardAppearEffectFadePrefab = (struct UnityEngine_GameObject_o *)v18;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.boardAppearEffectFadePrefab,
        (int32_t)v18,
        v19,
        v20,
        v21,
        v22,
        v23,
        v24);
    }
    goto LABEL_17;
  }
  v36 = this->fields.mTerminalList;
  if ( !v36 )
    goto LABEL_106;
  mTerminalList = (ScrTerminalListTop_o *)System_String__op_Equality(
                                            v5,
                                            v36->fields.TERMINAL_WHITE_MARK_EFFECT_APPEAR_EFFECT_ID,
                                            0);
  if ( ((unsigned __int8)mTerminalList & 1) != 0 )
  {
    if ( !this->fields.effectAssetData )
      return;
    v38 = (UnityEngine_Object_o *)this->fields.boardAppearEffectPrefab;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v37);
    if ( UnityEngine_Object__op_Equality(v38, 0, 0) )
    {
      mTerminalList = (ScrTerminalListTop_o *)this->fields.effectAssetData;
      if ( !mTerminalList )
        goto LABEL_106;
      v40 = AssetData__GetObject_object__58532980(
              (AssetData_o *)mTerminalList,
              (System_String_o *)StringLiteral_17911/*"bit_board_appear2"*/,
              (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
      this->fields.boardAppearEffectPrefab = (struct UnityEngine_GameObject_o *)v40;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.boardAppearEffectPrefab,
        (int32_t)v40,
        v41,
        v42,
        v43,
        v44,
        v45,
        v46);
    }
    v47 = (UnityEngine_Object_o *)this->fields.boardAppearEffectFadePrefab;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v39);
    if ( UnityEngine_Object__op_Equality(v47, 0, 0) )
    {
      mTerminalList = (ScrTerminalListTop_o *)this->fields.effectAssetData;
      if ( !mTerminalList )
        goto LABEL_106;
      v49 = AssetData__GetObject_object__58532980(
              (AssetData_o *)mTerminalList,
              (System_String_o *)StringLiteral_17946/*"bit_fade_black3"*/,
              (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
      this->fields.boardAppearEffectFadePrefab = (struct UnityEngine_GameObject_o *)v49;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.boardAppearEffectFadePrefab,
        (int32_t)v49,
        v50,
        v51,
        v52,
        v53,
        v54,
        v55);
    }
    goto LABEL_35;
  }
  v67 = this->fields.mTerminalList;
  if ( !v67 )
    goto LABEL_106;
  mTerminalList = (ScrTerminalListTop_o *)System_String__op_Equality(
                                            v5,
                                            v67->fields.TERMINAL_EFFECT_BOARD_DISAPPEAR_EFFECT_ID,
                                            0);
  if ( ((unsigned __int8)mTerminalList & 1) != 0 )
  {
    if ( !this->fields.effectAssetData )
      return;
    boardDisappearEffectPrefab = (UnityEngine_Object_o *)this->fields.boardDisappearEffectPrefab;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v68);
    if ( UnityEngine_Object__op_Equality(boardDisappearEffectPrefab, 0, 0) )
    {
      mTerminalList = (ScrTerminalListTop_o *)this->fields.effectAssetData;
      if ( !mTerminalList )
        goto LABEL_106;
      v71 = AssetData__GetObject_object__58532980(
              (AssetData_o *)mTerminalList,
              (System_String_o *)StringLiteral_17913/*"bit_board_disappear"*/,
              (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
      this->fields.boardDisappearEffectPrefab = (struct UnityEngine_GameObject_o *)v71;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.boardDisappearEffectPrefab,
        (int32_t)v71,
        v72,
        v73,
        v74,
        v75,
        v76,
        v77);
    }
    boardDisappear2EffectPrefab = (UnityEngine_Object_o *)this->fields.boardDisappear2EffectPrefab;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v70);
    if ( !UnityEngine_Object__op_Equality(boardDisappear2EffectPrefab, 0, 0) )
      goto LABEL_74;
    mTerminalList = (ScrTerminalListTop_o *)this->fields.effectAssetData;
    if ( !mTerminalList )
      goto LABEL_106;
    v80 = &StringLiteral_17914/*"bit_board_disappear2"*/;
    goto LABEL_73;
  }
  v81 = this->fields.mTerminalList;
  if ( !v81 )
    goto LABEL_106;
  mTerminalList = (ScrTerminalListTop_o *)System_String__op_Equality(
                                            v5,
                                            v81->fields.TERMINAL_WHITE_MARK_EFFECT_BOARD_DISAPPEAR_EFFECT_ID,
                                            0);
  if ( ((unsigned __int8)mTerminalList & 1) == 0 )
  {
    v110 = this->fields.mTerminalList;
    if ( !v110 )
      goto LABEL_106;
    mTerminalList = (ScrTerminalListTop_o *)System_String__op_Equality(
                                              v5,
                                              v110->fields.TERMINAL_EFFECT_BB_BOARD_EFFECT_ID,
                                              0);
    if ( ((unsigned __int8)mTerminalList & 1) != 0 )
    {
      if ( !this->fields.effectAssetData )
        return;
LABEL_17:
      v25 = (UnityEngine_Object_o *)this->fields.boardDisappear2EffectPrefab;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v17);
      if ( UnityEngine_Object__op_Equality(v25, 0, 0) )
      {
        mTerminalList = (ScrTerminalListTop_o *)this->fields.effectAssetData;
        if ( !mTerminalList )
          goto LABEL_106;
        v27 = AssetData__GetObject_object__58532980(
                (AssetData_o *)mTerminalList,
                (System_String_o *)StringLiteral_17914/*"bit_board_disappear2"*/,
                (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
        v34 = (int)v27;
        this->fields.boardDisappear2EffectPrefab = (struct UnityEngine_GameObject_o *)v27;
        p_boardDisappear2EffectPrefab = &this->fields.boardDisappear2EffectPrefab;
LABEL_40:
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)p_boardDisappear2EffectPrefab,
          v34,
          v28,
          v29,
          v30,
          v31,
          v32,
          v33);
        goto LABEL_41;
      }
      goto LABEL_41;
    }
    v111 = this->fields.mTerminalList;
    if ( !v111 )
      goto LABEL_106;
    mTerminalList = (ScrTerminalListTop_o *)System_String__op_Equality(
                                              v5,
                                              v111->fields.TERMINAL_EFFECT_NT_BOARD_EFFECT_ID,
                                              0);
    if ( ((unsigned __int8)mTerminalList & 1) == 0 )
    {
      v112 = this->fields.mTerminalList;
      if ( !v112 )
        goto LABEL_106;
      if ( System_String__op_Equality(v5, v112->fields.TERMINAL_EFFECT_NT2_BOARD_COMPLETE_EFFECT_ID, 0)
        && this->fields.effectAssetData )
      {
        nt2BoardAppearEffectPrefab = (UnityEngine_Object_o *)this->fields.nt2BoardAppearEffectPrefab;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v113, v114);
        if ( UnityEngine_Object__op_Equality(nt2BoardAppearEffectPrefab, 0, 0) )
        {
          mTerminalList = (ScrTerminalListTop_o *)this->fields.effectAssetData;
          if ( !mTerminalList )
            goto LABEL_106;
          v117 = AssetData__GetObject_object__58532980(
                   (AssetData_o *)mTerminalList,
                   (System_String_o *)StringLiteral_17912/*"bit_board_appear3"*/,
                   (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
          this->fields.nt2BoardAppearEffectPrefab = (struct UnityEngine_GameObject_o *)v117;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&this->fields.nt2BoardAppearEffectPrefab,
            (int32_t)v117,
            v118,
            v119,
            v120,
            v121,
            v122,
            v123);
        }
        nt2BoardAppearEffectFadePrefab = (UnityEngine_Object_o *)this->fields.nt2BoardAppearEffectFadePrefab;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v116);
        if ( UnityEngine_Object__op_Equality(nt2BoardAppearEffectFadePrefab, 0, 0) )
        {
          mTerminalList = (ScrTerminalListTop_o *)this->fields.effectAssetData;
          if ( mTerminalList )
          {
            v59 = AssetData__GetObject_object__58532980(
                    (AssetData_o *)mTerminalList,
                    (System_String_o *)StringLiteral_17947/*"bit_fade_black4"*/,
                    (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
            p_nt2BoardAppearEffectFadePrefab = &this->fields.nt2BoardAppearEffectFadePrefab;
            this->fields.nt2BoardAppearEffectFadePrefab = (struct UnityEngine_GameObject_o *)v59;
            goto LABEL_46;
          }
          goto LABEL_106;
        }
      }
      return;
    }
    if ( !this->fields.effectAssetData )
      return;
LABEL_35:
    ntBoardAppearEffectPrefab = (UnityEngine_Object_o *)this->fields.ntBoardAppearEffectPrefab;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v48);
    if ( UnityEngine_Object__op_Equality(ntBoardAppearEffectPrefab, 0, 0) )
    {
      mTerminalList = (ScrTerminalListTop_o *)this->fields.effectAssetData;
      if ( !mTerminalList )
        goto LABEL_106;
      v57 = AssetData__GetObject_object__58532980(
              (AssetData_o *)mTerminalList,
              (System_String_o *)StringLiteral_17917/*"bit_board_disappear5"*/,
              (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
      v34 = (int)v57;
      this->fields.ntBoardAppearEffectPrefab = (struct UnityEngine_GameObject_o *)v57;
      p_boardDisappear2EffectPrefab = &this->fields.ntBoardAppearEffectPrefab;
      goto LABEL_40;
    }
LABEL_41:
    boardDisappearEffectFadePrefab = (UnityEngine_Object_o *)this->fields.boardDisappearEffectFadePrefab;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v26);
    if ( UnityEngine_Object__op_Equality(boardDisappearEffectFadePrefab, 0, 0) )
    {
      mTerminalList = (ScrTerminalListTop_o *)this->fields.effectAssetData;
      if ( mTerminalList )
      {
        v59 = AssetData__GetObject_object__58532980(
                (AssetData_o *)mTerminalList,
                (System_String_o *)StringLiteral_17945/*"bit_fade_black2"*/,
                (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
        p_nt2BoardAppearEffectFadePrefab = &this->fields.boardDisappearEffectFadePrefab;
        this->fields.boardDisappearEffectFadePrefab = (struct UnityEngine_GameObject_o *)v59;
LABEL_46:
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)p_nt2BoardAppearEffectFadePrefab,
          (int32_t)v59,
          v60,
          v61,
          v62,
          v63,
          v64,
          v65);
        return;
      }
      goto LABEL_106;
    }
    return;
  }
  if ( !this->fields.effectAssetData )
    return;
  v83 = (UnityEngine_Object_o *)this->fields.boardDisappearEffectPrefab;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v82);
  if ( UnityEngine_Object__op_Equality(v83, 0, 0) )
  {
    mTerminalList = (ScrTerminalListTop_o *)this->fields.effectAssetData;
    if ( !mTerminalList )
      goto LABEL_106;
    v85 = AssetData__GetObject_object__58532980(
            (AssetData_o *)mTerminalList,
            (System_String_o *)StringLiteral_17915/*"bit_board_disappear3"*/,
            (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
    this->fields.boardDisappearEffectPrefab = (struct UnityEngine_GameObject_o *)v85;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.boardDisappearEffectPrefab,
      (int32_t)v85,
      v86,
      v87,
      v88,
      v89,
      v90,
      v91);
  }
  v92 = (UnityEngine_Object_o *)this->fields.boardDisappear2EffectPrefab;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v84);
  if ( UnityEngine_Object__op_Equality(v92, 0, 0) )
  {
    mTerminalList = (ScrTerminalListTop_o *)this->fields.effectAssetData;
    if ( !mTerminalList )
      goto LABEL_106;
    v80 = &StringLiteral_17916/*"bit_board_disappear4"*/;
LABEL_73:
    v93 = AssetData__GetObject_object__58532980(
            (AssetData_o *)mTerminalList,
            (System_String_o *)*v80,
            (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
    this->fields.boardDisappear2EffectPrefab = (struct UnityEngine_GameObject_o *)v93;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.boardDisappear2EffectPrefab,
      (int32_t)v93,
      v94,
      v95,
      v96,
      v97,
      v98,
      v99);
  }
LABEL_74:
  v100 = (UnityEngine_Object_o *)this->fields.boardDisappearEffectFadePrefab;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v79);
  if ( UnityEngine_Object__op_Equality(v100, 0, 0) )
  {
    mTerminalList = (ScrTerminalListTop_o *)this->fields.effectAssetData;
    if ( !mTerminalList )
      goto LABEL_106;
    v102 = AssetData__GetObject_object__58532980(
             (AssetData_o *)mTerminalList,
             (System_String_o *)StringLiteral_17945/*"bit_fade_black2"*/,
             (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
    this->fields.boardDisappearEffectFadePrefab = (struct UnityEngine_GameObject_o *)v102;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.boardDisappearEffectFadePrefab,
      (int32_t)v102,
      v103,
      v104,
      v105,
      v106,
      v107,
      v108);
  }
  v109 = (UnityEngine_Object_o *)this->fields.ntBoardAppearEffectPrefab;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v101);
  if ( UnityEngine_Object__op_Equality(v109, 0, 0) )
  {
    mTerminalList = (ScrTerminalListTop_o *)this->fields.effectAssetData;
    if ( mTerminalList )
    {
      v59 = AssetData__GetObject_object__58532980(
              (AssetData_o *)mTerminalList,
              (System_String_o *)StringLiteral_17917/*"bit_board_disappear5"*/,
              (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
      p_nt2BoardAppearEffectFadePrefab = &this->fields.ntBoardAppearEffectPrefab;
      this->fields.ntBoardAppearEffectPrefab = (struct UnityEngine_GameObject_o *)v59;
      goto LABEL_46;
    }
LABEL_106:
    sub_2213CDC(mTerminalList, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void QuestBoardListViewManager__SetupDisp(
        QuestBoardListViewManager_o *this,
        bool isReloadTerminalBanner,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  const MethodInfo *v6; // x1
  System_Collections_Generic_List_object__o *v7; // x20
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  int klass; // w25
  System_Collections_Generic_IEnumerable_TResult__o *v11; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  QuestBoardListViewManager___c_c *v14; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x20
  struct QuestBoardListViewManager___c_StaticFields *static_fields; // x9
  System_Func_object__bool__o *_9__131_0; // x21
  Il2CppObject *v18; // x22
  struct QuestBoardListViewManager___c_StaticFields *v19; // x0
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  Il2CppObject *v26; // x0
  const MethodInfo *v27; // x1
  int32_t klass_high; // w8
  const MethodInfo *v29; // x3
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_596D292 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Cast_QuestBoardListViewItem___);
    sub_2213A60(&Method_System_Linq_Enumerable_FirstOrDefault_QuestBoardListViewItem___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__get_Current__);
    sub_2213A60(&System_Func_QuestBoardListViewItem__bool__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestBoardListViewObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestBoardListViewObject__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestBoardListViewObject__get_Item__);
    sub_2213A60(&Method_QuestBoardListViewManager___c__SetupDisp_b__131_0__);
    sub_2213A60(&QuestBoardListViewManager___c_TypeInfo);
    byte_596D292 = 1;
  }
  memset(&v31, 0, sizeof(v31));
  ObjectList = (System_Collections_Generic_List_object__o *)QuestBoardListViewManager__get_ObjectList(
                                                              this,
                                                              (const MethodInfo *)isReloadTerminalBanner);
  if ( !ObjectList )
    goto LABEL_25;
  v7 = ObjectList;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v30,
    ObjectList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_QuestBoardListViewObject__GetEnumerator__);
  v31 = v30;
  v30.fields._list = 0;
  *(_QWORD *)&v30.fields._index = &v31;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v31,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__MoveNext__) )
  {
    if ( !v31.fields._current )
      sub_2213CDC(0, v8);
    QuestBoardListViewObject__SetupDisp((QuestBoardListViewObject_o *)v31.fields._current, isReloadTerminalBanner, v9);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v31,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__Dispose__);
  if ( v7->fields._size <= 0 )
    return;
  ObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              v7,
                                                              0,
                                                              (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_QuestBoardListViewObject__get_Item__);
  if ( !ObjectList
    || (ObjectList = (System_Collections_Generic_List_object__o *)QuestBoardListViewObject__GetItem(
                                                                    (QuestBoardListViewObject_o *)ObjectList,
                                                                    v6)) == 0 )
  {
LABEL_25:
    sub_2213CDC(ObjectList, v6);
  }
  klass = (int)ObjectList[3].klass;
  v11 = System_Linq_Enumerable__Cast_object_(
          (System_Collections_IEnumerable_o *)this->fields.itemList,
          (const MethodInfo_3868AB0 *)Method_System_Linq_Enumerable_Cast_QuestBoardListViewItem___);
  v14 = QuestBoardListViewManager___c_TypeInfo;
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)v11;
  if ( !*(&QuestBoardListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewManager___c_TypeInfo, v12, v13);
    v14 = QuestBoardListViewManager___c_TypeInfo;
  }
  static_fields = v14->static_fields;
  _9__131_0 = (System_Func_object__bool__o *)static_fields->__9__131_0;
  if ( !_9__131_0 )
  {
    if ( !*(&v14->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v14, v12, v13);
      static_fields = QuestBoardListViewManager___c_TypeInfo->static_fields;
    }
    v18 = (Il2CppObject *)static_fields->__9;
    _9__131_0 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_QuestBoardListViewItem__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__131_0, v18, Method_QuestBoardListViewManager___c__SetupDisp_b__131_0__, 0);
    v19 = QuestBoardListViewManager___c_TypeInfo->static_fields;
    v19->__9__131_0 = (struct System_Func_QuestBoardListViewItem__bool__o *)_9__131_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v19->__9__131_0, (int32_t)_9__131_0, v20, v21, v22, v23, v24, v25);
  }
  v26 = System_Linq_Enumerable__FirstOrDefault_object__59254852(
          v15,
          (System_Func_TSource__bool__o *)_9__131_0,
          (const MethodInfo_3882844 *)Method_System_Linq_Enumerable_FirstOrDefault_QuestBoardListViewItem___);
  if ( v26 )
  {
    klass_high = HIDWORD(v26[1].klass);
    this->fields._IndexFirstDisplayableRoadmapButton_k__BackingField = klass_high;
    if ( !klass && klass_high < 0 )
      goto LABEL_20;
  }
  else
  {
    this->fields._IndexFirstDisplayableRoadmapButton_k__BackingField = -1;
    if ( !klass )
    {
LABEL_20:
      QuestBoardListViewManager__DisplayRoadmapButtonToTopWarBoard(this, v27);
      QuestBoardListViewManager__ModifyAllRoadmapButtons(this, 1, 1, v29);
    }
  }
}


void QuestBoardListViewManager__SetupFortificationWarningDialog(
        QuestBoardListViewManager_o *this,
        int32_t eventId,
        System_Action_o *func,
        const MethodInfo *method)
{
  __int64 v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  System_String_o *v21; // x0
  System_String_o *v22; // x19
  AssetLoader_LoadEndDataHandler_o *v23; // x22
  __int64 v24; // x1
  __int64 v25; // x2
  int32_t v26; // [xsp+Ch] [xbp-44h] BYREF

  v26 = eventId;
  if ( (byte_596D2AD & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_2213A60(&Method_QuestBoardListViewManager___c__DisplayClass174_0__SetupFortificationWarningDialog_b__0__);
    sub_2213A60(&QuestBoardListViewManager___c__DisplayClass174_0_TypeInfo);
    sub_2213A60(&StringLiteral_6532/*"EventUI/Prefabs/"*/);
    byte_596D2AD = 1;
  }
  v6 = sub_2213CCC(QuestBoardListViewManager___c__DisplayClass174_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  if ( !v6 )
    sub_2213CDC(v7, v8);
  *(_QWORD *)(v6 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v6 + 16), (int32_t)this, v9, v10, v11, v12, v13, v14);
  *(_QWORD *)(v6 + 24) = func;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v6 + 24), (int32_t)func, v15, v16, v17, v18, v19, v20);
  v21 = System_Int32__ToString((int32_t)&v26, 0);
  v22 = System_String__Concat_75651716((System_String_o *)StringLiteral_6532/*"EventUI/Prefabs/"*/, v21, 0);
  v23 = (AssetLoader_LoadEndDataHandler_o *)sub_2213CCC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v23,
    (Il2CppObject *)v6,
    Method_QuestBoardListViewManager___c__DisplayClass174_0__SetupFortificationWarningDialog_b__0__,
    0);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v24, v25);
  if ( !AssetManager__loadAssetStorage(v22, v23, 1, 0, 0) )
    ActionExtensions__Call(*(System_Action_o **)(v6 + 24), 0);
}


void QuestBoardListViewManager__SetupQuestBoardEffectController(
        QuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_QuestBoardEffectController__o *questBoardEffectControllerList; // x8
  System_Collections_Generic_IEnumerable_TSource__o **p_questBoardEffectControllerList; // x20
  System_Collections_Generic_List_object__o *v5; // x21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  ScrTerminalListTop_o *mTerminalList; // x0
  int32_t size; // w2
  int v14; // w9
  System_Collections_ICollection_o *UseBoardEffectControllerEffectName; // x21
  __int64 v16; // x1
  AssetData_o *effectAssetData; // x0
  Il2CppObject *current; // x21
  __int64 v19; // x1
  __int64 v20; // x2
  Il2CppObject *Object_object__58532980; // x23
  _BOOL8 v22; // x0
  __int64 v23; // x1
  System_Collections_Generic_List_object__o *v24; // x22
  Il2CppObject *Component_object; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  Il2CppObject *v32; // x1
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 v35; // x10
  Il2CppClass **v36; // x0
  Il2CppObject *v37; // x0
  System_Collections_Generic_List_Enumerator_object__o v38; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v39; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_596D2AF & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_GameObject____91708320);
    sub_2213A60(&Method_System_Linq_Enumerable_LastOrDefault_QuestBoardEffectController___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_QuestBoardEffectController___);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestBoardEffectController__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestBoardEffectController__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestBoardEffectController___ctor__);
    sub_2213A60(&System_Collections_Generic_List_QuestBoardEffectController__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596D2AF = 1;
  }
  questBoardEffectControllerList = this->fields.questBoardEffectControllerList;
  p_questBoardEffectControllerList = (System_Collections_Generic_IEnumerable_TSource__o **)&this->fields.questBoardEffectControllerList;
  memset(&v39, 0, sizeof(v39));
  if ( !questBoardEffectControllerList )
  {
    v5 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_QuestBoardEffectController__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v5,
      (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_QuestBoardEffectController___ctor__);
    *p_questBoardEffectControllerList = (System_Collections_Generic_IEnumerable_TSource__o *)v5;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.questBoardEffectControllerList,
      (int32_t)v5,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
    questBoardEffectControllerList = (struct System_Collections_Generic_List_QuestBoardEffectController__o *)*p_questBoardEffectControllerList;
    if ( !*p_questBoardEffectControllerList )
      goto LABEL_29;
  }
  size = questBoardEffectControllerList->fields._size;
  v14 = questBoardEffectControllerList->fields._version + 1;
  questBoardEffectControllerList->fields._size = 0;
  questBoardEffectControllerList->fields._version = v14;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)questBoardEffectControllerList->fields._items, 0, size, 0);
  mTerminalList = this->fields.mTerminalList;
  if ( !mTerminalList )
    goto LABEL_29;
  UseBoardEffectControllerEffectName = (System_Collections_ICollection_o *)ScrTerminalListTop__GetUseBoardEffectControllerEffectName(
                                                                             mTerminalList,
                                                                             0);
  mTerminalList = (ScrTerminalListTop_o *)BasicHelper__IsNullOrEmpty(UseBoardEffectControllerEffectName, 0);
  if ( ((unsigned __int8)mTerminalList & 1) != 0 )
    return;
  if ( !UseBoardEffectControllerEffectName )
LABEL_29:
    sub_2213CDC(mTerminalList, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v38,
    (System_Collections_Generic_List_object__o *)UseBoardEffectControllerEffectName,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v39 = v38;
  v38.fields._list = 0;
  *(_QWORD *)&v38.fields._index = &v39;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v39,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    effectAssetData = this->fields.effectAssetData;
    if ( !effectAssetData )
      sub_2213CDC(0, v16);
    current = v39.fields._current;
    Object_object__58532980 = AssetData__GetObject_object__58532980(
                                effectAssetData,
                                (System_String_o *)v39.fields._current,
                                (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19, v20);
    v22 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__58532980, 0, 0);
    if ( v22 )
    {
      if ( !Object_object__58532980 )
        sub_2213CDC(v22, v23);
      v24 = (System_Collections_Generic_List_object__o *)*p_questBoardEffectControllerList;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)Object_object__58532980,
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_QuestBoardEffectController___);
      v32 = Component_object;
      if ( !v24
        || (items = v24->fields._items,
            v34 = Method_System_Collections_Generic_List_QuestBoardEffectController__Add__,
            ++v24->fields._version,
            !items) )
      {
        sub_2213CDC(Component_object, Component_object);
      }
      v35 = v24->fields._size;
      if ( (unsigned int)v35 >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v24,
          Component_object,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
      }
      else
      {
        v36 = &items->obj.klass + v35;
        v24->fields._size = v35 + 1;
        v36[4] = (Il2CppClass *)v32;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v36 + 4), (int32_t)v32, v26, v27, v28, v29, v30, v31);
      }
      v37 = System_Linq_Enumerable__LastOrDefault_object_(
              *p_questBoardEffectControllerList,
              (const MethodInfo_3885C38 *)Method_System_Linq_Enumerable_LastOrDefault_QuestBoardEffectController___);
      if ( v37 )
        QuestBoardEffectController__SetPlayEffectName(
          (QuestBoardEffectController_o *)v37,
          (System_String_o *)current,
          0);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v39,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
}


void QuestBoardListViewManager__SetupWhiteMark(QuestBoardListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *whiteMarkPrefab; // x20
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x2
  System_Object_array *Entitys; // x20
  QuestBoardListViewManager___c_c *v10; // x8
  struct QuestBoardListViewManager___c_StaticFields *static_fields; // x9
  System_Func_object__bool__o *_9__173_0; // x21
  Il2CppObject *v13; // x22
  struct QuestBoardListViewManager___c_StaticFields *v14; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  int v21; // w20
  struct ScrTerminalListTop_o *mTerminalList; // x8
  AssetData_o *effectAssetData; // x0
  Il2CppObject *Object_object__58532980; // x1
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7

  if ( (byte_596D2AC & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_GameObject____91708320);
    sub_2213A60(&Method_BasicHelper_Any_WarEntity___);
    sub_2213A60(&Method_DataManager_GetMasterData_WarMaster___);
    sub_2213A60(&Method_DataMasterBase_WarMaster__WarEntity__int__getEntitys__);
    sub_2213A60(&System_Func_WarEntity__bool__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_QuestBoardListViewManager___c__SetupWhiteMark_b__173_0__);
    sub_2213A60(&QuestBoardListViewManager___c_TypeInfo);
    sub_2213A60(&StringLiteral_19742/*"ef_whitepoint"*/);
    byte_596D2AC = 1;
  }
  whiteMarkPrefab = (UnityEngine_Object_o *)this->fields.whiteMarkPrefab;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( !UnityEngine_Object__op_Inequality(whiteMarkPrefab, 0, 0) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_20;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_385636C *)Method_DataManager_GetMasterData_WarMaster___);
    if ( !Instance )
      goto LABEL_20;
    Entitys = DataMasterBase_object__object__int___getEntitys(
                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                (const MethodInfo_3F0FEAC *)Method_DataMasterBase_WarMaster__WarEntity__int__getEntitys__);
    v10 = QuestBoardListViewManager___c_TypeInfo;
    if ( !*(&QuestBoardListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewManager___c_TypeInfo, v7, v8);
      v10 = QuestBoardListViewManager___c_TypeInfo;
    }
    static_fields = v10->static_fields;
    _9__173_0 = (System_Func_object__bool__o *)static_fields->__9__173_0;
    if ( !_9__173_0 )
    {
      if ( !*(&v10->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v10, v7, v8);
        static_fields = QuestBoardListViewManager___c_TypeInfo->static_fields;
      }
      v13 = (Il2CppObject *)static_fields->__9;
      _9__173_0 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_WarEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__173_0,
        v13,
        Method_QuestBoardListViewManager___c__SetupWhiteMark_b__173_0__,
        0);
      v14 = QuestBoardListViewManager___c_TypeInfo->static_fields;
      v14->__9__173_0 = (struct System_Func_WarEntity__bool__o *)_9__173_0;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v14->__9__173_0,
        (int32_t)_9__173_0,
        v15,
        v16,
        v17,
        v18,
        v19,
        v20);
    }
    Instance = (DataManager_o *)BasicHelper__Any_object__58785420(
                                  Entitys,
                                  (System_Func_T__bool__o *)_9__173_0,
                                  (const MethodInfo_380FE8C *)Method_BasicHelper_Any_WarEntity___);
    if ( !this->fields.mTerminalList
      || (v21 = (int)Instance,
          Instance = (DataManager_o *)ScrTerminalListTop__CheckTerminalTopEffect(this->fields.mTerminalList, 0),
          (mTerminalList = this->fields.mTerminalList) == 0) )
    {
LABEL_20:
      sub_2213CDC(Instance, v6);
    }
    if ( ((v21
         | System_String__op_Equality(
             (System_String_o *)Instance,
             mTerminalList->fields.TERMINAL_WHITE_MARK_EFFECT_APPEAR_EFFECT_ID,
             0))
        & 1) != 0 )
    {
      effectAssetData = this->fields.effectAssetData;
      if ( effectAssetData )
      {
        Object_object__58532980 = AssetData__GetObject_object__58532980(
                                    effectAssetData,
                                    (System_String_o *)StringLiteral_19742/*"ef_whitepoint"*/,
                                    (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
        this->fields.whiteMarkPrefab = (struct UnityEngine_GameObject_o *)Object_object__58532980;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.whiteMarkPrefab,
          (int32_t)Object_object__58532980,
          v25,
          v26,
          v27,
          v28,
          v29,
          v30);
      }
    }
  }
}


void QuestBoardListViewManager__SkipDisapprarFadeEffect(
        QuestBoardListViewManager_o *this,
        float skipTime,
        const MethodInfo *method)
{
  __int64 v3; // x2
  UnityEngine_Object_o *effectDisappearFadeComponent; // x20
  const MethodInfo *v7; // x1
  QuestBoardListEffectComponent_o *v8; // x0

  if ( (byte_596D2BC & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596D2BC = 1;
  }
  effectDisappearFadeComponent = (UnityEngine_Object_o *)this->fields.effectDisappearFadeComponent;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v3);
  if ( !UnityEngine_Object__op_Equality(effectDisappearFadeComponent, 0, 0) )
  {
    v8 = this->fields.effectDisappearFadeComponent;
    if ( !v8 )
      sub_2213CDC(0, v7);
    QuestBoardListEffectComponent__Skip(v8, skipTime, v7);
  }
}


bool QuestBoardListViewManager__TryGetFlagFromOnEventStart(
        QuestBoardListViewManager_o *this,
        int32_t *flagType,
        EventEntity_o *eventEntity,
        const MethodInfo *method)
{
  void *EventTutorialEntity; // x0
  __int64 v7; // x1

  if ( (byte_596D29D & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596D29D = 1;
  }
  *flagType = -1;
  if ( eventEntity )
  {
    EventTutorialEntity = EventTutorialMaster__GetEventTutorialEntity(
                            eventEntity->fields.id,
                            79,
                            (System_String_o *)StringLiteral_1/*""*/,
                            0);
    if ( !EventTutorialEntity )
      goto LABEL_9;
    if ( *((_DWORD *)EventTutorialEntity + 6) )
    {
      EventTutorialEntity = System_Collections_Generic_List_object___get_Item(
                              (System_Collections_Generic_List_object__o *)EventTutorialEntity,
                              0,
                              (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
      if ( EventTutorialEntity )
      {
        *flagType = *((_DWORD *)EventTutorialEntity + 5);
        return 1;
      }
LABEL_9:
      sub_2213CDC(EventTutorialEntity, v7);
    }
  }
  return 0;
}


bool QuestBoardListViewManager__TryGetReleasedFocusQuestId(
        QuestBoardListViewManager_o *this,
        int32_t *questId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  __int64 v6; // x1
  struct System_Collections_Generic_List_ListViewItem__o *v7; // x0
  __int64 v8; // x2
  __int64 v9; // x3
  bool v10; // w20
  Il2CppObject *current; // x21
  __int64 naturalAligment; // x9
  MapControl_QuestInfo_o *klass; // x0
  _BOOL8 IsReleaseFocusQuestBoard; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  Il2CppClass *v17; // x8
  int32_t name; // w22
  __int64 QuestReleasedFocusState; // x0
  __int64 v20; // x1
  Il2CppClass *v21; // x8
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_596D28F & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Any_ListViewItem___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_2213A60(&QuestBoardListViewItem_TypeInfo);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D28F = 1;
  }
  itemList = this->fields.itemList;
  memset(&v24, 0, sizeof(v24));
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)itemList,
         (const MethodInfo_38660DC *)Method_System_Linq_Enumerable_Any_ListViewItem___) )
  {
    v7 = this->fields.itemList;
    if ( !v7 )
      sub_2213CDC(0, v6);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v23,
      (System_Collections_Generic_List_object__o *)v7,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v24 = v23;
    v23.fields._list = 0;
    *(_QWORD *)&v23.fields._index = &v24;
    while ( 1 )
    {
      v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v24,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v10 )
        break;
      current = v24.fields._current;
      if ( v24.fields._current )
      {
        naturalAligment = QuestBoardListViewItem_TypeInfo->_2.naturalAligment;
        if ( v24.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment
          || (QuestBoardListViewItem_c *)v24.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != QuestBoardListViewItem_TypeInfo )
        {
          sub_221405C(v24.fields._current, QuestBoardListViewItem_TypeInfo, v8, v9);
LABEL_21:
          sub_2213CDC(IsReleaseFocusQuestBoard, v15);
        }
        klass = (MapControl_QuestInfo_o *)v24.fields._current[8].klass;
        if ( klass )
        {
          if ( klass->fields.dispType == 1 )
          {
            IsReleaseFocusQuestBoard = MapControl_QuestInfo__IsReleaseFocusQuestBoard(klass, 0);
            if ( IsReleaseFocusQuestBoard )
            {
              v17 = current[8].klass;
              if ( !v17 )
                goto LABEL_21;
              name = (int32_t)v17->_1.name;
              if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v15, v16);
              QuestReleasedFocusState = TerminalPramsManager__GetQuestReleasedFocusState(name, 0);
              if ( !(_DWORD)QuestReleasedFocusState )
              {
                v21 = current[8].klass;
                if ( !v21 )
                  sub_2213CDC(QuestReleasedFocusState, v20);
                *questId = (int32_t)v21->_1.name;
                break;
              }
            }
          }
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v24,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  }
  else
  {
    return 0;
  }
  return v10;
}


void QuestBoardListViewManager__Update(QuestBoardListViewManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  ListViewManager__Update((ListViewManager_o *)this, 0);
  QuestBoardListViewManager__UpdateAlphaAnim(this, v3);
}


void QuestBoardListViewManager__UpdateAlphaAnim(QuestBoardListViewManager_o *this, const MethodInfo *method)
{
  TransitionCalculator_float__o *rewardIconAlphaCalculator; // x0
  __int64 v4; // x1
  float v5; // s0
  AlphaTransitionCalculator_o *v6; // x0
  __int64 v7; // x2
  float realtimeSinceStartup; // s8
  float mAlphaAnimTimeOld; // s9
  QuestBoardListViewManager_c *v10; // x0
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x1
  __int64 v13; // x2
  float v14; // s0
  int32_t mAlphaAnimCnt; // w8
  QuestBoardListViewManager_c *v16; // x0
  int32_t v17; // w21
  int32_t ALPHA_ANIM_COUNT_RESET_VAL; // w8
  int32_t v19; // w21

  if ( (byte_596D29B & 1) == 0 )
  {
    sub_2213A60(&QuestBoardListViewManager_TypeInfo);
    sub_2213A60(&Method_TransitionCalculator_float__Update__);
    byte_596D29B = 1;
  }
  rewardIconAlphaCalculator = (TransitionCalculator_float__o *)this->fields.rewardIconAlphaCalculator;
  if ( rewardIconAlphaCalculator )
  {
    v5 = TransitionCalculator_float___Update(
           rewardIconAlphaCalculator,
           (const MethodInfo_3BE940C *)Method_TransitionCalculator_float__Update__);
    v6 = this->fields.rewardIconAlphaCalculator;
    this->fields.mAlphaAnimNow = v5;
    if ( !v6 )
      goto LABEL_22;
    if ( AlphaTransitionCalculator__IsFadeInFinished(v6, 0) )
    {
      realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0);
      mAlphaAnimTimeOld = this->fields.mAlphaAnimTimeOld;
      v10 = QuestBoardListViewManager_TypeInfo;
      if ( !*(&QuestBoardListViewManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewManager_TypeInfo, v4, v7);
        v10 = QuestBoardListViewManager_TypeInfo;
      }
      if ( (float)(realtimeSinceStartup - mAlphaAnimTimeOld) >= v10->static_fields->ALPHA_ANIM_TIME_INTERVAL )
      {
        v6 = this->fields.rewardIconAlphaCalculator;
        if ( v6 )
        {
          AlphaTransitionCalculator__StartFadeOut(v6, 0);
          QuestBoardListViewManager__OnStartFadeOutAlphaAnim(this, v11);
          return;
        }
LABEL_22:
        sub_2213CDC(v6, v4);
      }
    }
    else
    {
      v6 = this->fields.rewardIconAlphaCalculator;
      if ( !v6 )
        goto LABEL_22;
      if ( AlphaTransitionCalculator__IsFadeOutFinished(v6, 0) )
      {
        v6 = this->fields.rewardIconAlphaCalculator;
        if ( !v6 )
          goto LABEL_22;
        AlphaTransitionCalculator__StartFadeIn(v6, 0);
        v14 = UnityEngine_Time__get_realtimeSinceStartup(0);
        mAlphaAnimCnt = this->fields.mAlphaAnimCnt;
        this->fields.mAlphaAnimTimeOld = v14;
        v16 = QuestBoardListViewManager_TypeInfo;
        v17 = mAlphaAnimCnt + 1;
        this->fields.mAlphaAnimCnt = mAlphaAnimCnt + 1;
        if ( !*(&v16->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v16, v12, v13);
          v16 = QuestBoardListViewManager_TypeInfo;
        }
        ALPHA_ANIM_COUNT_RESET_VAL = v16->static_fields->ALPHA_ANIM_COUNT_RESET_VAL;
        if ( v17 >= ALPHA_ANIM_COUNT_RESET_VAL )
        {
          v19 = this->fields.mAlphaAnimCnt;
          if ( !*(&v16->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(v16, v12, v13);
            ALPHA_ANIM_COUNT_RESET_VAL = QuestBoardListViewManager_TypeInfo->static_fields->ALPHA_ANIM_COUNT_RESET_VAL;
          }
          this->fields.mAlphaAnimCnt = v19 - ALPHA_ANIM_COUNT_RESET_VAL;
        }
        QuestBoardListViewManager__OnChangeAlphaAnim(this, v12);
      }
    }
  }
}


System_Collections_IEnumerator_o *QuestBoardListViewManager__WaitFinish(
        QuestBoardListViewManager_o *this,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  __int64 v5; // x21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_596D289 & 1) == 0 )
  {
    sub_2213A60(&QuestBoardListViewManager__WaitFinish_d__121_TypeInfo);
    byte_596D289 = 1;
  }
  v5 = sub_2213CCC(QuestBoardListViewManager__WaitFinish_d__121_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 40) = endAct;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 40), (int32_t)endAct, v12, v13, v14, v15, v16, v17);
  return (System_Collections_IEnumerator_o *)v5;
}


void QuestBoardListViewManager___BGChangeEffect_b__166_0(QuestBoardListViewManager_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *mFolderBg; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  mFolderBg = (UnityEngine_Component_o *)this->fields.mFolderBg;
  if ( !mFolderBg
    || (((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *, double))mFolderBg->klass[1]._1.element_class)(
          mFolderBg,
          mFolderBg->klass[1]._1.castClass,
          0.0),
        (mFolderBg = (UnityEngine_Component_o *)this->fields.mFolderBg) == 0)
    || (mFolderBg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mFolderBg, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mFolderBg, 1, 0),
        (mFolderBg = (UnityEngine_Component_o *)this->fields.mFolderBg) == 0)
    || (gameObject = UnityEngine_Component__get_gameObject(mFolderBg, 0),
        (mFolderBg = (UnityEngine_Component_o *)TweenAlpha__Begin(gameObject, this->fields.mCrossFadeTime, 1.0, 0)) == 0) )
  {
    sub_2213CDC(mFolderBg, method);
  }
  LODWORD(mFolderBg[1].monitor) = 1;
}


void QuestBoardListViewManager___BGChangeEffect_b__166_1(QuestBoardListViewManager_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *mFolderBgTemp; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  int32_t v11; // w1
  MissionNaviTransitionBoardItem_o *p_fields; // x0

  if ( (byte_596D2C9 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_11799/*"RemoveTempBG"*/);
    byte_596D2C9 = 1;
  }
  mFolderBgTemp = (UnityEngine_Component_o *)this->fields.mFolderBgTemp;
  if ( !mFolderBgTemp
    || (((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *, float))mFolderBgTemp->klass[1]._1.element_class)(
          mFolderBgTemp,
          mFolderBgTemp->klass[1]._1.castClass,
          1.0),
        (mFolderBgTemp = (UnityEngine_Component_o *)this->fields.mFolderBgTemp) == 0)
    || (gameObject = UnityEngine_Component__get_gameObject(mFolderBgTemp, 0),
        (mFolderBgTemp = (UnityEngine_Component_o *)TweenAlpha__Begin(gameObject, this->fields.mCrossFadeTime, 0.0, 0)) == 0) )
  {
    sub_2213CDC(mFolderBgTemp, method);
  }
  v11 = StringLiteral_11799/*"RemoveTempBG"*/;
  mFolderBgTemp[3].fields.m_CachedPtr = StringLiteral_11799/*"RemoveTempBG"*/;
  p_fields = (MissionNaviTransitionBoardItem_o *)&mFolderBgTemp[3].fields;
  LODWORD(p_fields[-1].fields.viewObject) = 0;
  sub_2213A04(p_fields, v11, v5, v6, v7, v8, v9, v10);
}


// local variable allocation has failed, the output may be wrong!
void QuestBoardListViewManager__bgAlphaFade(
        QuestBoardListViewManager_o *this,
        int32_t inOut,
        float time,
        const MethodInfo *method)
{
  UnityEngine_Component_o *mFolderBg; // x0
  UnityEngine_GameObject_o *v8; // x0
  int v9; // w8
  UnityEngine_GameObject_o *gameObject; // x0

  mFolderBg = (UnityEngine_Component_o *)this->fields.mFolderBg;
  if ( !mFolderBg )
    goto LABEL_18;
  mFolderBg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mFolderBg, 0);
  if ( !mFolderBg )
    goto LABEL_18;
  if ( !UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)mFolderBg, 0) )
    return;
  if ( inOut > 4 )
  {
    if ( inOut == 6 )
      goto LABEL_13;
    if ( inOut != 5 )
      return;
  }
  else if ( inOut != 3 )
  {
    if ( inOut != 4 )
      return;
LABEL_13:
    mFolderBg = (UnityEngine_Component_o *)this->fields.mFolderBg;
    if ( mFolderBg )
    {
      gameObject = UnityEngine_Component__get_gameObject(mFolderBg, 0);
      mFolderBg = (UnityEngine_Component_o *)TweenAlpha__Begin(gameObject, time, 0.0, 0);
      if ( mFolderBg )
      {
        v9 = 2;
        goto LABEL_16;
      }
    }
LABEL_18:
    sub_2213CDC(mFolderBg, *(_QWORD *)&inOut);
  }
  mFolderBg = (UnityEngine_Component_o *)this->fields.mFolderBg;
  if ( !mFolderBg )
    goto LABEL_18;
  v8 = UnityEngine_Component__get_gameObject(mFolderBg, 0);
  mFolderBg = (UnityEngine_Component_o *)TweenAlpha__Begin(v8, time, 1.0, 0);
  if ( !mFolderBg )
    goto LABEL_18;
  v9 = 1;
LABEL_16:
  LODWORD(mFolderBg[1].monitor) = v9;
}


void QuestBoardListViewManager__changeBG(
        QuestBoardListViewManager_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_Action_o *v20; // x20
  const MethodInfo *v21; // x2

  if ( (byte_596D2A4 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_QuestBoardListViewManager___c__DisplayClass161_0__changeBG_b__0__);
    sub_2213A60(&QuestBoardListViewManager___c__DisplayClass161_0_TypeInfo);
    byte_596D2A4 = 1;
  }
  v5 = sub_2213CCC(QuestBoardListViewManager___c__DisplayClass161_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_2213CDC(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = callback;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)callback, v14, v15, v16, v17, v18, v19);
  v20 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v20,
    (Il2CppObject *)v5,
    Method_QuestBoardListViewManager___c__DisplayClass161_0__changeBG_b__0__,
    0);
  QuestBoardListViewManager__FolderBgObjectSetup(this, v20, v21);
}


float QuestBoardListViewManager__get_AlphaAnimNow(QuestBoardListViewManager_o *this, const MethodInfo *method)
{
  return this->fields.mAlphaAnimNow;
}


AssetData_o *QuestBoardListViewManager__get_EffectAssetData(
        QuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.effectAssetData;
}


System_String_o *QuestBoardListViewManager__get_FolderBgTextureName(
        QuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  ExUITexture_o *mFolderBg; // x0

  mFolderBg = this->fields.mFolderBg;
  if ( !mFolderBg )
    sub_2213CDC(0, method);
  return ExUITexture__get_TextureName(mFolderBg, 0);
}


int32_t QuestBoardListViewManager__get_IndexFirstDisplayableRoadmapButton(
        QuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields._IndexFirstDisplayableRoadmapButton_k__BackingField;
}


bool QuestBoardListViewManager__get_IsShowingInfo(QuestBoardListViewManager_o *this, const MethodInfo *method)
{
  return this->fields._IsShowingInfo_k__BackingField;
}


int64_t QuestBoardListViewManager__get_ListCreatedTime(QuestBoardListViewManager_o *this, const MethodInfo *method)
{
  return this->fields.mListCreatedTime;
}


float QuestBoardListViewManager__get_OUT_POS_OFS_X(const MethodInfo *method)
{
  int32_t width; // w19
  float v2; // s0

  width = UnityEngine_Screen__get_width(0);
  v2 = (float)width / (float)UnityEngine_Screen__get_height(0);
  if ( v2 >= 1.7778 )
    return (float)((float)(v2 * 576.0) + -1024.0) + 532.0;
  else
    return 532.0;
}


System_Collections_Generic_List_QuestBoardListViewObject__o *QuestBoardListViewManager__get_ObjectList(
        QuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *current; // x20
  _BOOL8 v9; // x0
  __int64 v10; // x1
  Il2CppObject *Component_object; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  Il2CppObject *v18; // x1
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_596D283 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_QuestBoardListViewObject___);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestBoardListViewObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestBoardListViewObject___ctor__);
    sub_2213A60(&System_Collections_Generic_List_QuestBoardListViewObject__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596D283 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_QuestBoardListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_QuestBoardListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_2213CDC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v25 = v24;
  v24.fields._list = 0;
  *(_QWORD *)&v24.fields._index = &v25;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v25,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v25.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v9 )
    {
      if ( !current )
        sub_2213CDC(v9, v10);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_QuestBoardListViewObject___);
      v18 = Component_object;
      if ( !v3
        || (items = v3->fields._items,
            v20 = Method_System_Collections_Generic_List_QuestBoardListViewObject__Add__,
            ++v3->fields._version,
            !items) )
      {
        sub_2213CDC(Component_object, Component_object);
      }
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v22 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v22[4] = (Il2CppClass *)v18;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v22 + 4), (int32_t)v18, v12, v13, v14, v15, v16, v17);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_QuestBoardListViewObject__o *)v3;
}


int32_t QuestBoardListViewManager__get_ResumeCaldeaFolderScrollIndex(
        QuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields._ResumeCaldeaFolderScrollIndex_k__BackingField;
}


float QuestBoardListViewManager__get_SyncReferenceTime(QuestBoardListViewManager_o *this, const MethodInfo *method)
{
  return this->fields._SyncReferenceTime_k__BackingField;
}


bool QuestBoardListViewManager__isBgActive(QuestBoardListViewManager_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *mFolderBg; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *mFolderBgObject; // x20

  if ( (byte_596D2A3 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596D2A3 = 1;
  }
  mFolderBg = (UnityEngine_Component_o *)this->fields.mFolderBg;
  if ( !mFolderBg )
    goto LABEL_13;
  mFolderBg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mFolderBg, 0);
  if ( !mFolderBg )
    goto LABEL_13;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)mFolderBg, 0) )
    return 1;
  mFolderBgObject = (UnityEngine_Object_o *)this->fields.mFolderBgObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4, v5);
  if ( UnityEngine_Object__op_Inequality(mFolderBgObject, 0, 0) )
  {
    mFolderBg = (UnityEngine_Component_o *)this->fields.mFolderBgObject;
    if ( mFolderBg )
      return UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)mFolderBg, 0);
LABEL_13:
    sub_2213CDC(mFolderBg, method);
  }
  return 0;
}


void QuestBoardListViewManager__set_IndexFirstDisplayableRoadmapButton(
        QuestBoardListViewManager_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._IndexFirstDisplayableRoadmapButton_k__BackingField = value;
}


void QuestBoardListViewManager__set_IsShowingInfo(
        QuestBoardListViewManager_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsShowingInfo_k__BackingField = value;
}


void QuestBoardListViewManager__set_ResumeCaldeaFolderScrollIndex(
        QuestBoardListViewManager_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._ResumeCaldeaFolderScrollIndex_k__BackingField = value;
}


void QuestBoardListViewManager__set_SyncReferenceTime(
        QuestBoardListViewManager_o *this,
        float value,
        const MethodInfo *method)
{
  this->fields._SyncReferenceTime_k__BackingField = value;
}


void QuestBoardListViewManager__CoroutineLoadAsset_d__170___ctor(
        QuestBoardListViewManager__CoroutineLoadAsset_d__170_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool QuestBoardListViewManager__CoroutineLoadAsset_d__170__MoveNext(
        QuestBoardListViewManager__CoroutineLoadAsset_d__170_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  QuestBoardListViewManager__CoroutineLoadAsset_d__170_o *v3; // x19
  int32_t _1__state; // w25
  struct QuestBoardListViewManager_o *_4__this; // x20
  struct QuestBoardListViewManager___c__DisplayClass170_0_o *v6; // x21
  Il2CppObject *v7; // x22
  struct QuestBoardListViewManager___c__DisplayClass170_0_o **p__8__1; // x21
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  Il2CppObject *v21; // x1
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  struct QuestBoardListViewManager_o *onCompleteLoad; // x1
  __int64 v29; // x1
  __int64 v30; // x2
  EventEntity_array *EnableEntityList; // x22
  int max_length; // w8
  EventRewardSceneMaster_o *v33; // x23
  __int64 v34; // x24
  EventEntity_o *v35; // x27
  const MethodInfo *v36; // x3
  struct QuestBoardListViewManager___c__DisplayClass170_0_o *v37; // x22
  int32_t id; // w21
  System_Action_o *_9__2; // x23
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  Il2CppObject *_8__1; // x20
  System_Func_bool__o *v47; // x21
  UnityEngine_WaitUntil_o *v48; // x20
  MissionNaviTransitionBoardItem_o *p__2__current; // x19
  System_String_o *v50; // x2
  System_String_o *v51; // x3
  int32_t v52; // w4
  int32_t v53; // w5
  bool v54; // w6
  bool v55; // w7
  AssetLoader_LoadEndDataHandler_o *v57; // x20
  __int64 v58; // x1
  __int64 v59; // x2
  struct QuestBoardListViewManager___c__DisplayClass170_0_o *v60; // x8

  v3 = this;
  if ( (byte_596D2D7 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_EventMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_EventRewardSceneMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&System_Func_bool__TypeInfo);
    sub_2213A60(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_2213A60(&Method_QuestBoardListViewManager___c__DisplayClass170_0__CoroutineLoadAsset_b__0__);
    sub_2213A60(&Method_QuestBoardListViewManager___c__DisplayClass170_0__CoroutineLoadAsset_b__1__);
    sub_2213A60(&Method_QuestBoardListViewManager___c__DisplayClass170_0__CoroutineLoadAsset_b__2__);
    sub_2213A60(&QuestBoardListViewManager___c__DisplayClass170_0_TypeInfo);
    sub_2213A60(&UnityEngine_WaitUntil_TypeInfo);
    this = (QuestBoardListViewManager__CoroutineLoadAsset_d__170_o *)sub_2213A60(&StringLiteral_14252/*"Terminal/Effect"*/);
    byte_596D2D7 = 1;
  }
  _1__state = v3->fields.__1__state;
  _4__this = v3->fields.__4__this;
  if ( !_1__state )
  {
    v3->fields.__1__state = -1;
    v7 = (Il2CppObject *)sub_2213CCC(QuestBoardListViewManager___c__DisplayClass170_0_TypeInfo);
    System_Object___ctor(v7, 0);
    v3->fields.__8__1 = (struct QuestBoardListViewManager___c__DisplayClass170_0_o *)v7;
    p__8__1 = &v3->fields.__8__1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v3->fields.__8__1, (int32_t)v7, v9, v10, v11, v12, v13, v14);
    this = (QuestBoardListViewManager__CoroutineLoadAsset_d__170_o *)v3->fields.__8__1;
    if ( !this )
      goto LABEL_36;
    v21 = (Il2CppObject *)v3->fields.__4__this;
    this->fields.__2__current = v21;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.__2__current,
      (int32_t)v21,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
    this = (QuestBoardListViewManager__CoroutineLoadAsset_d__170_o *)v3->fields.__8__1;
    if ( !this )
      goto LABEL_36;
    onCompleteLoad = (struct QuestBoardListViewManager_o *)v3->fields.onCompleteLoad;
    this->fields.__4__this = onCompleteLoad;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.__4__this,
      (int32_t)onCompleteLoad,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v29, v30);
    this = (QuestBoardListViewManager__CoroutineLoadAsset_d__170_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventMaster___);
    if ( !this )
      goto LABEL_36;
    EnableEntityList = EventMaster__GetEnableEntityList((EventMaster_o *)this, 12, 1, 0, 0);
    this = (QuestBoardListViewManager__CoroutineLoadAsset_d__170_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventRewardSceneMaster___);
    if ( !*p__8__1 )
      goto LABEL_36;
    (*p__8__1)->fields.flag = 1;
    if ( !EnableEntityList )
      goto LABEL_36;
    max_length = EnableEntityList->max_length;
    if ( max_length >= 1 )
    {
      v33 = (EventRewardSceneMaster_o *)this;
      v34 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v34 >= max_length )
          sub_2213CE4(this);
        v35 = EnableEntityList->m_Items[v34];
        if ( !v35 || !v33 )
          goto LABEL_36;
        this = (QuestBoardListViewManager__CoroutineLoadAsset_d__170_o *)EventRewardSceneMaster__getEntityFromIdAndEventType(
                                                                           v33,
                                                                           v35->fields.id,
                                                                           15,
                                                                           0);
        if ( this )
          break;
        max_length = EnableEntityList->max_length;
        if ( (int)++v34 >= max_length )
          goto LABEL_29;
      }
      v37 = *p__8__1;
      if ( !*p__8__1 )
        goto LABEL_36;
      id = v35->fields.id;
      _9__2 = v37->fields.__9__2;
      v37->fields.flag = 0;
      if ( !_9__2 )
      {
        _9__2 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
        System_Action___ctor(
          _9__2,
          (Il2CppObject *)v37,
          Method_QuestBoardListViewManager___c__DisplayClass170_0__CoroutineLoadAsset_b__2__,
          0);
        v37->fields.__9__2 = _9__2;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v37->fields.__9__2,
          (int32_t)_9__2,
          v40,
          v41,
          v42,
          v43,
          v44,
          v45);
      }
      if ( !_4__this )
        goto LABEL_36;
      QuestBoardListViewManager__SetupFortificationWarningDialog(_4__this, id, _9__2, v36);
    }
LABEL_29:
    _8__1 = (Il2CppObject *)v3->fields.__8__1;
    v47 = (System_Func_bool__o *)sub_2213CCC(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(
      v47,
      _8__1,
      Method_QuestBoardListViewManager___c__DisplayClass170_0__CoroutineLoadAsset_b__0__,
      0);
    v48 = (UnityEngine_WaitUntil_o *)sub_2213CCC(UnityEngine_WaitUntil_TypeInfo);
    UnityEngine_WaitUntil___ctor(v48, v47, 0);
    v3->fields.__2__current = (Il2CppObject *)v48;
    p__2__current = (MissionNaviTransitionBoardItem_o *)&v3->fields.__2__current;
    sub_2213A04(p__2__current, (int32_t)v48, v50, v51, v52, v53, v54, v55);
    p__2__current[-1].fields._BoardType_k__BackingField = 1;
    return _1__state == 0;
  }
  if ( _1__state == 1 )
  {
    v3->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_36;
    method = (const MethodInfo *)_4__this->fields.effectAssetData;
    v6 = v3->fields.__8__1;
    if ( method )
    {
      if ( v6 )
      {
        QuestBoardListViewManager__OnCompleteAssetData(_4__this, (AssetData_o *)method, v6->fields.onCompleteLoad, v2);
        return _1__state == 0;
      }
LABEL_36:
      sub_2213CDC(this, method);
    }
    v57 = (AssetLoader_LoadEndDataHandler_o *)sub_2213CCC(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v57,
      (Il2CppObject *)v6,
      Method_QuestBoardListViewManager___c__DisplayClass170_0__CoroutineLoadAsset_b__1__,
      0);
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v58, v59);
    this = (QuestBoardListViewManager__CoroutineLoadAsset_d__170_o *)AssetManager__loadAssetStorage(
                                                                       (System_String_o *)StringLiteral_14252/*"Terminal/Effect"*/,
                                                                       v57,
                                                                       1,
                                                                       0,
                                                                       0);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v60 = v3->fields.__8__1;
      if ( v60 )
      {
        ActionExtensions__Call(v60->fields.onCompleteLoad, 0);
        return _1__state == 0;
      }
      goto LABEL_36;
    }
  }
  return _1__state == 0;
}


Il2CppObject *QuestBoardListViewManager__CoroutineLoadAsset_d__170__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        QuestBoardListViewManager__CoroutineLoadAsset_d__170_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn QuestBoardListViewManager__CoroutineLoadAsset_d__170__System_Collections_IEnumerator_Reset(
        QuestBoardListViewManager__CoroutineLoadAsset_d__170_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_QuestBoardListViewManager__CoroutineLoadAsset_d__170_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *QuestBoardListViewManager__CoroutineLoadAsset_d__170__System_Collections_IEnumerator_get_Current(
        QuestBoardListViewManager__CoroutineLoadAsset_d__170_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void QuestBoardListViewManager__CoroutineLoadAsset_d__170__System_IDisposable_Dispose(
        QuestBoardListViewManager__CoroutineLoadAsset_d__170_o *this,
        const MethodInfo *method)
{
  ;
}


void QuestBoardListViewManager__WaitFinish_d__121___ctor(
        QuestBoardListViewManager__WaitFinish_d__121_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool QuestBoardListViewManager__WaitFinish_d__121__MoveNext(
        QuestBoardListViewManager__WaitFinish_d__121_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t _1__state; // w8
  struct QuestBoardListViewManager_o *_4__this; // x8
  Il2CppObject **p__2__current; // x19
  System_Action_o *endAct; // x0

  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    _4__this = this->fields.__4__this;
    this->fields.__1__state = -1;
    if ( !_4__this )
      sub_2213CDC(this, method);
    if ( _4__this->fields.waitCount > 0 )
      goto LABEL_6;
    endAct = this->fields.endAct;
    _4__this->fields.waitCount = 0;
    ActionExtensions__Call(endAct, 0);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
LABEL_6:
    this->fields.__2__current = 0;
    p__2__current = &this->fields.__2__current;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.__2__current, 0, v2, v3, v4, v5, v6, v7);
    *((_DWORD *)p__2__current - 2) = 1;
    return 1;
  }
  return 0;
}


Il2CppObject *QuestBoardListViewManager__WaitFinish_d__121__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        QuestBoardListViewManager__WaitFinish_d__121_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn QuestBoardListViewManager__WaitFinish_d__121__System_Collections_IEnumerator_Reset(
        QuestBoardListViewManager__WaitFinish_d__121_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_QuestBoardListViewManager__WaitFinish_d__121_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *QuestBoardListViewManager__WaitFinish_d__121__System_Collections_IEnumerator_get_Current(
        QuestBoardListViewManager__WaitFinish_d__121_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void QuestBoardListViewManager__WaitFinish_d__121__System_IDisposable_Dispose(
        QuestBoardListViewManager__WaitFinish_d__121_o *this,
        const MethodInfo *method)
{
  ;
}


void QuestBoardListViewManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596D2CA & 1) == 0 )
  {
    sub_2213A60(&QuestBoardListViewManager___c_TypeInfo);
    byte_596D2CA = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(QuestBoardListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  QuestBoardListViewManager___c_TypeInfo->static_fields->__9 = (struct QuestBoardListViewManager___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)QuestBoardListViewManager___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void QuestBoardListViewManager___c___ctor(QuestBoardListViewManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestBoardListViewManager___c___CreateList_b__113_0(
        QuestBoardListViewManager___c_o *this,
        QuestBoardListViewItem_o *item,
        const MethodInfo *method)
{
  if ( !item )
    sub_2213CDC(this, 0);
  return QuestBoardListViewItem__IsDisplayableRoadmapButton(item, (const MethodInfo *)item);
}


bool QuestBoardListViewManager___c___DisplayRoadmapButtonToTopWarBoard_b__115_0(
        QuestBoardListViewManager___c_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 naturalAligment; // x9
  _QWORD *monitor; // x8
  __int64 v7; // x19
  QuestTree_o *Instance; // x0
  __int64 v9; // x1
  MapControl_WarInfo_o *WarInfoByWarID; // x0
  MapControl_WarInfo_o *v11; // x20
  bool IsClosedWar; // w19
  bool HasFlag; // w21
  bool IsWarShortcut; // w22

  if ( (byte_596D2CB & 1) == 0 )
  {
    sub_2213A60(&QuestBoardListViewItem_TypeInfo);
    sub_2213A60(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_596D2CB = 1;
  }
  if ( !item )
    goto LABEL_14;
  naturalAligment = QuestBoardListViewItem_TypeInfo->_2.naturalAligment;
  if ( item->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (QuestBoardListViewItem_c *)item->klass->_2.typeHierarchy[naturalAligment - 1] != QuestBoardListViewItem_TypeInfo )
  {
    sub_221405C(item, QuestBoardListViewItem_TypeInfo, method, v3);
    goto LABEL_17;
  }
  monitor = item[1].monitor;
  if ( monitor )
  {
    v7 = monitor[14];
    if ( v7 )
    {
      Instance = (QuestTree_o *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !Instance )
        goto LABEL_17;
      WarInfoByWarID = QuestTree__mfGetWarInfoByWarID(Instance, *(_DWORD *)(v7 + 20), 0);
      if ( WarInfoByWarID )
      {
        v11 = WarInfoByWarID;
        IsClosedWar = MapControl_WarInfo__IsClosedWar(WarInfoByWarID, 0);
        Instance = (QuestTree_o *)MapControl_WarInfo__GetMine(v11, 0);
        if ( Instance )
        {
          HasFlag = WarEntity__HasFlag((WarEntity_o *)Instance, 128, 0);
          Instance = (QuestTree_o *)MapControl_WarInfo__GetMine(v11, 0);
          if ( Instance )
          {
            IsWarShortcut = WarEntity__IsWarShortcut((WarEntity_o *)Instance, 0);
            Instance = (QuestTree_o *)MapControl_WarInfo__GetMine(v11, 0);
            if ( Instance )
            {
              LOBYTE(monitor) = (HasFlag && !IsClosedWar && !IsWarShortcut)
                              & !WarEntity__IsGrandBoard((WarEntity_o *)Instance, 0);
              return (unsigned __int8)monitor & 1;
            }
          }
        }
LABEL_17:
        sub_2213CDC(Instance, v9);
      }
    }
LABEL_14:
    LOBYTE(monitor) = 0;
  }
  return (unsigned __int8)monitor & 1;
}


bool QuestBoardListViewManager___c___SetupBlackMark_b__172_0(
        QuestBoardListViewManager___c_o *this,
        WarEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  int32_t lastQuestId; // w19

  if ( (byte_596D2CC & 1) == 0 )
  {
    this = (QuestBoardListViewManager___c_o *)sub_2213A60(&CondType_TypeInfo);
    byte_596D2CC = 1;
  }
  if ( !entity )
    sub_2213CDC(this, entity);
  if ( !WarEntity__IsBlackMarkWithClear(entity, 0) )
    return 0;
  lastQuestId = entity->fields.lastQuestId;
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v4, v5);
  return CondType__IsQuestClear_47284152(lastQuestId, -1, 0, 0);
}


bool QuestBoardListViewManager___c___SetupDisp_b__131_0(
        QuestBoardListViewManager___c_o *this,
        QuestBoardListViewItem_o *item,
        const MethodInfo *method)
{
  if ( !item )
    sub_2213CDC(this, 0);
  return QuestBoardListViewItem__IsDisplayableRoadmapButton(item, (const MethodInfo *)item);
}


bool QuestBoardListViewManager___c___SetupWhiteMark_b__173_0(
        QuestBoardListViewManager___c_o *this,
        WarEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  int32_t lastQuestId; // w20

  if ( (byte_596D2CD & 1) == 0 )
  {
    this = (QuestBoardListViewManager___c_o *)sub_2213A60(&CondType_TypeInfo);
    byte_596D2CD = 1;
  }
  if ( !entity )
    sub_2213CDC(this, entity);
  if ( !WarEntity__IsWhiteMarkWithClear(entity, 0) )
    return WarEntity__IsDispWhiteMarkUnderBoard(entity, 0);
  lastQuestId = entity->fields.lastQuestId;
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v4, v5);
  return CondType__IsQuestClear_47284152(lastQuestId, -1, 0, 0) || WarEntity__IsDispWhiteMarkUnderBoard(entity, 0);
}


void QuestBoardListViewManager___c__DisplayClass133_0___ctor(
        QuestBoardListViewManager___c__DisplayClass133_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestBoardListViewManager___c__DisplayClass133_0___RequestListObject_b__0(
        QuestBoardListViewManager___c__DisplayClass133_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  struct QuestBoardListViewManager_o *_4__this; // x0
  const MethodInfo *v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  const MethodInfo *v20; // x2
  float infoTime; // s8
  __int64 v22; // x1
  __int64 v23; // x2
  QuestBoardListViewManager_c *v24; // x0
  SlideFadeObject_o *v25; // x21
  float OUT_POS_OFS_X; // s9
  System_Action_o *v27; // x22
  const MethodInfo *v28; // x3

  if ( (byte_596D2CE & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
    sub_2213A60(&QuestBoardListViewManager_TypeInfo);
    sub_2213A60(&Method_QuestBoardListViewManager___c__DisplayClass133_1__RequestListObject_b__2__);
    sub_2213A60(&QuestBoardListViewManager___c__DisplayClass133_1_TypeInfo);
    byte_596D2CE = 1;
  }
  v3 = sub_2213CCC(QuestBoardListViewManager___c__DisplayClass133_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_14;
  *(_QWORD *)(v3 + 24) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 24), (int32_t)this, v6, v7, v8, v9, v10, v11);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)_4__this, 0);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_38B8770 *)Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
  *(_QWORD *)(v3 + 16) = Component_object;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 16), (int32_t)Component_object, v14, v15, v16, v17, v18, v19);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  infoTime = 0.0;
  if ( !this->fields.isFadeOnTop && !_4__this->fields.mFaded )
    infoTime = _4__this->fields.infoTime;
  QuestBoardListViewManager__bgAlphaFade(_4__this, _4__this->fields.initMode, infoTime, v20);
  v24 = QuestBoardListViewManager_TypeInfo;
  v25 = *(SlideFadeObject_o **)(v3 + 16);
  if ( !*(&QuestBoardListViewManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(QuestBoardListViewManager_TypeInfo, v22, v23);
  OUT_POS_OFS_X = QuestBoardListViewManager__get_OUT_POS_OFS_X((const MethodInfo *)v24);
  v27 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v27,
    (Il2CppObject *)v3,
    Method_QuestBoardListViewManager___c__DisplayClass133_1__RequestListObject_b__2__,
    0);
  if ( !v25
    || (SlideFadeObject__SlideIn_42906952(v25, OUT_POS_OFS_X, infoTime, 0.0, v27, 0),
        (_4__this = this->fields.__4__this) == 0)
    || (QuestBoardListViewManager__ResetAlphaAnimTime(_4__this, v5), (_4__this = this->fields.__4__this) == 0) )
  {
LABEL_14:
    sub_2213CDC(_4__this, v5);
  }
  QuestBoardListViewManager__ModifyAllRoadmapButtons(_4__this, 1, 1, v28);
}


void QuestBoardListViewManager___c__DisplayClass133_0___RequestListObject_b__1(
        QuestBoardListViewManager___c__DisplayClass133_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *_4__this; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v5; // x2
  struct QuestBoardListViewManager_o *v6; // x8
  SlideFadeObject_o *v7; // x20
  const MethodInfo *v8; // x6
  struct QuestBoardListViewManager_o *v9; // x20
  __int64 v10; // x2
  AvalonSceneManager_c *v11; // x8
  CommonUI_o *v12; // x20
  System_Action_o *_9__4; // x21
  float DEFAULT_FADE_TIME; // s8
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  System_Action_o *_9__5; // x22
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7

  if ( (byte_596D2CF & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_QuestBoardListViewManager___c__DisplayClass133_0__RequestListObject_b__4__);
    sub_2213A60(&Method_QuestBoardListViewManager___c__DisplayClass133_0__RequestListObject_b__5__);
    byte_596D2CF = 1;
  }
  _4__this = (UnityEngine_Component_o *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_19;
  gameObject = UnityEngine_Component__get_gameObject(_4__this, 0);
  _4__this = (UnityEngine_Component_o *)GameObjectExtensions__SafeGetComponent_object_(
                                          gameObject,
                                          (const MethodInfo_38B8770 *)Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
  v6 = this->fields.__4__this;
  if ( !v6 )
    goto LABEL_19;
  v7 = (SlideFadeObject_o *)_4__this;
  QuestBoardListViewManager__bgAlphaFade(this->fields.__4__this, v6->fields.initMode, 0.0, v5);
  if ( !v7 )
    goto LABEL_19;
  SlideFadeObject__ResetPosition(v7, 0);
  v9 = this->fields.__4__this;
  if ( !v9 )
    goto LABEL_19;
  if ( v9->fields.mFaded )
  {
    v9->fields.mFaded = 0;
    _4__this = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v11 = AvalonSceneManager_TypeInfo;
    v12 = (CommonUI_o *)_4__this;
    if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, method, v10);
      v11 = AvalonSceneManager_TypeInfo;
    }
    _9__4 = this->fields.__9__4;
    DEFAULT_FADE_TIME = v11->static_fields->DEFAULT_FADE_TIME;
    if ( !_9__4 )
    {
      _9__4 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(
        _9__4,
        (Il2CppObject *)this,
        Method_QuestBoardListViewManager___c__DisplayClass133_0__RequestListObject_b__4__,
        0);
      this->fields.__9__4 = _9__4;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.__9__4,
        (int32_t)_9__4,
        v15,
        v16,
        v17,
        v18,
        v19,
        v20);
    }
    if ( v12 )
    {
      CommonUI__maskFadein(v12, DEFAULT_FADE_TIME, _9__4, 0);
      goto LABEL_17;
    }
LABEL_19:
    sub_2213CDC(_4__this, method);
  }
  _9__5 = this->fields.__9__5;
  if ( !_9__5 )
  {
    _9__5 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__5,
      (Il2CppObject *)this,
      Method_QuestBoardListViewManager___c__DisplayClass133_0__RequestListObject_b__5__,
      0);
    this->fields.__9__5 = _9__5;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.__9__5, (int32_t)_9__5, v22, v23, v24, v25, v26, v27);
  }
  QuestBoardListViewManager__SetMode(v9, 2, _9__5, 0, 0, 0, v8);
LABEL_17:
  _4__this = (UnityEngine_Component_o *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_19;
  QuestBoardListViewManager__ResetAlphaAnimTime((QuestBoardListViewManager_o *)_4__this, method);
}


void QuestBoardListViewManager___c__DisplayClass133_0___RequestListObject_b__10(
        QuestBoardListViewManager___c__DisplayClass133_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.end_act, 0);
}


void QuestBoardListViewManager___c__DisplayClass133_0___RequestListObject_b__3(
        QuestBoardListViewManager___c__DisplayClass133_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( !this->fields.__4__this )
    sub_2213CDC(this, method);
  QuestBoardListViewManager__EndSlideIn(this->fields.__4__this, this->fields.end_act, this->fields.isNotInit, v2);
}


void QuestBoardListViewManager___c__DisplayClass133_0___RequestListObject_b__4(
        QuestBoardListViewManager___c__DisplayClass133_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x6
  QuestBoardListViewManager___c__DisplayClass133_0_o *v3; // x19
  System_Action_o *_9__6; // x22
  QuestBoardListViewManager_o *_4__this; // x20
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  v3 = this;
  if ( (byte_596D2D0 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    this = (QuestBoardListViewManager___c__DisplayClass133_0_o *)sub_2213A60(&Method_QuestBoardListViewManager___c__DisplayClass133_0__RequestListObject_b__6__);
    byte_596D2D0 = 1;
  }
  _9__6 = v3->fields.__9__6;
  _4__this = v3->fields.__4__this;
  if ( !_9__6 )
  {
    _9__6 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__6,
      (Il2CppObject *)v3,
      Method_QuestBoardListViewManager___c__DisplayClass133_0__RequestListObject_b__6__,
      0);
    v3->fields.__9__6 = _9__6;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v3->fields.__9__6, (int32_t)_9__6, v6, v7, v8, v9, v10, v11);
  }
  if ( !_4__this )
    sub_2213CDC(this, method);
  QuestBoardListViewManager__SetMode(_4__this, 2, _9__6, 0, 0, 0, v2);
}


void QuestBoardListViewManager___c__DisplayClass133_0___RequestListObject_b__5(
        QuestBoardListViewManager___c__DisplayClass133_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.end_act, 0);
}


void QuestBoardListViewManager___c__DisplayClass133_0___RequestListObject_b__6(
        QuestBoardListViewManager___c__DisplayClass133_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.end_act, 0);
}


void QuestBoardListViewManager___c__DisplayClass133_0___RequestListObject_b__8(
        QuestBoardListViewManager___c__DisplayClass133_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.end_act, 0);
}


void QuestBoardListViewManager___c__DisplayClass133_0___RequestListObject_b__9(
        QuestBoardListViewManager___c__DisplayClass133_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x6
  QuestBoardListViewManager___c__DisplayClass133_0_o *v3; // x19
  System_Action_o *_9__10; // x22
  QuestBoardListViewManager_o *_4__this; // x20
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  v3 = this;
  if ( (byte_596D2D1 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    this = (QuestBoardListViewManager___c__DisplayClass133_0_o *)sub_2213A60(&Method_QuestBoardListViewManager___c__DisplayClass133_0__RequestListObject_b__10__);
    byte_596D2D1 = 1;
  }
  _9__10 = v3->fields.__9__10;
  _4__this = v3->fields.__4__this;
  if ( !_9__10 )
  {
    _9__10 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__10,
      (Il2CppObject *)v3,
      Method_QuestBoardListViewManager___c__DisplayClass133_0__RequestListObject_b__10__,
      0);
    v3->fields.__9__10 = _9__10;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v3->fields.__9__10, (int32_t)_9__10, v6, v7, v8, v9, v10, v11);
  }
  if ( !_4__this )
    sub_2213CDC(this, method);
  QuestBoardListViewManager__SetMode(_4__this, 2, _9__10, 0, 0, 0, v2);
}


void QuestBoardListViewManager___c__DisplayClass133_1___ctor(
        QuestBoardListViewManager___c__DisplayClass133_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestBoardListViewManager___c__DisplayClass133_1___RequestListObject_b__2(
        QuestBoardListViewManager___c__DisplayClass133_1_o *this,
        const MethodInfo *method)
{
  SlideFadeObject_o *sfo; // x0
  const MethodInfo *v4; // x3
  struct QuestBoardListViewManager___c__DisplayClass133_0_o *CS___8__locals1; // x8
  __int64 v6; // x2
  AvalonSceneManager_c *v7; // x8
  CommonUI_o *v8; // x20
  struct QuestBoardListViewManager___c__DisplayClass133_0_o *v9; // x19
  System_Action_o *_9__3; // x22
  float DEFAULT_FADE_TIME; // s8
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_596D2D2 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_QuestBoardListViewManager___c__DisplayClass133_0__RequestListObject_b__3__);
    byte_596D2D2 = 1;
  }
  sfo = this->fields.sfo;
  if ( !sfo )
    goto LABEL_15;
  SlideFadeObject__ResetPosition(sfo, 0);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_15;
  sfo = (SlideFadeObject_o *)CS___8__locals1->fields.__4__this;
  if ( !sfo )
    goto LABEL_15;
  if ( LOBYTE(sfo[4].fields.mInitPos.fields.y) )
  {
    LOBYTE(sfo[4].fields.mInitPos.fields.y) = 0;
    sfo = (SlideFadeObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v7 = AvalonSceneManager_TypeInfo;
    v8 = (CommonUI_o *)sfo;
    if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, method, v6);
      v7 = AvalonSceneManager_TypeInfo;
    }
    v9 = this->fields.CS___8__locals1;
    if ( v9 )
    {
      _9__3 = v9->fields.__9__3;
      DEFAULT_FADE_TIME = v7->static_fields->DEFAULT_FADE_TIME;
      if ( !_9__3 )
      {
        _9__3 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
        System_Action___ctor(
          _9__3,
          (Il2CppObject *)v9,
          Method_QuestBoardListViewManager___c__DisplayClass133_0__RequestListObject_b__3__,
          0);
        v9->fields.__9__3 = _9__3;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v9->fields.__9__3,
          (int32_t)_9__3,
          v12,
          v13,
          v14,
          v15,
          v16,
          v17);
      }
      if ( v8 )
      {
        CommonUI__maskFadein(v8, DEFAULT_FADE_TIME, _9__3, 0);
        return;
      }
    }
LABEL_15:
    sub_2213CDC(sfo, method);
  }
  QuestBoardListViewManager__EndSlideIn(
    (QuestBoardListViewManager_o *)sfo,
    CS___8__locals1->fields.end_act,
    CS___8__locals1->fields.isNotInit,
    v4);
}


void QuestBoardListViewManager___c__DisplayClass133_2___ctor(
        QuestBoardListViewManager___c__DisplayClass133_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestBoardListViewManager___c__DisplayClass133_2___RequestListObject_b__7(
        QuestBoardListViewManager___c__DisplayClass133_2_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct QuestBoardListViewManager___c__DisplayClass133_0_o *CS___8__locals2; // x9

  CS___8__locals2 = this->fields.CS___8__locals2;
  if ( !CS___8__locals2 || !CS___8__locals2->fields.__4__this )
    sub_2213CDC(this, method);
  QuestBoardListViewManager__SetSlideOut(
    CS___8__locals2->fields.__4__this,
    this->fields.time,
    CS___8__locals2->fields.end_act,
    v2);
}


void QuestBoardListViewManager___c__DisplayClass134_0___ctor(
        QuestBoardListViewManager___c__DisplayClass134_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestBoardListViewManager___c__DisplayClass134_0___SetSlideOut_b__0(
        QuestBoardListViewManager___c__DisplayClass134_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_2213CDC(this, method);
  QuestBoardListViewManager__EndSlideOut(this->fields.__4__this, this->fields.end_act, v2);
}


void QuestBoardListViewManager___c__DisplayClass136_0___ctor(
        QuestBoardListViewManager___c__DisplayClass136_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestBoardListViewManager___c__DisplayClass136_0___EndSlideOut_b__0(
        QuestBoardListViewManager___c__DisplayClass136_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.end_act, 0);
}


void QuestBoardListViewManager___c__DisplayClass143_0___ctor(
        QuestBoardListViewManager___c__DisplayClass143_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestBoardListViewManager___c__DisplayClass143_0___OnClickListView_b__0(
        QuestBoardListViewManager___c__DisplayClass143_0_o *this,
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
        this = (QuestBoardListViewManager___c__DisplayClass143_0_o *)ListViewObject__get_Index(this->fields.obj, 0),
        !mTerminalList) )
  {
    sub_2213CDC(this, method);
  }
  ScrTerminalListTop__Click_Area(mTerminalList, areaBoardInfo, (int32_t)this, 0, 0, 0);
}


void QuestBoardListViewManager___c__DisplayClass147_0___ctor(
        QuestBoardListViewManager___c__DisplayClass147_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestBoardListViewManager___c__DisplayClass147_0___RequestToRaiseTutorialFlag_b__0(
        QuestBoardListViewManager___c__DisplayClass147_0_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  struct System_Action_o *clickAreaFunc; // x8

  clickAreaFunc = this->fields.clickAreaFunc;
  if ( !clickAreaFunc )
    sub_2213CDC(this, result);
  ((void (__fastcall *)(intptr_t, intptr_t))clickAreaFunc->fields.invoke_impl)(
    clickAreaFunc->fields.method_code,
    clickAreaFunc->fields.method);
}


void QuestBoardListViewManager___c__DisplayClass161_0___ctor(
        QuestBoardListViewManager___c__DisplayClass161_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestBoardListViewManager___c__DisplayClass161_0___changeBG_b__0(
        QuestBoardListViewManager___c__DisplayClass161_0_o *this,
        const MethodInfo *method)
{
  QuestBoardListViewManager___c__DisplayClass161_0_o *v2; // x19
  struct QuestBoardListViewManager_o *_4__this; // x8
  struct QuestBoardListViewManager_o *v4; // x8
  ExUITexture_o *mFolderBg; // x20
  Il2CppObject *v6; // x0
  struct QuestBoardListViewManager_o *v7; // x8
  ExUITexture_o *v8; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  System_String_o *v11; // x21
  int32_t mRequestedBGid; // [xsp+Ch] [xbp-24h] BYREF

  v2 = this;
  if ( (byte_596D2D3 & 1) == 0 )
  {
    sub_2213A60(&FSUtility_TypeInfo);
    this = (QuestBoardListViewManager___c__DisplayClass161_0_o *)sub_2213A60(&StringLiteral_3154/*"Back/back{0}"*/);
    byte_596D2D3 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_20;
  this = (QuestBoardListViewManager___c__DisplayClass161_0_o *)_4__this->fields.mFolderBg;
  if ( _4__this->fields.mRequestedBGid < 1 )
  {
    if ( this )
    {
      this = (QuestBoardListViewManager___c__DisplayClass161_0_o *)UnityEngine_Component__get_gameObject(
                                                                     (UnityEngine_Component_o *)this,
                                                                     0);
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
        ActionExtensions__Call(v2->fields.callback, 0);
        goto LABEL_16;
      }
    }
LABEL_20:
    sub_2213CDC(this, method);
  }
  if ( !this )
    goto LABEL_20;
  this = (QuestBoardListViewManager___c__DisplayClass161_0_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)this,
                                                                 0);
  if ( !this )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  v4 = v2->fields.__4__this;
  if ( !v4 )
    goto LABEL_20;
  mFolderBg = v4->fields.mFolderBg;
  mRequestedBGid = v4->fields.mRequestedBGid;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &mRequestedBGid);
  this = (QuestBoardListViewManager___c__DisplayClass161_0_o *)System_String__Format(
                                                                 (System_String_o *)StringLiteral_3154/*"Back/back{0}"*/,
                                                                 v6,
                                                                 0);
  if ( !mFolderBg )
    goto LABEL_20;
  this = (QuestBoardListViewManager___c__DisplayClass161_0_o *)ExUITexture__SetAssetImage(
                                                                 mFolderBg,
                                                                 (System_String_o *)this,
                                                                 v2->fields.callback,
                                                                 0);
  v7 = v2->fields.__4__this;
  if ( !v7 )
    goto LABEL_20;
  v8 = v7->fields.mFolderBg;
  v11 = System_Int32__ToString((int)v7 + 576, 0);
  if ( !*(&FSUtility_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, v9, v10);
  FSUtility__SetUpBackTextureSize(v8, v11, 0);
LABEL_16:
  this = (QuestBoardListViewManager___c__DisplayClass161_0_o *)v2->fields.__4__this;
  if ( !this )
    goto LABEL_20;
  if ( *((_BYTE *)this + 580) )
    QuestBoardListViewManager__RemoveTempBG((QuestBoardListViewManager_o *)this, method);
}


void QuestBoardListViewManager___c__DisplayClass164_0___ctor(
        QuestBoardListViewManager___c__DisplayClass164_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestBoardListViewManager___c__DisplayClass164_0___FolderBgObjectSetup_b__0(
        QuestBoardListViewManager___c__DisplayClass164_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  QuestBoardListViewManager___c__DisplayClass164_0_o *v4; // x19
  struct QuestBoardListViewManager_o *_4__this; // x8
  UnityEngine_Object_o *mFolderBgObject; // x21
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  struct QuestBoardListViewManager_o *v12; // x8
  __int64 v13; // x1
  __int64 v14; // x2
  Il2CppObject *Object_object__58532980; // x20
  struct QuestBoardListViewManager_o *v16; // x21
  __int64 v17; // x1
  __int64 v18; // x2
  UnityEngine_Transform_o *transform; // x22
  Il2CppObject *v20; // x0
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  struct QuestBoardListViewManager_o *v27; // x8
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  struct System_Action_o *callback; // x1
  struct QuestBoardListViewManager_o *v35; // x8

  v4 = this;
  if ( (byte_596D2D4 & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_GameObject____91708320);
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_GardenPartitionsManager___);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject____91801432);
    this = (QuestBoardListViewManager___c__DisplayClass164_0_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596D2D4 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_29;
  if ( v4->fields.targetBgObjectId != _4__this->fields.currentObjectId )
    goto LABEL_32;
  mFolderBgObject = (UnityEngine_Object_o *)_4__this->fields.mFolderBgObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, assetData, method);
  this = (QuestBoardListViewManager___c__DisplayClass164_0_o *)UnityEngine_Object__op_Equality(mFolderBgObject, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
LABEL_32:
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, assetData, method);
    AssetManager__releaseAsset_47496972(assetData, 0);
    goto LABEL_11;
  }
  v12 = v4->fields.__4__this;
  if ( !v12
    || (v12->fields.bgObjectAssetData = assetData,
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v12->fields.bgObjectAssetData,
          (int32_t)assetData,
          (System_String_o *)method,
          v7,
          v8,
          v9,
          v10,
          v11),
        this = (QuestBoardListViewManager___c__DisplayClass164_0_o *)System_Int32__ToString((int)v4 + 16, 0),
        !assetData) )
  {
LABEL_29:
    sub_2213CDC(this, assetData);
  }
  Object_object__58532980 = AssetData__GetObject_object__58532980(
                              assetData,
                              (System_String_o *)this,
                              (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13, v14);
  this = (QuestBoardListViewManager___c__DisplayClass164_0_o *)UnityEngine_Object__op_Equality(
                                                                 (UnityEngine_Object_o *)Object_object__58532980,
                                                                 0,
                                                                 0);
  v16 = v4->fields.__4__this;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( v16 )
    {
      QuestBoardListViewManager__ResetBgObject(v4->fields.__4__this, (const MethodInfo *)assetData);
LABEL_11:
      ActionExtensions__Call(v4->fields.callback, 0);
      return;
    }
    goto LABEL_29;
  }
  if ( !v16 )
    goto LABEL_29;
  this = (QuestBoardListViewManager___c__DisplayClass164_0_o *)v16->fields.mFolderBgObject;
  if ( !this )
    goto LABEL_29;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17, v18);
  v20 = UnityEngine_Object__Instantiate_object__59717116(
          Object_object__58532980,
          transform,
          (const MethodInfo_38F35FC *)Method_UnityEngine_Object_Instantiate_GameObject____91801432);
  v16->fields.bgObject = (struct UnityEngine_GameObject_o *)v20;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v16->fields.bgObject, (int32_t)v20, v21, v22, v23, v24, v25, v26);
  v27 = v4->fields.__4__this;
  if ( !v27 )
    goto LABEL_29;
  this = (QuestBoardListViewManager___c__DisplayClass164_0_o *)v27->fields.bgObject;
  if ( !this )
    goto LABEL_29;
  this = (QuestBoardListViewManager___c__DisplayClass164_0_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                 (UnityEngine_GameObject_o *)this,
                                                                 (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_GardenPartitionsManager___);
  if ( !this )
    goto LABEL_29;
  callback = v4->fields.callback;
  *((_QWORD *)this + 21) = callback;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)this + 1, (int32_t)callback, v28, v29, v30, v31, v32, v33);
  v35 = v4->fields.__4__this;
  if ( !v35 )
    goto LABEL_29;
  this = (QuestBoardListViewManager___c__DisplayClass164_0_o *)v35->fields.mFolderBgObject;
  if ( !this )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
}


void QuestBoardListViewManager___c__DisplayClass170_0___ctor(
        QuestBoardListViewManager___c__DisplayClass170_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestBoardListViewManager___c__DisplayClass170_0___CoroutineLoadAsset_b__0(
        QuestBoardListViewManager___c__DisplayClass170_0_o *this,
        const MethodInfo *method)
{
  return this->fields.flag;
}


void QuestBoardListViewManager___c__DisplayClass170_0___CoroutineLoadAsset_b__1(
        QuestBoardListViewManager___c__DisplayClass170_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( !this->fields.__4__this )
    sub_2213CDC(this, data);
  QuestBoardListViewManager__OnCompleteAssetData(this->fields.__4__this, data, this->fields.onCompleteLoad, v3);
}


void QuestBoardListViewManager___c__DisplayClass170_0___CoroutineLoadAsset_b__2(
        QuestBoardListViewManager___c__DisplayClass170_0_o *this,
        const MethodInfo *method)
{
  this->fields.flag = 1;
}


void QuestBoardListViewManager___c__DisplayClass174_0___ctor(
        QuestBoardListViewManager___c__DisplayClass174_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestBoardListViewManager___c__DisplayClass174_0___SetupFortificationWarningDialog_b__0(
        QuestBoardListViewManager___c__DisplayClass174_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  QuestBoardListViewManager___c__DisplayClass174_0_o *v4; // x19
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  struct QuestBoardListViewManager_o *_4__this; // x8
  Il2CppObject *v12; // x21
  struct QuestBoardListViewManager_o *v13; // x20
  __int64 v14; // x1
  __int64 v15; // x2
  UnityEngine_Transform_o *transform; // x22
  Il2CppObject *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  struct QuestBoardListViewManager_o *v24; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct QuestBoardListViewManager_o *v26; // x8
  UnityEngine_GameObject_o *v27; // x0
  struct QuestBoardListViewManager_o *v28; // x8

  v4 = this;
  if ( (byte_596D2D5 & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_GameObject____91708320);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_FortificationWarningDialogComponent___);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject____91801432);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    this = (QuestBoardListViewManager___c__DisplayClass174_0_o *)sub_2213A60(&StringLiteral_7127/*"FortificationWarningDialog"*/);
    byte_596D2D5 = 1;
  }
  if ( !assetData )
    goto LABEL_17;
  this = (QuestBoardListViewManager___c__DisplayClass174_0_o *)AssetData__GetObject_object__58532980(
                                                                 assetData,
                                                                 (System_String_o *)StringLiteral_7127/*"FortificationWarningDialog"*/,
                                                                 (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_17;
  v12 = (Il2CppObject *)this;
  _4__this->fields.fortificationAssetData = assetData;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&_4__this->fields.fortificationAssetData,
    (int32_t)assetData,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  v13 = v4->fields.__4__this;
  if ( !v13 )
    goto LABEL_17;
  this = (QuestBoardListViewManager___c__DisplayClass174_0_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)v4->fields.__4__this,
                                                                 0);
  if ( !this )
    goto LABEL_17;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14, v15);
  v17 = UnityEngine_Object__Instantiate_object__59717116(
          v12,
          transform,
          (const MethodInfo_38F35FC *)Method_UnityEngine_Object_Instantiate_GameObject____91801432);
  v13->fields.fortificationWarningDialog = (struct UnityEngine_GameObject_o *)v17;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v13->fields.fortificationWarningDialog,
    (int32_t)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = v4->fields.__4__this;
  if ( !v24 )
    goto LABEL_17;
  this = (QuestBoardListViewManager___c__DisplayClass174_0_o *)v24->fields.fortificationWarningDialog;
  if ( !this )
    goto LABEL_17;
  gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)this, 0);
  GameObjectExtensions__ResetPosition(gameObject, 0);
  v26 = v4->fields.__4__this;
  if ( !v26
    || (this = (QuestBoardListViewManager___c__DisplayClass174_0_o *)v26->fields.fortificationWarningDialog) == 0
    || (v27 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)this, 0),
        GameObjectExtensions__ResetLocalScale(v27, 0),
        (v28 = v4->fields.__4__this) == 0)
    || (this = (QuestBoardListViewManager___c__DisplayClass174_0_o *)v28->fields.fortificationWarningDialog) == 0
    || (this = (QuestBoardListViewManager___c__DisplayClass174_0_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                       (UnityEngine_GameObject_o *)this,
                                                                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_FortificationWarningDialogComponent___)) == 0 )
  {
LABEL_17:
    sub_2213CDC(this, assetData);
  }
  FortificationWarningDialogComponent__Init((FortificationWarningDialogComponent_o *)this, 0);
  ActionExtensions__Call(v4->fields.func, 0);
}


void QuestBoardListViewManager___c__DisplayClass177_0___ctor(
        QuestBoardListViewManager___c__DisplayClass177_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestBoardListViewManager___c__DisplayClass177_0___SetVisibleAll_b__0(
        QuestBoardListViewManager___c__DisplayClass177_0_o *this,
        QuestBoardListViewObject_o *obj,
        const MethodInfo *method)
{
  if ( !obj )
    sub_2213CDC(this, 0);
  ListViewObject__SetVisible((ListViewObject_o *)obj, this->fields.isVisible, 0);
}


void QuestBoardListViewManager___c__DisplayClass195_0___ctor(
        QuestBoardListViewManager___c__DisplayClass195_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestBoardListViewManager___c__DisplayClass195_0___PlayBoardEffect_b__0(
        QuestBoardListViewManager___c__DisplayClass195_0_o *this,
        const MethodInfo *method)
{
  System_Action_o *playingCallback1; // x0

  playingCallback1 = this->fields.playingCallback1;
  if ( playingCallback1 )
    ActionExtensions__Call(playingCallback1, 0);
}


void QuestBoardListViewManager___c__DisplayClass195_0___PlayBoardEffect_b__1(
        QuestBoardListViewManager___c__DisplayClass195_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *effectComponent; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *gameObject; // x21
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  System_Action_o *endAct; // x0

  if ( (byte_596D2D6 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596D2D6 = 1;
  }
  effectComponent = (UnityEngine_Component_o *)this->fields.effectComponent;
  if ( !effectComponent )
    sub_2213CDC(0, method);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(effectComponent, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4, v5);
  UnityEngine_Object__Destroy_83459800(gameObject, 0);
  this->fields.effectComponent = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.effectComponent, 0, v7, v8, v9, v10, v11, v12);
  endAct = this->fields.endAct;
  if ( endAct )
    ActionExtensions__Call(endAct, 0);
}


void QuestBoardListViewManager___c__DisplayClass198_0___ctor(
        QuestBoardListViewManager___c__DisplayClass198_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestBoardListViewManager___c__DisplayClass198_0___MoveBoard_b__0(
        QuestBoardListViewManager___c__DisplayClass198_0_o *this,
        const MethodInfo *method)
{
  struct MoveObject_o *mo; // x8

  mo = this->fields.mo;
  if ( !mo )
    sub_2213CDC(this, method);
  GameObjectExtensions__SetLocalPositionY(this->fields.tgtObj, mo->fields.mNow.fields.y, 0);
}


void QuestBoardListViewManager___c__DisplayClass198_0___MoveBoard_b__1(
        QuestBoardListViewManager___c__DisplayClass198_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  struct QuestBoardListViewManager_o *_4__this; // x8

  GameObjectExtensions__SetLocalPositionY(this->fields.tgtObj, this->fields.tgtY, 0);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_2213CDC(v3, v4);
  --_4__this->fields.waitCount;
}