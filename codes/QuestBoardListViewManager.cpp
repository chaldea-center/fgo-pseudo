void QuestBoardListViewManager___cctor(const MethodInfo *method)
{
  struct QuestBoardListViewManager_StaticFields *static_fields; // x8

  if ( (byte_4C346B2 & 1) == 0 )
  {
    sub_1C32C20(&QuestBoardListViewManager_TypeInfo);
    byte_4C346B2 = 1;
  }
  static_fields = QuestBoardListViewManager_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->INTO_TIME = xmmword_C0DD50;
  *(_QWORD *)&static_fields->ALPHA_ANIM_SPD_RATE = 0x404000003F000000LL;
  *(_QWORD *)&static_fields->DEFAULT_SCROLL_VIEW_DEPTH = 0x700000016LL;
  static_fields->ALPHA_ANIM_COUNT_RESET_VAL = 232792560;
}


void QuestBoardListViewManager___ctor(QuestBoardListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C346B1 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_ListViewItem__TypeInfo);
    byte_4C346B1 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  this->fields.topItemList = (struct System_Collections_Generic_List_ListViewItem__o *)v3;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.topItemList, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  this->fields.bottomItemList = (struct System_Collections_Generic_List_ListViewItem__o *)v6;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.bottomItemList, (int32_t)v6, v7, v8);
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void QuestBoardListViewManager__Awake(QuestBoardListViewManager_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  UnityEngine_GameObject_o *v7; // x0
  struct UnityEngine_GameObject_o *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4C34672 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    byte_4C34672 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_11;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                             gameObject,
                                             (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !gameObject )
    goto LABEL_11;
  this->fields.mBaseClipRange = (float)SHIDWORD(gameObject[7].klass);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_11;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  this->fields.mBoxCollider = (struct UnityEngine_BoxCollider_o *)Component_object;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.mBoxCollider, (int32_t)Component_object, v5, v6);
  gameObject = (UnityEngine_GameObject_o *)this->fields.mBoxCollider;
  if ( !gameObject )
    goto LABEL_11;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.mNoneLabel;
  if ( !gameObject
    || (v7 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0),
        (gameObject = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(v7, 0)) == 0)
    || (v8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0),
        this->fields.mNoneLabelParent = v8,
        sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.mNoneLabelParent, (int32_t)v8, v9, v10),
        (gameObject = this->fields.mNoneLabelParent) == 0) )
  {
LABEL_11:
    sub_1C32E7C(gameObject);
  }
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
}


void QuestBoardListViewManager__BGChangeEffect(
        QuestBoardListViewManager_o *this,
        int32_t bgID,
        int32_t effectType,
        float time,
        const MethodInfo *method)
{
  UnityEngine_Component_o *mFolderBg; // x0
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  __int64 v14; // x5
  __int64 v15; // x6
  __int64 v16; // x7
  Il2CppObject *gameObject; // x21
  UnityEngine_GameObject_o *v18; // x21
  UnityEngine_Component_o *parent; // x0
  Il2CppObject *Component_object; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct ExUITexture_o *v23; // x21
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  __int64 v27; // x5
  __int64 v28; // x6
  __int64 v29; // x7
  Il2CppObject *v30; // x0
  System_String_o *v31; // x20
  System_Action_o *v32; // x0
  intptr_t *v33; // x8
  float v34; // s0
  Il2CppObject *v35; // x0
  System_Action_o *v36; // x22
  ExUITexture_o *v37; // x0
  System_String_o *v38; // x1
  System_Action_o *v39; // x2
  UnityEngine_Component_o *v40; // x19
  Il2CppObject *v41; // x0
  int32_t v42; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t v43; // [xsp+8h] [xbp-38h] BYREF
  int32_t v44; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C34693 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_ExUITexture___);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_QuestBoardListViewManager__BGChangeEffect_b__154_0__);
    sub_1C32C20(&Method_QuestBoardListViewManager__BGChangeEffect_b__154_1__);
    sub_1C32C20(&StringLiteral_3032/*"Back/back{0}"*/);
    byte_4C34693 = 1;
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
        QuestBoardListViewManager__bgAlphaFade(this, 4, time, v11);
        return;
      }
      QuestBoardListViewManager__RemoveTempBG(this, v10);
      mFolderBg = (UnityEngine_Component_o *)this->fields.mFolderBg;
      if ( mFolderBg )
      {
        gameObject = (Il2CppObject *)UnityEngine_Component__get_gameObject(mFolderBg, 0);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        mFolderBg = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_object_(
                                                 gameObject,
                                                 (const MethodInfo_3169758 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( this->fields.mFolderBg )
        {
          v18 = (UnityEngine_GameObject_o *)mFolderBg;
          mFolderBg = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)this->fields.mFolderBg,
                                                   0);
          if ( mFolderBg )
          {
            parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(
                                                  (UnityEngine_Transform_o *)mFolderBg,
                                                  0);
            GameObjectExtensions__SafeSetParent(v18, parent, 0);
            if ( v18 )
            {
              Component_object = UnityEngine_GameObject__GetComponent_object_(
                                   v18,
                                   (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_ExUITexture___);
              this->fields.mFolderBgTemp = (struct ExUITexture_o *)Component_object;
              sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.mFolderBgTemp, (int32_t)Component_object, v21, v22);
              mFolderBg = (UnityEngine_Component_o *)this->fields.mFolderBgTemp;
              if ( mFolderBg )
              {
                UIWidget__set_depth((UIWidget_o *)mFolderBg, LODWORD(mFolderBg[7].monitor) + 1, 0);
                this->fields.mCrossFadeTime = time;
                v23 = this->fields.mFolderBg;
                v42 = bgID;
                v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v42, v24, v25, v26, v27, v28, v29);
                v31 = System_String__Format((System_String_o *)StringLiteral_3032/*"Back/back{0}"*/, v30, 0);
                v32 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
                v33 = &Method_QuestBoardListViewManager__BGChangeEffect_b__154_1__;
                goto LABEL_20;
              }
            }
          }
        }
      }
    }
    else
    {
      v40 = (UnityEngine_Component_o *)this->fields.mFolderBg;
      if ( bgID )
      {
        v43 = bgID;
        v41 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v43, v11, v12, v13, v14, v15, v16);
        mFolderBg = (UnityEngine_Component_o *)System_String__Format((System_String_o *)StringLiteral_3032/*"Back/back{0}"*/, v41, 0);
        if ( v40 )
        {
          v38 = (System_String_o *)mFolderBg;
          v37 = (ExUITexture_o *)v40;
          v39 = 0;
          goto LABEL_22;
        }
      }
      else if ( v40 )
      {
        mFolderBg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(v40, 0);
        if ( mFolderBg )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mFolderBg, 0, 0);
          return;
        }
      }
    }
LABEL_31:
    sub_1C32E7C(mFolderBg);
  }
  if ( !bgID )
    return;
  v34 = 0.0;
  if ( effectType )
    v34 = time;
  this->fields.mCrossFadeTime = v34;
  v23 = this->fields.mFolderBg;
  v44 = bgID;
  v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v44, v11, v12, v13, v14, v15, v16);
  v31 = System_String__Format((System_String_o *)StringLiteral_3032/*"Back/back{0}"*/, v35, 0);
  v32 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  v33 = &Method_QuestBoardListViewManager__BGChangeEffect_b__154_0__;
LABEL_20:
  v36 = v32;
  System_Action___ctor(v32, (Il2CppObject *)this, *v33, 0);
  if ( !v23 )
    goto LABEL_31;
  v37 = v23;
  v38 = v31;
  v39 = v36;
LABEL_22:
  ExUITexture__SetAssetImage(v37, v38, v39, 0);
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
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C34696 & 1) == 0 )
  {
    sub_1C32C20(&QuestBoardListViewManager__CoroutineLoadAsset_d__158_TypeInfo);
    byte_4C34696 = 1;
  }
  v5 = sub_1C32E6C(QuestBoardListViewManager__CoroutineLoadAsset_d__158_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 40) = onCompleteLoad;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 40), (int32_t)onCompleteLoad, v8, v9);
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
  void *gameObject; // x0
  Il2CppObject *Component_object; // x24
  Il2CppObject *v17; // x0
  QuestBoardListViewItemDraw_c *v18; // x8
  UnityEngine_BoxCollider_o *v19; // x25
  int32_t SCRL_OBJ_DUMMY_NUM; // w21
  struct ListViewItemSeed_o *seed; // x8
  float v22; // s10
  float mBaseClipRange; // s11
  UIPanel_o *v24; // x26
  float v25; // s9
  int32_t v26; // w1
  __int64 v27; // x8
  __int64 v28; // x8
  bool activeSelf; // w0
  QuestBoardListViewManager_c *v30; // x8
  bool v31; // w24
  float *p_INTO_TIME; // x8
  __int64 v33; // x9
  float v34; // s0
  float v35; // s1
  UILabel_o *mNoneLabel; // x24
  QuestBoardListViewItemDraw_c *v37; // x0
  QuestBoardListViewItemDraw_c *v38; // x0
  int32_t v39; // w21
  int v40; // w28
  int32_t i; // w23
  __int64 v42; // x8
  void *v43; // x25
  int32_t v44; // w24
  MapControl_QuestInfo_o *v45; // x26
  __int64 v46; // x8
  int32_t v47; // w27
  QuestBoardListViewItem_o *v48; // x0
  Il2CppObject *v49; // x25
  int32_t v50; // w2
  struct UnityEngine_GameObject_o *v51; // x24
  struct UnityEngine_GameObject_o *v52; // x26
  int32_t v53; // w1
  MapControl_QuestInfo_o *v54; // x3
  UnityEngine_GameObject_o *v55; // x4
  UnityEngine_GameObject_o *v56; // x5
  int32_t v57; // w6
  int32_t v58; // w7
  __int64 v59; // x8
  __int64 v60; // x8
  __int64 v61; // x8
  int32_t v62; // w2
  const MethodInfo *v63; // x3
  __int64 v64; // x8
  _QWORD *v65; // x9
  __int64 v66; // x10
  __int64 v67; // x8
  int32_t size; // w21
  int v69; // w21
  int32_t v70; // w22
  Il2CppObject *Item; // x0
  MapControl_QuestInfo_o *v72; // x24
  QuestBoardListViewItem_o *v73; // x0
  Il2CppObject *v74; // x25
  int32_t v75; // w2
  struct UnityEngine_GameObject_o *blackMarkPrefab; // x26
  struct UnityEngine_GameObject_o *whiteMarkPrefab; // x27
  int32_t v78; // w1
  MapControl_QuestInfo_o *v79; // x3
  UnityEngine_GameObject_o *v80; // x4
  UnityEngine_GameObject_o *v81; // x5
  int32_t v82; // w2
  const MethodInfo *v83; // x3
  __int64 v84; // x8
  _QWORD *v85; // x9
  __int64 v86; // x10
  __int64 v87; // x8
  System_Collections_Generic_IEnumerable_TResult__o *v88; // x0
  QuestBoardListViewManager___c_c *v89; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v90; // x21
  System_Func_object__bool__o *_9__105_0; // x22
  Il2CppObject *v92; // x23
  struct QuestBoardListViewManager___c_StaticFields *static_fields; // x0
  int32_t v94; // w2
  const MethodInfo *v95; // x3
  Il2CppObject *v96; // x0
  const MethodInfo *v97; // x1
  int32_t klass_high; // w8
  const MethodInfo *v99; // [xsp+0h] [xbp-90h]
  bool v100; // [xsp+Ch] [xbp-84h]
  UnityEngine_Vector3_o v101; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector4_o v102; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C34675 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_Cast_QuestBoardListViewItem___);
    sub_1C32C20(&Method_System_Linq_Enumerable_FirstOrDefault_QuestBoardListViewItem___);
    sub_1C32C20(&System_Func_QuestBoardListViewItem__bool__TypeInfo);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_UIPanel___);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ScrTerminalListTop_WarSelectedQuestInfo__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_MapControl_QuestInfo__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ScrTerminalListTop_WarSelectedQuestInfo__get_Item__);
    sub_1C32C20(&Method_System_Collections_Generic_List_MapControl_QuestInfo__get_Item__);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&QuestBoardListViewItemDraw_TypeInfo);
    sub_1C32C20(&QuestBoardListViewItem_TypeInfo);
    sub_1C32C20(&QuestBoardListViewManager_TypeInfo);
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    sub_1C32C20(&TerminalSceneComponent_TypeInfo);
    sub_1C32C20(&Method_QuestBoardListViewManager___c__CreateList_b__105_0__);
    sub_1C32C20(&QuestBoardListViewManager___c_TypeInfo);
    sub_1C32C20(&StringLiteral_10899/*"QUEST_NONE"*/);
    byte_4C34675 = 1;
  }
  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  this->fields._IndexFirstDisplayableRoadmapButton_k__BackingField = -1;
  if ( info_kind == 4 || info_kind == 1 )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    TerminalPramsManager__LoadQuestReleasedFocusState(0);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_121;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)gameObject,
                       (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_121;
  v17 = UnityEngine_GameObject__GetComponent_object_(
          (UnityEngine_GameObject_o *)gameObject,
          (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  v18 = QuestBoardListViewItemDraw_TypeInfo;
  v19 = (UnityEngine_BoxCollider_o *)v17;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v18 = QuestBoardListViewItemDraw_TypeInfo;
  }
  gameObject = this->fields.scrollView;
  if ( !gameObject )
    goto LABEL_121;
  SCRL_OBJ_DUMMY_NUM = v18->static_fields->SCRL_OBJ_DUMMY_NUM;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_121;
  gameObject = UnityEngine_GameObject__GetComponent_object_(
                 (UnityEngine_GameObject_o *)gameObject,
                 (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
  if ( !gameObject )
    goto LABEL_121;
  seed = this->fields.seed;
  if ( !seed )
    goto LABEL_121;
  v22 = *((float *)gameObject + 74);
  mBaseClipRange = this->fields.mBaseClipRange;
  v24 = (UIPanel_o *)gameObject;
  seed->fields.arrangementPich.fields.y = -pos_itvl_y;
  if ( !Component_object )
    goto LABEL_121;
  v25 = (float)(SCRL_OBJ_DUMMY_NUM + 1) * pos_itvl_y;
  v26 = v25 == INFINITY ? 0x80000000 : (int)v25;
  UIWidget__set_height((UIWidget_o *)Component_object, v26, 0);
  if ( !v19 )
    goto LABEL_121;
  LODWORD(v101.fields.x) = (unsigned int)UnityEngine_BoxCollider__get_size(v19, 0);
  v101.fields.z = 0.0;
  v101.fields.y = v25;
  UnityEngine_BoxCollider__set_size(v19, v101, 0);
  v102.fields.y = (float)(mBaseClipRange - v25) * 0.5;
  v102.fields.z = clip_w;
  v102.fields.w = v25;
  this->fields.clipRange.fields.y = v25 + (float)QuestBoardListViewItemDraw_TypeInfo->static_fields->CLIP_RANGE_MARGIN;
  v102.fields.x = v22;
  UIPanel__set_baseClipRegion(v24, v102, 0);
  this->fields.mResetConsumeColor = 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  this->fields.mListCreatedTime = NetworkManager__getTime(0);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4C319B6 )
  {
    sub_1C32C20(&TerminalSceneComponent_TypeInfo);
    byte_4C319B6 = 1;
  }
  gameObject = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    gameObject = TerminalSceneComponent_TypeInfo;
  }
  v27 = **((_QWORD **)gameObject + 23);
  if ( !v27 )
    goto LABEL_121;
  v28 = *(_QWORD *)(v27 + 264);
  if ( !v28 )
    goto LABEL_121;
  gameObject = *(void **)(v28 + 104);
  if ( !gameObject )
    goto LABEL_121;
  activeSelf = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)gameObject, 0);
  v30 = QuestBoardListViewManager_TypeInfo;
  v31 = activeSelf;
  if ( !QuestBoardListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewManager_TypeInfo);
    v30 = QuestBoardListViewManager_TypeInfo;
  }
  p_INTO_TIME = &v30->static_fields->INTO_TIME;
  v33 = 1;
  if ( v31 )
    v33 = 3;
  v34 = p_INTO_TIME[v33];
  if ( v31 )
    p_INTO_TIME += 2;
  v35 = *p_INTO_TIME;
  this->fields.exitTime = v34;
  this->fields.mAlphaAnimCnt = 0;
  this->fields.infoTime = v35;
  this->fields._SyncReferenceTime_k__BackingField = UnityEngine_Time__get_time(0);
  if ( !qinf_list )
    goto LABEL_121;
  gameObject = this->fields.mNoneLabelParent;
  if ( !gameObject )
    goto LABEL_121;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, qinf_list->fields._size < 1, 0);
  mNoneLabel = this->fields.mNoneLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_10899/*"QUEST_NONE"*/, 0);
  if ( !mNoneLabel )
    goto LABEL_121;
  UILabel__set_text(mNoneLabel, (System_String_o *)gameObject, 0);
  v37 = QuestBoardListViewItemDraw_TypeInfo;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v37 = QuestBoardListViewItemDraw_TypeInfo;
  }
  if ( info_kind != 6 )
  {
    size = qinf_list->fields._size;
    v100 = isAllDisp;
    if ( !v37->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v37);
      v37 = QuestBoardListViewItemDraw_TypeInfo;
    }
    v69 = v37->static_fields->SCRL_OBJ_DUMMY_NUM + size;
    if ( v69 < 1 )
      goto LABEL_104;
    v70 = 0;
    while ( 1 )
    {
      if ( v70 >= qinf_list->fields._size )
      {
        v72 = 0;
LABEL_91:
        blackMarkPrefab = this->fields.blackMarkPrefab;
        whiteMarkPrefab = this->fields.whiteMarkPrefab;
        v73 = (QuestBoardListViewItem_o *)sub_1C32E6C(QuestBoardListViewItem_TypeInfo);
        v74 = (Il2CppObject *)v73;
        v78 = v70;
        v75 = info_kind;
        v79 = v72;
        v80 = blackMarkPrefab;
        v81 = whiteMarkPrefab;
        goto LABEL_98;
      }
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)qinf_list,
               v70,
               (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_MapControl_QuestInfo__get_Item__);
      v72 = (MapControl_QuestInfo_o *)Item;
      if ( info_kind == 2 && Item )
      {
        gameObject = Item[6].monitor;
        if ( !gameObject )
          goto LABEL_121;
        gameObject = MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_121;
        if ( WarEntity__HasFlag((WarEntity_o *)gameObject, 16, 0) )
        {
          v73 = (QuestBoardListViewItem_o *)sub_1C32E6C(QuestBoardListViewItem_TypeInfo);
          v74 = (Il2CppObject *)v73;
          v75 = 4;
          goto LABEL_97;
        }
      }
      else if ( !Item )
      {
        goto LABEL_91;
      }
      if ( !MapControl_QuestInfo__GetMine(v72, 0) )
        goto LABEL_91;
      gameObject = MapControl_QuestInfo__GetMine(v72, 0);
      if ( !gameObject )
        goto LABEL_121;
      if ( QuestEntity__GetTypeFlag((QuestEntity_o *)gameObject, 0) != 128 )
        goto LABEL_91;
      v73 = (QuestBoardListViewItem_o *)sub_1C32E6C(QuestBoardListViewItem_TypeInfo);
      v74 = (Il2CppObject *)v73;
      v75 = 5;
LABEL_97:
      v78 = v70;
      v79 = v72;
      v80 = 0;
      v81 = 0;
LABEL_98:
      QuestBoardListViewItem___ctor_36384480(v73, v78, v75, v79, v80, v81, 0, 0, v99);
      gameObject = this->fields.itemList;
      if ( !gameObject )
        goto LABEL_121;
      v84 = *((_QWORD *)gameObject + 2);
      v85 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*((_DWORD *)gameObject + 7);
      if ( !v84 )
        goto LABEL_121;
      v86 = *((int *)gameObject + 6);
      if ( (unsigned int)v86 >= *(_DWORD *)(v84 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)gameObject,
          v74,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v85[4] + 192LL) + 112LL));
      }
      else
      {
        v87 = v84 + 8 * v86;
        *((_DWORD *)gameObject + 6) = v86 + 1;
        *(_QWORD *)(v87 + 32) = v74;
        sub_1C32BC4((CGThumbnailListItem_o *)(v87 + 32), (int32_t)v74, v82, v83);
      }
      if ( v69 == ++v70 )
        goto LABEL_104;
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
LABEL_121:
    sub_1C32E7C(gameObject);
  }
  if ( !gameObject )
    goto LABEL_121;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, warSelectedQuestList->fields._size < 1, 0);
  v38 = QuestBoardListViewItemDraw_TypeInfo;
  v39 = warSelectedQuestList->fields._size;
  v100 = isAllDisp;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v38 = QuestBoardListViewItemDraw_TypeInfo;
  }
  v40 = v38->static_fields->SCRL_OBJ_DUMMY_NUM + v39;
  if ( v40 >= 1 )
  {
    for ( i = 0; i != v40; ++i )
    {
      if ( i < warSelectedQuestList->fields._size
        && (gameObject = System_Collections_Generic_List_object___get_Item(
                           (System_Collections_Generic_List_object__o *)warSelectedQuestList,
                           i,
                           (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_ScrTerminalListTop_WarSelectedQuestInfo__get_Item__)) != 0 )
      {
        v42 = *((_QWORD *)gameObject + 2);
        v43 = gameObject;
        if ( !v42 )
          goto LABEL_121;
        gameObject = (void *)*((_QWORD *)gameObject + 3);
        if ( !gameObject )
          goto LABEL_121;
        v44 = *(_DWORD *)(v42 + 16);
        gameObject = MapControl_QuestInfo__GetMine((MapControl_QuestInfo_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_121;
        gameObject = (void *)QuestEntity__HasFlag((QuestEntity_o *)gameObject, 0x800000000000000LL, 0);
        v45 = (MapControl_QuestInfo_o *)*((_QWORD *)v43 + 3);
        if ( ((unsigned __int8)gameObject & 1) != 0 )
        {
          v46 = *((_QWORD *)v43 + 2);
          if ( !v46 )
            goto LABEL_121;
          v47 = *(_DWORD *)(v46 + 24);
          v48 = (QuestBoardListViewItem_o *)sub_1C32E6C(QuestBoardListViewItem_TypeInfo);
          v49 = (Il2CppObject *)v48;
          v50 = 6;
        }
        else
        {
          if ( !v45 )
            goto LABEL_121;
          gameObject = (void *)MapControl_QuestInfo__GetQuestType(*((MapControl_QuestInfo_o **)v43 + 3), 0);
          if ( (_DWORD)gameObject != 3 )
            goto LABEL_67;
          v59 = *((_QWORD *)v43 + 3);
          if ( !v59 )
            goto LABEL_121;
          gameObject = *(void **)(v59 + 104);
          if ( !gameObject )
            goto LABEL_121;
          gameObject = MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_121;
          gameObject = (void *)WarEntity__HasFlag((WarEntity_o *)gameObject, 16, 0);
          if ( ((unsigned __int8)gameObject & 1) == 0 )
          {
            v61 = *((_QWORD *)v43 + 2);
            if ( !v61 )
              goto LABEL_121;
            v45 = (MapControl_QuestInfo_o *)*((_QWORD *)v43 + 3);
            v47 = *(_DWORD *)(v61 + 24);
            v48 = (QuestBoardListViewItem_o *)sub_1C32E6C(QuestBoardListViewItem_TypeInfo);
            v49 = (Il2CppObject *)v48;
            v50 = 2;
          }
          else
          {
LABEL_67:
            v60 = *((_QWORD *)v43 + 2);
            if ( !v60 )
              goto LABEL_121;
            v45 = (MapControl_QuestInfo_o *)*((_QWORD *)v43 + 3);
            v47 = *(_DWORD *)(v60 + 24);
            v48 = (QuestBoardListViewItem_o *)sub_1C32E6C(QuestBoardListViewItem_TypeInfo);
            v49 = (Il2CppObject *)v48;
            v50 = 4;
          }
        }
        v53 = i;
        v54 = v45;
        v55 = 0;
        v56 = 0;
        v57 = v47;
        v58 = v44;
      }
      else
      {
        v51 = this->fields.blackMarkPrefab;
        v52 = this->fields.whiteMarkPrefab;
        v48 = (QuestBoardListViewItem_o *)sub_1C32E6C(QuestBoardListViewItem_TypeInfo);
        v49 = (Il2CppObject *)v48;
        v50 = 6;
        v53 = i;
        v54 = 0;
        v55 = v51;
        v56 = v52;
        v57 = 0;
        v58 = 0;
      }
      QuestBoardListViewItem___ctor_36384480(v48, v53, v50, v54, v55, v56, v57, v58, v99);
      gameObject = this->fields.itemList;
      if ( !gameObject )
        goto LABEL_121;
      v64 = *((_QWORD *)gameObject + 2);
      v65 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*((_DWORD *)gameObject + 7);
      if ( !v64 )
        goto LABEL_121;
      v66 = *((int *)gameObject + 6);
      if ( (unsigned int)v66 >= *(_DWORD *)(v64 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)gameObject,
          v49,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v65[4] + 192LL) + 112LL));
      }
      else
      {
        v67 = v64 + 8 * v66;
        *((_DWORD *)gameObject + 6) = v66 + 1;
        *(_QWORD *)(v67 + 32) = v49;
        sub_1C32BC4((CGThumbnailListItem_o *)(v67 + 32), (int32_t)v49, v62, v63);
      }
    }
  }
LABEL_104:
  gameObject = this->fields.mNoneLabel;
  if ( !gameObject )
    goto LABEL_121;
  if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)gameObject, 0) )
    this->fields._IsShowingInfo_k__BackingField = 0;
  ListViewManager__SortItem((ListViewManager_o *)this, -1, v100, -1, 0);
  v88 = System_Linq_Enumerable__Cast_object_(
          (System_Collections_IEnumerable_o *)this->fields.itemList,
          (const MethodInfo_30EBAC8 *)Method_System_Linq_Enumerable_Cast_QuestBoardListViewItem___);
  v89 = QuestBoardListViewManager___c_TypeInfo;
  v90 = (System_Collections_Generic_IEnumerable_TSource__o *)v88;
  if ( !QuestBoardListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewManager___c_TypeInfo);
    v89 = QuestBoardListViewManager___c_TypeInfo;
  }
  _9__105_0 = (System_Func_object__bool__o *)v89->static_fields->__9__105_0;
  if ( !_9__105_0 )
  {
    if ( !v89->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v89);
      v89 = QuestBoardListViewManager___c_TypeInfo;
    }
    v92 = (Il2CppObject *)v89->static_fields->__9;
    _9__105_0 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_QuestBoardListViewItem__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__105_0, v92, Method_QuestBoardListViewManager___c__CreateList_b__105_0__, 0);
    static_fields = QuestBoardListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__105_0 = (struct System_Func_QuestBoardListViewItem__bool__o *)_9__105_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__105_0, (int32_t)_9__105_0, v94, v95);
  }
  v96 = System_Linq_Enumerable__FirstOrDefault_object__51408536(
          v90,
          (System_Func_TSource__bool__o *)_9__105_0,
          (const MethodInfo_3106E98 *)Method_System_Linq_Enumerable_FirstOrDefault_QuestBoardListViewItem___);
  if ( v96 )
  {
    klass_high = HIDWORD(v96[1].klass);
    this->fields._IndexFirstDisplayableRoadmapButton_k__BackingField = klass_high;
    if ( !info_kind && klass_high < 0 )
      goto LABEL_116;
  }
  else
  {
    this->fields._IndexFirstDisplayableRoadmapButton_k__BackingField = -1;
    if ( !info_kind )
LABEL_116:
      QuestBoardListViewManager__DisplayRoadmapButtonToTopWarBoard(this, v97);
  }
}


