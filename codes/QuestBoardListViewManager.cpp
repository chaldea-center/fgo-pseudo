void __fastcall QuestBoardListViewManager___cctor(const MethodInfo *method)
{
  struct QuestBoardListViewManager_StaticFields *static_fields; // x8

  if ( (byte_4A58126 & 1) == 0 )
  {
    sub_1B885B0(&QuestBoardListViewManager_TypeInfo);
    byte_4A58126 = 1;
  }
  static_fields = QuestBoardListViewManager_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->INTO_TIME = xmmword_BB5830;
  *(_QWORD *)&static_fields->ALPHA_ANIM_SPD_RATE = 0x404000003F000000LL;
  *(_QWORD *)&static_fields->DEFAULT_SCROLL_VIEW_DEPTH = 0x700000016LL;
  static_fields->ALPHA_ANIM_COUNT_RESET_VAL = 232792560;
}


void __fastcall QuestBoardListViewManager___ctor(QuestBoardListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A58125 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_ListViewItem__TypeInfo);
    byte_4A58125 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  this->fields.topItemList = (struct System_Collections_Generic_List_ListViewItem__o *)v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.topItemList, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  this->fields.bottomItemList = (struct System_Collections_Generic_List_ListViewItem__o *)v6;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.bottomItemList, (int32_t)v6, v7, v8);
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall QuestBoardListViewManager__Awake(QuestBoardListViewManager_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  Il2CppObject *Component_object; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  UnityEngine_GameObject_o *v8; // x0
  struct UnityEngine_GameObject_o *v9; // x0
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_4A580EC & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    byte_4A580EC = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_11;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                             gameObject,
                                             (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !gameObject )
    goto LABEL_11;
  this->fields.mBaseClipRange = (float)SHIDWORD(gameObject[7].klass);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_11;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  this->fields.mBoxCollider = (struct UnityEngine_BoxCollider_o *)Component_object;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mBoxCollider, (int32_t)Component_object, v6, v7);
  gameObject = (UnityEngine_GameObject_o *)this->fields.mBoxCollider;
  if ( !gameObject )
    goto LABEL_11;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.mNoneLabel;
  if ( !gameObject
    || (v8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(v8, 0LL)) == 0LL)
    || (v9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL),
        this->fields.mNoneLabelParent = v9,
        sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mNoneLabelParent, (int32_t)v9, v10, v11),
        (gameObject = this->fields.mNoneLabelParent) == 0LL) )
  {
LABEL_11:
    sub_1B8880C(gameObject, v4);
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
  __int64 v11; // x3
  __int64 v12; // x4
  Il2CppObject *gameObject; // x21
  UnityEngine_GameObject_o *v14; // x21
  UnityEngine_Component_o *parent; // x0
  Il2CppObject *Component_object; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  struct ExUITexture_o *v19; // x21
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
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
  int32_t v35; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t v36; // [xsp+8h] [xbp-38h] BYREF
  int32_t v37; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A5810A & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_ExUITexture___);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_QuestBoardListViewManager__BGChangeEffect_b__149_0__);
    sub_1B885B0(&Method_QuestBoardListViewManager__BGChangeEffect_b__149_1__);
    sub_1B885B0(&StringLiteral_3133/*"Back/back{0}"*/);
    byte_4A5810A = 1;
  }
  mFolderBg = (UnityEngine_Component_o *)this->fields.mFolderBg;
  if ( !mFolderBg )
    goto LABEL_31;
  mFolderBg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mFolderBg, 0LL);
  if ( !mFolderBg )
    goto LABEL_31;
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
        gameObject = (Il2CppObject *)UnityEngine_Component__get_gameObject(mFolderBg, 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        mFolderBg = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_object_(
                                                 gameObject,
                                                 (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( this->fields.mFolderBg )
        {
          v14 = (UnityEngine_GameObject_o *)mFolderBg;
          mFolderBg = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)this->fields.mFolderBg,
                                                   0LL);
          if ( mFolderBg )
          {
            parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(
                                                  (UnityEngine_Transform_o *)mFolderBg,
                                                  0LL);
            GameObjectExtensions__SafeSetParent(v14, parent, 0LL);
            if ( v14 )
            {
              Component_object = UnityEngine_GameObject__GetComponent_object_(
                                   v14,
                                   (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_ExUITexture___);
              this->fields.mFolderBgTemp = (struct ExUITexture_o *)Component_object;
              sub_1B88554(
                (ServantStatusBattleListViewItem_o *)&this->fields.mFolderBgTemp,
                (int32_t)Component_object,
                v17,
                v18);
              mFolderBg = (UnityEngine_Component_o *)this->fields.mFolderBgTemp;
              if ( mFolderBg )
              {
                UIWidget__set_depth((UIWidget_o *)mFolderBg, LODWORD(mFolderBg[7].monitor) + 1, 0LL);
                this->fields.mCrossFadeTime = time;
                v19 = this->fields.mFolderBg;
                v35 = bgID;
                v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v35, v20, v21, v22);
                v24 = System_String__Format((System_String_o *)StringLiteral_3133/*"Back/back{0}"*/, v23, 0LL);
                v25 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
                v26 = &Method_QuestBoardListViewManager__BGChangeEffect_b__149_1__;
                goto LABEL_20;
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
        v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v36, v10, v11, v12);
        mFolderBg = (UnityEngine_Component_o *)System_String__Format((System_String_o *)StringLiteral_3133/*"Back/back{0}"*/, v34, 0LL);
        if ( v33 )
        {
          v31 = (System_String_o *)mFolderBg;
          v30 = (ExUITexture_o *)v33;
          v32 = 0LL;
          goto LABEL_22;
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
LABEL_31:
    sub_1B8880C(mFolderBg, *(_QWORD *)&bgID);
  }
  if ( !bgID )
    return;
  v27 = 0.0;
  if ( effectType )
    v27 = time;
  this->fields.mCrossFadeTime = v27;
  v19 = this->fields.mFolderBg;
  v37 = bgID;
  v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v37, v10, v11, v12);
  v24 = System_String__Format((System_String_o *)StringLiteral_3133/*"Back/back{0}"*/, v28, 0LL);
  v25 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  v26 = &Method_QuestBoardListViewManager__BGChangeEffect_b__149_0__;
LABEL_20:
  v29 = v25;
  System_Action___ctor(v25, (Il2CppObject *)this, *v26, 0LL);
  if ( !v19 )
    goto LABEL_31;
  v30 = v19;
  v31 = v24;
  v32 = v29;
LABEL_22:
  ExUITexture__SetAssetImage(v30, v31, v32, 0LL);
}


bool __fastcall QuestBoardListViewManager__CheckNeedDisplayRoadmapButton(
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
  int32_t v6; // w2
  int32_t v7; // w3
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A5810D & 1) == 0 )
  {
    sub_1B885B0(&QuestBoardListViewManager__CoroutineLoadAsset_d__153_TypeInfo);
    byte_4A5810D = 1;
  }
  v5 = sub_1B887FC(QuestBoardListViewManager__CoroutineLoadAsset_d__153_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 40) = onCompleteLoad;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 40), (int32_t)onCompleteLoad, v8, v9);
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
  __int64 v16; // x1
  Il2CppObject *Component_object; // x24
  Il2CppObject *v18; // x0
  QuestBoardListViewItemDraw_c *v19; // x8
  UnityEngine_BoxCollider_o *v20; // x25
  int32_t SCRL_OBJ_DUMMY_NUM; // w21
  struct ListViewItemSeed_o *seed; // x8
  float v23; // s10
  float mBaseClipRange; // s11
  UIPanel_o *v25; // x26
  float v26; // s9
  int32_t v27; // w1
  __int64 v28; // x8
  __int64 v29; // x8
  bool activeSelf; // w0
  QuestBoardListViewManager_c *v31; // x8
  bool v32; // w24
  float *p_INTO_TIME; // x8
  __int64 v34; // x9
  float v35; // s0
  float v36; // s1
  UILabel_o *mNoneLabel; // x24
  QuestBoardListViewItemDraw_c *v38; // x0
  QuestBoardListViewItemDraw_c *v39; // x0
  int32_t v40; // w21
  int v41; // w28
  int32_t i; // w23
  __int64 v43; // x8
  void *v44; // x25
  int32_t v45; // w24
  MapControl_QuestInfo_o *v46; // x26
  __int64 v47; // x8
  int32_t v48; // w27
  QuestBoardListViewItem_o *v49; // x0
  Il2CppObject *v50; // x25
  int32_t v51; // w2
  struct UnityEngine_GameObject_o *v52; // x24
  struct UnityEngine_GameObject_o *v53; // x26
  int32_t v54; // w1
  MapControl_QuestInfo_o *v55; // x3
  UnityEngine_GameObject_o *v56; // x4
  UnityEngine_GameObject_o *v57; // x5
  int32_t v58; // w6
  int32_t v59; // w7
  __int64 v60; // x8
  __int64 v61; // x8
  __int64 v62; // x8
  int32_t v63; // w2
  int32_t v64; // w3
  __int64 v65; // x8
  _QWORD *v66; // x9
  __int64 v67; // x10
  __int64 v68; // x8
  int32_t size; // w21
  int v70; // w21
  int32_t v71; // w22
  Il2CppObject *Item; // x0
  MapControl_QuestInfo_o *v73; // x24
  QuestBoardListViewItem_o *v74; // x0
  Il2CppObject *v75; // x25
  int32_t v76; // w2
  struct UnityEngine_GameObject_o *blackMarkPrefab; // x26
  struct UnityEngine_GameObject_o *whiteMarkPrefab; // x27
  int32_t v79; // w1
  MapControl_QuestInfo_o *v80; // x3
  UnityEngine_GameObject_o *v81; // x4
  UnityEngine_GameObject_o *v82; // x5
  int32_t v83; // w2
  int32_t v84; // w3
  __int64 v85; // x8
  _QWORD *v86; // x9
  __int64 v87; // x10
  __int64 v88; // x8
  System_Collections_Generic_IEnumerable_TResult__o *v89; // x0
  QuestBoardListViewManager___c_c *v90; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v91; // x21
  System_Func_object__bool__o *_9__104_0; // x22
  Il2CppObject *v93; // x23
  struct QuestBoardListViewManager___c_StaticFields *static_fields; // x0
  int32_t v95; // w2
  int32_t v96; // w3
  Il2CppObject *v97; // x0
  const MethodInfo *v98; // x1
  int32_t klass_high; // w8
  const MethodInfo *v100; // [xsp+0h] [xbp-90h]
  bool v101; // [xsp+Ch] [xbp-84h]
  UnityEngine_Vector3_o v102; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector4_o v103; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A580EF & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Cast_QuestBoardListViewItem___);
    sub_1B885B0(&Method_System_Linq_Enumerable_FirstOrDefault_QuestBoardListViewItem___);
    sub_1B885B0(&System_Func_QuestBoardListViewItem__bool__TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UIPanel___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ScrTerminalListTop_WarSelectedQuestInfo__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MapControl_QuestInfo__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ScrTerminalListTop_WarSelectedQuestInfo__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MapControl_QuestInfo__get_Item__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&QuestBoardListViewItemDraw_TypeInfo);
    sub_1B885B0(&QuestBoardListViewItem_TypeInfo);
    sub_1B885B0(&QuestBoardListViewManager_TypeInfo);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    sub_1B885B0(&Method_QuestBoardListViewManager___c__CreateList_b__104_0__);
    sub_1B885B0(&QuestBoardListViewManager___c_TypeInfo);
    sub_1B885B0(&StringLiteral_10900/*"QUEST_NONE"*/);
    byte_4A580EF = 1;
  }
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  this->fields._IndexFirstDisplayableRoadmapButton_k__BackingField = -1;
  if ( info_kind == 4 || info_kind == 1 )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    TerminalPramsManager__LoadQuestReleasedFocusState(0LL);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_121;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)gameObject,
                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_121;
  v18 = UnityEngine_GameObject__GetComponent_object_(
          (UnityEngine_GameObject_o *)gameObject,
          (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  v19 = QuestBoardListViewItemDraw_TypeInfo;
  v20 = (UnityEngine_BoxCollider_o *)v18;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v19 = QuestBoardListViewItemDraw_TypeInfo;
  }
  gameObject = this->fields.scrollView;
  if ( !gameObject )
    goto LABEL_121;
  SCRL_OBJ_DUMMY_NUM = v19->static_fields->SCRL_OBJ_DUMMY_NUM;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_121;
  gameObject = UnityEngine_GameObject__GetComponent_object_(
                 (UnityEngine_GameObject_o *)gameObject,
                 (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
  if ( !gameObject )
    goto LABEL_121;
  seed = this->fields.seed;
  if ( !seed )
    goto LABEL_121;
  v23 = *((float *)gameObject + 74);
  mBaseClipRange = this->fields.mBaseClipRange;
  v25 = (UIPanel_o *)gameObject;
  seed->fields.arrangementPich.fields.y = -pos_itvl_y;
  if ( !Component_object )
    goto LABEL_121;
  v26 = (float)(SCRL_OBJ_DUMMY_NUM + 1) * pos_itvl_y;
  v27 = v26 == INFINITY ? 0x80000000 : (int)v26;
  UIWidget__set_height((UIWidget_o *)Component_object, v27, 0LL);
  if ( !v20 )
    goto LABEL_121;
  LODWORD(v102.fields.x) = (unsigned int)UnityEngine_BoxCollider__get_size(v20, 0LL);
  v102.fields.z = 0.0;
  v102.fields.y = v26;
  UnityEngine_BoxCollider__set_size(v20, v102, 0LL);
  v103.fields.y = (float)(mBaseClipRange - v26) * 0.5;
  v103.fields.z = clip_w;
  v103.fields.w = v26;
  this->fields.clipRange.fields.y = v26 + (float)QuestBoardListViewItemDraw_TypeInfo->static_fields->CLIP_RANGE_MARGIN;
  v103.fields.x = v23;
  UIPanel__set_baseClipRegion(v25, v103, 0LL);
  this->fields.mResetConsumeColor = 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  this->fields.mListCreatedTime = NetworkManager__getTime(0LL);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4A5629D )
  {
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    byte_4A5629D = 1;
  }
  gameObject = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    gameObject = TerminalSceneComponent_TypeInfo;
  }
  v28 = **((_QWORD **)gameObject + 23);
  if ( !v28 )
    goto LABEL_121;
  v29 = *(_QWORD *)(v28 + 264);
  if ( !v29 )
    goto LABEL_121;
  gameObject = *(void **)(v29 + 104);
  if ( !gameObject )
    goto LABEL_121;
  activeSelf = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)gameObject, 0LL);
  v31 = QuestBoardListViewManager_TypeInfo;
  v32 = activeSelf;
  if ( !QuestBoardListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewManager_TypeInfo);
    v31 = QuestBoardListViewManager_TypeInfo;
  }
  p_INTO_TIME = &v31->static_fields->INTO_TIME;
  v34 = 1LL;
  if ( v32 )
    v34 = 3LL;
  v35 = p_INTO_TIME[v34];
  if ( v32 )
    p_INTO_TIME += 2;
  v36 = *p_INTO_TIME;
  this->fields.exitTime = v35;
  this->fields.mAlphaAnimCnt = 0;
  this->fields.infoTime = v36;
  this->fields._SyncReferenceTime_k__BackingField = UnityEngine_Time__get_time(0LL);
  if ( !qinf_list )
    goto LABEL_121;
  gameObject = this->fields.mNoneLabelParent;
  if ( !gameObject )
    goto LABEL_121;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, qinf_list->fields._size < 1, 0LL);
  mNoneLabel = this->fields.mNoneLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_10900/*"QUEST_NONE"*/, 0LL);
  if ( !mNoneLabel )
    goto LABEL_121;
  UILabel__set_text(mNoneLabel, (System_String_o *)gameObject, 0LL);
  v38 = QuestBoardListViewItemDraw_TypeInfo;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v38 = QuestBoardListViewItemDraw_TypeInfo;
  }
  if ( info_kind != 6 )
  {
    size = qinf_list->fields._size;
    v101 = isAllDisp;
    if ( !v38->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v38);
      v38 = QuestBoardListViewItemDraw_TypeInfo;
    }
    v70 = v38->static_fields->SCRL_OBJ_DUMMY_NUM + size;
    if ( v70 < 1 )
      goto LABEL_104;
    v71 = 0;
    while ( 1 )
    {
      if ( v71 >= qinf_list->fields._size )
      {
        v73 = 0LL;
LABEL_91:
        blackMarkPrefab = this->fields.blackMarkPrefab;
        whiteMarkPrefab = this->fields.whiteMarkPrefab;
        v74 = (QuestBoardListViewItem_o *)sub_1B887FC(QuestBoardListViewItem_TypeInfo);
        v75 = (Il2CppObject *)v74;
        v79 = v71;
        v76 = info_kind;
        v80 = v73;
        v81 = blackMarkPrefab;
        v82 = whiteMarkPrefab;
        goto LABEL_98;
      }
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)qinf_list,
               v71,
               (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__get_Item__);
      v73 = (MapControl_QuestInfo_o *)Item;
      if ( info_kind == 2 && Item )
      {
        gameObject = Item[6].monitor;
        if ( !gameObject )
          goto LABEL_121;
        gameObject = MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_121;
        if ( WarEntity__HasFlag((WarEntity_o *)gameObject, 16, 0LL) )
        {
          v74 = (QuestBoardListViewItem_o *)sub_1B887FC(QuestBoardListViewItem_TypeInfo);
          v75 = (Il2CppObject *)v74;
          v76 = 4;
          goto LABEL_97;
        }
      }
      else if ( !Item )
      {
        goto LABEL_91;
      }
      if ( !MapControl_QuestInfo__GetMine(v73, 0LL) )
        goto LABEL_91;
      gameObject = MapControl_QuestInfo__GetMine(v73, 0LL);
      if ( !gameObject )
        goto LABEL_121;
      if ( QuestEntity__GetTypeFlag((QuestEntity_o *)gameObject, 0LL) != 128 )
        goto LABEL_91;
      v74 = (QuestBoardListViewItem_o *)sub_1B887FC(QuestBoardListViewItem_TypeInfo);
      v75 = (Il2CppObject *)v74;
      v76 = 5;
LABEL_97:
      v79 = v71;
      v80 = v73;
      v81 = 0LL;
      v82 = 0LL;
LABEL_98:
      QuestBoardListViewItem___ctor_33971908(v74, v79, v76, v80, v81, v82, 0, 0, v100);
      gameObject = this->fields.itemList;
      if ( !gameObject )
        goto LABEL_121;
      v85 = *((_QWORD *)gameObject + 2);
      v86 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*((_DWORD *)gameObject + 7);
      if ( !v85 )
        goto LABEL_121;
      v87 = *((int *)gameObject + 6);
      if ( (unsigned int)v87 >= *(_DWORD *)(v85 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)gameObject,
          v75,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v86[4] + 192LL) + 112LL));
      }
      else
      {
        v88 = v85 + 8 * v87;
        *((_DWORD *)gameObject + 6) = v87 + 1;
        *(_QWORD *)(v88 + 32) = v75;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v88 + 32), (int32_t)v75, v83, v84);
      }
      if ( v70 == ++v71 )
        goto LABEL_104;
    }
  }
  gameObject = this->fields.mNoneLabelParent;
  if ( !warSelectedQuestList )
  {
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      return;
    }
LABEL_121:
    sub_1B8880C(gameObject, v16);
  }
  if ( !gameObject )
    goto LABEL_121;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, warSelectedQuestList->fields._size < 1, 0LL);
  v39 = QuestBoardListViewItemDraw_TypeInfo;
  v40 = warSelectedQuestList->fields._size;
  v101 = isAllDisp;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v39 = QuestBoardListViewItemDraw_TypeInfo;
  }
  v41 = v39->static_fields->SCRL_OBJ_DUMMY_NUM + v40;
  if ( v41 >= 1 )
  {
    for ( i = 0; i != v41; ++i )
    {
      if ( i < warSelectedQuestList->fields._size
        && (gameObject = System_Collections_Generic_List_object___get_Item(
                           (System_Collections_Generic_List_object__o *)warSelectedQuestList,
                           i,
                           (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ScrTerminalListTop_WarSelectedQuestInfo__get_Item__)) != 0LL )
      {
        v43 = *((_QWORD *)gameObject + 2);
        v44 = gameObject;
        if ( !v43 )
          goto LABEL_121;
        gameObject = (void *)*((_QWORD *)gameObject + 3);
        if ( !gameObject )
          goto LABEL_121;
        v45 = *(_DWORD *)(v43 + 16);
        gameObject = MapControl_QuestInfo__GetMine((MapControl_QuestInfo_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_121;
        gameObject = (void *)QuestEntity__HasFlag((QuestEntity_o *)gameObject, 0x800000000000000LL, 0LL);
        v46 = (MapControl_QuestInfo_o *)*((_QWORD *)v44 + 3);
        if ( ((unsigned __int8)gameObject & 1) != 0 )
        {
          v47 = *((_QWORD *)v44 + 2);
          if ( !v47 )
            goto LABEL_121;
          v48 = *(_DWORD *)(v47 + 24);
          v49 = (QuestBoardListViewItem_o *)sub_1B887FC(QuestBoardListViewItem_TypeInfo);
          v50 = (Il2CppObject *)v49;
          v51 = 6;
        }
        else
        {
          if ( !v46 )
            goto LABEL_121;
          gameObject = (void *)MapControl_QuestInfo__GetQuestType(*((MapControl_QuestInfo_o **)v44 + 3), 0LL);
          if ( (_DWORD)gameObject != 3 )
            goto LABEL_67;
          v60 = *((_QWORD *)v44 + 3);
          if ( !v60 )
            goto LABEL_121;
          gameObject = *(void **)(v60 + 104);
          if ( !gameObject )
            goto LABEL_121;
          gameObject = MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_121;
          gameObject = (void *)WarEntity__HasFlag((WarEntity_o *)gameObject, 16, 0LL);
          if ( ((unsigned __int8)gameObject & 1) == 0 )
          {
            v62 = *((_QWORD *)v44 + 2);
            if ( !v62 )
              goto LABEL_121;
            v46 = (MapControl_QuestInfo_o *)*((_QWORD *)v44 + 3);
            v48 = *(_DWORD *)(v62 + 24);
            v49 = (QuestBoardListViewItem_o *)sub_1B887FC(QuestBoardListViewItem_TypeInfo);
            v50 = (Il2CppObject *)v49;
            v51 = 2;
          }
          else
          {
LABEL_67:
            v61 = *((_QWORD *)v44 + 2);
            if ( !v61 )
              goto LABEL_121;
            v46 = (MapControl_QuestInfo_o *)*((_QWORD *)v44 + 3);
            v48 = *(_DWORD *)(v61 + 24);
            v49 = (QuestBoardListViewItem_o *)sub_1B887FC(QuestBoardListViewItem_TypeInfo);
            v50 = (Il2CppObject *)v49;
            v51 = 4;
          }
        }
        v54 = i;
        v55 = v46;
        v56 = 0LL;
        v57 = 0LL;
        v58 = v48;
        v59 = v45;
      }
      else
      {
        v52 = this->fields.blackMarkPrefab;
        v53 = this->fields.whiteMarkPrefab;
        v49 = (QuestBoardListViewItem_o *)sub_1B887FC(QuestBoardListViewItem_TypeInfo);
        v50 = (Il2CppObject *)v49;
        v51 = 6;
        v54 = i;
        v55 = 0LL;
        v56 = v52;
        v57 = v53;
        v58 = 0;
        v59 = 0;
      }
      QuestBoardListViewItem___ctor_33971908(v49, v54, v51, v55, v56, v57, v58, v59, v100);
      gameObject = this->fields.itemList;
      if ( !gameObject )
        goto LABEL_121;
      v65 = *((_QWORD *)gameObject + 2);
      v66 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*((_DWORD *)gameObject + 7);
      if ( !v65 )
        goto LABEL_121;
      v67 = *((int *)gameObject + 6);
      if ( (unsigned int)v67 >= *(_DWORD *)(v65 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)gameObject,
          v50,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v66[4] + 192LL) + 112LL));
      }
      else
      {
        v68 = v65 + 8 * v67;
        *((_DWORD *)gameObject + 6) = v67 + 1;
        *(_QWORD *)(v68 + 32) = v50;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v68 + 32), (int32_t)v50, v63, v64);
      }
    }
  }