// local variable allocation has failed, the output may be wrong!
void QuestBoardListViewManager__DispBoardForQuestBoardEffect(
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
  QuestBoardListViewItem_o *Item; // x0
  struct MapControl_QuestInfo_o *quest_info_k__BackingField; // x8
  struct MapControl_AreaBoardInfo_o *AreaBoardInfo_k__BackingField; // x8
  unsigned int questBoardType; // w8

  if ( (byte_4C3467C & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3467C = 1;
  }
  QuestBoardObjForWarId = (UnityEngine_Object_o *)QuestBoardListViewManager__GetQuestBoardObjForWarId(
                                                    this,
                                                    warId,
                                                    *(const MethodInfo **)&warId);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Item = (QuestBoardListViewItem_o *)UnityEngine_Object__op_Equality(QuestBoardObjForWarId, 0, 0);
  if ( ((unsigned __int8)Item & 1) == 0 )
  {
    if ( !QuestBoardObjForWarId
      || (Item = QuestBoardListViewObject__GetItem((QuestBoardListViewObject_o *)QuestBoardObjForWarId, 0)) == 0
      || (quest_info_k__BackingField = Item->fields._quest_info_k__BackingField) == 0 )
    {
      sub_1C32E7C(Item);
    }
    AreaBoardInfo_k__BackingField = quest_info_k__BackingField->fields._AreaBoardInfo_k__BackingField;
    if ( AreaBoardInfo_k__BackingField )
    {
      questBoardType = AreaBoardInfo_k__BackingField->fields.questBoardType;
      if ( questBoardType <= 8 && ((1 << questBoardType) & 0x118) != 0 )
        QuestBoardListViewObject__SetupDispFolderForQuestBoardEffect(
          (QuestBoardListViewObject_o *)QuestBoardObjForWarId,
          isBoardDisp,
          isBadgeDisp,
          0);
      else
        QuestBoardListViewObject__SetupDispAreaForTerminalTopEffect(
          (QuestBoardListViewObject_o *)QuestBoardObjForWarId,
          isBoardDisp,
          isBadgeDisp,
          isBlackMarkOnly,
          isWhiteMarkOnly,
          isSpecialClosedBanner,
          0);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void QuestBoardListViewManager__DispBoardForTerminalTopEffect(
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

  if ( (byte_4C3467B & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3467B = 1;
  }
  QuestBoardObjForWarId = (UnityEngine_Object_o *)QuestBoardListViewManager__GetQuestBoardObjForWarId(
                                                    this,
                                                    warId,
                                                    *(const MethodInfo **)&warId);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v16 = UnityEngine_Object__op_Equality(QuestBoardObjForWarId, 0, 0);
  if ( !v16 )
  {
    if ( !QuestBoardObjForWarId )
      sub_1C32E7C(v16);
    QuestBoardListViewObject__SetupDispAreaForTerminalTopEffect(
      (QuestBoardListViewObject_o *)QuestBoardObjForWarId,
      isBoardDisp,
      isBadgeDisp,
      isBlackMarkOnly,
      isWhiteMarkOnly,
      isSpecialClosedBanner,
      0);
  }
}


void QuestBoardListViewManager__DisplayRoadmapButtonToTopWarBoard(
        QuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *itemList; // x20
  QuestBoardListViewManager___c_c *v4; // x0
  System_Func_object__bool__o *_9__107_0; // x21
  Il2CppObject *v6; // x22
  struct QuestBoardListViewManager___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  Il2CppObject *v10; // x0
  __int64 naturalAligment; // x9
  __int64 v12; // x9
  RoadmapButtonPrefab_o *gc_desc; // x0
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__c *v15; // x8
  QuestBoardListViewManager_o *v16; // x0
  bool v17; // w1
  bool v18; // w2
  const MethodInfo *v19; // x3

  if ( (byte_4C34676 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_FirstOrDefault_ListViewItem___);
    sub_1C32C20(&System_Func_ListViewItem__bool__TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&QuestBoardListViewItem_TypeInfo);
    sub_1C32C20(&QuestBoardListViewObject_TypeInfo);
    sub_1C32C20(&Method_QuestBoardListViewManager___c__DisplayRoadmapButtonToTopWarBoard_b__107_0__);
    sub_1C32C20(&QuestBoardListViewManager___c_TypeInfo);
    byte_4C34676 = 1;
  }
  if ( (this->fields._IndexFirstDisplayableRoadmapButton_k__BackingField & 0x80000000) == 0 )
    return;
  itemList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.itemList;
  v4 = QuestBoardListViewManager___c_TypeInfo;
  if ( !QuestBoardListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewManager___c_TypeInfo);
    v4 = QuestBoardListViewManager___c_TypeInfo;
  }
  _9__107_0 = (System_Func_object__bool__o *)v4->static_fields->__9__107_0;
  if ( !_9__107_0 )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = QuestBoardListViewManager___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v4->static_fields->__9;
    _9__107_0 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_ListViewItem__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__107_0,
      v6,
      Method_QuestBoardListViewManager___c__DisplayRoadmapButtonToTopWarBoard_b__107_0__,
      0);
    static_fields = QuestBoardListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__107_0 = (struct System_Func_ListViewItem__bool__o *)_9__107_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__107_0, (int32_t)_9__107_0, v8, v9);
  }
  v10 = System_Linq_Enumerable__FirstOrDefault_object__51408536(
          itemList,
          (System_Func_TSource__bool__o *)_9__107_0,
          (const MethodInfo_3106E98 *)Method_System_Linq_Enumerable_FirstOrDefault_ListViewItem___);
  if ( !v10 )
    return;
  naturalAligment = QuestBoardListViewItem_TypeInfo->_2.naturalAligment;
  if ( v10->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (QuestBoardListViewItem_c *)v10->klass->_2.typeHierarchy[naturalAligment - 1] != QuestBoardListViewItem_TypeInfo )
  {
    sub_1C3313C(v10);
LABEL_30:
    sub_1C3313C(itemList);
    QuestBoardListViewManager__ModifyAllRoadmapButtons(v16, v17, v18, v19);
    return;
  }
  this->fields._IndexFirstDisplayableRoadmapButton_k__BackingField = HIDWORD(v10[1].klass);
  itemList = (System_Collections_Generic_IEnumerable_TSource__o *)v10[7].klass;
  if ( itemList )
  {
    v12 = QuestBoardListViewObject_TypeInfo->_2.naturalAligment;
    if ( itemList->klass->_2.naturalAligment < (unsigned int)v12
      || (QuestBoardListViewObject_c *)itemList->klass->_2.typeHierarchy[v12 - 1] != QuestBoardListViewObject_TypeInfo )
    {
      goto LABEL_30;
    }
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gc_desc = (RoadmapButtonPrefab_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)itemList, 0, 0);
  if ( ((unsigned __int8)gc_desc & 1) == 0 )
  {
    if ( !itemList )
      goto LABEL_28;
    klass = itemList[8].klass;
    if ( !klass )
      goto LABEL_28;
    gc_desc = (RoadmapButtonPrefab_o *)klass[1]._1.gc_desc;
    if ( !gc_desc )
      goto LABEL_28;
    RoadmapButtonPrefab__Initialize(gc_desc, this->fields._RoadmapAssetData_k__BackingField, 0);
    if ( !this->fields.initMode || this->fields.mFaded )
    {
      v15 = itemList[8].klass;
      if ( v15 )
      {
        gc_desc = (RoadmapButtonPrefab_o *)v15[1]._1.gc_desc;
        if ( gc_desc )
        {
          RoadmapButtonPrefab__ModifyRoadmapButton(gc_desc, 0, 1, 0);
          return;
        }
      }
LABEL_28:
      sub_1C32E7C(gc_desc);
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
    sub_1C32E7C(0);
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
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x1
  System_Action_o *v10; // x20
  const MethodInfo *v11; // x6

  if ( (byte_4C34685 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_QuestBoardListViewManager___c__DisplayClass126_0__EndSlideOut_b__0__);
    sub_1C32C20(&QuestBoardListViewManager___c__DisplayClass126_0_TypeInfo);
    byte_4C34685 = 1;
  }
  v5 = sub_1C32E6C(QuestBoardListViewManager___c__DisplayClass126_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C32E7C(v6);
  *(_QWORD *)(v5 + 16) = end_act;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 16), (int32_t)end_act, v7, v8);
  this->fields.mIsDoing_Slide = 0;
  QuestBoardListViewManager__ResetBG(this, v9);
  v10 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(
    v10,
    (Il2CppObject *)v5,
    Method_QuestBoardListViewManager___c__DisplayClass126_0__EndSlideOut_b__0__,
    0);
  QuestBoardListViewManager__SetMode(this, 0, v10, 0, 0, 0, v11);
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
  _BOOL8 v10; // x0
  QuestBoardListViewObject_o *current; // x21
  QuestBoardListViewItem_o *Item; // x0
  QuestBoardListViewItem_o *v13; // x0
  struct MapControl_QuestInfo_o *quest_info_k__BackingField; // x8
  UIScrollView_o *scrollView; // x0
  QuestBoardListViewItem_o *v16; // x0
  struct MapControl_QuestInfo_o *v17; // x8
  QuestBoardListViewItem_o *v18; // x0
  struct MapControl_QuestInfo_o *v19; // x8
  int v20; // w9
  QuestBoardListViewItem_o *v21; // x0
  struct MapControl_QuestInfo_o *v22; // x8
  QuestBoardListViewItem_o *v23; // x0
  QuestBoardListViewItemDraw_o *itemDraw; // x22
  QuestBoardListViewItem_o *v25; // x0
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C346B0 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_QuestBoardListViewObject__GetEnumerator__);
    byte_4C346B0 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  ObjectList = (System_Collections_Generic_List_object__o *)QuestBoardListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&questId);
  if ( !ObjectList )
    sub_1C32E7C(0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    ObjectList,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_QuestBoardListViewObject__GetEnumerator__);
  v27 = v26;
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v27,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__MoveNext__);
    if ( !v10 )
      break;
    current = (QuestBoardListViewObject_o *)v27.fields._current;
    if ( !v27.fields._current )
      sub_1C32E7C(v10);
    Item = QuestBoardListViewObject__GetItem((QuestBoardListViewObject_o *)v27.fields._current, 0);
    if ( !Item )
      sub_1C32E7C(0);
    if ( Item->fields._quest_info_k__BackingField )
    {
      v13 = QuestBoardListViewObject__GetItem(current, 0);
      if ( !v13 )
        sub_1C32E7C(0);
      quest_info_k__BackingField = v13->fields._quest_info_k__BackingField;
      if ( !quest_info_k__BackingField )
        sub_1C32E7C(v13);
      if ( quest_info_k__BackingField->fields.questId == questId )
      {
        if ( isClose )
        {
          scrollView = this->fields.scrollView;
          if ( !scrollView )
            sub_1C32E7C(0);
          UIScrollView__ResetPosition(scrollView, 0);
          v16 = QuestBoardListViewObject__GetItem(current, 0);
          if ( !v16 )
            sub_1C32E7C(0);
          v17 = v16->fields._quest_info_k__BackingField;
          if ( !v17 )
            sub_1C32E7C(v16);
          v17->fields.dispType = 2;
          v18 = QuestBoardListViewObject__GetItem(current, 0);
          if ( !v18 )
            sub_1C32E7C(0);
          v19 = v18->fields._quest_info_k__BackingField;
          if ( !v19 )
            sub_1C32E7C(v18);
          v20 = 0;
        }
        else
        {
          v21 = QuestBoardListViewObject__GetItem(current, 0);
          if ( !v21 )
            sub_1C32E7C(0);
          v22 = v21->fields._quest_info_k__BackingField;
          if ( !v22 )
            sub_1C32E7C(v21);
          v22->fields.dispType = 1;
          v23 = QuestBoardListViewObject__GetItem(current, 0);
          if ( !v23 )
            sub_1C32E7C(0);
          v19 = v23->fields._quest_info_k__BackingField;
          if ( !v19 )
            sub_1C32E7C(v23);
          v20 = 1;
        }
        v19->fields.touchType = v20;
        itemDraw = current->fields.itemDraw;
        v25 = QuestBoardListViewObject__GetItem(current, 0);
        if ( !v25 )
          sub_1C32E7C(0);
        if ( !itemDraw )
          sub_1C32E7C(v25);
        QuestBoardListViewItemDraw__ForceChangeQuestBoardDisp(
          itemDraw,
          v25->fields._quest_info_k__BackingField,
          isClose,
          forceUnknownQuestName,
          0);
        break;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v27,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__Dispose__);
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

  if ( (byte_4C3467F & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C32C20(&PartyServantListViewItem_TypeInfo);
    byte_4C3467F = 1;
  }
  result = (PartyServantListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (PartyServantListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                             (System_Collections_Generic_List_object__o *)result,
                                             index,
                                             (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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


QuestBoardListViewObject_o *QuestBoardListViewManager__GetQuestBoardObjForWarId(
        QuestBoardListViewManager_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  Il2CppObject *current; // x26
  __int64 naturalAligment; // x10
  Il2CppClass *klass; // x8
  _DWORD *interopData; // x8
  Il2CppClass *v10; // x20
  Il2CppClass *v11; // x8
  __int64 v12; // x11
  UnityEngine_Object_o *v13; // x20
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4C3467D & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&QuestBoardListViewItem_TypeInfo);
    sub_1C32C20(&QuestBoardListViewObject_TypeInfo);
    byte_4C3467D = 1;
  }
  memset(&v16, 0, sizeof(v16));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1C32E7C(0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v16 = v15;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v16,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
  {
    current = v16.fields._current;
    if ( v16.fields._current )
    {
      naturalAligment = QuestBoardListViewItem_TypeInfo->_2.naturalAligment;
      if ( v16.fields._current->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (QuestBoardListViewItem_c *)v16.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] == QuestBoardListViewItem_TypeInfo )
      {
        klass = v16.fields._current[8].klass;
        if ( klass )
        {
          interopData = klass->_1.interopData;
          if ( interopData )
          {
            if ( interopData[4] != 1 && interopData[5] == warId )
            {
              v10 = v16.fields._current[7].klass;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v10, 0, 0) )
              {
                v11 = current[7].klass;
                if ( v11
                  && (v12 = QuestBoardListViewObject_TypeInfo->_2.naturalAligment,
                      *((unsigned __int8 *)v11->_1.image + 304) >= (unsigned int)v12) )
                {
                  v13 = *(QuestBoardListViewObject_c **)(*((_QWORD *)v11->_1.image + 25) + 8 * v12 - 8) == QuestBoardListViewObject_TypeInfo
                      ? (UnityEngine_Object_o *)current[7].klass
                      : 0LL;
                }
                else
                {
                  v13 = 0;
                }
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(v13, 0, 0) )
                  goto LABEL_27;
              }
            }
          }
        }
      }
    }
  }
  v13 = 0;
LABEL_27:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v16,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  return (QuestBoardListViewObject_o *)v13;
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
  QuestBoardListViewItem_o *v6; // x0
  const MethodInfo *v7; // x1
  struct MapControl_QuestInfo_o *quest_info_k__BackingField; // x8
  _QWORD *monitor; // x8
  __int64 v10; // x8

  if ( (byte_4C34687 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_Any_QuestBoardListViewObject___);
    sub_1C32C20(&Method_System_Collections_Generic_List_QuestBoardListViewObject__get_Item__);
    byte_4C34687 = 1;
  }
  ObjectList = QuestBoardListViewManager__get_ObjectList(this, method);
  if ( !System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)ObjectList,
          (const MethodInfo_30E8F68 *)Method_System_Linq_Enumerable_Any_QuestBoardListViewObject___) )
    goto LABEL_15;
  Item = (System_Collections_Generic_List_object__o *)QuestBoardListViewManager__get_ObjectList(this, v4);
  if ( !Item
    || (Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              Item,
                                                              0,
                                                              (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_QuestBoardListViewObject__get_Item__)) == 0 )
  {
LABEL_17:
    sub_1C32E7C(Item);
  }
  v6 = QuestBoardListViewObject__GetItem((QuestBoardListViewObject_o *)Item, 0);
  if ( !v6 )
    return (char)v6;
  quest_info_k__BackingField = v6->fields._quest_info_k__BackingField;
  if ( !quest_info_k__BackingField || !quest_info_k__BackingField->fields._AreaBoardInfo_k__BackingField )
  {
LABEL_15:
    LOBYTE(v6) = 0;
    return (char)v6;
  }
  Item = (System_Collections_Generic_List_object__o *)QuestBoardListViewManager__get_ObjectList(this, v7);
  if ( !Item )
    goto LABEL_17;
  Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                        Item,
                                                        0,
                                                        (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_QuestBoardListViewObject__get_Item__);
  if ( !Item )
    goto LABEL_17;
  Item = (System_Collections_Generic_List_object__o *)QuestBoardListViewObject__GetItem(
                                                        (QuestBoardListViewObject_o *)Item,
                                                        0);
  if ( !Item )
    goto LABEL_17;
  monitor = Item[3].monitor;
  if ( !monitor )
    goto LABEL_17;
  v10 = monitor[14];
  if ( !v10 )
    goto LABEL_17;
  LOBYTE(v6) = *(_DWORD *)(v10 + 16) == 1;
  return (char)v6;
}


// local variable allocation has failed, the output may be wrong!
void QuestBoardListViewManager__InitListObject(
        QuestBoardListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  System_Collections_Generic_List_Enumerator_object__o v6; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C34682 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_QuestBoardListViewObject__GetEnumerator__);
    byte_4C34682 = 1;
  }
  memset(&v6, 0, sizeof(v6));
  ObjectList = (System_Collections_Generic_List_object__o *)QuestBoardListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C32E7C(0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v6,
    ObjectList,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_QuestBoardListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v6,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__MoveNext__) )
  {
    if ( !v6.fields._current )
      sub_1C32E7C(0);
    QuestBoardListViewObject__Init((QuestBoardListViewObject_o *)v6.fields._current, mode, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v6,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__Dispose__);
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
  UnityEngine_MonoBehaviour__StartCoroutine_71209212((UnityEngine_MonoBehaviour_o *)this, Asset, 0);
}


// local variable allocation has failed, the output may be wrong!
void QuestBoardListViewManager__ModifyAllRoadmapButtons(
        QuestBoardListViewManager_o *this,
        bool isEnable,
        bool isImmediate,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  bool v8; // w20
  bool i; // w19
  _BOOL8 v10; // x0
  __int64 v11; // x8
  RoadmapButtonPrefab_o *v12; // x0
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C34677 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_QuestBoardListViewObject__GetEnumerator__);
    byte_4C34677 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_object__o *)QuestBoardListViewManager__get_ObjectList(
                                                              this,
                                                              (const MethodInfo *)isEnable);
  if ( !ObjectList )
    sub_1C32E7C(0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    ObjectList,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_QuestBoardListViewObject__GetEnumerator__);
  v8 = isEnable;
  for ( i = isImmediate; ; RoadmapButtonPrefab__ModifyRoadmapButton(v12, v8, i, 0) )
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v13,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__MoveNext__);
    if ( !v10 )
      break;
    if ( !v13.fields._current )
      sub_1C32E7C(v10);
    v11 = *(__int64 *)((char *)&v13.fields._current->klass + (unsigned __int64)&qword_80);
    if ( !v11 )
      sub_1C32E7C(v10);
    v12 = *(RoadmapButtonPrefab_o **)((char *)&stru_330.st_size + v11);
    if ( !v12 )
      sub_1C32E7C(0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v13,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__Dispose__);
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
  __int64 v13; // x21
  MoveObject_o *v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  Il2CppObject *Component_object; // x0
  MoveObject_o **v20; // x23
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  float v23; // s10
  float x; // s10
  float y; // s11
  float z; // s12
  MoveObject_o *v27; // x20
  float v28; // s13
  float v29; // s15
  float v30; // s14
  System_Action_o *v31; // x22
  System_Action_o *v32; // x23
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v36; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_4C346AE & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_GameObjectExtensions_SafeGetComponent_MoveObject___);
    sub_1C32C20(&Method_QuestBoardListViewManager___c__DisplayClass184_0__MoveBoard_b__0__);
    sub_1C32C20(&Method_QuestBoardListViewManager___c__DisplayClass184_0__MoveBoard_b__1__);
    sub_1C32C20(&QuestBoardListViewManager___c__DisplayClass184_0_TypeInfo);
    byte_4C346AE = 1;
  }
  v13 = sub_1C32E6C(QuestBoardListViewManager___c__DisplayClass184_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0);
  if ( !v13 )
    goto LABEL_10;
  *(_QWORD *)(v13 + 40) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v13 + 40), (int32_t)this, v15, v16);
  *(_QWORD *)(v13 + 16) = obj;
  sub_1C32BC4((CGThumbnailListItem_o *)(v13 + 16), (int32_t)obj, v17, v18);
  *(float *)(v13 + 32) = GameObjectExtensions__GetLocalPositionY(*(UnityEngine_GameObject_o **)(v13 + 16), 0) + moveY;
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       *(UnityEngine_GameObject_o **)(v13 + 16),
                       (const MethodInfo_3136458 *)Method_GameObjectExtensions_SafeGetComponent_MoveObject___);
  *(_QWORD *)(v13 + 24) = Component_object;
  v20 = (MoveObject_o **)(v13 + 24);
  sub_1C32BC4((CGThumbnailListItem_o *)(v13 + 24), (int32_t)Component_object, v21, v22);
  if ( is_force
    || (v23 = *(float *)(v13 + 32),
        v23 == GameObjectExtensions__GetLocalPositionY(*(UnityEngine_GameObject_o **)(v13 + 16), 0)) )
  {
    v14 = *v20;
    if ( *v20 )
    {
      MoveObject__Stop(v14, 0);
      GameObjectExtensions__SetLocalPositionY(*(UnityEngine_GameObject_o **)(v13 + 16), *(float *)(v13 + 32), 0);
      --this->fields.waitCount;
      return;
    }
LABEL_10:
    sub_1C32E7C(v14);
  }
  LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v13 + 16), 0);
  x = LocalPosition.fields.x;
  y = LocalPosition.fields.y;
  z = LocalPosition.fields.z;
  v34 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v13 + 16), 0);
  v27 = *(MoveObject_o **)(v13 + 24);
  v28 = v34.fields.x;
  v29 = v34.fields.y;
  v30 = v34.fields.z;
  v31 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(
    v31,
    (Il2CppObject *)v13,
    Method_QuestBoardListViewManager___c__DisplayClass184_0__MoveBoard_b__0__,
    0);
  v32 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(
    v32,
    (Il2CppObject *)v13,
    Method_QuestBoardListViewManager___c__DisplayClass184_0__MoveBoard_b__1__,
    0);
  if ( !v27 )
    goto LABEL_10;
  v36.fields.y = v29 + moveY;
  v35.fields.x = x;
  v35.fields.y = y;
  v35.fields.z = z;
  v36.fields.x = v28;
  v36.fields.z = v30;
  MoveObject__Play(v27, v35, v36, time, v31, v32, 0.0, easeType, 0);
}


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
  Il2CppClass *klass; // x24
  QuestBoardListViewItemDraw_c *v16; // x0
  uint32_t cctor_finished; // w8
  int POS_Y_ITVL_AREA; // w8
  int v19; // w25
  UnityEngine_GameObject_o *gameObject; // x1
  const MethodInfo *v21; // x4
  _BOOL8 v22; // x0
  Il2CppClass *v23; // x24
  QuestBoardListViewItemDraw_c *v24; // x0
  uint32_t v25; // w8
  int v26; // w8
  int v27; // w25
  UnityEngine_GameObject_o *v28; // x1
  const MethodInfo *v29; // x4
  const MethodInfo *v30; // x2
  System_Collections_IEnumerator_o *v31; // x0
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+20h] [xbp-90h] BYREF

  if ( (byte_4C34679 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&QuestBoardListViewItemDraw_TypeInfo);
    byte_4C34679 = 1;
  }
  memset(&v33, 0, sizeof(v33));
  topItemList = this->fields.topItemList;
  this->fields.waitCount = 0;
  if ( !topItemList )
    goto LABEL_48;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v32,
    (System_Collections_Generic_List_object__o *)topItemList,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v33 = v32;
  while ( 1 )
  {
    v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v33,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v14 )
      break;
    if ( !v33.fields._current )
      sub_1C32E7C(v14);
    klass = v33.fields._current[7].klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)klass, 0, 0) )
    {
      v16 = QuestBoardListViewItemDraw_TypeInfo;
      cctor_finished = QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished;
      if ( isClose )
      {
        if ( !cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          v16 = QuestBoardListViewItemDraw_TypeInfo;
        }
        POS_Y_ITVL_AREA = -v16->static_fields->POS_Y_ITVL_AREA;
      }
      else
      {
        if ( !cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          v16 = QuestBoardListViewItemDraw_TypeInfo;
        }
        POS_Y_ITVL_AREA = v16->static_fields->POS_Y_ITVL_AREA;
      }
      if ( POS_Y_ITVL_AREA >= 0 )
        v19 = POS_Y_ITVL_AREA;
      else
        v19 = POS_Y_ITVL_AREA + 1;
      if ( !klass )
        sub_1C32E7C(v16);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)klass, 0);
      QuestBoardListViewManager__MoveBoard(this, gameObject, (float)(v19 >> 1), moveTime, easeType, isForce, v21);
      ++this->fields.waitCount;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v33,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  topItemList = this->fields.bottomItemList;
  if ( !topItemList )
LABEL_48:
    sub_1C32E7C(topItemList);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v32,
    (System_Collections_Generic_List_object__o *)topItemList,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v33 = v32;
  while ( 1 )
  {
    v22 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v33,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v22 )
      break;
    if ( !v33.fields._current )
      sub_1C32E7C(v22);
    v23 = v33.fields._current[7].klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v23, 0, 0) )
    {
      v24 = QuestBoardListViewItemDraw_TypeInfo;
      v25 = QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished;
      if ( isClose )
      {
        if ( !v25 )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          v24 = QuestBoardListViewItemDraw_TypeInfo;
        }
        v26 = v24->static_fields->POS_Y_ITVL_AREA;
      }
      else
      {
        if ( !v25 )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          v24 = QuestBoardListViewItemDraw_TypeInfo;
        }
        v26 = -v24->static_fields->POS_Y_ITVL_AREA;
      }
      if ( v26 >= 0 )
        v27 = v26;
      else
        v27 = v26 + 1;
      if ( !v23 )
        sub_1C32E7C(v24);
      v28 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v23, 0);
      QuestBoardListViewManager__MoveBoard(this, v28, (float)(v27 >> 1), moveTime, easeType, isForce, v29);
      ++this->fields.waitCount;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v33,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  if ( endAct )
  {
    v31 = QuestBoardListViewManager__WaitFinish(this, endAct, v30);
    UnityEngine_MonoBehaviour__StartCoroutine_71209212((UnityEngine_MonoBehaviour_o *)this, v31, 0);
  }
}


void QuestBoardListViewManager__OnChangeAlphaAnim(QuestBoardListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  System_Collections_Generic_List_object__o *v4; // x20
  int32_t v5; // w21

  if ( (byte_4C3468E & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_QuestBoardListViewObject__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_QuestBoardListViewObject__get_Item__);
    byte_4C3468E = 1;
  }
  ObjectList = (System_Collections_Generic_List_object__o *)QuestBoardListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    goto LABEL_9;
  v4 = ObjectList;
  if ( ObjectList->fields._size >= 1 )
  {
    v5 = 0;
    while ( 1 )
    {
      ObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  v4,
                                                                  v5,
                                                                  (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_QuestBoardListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      QuestBoardListViewObject__OnChangeAlphaAnim((QuestBoardListViewObject_o *)ObjectList, 0);
      if ( ++v5 >= v4->fields._size )
        goto LABEL_8;
    }
LABEL_9:
    sub_1C32E7C(ObjectList);
  }
LABEL_8:
  this->fields.mResetConsumeColor = 0;
}


void QuestBoardListViewManager__OnClickListView(
        QuestBoardListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v5; // x22
  CommonUI_o *Instance; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  void **v9; // x21
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  __int64 v14; // x24
  __int64 naturalAligment; // x10
  MapControl_QuestInfo_o *v16; // x20
  struct MapControl_AreaBoardInfo_o *AreaBoardInfo_k__BackingField; // x1
  MapControl_AreaBoardInfo_o **v18; // x23
  struct TerminalSceneComponent_o *mTerminalScene; // x9
  int32_t dispType; // w8
  _QWORD *v21; // x0
  System_Reflection_MethodBase_o *v22; // x0
  int32_t v23; // w1
  _QWORD *v24; // x0
  System_Reflection_MethodBase_o *v25; // x0
  int32_t SpotID; // w22
  TerminalPramsManager_c *v27; // x0
  int32_t questId; // w22
  TerminalPramsManager_c *v29; // x0
  int32_t v30; // w22
  TerminalPramsManager_c *v31; // x0
  _QWORD *v32; // x0
  System_Reflection_MethodBase_o *v33; // x0
  EventEntity_o *eventEnt; // x20
  System_Action_o *v35; // x24
  const MethodInfo *v36; // x4
  __int64 v37; // x8
  ScrTerminalListTop_o *mTerminalList; // x19
  MapControl_AreaBoardInfo_o *v39; // x20
  _QWORD *v40; // x0
  _QWORD *v41; // x0
  System_Reflection_MethodBase_o *v42; // x0
  int32_t v43; // w22
  _QWORD *v44; // x0
  System_Reflection_MethodBase_o *v45; // x0
  TerminalSceneComponent_c *v46; // x0
  TerminalSceneComponent_c *v47; // x0
  const MethodInfo *v48; // x1
  ScrTerminalListTop_o *v49; // x19
  MapControl_WarInfo_o *WarInfoByWarID; // x0
  MapControl_WarInfo_o *v51; // x23
  WarEntity_o *Mine; // x22
  bool IsClosedWar; // w0
  MapControl_WarInfo_o *WarInfo_k__BackingField; // x0
  int32_t EventId; // w22
  int32_t GroupId; // w23
  QuestEntity_o *v57; // x0
  QuestEntity_o *v58; // x23
  Il2CppObject *current; // x0
  _QWORD *v60; // x0
  System_Reflection_MethodBase_o *v61; // x0
  TerminalSceneComponent_c *v62; // x0
  TerminalSceneComponent_o *mInstance; // x0
  const MethodInfo *v64; // x1
  UnityEngine_GameObject_o *fortificationWarningDialog; // x0
  Il2CppObject *Component_object; // x0
  _QWORD *v67; // x0
  System_Reflection_MethodBase_o *v68; // x0
  QuestEntity_o *v69; // x22
  TerminalSceneComponent_c *v70; // x0
  int32_t v71; // w23
  bool IsDisplayQuestInformation_36461088; // w0
  TerminalSceneComponent_c *v73; // x0
  const MethodInfo *v74; // x1
  ScrTerminalListTop_o *v75; // x19
  __int64 v76; // x9
  System_Collections_Generic_List_Enumerator_object__o v77; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v78; // [xsp+20h] [xbp-70h] BYREF
  System_Collections_Generic_List_EventFortificationEntity__o *entities; // [xsp+48h] [xbp-48h] BYREF

  if ( (byte_4C34689 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMaster_EventFortificationMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_QuestGroupMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__get_Current__);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_FortificationWarningDialogComponent___);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventFortificationEntity__GetEnumerator__);
    sub_1C32C20(&QuestBoardListViewItem_TypeInfo);
    sub_1C32C20(&Method_QuestBoardListViewManager_OnClickListView__);
    sub_1C32C20(&QuestBoardListViewObject_TypeInfo);
    sub_1C32C20(&QuestInformationComponent_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    sub_1C32C20(&TerminalSceneComponent_TypeInfo);
    sub_1C32C20(&Method_QuestBoardListViewManager___c__DisplayClass133_0__OnClickListView_b__0__);
    sub_1C32C20(&QuestBoardListViewManager___c__DisplayClass133_0_TypeInfo);
    byte_4C34689 = 1;
  }
  entities = 0;
  memset(&v78, 0, sizeof(v78));
  v5 = sub_1C32E6C(QuestBoardListViewManager___c__DisplayClass133_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_173;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v7, v8);
  *(_QWORD *)(v5 + 32) = obj;
  v9 = (void **)(v5 + 32);
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 32), (int32_t)obj, v10, v11);
  if ( !*(_QWORD *)(v5 + 32) )
    goto LABEL_173;
  v14 = *(_QWORD *)(*(_QWORD *)(v5 + 32) + 56LL);
  if ( !v14 )
    goto LABEL_173;
  naturalAligment = QuestBoardListViewItem_TypeInfo->_2.naturalAligment;
  if ( *(unsigned __int8 *)(*(_QWORD *)v14 + 304LL) < (unsigned int)naturalAligment
    || *(QuestBoardListViewItem_c **)(*(_QWORD *)(*(_QWORD *)v14 + 200LL) + 8 * naturalAligment - 8) != QuestBoardListViewItem_TypeInfo )
  {
    goto LABEL_173;
  }
  v16 = *(MapControl_QuestInfo_o **)(v14 + 128);
  if ( !v16 )
    return;
  AreaBoardInfo_k__BackingField = v16->fields._AreaBoardInfo_k__BackingField;
  *(_QWORD *)(v5 + 24) = AreaBoardInfo_k__BackingField;
  v18 = (MapControl_AreaBoardInfo_o **)(v5 + 24);
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 24), (int32_t)AreaBoardInfo_k__BackingField, v12, v13);
  mTerminalScene = this->fields.mTerminalScene;
  if ( !mTerminalScene )