LABEL_104:
  gameObject = this->fields.mNoneLabel;
  if ( !gameObject )
    goto LABEL_121;
  if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)gameObject, 0LL) )
    this->fields._IsShowingInfo_k__BackingField = 0;
  ListViewManager__SortItem((ListViewManager_o *)this, -1, v101, -1, 0LL);
  v89 = System_Linq_Enumerable__Cast_object_(
          (System_Collections_IEnumerable_o *)this->fields.itemList,
          (const MethodInfo_2E8FA18 *)Method_System_Linq_Enumerable_Cast_QuestBoardListViewItem___);
  v90 = QuestBoardListViewManager___c_TypeInfo;
  v91 = (System_Collections_Generic_IEnumerable_TSource__o *)v89;
  if ( !QuestBoardListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewManager___c_TypeInfo);
    v90 = QuestBoardListViewManager___c_TypeInfo;
  }
  _9__104_0 = (System_Func_object__bool__o *)v90->static_fields->__9__104_0;
  if ( !_9__104_0 )
  {
    if ( !v90->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v90);
      v90 = QuestBoardListViewManager___c_TypeInfo;
    }
    v93 = (Il2CppObject *)v90->static_fields->__9;
    _9__104_0 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_QuestBoardListViewItem__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__104_0, v93, Method_QuestBoardListViewManager___c__CreateList_b__104_0__, 0LL);
    static_fields = QuestBoardListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__104_0 = (struct System_Func_QuestBoardListViewItem__bool__o *)_9__104_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__104_0, (int32_t)_9__104_0, v95, v96);
  }
  v97 = System_Linq_Enumerable__FirstOrDefault_object__48907856(
          v91,
          (System_Func_TSource__bool__o *)_9__104_0,
          (const MethodInfo_2EA4650 *)Method_System_Linq_Enumerable_FirstOrDefault_QuestBoardListViewItem___);
  if ( v97 )
  {
    klass_high = HIDWORD(v97[1].klass);
    this->fields._IndexFirstDisplayableRoadmapButton_k__BackingField = klass_high;
    if ( !info_kind && (klass_high & 0x80000000) != 0 )
      goto LABEL_116;
  }
  else
  {
    this->fields._IndexFirstDisplayableRoadmapButton_k__BackingField = -1;
    if ( !info_kind )
LABEL_116:
      QuestBoardListViewManager__DisplayRoadmapButtonToTopWarBoard(this, v98);
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

  if ( (byte_4A580F5 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A580F5 = 1;
  }
  QuestBoardObjForWarId = (UnityEngine_Object_o *)QuestBoardListViewManager__GetQuestBoardObjForWarId(
                                                    this,
                                                    warId,
                                                    *(const MethodInfo **)&warId);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v16 = UnityEngine_Object__op_Equality(QuestBoardObjForWarId, 0LL, 0LL);
  if ( !v16 )
  {
    if ( !QuestBoardObjForWarId )
      sub_1B8880C(v16, v17);
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


void __fastcall QuestBoardListViewManager__DisplayRoadmapButtonToTopWarBoard(
        QuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *itemList; // x20
  QuestBoardListViewManager___c_c *v4; // x0
  System_Func_object__bool__o *_9__106_0; // x21
  Il2CppObject *v6; // x22
  struct QuestBoardListViewManager___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  Il2CppObject *v10; // x0
  __int64 methodPtr_low; // x9
  __int64 v12; // x9
  Il2CppMethodPointer methodPtr; // x0
  __int64 v14; // x1
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__c *v16; // x8
  QuestBoardListViewManager_o *v17; // x0
  bool v18; // w1
  bool v19; // w2
  const MethodInfo *v20; // x3

  if ( (byte_4A580F0 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_FirstOrDefault_ListViewItem___);
    sub_1B885B0(&System_Func_ListViewItem__bool__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&QuestBoardListViewItem_TypeInfo);
    sub_1B885B0(&QuestBoardListViewObject_TypeInfo);
    sub_1B885B0(&Method_QuestBoardListViewManager___c__DisplayRoadmapButtonToTopWarBoard_b__106_0__);
    sub_1B885B0(&QuestBoardListViewManager___c_TypeInfo);
    byte_4A580F0 = 1;
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
  _9__106_0 = (System_Func_object__bool__o *)v4->static_fields->__9__106_0;
  if ( !_9__106_0 )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = QuestBoardListViewManager___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v4->static_fields->__9;
    _9__106_0 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_ListViewItem__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__106_0,
      v6,
      Method_QuestBoardListViewManager___c__DisplayRoadmapButtonToTopWarBoard_b__106_0__,
      0LL);
    static_fields = QuestBoardListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__106_0 = (struct System_Func_ListViewItem__bool__o *)_9__106_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__106_0, (int32_t)_9__106_0, v8, v9);
  }
  v10 = System_Linq_Enumerable__FirstOrDefault_object__48907856(
          itemList,
          (System_Func_TSource__bool__o *)_9__106_0,
          (const MethodInfo_2EA4650 *)Method_System_Linq_Enumerable_FirstOrDefault_ListViewItem___);
  if ( !v10 )
    return;
  methodPtr_low = LOBYTE(QuestBoardListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(v10->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
    || (QuestBoardListViewItem_c *)v10->klass->_2.typeHierarchy[methodPtr_low - 1] != QuestBoardListViewItem_TypeInfo )
  {
    sub_1B88ACC(v10);
LABEL_30:
    sub_1B88ACC(itemList);
    QuestBoardListViewManager__ModifyAllRoadmapButtons(v17, v18, v19, v20);
    return;
  }
  this->fields._IndexFirstDisplayableRoadmapButton_k__BackingField = HIDWORD(v10[1].klass);
  itemList = (System_Collections_Generic_IEnumerable_TSource__o *)v10[6].monitor;
  if ( itemList )
  {
    v12 = LOBYTE(QuestBoardListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(itemList->klass->vtable[0].methodPtr) < (unsigned int)v12
      || (QuestBoardListViewObject_c *)itemList->klass->_2.typeHierarchy[v12 - 1] != QuestBoardListViewObject_TypeInfo )
    {
      goto LABEL_30;
    }
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  methodPtr = (Il2CppMethodPointer)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)itemList, 0LL, 0LL);
  if ( ((unsigned __int8)methodPtr & 1) == 0 )
  {
    if ( !itemList )
      goto LABEL_28;
    klass = itemList[8].klass;
    if ( !klass )
      goto LABEL_28;
    methodPtr = klass->vtable[30].methodPtr;
    if ( !methodPtr )
      goto LABEL_28;
    RoadmapButtonPrefab__Initialize(
      (RoadmapButtonPrefab_o *)methodPtr,
      this->fields._RoadmapAssetData_k__BackingField,
      0LL);
    if ( !this->fields.initMode || this->fields.mFaded )
    {
      v16 = itemList[8].klass;
      if ( v16 )
      {
        methodPtr = v16->vtable[30].methodPtr;
        if ( methodPtr )
        {
          RoadmapButtonPrefab__ModifyRoadmapButton((RoadmapButtonPrefab_o *)methodPtr, 0, 1, 0LL);
          return;
        }
      }
LABEL_28:
      sub_1B8880C(methodPtr, v14);
    }
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
    sub_1B8880C(0LL, end_act);
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
  int32_t v8; // w2
  int32_t v9; // w3
  const MethodInfo *v10; // x1
  System_Action_o *v11; // x20
  const MethodInfo *v12; // x5

  if ( (byte_4A580FE & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_QuestBoardListViewManager___c__DisplayClass124_0__EndSlideOut_b__0__);
    sub_1B885B0(&QuestBoardListViewManager___c__DisplayClass124_0_TypeInfo);
    byte_4A580FE = 1;
  }
  v5 = sub_1B887FC(QuestBoardListViewManager___c__DisplayClass124_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    sub_1B8880C(v6, v7);
  *(_QWORD *)(v5 + 16) = end_act;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)end_act, v8, v9);
  this->fields.mIsDoing_Slide = 0;
  QuestBoardListViewManager__ResetBG(this, v10);
  v11 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v11,
    (Il2CppObject *)v5,
    Method_QuestBoardListViewManager___c__DisplayClass124_0__EndSlideOut_b__0__,
    0LL);
  QuestBoardListViewManager__SetMode(this, 0, v11, 0, 0, v12);
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
  PartyServantListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4A580F8 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&PartyServantListViewItem_TypeInfo);
    byte_4A580F8 = 1;
  }
  result = (PartyServantListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (PartyServantListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                             (System_Collections_Generic_List_object__o *)result,
                                             index,
                                             (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      methodPtr_low = LOBYTE(PartyServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
      {
        if ( (PartyServantListViewItem_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != PartyServantListViewItem_TypeInfo )
          return 0LL;
      }
      else
      {
        return 0LL;
      }
    }
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
QuestBoardListViewObject_o *__fastcall QuestBoardListViewManager__GetQuestBoardObjForWarId(
        QuestBoardListViewManager_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  Il2CppObject *current; // x26
  __int64 methodPtr_low; // x10
  _QWORD *monitor; // x8
  __int64 v9; // x8
  UnityEngine_Object_o *v10; // x20
  void *v11; // x8
  __int64 v12; // x11
  UnityEngine_Object_o *v13; // x20
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4A580F6 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&QuestBoardListViewItem_TypeInfo);
    sub_1B885B0(&QuestBoardListViewObject_TypeInfo);
    byte_4A580F6 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1B8880C(0LL, *(_QWORD *)&warId);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v16 = v15;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v16,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
  {
    current = v16.fields._current;
    if ( v16.fields._current )
    {
      methodPtr_low = LOBYTE(QuestBoardListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v16.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (QuestBoardListViewItem_c *)v16.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] == QuestBoardListViewItem_TypeInfo )
      {
        monitor = v16.fields._current[7].monitor;
        if ( monitor )
        {
          v9 = monitor[14];
          if ( v9 )
          {
            if ( *(_DWORD *)(v9 + 16) != 1 && *(_DWORD *)(v9 + 20) == warId )
            {
              v10 = (UnityEngine_Object_o *)v16.fields._current[6].monitor;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(v10, 0LL, 0LL) )
              {
                v11 = current[6].monitor;
                if ( v11
                  && (v12 = LOBYTE(QuestBoardListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
                      *(unsigned __int8 *)(*(_QWORD *)v11 + 304LL) >= (unsigned int)v12) )
                {
                  v13 = *(QuestBoardListViewObject_c **)(*(_QWORD *)(*(_QWORD *)v11 + 200LL) + 8 * v12 - 8) == QuestBoardListViewObject_TypeInfo
                      ? (UnityEngine_Object_o *)current[6].monitor
                      : 0LL;
                }
                else
                {
                  v13 = 0LL;
                }
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(v13, 0LL, 0LL) )
                  goto LABEL_27;
              }
            }
          }
        }
      }
    }
  }
  v13 = 0LL;
LABEL_27:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v16,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  return (QuestBoardListViewObject_o *)v13;
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
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v6; // x1
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A580FB & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestBoardListViewObject__GetEnumerator__);
    byte_4A580FB = 1;
  }
  memset(&v9, 0, sizeof(v9));
  ObjectList = (System_Collections_Generic_List_object__o *)QuestBoardListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1B8880C(0LL, v6);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    ObjectList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_QuestBoardListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v9,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__MoveNext__) )
  {
    if ( !v9.fields._current )
      sub_1B8880C(0LL, v7);
    QuestBoardListViewObject__Init_34018108((QuestBoardListViewObject_o *)v9.fields._current, mode, 0LL, v8);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__Dispose__);
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
  UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)this, Asset, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestBoardListViewManager__ModifyAllRoadmapButtons(
        QuestBoardListViewManager_o *this,
        bool isEnable,
        bool isImmediate,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v8; // x1
  bool v9; // w20
  bool i; // w19
  _BOOL8 v11; // x0
  __int64 v12; // x1
  Il2CppClass *klass; // x8
  RoadmapButtonPrefab_o *methodPtr; // x0
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A580F1 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestBoardListViewObject__GetEnumerator__);
    byte_4A580F1 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = (System_Collections_Generic_List_object__o *)QuestBoardListViewManager__get_ObjectList(
                                                              this,
                                                              (const MethodInfo *)isEnable);
  if ( !ObjectList )
    sub_1B8880C(0LL, v8);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    ObjectList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_QuestBoardListViewObject__GetEnumerator__);
  v9 = isEnable;
  for ( i = isImmediate; ; RoadmapButtonPrefab__ModifyRoadmapButton(methodPtr, v9, i, 0LL) )
  {
    v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v15,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__MoveNext__);
    if ( !v11 )
      break;
    if ( !v15.fields._current )
      sub_1B8880C(v11, v12);
    klass = v15.fields._current[8].klass;
    if ( !klass )
      sub_1B8880C(v11, v12);
    methodPtr = (RoadmapButtonPrefab_o *)klass->vtable[30].methodPtr;
    if ( !methodPtr )
      sub_1B8880C(0LL, v12);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v15,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__Dispose__);
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
  __int64 v13; // x21
  MoveObject_o *v14; // x0
  __int64 v15; // x1
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w2
  int32_t v19; // w3
  Il2CppObject *Component_object; // x0
  MoveObject_o **v21; // x23
  int32_t v22; // w2
  int32_t v23; // w3
  float v24; // s10
  float x; // s10
  float y; // s11
  float z; // s12
  MoveObject_o *v28; // x20
  float v29; // s13
  float v30; // s15
  float v31; // s14
  System_Action_o *v32; // x22
  System_Action_o *v33; // x23
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v37; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_4A58123 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_GameObjectExtensions_SafeGetComponent_MoveObject___);
    sub_1B885B0(&Method_QuestBoardListViewManager___c__DisplayClass176_0__MoveBoard_b__0__);
    sub_1B885B0(&Method_QuestBoardListViewManager___c__DisplayClass176_0__MoveBoard_b__1__);
    sub_1B885B0(&QuestBoardListViewManager___c__DisplayClass176_0_TypeInfo);
    byte_4A58123 = 1;
  }
  v13 = sub_1B887FC(QuestBoardListViewManager___c__DisplayClass176_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_10;
  *(_QWORD *)(v13 + 40) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v13 + 40), (int32_t)this, v16, v17);
  *(_QWORD *)(v13 + 16) = obj;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v13 + 16), (int32_t)obj, v18, v19);
  *(float *)(v13 + 32) = GameObjectExtensions__GetLocalPositionY(*(UnityEngine_GameObject_o **)(v13 + 16), 0LL) + moveY;
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       *(UnityEngine_GameObject_o **)(v13 + 16),
                       (const MethodInfo_2ED09A0 *)Method_GameObjectExtensions_SafeGetComponent_MoveObject___);
  *(_QWORD *)(v13 + 24) = Component_object;
  v21 = (MoveObject_o **)(v13 + 24);
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v13 + 24), (int32_t)Component_object, v22, v23);
  if ( is_force
    || (v24 = *(float *)(v13 + 32),
        v24 == GameObjectExtensions__GetLocalPositionY(*(UnityEngine_GameObject_o **)(v13 + 16), 0LL)) )
  {
    v14 = *v21;
    if ( *v21 )
    {
      MoveObject__Stop(v14, 0LL);
      GameObjectExtensions__SetLocalPositionY(*(UnityEngine_GameObject_o **)(v13 + 16), *(float *)(v13 + 32), 0LL);
      --this->fields.waitCount;
      return;
    }
LABEL_10:
    sub_1B8880C(v14, v15);
  }
  LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v13 + 16), 0LL);
  x = LocalPosition.fields.x;
  y = LocalPosition.fields.y;
  z = LocalPosition.fields.z;
  v35 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v13 + 16), 0LL);
  v28 = *(MoveObject_o **)(v13 + 24);
  v29 = v35.fields.x;
  v30 = v35.fields.y;
  v31 = v35.fields.z;
  v32 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v32,
    (Il2CppObject *)v13,
    Method_QuestBoardListViewManager___c__DisplayClass176_0__MoveBoard_b__0__,
    0LL);
  v33 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v33,
    (Il2CppObject *)v13,
    Method_QuestBoardListViewManager___c__DisplayClass176_0__MoveBoard_b__1__,
    0LL);
  if ( !v28 )
    goto LABEL_10;
  v37.fields.y = v30 + moveY;
  v36.fields.x = x;
  v36.fields.y = y;
  v36.fields.z = z;
  v37.fields.x = v29;
  v37.fields.z = v31;
  MoveObject__Play(v28, v36, v37, time, v32, v33, 0.0, easeType, 0LL);
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
  _BOOL8 v14; // x0
  __int64 v15; // x1
  UnityEngine_Component_o *monitor; // x24
  __int64 v17; // x1
  QuestBoardListViewItemDraw_c *v18; // x0
  uint32_t cctor_finished; // w8
  int POS_Y_ITVL_AREA; // w8
  int v21; // w25
  UnityEngine_GameObject_o *gameObject; // x1
  const MethodInfo *v23; // x4
  _BOOL8 v24; // x0
  __int64 v25; // x1
  UnityEngine_Component_o *v26; // x24
  __int64 v27; // x1
  QuestBoardListViewItemDraw_c *v28; // x0
  uint32_t v29; // w8
  int v30; // w8
  int v31; // w25
  UnityEngine_GameObject_o *v32; // x1
  const MethodInfo *v33; // x4
  const MethodInfo *v34; // x2
  System_Collections_IEnumerator_o *v35; // x0
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v37; // [xsp+20h] [xbp-90h] BYREF

  if ( (byte_4A580F3 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&QuestBoardListViewItemDraw_TypeInfo);
    byte_4A580F3 = 1;
  }
  memset(&v37, 0, sizeof(v37));
  topItemList = this->fields.topItemList;
  this->fields.waitCount = 0;
  if ( !topItemList )
    goto LABEL_48;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v36,
    (System_Collections_Generic_List_object__o *)topItemList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v37 = v36;
  while ( 1 )
  {
    v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v37,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v14 )
      break;
    if ( !v37.fields._current )
      sub_1B8880C(v14, v15);
    monitor = (UnityEngine_Component_o *)v37.fields._current[6].monitor;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)monitor, 0LL, 0LL) )
    {
      v18 = QuestBoardListViewItemDraw_TypeInfo;
      cctor_finished = QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished;
      if ( isClose )
      {
        if ( !cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          v18 = QuestBoardListViewItemDraw_TypeInfo;
        }
        POS_Y_ITVL_AREA = -v18->static_fields->POS_Y_ITVL_AREA;
      }
      else
      {
        if ( !cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          v18 = QuestBoardListViewItemDraw_TypeInfo;
        }
        POS_Y_ITVL_AREA = v18->static_fields->POS_Y_ITVL_AREA;
      }
      if ( POS_Y_ITVL_AREA >= 0 )
        v21 = POS_Y_ITVL_AREA;
      else
        v21 = POS_Y_ITVL_AREA + 1;
      if ( !monitor )
        sub_1B8880C(v18, v17);
      gameObject = UnityEngine_Component__get_gameObject(monitor, 0LL);
      QuestBoardListViewManager__MoveBoard(this, gameObject, (float)(v21 >> 1), moveTime, easeType, isForce, v23);
      ++this->fields.waitCount;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v37,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  topItemList = this->fields.bottomItemList;
  if ( !topItemList )
LABEL_48:
    sub_1B8880C(topItemList, isClose);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v36,
    (System_Collections_Generic_List_object__o *)topItemList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v37 = v36;
  while ( 1 )
  {
    v24 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v37,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v24 )
      break;
    if ( !v37.fields._current )
      sub_1B8880C(v24, v25);
    v26 = (UnityEngine_Component_o *)v37.fields._current[6].monitor;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v26, 0LL, 0LL) )
    {
      v28 = QuestBoardListViewItemDraw_TypeInfo;
      v29 = QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished;
      if ( isClose )
      {
        if ( !v29 )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          v28 = QuestBoardListViewItemDraw_TypeInfo;
        }
        v30 = v28->static_fields->POS_Y_ITVL_AREA;
      }
      else
      {
        if ( !v29 )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          v28 = QuestBoardListViewItemDraw_TypeInfo;
        }
        v30 = -v28->static_fields->POS_Y_ITVL_AREA;
      }
      if ( v30 >= 0 )
        v31 = v30;
      else
        v31 = v30 + 1;
      if ( !v26 )
        sub_1B8880C(v28, v27);
      v32 = UnityEngine_Component__get_gameObject(v26, 0LL);
      QuestBoardListViewManager__MoveBoard(this, v32, (float)(v31 >> 1), moveTime, easeType, isForce, v33);
      ++this->fields.waitCount;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v37,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  if ( endAct )
  {
    v35 = QuestBoardListViewManager__WaitFinish(this, endAct, v34);
    UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)this, v35, 0LL);
  }
}


void __fastcall QuestBoardListViewManager__OnChangeAlphaAnim(
        QuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  const MethodInfo *v4; // x1
  System_Collections_Generic_List_object__o *v5; // x20
  int32_t v6; // w21

  if ( (byte_4A58106 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestBoardListViewObject__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestBoardListViewObject__get_Item__);
    byte_4A58106 = 1;
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
                                                                  (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_QuestBoardListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      QuestBoardListViewObject__OnChangeAlphaAnim((QuestBoardListViewObject_o *)ObjectList, v4);
      if ( ++v6 >= v5->fields._size )
        goto LABEL_8;
    }
LABEL_9:
    sub_1B8880C(ObjectList, v4);
  }
LABEL_8:
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
  int32_t v8; // w2
  int32_t v9; // w3
  void **v10; // x21
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w2
  int32_t v14; // w3
  __int64 v15; // x24
  __int64 methodPtr_low; // x10
  MapControl_QuestInfo_o *v17; // x20
  struct MapControl_AreaBoardInfo_o *AreaBoardInfo_k__BackingField; // x1
  MapControl_AreaBoardInfo_o **v19; // x23
  struct TerminalSceneComponent_o *mTerminalScene; // x9
  int32_t dispType; // w8
  MapControl_WarInfo_o *WarInfoByWarID; // x0
  MapControl_WarInfo_o *v23; // x23
  WarEntity_o *Mine; // x22
  bool IsClosedWar; // w0
  MapControl_WarInfo_o *WarInfo_k__BackingField; // x0
  int32_t EventId; // w22
  int32_t GroupId; // w23
  QuestEntity_o *v29; // x0
  QuestEntity_o *v30; // x23
  __int64 v31; // x1
  _QWORD *v32; // x0
  System_Reflection_MethodBase_o *v33; // x0
  __int64 v34; // x1
  TerminalSceneComponent_c *v35; // x0
  TerminalSceneComponent_o *mInstance; // x0
  const MethodInfo *v37; // x1
  __int64 v38; // x1
  UnityEngine_GameObject_o *fortificationWarningDialog; // x0
  Il2CppObject *Component_object; // x0
  __int64 v41; // x1
  _QWORD *v42; // x0
  System_Reflection_MethodBase_o *v43; // x0
  int32_t SpotID; // w22
  TerminalPramsManager_c *v45; // x0
  int32_t questId; // w22
  TerminalPramsManager_c *v47; // x0
  int32_t v48; // w22
  TerminalPramsManager_c *v49; // x0
  _QWORD *v50; // x0
  System_Reflection_MethodBase_o *v51; // x0
  EventEntity_o *eventEnt; // x20
  System_Action_o *v53; // x24
  const MethodInfo *v54; // x4
  __int64 v55; // x8
  ScrTerminalListTop_o *mTerminalList; // x19
  MapControl_AreaBoardInfo_o *v57; // x20
  _QWORD *v58; // x0
  System_Reflection_MethodBase_o *v59; // x0
  _QWORD *v60; // x0
  System_Reflection_MethodBase_o *v61; // x0
  int32_t v62; // w22
  _QWORD *v63; // x0
  System_Reflection_MethodBase_o *v64; // x0
  TerminalSceneComponent_c *v65; // x0
  TerminalSceneComponent_c *v66; // x0
  const MethodInfo *v67; // x1
  ScrTerminalListTop_o *v68; // x19
  _QWORD *v69; // x0
  System_Reflection_MethodBase_o *v70; // x0
  QuestEntity_o *v71; // x22
  TerminalSceneComponent_c *v72; // x0
  int32_t v73; // w23
  const MethodInfo *v74; // x2
  TerminalSceneComponent_c *v75; // x0
  const MethodInfo *v76; // x1
  ScrTerminalListTop_o *v77; // x19
  __int64 v78; // x9
  System_Collections_Generic_List_Enumerator_object__o v79; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v80; // [xsp+20h] [xbp-70h] BYREF
  System_Collections_Generic_List_EventFortificationEntity__o *entities; // [xsp+48h] [xbp-48h] BYREF

  if ( (byte_4A58101 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_EventFortificationMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_QuestGroupMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__get_Current__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_FortificationWarningDialogComponent___);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventFortificationEntity__GetEnumerator__);
    sub_1B885B0(&QuestBoardListViewItem_TypeInfo);
    sub_1B885B0(&Method_QuestBoardListViewManager_OnClickListView__);
    sub_1B885B0(&QuestBoardListViewObject_TypeInfo);
    sub_1B885B0(&QuestInformationComponent_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    sub_1B885B0(&Method_QuestBoardListViewManager___c__DisplayClass130_0__OnClickListView_b__0__);
    sub_1B885B0(&QuestBoardListViewManager___c__DisplayClass130_0_TypeInfo);
    byte_4A58101 = 1;
  }
  entities = 0LL;
  memset(&v80, 0, sizeof(v80));
  v5 = sub_1B887FC(QuestBoardListViewManager___c__DisplayClass130_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_166;
  *(_QWORD *)(v5 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 32) = obj;
  v10 = (void **)(v5 + 32);
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)obj, v11, v12);
  if ( !*(_QWORD *)(v5 + 32) )
    goto LABEL_166;
  v15 = *(_QWORD *)(*(_QWORD *)(v5 + 32) + 56LL);
  if ( !v15 )
    goto LABEL_166;
  methodPtr_low = LOBYTE(QuestBoardListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( *(unsigned __int8 *)(*(_QWORD *)v15 + 304LL) < (unsigned int)methodPtr_low
    || *(QuestBoardListViewItem_c **)(*(_QWORD *)(*(_QWORD *)v15 + 200LL) + 8 * methodPtr_low - 8) != QuestBoardListViewItem_TypeInfo )
  {
    goto LABEL_166;
  }
  v17 = *(MapControl_QuestInfo_o **)(v15 + 120);
  if ( !v17 )
    return;
  AreaBoardInfo_k__BackingField = v17->fields._AreaBoardInfo_k__BackingField;
  *(_QWORD *)(v5 + 24) = AreaBoardInfo_k__BackingField;
  v19 = (MapControl_AreaBoardInfo_o **)(v5 + 24);
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)AreaBoardInfo_k__BackingField, v13, v14);
  mTerminalScene = this->fields.mTerminalScene;
  if ( !mTerminalScene )
    goto LABEL_166;
  dispType = v17->fields.dispType;
  mTerminalScene->fields._IsWarStartAnim_k__BackingField = 0;
  switch ( *(_DWORD *)(v15 + 112) )
  {
    case 0:
      if ( dispType == 2 )
        goto LABEL_92;
      Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !Instance )
        goto LABEL_166;
      CommonUI__CheckChangeOtherConnectMarkFromEventId(Instance, 0, 1, 0LL);
      v50 = Method_QuestBoardListViewManager_OnClickListView__;
      if ( (*((_BYTE *)Method_QuestBoardListViewManager_OnClickListView__ + 83) & 2) != 0 )
        v50 = (_QWORD *)sub_1B885C8(Method_QuestBoardListViewManager_OnClickListView__);
      v51 = (System_Reflection_MethodBase_o *)sub_1B88594(v50, v50[4]);
      OverwriteAssetSoundName__PlaySystemSe(v51, 0, 0LL);
      if ( !*v19 )
        goto LABEL_166;
      eventEnt = (*v19)->fields.eventEnt;
      v53 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(
        v53,
        (Il2CppObject *)v5,
        Method_QuestBoardListViewManager___c__DisplayClass130_0__OnClickListView_b__0__,
        0LL);
      v55 = *(_QWORD *)(v5 + 24);
      if ( !v55 )
        goto LABEL_166;
      if ( QuestBoardListViewManager__RequestToRaiseTutorialFlag(this, eventEnt, v53, *(_DWORD *)(v55 + 20), v54) )
        return;
      Instance = (CommonUI_o *)*v10;
      if ( !*v10 )
        goto LABEL_166;
      mTerminalList = this->fields.mTerminalList;
      v57 = *v19;
      Instance = (CommonUI_o *)ListViewObject__get_Index((ListViewObject_o *)Instance, 0LL);
      if ( !mTerminalList )
        goto LABEL_166;
      ScrTerminalListTop__Click_Area(mTerminalList, v57, (int32_t)Instance, 0, 0, 0LL);
      return;
    case 1:
    case 4:
      if ( dispType == 2 )
        goto LABEL_92;
      if ( !*v19 )
        goto LABEL_23;
      Instance = (CommonUI_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !*v19 || !Instance )
        goto LABEL_166;
      WarInfoByWarID = QuestTree__mfGetWarInfoByWarID((QuestTree_o *)Instance, (*v19)->fields.warId, 0LL);
      if ( !WarInfoByWarID )
        goto LABEL_23;
      v23 = WarInfoByWarID;
      Mine = MapControl_WarInfo__GetMine(WarInfoByWarID, 0LL);
      IsClosedWar = MapControl_WarInfo__IsClosedWar(v23, 0LL);
      if ( Mine && IsClosedWar && WarEntity__IsMainInterlude(Mine, 0LL) )
        goto LABEL_92;
      if ( !Mine || !WarEntity__IsSubFolder(Mine, 0LL) )
        goto LABEL_23;
      Instance = (CommonUI_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !Instance )
        goto LABEL_166;
      if ( !QuestTree__IsWarOpen((QuestTree_o *)Instance, Mine->fields.id, 0LL) )
      {
LABEL_92:
        v58 = Method_QuestBoardListViewManager_OnClickListView__;
        if ( (*((_BYTE *)Method_QuestBoardListViewManager_OnClickListView__ + 83) & 2) != 0 )
          v58 = (_QWORD *)sub_1B885C8(Method_QuestBoardListViewManager_OnClickListView__);
        v59 = (System_Reflection_MethodBase_o *)sub_1B88594(v58, v58[4]);
        OverwriteAssetSoundName__PlaySystemSe(v59, 2, 0LL);
        return;
      }