LABEL_173:
    sub_1C32E7C(Instance);
  dispType = v16->fields.dispType;
  mTerminalScene->fields._IsWarStartAnim_k__BackingField = 0;
  switch ( *(_DWORD *)(v14 + 120) )
  {
    case 0:
      if ( dispType == 2 )
        goto LABEL_55;
      Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !Instance )
        goto LABEL_173;
      CommonUI__CheckChangeOtherConnectMarkFromEventId(Instance, 0, 1, 0);
      v32 = Method_QuestBoardListViewManager_OnClickListView__;
      if ( (*((_BYTE *)Method_QuestBoardListViewManager_OnClickListView__ + 83) & 2) != 0 )
        v32 = (_QWORD *)sub_1C32C38(Method_QuestBoardListViewManager_OnClickListView__);
      v33 = (System_Reflection_MethodBase_o *)sub_1C32C04(v32, v32[4]);
      OverwriteAssetSoundName__PlaySystemSe(v33, 0, 0, 0);
      if ( !*v18 )
        goto LABEL_173;
      Instance = (CommonUI_o *)this->fields.mTerminalList;
      if ( !Instance )
        goto LABEL_173;
      Instance = (CommonUI_o *)ScrTerminalListTop__TryTransitionAreaForShortcutAreaBoard(
                                 (ScrTerminalListTop_o *)Instance,
                                 (*v18)->fields.warId,
                                 0);
      if ( ((unsigned __int8)Instance & 1) != 0 )
        return;
      if ( !*v18 )
        goto LABEL_173;
      eventEnt = (*v18)->fields.eventEnt;
      v35 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
      System_Action___ctor(
        v35,
        (Il2CppObject *)v5,
        Method_QuestBoardListViewManager___c__DisplayClass133_0__OnClickListView_b__0__,
        0);
      v37 = *(_QWORD *)(v5 + 24);
      if ( !v37 )
        goto LABEL_173;
      if ( QuestBoardListViewManager__RequestToRaiseTutorialFlag(this, eventEnt, v35, *(_DWORD *)(v37 + 20), v36) )
        return;
      Instance = (CommonUI_o *)*v9;
      if ( !*v9 )
        goto LABEL_173;
      mTerminalList = this->fields.mTerminalList;
      v39 = *v18;
      Instance = (CommonUI_o *)ListViewObject__get_Index((ListViewObject_o *)Instance, 0);
      if ( !mTerminalList )
        goto LABEL_173;
      ScrTerminalListTop__Click_Area(mTerminalList, v39, (int32_t)Instance, 0, 0, 0);
      return;
    case 1:
    case 4:
      if ( dispType == 2 )
        goto LABEL_55;
      if ( !*v18 )
        goto LABEL_108;
      Instance = (CommonUI_o *)this->fields.mTerminalList;
      if ( !Instance )
        goto LABEL_173;
      if ( ScrTerminalListTop__TryTransitionAreaForShortcutAreaBoard(
             (ScrTerminalListTop_o *)Instance,
             (*v18)->fields.warId,
             0) )
      {
        v21 = Method_QuestBoardListViewManager_OnClickListView__;
        if ( (*((_BYTE *)Method_QuestBoardListViewManager_OnClickListView__ + 83) & 2) != 0 )
          v21 = (_QWORD *)sub_1C32C38(Method_QuestBoardListViewManager_OnClickListView__);
        v22 = (System_Reflection_MethodBase_o *)sub_1C32C04(v21, v21[4]);
        v23 = 0;
        goto LABEL_58;
      }
      Instance = (CommonUI_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !*v18 || !Instance )
        goto LABEL_173;
      WarInfoByWarID = QuestTree__mfGetWarInfoByWarID((QuestTree_o *)Instance, (*v18)->fields.warId, 0);
      if ( !WarInfoByWarID )
        goto LABEL_108;
      v51 = WarInfoByWarID;
      Mine = MapControl_WarInfo__GetMine(WarInfoByWarID, 0);
      IsClosedWar = MapControl_WarInfo__IsClosedWar(v51, 0);
      if ( Mine && IsClosedWar && WarEntity__IsMainInterlude(Mine, 0) )
        goto LABEL_55;
      if ( !Mine || !WarEntity__IsSubFolder(Mine, 0) )
        goto LABEL_108;
      Instance = (CommonUI_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !Instance )
        goto LABEL_173;
      if ( !QuestTree__IsWarOpen((QuestTree_o *)Instance, Mine->fields.id, 0) )
      {
LABEL_55:
        v40 = Method_QuestBoardListViewManager_OnClickListView__;
        if ( (*((_BYTE *)Method_QuestBoardListViewManager_OnClickListView__ + 83) & 2) != 0 )
          v40 = (_QWORD *)sub_1C32C38(Method_QuestBoardListViewManager_OnClickListView__);
        v22 = (System_Reflection_MethodBase_o *)sub_1C32C04(v40, v40[4]);
        v23 = 2;
LABEL_58:
        OverwriteAssetSoundName__PlaySystemSe(v22, v23, 0, 0);
        return;
      }
LABEL_108:
      WarInfo_k__BackingField = v16->fields._WarInfo_k__BackingField;
      if ( !WarInfo_k__BackingField )
        goto LABEL_144;
      EventId = MapControl_WarInfo__GetEventId(WarInfo_k__BackingField, 0);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Instance = (CommonUI_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_QuestGroupMaster___);
      if ( !Instance )
        goto LABEL_173;
      GroupId = QuestGroupMaster__GetGroupId((QuestGroupMaster_o *)Instance, v16->fields.questId, 18, 0);
      v57 = MapControl_QuestInfo__GetMine(v16, 0);
      if ( EventId != GroupId )
        goto LABEL_144;
      v58 = v57;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C346C8 )
      {
        sub_1C32C20(&TerminalPramsManager_TypeInfo);
        byte_4C346C8 = 1;
      }
      Instance = (CommonUI_o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        Instance = (CommonUI_o *)TerminalPramsManager_TypeInfo;
      }
      if ( BYTE1(Instance->fields.connectMark[1].fields.markBase) )
        goto LABEL_144;
      if ( !v58 )
        goto LABEL_173;
      if ( QuestEntity__HasFlag(v58, 2, 0) )
        goto LABEL_144;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Instance = (CommonUI_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_EventFortificationMaster___);
      if ( !Instance )
        goto LABEL_173;
      if ( !EventFortificationMaster__TryGetEntityList((EventFortificationMaster_o *)Instance, &entities, EventId, 0) )
        goto LABEL_144;
      Instance = (CommonUI_o *)entities;
      if ( !entities )
        goto LABEL_173;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v77,
        (System_Collections_Generic_List_object__o *)entities,
        (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_EventFortificationEntity__GetEnumerator__);
      v78 = v77;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v78,
                (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__MoveNext__) )
      {
        current = v78.fields._current;
        if ( !v78.fields._current )
          goto LABEL_175;
        if ( EventFortificationEntity__IsOpenFortificationWarningDialog(
               (EventFortificationEntity_o *)v78.fields._current,
               0) )
        {
          v60 = Method_QuestBoardListViewManager_OnClickListView__;
          if ( (*((_BYTE *)Method_QuestBoardListViewManager_OnClickListView__ + 83) & 2) != 0 )
            v60 = (_QWORD *)sub_1C32C38(Method_QuestBoardListViewManager_OnClickListView__);
          v61 = (System_Reflection_MethodBase_o *)sub_1C32C04(v60, v60[4]);
          OverwriteAssetSoundName__PlaySystemSe(v61, 0, 0, 0);
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          if ( !byte_4C319B6 )
          {
            sub_1C32C20(&TerminalSceneComponent_TypeInfo);
            byte_4C319B6 = 1;
          }
          v62 = TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            v62 = TerminalSceneComponent_TypeInfo;
          }
          mInstance = v62->static_fields->mInstance;
          if ( !mInstance )
            sub_1C32E7C(0);
          TerminalSceneComponent__CallQuestInformationClose(mInstance, 0);
          QuestBoardListViewManager__SetShowingInfoAllOff(this, v64);
          fortificationWarningDialog = this->fields.fortificationWarningDialog;
          if ( !fortificationWarningDialog )
            sub_1C32E7C(0);
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               fortificationWarningDialog,
                               (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_FortificationWarningDialogComponent___);
          if ( !Component_object )
            sub_1C32E7C(0);
          FortificationWarningDialogComponent__Open((FortificationWarningDialogComponent_o *)Component_object, 0);
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v78,
            (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__Dispose__);
          return;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v78,
        (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__Dispose__);
LABEL_144:
      Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !Instance )
        goto LABEL_173;
      CommonUI__CheckChangeOtherConnectMarkFromEventId(Instance, 0, 1, 0);
      v67 = Method_QuestBoardListViewManager_OnClickListView__;
      if ( (*((_BYTE *)Method_QuestBoardListViewManager_OnClickListView__ + 83) & 2) != 0 )
        v67 = (_QWORD *)sub_1C32C38(Method_QuestBoardListViewManager_OnClickListView__);
      v68 = (System_Reflection_MethodBase_o *)sub_1C32C04(v67, v67[4]);
      OverwriteAssetSoundName__PlaySystemSe(v68, 0, 0, 0);
      v69 = MapControl_QuestInfo__GetMine(v16, 0);
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_4C319B6 )
      {
        sub_1C32C20(&TerminalSceneComponent_TypeInfo);
        byte_4C319B6 = 1;
      }
      v70 = TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v70 = TerminalSceneComponent_TypeInfo;
      }
      Instance = (CommonUI_o *)v70->static_fields->mInstance;
      if ( !Instance )
        goto LABEL_173;
      v71 = TerminalSceneComponent__QuestInfoShowing((TerminalSceneComponent_o *)Instance, 0);
      if ( !QuestInformationComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(QuestInformationComponent_TypeInfo);
      IsDisplayQuestInformation_36461088 = QuestInformationComponent__IsDisplayQuestInformation_36461088(v69, 0);
      if ( v71 < 1 || !IsDisplayQuestInformation_36461088 || v71 == v16->fields.questId )
      {
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_4C319B6 )
        {
          sub_1C32C20(&TerminalSceneComponent_TypeInfo);
          byte_4C319B6 = 1;
        }
        v73 = TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          v73 = TerminalSceneComponent_TypeInfo;
        }
        Instance = (CommonUI_o *)v73->static_fields->mInstance;
        if ( Instance )
        {
          TerminalSceneComponent__CallQuestInformationClose((TerminalSceneComponent_o *)Instance, 0);
          QuestBoardListViewManager__SetShowingInfoAllOff(this, v74);
          Instance = (CommonUI_o *)*v9;
          if ( *v9 )
          {
            v75 = this->fields.mTerminalList;
            Instance = (CommonUI_o *)ListViewObject__get_Index((ListViewObject_o *)Instance, 0);
            if ( v75 )
            {
              ScrTerminalListTop__Click_Quest(v75, v16, (int32_t)Instance, 0);
              return;
            }
          }
        }
        goto LABEL_173;
      }
      Instance = (CommonUI_o *)*v9;
      if ( !*v9 )
        goto LABEL_173;
      v76 = QuestBoardListViewObject_TypeInfo->_2.naturalAligment;
      if ( Instance->klass->_2.naturalAligment < (unsigned int)v76
        || (QuestBoardListViewObject_c *)Instance->klass->_2.typeHierarchy[v76 - 1] != QuestBoardListViewObject_TypeInfo )
      {
        sub_1C3313C(Instance);
LABEL_175:
        sub_1C32E7C(current);
      }
      QuestBoardListViewObject__OnClickInfoBtn((QuestBoardListViewObject_o *)Instance, 1, 0);
      return;
    case 2:
    case 3:
      v24 = Method_QuestBoardListViewManager_OnClickListView__;
      if ( (*((_BYTE *)Method_QuestBoardListViewManager_OnClickListView__ + 83) & 2) != 0 )
        v24 = (_QWORD *)sub_1C32C38(Method_QuestBoardListViewManager_OnClickListView__);
      v25 = (System_Reflection_MethodBase_o *)sub_1C32C04(v24, v24[4]);
      OverwriteAssetSoundName__PlaySystemSe(v25, 0, 0, 0);
      SpotID = MapControl_QuestInfo__GetSpotID(v16, 0);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C342B1 )
      {
        sub_1C32C20(&TerminalPramsManager_TypeInfo);
        byte_4C342B1 = 1;
      }
      v27 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v27 = TerminalPramsManager_TypeInfo;
      }
      v27->static_fields->_SpotId_k__BackingField = SpotID;
      Instance = (CommonUI_o *)MapControl_QuestInfo__GetMine(v16, 0);
      if ( !Instance )
        goto LABEL_173;
      if ( LODWORD(Instance->fields.topImg) == 3 )
      {
        questId = v16->fields.questId;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4C346C6 )
        {
          sub_1C32C20(&TerminalPramsManager_TypeInfo);
          byte_4C346C6 = 1;
        }
        v29 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v29 = TerminalPramsManager_TypeInfo;
        }
        v29->static_fields->_SelectedStoryQuestId_k__BackingField = questId;
      }
      v30 = *(_DWORD *)(v14 + 156);
      if ( v30 )
      {
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4C3367F )
        {
          sub_1C32C20(&TerminalPramsManager_TypeInfo);
          byte_4C3367F = 1;
        }
        v31 = TerminalPramsManager_TypeInfo;
LABEL_69:
        if ( !v31->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v31);
          v31 = TerminalPramsManager_TypeInfo;
        }
        v31->static_fields->_SelectedRecollectionWarId_k__BackingField = v30;
        if ( !byte_4C346C7 )
        {
          sub_1C32C20(&TerminalPramsManager_TypeInfo);
          v31 = TerminalPramsManager_TypeInfo;
          byte_4C346C7 = 1;
        }
        if ( !v31->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v31);
          v31 = TerminalPramsManager_TypeInfo;
        }
        v31->static_fields->_IsFromRecollectionBoard_k__BackingField = 1;
      }
      Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !Instance )
        goto LABEL_173;
      CommonUI__CheckChangeOtherConnectMarkFromEventId(Instance, 0, 1, 0);
      Instance = (CommonUI_o *)this->fields.mTerminalList;
      if ( !Instance )
        goto LABEL_173;
      ScrTerminalListTop__Click_Shortcut((ScrTerminalListTop_o *)Instance, v16->fields.warId, v16->fields.questId, 0);
      return;
    case 5:
      if ( dispType == 2 )
        goto LABEL_55;
      Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !Instance )
        goto LABEL_173;
      CommonUI__CheckChangeOtherConnectMarkFromEventId(Instance, 0, 1, 0);
      v44 = Method_QuestBoardListViewManager_OnClickListView__;
      if ( (*((_BYTE *)Method_QuestBoardListViewManager_OnClickListView__ + 83) & 2) != 0 )
        v44 = (_QWORD *)sub_1C32C38(Method_QuestBoardListViewManager_OnClickListView__);
      v45 = (System_Reflection_MethodBase_o *)sub_1C32C04(v44, v44[4]);
      OverwriteAssetSoundName__PlaySystemSe(v45, 0, 0, 0);
      MapControl_QuestInfo__GetMine(v16, 0);
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_4C319B6 )
      {
        sub_1C32C20(&TerminalSceneComponent_TypeInfo);
        byte_4C319B6 = 1;
      }
      v46 = TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v46 = TerminalSceneComponent_TypeInfo;
      }
      Instance = (CommonUI_o *)v46->static_fields->mInstance;
      if ( !Instance )
        goto LABEL_173;
      TerminalSceneComponent__QuestInfoShowing((TerminalSceneComponent_o *)Instance, 0);
      if ( !byte_4C319B6 )
      {
        sub_1C32C20(&TerminalSceneComponent_TypeInfo);
        byte_4C319B6 = 1;
      }
      v47 = TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v47 = TerminalSceneComponent_TypeInfo;
      }
      Instance = (CommonUI_o *)v47->static_fields->mInstance;
      if ( !Instance )
        goto LABEL_173;
      TerminalSceneComponent__CallQuestInformationClose((TerminalSceneComponent_o *)Instance, 0);
      QuestBoardListViewManager__SetShowingInfoAllOff(this, v48);
      Instance = (CommonUI_o *)*v9;
      if ( !*v9 )
        goto LABEL_173;
      v49 = this->fields.mTerminalList;
      Instance = (CommonUI_o *)ListViewObject__get_Index((ListViewObject_o *)Instance, 0);
      if ( !v49 )
        goto LABEL_173;
      ScrTerminalListTop__Click_WarBoard(v49, v16, (int32_t)Instance, 0);
      return;
    case 6:
      v41 = Method_QuestBoardListViewManager_OnClickListView__;
      if ( (*((_BYTE *)Method_QuestBoardListViewManager_OnClickListView__ + 83) & 2) != 0 )
        v41 = (_QWORD *)sub_1C32C38(Method_QuestBoardListViewManager_OnClickListView__);
      v42 = (System_Reflection_MethodBase_o *)sub_1C32C04(v41, v41[4]);
      OverwriteAssetSoundName__PlaySystemSe(v42, 0, 0, 0);
      v43 = MapControl_QuestInfo__GetSpotID(v16, 0);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C342B1 )
      {
        sub_1C32C20(&TerminalPramsManager_TypeInfo);
        byte_4C342B1 = 1;
      }
      v31 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v31 = TerminalPramsManager_TypeInfo;
      }
      v31->static_fields->_SpotId_k__BackingField = v43;
      v30 = *(_DWORD *)(v14 + 156);
      if ( !byte_4C3367F )
      {
        sub_1C32C20(&TerminalPramsManager_TypeInfo);
        v31 = TerminalPramsManager_TypeInfo;
        byte_4C3367F = 1;
      }
      goto LABEL_69;
    default:
      return;
  }
}


void QuestBoardListViewManager__OnCompleteAssetData(
        QuestBoardListViewManager_o *this,
        AssetData_o *loadedAssetData,
        System_Action_o *onCompleteLoad,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x1

  this->fields.effectAssetData = loadedAssetData;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)&this->fields.effectAssetData,
    (int32_t)loadedAssetData,
    (int32_t)onCompleteLoad,
    method);
  QuestBoardListViewManager__SetupBlackMark(this, v6);
  QuestBoardListViewManager__SetupBoardAppearAndDisappearEffect(this, v7);
  QuestBoardListViewManager__SetupWhiteMark(this, v8);
  QuestBoardListViewManager__SetupQuestBoardEffectController(this, v9);
  ActionExtensions__Call(onCompleteLoad, 0);
}


void QuestBoardListViewManager__OnStartFadeOutAlphaAnim(QuestBoardListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  System_Collections_Generic_List_Enumerator_object__o v4; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C3468F & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_QuestBoardListViewObject__GetEnumerator__);
    byte_4C3468F = 1;
  }
  memset(&v4, 0, sizeof(v4));
  ObjectList = (System_Collections_Generic_List_object__o *)QuestBoardListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    sub_1C32E7C(0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v4,
    ObjectList,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_QuestBoardListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v4,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__MoveNext__) )
  {
    if ( !v4.fields._current )
      sub_1C32E7C(0);
    QuestBoardListViewObject__OnStartFadeOutAlphaAnim((QuestBoardListViewObject_o *)v4.fields._current, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v4,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__Dispose__);
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

  if ( (byte_4C3469E & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3469E = 1;
  }
  effectAppearComponent = (UnityEngine_Object_o *)this->fields.effectAppearComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_GameObject_o *v9; // x22
  UnityEngine_GameObject_o *v10; // x0
  float LocalPositionY; // s0
  UnityEngine_Transform_o *v12; // x22
  QuestBoardListViewManager_o *v13; // x0
  const MethodInfo *v14; // x4

  if ( (byte_4C3469F & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3469F = 1;
  }
  effectAppearComponent = (UnityEngine_Object_o *)this->fields.effectAppearComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    v9 = (UnityEngine_GameObject_o *)gameObject;
    v10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.effectAppearComponent, 0);
    LocalPositionY = GameObjectExtensions__GetLocalPositionY(v10, 0);
    GameObjectExtensions__SetLocalPositionY(v9, LocalPositionY, 0);
    gameObject = (UnityEngine_Component_o *)this->fields.effectAppearComponent;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0),
          !this->fields.onEffectPanel)
      || (v12 = (UnityEngine_Transform_o *)gameObject,
          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this->fields.onEffectPanel,
                                                    0),
          !v12) )
    {
LABEL_13:
      sub_1C32E7C(gameObject);
    }
    UnityEngine_Transform__SetParent_71246900(v12, (UnityEngine_Transform_o *)gameObject, 1, 0);
    QuestBoardListViewManager__PlayBoardEffect(
      v13,
      (QuestBoardListEffectComponent_o *)this->fields.effectAppearComponent,
      playingCallback1,
      endAct,
      v14);
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

  if ( (byte_4C346A0 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C346A0 = 1;
  }
  effectAppearFadeComponent = (UnityEngine_Object_o *)this->fields.effectAppearFadeComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
  UnityEngine_Object_o *effectDisappear2BbComponent; // x22
  UnityEngine_Object_o *v9; // x22
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_GameObject_o *v11; // x22
  UnityEngine_GameObject_o *v12; // x0
  float v13; // s0
  UnityEngine_Transform_o *v14; // x22
  QuestBoardListViewManager_o *v15; // x0
  const MethodInfo *v16; // x4
  QuestBoardListEffectComponent_o *v17; // x1
  UnityEngine_GameObject_o *v18; // x22
  UnityEngine_GameObject_o *v19; // x0
  float LocalPositionY; // s0
  UnityEngine_Transform_o *v21; // x22

  if ( (byte_4C346AA & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C346AA = 1;
  }
  effectDisappear2Component = (UnityEngine_Object_o *)this->fields.effectDisappear2Component;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(effectDisappear2Component, 0, 0) )
  {
    effectDisappear2BbComponent = (UnityEngine_Object_o *)this->fields.effectDisappear2BbComponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(effectDisappear2BbComponent, 0, 0) )
    {
      ActionExtensions__Call(playingCallback, 0);
      ActionExtensions__Call(endAct, 0);
      return;
    }
  }
  v9 = (UnityEngine_Object_o *)this->fields.effectDisappear2Component;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(v9, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.effectDisappear2BbComponent;
    if ( gameObject )
    {
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
      if ( this->fields.effectDisappear2BbComponent )
      {
        v18 = (UnityEngine_GameObject_o *)gameObject;
        v19 = UnityEngine_Component__get_gameObject(
                (UnityEngine_Component_o *)this->fields.effectDisappear2BbComponent,
                0);
        LocalPositionY = GameObjectExtensions__GetLocalPositionY(v19, 0);
        GameObjectExtensions__SetLocalPositionY(v18, LocalPositionY, 0);
        gameObject = (UnityEngine_Component_o *)this->fields.effectDisappear2BbComponent;
        if ( gameObject )
        {
          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0);
          if ( this->fields.onEffectPanel )
          {
            v21 = (UnityEngine_Transform_o *)gameObject;
            gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                      (UnityEngine_Component_o *)this->fields.onEffectPanel,
                                                      0);
            if ( v21 )
            {
              UnityEngine_Transform__SetParent_71246900(v21, (UnityEngine_Transform_o *)gameObject, 1, 0);
              v17 = (QuestBoardListEffectComponent_o *)this->fields.effectDisappear2BbComponent;
              goto LABEL_25;
            }
          }
        }
      }
    }
LABEL_26:
    sub_1C32E7C(gameObject);
  }
  gameObject = (UnityEngine_Component_o *)this->fields.effectDisappear2Component;
  if ( !gameObject )
    goto LABEL_26;
  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
  if ( !this->fields.effectDisappear2Component )
    goto LABEL_26;
  v11 = (UnityEngine_GameObject_o *)gameObject;
  v12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.effectDisappear2Component, 0);
  v13 = GameObjectExtensions__GetLocalPositionY(v12, 0);
  GameObjectExtensions__SetLocalPositionY(v11, v13, 0);
  gameObject = (UnityEngine_Component_o *)this->fields.effectDisappear2Component;
  if ( !gameObject )
    goto LABEL_26;
  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0);
  if ( !this->fields.onEffectPanel )
    goto LABEL_26;
  v14 = (UnityEngine_Transform_o *)gameObject;
  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                            (UnityEngine_Component_o *)this->fields.onEffectPanel,
                                            0);
  if ( !v14 )
    goto LABEL_26;
  UnityEngine_Transform__SetParent_71246900(v14, (UnityEngine_Transform_o *)gameObject, 1, 0);
  v17 = this->fields.effectDisappear2Component;
LABEL_25:
  QuestBoardListViewManager__PlayBoardEffect(v15, v17, playingCallback, endAct, v16);
}


void QuestBoardListViewManager__PlayBoardDisappear2Effect(
        QuestBoardListViewManager_o *this,
        System_Action_o *playingCallback1,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  UnityEngine_Object_o *effectDisappear2Component; // x22
  UnityEngine_Object_o *effectDisappear2BbComponent; // x22
  UnityEngine_Object_o *v9; // x22
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_GameObject_o *v11; // x22
  UnityEngine_GameObject_o *v12; // x0
  float v13; // s8
  QuestBoardListViewItemDraw_c *v14; // x0
  int v15; // w8
  int v16; // w8
  UnityEngine_Transform_o *v17; // x22
  QuestBoardListViewManager_o *v18; // x0
  const MethodInfo *v19; // x4
  QuestBoardListEffectComponent_o *v20; // x1
  UnityEngine_GameObject_o *v21; // x22
  UnityEngine_GameObject_o *v22; // x0
  float LocalPositionY; // s8
  QuestBoardListViewItemDraw_c *v24; // x0
  int POS_Y_ITVL_AREA; // w8
  int v26; // w8
  UnityEngine_Transform_o *v27; // x22

  if ( (byte_4C346A9 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&QuestBoardListViewItemDraw_TypeInfo);
    byte_4C346A9 = 1;
  }
  effectDisappear2Component = (UnityEngine_Object_o *)this->fields.effectDisappear2Component;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(effectDisappear2Component, 0, 0) )
  {
    effectDisappear2BbComponent = (UnityEngine_Object_o *)this->fields.effectDisappear2BbComponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(effectDisappear2BbComponent, 0, 0) )
    {
      ActionExtensions__Call(playingCallback1, 0);
      ActionExtensions__Call(endAct, 0);
      return;
    }
  }
  v9 = (UnityEngine_Object_o *)this->fields.effectDisappear2Component;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(v9, 0, 0) )
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
        v24 = QuestBoardListViewItemDraw_TypeInfo;
        if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          v24 = QuestBoardListViewItemDraw_TypeInfo;
        }
        POS_Y_ITVL_AREA = v24->static_fields->POS_Y_ITVL_AREA;
        v26 = POS_Y_ITVL_AREA <= 0 ? -POS_Y_ITVL_AREA : 1 - POS_Y_ITVL_AREA;
        GameObjectExtensions__SetLocalPositionY(v21, LocalPositionY + (float)(v26 >> 1), 0);
        gameObject = (UnityEngine_Component_o *)this->fields.effectDisappear2BbComponent;
        if ( gameObject )
        {
          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0);
          if ( this->fields.onEffectPanel )
          {
            v27 = (UnityEngine_Transform_o *)gameObject;
            gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                      (UnityEngine_Component_o *)this->fields.onEffectPanel,
                                                      0);
            if ( v27 )
            {
              UnityEngine_Transform__SetParent_71246900(v27, (UnityEngine_Transform_o *)gameObject, 1, 0);
              v20 = (QuestBoardListEffectComponent_o *)this->fields.effectDisappear2BbComponent;
              goto LABEL_35;
            }
          }
        }
      }
    }
LABEL_36:
    sub_1C32E7C(gameObject);
  }
  gameObject = (UnityEngine_Component_o *)this->fields.effectDisappear2Component;
  if ( !gameObject )
    goto LABEL_36;
  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
  if ( !this->fields.effectDisappear2Component )
    goto LABEL_36;
  v11 = (UnityEngine_GameObject_o *)gameObject;
  v12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.effectDisappear2Component, 0);
  v13 = GameObjectExtensions__GetLocalPositionY(v12, 0);
  v14 = QuestBoardListViewItemDraw_TypeInfo;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v14 = QuestBoardListViewItemDraw_TypeInfo;
  }
  v15 = v14->static_fields->POS_Y_ITVL_AREA;
  v16 = v15 <= 0 ? -v15 : 1 - v15;
  GameObjectExtensions__SetLocalPositionY(v11, v13 + (float)(v16 >> 1), 0);
  gameObject = (UnityEngine_Component_o *)this->fields.effectDisappear2Component;
  if ( !gameObject )
    goto LABEL_36;
  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0);
  if ( !this->fields.onEffectPanel )
    goto LABEL_36;
  v17 = (UnityEngine_Transform_o *)gameObject;
  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                            (UnityEngine_Component_o *)this->fields.onEffectPanel,
                                            0);
  if ( !v17 )
    goto LABEL_36;
  UnityEngine_Transform__SetParent_71246900(v17, (UnityEngine_Transform_o *)gameObject, 1, 0);
  v20 = this->fields.effectDisappear2Component;
LABEL_35:
  QuestBoardListViewManager__PlayBoardEffect(v18, v20, playingCallback1, endAct, v19);
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

  if ( (byte_4C346A8 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C346A8 = 1;
  }
  effectDisappearComponent = (UnityEngine_Object_o *)this->fields.effectDisappearComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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

  if ( (byte_4C346A7 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C346A7 = 1;
  }
  effectDisappearFadeComponent = (UnityEngine_Object_o *)this->fields.effectDisappearFadeComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Action_o **v12; // x23
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Action_o **v15; // x21
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  UnityEngine_Object_o *v18; // x20
  QuestBoardListEffectComponent_o *v19; // x20
  System_Action_o *v20; // x21
  System_Action_o *v21; // x22
  const MethodInfo *v22; // x3

  if ( (byte_4C346AB & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_QuestBoardListViewManager___c__DisplayClass181_0__PlayBoardEffect_b__0__);
    sub_1C32C20(&Method_QuestBoardListViewManager___c__DisplayClass181_0__PlayBoardEffect_b__1__);
    sub_1C32C20(&QuestBoardListViewManager___c__DisplayClass181_0_TypeInfo);
    byte_4C346AB = 1;
  }
  v8 = sub_1C32E6C(QuestBoardListViewManager___c__DisplayClass181_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0);
  if ( !v8 )
    goto LABEL_14;
  *(_QWORD *)(v8 + 16) = playingCallback1;
  v12 = (System_Action_o **)(v8 + 16);
  sub_1C32BC4((CGThumbnailListItem_o *)(v8 + 16), (int32_t)playingCallback1, v10, v11);
  *(_QWORD *)(v8 + 24) = effectComponent;
  sub_1C32BC4((CGThumbnailListItem_o *)(v8 + 24), (int32_t)effectComponent, v13, v14);
  *(_QWORD *)(v8 + 32) = endAct;
  v15 = (System_Action_o **)(v8 + 32);
  sub_1C32BC4((CGThumbnailListItem_o *)(v8 + 32), (int32_t)endAct, v16, v17);
  v18 = *(UnityEngine_Object_o **)(v8 + 24);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v18, 0, 0) )
  {
    v19 = *(QuestBoardListEffectComponent_o **)(v8 + 24);
    v20 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(
      v20,
      (Il2CppObject *)v8,
      Method_QuestBoardListViewManager___c__DisplayClass181_0__PlayBoardEffect_b__0__,
      0);
    v21 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(
      v21,
      (Il2CppObject *)v8,
      Method_QuestBoardListViewManager___c__DisplayClass181_0__PlayBoardEffect_b__1__,
      0);
    if ( v19 )
    {
      QuestBoardListEffectComponent__Play(v19, v20, v21, v22);
      return;
    }
LABEL_14:
    sub_1C32E7C(v9);
  }
  if ( *v12 )
    ActionExtensions__Call(*v12, 0);
  if ( *v15 )
    ActionExtensions__Call(*v15, 0);
}