LABEL_23:
      WarInfo_k__BackingField = v17->fields._WarInfo_k__BackingField;
      if ( !WarInfo_k__BackingField )
        goto LABEL_134;
      EventId = MapControl_WarInfo__GetEventId(WarInfo_k__BackingField, 0LL);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Instance = (CommonUI_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_QuestGroupMaster___);
      if ( !Instance )
        goto LABEL_166;
      GroupId = QuestGroupMaster__GetGroupId((QuestGroupMaster_o *)Instance, v17->fields.questId, 18, 0LL);
      v29 = MapControl_QuestInfo__GetMine(v17, 0LL);
      if ( EventId != GroupId )
        goto LABEL_134;
      v30 = v29;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4A5818C )
      {
        sub_1B885B0(&TerminalPramsManager_TypeInfo);
        byte_4A5818C = 1;
      }
      Instance = (CommonUI_o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        Instance = (CommonUI_o *)TerminalPramsManager_TypeInfo;
      }
      if ( BYTE1(Instance->fields.skipAnimation[19].fields.m_CachedPtr) )
        goto LABEL_134;
      if ( !v30 )
        goto LABEL_166;
      if ( QuestEntity__HasFlag(v30, 2LL, 0LL) )
        goto LABEL_134;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Instance = (CommonUI_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventFortificationMaster___);
      if ( !Instance )
        goto LABEL_166;
      if ( !EventFortificationMaster__TryGetEntityList((EventFortificationMaster_o *)Instance, &entities, EventId, 0LL) )
        goto LABEL_134;
      Instance = (CommonUI_o *)entities;
      if ( !entities )
        goto LABEL_166;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v79,
        (System_Collections_Generic_List_object__o *)entities,
        (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_EventFortificationEntity__GetEnumerator__);
      v80 = v79;
      break;
    case 2:
    case 3:
      v42 = Method_QuestBoardListViewManager_OnClickListView__;
      if ( (*((_BYTE *)Method_QuestBoardListViewManager_OnClickListView__ + 83) & 2) != 0 )
        v42 = (_QWORD *)sub_1B885C8(Method_QuestBoardListViewManager_OnClickListView__);
      v43 = (System_Reflection_MethodBase_o *)sub_1B88594(v42, v42[4]);
      OverwriteAssetSoundName__PlaySystemSe(v43, 0, 0LL);
      SpotID = MapControl_QuestInfo__GetSpotID(v17, 0LL);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4A57DC9 )
      {
        sub_1B885B0(&TerminalPramsManager_TypeInfo);
        byte_4A57DC9 = 1;
      }
      v45 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v45 = TerminalPramsManager_TypeInfo;
      }
      v45->static_fields->_SpotId_k__BackingField = SpotID;
      Instance = (CommonUI_o *)MapControl_QuestInfo__GetMine(v17, 0LL);
      if ( !Instance )
        goto LABEL_166;
      if ( LODWORD(Instance->fields.topImg) == 3 )
      {
        questId = v17->fields.questId;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4A5818A )
        {
          sub_1B885B0(&TerminalPramsManager_TypeInfo);
          byte_4A5818A = 1;
        }
        v47 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v47 = TerminalPramsManager_TypeInfo;
        }
        v47->static_fields->_SelectedStoryQuestId_k__BackingField = questId;
      }
      v48 = *(_DWORD *)(v15 + 148);
      if ( v48 )
      {
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4A56DA1 )
        {
          sub_1B885B0(&TerminalPramsManager_TypeInfo);
          byte_4A56DA1 = 1;
        }
        v49 = TerminalPramsManager_TypeInfo;
LABEL_105:
        if ( !v49->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v49);
          v49 = TerminalPramsManager_TypeInfo;
        }
        v49->static_fields->_SelectedRecollectionWarId_k__BackingField = v48;
        if ( !byte_4A5818B )
        {
          sub_1B885B0(&TerminalPramsManager_TypeInfo);
          v49 = TerminalPramsManager_TypeInfo;
          byte_4A5818B = 1;
        }
        if ( !v49->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v49);
          v49 = TerminalPramsManager_TypeInfo;
        }
        v49->static_fields->_IsFromRecollectionBoard_k__BackingField = 1;
      }
      Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !Instance )
        goto LABEL_166;
      CommonUI__CheckChangeOtherConnectMarkFromEventId(Instance, 0, 1, 0LL);
      Instance = (CommonUI_o *)this->fields.mTerminalList;
      if ( !Instance )
        goto LABEL_166;
      ScrTerminalListTop__Click_Shortcut((ScrTerminalListTop_o *)Instance, v17->fields.warId, v17->fields.questId, 0LL);
      return;
    case 5:
      if ( dispType == 2 )
        goto LABEL_92;
      Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !Instance )
        goto LABEL_166;
      CommonUI__CheckChangeOtherConnectMarkFromEventId(Instance, 0, 1, 0LL);
      v63 = Method_QuestBoardListViewManager_OnClickListView__;
      if ( (*((_BYTE *)Method_QuestBoardListViewManager_OnClickListView__ + 83) & 2) != 0 )
        v63 = (_QWORD *)sub_1B885C8(Method_QuestBoardListViewManager_OnClickListView__);
      v64 = (System_Reflection_MethodBase_o *)sub_1B88594(v63, v63[4]);
      OverwriteAssetSoundName__PlaySystemSe(v64, 0, 0LL);
      MapControl_QuestInfo__GetMine(v17, 0LL);
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_4A5629D )
      {
        sub_1B885B0(&TerminalSceneComponent_TypeInfo);
        byte_4A5629D = 1;
      }
      v65 = TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v65 = TerminalSceneComponent_TypeInfo;
      }
      Instance = (CommonUI_o *)v65->static_fields->mInstance;
      if ( !Instance )
        goto LABEL_166;
      TerminalSceneComponent__QuestInfoShowing((TerminalSceneComponent_o *)Instance, 0LL);
      if ( !byte_4A5629D )
      {
        sub_1B885B0(&TerminalSceneComponent_TypeInfo);
        byte_4A5629D = 1;
      }
      v66 = TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v66 = TerminalSceneComponent_TypeInfo;
      }
      Instance = (CommonUI_o *)v66->static_fields->mInstance;
      if ( !Instance )
        goto LABEL_166;
      TerminalSceneComponent__CallQuestInformationClose((TerminalSceneComponent_o *)Instance, 0LL);
      QuestBoardListViewManager__SetShowingInfoAllOff(this, v67);
      Instance = (CommonUI_o *)*v10;
      if ( !*v10 )
        goto LABEL_166;
      v68 = this->fields.mTerminalList;
      Instance = (CommonUI_o *)ListViewObject__get_Index((ListViewObject_o *)Instance, 0LL);
      if ( !v68 )
        goto LABEL_166;
      ScrTerminalListTop__Click_WarBoard(v68, v17, (int32_t)Instance, 0LL);
      return;
    case 6:
      v60 = Method_QuestBoardListViewManager_OnClickListView__;
      if ( (*((_BYTE *)Method_QuestBoardListViewManager_OnClickListView__ + 83) & 2) != 0 )
        v60 = (_QWORD *)sub_1B885C8(Method_QuestBoardListViewManager_OnClickListView__);
      v61 = (System_Reflection_MethodBase_o *)sub_1B88594(v60, v60[4]);
      OverwriteAssetSoundName__PlaySystemSe(v61, 0, 0LL);
      v62 = MapControl_QuestInfo__GetSpotID(v17, 0LL);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4A57DC9 )
      {
        sub_1B885B0(&TerminalPramsManager_TypeInfo);
        byte_4A57DC9 = 1;
      }
      v49 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v49 = TerminalPramsManager_TypeInfo;
      }
      v49->static_fields->_SpotId_k__BackingField = v62;
      v48 = *(_DWORD *)(v15 + 148);
      if ( !byte_4A56DA1 )
      {
        sub_1B885B0(&TerminalPramsManager_TypeInfo);
        v49 = TerminalPramsManager_TypeInfo;
        byte_4A56DA1 = 1;
      }
      goto LABEL_105;
    default:
      return;
  }
  do
  {
    if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v80,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__MoveNext__) )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v80,
        (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__Dispose__);
LABEL_134:
      Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Instance )
      {
        CommonUI__CheckChangeOtherConnectMarkFromEventId(Instance, 0, 1, 0LL);
        v69 = Method_QuestBoardListViewManager_OnClickListView__;
        if ( (*((_BYTE *)Method_QuestBoardListViewManager_OnClickListView__ + 83) & 2) != 0 )
          v69 = (_QWORD *)sub_1B885C8(Method_QuestBoardListViewManager_OnClickListView__);
        v70 = (System_Reflection_MethodBase_o *)sub_1B88594(v69, v69[4]);
        OverwriteAssetSoundName__PlaySystemSe(v70, 0, 0LL);
        v71 = MapControl_QuestInfo__GetMine(v17, 0LL);
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_4A5629D )
        {
          sub_1B885B0(&TerminalSceneComponent_TypeInfo);
          byte_4A5629D = 1;
        }
        v72 = TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          v72 = TerminalSceneComponent_TypeInfo;
        }
        Instance = (CommonUI_o *)v72->static_fields->mInstance;
        if ( Instance )
        {
          v73 = TerminalSceneComponent__QuestInfoShowing((TerminalSceneComponent_o *)Instance, 0LL);
          if ( !QuestInformationComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(QuestInformationComponent_TypeInfo);
          if ( !v71
            || QuestEntity__HasFlag(v71, 2LL, 0LL)
            || v73 < 1
            || v71->fields.afterClear == 1
            || v73 == v17->fields.questId )
          {
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_4A5629D )
            {
              sub_1B885B0(&TerminalSceneComponent_TypeInfo);
              byte_4A5629D = 1;
            }
            v75 = TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              v75 = TerminalSceneComponent_TypeInfo;
            }
            Instance = (CommonUI_o *)v75->static_fields->mInstance;
            if ( Instance )
            {
              TerminalSceneComponent__CallQuestInformationClose((TerminalSceneComponent_o *)Instance, 0LL);
              QuestBoardListViewManager__SetShowingInfoAllOff(this, v76);
              Instance = (CommonUI_o *)*v10;
              if ( *v10 )
              {
                v77 = this->fields.mTerminalList;
                Instance = (CommonUI_o *)ListViewObject__get_Index((ListViewObject_o *)Instance, 0LL);
                if ( v77 )
                {
                  ScrTerminalListTop__Click_Quest(v77, v17, (int32_t)Instance, 0LL);
                  return;
                }
              }
            }
          }
          else
          {
            Instance = (CommonUI_o *)*v10;
            if ( *v10 )
            {
              v78 = LOBYTE(QuestBoardListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
              if ( LOBYTE(Instance->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v78
                && (QuestBoardListViewObject_c *)Instance->klass->_2.typeHierarchy[v78 - 1] == QuestBoardListViewObject_TypeInfo )
              {
                QuestBoardListViewObject__OnClickInfoBtn((QuestBoardListViewObject_o *)Instance, 1, v74);
                return;
              }
              sub_1B88ACC(Instance);
LABEL_169:
              sub_1B8880C(mInstance, v34);
            }
          }
        }
      }
LABEL_166:
      sub_1B8880C(Instance, v7);
    }
    if ( !v80.fields._current )
      sub_1B8880C(0LL, v31);
  }
  while ( !EventFortificationEntity__IsOpenFortificationWarningDialog(
             (EventFortificationEntity_o *)v80.fields._current,
             0LL) );
  v32 = Method_QuestBoardListViewManager_OnClickListView__;
  if ( (*((_BYTE *)Method_QuestBoardListViewManager_OnClickListView__ + 83) & 2) != 0 )
    v32 = (_QWORD *)sub_1B885C8(Method_QuestBoardListViewManager_OnClickListView__);
  v33 = (System_Reflection_MethodBase_o *)sub_1B88594(v32, v32[4]);
  OverwriteAssetSoundName__PlaySystemSe(v33, 0, 0LL);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4A5629D )
  {
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    byte_4A5629D = 1;
  }
  v35 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v35 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v35->static_fields->mInstance;
  if ( !mInstance )
    goto LABEL_169;
  TerminalSceneComponent__CallQuestInformationClose(mInstance, 0LL);
  QuestBoardListViewManager__SetShowingInfoAllOff(this, v37);
  fortificationWarningDialog = this->fields.fortificationWarningDialog;
  if ( !fortificationWarningDialog )
    sub_1B8880C(0LL, v38);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       fortificationWarningDialog,
                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_FortificationWarningDialogComponent___);
  if ( !Component_object )
    sub_1B8880C(0LL, v41);
  FortificationWarningDialogComponent__Open((FortificationWarningDialogComponent_o *)Component_object, 0LL);
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v80,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__Dispose__);
}


void __fastcall QuestBoardListViewManager__OnCompleteAssetData(
        QuestBoardListViewManager_o *this,
        AssetData_o *loadedAssetData,
        System_Action_o *onCompleteLoad,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x1

  this->fields.effectAssetData = loadedAssetData;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.effectAssetData,
    (int32_t)loadedAssetData,
    (int32_t)onCompleteLoad,
    (int32_t)method);
  QuestBoardListViewManager__SetupBlackMark(this, v6);
  QuestBoardListViewManager__SetupBoardAppearAndDisappearEffect(this, v7);
  QuestBoardListViewManager__SetupWhiteMark(this, v8);
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

  if ( (byte_4A58114 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A58114 = 1;
  }
  effectAppearComponent = (UnityEngine_Object_o *)this->fields.effectAppearComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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

  if ( (byte_4A58115 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A58115 = 1;
  }
  effectAppearComponent = (UnityEngine_Object_o *)this->fields.effectAppearComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(effectAppearComponent, 0LL, 0LL) )
  {
    ActionExtensions__Call(playingCallback1, 0LL);
    ActionExtensions__Call(endAct, 0LL);
  }
  else
  {
    gameObject = (UnityEngine_Component_o *)this->fields.effectAppearComponent;
    if ( !gameObject )
      goto LABEL_13;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !this->fields.effectAppearComponent )
      goto LABEL_13;
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
LABEL_13:
      sub_1B8880C(gameObject, v8);
    }
    UnityEngine_Transform__SetParent_69480628(v13, (UnityEngine_Transform_o *)gameObject, 1, 0LL);
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

  if ( (byte_4A58116 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A58116 = 1;
  }
  effectAppearFadeComponent = (UnityEngine_Object_o *)this->fields.effectAppearFadeComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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

  if ( (byte_4A58120 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A58120 = 1;
  }
  effectDisappear2Component = (UnityEngine_Object_o *)this->fields.effectDisappear2Component;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(effectDisappear2Component, 0LL, 0LL) )
  {
    effectDisappear2BbComponent = (UnityEngine_Object_o *)this->fields.effectDisappear2BbComponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(effectDisappear2BbComponent, 0LL, 0LL) )
    {
      ActionExtensions__Call(playingCallback, 0LL);
      ActionExtensions__Call(endAct, 0LL);
      return;
    }
  }
  v9 = (UnityEngine_Object_o *)this->fields.effectDisappear2Component;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
              UnityEngine_Transform__SetParent_69480628(v22, (UnityEngine_Transform_o *)gameObject, 1, 0LL);
              v18 = (QuestBoardListEffectComponent_o *)this->fields.effectDisappear2BbComponent;
              goto LABEL_25;
            }
          }
        }
      }
    }
LABEL_26:
    sub_1B8880C(gameObject, v10);
  }
  gameObject = (UnityEngine_Component_o *)this->fields.effectDisappear2Component;
  if ( !gameObject )
    goto LABEL_26;
  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
  if ( !this->fields.effectDisappear2Component )
    goto LABEL_26;
  v12 = (UnityEngine_GameObject_o *)gameObject;
  v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.effectDisappear2Component, 0LL);
  v14 = GameObjectExtensions__GetLocalPositionY(v13, 0LL);
  GameObjectExtensions__SetLocalPositionY(v12, v14, 0LL);
  gameObject = (UnityEngine_Component_o *)this->fields.effectDisappear2Component;
  if ( !gameObject )
    goto LABEL_26;
  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
  if ( !this->fields.onEffectPanel )
    goto LABEL_26;
  v15 = (UnityEngine_Transform_o *)gameObject;
  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                            (UnityEngine_Component_o *)this->fields.onEffectPanel,
                                            0LL);
  if ( !v15 )
    goto LABEL_26;
  UnityEngine_Transform__SetParent_69480628(v15, (UnityEngine_Transform_o *)gameObject, 1, 0LL);
  v18 = this->fields.effectDisappear2Component;
LABEL_25:
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

  if ( (byte_4A5811F & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&QuestBoardListViewItemDraw_TypeInfo);
    byte_4A5811F = 1;
  }
  effectDisappear2Component = (UnityEngine_Object_o *)this->fields.effectDisappear2Component;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(effectDisappear2Component, 0LL, 0LL) )
  {
    effectDisappear2BbComponent = (UnityEngine_Object_o *)this->fields.effectDisappear2BbComponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(effectDisappear2BbComponent, 0LL, 0LL) )
    {
      ActionExtensions__Call(playingCallback1, 0LL);
      ActionExtensions__Call(endAct, 0LL);
      return;
    }
  }
  v9 = (UnityEngine_Object_o *)this->fields.effectDisappear2Component;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
        if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
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
              UnityEngine_Transform__SetParent_69480628(v28, (UnityEngine_Transform_o *)gameObject, 1, 0LL);
              v21 = (QuestBoardListEffectComponent_o *)this->fields.effectDisappear2BbComponent;
              goto LABEL_35;
            }
          }
        }
      }
    }
LABEL_36:
    sub_1B8880C(gameObject, v10);
  }
  gameObject = (UnityEngine_Component_o *)this->fields.effectDisappear2Component;
  if ( !gameObject )
    goto LABEL_36;
  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
  if ( !this->fields.effectDisappear2Component )
    goto LABEL_36;
  v12 = (UnityEngine_GameObject_o *)gameObject;
  v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.effectDisappear2Component, 0LL);
  v14 = GameObjectExtensions__GetLocalPositionY(v13, 0LL);
  v15 = QuestBoardListViewItemDraw_TypeInfo;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v15 = QuestBoardListViewItemDraw_TypeInfo;
  }
  v16 = v15->static_fields->POS_Y_ITVL_AREA;
  v17 = v16 <= 0 ? -v16 : 1 - v16;
  GameObjectExtensions__SetLocalPositionY(v12, v14 + (float)(v17 >> 1), 0LL);
  gameObject = (UnityEngine_Component_o *)this->fields.effectDisappear2Component;
  if ( !gameObject )
    goto LABEL_36;
  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
  if ( !this->fields.onEffectPanel )
    goto LABEL_36;
  v18 = (UnityEngine_Transform_o *)gameObject;
  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                            (UnityEngine_Component_o *)this->fields.onEffectPanel,
                                            0LL);
  if ( !v18 )
    goto LABEL_36;
  UnityEngine_Transform__SetParent_69480628(v18, (UnityEngine_Transform_o *)gameObject, 1, 0LL);
  v21 = this->fields.effectDisappear2Component;
LABEL_35:
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

  if ( (byte_4A5811E & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5811E = 1;
  }
  effectDisappearComponent = (UnityEngine_Object_o *)this->fields.effectDisappearComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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

  if ( (byte_4A5811D & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5811D = 1;
  }
  effectDisappearFadeComponent = (UnityEngine_Object_o *)this->fields.effectDisappearFadeComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
  int32_t v11; // w2
  int32_t v12; // w3
  System_Action_o **v13; // x23
  int32_t v14; // w2
  int32_t v15; // w3
  System_Action_o **v16; // x21
  int32_t v17; // w2
  int32_t v18; // w3
  UnityEngine_Object_o *v19; // x20
  QuestBoardListEffectComponent_o *v20; // x20
  System_Action_o *v21; // x21
  System_Action_o *v22; // x22
  const MethodInfo *v23; // x3

  if ( (byte_4A58121 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_QuestBoardListViewManager___c__DisplayClass174_0__PlayBoardEffect_b__0__);
    sub_1B885B0(&Method_QuestBoardListViewManager___c__DisplayClass174_0__PlayBoardEffect_b__1__);
    sub_1B885B0(&QuestBoardListViewManager___c__DisplayClass174_0_TypeInfo);
    byte_4A58121 = 1;
  }
  v8 = sub_1B887FC(QuestBoardListViewManager___c__DisplayClass174_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    goto LABEL_14;
  *(_QWORD *)(v8 + 16) = playingCallback1;
  v13 = (System_Action_o **)(v8 + 16);
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v8 + 16), (int32_t)playingCallback1, v11, v12);
  *(_QWORD *)(v8 + 24) = effectComponent;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v8 + 24), (int32_t)effectComponent, v14, v15);
  *(_QWORD *)(v8 + 32) = endAct;
  v16 = (System_Action_o **)(v8 + 32);
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v8 + 32), (int32_t)endAct, v17, v18);
  v19 = *(UnityEngine_Object_o **)(v8 + 24);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v19, 0LL, 0LL) )
  {
    v20 = *(QuestBoardListEffectComponent_o **)(v8 + 24);
    v21 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      v21,
      (Il2CppObject *)v8,
      Method_QuestBoardListViewManager___c__DisplayClass174_0__PlayBoardEffect_b__0__,
      0LL);
    v22 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      v22,
      (Il2CppObject *)v8,
      Method_QuestBoardListViewManager___c__DisplayClass174_0__PlayBoardEffect_b__1__,
      0LL);
    if ( v20 )
    {
      QuestBoardListEffectComponent__Play(v20, v21, v22, v23);
      return;
    }
LABEL_14:
    sub_1B8880C(v9, v10);
  }
  if ( *v13 )
    ActionExtensions__Call(*v13, 0LL);
  if ( *v16 )
    ActionExtensions__Call(*v16, 0LL);
}


void __fastcall QuestBoardListViewManager__ReleaseAsset(QuestBoardListViewManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  int32_t v5; // w2
  int32_t v6; // w3
  int32_t v7; // w2
  int32_t v8; // w3
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w2
  int32_t v18; // w3
  AssetData_o *effectAssetData; // x20
  int32_t v20; // w2
  int32_t v21; // w3
  AssetData_o *fortificationAssetData; // x21
  int32_t v23; // w2
  int32_t v24; // w3
  int32_t v25; // w2
  int32_t v26; // w3

  if ( (byte_4A58122 & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    byte_4A58122 = 1;
  }
  this->fields.blackMarkPrefab = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.blackMarkPrefab, 0, v2, v3);
  this->fields.whiteMarkPrefab = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.whiteMarkPrefab, 0, v5, v6);
  this->fields.fortificationWarningDialog = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.fortificationWarningDialog, 0, v7, v8);
  this->fields.boardAppearEffectPrefab = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.boardAppearEffectPrefab, 0, v9, v10);
  this->fields.boardAppearEffectFadePrefab = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.boardAppearEffectFadePrefab, 0, v11, v12);
  this->fields.boardDisappearEffectPrefab = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.boardDisappearEffectPrefab, 0, v13, v14);
  this->fields.boardDisappear2EffectPrefab = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.boardDisappear2EffectPrefab, 0, v15, v16);
  this->fields.boardDisappearEffectFadePrefab = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.boardDisappearEffectFadePrefab, 0, v17, v18);
  effectAssetData = this->fields.effectAssetData;
  if ( effectAssetData )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_37790656(effectAssetData, 0LL);
    this->fields.effectAssetData = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.effectAssetData, 0, v20, v21);
  }
  fortificationAssetData = this->fields.fortificationAssetData;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAsset_37790656(fortificationAssetData, 0LL);
  this->fields.fortificationAssetData = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.fortificationAssetData, 0, v23, v24);
  AssetManager__releaseAsset_37790656(this->fields._RoadmapAssetData_k__BackingField, 0LL);
  this->fields._RoadmapAssetData_k__BackingField = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._RoadmapAssetData_k__BackingField, 0, v25, v26);
}