void QuestBoardListViewManager__ReleaseAsset(QuestBoardListViewManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  AssetData_o *fortificationAssetData; // x20
  CGThumbnailListItem_o *p_fortificationAssetData; // x19
  int32_t v21; // w2
  const MethodInfo *v22; // x3

  if ( (byte_4C346AC & 1) == 0 )
  {
    sub_1C32C20(&AssetManager_TypeInfo);
    byte_4C346AC = 1;
  }
  this->fields.blackMarkPrefab = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.blackMarkPrefab, 0, v2, v3);
  this->fields.whiteMarkPrefab = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.whiteMarkPrefab, 0, v5, v6);
  this->fields.fortificationWarningDialog = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.fortificationWarningDialog, 0, v7, v8);
  this->fields.boardAppearEffectPrefab = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.boardAppearEffectPrefab, 0, v9, v10);
  this->fields.boardAppearEffectFadePrefab = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.boardAppearEffectFadePrefab, 0, v11, v12);
  this->fields.boardDisappearEffectPrefab = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.boardDisappearEffectPrefab, 0, v13, v14);
  this->fields.boardDisappear2EffectPrefab = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.boardDisappear2EffectPrefab, 0, v15, v16);
  this->fields.boardDisappearEffectFadePrefab = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.boardDisappearEffectFadePrefab, 0, v17, v18);
  fortificationAssetData = this->fields.fortificationAssetData;
  p_fortificationAssetData = (CGThumbnailListItem_o *)&this->fields.fortificationAssetData;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAsset_40435328(fortificationAssetData, 0);
  p_fortificationAssetData->klass = 0;
  sub_1C32BC4(p_fortificationAssetData, 0, v21, v22);
}


void QuestBoardListViewManager__ReleaseTerminalAsset(QuestBoardListViewManager_o *this, const MethodInfo *method)
{
  AssetData_o *effectAssetData; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  AssetData_o *RoadmapAssetData_k__BackingField; // x20
  CGThumbnailListItem_o *p_RoadmapAssetData_k__BackingField; // x19
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C346AD & 1) == 0 )
  {
    sub_1C32C20(&AssetManager_TypeInfo);
    byte_4C346AD = 1;
  }
  effectAssetData = this->fields.effectAssetData;
  if ( effectAssetData )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_40435328(effectAssetData, 0);
    this->fields.effectAssetData = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.effectAssetData, 0, v4, v5);
  }
  RoadmapAssetData_k__BackingField = this->fields._RoadmapAssetData_k__BackingField;
  p_RoadmapAssetData_k__BackingField = (CGThumbnailListItem_o *)&this->fields._RoadmapAssetData_k__BackingField;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAsset_40435328(RoadmapAssetData_k__BackingField, 0);
  p_RoadmapAssetData_k__BackingField->klass = 0;
  sub_1C32BC4(p_RoadmapAssetData_k__BackingField, 0, v8, v9);
}


void QuestBoardListViewManager__RemoveTempBG(QuestBoardListViewManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mFolderBgTemp; // x20
  UnityEngine_Component_o **p_mFolderBgTemp; // x19
  UnityEngine_Object_o *gameObject; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C34694 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C34694 = 1;
  }
  mFolderBgTemp = (UnityEngine_Object_o *)this->fields.mFolderBgTemp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mFolderBgTemp, 0, 0) )
  {
    p_mFolderBgTemp = (UnityEngine_Component_o **)&this->fields.mFolderBgTemp;
    if ( !*p_mFolderBgTemp )
      sub_1C32E7C(0);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_mFolderBgTemp, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71223640(gameObject, 0);
    *p_mFolderBgTemp = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)p_mFolderBgTemp, 0, v6, v7);
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
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x3
  System_Action_o *v21; // x0
  intptr_t *v22; // x8
  __int64 v23; // x23
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  __int64 v26; // x24
  const MethodInfo *v27; // x3
  const MethodInfo *v28; // x2
  float exitTime; // s0
  System_Action_o *v30; // x20
  const MethodInfo *v31; // x2
  const MethodInfo *v32; // x2
  System_Action_o *v33; // x20
  const MethodInfo *v34; // x6
  const MethodInfo *v35; // x2
  int v36; // w20
  Il2CppObject *v37; // x21
  AvalonSceneManager_c *v38; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v40; // x22
  CommonUI_o *v41; // x0
  int32_t v42; // w1
  float v43; // s0
  System_Action_o *v44; // x2
  int v45; // w20
  Il2CppObject *v46; // x22
  AvalonSceneManager_c *v47; // x8
  float v48; // s8
  System_Action_o *v49; // x23

  if ( (byte_4C34683 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&AvalonSceneManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    sub_1C32C20(&Method_QuestBoardListViewManager___c__DisplayClass123_0__RequestListObject_b__0__);
    sub_1C32C20(&Method_QuestBoardListViewManager___c__DisplayClass123_0__RequestListObject_b__1__);
    sub_1C32C20(&Method_QuestBoardListViewManager___c__DisplayClass123_0__RequestListObject_b__8__);
    sub_1C32C20(&Method_QuestBoardListViewManager___c__DisplayClass123_0__RequestListObject_b__9__);
    sub_1C32C20(&QuestBoardListViewManager___c__DisplayClass123_0_TypeInfo);
    sub_1C32C20(&Method_QuestBoardListViewManager___c__DisplayClass123_2__RequestListObject_b__7__);
    sub_1C32C20(&QuestBoardListViewManager___c__DisplayClass123_2_TypeInfo);
    byte_4C34683 = 1;
  }
  v13 = sub_1C32E6C(QuestBoardListViewManager___c__DisplayClass123_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0);
  if ( !v13 )
    goto LABEL_45;
  *(_QWORD *)(v13 + 16) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v13 + 16), (int32_t)this, v15, v16);
  *(_QWORD *)(v13 + 32) = end_act;
  sub_1C32BC4((CGThumbnailListItem_o *)(v13 + 32), (int32_t)end_act, v17, v18);
  *(_BYTE *)(v13 + 40) = isNotInit;
  if ( !isNotInit )
    QuestBoardListViewManager__InitListObject(this, mode, v19);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_45;
  *(_BYTE *)(v13 + 24) = CommonUI__maskFadeIsOnTop(Instance, 0);
  switch ( this->fields.initMode )
  {
    case 3:
      this->fields.mIsDoing_Slide = 1;
      v21 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
      v22 = &Method_QuestBoardListViewManager___c__DisplayClass123_0__RequestListObject_b__0__;
      goto LABEL_19;
    case 4:
      v23 = sub_1C32E6C(QuestBoardListViewManager___c__DisplayClass123_2_TypeInfo);
      System_Object___ctor((Il2CppObject *)v23, 0);
      if ( !v23 )
        goto LABEL_45;
      *(_QWORD *)(v23 + 24) = v13;
      v26 = v23 + 24;
      sub_1C32BC4((CGThumbnailListItem_o *)(v23 + 24), v13, v24, v25);
      this->fields.mIsDoing_Slide = 1;
      *(_DWORD *)(v23 + 16) = 0;
      QuestBoardListViewManager__ModifyAllRoadmapButtons(this, 0, 1, v27);
      if ( !isFade )
        goto LABEL_48;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Instance = (CommonUI_o *)TerminalPramsManager__IsAuto(0);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
LABEL_48:
        if ( *(_QWORD *)v26 )
        {
          if ( *(_BYTE *)(*(_QWORD *)v26 + 24LL) )
          {
            exitTime = *(float *)(v23 + 16);
          }
          else
          {
            exitTime = this->fields.exitTime;
            *(float *)(v23 + 16) = exitTime;
          }
          QuestBoardListViewManager__bgAlphaFade(this, this->fields.initMode, exitTime, v28);
          if ( *(_QWORD *)v26 )
          {
            QuestBoardListViewManager__SetSlideOut(
              this,
              *(float *)(v23 + 16),
              *(System_Action_o **)(*(_QWORD *)v26 + 32LL),
              v35);
            goto LABEL_43;
          }
        }
LABEL_45:
        sub_1C32E7C(Instance);
      }
      this->fields.mFaded = 1;
      if ( isBlackFade )
        v36 = 1;
      else
        v36 = 2;
      v37 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v38 = AvalonSceneManager_TypeInfo;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v38 = AvalonSceneManager_TypeInfo;
      }
      DEFAULT_FADE_TIME = v38->static_fields->DEFAULT_FADE_TIME;
      v40 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
      System_Action___ctor(
        v40,
        (Il2CppObject *)v23,
        Method_QuestBoardListViewManager___c__DisplayClass123_2__RequestListObject_b__7__,
        0);
      if ( !v37 )
        goto LABEL_45;
      v41 = (CommonUI_o *)v37;
      v42 = v36;
      v43 = DEFAULT_FADE_TIME;
      v44 = v40;
LABEL_42:
      CommonUI__maskFadeout(v41, v42, v43, v44, 0);
LABEL_43:
      Instance = (CommonUI_o *)this->fields.mNoneLabelParent;
      if ( !Instance )
        goto LABEL_45;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
      return;
    case 5:
      this->fields.mIsDoing_Slide = 0;
      QuestBoardListViewManager__ModifyAllRoadmapButtons(this, 1, 1, v20);
      v21 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
      v22 = &Method_QuestBoardListViewManager___c__DisplayClass123_0__RequestListObject_b__1__;
LABEL_19:
      v30 = v21;
      System_Action___ctor(v21, (Il2CppObject *)v13, *v22, 0);
      QuestBoardListViewManager__changeBG(this, v30, v31);
      return;
    case 6:
      this->fields.mIsDoing_Slide = 0;
      QuestBoardListViewManager__ModifyAllRoadmapButtons(this, 0, 1, v20);
      if ( !isFade )
        goto LABEL_24;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( TerminalPramsManager__IsAuto(0) )
      {
LABEL_24:
        QuestBoardListViewManager__bgAlphaFade(this, this->fields.initMode, 0.0, v32);
        v33 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
        System_Action___ctor(
          v33,
          (Il2CppObject *)v13,
          Method_QuestBoardListViewManager___c__DisplayClass123_0__RequestListObject_b__8__,
          0);
        QuestBoardListViewManager__SetMode(this, 2, v33, 0, 0, 0, v34);
        goto LABEL_43;
      }
      this->fields.mFaded = 1;
      if ( isBlackFade )
        v45 = 1;
      else
        v45 = 2;
      v46 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v47 = AvalonSceneManager_TypeInfo;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v47 = AvalonSceneManager_TypeInfo;
      }
      v48 = v47->static_fields->DEFAULT_FADE_TIME;
      v49 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
      System_Action___ctor(
        v49,
        (Il2CppObject *)v13,
        Method_QuestBoardListViewManager___c__DisplayClass123_0__RequestListObject_b__9__,
        0);
      if ( !v46 )
        goto LABEL_45;
      v41 = (CommonUI_o *)v46;
      v42 = v45;
      v43 = v48;
      v44 = v49;
      goto LABEL_42;
    default:
      ActionExtensions__Call(*(System_Action_o **)(v13 + 32), 0);
      return;
  }
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
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  QuestBoardListViewManager_o *v12; // x0
  const MethodInfo *v13; // x3
  int32_t id; // w21
  int32_t v15; // w22
  NetworkManager_ResultCallbackFunc_o *v16; // x19
  int32_t flagType; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C3468D & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&Method_NetworkManager_getRequest_TutorialEventSetRequest___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C32C20(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C32C20(&Method_QuestBoardListViewManager___c__DisplayClass137_0__RequestToRaiseTutorialFlag_b__0__);
    sub_1C32C20(&QuestBoardListViewManager___c__DisplayClass137_0_TypeInfo);
    byte_4C3468D = 1;
  }
  flagType = 0;
  v8 = sub_1C32E6C(QuestBoardListViewManager___c__DisplayClass137_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0);
  if ( !v8 )
    goto LABEL_17;
  *(_QWORD *)(v8 + 16) = clickAreaFunc;
  sub_1C32BC4((CGThumbnailListItem_o *)(v8 + 16), (int32_t)clickAreaFunc, v10, v11);
  FlagFromOnEventStart = (Il2CppObject *)QuestBoardListViewManager__TryGetFlagFromOnEventStart(
                                           v12,
                                           &flagType,
                                           eventEntity,
                                           v13);
  if ( ((unsigned __int8)FlagFromOnEventStart & 1) != 0 )
  {
    if ( !eventEntity )
      goto LABEL_17;
    id = eventEntity->fields.id;
    v15 = flagType;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( !CondType__IsEventTutorialFlagOn(id, v15, 0) )
    {
      FlagFromOnEventStart = SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !FlagFromOnEventStart )
        goto LABEL_17;
      if ( QuestTree__IsWarOpen((QuestTree_o *)FlagFromOnEventStart, warId, 0) )
      {
        v16 = (NetworkManager_ResultCallbackFunc_o *)sub_1C32E6C(NetworkManager_ResultCallbackFunc_TypeInfo);
        NetworkManager_ResultCallbackFunc___ctor(
          v16,
          (Il2CppObject *)v8,
          Method_QuestBoardListViewManager___c__DisplayClass137_0__RequestToRaiseTutorialFlag_b__0__,
          0);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        FlagFromOnEventStart = NetworkManager__getRequest_object_(
                                 v16,
                                 (const MethodInfo_3168488 *)Method_NetworkManager_getRequest_TutorialEventSetRequest___);
        if ( FlagFromOnEventStart )
        {
          TutorialEventSetRequest__beginRequest((TutorialEventSetRequest_o *)FlagFromOnEventStart, v15, id, 0);
          return 1;
        }
LABEL_17:
        sub_1C32E7C(FlagFromOnEventStart);
      }
    }
  }
  return 0;
}


void QuestBoardListViewManager__ResetAlphaAnimTime(QuestBoardListViewManager_o *this, const MethodInfo *method)
{
  QuestBoardListViewManager_c *v3; // x0
  float v4; // s8
  System_Func_float__float__float__float__o *v5; // x20
  AlphaTransitionCalculator_o *v6; // x21
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  AlphaTransitionCalculator_o *rewardIconAlphaCalculator; // x0

  if ( (byte_4C3468B & 1) == 0 )
  {
    sub_1C32C20(&AlphaTransitionCalculator_TypeInfo);
    sub_1C32C20(&QuestBoardListViewManager_TypeInfo);
    byte_4C3468B = 1;
  }
  this->fields.mAlphaAnimNow = 1.0;
  this->fields.mAlphaAnimTimeOld = UnityEngine_Time__get_realtimeSinceStartup(0);
  v3 = QuestBoardListViewManager_TypeInfo;
  if ( !QuestBoardListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewManager_TypeInfo);
    v3 = QuestBoardListViewManager_TypeInfo;
  }
  v4 = ChangedFPSUtil__CovertFrameNumToSecond(v3->static_fields->REWARD_ICON_FADE_FRAME_NUM, 0);
  v5 = ExtraEasing__AsymptoticSeriesFloat(
         QuestBoardListViewManager_TypeInfo->static_fields->ALPHA_ANIM_SPD_RATE,
         (float)QuestBoardListViewManager_TypeInfo->static_fields->REWARD_ICON_FADE_FRAME_NUM,
         0);
  v6 = (AlphaTransitionCalculator_o *)sub_1C32E6C(AlphaTransitionCalculator_TypeInfo);
  AlphaTransitionCalculator___ctor(v6, v4, v5, 0);
  this->fields.rewardIconAlphaCalculator = v6;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.rewardIconAlphaCalculator, (int32_t)v6, v7, v8);
  rewardIconAlphaCalculator = this->fields.rewardIconAlphaCalculator;
  if ( !rewardIconAlphaCalculator )
    sub_1C32E7C(0);
  AlphaTransitionCalculator__MakeFadeInFinished(rewardIconAlphaCalculator, 0);
}


void QuestBoardListViewManager__ResetBG(QuestBoardListViewManager_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *mFolderBg; // x0

  mFolderBg = (UnityEngine_Component_o *)this->fields.mFolderBg;
  this->fields.mRequestedBGid = 0;
  if ( !mFolderBg
    || (mFolderBg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mFolderBg, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mFolderBg, 0, 0),
        (mFolderBg = (UnityEngine_Component_o *)this->fields.mFolderBg) == 0) )
  {
    sub_1C32E7C(mFolderBg);
  }
  ExUITexture__ClearImage((ExUITexture_o *)mFolderBg, 0);
}


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
  Il2CppObject *current; // x21
  _BOOL8 v11; // x0
  Il2CppObject *Component_object; // x22
  _BOOL8 v13; // x0
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+20h] [xbp-70h] BYREF

  v6 = this;
  if ( (byte_4C346AF & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_UITouchPress___);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_QuestBoardListViewObject__GetEnumerator__);
    this = (QuestBoardListViewManager_o *)sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C346AF = 1;
  }
  memset(&v15, 0, sizeof(v15));
  mTerminalScene = v6->fields.mTerminalScene;
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
    if ( !ScrTerminalListTop__get_IsActiveBlankEarth((ScrTerminalListTop_o *)this, 0) && !isForcedActive )
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
    sub_1C32E7C(this);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v14,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_QuestBoardListViewObject__GetEnumerator__);
  v15 = v14;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v15,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__MoveNext__) )
  {
    current = v15.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v11 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v11 )
    {
      if ( !current )
        sub_1C32E7C(v11);
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)current,
                           (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_UITouchPress___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v13 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
      if ( v13 )
      {
        if ( !Component_object )
          sub_1C32E7C(v13);
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, isActive, 0);
      }
      if ( isActive && QuestBoardListViewObject__IsDummy((QuestBoardListViewObject_o *)current, 0) )
        QuestBoardListViewObject__SetBackPanel((QuestBoardListViewObject_o *)current, v6->fields.mTerminalList, 0);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v15,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__Dispose__);
}


void QuestBoardListViewManager__SetCenterItem(
        QuestBoardListViewManager_o *this,
        int32_t item_index,
        bool isAnimation,
        float forceShiftY,
        const MethodInfo *method)
{
  UnityEngine_Object_o *effectAppearComponent; // x22
  _BOOL8 v10; // x0
  struct QuestBoardListEffectAppearComponent_o *v11; // x8

  if ( (byte_4C34688 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C34688 = 1;
  }
  effectAppearComponent = (UnityEngine_Object_o *)this->fields.effectAppearComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v10 = UnityEngine_Object__op_Inequality(effectAppearComponent, 0, 0);
  if ( v10 )
  {
    v11 = this->fields.effectAppearComponent;
    if ( !v11 )
      sub_1C32E7C(v10);
    forceShiftY = v11->fields.targetBoardForceShiftPosY;
  }
  ListViewManager__MoveCenterItem((ListViewManager_o *)this, item_index, isAnimation, 0, forceShiftY, 0);
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
  UnityEngine_Collider_o *mBoxCollider; // x0
  const MethodInfo *v15; // x6
  bool v16; // w3
  bool v17; // w4
  bool v18; // w5
  int32_t v19; // w1
  QuestBoardListViewManager_o *v20; // x0
  System_Action_o *v21; // x2

  mIsDoing_Slide = this->fields.mIsDoing_Slide;
  if ( mode == 4 )
  {
    if ( !this->fields.mIsDoing_Slide && this->fields.initMode == 2 )
      goto LABEL_9;
    goto LABEL_12;
  }
  if ( mode != 3 )
    goto LABEL_5;
  if ( this->fields.mIsDoing_Slide )
  {
LABEL_12:
    ActionExtensions__Call(end_act, 0);
    return 0;
  }
  mIsDoing_Slide = this->fields.initMode;
LABEL_5:
  if ( mIsDoing_Slide )
    goto LABEL_12;
LABEL_9:
  this->fields.initMode = mode;
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0);
  mBoxCollider = (UnityEngine_Collider_o *)this->fields.mBoxCollider;
  if ( !mBoxCollider )
    sub_1C32E7C(0);
  UnityEngine_Collider__set_enabled(mBoxCollider, this->fields.isInput, 0);
  if ( (unsigned int)(mode - 3) < 4 )
    goto LABEL_11;
  if ( mode == 2 )
  {
    v17 = isNotInit;
    v19 = 3;
    v20 = this;
    goto LABEL_17;
  }
  if ( mode != 1 )
  {
    v17 = isNotInit;
    v20 = this;
    v19 = 0;
LABEL_17:
    v21 = end_act;
    v16 = 0;
    v18 = 0;
    goto LABEL_18;
  }
LABEL_11:
  v16 = isFade;
  v17 = isNotInit;
  v18 = isBlackFade;
  v19 = 2;
  v20 = this;
  v21 = end_act;
LABEL_18:
  QuestBoardListViewManager__RequestListObject(v20, v19, v21, v16, v17, v18, v15);
  return 1;
}


void QuestBoardListViewManager__SetNoneLabelActive(
        QuestBoardListViewManager_o *this,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *mNoneLabelParent; // x0

  mNoneLabelParent = this->fields.mNoneLabelParent;
  if ( !mNoneLabelParent )
    sub_1C32E7C(0);
  UnityEngine_GameObject__SetActive(mNoneLabelParent, isActive, 0);
}


void QuestBoardListViewManager__SetObjectItem(
        QuestBoardListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  QuestBoardListViewManager_o *v5; // x20
  __int64 naturalAligment; // x10
  ListViewSort_c *klass; // x8
  __int64 v8; // x21
  QuestBoardListViewManager_o *v9; // x23
  System_String_o *ActiveStateName; // x22
  Il2CppObject *Component_object; // x19

  v5 = this;
  if ( (byte_4C34680 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_UITouchPress___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&QuestBoardListViewObject_TypeInfo);
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    sub_1C32C20(&TerminalSceneComponent_TypeInfo);
    sub_1C32C20(&StringLiteral_8891/*"Map Touch Disable"*/);
    this = (QuestBoardListViewManager_o *)sub_1C32C20(&StringLiteral_3292/*"CAPTER INIT"*/);
    byte_4C34680 = 1;
  }
  if ( !obj )
    goto LABEL_45;
  naturalAligment = QuestBoardListViewObject_TypeInfo->_2.naturalAligment;
  if ( obj->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (QuestBoardListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != QuestBoardListViewObject_TypeInfo )
  {
    goto LABEL_45;
  }
  if ( v5->fields.initMode != 2 )
  {
    QuestBoardListViewObject__Init((QuestBoardListViewObject_o *)obj, 2, 0);
    return;
  }
  QuestBoardListViewObject__Init((QuestBoardListViewObject_o *)obj, 3, 0);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4C319B6 )
  {
    sub_1C32C20(&TerminalSceneComponent_TypeInfo);
    byte_4C319B6 = 1;
  }
  this = (QuestBoardListViewManager_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    this = (QuestBoardListViewManager_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = this->fields.sort->klass;
  if ( !klass )
    goto LABEL_45;
  this = (QuestBoardListViewManager_o *)v5->fields.mTerminalList;
  if ( !this )
    goto LABEL_45;
  v8 = *(_QWORD *)&klass->_2.static_fields_size;
  this = (QuestBoardListViewManager_o *)ScrTerminalListTop__mfGetMyFsmP((ScrTerminalListTop_o *)this, 0);
  if ( !this )
    goto LABEL_45;
  this = (QuestBoardListViewManager_o *)PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)this, 0);
  if ( !v8 )
    goto LABEL_45;
  v9 = this;
  this = (QuestBoardListViewManager_o *)ScrTerminalMap__mfGetMyFsmP((ScrTerminalMap_o *)v8, 0);
  if ( !this )
    goto LABEL_45;
  ActiveStateName = PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)this, 0);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C346C5 )
  {
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    byte_4C346C5 = 1;
  }
  this = (QuestBoardListViewManager_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    this = (QuestBoardListViewManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !BYTE1(this->fields.sort[3].fields.otherSortKind) )
  {
    if ( !v9 )
      goto LABEL_45;
    if ( (System_String__IndexOf_63576920((System_String_o *)v9, (System_String_o *)StringLiteral_3292/*"CAPTER INIT"*/, 0) & 0x80000000) == 0 )
      return;
    this = *(QuestBoardListViewManager_o **)(v8 + 104);
    if ( !this )
LABEL_45:
      sub_1C32E7C(this);
    this = (QuestBoardListViewManager_o *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0);
    if ( ((unsigned __int8)this & 1) == 0 )
      goto LABEL_36;
    if ( !ActiveStateName )
      goto LABEL_45;
    if ( (System_String__IndexOf_63576920(ActiveStateName, (System_String_o *)StringLiteral_8891/*"Map Touch Disable"*/, 0) & 0x80000000) == 0 )
    {
LABEL_36:
      this = *(QuestBoardListViewManager_o **)(v8 + 104);
      if ( !this )
        goto LABEL_45;
      if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0) )
        goto LABEL_48;
      this = (QuestBoardListViewManager_o *)v5->fields.mTerminalList;
      if ( !this )
        goto LABEL_45;
      if ( ScrTerminalListTop__get_IsActiveBlankEarth((ScrTerminalListTop_o *)this, 0) )
      {
LABEL_48:
        if ( v5->fields._IsShowingInfo_k__BackingField )
        {
          Component_object = UnityEngine_Component__GetComponent_object_(
                               (UnityEngine_Component_o *)obj,
                               (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_UITouchPress___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          this = (QuestBoardListViewManager_o *)UnityEngine_Object__op_Inequality(
                                                  (UnityEngine_Object_o *)Component_object,
                                                  0,
                                                  0);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( Component_object )
            {
              UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0);
              return;
            }
            goto LABEL_45;
          }
        }
        else if ( QuestBoardListViewObject__IsDummy((QuestBoardListViewObject_o *)obj, 0) )
        {
          QuestBoardListViewObject__SetBackPanel((QuestBoardListViewObject_o *)obj, v5->fields.mTerminalList, 0);
        }
      }
    }
  }
}


void QuestBoardListViewManager__SetOutPosition(QuestBoardListViewManager_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  SlideFadeObject_o *v5; // x19
  float v6; // s8
  float v7; // s10
  float v8; // s9
  QuestBoardListViewManager_c *v9; // x0
  float OUT_POS_OFS_X; // s0
  UnityEngine_Vector3_o v11; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C34686 & 1) == 0 )
  {
    sub_1C32C20(&Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
    sub_1C32C20(&QuestBoardListViewManager_TypeInfo);
    byte_4C34686 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_3136458 *)Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
  if ( !Component_object )
    sub_1C32E7C(0);
  v5 = (SlideFadeObject_o *)Component_object;
  v7 = *(float *)&Component_object[4].klass;
  v6 = *((float *)&Component_object[4].klass + 1);
  v8 = *(float *)&Component_object[4].monitor;
  v9 = QuestBoardListViewManager_TypeInfo;
  if ( !QuestBoardListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestBoardListViewManager_TypeInfo);
  OUT_POS_OFS_X = QuestBoardListViewManager__get_OUT_POS_OFS_X((const MethodInfo *)v9);
  v11.fields.y = v6;
  v11.fields.z = v8;
  v11.fields.x = v7 + OUT_POS_OFS_X;
  SlideFadeObject__SetPosition(v5, v11, 0);
}


void QuestBoardListViewManager__SetScrollBarEnable(
        QuestBoardListViewManager_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_Object_o *blockMask; // x22
  CGThumbnailListItem_o *p_blockMask; // x20
  UnityEngine_Object_o *klass; // x19
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  UnityEngine_Object_o *blockMaskPrefab; // x21
  Il2CppObject *v11; // x21
  Il2CppObject *v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  UnityEngine_GameObject_o *v15; // x19

  if ( (byte_4C34673 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C34673 = 1;
  }
  blockMask = (UnityEngine_Object_o *)this->fields.blockMask;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_blockMask = (CGThumbnailListItem_o *)&this->fields.blockMask;
  if ( isEnable )
  {
    if ( UnityEngine_Object__op_Inequality(blockMask, 0, 0) )
    {
      klass = (UnityEngine_Object_o *)p_blockMask->klass;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__DestroyImmediate_71223828(klass, 0);
      p_blockMask->klass = 0;
      sub_1C32BC4(p_blockMask, 0, v8, v9);
    }
  }
  else if ( UnityEngine_Object__op_Equality(blockMask, 0, 0) )
  {
    blockMaskPrefab = (UnityEngine_Object_o *)this->fields.blockMaskPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(blockMaskPrefab, 0, 0) )
    {
      v11 = (Il2CppObject *)this->fields.blockMaskPrefab;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v12 = UnityEngine_Object__Instantiate_object_(
              v11,
              (const MethodInfo_3169758 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      this->fields.blockMask = (struct UnityEngine_GameObject_o *)v12;
      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.blockMask, (int32_t)v12, v13, v14);
      GameObjectExtensions__SafeSetParent(
        this->fields.blockMask,
        (UnityEngine_Component_o *)this->fields.onEffectPanel,
        0);
      v15 = this->fields.blockMask;
      if ( !byte_4C313D1 )
      {
        sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
        byte_4C313D1 = 1;
      }
      GameObjectExtensions__SetLocalPosition(v15, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
    }
  }
}


void QuestBoardListViewManager__SetScrollViewPanelDepth(
        QuestBoardListViewManager_o *this,
        int32_t depth,
        bool isDefault,
        const MethodInfo *method)
{
  UnityEngine_Component_o *scrollView; // x0
  Il2CppObject *Component_object; // x21

  if ( (byte_4C34695 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&QuestBoardListViewManager_TypeInfo);
    byte_4C34695 = 1;
  }
  scrollView = (UnityEngine_Component_o *)this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_14;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       scrollView,
                       (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  scrollView = (UnityEngine_Component_o *)UnityEngine_Object__op_Equality(
                                            (UnityEngine_Object_o *)Component_object,
                                            0,
                                            0);
  if ( ((unsigned __int8)scrollView & 1) == 0 )
  {
    if ( isDefault )
    {
      scrollView = (UnityEngine_Component_o *)QuestBoardListViewManager_TypeInfo;
      if ( !QuestBoardListViewManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(QuestBoardListViewManager_TypeInfo);
      if ( Component_object )
      {
        depth = QuestBoardListViewManager_TypeInfo->static_fields->DEFAULT_SCROLL_VIEW_DEPTH;
LABEL_13:
        UIPanel__set_depth((UIPanel_o *)Component_object, depth, 0);
        return;
      }
    }
    else if ( Component_object )
    {
      goto LABEL_13;
    }
LABEL_14:
    sub_1C32E7C(scrollView);
  }
}


void QuestBoardListViewManager__SetShowingInfo(
        QuestBoardListViewManager_o *this,
        int32_t idx,
        bool onOff,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemList; // x0
  UnityEngine_Object_o *syncRoot; // x21
  __int64 naturalAligment; // x9
  QuestBoardListViewManager_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4C34691 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&QuestBoardListViewObject_TypeInfo);
    byte_4C34691 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_13;
  itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                            itemList,
                                                            idx,
                                                            (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
  if ( !itemList )
    goto LABEL_13;
  syncRoot = (UnityEngine_Object_o *)itemList[2].fields._syncRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  itemList = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Inequality(syncRoot, 0, 0);
  if ( ((unsigned __int8)itemList & 1) == 0 )
    goto LABEL_12;
  if ( !syncRoot )
LABEL_13:
    sub_1C32E7C(itemList);
  naturalAligment = QuestBoardListViewObject_TypeInfo->_2.naturalAligment;
  if ( syncRoot->klass->_2.naturalAligment >= (unsigned int)naturalAligment
    && (QuestBoardListViewObject_c *)syncRoot->klass->_2.typeHierarchy[naturalAligment - 1] == QuestBoardListViewObject_TypeInfo )
  {
    QuestBoardListViewObject__SetInfoShowing((QuestBoardListViewObject_o *)syncRoot, onOff, 0);
LABEL_12:
    this->fields._IsShowingInfo_k__BackingField = onOff;
    return;
  }
  sub_1C3313C(syncRoot);
  QuestBoardListViewManager__RequestConsumeColorReset(v10, v11);
}


void QuestBoardListViewManager__SetShowingInfoAllOff(QuestBoardListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  System_Collections_Generic_List_object__o *v4; // x20
  int32_t v5; // w21

  if ( (byte_4C34690 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_QuestBoardListViewObject__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_QuestBoardListViewObject__get_Item__);
    byte_4C34690 = 1;
  }
  ObjectList = (System_Collections_Generic_List_object__o *)QuestBoardListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    goto LABEL_9;
  v4 = ObjectList;
  if ( ObjectList->fields._size >= 1 )
  {
    v5 = 0;
    while ( 1 )
    {
      ObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  v4,
                                                                  v5,
                                                                  (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_QuestBoardListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      QuestBoardListViewObject__SetInfoShowing((QuestBoardListViewObject_o *)ObjectList, 0, 0);
      if ( ++v5 >= v4->fields._size )
        goto LABEL_8;
    }
LABEL_9:
    sub_1C32E7C(ObjectList);
  }
LABEL_8:
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
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  UnityEngine_GameObject_o *v13; // x0
  Il2CppObject *Component_object; // x0
  SlideFadeObject_o *v15; // x20
  float OUT_POS_OFS_X; // s9
  System_Action_o *v17; // x21

  if ( (byte_4C34684 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
    sub_1C32C20(&QuestBoardListViewManager_TypeInfo);
    sub_1C32C20(&Method_QuestBoardListViewManager___c__DisplayClass124_0__SetSlideOut_b__0__);
    sub_1C32C20(&QuestBoardListViewManager___c__DisplayClass124_0_TypeInfo);
    byte_4C34684 = 1;
  }
  v7 = sub_1C32E6C(QuestBoardListViewManager___c__DisplayClass124_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_9;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v7 + 16), (int32_t)this, v9, v10);
  *(_QWORD *)(v7 + 24) = end_act;
  sub_1C32BC4((CGThumbnailListItem_o *)(v7 + 24), (int32_t)end_act, v11, v12);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_9;
  v13 = UnityEngine_GameObject__get_gameObject(gameObject, 0);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       v13,
                       (const MethodInfo_3136458 *)Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
  v15 = (SlideFadeObject_o *)Component_object;
  if ( !QuestBoardListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestBoardListViewManager_TypeInfo);
  OUT_POS_OFS_X = QuestBoardListViewManager__get_OUT_POS_OFS_X((const MethodInfo *)Component_object);
  v17 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(
    v17,
    (Il2CppObject *)v7,
    Method_QuestBoardListViewManager___c__DisplayClass124_0__SetSlideOut_b__0__,
    0);
  if ( !v15 )
LABEL_9:
    sub_1C32E7C(gameObject);
  SlideFadeObject__SlideOut_36053140(v15, OUT_POS_OFS_X, time, 0.0, v17, 0);
}


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
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  Il2CppObject *current; // x1
  __int64 naturalAligment; // x10
  System_Collections_Generic_List_object__o *v18; // x0
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 v21; // x10
  Il2CppClass **v22; // x8
  System_Collections_Generic_List_object__o *v23; // x0
  struct System_Object_array *v24; // x8
  _QWORD *v25; // x9
  __int64 v26; // x10
  Il2CppClass **v27; // x8
  Il2CppClass *klass; // x8
  _DWORD *interopData; // x8
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+20h] [xbp-70h] BYREF

  v6 = this;
  if ( (byte_4C34678 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__Clear__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    this = (QuestBoardListViewManager_o *)sub_1C32C20(&QuestBoardListViewItem_TypeInfo);
    byte_4C34678 = 1;
  }
  memset(&v31, 0, sizeof(v31));
  if ( targetWarId )
  {
    topItemList = v6->fields.topItemList;
    if ( !topItemList )
      goto LABEL_42;
    size = topItemList->fields._size;
    v9 = topItemList->fields._version + 1;
    topItemList->fields._size = 0;
    topItemList->fields._version = v9;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)topItemList->fields._items, 0, size, 0);
    bottomItemList = v6->fields.bottomItemList;
    if ( !bottomItemList )
      goto LABEL_42;
    v11 = bottomItemList->fields._size;
    v12 = bottomItemList->fields._version + 1;
    bottomItemList->fields._size = 0;
    bottomItemList->fields._version = v12;
    if ( v11 >= 1 )
      System_Array__Clear((System_Array_o *)bottomItemList->fields._items, 0, v11, 0);
    this = (QuestBoardListViewManager_o *)v6->fields.itemList;
    if ( !this )
LABEL_42:
      sub_1C32E7C(this);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v30,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v13 = 1;
    v31 = v30;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v31,
                (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v31,
            (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          return;
        }
        current = v31.fields._current;
        if ( v31.fields._current )
        {
          naturalAligment = QuestBoardListViewItem_TypeInfo->_2.naturalAligment;
          if ( v31.fields._current->klass->_2.naturalAligment >= (unsigned int)naturalAligment
            && (QuestBoardListViewItem_c *)v31.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] == QuestBoardListViewItem_TypeInfo )
          {
            klass = v31.fields._current[8].klass;
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
          v18 = (System_Collections_Generic_List_object__o *)v6->fields.topItemList;
          if ( !v18 )
            sub_1C32E7C(0);
          items = v18->fields._items;
          v20 = Method_System_Collections_Generic_List_ListViewItem__Add__;
          ++v18->fields._version;
          if ( !items )
            sub_1C32E7C(v18);
          v21 = v18->fields._size;
          if ( (unsigned int)v21 >= LODWORD(items->max_length) )
          {
            v13 = 1;
            System_Collections_Generic_List_object___AddWithResize(
              v18,
              current,
              *(const MethodInfo_37987BC **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
          }
          else
          {
            v22 = &items->obj.klass + v21;
            v13 = 1;
            v18->fields._size = v21 + 1;
            v22[4] = (Il2CppClass *)current;
            sub_1C32BC4((CGThumbnailListItem_o *)(v22 + 4), (int32_t)current, v14, v15);
          }
        }
        else
        {
          v23 = (System_Collections_Generic_List_object__o *)v6->fields.bottomItemList;
          if ( !v23 )
            sub_1C32E7C(0);
          v24 = v23->fields._items;
          v25 = Method_System_Collections_Generic_List_ListViewItem__Add__;
          ++v23->fields._version;
          if ( !v24 )
            sub_1C32E7C(v23);
          v26 = v23->fields._size;
          if ( (unsigned int)v26 < LODWORD(v24->max_length) )
            goto LABEL_24;
LABEL_35:
          System_Collections_Generic_List_object___AddWithResize(
            v23,
            current,
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
          v13 = 0;
        }
      }
      v13 = 0;
      if ( isClose )
      {
        v23 = (System_Collections_Generic_List_object__o *)v6->fields.bottomItemList;
        if ( !v23 )
          sub_1C32E7C(0);
        v24 = v23->fields._items;
        v25 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++v23->fields._version;
        if ( !v24 )
          sub_1C32E7C(v23);
        v26 = v23->fields._size;
        if ( (unsigned int)v26 >= LODWORD(v24->max_length) )
          goto LABEL_35;
LABEL_24:
        v27 = &v24->obj.klass + v26;
        v23->fields._size = v26 + 1;
        v27[4] = (Il2CppClass *)current;
        sub_1C32BC4((CGThumbnailListItem_o *)(v27 + 4), (int32_t)current, v14, v15);
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
  UnityEngine_Component_o *QuestBoardObjForWarId; // x21
  UnityEngine_Object_o *boardAppearEffectPrefab; // x20
  Il2CppObject *v7; // x20
  UnityEngine_GameObject_o *transform; // x0
  UnityEngine_GameObject_o *v9; // x20
  UnityEngine_Transform_o *v10; // x22
  UnityEngine_Transform_o *v11; // x21
  UnityEngine_Transform_o *v12; // x21
  UnityEngine_Transform_o *v13; // x21
  Il2CppObject *Component_object; // x0
  struct QuestBoardListEffectAppearComponent_o **p_effectAppearComponent; // x20
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  const MethodInfo *v18; // x2

  if ( (byte_4C3469C & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectAppearComponent___);
    sub_1C32C20(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3469C = 1;
  }
  QuestBoardObjForWarId = (UnityEngine_Component_o *)QuestBoardListViewManager__GetQuestBoardObjForWarId(
                                                       this,
                                                       warId,
                                                       method);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)QuestBoardObjForWarId, 0, 0) )
  {
    boardAppearEffectPrefab = (UnityEngine_Object_o *)this->fields.boardAppearEffectPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(boardAppearEffectPrefab, 0, 0) )
    {
      v7 = (Il2CppObject *)this->fields.boardAppearEffectPrefab;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                v7,
                                                (const MethodInfo_3169758 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( transform )
      {
        v9 = transform;
        transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
        if ( QuestBoardObjForWarId )
        {
          v10 = (UnityEngine_Transform_o *)transform;
          transform = UnityEngine_Component__get_gameObject(QuestBoardObjForWarId, 0);
          if ( transform )
          {
            transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
            if ( v10 )
            {
              UnityEngine_Transform__set_parent(v10, (UnityEngine_Transform_o *)transform, 0);
              transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v9, 0);
              v11 = (UnityEngine_Transform_o *)transform;
              if ( !byte_4C313D1 )
              {
                transform = (UnityEngine_GameObject_o *)sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
                byte_4C313D1 = 1;
              }
              if ( v11 )
              {
                UnityEngine_Transform__set_localPosition(
                  v11,
                  UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
                  0);
                transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v9, 0);
                v12 = (UnityEngine_Transform_o *)transform;
                if ( !byte_4C313D7 )
                {
                  transform = (UnityEngine_GameObject_o *)sub_1C32C20(&UnityEngine_Quaternion_TypeInfo);
                  byte_4C313D7 = 1;
                }
                if ( v12 )
                {
                  UnityEngine_Transform__set_localRotation(
                    v12,
                    UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
                    0);
                  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v9, 0);
                  v13 = (UnityEngine_Transform_o *)transform;
                  if ( !byte_4C313D6 )
                  {
                    transform = (UnityEngine_GameObject_o *)sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
                    byte_4C313D6 = 1;
                  }
                  if ( v13 )
                  {
                    UnityEngine_Transform__set_localScale(
                      v13,
                      UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
                      0);
                    Component_object = UnityEngine_GameObject__GetComponent_object_(
                                         v9,
                                         (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectAppearComponent___);
                    p_effectAppearComponent = &this->fields.effectAppearComponent;
                    this->fields.effectAppearComponent = (struct QuestBoardListEffectAppearComponent_o *)Component_object;
                    sub_1C32BC4(
                      (CGThumbnailListItem_o *)&this->fields.effectAppearComponent,
                      (int32_t)Component_object,
                      v16,
                      v17);
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
                        v18);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
      sub_1C32E7C(transform);
    }
  }
}


void QuestBoardListViewManager__SetUpBoardAppearEffectNT2(
        QuestBoardListViewManager_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  UnityEngine_Component_o *QuestBoardObjForWarId; // x20
  UnityEngine_Object_o *nt2BoardAppearEffectPrefab; // x21
  Il2CppObject *v7; // x21
  UnityEngine_GameObject_o *transform; // x0
  UnityEngine_GameObject_o *v9; // x21
  UnityEngine_Transform_o *v10; // x22
  Il2CppObject *Component_object; // x0
  struct QuestBoardListEffectAppearComponent_o **p_effectAppearComponent; // x20
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x2

  if ( (byte_4C346A4 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectAppearComponent___);
    sub_1C32C20(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C346A4 = 1;
  }
  QuestBoardObjForWarId = (UnityEngine_Component_o *)QuestBoardListViewManager__GetQuestBoardObjForWarId(
                                                       this,
                                                       warId,
                                                       method);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)QuestBoardObjForWarId, 0, 0) )
  {
    nt2BoardAppearEffectPrefab = (UnityEngine_Object_o *)this->fields.nt2BoardAppearEffectPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(nt2BoardAppearEffectPrefab, 0, 0) )
    {
      v7 = (Il2CppObject *)this->fields.nt2BoardAppearEffectPrefab;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                v7,
                                                (const MethodInfo_3169758 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( transform )
      {
        v9 = transform;
        transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
        if ( QuestBoardObjForWarId )
        {
          v10 = (UnityEngine_Transform_o *)transform;
          transform = UnityEngine_Component__get_gameObject(QuestBoardObjForWarId, 0);
          if ( transform )
          {
            transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
            if ( v10 )
            {
              UnityEngine_Transform__set_parent(v10, (UnityEngine_Transform_o *)transform, 0);
              GameObjectExtensions__ResetTransform(v9, 0);
              Component_object = UnityEngine_GameObject__GetComponent_object_(
                                   v9,
                                   (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectAppearComponent___);
              p_effectAppearComponent = &this->fields.effectAppearComponent;
              this->fields.effectAppearComponent = (struct QuestBoardListEffectAppearComponent_o *)Component_object;
              sub_1C32BC4(
                (CGThumbnailListItem_o *)&this->fields.effectAppearComponent,
                (int32_t)Component_object,
                v13,
                v14);
              if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)this->fields.effectAppearComponent, 0, 0) )
                return;
              transform = (UnityEngine_GameObject_o *)*p_effectAppearComponent;
              if ( *p_effectAppearComponent )
              {
                QuestBoardListEffectComponent__Init((QuestBoardListEffectComponent_o *)transform, 0, 0.0, 0.0, v15);
                return;
              }
            }
          }
        }
      }
      sub_1C32E7C(transform);
    }
  }
}


void QuestBoardListViewManager__SetUpBoardAppearFadeEffect(QuestBoardListViewManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *boardAppearEffectFadePrefab; // x20
  Il2CppObject *v4; // x20
  UnityEngine_GameObject_o *transform; // x0
  UnityEngine_GameObject_o *v6; // x20
  UnityEngine_Transform_o *v7; // x21
  UnityEngine_Transform_o *v8; // x21
  UnityEngine_Transform_o *v9; // x21
  UnityEngine_Transform_o *v10; // x21
  Il2CppObject *Component_object; // x0
  struct QuestBoardListEffectComponent_o **p_effectAppearFadeComponent; // x20
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x2

  if ( (byte_4C3469D & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectComponent___);
    sub_1C32C20(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3469D = 1;
  }
  boardAppearEffectFadePrefab = (UnityEngine_Object_o *)this->fields.boardAppearEffectFadePrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(boardAppearEffectFadePrefab, 0, 0) )
  {
    v4 = (Il2CppObject *)this->fields.boardAppearEffectFadePrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                              v4,
                                              (const MethodInfo_3169758 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( transform )
    {
      v6 = transform;
      transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
      if ( this->fields.fadePanel )
      {
        v7 = (UnityEngine_Transform_o *)transform;
        transform = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)this->fields.fadePanel,
                                                  0);
        if ( v7 )
        {
          UnityEngine_Transform__set_parent(v7, (UnityEngine_Transform_o *)transform, 0);
          transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v6, 0);
          v8 = (UnityEngine_Transform_o *)transform;
          if ( !byte_4C313D1 )
          {
            transform = (UnityEngine_GameObject_o *)sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
            byte_4C313D1 = 1;
          }
          if ( v8 )
          {
            UnityEngine_Transform__set_localPosition(v8, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
            transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v6, 0);
            v9 = (UnityEngine_Transform_o *)transform;
            if ( !byte_4C313D7 )
            {
              transform = (UnityEngine_GameObject_o *)sub_1C32C20(&UnityEngine_Quaternion_TypeInfo);
              byte_4C313D7 = 1;
            }
            if ( v9 )
            {
              UnityEngine_Transform__set_localRotation(
                v9,
                UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
                0);
              transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v6, 0);
              v10 = (UnityEngine_Transform_o *)transform;
              if ( !byte_4C313D6 )
              {
                transform = (UnityEngine_GameObject_o *)sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
                byte_4C313D6 = 1;
              }
              if ( v10 )
              {
                UnityEngine_Transform__set_localScale(v10, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
                Component_object = UnityEngine_GameObject__GetComponent_object_(
                                     v6,
                                     (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectComponent___);
                p_effectAppearFadeComponent = &this->fields.effectAppearFadeComponent;
                this->fields.effectAppearFadeComponent = (struct QuestBoardListEffectComponent_o *)Component_object;
                sub_1C32BC4(
                  (CGThumbnailListItem_o *)&this->fields.effectAppearFadeComponent,
                  (int32_t)Component_object,
                  v13,
                  v14);
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
                  QuestBoardListEffectComponent__Init((QuestBoardListEffectComponent_o *)transform, 0, 0.0, 0.0, v15);
                  return;
                }
              }
            }
          }
        }
      }
    }
    sub_1C32E7C(transform);
  }
}


void QuestBoardListViewManager__SetUpBoardAppearFadeEffectNT2(
        QuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *nt2BoardAppearEffectFadePrefab; // x20
  Il2CppObject *v4; // x20
  UnityEngine_GameObject_o *transform; // x0
  UnityEngine_GameObject_o *v6; // x20
  UnityEngine_Transform_o *v7; // x21
  Il2CppObject *Component_object; // x0
  struct QuestBoardListEffectComponent_o **p_effectAppearFadeComponent; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x2

  if ( (byte_4C346A5 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectComponent___);
    sub_1C32C20(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C346A5 = 1;
  }
  nt2BoardAppearEffectFadePrefab = (UnityEngine_Object_o *)this->fields.nt2BoardAppearEffectFadePrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(nt2BoardAppearEffectFadePrefab, 0, 0) )
  {
    v4 = (Il2CppObject *)this->fields.nt2BoardAppearEffectFadePrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                              v4,
                                              (const MethodInfo_3169758 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( transform )
    {
      v6 = transform;
      transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
      if ( this->fields.fadePanel )
      {
        v7 = (UnityEngine_Transform_o *)transform;
        transform = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)this->fields.fadePanel,
                                                  0);
        if ( v7 )
        {
          UnityEngine_Transform__set_parent(v7, (UnityEngine_Transform_o *)transform, 0);
          GameObjectExtensions__ResetTransform(v6, 0);
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               v6,
                               (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectComponent___);
          p_effectAppearFadeComponent = &this->fields.effectAppearFadeComponent;
          this->fields.effectAppearFadeComponent = (struct QuestBoardListEffectComponent_o *)Component_object;
          sub_1C32BC4(
            (CGThumbnailListItem_o *)&this->fields.effectAppearFadeComponent,
            (int32_t)Component_object,
            v10,
            v11);
          if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)this->fields.effectAppearFadeComponent, 0, 0) )
            return;
          transform = (UnityEngine_GameObject_o *)*p_effectAppearFadeComponent;
          if ( *p_effectAppearFadeComponent )
          {
            QuestBoardListEffectComponent__Init((QuestBoardListEffectComponent_o *)transform, 0, 0.0, 0.0, v12);
            return;
          }
        }
      }
    }
    sub_1C32E7C(transform);
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
  UnityEngine_Component_o *QuestBoardObjForWarId; // x22
  UnityEngine_Object_o *boardDisappearEffectPrefab; // x21
  Il2CppObject *v11; // x21
  __int64 transform; // x0
  UnityEngine_GameObject_o *v13; // x21
  UnityEngine_Transform_o *v14; // x23
  UnityEngine_Transform_o *v15; // x22
  UnityEngine_Transform_o *v16; // x22
  UnityEngine_Transform_o *v17; // x22
  Il2CppObject *Component_object; // x0
  struct QuestBoardListEffectDisappearComponent_o **p_effectDisappearComponent; // x22
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  const MethodInfo *v22; // x2
  float v23; // s1

  if ( (byte_4C346A1 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectDisappearComponent___);
    sub_1C32C20(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C346A1 = 1;
  }
  QuestBoardObjForWarId = (UnityEngine_Component_o *)QuestBoardListViewManager__GetQuestBoardObjForWarId(
                                                       this,
                                                       warId,
                                                       (const MethodInfo *)isNextBoardReleased);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)QuestBoardObjForWarId, 0, 0) )
  {
    boardDisappearEffectPrefab = (UnityEngine_Object_o *)this->fields.boardDisappearEffectPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(boardDisappearEffectPrefab, 0, 0) )
    {
      v11 = (Il2CppObject *)this->fields.boardDisappearEffectPrefab;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      transform = (__int64)UnityEngine_Object__Instantiate_object_(
                             v11,
                             (const MethodInfo_3169758 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( !transform )
        goto LABEL_32;
      v13 = (UnityEngine_GameObject_o *)transform;
      transform = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0);
      if ( !QuestBoardObjForWarId )
        goto LABEL_32;
      v14 = (UnityEngine_Transform_o *)transform;
      transform = (__int64)UnityEngine_Component__get_gameObject(QuestBoardObjForWarId, 0);
      if ( !transform )
        goto LABEL_32;
      transform = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0);
      if ( !v14 )
        goto LABEL_32;
      UnityEngine_Transform__set_parent(v14, (UnityEngine_Transform_o *)transform, 0);
      transform = (__int64)UnityEngine_GameObject__get_transform(v13, 0);
      v15 = (UnityEngine_Transform_o *)transform;
      if ( !byte_4C313D1 )
      {
        transform = sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
        byte_4C313D1 = 1;
      }
      if ( !v15 )
        goto LABEL_32;
      UnityEngine_Transform__set_localPosition(v15, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
      transform = (__int64)UnityEngine_GameObject__get_transform(v13, 0);
      v16 = (UnityEngine_Transform_o *)transform;
      if ( !byte_4C313D7 )
      {
        transform = sub_1C32C20(&UnityEngine_Quaternion_TypeInfo);
        byte_4C313D7 = 1;
      }
      if ( !v16 )
        goto LABEL_32;
      UnityEngine_Transform__set_localRotation(
        v16,
        UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
        0);
      transform = (__int64)UnityEngine_GameObject__get_transform(v13, 0);
      v17 = (UnityEngine_Transform_o *)transform;
      if ( !byte_4C313D6 )
      {
        transform = sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
        byte_4C313D6 = 1;
      }
      if ( !v17 )
        goto LABEL_32;
      UnityEngine_Transform__set_localScale(v17, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           v13,
                           (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectDisappearComponent___);
      p_effectDisappearComponent = &this->fields.effectDisappearComponent;
      this->fields.effectDisappearComponent = (struct QuestBoardListEffectDisappearComponent_o *)Component_object;
      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.effectDisappearComponent, (int32_t)Component_object, v20, v21);
      transform = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)this->fields.effectDisappearComponent, 0, 0);
      if ( (transform & 1) != 0 )
        return;
      if ( !*p_effectDisappearComponent
        || (GameObjectExtensions__SetLocalPositionY(
              v13,
              (*p_effectDisappearComponent)->fields.disappearEffectShiftPosY,
              0),
            (transform = (__int64)*p_effectDisappearComponent) == 0) )
      {
LABEL_32:
        sub_1C32E7C(transform);
      }
      if ( isNextBoardReleased )
        v23 = endTime;
      else
        v23 = 0.0;
      QuestBoardListEffectComponent__Init((QuestBoardListEffectComponent_o *)transform, 1, 0.0, v23, v22);
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
  UnityEngine_Component_o *QuestBoardObjForWarId; // x23
  UnityEngine_Object_o *ntBoardAppearEffectPrefab; // x22
  struct UnityEngine_GameObject_o **p_ntBoardAppearEffectPrefab; // x24
  Il2CppObject *v18; // x22
  __int64 transform; // x0
  UnityEngine_GameObject_o *v20; // x22
  UnityEngine_Transform_o *v21; // x24
  UnityEngine_Transform_o *v22; // x23
  UnityEngine_Transform_o *v23; // x23
  UnityEngine_Transform_o *v24; // x23
  Il2CppObject *Component_object; // x0
  struct QuestBoardListEffectBoardOpenComponent_o **p_effectDisappear2BbComponent; // x21
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  UnityEngine_Object_o *effectDisappear2BbComponent; // x19
  const MethodInfo *v30; // x2
  Il2CppObject *v31; // x0
  struct QuestBoardListEffectComponent_o **p_effectDisappear2Component; // x20
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  UnityEngine_Object_o *effectDisappear2Component; // x21
  UnityEngine_Object_o *effectDisappearComponent; // x21
  const MethodInfo *v37; // x2
  struct QuestBoardListEffectDisappearComponent_o *v38; // x8
  struct QuestBoardListEffectDisappearComponent_o *v39; // x8

  if ( (byte_4C346A2 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectBoardOpenComponent___);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectComponent___);
    sub_1C32C20(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C346A2 = 1;
  }
  QuestBoardObjForWarId = (UnityEngine_Component_o *)QuestBoardListViewManager__GetQuestBoardObjForWarId(
                                                       this,
                                                       warId,
                                                       (const MethodInfo *)isOnlyBoardOpen);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)QuestBoardObjForWarId, 0, 0) )
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
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(ntBoardAppearEffectPrefab, 0, 0) )
    {
      v18 = (Il2CppObject *)*p_ntBoardAppearEffectPrefab;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      transform = (__int64)UnityEngine_Object__Instantiate_object_(
                             v18,
                             (const MethodInfo_3169758 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( transform )
      {
        v20 = (UnityEngine_GameObject_o *)transform;
        transform = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0);
        if ( QuestBoardObjForWarId )
        {
          v21 = (UnityEngine_Transform_o *)transform;
          transform = (__int64)UnityEngine_Component__get_gameObject(QuestBoardObjForWarId, 0);
          if ( transform )
          {
            transform = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0);
            if ( v21 )
            {
              UnityEngine_Transform__set_parent(v21, (UnityEngine_Transform_o *)transform, 0);
              transform = (__int64)UnityEngine_GameObject__get_transform(v20, 0);
              v22 = (UnityEngine_Transform_o *)transform;
              if ( !byte_4C313D1 )
              {
                transform = sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
                byte_4C313D1 = 1;
              }
              if ( v22 )
              {
                UnityEngine_Transform__set_localPosition(
                  v22,
                  UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
                  0);
                transform = (__int64)UnityEngine_GameObject__get_transform(v20, 0);
                v23 = (UnityEngine_Transform_o *)transform;
                if ( !byte_4C313D7 )
                {
                  transform = sub_1C32C20(&UnityEngine_Quaternion_TypeInfo);
                  byte_4C313D7 = 1;
                }
                if ( v23 )
                {
                  UnityEngine_Transform__set_localRotation(
                    v23,
                    UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
                    0);
                  transform = (__int64)UnityEngine_GameObject__get_transform(v20, 0);
                  v24 = (UnityEngine_Transform_o *)transform;
                  if ( !byte_4C313D6 )
                  {
                    transform = sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
                    byte_4C313D6 = 1;
                  }
                  if ( v24 )
                  {
                    UnityEngine_Transform__set_localScale(
                      v24,
                      UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
                      0);
                    if ( isOnlyBoardOpen )
                    {
                      Component_object = UnityEngine_GameObject__GetComponent_object_(
                                           v20,
                                           (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectBoardOpenComponent___);
                      p_effectDisappear2BbComponent = &this->fields.effectDisappear2BbComponent;
                      this->fields.effectDisappear2BbComponent = (struct QuestBoardListEffectBoardOpenComponent_o *)Component_object;
                      sub_1C32BC4(
                        (CGThumbnailListItem_o *)&this->fields.effectDisappear2BbComponent,
                        (int32_t)Component_object,
                        v27,
                        v28);
                      effectDisappear2BbComponent = (UnityEngine_Object_o *)this->fields.effectDisappear2BbComponent;
                      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      if ( UnityEngine_Object__op_Equality(effectDisappear2BbComponent, 0, 0) )
                        return;
                      transform = (__int64)*p_effectDisappear2BbComponent;
                      if ( isNTBoard )
                      {
                        if ( !transform )
                          goto LABEL_49;
                        startTime = *(float *)(transform + 116);
                        endTime = *(float *)(transform + 120);
                        actStartTime = *(float *)(transform + 124);
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
                        v30);
                      if ( *p_effectDisappear2BbComponent )
                      {
                        (*p_effectDisappear2BbComponent)->fields.playingActStartTime = actStartTime;
                        return;
                      }
                    }
                    else
                    {
                      v31 = UnityEngine_GameObject__GetComponent_object_(
                              v20,
                              (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectComponent___);
                      p_effectDisappear2Component = &this->fields.effectDisappear2Component;
                      this->fields.effectDisappear2Component = (struct QuestBoardListEffectComponent_o *)v31;
                      sub_1C32BC4(
                        (CGThumbnailListItem_o *)&this->fields.effectDisappear2Component,
                        (int32_t)v31,
                        v33,
                        v34);
                      effectDisappear2Component = (UnityEngine_Object_o *)this->fields.effectDisappear2Component;
                      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      if ( UnityEngine_Object__op_Equality(effectDisappear2Component, 0, 0) )
                        return;
                      effectDisappearComponent = (UnityEngine_Object_o *)this->fields.effectDisappearComponent;
                      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      transform = UnityEngine_Object__op_Inequality(effectDisappearComponent, 0, 0);
                      if ( (transform & 1) != 0 )
                      {
                        v38 = this->fields.effectDisappearComponent;
                        if ( !v38 )
                          goto LABEL_49;
                        GameObjectExtensions__SetLocalPositionX(v20, v38->fields.disappearEffect2ShiftPosX, 0);
                        v39 = this->fields.effectDisappearComponent;
                        if ( !v39 )
                          goto LABEL_49;
                        GameObjectExtensions__SetLocalPositionY(v20, v39->fields.disappearEffect2ShiftPosY, 0);
                      }
                      transform = (__int64)*p_effectDisappear2Component;
                      if ( *p_effectDisappear2Component )
                      {
                        QuestBoardListEffectComponent__Init(
                          (QuestBoardListEffectComponent_o *)transform,
                          0,
                          0.0,
                          0.0,
                          v37);
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
      sub_1C32E7C(transform);
    }
  }
}


void QuestBoardListViewManager__SetUpBoardDisppearFadeEffect(
        QuestBoardListViewManager_o *this,
        bool isPlayingAct,
        float actTime,
        const MethodInfo *method)
{
  UnityEngine_Object_o *boardDisappearEffectFadePrefab; // x21
  Il2CppObject *v8; // x21
  UnityEngine_GameObject_o *transform; // x0
  UnityEngine_GameObject_o *v10; // x21
  UnityEngine_Transform_o *v11; // x22
  UnityEngine_Transform_o *v12; // x22
  UnityEngine_Transform_o *v13; // x22
  UnityEngine_Transform_o *v14; // x22
  Il2CppObject *Component_object; // x0
  struct QuestBoardListEffectComponent_o **p_effectDisappearFadeComponent; // x21
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x2

  if ( (byte_4C346A3 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectComponent___);
    sub_1C32C20(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C346A3 = 1;
  }
  boardDisappearEffectFadePrefab = (UnityEngine_Object_o *)this->fields.boardDisappearEffectFadePrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(boardDisappearEffectFadePrefab, 0, 0) )
  {
    v8 = (Il2CppObject *)this->fields.boardDisappearEffectFadePrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                              v8,
                                              (const MethodInfo_3169758 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_26;
    v10 = transform;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
    if ( !this->fields.fadePanel )
      goto LABEL_26;
    v11 = (UnityEngine_Transform_o *)transform;
    transform = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                              (UnityEngine_Component_o *)this->fields.fadePanel,
                                              0);
    if ( !v11 )
      goto LABEL_26;
    UnityEngine_Transform__set_parent(v11, (UnityEngine_Transform_o *)transform, 0);
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v10, 0);
    v12 = (UnityEngine_Transform_o *)transform;
    if ( !byte_4C313D1 )
    {
      transform = (UnityEngine_GameObject_o *)sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
      byte_4C313D1 = 1;
    }
    if ( !v12 )
      goto LABEL_26;
    UnityEngine_Transform__set_localPosition(v12, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v10, 0);
    v13 = (UnityEngine_Transform_o *)transform;
    if ( !byte_4C313D7 )
    {
      transform = (UnityEngine_GameObject_o *)sub_1C32C20(&UnityEngine_Quaternion_TypeInfo);
      byte_4C313D7 = 1;
    }
    if ( !v13 )
      goto LABEL_26;
    UnityEngine_Transform__set_localRotation(v13, UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion, 0);
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v10, 0);
    v14 = (UnityEngine_Transform_o *)transform;
    if ( !byte_4C313D6 )
    {
      transform = (UnityEngine_GameObject_o *)sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
      byte_4C313D6 = 1;
    }
    if ( !v14 )
      goto LABEL_26;
    UnityEngine_Transform__set_localScale(v14, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         v10,
                         (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectComponent___);
    p_effectDisappearFadeComponent = &this->fields.effectDisappearFadeComponent;
    this->fields.effectDisappearFadeComponent = (struct QuestBoardListEffectComponent_o *)Component_object;
    sub_1C32BC4(
      (CGThumbnailListItem_o *)&this->fields.effectDisappearFadeComponent,
      (int32_t)Component_object,
      v17,
      v18);
    if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)this->fields.effectDisappearFadeComponent, 0, 0) )
      return;
    transform = (UnityEngine_GameObject_o *)*p_effectDisappearFadeComponent;
    if ( !*p_effectDisappearFadeComponent )
      goto LABEL_26;
    QuestBoardListEffectComponent__Init((QuestBoardListEffectComponent_o *)transform, 0, 0.0, 0.0, v19);
    if ( !isPlayingAct )
      return;
    if ( !*p_effectDisappearFadeComponent )
LABEL_26:
      sub_1C32E7C(transform);
    (*p_effectDisappearFadeComponent)->fields.playingActStartTime = actTime;
  }
}


void QuestBoardListViewManager__SetupBlackMark(QuestBoardListViewManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *blackMarkPrefab; // x20
  DataManager_o *Instance; // x0
  System_Object_array *Entitys; // x20
  QuestBoardListViewManager___c_c *v6; // x8
  System_Func_object__bool__o *_9__160_0; // x21
  Il2CppObject *v8; // x22
  struct QuestBoardListViewManager___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int v12; // w20
  struct ScrTerminalListTop_o *mTerminalList; // x8
  AssetData_o *effectAssetData; // x0
  CGThumbnailListItem_o *p_blackMarkPrefab; // x19
  Il2CppObject *Object_object__51111776; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3

  if ( (byte_4C34697 & 1) == 0 )
  {
    sub_1C32C20(&Method_AssetData_GetObject_GameObject____78059392);
    sub_1C32C20(&Method_BasicHelper_Any_WarEntity___);
    sub_1C32C20(&Method_DataManager_GetMasterData_WarMaster___);
    sub_1C32C20(&Method_DataMasterBase_WarMaster__WarEntity__int__getEntitys__);
    sub_1C32C20(&System_Func_WarEntity__bool__TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&Method_QuestBoardListViewManager___c__SetupBlackMark_b__160_0__);
    sub_1C32C20(&QuestBoardListViewManager___c_TypeInfo);
    sub_1C32C20(&StringLiteral_18801/*"ef_blackpoint"*/);
    byte_4C34697 = 1;
  }
  blackMarkPrefab = (UnityEngine_Object_o *)this->fields.blackMarkPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(blackMarkPrefab, 0, 0) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_20;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_WarMaster___);
    if ( !Instance )
      goto LABEL_20;
    Entitys = DataMasterBase_object__object__int___getEntitys(
                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                (const MethodInfo_3395ABC *)Method_DataMasterBase_WarMaster__WarEntity__int__getEntitys__);
    v6 = QuestBoardListViewManager___c_TypeInfo;
    if ( !QuestBoardListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewManager___c_TypeInfo);
      v6 = QuestBoardListViewManager___c_TypeInfo;
    }
    _9__160_0 = (System_Func_object__bool__o *)v6->static_fields->__9__160_0;
    if ( !_9__160_0 )
    {
      if ( !v6->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v6);
        v6 = QuestBoardListViewManager___c_TypeInfo;
      }
      v8 = (Il2CppObject *)v6->static_fields->__9;
      _9__160_0 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_WarEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__160_0,
        v8,
        Method_QuestBoardListViewManager___c__SetupBlackMark_b__160_0__,
        0);
      static_fields = QuestBoardListViewManager___c_TypeInfo->static_fields;
      static_fields->__9__160_0 = (struct System_Func_WarEntity__bool__o *)_9__160_0;
      sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__160_0, (int32_t)_9__160_0, v10, v11);
    }
    Instance = (DataManager_o *)BasicHelper__Any_object__51144764(
                                  Entitys,
                                  (System_Func_T__bool__o *)_9__160_0,
                                  (const MethodInfo_30C683C *)Method_BasicHelper_Any_WarEntity___);
    if ( !this->fields.mTerminalList
      || (v12 = (int)Instance,
          Instance = (DataManager_o *)ScrTerminalListTop__CheckTerminalTopEffect(this->fields.mTerminalList, 0),
          (mTerminalList = this->fields.mTerminalList) == 0) )
    {
LABEL_20:
      sub_1C32E7C(Instance);
    }
    if ( ((v12
         | System_String__op_Equality(
             (System_String_o *)Instance,
             mTerminalList->fields.TERMINAL_EFFECT_APPEAR_EFFECT_ID,
             0))
        & 1) != 0 )
    {
      effectAssetData = this->fields.effectAssetData;
      if ( effectAssetData )
      {
        p_blackMarkPrefab = (CGThumbnailListItem_o *)&this->fields.blackMarkPrefab;
        Object_object__51111776 = AssetData__GetObject_object__51111776(
                                    effectAssetData,
                                    (System_String_o *)StringLiteral_18801/*"ef_blackpoint"*/,
                                    (const MethodInfo_30BE760 *)Method_AssetData_GetObject_GameObject____78059392);
        p_blackMarkPrefab->klass = (CGThumbnailListItem_c *)Object_object__51111776;
        sub_1C32BC4(p_blackMarkPrefab, (int32_t)Object_object__51111776, v17, v18);
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
  UnityEngine_Object_o *boardAppearEffectPrefab; // x20
  Il2CppObject *Object_object__51111776; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  UnityEngine_Object_o *boardAppearEffectFadePrefab; // x20
  Il2CppObject *v11; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  UnityEngine_Object_o *v14; // x20
  __int64 *v15; // x8
  CGThumbnailListItem_o *p_boardDisappear2EffectPrefab; // x20
  struct ScrTerminalListTop_o *v17; // x8
  UnityEngine_Object_o *v18; // x20
  Il2CppObject *v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  UnityEngine_Object_o *v22; // x20
  Il2CppObject *v23; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  UnityEngine_Object_o *ntBoardAppearEffectPrefab; // x20
  Il2CppObject *v27; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  UnityEngine_Object_o *boardDisappearEffectFadePrefab; // x20
  __int64 *v31; // x8
  CGThumbnailListItem_o *p_nt2BoardAppearEffectFadePrefab; // x19
  Il2CppObject *v33; // x0
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  struct ScrTerminalListTop_o *v36; // x8
  UnityEngine_Object_o *boardDisappearEffectPrefab; // x20
  Il2CppObject *v38; // x0
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  UnityEngine_Object_o *boardDisappear2EffectPrefab; // x20
  __int64 *v42; // x8
  struct ScrTerminalListTop_o *v43; // x8
  UnityEngine_Object_o *v44; // x20
  Il2CppObject *v45; // x0
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  UnityEngine_Object_o *v48; // x20
  Il2CppObject *v49; // x0
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  UnityEngine_Object_o *v52; // x20
  Il2CppObject *v53; // x0
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  UnityEngine_Object_o *v56; // x20
  struct ScrTerminalListTop_o *v57; // x8
  struct ScrTerminalListTop_o *v58; // x8
  struct ScrTerminalListTop_o *v59; // x8
  UnityEngine_Object_o *nt2BoardAppearEffectPrefab; // x20
  Il2CppObject *v61; // x0
  int32_t v62; // w2
  const MethodInfo *v63; // x3
  UnityEngine_Object_o *nt2BoardAppearEffectFadePrefab; // x20

  if ( (byte_4C3469A & 1) == 0 )
  {
    sub_1C32C20(&Method_AssetData_GetObject_GameObject____78059392);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_17170/*"bit_board_appear2"*/);
    sub_1C32C20(&StringLiteral_17176/*"bit_board_disappear5"*/);
    sub_1C32C20(&StringLiteral_17204/*"bit_fade_black2"*/);
    sub_1C32C20(&StringLiteral_17175/*"bit_board_disappear4"*/);
    sub_1C32C20(&StringLiteral_17172/*"bit_board_disappear"*/);
    sub_1C32C20(&StringLiteral_17203/*"bit_fade_black"*/);
    sub_1C32C20(&StringLiteral_17169/*"bit_board_appear"*/);
    sub_1C32C20(&StringLiteral_17206/*"bit_fade_black4"*/);
    sub_1C32C20(&StringLiteral_17205/*"bit_fade_black3"*/);
    sub_1C32C20(&StringLiteral_17171/*"bit_board_appear3"*/);
    sub_1C32C20(&StringLiteral_17173/*"bit_board_disappear2"*/);
    sub_1C32C20(&StringLiteral_17174/*"bit_board_disappear3"*/);
    byte_4C3469A = 1;
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
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(boardAppearEffectPrefab, 0, 0) )
    {
      mTerminalList = (ScrTerminalListTop_o *)this->fields.effectAssetData;
      if ( !mTerminalList )
        goto LABEL_106;
      Object_object__51111776 = AssetData__GetObject_object__51111776(
                                  (AssetData_o *)mTerminalList,
                                  (System_String_o *)StringLiteral_17169/*"bit_board_appear"*/,
                                  (const MethodInfo_30BE760 *)Method_AssetData_GetObject_GameObject____78059392);
      this->fields.boardAppearEffectPrefab = (struct UnityEngine_GameObject_o *)Object_object__51111776;
      sub_1C32BC4(
        (CGThumbnailListItem_o *)&this->fields.boardAppearEffectPrefab,
        (int32_t)Object_object__51111776,
        v8,
        v9);
    }
    boardAppearEffectFadePrefab = (UnityEngine_Object_o *)this->fields.boardAppearEffectFadePrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(boardAppearEffectFadePrefab, 0, 0) )
    {
      mTerminalList = (ScrTerminalListTop_o *)this->fields.effectAssetData;
      if ( !mTerminalList )
        goto LABEL_106;
      v11 = AssetData__GetObject_object__51111776(
              (AssetData_o *)mTerminalList,
              (System_String_o *)StringLiteral_17203/*"bit_fade_black"*/,
              (const MethodInfo_30BE760 *)Method_AssetData_GetObject_GameObject____78059392);
      this->fields.boardAppearEffectFadePrefab = (struct UnityEngine_GameObject_o *)v11;
      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.boardAppearEffectFadePrefab, (int32_t)v11, v12, v13);
    }
    goto LABEL_17;
  }
  v17 = this->fields.mTerminalList;
  if ( !v17 )
    goto LABEL_106;
  mTerminalList = (ScrTerminalListTop_o *)System_String__op_Equality(
                                            v5,
                                            v17->fields.TERMINAL_WHITE_MARK_EFFECT_APPEAR_EFFECT_ID,
                                            0);
  if ( ((unsigned __int8)mTerminalList & 1) != 0 )
  {
    if ( !this->fields.effectAssetData )
      return;
    v18 = (UnityEngine_Object_o *)this->fields.boardAppearEffectPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(v18, 0, 0) )
    {
      mTerminalList = (ScrTerminalListTop_o *)this->fields.effectAssetData;
      if ( !mTerminalList )
        goto LABEL_106;
      v19 = AssetData__GetObject_object__51111776(
              (AssetData_o *)mTerminalList,
              (System_String_o *)StringLiteral_17170/*"bit_board_appear2"*/,
              (const MethodInfo_30BE760 *)Method_AssetData_GetObject_GameObject____78059392);
      this->fields.boardAppearEffectPrefab = (struct UnityEngine_GameObject_o *)v19;
      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.boardAppearEffectPrefab, (int32_t)v19, v20, v21);
    }
    v22 = (UnityEngine_Object_o *)this->fields.boardAppearEffectFadePrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(v22, 0, 0) )
    {
      mTerminalList = (ScrTerminalListTop_o *)this->fields.effectAssetData;
      if ( !mTerminalList )
        goto LABEL_106;
      v23 = AssetData__GetObject_object__51111776(
              (AssetData_o *)mTerminalList,
              (System_String_o *)StringLiteral_17205/*"bit_fade_black3"*/,
              (const MethodInfo_30BE760 *)Method_AssetData_GetObject_GameObject____78059392);
      this->fields.boardAppearEffectFadePrefab = (struct UnityEngine_GameObject_o *)v23;
      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.boardAppearEffectFadePrefab, (int32_t)v23, v24, v25);
    }
    goto LABEL_35;
  }
  v36 = this->fields.mTerminalList;
  if ( !v36 )
    goto LABEL_106;
  mTerminalList = (ScrTerminalListTop_o *)System_String__op_Equality(
                                            v5,
                                            v36->fields.TERMINAL_EFFECT_BOARD_DISAPPEAR_EFFECT_ID,
                                            0);
  if ( ((unsigned __int8)mTerminalList & 1) != 0 )
  {
    if ( !this->fields.effectAssetData )
      return;
    boardDisappearEffectPrefab = (UnityEngine_Object_o *)this->fields.boardDisappearEffectPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(boardDisappearEffectPrefab, 0, 0) )
    {
      mTerminalList = (ScrTerminalListTop_o *)this->fields.effectAssetData;
      if ( !mTerminalList )
        goto LABEL_106;
      v38 = AssetData__GetObject_object__51111776(
              (AssetData_o *)mTerminalList,
              (System_String_o *)StringLiteral_17172/*"bit_board_disappear"*/,
              (const MethodInfo_30BE760 *)Method_AssetData_GetObject_GameObject____78059392);
      this->fields.boardDisappearEffectPrefab = (struct UnityEngine_GameObject_o *)v38;
      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.boardDisappearEffectPrefab, (int32_t)v38, v39, v40);
    }
    boardDisappear2EffectPrefab = (UnityEngine_Object_o *)this->fields.boardDisappear2EffectPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(boardDisappear2EffectPrefab, 0, 0) )
      goto LABEL_74;
    mTerminalList = (ScrTerminalListTop_o *)this->fields.effectAssetData;
    if ( !mTerminalList )
      goto LABEL_106;
    v42 = &StringLiteral_17173/*"bit_board_disappear2"*/;
    goto LABEL_73;
  }
  v43 = this->fields.mTerminalList;
  if ( !v43 )
    goto LABEL_106;
  mTerminalList = (ScrTerminalListTop_o *)System_String__op_Equality(
                                            v5,
                                            v43->fields.TERMINAL_WHITE_MARK_EFFECT_BOARD_DISAPPEAR_EFFECT_ID,
                                            0);
  if ( ((unsigned __int8)mTerminalList & 1) == 0 )
  {
    v57 = this->fields.mTerminalList;
    if ( !v57 )
      goto LABEL_106;
    mTerminalList = (ScrTerminalListTop_o *)System_String__op_Equality(
                                              v5,
                                              v57->fields.TERMINAL_EFFECT_BB_BOARD_EFFECT_ID,
                                              0);
    if ( ((unsigned __int8)mTerminalList & 1) != 0 )
    {
      if ( !this->fields.effectAssetData )
        return;
LABEL_17:
      v14 = (UnityEngine_Object_o *)this->fields.boardDisappear2EffectPrefab;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality(v14, 0, 0) )
      {
        mTerminalList = (ScrTerminalListTop_o *)this->fields.effectAssetData;
        if ( !mTerminalList )
          goto LABEL_106;
        v15 = &StringLiteral_17173/*"bit_board_disappear2"*/;
        p_boardDisappear2EffectPrefab = (CGThumbnailListItem_o *)&this->fields.boardDisappear2EffectPrefab;
LABEL_40:
        v27 = AssetData__GetObject_object__51111776(
                (AssetData_o *)mTerminalList,
                (System_String_o *)*v15,
                (const MethodInfo_30BE760 *)Method_AssetData_GetObject_GameObject____78059392);
        p_boardDisappear2EffectPrefab->klass = (CGThumbnailListItem_c *)v27;
        sub_1C32BC4(p_boardDisappear2EffectPrefab, (int32_t)v27, v28, v29);
        goto LABEL_41;
      }
      goto LABEL_41;
    }
    v58 = this->fields.mTerminalList;
    if ( !v58 )
      goto LABEL_106;
    mTerminalList = (ScrTerminalListTop_o *)System_String__op_Equality(
                                              v5,
                                              v58->fields.TERMINAL_EFFECT_NT_BOARD_EFFECT_ID,
                                              0);
    if ( ((unsigned __int8)mTerminalList & 1) == 0 )
    {
      v59 = this->fields.mTerminalList;
      if ( !v59 )
        goto LABEL_106;
      if ( System_String__op_Equality(v5, v59->fields.TERMINAL_EFFECT_NT2_BOARD_COMPLETE_EFFECT_ID, 0)
        && this->fields.effectAssetData )
      {
        nt2BoardAppearEffectPrefab = (UnityEngine_Object_o *)this->fields.nt2BoardAppearEffectPrefab;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Equality(nt2BoardAppearEffectPrefab, 0, 0) )
        {
          mTerminalList = (ScrTerminalListTop_o *)this->fields.effectAssetData;
          if ( !mTerminalList )
            goto LABEL_106;
          v61 = AssetData__GetObject_object__51111776(
                  (AssetData_o *)mTerminalList,
                  (System_String_o *)StringLiteral_17171/*"bit_board_appear3"*/,
                  (const MethodInfo_30BE760 *)Method_AssetData_GetObject_GameObject____78059392);
          this->fields.nt2BoardAppearEffectPrefab = (struct UnityEngine_GameObject_o *)v61;
          sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.nt2BoardAppearEffectPrefab, (int32_t)v61, v62, v63);
        }
        nt2BoardAppearEffectFadePrefab = (UnityEngine_Object_o *)this->fields.nt2BoardAppearEffectFadePrefab;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Equality(nt2BoardAppearEffectFadePrefab, 0, 0) )
        {
          mTerminalList = (ScrTerminalListTop_o *)this->fields.effectAssetData;
          if ( mTerminalList )
          {
            v31 = &StringLiteral_17206/*"bit_fade_black4"*/;
            p_nt2BoardAppearEffectFadePrefab = (CGThumbnailListItem_o *)&this->fields.nt2BoardAppearEffectFadePrefab;
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
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(ntBoardAppearEffectPrefab, 0, 0) )
    {
      mTerminalList = (ScrTerminalListTop_o *)this->fields.effectAssetData;
      if ( !mTerminalList )
        goto LABEL_106;
      v15 = &StringLiteral_17176/*"bit_board_disappear5"*/;
      p_boardDisappear2EffectPrefab = (CGThumbnailListItem_o *)&this->fields.ntBoardAppearEffectPrefab;
      goto LABEL_40;
    }
LABEL_41:
    boardDisappearEffectFadePrefab = (UnityEngine_Object_o *)this->fields.boardDisappearEffectFadePrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(boardDisappearEffectFadePrefab, 0, 0) )
    {
      mTerminalList = (ScrTerminalListTop_o *)this->fields.effectAssetData;
      if ( mTerminalList )
      {
        v31 = &StringLiteral_17204/*"bit_fade_black2"*/;
        p_nt2BoardAppearEffectFadePrefab = (CGThumbnailListItem_o *)&this->fields.boardDisappearEffectFadePrefab;
LABEL_46:
        v33 = AssetData__GetObject_object__51111776(
                (AssetData_o *)mTerminalList,
                (System_String_o *)*v31,
                (const MethodInfo_30BE760 *)Method_AssetData_GetObject_GameObject____78059392);
        p_nt2BoardAppearEffectFadePrefab->klass = (CGThumbnailListItem_c *)v33;
        sub_1C32BC4(p_nt2BoardAppearEffectFadePrefab, (int32_t)v33, v34, v35);
        return;
      }
      goto LABEL_106;
    }
    return;
  }
  if ( !this->fields.effectAssetData )
    return;
  v44 = (UnityEngine_Object_o *)this->fields.boardDisappearEffectPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(v44, 0, 0) )
  {
    mTerminalList = (ScrTerminalListTop_o *)this->fields.effectAssetData;
    if ( !mTerminalList )
      goto LABEL_106;
    v45 = AssetData__GetObject_object__51111776(
            (AssetData_o *)mTerminalList,
            (System_String_o *)StringLiteral_17174/*"bit_board_disappear3"*/,
            (const MethodInfo_30BE760 *)Method_AssetData_GetObject_GameObject____78059392);
    this->fields.boardDisappearEffectPrefab = (struct UnityEngine_GameObject_o *)v45;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.boardDisappearEffectPrefab, (int32_t)v45, v46, v47);
  }
  v48 = (UnityEngine_Object_o *)this->fields.boardDisappear2EffectPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(v48, 0, 0) )
  {
    mTerminalList = (ScrTerminalListTop_o *)this->fields.effectAssetData;
    if ( !mTerminalList )
      goto LABEL_106;
    v42 = &StringLiteral_17175/*"bit_board_disappear4"*/;
LABEL_73:
    v49 = AssetData__GetObject_object__51111776(
            (AssetData_o *)mTerminalList,
            (System_String_o *)*v42,
            (const MethodInfo_30BE760 *)Method_AssetData_GetObject_GameObject____78059392);
    this->fields.boardDisappear2EffectPrefab = (struct UnityEngine_GameObject_o *)v49;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.boardDisappear2EffectPrefab, (int32_t)v49, v50, v51);
  }