void __fastcall QuestBoardListViewManager__RemoveTempBG(QuestBoardListViewManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mFolderBgTemp; // x20
  __int64 v4; // x1
  UnityEngine_Component_o **p_mFolderBgTemp; // x19
  UnityEngine_Object_o *gameObject; // x20
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A5810B & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5810B = 1;
  }
  mFolderBgTemp = (UnityEngine_Object_o *)this->fields.mFolderBgTemp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mFolderBgTemp, 0LL, 0LL) )
  {
    p_mFolderBgTemp = (UnityEngine_Component_o **)&this->fields.mFolderBgTemp;
    if ( !*p_mFolderBgTemp )
      sub_1B8880C(0LL, v4);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_mFolderBgTemp, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69459380(gameObject, 0LL);
    *p_mFolderBgTemp = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)p_mFolderBgTemp, 0, v7, v8);
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
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w2
  int32_t v17; // w3
  const MethodInfo *v18; // x2
  const MethodInfo *v19; // x3
  System_Action_o *v20; // x0
  __int64 *v21; // x8
  __int64 v22; // x22
  int32_t v23; // w2
  int32_t v24; // w3
  __int64 v25; // x23
  const MethodInfo *v26; // x3
  const MethodInfo *v27; // x2
  float exitTime; // s0
  System_Action_o *v29; // x21
  const MethodInfo *v30; // x2
  const MethodInfo *v31; // x2
  System_Action_o *v32; // x21
  const MethodInfo *v33; // x5
  const MethodInfo *v34; // x2
  Il2CppObject *v35; // x20
  AvalonSceneManager_c *v36; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v38; // x21
  CommonUI_o *v39; // x0
  float v40; // s0
  System_Action_o *v41; // x2
  Il2CppObject *v42; // x21
  AvalonSceneManager_c *v43; // x8
  float v44; // s8
  System_Action_o *v45; // x22

  if ( (byte_4A580FC & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AvalonSceneManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&Method_QuestBoardListViewManager___c__DisplayClass121_0__RequestListObject_b__0__);
    sub_1B885B0(&Method_QuestBoardListViewManager___c__DisplayClass121_0__RequestListObject_b__1__);
    sub_1B885B0(&Method_QuestBoardListViewManager___c__DisplayClass121_0__RequestListObject_b__8__);
    sub_1B885B0(&Method_QuestBoardListViewManager___c__DisplayClass121_0__RequestListObject_b__9__);
    sub_1B885B0(&QuestBoardListViewManager___c__DisplayClass121_0_TypeInfo);
    sub_1B885B0(&Method_QuestBoardListViewManager___c__DisplayClass121_2__RequestListObject_b__7__);
    sub_1B885B0(&QuestBoardListViewManager___c__DisplayClass121_2_TypeInfo);
    byte_4A580FC = 1;
  }
  v11 = sub_1B887FC(QuestBoardListViewManager___c__DisplayClass121_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_39;
  *(_QWORD *)(v11 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v11 + 16), (int32_t)this, v14, v15);
  *(_QWORD *)(v11 + 32) = end_act;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v11 + 32), (int32_t)end_act, v16, v17);
  *(_BYTE *)(v11 + 40) = isNotInit;
  if ( !isNotInit )
    QuestBoardListViewManager__InitListObject(this, mode, v18);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  *(_BYTE *)(v11 + 24) = CommonUI__maskFadeIsOnTop(Instance, 0LL);
  switch ( this->fields.initMode )
  {
    case 3:
      this->fields.mIsDoing_Slide = 1;
      v20 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      v21 = &Method_QuestBoardListViewManager___c__DisplayClass121_0__RequestListObject_b__0__;
      goto LABEL_19;
    case 4:
      v22 = sub_1B887FC(QuestBoardListViewManager___c__DisplayClass121_2_TypeInfo);
      System_Object___ctor((Il2CppObject *)v22, 0LL);
      if ( !v22 )
        goto LABEL_39;
      *(_QWORD *)(v22 + 24) = v11;
      v25 = v22 + 24;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v22 + 24), v11, v23, v24);
      this->fields.mIsDoing_Slide = 1;
      *(_DWORD *)(v22 + 16) = 0;
      QuestBoardListViewManager__ModifyAllRoadmapButtons(this, 0, 1, v26);
      if ( !isWhiteFade )
        goto LABEL_42;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Instance = (CommonUI_o *)TerminalPramsManager__IsAuto(0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
LABEL_42:
        if ( *(_QWORD *)v25 )
        {
          if ( *(_BYTE *)(*(_QWORD *)v25 + 24LL) )
          {
            exitTime = *(float *)(v22 + 16);
          }
          else
          {
            exitTime = this->fields.exitTime;
            *(float *)(v22 + 16) = exitTime;
          }
          QuestBoardListViewManager__bgAlphaFade(this, this->fields.initMode, exitTime, v27);
          if ( *(_QWORD *)v25 )
          {
            QuestBoardListViewManager__SetSlideOut(
              this,
              *(float *)(v22 + 16),
              *(System_Action_o **)(*(_QWORD *)v25 + 32LL),
              v34);
            goto LABEL_37;
          }
        }
LABEL_39:
        sub_1B8880C(Instance, v13);
      }
      this->fields.mFaded = 1;
      v35 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v36 = AvalonSceneManager_TypeInfo;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v36 = AvalonSceneManager_TypeInfo;
      }
      DEFAULT_FADE_TIME = v36->static_fields->DEFAULT_FADE_TIME;
      v38 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(
        v38,
        (Il2CppObject *)v22,
        Method_QuestBoardListViewManager___c__DisplayClass121_2__RequestListObject_b__7__,
        0LL);
      if ( !v35 )
        goto LABEL_39;
      v39 = (CommonUI_o *)v35;
      v40 = DEFAULT_FADE_TIME;
      v41 = v38;
LABEL_36:
      CommonUI__maskFadeout(v39, 2, v40, v41, 0LL);
LABEL_37:
      Instance = (CommonUI_o *)this->fields.mNoneLabelParent;
      if ( !Instance )
        goto LABEL_39;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
      return;
    case 5:
      this->fields.mIsDoing_Slide = 0;
      QuestBoardListViewManager__ModifyAllRoadmapButtons(this, 1, 1, v19);
      v20 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      v21 = &Method_QuestBoardListViewManager___c__DisplayClass121_0__RequestListObject_b__1__;
LABEL_19:
      v29 = v20;
      System_Action___ctor(v20, (Il2CppObject *)v11, *v21, 0LL);
      QuestBoardListViewManager__changeBG(this, v29, v30);
      return;
    case 6:
      this->fields.mIsDoing_Slide = 0;
      QuestBoardListViewManager__ModifyAllRoadmapButtons(this, 0, 1, v19);
      if ( !isWhiteFade )
        goto LABEL_24;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( TerminalPramsManager__IsAuto(0LL) )
      {
LABEL_24:
        QuestBoardListViewManager__bgAlphaFade(this, this->fields.initMode, 0.0, v31);
        v32 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
        System_Action___ctor(
          v32,
          (Il2CppObject *)v11,
          Method_QuestBoardListViewManager___c__DisplayClass121_0__RequestListObject_b__9__,
          0LL);
        QuestBoardListViewManager__SetMode(this, 2, v32, 0, 0, v33);
        goto LABEL_37;
      }
      this->fields.mFaded = 1;
      v42 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v43 = AvalonSceneManager_TypeInfo;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v43 = AvalonSceneManager_TypeInfo;
      }
      v44 = v43->static_fields->DEFAULT_FADE_TIME;
      v45 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(
        v45,
        (Il2CppObject *)v11,
        Method_QuestBoardListViewManager___c__DisplayClass121_0__RequestListObject_b__8__,
        0LL);
      if ( !v42 )
        goto LABEL_39;
      v39 = (CommonUI_o *)v42;
      v40 = v44;
      v41 = v45;
      goto LABEL_36;
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
  __int64 v8; // x20
  Il2CppObject *FlagFromOnEventStart; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  QuestBoardListViewManager_o *v13; // x0
  const MethodInfo *v14; // x3
  int32_t id; // w21
  int32_t v16; // w22
  NetworkManager_ResultCallbackFunc_o *v17; // x19
  int32_t flagType; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A58105 & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&Method_NetworkManager_getRequest_TutorialEventSetRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1B885B0(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1B885B0(&Method_QuestBoardListViewManager___c__DisplayClass134_0__RequestToRaiseTutorialFlag_b__0__);
    sub_1B885B0(&QuestBoardListViewManager___c__DisplayClass134_0_TypeInfo);
    byte_4A58105 = 1;
  }
  flagType = 0;
  v8 = sub_1B887FC(QuestBoardListViewManager___c__DisplayClass134_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    goto LABEL_17;
  *(_QWORD *)(v8 + 16) = clickAreaFunc;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v8 + 16), (int32_t)clickAreaFunc, v11, v12);
  FlagFromOnEventStart = (Il2CppObject *)QuestBoardListViewManager__TryGetFlagFromOnEventStart(
                                           v13,
                                           &flagType,
                                           eventEntity,
                                           v14);
  if ( ((unsigned __int8)FlagFromOnEventStart & 1) != 0 )
  {
    if ( !eventEntity )
      goto LABEL_17;
    id = eventEntity->fields.id;
    v16 = flagType;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( !CondType__IsEventTutorialFlagOn(id, v16, 0LL) )
    {
      FlagFromOnEventStart = SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !FlagFromOnEventStart )
        goto LABEL_17;
      if ( QuestTree__IsWarOpen((QuestTree_o *)FlagFromOnEventStart, warId, 0LL) )
      {
        v17 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
        NetworkManager_ResultCallbackFunc___ctor(
          v17,
          (Il2CppObject *)v8,
          Method_QuestBoardListViewManager___c__DisplayClass134_0__RequestToRaiseTutorialFlag_b__0__,
          0LL);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        FlagFromOnEventStart = NetworkManager__getRequest_object_(
                                 v17,
                                 (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_TutorialEventSetRequest___);
        if ( FlagFromOnEventStart )
        {
          TutorialEventSetRequest__beginRequest((TutorialEventSetRequest_o *)FlagFromOnEventStart, v16, id, 0LL);
          return 1;
        }
LABEL_17:
        sub_1B8880C(FlagFromOnEventStart, v10);
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
  int32_t v7; // w2
  int32_t v8; // w3
  __int64 v9; // x1
  AlphaTransitionCalculator_o *rewardIconAlphaCalculator; // x0

  if ( (byte_4A58103 & 1) == 0 )
  {
    sub_1B885B0(&AlphaTransitionCalculator_TypeInfo);
    sub_1B885B0(&QuestBoardListViewManager_TypeInfo);
    byte_4A58103 = 1;
  }
  this->fields.mAlphaAnimNow = 1.0;
  this->fields.mAlphaAnimTimeOld = UnityEngine_Time__get_realtimeSinceStartup(0LL);
  v3 = QuestBoardListViewManager_TypeInfo;
  if ( !QuestBoardListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewManager_TypeInfo);
    v3 = QuestBoardListViewManager_TypeInfo;
  }
  v4 = ChangedFPSUtil__CovertFrameNumToSecond(v3->static_fields->REWARD_ICON_FADE_FRAME_NUM, 0LL);
  v5 = ExtraEasing__AsymptoticSeriesFloat(
         QuestBoardListViewManager_TypeInfo->static_fields->ALPHA_ANIM_SPD_RATE,
         (float)QuestBoardListViewManager_TypeInfo->static_fields->REWARD_ICON_FADE_FRAME_NUM,
         0LL);
  v6 = (AlphaTransitionCalculator_o *)sub_1B887FC(AlphaTransitionCalculator_TypeInfo);
  AlphaTransitionCalculator___ctor(v6, v4, v5, 0LL);
  this->fields.rewardIconAlphaCalculator = v6;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.rewardIconAlphaCalculator, (int32_t)v6, v7, v8);
  rewardIconAlphaCalculator = this->fields.rewardIconAlphaCalculator;
  if ( !rewardIconAlphaCalculator )
    sub_1B8880C(0LL, v9);
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
    sub_1B8880C(mFolderBg, method);
  }
  ExUITexture__ClearImage((ExUITexture_o *)mFolderBg, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestBoardListViewManager__SetBackMaskActive(
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
  __int64 v12; // x1
  Il2CppObject *Component_object; // x22
  _BOOL8 v14; // x0
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x2
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+20h] [xbp-70h] BYREF

  v6 = this;
  if ( (byte_4A58124 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_UITouchPress___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestBoardListViewObject__GetEnumerator__);
    this = (QuestBoardListViewManager_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A58124 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  mTerminalScene = v6->fields.mTerminalScene;
  if ( !mTerminalScene )
    goto LABEL_31;
  mTerminalMap = mTerminalScene->fields.mTerminalMap;
  if ( !mTerminalMap )
    goto LABEL_31;
  this = (QuestBoardListViewManager_o *)mTerminalMap->fields.dispRoot;
  if ( !this )
    goto LABEL_31;
  if ( !UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL) )
  {
    this = (QuestBoardListViewManager_o *)v6->fields.mTerminalList;
    if ( !this )
      goto LABEL_31;
    if ( !ScrTerminalListTop__get_IsActiveBlankEarth((ScrTerminalListTop_o *)this, 0LL) && !isForcedActive )
      return;
  }
  this = (QuestBoardListViewManager_o *)v6->fields.backMaskBg;
  if ( !this
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, isActive, 0LL),
        (this = (QuestBoardListViewManager_o *)v6->fields.spriteFadeMaskCollider) == 0LL)
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, !isActive, 0LL),
        (this = (QuestBoardListViewManager_o *)QuestBoardListViewManager__get_ObjectList(v6, v9)) == 0LL) )
  {
LABEL_31:
    sub_1B8880C(this, isActive);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v17,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_QuestBoardListViewObject__GetEnumerator__);
  v18 = v17;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v18,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__MoveNext__) )
  {
    current = v18.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v11 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v11 )
    {
      if ( !current )
        sub_1B8880C(v11, v12);
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)current,
                           (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UITouchPress___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v14 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
      if ( v14 )
      {
        if ( !Component_object )
          sub_1B8880C(v14, v15);
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, isActive, 0LL);
      }
      if ( isActive && QuestBoardListViewObject__IsDummy((QuestBoardListViewObject_o *)current, v15) )
        QuestBoardListViewObject__SetBackPanel((QuestBoardListViewObject_o *)current, v6->fields.mTerminalList, v16);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v18,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_QuestBoardListViewObject__Dispose__);
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

  if ( (byte_4A58100 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A58100 = 1;
  }
  effectAppearComponent = (UnityEngine_Object_o *)this->fields.effectAppearComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v10 = UnityEngine_Object__op_Inequality(effectAppearComponent, 0LL, 0LL);
  if ( v10 )
  {
    v12 = this->fields.effectAppearComponent;
    if ( !v12 )
      sub_1B8880C(v10, v11);
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
    if ( !this->fields.mIsDoing_Slide && this->fields.initMode == 2 )
      goto LABEL_9;
    goto LABEL_12;
  }
  if ( mode != 3 )
    goto LABEL_5;
  if ( this->fields.mIsDoing_Slide )
  {
LABEL_12:
    ActionExtensions__Call(end_act, 0LL);
    return 0;
  }
  mIsDoing_Slide = this->fields.initMode;
LABEL_5:
  if ( mIsDoing_Slide )
    goto LABEL_12;
LABEL_9:
  this->fields.initMode = mode;
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0LL);
  mBoxCollider = (UnityEngine_Collider_o *)this->fields.mBoxCollider;
  if ( !mBoxCollider )
    sub_1B8880C(0LL, v12);
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
    sub_1B8880C(0LL, isActive);
  UnityEngine_GameObject__SetActive(mNoneLabelParent, isActive, 0LL);
}


void __fastcall QuestBoardListViewManager__SetObjectItem(
        QuestBoardListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  QuestBoardListViewManager_o *v5; // x20
  __int64 methodPtr_low; // x10
  ListViewSort_c *klass; // x8
  __int64 v8; // x21
  QuestBoardListViewManager_o *v9; // x23
  System_String_o *ActiveStateName; // x22
  Il2CppObject *Component_object; // x19
  const MethodInfo *v12; // x2

  v5 = this;
  if ( (byte_4A580F9 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_UITouchPress___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&QuestBoardListViewObject_TypeInfo);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    sub_1B885B0(&StringLiteral_8849/*"Map Touch Disable"*/);
    this = (QuestBoardListViewManager_o *)sub_1B885B0(&StringLiteral_3406/*"CAPTER INIT"*/);
    byte_4A580F9 = 1;
  }
  if ( !obj )
    goto LABEL_45;
  methodPtr_low = LOBYTE(QuestBoardListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (QuestBoardListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != QuestBoardListViewObject_TypeInfo )
  {
    goto LABEL_45;
  }
  if ( v5->fields.initMode != 2 )
  {
    QuestBoardListViewObject__Init_34018108((QuestBoardListViewObject_o *)obj, 2, 0LL, method);
    return;
  }
  QuestBoardListViewObject__Init_34018108((QuestBoardListViewObject_o *)obj, 3, 0LL, method);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4A5629D )
  {
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    byte_4A5629D = 1;
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
  v8 = *(_QWORD *)&klass->_2.thread_static_fields_offset;
  this = (QuestBoardListViewManager_o *)ScrTerminalListTop__mfGetMyFsmP((ScrTerminalListTop_o *)this, 0LL);
  if ( !this )
    goto LABEL_45;
  this = (QuestBoardListViewManager_o *)PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)this, 0LL);
  if ( !v8 )
    goto LABEL_45;
  v9 = this;
  this = (QuestBoardListViewManager_o *)ScrTerminalMap__mfGetMyFsmP((ScrTerminalMap_o *)v8, 0LL);
  if ( !this )
    goto LABEL_45;
  ActiveStateName = PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)this, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A58189 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58189 = 1;
  }
  this = (QuestBoardListViewManager_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    this = (QuestBoardListViewManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !BYTE1(this->fields.sort[3].fields.expUpDispType) )
  {
    if ( !v9 )
      goto LABEL_45;
    if ( (System_String__IndexOf_61738608((System_String_o *)v9, (System_String_o *)StringLiteral_3406/*"CAPTER INIT"*/, 0LL) & 0x80000000) == 0 )
      return;
    this = *(QuestBoardListViewManager_o **)(v8 + 104);
    if ( !this )
LABEL_45:
      sub_1B8880C(this, obj);
    this = (QuestBoardListViewManager_o *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      goto LABEL_36;
    if ( !ActiveStateName )
      goto LABEL_45;
    if ( (System_String__IndexOf_61738608(ActiveStateName, (System_String_o *)StringLiteral_8849/*"Map Touch Disable"*/, 0LL) & 0x80000000) == 0 )
    {
LABEL_36:
      this = *(QuestBoardListViewManager_o **)(v8 + 104);
      if ( !this )
        goto LABEL_45;
      if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL) )
        goto LABEL_48;
      this = (QuestBoardListViewManager_o *)v5->fields.mTerminalList;
      if ( !this )
        goto LABEL_45;
      if ( ScrTerminalListTop__get_IsActiveBlankEarth((ScrTerminalListTop_o *)this, 0LL) )
      {
LABEL_48:
        if ( v5->fields._IsShowingInfo_k__BackingField )
        {
          Component_object = UnityEngine_Component__GetComponent_object_(
                               (UnityEngine_Component_o *)obj,
                               (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UITouchPress___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          this = (QuestBoardListViewManager_o *)UnityEngine_Object__op_Inequality(
                                                  (UnityEngine_Object_o *)Component_object,
                                                  0LL,
                                                  0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( Component_object )
            {
              UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0LL);
              return;
            }
            goto LABEL_45;
          }
        }
        else if ( QuestBoardListViewObject__IsDummy((QuestBoardListViewObject_o *)obj, (const MethodInfo *)obj) )
        {
          QuestBoardListViewObject__SetBackPanel((QuestBoardListViewObject_o *)obj, v5->fields.mTerminalList, v12);
        }
      }
    }
  }
}


void __fastcall QuestBoardListViewManager__SetOutPosition(QuestBoardListViewManager_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  __int64 v5; // x1
  SlideFadeObject_o *v6; // x19
  float v7; // s8
  float v8; // s10
  float v9; // s9
  QuestBoardListViewManager_c *v10; // x0
  float OUT_POS_OFS_X; // s0
  UnityEngine_Vector3_o v12; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A580FF & 1) == 0 )
  {
    sub_1B885B0(&Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
    sub_1B885B0(&QuestBoardListViewManager_TypeInfo);
    byte_4A580FF = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_2ED09A0 *)Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
  if ( !Component_object )
    sub_1B8880C(0LL, v5);
  v6 = (SlideFadeObject_o *)Component_object;
  v8 = *(float *)&Component_object[4].klass;
  v7 = *((float *)&Component_object[4].klass + 1);
  v9 = *(float *)&Component_object[4].monitor;
  v10 = QuestBoardListViewManager_TypeInfo;
  if ( !QuestBoardListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestBoardListViewManager_TypeInfo);
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
  UnityEngine_Object_o *blockMask; // x22
  ServantStatusBattleListViewItem_o *p_blockMask; // x20
  UnityEngine_Object_o *klass; // x19
  int32_t v8; // w2
  int32_t v9; // w3
  UnityEngine_Object_o *blockMaskPrefab; // x21
  Il2CppObject *v11; // x21
  Il2CppObject *v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  UnityEngine_GameObject_o *v15; // x19

  if ( (byte_4A580ED & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A580ED = 1;
  }
  blockMask = (UnityEngine_Object_o *)this->fields.blockMask;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_blockMask = (ServantStatusBattleListViewItem_o *)&this->fields.blockMask;
  if ( isEnable )
  {
    if ( UnityEngine_Object__op_Inequality(blockMask, 0LL, 0LL) )
    {
      klass = (UnityEngine_Object_o *)p_blockMask->klass;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__DestroyImmediate_69459568(klass, 0LL);
      p_blockMask->klass = 0LL;
      sub_1B88554(p_blockMask, 0, v8, v9);
    }
  }
  else if ( UnityEngine_Object__op_Equality(blockMask, 0LL, 0LL) )
  {
    blockMaskPrefab = (UnityEngine_Object_o *)this->fields.blockMaskPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(blockMaskPrefab, 0LL, 0LL) )
    {
      v11 = (Il2CppObject *)this->fields.blockMaskPrefab;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v12 = UnityEngine_Object__Instantiate_object_(
              v11,
              (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      this->fields.blockMask = (struct UnityEngine_GameObject_o *)v12;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.blockMask, (int32_t)v12, v13, v14);
      GameObjectExtensions__SafeSetParent(
        this->fields.blockMask,
        (UnityEngine_Component_o *)this->fields.onEffectPanel,
        0LL);
      v15 = this->fields.blockMask;
      if ( !byte_4A55CE1 )
      {
        sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
        byte_4A55CE1 = 1;
      }
      GameObjectExtensions__SetLocalPosition(v15, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
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
  int32_t DEFAULT_SCROLL_VIEW_DEPTH; // w19
  UnityEngine_Component_o *scrollView; // x0
  Il2CppObject *Component_object; // x21

  DEFAULT_SCROLL_VIEW_DEPTH = depth;
  if ( (byte_4A5810C & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&QuestBoardListViewManager_TypeInfo);
    byte_4A5810C = 1;
  }
  scrollView = (UnityEngine_Component_o *)this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_14;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       scrollView,
                       (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UIPanel___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  scrollView = (UnityEngine_Component_o *)UnityEngine_Object__op_Equality(
                                            (UnityEngine_Object_o *)Component_object,
                                            0LL,
                                            0LL);
  if ( ((unsigned __int8)scrollView & 1) == 0 )
  {
    if ( isDefault )
    {
      scrollView = (UnityEngine_Component_o *)QuestBoardListViewManager_TypeInfo;
      if ( !QuestBoardListViewManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(QuestBoardListViewManager_TypeInfo);
      if ( Component_object )
      {
        DEFAULT_SCROLL_VIEW_DEPTH = QuestBoardListViewManager_TypeInfo->static_fields->DEFAULT_SCROLL_VIEW_DEPTH;
LABEL_13:
        UIPanel__set_depth((UIPanel_o *)Component_object, DEFAULT_SCROLL_VIEW_DEPTH, 0LL);
        return;
      }
    }
    else if ( Component_object )
    {
      goto LABEL_13;
    }
LABEL_14:
    sub_1B8880C(scrollView, *(_QWORD *)&depth);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestBoardListViewManager__SetShowingInfo(
        QuestBoardListViewManager_o *this,
        int32_t idx,
        bool onOff,
        const MethodInfo *method)
{
  int32_t v5; // w21
  void *itemList; // x0
  UnityEngine_Object_o *v8; // x21
  __int64 methodPtr_low; // x9
  QuestBoardListViewManager_o *v10; // x0
  const MethodInfo *v11; // x1

  v5 = idx;
  if ( (byte_4A58108 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&QuestBoardListViewObject_TypeInfo);
    byte_4A58108 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_14;
  itemList = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)itemList,
               v5,
               (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
  if ( !itemList )
    goto LABEL_14;
  v8 = (UnityEngine_Object_o *)*((_QWORD *)itemList + 13);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  itemList = (void *)UnityEngine_Object__op_Inequality(v8, 0LL, 0LL);
  if ( ((unsigned __int8)itemList & 1) == 0 )
    goto LABEL_13;
  if ( !v8 )
LABEL_14:
    sub_1B8880C(itemList, *(_QWORD *)&idx);
  *(_QWORD *)&idx = QuestBoardListViewObject_TypeInfo;
  methodPtr_low = LOBYTE(QuestBoardListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(v8->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
    && (QuestBoardListViewObject_c *)v8->klass->_2.typeHierarchy[methodPtr_low - 1] == QuestBoardListViewObject_TypeInfo )
  {
    itemList = v8[5].monitor;
    if ( itemList )
    {
      QuestBoardListViewItemDraw__setInfoShowing((QuestBoardListViewItemDraw_o *)itemList, onOff, 0LL);
LABEL_13:
      this->fields._IsShowingInfo_k__BackingField = onOff;
      return;
    }
    goto LABEL_14;
  }
  sub_1B88ACC(v8);
  QuestBoardListViewManager__RequestConsumeColorReset(v10, v11);
}


void __fastcall QuestBoardListViewManager__SetShowingInfoAllOff(
        QuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *v5; // x20
  int32_t v6; // w21

  if ( (byte_4A58107 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestBoardListViewObject__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestBoardListViewObject__get_Item__);
    byte_4A58107 = 1;
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
                                                                  (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_QuestBoardListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      ObjectList = (System_Collections_Generic_List_object__o *)ObjectList[3].monitor;
      if ( !ObjectList )
        break;
      QuestBoardListViewItemDraw__setInfoShowing((QuestBoardListViewItemDraw_o *)ObjectList, 0, 0LL);
      if ( ++v6 >= v5->fields._size )
        goto LABEL_9;
    }
LABEL_10:
    sub_1B8880C(ObjectList, v4);
  }
LABEL_9:
  this->fields._IsShowingInfo_k__BackingField = 0;
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
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w2
  int32_t v13; // w3
  UnityEngine_GameObject_o *v14; // x0
  Il2CppObject *Component_object; // x0
  SlideFadeObject_o *v16; // x20
  float OUT_POS_OFS_X; // s9
  System_Action_o *v18; // x21

  if ( (byte_4A580FD & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
    sub_1B885B0(&QuestBoardListViewManager_TypeInfo);
    sub_1B885B0(&Method_QuestBoardListViewManager___c__DisplayClass122_0__SetSlideOut_b__0__);
    sub_1B885B0(&QuestBoardListViewManager___c__DisplayClass122_0_TypeInfo);
    byte_4A580FD = 1;
  }
  v7 = sub_1B887FC(QuestBoardListViewManager___c__DisplayClass122_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    goto LABEL_9;
  *(_QWORD *)(v7 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)this, v10, v11);
  *(_QWORD *)(v7 + 24) = end_act;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 24), (int32_t)end_act, v12, v13);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_9;
  v14 = UnityEngine_GameObject__get_gameObject(gameObject, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       v14,
                       (const MethodInfo_2ED09A0 *)Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
  v16 = (SlideFadeObject_o *)Component_object;
  if ( !QuestBoardListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestBoardListViewManager_TypeInfo);
  OUT_POS_OFS_X = QuestBoardListViewManager__get_OUT_POS_OFS_X((const MethodInfo *)Component_object);
  v18 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v18,
    (Il2CppObject *)v7,
    Method_QuestBoardListViewManager___c__DisplayClass122_0__SetSlideOut_b__0__,
    0LL);
  if ( !v16 )
LABEL_9:
    sub_1B8880C(gameObject, v9);
  SlideFadeObject__SlideOut_33740384(v16, OUT_POS_OFS_X, time, 0.0, v18, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestBoardListViewManager__SetTerminalTopEffectPlay(
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
  int32_t v15; // w3
  Il2CppObject *current; // x1
  __int64 methodPtr_low; // x10
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
  _QWORD *monitor; // x8
  __int64 v29; // x8
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+20h] [xbp-70h] BYREF

  v6 = this;
  if ( (byte_4A580F2 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    this = (QuestBoardListViewManager_o *)sub_1B885B0(&QuestBoardListViewItem_TypeInfo);
    byte_4A580F2 = 1;
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
      System_Array__Clear((System_Array_o *)topItemList->fields._items, 0, size, 0LL);
    bottomItemList = v6->fields.bottomItemList;
    if ( !bottomItemList )
      goto LABEL_42;
    v11 = bottomItemList->fields._size;
    v12 = bottomItemList->fields._version + 1;
    bottomItemList->fields._size = 0;
    bottomItemList->fields._version = v12;
    if ( v11 >= 1 )
      System_Array__Clear((System_Array_o *)bottomItemList->fields._items, 0, v11, 0LL);
    this = (QuestBoardListViewManager_o *)v6->fields.itemList;
    if ( !this )
LABEL_42:
      sub_1B8880C(this, *(_QWORD *)&targetWarId);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v30,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v13 = 1;
    v31 = v30;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v31,
                (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v31,
            (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          return;
        }
        current = v31.fields._current;
        if ( v31.fields._current )
        {
          methodPtr_low = LOBYTE(QuestBoardListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(v31.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
            && (QuestBoardListViewItem_c *)v31.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] == QuestBoardListViewItem_TypeInfo )
          {
            monitor = v31.fields._current[7].monitor;
            if ( monitor )
            {
              v29 = monitor[14];
              if ( v29 )
              {
                if ( *(_DWORD *)(v29 + 16) != 1 && *(_DWORD *)(v29 + 20) == targetWarId )
                  break;
              }
            }
          }
        }
        if ( (v13 & 1) != 0 )
        {
          v18 = (System_Collections_Generic_List_object__o *)v6->fields.topItemList;
          if ( !v18 )
            sub_1B8880C(0LL, v31.fields._current);
          items = v18->fields._items;
          v20 = Method_System_Collections_Generic_List_ListViewItem__Add__;
          ++v18->fields._version;
          if ( !items )
            sub_1B8880C(v18, current);
          v21 = v18->fields._size;
          if ( (unsigned int)v21 >= items->max_length )
          {
            v13 = 1;
            System_Collections_Generic_List_object___AddWithResize(
              v18,
              current,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
          }
          else
          {
            v22 = &items->obj.klass + v21;
            v13 = 1;
            v18->fields._size = v21 + 1;
            v22[4] = (Il2CppClass *)current;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v22 + 4), (int32_t)current, v14, v15);
          }
        }
        else
        {
          v23 = (System_Collections_Generic_List_object__o *)v6->fields.bottomItemList;
          if ( !v23 )
            sub_1B8880C(0LL, v31.fields._current);
          v24 = v23->fields._items;
          v25 = Method_System_Collections_Generic_List_ListViewItem__Add__;
          ++v23->fields._version;
          if ( !v24 )
            sub_1B8880C(v23, current);
          v26 = v23->fields._size;
          if ( (unsigned int)v26 < v24->max_length )
            goto LABEL_24;
LABEL_35:
          System_Collections_Generic_List_object___AddWithResize(
            v23,
            current,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
          v13 = 0;
        }
      }
      v13 = 0;
      if ( isClose )
      {
        v23 = (System_Collections_Generic_List_object__o *)v6->fields.bottomItemList;
        if ( !v23 )
          sub_1B8880C(0LL, v31.fields._current);
        v24 = v23->fields._items;
        v25 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++v23->fields._version;
        if ( !v24 )
          sub_1B8880C(v23, current);
        v26 = v23->fields._size;
        if ( (unsigned int)v26 >= v24->max_length )
          goto LABEL_35;
LABEL_24:
        v27 = &v24->obj.klass + v26;
        v23->fields._size = v26 + 1;
        v27[4] = (Il2CppClass *)current;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v27 + 4), (int32_t)current, v14, v15);
        v13 = 0;
      }
    }
  }
}


void __fastcall QuestBoardListViewManager__SetUpBoardAppearEffect(
        QuestBoardListViewManager_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  UnityEngine_Component_o *QuestBoardObjForWarId; // x21
  UnityEngine_Object_o *boardAppearEffectPrefab; // x20
  Il2CppObject *v7; // x20
  UnityEngine_GameObject_o *transform; // x0
  __int64 v9; // x1
  UnityEngine_GameObject_o *v10; // x20
  UnityEngine_Transform_o *v11; // x22
  UnityEngine_Transform_o *v12; // x21
  UnityEngine_Transform_o *v13; // x21
  UnityEngine_Transform_o *v14; // x21
  Il2CppObject *Component_object; // x0
  struct QuestBoardListEffectAppearComponent_o **p_effectAppearComponent; // x20
  int32_t v17; // w2
  int32_t v18; // w3
  const MethodInfo *v19; // x2

  if ( (byte_4A58112 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectAppearComponent___);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A58112 = 1;
  }
  QuestBoardObjForWarId = (UnityEngine_Component_o *)QuestBoardListViewManager__GetQuestBoardObjForWarId(
                                                       this,
                                                       warId,
                                                       method);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)QuestBoardObjForWarId, 0LL, 0LL) )
  {
    boardAppearEffectPrefab = (UnityEngine_Object_o *)this->fields.boardAppearEffectPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(boardAppearEffectPrefab, 0LL, 0LL) )
    {
      v7 = (Il2CppObject *)this->fields.boardAppearEffectPrefab;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                v7,
                                                (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
              transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v10, 0LL);
              v12 = (UnityEngine_Transform_o *)transform;
              if ( !byte_4A55CE1 )
              {
                transform = (UnityEngine_GameObject_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
                byte_4A55CE1 = 1;
              }
              if ( v12 )
              {
                UnityEngine_Transform__set_localPosition(
                  v12,
                  UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
                  0LL);
                transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v10, 0LL);
                v13 = (UnityEngine_Transform_o *)transform;
                if ( !byte_4A55CE7 )
                {
                  transform = (UnityEngine_GameObject_o *)sub_1B885B0(&UnityEngine_Quaternion_TypeInfo);
                  byte_4A55CE7 = 1;
                }
                if ( v13 )
                {
                  UnityEngine_Transform__set_localRotation(
                    v13,
                    UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
                    0LL);
                  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v10, 0LL);
                  v14 = (UnityEngine_Transform_o *)transform;
                  if ( !byte_4A55CE6 )
                  {
                    transform = (UnityEngine_GameObject_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
                    byte_4A55CE6 = 1;
                  }
                  if ( v14 )
                  {
                    UnityEngine_Transform__set_localScale(
                      v14,
                      UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
                      0LL);
                    Component_object = UnityEngine_GameObject__GetComponent_object_(
                                         v10,
                                         (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectAppearComponent___);
                    p_effectAppearComponent = &this->fields.effectAppearComponent;
                    this->fields.effectAppearComponent = (struct QuestBoardListEffectAppearComponent_o *)Component_object;
                    sub_1B88554(
                      (ServantStatusBattleListViewItem_o *)&this->fields.effectAppearComponent,
                      (int32_t)Component_object,
                      v17,
                      v18);
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
                        v19);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
      sub_1B8880C(transform, v9);
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
  Il2CppObject *v7; // x21
  UnityEngine_GameObject_o *transform; // x0
  __int64 v9; // x1
  UnityEngine_GameObject_o *v10; // x21
  UnityEngine_Transform_o *v11; // x22
  Il2CppObject *Component_object; // x0
  struct QuestBoardListEffectAppearComponent_o **p_effectAppearComponent; // x20
  int32_t v14; // w2
  int32_t v15; // w3
  const MethodInfo *v16; // x2

  if ( (byte_4A5811A & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectAppearComponent___);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5811A = 1;
  }
  QuestBoardObjForWarId = (UnityEngine_Component_o *)QuestBoardListViewManager__GetQuestBoardObjForWarId(
                                                       this,
                                                       warId,
                                                       method);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)QuestBoardObjForWarId, 0LL, 0LL) )
  {
    nt2BoardAppearEffectPrefab = (UnityEngine_Object_o *)this->fields.nt2BoardAppearEffectPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(nt2BoardAppearEffectPrefab, 0LL, 0LL) )
    {
      v7 = (Il2CppObject *)this->fields.nt2BoardAppearEffectPrefab;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                v7,
                                                (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
              Component_object = UnityEngine_GameObject__GetComponent_object_(
                                   v10,
                                   (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectAppearComponent___);
              p_effectAppearComponent = &this->fields.effectAppearComponent;
              this->fields.effectAppearComponent = (struct QuestBoardListEffectAppearComponent_o *)Component_object;
              sub_1B88554(
                (ServantStatusBattleListViewItem_o *)&this->fields.effectAppearComponent,
                (int32_t)Component_object,
                v14,
                v15);
              if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)this->fields.effectAppearComponent, 0LL, 0LL) )
                return;
              transform = (UnityEngine_GameObject_o *)*p_effectAppearComponent;
              if ( *p_effectAppearComponent )
              {
                QuestBoardListEffectComponent__Init((QuestBoardListEffectComponent_o *)transform, 0, 0.0, 0.0, v16);
                return;
              }
            }
          }
        }
      }
      sub_1B8880C(transform, v9);
    }
  }
}


void __fastcall QuestBoardListViewManager__SetUpBoardAppearFadeEffect(
        QuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *boardAppearEffectFadePrefab; // x20
  Il2CppObject *v4; // x20
  UnityEngine_GameObject_o *transform; // x0
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x20
  UnityEngine_Transform_o *v8; // x21
  UnityEngine_Transform_o *v9; // x21
  UnityEngine_Transform_o *v10; // x21
  UnityEngine_Transform_o *v11; // x21
  Il2CppObject *Component_object; // x0
  struct QuestBoardListEffectComponent_o **p_effectAppearFadeComponent; // x20
  int32_t v14; // w2
  int32_t v15; // w3
  const MethodInfo *v16; // x2

  if ( (byte_4A58113 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectComponent___);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A58113 = 1;
  }
  boardAppearEffectFadePrefab = (UnityEngine_Object_o *)this->fields.boardAppearEffectFadePrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(boardAppearEffectFadePrefab, 0LL, 0LL) )
  {
    v4 = (Il2CppObject *)this->fields.boardAppearEffectFadePrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                              v4,
                                              (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
          transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v7, 0LL);
          v9 = (UnityEngine_Transform_o *)transform;
          if ( !byte_4A55CE1 )
          {
            transform = (UnityEngine_GameObject_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
            byte_4A55CE1 = 1;
          }
          if ( v9 )
          {
            UnityEngine_Transform__set_localPosition(v9, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
            transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v7, 0LL);
            v10 = (UnityEngine_Transform_o *)transform;
            if ( !byte_4A55CE7 )
            {
              transform = (UnityEngine_GameObject_o *)sub_1B885B0(&UnityEngine_Quaternion_TypeInfo);
              byte_4A55CE7 = 1;
            }
            if ( v10 )
            {
              UnityEngine_Transform__set_localRotation(
                v10,
                UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
                0LL);
              transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v7, 0LL);
              v11 = (UnityEngine_Transform_o *)transform;
              if ( !byte_4A55CE6 )
              {
                transform = (UnityEngine_GameObject_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
                byte_4A55CE6 = 1;
              }
              if ( v11 )
              {
                UnityEngine_Transform__set_localScale(v11, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
                Component_object = UnityEngine_GameObject__GetComponent_object_(
                                     v7,
                                     (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectComponent___);
                p_effectAppearFadeComponent = &this->fields.effectAppearFadeComponent;
                this->fields.effectAppearFadeComponent = (struct QuestBoardListEffectComponent_o *)Component_object;
                sub_1B88554(
                  (ServantStatusBattleListViewItem_o *)&this->fields.effectAppearFadeComponent,
                  (int32_t)Component_object,
                  v14,
                  v15);
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
                  QuestBoardListEffectComponent__Init((QuestBoardListEffectComponent_o *)transform, 0, 0.0, 0.0, v16);
                  return;
                }
              }
            }
          }
        }
      }
    }
    sub_1B8880C(transform, v6);
  }
}