LABEL_74:
  v52 = (UnityEngine_Object_o *)this->fields.boardDisappearEffectFadePrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(v52, 0, 0) )
  {
    mTerminalList = (ScrTerminalListTop_o *)this->fields.effectAssetData;
    if ( !mTerminalList )
      goto LABEL_106;
    v53 = AssetData__GetObject_object__51111776(
            (AssetData_o *)mTerminalList,
            (System_String_o *)StringLiteral_17204/*"bit_fade_black2"*/,
            (const MethodInfo_30BE760 *)Method_AssetData_GetObject_GameObject____78059392);
    this->fields.boardDisappearEffectFadePrefab = (struct UnityEngine_GameObject_o *)v53;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.boardDisappearEffectFadePrefab, (int32_t)v53, v54, v55);
  }
  v56 = (UnityEngine_Object_o *)this->fields.ntBoardAppearEffectPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(v56, 0, 0) )
  {
    mTerminalList = (ScrTerminalListTop_o *)this->fields.effectAssetData;
    if ( mTerminalList )
    {
      v31 = &StringLiteral_17176/*"bit_board_disappear5"*/;
      p_nt2BoardAppearEffectFadePrefab = (CGThumbnailListItem_o *)&this->fields.ntBoardAppearEffectPrefab;
      goto LABEL_46;
    }
LABEL_106:
    sub_1C32E7C(mTerminalList);
  }
}


// local variable allocation has failed, the output may be wrong!
void QuestBoardListViewManager__SetupDisp(
        QuestBoardListViewManager_o *this,
        bool isReloadTerminalBanner,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  System_Collections_Generic_List_object__o *v6; // x20
  bool v7; // w21
  int klass; // w26
  System_Collections_Generic_IEnumerable_TResult__o *v9; // x0
  QuestBoardListViewManager___c_c *v10; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x20
  System_Func_object__bool__o *_9__121_0; // x21
  Il2CppObject *v13; // x22
  struct QuestBoardListViewManager___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  Il2CppObject *v17; // x0
  const MethodInfo *v18; // x1
  int32_t klass_high; // w8
  const MethodInfo *v20; // x3
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4C34681 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_Cast_QuestBoardListViewItem___);
    sub_1C32C20(&Method_System_Linq_Enumerable_FirstOrDefault_QuestBoardListViewItem___);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__get_Current__);
    sub_1C32C20(&System_Func_QuestBoardListViewItem__bool__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_QuestBoardListViewObject__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_QuestBoardListViewObject__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_QuestBoardListViewObject__get_Item__);
    sub_1C32C20(&Method_QuestBoardListViewManager___c__SetupDisp_b__121_0__);
    sub_1C32C20(&QuestBoardListViewManager___c_TypeInfo);
    byte_4C34681 = 1;
  }
  memset(&i, 0, sizeof(i));
  ObjectList = (System_Collections_Generic_List_object__o *)QuestBoardListViewManager__get_ObjectList(
                                                              this,
                                                              (const MethodInfo *)isReloadTerminalBanner);
  if ( !ObjectList )
    goto LABEL_25;
  v6 = ObjectList;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v21,
    ObjectList,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_QuestBoardListViewObject__GetEnumerator__);
  v7 = isReloadTerminalBanner;
  for ( i = v21;
        System_Collections_Generic_List_Enumerator_object___MoveNext(
          &i,
          (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__MoveNext__);
        QuestBoardListViewObject__SetupDisp((QuestBoardListViewObject_o *)i.fields._current, v7, 0) )
  {
    if ( !i.fields._current )
      sub_1C32E7C(0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__Dispose__);
  if ( v6->fields._size <= 0 )
    return;
  ObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              v6,
                                                              0,
                                                              (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_QuestBoardListViewObject__get_Item__);
  if ( !ObjectList
    || (ObjectList = (System_Collections_Generic_List_object__o *)QuestBoardListViewObject__GetItem(
                                                                    (QuestBoardListViewObject_o *)ObjectList,
                                                                    0)) == 0 )
  {
LABEL_25:
    sub_1C32E7C(ObjectList);
  }
  klass = (int)ObjectList[3].klass;
  v9 = System_Linq_Enumerable__Cast_object_(
         (System_Collections_IEnumerable_o *)this->fields.itemList,
         (const MethodInfo_30EBAC8 *)Method_System_Linq_Enumerable_Cast_QuestBoardListViewItem___);
  v10 = QuestBoardListViewManager___c_TypeInfo;
  v11 = (System_Collections_Generic_IEnumerable_TSource__o *)v9;
  if ( !QuestBoardListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewManager___c_TypeInfo);
    v10 = QuestBoardListViewManager___c_TypeInfo;
  }
  _9__121_0 = (System_Func_object__bool__o *)v10->static_fields->__9__121_0;
  if ( !_9__121_0 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = QuestBoardListViewManager___c_TypeInfo;
    }
    v13 = (Il2CppObject *)v10->static_fields->__9;
    _9__121_0 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_QuestBoardListViewItem__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__121_0, v13, Method_QuestBoardListViewManager___c__SetupDisp_b__121_0__, 0);
    static_fields = QuestBoardListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__121_0 = (struct System_Func_QuestBoardListViewItem__bool__o *)_9__121_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__121_0, (int32_t)_9__121_0, v15, v16);
  }
  v17 = System_Linq_Enumerable__FirstOrDefault_object__51408536(
          v11,
          (System_Func_TSource__bool__o *)_9__121_0,
          (const MethodInfo_3106E98 *)Method_System_Linq_Enumerable_FirstOrDefault_QuestBoardListViewItem___);
  if ( v17 )
  {
    klass_high = HIDWORD(v17[1].klass);
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
      QuestBoardListViewManager__DisplayRoadmapButtonToTopWarBoard(this, v18);
      QuestBoardListViewManager__ModifyAllRoadmapButtons(this, 1, 1, v20);
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
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_String_o *v12; // x0
  System_String_o *v13; // x19
  AssetLoader_LoadEndDataHandler_o *v14; // x22
  int32_t v15; // [xsp+Ch] [xbp-44h] BYREF

  v15 = eventId;
  if ( (byte_4C34699 & 1) == 0 )
  {
    sub_1C32C20(&AssetManager_TypeInfo);
    sub_1C32C20(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C32C20(&Method_QuestBoardListViewManager___c__DisplayClass162_0__SetupFortificationWarningDialog_b__0__);
    sub_1C32C20(&QuestBoardListViewManager___c__DisplayClass162_0_TypeInfo);
    sub_1C32C20(&StringLiteral_6267/*"EventUI/Prefabs/"*/);
    byte_4C34699 = 1;
  }
  v6 = sub_1C32E6C(QuestBoardListViewManager___c__DisplayClass162_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  if ( !v6 )
    sub_1C32E7C(v7);
  *(_QWORD *)(v6 + 16) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v6 + 16), (int32_t)this, v8, v9);
  *(_QWORD *)(v6 + 24) = func;
  sub_1C32BC4((CGThumbnailListItem_o *)(v6 + 24), (int32_t)func, v10, v11);
  v12 = System_Int32__ToString((int32_t)&v15, 0);
  v13 = System_String__Concat_63518544((System_String_o *)StringLiteral_6267/*"EventUI/Prefabs/"*/, v12, 0);
  v14 = (AssetLoader_LoadEndDataHandler_o *)sub_1C32E6C(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v14,
    (Il2CppObject *)v6,
    Method_QuestBoardListViewManager___c__DisplayClass162_0__SetupFortificationWarningDialog_b__0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(v13, v14, 1, 0) )
    ActionExtensions__Call(*(System_Action_o **)(v6 + 24), 0);
}


void QuestBoardListViewManager__SetupQuestBoardEffectController(
        QuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  ScrTerminalListTop_o *mTerminalList; // x0
  System_String_o *v4; // x0
  System_String_o *v5; // x1
  Il2CppObject *Object_object__51111776; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  Il2CppObject *Component_object; // x1

  if ( (byte_4C3469B & 1) == 0 )
  {
    sub_1C32C20(&Method_AssetData_GetObject_GameObject____78059392);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_QuestBoardEffectController___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3469B = 1;
  }
  mTerminalList = this->fields.mTerminalList;
  if ( !mTerminalList )
    goto LABEL_13;
  v4 = ScrTerminalListTop__CheckTerminalTopEffect(mTerminalList, 0);
  if ( v4 )
  {
    v5 = v4;
    mTerminalList = (ScrTerminalListTop_o *)this->fields.effectAssetData;
    if ( mTerminalList )
    {
      Object_object__51111776 = AssetData__GetObject_object__51111776(
                                  (AssetData_o *)mTerminalList,
                                  v5,
                                  (const MethodInfo_30BE760 *)Method_AssetData_GetObject_GameObject____78059392);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      mTerminalList = (ScrTerminalListTop_o *)UnityEngine_Object__op_Inequality(
                                                (UnityEngine_Object_o *)Object_object__51111776,
                                                0,
                                                0);
      Component_object = 0;
      if ( ((unsigned __int8)mTerminalList & 1) == 0 )
        goto LABEL_11;
      if ( Object_object__51111776 )
      {
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)Object_object__51111776,
                             (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_QuestBoardEffectController___);
LABEL_11:
        this->fields.questBoardEffectController = (struct QuestBoardEffectController_o *)Component_object;
        sub_1C32BC4(
          (CGThumbnailListItem_o *)&this->fields.questBoardEffectController,
          (int32_t)Component_object,
          v7,
          v8);
        return;
      }
    }
LABEL_13:
    sub_1C32E7C(mTerminalList);
  }
}