void __fastcall QuestBoardListViewManager__SetUpBoardAppearFadeEffectNT2(
        QuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *nt2BoardAppearEffectFadePrefab; // x20
  Il2CppObject *v4; // x20
  UnityEngine_GameObject_o *transform; // x0
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x20
  UnityEngine_Transform_o *v8; // x21
  Il2CppObject *Component_object; // x0
  struct QuestBoardListEffectComponent_o **p_effectAppearFadeComponent; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  const MethodInfo *v13; // x2

  if ( (byte_4A5811B & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectComponent___);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5811B = 1;
  }
  nt2BoardAppearEffectFadePrefab = (UnityEngine_Object_o *)this->fields.nt2BoardAppearEffectFadePrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(nt2BoardAppearEffectFadePrefab, 0LL, 0LL) )
  {
    v4 = (Il2CppObject *)this->fields.nt2BoardAppearEffectFadePrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                              v4,
                                              (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               v7,
                               (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectComponent___);
          p_effectAppearFadeComponent = &this->fields.effectAppearFadeComponent;
          this->fields.effectAppearFadeComponent = (struct QuestBoardListEffectComponent_o *)Component_object;
          sub_1B88554(
            (ServantStatusBattleListViewItem_o *)&this->fields.effectAppearFadeComponent,
            (int32_t)Component_object,
            v11,
            v12);
          if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)this->fields.effectAppearFadeComponent, 0LL, 0LL) )
            return;
          transform = (UnityEngine_GameObject_o *)*p_effectAppearFadeComponent;
          if ( *p_effectAppearFadeComponent )
          {
            QuestBoardListEffectComponent__Init((QuestBoardListEffectComponent_o *)transform, 0, 0.0, 0.0, v13);
            return;
          }
        }
      }
    }
    sub_1B8880C(transform, v6);
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
  Il2CppObject *v11; // x21
  __int64 transform; // x0
  __int64 v13; // x1
  UnityEngine_GameObject_o *v14; // x21
  UnityEngine_Transform_o *v15; // x23
  UnityEngine_Transform_o *v16; // x22
  UnityEngine_Transform_o *v17; // x22
  UnityEngine_Transform_o *v18; // x22
  Il2CppObject *Component_object; // x0
  struct QuestBoardListEffectDisappearComponent_o **p_effectDisappearComponent; // x22
  int32_t v21; // w2
  int32_t v22; // w3
  const MethodInfo *v23; // x2
  float v24; // s1

  if ( (byte_4A58117 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectDisappearComponent___);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A58117 = 1;
  }
  QuestBoardObjForWarId = (UnityEngine_Component_o *)QuestBoardListViewManager__GetQuestBoardObjForWarId(
                                                       this,
                                                       warId,
                                                       (const MethodInfo *)isNextBoardReleased);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)QuestBoardObjForWarId, 0LL, 0LL) )
  {
    boardDisappearEffectPrefab = (UnityEngine_Object_o *)this->fields.boardDisappearEffectPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(boardDisappearEffectPrefab, 0LL, 0LL) )
    {
      v11 = (Il2CppObject *)this->fields.boardDisappearEffectPrefab;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      transform = (__int64)UnityEngine_Object__Instantiate_object_(
                             v11,
                             (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( !transform )
        goto LABEL_32;
      v14 = (UnityEngine_GameObject_o *)transform;
      transform = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
      if ( !QuestBoardObjForWarId )
        goto LABEL_32;
      v15 = (UnityEngine_Transform_o *)transform;
      transform = (__int64)UnityEngine_Component__get_gameObject(QuestBoardObjForWarId, 0LL);
      if ( !transform )
        goto LABEL_32;
      transform = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
      if ( !v15 )
        goto LABEL_32;
      UnityEngine_Transform__set_parent(v15, (UnityEngine_Transform_o *)transform, 0LL);
      transform = (__int64)UnityEngine_GameObject__get_transform(v14, 0LL);
      v16 = (UnityEngine_Transform_o *)transform;
      if ( !byte_4A55CE1 )
      {
        transform = sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
        byte_4A55CE1 = 1;
      }
      if ( !v16 )
        goto LABEL_32;
      UnityEngine_Transform__set_localPosition(v16, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
      transform = (__int64)UnityEngine_GameObject__get_transform(v14, 0LL);
      v17 = (UnityEngine_Transform_o *)transform;
      if ( !byte_4A55CE7 )
      {
        transform = sub_1B885B0(&UnityEngine_Quaternion_TypeInfo);
        byte_4A55CE7 = 1;
      }
      if ( !v17 )
        goto LABEL_32;
      UnityEngine_Transform__set_localRotation(
        v17,
        UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
        0LL);
      transform = (__int64)UnityEngine_GameObject__get_transform(v14, 0LL);
      v18 = (UnityEngine_Transform_o *)transform;
      if ( !byte_4A55CE6 )
      {
        transform = sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
        byte_4A55CE6 = 1;
      }
      if ( !v18 )
        goto LABEL_32;
      UnityEngine_Transform__set_localScale(v18, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           v14,
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectDisappearComponent___);
      p_effectDisappearComponent = &this->fields.effectDisappearComponent;
      this->fields.effectDisappearComponent = (struct QuestBoardListEffectDisappearComponent_o *)Component_object;
      sub_1B88554(
        (ServantStatusBattleListViewItem_o *)&this->fields.effectDisappearComponent,
        (int32_t)Component_object,
        v21,
        v22);
      transform = UnityEngine_Object__op_Equality(
                    (UnityEngine_Object_o *)this->fields.effectDisappearComponent,
                    0LL,
                    0LL);
      if ( (transform & 1) != 0 )
        return;
      if ( !*p_effectDisappearComponent
        || (GameObjectExtensions__SetLocalPositionY(
              v14,
              (*p_effectDisappearComponent)->fields.disappearEffectShiftPosY,
              0LL),
            (transform = (__int64)*p_effectDisappearComponent) == 0) )
      {
LABEL_32:
        sub_1B8880C(transform, v13);
      }
      if ( isNextBoardReleased )
        v24 = endTime;
      else
        v24 = 0.0;
      QuestBoardListEffectComponent__Init((QuestBoardListEffectComponent_o *)transform, 1, 0.0, v24, v23);
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
  Il2CppObject *v18; // x22
  __int64 transform; // x0
  __int64 v20; // x1
  UnityEngine_GameObject_o *v21; // x22
  UnityEngine_Transform_o *v22; // x24
  UnityEngine_Transform_o *v23; // x23
  UnityEngine_Transform_o *v24; // x23
  UnityEngine_Transform_o *v25; // x23
  Il2CppObject *Component_object; // x0
  struct QuestBoardListEffectBoardOpenComponent_o **p_effectDisappear2BbComponent; // x21
  int32_t v28; // w2
  int32_t v29; // w3
  UnityEngine_Object_o *effectDisappear2BbComponent; // x19
  const MethodInfo *v31; // x2
  Il2CppObject *v32; // x0
  struct QuestBoardListEffectComponent_o **p_effectDisappear2Component; // x20
  int32_t v34; // w2
  int32_t v35; // w3
  UnityEngine_Object_o *effectDisappear2Component; // x21
  UnityEngine_Object_o *effectDisappearComponent; // x21
  const MethodInfo *v38; // x2
  struct QuestBoardListEffectDisappearComponent_o *v39; // x8
  struct QuestBoardListEffectDisappearComponent_o *v40; // x8

  if ( (byte_4A58118 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectBoardOpenComponent___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectComponent___);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A58118 = 1;
  }
  QuestBoardObjForWarId = (UnityEngine_Component_o *)QuestBoardListViewManager__GetQuestBoardObjForWarId(
                                                       this,
                                                       warId,
                                                       (const MethodInfo *)isOnlyBoardOpen);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(ntBoardAppearEffectPrefab, 0LL, 0LL) )
    {
      v18 = (Il2CppObject *)*p_ntBoardAppearEffectPrefab;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      transform = (__int64)UnityEngine_Object__Instantiate_object_(
                             v18,
                             (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( transform )
      {
        v21 = (UnityEngine_GameObject_o *)transform;
        transform = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
        if ( QuestBoardObjForWarId )
        {
          v22 = (UnityEngine_Transform_o *)transform;
          transform = (__int64)UnityEngine_Component__get_gameObject(QuestBoardObjForWarId, 0LL);
          if ( transform )
          {
            transform = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
            if ( v22 )
            {
              UnityEngine_Transform__set_parent(v22, (UnityEngine_Transform_o *)transform, 0LL);
              transform = (__int64)UnityEngine_GameObject__get_transform(v21, 0LL);
              v23 = (UnityEngine_Transform_o *)transform;
              if ( !byte_4A55CE1 )
              {
                transform = sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
                byte_4A55CE1 = 1;
              }
              if ( v23 )
              {
                UnityEngine_Transform__set_localPosition(
                  v23,
                  UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
                  0LL);
                transform = (__int64)UnityEngine_GameObject__get_transform(v21, 0LL);
                v24 = (UnityEngine_Transform_o *)transform;
                if ( !byte_4A55CE7 )
                {
                  transform = sub_1B885B0(&UnityEngine_Quaternion_TypeInfo);
                  byte_4A55CE7 = 1;
                }
                if ( v24 )
                {
                  UnityEngine_Transform__set_localRotation(
                    v24,
                    UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
                    0LL);
                  transform = (__int64)UnityEngine_GameObject__get_transform(v21, 0LL);
                  v25 = (UnityEngine_Transform_o *)transform;
                  if ( !byte_4A55CE6 )
                  {
                    transform = sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
                    byte_4A55CE6 = 1;
                  }
                  if ( v25 )
                  {
                    UnityEngine_Transform__set_localScale(
                      v25,
                      UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
                      0LL);
                    if ( isOnlyBoardOpen )
                    {
                      Component_object = UnityEngine_GameObject__GetComponent_object_(
                                           v21,
                                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectBoardOpenComponent___);
                      p_effectDisappear2BbComponent = &this->fields.effectDisappear2BbComponent;
                      this->fields.effectDisappear2BbComponent = (struct QuestBoardListEffectBoardOpenComponent_o *)Component_object;
                      sub_1B88554(
                        (ServantStatusBattleListViewItem_o *)&this->fields.effectDisappear2BbComponent,
                        (int32_t)Component_object,
                        v28,
                        v29);
                      effectDisappear2BbComponent = (UnityEngine_Object_o *)this->fields.effectDisappear2BbComponent;
                      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      if ( UnityEngine_Object__op_Equality(effectDisappear2BbComponent, 0LL, 0LL) )
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
                        v31);
                      if ( *p_effectDisappear2BbComponent )
                      {
                        (*p_effectDisappear2BbComponent)->fields.playingActStartTime = actStartTime;
                        return;
                      }
                    }
                    else
                    {
                      v32 = UnityEngine_GameObject__GetComponent_object_(
                              v21,
                              (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectComponent___);
                      p_effectDisappear2Component = &this->fields.effectDisappear2Component;
                      this->fields.effectDisappear2Component = (struct QuestBoardListEffectComponent_o *)v32;
                      sub_1B88554(
                        (ServantStatusBattleListViewItem_o *)&this->fields.effectDisappear2Component,
                        (int32_t)v32,
                        v34,
                        v35);
                      effectDisappear2Component = (UnityEngine_Object_o *)this->fields.effectDisappear2Component;
                      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      if ( UnityEngine_Object__op_Equality(effectDisappear2Component, 0LL, 0LL) )
                        return;
                      effectDisappearComponent = (UnityEngine_Object_o *)this->fields.effectDisappearComponent;
                      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      transform = UnityEngine_Object__op_Inequality(effectDisappearComponent, 0LL, 0LL);
                      if ( (transform & 1) != 0 )
                      {
                        v39 = this->fields.effectDisappearComponent;
                        if ( !v39 )
                          goto LABEL_49;
                        GameObjectExtensions__SetLocalPositionX(v21, v39->fields.disappearEffect2ShiftPosX, 0LL);
                        v40 = this->fields.effectDisappearComponent;
                        if ( !v40 )
                          goto LABEL_49;
                        GameObjectExtensions__SetLocalPositionY(v21, v40->fields.disappearEffect2ShiftPosY, 0LL);
                      }
                      transform = (__int64)*p_effectDisappear2Component;
                      if ( *p_effectDisappear2Component )
                      {
                        QuestBoardListEffectComponent__Init(
                          (QuestBoardListEffectComponent_o *)transform,
                          0,
                          0.0,
                          0.0,
                          v38);
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
      sub_1B8880C(transform, v20);
    }
  }
}


void __fastcall QuestBoardListViewManager__SetUpBoardDisppearFadeEffect(
        QuestBoardListViewManager_o *this,
        bool isPlayingAct,
        float actTime,
        const MethodInfo *method)
{
  UnityEngine_Object_o *boardDisappearEffectFadePrefab; // x21
  Il2CppObject *v8; // x21
  UnityEngine_GameObject_o *transform; // x0
  __int64 v10; // x1
  UnityEngine_GameObject_o *v11; // x21
  UnityEngine_Transform_o *v12; // x22
  UnityEngine_Transform_o *v13; // x22
  UnityEngine_Transform_o *v14; // x22
  UnityEngine_Transform_o *v15; // x22
  Il2CppObject *Component_object; // x0
  struct QuestBoardListEffectComponent_o **p_effectDisappearFadeComponent; // x21
  int32_t v18; // w2
  int32_t v19; // w3
  const MethodInfo *v20; // x2

  if ( (byte_4A58119 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectComponent___);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A58119 = 1;
  }
  boardDisappearEffectFadePrefab = (UnityEngine_Object_o *)this->fields.boardDisappearEffectFadePrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(boardDisappearEffectFadePrefab, 0LL, 0LL) )
  {
    v8 = (Il2CppObject *)this->fields.boardDisappearEffectFadePrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                              v8,
                                              (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_26;
    v11 = transform;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
    if ( !this->fields.fadePanel )
      goto LABEL_26;
    v12 = (UnityEngine_Transform_o *)transform;
    transform = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                              (UnityEngine_Component_o *)this->fields.fadePanel,
                                              0LL);
    if ( !v12 )
      goto LABEL_26;
    UnityEngine_Transform__set_parent(v12, (UnityEngine_Transform_o *)transform, 0LL);
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v11, 0LL);
    v13 = (UnityEngine_Transform_o *)transform;
    if ( !byte_4A55CE1 )
    {
      transform = (UnityEngine_GameObject_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
      byte_4A55CE1 = 1;
    }
    if ( !v13 )
      goto LABEL_26;
    UnityEngine_Transform__set_localPosition(v13, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v11, 0LL);
    v14 = (UnityEngine_Transform_o *)transform;
    if ( !byte_4A55CE7 )
    {
      transform = (UnityEngine_GameObject_o *)sub_1B885B0(&UnityEngine_Quaternion_TypeInfo);
      byte_4A55CE7 = 1;
    }
    if ( !v14 )
      goto LABEL_26;
    UnityEngine_Transform__set_localRotation(
      v14,
      UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
      0LL);
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v11, 0LL);
    v15 = (UnityEngine_Transform_o *)transform;
    if ( !byte_4A55CE6 )
    {
      transform = (UnityEngine_GameObject_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
      byte_4A55CE6 = 1;
    }
    if ( !v15 )
      goto LABEL_26;
    UnityEngine_Transform__set_localScale(v15, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         v11,
                         (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_QuestBoardListEffectComponent___);
    p_effectDisappearFadeComponent = &this->fields.effectDisappearFadeComponent;
    this->fields.effectDisappearFadeComponent = (struct QuestBoardListEffectComponent_o *)Component_object;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&this->fields.effectDisappearFadeComponent,
      (int32_t)Component_object,
      v18,
      v19);
    if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)this->fields.effectDisappearFadeComponent, 0LL, 0LL) )
      return;
    transform = (UnityEngine_GameObject_o *)*p_effectDisappearFadeComponent;
    if ( !*p_effectDisappearFadeComponent )
      goto LABEL_26;
    QuestBoardListEffectComponent__Init((QuestBoardListEffectComponent_o *)transform, 0, 0.0, 0.0, v20);
    if ( !isPlayingAct )
      return;
    if ( !*p_effectDisappearFadeComponent )
LABEL_26:
      sub_1B8880C(transform, v10);
    (*p_effectDisappearFadeComponent)->fields.playingActStartTime = actTime;
  }
}


void __fastcall QuestBoardListViewManager__SetupBlackMark(QuestBoardListViewManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *blackMarkPrefab; // x20
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  System_Object_array *Entitys_object; // x20
  QuestBoardListViewManager___c_c *v7; // x8
  System_Func_object__bool__o *_9__155_0; // x21
  Il2CppObject *v9; // x22
  struct QuestBoardListViewManager___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  int v13; // w20
  struct ScrTerminalListTop_o *mTerminalList; // x8
  AssetData_o *effectAssetData; // x0
  ServantStatusBattleListViewItem_o *p_blackMarkPrefab; // x19
  Il2CppObject *Object_object__48635516; // x0
  int32_t v18; // w2
  int32_t v19; // w3

  if ( (byte_4A5810E & 1) == 0 )
  {
    sub_1B885B0(&Method_AssetData_GetObject_GameObject____76085352);
    sub_1B885B0(&Method_BasicHelper_Any_WarEntity___);
    sub_1B885B0(&Method_DataManager_GetMasterData_WarMaster___);
    sub_1B885B0(&Method_DataMasterBase_getEntitys_WarEntity___);
    sub_1B885B0(&System_Func_WarEntity__bool__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_QuestBoardListViewManager___c__SetupBlackMark_b__155_0__);
    sub_1B885B0(&QuestBoardListViewManager___c_TypeInfo);
    sub_1B885B0(&StringLiteral_18806/*"ef_blackpoint"*/);
    byte_4A5810E = 1;
  }
  blackMarkPrefab = (UnityEngine_Object_o *)this->fields.blackMarkPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(blackMarkPrefab, 0LL, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_20;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_WarMaster___);
    if ( !Instance )
      goto LABEL_20;
    Entitys_object = DataMasterBase__getEntitys_object_(
                       (DataMasterBase_o *)Instance,
                       (const MethodInfo_2E8019C *)Method_DataMasterBase_getEntitys_WarEntity___);
    v7 = QuestBoardListViewManager___c_TypeInfo;
    if ( !QuestBoardListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewManager___c_TypeInfo);
      v7 = QuestBoardListViewManager___c_TypeInfo;
    }
    _9__155_0 = (System_Func_object__bool__o *)v7->static_fields->__9__155_0;
    if ( !_9__155_0 )
    {
      if ( !v7->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v7);
        v7 = QuestBoardListViewManager___c_TypeInfo;
      }
      v9 = (Il2CppObject *)v7->static_fields->__9;
      _9__155_0 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_WarEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__155_0,
        v9,
        Method_QuestBoardListViewManager___c__SetupBlackMark_b__155_0__,
        0LL);
      static_fields = QuestBoardListViewManager___c_TypeInfo->static_fields;
      static_fields->__9__155_0 = (struct System_Func_WarEntity__bool__o *)_9__155_0;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__155_0, (int32_t)_9__155_0, v11, v12);
    }
    Instance = (Il2CppObject *)BasicHelper__Any_object__48672124(
                                 Entitys_object,
                                 (System_Func_T__bool__o *)_9__155_0,
                                 (const MethodInfo_2E6AD7C *)Method_BasicHelper_Any_WarEntity___);
    if ( !this->fields.mTerminalList
      || (v13 = (int)Instance,
          Instance = (Il2CppObject *)ScrTerminalListTop__CheckTerminalTopEffect(this->fields.mTerminalList, 0LL),
          (mTerminalList = this->fields.mTerminalList) == 0LL) )
    {
LABEL_20:
      sub_1B8880C(Instance, v5);
    }
    if ( (((_DWORD)Instance != mTerminalList->fields.TERMINAL_EFFECT_APPEAR_EFFECT_ID) & ~v13) == 0 )
    {
      effectAssetData = this->fields.effectAssetData;
      if ( effectAssetData )
      {
        p_blackMarkPrefab = (ServantStatusBattleListViewItem_o *)&this->fields.blackMarkPrefab;
        Object_object__48635516 = AssetData__GetObject_object__48635516(
                                    effectAssetData,
                                    (System_String_o *)StringLiteral_18806/*"ef_blackpoint"*/,
                                    (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
        p_blackMarkPrefab->klass = (ServantStatusBattleListViewItem_c *)Object_object__48635516;
        sub_1B88554(p_blackMarkPrefab, (int32_t)Object_object__48635516, v18, v19);
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
  Il2CppObject *Object_object__48635516; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  UnityEngine_Object_o *boardAppearEffectFadePrefab; // x20
  Il2CppObject *v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  UnityEngine_Object_o *v13; // x20
  __int64 *v14; // x8
  ServantStatusBattleListViewItem_o *p_boardDisappear2EffectPrefab; // x20
  UnityEngine_Object_o *v16; // x20
  Il2CppObject *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  UnityEngine_Object_o *v20; // x20
  Il2CppObject *v21; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  UnityEngine_Object_o *ntBoardAppearEffectPrefab; // x20
  Il2CppObject *v25; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  UnityEngine_Object_o *boardDisappearEffectFadePrefab; // x20
  __int64 *v29; // x8
  ServantStatusBattleListViewItem_o *p_nt2BoardAppearEffectFadePrefab; // x19
  Il2CppObject *v31; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  UnityEngine_Object_o *boardDisappearEffectPrefab; // x20
  Il2CppObject *v35; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  UnityEngine_Object_o *boardDisappear2EffectPrefab; // x20
  __int64 *v39; // x8
  UnityEngine_Object_o *v40; // x20
  Il2CppObject *v41; // x0
  int32_t v42; // w2
  int32_t v43; // w3
  UnityEngine_Object_o *v44; // x20
  Il2CppObject *v45; // x0
  int32_t v46; // w2
  int32_t v47; // w3
  UnityEngine_Object_o *v48; // x20
  Il2CppObject *v49; // x0
  int32_t v50; // w2
  int32_t v51; // w3
  UnityEngine_Object_o *v52; // x20
  UnityEngine_Object_o *nt2BoardAppearEffectPrefab; // x20
  Il2CppObject *v54; // x0
  int32_t v55; // w2
  int32_t v56; // w3
  UnityEngine_Object_o *nt2BoardAppearEffectFadePrefab; // x20

  if ( (byte_4A58111 & 1) == 0 )
  {
    sub_1B885B0(&Method_AssetData_GetObject_GameObject____76085352);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_17200/*"bit_board_appear2"*/);
    sub_1B885B0(&StringLiteral_17206/*"bit_board_disappear5"*/);
    sub_1B885B0(&StringLiteral_17233/*"bit_fade_black2"*/);
    sub_1B885B0(&StringLiteral_17205/*"bit_board_disappear4"*/);
    sub_1B885B0(&StringLiteral_17202/*"bit_board_disappear"*/);
    sub_1B885B0(&StringLiteral_17232/*"bit_fade_black"*/);
    sub_1B885B0(&StringLiteral_17199/*"bit_board_appear"*/);
    sub_1B885B0(&StringLiteral_17235/*"bit_fade_black4"*/);
    sub_1B885B0(&StringLiteral_17234/*"bit_fade_black3"*/);
    sub_1B885B0(&StringLiteral_17201/*"bit_board_appear3"*/);
    sub_1B885B0(&StringLiteral_17203/*"bit_board_disappear2"*/);
    sub_1B885B0(&StringLiteral_17204/*"bit_board_disappear3"*/);
    byte_4A58111 = 1;
  }
  mTerminalList = this->fields.mTerminalList;
  if ( !mTerminalList )
    goto LABEL_100;
  mTerminalList = (ScrTerminalListTop_o *)ScrTerminalListTop__CheckTerminalTopEffect(mTerminalList, 0LL);
  v4 = this->fields.mTerminalList;
  if ( !v4 )
    goto LABEL_100;
  if ( (_DWORD)mTerminalList == v4->fields.TERMINAL_EFFECT_APPEAR_EFFECT_ID )
  {
    if ( !this->fields.effectAssetData )
      return;
    boardAppearEffectPrefab = (UnityEngine_Object_o *)this->fields.boardAppearEffectPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(boardAppearEffectPrefab, 0LL, 0LL) )
    {
      mTerminalList = (ScrTerminalListTop_o *)this->fields.effectAssetData;
      if ( !mTerminalList )
        goto LABEL_100;
      Object_object__48635516 = AssetData__GetObject_object__48635516(
                                  (AssetData_o *)mTerminalList,
                                  (System_String_o *)StringLiteral_17199/*"bit_board_appear"*/,
                                  (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
      this->fields.boardAppearEffectPrefab = (struct UnityEngine_GameObject_o *)Object_object__48635516;
      sub_1B88554(
        (ServantStatusBattleListViewItem_o *)&this->fields.boardAppearEffectPrefab,
        (int32_t)Object_object__48635516,
        v7,
        v8);
    }
    boardAppearEffectFadePrefab = (UnityEngine_Object_o *)this->fields.boardAppearEffectFadePrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(boardAppearEffectFadePrefab, 0LL, 0LL) )
    {
      mTerminalList = (ScrTerminalListTop_o *)this->fields.effectAssetData;
      if ( !mTerminalList )
        goto LABEL_100;
      v10 = AssetData__GetObject_object__48635516(
              (AssetData_o *)mTerminalList,
              (System_String_o *)StringLiteral_17232/*"bit_fade_black"*/,
              (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
      this->fields.boardAppearEffectFadePrefab = (struct UnityEngine_GameObject_o *)v10;
      sub_1B88554(
        (ServantStatusBattleListViewItem_o *)&this->fields.boardAppearEffectFadePrefab,
        (int32_t)v10,
        v11,
        v12);
    }
    goto LABEL_17;
  }
  if ( (_DWORD)mTerminalList == v4->fields.TERMINAL_WHITE_MARK_EFFECT_APPEAR_EFFECT_ID )
  {
    if ( !this->fields.effectAssetData )
      return;
    v16 = (UnityEngine_Object_o *)this->fields.boardAppearEffectPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(v16, 0LL, 0LL) )
    {
      mTerminalList = (ScrTerminalListTop_o *)this->fields.effectAssetData;
      if ( !mTerminalList )
        goto LABEL_100;
      v17 = AssetData__GetObject_object__48635516(
              (AssetData_o *)mTerminalList,
              (System_String_o *)StringLiteral_17200/*"bit_board_appear2"*/,
              (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
      this->fields.boardAppearEffectPrefab = (struct UnityEngine_GameObject_o *)v17;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.boardAppearEffectPrefab, (int32_t)v17, v18, v19);
    }
    v20 = (UnityEngine_Object_o *)this->fields.boardAppearEffectFadePrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(v20, 0LL, 0LL) )
    {
      mTerminalList = (ScrTerminalListTop_o *)this->fields.effectAssetData;
      if ( !mTerminalList )
        goto LABEL_100;
      v21 = AssetData__GetObject_object__48635516(
              (AssetData_o *)mTerminalList,
              (System_String_o *)StringLiteral_17234/*"bit_fade_black3"*/,
              (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
      this->fields.boardAppearEffectFadePrefab = (struct UnityEngine_GameObject_o *)v21;
      sub_1B88554(
        (ServantStatusBattleListViewItem_o *)&this->fields.boardAppearEffectFadePrefab,
        (int32_t)v21,
        v22,
        v23);
    }
    goto LABEL_34;
  }
  if ( (_DWORD)mTerminalList == v4->fields.TERMINAL_EFFECT_BOARD_DISAPPEAR_EFFECT_ID )
  {
    if ( !this->fields.effectAssetData )
      return;
    boardDisappearEffectPrefab = (UnityEngine_Object_o *)this->fields.boardDisappearEffectPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(boardDisappearEffectPrefab, 0LL, 0LL) )
    {
      mTerminalList = (ScrTerminalListTop_o *)this->fields.effectAssetData;
      if ( !mTerminalList )
        goto LABEL_100;
      v35 = AssetData__GetObject_object__48635516(
              (AssetData_o *)mTerminalList,
              (System_String_o *)StringLiteral_17202/*"bit_board_disappear"*/,
              (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
      this->fields.boardDisappearEffectPrefab = (struct UnityEngine_GameObject_o *)v35;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.boardDisappearEffectPrefab, (int32_t)v35, v36, v37);
    }
    boardDisappear2EffectPrefab = (UnityEngine_Object_o *)this->fields.boardDisappear2EffectPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(boardDisappear2EffectPrefab, 0LL, 0LL) )
      goto LABEL_71;
    mTerminalList = (ScrTerminalListTop_o *)this->fields.effectAssetData;
    if ( !mTerminalList )
      goto LABEL_100;
    v39 = &StringLiteral_17203/*"bit_board_disappear2"*/;
    goto LABEL_70;
  }
  if ( (_DWORD)mTerminalList != v4->fields.TERMINAL_WHITE_MARK_EFFECT_BOARD_DISAPPEAR_EFFECT_ID )
  {
    if ( (_DWORD)mTerminalList == v4->fields.TERMINAL_EFFECT_BB_BOARD_EFFECT_ID )
    {
      if ( !this->fields.effectAssetData )
        return;
LABEL_17:
      v13 = (UnityEngine_Object_o *)this->fields.boardDisappear2EffectPrefab;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality(v13, 0LL, 0LL) )
      {
        mTerminalList = (ScrTerminalListTop_o *)this->fields.effectAssetData;
        if ( !mTerminalList )
          goto LABEL_100;
        v14 = &StringLiteral_17203/*"bit_board_disappear2"*/;
        p_boardDisappear2EffectPrefab = (ServantStatusBattleListViewItem_o *)&this->fields.boardDisappear2EffectPrefab;
LABEL_39:
        v25 = AssetData__GetObject_object__48635516(
                (AssetData_o *)mTerminalList,
                (System_String_o *)*v14,
                (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
        p_boardDisappear2EffectPrefab->klass = (ServantStatusBattleListViewItem_c *)v25;
        sub_1B88554(p_boardDisappear2EffectPrefab, (int32_t)v25, v26, v27);
        goto LABEL_40;
      }
      goto LABEL_40;
    }
    if ( (_DWORD)mTerminalList != v4->fields.TERMINAL_EFFECT_NT_BOARD_EFFECT_ID )
    {
      if ( (_DWORD)mTerminalList == v4->fields.TERMINAL_EFFECT_NT2_BOARD_COMPLETE_EFFECT_ID
        && this->fields.effectAssetData )
      {
        nt2BoardAppearEffectPrefab = (UnityEngine_Object_o *)this->fields.nt2BoardAppearEffectPrefab;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Equality(nt2BoardAppearEffectPrefab, 0LL, 0LL) )
        {
          mTerminalList = (ScrTerminalListTop_o *)this->fields.effectAssetData;
          if ( !mTerminalList )
            goto LABEL_100;
          v54 = AssetData__GetObject_object__48635516(
                  (AssetData_o *)mTerminalList,
                  (System_String_o *)StringLiteral_17201/*"bit_board_appear3"*/,
                  (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
          this->fields.nt2BoardAppearEffectPrefab = (struct UnityEngine_GameObject_o *)v54;
          sub_1B88554(
            (ServantStatusBattleListViewItem_o *)&this->fields.nt2BoardAppearEffectPrefab,
            (int32_t)v54,
            v55,
            v56);
        }
        nt2BoardAppearEffectFadePrefab = (UnityEngine_Object_o *)this->fields.nt2BoardAppearEffectFadePrefab;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Equality(nt2BoardAppearEffectFadePrefab, 0LL, 0LL) )
        {
          mTerminalList = (ScrTerminalListTop_o *)this->fields.effectAssetData;
          if ( mTerminalList )
          {
            v29 = &StringLiteral_17235/*"bit_fade_black4"*/;
            p_nt2BoardAppearEffectFadePrefab = (ServantStatusBattleListViewItem_o *)&this->fields.nt2BoardAppearEffectFadePrefab;
            goto LABEL_45;
          }
          goto LABEL_100;
        }
      }
      return;
    }
    if ( !this->fields.effectAssetData )
      return;
LABEL_34:
    ntBoardAppearEffectPrefab = (UnityEngine_Object_o *)this->fields.ntBoardAppearEffectPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(ntBoardAppearEffectPrefab, 0LL, 0LL) )
    {
      mTerminalList = (ScrTerminalListTop_o *)this->fields.effectAssetData;
      if ( !mTerminalList )
        goto LABEL_100;
      v14 = &StringLiteral_17206/*"bit_board_disappear5"*/;
      p_boardDisappear2EffectPrefab = (ServantStatusBattleListViewItem_o *)&this->fields.ntBoardAppearEffectPrefab;
      goto LABEL_39;
    }
LABEL_40:
    boardDisappearEffectFadePrefab = (UnityEngine_Object_o *)this->fields.boardDisappearEffectFadePrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(boardDisappearEffectFadePrefab, 0LL, 0LL) )
    {
      mTerminalList = (ScrTerminalListTop_o *)this->fields.effectAssetData;
      if ( mTerminalList )
      {
        v29 = &StringLiteral_17233/*"bit_fade_black2"*/;
        p_nt2BoardAppearEffectFadePrefab = (ServantStatusBattleListViewItem_o *)&this->fields.boardDisappearEffectFadePrefab;
LABEL_45:
        v31 = AssetData__GetObject_object__48635516(
                (AssetData_o *)mTerminalList,
                (System_String_o *)*v29,
                (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
        p_nt2BoardAppearEffectFadePrefab->klass = (ServantStatusBattleListViewItem_c *)v31;
        sub_1B88554(p_nt2BoardAppearEffectFadePrefab, (int32_t)v31, v32, v33);
        return;
      }
      goto LABEL_100;
    }
    return;
  }
  if ( !this->fields.effectAssetData )
    return;
  v40 = (UnityEngine_Object_o *)this->fields.boardDisappearEffectPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(v40, 0LL, 0LL) )
  {
    mTerminalList = (ScrTerminalListTop_o *)this->fields.effectAssetData;
    if ( !mTerminalList )
      goto LABEL_100;
    v41 = AssetData__GetObject_object__48635516(
            (AssetData_o *)mTerminalList,
            (System_String_o *)StringLiteral_17204/*"bit_board_disappear3"*/,
            (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
    this->fields.boardDisappearEffectPrefab = (struct UnityEngine_GameObject_o *)v41;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.boardDisappearEffectPrefab, (int32_t)v41, v42, v43);
  }
  v44 = (UnityEngine_Object_o *)this->fields.boardDisappear2EffectPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(v44, 0LL, 0LL) )
  {
    mTerminalList = (ScrTerminalListTop_o *)this->fields.effectAssetData;
    if ( !mTerminalList )
      goto LABEL_100;
    v39 = &StringLiteral_17205/*"bit_board_disappear4"*/;
LABEL_70:
    v45 = AssetData__GetObject_object__48635516(
            (AssetData_o *)mTerminalList,
            (System_String_o *)*v39,
            (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
    this->fields.boardDisappear2EffectPrefab = (struct UnityEngine_GameObject_o *)v45;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.boardDisappear2EffectPrefab, (int32_t)v45, v46, v47);
  }
LABEL_71:
  v48 = (UnityEngine_Object_o *)this->fields.boardDisappearEffectFadePrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(v48, 0LL, 0LL) )
  {
    mTerminalList = (ScrTerminalListTop_o *)this->fields.effectAssetData;
    if ( !mTerminalList )
      goto LABEL_100;
    v49 = AssetData__GetObject_object__48635516(
            (AssetData_o *)mTerminalList,
            (System_String_o *)StringLiteral_17233/*"bit_fade_black2"*/,
            (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
    this->fields.boardDisappearEffectFadePrefab = (struct UnityEngine_GameObject_o *)v49;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&this->fields.boardDisappearEffectFadePrefab,
      (int32_t)v49,
      v50,
      v51);
  }
  v52 = (UnityEngine_Object_o *)this->fields.ntBoardAppearEffectPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(v52, 0LL, 0LL) )
  {
    mTerminalList = (ScrTerminalListTop_o *)this->fields.effectAssetData;
    if ( mTerminalList )
    {
      v29 = &StringLiteral_17206/*"bit_board_disappear5"*/;
      p_nt2BoardAppearEffectFadePrefab = (ServantStatusBattleListViewItem_o *)&this->fields.ntBoardAppearEffectPrefab;
      goto LABEL_45;
    }
LABEL_100:
    sub_1B8880C(mTerminalList, method);
  }
}


void __fastcall QuestBoardListViewManager__SetupDisp(QuestBoardListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  const MethodInfo *v4; // x1
  int size; // w8
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w21
  int syncRoot; // w23
  System_Collections_Generic_IEnumerable_TResult__o *v9; // x0
  QuestBoardListViewManager___c_c *v10; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x20
  System_Func_object__bool__o *_9__119_0; // x21
  Il2CppObject *v13; // x22
  struct QuestBoardListViewManager___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  Il2CppObject *v17; // x0
  const MethodInfo *v18; // x1
  int32_t klass_high; // w8
  const MethodInfo *v20; // x3

  if ( (byte_4A580FA & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Cast_QuestBoardListViewItem___);
    sub_1B885B0(&Method_System_Linq_Enumerable_FirstOrDefault_QuestBoardListViewItem___);
    sub_1B885B0(&System_Func_QuestBoardListViewItem__bool__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestBoardListViewObject__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestBoardListViewObject__get_Item__);
    sub_1B885B0(&Method_QuestBoardListViewManager___c__SetupDisp_b__119_0__);
    sub_1B885B0(&QuestBoardListViewManager___c_TypeInfo);
    byte_4A580FA = 1;
  }
  ObjectList = (System_Collections_Generic_List_object__o *)QuestBoardListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    goto LABEL_23;
  size = ObjectList->fields._size;
  v6 = ObjectList;
  if ( size >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      ObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  v6,
                                                                  v7,
                                                                  (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_QuestBoardListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      QuestBoardListViewObject__SetupDisp((QuestBoardListViewObject_o *)ObjectList, v4);
      size = v6->fields._size;
      if ( ++v7 >= size )
        goto LABEL_8;
    }
LABEL_23:
    sub_1B8880C(ObjectList, v4);
  }
LABEL_8:
  if ( size >= 1 )
  {
    ObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                v6,
                                                                0,
                                                                (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_QuestBoardListViewObject__get_Item__);
    if ( !ObjectList )
      goto LABEL_23;
    ObjectList = (System_Collections_Generic_List_object__o *)QuestBoardListViewObject__GetItem(
                                                                (QuestBoardListViewObject_o *)ObjectList,
                                                                v4);
    if ( !ObjectList )
      goto LABEL_23;
    syncRoot = (int)ObjectList[2].fields._syncRoot;
    v9 = System_Linq_Enumerable__Cast_object_(
           (System_Collections_IEnumerable_o *)this->fields.itemList,
           (const MethodInfo_2E8FA18 *)Method_System_Linq_Enumerable_Cast_QuestBoardListViewItem___);
    v10 = QuestBoardListViewManager___c_TypeInfo;
    v11 = (System_Collections_Generic_IEnumerable_TSource__o *)v9;
    if ( !QuestBoardListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewManager___c_TypeInfo);
      v10 = QuestBoardListViewManager___c_TypeInfo;
    }
    _9__119_0 = (System_Func_object__bool__o *)v10->static_fields->__9__119_0;
    if ( !_9__119_0 )
    {
      if ( !v10->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v10);
        v10 = QuestBoardListViewManager___c_TypeInfo;
      }
      v13 = (Il2CppObject *)v10->static_fields->__9;
      _9__119_0 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_QuestBoardListViewItem__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__119_0, v13, Method_QuestBoardListViewManager___c__SetupDisp_b__119_0__, 0LL);
      static_fields = QuestBoardListViewManager___c_TypeInfo->static_fields;
      static_fields->__9__119_0 = (struct System_Func_QuestBoardListViewItem__bool__o *)_9__119_0;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__119_0, (int32_t)_9__119_0, v15, v16);
    }
    v17 = System_Linq_Enumerable__FirstOrDefault_object__48907856(
            v11,
            (System_Func_TSource__bool__o *)_9__119_0,
            (const MethodInfo_2EA4650 *)Method_System_Linq_Enumerable_FirstOrDefault_QuestBoardListViewItem___);
    if ( v17 )
    {
      klass_high = HIDWORD(v17[1].klass);
      this->fields._IndexFirstDisplayableRoadmapButton_k__BackingField = klass_high;
      if ( !syncRoot && (klass_high & 0x80000000) != 0 )
        goto LABEL_20;
    }
    else
    {
      this->fields._IndexFirstDisplayableRoadmapButton_k__BackingField = -1;
      if ( !syncRoot )
      {
LABEL_20:
        QuestBoardListViewManager__DisplayRoadmapButtonToTopWarBoard(this, v18);
        QuestBoardListViewManager__ModifyAllRoadmapButtons(this, 1, 1, v20);
      }
    }
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
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x0
  System_String_o *v14; // x19
  AssetLoader_LoadEndDataHandler_o *v15; // x22
  int32_t v16; // [xsp+Ch] [xbp-44h] BYREF

  v16 = eventId;
  if ( (byte_4A58110 & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1B885B0(&Method_QuestBoardListViewManager___c__DisplayClass157_0__SetupFortificationWarningDialog_b__0__);
    sub_1B885B0(&QuestBoardListViewManager___c__DisplayClass157_0_TypeInfo);
    sub_1B885B0(&StringLiteral_6228/*"EventUI/Prefabs/"*/);
    byte_4A58110 = 1;
  }
  v6 = sub_1B887FC(QuestBoardListViewManager___c__DisplayClass157_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  if ( !v6 )
    sub_1B8880C(v7, v8);
  *(_QWORD *)(v6 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v6 + 16), (int32_t)this, v9, v10);
  *(_QWORD *)(v6 + 24) = func;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v6 + 24), (int32_t)func, v11, v12);
  v13 = System_Int32__ToString((int32_t)&v16, 0LL);
  v14 = System_String__Concat_61707032((System_String_o *)StringLiteral_6228/*"EventUI/Prefabs/"*/, v13, 0LL);
  v15 = (AssetLoader_LoadEndDataHandler_o *)sub_1B887FC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v15,
    (Il2CppObject *)v6,
    Method_QuestBoardListViewManager___c__DisplayClass157_0__SetupFortificationWarningDialog_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(v14, v15, 1, 0LL) )
    ActionExtensions__Call(*(System_Action_o **)(v6 + 24), 0LL);
}


void __fastcall QuestBoardListViewManager__SetupWhiteMark(QuestBoardListViewManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *whiteMarkPrefab; // x20
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  System_Object_array *Entitys_object; // x20
  QuestBoardListViewManager___c_c *v7; // x8
  System_Func_object__bool__o *_9__156_0; // x21
  Il2CppObject *v9; // x22
  struct QuestBoardListViewManager___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  int v13; // w20
  struct ScrTerminalListTop_o *mTerminalList; // x8
  AssetData_o *effectAssetData; // x0
  ServantStatusBattleListViewItem_o *p_whiteMarkPrefab; // x19
  Il2CppObject *Object_object__48635516; // x0
  int32_t v18; // w2
  int32_t v19; // w3

  if ( (byte_4A5810F & 1) == 0 )
  {
    sub_1B885B0(&Method_AssetData_GetObject_GameObject____76085352);
    sub_1B885B0(&Method_BasicHelper_Any_WarEntity___);
    sub_1B885B0(&Method_DataManager_GetMasterData_WarMaster___);
    sub_1B885B0(&Method_DataMasterBase_getEntitys_WarEntity___);
    sub_1B885B0(&System_Func_WarEntity__bool__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_QuestBoardListViewManager___c__SetupWhiteMark_b__156_0__);
    sub_1B885B0(&QuestBoardListViewManager___c_TypeInfo);
    sub_1B885B0(&StringLiteral_18867/*"ef_whitepoint"*/);
    byte_4A5810F = 1;
  }
  whiteMarkPrefab = (UnityEngine_Object_o *)this->fields.whiteMarkPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(whiteMarkPrefab, 0LL, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_20;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_WarMaster___);
    if ( !Instance )
      goto LABEL_20;
    Entitys_object = DataMasterBase__getEntitys_object_(
                       (DataMasterBase_o *)Instance,
                       (const MethodInfo_2E8019C *)Method_DataMasterBase_getEntitys_WarEntity___);
    v7 = QuestBoardListViewManager___c_TypeInfo;
    if ( !QuestBoardListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewManager___c_TypeInfo);
      v7 = QuestBoardListViewManager___c_TypeInfo;
    }
    _9__156_0 = (System_Func_object__bool__o *)v7->static_fields->__9__156_0;
    if ( !_9__156_0 )
    {
      if ( !v7->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v7);
        v7 = QuestBoardListViewManager___c_TypeInfo;
      }
      v9 = (Il2CppObject *)v7->static_fields->__9;
      _9__156_0 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_WarEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__156_0,
        v9,
        Method_QuestBoardListViewManager___c__SetupWhiteMark_b__156_0__,
        0LL);
      static_fields = QuestBoardListViewManager___c_TypeInfo->static_fields;
      static_fields->__9__156_0 = (struct System_Func_WarEntity__bool__o *)_9__156_0;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__156_0, (int32_t)_9__156_0, v11, v12);
    }
    Instance = (Il2CppObject *)BasicHelper__Any_object__48672124(
                                 Entitys_object,
                                 (System_Func_T__bool__o *)_9__156_0,
                                 (const MethodInfo_2E6AD7C *)Method_BasicHelper_Any_WarEntity___);
    if ( !this->fields.mTerminalList
      || (v13 = (int)Instance,
          Instance = (Il2CppObject *)ScrTerminalListTop__CheckTerminalTopEffect(this->fields.mTerminalList, 0LL),
          (mTerminalList = this->fields.mTerminalList) == 0LL) )
    {
LABEL_20:
      sub_1B8880C(Instance, v5);
    }
    if ( (((_DWORD)Instance != mTerminalList->fields.TERMINAL_WHITE_MARK_EFFECT_APPEAR_EFFECT_ID) & ~v13) == 0 )
    {
      effectAssetData = this->fields.effectAssetData;
      if ( effectAssetData )
      {
        p_whiteMarkPrefab = (ServantStatusBattleListViewItem_o *)&this->fields.whiteMarkPrefab;
        Object_object__48635516 = AssetData__GetObject_object__48635516(
                                    effectAssetData,
                                    (System_String_o *)StringLiteral_18867/*"ef_whitepoint"*/,
                                    (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
        p_whiteMarkPrefab->klass = (ServantStatusBattleListViewItem_c *)Object_object__48635516;
        sub_1B88554(p_whiteMarkPrefab, (int32_t)Object_object__48635516, v18, v19);
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
  const MethodInfo *v6; // x1
  QuestBoardListEffectComponent_o *v7; // x0

  if ( (byte_4A5811C & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5811C = 1;
  }
  effectDisappearFadeComponent = (UnityEngine_Object_o *)this->fields.effectDisappearFadeComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(effectDisappearFadeComponent, 0LL, 0LL) )
  {
    v7 = this->fields.effectDisappearFadeComponent;
    if ( !v7 )
      sub_1B8880C(0LL, v6);
    QuestBoardListEffectComponent__Skip(v7, skipTime, v6);
  }
}


bool __fastcall QuestBoardListViewManager__TryGetFlagFromOnEventStart(
        QuestBoardListViewManager_o *this,
        int32_t *flagType,
        EventEntity_o *eventEntity,
        const MethodInfo *method)
{
  void *EventTutorialEntity; // x0
  __int64 v7; // x1
  int32_t v8; // w8
  bool result; // w0

  if ( (byte_4A58104 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A58104 = 1;
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
    if ( *((_DWORD *)EventTutorialEntity + 6) )
    {
      EventTutorialEntity = System_Collections_Generic_List_object___get_Item(
                              (System_Collections_Generic_List_object__o *)EventTutorialEntity,
                              0,
                              (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
      if ( EventTutorialEntity )
      {
        v8 = *((_DWORD *)EventTutorialEntity + 5);
        result = 1;
        *flagType = v8;
        return result;
      }
LABEL_9:
      sub_1B8880C(EventTutorialEntity, v7);
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
  bool v7; // w20
  Il2CppObject *current; // x21
  __int64 methodPtr_low; // x9
  MapControl_QuestInfo_o *monitor; // x0
  _BOOL8 IsReleaseFocusQuestBoard; // x0
  __int64 v12; // x1
  _DWORD *v13; // x8
  int32_t v14; // w22
  __int64 QuestReleasedFocusState; // x0
  __int64 v16; // x1
  _DWORD *v17; // x8
  int v18; // w19
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4A580F7 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Any_ListViewItem___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1B885B0(&QuestBoardListViewItem_TypeInfo);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A580F7 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  if ( !System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.itemList,
          (const MethodInfo_2E8D2DC *)Method_System_Linq_Enumerable_Any_ListViewItem___) )
    return 0;
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1B8880C(0LL, v5);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v20,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v21 = v20;
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v21,
           (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v7 )
    {
      v18 = 6;
      goto LABEL_21;
    }
    current = v21.fields._current;
    if ( v21.fields._current )
    {
      methodPtr_low = LOBYTE(QuestBoardListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v21.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
        || (QuestBoardListViewItem_c *)v21.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != QuestBoardListViewItem_TypeInfo )
      {
        sub_1B88ACC(v21.fields._current);
LABEL_24:
        sub_1B8880C(IsReleaseFocusQuestBoard, v12);
      }
      monitor = (MapControl_QuestInfo_o *)v21.fields._current[7].monitor;
      if ( monitor )
      {
        if ( monitor->fields.dispType == 1 )
        {
          IsReleaseFocusQuestBoard = MapControl_QuestInfo__IsReleaseFocusQuestBoard(monitor, 0LL);
          if ( IsReleaseFocusQuestBoard )
          {
            v13 = current[7].monitor;
            if ( !v13 )
              goto LABEL_24;
            v14 = v13[4];
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            QuestReleasedFocusState = TerminalPramsManager__GetQuestReleasedFocusState(v14, 0LL);
            if ( !(_DWORD)QuestReleasedFocusState )
              break;
          }
        }
      }
    }
  }
  v17 = current[7].monitor;
  if ( !v17 )
    sub_1B8880C(QuestReleasedFocusState, v16);
  *questId = v17[4];
  v18 = 5;
LABEL_21:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v21,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  return v7 && v18 == 5;
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

  if ( (byte_4A58102 & 1) == 0 )
  {
    sub_1B885B0(&QuestBoardListViewManager_TypeInfo);
    sub_1B885B0(&Method_TransitionCalculator_float__Update__);
    byte_4A58102 = 1;
  }
  rewardIconAlphaCalculator = (TransitionCalculator_float__o *)this->fields.rewardIconAlphaCalculator;
  if ( rewardIconAlphaCalculator )
  {
    v5 = TransitionCalculator_float___Update(
           rewardIconAlphaCalculator,
           (const MethodInfo_37B9DC0 *)Method_TransitionCalculator_float__Update__);
    v6 = this->fields.rewardIconAlphaCalculator;
    this->fields.mAlphaAnimNow = v5;
    if ( !v6 )
      goto LABEL_22;
    if ( AlphaTransitionCalculator__IsFadeInFinished(v6, 0LL) )
    {
      realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0LL);
      mAlphaAnimTimeOld = this->fields.mAlphaAnimTimeOld;
      v9 = realtimeSinceStartup;
      v10 = QuestBoardListViewManager_TypeInfo;
      if ( !QuestBoardListViewManager_TypeInfo->_2.cctor_finished )
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
LABEL_22:
        sub_1B8880C(v6, v4);
      }
    }
    else
    {
      v6 = this->fields.rewardIconAlphaCalculator;
      if ( !v6 )
        goto LABEL_22;
      if ( AlphaTransitionCalculator__IsFadeOutFinished(v6, 0LL) )
      {
        v6 = this->fields.rewardIconAlphaCalculator;
        if ( !v6 )
          goto LABEL_22;
        AlphaTransitionCalculator__StartFadeIn(v6, 0LL);
        v12 = UnityEngine_Time__get_realtimeSinceStartup(0LL);
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


System_Collections_IEnumerator_o *__fastcall QuestBoardListViewManager__WaitFinish(
        QuestBoardListViewManager_o *this,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A580F4 & 1) == 0 )
  {
    sub_1B885B0(&QuestBoardListViewManager__WaitFinish_d__112_TypeInfo);
    byte_4A580F4 = 1;
  }
  v5 = sub_1B887FC(QuestBoardListViewManager__WaitFinish_d__112_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 40) = endAct;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 40), (int32_t)endAct, v8, v9);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall QuestBoardListViewManager___BGChangeEffect_b__149_0(
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
    sub_1B8880C(mFolderBg, method);
  }
  LODWORD(mFolderBg[1].monitor) = 1;
}


void __fastcall QuestBoardListViewManager___BGChangeEffect_b__149_1(
        QuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  char *mFolderBgTemp; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  int32_t v7; // w1

  if ( (byte_4A58127 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_11280/*"RemoveTempBG"*/);
    byte_4A58127 = 1;
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
    sub_1B8880C(mFolderBgTemp, method);
  }
  *((_DWORD *)mFolderBgTemp + 8) = 0;
  v7 = StringLiteral_11280/*"RemoveTempBG"*/;
  *((_QWORD *)mFolderBgTemp + 11) = StringLiteral_11280/*"RemoveTempBG"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(mFolderBgTemp + 88), v7, v5, v6);
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
    sub_1B8880C(mFolderBg, *(_QWORD *)&inOut);
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
    LODWORD(mFolderBg[1].monitor) = v9;
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
  __int64 v9; // x3
  __int64 v10; // x4
  Il2CppObject *v11; // x0
  ExUITexture_o *v12; // x20
  System_String_o *v13; // x21
  const MethodInfo *v14; // x1
  int32_t v15; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A58109 & 1) == 0 )
  {
    sub_1B885B0(&FSUtility_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&StringLiteral_3133/*"Back/back{0}"*/);
    byte_4A58109 = 1;
  }
  mFolderBg = (UnityEngine_Component_o *)this->fields.mFolderBg;
  if ( !mFolderBg )
    goto LABEL_14;
  mRequestedBGid = this->fields.mRequestedBGid;
  mFolderBg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mFolderBg, 0LL);
  if ( !mFolderBg )
    goto LABEL_14;
  if ( mRequestedBGid < 1 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mFolderBg, 0, 0LL);
    ActionExtensions__Call(callback, 0LL);
    goto LABEL_11;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mFolderBg, 1, 0LL);
  v7 = this->fields.mFolderBg;
  v15 = this->fields.mRequestedBGid;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15, v8, v9, v10);
  mFolderBg = (UnityEngine_Component_o *)System_String__Format((System_String_o *)StringLiteral_3133/*"Back/back{0}"*/, v11, 0LL);
  if ( !v7 )
LABEL_14:
    sub_1B8880C(mFolderBg, callback);
  ExUITexture__SetAssetImage(v7, (System_String_o *)mFolderBg, callback, 0LL);
  v12 = this->fields.mFolderBg;
  v13 = System_Int32__ToString((int)this + 576, 0LL);
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  FSUtility__SetUpBackTextureSize(v12, v13, 0LL);
LABEL_11:
  if ( this->fields.mFaded )
    QuestBoardListViewManager__RemoveTempBG(this, v14);
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
    sub_1B8880C(0LL, method);
  return ExUITexture__get_TextureName(mFolderBg, 0LL);
}