void QuestBoardListViewManager__SetupWhiteMark(QuestBoardListViewManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *whiteMarkPrefab; // x20
  DataManager_o *Instance; // x0
  System_Object_array *Entitys; // x20
  QuestBoardListViewManager___c_c *v6; // x8
  System_Func_object__bool__o *_9__161_0; // x21
  Il2CppObject *v8; // x22
  struct QuestBoardListViewManager___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int v12; // w20
  struct ScrTerminalListTop_o *mTerminalList; // x8
  AssetData_o *effectAssetData; // x0
  CGThumbnailListItem_o *p_whiteMarkPrefab; // x19
  Il2CppObject *Object_object__51111776; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3

  if ( (byte_4C34698 & 1) == 0 )
  {
    sub_1C32C20(&Method_AssetData_GetObject_GameObject____78059392);
    sub_1C32C20(&Method_BasicHelper_Any_WarEntity___);
    sub_1C32C20(&Method_DataManager_GetMasterData_WarMaster___);
    sub_1C32C20(&Method_DataMasterBase_WarMaster__WarEntity__int__getEntitys__);
    sub_1C32C20(&System_Func_WarEntity__bool__TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&Method_QuestBoardListViewManager___c__SetupWhiteMark_b__161_0__);
    sub_1C32C20(&QuestBoardListViewManager___c_TypeInfo);
    sub_1C32C20(&StringLiteral_18870/*"ef_whitepoint"*/);
    byte_4C34698 = 1;
  }
  whiteMarkPrefab = (UnityEngine_Object_o *)this->fields.whiteMarkPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(whiteMarkPrefab, 0, 0) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_20;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_WarMaster___);
    if ( !Instance )
      goto LABEL_20;
    Entitys = DataMasterBase_object__object__int___getEntitys(
                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                (const MethodInfo_3395ABC *)Method_DataMasterBase_WarMaster__WarEntity__int__getEntitys__);
    v6 = QuestBoardListViewManager___c_TypeInfo;
    if ( !QuestBoardListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewManager___c_TypeInfo);
      v6 = QuestBoardListViewManager___c_TypeInfo;
    }
    _9__161_0 = (System_Func_object__bool__o *)v6->static_fields->__9__161_0;
    if ( !_9__161_0 )
    {
      if ( !v6->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v6);
        v6 = QuestBoardListViewManager___c_TypeInfo;
      }
      v8 = (Il2CppObject *)v6->static_fields->__9;
      _9__161_0 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_WarEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__161_0,
        v8,
        Method_QuestBoardListViewManager___c__SetupWhiteMark_b__161_0__,
        0);
      static_fields = QuestBoardListViewManager___c_TypeInfo->static_fields;
      static_fields->__9__161_0 = (struct System_Func_WarEntity__bool__o *)_9__161_0;
      sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__161_0, (int32_t)_9__161_0, v10, v11);
    }
    Instance = (DataManager_o *)BasicHelper__Any_object__51144764(
                                  Entitys,
                                  (System_Func_T__bool__o *)_9__161_0,
                                  (const MethodInfo_30C683C *)Method_BasicHelper_Any_WarEntity___);
    if ( !this->fields.mTerminalList
      || (v12 = (int)Instance,
          Instance = (DataManager_o *)ScrTerminalListTop__CheckTerminalTopEffect(this->fields.mTerminalList, 0),
          (mTerminalList = this->fields.mTerminalList) == 0) )
    {
LABEL_20:
      sub_1C32E7C(Instance);
    }
    if ( ((v12
         | System_String__op_Equality(
             (System_String_o *)Instance,
             mTerminalList->fields.TERMINAL_WHITE_MARK_EFFECT_APPEAR_EFFECT_ID,
             0))
        & 1) != 0 )
    {
      effectAssetData = this->fields.effectAssetData;
      if ( effectAssetData )
      {
        p_whiteMarkPrefab = (CGThumbnailListItem_o *)&this->fields.whiteMarkPrefab;
        Object_object__51111776 = AssetData__GetObject_object__51111776(
                                    effectAssetData,
                                    (System_String_o *)StringLiteral_18870/*"ef_whitepoint"*/,
                                    (const MethodInfo_30BE760 *)Method_AssetData_GetObject_GameObject____78059392);
        p_whiteMarkPrefab->klass = (CGThumbnailListItem_c *)Object_object__51111776;
        sub_1C32BC4(p_whiteMarkPrefab, (int32_t)Object_object__51111776, v17, v18);
      }
    }
  }
}


void QuestBoardListViewManager__SkipDisapprarFadeEffect(
        QuestBoardListViewManager_o *this,
        float skipTime,
        const MethodInfo *method)
{
  UnityEngine_Object_o *effectDisappearFadeComponent; // x20
  const MethodInfo *v6; // x1
  QuestBoardListEffectComponent_o *v7; // x0

  if ( (byte_4C346A6 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C346A6 = 1;
  }
  effectDisappearFadeComponent = (UnityEngine_Object_o *)this->fields.effectDisappearFadeComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(effectDisappearFadeComponent, 0, 0) )
  {
    v7 = this->fields.effectDisappearFadeComponent;
    if ( !v7 )
      sub_1C32E7C(0);
    QuestBoardListEffectComponent__Skip(v7, skipTime, v6);
  }
}


bool QuestBoardListViewManager__TryGetFlagFromOnEventStart(
        QuestBoardListViewManager_o *this,
        int32_t *flagType,
        EventEntity_o *eventEntity,
        const MethodInfo *method)
{
  void *EventTutorialEntity; // x0
  int32_t v7; // w8
  bool result; // w0

  if ( (byte_4C3468C & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C3468C = 1;
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
                              (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
      if ( EventTutorialEntity )
      {
        v7 = *((_DWORD *)EventTutorialEntity + 5);
        result = 1;
        *flagType = v7;
        return result;
      }
LABEL_9:
      sub_1C32E7C(EventTutorialEntity);
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
  bool v6; // w20
  Il2CppObject *current; // x21
  __int64 naturalAligment; // x9
  MapControl_QuestInfo_o *klass; // x0
  _BOOL8 IsReleaseFocusQuestBoard; // x0
  Il2CppClass *v11; // x8
  int32_t name; // w22
  __int64 QuestReleasedFocusState; // x0
  Il2CppClass *v14; // x8
  int v15; // w19
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C3467E & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_Any_ListViewItem___);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C32C20(&QuestBoardListViewItem_TypeInfo);
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    byte_4C3467E = 1;
  }
  memset(&v18, 0, sizeof(v18));
  if ( !System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.itemList,
          (const MethodInfo_30E8F68 *)Method_System_Linq_Enumerable_Any_ListViewItem___) )
    return 0;
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1C32E7C(0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v17,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v18 = v17;
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v18,
           (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v6 )
    {
      v15 = 6;
      goto LABEL_21;
    }
    current = v18.fields._current;
    if ( v18.fields._current )
    {
      naturalAligment = QuestBoardListViewItem_TypeInfo->_2.naturalAligment;
      if ( v18.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (QuestBoardListViewItem_c *)v18.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != QuestBoardListViewItem_TypeInfo )
      {
        sub_1C3313C(v18.fields._current);
LABEL_24:
        sub_1C32E7C(IsReleaseFocusQuestBoard);
      }
      klass = (MapControl_QuestInfo_o *)v18.fields._current[8].klass;
      if ( klass )
      {
        if ( klass->fields.dispType == 1 )
        {
          IsReleaseFocusQuestBoard = MapControl_QuestInfo__IsReleaseFocusQuestBoard(klass, 0);
          if ( IsReleaseFocusQuestBoard )
          {
            v11 = current[8].klass;
            if ( !v11 )
              goto LABEL_24;
            name = (int32_t)v11->_1.name;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            QuestReleasedFocusState = TerminalPramsManager__GetQuestReleasedFocusState(name, 0);
            if ( !(_DWORD)QuestReleasedFocusState )
              break;
          }
        }
      }
    }
  }
  v14 = current[8].klass;
  if ( !v14 )
    sub_1C32E7C(QuestReleasedFocusState);
  *questId = (int32_t)v14->_1.name;
  v15 = 5;
LABEL_21:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v18,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  return v6 && v15 == 5;
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
  float v4; // s0
  AlphaTransitionCalculator_o *v5; // x0
  float realtimeSinceStartup; // s0
  float mAlphaAnimTimeOld; // s9
  float v8; // s8
  QuestBoardListViewManager_c *v9; // x0
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x1
  float v12; // s0
  int32_t mAlphaAnimCnt; // w8
  int32_t v14; // w21
  QuestBoardListViewManager_c *v15; // x0
  int32_t ALPHA_ANIM_COUNT_RESET_VAL; // w8
  int32_t v17; // w21

  if ( (byte_4C3468A & 1) == 0 )
  {
    sub_1C32C20(&QuestBoardListViewManager_TypeInfo);
    sub_1C32C20(&Method_TransitionCalculator_float__Update__);
    byte_4C3468A = 1;
  }
  rewardIconAlphaCalculator = (TransitionCalculator_float__o *)this->fields.rewardIconAlphaCalculator;
  if ( rewardIconAlphaCalculator )
  {
    v4 = TransitionCalculator_float___Update(
           rewardIconAlphaCalculator,
           (const MethodInfo_3A5B92C *)Method_TransitionCalculator_float__Update__);
    v5 = this->fields.rewardIconAlphaCalculator;
    this->fields.mAlphaAnimNow = v4;
    if ( !v5 )
      goto LABEL_22;
    if ( AlphaTransitionCalculator__IsFadeInFinished(v5, 0) )
    {
      realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0);
      mAlphaAnimTimeOld = this->fields.mAlphaAnimTimeOld;
      v8 = realtimeSinceStartup;
      v9 = QuestBoardListViewManager_TypeInfo;
      if ( !QuestBoardListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewManager_TypeInfo);
        v9 = QuestBoardListViewManager_TypeInfo;
      }
      if ( (float)(v8 - mAlphaAnimTimeOld) >= v9->static_fields->ALPHA_ANIM_TIME_INTERVAL )
      {
        v5 = this->fields.rewardIconAlphaCalculator;
        if ( v5 )
        {
          AlphaTransitionCalculator__StartFadeOut(v5, 0);
          QuestBoardListViewManager__OnStartFadeOutAlphaAnim(this, v10);
          return;
        }
LABEL_22:
        sub_1C32E7C(v5);
      }
    }
    else
    {
      v5 = this->fields.rewardIconAlphaCalculator;
      if ( !v5 )
        goto LABEL_22;
      if ( AlphaTransitionCalculator__IsFadeOutFinished(v5, 0) )
      {
        v5 = this->fields.rewardIconAlphaCalculator;
        if ( !v5 )
          goto LABEL_22;
        AlphaTransitionCalculator__StartFadeIn(v5, 0);
        v12 = UnityEngine_Time__get_realtimeSinceStartup(0);
        mAlphaAnimCnt = this->fields.mAlphaAnimCnt;
        this->fields.mAlphaAnimTimeOld = v12;
        v14 = mAlphaAnimCnt + 1;
        this->fields.mAlphaAnimCnt = mAlphaAnimCnt + 1;
        v15 = QuestBoardListViewManager_TypeInfo;
        if ( !QuestBoardListViewManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewManager_TypeInfo);
          v15 = QuestBoardListViewManager_TypeInfo;
        }
        ALPHA_ANIM_COUNT_RESET_VAL = v15->static_fields->ALPHA_ANIM_COUNT_RESET_VAL;
        if ( v14 >= ALPHA_ANIM_COUNT_RESET_VAL )
        {
          v17 = this->fields.mAlphaAnimCnt;
          if ( !v15->_2.cctor_finished )
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


System_Collections_IEnumerator_o *QuestBoardListViewManager__WaitFinish(
        QuestBoardListViewManager_o *this,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4C3467A & 1) == 0 )
  {
    sub_1C32C20(&QuestBoardListViewManager__WaitFinish_d__113_TypeInfo);
    byte_4C3467A = 1;
  }
  v5 = sub_1C32E6C(QuestBoardListViewManager__WaitFinish_d__113_TypeInfo);
  QuestBoardListViewManager__WaitFinish_d__113___ctor((QuestBoardListViewManager__WaitFinish_d__113_o *)v5, 0, 0);
  if ( !v5 )
    sub_1C32E7C(v6);
  *(_QWORD *)(v5 + 32) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 32), (int32_t)this, v7, v8);
  *(_QWORD *)(v5 + 40) = endAct;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 40), (int32_t)endAct, v9, v10);
  return (System_Collections_IEnumerator_o *)v5;
}


void QuestBoardListViewManager___BGChangeEffect_b__154_0(QuestBoardListViewManager_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *mFolderBg; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  mFolderBg = (UnityEngine_Component_o *)this->fields.mFolderBg;
  if ( !mFolderBg
    || (((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *, float))mFolderBg->klass[1]._1.element_class)(
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
    sub_1C32E7C(mFolderBg);
  }
  LODWORD(mFolderBg[1].monitor) = 1;
}


void QuestBoardListViewManager___BGChangeEffect_b__154_1(QuestBoardListViewManager_o *this, const MethodInfo *method)
{
  char *mFolderBgTemp; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  int32_t v7; // w1

  if ( (byte_4C346B3 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_11306/*"RemoveTempBG"*/);
    byte_4C346B3 = 1;
  }
  mFolderBgTemp = (char *)this->fields.mFolderBgTemp;
  if ( !mFolderBgTemp
    || ((*(void (__fastcall **)(char *, _QWORD, float))(*(_QWORD *)mFolderBgTemp + 440LL))(
          mFolderBgTemp,
          *(_QWORD *)(*(_QWORD *)mFolderBgTemp + 448LL),
          1.0),
        (mFolderBgTemp = (char *)this->fields.mFolderBgTemp) == 0)
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mFolderBgTemp, 0),
        (mFolderBgTemp = (char *)TweenAlpha__Begin(gameObject, this->fields.mCrossFadeTime, 0.0, 0)) == 0) )
  {
    sub_1C32E7C(mFolderBgTemp);
  }
  *((_DWORD *)mFolderBgTemp + 8) = 0;
  v7 = StringLiteral_11306/*"RemoveTempBG"*/;
  *((_QWORD *)mFolderBgTemp + 11) = StringLiteral_11306/*"RemoveTempBG"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)(mFolderBgTemp + 88), v7, v5, v6);
}


void QuestBoardListViewManager__bgAlphaFade(
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
  if ( !mFolderBg || (mFolderBg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mFolderBg, 0)) == 0 )
LABEL_13:
    sub_1C32E7C(mFolderBg);
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)mFolderBg, 0) )
  {
    switch ( inOut )
    {
      case 3:
      case 5:
        mFolderBg = (UnityEngine_Component_o *)this->fields.mFolderBg;
        if ( !mFolderBg )
          goto LABEL_13;
        gameObject = UnityEngine_Component__get_gameObject(mFolderBg, 0);
        mFolderBg = (UnityEngine_Component_o *)TweenAlpha__Begin(gameObject, time, 1.0, 0);
        if ( !mFolderBg )
          goto LABEL_13;
        v9 = 1;
        break;
      case 4:
      case 6:
        mFolderBg = (UnityEngine_Component_o *)this->fields.mFolderBg;
        if ( !mFolderBg )
          goto LABEL_13;
        v10 = UnityEngine_Component__get_gameObject(mFolderBg, 0);
        mFolderBg = (UnityEngine_Component_o *)TweenAlpha__Begin(v10, time, 0.0, 0);
        if ( !mFolderBg )
          goto LABEL_13;
        v9 = 2;
        break;
      default:
        return;
    }
    LODWORD(mFolderBg[1].monitor) = v9;
  }
}


void QuestBoardListViewManager__changeBG(
        QuestBoardListViewManager_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  UnityEngine_Component_o *mFolderBg; // x0
  int32_t mRequestedBGid; // w21
  ExUITexture_o *v7; // x21
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  __int64 v11; // x5
  __int64 v12; // x6
  __int64 v13; // x7
  Il2CppObject *v14; // x0
  ExUITexture_o *v15; // x20
  System_String_o *v16; // x21
  const MethodInfo *v17; // x1
  int32_t v18; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C34692 & 1) == 0 )
  {
    sub_1C32C20(&FSUtility_TypeInfo);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&StringLiteral_3032/*"Back/back{0}"*/);
    byte_4C34692 = 1;
  }
  mFolderBg = (UnityEngine_Component_o *)this->fields.mFolderBg;
  if ( !mFolderBg )
    goto LABEL_14;
  mRequestedBGid = this->fields.mRequestedBGid;
  mFolderBg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mFolderBg, 0);
  if ( !mFolderBg )
    goto LABEL_14;
  if ( mRequestedBGid < 1 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mFolderBg, 0, 0);
    ActionExtensions__Call(callback, 0);
    goto LABEL_11;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mFolderBg, 1, 0);
  v7 = this->fields.mFolderBg;
  v18 = this->fields.mRequestedBGid;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18, v8, v9, v10, v11, v12, v13);
  mFolderBg = (UnityEngine_Component_o *)System_String__Format((System_String_o *)StringLiteral_3032/*"Back/back{0}"*/, v14, 0);
  if ( !v7 )
LABEL_14:
    sub_1C32E7C(mFolderBg);
  ExUITexture__SetAssetImage(v7, (System_String_o *)mFolderBg, callback, 0);
  v15 = this->fields.mFolderBg;
  v16 = System_Int32__ToString((int)this + 576, 0);
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  FSUtility__SetUpBackTextureSize(v15, v16, 0);
LABEL_11:
  if ( this->fields.mFaded )
    QuestBoardListViewManager__RemoveTempBG(this, v17);
}


float QuestBoardListViewManager__get_AlphaAnimNow(QuestBoardListViewManager_o *this, const MethodInfo *method)
{
  return this->fields.mAlphaAnimNow;
}


System_String_o *QuestBoardListViewManager__get_FolderBgTextureName(
        QuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  ExUITexture_o *mFolderBg; // x0

  mFolderBg = this->fields.mFolderBg;
  if ( !mFolderBg )
    sub_1C32E7C(0);
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
  if ( v2 < 1.7778 )
    return 532.0;
  else
    return (float)((float)(v2 * 576.0) + -1024.0) + 532.0;
}


System_Collections_Generic_List_QuestBoardListViewObject__o *QuestBoardListViewManager__get_ObjectList(
        QuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v6; // x0
  Il2CppObject *Component_object; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  Il2CppObject *v10; // x1
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x0
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C34674 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_QuestBoardListViewObject___);
    sub_1C32C20(&Method_System_Collections_Generic_List_QuestBoardListViewObject__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_QuestBoardListViewObject___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_QuestBoardListViewObject__TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C34674 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_QuestBoardListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_QuestBoardListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C32E7C(0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v17 = v16;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v17.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v6 )
    {
      if ( !current )
        sub_1C32E7C(v6);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_QuestBoardListViewObject___);
      v10 = Component_object;
      if ( !v3 )
        sub_1C32E7C(Component_object);
      items = v3->fields._items;
      v12 = Method_System_Collections_Generic_List_QuestBoardListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C32E7C(Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
      }
      else
      {
        v14 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v14[4] = (Il2CppClass *)v10;
        sub_1C32BC4((CGThumbnailListItem_o *)(v14 + 4), (int32_t)v10, v8, v9);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_QuestBoardListViewObject__o *)v3;
}


AssetData_o *QuestBoardListViewManager__get_RoadmapAssetData(
        QuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields._RoadmapAssetData_k__BackingField;
}


float QuestBoardListViewManager__get_SyncReferenceTime(QuestBoardListViewManager_o *this, const MethodInfo *method)
{
  return this->fields._SyncReferenceTime_k__BackingField;
}


bool QuestBoardListViewManager__isBgActive(QuestBoardListViewManager_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *mFolderBg; // x0

  mFolderBg = (UnityEngine_Component_o *)this->fields.mFolderBg;
  if ( !mFolderBg || (mFolderBg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mFolderBg, 0)) == 0 )
    sub_1C32E7C(mFolderBg);
  return UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)mFolderBg, 0);
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


void QuestBoardListViewManager__set_RoadmapAssetData(
        QuestBoardListViewManager_o *this,
        AssetData_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._RoadmapAssetData_k__BackingField = value;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)&this->fields._RoadmapAssetData_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void QuestBoardListViewManager__set_SyncReferenceTime(
        QuestBoardListViewManager_o *this,
        float value,
        const MethodInfo *method)
{
  this->fields._SyncReferenceTime_k__BackingField = value;
}


void QuestBoardListViewManager__CoroutineLoadAsset_d__158___ctor(
        QuestBoardListViewManager__CoroutineLoadAsset_d__158_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool QuestBoardListViewManager__CoroutineLoadAsset_d__158__MoveNext(
        QuestBoardListViewManager__CoroutineLoadAsset_d__158_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  QuestBoardListViewManager__CoroutineLoadAsset_d__158_o *v3; // x19
  int32_t _1__state; // w8
  QuestBoardListViewManager_o *_4__this; // x20
  Il2CppObject *v6; // x22
  struct QuestBoardListViewManager___c__DisplayClass158_0_o **p__8__1; // x21
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  Il2CppObject *v12; // x1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct QuestBoardListViewManager_o *onCompleteLoad; // x1
  EventEntity_array *EnableEntityList; // x22
  int max_length; // w8
  EventRewardSceneMaster_o *v18; // x23
  unsigned int v19; // w24
  EventEntity_o *v20; // x25
  const MethodInfo *v21; // x3
  AssetData_o *effectAssetData; // x1
  struct QuestBoardListViewManager___c__DisplayClass158_0_o *_8__1; // x8
  RoadmapButtonPrefab_c *v24; // x0
  System_String_o *ASSET_DATA_PATH_ROADMAP; // x21
  struct QuestBoardListViewManager___c__DisplayClass158_0_o *v26; // x20
  RoadmapButtonPrefab_c *v27; // x0
  System_String_o *v28; // x21
  AssetLoader_LoadEndDataHandler_o *v29; // x22
  Il2CppObject *v30; // x20
  System_Func_bool__o *v31; // x21
  UnityEngine_WaitUntil_o *v32; // x20
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  bool result; // w0
  Il2CppObject *v37; // x21
  AssetLoader_LoadEndDataHandler_o *v38; // x20
  struct QuestBoardListViewManager___c__DisplayClass158_0_o *v39; // x8
  struct QuestBoardListViewManager___c__DisplayClass158_0_o *v40; // x22
  System_Action_o *_9__4; // x23
  int32_t id; // w21
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  Il2CppObject *v45; // x20
  System_Func_bool__o *v46; // x21
  UnityEngine_WaitUntil_o *v47; // x20
  CGThumbnailListItem_o *v48; // x19
  int32_t v49; // w2
  const MethodInfo *v50; // x3

  v3 = this;
  if ( (byte_4C346BF & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&AssetManager_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_EventRewardSceneMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&System_Func_bool__TypeInfo);
    sub_1C32C20(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C32C20(&RoadmapButtonPrefab_TypeInfo);
    sub_1C32C20(&Method_QuestBoardListViewManager___c__DisplayClass158_0__CoroutineLoadAsset_b__0__);
    sub_1C32C20(&Method_QuestBoardListViewManager___c__DisplayClass158_0__CoroutineLoadAsset_b__1__);
    sub_1C32C20(&Method_QuestBoardListViewManager___c__DisplayClass158_0__CoroutineLoadAsset_b__2__);
    sub_1C32C20(&Method_QuestBoardListViewManager___c__DisplayClass158_0__CoroutineLoadAsset_b__3__);
    sub_1C32C20(&Method_QuestBoardListViewManager___c__DisplayClass158_0__CoroutineLoadAsset_b__4__);
    sub_1C32C20(&QuestBoardListViewManager___c__DisplayClass158_0_TypeInfo);
    sub_1C32C20(&UnityEngine_WaitUntil_TypeInfo);
    this = (QuestBoardListViewManager__CoroutineLoadAsset_d__158_o *)sub_1C32C20(&StringLiteral_13683/*"Terminal/Effect"*/);
    byte_4C346BF = 1;
  }
  _1__state = v3->fields.__1__state;
  _4__this = v3->fields.__4__this;
  if ( _1__state == 2 )
  {
    v3->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_51;
    effectAssetData = _4__this->fields.effectAssetData;
    if ( effectAssetData )
    {
      _8__1 = v3->fields.__8__1;
      if ( !_8__1 )
        goto LABEL_51;
      QuestBoardListViewManager__OnCompleteAssetData(_4__this, effectAssetData, _8__1->fields.onCompleteLoad, v2);
    }
    else
    {
      v37 = (Il2CppObject *)v3->fields.__8__1;
      v38 = (AssetLoader_LoadEndDataHandler_o *)sub_1C32E6C(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v38,
        v37,
        Method_QuestBoardListViewManager___c__DisplayClass158_0__CoroutineLoadAsset_b__3__,
        0);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      this = (QuestBoardListViewManager__CoroutineLoadAsset_d__158_o *)AssetManager__loadAssetStorage(
                                                                         (System_String_o *)StringLiteral_13683/*"Terminal/Effect"*/,
                                                                         v38,
                                                                         1,
                                                                         0);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        v39 = v3->fields.__8__1;
        if ( !v39 )
          goto LABEL_51;
        ActionExtensions__Call(v39->fields.onCompleteLoad, 0);
      }
    }
    return 0;
  }
  if ( _1__state == 1 )
  {
    v3->fields.__1__state = -1;
    v24 = RoadmapButtonPrefab_TypeInfo;
    if ( !RoadmapButtonPrefab_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(RoadmapButtonPrefab_TypeInfo);
      v24 = RoadmapButtonPrefab_TypeInfo;
    }
    ASSET_DATA_PATH_ROADMAP = v24->static_fields->ASSET_DATA_PATH_ROADMAP;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    this = (QuestBoardListViewManager__CoroutineLoadAsset_d__158_o *)AssetManager__isExistAssetStorage(
                                                                       ASSET_DATA_PATH_ROADMAP,
                                                                       0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !_4__this )
        goto LABEL_51;
      if ( !_4__this->fields._RoadmapAssetData_k__BackingField )
      {
        v26 = v3->fields.__8__1;
        if ( !v26 )
          goto LABEL_51;
        v26->fields.flag = 0;
        v27 = RoadmapButtonPrefab_TypeInfo;
        if ( !RoadmapButtonPrefab_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(RoadmapButtonPrefab_TypeInfo);
          v27 = RoadmapButtonPrefab_TypeInfo;
          v26 = v3->fields.__8__1;
        }
        v28 = v27->static_fields->ASSET_DATA_PATH_ROADMAP;
        v29 = (AssetLoader_LoadEndDataHandler_o *)sub_1C32E6C(AssetLoader_LoadEndDataHandler_TypeInfo);
        AssetLoader_LoadEndDataHandler___ctor(
          v29,
          (Il2CppObject *)v26,
          Method_QuestBoardListViewManager___c__DisplayClass158_0__CoroutineLoadAsset_b__1__,
          0);
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        AssetManager__loadAssetStorage(v28, v29, 1, 0);
      }
    }
    v30 = (Il2CppObject *)v3->fields.__8__1;
    v31 = (System_Func_bool__o *)sub_1C32E6C(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(
      v31,
      v30,
      Method_QuestBoardListViewManager___c__DisplayClass158_0__CoroutineLoadAsset_b__2__,
      0);
    v32 = (UnityEngine_WaitUntil_o *)sub_1C32E6C(UnityEngine_WaitUntil_TypeInfo);
    UnityEngine_WaitUntil___ctor(v32, v31, 0);
    v3->fields.__2__current = (Il2CppObject *)v32;
    p__2__current = (CGThumbnailListItem_o *)&v3->fields.__2__current;
    sub_1C32BC4(p__2__current, (int32_t)v32, v34, v35);
    LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 2;
    return 1;
  }
  if ( _1__state )
    return 0;
  v3->fields.__1__state = -1;
  v6 = (Il2CppObject *)sub_1C32E6C(QuestBoardListViewManager___c__DisplayClass158_0_TypeInfo);
  System_Object___ctor(v6, 0);
  v3->fields.__8__1 = (struct QuestBoardListViewManager___c__DisplayClass158_0_o *)v6;
  p__8__1 = &v3->fields.__8__1;
  sub_1C32BC4((CGThumbnailListItem_o *)&v3->fields.__8__1, (int32_t)v6, v8, v9);
  this = (QuestBoardListViewManager__CoroutineLoadAsset_d__158_o *)v3->fields.__8__1;
  if ( !this )
    goto LABEL_51;
  v12 = (Il2CppObject *)v3->fields.__4__this;
  this->fields.__2__current = v12;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.__2__current, (int32_t)v12, v10, v11);
  this = (QuestBoardListViewManager__CoroutineLoadAsset_d__158_o *)v3->fields.__8__1;
  if ( !this )
    goto LABEL_51;
  onCompleteLoad = (struct QuestBoardListViewManager_o *)v3->fields.onCompleteLoad;
  this->fields.__4__this = onCompleteLoad;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.__4__this, (int32_t)onCompleteLoad, v13, v14);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (QuestBoardListViewManager__CoroutineLoadAsset_d__158_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_EventMaster___);
  if ( !this )
    goto LABEL_51;
  EnableEntityList = EventMaster__GetEnableEntityList((EventMaster_o *)this, 12, 1, 0, 0);
  this = (QuestBoardListViewManager__CoroutineLoadAsset_d__158_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_EventRewardSceneMaster___);
  if ( !*p__8__1 )
    goto LABEL_51;
  (*p__8__1)->fields.flag = 1;
  if ( !EnableEntityList )
    goto LABEL_51;
  max_length = EnableEntityList->max_length;
  if ( max_length >= 1 )
  {
    v18 = (EventRewardSceneMaster_o *)this;
    v19 = 0;
    while ( 1 )
    {
      if ( v19 >= max_length )
        sub_1C32E84(this);
      v20 = EnableEntityList->m_Items[v19];
      if ( !v20 || !v18 )
        goto LABEL_51;
      this = (QuestBoardListViewManager__CoroutineLoadAsset_d__158_o *)EventRewardSceneMaster__getEntityFromIdAndEventType(
                                                                         v18,
                                                                         v20->fields.id,
                                                                         15,
                                                                         0);
      if ( this )
        break;
      max_length = EnableEntityList->max_length;
      if ( (int)++v19 >= max_length )
        goto LABEL_50;
    }
    v40 = *p__8__1;
    if ( *p__8__1 )
    {
      _9__4 = v40->fields.__9__4;
      v40->fields.flag = 0;
      id = v20->fields.id;
      if ( !_9__4 )
      {
        _9__4 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
        System_Action___ctor(
          _9__4,
          (Il2CppObject *)v40,
          Method_QuestBoardListViewManager___c__DisplayClass158_0__CoroutineLoadAsset_b__4__,
          0);
        v40->fields.__9__4 = _9__4;
        sub_1C32BC4((CGThumbnailListItem_o *)&v40->fields.__9__4, (int32_t)_9__4, v43, v44);
      }
      if ( _4__this )
      {
        QuestBoardListViewManager__SetupFortificationWarningDialog(_4__this, id, _9__4, v21);
        goto LABEL_50;
      }
    }
LABEL_51:
    sub_1C32E7C(this);
  }
LABEL_50:
  v45 = (Il2CppObject *)v3->fields.__8__1;
  v46 = (System_Func_bool__o *)sub_1C32E6C(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v46,
    v45,
    Method_QuestBoardListViewManager___c__DisplayClass158_0__CoroutineLoadAsset_b__0__,
    0);
  v47 = (UnityEngine_WaitUntil_o *)sub_1C32E6C(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v47, v46, 0);
  v3->fields.__2__current = (Il2CppObject *)v47;
  v48 = (CGThumbnailListItem_o *)&v3->fields.__2__current;
  sub_1C32BC4(v48, (int32_t)v47, v49, v50);
  result = 1;
  LODWORD(v48[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
  return result;
}


Il2CppObject *QuestBoardListViewManager__CoroutineLoadAsset_d__158__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        QuestBoardListViewManager__CoroutineLoadAsset_d__158_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn QuestBoardListViewManager__CoroutineLoadAsset_d__158__System_Collections_IEnumerator_Reset(
        QuestBoardListViewManager__CoroutineLoadAsset_d__158_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C32C34(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C32E6C(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C32C34(&Method_QuestBoardListViewManager__CoroutineLoadAsset_d__158_System_Collections_IEnumerator_Reset__);
  sub_1C32D48(v3, v4);
}


Il2CppObject *QuestBoardListViewManager__CoroutineLoadAsset_d__158__System_Collections_IEnumerator_get_Current(
        QuestBoardListViewManager__CoroutineLoadAsset_d__158_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void QuestBoardListViewManager__CoroutineLoadAsset_d__158__System_IDisposable_Dispose(
        QuestBoardListViewManager__CoroutineLoadAsset_d__158_o *this,
        const MethodInfo *method)
{
  ;
}


void QuestBoardListViewManager__WaitFinish_d__113___ctor(
        QuestBoardListViewManager__WaitFinish_d__113_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool QuestBoardListViewManager__WaitFinish_d__113__MoveNext(
        QuestBoardListViewManager__WaitFinish_d__113_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
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
      sub_1C32E7C(this);
    if ( _4__this->fields.waitCount > 0 )
      goto LABEL_6;
    _4__this->fields.waitCount = 0;
    ActionExtensions__Call(this->fields.endAct, 0);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
LABEL_6:
    this->fields.__2__current = 0;
    p__2__current = &this->fields.__2__current;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.__2__current, 0, v2, v3);
    result = 1;
    *((_DWORD *)p__2__current - 2) = 1;
    return result;
  }
  return 0;
}


Il2CppObject *QuestBoardListViewManager__WaitFinish_d__113__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        QuestBoardListViewManager__WaitFinish_d__113_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn QuestBoardListViewManager__WaitFinish_d__113__System_Collections_IEnumerator_Reset(
        QuestBoardListViewManager__WaitFinish_d__113_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C32C34(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C32E6C(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C32C34(&Method_QuestBoardListViewManager__WaitFinish_d__113_System_Collections_IEnumerator_Reset__);
  sub_1C32D48(v3, v4);
}


Il2CppObject *QuestBoardListViewManager__WaitFinish_d__113__System_Collections_IEnumerator_get_Current(
        QuestBoardListViewManager__WaitFinish_d__113_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void QuestBoardListViewManager__WaitFinish_d__113__System_IDisposable_Dispose(
        QuestBoardListViewManager__WaitFinish_d__113_o *this,
        const MethodInfo *method)
{
  ;
}


void QuestBoardListViewManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C346B4 & 1) == 0 )
  {
    sub_1C32C20(&QuestBoardListViewManager___c_TypeInfo);
    byte_4C346B4 = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(QuestBoardListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  QuestBoardListViewManager___c_TypeInfo->static_fields->__9 = (struct QuestBoardListViewManager___c_o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)QuestBoardListViewManager___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void QuestBoardListViewManager___c___ctor(QuestBoardListViewManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestBoardListViewManager___c___CreateList_b__105_0(
        QuestBoardListViewManager___c_o *this,
        QuestBoardListViewItem_o *item,
        const MethodInfo *method)
{
  if ( !item )
    sub_1C32E7C(this);
  return QuestBoardListViewItem__IsDisplayableRoadmapButton(item, (const MethodInfo *)item);
}


bool QuestBoardListViewManager___c___DisplayRoadmapButtonToTopWarBoard_b__107_0(
        QuestBoardListViewManager___c_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x9
  _QWORD *monitor; // x8
  __int64 v6; // x19
  QuestTree_o *Instance; // x0
  MapControl_WarInfo_o *WarInfoByWarID; // x0
  MapControl_WarInfo_o *v9; // x20
  char IsClosedWar; // w19
  bool HasFlag; // w21
  char IsWarShortcut; // w22

  if ( (byte_4C346B5 & 1) == 0 )
  {
    sub_1C32C20(&QuestBoardListViewItem_TypeInfo);
    sub_1C32C20(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_4C346B5 = 1;
  }
  if ( item )
  {
    naturalAligment = QuestBoardListViewItem_TypeInfo->_2.naturalAligment;
    if ( item->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (QuestBoardListViewItem_c *)item->klass->_2.typeHierarchy[naturalAligment - 1] != QuestBoardListViewItem_TypeInfo )
    {
      sub_1C3313C(item);
      goto LABEL_16;
    }
    monitor = item[1].monitor;
    if ( monitor )
    {
      v6 = monitor[14];
      if ( v6 )
      {
        Instance = (QuestTree_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( !Instance )
          goto LABEL_16;
        WarInfoByWarID = QuestTree__mfGetWarInfoByWarID(Instance, *(_DWORD *)(v6 + 20), 0);
        if ( WarInfoByWarID )
        {
          v9 = WarInfoByWarID;
          IsClosedWar = MapControl_WarInfo__IsClosedWar(WarInfoByWarID, 0);
          Instance = (QuestTree_o *)MapControl_WarInfo__GetMine(v9, 0);
          if ( Instance )
          {
            HasFlag = WarEntity__HasFlag((WarEntity_o *)Instance, 128, 0);
            Instance = (QuestTree_o *)MapControl_WarInfo__GetMine(v9, 0);
            if ( Instance )
            {
              IsWarShortcut = WarEntity__IsWarShortcut((WarEntity_o *)Instance, 0);
              Instance = (QuestTree_o *)MapControl_WarInfo__GetMine(v9, 0);
              if ( Instance )
                return HasFlag
                     & ~IsClosedWar
                     & ~IsWarShortcut
                     & ~WarEntity__IsGrandBoard((WarEntity_o *)Instance, 0)
                     & 1;
            }
          }
LABEL_16:
          sub_1C32E7C(Instance);
        }
      }
    }
  }
  return 0;
}


bool QuestBoardListViewManager___c___SetupBlackMark_b__160_0(
        QuestBoardListViewManager___c_o *this,
        WarEntity_o *entity,
        const MethodInfo *method)
{
  int32_t lastQuestId; // w19

  if ( (byte_4C346B6 & 1) == 0 )
  {
    this = (QuestBoardListViewManager___c_o *)sub_1C32C20(&CondType_TypeInfo);
    byte_4C346B6 = 1;
  }
  if ( !entity )
    sub_1C32E7C(this);
  if ( !WarEntity__IsBlackMarkWithClear(entity, 0) )
    return 0;
  lastQuestId = entity->fields.lastQuestId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestClear_40225464(lastQuestId, -1, 0, 0);
}


bool QuestBoardListViewManager___c___SetupDisp_b__121_0(
        QuestBoardListViewManager___c_o *this,
        QuestBoardListViewItem_o *item,
        const MethodInfo *method)
{
  if ( !item )
    sub_1C32E7C(this);
  return QuestBoardListViewItem__IsDisplayableRoadmapButton(item, (const MethodInfo *)item);
}


bool QuestBoardListViewManager___c___SetupWhiteMark_b__161_0(
        QuestBoardListViewManager___c_o *this,
        WarEntity_o *entity,
        const MethodInfo *method)
{
  int32_t lastQuestId; // w20

  if ( (byte_4C346B7 & 1) == 0 )
  {
    this = (QuestBoardListViewManager___c_o *)sub_1C32C20(&CondType_TypeInfo);
    byte_4C346B7 = 1;
  }
  if ( !entity )
    sub_1C32E7C(this);
  if ( !WarEntity__IsWhiteMarkWithClear(entity, 0) )
    return WarEntity__IsDispWhiteMarkUnderBoard(entity, 0);
  lastQuestId = entity->fields.lastQuestId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestClear_40225464(lastQuestId, -1, 0, 0) || WarEntity__IsDispWhiteMarkUnderBoard(entity, 0);
}


void QuestBoardListViewManager___c__DisplayClass123_0___ctor(
        QuestBoardListViewManager___c__DisplayClass123_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestBoardListViewManager___c__DisplayClass123_0___RequestListObject_b__0(
        QuestBoardListViewManager___c__DisplayClass123_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  struct QuestBoardListViewManager_o *_4__this; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2
  float infoTime; // s8
  QuestBoardListViewManager_c *v13; // x0
  SlideFadeObject_o *v14; // x21
  float OUT_POS_OFS_X; // s9
  System_Action_o *v16; // x22
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x3

  if ( (byte_4C346B8 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
    sub_1C32C20(&QuestBoardListViewManager_TypeInfo);
    sub_1C32C20(&Method_QuestBoardListViewManager___c__DisplayClass123_1__RequestListObject_b__2__);
    sub_1C32C20(&QuestBoardListViewManager___c__DisplayClass123_1_TypeInfo);
    byte_4C346B8 = 1;
  }
  v3 = sub_1C32E6C(QuestBoardListViewManager___c__DisplayClass123_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_14;
  *(_QWORD *)(v3 + 24) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v3 + 24), (int32_t)this, v5, v6);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)_4__this, 0);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_3136458 *)Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
  *(_QWORD *)(v3 + 16) = Component_object;
  sub_1C32BC4((CGThumbnailListItem_o *)(v3 + 16), (int32_t)Component_object, v9, v10);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  infoTime = 0.0;
  if ( !this->fields.isFadeOnTop && !_4__this->fields.mFaded )
    infoTime = _4__this->fields.infoTime;
  QuestBoardListViewManager__bgAlphaFade(_4__this, _4__this->fields.initMode, infoTime, v11);
  v13 = QuestBoardListViewManager_TypeInfo;
  v14 = *(SlideFadeObject_o **)(v3 + 16);
  if ( !QuestBoardListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestBoardListViewManager_TypeInfo);
  OUT_POS_OFS_X = QuestBoardListViewManager__get_OUT_POS_OFS_X((const MethodInfo *)v13);
  v16 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(
    v16,
    (Il2CppObject *)v3,
    Method_QuestBoardListViewManager___c__DisplayClass123_1__RequestListObject_b__2__,
    0);
  if ( !v14
    || (SlideFadeObject__SlideIn_36052196(v14, OUT_POS_OFS_X, infoTime, 0.0, v16, 0),
        (_4__this = this->fields.__4__this) == 0)
    || (QuestBoardListViewManager__ResetAlphaAnimTime(_4__this, v17), (_4__this = this->fields.__4__this) == 0) )
  {
LABEL_14:
    sub_1C32E7C(_4__this);
  }
  QuestBoardListViewManager__ModifyAllRoadmapButtons(_4__this, 1, 1, v18);
}


void QuestBoardListViewManager___c__DisplayClass123_0___RequestListObject_b__1(
        QuestBoardListViewManager___c__DisplayClass123_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *_4__this; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v5; // x2
  struct QuestBoardListViewManager_o *v6; // x8
  SlideFadeObject_o *v7; // x20
  const MethodInfo *v8; // x6
  struct QuestBoardListViewManager_o *v9; // x20
  AvalonSceneManager_c *v10; // x8
  CommonUI_o *v11; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *_9__4; // x21
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x1
  System_Action_o *_9__5; // x22
  int32_t v18; // w2
  const MethodInfo *v19; // x3

  if ( (byte_4C346B9 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&AvalonSceneManager_TypeInfo);
    sub_1C32C20(&Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_QuestBoardListViewManager___c__DisplayClass123_0__RequestListObject_b__4__);
    sub_1C32C20(&Method_QuestBoardListViewManager___c__DisplayClass123_0__RequestListObject_b__5__);
    byte_4C346B9 = 1;
  }
  _4__this = (UnityEngine_Component_o *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_19;
  gameObject = UnityEngine_Component__get_gameObject(_4__this, 0);
  _4__this = (UnityEngine_Component_o *)GameObjectExtensions__SafeGetComponent_object_(
                                          gameObject,
                                          (const MethodInfo_3136458 *)Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
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
    _4__this = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v10 = AvalonSceneManager_TypeInfo;
    v11 = (CommonUI_o *)_4__this;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v10 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v10->static_fields->DEFAULT_FADE_TIME;
    _9__4 = this->fields.__9__4;
    if ( !_9__4 )
    {
      _9__4 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
      System_Action___ctor(
        _9__4,
        (Il2CppObject *)this,
        Method_QuestBoardListViewManager___c__DisplayClass123_0__RequestListObject_b__4__,
        0);
      this->fields.__9__4 = _9__4;
      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.__9__4, (int32_t)_9__4, v14, v15);
    }
    if ( v11 )
    {
      CommonUI__maskFadein(v11, DEFAULT_FADE_TIME, _9__4, 0);
      goto LABEL_17;
    }
LABEL_19:
    sub_1C32E7C(_4__this);
  }
  _9__5 = this->fields.__9__5;
  if ( !_9__5 )
  {
    _9__5 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__5,
      (Il2CppObject *)this,
      Method_QuestBoardListViewManager___c__DisplayClass123_0__RequestListObject_b__5__,
      0);
    this->fields.__9__5 = _9__5;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.__9__5, (int32_t)_9__5, v18, v19);
  }
  QuestBoardListViewManager__SetMode(v9, 2, _9__5, 0, 0, 0, v8);
LABEL_17:
  _4__this = (UnityEngine_Component_o *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_19;
  QuestBoardListViewManager__ResetAlphaAnimTime((QuestBoardListViewManager_o *)_4__this, v16);
}


void QuestBoardListViewManager___c__DisplayClass123_0___RequestListObject_b__10(
        QuestBoardListViewManager___c__DisplayClass123_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.end_act, 0);
}


void QuestBoardListViewManager___c__DisplayClass123_0___RequestListObject_b__3(
        QuestBoardListViewManager___c__DisplayClass123_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( !this->fields.__4__this )
    sub_1C32E7C(this);
  QuestBoardListViewManager__EndSlideIn(this->fields.__4__this, this->fields.end_act, this->fields.isNotInit, v2);
}


void QuestBoardListViewManager___c__DisplayClass123_0___RequestListObject_b__4(
        QuestBoardListViewManager___c__DisplayClass123_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x6
  QuestBoardListViewManager___c__DisplayClass123_0_o *v3; // x19
  System_Action_o *_9__6; // x21
  QuestBoardListViewManager_o *_4__this; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  v3 = this;
  if ( (byte_4C346BA & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    this = (QuestBoardListViewManager___c__DisplayClass123_0_o *)sub_1C32C20(&Method_QuestBoardListViewManager___c__DisplayClass123_0__RequestListObject_b__6__);
    byte_4C346BA = 1;
  }
  _9__6 = v3->fields.__9__6;
  _4__this = v3->fields.__4__this;
  if ( !_9__6 )
  {
    _9__6 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__6,
      (Il2CppObject *)v3,
      Method_QuestBoardListViewManager___c__DisplayClass123_0__RequestListObject_b__6__,
      0);
    v3->fields.__9__6 = _9__6;
    sub_1C32BC4((CGThumbnailListItem_o *)&v3->fields.__9__6, (int32_t)_9__6, v6, v7);
  }
  if ( !_4__this )
    sub_1C32E7C(this);
  QuestBoardListViewManager__SetMode(_4__this, 2, _9__6, 0, 0, 0, v2);
}


void QuestBoardListViewManager___c__DisplayClass123_0___RequestListObject_b__5(
        QuestBoardListViewManager___c__DisplayClass123_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.end_act, 0);
}


void QuestBoardListViewManager___c__DisplayClass123_0___RequestListObject_b__6(
        QuestBoardListViewManager___c__DisplayClass123_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.end_act, 0);
}


void QuestBoardListViewManager___c__DisplayClass123_0___RequestListObject_b__8(
        QuestBoardListViewManager___c__DisplayClass123_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.end_act, 0);
}


void QuestBoardListViewManager___c__DisplayClass123_0___RequestListObject_b__9(
        QuestBoardListViewManager___c__DisplayClass123_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x6
  QuestBoardListViewManager___c__DisplayClass123_0_o *v3; // x19
  System_Action_o *_9__10; // x21
  QuestBoardListViewManager_o *_4__this; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  v3 = this;
  if ( (byte_4C346BB & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    this = (QuestBoardListViewManager___c__DisplayClass123_0_o *)sub_1C32C20(&Method_QuestBoardListViewManager___c__DisplayClass123_0__RequestListObject_b__10__);
    byte_4C346BB = 1;
  }
  _9__10 = v3->fields.__9__10;
  _4__this = v3->fields.__4__this;
  if ( !_9__10 )
  {
    _9__10 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__10,
      (Il2CppObject *)v3,
      Method_QuestBoardListViewManager___c__DisplayClass123_0__RequestListObject_b__10__,
      0);
    v3->fields.__9__10 = _9__10;
    sub_1C32BC4((CGThumbnailListItem_o *)&v3->fields.__9__10, (int32_t)_9__10, v6, v7);
  }
  if ( !_4__this )
    sub_1C32E7C(this);
  QuestBoardListViewManager__SetMode(_4__this, 2, _9__10, 0, 0, 0, v2);
}


void QuestBoardListViewManager___c__DisplayClass123_1___ctor(
        QuestBoardListViewManager___c__DisplayClass123_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestBoardListViewManager___c__DisplayClass123_1___RequestListObject_b__2(
        QuestBoardListViewManager___c__DisplayClass123_1_o *this,
        const MethodInfo *method)
{
  SlideFadeObject_o *sfo; // x0
  const MethodInfo *v4; // x3
  struct QuestBoardListViewManager___c__DisplayClass123_0_o *CS___8__locals1; // x8
  AvalonSceneManager_c *v6; // x8
  CommonUI_o *v7; // x20
  struct QuestBoardListViewManager___c__DisplayClass123_0_o *v8; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *_9__3; // x21
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_4C346BC & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&AvalonSceneManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_QuestBoardListViewManager___c__DisplayClass123_0__RequestListObject_b__3__);
    byte_4C346BC = 1;
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
    sfo = (SlideFadeObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v6 = AvalonSceneManager_TypeInfo;
    v7 = (CommonUI_o *)sfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v6 = AvalonSceneManager_TypeInfo;
    }
    v8 = this->fields.CS___8__locals1;
    if ( v8 )
    {
      DEFAULT_FADE_TIME = v6->static_fields->DEFAULT_FADE_TIME;
      _9__3 = v8->fields.__9__3;
      if ( !_9__3 )
      {
        _9__3 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
        System_Action___ctor(
          _9__3,
          (Il2CppObject *)v8,
          Method_QuestBoardListViewManager___c__DisplayClass123_0__RequestListObject_b__3__,
          0);
        v8->fields.__9__3 = _9__3;
        sub_1C32BC4((CGThumbnailListItem_o *)&v8->fields.__9__3, (int32_t)_9__3, v11, v12);
      }
      if ( v7 )
      {
        CommonUI__maskFadein(v7, DEFAULT_FADE_TIME, _9__3, 0);
        return;
      }
    }
LABEL_15:
    sub_1C32E7C(sfo);
  }
  QuestBoardListViewManager__EndSlideIn(
    (QuestBoardListViewManager_o *)sfo,
    CS___8__locals1->fields.end_act,
    CS___8__locals1->fields.isNotInit,
    v4);
}


void QuestBoardListViewManager___c__DisplayClass123_2___ctor(
        QuestBoardListViewManager___c__DisplayClass123_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestBoardListViewManager___c__DisplayClass123_2___RequestListObject_b__7(
        QuestBoardListViewManager___c__DisplayClass123_2_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct QuestBoardListViewManager___c__DisplayClass123_0_o *CS___8__locals2; // x9

  CS___8__locals2 = this->fields.CS___8__locals2;
  if ( !CS___8__locals2 || !CS___8__locals2->fields.__4__this )
    sub_1C32E7C(this);
  QuestBoardListViewManager__SetSlideOut(
    CS___8__locals2->fields.__4__this,
    this->fields.time,
    CS___8__locals2->fields.end_act,
    v2);
}


void QuestBoardListViewManager___c__DisplayClass124_0___ctor(
        QuestBoardListViewManager___c__DisplayClass124_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestBoardListViewManager___c__DisplayClass124_0___SetSlideOut_b__0(
        QuestBoardListViewManager___c__DisplayClass124_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1C32E7C(this);
  QuestBoardListViewManager__EndSlideOut(this->fields.__4__this, this->fields.end_act, v2);
}


void QuestBoardListViewManager___c__DisplayClass126_0___ctor(
        QuestBoardListViewManager___c__DisplayClass126_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestBoardListViewManager___c__DisplayClass126_0___EndSlideOut_b__0(
        QuestBoardListViewManager___c__DisplayClass126_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.end_act, 0);
}


void QuestBoardListViewManager___c__DisplayClass133_0___ctor(
        QuestBoardListViewManager___c__DisplayClass133_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestBoardListViewManager___c__DisplayClass133_0___OnClickListView_b__0(
        QuestBoardListViewManager___c__DisplayClass133_0_o *this,
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
        this = (QuestBoardListViewManager___c__DisplayClass133_0_o *)ListViewObject__get_Index(this->fields.obj, 0),
        !mTerminalList) )
  {
    sub_1C32E7C(this);
  }
  ScrTerminalListTop__Click_Area(mTerminalList, areaBoardInfo, (int32_t)this, 0, 0, 0);
}


void QuestBoardListViewManager___c__DisplayClass137_0___ctor(
        QuestBoardListViewManager___c__DisplayClass137_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestBoardListViewManager___c__DisplayClass137_0___RequestToRaiseTutorialFlag_b__0(
        QuestBoardListViewManager___c__DisplayClass137_0_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  struct System_Action_o *clickAreaFunc; // x8

  clickAreaFunc = this->fields.clickAreaFunc;
  if ( !clickAreaFunc )
    sub_1C32E7C(this);
  ((void (__fastcall *)(intptr_t, intptr_t))clickAreaFunc->fields.invoke_impl)(
    clickAreaFunc->fields.method_code,
    clickAreaFunc->fields.method);
}


void QuestBoardListViewManager___c__DisplayClass158_0___ctor(
        QuestBoardListViewManager___c__DisplayClass158_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestBoardListViewManager___c__DisplayClass158_0___CoroutineLoadAsset_b__0(
        QuestBoardListViewManager___c__DisplayClass158_0_o *this,
        const MethodInfo *method)
{
  return this->fields.flag;
}


void QuestBoardListViewManager___c__DisplayClass158_0___CoroutineLoadAsset_b__1(
        QuestBoardListViewManager___c__DisplayClass158_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct QuestBoardListViewManager_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C32E7C(this);
  _4__this->fields._RoadmapAssetData_k__BackingField = data;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)&_4__this->fields._RoadmapAssetData_k__BackingField,
    (int32_t)data,
    (int32_t)method,
    v3);
  this->fields.flag = 1;
}


bool QuestBoardListViewManager___c__DisplayClass158_0___CoroutineLoadAsset_b__2(
        QuestBoardListViewManager___c__DisplayClass158_0_o *this,
        const MethodInfo *method)
{
  return this->fields.flag;
}


void QuestBoardListViewManager___c__DisplayClass158_0___CoroutineLoadAsset_b__3(
        QuestBoardListViewManager___c__DisplayClass158_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( !this->fields.__4__this )
    sub_1C32E7C(this);
  QuestBoardListViewManager__OnCompleteAssetData(this->fields.__4__this, data, this->fields.onCompleteLoad, v3);
}


void QuestBoardListViewManager___c__DisplayClass158_0___CoroutineLoadAsset_b__4(
        QuestBoardListViewManager___c__DisplayClass158_0_o *this,
        const MethodInfo *method)
{
  this->fields.flag = 1;
}


void QuestBoardListViewManager___c__DisplayClass162_0___ctor(
        QuestBoardListViewManager___c__DisplayClass162_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestBoardListViewManager___c__DisplayClass162_0___SetupFortificationWarningDialog_b__0(
        QuestBoardListViewManager___c__DisplayClass162_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  QuestBoardListViewManager___c__DisplayClass162_0_o *v4; // x19
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  CGThumbnailListItem_o *_4__this; // x8
  Il2CppObject *v8; // x21
  struct QuestBoardListViewManager_o *v9; // x20
  UnityEngine_Transform_o *transform; // x22
  Il2CppObject *v11; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct QuestBoardListViewManager_o *v14; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct QuestBoardListViewManager_o *v16; // x8
  UnityEngine_GameObject_o *v17; // x0
  struct QuestBoardListViewManager_o *v18; // x8

  v4 = this;
  if ( (byte_4C346BD & 1) == 0 )
  {
    sub_1C32C20(&Method_AssetData_GetObject_GameObject____78059392);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_FortificationWarningDialogComponent___);
    sub_1C32C20(&Method_UnityEngine_Object_Instantiate_GameObject____78147088);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    this = (QuestBoardListViewManager___c__DisplayClass162_0_o *)sub_1C32C20(&StringLiteral_6838/*"FortificationWarningDialog"*/);
    byte_4C346BD = 1;
  }
  if ( !assetData )
    goto LABEL_17;
  this = (QuestBoardListViewManager___c__DisplayClass162_0_o *)AssetData__GetObject_object__51111776(
                                                                 assetData,
                                                                 (System_String_o *)StringLiteral_6838/*"FortificationWarningDialog"*/,
                                                                 (const MethodInfo_30BE760 *)Method_AssetData_GetObject_GameObject____78059392);
  _4__this = (CGThumbnailListItem_o *)v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_17;
  v8 = (Il2CppObject *)this;
  _4__this[3].klass = (CGThumbnailListItem_c *)assetData;
  sub_1C32BC4(_4__this + 3, (int32_t)assetData, v5, v6);
  v9 = v4->fields.__4__this;
  if ( !v9 )
    goto LABEL_17;
  this = (QuestBoardListViewManager___c__DisplayClass162_0_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)v4->fields.__4__this,
                                                                 0);
  if ( !this )
    goto LABEL_17;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v11 = UnityEngine_Object__Instantiate_object__51812484(
          v8,
          transform,
          (const MethodInfo_3169884 *)Method_UnityEngine_Object_Instantiate_GameObject____78147088);
  v9->fields.fortificationWarningDialog = (struct UnityEngine_GameObject_o *)v11;
  sub_1C32BC4((CGThumbnailListItem_o *)&v9->fields.fortificationWarningDialog, (int32_t)v11, v12, v13);
  v14 = v4->fields.__4__this;
  if ( !v14 )
    goto LABEL_17;
  this = (QuestBoardListViewManager___c__DisplayClass162_0_o *)v14->fields.fortificationWarningDialog;
  if ( !this )
    goto LABEL_17;
  gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)this, 0);
  GameObjectExtensions__ResetPosition(gameObject, 0);
  v16 = v4->fields.__4__this;
  if ( !v16
    || (this = (QuestBoardListViewManager___c__DisplayClass162_0_o *)v16->fields.fortificationWarningDialog) == 0
    || (v17 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)this, 0),
        GameObjectExtensions__ResetLocalScale(v17, 0),
        (v18 = v4->fields.__4__this) == 0)
    || (this = (QuestBoardListViewManager___c__DisplayClass162_0_o *)v18->fields.fortificationWarningDialog) == 0
    || (this = (QuestBoardListViewManager___c__DisplayClass162_0_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                       (UnityEngine_GameObject_o *)this,
                                                                       (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_FortificationWarningDialogComponent___)) == 0 )
  {
LABEL_17:
    sub_1C32E7C(this);
  }
  FortificationWarningDialogComponent__Init((FortificationWarningDialogComponent_o *)this, 0);
  ActionExtensions__Call(v4->fields.func, 0);
}


void QuestBoardListViewManager___c__DisplayClass181_0___ctor(
        QuestBoardListViewManager___c__DisplayClass181_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestBoardListViewManager___c__DisplayClass181_0___PlayBoardEffect_b__0(
        QuestBoardListViewManager___c__DisplayClass181_0_o *this,
        const MethodInfo *method)
{
  System_Action_o *playingCallback1; // x0

  playingCallback1 = this->fields.playingCallback1;
  if ( playingCallback1 )
    ActionExtensions__Call(playingCallback1, 0);
}


void QuestBoardListViewManager___c__DisplayClass181_0___PlayBoardEffect_b__1(
        QuestBoardListViewManager___c__DisplayClass181_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *effectComponent; // x0
  UnityEngine_Object_o *gameObject; // x21
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  System_Action_o *endAct; // x0

  if ( (byte_4C346BE & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C346BE = 1;
  }
  effectComponent = (UnityEngine_Component_o *)this->fields.effectComponent;
  if ( !effectComponent )
    sub_1C32E7C(0);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(effectComponent, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71223640(gameObject, 0);
  this->fields.effectComponent = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.effectComponent, 0, v5, v6);
  endAct = this->fields.endAct;
  if ( endAct )
    ActionExtensions__Call(endAct, 0);
}


void QuestBoardListViewManager___c__DisplayClass184_0___ctor(
        QuestBoardListViewManager___c__DisplayClass184_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestBoardListViewManager___c__DisplayClass184_0___MoveBoard_b__0(
        QuestBoardListViewManager___c__DisplayClass184_0_o *this,
        const MethodInfo *method)
{
  struct MoveObject_o *mo; // x8

  mo = this->fields.mo;
  if ( !mo )
    sub_1C32E7C(this);
  GameObjectExtensions__SetLocalPositionY(this->fields.tgtObj, mo->fields.mNow.fields.y, 0);
}


void QuestBoardListViewManager___c__DisplayClass184_0___MoveBoard_b__1(
        QuestBoardListViewManager___c__DisplayClass184_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x0
  struct QuestBoardListViewManager_o *_4__this; // x8

  GameObjectExtensions__SetLocalPositionY(this->fields.tgtObj, this->fields.tgtY, 0);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C32E7C(v3);
  --_4__this->fields.waitCount;
}