int32_t __fastcall QuestBoardListViewManager__get_IndexFirstDisplayableRoadmapButton(
        QuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields._IndexFirstDisplayableRoadmapButton_k__BackingField;
}


bool __fastcall QuestBoardListViewManager__get_IsShowingInfo(
        QuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields._IsShowingInfo_k__BackingField;
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
  if ( v2 < 1.7778 )
    return 532.0;
  else
    return (float)((float)(v2 * 576.0) + -1024.0) + 532.0;
}


System_Collections_Generic_List_QuestBoardListViewObject__o *__fastcall QuestBoardListViewManager__get_ObjectList(
        QuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *Component_object; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  Il2CppObject *v12; // x1
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4A580EE & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_QuestBoardListViewObject___);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestBoardListViewObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestBoardListViewObject___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_QuestBoardListViewObject__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A580EE = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_QuestBoardListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_QuestBoardListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B8880C(0LL, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v19 = v18;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v19,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v19.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_1B8880C(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_QuestBoardListViewObject___);
      v12 = Component_object;
      if ( !v3 )
        sub_1B8880C(Component_object, Component_object);
      items = v3->fields._items;
      v14 = Method_System_Collections_Generic_List_QuestBoardListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1B8880C(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
      }
      else
      {
        v16 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v16[4] = (Il2CppClass *)v12;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v16 + 4), (int32_t)v12, v10, v11);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_QuestBoardListViewObject__o *)v3;
}


AssetData_o *__fastcall QuestBoardListViewManager__get_RoadmapAssetData(
        QuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields._RoadmapAssetData_k__BackingField;
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
    sub_1B8880C(mFolderBg, method);
  }
  return UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)mFolderBg, 0LL);
}


void __fastcall QuestBoardListViewManager__set_IndexFirstDisplayableRoadmapButton(
        QuestBoardListViewManager_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._IndexFirstDisplayableRoadmapButton_k__BackingField = value;
}


void __fastcall QuestBoardListViewManager__set_IsShowingInfo(
        QuestBoardListViewManager_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsShowingInfo_k__BackingField = value;
}


void __fastcall QuestBoardListViewManager__set_RoadmapAssetData(
        QuestBoardListViewManager_o *this,
        AssetData_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._RoadmapAssetData_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._RoadmapAssetData_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall QuestBoardListViewManager__set_SyncReferenceTime(
        QuestBoardListViewManager_o *this,
        float value,
        const MethodInfo *method)
{
  this->fields._SyncReferenceTime_k__BackingField = value;
}


void __fastcall QuestBoardListViewManager__CoroutineLoadAsset_d__153___ctor(
        QuestBoardListViewManager__CoroutineLoadAsset_d__153_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall QuestBoardListViewManager__CoroutineLoadAsset_d__153__MoveNext(
        QuestBoardListViewManager__CoroutineLoadAsset_d__153_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  QuestBoardListViewManager__CoroutineLoadAsset_d__153_o *v3; // x19
  int32_t _1__state; // w8
  struct QuestBoardListViewManager_o *_4__this; // x20
  Il2CppObject *v6; // x22
  struct QuestBoardListViewManager___c__DisplayClass153_0_o **p__8__1; // x21
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3
  Il2CppObject *v12; // x1
  int32_t v13; // w2
  int32_t v14; // w3
  struct QuestBoardListViewManager_o *onCompleteLoad; // x1
  EventEntity_array *EnableEntityList; // x22
  int max_length; // w8
  EventRewardSceneMaster_o *v18; // x23
  unsigned int v19; // w24
  EventEntity_o *v20; // x25
  const MethodInfo *v21; // x3
  struct QuestBoardListViewManager___c__DisplayClass153_0_o *_8__1; // x8
  RoadmapButtonPrefab_c *v23; // x0
  System_String_o *ASSET_DATA_PATH_ROADMAP; // x21
  struct QuestBoardListViewManager___c__DisplayClass153_0_o *v25; // x20
  RoadmapButtonPrefab_c *v26; // x0
  System_String_o *v27; // x21
  AssetLoader_LoadEndDataHandler_o *v28; // x22
  Il2CppObject *v29; // x20
  System_Func_bool__o *v30; // x21
  UnityEngine_WaitUntil_o *v31; // x20
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v33; // w2
  int32_t v34; // w3
  bool result; // w0
  Il2CppObject *v36; // x21
  AssetLoader_LoadEndDataHandler_o *v37; // x20
  struct QuestBoardListViewManager___c__DisplayClass153_0_o *v38; // x8
  struct QuestBoardListViewManager___c__DisplayClass153_0_o *v39; // x22
  System_Action_o *_9__4; // x23
  int32_t id; // w21
  int32_t v42; // w2
  int32_t v43; // w3
  Il2CppObject *v44; // x20
  System_Func_bool__o *v45; // x21
  UnityEngine_WaitUntil_o *v46; // x20
  ServantStatusBattleListViewItem_o *v47; // x19
  int32_t v48; // w2
  int32_t v49; // w3

  v3 = this;
  if ( (byte_4A58133 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_EventMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_EventRewardSceneMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&System_Func_bool__TypeInfo);
    sub_1B885B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1B885B0(&RoadmapButtonPrefab_TypeInfo);
    sub_1B885B0(&Method_QuestBoardListViewManager___c__DisplayClass153_0__CoroutineLoadAsset_b__0__);
    sub_1B885B0(&Method_QuestBoardListViewManager___c__DisplayClass153_0__CoroutineLoadAsset_b__1__);
    sub_1B885B0(&Method_QuestBoardListViewManager___c__DisplayClass153_0__CoroutineLoadAsset_b__2__);
    sub_1B885B0(&Method_QuestBoardListViewManager___c__DisplayClass153_0__CoroutineLoadAsset_b__3__);
    sub_1B885B0(&Method_QuestBoardListViewManager___c__DisplayClass153_0__CoroutineLoadAsset_b__4__);
    sub_1B885B0(&QuestBoardListViewManager___c__DisplayClass153_0_TypeInfo);
    sub_1B885B0(&UnityEngine_WaitUntil_TypeInfo);
    this = (QuestBoardListViewManager__CoroutineLoadAsset_d__153_o *)sub_1B885B0(&StringLiteral_13590/*"Terminal/Effect"*/);
    byte_4A58133 = 1;
  }
  _1__state = v3->fields.__1__state;
  _4__this = v3->fields.__4__this;
  if ( _1__state == 2 )
  {
    v3->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_51;
    method = (const MethodInfo *)_4__this->fields.effectAssetData;
    if ( method )
    {
      _8__1 = v3->fields.__8__1;
      if ( !_8__1 )
        goto LABEL_51;
      QuestBoardListViewManager__OnCompleteAssetData(_4__this, (AssetData_o *)method, _8__1->fields.onCompleteLoad, v2);
    }
    else
    {
      v36 = (Il2CppObject *)v3->fields.__8__1;
      v37 = (AssetLoader_LoadEndDataHandler_o *)sub_1B887FC(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v37,
        v36,
        Method_QuestBoardListViewManager___c__DisplayClass153_0__CoroutineLoadAsset_b__3__,
        0LL);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      this = (QuestBoardListViewManager__CoroutineLoadAsset_d__153_o *)AssetManager__loadAssetStorage(
                                                                         (System_String_o *)StringLiteral_13590/*"Terminal/Effect"*/,
                                                                         v37,
                                                                         1,
                                                                         0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        v38 = v3->fields.__8__1;
        if ( !v38 )
          goto LABEL_51;
        ActionExtensions__Call(v38->fields.onCompleteLoad, 0LL);
      }
    }
    return 0;
  }
  if ( _1__state == 1 )
  {
    v3->fields.__1__state = -1;
    v23 = RoadmapButtonPrefab_TypeInfo;
    if ( !RoadmapButtonPrefab_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(RoadmapButtonPrefab_TypeInfo);
      v23 = RoadmapButtonPrefab_TypeInfo;
    }
    ASSET_DATA_PATH_ROADMAP = v23->static_fields->ASSET_DATA_PATH_ROADMAP;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    this = (QuestBoardListViewManager__CoroutineLoadAsset_d__153_o *)AssetManager__isExistAssetStorage(
                                                                       ASSET_DATA_PATH_ROADMAP,
                                                                       0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !_4__this )
        goto LABEL_51;
      if ( !_4__this->fields._RoadmapAssetData_k__BackingField )
      {
        v25 = v3->fields.__8__1;
        if ( !v25 )
          goto LABEL_51;
        v25->fields.flag = 0;
        v26 = RoadmapButtonPrefab_TypeInfo;
        if ( !RoadmapButtonPrefab_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(RoadmapButtonPrefab_TypeInfo);
          v26 = RoadmapButtonPrefab_TypeInfo;
          v25 = v3->fields.__8__1;
        }
        v27 = v26->static_fields->ASSET_DATA_PATH_ROADMAP;
        v28 = (AssetLoader_LoadEndDataHandler_o *)sub_1B887FC(AssetLoader_LoadEndDataHandler_TypeInfo);
        AssetLoader_LoadEndDataHandler___ctor(
          v28,
          (Il2CppObject *)v25,
          Method_QuestBoardListViewManager___c__DisplayClass153_0__CoroutineLoadAsset_b__1__,
          0LL);
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        AssetManager__loadAssetStorage(v27, v28, 1, 0LL);
      }
    }
    v29 = (Il2CppObject *)v3->fields.__8__1;
    v30 = (System_Func_bool__o *)sub_1B887FC(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(
      v30,
      v29,
      Method_QuestBoardListViewManager___c__DisplayClass153_0__CoroutineLoadAsset_b__2__,
      0LL);
    v31 = (UnityEngine_WaitUntil_o *)sub_1B887FC(UnityEngine_WaitUntil_TypeInfo);
    UnityEngine_WaitUntil___ctor(v31, v30, 0LL);
    v3->fields.__2__current = (Il2CppObject *)v31;
    p__2__current = (ServantStatusBattleListViewItem_o *)&v3->fields.__2__current;
    sub_1B88554(p__2__current, (int32_t)v31, v33, v34);
    *(_DWORD *)&p__2__current[-1].fields.isMine = 2;
    return 1;
  }
  if ( _1__state )
    return 0;
  v3->fields.__1__state = -1;
  v6 = (Il2CppObject *)sub_1B887FC(QuestBoardListViewManager___c__DisplayClass153_0_TypeInfo);
  System_Object___ctor(v6, 0LL);
  v3->fields.__8__1 = (struct QuestBoardListViewManager___c__DisplayClass153_0_o *)v6;
  p__8__1 = &v3->fields.__8__1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v3->fields.__8__1, (int32_t)v6, v8, v9);
  this = (QuestBoardListViewManager__CoroutineLoadAsset_d__153_o *)v3->fields.__8__1;
  if ( !this )
    goto LABEL_51;
  v12 = (Il2CppObject *)v3->fields.__4__this;
  this->fields.__2__current = v12;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.__2__current, (int32_t)v12, v10, v11);
  this = (QuestBoardListViewManager__CoroutineLoadAsset_d__153_o *)v3->fields.__8__1;
  if ( !this )
    goto LABEL_51;
  onCompleteLoad = (struct QuestBoardListViewManager_o *)v3->fields.onCompleteLoad;
  this->fields.__4__this = onCompleteLoad;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.__4__this, (int32_t)onCompleteLoad, v13, v14);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (QuestBoardListViewManager__CoroutineLoadAsset_d__153_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !this )
    goto LABEL_51;
  EnableEntityList = EventMaster__GetEnableEntityList((EventMaster_o *)this, 12, 1, 0LL);
  this = (QuestBoardListViewManager__CoroutineLoadAsset_d__153_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventRewardSceneMaster___);
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
        sub_1B88814(this, method);
      v20 = EnableEntityList->m_Items[v19];
      if ( !v20 || !v18 )
        goto LABEL_51;
      this = (QuestBoardListViewManager__CoroutineLoadAsset_d__153_o *)EventRewardSceneMaster__getEntityFromIdAndEventType(
                                                                         v18,
                                                                         v20->fields.id,
                                                                         15,
                                                                         0LL);
      if ( this )
        break;
      max_length = EnableEntityList->max_length;
      if ( (int)++v19 >= max_length )
        goto LABEL_50;
    }
    v39 = *p__8__1;
    if ( *p__8__1 )
    {
      _9__4 = v39->fields.__9__4;
      v39->fields.flag = 0;
      id = v20->fields.id;
      if ( !_9__4 )
      {
        _9__4 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
        System_Action___ctor(
          _9__4,
          (Il2CppObject *)v39,
          Method_QuestBoardListViewManager___c__DisplayClass153_0__CoroutineLoadAsset_b__4__,
          0LL);
        v39->fields.__9__4 = _9__4;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v39->fields.__9__4, (int32_t)_9__4, v42, v43);
      }
      if ( _4__this )
      {
        QuestBoardListViewManager__SetupFortificationWarningDialog(_4__this, id, _9__4, v21);
        goto LABEL_50;
      }
    }
LABEL_51:
    sub_1B8880C(this, method);
  }
LABEL_50:
  v44 = (Il2CppObject *)v3->fields.__8__1;
  v45 = (System_Func_bool__o *)sub_1B887FC(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v45,
    v44,
    Method_QuestBoardListViewManager___c__DisplayClass153_0__CoroutineLoadAsset_b__0__,
    0LL);
  v46 = (UnityEngine_WaitUntil_o *)sub_1B887FC(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v46, v45, 0LL);
  v3->fields.__2__current = (Il2CppObject *)v46;
  v47 = (ServantStatusBattleListViewItem_o *)&v3->fields.__2__current;
  sub_1B88554(v47, (int32_t)v46, v48, v49);
  result = 1;
  *(_DWORD *)&v47[-1].fields.isMine = 1;
  return result;
}


Il2CppObject *__fastcall QuestBoardListViewManager__CoroutineLoadAsset_d__153__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        QuestBoardListViewManager__CoroutineLoadAsset_d__153_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn QuestBoardListViewManager__CoroutineLoadAsset_d__153__System_Collections_IEnumerator_Reset(
        QuestBoardListViewManager__CoroutineLoadAsset_d__153_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_QuestBoardListViewManager__CoroutineLoadAsset_d__153_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
}


Il2CppObject *__fastcall QuestBoardListViewManager__CoroutineLoadAsset_d__153__System_Collections_IEnumerator_get_Current(
        QuestBoardListViewManager__CoroutineLoadAsset_d__153_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall QuestBoardListViewManager__CoroutineLoadAsset_d__153__System_IDisposable_Dispose(
        QuestBoardListViewManager__CoroutineLoadAsset_d__153_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestBoardListViewManager__WaitFinish_d__112___ctor(
        QuestBoardListViewManager__WaitFinish_d__112_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall QuestBoardListViewManager__WaitFinish_d__112__MoveNext(
        QuestBoardListViewManager__WaitFinish_d__112_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
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
      sub_1B8880C(this, method);
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
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.__2__current, 0, v2, v3);
    result = 1;
    *((_DWORD *)p__2__current - 2) = 1;
    return result;
  }
  return 0;
}


Il2CppObject *__fastcall QuestBoardListViewManager__WaitFinish_d__112__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        QuestBoardListViewManager__WaitFinish_d__112_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn QuestBoardListViewManager__WaitFinish_d__112__System_Collections_IEnumerator_Reset(
        QuestBoardListViewManager__WaitFinish_d__112_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_QuestBoardListViewManager__WaitFinish_d__112_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
}


Il2CppObject *__fastcall QuestBoardListViewManager__WaitFinish_d__112__System_Collections_IEnumerator_get_Current(
        QuestBoardListViewManager__WaitFinish_d__112_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall QuestBoardListViewManager__WaitFinish_d__112__System_IDisposable_Dispose(
        QuestBoardListViewManager__WaitFinish_d__112_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestBoardListViewManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A58128 & 1) == 0 )
  {
    sub_1B885B0(&QuestBoardListViewManager___c_TypeInfo);
    byte_4A58128 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(QuestBoardListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  QuestBoardListViewManager___c_TypeInfo->static_fields->__9 = (struct QuestBoardListViewManager___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)QuestBoardListViewManager___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
}


void __fastcall QuestBoardListViewManager___c___ctor(QuestBoardListViewManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestBoardListViewManager___c___CreateList_b__104_0(
        QuestBoardListViewManager___c_o *this,
        QuestBoardListViewItem_o *item,
        const MethodInfo *method)
{
  if ( !item )
    sub_1B8880C(this, 0LL);
  return QuestBoardListViewItem__IsDisplayableRoadmapButton(item, (const MethodInfo *)item);
}


bool __fastcall QuestBoardListViewManager___c___DisplayRoadmapButtonToTopWarBoard_b__106_0(
        QuestBoardListViewManager___c_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 methodPtr_low; // x9
  _QWORD *monitor; // x8
  __int64 v6; // x19
  QuestTree_o *Instance; // x0
  __int64 v8; // x1
  MapControl_WarInfo_o *WarInfoByWarID; // x0
  MapControl_WarInfo_o *v10; // x20
  bool IsClosedWar; // w19

  if ( (byte_4A58129 & 1) == 0 )
  {
    sub_1B885B0(&QuestBoardListViewItem_TypeInfo);
    sub_1B885B0(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_4A58129 = 1;
  }
  if ( !item )
    goto LABEL_12;
  methodPtr_low = LOBYTE(QuestBoardListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(item->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (QuestBoardListViewItem_c *)item->klass->_2.typeHierarchy[methodPtr_low - 1] != QuestBoardListViewItem_TypeInfo )
  {
    sub_1B88ACC(item);
    goto LABEL_15;
  }
  monitor = item[1].monitor;
  if ( monitor )
  {
    v6 = monitor[14];
    if ( v6 )
    {
      Instance = (QuestTree_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !Instance )
        goto LABEL_15;
      WarInfoByWarID = QuestTree__mfGetWarInfoByWarID(Instance, *(_DWORD *)(v6 + 20), 0LL);
      if ( WarInfoByWarID )
      {
        v10 = WarInfoByWarID;
        IsClosedWar = MapControl_WarInfo__IsClosedWar(WarInfoByWarID, 0LL);
        Instance = (QuestTree_o *)MapControl_WarInfo__GetMine(v10, 0LL);
        if ( Instance )
        {
          LOBYTE(monitor) = WarEntity__HasFlag((WarEntity_o *)Instance, 128, 0LL) && !IsClosedWar;
          return (unsigned __int8)monitor & 1;
        }
LABEL_15:
        sub_1B8880C(Instance, v8);
      }
    }
LABEL_12:
    LOBYTE(monitor) = 0;
  }
  return (unsigned __int8)monitor & 1;
}


bool __fastcall QuestBoardListViewManager___c___SetupBlackMark_b__155_0(
        QuestBoardListViewManager___c_o *this,
        WarEntity_o *entity,
        const MethodInfo *method)
{
  int32_t lastQuestId; // w19

  if ( (byte_4A5812A & 1) == 0 )
  {
    this = (QuestBoardListViewManager___c_o *)sub_1B885B0(&CondType_TypeInfo);
    byte_4A5812A = 1;
  }
  if ( !entity )
    sub_1B8880C(this, entity);
  if ( !WarEntity__IsBlackMarkWithClear(entity, 0LL) )
    return 0;
  lastQuestId = entity->fields.lastQuestId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestClear_37596684(lastQuestId, -1, 0, 0LL);
}


bool __fastcall QuestBoardListViewManager___c___SetupDisp_b__119_0(
        QuestBoardListViewManager___c_o *this,
        QuestBoardListViewItem_o *item,
        const MethodInfo *method)
{
  if ( !item )
    sub_1B8880C(this, 0LL);
  return QuestBoardListViewItem__IsDisplayableRoadmapButton(item, (const MethodInfo *)item);
}


bool __fastcall QuestBoardListViewManager___c___SetupWhiteMark_b__156_0(
        QuestBoardListViewManager___c_o *this,
        WarEntity_o *entity,
        const MethodInfo *method)
{
  int32_t lastQuestId; // w20

  if ( (byte_4A5812B & 1) == 0 )
  {
    this = (QuestBoardListViewManager___c_o *)sub_1B885B0(&CondType_TypeInfo);
    byte_4A5812B = 1;
  }
  if ( !entity )
    sub_1B8880C(this, entity);
  if ( !WarEntity__IsWhiteMarkWithClear(entity, 0LL) )
    return WarEntity__IsDispWhiteMarkUnderBoard(entity, 0LL);
  lastQuestId = entity->fields.lastQuestId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestClear_37596684(lastQuestId, -1, 0, 0LL) || WarEntity__IsDispWhiteMarkUnderBoard(entity, 0LL);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass121_0___ctor(
        QuestBoardListViewManager___c__DisplayClass121_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass121_0___RequestListObject_b__0(
        QuestBoardListViewManager___c__DisplayClass121_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  struct QuestBoardListViewManager_o *_4__this; // x0
  const MethodInfo *v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  const MethodInfo *v12; // x2
  float infoTime; // s8
  QuestBoardListViewManager_c *v14; // x0
  SlideFadeObject_o *v15; // x21
  float OUT_POS_OFS_X; // s9
  System_Action_o *v17; // x22
  const MethodInfo *v18; // x3

  if ( (byte_4A5812C & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
    sub_1B885B0(&QuestBoardListViewManager_TypeInfo);
    sub_1B885B0(&Method_QuestBoardListViewManager___c__DisplayClass121_1__RequestListObject_b__2__);
    sub_1B885B0(&QuestBoardListViewManager___c__DisplayClass121_1_TypeInfo);
    byte_4A5812C = 1;
  }
  v3 = sub_1B887FC(QuestBoardListViewManager___c__DisplayClass121_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  if ( !v3 )
    goto LABEL_14;
  *(_QWORD *)(v3 + 24) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 24), (int32_t)this, v6, v7);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)_4__this, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_2ED09A0 *)Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
  *(_QWORD *)(v3 + 16) = Component_object;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 16), (int32_t)Component_object, v10, v11);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  infoTime = 0.0;
  if ( !this->fields.isFadeOnTop && !_4__this->fields.mFaded )
    infoTime = _4__this->fields.infoTime;
  QuestBoardListViewManager__bgAlphaFade(_4__this, _4__this->fields.initMode, infoTime, v12);
  v14 = QuestBoardListViewManager_TypeInfo;
  v15 = *(SlideFadeObject_o **)(v3 + 16);
  if ( !QuestBoardListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestBoardListViewManager_TypeInfo);
  OUT_POS_OFS_X = QuestBoardListViewManager__get_OUT_POS_OFS_X((const MethodInfo *)v14);
  v17 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v17,
    (Il2CppObject *)v3,
    Method_QuestBoardListViewManager___c__DisplayClass121_1__RequestListObject_b__2__,
    0LL);
  if ( !v15
    || (SlideFadeObject__SlideIn_33739440(v15, OUT_POS_OFS_X, infoTime, 0.0, v17, 0LL),
        (_4__this = this->fields.__4__this) == 0LL)
    || (QuestBoardListViewManager__ResetAlphaAnimTime(_4__this, v5), (_4__this = this->fields.__4__this) == 0LL) )
  {
LABEL_14:
    sub_1B8880C(_4__this, v5);
  }
  QuestBoardListViewManager__ModifyAllRoadmapButtons(_4__this, 1, 1, v18);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass121_0___RequestListObject_b__1(
        QuestBoardListViewManager___c__DisplayClass121_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *_4__this; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v5; // x2
  struct QuestBoardListViewManager_o *v6; // x8
  SlideFadeObject_o *v7; // x20
  const MethodInfo *v8; // x5
  struct QuestBoardListViewManager_o *v9; // x20
  AvalonSceneManager_c *v10; // x8
  CommonUI_o *v11; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *_9__4; // x21
  int32_t v14; // w2
  int32_t v15; // w3
  System_Action_o *_9__5; // x22
  int32_t v17; // w2
  int32_t v18; // w3

  if ( (byte_4A5812D & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AvalonSceneManager_TypeInfo);
    sub_1B885B0(&Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_QuestBoardListViewManager___c__DisplayClass121_0__RequestListObject_b__4__);
    sub_1B885B0(&Method_QuestBoardListViewManager___c__DisplayClass121_0__RequestListObject_b__5__);
    byte_4A5812D = 1;
  }
  _4__this = (UnityEngine_Component_o *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_19;
  gameObject = UnityEngine_Component__get_gameObject(_4__this, 0LL);
  _4__this = (UnityEngine_Component_o *)GameObjectExtensions__SafeGetComponent_object_(
                                          gameObject,
                                          (const MethodInfo_2ED09A0 *)Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
  v6 = this->fields.__4__this;
  if ( !v6 )
    goto LABEL_19;
  v7 = (SlideFadeObject_o *)_4__this;
  QuestBoardListViewManager__bgAlphaFade(this->fields.__4__this, v6->fields.initMode, 0.0, v5);
  if ( !v7 )
    goto LABEL_19;
  SlideFadeObject__ResetPosition(v7, 0LL);
  v9 = this->fields.__4__this;
  if ( !v9 )
    goto LABEL_19;
  if ( v9->fields.mFaded )
  {
    v9->fields.mFaded = 0;
    _4__this = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
      _9__4 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(
        _9__4,
        (Il2CppObject *)this,
        Method_QuestBoardListViewManager___c__DisplayClass121_0__RequestListObject_b__4__,
        0LL);
      this->fields.__9__4 = _9__4;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.__9__4, (int32_t)_9__4, v14, v15);
    }
    if ( v11 )
    {
      CommonUI__maskFadein(v11, DEFAULT_FADE_TIME, _9__4, 0LL);
      goto LABEL_17;
    }
LABEL_19:
    sub_1B8880C(_4__this, method);
  }
  _9__5 = this->fields.__9__5;
  if ( !_9__5 )
  {
    _9__5 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__5,
      (Il2CppObject *)this,
      Method_QuestBoardListViewManager___c__DisplayClass121_0__RequestListObject_b__5__,
      0LL);
    this->fields.__9__5 = _9__5;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.__9__5, (int32_t)_9__5, v17, v18);
  }
  QuestBoardListViewManager__SetMode(v9, 2, _9__5, 0, 0, v8);
LABEL_17:
  _4__this = (UnityEngine_Component_o *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_19;
  QuestBoardListViewManager__ResetAlphaAnimTime((QuestBoardListViewManager_o *)_4__this, method);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass121_0___RequestListObject_b__10(
        QuestBoardListViewManager___c__DisplayClass121_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.end_act, 0LL);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass121_0___RequestListObject_b__3(
        QuestBoardListViewManager___c__DisplayClass121_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( !this->fields.__4__this )
    sub_1B8880C(this, method);
  QuestBoardListViewManager__EndSlideIn(this->fields.__4__this, this->fields.end_act, this->fields.isNotInit, v2);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass121_0___RequestListObject_b__4(
        QuestBoardListViewManager___c__DisplayClass121_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x5
  QuestBoardListViewManager___c__DisplayClass121_0_o *v3; // x19
  System_Action_o *_9__6; // x21
  QuestBoardListViewManager_o *_4__this; // x20
  int32_t v6; // w2
  int32_t v7; // w3

  v3 = this;
  if ( (byte_4A5812E & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    this = (QuestBoardListViewManager___c__DisplayClass121_0_o *)sub_1B885B0(&Method_QuestBoardListViewManager___c__DisplayClass121_0__RequestListObject_b__6__);
    byte_4A5812E = 1;
  }
  _9__6 = v3->fields.__9__6;
  _4__this = v3->fields.__4__this;
  if ( !_9__6 )
  {
    _9__6 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__6,
      (Il2CppObject *)v3,
      Method_QuestBoardListViewManager___c__DisplayClass121_0__RequestListObject_b__6__,
      0LL);
    v3->fields.__9__6 = _9__6;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v3->fields.__9__6, (int32_t)_9__6, v6, v7);
  }
  if ( !_4__this )
    sub_1B8880C(this, method);
  QuestBoardListViewManager__SetMode(_4__this, 2, _9__6, 0, 0, v2);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass121_0___RequestListObject_b__5(
        QuestBoardListViewManager___c__DisplayClass121_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.end_act, 0LL);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass121_0___RequestListObject_b__6(
        QuestBoardListViewManager___c__DisplayClass121_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.end_act, 0LL);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass121_0___RequestListObject_b__8(
        QuestBoardListViewManager___c__DisplayClass121_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x5
  QuestBoardListViewManager___c__DisplayClass121_0_o *v3; // x19
  System_Action_o *_9__10; // x21
  QuestBoardListViewManager_o *_4__this; // x20
  int32_t v6; // w2
  int32_t v7; // w3

  v3 = this;
  if ( (byte_4A5812F & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    this = (QuestBoardListViewManager___c__DisplayClass121_0_o *)sub_1B885B0(&Method_QuestBoardListViewManager___c__DisplayClass121_0__RequestListObject_b__10__);
    byte_4A5812F = 1;
  }
  _9__10 = v3->fields.__9__10;
  _4__this = v3->fields.__4__this;
  if ( !_9__10 )
  {
    _9__10 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__10,
      (Il2CppObject *)v3,
      Method_QuestBoardListViewManager___c__DisplayClass121_0__RequestListObject_b__10__,
      0LL);
    v3->fields.__9__10 = _9__10;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v3->fields.__9__10, (int32_t)_9__10, v6, v7);
  }
  if ( !_4__this )
    sub_1B8880C(this, method);
  QuestBoardListViewManager__SetMode(_4__this, 2, _9__10, 0, 0, v2);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass121_0___RequestListObject_b__9(
        QuestBoardListViewManager___c__DisplayClass121_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.end_act, 0LL);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass121_1___ctor(
        QuestBoardListViewManager___c__DisplayClass121_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass121_1___RequestListObject_b__2(
        QuestBoardListViewManager___c__DisplayClass121_1_o *this,
        const MethodInfo *method)
{
  SlideFadeObject_o *sfo; // x0
  const MethodInfo *v4; // x3
  struct QuestBoardListViewManager___c__DisplayClass121_0_o *CS___8__locals1; // x8
  AvalonSceneManager_c *v6; // x8
  CommonUI_o *v7; // x20
  struct QuestBoardListViewManager___c__DisplayClass121_0_o *v8; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *_9__3; // x21
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_4A58130 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AvalonSceneManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_QuestBoardListViewManager___c__DisplayClass121_0__RequestListObject_b__3__);
    byte_4A58130 = 1;
  }
  sfo = this->fields.sfo;
  if ( !sfo )
    goto LABEL_15;
  SlideFadeObject__ResetPosition(sfo, 0LL);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_15;
  sfo = (SlideFadeObject_o *)CS___8__locals1->fields.__4__this;
  if ( !sfo )
    goto LABEL_15;
  if ( LOBYTE(sfo[4].fields.mInitPos.fields.y) )
  {
    LOBYTE(sfo[4].fields.mInitPos.fields.y) = 0;
    sfo = (SlideFadeObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
        _9__3 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
        System_Action___ctor(
          _9__3,
          (Il2CppObject *)v8,
          Method_QuestBoardListViewManager___c__DisplayClass121_0__RequestListObject_b__3__,
          0LL);
        v8->fields.__9__3 = _9__3;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v8->fields.__9__3, (int32_t)_9__3, v11, v12);
      }
      if ( v7 )
      {
        CommonUI__maskFadein(v7, DEFAULT_FADE_TIME, _9__3, 0LL);
        return;
      }
    }
LABEL_15:
    sub_1B8880C(sfo, method);
  }
  QuestBoardListViewManager__EndSlideIn(
    (QuestBoardListViewManager_o *)sfo,
    CS___8__locals1->fields.end_act,
    CS___8__locals1->fields.isNotInit,
    v4);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass121_2___ctor(
        QuestBoardListViewManager___c__DisplayClass121_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass121_2___RequestListObject_b__7(
        QuestBoardListViewManager___c__DisplayClass121_2_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct QuestBoardListViewManager___c__DisplayClass121_0_o *CS___8__locals2; // x9

  CS___8__locals2 = this->fields.CS___8__locals2;
  if ( !CS___8__locals2 || !CS___8__locals2->fields.__4__this )
    sub_1B8880C(this, method);
  QuestBoardListViewManager__SetSlideOut(
    CS___8__locals2->fields.__4__this,
    this->fields.time,
    CS___8__locals2->fields.end_act,
    v2);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass122_0___ctor(
        QuestBoardListViewManager___c__DisplayClass122_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass122_0___SetSlideOut_b__0(
        QuestBoardListViewManager___c__DisplayClass122_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1B8880C(this, method);
  QuestBoardListViewManager__EndSlideOut(this->fields.__4__this, this->fields.end_act, v2);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass124_0___ctor(
        QuestBoardListViewManager___c__DisplayClass124_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass124_0___EndSlideOut_b__0(
        QuestBoardListViewManager___c__DisplayClass124_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.end_act, 0LL);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass130_0___ctor(
        QuestBoardListViewManager___c__DisplayClass130_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass130_0___OnClickListView_b__0(
        QuestBoardListViewManager___c__DisplayClass130_0_o *this,
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
        this = (QuestBoardListViewManager___c__DisplayClass130_0_o *)ListViewObject__get_Index(this->fields.obj, 0LL),
        !mTerminalList) )
  {
    sub_1B8880C(this, method);
  }
  ScrTerminalListTop__Click_Area(mTerminalList, areaBoardInfo, (int32_t)this, 0, 0, 0LL);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass134_0___ctor(
        QuestBoardListViewManager___c__DisplayClass134_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass134_0___RequestToRaiseTutorialFlag_b__0(
        QuestBoardListViewManager___c__DisplayClass134_0_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  struct System_Action_o *clickAreaFunc; // x8

  clickAreaFunc = this->fields.clickAreaFunc;
  if ( !clickAreaFunc )
    sub_1B8880C(this, result);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))clickAreaFunc->fields.m_target)(
    clickAreaFunc->fields.original_method_info,
    *(_QWORD *)&clickAreaFunc->fields.extra_arg);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass153_0___ctor(
        QuestBoardListViewManager___c__DisplayClass153_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestBoardListViewManager___c__DisplayClass153_0___CoroutineLoadAsset_b__0(
        QuestBoardListViewManager___c__DisplayClass153_0_o *this,
        const MethodInfo *method)
{
  return this->fields.flag;
}


void __fastcall QuestBoardListViewManager___c__DisplayClass153_0___CoroutineLoadAsset_b__1(
        QuestBoardListViewManager___c__DisplayClass153_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  int32_t v3; // w3
  ServantStatusBattleListViewItem_o *_4__this; // x8

  _4__this = (ServantStatusBattleListViewItem_o *)this->fields.__4__this;
  if ( !_4__this )
    sub_1B8880C(this, data);
  _4__this[3].klass = (ServantStatusBattleListViewItem_c *)data;
  sub_1B88554(_4__this + 3, (int32_t)data, (int32_t)method, v3);
  this->fields.flag = 1;
}


bool __fastcall QuestBoardListViewManager___c__DisplayClass153_0___CoroutineLoadAsset_b__2(
        QuestBoardListViewManager___c__DisplayClass153_0_o *this,
        const MethodInfo *method)
{
  return this->fields.flag;
}


void __fastcall QuestBoardListViewManager___c__DisplayClass153_0___CoroutineLoadAsset_b__3(
        QuestBoardListViewManager___c__DisplayClass153_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( !this->fields.__4__this )
    sub_1B8880C(this, data);
  QuestBoardListViewManager__OnCompleteAssetData(this->fields.__4__this, data, this->fields.onCompleteLoad, v3);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass153_0___CoroutineLoadAsset_b__4(
        QuestBoardListViewManager___c__DisplayClass153_0_o *this,
        const MethodInfo *method)
{
  this->fields.flag = 1;
}


void __fastcall QuestBoardListViewManager___c__DisplayClass157_0___ctor(
        QuestBoardListViewManager___c__DisplayClass157_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass157_0___SetupFortificationWarningDialog_b__0(
        QuestBoardListViewManager___c__DisplayClass157_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  QuestBoardListViewManager___c__DisplayClass157_0_o *v4; // x19
  int32_t v5; // w2
  int32_t v6; // w3
  struct QuestBoardListViewManager_o *_4__this; // x8
  Il2CppObject *v8; // x21
  struct QuestBoardListViewManager_o *v9; // x20
  UnityEngine_Transform_o *transform; // x22
  Il2CppObject *v11; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  struct QuestBoardListViewManager_o *v14; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct QuestBoardListViewManager_o *v16; // x8
  UnityEngine_GameObject_o *v17; // x0
  struct QuestBoardListViewManager_o *v18; // x8

  v4 = this;
  if ( (byte_4A58131 & 1) == 0 )
  {
    sub_1B885B0(&Method_AssetData_GetObject_GameObject____76085352);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_FortificationWarningDialogComponent___);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject____76171952);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    this = (QuestBoardListViewManager___c__DisplayClass157_0_o *)sub_1B885B0(&StringLiteral_6803/*"FortificationWarningDialog"*/);
    byte_4A58131 = 1;
  }
  if ( !assetData )
    goto LABEL_17;
  this = (QuestBoardListViewManager___c__DisplayClass157_0_o *)AssetData__GetObject_object__48635516(
                                                                 assetData,
                                                                 (System_String_o *)StringLiteral_6803/*"FortificationWarningDialog"*/,
                                                                 (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_17;
  v8 = (Il2CppObject *)this;
  _4__this->fields.fortificationAssetData = assetData;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&_4__this->fields.fortificationAssetData, (int32_t)assetData, v5, v6);
  v9 = v4->fields.__4__this;
  if ( !v9 )
    goto LABEL_17;
  this = (QuestBoardListViewManager___c__DisplayClass157_0_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)v4->fields.__4__this,
                                                                 0LL);
  if ( !this )
    goto LABEL_17;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v11 = UnityEngine_Object__Instantiate_object__49297800(
          v8,
          transform,
          (const MethodInfo_2F03988 *)Method_UnityEngine_Object_Instantiate_GameObject____76171952);
  v9->fields.fortificationWarningDialog = (struct UnityEngine_GameObject_o *)v11;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v9->fields.fortificationWarningDialog, (int32_t)v11, v12, v13);
  v14 = v4->fields.__4__this;
  if ( !v14 )
    goto LABEL_17;
  this = (QuestBoardListViewManager___c__DisplayClass157_0_o *)v14->fields.fortificationWarningDialog;
  if ( !this )
    goto LABEL_17;
  gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)this, 0LL);
  GameObjectExtensions__ResetPosition(gameObject, 0LL);
  v16 = v4->fields.__4__this;
  if ( !v16
    || (this = (QuestBoardListViewManager___c__DisplayClass157_0_o *)v16->fields.fortificationWarningDialog) == 0LL
    || (v17 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)this, 0LL),
        GameObjectExtensions__ResetLocalScale(v17, 0LL),
        (v18 = v4->fields.__4__this) == 0LL)
    || (this = (QuestBoardListViewManager___c__DisplayClass157_0_o *)v18->fields.fortificationWarningDialog) == 0LL
    || (this = (QuestBoardListViewManager___c__DisplayClass157_0_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                       (UnityEngine_GameObject_o *)this,
                                                                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_FortificationWarningDialogComponent___)) == 0LL )
  {
LABEL_17:
    sub_1B8880C(this, assetData);
  }
  FortificationWarningDialogComponent__Init((FortificationWarningDialogComponent_o *)this, 0LL);
  ActionExtensions__Call(v4->fields.func, 0LL);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass174_0___ctor(
        QuestBoardListViewManager___c__DisplayClass174_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass174_0___PlayBoardEffect_b__0(
        QuestBoardListViewManager___c__DisplayClass174_0_o *this,
        const MethodInfo *method)
{
  System_Action_o *playingCallback1; // x0

  playingCallback1 = this->fields.playingCallback1;
  if ( playingCallback1 )
    ActionExtensions__Call(playingCallback1, 0LL);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass174_0___PlayBoardEffect_b__1(
        QuestBoardListViewManager___c__DisplayClass174_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *effectComponent; // x0
  UnityEngine_Object_o *gameObject; // x21
  int32_t v5; // w2
  int32_t v6; // w3
  System_Action_o *endAct; // x0

  if ( (byte_4A58132 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A58132 = 1;
  }
  effectComponent = (UnityEngine_Component_o *)this->fields.effectComponent;
  if ( !effectComponent )
    sub_1B8880C(0LL, method);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(effectComponent, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_69459380(gameObject, 0LL);
  this->fields.effectComponent = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.effectComponent, 0, v5, v6);
  endAct = this->fields.endAct;
  if ( endAct )
    ActionExtensions__Call(endAct, 0LL);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass176_0___ctor(
        QuestBoardListViewManager___c__DisplayClass176_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass176_0___MoveBoard_b__0(
        QuestBoardListViewManager___c__DisplayClass176_0_o *this,
        const MethodInfo *method)
{
  struct MoveObject_o *mo; // x8

  mo = this->fields.mo;
  if ( !mo )
    sub_1B8880C(this, method);
  GameObjectExtensions__SetLocalPositionY(this->fields.tgtObj, mo->fields.mNow.fields.y, 0LL);
}


void __fastcall QuestBoardListViewManager___c__DisplayClass176_0___MoveBoard_b__1(
        QuestBoardListViewManager___c__DisplayClass176_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  struct QuestBoardListViewManager_o *_4__this; // x8

  GameObjectExtensions__SetLocalPositionY(this->fields.tgtObj, this->fields.tgtY, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B8880C(v3, v4);
  --_4__this->fields.waitCount;
}